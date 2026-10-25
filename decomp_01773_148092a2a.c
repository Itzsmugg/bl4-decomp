// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148092a2a FUN_148092a2a body=136 status=ok
// SIG undefined FUN_148092a2a(void)

code * FUN_148092a2a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148092ab2;
}



// FUNCTION 148092ab2 FUN_148092ab2 body=136 status=ok
// SIG undefined FUN_148092ab2(void)

code * FUN_148092ab2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumTriangles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148092b3a;
}



// FUNCTION 148092b3a FUN_148092b3a body=130 status=ok
// SIG undefined FUN_148092b3a(void)

undefined1 * FUN_148092b3a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumSections";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148092bbc;
}



// FUNCTION 148092bc0 FUN_148092bc0 body=23 status=ok
// SIG undefined FUN_148092bc0(void)

void FUN_148092bc0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148092bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148092bd8 FUN_148092bd8 body=29 status=ok
// SIG undefined FUN_148092bd8(void)

undefined8 FUN_148092bd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148092bf6 FUN_148092bf6 body=54 status=ok
// SIG undefined FUN_148092bf6(void)

longlong FUN_148092bf6(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148092dfa FUN_148092dfa body=870 status=ok
// SIG undefined FUN_148092dfa(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148092dfa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint3 uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined2 local_fa;
  undefined8 *local_f8;
  int6 local_f0;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  undefined2 local_da;
  undefined8 *local_d8;
  char acStack_cc [2];
  undefined8 local_d0;
  undefined2 auStack_ca [25];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  int6 iStack_78;
  undefined2 uStack_72;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar11 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar11 + 0x68) != *(int *)(lVar11 + 0x94)) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar8 = lVar11 + 0x98;
    if (*(longlong *)(lVar11 + 0xa0) != 0) {
      lVar8 = *(longlong *)(lVar11 + 0xa0);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar11 + 0xa8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar8 = *(longlong *)(lVar11 + 0x60) + (longlong)iVar6 * 0x130;
        if (*(longlong *)(*(longlong *)(lVar11 + 0x60) + (longlong)iVar6 * 0x130) == lVar1)
        goto LAB_148092e3b;
        iVar6 = *(int *)(lVar8 + 0x128);
      } while (iVar6 != -1);
    }
  }
  lVar8 = 0;
LAB_148092e3b:
  local_98 = 0x400000000;
  uVar2 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (undefined8 *)0x0;
  _iStack_78 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0xffffffff;
  local_4a = 0;
  iVar6 = *(int *)(lVar8 + 0x54);
  puVar5 = &DAT_14ca8c0b0;
  local_f8 = &DAT_14ca8c098;
  if (iVar6 == -1) {
    iVar6 = 0;
    local_108 = &DAT_14ca8c098;
    local_fb = 0;
    puVar9 = &DAT_14ca8c0b0;
  }
  else {
    local_108 = (undefined8 *)(lVar8 + 0xa8);
    puVar9 = (undefined8 *)(lVar8 + 0xc0);
    local_fb = 0xc;
  }
  local_70 = *puVar9;
  local_100 = 0;
  local_fc = (undefined1)iVar6;
  local_fa = 3;
  if (*(int *)(lVar8 + 0x58) == -1) {
    local_db = 0;
  }
  else {
    local_f8 = (undefined8 *)(lVar8 + 0xa8);
    uVar2 = 8;
    puVar5 = (undefined8 *)(lVar8 + 200);
    local_db = 8;
  }
  uStack_68 = *puVar5;
  _local_f0 = CONCAT17(4,CONCAT16(5,(uint6)uVar2 << 0x28));
  local_e0 = 0;
  local_dc = 0;
  local_da = 0x405;
  local_e8 = local_f8;
  if (*(int *)(lVar8 + 0x5c) == -1) {
    local_4c = 0xff;
    local_98 = 0x400000001;
    local_d8 = &DAT_14ca8c098;
    local_d0 = 0x402000000000000;
    puVar5 = &DAT_14ca8c0b0;
  }
  else {
    local_4c = CONCAT11(*(undefined1 *)(lVar8 + 0x14),0xff);
    uVar7 = *(uint *)(lVar8 + 0x14);
    if (uVar7 != 0) {
      uVar10 = 0;
      do {
        lVar11 = (longlong)(int)local_98;
        uVar3 = (int)local_98 + 1;
        local_98 = CONCAT44(local_98._4_4_,uVar3);
        if (local_98._4_4_ < uVar3) {
          FUN_14472d7dc();
        }
        (&local_d8)[lVar11 * 2] = (undefined8 *)(lVar8 + 0xa8);
        *(undefined4 *)(&stack0xffffffffffffff30 + lVar11 * 2) = 0;
        acStack_cc[lVar11 * 0x10] = 0;
        acStack_cc[lVar11 * 0x10 + 1] = (char)uVar7 << 3;
        ((undefined2 *)((longlong)register0x00000020 + 0xffffffffffffff36))[lVar11 * 8] = 0x402;
        uVar10 = uVar10 + 1;
        uVar7 = *(uint *)(lVar8 + 0x14);
      } while (uVar10 < uVar7);
    }
    puVar5 = (undefined8 *)(lVar8 + 0xd0);
  }
  local_60 = *puVar5;
  if (*(int *)(lVar8 + 0x60) == -1) {
    puVar5 = &DAT_14ca94db0;
    local_80 = &DAT_14ca94d98;
    local_50 = 0;
    bVar4 = 0;
  }
  else {
    local_80 = (undefined8 *)(lVar8 + 0xa8);
    puVar5 = (undefined8 *)(lVar8 + 0xd8);
    bVar4 = 4;
    local_50 = 0xffffffff;
  }
  uStack_58 = *puVar5;
  _iStack_78 = CONCAT26(0x408,(uint6)bVar4 << 0x28);
  FUN_144aec7d4(param_3,param_2);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148093162 FUN_148093162 body=315 status=ok
// SIG undefined FUN_148093162(void)

void FUN_148093162(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar7 = *(longlong *)(param_1 + 0x20);
    lVar6 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar6 = *(longlong *)(lVar2 + 0x50);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar2 + 0x58) - 1U &
                             (int)lVar7 + (int)((ulonglong)lVar7 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0x18);
        if (*plVar1 == lVar7) {
          if ((plVar1 != (longlong *)0x0) && (lVar2 = plVar1[1], lVar2 != 0)) {
            iVar4 = *(int *)(lVar2 + 0x88);
            iVar5 = (int)param_2[1] + iVar4;
            if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar5);
            }
            if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
              FUN_1448831cc(param_2);
              iVar4 = *(int *)(lVar2 + 0x88);
            }
            if (iVar4 != 0) {
              lVar2 = *(longlong *)(lVar2 + 0x80);
              lVar7 = 0;
              do {
                uVar3 = *(undefined8 *)(lVar2 + lVar7);
                iVar5 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar5 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
                  FUN_144769b64(param_2,iVar5);
                }
                *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = uVar3;
                lVar7 = lVar7 + 0x40;
              } while ((longlong)iVar4 * 0x40 != lVar7);
            }
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  if ((int)param_2[1] == 0) {
    *(undefined4 *)(param_2 + 1) = 1;
    if (*(int *)((longlong)param_2 + 0xc) == 0) {
      FUN_144769b64(param_2,0);
    }
    *(undefined8 *)*param_2 = 0;
  }
  return;
}



// FUNCTION 1480932c6 FUN_1480932c6 body=167 status=ok
// SIG undefined FUN_1480932c6(void)

void FUN_1480932c6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148093341;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148093341;
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
LAB_148093341:
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
                    /* WARNING: Could not recover jumptable at 0x000148093361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148093372 FUN_148093372 body=51 status=ok
// SIG undefined FUN_148093372(void)

undefined8 FUN_148093372(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1481192e4();
  if ((cVar1 == '\0') || (*(int *)(param_2 + 0x38) != *(int *)(param_1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x3c) >> 8),
                     *(longlong *)(param_2 + 0x3c) == *(longlong *)(param_1 + 0x3c));
  }
  return uVar2;
}



// FUNCTION 1480933ca FUN_1480933ca body=148 status=ok
// SIG undefined FUN_1480933ca(void)

void FUN_1480933ca(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  if (*param_3 == 0) {
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_18 = 0;
  }
  else {
    FUN_1481c5d84(*param_3,&local_48);
  }
  param_2[6] = CONCAT71(uStack_17,local_18);
  *(undefined4 *)(param_2 + 4) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_38._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148093482 FUN_148093482 body=261 status=ok
// SIG undefined FUN_148093482(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148093482(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar8;
  ulonglong uVar7;
  
  lVar3 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar8 = lVar3 + 0x48;
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      lVar8 = *(longlong *)(lVar3 + 0x50);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar3 + 0x58) - 1U &
                             (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar8 = *(longlong *)(lVar3 + 0x10) + (longlong)iVar5 * 0x50;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar5 * 0x50) == lVar4)
        goto LAB_1480934de;
        iVar5 = *(int *)(lVar8 + 0x48);
      } while (iVar5 != -1);
    }
  }
  lVar8 = 0;
LAB_1480934de:
  uVar6 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar7 = (ulonglong)uVar6;
  FUN_1480b5990();
  *(uint *)(param_2 + 0x50) = uVar6 + _DAT_14cb38afc;
  lVar3 = *(longlong *)(param_2 + 0x38);
  *(uint *)(lVar3 + uVar7) = (uint)*(byte *)(lVar8 + 8);
  *(uint *)(lVar3 + 4 + uVar7) = (uint)*(byte *)(lVar8 + 0x40);
  dVar1 = *(double *)(lVar8 + 0x20);
  dVar2 = *(double *)(lVar8 + 0x18);
  *(float *)(lVar3 + 0x10 + uVar7) = (float)*(double *)(lVar8 + 0x10);
  *(float *)(lVar3 + 0x14 + uVar7) = (float)dVar2;
  *(float *)(lVar3 + 0x18 + uVar7) = (float)dVar1;
  dVar1 = *(double *)(lVar8 + 0x38);
  dVar2 = *(double *)(lVar8 + 0x30);
  *(float *)(lVar3 + 0x20 + uVar7) = (float)*(double *)(lVar8 + 0x28);
  *(float *)(lVar3 + 0x24 + uVar7) = (float)dVar2;
  *(float *)(lVar3 + 0x28 + uVar7) = (float)dVar1;
  return;
}



// FUNCTION 148093588 FUN_148093588 body=163 status=ok
// SIG undefined FUN_148093588(void)

void FUN_148093588(char *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  int *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c91cc0(local_20,param_1);
  FUN_140126e42(&local_30,param_1);
  piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar2 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar2) {
    iVar1 = 0;
    do {
      piVar2 = local_30 + local_28;
      *local_30 = -(uint)*(byte *)(local_18 + 8);
      iVar1 = iVar1 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = piVar2;
    } while (iVar1 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809362c FUN_14809362c body=531 status=ok
// SIG undefined FUN_14809362c(void)

void FUN_14809362c(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_b8 [32];
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140c91cc0(local_28,param_1);
  FUN_140126e42(&local_38,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_58,param_1);
  FUN_144a76c20(&local_48,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_78,param_1);
  lVar7 = *local_20;
  fVar12 = (float)DAT_14c846330;
  fVar13 = DAT_14c846330._4_4_;
  fVar14 = DAT_14c846338;
  fVar15 = DAT_14c846338;
  fVar16 = DAT_14c846330._4_4_;
  fVar17 = (float)DAT_14c846330;
  if (lVar7 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = -(uint)(*(char *)(lVar7 + 0x110) != '\0');
    if (*(char *)(lVar7 + 0x110) != '\0') {
      fVar12 = (float)*(double *)(lVar7 + 0xe0);
      fVar13 = (float)*(double *)(lVar7 + 0xe8);
      fVar14 = (float)*(double *)(lVar7 + 0xf0);
      fVar15 = (float)*(double *)(lVar7 + 0x108);
      fVar16 = (float)*(double *)(lVar7 + 0x100);
      fVar17 = (float)*(double *)(lVar7 + 0xf8);
    }
  }
  piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar10 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar10) {
    iVar9 = 0;
    do {
      piVar10 = local_38 + local_30;
      *local_38 = iVar8;
      pfVar1 = local_68 + local_60;
      *local_68 = fVar12;
      pfVar2 = local_58 + local_50;
      *local_58 = fVar13;
      pfVar3 = local_48 + local_40;
      *local_48 = fVar14;
      pfVar4 = local_98 + local_90;
      *local_98 = fVar17;
      pfVar5 = local_88 + local_80;
      *local_88 = fVar16;
      pfVar6 = local_78 + local_70;
      *local_78 = fVar15;
      iVar9 = iVar9 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_98 = pfVar4;
      local_88 = pfVar5;
      local_78 = pfVar6;
      local_68 = pfVar1;
      local_58 = pfVar2;
      local_48 = pfVar3;
      local_38 = piVar10;
    } while (iVar9 < *piVar11);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148093840 FUN_148093840 body=577 status=ok
// SIG undefined FUN_148093840(void)

void FUN_148093840(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  char local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140c91cc0(local_28,param_1);
  FUN_140126e42(&local_38,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_58,param_1);
  FUN_144a76c20(&local_48,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_78,param_1);
  if (*local_20 == 0) {
    iVar7 = 0;
    fVar11 = DAT_14c846338;
    fVar12 = DAT_14c846330._4_4_;
    fVar13 = (float)DAT_14c846330;
    fVar14 = (float)DAT_14c846330;
    fVar15 = DAT_14c846330._4_4_;
    fVar16 = DAT_14c846338;
  }
  else {
    FUN_1481c5d84(*local_20,&local_d0);
    iVar7 = -(uint)(local_a0 != '\0');
    fVar11 = DAT_14c846338;
    fVar12 = DAT_14c846330._4_4_;
    fVar13 = (float)DAT_14c846330;
    fVar14 = (float)DAT_14c846330;
    fVar15 = DAT_14c846330._4_4_;
    fVar16 = DAT_14c846338;
    if (local_a0 != '\0') {
      fVar11 = (float)local_c0;
      fVar12 = (float)local_c8;
      fVar13 = (float)local_d0;
      fVar14 = (float)local_b8;
      fVar15 = (float)local_b0;
      fVar16 = (float)local_a8;
    }
  }
  piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar9 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar8 = 0;
    do {
      piVar9 = local_38 + local_30;
      *local_38 = iVar7;
      pfVar1 = local_68 + local_60;
      *local_68 = fVar13;
      pfVar2 = local_58 + local_50;
      *local_58 = fVar12;
      pfVar3 = local_48 + local_40;
      *local_48 = fVar11;
      pfVar4 = local_98 + local_90;
      *local_98 = fVar14;
      pfVar5 = local_88 + local_80;
      *local_88 = fVar15;
      pfVar6 = local_78 + local_70;
      *local_78 = fVar16;
      iVar8 = iVar8 + 1;
      piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar10 = (int *)(param_1 + 0x3c);
      }
      local_98 = pfVar4;
      local_88 = pfVar5;
      local_78 = pfVar6;
      local_68 = pfVar1;
      local_58 = pfVar2;
      local_48 = pfVar3;
      local_38 = piVar9;
    } while (iVar8 < *piVar10);
  }
  if ((local_18 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148093a8e FUN_148093a8e body=297 status=ok
// SIG undefined FUN_148093a8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148093a8e(char *param_1)

{
  int *piVar1;
  int iVar2;
  PSRWLOCK SRWLock;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  byte *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148093bb8(local_38,param_1);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08();
  lVar6 = 0x7fffffff;
  if (_DAT_14ca84e48 < 0x7fffffff) {
    lVar6 = _DAT_14ca84e48;
  }
  SRWLock = (PSRWLOCK)(local_30 + 8);
  AcquireSRWLockExclusive(SRWLock);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar1 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    iVar3 = *(int *)(local_30 + 0x20);
    do {
      piVar1 = local_58 + local_48;
      iVar4 = *local_58;
      if ((int)lVar6 <= *local_58) {
        iVar4 = (int)lVar6;
      }
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      *local_30 = *local_30 | iVar3 != iVar4;
      *(int *)(local_30 + 0x20) = iVar4;
      iVar2 = iVar2 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_58 = piVar1;
      iVar3 = iVar4;
    } while (iVar2 < *piVar5);
  }
  if ((local_30[1] == 1) && (*(int *)(local_30 + 0x20) + 4 != *(int *)(local_30 + 0x18))) {
    FUN_1402d2c96(local_30 + 0x10,*(int *)(local_30 + 0x20) + 4,1);
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148093bb8 FUN_148093bb8 body=148 status=ok
// SIG undefined FUN_148093bb8(void)

void FUN_148093bb8(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 148093c4c FUN_148093c4c body=191 status=ok
// SIG undefined FUN_148093c4c(void)

void FUN_148093c4c(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148093bb8(local_28,param_1);
  FUN_144a76cd4(&local_38,param_1);
  SRWLock = (PSRWLOCK)(local_20 + 8);
  AcquireSRWLockShared(SRWLock);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = *(undefined4 *)(local_20 + 0x20);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_38 = puVar1;
    } while (iVar2 < *piVar3);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148093d0c FUN_148093d0c body=234 status=ok
// SIG undefined FUN_148093d0c(void)

ulonglong FUN_148093d0c(longlong param_1,undefined8 *param_2)

{
  size_t _Size;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      puVar5 = *(uint **)(param_1 + 0x28);
      puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0x30) * 4;
      _Size = (longlong)(int)uVar1 * 4;
      do {
        if (*puVar5 == uVar1) {
          uVar4 = (ulonglong)(int)puVar5[1];
          iVar3 = memcmp((void *)(uVar4 * 4 + *(longlong *)(param_1 + 0x38)),(void *)*param_2,_Size)
          ;
          if (iVar3 == 0) goto LAB_148093ddd;
        }
        if (puVar5[2] == uVar1) {
          uVar4 = (ulonglong)(int)puVar5[3];
          iVar3 = memcmp((void *)(uVar4 * 4 + *(longlong *)(param_1 + 0x38)),(void *)*param_2,_Size)
          ;
          if (iVar3 == 0) goto LAB_148093ddd;
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar6);
    }
    uVar2 = *(uint *)(param_1 + 0x40);
    uVar4 = (ulonglong)uVar2;
    *(uint *)(param_1 + 0x40) = uVar2 + uVar1;
    if (*(int *)(param_1 + 0x44) - uVar2 < uVar1) {
      FUN_1447808da((longlong *)(param_1 + 0x38),uVar2);
    }
    memcpy((void *)((longlong)(int)uVar2 * 4 + *(longlong *)(param_1 + 0x38)),(void *)*param_2,
           (longlong)*(int *)(param_2 + 1) << 2);
  }
LAB_148093ddd:
  return uVar4 & 0xffffffff;
}



// FUNCTION 148093df6 FUN_148093df6 body=714 status=ok
// SIG undefined FUN_148093df6(void)

void FUN_148093df6(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb38070) && (FUN_144b3d300(&DAT_14cb38070), DAT_14cb38070 == -1)) {
    local_50 = (longlong *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,2,0x10);
    *local_50 = (longlong)&PTR_LAB_14ad81180;
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
    local_50[2] = lVar2;
    *local_50 = (longlong)&PTR_FUN_14ad80f50;
    local_50[3] = (longlong)FUN_148093a8e;
    DAT_14cb38040 = DAT_14cb37fe8;
    DAT_14cb38048 = local_50;
    local_50 = (longlong *)0x0;
    DAT_14cb38050 = 2;
    local_48 = 0;
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,2,0x10);
    *local_60 = &PTR_LAB_14ad81180;
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
    local_60[2] = lVar2;
    *local_60 = &PTR_FUN_14ad80f50;
    local_60[3] = FUN_148093c4c;
    DAT_14cb38058 = DAT_14cb37ff0;
    DAT_14cb38060 = local_60;
    local_60 = (undefined8 *)0x0;
    DAT_14cb38068 = 2;
    local_58 = 0;
    FUN_1449db362();
    FUN_1449db362(&local_50);
    atexit(FUN_143910458);
    _Init_thread_footer(&DAT_14cb38070);
  }
  lVar1 = 0;
  do {
    if (*(longlong *)((longlong)&DAT_14cb38040 + lVar1) == *param_2) {
      plVar3 = (longlong *)((longlong)&DAT_14cb38048 + lVar1);
      goto LAB_148093ee4;
    }
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x30);
  FUN_1439104c3(&local_50);
  if ((longlong)local_48 != 0) {
    plVar3 = local_50;
    do {
      if (*param_2 == *plVar3) {
        lVar1 = 0x28;
LAB_148093f1f:
        plVar3 = (longlong *)((longlong)plVar3 + lVar1);
        goto LAB_148093ee4;
      }
      if (*param_2 == plVar3[1]) {
        lVar1 = 0x38;
        goto LAB_148093f1f;
      }
      plVar3 = plVar3 + 9;
    } while (plVar3 != local_50 + (longlong)local_48 * 9);
  }
  FUN_1439112a9(&local_50);
  if ((longlong)local_48 != 0) {
    plVar3 = local_50 + 1;
    lVar1 = (longlong)local_48 * 0x18;
    do {
      if (*param_2 == plVar3[-1]) goto LAB_148093ee4;
      plVar3 = plVar3 + 3;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
LAB_148093eec:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148093ee4:
  FUN_1412f8090(param_4,plVar3);
  goto LAB_148093eec;
}



// FUNCTION 1480940c8 FUN_1480940c8 body=296 status=ok
// SIG undefined FUN_1480940c8(void)

undefined8 FUN_1480940c8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 **local_88;
  undefined1 local_7c [4];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined8 *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined1 *)param_2 = 1;
  InitializeSRWLock((PSRWLOCK)(param_2 + 1));
  *(undefined1 *)((longlong)param_2 + 0x2c) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d) = 0;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x40);
  *(undefined1 *)((longlong)param_2 + 0x24) = *(undefined1 *)(param_1 + 0x44);
  local_98 = param_2;
  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    local_68 = 0;
    local_58 = &PTR_LAB_14ad88d40;
    local_78 = FUN_14391cf60;
    local_50 = param_2;
    FUN_141214220(param_1,param_3);
  }
  if ((*(char *)((longlong)param_2 + 1) == '\x01') &&
     (*(int *)(param_2 + 4) + 4 != *(int *)(param_2 + 3))) {
    FUN_1402d2c96(param_2 + 2,*(int *)(param_2 + 4) + 4,1);
  }
  if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
    *(undefined1 *)((longlong)param_2 + 2) = 1;
    local_a0 = *(undefined8 *)(param_3 + 0x100);
    local_90 = &local_a0;
    local_88 = &local_98;
    FUN_1480b5d96(*(longlong *)(param_1 + 0x28) + 0x68,local_7c);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480941f2 FUN_1480941f2 body=118 status=ok
// SIG undefined FUN_1480941f2(void)

undefined4 * FUN_1480941f2(undefined4 *param_1,char *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  *param_1 = *(undefined4 *)(param_2 + 0x20);
  bVar1 = param_2[0x24];
  *(byte *)(param_1 + 1) = bVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  if (*param_2 != '\x01') {
    return param_1;
  }
  if ((bVar1 & 0xfd) == 1) {
    FUN_1447bdc4c(param_1 + 4,param_2 + 0x10);
  }
  if (param_2 + 0x28 != (char *)(param_1 + 2)) {
    if (param_2[0x2c] == '\x01') {
      param_1[2] = *(undefined4 *)(param_2 + 0x28);
      uVar2 = 1;
    }
    else {
      if (*(char *)(param_1 + 3) != '\x01') goto LAB_148094249;
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + 3) = uVar2;
  }
LAB_148094249:
  if (param_2[0x2c] == '\x01') {
    param_2[0x2c] = '\0';
  }
  return param_1;
}



// FUNCTION 148094268 FUN_148094268 body=49 status=ok
// SIG undefined FUN_148094268(void)

undefined4 FUN_148094268(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1481192e4();
  if ((cVar1 == '\0') || (*(int *)(param_2 + 0x40) != *(int *)(param_1 + 0x40))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x40) >> 8),
                     *(char *)(param_2 + 0x44) == *(char *)(param_1 + 0x44));
  }
  return uVar2;
}



// FUNCTION 1480942de FUN_1480942de body=328 status=ok
// SIG undefined FUN_1480942de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480942de(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined2 local_38;
  undefined1 local_36;
  longlong local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_2[9];
  if (*(int *)(lVar1 + 0x20) != *(int *)(lVar1 + 0x4c)) {
    lVar2 = *(longlong *)(param_2[2] + 0x10);
    lVar5 = lVar1 + 0x50;
    if (*(longlong *)(lVar1 + 0x58) != 0) {
      lVar5 = *(longlong *)(lVar1 + 0x58);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar1 + 0x60) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar1 + 0x18) + (longlong)iVar4 * 0x50;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar4 * 0x50) == lVar2)
        goto LAB_148094349;
        iVar4 = *(int *)(lVar5 + 0x48);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_148094349:
  if (*(longlong *)(lVar5 + 0x18) == 0) {
    lVar1 = *param_2;
    local_30 = FUN_144735dd8(lVar1,lVar5 + 0x10,0);
    *(longlong *)(lVar5 + 0x18) = local_30;
    local_38 = 0;
    local_36 = 0;
    if ((*(byte *)(local_30 + 0x68) & 0x80) != 0) {
      local_38 = 0x1c;
    }
    local_48 = &local_21;
    local_21 = 0;
    uVar3 = FUN_144a23c98(lVar1 + 0x198,lVar1 + 0x70,local_30 + 8,&local_38);
    *(undefined8 *)(lVar5 + 0x20) = uVar3;
  }
  uVar6 = (int)param_2[10] + 0xfU & 0xfffffff0;
  FUN_1480b6bb6();
  *(uint *)(param_2 + 10) = uVar6 + _DAT_14cb38c14;
  lVar1 = param_2[7];
  *(undefined4 *)(lVar1 + (ulonglong)uVar6) = *(undefined4 *)(lVar5 + 8);
  *(undefined8 *)(lVar1 + 8 + (ulonglong)uVar6) = *(undefined8 *)(lVar5 + 0x20);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148094438 FUN_148094438 body=175 status=ok
// SIG undefined FUN_148094438(void)

undefined8 FUN_148094438(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b106cc();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480944e8 FUN_1480944e8 body=65 status=ok
// SIG undefined FUN_1480944e8(void)

void FUN_1480944e8(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1480b6ec2(param_1,iVar1);
  }
  FUN_1480b6eab((longlong)iVar1 * 0x10 + *param_1,param_2);
  return;
}



// FUNCTION 14809452a FUN_14809452a body=107 status=ok
// SIG undefined FUN_14809452a(void)

int * FUN_14809452a(int *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 1);
  *param_1 = iVar1;
  _Src = (void *)*param_2;
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 14809459e FUN_14809459e body=277 status=ok
// SIG undefined FUN_14809459e(void)

void FUN_14809459e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar1 = *(longlong *)(param_2[2] + 0x10);
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0xe950;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0xe950) == lVar1) {
          if ((longlong *)(lVar4 + 0x10) == (longlong *)0x0 || lVar4 == 0) {
            return;
          }
          lVar1 = *(longlong *)(lVar4 + 0x10);
          if (lVar1 == 0) {
            return;
          }
          if ((*(byte *)param_2[4] & 1) == 0) {
            return;
          }
          uVar2 = *(undefined8 *)(*param_2 + 0x18);
          FUN_1480946b3(uVar2,lVar4 + 0x60,lVar1 + 0x10);
          FUN_1480946b3(uVar2,lVar4 + 0x38a0,*(longlong *)(lVar4 + 0x10) + 0x28);
          FUN_14809479e(uVar2,lVar4 + 0xe160,*(longlong *)(lVar4 + 0x10) + 0x40);
          FUN_148094889(uVar2,lVar4 + 0xe7a0,*(longlong *)(lVar4 + 0x10) + 0x58);
          return;
        }
        iVar3 = *(int *)(lVar4 + 0xe940);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1480946b3 FUN_1480946b3 body=235 status=ok
// SIG undefined FUN_1480946b3(void)

void FUN_1480946b3(longlong param_1,void *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,1);
  }
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar2,0,0x3840,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,0);
  }
  memcpy(_Dst,param_2,0x3840);
  lVar2 = *param_3;
  if (*(char *)(param_1 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014809475b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar2);
    return;
  }
  FUN_14002049c(param_1,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar2);
  FUN_14002049c(param_1,0);
  return;
}



// FUNCTION 14809479e FUN_14809479e body=235 status=ok
// SIG undefined FUN_14809479e(void)

void FUN_14809479e(longlong param_1,void *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,1);
  }
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar2,0,0x640,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,0);
  }
  memcpy(_Dst,param_2,0x640);
  lVar2 = *param_3;
  if (*(char *)(param_1 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148094846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar2);
    return;
  }
  FUN_14002049c(param_1,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar2);
  FUN_14002049c(param_1,0);
  return;
}



// FUNCTION 148094889 FUN_148094889 body=235 status=ok
// SIG undefined FUN_148094889(void)

void FUN_148094889(longlong param_1,void *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,1);
  }
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar2,0,400,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,0);
  }
  memcpy(_Dst,param_2,400);
  lVar2 = *param_3;
  if (*(char *)(param_1 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148094931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar2);
    return;
  }
  FUN_14002049c(param_1,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar2);
  FUN_14002049c(param_1,0);
  return;
}



// FUNCTION 148094974 FUN_148094974 body=187 status=ok
// SIG undefined FUN_148094974(void)

undefined4 FUN_148094974(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if (((((cVar2 != '\0') && (*(int *)(param_2 + 0xa0) == *(int *)(param_1 + 0xa0))) &&
       (cVar2 = FUN_1480b7692(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_1 + 0x98)),
       cVar2 != '\0')) &&
      ((cVar2 = FUN_144a7afa6(param_2 + 0x48,param_1 + 0x48), cVar2 != '\0' &&
       (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x90))))) &&
     (cVar2 = FUN_1480b770b(*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_1 + 0x88)),
     cVar2 != '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((*(longlong *)(param_2 + 0x38) == lVar1) &&
       (*(longlong *)(param_1 + 0x68) == *(longlong *)(param_2 + 0x68))) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x70) >> 8),
                      *(int *)(param_1 + 0x70) == *(int *)(param_2 + 0x70));
    }
  }
  return 0;
}



// FUNCTION 148094ade FUN_148094ade body=202 status=ok
// SIG undefined FUN_148094ade(void)

void FUN_148094ade(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14ad87ce0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148094baa FUN_148094baa body=202 status=ok
// SIG undefined FUN_148094baa(void)

void FUN_148094baa(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14ad87d50;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148094c76 FUN_148094c76 body=202 status=ok
// SIG undefined FUN_148094c76(void)

void FUN_148094c76(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14ad87dc0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148094d42 FUN_148094d42 body=202 status=ok
// SIG undefined FUN_148094d42(void)

void FUN_148094d42(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14ad87e30;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148094e0e FUN_148094e0e body=202 status=ok
// SIG undefined FUN_148094e0e(void)

void FUN_148094e0e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14ad87ea0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148094eda FUN_148094eda body=202 status=ok
// SIG undefined FUN_148094eda(void)

void FUN_148094eda(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14ad87f10;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148094fa6 FUN_148094fa6 body=202 status=ok
// SIG undefined FUN_148094fa6(void)

void FUN_148094fa6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14ad87f80;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148095072 FUN_148095072 body=202 status=ok
// SIG undefined FUN_148095072(void)

void FUN_148095072(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14ad87ff0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809513e FUN_14809513e body=202 status=ok
// SIG undefined FUN_14809513e(void)

void FUN_14809513e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14ad88060;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809520a FUN_14809520a body=202 status=ok
// SIG undefined FUN_14809520a(void)

void FUN_14809520a(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14ad880d0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480952f8 FUN_1480952f8 body=462 status=ok
// SIG undefined FUN_1480952f8(void)

void FUN_1480952f8(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  
  lVar4 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar6 = lVar4 + 0x48;
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x50);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar4 + 0x58) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar5 * 0xe950;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar5 * 0xe950) == lVar3)
        goto LAB_148095354;
        iVar5 = *(int *)(lVar6 + 0xe940);
      } while (iVar5 != -1);
    }
  }
  lVar6 = 0;
LAB_148095354:
  uVar7 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_1480b781e();
  puVar8 = (undefined8 *)((ulonglong)uVar7 + *(longlong *)(param_2 + 0x38));
  *(uint *)(param_2 + 0x50) = DAT_14cb38cac + uVar7;
  lVar4 = DAT_14cb42830;
  if (((lVar6 == 0) || (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 == 0)) ||
     (*(int *)(lVar3 + 8) == -1)) {
    puVar8[2] = DAT_14cb42830;
    puVar8[3] = lVar4;
    puVar8[4] = DAT_14cb42830;
    puVar8[5] = DAT_14cb428f0;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[6] = DAT_14c846330;
    *(undefined4 *)(puVar8 + 7) = DAT_14c846338;
    puVar8[8] = DAT_14c846330;
    *(undefined4 *)(puVar8 + 9) = DAT_14c846338;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x18);
    if (*(longlong *)(lVar3 + 0x18) == 0) {
      lVar4 = DAT_14cb42830;
    }
    puVar8[2] = lVar4;
    lVar4 = *(longlong *)(lVar3 + 0x30);
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      lVar4 = DAT_14cb42830;
    }
    puVar8[3] = lVar4;
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(longlong *)(lVar3 + 0x48) == 0) {
      lVar4 = DAT_14cb42830;
    }
    puVar8[4] = lVar4;
    lVar4 = *(longlong *)(lVar3 + 0x60);
    if (*(longlong *)(lVar3 + 0x60) == 0) {
      lVar4 = DAT_14cb428f0;
    }
    puVar8[5] = lVar4;
    *(undefined4 *)puVar8 = *(undefined4 *)(lVar6 + 0x50);
    *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)(lVar6 + 0x54);
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar6 + 0x58);
    *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)(lVar6 + 0x5c);
    dVar1 = *(double *)(lVar6 + 0x28);
    dVar2 = *(double *)(lVar6 + 0x20);
    *(float *)(puVar8 + 6) = (float)*(double *)(lVar6 + 0x18);
    *(float *)((longlong)puVar8 + 0x34) = (float)dVar2;
    *(float *)(puVar8 + 7) = (float)dVar1;
    dVar1 = *(double *)(lVar6 + 0x40);
    dVar2 = *(double *)(lVar6 + 0x38);
    *(float *)(puVar8 + 8) = (float)*(double *)(lVar6 + 0x30);
    *(float *)((longlong)puVar8 + 0x44) = (float)dVar2;
    *(float *)(puVar8 + 9) = (float)dVar1;
  }
  return;
}



// FUNCTION 1480954c6 FUN_1480954c6 body=106 status=ok
// SIG undefined FUN_1480954c6(void)

void FUN_1480954c6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0 && param_3 != (undefined8 *)0x0) {
    *param_2 = *param_3;
    uVar1 = param_3[2];
    param_2[1] = param_3[1];
    param_2[2] = uVar1;
    param_2[3] = param_3[3];
    uVar1 = param_3[5];
    param_2[4] = param_3[4];
    param_2[5] = uVar1;
    param_2[6] = param_3[6];
    memcpy(param_2 + 8,param_3 + 8,0xe8e0);
    *(undefined4 *)(param_2 + 0x1d24) = *(undefined4 *)(param_3 + 0x1d24);
  }
  return;
}



// FUNCTION 148095530 FUN_148095530 body=392 status=ok
// SIG undefined FUN_148095530(void)

void FUN_148095530(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1457242e8(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar1 << 3);
  }
  FUN_1480956ba(local_28,local_30,&local_58);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480956ba FUN_1480956ba body=277 status=ok
// SIG undefined FUN_1480956ba(void)

void FUN_1480956ba(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = FUN_145a78bf4();
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_58);
    }
    local_50 = 1;
    local_4e = 0;
    local_4c = 0xffffffff;
    local_48 = param_2;
    local_40[0] = FUN_144830b78(local_40);
    local_38 = 0;
    uStack_30 = 0;
    lVar1 = FUN_1418342aa(param_1 + 0x678,&local_48);
    if (lVar1 != 0) {
      lVar2 = FUN_145a78bf4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_147ac84c0(lVar1 + 0xc0,param_3);
        *(int *)(lVar1 + 0xd0) = *(int *)(lVar1 + 0xd0) + 1;
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480957ea FUN_1480957ea body=230 status=ok
// SIG undefined FUN_1480957ea(void)

longlong FUN_1480957ea(char param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != '\x02') {
    uVar1 = *(uint *)(param_3 + 0xe0);
    if (((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
        ((int)uVar1 < *(int *)(*(longlong *)(param_3 + 0xe8) + 0x48))) &&
       (lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_3 + 0xe8) + 0x40) + (ulonglong)uVar1 * 8),
       lVar2 != 0)) {
      lVar3 = FUN_140bf2008();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        return lVar2;
      }
      lVar3 = FUN_145992394();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        return *(longlong *)(lVar2 + 0x3a0);
      }
    }
    if (param_1 == '\x01') {
      return 0;
    }
  }
  lVar2 = FUN_14479d2ce(param_2 + 0x48);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = FUN_140bf2008();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) break;
    lVar2 = *(longlong *)(lVar2 + 0x120);
  }
  return lVar2;
}



// FUNCTION 1480958d0 FUN_1480958d0 body=245 status=ok
// SIG undefined FUN_1480958d0(void)

void FUN_1480958d0(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  undefined4 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1480959c6(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  FUN_144a76cd4(&local_40,param_1);
  FUN_144a76cd4(&local_50,param_1);
  piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar5 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *local_18;
      puVar2 = local_40 + local_38;
      *local_40 = local_18[1];
      puVar3 = local_50 + local_48;
      *local_50 = local_18[2];
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar3;
      local_40 = puVar2;
      local_30 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480959c6 FUN_1480959c6 body=148 status=ok
// SIG undefined FUN_1480959c6(void)

void FUN_1480959c6(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 148095a5a FUN_148095a5a body=496 status=ok
// SIG undefined FUN_148095a5a(void)

void FUN_148095a5a(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
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
  int iVar18;
  int *piVar19;
  uint uVar20;
  float fVar21;
  undefined1 auStack_c8 [32];
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78 [2];
  int local_68;
  float *local_60;
  int local_50;
  float *local_48;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1480959c6(local_30,param_1);
  FUN_1405f76c0(local_78,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_88,param_1);
  piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar19 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar19) {
    iVar18 = 0;
    do {
      pfVar1 = local_48 + local_38;
      pfVar2 = local_60 + local_50;
      fVar7 = *local_48;
      pfVar3 = local_78[0] + local_68;
      fVar8 = *local_60;
      fVar9 = *local_78[0];
      fVar10 = *(float *)(local_28 + 0x54);
      fVar11 = *(float *)(local_28 + 0x58);
      fVar12 = *(float *)(local_28 + 100);
      fVar13 = *(float *)(local_28 + 0x68);
      fVar14 = *(float *)(local_28 + 0x74);
      fVar15 = *(float *)(local_28 + 0x78);
      fVar16 = *(float *)(local_28 + 0x84);
      fVar17 = *(float *)(local_28 + 0x88);
      fVar21 = fVar7 * *(float *)(local_28 + 0x7c) +
               fVar8 * *(float *)(local_28 + 0x6c) + fVar9 * *(float *)(local_28 + 0x5c) +
               *(float *)(local_28 + 0x8c);
      uVar20 = -(uint)(0.0 < fVar21);
      fVar21 = (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / fVar21) & uVar20);
      pfVar4 = local_a8 + local_a0;
      *local_a8 = fVar21 * (fVar7 * *(float *)(local_28 + 0x70) +
                            fVar8 * *(float *)(local_28 + 0x60) +
                            fVar9 * *(float *)(local_28 + 0x50) + *(float *)(local_28 + 0x80)) * 0.5
                  + 0.5;
      pfVar5 = local_98 + local_90;
      *local_98 = (fVar7 * fVar14 + fVar8 * fVar12 + fVar9 * fVar10 + fVar16) * fVar21 * -0.5 + 0.5;
      pfVar6 = local_88 + local_80;
      *local_88 = (fVar7 * fVar15 + fVar8 * fVar13 + fVar9 * fVar11 + fVar17) * fVar21;
      iVar18 = iVar18 + 1;
      piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar19 = (int *)(param_1 + 0x3c);
      }
      local_a8 = pfVar4;
      local_98 = pfVar5;
      local_88 = pfVar6;
      local_78[0] = pfVar3;
      local_60 = pfVar2;
      local_48 = pfVar1;
    } while (iVar18 < *piVar19);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148095c4b FUN_148095c4b body=516 status=ok
// SIG undefined FUN_148095c4b(void)

void FUN_148095c4b(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_e8 [32];
  float *local_c8;
  int local_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined8 *local_a8;
  int local_a0;
  float *local_98;
  undefined8 uStack_90;
  int local_88;
  float *local_78;
  undefined8 uStack_70;
  int local_68;
  float *local_60;
  undefined8 uStack_58;
  int local_50;
  undefined1 local_40 [8];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1480959c6(local_40,param_1);
  iVar11 = 0;
  local_68 = 0;
  local_78 = (float *)0x0;
  uStack_70 = 0;
  FUN_144a98dce(&local_78,param_1);
  local_50 = 0;
  local_60 = (float *)0x0;
  uStack_58 = 0;
  FUN_144a98dce(&local_60,param_1);
  local_88 = 0;
  local_98 = (float *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_a8,param_1);
  piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar10 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar10) {
    do {
      pfVar1 = local_60 + local_50;
      pfVar2 = local_78 + local_68;
      pfVar3 = local_98 + local_88;
      fVar15 = *local_98;
      fVar17 = *local_78 + -0.5 + *local_78 + -0.5;
      fVar16 = (*local_60 + -0.5) * -2.0;
      if (*(int *)(local_38 + 0xd0) == 0) {
        fVar17 = fVar17 * fVar15;
        fVar16 = fVar16 * fVar15;
      }
      fVar12 = fVar15 * *(float *)(local_38 + 0xb0) +
               fVar16 * *(float *)(local_38 + 0xa0) + fVar17 * *(float *)(local_38 + 0x90) +
               *(float *)(local_38 + 0xc0);
      fVar13 = fVar15 * *(float *)(local_38 + 0xb4) +
               fVar16 * *(float *)(local_38 + 0xa4) + fVar17 * *(float *)(local_38 + 0x94) +
               *(float *)(local_38 + 0xc4);
      fVar14 = fVar15 * *(float *)(local_38 + 0xb8) +
               fVar16 * *(float *)(local_38 + 0xa8) + fVar17 * *(float *)(local_38 + 0x98) +
               *(float *)(local_38 + 200);
      fVar15 = fVar15 * *(float *)(local_38 + 0xbc) +
               fVar16 * *(float *)(local_38 + 0xac) + fVar17 * *(float *)(local_38 + 0x9c) +
               *(float *)(local_38 + 0xcc);
      pfVar4 = local_c8 + local_c0;
      *local_c8 = fVar12;
      puVar5 = (undefined8 *)((longlong)local_b8 + (longlong)local_b0 * 4);
      auVar8._4_4_ = fVar13;
      auVar8._0_4_ = fVar12;
      auVar8._8_4_ = fVar14;
      auVar8._12_4_ = fVar15;
      uVar7 = extractps(auVar8,1);
      *local_b8 = uVar7;
      puVar6 = (undefined8 *)((longlong)local_a8 + (longlong)local_a0 * 4);
      auVar9._4_4_ = fVar13;
      auVar9._0_4_ = fVar12;
      auVar9._8_4_ = fVar14;
      auVar9._12_4_ = fVar15;
      uVar7 = extractps(auVar9,2);
      *local_a8 = uVar7;
      iVar11 = iVar11 + 1;
      piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar10 = (int *)(param_1 + 0x3c);
      }
      local_c8 = pfVar4;
      local_b8 = puVar5;
      local_a8 = puVar6;
      local_98 = pfVar3;
      local_78 = pfVar2;
      local_60 = pfVar1;
    } while (iVar11 < *piVar10);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148095e50 FUN_148095e50 body=481 status=ok
// SIG undefined FUN_148095e50(void)

void FUN_148095e50(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined1 auStack_b8 [40];
  undefined4 *local_90;
  int local_88;
  undefined4 *local_80;
  int local_78;
  undefined4 *local_70;
  int local_68;
  undefined4 *local_60;
  int local_58;
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1480959c6(local_20,param_1);
  FUN_144a76c20(&local_50,param_1);
  FUN_144a76c20(&local_40,param_1);
  FUN_144a76c20(&local_30,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_60,param_1);
  piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar12 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar12) {
    iVar11 = 0;
    do {
      uVar8 = *(undefined4 *)(local_18 + 0x128);
      uVar9 = *(undefined4 *)(local_18 + 300);
      puVar1 = local_50 + local_48;
      *local_50 = *(undefined4 *)(local_18 + 0x124);
      puVar2 = local_40 + local_38;
      *local_40 = uVar8;
      puVar3 = local_30 + local_28;
      *local_30 = uVar9;
      uVar8 = *(undefined4 *)(local_18 + 0x134);
      uVar9 = *(undefined4 *)(local_18 + 0x138);
      uVar10 = *(undefined4 *)(local_18 + 0x13c);
      puVar4 = local_90 + local_88;
      *local_90 = *(undefined4 *)(local_18 + 0x130);
      puVar5 = local_80 + local_78;
      *local_80 = uVar8;
      puVar6 = local_70 + local_68;
      *local_70 = uVar9;
      puVar7 = local_60 + local_58;
      *local_60 = uVar10;
      iVar11 = iVar11 + 1;
      piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar12 = (int *)(param_1 + 0x3c);
      }
      local_90 = puVar4;
      local_80 = puVar5;
      local_70 = puVar6;
      local_60 = puVar7;
      local_50 = puVar1;
      local_40 = puVar2;
      local_30 = puVar3;
    } while (iVar11 < *piVar12);
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148096032 FUN_148096032 body=830 status=ok
// SIG undefined FUN_148096032(void)

void FUN_148096032(byte *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined1 auStack_1b8 [39];
  byte local_191;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  byte *local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  byte *local_140;
  undefined4 *local_138;
  undefined8 uStack_130;
  int local_128;
  undefined4 *local_120;
  undefined8 uStack_118;
  int local_110;
  undefined4 *local_108;
  undefined8 uStack_100;
  int local_f8;
  undefined4 *local_f0;
  undefined8 uStack_e8;
  int local_e0;
  undefined4 *local_d0 [2];
  int local_c0;
  undefined4 *local_b8;
  int local_a8;
  undefined4 *local_a0;
  int local_90;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1480959c6(local_70,param_1);
  iVar11 = 0;
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_1);
  FUN_1405f76c0(local_d0,param_1);
  local_128 = 0;
  local_138 = (undefined4 *)0x0;
  uStack_130 = 0;
  FUN_144a98dce(&local_138,param_1);
  local_110 = 0;
  local_120 = (undefined4 *)0x0;
  uStack_118 = 0;
  FUN_144a98dce(&local_120,param_1);
  local_f8 = 0;
  local_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  FUN_144a98dce(&local_108,param_1);
  local_e0 = 0;
  local_f0 = (undefined4 *)0x0;
  uStack_e8 = 0;
  FUN_144a98dce(&local_f0,param_1);
  local_140 = param_1 + 0x3c;
  local_191 = *param_1;
  local_180 = *(longlong *)(param_1 + 0x80);
  pbVar7 = (byte *)(local_180 + 0x40);
  if (local_191 != 0) {
    pbVar7 = local_140;
  }
  if (0 < *(int *)pbVar7) {
    local_158 = (longlong)local_a8 * 4;
    local_150 = (longlong)local_90 * 4;
    local_148 = (longlong)local_78 * 4;
    local_160 = (longlong)local_c0 * 4;
    local_168 = (longlong)local_e0 * 4;
    local_170 = (longlong)local_f8 * 4;
    local_188 = (longlong)local_110 * 4;
    local_190 = (longlong)local_128 * 4;
    puVar8 = local_108;
    puVar9 = local_120;
    puVar10 = local_f0;
    puVar12 = local_b8;
    puVar13 = local_138;
    puVar14 = local_d0[0];
    puVar15 = local_a0;
    piVar16 = local_88;
    do {
      local_88 = piVar16 + local_78;
      local_a0 = puVar15 + local_90;
      uVar1 = *puVar15;
      local_b8 = puVar12 + local_a8;
      uVar2 = *puVar12;
      local_d0[0] = puVar14 + local_c0;
      local_f0 = puVar10 + local_e0;
      uVar3 = *puVar10;
      local_108 = puVar8 + local_f8;
      uVar4 = *puVar8;
      local_120 = puVar9 + local_110;
      uVar5 = *puVar9;
      local_138 = puVar13 + local_128;
      if (*piVar16 != 0) {
        uVar6 = *puVar13;
        *(undefined4 *)(local_68 + 0x124) = *puVar14;
        *(undefined4 *)(local_68 + 0x128) = uVar2;
        *(undefined4 *)(local_68 + 300) = uVar1;
        *(undefined4 *)(local_68 + 0x130) = uVar6;
        *(undefined4 *)(local_68 + 0x134) = uVar5;
        *(undefined4 *)(local_68 + 0x138) = uVar4;
        *(undefined4 *)(local_68 + 0x13c) = uVar3;
        *(undefined1 *)(local_68 + 0x121) = 1;
        local_191 = *param_1;
        local_180 = *(longlong *)(param_1 + 0x80);
      }
      iVar11 = iVar11 + 1;
      pbVar7 = (byte *)(local_180 + 0x40);
      if ((local_191 & 1) != 0) {
        pbVar7 = local_140;
      }
      puVar8 = local_108;
      puVar9 = local_120;
      puVar10 = local_f0;
      puVar12 = local_b8;
      puVar13 = local_138;
      puVar14 = local_d0[0];
      puVar15 = local_a0;
      piVar16 = local_88;
    } while (iVar11 < *(int *)pbVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
  local_178 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148096371 FUN_148096371 body=195 status=ok
// SIG undefined FUN_148096371(void)

void FUN_148096371(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1480959c6(local_28,param_1);
  local_48 = (int *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a76d88(&local_48,param_1);
  bVar1 = *param_1;
  lVar2 = *(longlong *)(param_1 + 0x80);
  pbVar3 = (byte *)(lVar2 + 0x40);
  if (bVar1 != 0) {
    pbVar3 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar3) {
    iVar5 = 0;
    piVar4 = local_48;
    do {
      local_48 = piVar4 + local_38;
      if (*piVar4 != 0) {
        *(undefined1 *)(local_20 + 0x120) = 1;
        bVar1 = *param_1;
        lVar2 = *(longlong *)(param_1 + 0x80);
      }
      iVar5 = iVar5 + 1;
      pbVar3 = (byte *)(lVar2 + 0x40);
      if ((bVar1 & 1) != 0) {
        pbVar3 = param_1 + 0x3c;
      }
      piVar4 = local_48;
    } while (iVar5 < *(int *)pbVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148096436 FUN_148096436 body=267 status=ok
// SIG undefined FUN_148096436(void)

undefined8 FUN_148096436(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    FUN_1447a122a(param_2 + 0x50,param_1 + 0x50);
    *(undefined1 *)(param_2 + 0xa0) = *(undefined1 *)(param_1 + 0xa0);
    *(undefined8 *)(param_2 + 0xa4) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined1 *)(param_2 + 0xac) = *(undefined1 *)(param_1 + 0xac);
    *(undefined1 *)(param_2 + 0xad) = *(undefined1 *)(param_1 + 0xad);
    *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined1 *)(param_2 + 0xb8) = *(undefined1 *)(param_1 + 0xb8);
    *(undefined1 *)(param_2 + 0xb9) = *(undefined1 *)(param_1 + 0xb9);
    FUN_1407f1ff6(param_2 + 0xc0,param_1 + 0xc0);
    *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_1 + 0x60);
    *(undefined1 *)(param_2 + 0x61) = *(undefined1 *)(param_1 + 0x61);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_2 + 0x70) = uVar2;
    *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_1 + 0x80);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_2 + 0x98) = uVar2;
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_2 + 0x90) = uVar1;
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 148096542 FUN_148096542 body=401 status=ok
// SIG undefined FUN_148096542(void)

byte FUN_148096542(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1481192e4();
  if (((((cVar1 != '\0') && (*(char *)(param_2 + 0x38) == *(char *)(param_1 + 0x38))) &&
       (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40))) &&
      (((*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48) &&
        (*(char *)(param_2 + 0xa0) == *(char *)(param_1 + 0xa0))) &&
       ((*(int *)(param_2 + 0xa4) == *(int *)(param_1 + 0xa4) &&
        ((*(int *)(param_2 + 0xa8) == *(int *)(param_1 + 0xa8) &&
         (*(char *)(param_2 + 0xac) == *(char *)(param_1 + 0xac))))))))) &&
     (*(char *)(param_2 + 0xad) == *(char *)(param_1 + 0xad))) {
    if ((*(float *)(param_2 + 0xb0) == *(float *)(param_1 + 0xb0)) &&
       (!NAN(*(float *)(param_2 + 0xb0)) && !NAN(*(float *)(param_1 + 0xb0)))) {
      if ((((*(float *)(param_2 + 0xb4) == *(float *)(param_1 + 0xb4)) &&
           ((((!NAN(*(float *)(param_2 + 0xb4)) && !NAN(*(float *)(param_1 + 0xb4)) &&
              (*(char *)(param_2 + 0xb8) == *(char *)(param_1 + 0xb8))) &&
             (*(char *)(param_2 + 0xb9) == *(char *)(param_1 + 0xb9))) &&
            ((*(int *)(param_2 + 200) == *(int *)(param_1 + 200) &&
             (cVar1 = FUN_1480b7dbb(*(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(param_1 + 0xc0))
             , cVar1 != '\0')))))) && (*(char *)(param_2 + 0x60) == *(char *)(param_1 + 0x60))) &&
         (*(char *)(param_2 + 0x61) == *(char *)(param_1 + 0x61))) {
        if ((*(double *)(param_2 + 0x68) == *(double *)(param_1 + 0x68)) &&
           (!NAN(*(double *)(param_2 + 0x68)) && !NAN(*(double *)(param_1 + 0x68)))) {
          if ((*(double *)(param_2 + 0x70) == *(double *)(param_1 + 0x70)) &&
             (!NAN(*(double *)(param_2 + 0x70)) && !NAN(*(double *)(param_1 + 0x70)))) {
            if (((*(double *)(param_2 + 0x78) == *(double *)(param_1 + 0x78)) &&
                (!NAN(*(double *)(param_2 + 0x78)) && !NAN(*(double *)(param_1 + 0x78)))) &&
               (*(char *)(param_2 + 0x80) == *(char *)(param_1 + 0x80))) {
              if ((*(double *)(param_2 + 0x88) == *(double *)(param_1 + 0x88)) &&
                 (!NAN(*(double *)(param_2 + 0x88)) && !NAN(*(double *)(param_1 + 0x88)))) {
                if ((*(double *)(param_2 + 0x90) == *(double *)(param_1 + 0x90)) &&
                   (!NAN(*(double *)(param_2 + 0x90)) && !NAN(*(double *)(param_1 + 0x90)))) {
                  return -(*(double *)(param_1 + 0x98) == *(double *)(param_2 + 0x98)) & 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1480966d4 FUN_1480966d4 body=951 status=ok
// SIG undefined FUN_1480966d4(void)

void FUN_1480966d4(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb38150) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar3;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_1480958d0;
  }
  else if (lVar1 == DAT_14cb38158) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar3;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_148095a5a;
  }
  else if (lVar1 == DAT_14cb38160) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar3;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_148095c4b;
  }
  else if (lVar1 == DAT_14cb38168) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar3;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_148095e50;
  }
  else if (lVar1 == DAT_14cb38170) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar3;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_148096032;
  }
  else {
    if (lVar1 != DAT_14cb38178) goto LAB_148096786;
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar3;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_148096371;
  }
  local_20 = 2;
  local_28[3] = pcVar2;
  FUN_144a450dc(param_4,&local_28);
  FUN_1449db362(&local_28);
LAB_148096786:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148096a92 FUN_148096a92 body=418 status=ok
// SIG undefined FUN_148096a92(void)

undefined8 FUN_148096a92(longlong param_1,void *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_84;
  undefined4 local_7c;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  memset(param_2,0,0x150);
  FUN_148096c36(param_2);
  *(undefined4 *)((longlong)param_2 + 0xd8) = *(undefined4 *)(param_1 + 0xd0);
  FUN_1404e5848((longlong)param_2 + 0xe0,param_3 + 0x1e8,param_1 + 0x40);
  dVar1 = *(double *)(param_3 + 0x68);
  dVar2 = *(double *)(param_3 + 0x60);
  dVar3 = *(double *)(param_3 + 0x58);
  dVar4 = *(double *)(param_3 + 0x50);
  local_a8 = *(undefined4 *)(param_3 + 0x70);
  uStack_a4 = *(undefined4 *)(param_3 + 0x74);
  uStack_a0 = *(undefined4 *)(param_3 + 0x78);
  uStack_9c = *(undefined4 *)(param_3 + 0x7c);
  local_98 = *(undefined8 *)(param_3 + 0x80);
  local_68 = (double)*(float *)(param_3 + 0x14) * 65536.0;
  local_70 = (double)*(float *)(param_3 + 0x10) * 65536.0;
  local_78 = (double)*(float *)(param_3 + 0xc) * 65536.0;
  FUN_1481f8bca(&local_78,&local_84);
  *(undefined4 *)((longlong)param_2 + 300) = local_7c;
  *(undefined8 *)((longlong)param_2 + 0x124) = local_84;
  *(float *)((longlong)param_2 + 0x130) = (float)dVar4;
  *(float *)((longlong)param_2 + 0x134) = (float)dVar3;
  *(float *)((longlong)param_2 + 0x138) = (float)dVar2;
  *(float *)((longlong)param_2 + 0x13c) = (float)dVar1;
  *(uint *)((longlong)param_2 + 0xd0) = (uint)*(byte *)(param_1 + 0xad);
  *(undefined4 *)((longlong)param_2 + 0x140) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((longlong)param_2 + 0x144) = *(undefined4 *)(param_1 + 0xb4);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148096c36 FUN_148096c36 body=321 status=ok
// SIG undefined FUN_148096c36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148096c36(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = _DAT_14c846288;
  param_1[8] = _DAT_14c846280;
  param_1[9] = uVar1;
  uVar1 = _DAT_14c846278;
  param_1[6] = _DAT_14c846270;
  param_1[7] = uVar1;
  uVar1 = _DAT_14c846268;
  param_1[4] = _DAT_14c846260;
  param_1[5] = uVar1;
  uVar1 = CONCAT44(DAT_14c846258._4_4_,(undefined4)DAT_14c846258);
  param_1[2] = CONCAT44(DAT_14c846254,DAT_14c846250);
  param_1[3] = uVar1;
  uVar1 = CONCAT44(DAT_14c846258._4_4_,(undefined4)DAT_14c846258);
  param_1[10] = CONCAT44(DAT_14c846254,DAT_14c846250);
  param_1[0xb] = uVar1;
  uVar1 = _DAT_14c846268;
  param_1[0xc] = _DAT_14c846260;
  param_1[0xd] = uVar1;
  uVar1 = _DAT_14c846278;
  param_1[0xe] = _DAT_14c846270;
  param_1[0xf] = uVar1;
  uVar1 = _DAT_14c846288;
  param_1[0x10] = _DAT_14c846280;
  param_1[0x11] = uVar1;
  uVar1 = _DAT_14c846268;
  param_1[0x14] = _DAT_14c846260;
  param_1[0x15] = uVar1;
  uVar1 = _DAT_14c846278;
  param_1[0x16] = _DAT_14c846270;
  param_1[0x17] = uVar1;
  uVar1 = _DAT_14c846288;
  param_1[0x18] = _DAT_14c846280;
  param_1[0x19] = uVar1;
  uVar3 = DAT_14c846258._4_4_;
  uVar2 = (undefined4)DAT_14c846258;
  uVar4 = DAT_14c846254;
  *(undefined4 *)(param_1 + 0x12) = DAT_14c846250;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  uVar4 = FUN_144830b78(param_1 + 0x1f,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0x1f) = uVar4;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 300) = DAT_14c846338;
  uVar1 = _DAT_14c846348;
  param_1[0x26] = ram0x00014c846340;
  param_1[0x27] = uVar1;
  param_1[0x28] = 0x4400000042b40000;
  return param_1;
}



// FUNCTION 148096d78 FUN_148096d78 body=2309 status=ok
// SIG undefined FUN_148096d78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_148096d78(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  longlong *plVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar19;
  undefined1 auVar18 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128 [4];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar4 = FUN_144729dda(param_2 + 0x118);
  if (cVar4 == '\0') {
    iVar6 = *(int *)(param_1 + 0xd0);
  }
  else {
    iVar6 = *(int *)(param_2 + 0xd8);
    uVar7 = 1;
    if (iVar6 != *(int *)(param_1 + 0xd0)) goto LAB_148096e20;
  }
  *(int *)(param_2 + 0xd8) = iVar6;
  *(undefined1 *)(param_2 + 0x120) = 0;
  *(undefined1 *)(param_2 + 0x121) = *(undefined1 *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x38) == '\x03') {
    *(undefined1 *)(param_2 + 0x120) = *(undefined1 *)(param_1 + 0xb8);
    local_128[0] = *(double *)(param_3 + 0x100);
    plVar8 = (longlong *)
             FUN_1480b7fe2((longlong *)(param_1 + 0xd8),
                           (int)((ulonglong)local_128[0] >> 0x20) * 0x17 + SUB84(local_128[0],0));
    plVar8 = (longlong *)*plVar8;
    if ((plVar8 == (longlong *)0x0) || ((*(uint *)(plVar8 + 1) >> 0x1e & 1) != 0)) {
      plVar8 = (longlong *)FUN_14809767e(DAT_14c951640);
      (**(code **)(*plVar8 + 0x3b0))(plVar8,0);
      *(undefined1 *)((longlong)plVar8 + 0x2a9) = *(undefined1 *)(param_1 + 0xa0);
      bVar1 = *(byte *)((longlong)plVar8 + 0x2aa);
      *(byte *)((longlong)plVar8 + 0x2aa) = bVar1 & 0xfe;
      *(byte *)((longlong)plVar8 + 0x2aa) = bVar1 & 0xfc | *(char *)(param_1 + 0xb9) * '\x02';
      *(undefined1 *)(plVar8 + 0x71) = *(undefined1 *)(param_1 + 0xad);
      *(undefined4 *)((longlong)plVar8 + 0x38c) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(plVar8 + 0x72) = *(undefined4 *)(param_1 + 0xb4);
      if (0 < *(int *)(param_1 + 200)) {
        FUN_1407f1ff6(plVar8 + 0x5c,param_1 + 0xc0);
        *(undefined1 *)(plVar8 + 0x55) = 2;
      }
      plVar15 = (longlong *)0x0;
      FUN_140b506dc(plVar8,*(undefined8 *)(param_3 + 0x30),0);
      *(undefined2 *)(param_2 + 0x120) = 0x101;
      if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
        lVar9 = *(longlong *)(param_3 + 0x100);
        lVar12 = param_1 + 0x110;
        if (*(longlong *)(param_1 + 0x118) != 0) {
          lVar12 = *(longlong *)(param_1 + 0x118);
        }
        iVar6 = *(int *)(lVar12 + (ulonglong)
                                  (*(int *)(param_1 + 0x120) - 1U &
                                  (int)lVar9 + (int)((ulonglong)lVar9 >> 0x20) * 0x17) * 4);
        if (iVar6 != -1) {
          do {
            plVar15 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
            if (*plVar15 == lVar9) goto LAB_1480975e4;
            iVar6 = (int)plVar15[2];
          } while (iVar6 != -1);
        }
        plVar15 = (longlong *)0x0;
      }
LAB_1480975e4:
      if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar8);
      }
      plVar15[1] = (longlong)plVar8;
    }
    if (plVar8[0x75] == 0) {
      lVar9 = FUN_1407635e4(param_1);
      *(undefined1 *)(lVar9 + 0x15b) = *(undefined1 *)(param_1 + 0xac);
      FUN_141646166(lVar9,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
      FUN_140768b6e(lVar9,1);
      *(undefined2 *)(param_2 + 0x120) = 0x101;
      if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar9);
      }
      plVar8[0x75] = lVar9;
    }
  }
  else {
    plVar8 = (longlong *)
             FUN_1480957ea(CONCAT31((int3)((uint)iVar6 >> 8),*(char *)(param_1 + 0x38)),param_3,
                           param_2);
  }
  FUN_14485c47a(param_2 + 0x118,plVar8);
  if (*(char *)(param_2 + 0x121) == '\x01') {
    pdVar13 = (double *)(param_3 + 0x50);
    pdVar14 = local_128;
    for (lVar9 = 0xc; dVar19 = local_128[0], lVar9 != 0; lVar9 = lVar9 + -1) {
      *pdVar14 = *pdVar13;
      pdVar13 = pdVar13 + 1;
      pdVar14 = pdVar14 + 1;
    }
    cVar4 = *(char *)(param_1 + 0x61);
    if (cVar4 == '\x03') {
      local_108 = *(double *)(param_1 + 0x68);
      dStack_100 = *(double *)(param_1 + 0x70);
      local_f8 = *(double *)(param_1 + 0x78);
    }
    else if (cVar4 == '\x02') {
      local_f8 = local_f8 + *(double *)(param_1 + 0x78);
      dStack_100 = dStack_100 + *(double *)(param_1 + 0x70);
      local_108 = local_108 + *(double *)(param_1 + 0x68);
    }
    else if (cVar4 == '\x01') {
      local_108 = *(double *)(param_1 + 0x68) - local_108;
      dStack_100 = *(double *)(param_1 + 0x70) - dStack_100;
      local_f8 = *(double *)(param_1 + 0x78) - local_f8;
      auVar22._8_8_ = dStack_e0;
      auVar22._0_8_ = local_e8;
      dVar20 = -local_128[0];
      dVar21 = -local_128[1];
      dVar29 = local_128[2] * -1.0;
      dVar30 = local_128[3] * 1.0;
      dVar31 = local_108 * dVar29 - dVar20 * local_f8;
      dVar24 = dStack_100 * dVar20 - local_108 * dVar21;
      dVar25 = local_f8 * dVar21 - dStack_100 * dVar29;
      dVar25 = dVar25 + dVar25;
      dVar31 = dVar31 + dVar31;
      dVar24 = dVar24 + dVar24;
      auVar17._8_8_ = 0x3ff0000000000000;
      auVar17._0_8_ = local_d8;
      auVar26 = divpd(_DAT_149934d80,auVar22);
      auVar22 = divpd(ZEXT816(0x3ff0000000000000),auVar17);
      local_108 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_e8)) & auVar26._0_8_) *
                  ((dVar24 * dVar21 - dVar31 * dVar29) + dVar30 * dVar25 + local_108);
      dStack_100 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_e0)) & auVar26._8_8_) *
                   (dVar24 * local_128[0] + dVar29 * dVar25 + dVar30 * dVar31 + dStack_100);
      local_f8 = (dVar30 * dVar24 + local_f8 + (dVar31 * dVar20 - dVar25 * dVar21)) *
                 (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8)) & auVar22._0_8_);
    }
    dStack_f0 = 0.0;
    bVar1 = *(byte *)(param_1 + 0x80);
    uVar5 = (uint)bVar1;
    if (bVar1 == 3) {
      param_1 = param_1 + 0x88;
      uVar5 = FUN_144a7484c(param_1,&local_148);
      uVar10 = (undefined4)param_1;
      local_128[0] = local_148;
      local_128[1] = dStack_140;
      local_128[2] = local_138;
      local_128[3] = dStack_130;
    }
    else if (bVar1 == 2) {
      param_1 = param_1 + 0x88;
      uVar5 = FUN_144a7484c(param_1,&local_148);
      uVar10 = (undefined4)param_1;
      dVar20 = local_128[1] * local_148;
      dVar21 = local_128[1] * dStack_140;
      dVar24 = local_138 * local_128[2];
      local_128[0] = dStack_140 * local_128[2] * -1.0 +
                     dVar19 * dStack_130 * 1.0 + local_128[3] * local_148 + local_128[1] * local_138
      ;
      local_128[1] = local_148 * local_128[2] * 1.0 +
                     dVar19 * local_138 * -1.0 + local_128[3] * dStack_140 +
                     local_128[1] * dStack_130;
      local_128[2] = dStack_130 * local_128[2] * 1.0 +
                     ((dVar19 * dStack_140 * 1.0 + local_128[3] * local_138) - dVar20);
      local_128[3] = dVar24 * -1.0 +
                     ((dVar19 * local_148 * -1.0 + local_128[3] * dStack_130) - dVar21);
    }
    else {
      uVar10 = 0;
      if (bVar1 == 1) {
        param_1 = param_1 + 0x88;
        uVar5 = FUN_144a7484c(param_1,&local_148);
        uVar10 = (undefined4)param_1;
        dVar21 = local_148 * local_128[1];
        dVar24 = local_148 * local_128[0];
        dVar25 = local_128[0] * dStack_140;
        dVar31 = local_128[1] * dStack_140;
        dVar19 = local_128[0] * local_138;
        dVar20 = local_128[2] * local_138;
        local_128[0] = local_128[1] * local_138 * -1.0 +
                       local_128[2] * dStack_140 +
                       local_128[3] * local_148 * 1.0 + local_128[0] * dStack_130;
        local_128[1] = dVar19 * 1.0 +
                       local_128[3] * dStack_140 +
                       local_128[2] * local_148 * -1.0 + local_128[1] * dStack_130;
        local_128[2] = local_128[3] * local_138 * 1.0 +
                       ((dVar21 * 1.0 + dStack_130 * local_128[2]) - dVar25);
        local_128[3] = dVar20 * -1.0 + ((dVar24 * -1.0 + dStack_130 * local_128[3]) - dVar31);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      auVar27._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_100 - (double)plVar8[0x4d]));
      auVar27._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_108 - (double)plVar8[0x4c]));
      iVar6 = movmskpd(uVar5,auVar27);
      auVar26._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_f0 - (double)plVar8[0x4f]));
      auVar26._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_f8 - (double)plVar8[0x4e]));
      uVar5 = movmskpd(uVar10,auVar26);
      if ((uVar5 & 0x3fffffff) == 0 && iVar6 == 0) {
        lVar9 = -(ulonglong)(9.999999747378752e-05 < ABS(local_128[1] - (double)plVar8[0x49]));
        auVar3._8_4_ = (int)lVar9;
        auVar3._0_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(local_128[0] - (double)plVar8[0x48]));
        auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
        uVar5 = movmskpd(iVar6,auVar3);
        lVar9 = -(ulonglong)(9.999999747378752e-05 < ABS(local_128[3] - (double)plVar8[0x4b]));
        auVar2._8_4_ = (int)lVar9;
        auVar2._0_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(local_128[2] - (double)plVar8[0x4a]));
        auVar2._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
        iVar6 = movmskpd(0,auVar2);
        uVar11 = iVar6 << 2 | uVar5;
        if (uVar11 != 0) {
          auVar28._8_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(local_128[1] + (double)plVar8[0x49]));
          auVar28._0_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(local_128[0] + (double)plVar8[0x48]));
          uVar5 = movmskpd(uVar5,auVar28);
          auVar23._8_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(local_128[3] + (double)plVar8[0x4b]));
          auVar23._0_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(local_128[2] + (double)plVar8[0x4a]));
          uVar11 = movmskpd(uVar11,auVar23);
          if ((uVar11 & 0x3fffffff) != 0 || uVar5 != 0) goto LAB_1480973c9;
        }
        auVar18._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_e0 - (double)plVar8[0x51]));
        auVar18._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_e8 - (double)plVar8[0x50]));
        iVar6 = movmskpd(uVar5,auVar18);
        auVar16._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_d0 - (double)plVar8[0x53]));
        auVar16._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_d8 - (double)plVar8[0x52]));
        uVar5 = movmskpd(0,auVar16);
        if ((uVar5 & 0x3fffffff) == 0 && iVar6 == 0) goto LAB_1480973e1;
      }
LAB_1480973c9:
      local_158 = 0;
      FUN_140613f88(plVar8,local_128,0,0);
    }
LAB_1480973e1:
    *(undefined1 *)(param_2 + 0x121) = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_148097736(param_2);
  }
  uVar7 = 0;
LAB_148096e20:
  if ((local_c0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14809767e FUN_14809767e body=182 status=ok
// SIG undefined FUN_14809767e(void)

undefined8 FUN_14809767e(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140bf2008();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148097736 FUN_148097736 body=1352 status=ok
// SIG undefined FUN_148097736(void)

void FUN_148097736(int *param_1,undefined4 param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_c98 [32];
  undefined4 local_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  undefined8 local_c68;
  double local_c60;
  double local_c58;
  double local_c50;
  undefined1 local_c48 [64];
  int local_c08;
  int iStack_c04;
  int iStack_c00;
  int iStack_bfc;
  int local_bf8;
  int iStack_bf4;
  int iStack_bf0;
  int iStack_bec;
  int local_be8;
  int iStack_be4;
  int iStack_be0;
  int iStack_bdc;
  int local_bd8;
  int iStack_bd4;
  int iStack_bd0;
  int iStack_bcc;
  float local_bc8;
  float fStack_bc4;
  float fStack_bc0;
  int iStack_bbc;
  int local_bb8;
  int iStack_bb4;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  float fStack_ba0;
  int iStack_b9c;
  undefined8 local_b98;
  float fStack_b90;
  int iStack_b8c;
  double local_b88;
  double local_b80;
  double local_b78;
  double local_b70;
  double local_b68;
  double local_b60;
  double local_b58;
  double local_b50;
  float local_b48;
  float local_b44;
  float local_b40;
  float local_b3c;
  float local_b38;
  float local_b34;
  float local_b30;
  float local_b2c;
  float local_b28;
  float local_b24;
  float local_b20;
  float local_b1c;
  float local_b18;
  float local_b14;
  float local_b10;
  float local_b0c;
  float local_b08;
  float fStack_b04;
  float fStack_b00;
  undefined4 uStack_afc;
  undefined4 local_af8;
  undefined8 local_af4;
  undefined8 uStack_aec;
  undefined4 local_ae4;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined1 local_ac8 [64];
  undefined8 local_a88;
  undefined8 uStack_a80;
  double local_a78;
  double local_a70;
  double local_a68;
  double local_a60;
  int local_a58;
  int local_a10;
  byte local_9e4;
  longlong local_1b0;
  longlong local_128;
  char local_98;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c98;
  FUN_1400e6e60(&local_a88);
  (**(code **)(*param_4 + 0x5f8))(param_4,param_2,&local_a88);
  local_c50 = (double)*(float *)(param_3 + 0x14) * 65536.0;
  local_c58 = (double)*(float *)(param_3 + 0x10) * 65536.0;
  local_c60 = (double)*(float *)(param_3 + 0xc) * 65536.0;
  local_c78 = (undefined4)local_a88;
  uStack_c74 = local_a88._4_4_;
  uStack_c70 = (undefined4)uStack_a80;
  uStack_c6c = uStack_a80._4_4_;
  local_c68 = local_a78;
  FUN_1481f8bca(&local_c60,&local_bc8);
  local_a78 = (double)fStack_bc0;
  uStack_a80 = (double)fStack_bc4;
  local_a88 = (double)local_bc8;
  fStack_b00 = (float)local_a60;
  fStack_b04 = (float)local_a68;
  local_b08 = (float)local_a70;
  FUN_1480b36f8(local_ac8,&local_b08,&local_bc8);
  local_b08 = 0.0;
  fStack_b04 = 0.0;
  fStack_b00 = 1.0;
  uStack_afc = 0;
  local_af8 = 0x3f800000;
  local_af4 = 0;
  uStack_aec = 0;
  local_ae4 = 0x3f800000;
  local_ae0 = 0;
  uStack_ad8 = 0;
  local_ad0 = 0x3f80000000000000;
  FUN_1403f8f3e(&local_a88,&local_bc8,0);
  local_b48 = (float)(double)CONCAT44(fStack_bc4,local_bc8);
  local_b44 = (float)(double)CONCAT44(iStack_bbc,fStack_bc0);
  local_b40 = (float)(double)CONCAT44(iStack_bb4,local_bb8);
  local_b3c = (float)uStack_bb0;
  local_b38 = (float)local_ba8;
  local_b34 = (float)(double)CONCAT44(iStack_b9c,fStack_ba0);
  local_b30 = (float)local_b98;
  local_b2c = (float)(double)CONCAT44(iStack_b8c,fStack_b90);
  local_b28 = (float)local_b88;
  local_b24 = (float)local_b80;
  local_b20 = (float)local_b78;
  local_b1c = (float)local_b70;
  local_b18 = (float)local_b68;
  local_b14 = (float)local_b60;
  local_b10 = (float)local_b58;
  local_b0c = (float)local_b50;
  FUN_144906bb6(local_ac8,&local_c08);
  FUN_144afeb32(&local_bc8,&local_c08,&local_b08);
  param_1[0x10] = (int)local_b98;
  param_1[0x11] = local_b98._4_4_;
  param_1[0x12] = (int)fStack_b90;
  param_1[0x13] = iStack_b8c;
  param_1[0xc] = (int)local_ba8;
  param_1[0xd] = local_ba8._4_4_;
  param_1[0xe] = (int)fStack_ba0;
  param_1[0xf] = iStack_b9c;
  param_1[8] = local_bb8;
  param_1[9] = iStack_bb4;
  param_1[10] = (int)uStack_bb0;
  param_1[0xb] = uStack_bb0._4_4_;
  param_1[4] = (int)local_bc8;
  param_1[5] = (int)fStack_bc4;
  param_1[6] = (int)fStack_bc0;
  param_1[7] = iStack_bbc;
  FUN_144afeb32(&local_bc8,param_1 + 4,&local_b48);
  *(double *)(param_1 + 0x20) = local_b98;
  *(ulonglong *)(param_1 + 0x22) = CONCAT44(iStack_b8c,fStack_b90);
  *(double *)(param_1 + 0x1c) = local_ba8;
  *(ulonglong *)(param_1 + 0x1e) = CONCAT44(iStack_b9c,fStack_ba0);
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(iStack_bb4,local_bb8);
  *(double *)(param_1 + 0x1a) = uStack_bb0;
  *(ulonglong *)(param_1 + 0x14) = CONCAT44(fStack_bc4,local_bc8);
  *(ulonglong *)(param_1 + 0x16) = CONCAT44(iStack_bbc,fStack_bc0);
  iStack_b9c = 0x3f800000;
  iStack_b8c = 0;
  if (local_9e4 != 0) {
    iStack_b8c = 0x3f800000;
    iStack_b9c = 0;
  }
  local_bc8 = 1.0;
  fStack_bc4 = 0.0;
  fStack_bc0 = 0.0;
  iStack_bbc = 0;
  local_bb8 = 0;
  iStack_bb4 = 0x3f800000;
  uStack_bb0 = 0.0;
  local_ba8 = 0.0;
  fStack_ba0 = local_b20;
  local_b98 = 0.0;
  fStack_b90 = local_b10;
  FUN_144906bb6(param_1 + 0x14,local_c48);
  FUN_144afeb32(&local_c08,&local_bc8,local_c48);
  param_1[0x30] = local_bd8;
  param_1[0x31] = iStack_bd4;
  param_1[0x32] = iStack_bd0;
  param_1[0x33] = iStack_bcc;
  param_1[0x2c] = local_be8;
  param_1[0x2d] = iStack_be4;
  param_1[0x2e] = iStack_be0;
  param_1[0x2f] = iStack_bdc;
  param_1[0x28] = local_bf8;
  param_1[0x29] = iStack_bf4;
  param_1[0x2a] = iStack_bf0;
  param_1[0x2b] = iStack_bec;
  param_1[0x24] = local_c08;
  param_1[0x25] = iStack_c04;
  param_1[0x26] = iStack_c00;
  param_1[0x27] = iStack_bfc;
  plVar2 = (longlong *)param_4[0x75];
  iVar1 = *(int *)((longlong)plVar2 + 0x164);
  fVar3 = (float)(**(code **)(*plVar2 + 0x358))(plVar2);
  fVar4 = (float)(**(code **)(*plVar2 + 0x350))(plVar2);
  *param_1 = (int)fVar4;
  param_1[1] = (int)fVar3;
  param_1[2] = iVar1;
  param_1[0x49] = (int)(float)local_a88;
  param_1[0x4a] = (int)(float)uStack_a80;
  param_1[0x4b] = (int)(float)local_a78;
  FUN_144a7484c(&local_a70,&local_c08);
  param_1[0x4c] = (int)(float)(double)CONCAT44(iStack_c04,local_c08);
  param_1[0x4d] = (int)(float)(double)CONCAT44(iStack_bfc,iStack_c00);
  param_1[0x4e] = (int)(float)(double)CONCAT44(iStack_bf4,local_bf8);
  param_1[0x4f] = (int)(float)(double)CONCAT44(iStack_bec,iStack_bf0);
  param_1[0x34] = (uint)local_9e4;
  param_1[0x50] = local_a58;
  param_1[0x51] = local_a10;
  if (local_98 == '\x01') {
    local_98 = '\0';
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148097c80 FUN_148097c80 body=332 status=ok
// SIG undefined FUN_148097c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148097c80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  memset(param_2,0,0xe0);
  uVar1 = _DAT_14c846288;
  param_2[8] = _DAT_14c846280;
  param_2[9] = uVar1;
  uVar1 = _DAT_14c846278;
  param_2[6] = _DAT_14c846270;
  param_2[7] = uVar1;
  uVar1 = _DAT_14c846268;
  param_2[4] = _DAT_14c846260;
  param_2[5] = uVar1;
  uVar1 = DAT_14c846258;
  param_2[2] = _DAT_14c846250;
  param_2[3] = uVar1;
  uVar1 = _DAT_14c846288;
  param_2[0x10] = _DAT_14c846280;
  param_2[0x11] = uVar1;
  uVar1 = _DAT_14c846278;
  param_2[0xe] = _DAT_14c846270;
  param_2[0xf] = uVar1;
  uVar1 = _DAT_14c846268;
  param_2[0xc] = _DAT_14c846260;
  param_2[0xd] = uVar1;
  uVar1 = DAT_14c846258;
  param_2[10] = _DAT_14c846250;
  param_2[0xb] = uVar1;
  uVar1 = _DAT_14c846288;
  param_2[0x18] = _DAT_14c846280;
  param_2[0x19] = uVar1;
  uVar1 = _DAT_14c846278;
  param_2[0x16] = _DAT_14c846270;
  param_2[0x17] = uVar1;
  uVar1 = _DAT_14c846268;
  param_2[0x14] = _DAT_14c846260;
  param_2[0x15] = uVar1;
  uVar1 = DAT_14c846258;
  param_2[0x12] = _DAT_14c846250;
  param_2[0x13] = uVar1;
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  uVar1 = param_3[3];
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  uVar6 = param_3[8];
  uVar7 = param_3[9];
  param_2[2] = param_3[2];
  param_2[3] = uVar1;
  param_2[4] = uVar2;
  param_2[5] = uVar3;
  param_2[6] = uVar4;
  param_2[7] = uVar5;
  param_2[8] = uVar6;
  param_2[9] = uVar7;
  uVar1 = param_3[10];
  uVar2 = param_3[0xb];
  uVar3 = param_3[0xc];
  uVar4 = param_3[0xd];
  uVar5 = param_3[0xe];
  uVar6 = param_3[0xf];
  uVar7 = param_3[0x11];
  param_2[0x10] = param_3[0x10];
  param_2[0x11] = uVar7;
  param_2[0xe] = uVar5;
  param_2[0xf] = uVar6;
  param_2[0xc] = uVar3;
  param_2[0xd] = uVar4;
  param_2[10] = uVar1;
  param_2[0xb] = uVar2;
  uVar1 = param_3[0x13];
  uVar2 = param_3[0x14];
  uVar3 = param_3[0x15];
  uVar4 = param_3[0x16];
  uVar5 = param_3[0x17];
  uVar6 = param_3[0x18];
  uVar7 = param_3[0x19];
  param_2[0x12] = param_3[0x12];
  param_2[0x13] = uVar1;
  param_2[0x14] = uVar2;
  param_2[0x15] = uVar3;
  param_2[0x18] = uVar6;
  param_2[0x19] = uVar7;
  param_2[0x16] = uVar4;
  param_2[0x17] = uVar5;
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_3 + 0x1a);
  return;
}



// FUNCTION 148097dee FUN_148097dee body=413 status=ok
// SIG undefined FUN_148097dee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148097dee(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar13;
  
  lVar2 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar10 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar10 = *(longlong *)(lVar2 + 0x50);
    }
    iVar15 = *(int *)(lVar10 + (ulonglong)
                               (*(int *)(lVar2 + 0x58) - 1U &
                               (int)lVar11 + (int)((ulonglong)lVar11 >> 0x20) * 0x17) * 4);
    if (iVar15 != -1) {
      do {
        lVar10 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar15 * 0x110;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar15 * 0x110) == lVar11)
        goto LAB_148097e4b;
        iVar15 = *(int *)(lVar10 + 0x100);
      } while (iVar15 != -1);
    }
  }
  lVar10 = 0;
LAB_148097e4b:
  puVar14 = (undefined8 *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    puVar14 = (undefined8 *)0x0;
  }
  uVar12 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar13 = (ulonglong)uVar12;
  FUN_1480b8570();
  *(uint *)(param_2 + 0x50) = uVar12 + _DAT_14cb38d3c;
  lVar2 = *(longlong *)(param_2 + 0x38);
  lVar11 = puVar14[0x1b];
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(DAT_14ca94e18 + 0x10);
  }
  *(longlong *)(lVar2 + uVar13) = lVar11;
  lVar11 = puVar14[0x1c];
  if (puVar14[0x1c] == 0) {
    lVar11 = DAT_14c9c0de0;
  }
  *(longlong *)(lVar2 + 8 + uVar13) = lVar11;
  *(undefined4 *)(lVar2 + 0x18 + uVar13) = *(undefined4 *)(puVar14 + 1);
  *(undefined8 *)(lVar2 + 0x10 + uVar13) = *puVar14;
  uVar3 = puVar14[2];
  uVar4 = puVar14[3];
  uVar5 = puVar14[4];
  uVar6 = puVar14[5];
  uVar7 = puVar14[6];
  uVar8 = puVar14[7];
  uVar9 = puVar14[9];
  puVar1 = (undefined8 *)(lVar2 + 0x50 + uVar13);
  *puVar1 = puVar14[8];
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar2 + 0x40 + uVar13);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar2 + 0x30 + uVar13);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + uVar13);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  uVar3 = puVar14[10];
  uVar4 = puVar14[0xb];
  uVar5 = puVar14[0xc];
  uVar6 = puVar14[0xd];
  uVar7 = puVar14[0xe];
  uVar8 = puVar14[0xf];
  uVar9 = puVar14[0x11];
  puVar1 = (undefined8 *)(lVar2 + 0x90 + uVar13);
  *puVar1 = puVar14[0x10];
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar2 + 0x80 + uVar13);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar2 + 0x70 + uVar13);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar2 + 0x60 + uVar13);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  uVar3 = puVar14[0x13];
  uVar4 = puVar14[0x14];
  uVar5 = puVar14[0x15];
  uVar6 = puVar14[0x16];
  uVar7 = puVar14[0x17];
  uVar8 = puVar14[0x18];
  uVar9 = puVar14[0x19];
  puVar1 = (undefined8 *)(lVar2 + 0xa0 + uVar13);
  *puVar1 = puVar14[0x12];
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(lVar2 + 0xb0 + uVar13);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar2 + 0xc0 + uVar13);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar2 + 0xd0 + uVar13);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  *(uint *)(lVar2 + 0xe0 + uVar13) = (uint)(*(int *)(puVar14 + 0x1a) == 0);
  return;
}



// FUNCTION 148097f8c FUN_148097f8c body=69 status=ok
// SIG undefined FUN_148097f8c(void)

void FUN_148097f8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14024cd4c(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = DAT_14cb381b0;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = DAT_14cb381a8;
  return;
}



// FUNCTION 148097fd2 FUN_148097fd2 body=277 status=ok
// SIG undefined FUN_148097fd2(void)

undefined8
FUN_148097fd2(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,longlong *param_5
             )

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*param_2 != 0) && (plVar3 = (longlong *)FUN_144741050(param_2 + 1), *plVar3 != 0)) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_2 != DAT_14cb381a8) {
      return 0;
    }
    if ((int)param_2[1] != DAT_14cb381b0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
      lVar2 = *(longlong *)(param_4 + 0x100);
      lVar4 = param_1 + 0x110;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x118);
      }
      iVar1 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x120) - 1U &
                               (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
      if (iVar1 != -1) {
        while (plVar3 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar1 * 0x18),
              *plVar3 != lVar2) {
          iVar1 = (int)plVar3[2];
          if (iVar1 == -1) {
            return 0;
          }
        }
        if (plVar3 != (longlong *)0x0) {
          lVar2 = plVar3[1];
          if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
            FUN_1456cec3c(lVar2);
          }
          else if (lVar2 == 0) {
            return 0;
          }
          lVar2 = *(longlong *)(lVar2 + 0x3a8);
          if (lVar2 != 0) {
            *param_5 = lVar2;
            return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1480980ec FUN_1480980ec body=1219 status=ok
// SIG undefined FUN_1480980ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1480980ec(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb38370) {
    FUN_144b3d300(&DAT_14cb38370);
    lVar1 = DAT_14cb420d0;
    if (DAT_14cb38370 == -1) {
      if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb420d0);
      }
      uVar2 = _DAT_14cb420d8;
      _DAT_14cb38230 = DAT_14cb381e8;
      _DAT_14cb38238 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      lVar1 = DAT_14cb420f0;
      _DAT_14cb38240 = uVar2;
      _DAT_14cb38248 = &DAT_149e97ffe;
      _DAT_14cb38250 = L"GetInstanceInt";
      if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb420f0);
      }
      uVar2 = DAT_14cb420f8;
      _DAT_14cb38258 = DAT_14cb381f0;
      _DAT_14cb38260 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      lVar1 = DAT_14cb42110;
      _DAT_14cb38268 = uVar2;
      _DAT_14cb38270 = L"float";
      _DAT_14cb38278 = L"GetInstanceFloat";
      if ((DAT_14cb42110 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42110);
      }
      uVar2 = DAT_14cb42118;
      _DAT_14cb38280 = DAT_14cb381f8;
      _DAT_14cb38288 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      lVar1 = DAT_14cb42140;
      _DAT_14cb38290 = uVar2;
      _DAT_14cb38298 = L"float2";
      _DAT_14cb382a0 = L"GetInstanceFloat2";
      if ((DAT_14cb42140 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42140);
      }
      uVar2 = DAT_14cb42148;
      _DAT_14cb382a8 = DAT_14cb38200;
      _DAT_14cb382b0 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      lVar1 = DAT_14cb42160;
      _DAT_14cb382b8 = uVar2;
      _DAT_14cb382c0 = L"float3";
      _DAT_14cb382c8 = L"GetInstanceFloat3";
      if ((DAT_14cb42160 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42160);
      }
      uVar2 = DAT_14cb42168;
      _DAT_14cb382d0 = DAT_14cb38208;
      _DAT_14cb382d8 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      lVar1 = DAT_14cb42180;
      _DAT_14cb382e0 = uVar2;
      _DAT_14cb382e8 = L"float4";
      _DAT_14cb382f0 = L"GetInstanceFloat4";
      if ((DAT_14cb42180 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42180);
      }
      uVar2 = DAT_14cb42188;
      _DAT_14cb382f8 = DAT_14cb38210;
      _DAT_14cb38300 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      lVar1 = DAT_14cb42190;
      _DAT_14cb38308 = uVar2;
      _DAT_14cb38310 = L"float4";
      _DAT_14cb38318 = L"GetInstanceFloat4";
      if ((DAT_14cb42190 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42190);
      }
      uVar2 = _DAT_14cb42198;
      _DAT_14cb38320 = DAT_14cb38218;
      _DAT_14cb38328 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      lVar1 = DAT_14cb42130;
      _DAT_14cb38330 = uVar2;
      _DAT_14cb38338 = L"float4";
      _DAT_14cb38340 = L"GetInstanceFloat4";
      if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42130);
      }
      uVar2 = _DAT_14cb42138;
      _DAT_14cb38348 = DAT_14cb38220;
      _DAT_14cb38350 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      _DAT_14cb38358 = uVar2;
      _DAT_14cb38360 = L"float3";
      _DAT_14cb38368 = L"GetInstanceFloat3";
      _Init_thread_footer(&DAT_14cb38370);
    }
  }
  *param_1 = &DAT_14cb38230;
  *(undefined4 *)(param_1 + 1) = 8;
  return param_1;
}



// FUNCTION 1480985b0 FUN_1480985b0 body=99 status=ok
// SIG undefined FUN_1480985b0(void)

undefined8 FUN_1480985b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_2 + 0x38))) &&
     (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (*(longlong *)(param_2 + 0x58) == lVar1) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x60) >> 8),
                      *(longlong *)(param_2 + 0x60) == *(longlong *)(param_1 + 0x60));
    }
  }
  return 0;
}



// FUNCTION 148098614 FUN_148098614 body=110 status=ok
// SIG undefined FUN_148098614(void)

undefined8 FUN_148098614(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    FUN_1447a122a(param_2 + 0x48,param_1 + 0x48);
    lVar2 = *(longlong *)(param_1 + 0x58);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
    }
    *(longlong *)(param_2 + 0x58) = lVar2;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = uVar1;
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  }
  return uVar1;
}



// FUNCTION 148098682 FUN_148098682 body=133 status=ok
// SIG undefined FUN_148098682(void)

undefined4 FUN_148098682(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = 0;
  *(undefined4 *)param_2 = 0xffffffff;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = FUN_144830b78(param_2 + 3,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 3) = uVar1;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  FUN_1404e5848(param_2,param_3 + 0x1e8,param_1 + 0x38);
  return 1;
}



// FUNCTION 14809870e FUN_14809870e body=1362 status=ok
// SIG undefined FUN_14809870e(void)

void FUN_14809870e(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_14479d2ce(param_3 + 0x38);
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb381d0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    puVar6 = local_38;
    local_30 = 3;
    *local_38 = &PTR_LAB_14ad81180;
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
    local_38[2] = lVar5;
    *local_38 = &PTR_FUN_14ad891c0;
    local_38[3] = 0;
    FUN_14485c47a(local_38 + 3,param_1);
    pcVar4 = FUN_148098c62;
LAB_1480987cd:
    puVar6[4] = pcVar4;
LAB_1480987d1:
    FUN_144a450dc(param_4,&local_38);
  }
  else {
    if (lVar1 == DAT_14cb381d8) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      puVar6 = local_38;
      local_30 = 3;
      *local_38 = &PTR_LAB_14ad81180;
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
      local_38[2] = lVar5;
      *local_38 = &PTR_FUN_14ad891c0;
      local_38[3] = 0;
      FUN_14485c47a(local_38 + 3,param_1);
      pcVar4 = FUN_148098d1a;
      goto LAB_1480987cd;
    }
    if (lVar1 == DAT_14cb381e8) {
      uVar2 = FUN_1439160b3(uVar3,lVar1,*(undefined8 *)(param_2[5] + 8),
                            *(undefined4 *)(param_3 + 0x40));
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      puVar6 = local_38;
      local_30 = 3;
      *local_38 = &PTR_LAB_14ad892a0;
      *(undefined4 *)(local_38 + 1) = uVar2;
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
      local_38[2] = lVar5;
      *local_38 = &PTR_FUN_14ad89230;
      local_38[3] = 0;
      FUN_14485c47a(local_38 + 3,param_1);
      pcVar4 = FUN_148098e84;
LAB_14809894d:
      puVar6[4] = pcVar4;
      goto LAB_1480987d1;
    }
    if (lVar1 == DAT_14cb381f0) {
      uVar2 = FUN_1439160b3(uVar3,lVar1,*(undefined8 *)(param_2[5] + 8),
                            *(undefined4 *)(param_3 + 0x40));
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      puVar6 = local_38;
      local_30 = 3;
      *local_38 = &PTR_LAB_14ad892a0;
      *(undefined4 *)(local_38 + 1) = uVar2;
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
      local_38[2] = lVar5;
      *local_38 = &PTR_FUN_14ad89230;
      local_38[3] = 0;
      FUN_14485c47a(local_38 + 3,param_1);
      pcVar4 = FUN_14809918e;
      goto LAB_14809894d;
    }
    if (lVar1 == DAT_14cb381f8) {
      uVar2 = FUN_1439160b3(uVar3,lVar1,*(undefined8 *)(param_2[5] + 8),
                            *(undefined4 *)(param_3 + 0x40));
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      puVar6 = local_38;
      local_30 = 3;
      *local_38 = &PTR_LAB_14ad892a0;
      *(undefined4 *)(local_38 + 1) = uVar2;
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
      local_38[2] = lVar5;
      *local_38 = &PTR_FUN_14ad89230;
      local_38[3] = 0;
      FUN_14485c47a(local_38 + 3,param_1);
      pcVar4 = FUN_14809949a;
      goto LAB_14809894d;
    }
    if (lVar1 == DAT_14cb38200) {
      local_3c = FUN_1439160b3(uVar3,lVar1,*(undefined8 *)(param_2[5] + 8),
                               *(undefined4 *)(param_3 + 0x40));
      pcVar4 = FUN_148099828;
LAB_148098b4b:
      FUN_148098dd2(&local_38,param_1,pcVar4);
    }
    else {
      if (lVar1 == DAT_14cb38208) {
        local_3c = FUN_1439160b3(uVar3,lVar1,*(undefined8 *)(param_2[5] + 8),
                                 *(undefined4 *)(param_3 + 0x40));
        pcVar4 = FUN_1480998a4;
        goto LAB_148098b4b;
      }
      if (lVar1 == DAT_14cb38210) {
        local_3c = FUN_1439160b3(uVar3,lVar1,*(undefined8 *)(param_2[5] + 8),
                                 *(undefined4 *)(param_3 + 0x40));
        pcVar4 = FUN_148099d2e;
        goto LAB_148098b4b;
      }
      if (lVar1 == DAT_14cb38218) {
        local_3c = FUN_1439160b3(uVar3,lVar1,*(undefined8 *)(param_2[5] + 8),
                                 *(undefined4 *)(param_3 + 0x40));
        pcVar4 = FUN_14809a294;
      }
      else {
        if (lVar1 != DAT_14cb38220) goto LAB_1480987e9;
        local_3c = FUN_1439160b3(uVar3,lVar1,*(undefined8 *)(param_2[5] + 8),
                                 *(undefined4 *)(param_3 + 0x40));
        pcVar4 = FUN_14809a776;
      }
      local_48 = &local_3d;
      local_3d = 0;
      FUN_14809a1ce(&local_38,param_1,pcVar4);
    }
    FUN_144a450dc(param_4,&local_38);
  }
  FUN_1449db362(&local_38);
LAB_1480987e9:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148098c62 FUN_148098c62 body=183 status=ok
// SIG undefined FUN_148098c62(void)

void FUN_148098c62(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14809aaa8(local_28);
  FUN_144a76cd4(&local_38,param_2);
  lVar3 = FUN_14479d2ce(local_20 + 0x38);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar3 + 0x198);
  }
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = uVar2;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_38 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148098d1a FUN_148098d1a body=183 status=ok
// SIG undefined FUN_148098d1a(void)

void FUN_148098d1a(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14809aaa8(local_28);
  FUN_144a76cd4(&local_38,param_2);
  lVar3 = FUN_14479d2ce(local_20 + 0x38);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar3 + 0x188);
  }
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = uVar2;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_38 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148098dd2 FUN_148098dd2 body=177 status=ok
// SIG undefined FUN_148098dd2(void)

longlong *
FUN_148098dd2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ad892a0;
  *(undefined4 *)(puVar1 + 1) = *param_4;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14ad89230;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = param_3;
  return param_1;
}



// FUNCTION 148098e84 FUN_148098e84 body=776 status=ok
// SIG undefined FUN_148098e84(void)

void FUN_148098e84(undefined8 param_1,char *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined ***pppuVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_178 [32];
  int local_158;
  undefined4 local_144;
  longlong local_140;
  undefined8 local_138;
  int *piStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  int local_ac;
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14ad89420;
  local_80 = &LAB_14391edba;
  local_a8 = FUN_1480ba006;
  local_144 = param_3;
  FUN_14809aaa8(local_c0);
  local_c8 = 0;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  FUN_144a98d08(&local_d8,param_2);
  local_e8 = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  FUN_144a98d08(&local_f8,param_2);
  FUN_140126e42(&local_108,param_2);
  FUN_144a76cd4(&local_118);
  local_140 = FUN_14479d2ce(local_b8 + 0x38);
  if (local_140 == 0) {
    piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar9 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar11 = 0;
      do {
        puVar2 = local_108 + local_100;
        *local_108 = 0;
        puVar3 = local_118 + local_110;
        *local_118 = 0;
        iVar11 = iVar11 + 1;
        piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar9 = (int *)(param_2 + 0x3c);
        }
        local_118 = puVar3;
        local_108 = puVar2;
      } while (iVar11 < *piVar9);
    }
  }
  else {
    local_128 = 0;
    lStack_120 = 0;
    local_138 = 0;
    piStack_130 = (int *)0x0;
    piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar9 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar11 = -1;
      iVar12 = 0;
      do {
        piVar9 = local_d8 + local_c8;
        iVar4 = *local_d8;
        piVar1 = local_f8 + local_e8;
        iVar5 = *local_f8;
        local_f8 = piVar1;
        local_d8 = piVar9;
        if (iVar11 != iVar4) {
          local_158 = iVar4;
          FUN_1480b9f4a(&local_138,local_140,*(undefined4 *)(local_b8 + 0x40),local_144);
          iVar11 = iVar4;
        }
        pcVar6 = local_a8;
        if (((iVar5 < 0) || (lStack_120 == 0)) || (*piStack_130 <= iVar5)) {
          *local_108 = 0;
          *local_118 = 0;
          local_118 = local_118 + local_110;
          local_108 = local_108 + local_100;
        }
        else {
          *local_108 = 0xffffffff;
          pppuVar10 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar10 = &local_88;
          }
          local_108 = local_108 + local_100;
          local_ac = iVar5;
          uVar8 = (*(code *)(*pppuVar10)[1])();
          uVar7 = (*pcVar6)(uVar8,&local_138,&local_ac);
          *local_118 = uVar7;
          local_118 = local_118 + local_110;
        }
        iVar12 = iVar12 + 1;
        piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar9 = (int *)(param_2 + 0x3c);
        }
      } while (iVar12 < *piVar9);
    }
  }
  if (local_a8 != (code *)0x0) {
    pppuVar10 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar10 = local_98;
    }
    (*(code *)(*pppuVar10)[2])(pppuVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809918e FUN_14809918e body=778 status=ok
// SIG undefined FUN_14809918e(void)

void FUN_14809918e(undefined8 param_1,char *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined ***pppuVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 auStack_178 [32];
  int local_158;
  undefined4 local_144;
  longlong local_140;
  undefined8 local_138;
  int *piStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  int local_ac;
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14ad89440;
  local_80 = &LAB_14391edda;
  local_a8 = FUN_1480ba05e;
  local_144 = param_3;
  FUN_14809aaa8(local_c0);
  local_c8 = 0;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  FUN_144a98d08(&local_d8,param_2);
  local_e8 = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  FUN_144a98d08(&local_f8,param_2);
  FUN_140126e42(&local_108,param_2);
  FUN_144a76c20(&local_118);
  local_140 = FUN_14479d2ce(local_b8 + 0x38);
  if (local_140 == 0) {
    piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar8 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar8) {
      iVar10 = 0;
      do {
        puVar2 = local_108 + local_100;
        *local_108 = 0;
        puVar3 = local_118 + local_110;
        *local_118 = 0;
        iVar10 = iVar10 + 1;
        piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar8 = (int *)(param_2 + 0x3c);
        }
        local_118 = puVar3;
        local_108 = puVar2;
      } while (iVar10 < *piVar8);
    }
  }
  else {
    local_128 = 0;
    lStack_120 = 0;
    local_138 = 0;
    piStack_130 = (int *)0x0;
    piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar8 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar8) {
      iVar10 = -1;
      iVar11 = 0;
      do {
        piVar8 = local_d8 + local_c8;
        iVar4 = *local_d8;
        piVar1 = local_f8 + local_e8;
        iVar5 = *local_f8;
        local_f8 = piVar1;
        local_d8 = piVar8;
        if (iVar10 != iVar4) {
          local_158 = iVar4;
          FUN_1480b9f4a(&local_138,local_140,*(undefined4 *)(local_b8 + 0x40),local_144);
          iVar10 = iVar4;
        }
        pcVar6 = local_a8;
        if (((iVar5 < 0) || (lStack_120 == 0)) || (*piStack_130 <= iVar5)) {
          *local_108 = 0;
          *local_118 = 0;
          local_118 = local_118 + local_110;
          local_108 = local_108 + local_100;
        }
        else {
          *local_108 = 0xffffffff;
          pppuVar9 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar9 = &local_88;
          }
          local_108 = local_108 + local_100;
          local_ac = iVar5;
          uVar7 = (*(code *)(*pppuVar9)[1])();
          uVar12 = (*pcVar6)(uVar7,&local_138,&local_ac);
          *local_118 = uVar12;
          local_118 = local_118 + local_110;
        }
        iVar11 = iVar11 + 1;
        piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar8 = (int *)(param_2 + 0x3c);
        }
      } while (iVar11 < *piVar8);
    }
  }
  if (local_a8 != (code *)0x0) {
    pppuVar9 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar9 = local_98;
    }
    (*(code *)(*pppuVar9)[2])(pppuVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809949a FUN_14809949a body=908 status=ok
// SIG undefined FUN_14809949a(void)

void FUN_14809949a(undefined8 param_1,char *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined ***pppuVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_188 [32];
  int local_168;
  undefined4 local_15c;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  int *piStack_140;
  undefined8 local_138;
  longlong lStack_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  int local_ac;
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  uVar7 = DAT_14c84635c;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14ad89460;
  local_80 = &LAB_14391edfc;
  local_a8 = FUN_1480ba0b6;
  local_15c = param_3;
  FUN_14809aaa8(local_c0);
  local_c8 = 0;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  FUN_144a98d08(&local_d8,param_2);
  local_e8 = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  FUN_144a98d08(&local_f8,param_2);
  FUN_140126e42(&local_108,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118);
  local_158 = FUN_14479d2ce(local_b8 + 0x38);
  if (local_158 == 0) {
    piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar10 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar10) {
      iVar12 = 0;
      do {
        puVar2 = local_108 + local_100;
        *local_108 = 0;
        puVar3 = local_128 + local_120;
        *local_128 = (int)uVar7;
        puVar4 = local_118 + local_110;
        *local_118 = (int)((ulonglong)uVar7 >> 0x20);
        iVar12 = iVar12 + 1;
        piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar10 = (int *)(param_2 + 0x3c);
        }
        local_128 = puVar3;
        local_118 = puVar4;
        local_108 = puVar2;
      } while (iVar12 < *piVar10);
    }
  }
  else {
    local_138 = 0;
    lStack_130 = 0;
    local_148 = 0;
    piStack_140 = (int *)0x0;
    piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar10 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar10) {
      iVar13 = 0;
      iVar12 = -1;
      do {
        piVar10 = local_d8 + local_c8;
        iVar5 = *local_d8;
        piVar1 = local_f8 + local_e8;
        iVar6 = *local_f8;
        local_f8 = piVar1;
        local_d8 = piVar10;
        if (iVar12 != iVar5) {
          local_168 = iVar5;
          FUN_1480b9f4a(&local_148,local_158,*(undefined4 *)(local_b8 + 0x40),local_15c);
          iVar12 = iVar5;
        }
        pcVar8 = local_a8;
        if (((iVar6 < 0) || (lStack_130 == 0)) || (*piStack_140 <= iVar6)) {
          *local_108 = 0;
          *local_128 = (int)uVar7;
          uVar9 = uVar7;
          local_128 = local_128 + local_120;
          local_108 = local_108 + local_100;
        }
        else {
          *local_108 = 0xffffffff;
          pppuVar11 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar11 = &local_88;
          }
          local_108 = local_108 + local_100;
          local_ac = iVar6;
          uVar9 = (*(code *)(*pppuVar11)[1])();
          (*pcVar8)(&local_150,uVar9,&local_148,&local_ac);
          *local_128 = (int)local_150;
          uVar9 = local_150;
          local_128 = local_128 + local_120;
        }
        puVar2 = local_118 + local_110;
        *local_118 = (int)((ulonglong)uVar9 >> 0x20);
        iVar13 = iVar13 + 1;
        piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar10 = (int *)(param_2 + 0x3c);
        }
        local_118 = puVar2;
      } while (iVar13 < *piVar10);
    }
  }
  if (local_a8 != (code *)0x0) {
    pppuVar11 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar11 = local_98;
    }
    (*(code *)(*pppuVar11)[2])(pppuVar11);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148099828 FUN_148099828 body=123 status=ok
// SIG undefined FUN_148099828(void)

void FUN_148099828(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined1 *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_28 = &PTR_LAB_14ad89480;
  local_20 = &LAB_14391ee48;
  local_48 = FUN_1480ba11e;
  local_58 = DAT_14c846330;
  local_50 = DAT_14c846338;
  FUN_143916189(param_2);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480998a4 FUN_1480998a4 body=1160 status=ok
// SIG undefined FUN_1480998a4(void)

void FUN_1480998a4(undefined8 param_1,char *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined ***pppuVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 auStack_1b8 [32];
  int local_198;
  undefined4 local_184;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  int *piStack_160;
  undefined8 local_158;
  longlong lStack_150;
  undefined4 *local_148;
  int local_140;
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  int local_ac;
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14ad894a0;
  local_80 = FUN_14391eeb0;
  local_a8 = FUN_1480ba20a;
  local_184 = param_3;
  FUN_14809aaa8(local_c0);
  local_c8 = 0;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  FUN_144a98d08(&local_d8,param_2);
  local_e8 = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  FUN_144a98d08(&local_f8,param_2);
  FUN_140126e42(&local_108,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118);
  local_180 = FUN_14479d2ce(local_b8 + 0x38);
  if (local_180 == 0) {
    piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar11 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar11) {
      iVar13 = 0;
      do {
        puVar2 = local_108 + local_100;
        *local_108 = 0;
        puVar3 = local_148 + local_140;
        *local_148 = 0;
        puVar4 = local_138 + local_130;
        *local_138 = 0;
        puVar5 = local_128 + local_120;
        *local_128 = 0;
        puVar6 = local_118 + local_110;
        *local_118 = 0;
        iVar13 = iVar13 + 1;
        piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar11 = (int *)(param_2 + 0x3c);
        }
        local_148 = puVar3;
        local_138 = puVar4;
        local_128 = puVar5;
        local_118 = puVar6;
        local_108 = puVar2;
      } while (iVar13 < *piVar11);
    }
  }
  else {
    local_158 = 0;
    lStack_150 = 0;
    local_168 = 0;
    piStack_160 = (int *)0x0;
    piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar11 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar11) {
      iVar13 = -1;
      iVar14 = 0;
      do {
        piVar11 = local_d8 + local_c8;
        iVar7 = *local_d8;
        piVar1 = local_f8 + local_e8;
        iVar8 = *local_f8;
        local_f8 = piVar1;
        local_d8 = piVar11;
        if (iVar13 != iVar7) {
          local_198 = iVar7;
          FUN_1480b9f4a(&local_168,local_180,*(undefined4 *)(local_b8 + 0x40),local_184);
          iVar13 = iVar7;
        }
        pcVar9 = local_a8;
        if (((iVar8 < 0) || (lStack_150 == 0)) || (*piStack_160 <= iVar8)) {
          *local_108 = 0;
          *local_148 = 0;
          *local_138 = 0;
          *local_128 = 0;
          uVar15 = 0;
          local_148 = local_148 + local_140;
          local_138 = local_138 + local_130;
          local_128 = local_128 + local_120;
          local_108 = local_108 + local_100;
        }
        else {
          *local_108 = 0xffffffff;
          pppuVar12 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar12 = &local_88;
          }
          local_108 = local_108 + local_100;
          local_ac = iVar8;
          uVar10 = (*(code *)(*pppuVar12)[1])();
          (*pcVar9)(&local_178,uVar10,&local_168,&local_ac);
          *local_148 = local_178;
          *local_138 = local_174;
          *local_128 = local_170;
          uVar15 = local_16c;
          local_148 = local_148 + local_140;
          local_138 = local_138 + local_130;
          local_128 = local_128 + local_120;
        }
        puVar2 = local_118 + local_110;
        *local_118 = uVar15;
        iVar14 = iVar14 + 1;
        piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar11 = (int *)(param_2 + 0x3c);
        }
        local_118 = puVar2;
      } while (iVar14 < *piVar11);
    }
  }
  if (local_a8 != (code *)0x0) {
    pppuVar12 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar12 = local_98;
    }
    (*(code *)(*pppuVar12)[2])(pppuVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148099d2e FUN_148099d2e body=1183 status=ok
// SIG undefined FUN_148099d2e(void)

void FUN_148099d2e(undefined8 param_1,char *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  undefined ***pppuVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 auStack_1b8 [32];
  int local_198;
  undefined4 local_184;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  int *piStack_160;
  undefined8 local_158;
  longlong lStack_150;
  undefined4 *local_148;
  int local_140;
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  int local_ac;
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14ad894c0;
  local_80 = FUN_14391eecc;
  local_a8 = FUN_1480ba2f6;
  local_184 = param_3;
  FUN_14809aaa8(local_c0);
  local_c8 = 0;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  FUN_144a98d08(&local_d8,param_2);
  local_e8 = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  FUN_144a98d08(&local_f8,param_2);
  FUN_140126e42(&local_108,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118,param_2);
  local_180 = FUN_14479d2ce(local_b8 + 0x38);
  if (local_180 == 0) {
    piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar11 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar11) {
      iVar12 = 0;
      do {
        puVar2 = local_108 + local_100;
        *local_108 = 0;
        puVar3 = local_148 + local_140;
        *local_148 = 0x3f800000;
        puVar4 = local_138 + local_130;
        *local_138 = 0x3f800000;
        puVar5 = local_128 + local_120;
        *local_128 = 0x3f800000;
        puVar6 = local_118 + local_110;
        *local_118 = 0x3f800000;
        iVar12 = iVar12 + 1;
        piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar11 = (int *)(param_2 + 0x3c);
        }
        local_148 = puVar3;
        local_138 = puVar4;
        local_128 = puVar5;
        local_118 = puVar6;
        local_108 = puVar2;
      } while (iVar12 < *piVar11);
    }
  }
  else {
    local_158 = 0;
    lStack_150 = 0;
    local_168 = 0;
    piStack_160 = (int *)0x0;
    piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar11 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar11) {
      iVar14 = 0;
      iVar12 = -1;
      do {
        piVar11 = local_d8 + local_c8;
        iVar7 = *local_d8;
        piVar1 = local_f8 + local_e8;
        iVar8 = *local_f8;
        local_f8 = piVar1;
        local_d8 = piVar11;
        if (iVar12 != iVar7) {
          local_198 = iVar7;
          FUN_1480b9f4a(&local_168,local_180,*(undefined4 *)(local_b8 + 0x40),local_184);
          iVar12 = iVar7;
        }
        pcVar9 = local_a8;
        if (((iVar8 < 0) || (lStack_150 == 0)) || (*piStack_160 <= iVar8)) {
          *local_108 = 0;
          *local_148 = 0x3f800000;
          *local_138 = 0x3f800000;
          *local_128 = 0x3f800000;
          uVar15 = 0x3f800000;
          local_148 = local_148 + local_140;
          local_138 = local_138 + local_130;
          local_128 = local_128 + local_120;
          local_108 = local_108 + local_100;
        }
        else {
          *local_108 = 0xffffffff;
          pppuVar13 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar13 = &local_88;
          }
          local_108 = local_108 + local_100;
          local_ac = iVar8;
          uVar10 = (*(code *)(*pppuVar13)[1])();
          (*pcVar9)(&local_178,uVar10,&local_168,&local_ac);
          *local_148 = local_178;
          *local_138 = local_174;
          *local_128 = local_170;
          uVar15 = local_16c;
          local_148 = local_148 + local_140;
          local_138 = local_138 + local_130;
          local_128 = local_128 + local_120;
        }
        puVar2 = local_118 + local_110;
        *local_118 = uVar15;
        iVar14 = iVar14 + 1;
        piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar11 = (int *)(param_2 + 0x3c);
        }
        local_118 = puVar2;
      } while (iVar14 < *piVar11);
    }
  }
  if (local_a8 != (code *)0x0) {
    pppuVar13 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar13 = local_98;
    }
    (*(code *)(*pppuVar13)[2])(pppuVar13);
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809a1ce FUN_14809a1ce body=197 status=ok
// SIG undefined FUN_14809a1ce(void)

longlong *
FUN_14809a1ce(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined1 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ad89380;
  *(undefined4 *)(puVar1 + 1) = *param_4;
  *(undefined1 *)((longlong)puVar1 + 0xc) = *param_5;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14ad89310;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = param_3;
  return param_1;
}



// FUNCTION 14809a294 FUN_14809a294 body=1248 status=ok
// SIG undefined FUN_14809a294(void)

void FUN_14809a294(undefined8 param_1,char *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  longlong lVar14;
  undefined8 uVar15;
  int *piVar16;
  int iVar17;
  undefined ***pppuVar18;
  int iVar19;
  undefined4 uVar20;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  int *piStack_1a0;
  undefined8 local_198;
  longlong lStack_190;
  undefined4 *local_188;
  int local_180;
  undefined4 *local_178;
  int local_170;
  undefined4 *local_168;
  int local_160;
  undefined4 *local_158;
  int local_150;
  undefined4 *local_148;
  int local_140;
  int *local_138;
  undefined8 uStack_130;
  int local_128;
  int *local_118;
  undefined8 uStack_110;
  int local_108;
  undefined1 local_100 [8];
  longlong local_f8;
  int local_ec;
  code *local_e8;
  undefined ***local_d8;
  undefined **local_c8;
  code *local_c0;
  ulonglong local_a0;
  
  uVar12 = DAT_14c84634c;
  uVar11 = DAT_14c846348;
  uVar10 = DAT_14c846344;
  uVar9 = DAT_14c84633c._4_4_;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14ad894e0;
  local_c0 = FUN_14391eee8;
  local_e8 = FUN_1480ba3e2;
  local_1bc = param_3;
  FUN_14809aaa8(local_100);
  local_108 = 0;
  local_118 = (int *)0x0;
  uStack_110 = 0;
  FUN_144a98d08(&local_118,param_2);
  local_128 = 0;
  local_138 = (int *)0x0;
  uStack_130 = 0;
  FUN_144a98d08(&local_138,param_2);
  FUN_140126e42(&local_148,param_2);
  FUN_144a76c20(&local_188,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_158,param_2);
  lVar14 = FUN_14479d2ce(local_f8 + 0x38);
  if (lVar14 == 0) {
    piVar16 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar16 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar16) {
      iVar17 = 0;
      do {
        puVar2 = local_148 + local_140;
        *local_148 = 0;
        puVar3 = local_188 + local_180;
        *local_188 = uVar9;
        puVar4 = local_178 + local_170;
        *local_178 = uVar10;
        puVar5 = local_168 + local_160;
        *local_168 = uVar11;
        puVar6 = local_158 + local_150;
        *local_158 = uVar12;
        iVar17 = iVar17 + 1;
        piVar16 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar16 = (int *)(param_2 + 0x3c);
        }
        local_188 = puVar3;
        local_178 = puVar4;
        local_168 = puVar5;
        local_158 = puVar6;
        local_148 = puVar2;
      } while (iVar17 < *piVar16);
    }
  }
  else {
    local_198 = 0;
    lStack_190 = 0;
    local_1a8 = 0;
    piStack_1a0 = (int *)0x0;
    piVar16 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar16 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar16) {
      iVar19 = 0;
      iVar17 = -1;
      do {
        piVar16 = local_118 + local_108;
        iVar7 = *local_118;
        piVar1 = local_138 + local_128;
        iVar8 = *local_138;
        local_138 = piVar1;
        local_118 = piVar16;
        if (iVar17 != iVar7) {
          local_1c8 = iVar7;
          FUN_1480b9f4a(&local_1a8,lVar14,*(undefined4 *)(local_f8 + 0x40),local_1bc);
          iVar17 = iVar7;
        }
        pcVar13 = local_e8;
        if (((iVar8 < 0) || (lStack_190 == 0)) || (*piStack_1a0 <= iVar8)) {
          *local_148 = 0;
          *local_188 = uVar9;
          *local_178 = uVar10;
          *local_168 = uVar11;
          uVar20 = uVar12;
          local_188 = local_188 + local_180;
          local_178 = local_178 + local_170;
          local_168 = local_168 + local_160;
          local_148 = local_148 + local_140;
        }
        else {
          *local_148 = 0xffffffff;
          pppuVar18 = local_d8;
          if (local_d8 == (undefined ***)0x0) {
            pppuVar18 = &local_c8;
          }
          local_148 = local_148 + local_140;
          local_ec = iVar8;
          uVar15 = (*(code *)(*pppuVar18)[1])();
          (*pcVar13)(&local_1b8,uVar15,&local_1a8,&local_ec);
          *local_188 = local_1b8;
          *local_178 = local_1b4;
          *local_168 = local_1b0;
          uVar20 = local_1ac;
          local_188 = local_188 + local_180;
          local_178 = local_178 + local_170;
          local_168 = local_168 + local_160;
        }
        puVar2 = local_158 + local_150;
        *local_158 = uVar20;
        iVar19 = iVar19 + 1;
        piVar16 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar16 = (int *)(param_2 + 0x3c);
        }
        local_158 = puVar2;
      } while (iVar19 < *piVar16);
    }
  }
  if (local_e8 != (code *)0x0) {
    pppuVar18 = &local_c8;
    if (local_d8 != (undefined ***)0x0) {
      pppuVar18 = local_d8;
    }
    (*(code *)(*pppuVar18)[2])(pppuVar18);
  }
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809a776 FUN_14809a776 body=123 status=ok
// SIG undefined FUN_14809a776(void)

void FUN_14809a776(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined1 *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_28 = &PTR_LAB_14ad89480;
  local_20 = &LAB_14391ef04;
  local_48 = FUN_1480ba11e;
  local_58 = DAT_14c846330;
  local_50 = DAT_14c846338;
  FUN_143916189(param_2);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809a7f2 FUN_14809a7f2 body=91 status=ok
// SIG undefined FUN_14809a7f2(void)

void FUN_14809a7f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)*param_2;
  }
  FUN_1480b9a0c(param_2[3],puVar2);
  iVar3 = *(int *)(*param_2 + 0x30) + 3;
  iVar1 = *(int *)(*param_2 + 0x30) + 6;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = 1;
  if (1 < iVar1 >> 2) {
    iVar3 = iVar1 >> 2;
  }
  FUN_14809a84e(param_2,L"ComponentOffsets",iVar3);
  return;
}



// FUNCTION 14809a84e FUN_14809a84e body=255 status=ok
// SIG undefined FUN_14809a84e(void)

/* WARNING: Removing unreachable block (ram,0x00014809a8f0) */

void FUN_14809a84e(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)param_1[2];
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)*param_1;
  }
  FUN_140002266(&local_38,L"%s_%s",puVar4,param_2);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = local_38;
  *(undefined4 *)(lVar3 + 8 + lVar5) = (undefined4)local_30;
  *(undefined4 *)(lVar3 + 0xc + lVar5) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  lVar3 = *(longlong *)param_1[2];
  lVar5 = (longlong)((int)((longlong *)param_1[2])[1] + -1) * 0x10;
  if (*(int *)(lVar3 + 8 + lVar5) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(lVar3 + lVar5);
  }
  FUN_1480b9eaa(param_1[3],puVar4,param_3,0);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809a94e FUN_14809a94e body=345 status=ok
// SIG undefined FUN_14809a94e(void)

void FUN_14809a94e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar8;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar8 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar8 = *(longlong *)(lVar2 + 0x50);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar2 + 0x58) - 1U &
                             (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar8 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar5 * 0x38;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar5 * 0x38) == lVar4)
        goto LAB_14809a9aa;
        iVar5 = *(int *)(lVar8 + 0x30);
      } while (iVar5 != -1);
    }
  }
  lVar8 = 0;
LAB_14809a9aa:
  uVar6 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar7 = (ulonglong)uVar6;
  FUN_1480b9aa4();
  *(uint *)(param_2 + 0x50) = DAT_14cb38dcc + uVar6;
  lVar2 = *(longlong *)(param_2 + 0x38);
  if ((lVar8 != 0) && (iVar5 = *(int *)(*(longlong *)(lVar8 + 0x10) + 0x10), 0 < iVar5)) {
    *(int *)(lVar2 + uVar7) = iVar5;
    *(undefined4 *)(lVar2 + 4 + uVar7) = *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 0x14);
    *(undefined4 *)(lVar2 + 8 + uVar7) = *(undefined4 *)(lVar8 + 8);
    lVar4 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x28);
    if (lVar4 == 0) {
      lVar4 = DAT_14cb428f0;
    }
    *(longlong *)(lVar2 + 0x10 + uVar7) = lVar4;
    uVar6 = *(uint *)(lVar8 + 0x28);
    uVar3 = uVar6 + 3;
    if (-1 < (int)uVar6) {
      uVar3 = uVar6;
    }
    uVar6 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
    *(uint *)(param_2 + 0x50) = uVar6 + (uVar3 & 0xfffffffc) * 4;
    memcpy((void *)(*(longlong *)(param_2 + 0x38) + (ulonglong)uVar6),*(void **)(lVar8 + 0x20),
           (ulonglong)(uint)(*(int *)(lVar8 + 0x28) << 2));
    return;
  }
  *(undefined8 *)(lVar2 + uVar7) = 0;
  *(undefined4 *)(lVar2 + 8 + uVar7) = 0xffffffff;
  *(longlong *)(lVar2 + 0x10 + uVar7) = DAT_14cb428f0;
  uVar6 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  *(uint *)(param_2 + 0x50) = uVar6 + 0x10;
  puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x38) + (ulonglong)uVar6);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 14809aaa8 FUN_14809aaa8 body=148 status=ok
// SIG undefined FUN_14809aaa8(void)

void FUN_14809aaa8(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14809ab44 FUN_14809ab44 body=29 status=ok
// SIG undefined FUN_14809ab44(void)

void FUN_14809ab44(longlong param_1)

{
  FUN_1400bb2d8();
  *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x18) = *(undefined1 *)(param_1 + 0x40);
  return;
}



// FUNCTION 14809ab62 FUN_14809ab62 body=49 status=ok
// SIG undefined FUN_14809ab62(void)

undefined4 FUN_14809ab62(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1481192e4();
  if ((cVar1 == '\0') || (*(char *)(param_2 + 0x40) != *(char *)(param_1 + 0x40))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x44) >> 8),
                     *(int *)(param_2 + 0x44) == *(int *)(param_1 + 0x44));
  }
  return uVar2;
}



// FUNCTION 14809abc4 FUN_14809abc4 body=1024 status=ok
// SIG undefined FUN_14809abc4(void)

void FUN_14809abc4(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb383a8) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14ad895a0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14809b074;
LAB_14809ac72:
    puVar4[4] = pcVar2;
    *(undefined4 *)(puVar4 + 5) = 0;
    FUN_144a450dc(param_4,&local_30);
  }
  else {
    if (lVar1 == DAT_14cb383b0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      puVar4 = local_30;
      local_28 = 3;
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      *local_30 = &PTR_FUN_14ad895a0;
      local_30[3] = 0;
      FUN_14485c47a(local_30 + 3,param_1);
      pcVar2 = FUN_14809b156;
      goto LAB_14809ac72;
    }
    if (lVar1 == DAT_14cb383b8) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      puVar4 = local_30;
      local_28 = 3;
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      *local_30 = &PTR_FUN_14ad895a0;
      local_30[3] = 0;
      FUN_14485c47a(local_30 + 3,param_1);
      pcVar2 = FUN_14809b1fa;
      goto LAB_14809ac72;
    }
    if (lVar1 == DAT_14cb383c0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      puVar4 = local_30;
      local_28 = 3;
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      *local_30 = &PTR_FUN_14ad895a0;
      local_30[3] = 0;
      FUN_14485c47a(local_30 + 3,param_1);
      pcVar2 = FUN_14809b31a;
      goto LAB_14809ac72;
    }
    if (lVar1 == DAT_14cb383c8) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      puVar4 = local_30;
      local_28 = 3;
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      *local_30 = &PTR_FUN_14ad895a0;
      local_30[3] = 0;
      FUN_14485c47a(local_30 + 3,param_1);
      pcVar2 = FUN_14809b468;
      goto LAB_14809ac72;
    }
    if (lVar1 == DAT_14cb383d0) {
      local_40 = FUN_14809b624;
    }
    else {
      if (lVar1 != DAT_14cb383d8) goto LAB_14809ac95;
      local_40 = FUN_14809b858;
    }
    local_38 = 0;
    FUN_14809afc6(&local_30,param_1);
    FUN_144a450dc(param_4,&local_30);
  }
  FUN_1449db362(&local_30);
LAB_14809ac95:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809afc6 FUN_14809afc6 body=173 status=ok
// SIG undefined FUN_14809afc6(void)

longlong * FUN_14809afc6(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14ad81180;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14ad895a0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 14809b074 FUN_14809b074 body=224 status=ok
// SIG undefined FUN_14809b074(void)

void FUN_14809b074(longlong *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14809bd14(local_28);
  FUN_144a76cd4(&local_38,param_2);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar3 = 0;
    do {
      LOCK();
      piVar4 = (int *)(local_20 + 4);
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      piVar4 = local_38 + local_30;
      *local_38 = iVar1 + 1;
      iVar3 = iVar3 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_38 = piVar4;
    } while (iVar3 < *piVar5);
  }
  if ((*(byte *)(param_1 + 8) & 0xfd) == 1) {
    *local_20 = 1;
    uVar2 = *(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = uVar2 | 1;
    if ((~uVar2 & 4) == 0) {
      (**(code **)(*param_1 + 0x428))(param_1);
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809b156 FUN_14809b156 body=162 status=ok
// SIG undefined FUN_14809b156(void)

void FUN_14809b156(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14809bd14(local_28);
  FUN_144a76cd4(&local_38,param_2);
  uVar2 = *(undefined4 *)(local_20 + 4);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar3 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = uVar2;
      iVar3 = iVar3 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_38 = puVar1;
    } while (iVar3 < *piVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809b1fa FUN_14809b1fa body=287 status=ok
// SIG undefined FUN_14809b1fa(void)

void FUN_14809b1fa(longlong *param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14809bd14(local_40);
  iVar6 = 0;
  local_48 = 0;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  FUN_144a76d88(&local_58,param_2);
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08(&local_78,param_2);
  bVar4 = *param_2;
  lVar5 = *(longlong *)(param_2 + 0x80);
  pbVar7 = (byte *)(lVar5 + 0x40);
  if (bVar4 != 0) {
    pbVar7 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar7) {
    do {
      piVar1 = local_58 + local_48;
      puVar2 = local_78 + local_68;
      if (*local_58 != 0) {
        LOCK();
        *(undefined4 *)(local_38 + 4) = *local_78;
        UNLOCK();
        bVar4 = *param_2;
        lVar5 = *(longlong *)(param_2 + 0x80);
      }
      iVar6 = iVar6 + 1;
      pbVar7 = (byte *)(lVar5 + 0x40);
      if ((bVar4 & 1) != 0) {
        pbVar7 = param_2 + 0x3c;
      }
      local_78 = puVar2;
      local_58 = piVar1;
    } while (iVar6 < *(int *)pbVar7);
  }
  if ((*(byte *)(param_1 + 8) & 0xfd) == 1) {
    *local_38 = 1;
    uVar3 = *(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = uVar3 | 1;
    if ((~uVar3 & 4) == 0) {
      (**(code **)(*param_1 + 0x428))(param_1);
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809b31a FUN_14809b31a body=332 status=ok
// SIG undefined FUN_14809b31a(void)

void FUN_14809b31a(longlong *param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14809bd14(local_40);
  iVar7 = 0;
  local_48 = 0;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  FUN_144a76d88(&local_58,param_2);
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08(&local_78,param_2);
  FUN_144a76cd4(&local_88,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    do {
      piVar5 = local_58 + local_48;
      puVar1 = local_78 + local_68;
      if (*local_58 == 0) {
        uVar4 = *(undefined4 *)(local_38 + 4);
      }
      else {
        LOCK();
        uVar4 = *(undefined4 *)(local_38 + 4);
        *(undefined4 *)(local_38 + 4) = *local_78;
        UNLOCK();
      }
      puVar2 = local_88 + local_80;
      *local_88 = uVar4;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_88 = puVar2;
      local_78 = puVar1;
      local_58 = piVar5;
    } while (iVar7 < *piVar6);
  }
  if ((*(byte *)(param_1 + 8) & 0xfd) == 1) {
    *local_38 = 1;
    uVar3 = *(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = uVar3 | 1;
    if ((~uVar3 & 4) == 0) {
      (**(code **)(*param_1 + 0x428))(param_1);
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809b468 FUN_14809b468 body=442 status=ok
// SIG undefined FUN_14809b468(void)

void FUN_14809b468(longlong *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  int *local_98;
  int local_90;
  int *local_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14809bd14(local_40);
  iVar7 = 0;
  local_48 = 0;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  FUN_144a76d88(&local_58,param_2);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a98d08(&local_78,param_2);
  FUN_144a76cd4(&local_88,param_2);
  FUN_144a76cd4(&local_98,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    do {
      piVar5 = local_58 + local_48;
      piVar1 = local_78 + local_68;
      if (*local_58 == 0) {
        iVar2 = *(int *)(local_38 + 4);
        *local_88 = iVar2;
        *local_98 = iVar2;
      }
      else {
        iVar3 = *local_78;
        LOCK();
        piVar6 = (int *)(local_38 + 4);
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + iVar3;
        UNLOCK();
        *local_88 = iVar2;
        *local_98 = iVar2 + iVar3;
      }
      local_88 = local_88 + local_80;
      local_98 = local_98 + local_90;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_78 = piVar1;
      local_58 = piVar5;
    } while (iVar7 < *piVar6);
  }
  if ((*(byte *)(param_1 + 8) & 0xfd) == 1) {
    *local_38 = 1;
    uVar4 = *(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = uVar4 | 1;
    if ((~uVar4 & 4) == 0) {
      (**(code **)(*param_1 + 0x428))(param_1);
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809b624 FUN_14809b624 body=563 status=ok
// SIG undefined FUN_14809b624(void)

void FUN_14809b624(longlong *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  int local_50;
  int *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_30 [8];
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14809bd14(local_30);
  local_48 = (int *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a76d88(&local_48,param_2);
  FUN_144a76cd4(&local_58,param_2);
  FUN_144a76cd4(&local_68,param_2);
  if ((longlong)local_38 < 1) {
    piVar4 = local_48 + local_38;
    iVar3 = *local_48;
    if (iVar3 == 0) {
      iVar2 = *(int *)(local_28 + 4);
    }
    else {
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      LOCK();
      piVar7 = (int *)(local_28 + 4);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + *piVar6;
      UNLOCK();
    }
    piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar6 = (int *)(param_2 + 0x3c);
    }
    local_48 = piVar4;
    if (0 < *piVar6) {
      iVar5 = 0;
      do {
        piVar4 = local_58 + local_50;
        *local_58 = iVar2;
        iVar2 = iVar2 + (uint)(iVar3 != 0);
        piVar6 = local_68 + local_60;
        *local_68 = iVar2;
        iVar5 = iVar5 + 1;
        piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar7 = (int *)(param_2 + 0x3c);
        }
        local_68 = piVar6;
        local_58 = piVar4;
      } while (iVar5 < *piVar7);
    }
  }
  else {
    piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar4 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar4) {
      iVar3 = 0;
      do {
        piVar4 = local_48 + local_38;
        if (*local_48 == 0) {
          iVar2 = *(int *)(local_28 + 4);
          *local_58 = iVar2;
          *local_68 = iVar2;
        }
        else {
          LOCK();
          piVar6 = (int *)(local_28 + 4);
          iVar2 = *piVar6;
          *piVar6 = *piVar6 + 1;
          UNLOCK();
          *local_58 = iVar2;
          *local_68 = iVar2 + 1;
        }
        local_58 = local_58 + local_50;
        local_68 = local_68 + local_60;
        iVar3 = iVar3 + 1;
        piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar6 = (int *)(param_2 + 0x3c);
        }
        local_48 = piVar4;
      } while (iVar3 < *piVar6);
    }
  }
  if ((*(byte *)(param_1 + 8) & 0xfd) == 1) {
    *local_28 = 1;
    uVar1 = *(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = uVar1 | 1;
    if ((~uVar1 & 4) == 0) {
      (**(code **)(*param_1 + 0x428))(param_1);
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809b858 FUN_14809b858 body=566 status=ok
// SIG undefined FUN_14809b858(void)

void FUN_14809b858(longlong *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  int local_50;
  int *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_30 [8];
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14809bd14(local_30);
  local_48 = (int *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a76d88(&local_48,param_2);
  FUN_144a76cd4(&local_58,param_2);
  FUN_144a76cd4(&local_68,param_2);
  if ((longlong)local_38 < 1) {
    piVar4 = local_48 + local_38;
    iVar3 = *local_48;
    if (iVar3 == 0) {
      iVar2 = *(int *)(local_28 + 4);
    }
    else {
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      LOCK();
      piVar7 = (int *)(local_28 + 4);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 - *piVar5;
      UNLOCK();
    }
    piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar5 = (int *)(param_2 + 0x3c);
    }
    local_48 = piVar4;
    if (0 < *piVar5) {
      iVar6 = 0;
      do {
        piVar4 = local_58 + local_50;
        *local_58 = iVar2;
        iVar2 = iVar2 - (uint)(iVar3 != 0);
        piVar5 = local_68 + local_60;
        *local_68 = iVar2;
        iVar6 = iVar6 + 1;
        piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar7 = (int *)(param_2 + 0x3c);
        }
        local_68 = piVar5;
        local_58 = piVar4;
      } while (iVar6 < *piVar7);
    }
  }
  else {
    piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar4 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar4) {
      iVar3 = 0;
      do {
        piVar4 = local_48 + local_38;
        if (*local_48 == 0) {
          iVar2 = *(int *)(local_28 + 4);
          *local_58 = iVar2;
          *local_68 = iVar2;
        }
        else {
          LOCK();
          piVar5 = (int *)(local_28 + 4);
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          *local_58 = iVar2;
          *local_68 = iVar2 + -1;
        }
        local_58 = local_58 + local_50;
        local_68 = local_68 + local_60;
        iVar3 = iVar3 + 1;
        piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar5 = (int *)(param_2 + 0x3c);
        }
        local_48 = piVar4;
      } while (iVar3 < *piVar5);
    }
  }
  if ((*(byte *)(param_1 + 8) & 0xfd) == 1) {
    *local_28 = 1;
    uVar1 = *(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = uVar1 | 1;
    if ((~uVar1 & 4) == 0) {
      (**(code **)(*param_1 + 0x428))(param_1);
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809bab2 FUN_14809bab2 body=141 status=ok
// SIG undefined FUN_14809bab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14809bab2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10);
  lVar1 = FUN_1480bb52c(*(longlong *)(param_2 + 0x48) + 0x20,
                        (int)((ulonglong)local_28 >> 0x20) * 0x17 + (int)local_28);
  uVar2 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_1480bb2be();
  *(uint *)(param_2 + 0x50) = uVar2 + _DAT_14cb38e5c;
  *(undefined4 *)(*(longlong *)(param_2 + 0x38) + (ulonglong)uVar2) = *(undefined4 *)(lVar1 + 8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809bb50 FUN_14809bb50 body=175 status=ok
// SIG undefined FUN_14809bb50(void)

undefined8 FUN_14809bb50(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b107b0();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809bc00 FUN_14809bc00 body=274 status=ok
// SIG undefined FUN_14809bc00(void)

undefined8
FUN_14809bc00(undefined8 param_1,longlong param_2,longlong param_3,int param_4,longlong param_5,
             longlong *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  int local_48;
  int local_40;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_2 + 0x30);
  iVar2 = *(int *)(param_3 + 0x30);
  if (iVar1 == iVar2) {
    lVar4 = *(longlong *)(param_2 + 0x28);
    iVar1 = *(int *)(lVar4 + (longlong)(param_4 * 2) * 4);
    lVar5 = *(longlong *)(param_3 + 0x28);
    iVar3 = *(int *)(lVar5 + (longlong)(param_4 * 2) * 4);
    lVar9 = (longlong)(param_4 * 2 + 1);
    if (iVar1 == iVar3) {
      iVar2 = *(int *)(lVar4 + lVar9 * 4);
      iVar7 = *(int *)(lVar5 + lVar9 * 4);
      uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      if (iVar2 == iVar7) goto LAB_14809bcb5;
    }
    else {
      iVar7 = *(int *)(lVar5 + lVar9 * 4);
      iVar2 = *(int *)(lVar4 + lVar9 * 4);
    }
    pwVar8 = L"Cpu|Gpu values to do not match LhsValues(%d|%d) != RhsValues(%d|%d)";
    local_48 = iVar3;
    local_40 = iVar7;
  }
  else {
    pwVar8 = L"Number of LhsValues(%d) != RhsValues(%d)";
  }
  FUN_140002266(&local_30,pwVar8,iVar1,iVar2);
  if (&local_30 == param_6) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_6 != 0) {
      FUN_1400020a8();
    }
    *param_6 = local_30;
    *(undefined4 *)(param_6 + 1) = local_28;
    *(undefined4 *)((longlong)param_6 + 0xc) = local_24;
  }
  uVar6 = 0;
LAB_14809bcb5:
  if (*(char *)(param_5 + 4) == '\x01') {
    *(undefined1 *)(param_5 + 4) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14809bd14 FUN_14809bd14 body=148 status=ok
// SIG undefined FUN_14809bd14(void)

void FUN_14809bd14(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14809bdbc FUN_14809bdbc body=668 status=ok
// SIG undefined FUN_14809bdbc(void)

void FUN_14809bdbc(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  bVar2 = *(byte *)(param_1 + 0x38);
  if (bVar2 < 2) {
    uVar1 = *param_2;
    if (((((ulonglong)uVar1 == 0xffffffff) || ((int)uVar1 < 0)) ||
        (*(int *)(*(longlong *)(param_2 + 2) + 0x48) <= (int)uVar1)) ||
       (lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 2) + 0x40) + (ulonglong)uVar1 * 8),
       lVar5 == 0)) goto LAB_14809be3b;
    lVar4 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_14809be5d;
    lVar5 = *(longlong *)(lVar5 + 0x1c8);
  }
  else {
LAB_14809be3b:
    lVar5 = 0;
  }
  if (lVar5 == 0 && (bVar2 == 2 || bVar2 == 0)) {
    lVar5 = FUN_14479d2ce(param_3 + 0x48);
    lVar4 = FUN_144a7e9aa();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar5 = *(longlong *)(lVar5 + 0x120);
    }
    if ((*(longlong *)(param_1 + 0x70) != 0) || (*(longlong *)(param_1 + 0x78) != 0)) {
      for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x120)) {
        lVar4 = *(longlong *)(param_1 + 0x70);
        if (lVar4 == 0) {
LAB_14809bf0b:
          if ((*(longlong *)(param_1 + 0x78) == 0) || (cVar3 = FUN_14342c3d2(lVar5), cVar3 != '\0'))
          goto LAB_14809be5d;
        }
        else {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar4);
          }
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_14809bf0b;
        }
      }
      lVar5 = 0;
    }
  }
  if (lVar5 != 0 || bVar2 != 0 && bVar2 != 3) goto LAB_14809be5d;
  lVar4 = param_1 + 0x50;
  lVar5 = FUN_14479d2ce(lVar4);
  if (lVar5 == 0) {
    if (((*(int *)(param_1 + 0x5c) != 0 || *(int *)(param_1 + 0x58) != 0) ||
        *(int *)(param_1 + 0x60) != 0) || *(int *)(param_1 + 100) != 0) {
      lVar5 = thunk_FUN_140971090();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar5 == 0) || (cVar3 == '\0')) {
        FUN_14485c47a(lVar4,lVar5);
        if (lVar5 == 0) goto LAB_14809bf6f;
      }
      else {
        uVar1 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar4,lVar5);
        }
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_14809bf4f;
    }
  }
  else {
LAB_14809bf4f:
    lVar4 = FUN_144a6c4d8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = FUN_144a6c4d8();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30 ||
          (lVar5 = *(longlong *)(lVar5 + 0x1c8), lVar5 != 0)))) goto LAB_14809be5d;
    }
  }
LAB_14809bf6f:
  lVar5 = *(longlong *)(param_1 + 0x68);
LAB_14809be5d:
  *(bool *)(param_2 + 0xe) = lVar5 != 0;
  bVar2 = FUN_1409d2f40(param_2 + 0x70,lVar5);
  *(byte *)((longlong)param_2 + 0x39) = *(byte *)((longlong)param_2 + 0x39) | bVar2 ^ 1;
  FUN_14485c47a(param_2 + 0x70,lVar5);
  return;
}



// FUNCTION 14809c058 FUN_14809c058 body=592 status=ok
// SIG undefined FUN_14809c058(void)

void FUN_14809c058(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (longlong *)0x0) {
    lVar5 = FUN_144a799b0();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar5 = FUN_1406d0862();
      if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        lVar5 = FUN_144a85a6c();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
            == lVar5 + 0x30)) {
          lVar5 = (**(code **)(*param_1 + 0x310))(param_1);
          uVar1 = *(uint *)(lVar5 + 0x28);
          iVar4 = FUN_147d1521a(param_1);
          iVar6 = iVar4 + uVar1;
          if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar6);
          }
          if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
            FUN_1402191ca(param_2);
          }
          if (0 < (int)uVar1) {
            lVar7 = 0;
            do {
              lVar3 = *(longlong *)(lVar5 + 0x20);
              iVar6 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
                FUN_1446f84a2(param_2,iVar6);
              }
              *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = *(undefined8 *)(lVar3 + lVar7);
              lVar7 = lVar7 + 0xc;
            } while ((ulonglong)uVar1 * 0xc != lVar7);
          }
          if (0 < iVar4) {
            iVar6 = 0;
            do {
              lVar5 = FUN_147d15256(param_1,iVar6);
              iVar2 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
                FUN_1446f84a2(param_2,iVar2);
              }
              *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar5 + 0x28);
              iVar6 = iVar6 + 1;
            } while (iVar4 != iVar6);
          }
        }
      }
      else {
        iVar4 = (int)param_1[0x37];
        if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar4);
        }
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          FUN_1402191ca(param_2);
          iVar4 = (int)param_1[0x37];
        }
        if (iVar4 != 0) {
          lVar5 = param_1[0x36];
          lVar7 = 0;
          do {
            lVar3 = *(longlong *)(lVar5 + lVar7);
            iVar6 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
              FUN_1446f84a2(param_2,iVar6);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = *(undefined8 *)(lVar3 + 0x28);
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar4 * 8 != lVar7);
        }
      }
    }
    else {
      FUN_147a04838(param_1,&local_58);
      if (&local_58 == param_2) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_58;
        *(undefined4 *)(param_2 + 1) = local_50;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809c2aa FUN_14809c2aa body=4744 status=ok
// SIG undefined FUN_14809c2aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14809c2aa(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 uVar24;
  float *pfVar25;
  int iVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  longlong *plVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  float fVar35;
  float fVar44;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar45;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  float fVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  float fVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar69;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  float fVar74;
  float fVar75;
  undefined1 auVar73 [16];
  float fVar76;
  float fVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auStack_228 [40];
  longlong *local_200;
  longlong local_1f8;
  uint local_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float *pfStack_1d0;
  undefined8 local_1c8;
  float fStack_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  cVar4 = *(char *)(param_2 + 0x39);
  cVar5 = *(char *)(param_1 + 0xa0);
  if (cVar4 == '\x01') {
    *(undefined2 *)(param_2 + 0x39) = 0x100;
    uVar24 = uRam000000014c846068;
    *(undefined8 *)(param_2 + 0x110) = _DAT_14c846060;
    *(undefined8 *)(param_2 + 0x118) = uVar24;
    uVar24 = uRam000000014c846078;
    *(undefined8 *)(param_2 + 0x120) = _DAT_14c846070;
    *(undefined8 *)(param_2 + 0x128) = uVar24;
    uVar24 = uRam000000014c846088;
    *(undefined8 *)(param_2 + 0x130) = _DAT_14c846080;
    *(undefined8 *)(param_2 + 0x138) = uVar24;
    uVar24 = uRam000000014c846068;
    *(undefined8 *)(param_2 + 0x140) = _DAT_14c846060;
    *(undefined8 *)(param_2 + 0x148) = uVar24;
    uVar24 = uRam000000014c846078;
    *(undefined8 *)(param_2 + 0x150) = _DAT_14c846070;
    *(undefined8 *)(param_2 + 0x158) = uVar24;
    uVar24 = uRam000000014c846088;
    *(undefined8 *)(param_2 + 0x160) = _DAT_14c846080;
    *(undefined8 *)(param_2 + 0x168) = uVar24;
    *(undefined8 *)(param_2 + 0x170) = 0;
    *(undefined4 *)(param_2 + 0x178) = 0;
    plVar20 = (longlong *)(param_2 + 0x180);
    *(undefined4 *)(param_2 + 0x188) = 0;
    if (*(int *)(param_2 + 0x18c) != 0) {
      FUN_14481578e(plVar20,0);
    }
    *(undefined4 *)(param_2 + 0x198) = 0;
    local_1f8 = param_3;
    if (*(int *)(param_2 + 0x19c) != 0) {
      FUN_1402191ca(param_2 + 400,0);
    }
    uVar24 = FUN_14479d2ce(param_2 + 0x1c0);
    FUN_14809c058(uVar24,param_2 + 400);
    iVar26 = *(int *)(param_2 + 0x198);
    *(int *)(param_2 + 0x170) = iVar26;
    if (iVar26 < 1) {
      iVar32 = *(int *)(param_2 + 0x188);
      *(uint *)(param_2 + 0x188) = iVar32 + 1U;
      if (*(uint *)(param_2 + 0x18c) < iVar32 + 1U) {
        FUN_1446f48e2(plVar20,iVar32);
        iVar26 = *(int *)(param_2 + 0x170);
      }
      *(int *)(*plVar20 + (longlong)iVar32 * 4) = iVar26;
      param_3 = local_1f8;
    }
    else {
      *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)(param_1 + 0x48);
      pfStack_1d0 = (float *)0x0;
      local_1c8 = 1.35807730621777e-312;
      uVar18 = FUN_1407c4842(&local_1d8,iVar26);
      FUN_142b31174(&local_1d8,uVar18,iVar26,0);
      param_3 = local_1f8;
      iVar26 = *(int *)(param_2 + 0x170);
      if (*(int *)(param_2 + 0x170) < *(int *)(param_2 + 0x174)) {
        iVar26 = *(int *)(param_2 + 0x174);
      }
      if (iVar26 < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar26 + 1);
      }
      uVar19 = *(uint *)(param_2 + 0x18c);
      if ((int)uVar19 <= iVar26) {
        FUN_14481578e(plVar20);
        uVar19 = *(uint *)(param_2 + 0x18c);
      }
      iVar26 = *(int *)(param_2 + 0x188);
      *(uint *)(param_2 + 0x188) = iVar26 + 1U;
      local_200 = plVar20;
      if (uVar19 < iVar26 + 1U) {
        FUN_1446f48e2(plVar20,iVar26);
      }
      iVar32 = *(int *)(param_2 + 0x170);
      *(int *)(*(longlong *)(param_2 + 0x180) + (longlong)iVar26 * 4) = iVar32;
      plVar20 = local_200;
      if ((longlong)*(int *)(param_1 + 0x48) != 0) {
        plVar31 = *(longlong **)(param_1 + 0x40);
        plVar30 = plVar31 + *(int *)(param_1 + 0x48);
        do {
          iVar26 = *(int *)(param_2 + 0x198);
          if ((longlong)iVar26 != 0) {
            iVar32 = 0;
            lVar23 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_2 + 400) + lVar23) == *plVar31) {
                if (iVar32 < iVar26 && -1 < iVar32) {
                  iVar26 = *(int *)(param_2 + 0x188);
                  *(uint *)(param_2 + 0x188) = iVar26 + 1U;
                  if (*(uint *)(param_2 + 0x18c) < iVar26 + 1U) {
                    FUN_1446f48e2(local_200,iVar26);
                  }
                  *(int *)(*local_200 + (longlong)iVar26 * 4) = iVar32;
                  pfVar25 = pfStack_1d0;
                  if (pfStack_1d0 == (float *)0x0) {
                    pfVar25 = &local_1d8;
                  }
                  pfVar25[(uint)((ulonglong)lVar23 >> 8) & 0x7ffffff] =
                       (float)((uint)pfVar25[(uint)((ulonglong)lVar23 >> 8) & 0x7ffffff] |
                              1 << ((byte)iVar32 & 0x1f));
                  plVar20 = local_200;
                  goto LAB_14809c8bd;
                }
                break;
              }
              lVar23 = lVar23 + 8;
              iVar32 = iVar32 + 1;
            } while ((longlong)iVar26 * 8 - lVar23 != 0);
          }
          iVar26 = *(int *)(param_2 + 0x188);
          *(uint *)(param_2 + 0x188) = iVar26 + 1U;
          if (*(uint *)(param_2 + 0x18c) < iVar26 + 1U) {
            FUN_1446f48e2(plVar20,iVar26);
          }
          *(undefined4 *)(*(longlong *)(param_2 + 0x180) + (longlong)iVar26 * 4) =
               *(undefined4 *)(param_2 + 0x170);
LAB_14809c8bd:
          plVar31 = plVar31 + 1;
        } while (plVar31 != plVar30);
        iVar32 = *(int *)(param_2 + 0x170);
        param_3 = local_1f8;
      }
      if (0 < iVar32) {
        uVar19 = 0;
        do {
          pfVar25 = pfStack_1d0;
          if (pfStack_1d0 == (float *)0x0) {
            pfVar25 = &local_1d8;
          }
          if (((uint)pfVar25[uVar19 >> 5] >> (uVar19 & 0x1f) & 1) == 0) {
            iVar26 = *(int *)(param_2 + 0x188);
            *(uint *)(param_2 + 0x188) = iVar26 + 1U;
            if (*(uint *)(param_2 + 0x18c) < iVar26 + 1U) {
              FUN_1446f48e2(plVar20,iVar26);
            }
            *(uint *)(*(longlong *)(param_2 + 0x180) + (longlong)iVar26 * 4) = uVar19;
            *(int *)(param_2 + 0x178) = *(int *)(param_2 + 0x178) + 1;
            iVar32 = *(int *)(param_2 + 0x170);
          }
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < iVar32);
      }
      if (pfStack_1d0 != (float *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140b19cbc(param_2 + 0x1a0,*(int *)(param_2 + 0x170) + 1,1);
    FUN_140b19cbc(param_2 + 0x1b0,*(int *)(param_2 + 0x170) + 1,1);
  }
  if ((cVar5 != '\0' || cVar4 != '\0') && (0 < *(int *)(param_2 + 0x170))) {
    if (cVar4 == '\0') {
      iVar26 = *(int *)(param_2 + 0x1a8);
      pvVar6 = *(void **)(param_2 + 0x1a0);
      *(int *)(param_2 + 0x1b8) = iVar26;
      if (iVar26 == 0 && *(int *)(param_2 + 0x1bc) == 0) {
        *(undefined4 *)(param_2 + 0x1bc) = 0;
      }
      else {
        FUN_14049199c((undefined8 *)(param_2 + 0x1b0),iVar26);
        if (iVar26 != 0) {
          memcpy(*(void **)(param_2 + 0x1b0),pvVar6,(longlong)iVar26 * 0x30);
        }
      }
    }
    lVar23 = param_2 + 0x1c0;
    plVar20 = (longlong *)FUN_14479d2ce(lVar23);
    local_1f8 = param_3;
    if (plVar20 == (longlong *)0x0) {
LAB_14809c3a4:
      lVar21 = FUN_14479d2ce(lVar23);
      if (lVar21 != 0) {
        lVar22 = FUN_1406d0862();
        if ((*(int *)(lVar22 + 0x38) <= *(int *)(*(longlong *)(lVar21 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar22 + 0x38) * 8) == lVar22 + 0x30)) {
          *(undefined1 *)(param_2 + 0x3a) = 1;
          if (0 < *(int *)(param_2 + 0x170)) {
            lVar23 = 0;
            lVar22 = 0;
            do {
              lVar27 = *(longlong *)(*(longlong *)(lVar21 + 0x1b0) + lVar22 * 8);
              auVar52 = insertps(ZEXT416((uint)(float)*(double *)(lVar27 + 0x30)),
                                 ZEXT416((uint)(float)*(double *)(lVar27 + 0x38)),0x1c);
              auVar52 = insertps(auVar52,ZEXT416((uint)(float)*(double *)(lVar27 + 0x40)),0x28);
              *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x1a0) + 0x10 + lVar23) = auVar52;
              lVar7 = *(longlong *)(param_2 + 0x1a0);
              FUN_144a7484c(lVar27 + 0x48,&local_1d8);
              auVar52 = insertps(ZEXT416((uint)(float)(double)CONCAT44(fStack_1d4,local_1d8)),
                                 ZEXT416((uint)(float)(double)pfStack_1d0),0x10);
              auVar52 = insertps(auVar52,ZEXT416((uint)(float)local_1c8),0x20);
              auVar52 = insertps(auVar52,ZEXT416((uint)(float)(double)CONCAT44(uStack_1bc,fStack_1c0
                                                                              )),0x30);
              *(undefined1 (*) [16])(lVar7 + lVar23) = auVar52;
              auVar52 = insertps(ZEXT416((uint)(float)*(double *)(lVar27 + 0x60)),
                                 ZEXT416((uint)(float)*(double *)(lVar27 + 0x68)),0x1c);
              auVar52 = insertps(auVar52,ZEXT416((uint)(float)*(double *)(lVar27 + 0x70)),0x28);
              *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x1a0) + 0x20 + lVar23) = auVar52;
              lVar22 = lVar22 + 1;
              lVar23 = lVar23 + 0x30;
            } while (lVar22 < *(int *)(param_2 + 0x170));
          }
          goto LAB_14809c40c;
        }
      }
      plVar20 = (longlong *)FUN_14479d2ce(lVar23);
      if (plVar20 != (longlong *)0x0) {
        lVar23 = FUN_144a85a6c();
        if ((*(int *)(lVar23 + 0x38) <= *(int *)(plVar20[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(lVar23 + 0x38) * 8)
            == lVar23 + 0x30)) {
          *(undefined1 *)(param_2 + 0x3a) = 1;
          lVar23 = (**(code **)(*plVar20 + 0x310))(plVar20);
          plVar31 = (longlong *)(longlong)*(int *)(lVar23 + 0x28);
          local_1ec = FUN_147d1521a(plVar20);
          auVar17 = _DAT_149e1ef10;
          auVar52 = _DAT_149932320;
          local_200 = plVar31;
          if (0 < (longlong)plVar31) {
            lVar21 = 0;
            fVar9 = DAT_149e1ef10._4_4_;
            fVar10 = DAT_149e1ef10._12_4_;
            uVar33 = 0;
            do {
              lVar22 = *(longlong *)(lVar23 + 0x30);
              pdVar2 = (double *)(lVar22 + 0x50 + lVar21 * 8);
              fVar35 = (float)*pdVar2;
              fVar44 = (float)pdVar2[1];
              pdVar2 = (double *)(lVar22 + 0x40 + lVar21 * 8);
              fVar46 = (float)*pdVar2;
              fVar49 = (float)pdVar2[1];
              auVar36._0_8_ = CONCAT44(fVar49,fVar46);
              pdVar2 = (double *)(lVar22 + 0x30 + lVar21 * 8);
              fVar50 = (float)*pdVar2;
              fVar56 = (float)pdVar2[1];
              auVar77._12_4_ = fVar56;
              auVar77._8_4_ = fVar50;
              auVar36._8_8_ = CONCAT44(fVar44,fVar35);
              pdVar2 = (double *)(lVar22 + 0x20 + lVar21 * 8);
              auVar77._0_4_ = (float)*pdVar2;
              auVar77._4_4_ = (float)pdVar2[1];
              pdVar2 = (double *)(lVar22 + 0x10 + lVar21 * 8);
              fVar63 = (float)*pdVar2;
              fVar64 = (float)pdVar2[1];
              pdVar2 = (double *)(lVar22 + lVar21 * 8);
              fVar65 = (float)*pdVar2;
              fVar69 = (float)pdVar2[1];
              auVar81._4_4_ = fVar69;
              auVar81._0_4_ = fVar65;
              auVar81._12_4_ = fVar64;
              auVar81._8_4_ = fVar63;
              uVar19 = *(uint *)(*(longlong *)(lVar23 + 0x20) + 8 + lVar21);
              lVar22 = *(longlong *)(param_2 + 0x1a0);
              if (uVar19 < uVar33) {
                lVar27 = (longlong)(int)uVar19 * 0x30;
                pauVar1 = (undefined1 (*) [16])(lVar22 + lVar27);
                auVar81 = *(undefined1 (*) [16])(lVar22 + 0x20 + lVar27);
                fVar8 = auVar81._0_4_;
                fVar57 = auVar81._4_4_;
                fVar62 = auVar81._8_4_;
                fVar51 = auVar81._12_4_;
                auVar86._8_8_ = CONCAT44(fVar44,fVar35);
                auVar86._0_8_ = auVar36._0_8_;
                auVar36 = minps(auVar86,auVar81);
                auVar37._4_4_ = -(uint)(auVar36._4_4_ < 0.0);
                auVar37._0_4_ = -(uint)(auVar36._0_4_ < 0.0);
                auVar37._8_4_ = -(uint)(auVar36._8_4_ < 0.0);
                auVar37._12_4_ = -(uint)(auVar36._12_4_ < 0.0);
                iVar26 = movmskps((int)lVar27,auVar37);
                if (iVar26 == 0) {
                  auVar36 = *pauVar1;
                  fVar70 = auVar36._0_4_;
                  fVar71 = auVar36._4_4_;
                  fVar45 = auVar36._8_4_;
                  fVar82 = auVar36._12_4_;
                  fVar76 = auVar77._0_4_ * fVar8;
                  fVar79 = auVar77._4_4_ * fVar57;
                  fVar50 = fVar50 * fVar62;
                  fVar56 = fVar56 * fVar51;
                  fVar83 = fVar79 * fVar70 - fVar76 * fVar71;
                  fVar84 = fVar50 * fVar71 - fVar79 * fVar45;
                  fVar74 = fVar76 * fVar45 - fVar50 * fVar70;
                  fVar75 = fVar56 * fVar82 - fVar56 * fVar82;
                  fVar83 = fVar83 + fVar83;
                  fVar84 = fVar84 + fVar84;
                  fVar74 = fVar74 + fVar74;
                  fVar75 = fVar75 + fVar75;
                  auVar77._4_4_ =
                       (fVar84 * fVar45 - fVar83 * fVar70) + fVar82 * fVar74 + fVar79 +
                       *(float *)(pauVar1[1] + 4);
                  auVar77._0_4_ =
                       (fVar83 * fVar71 - fVar74 * fVar45) + fVar82 * fVar84 + fVar76 +
                       *(float *)pauVar1[1];
                  auVar81._4_4_ =
                       fVar45 * fVar65 * 1.0 +
                       fVar71 * fVar64 * 1.0 + fVar70 * fVar63 * -1.0 + fVar69 * fVar82;
                  auVar81._0_4_ =
                       fVar45 * fVar69 * -1.0 +
                       fVar71 * fVar63 * 1.0 + fVar70 * fVar64 * 1.0 + fVar65 * fVar82;
                  auVar36._0_4_ = fVar46 * fVar8;
                  auVar36._4_4_ = fVar49 * fVar57;
                  auVar36._8_4_ = fVar35 * fVar62;
                  auVar36._12_4_ = fVar44 * fVar51;
                  auVar81._8_4_ =
                       fVar45 * fVar64 * 1.0 +
                       fVar71 * fVar65 * -1.0 + fVar70 * fVar69 * 1.0 + fVar63 * fVar82;
                  auVar81._12_4_ =
                       fVar45 * fVar63 * -1.0 +
                       fVar71 * fVar69 * -1.0 + fVar70 * fVar65 * -1.0 + fVar64 * fVar82;
                  auVar77._8_4_ =
                       (fVar74 * fVar70 - fVar84 * fVar71) + fVar82 * fVar83 + fVar50 +
                       *(float *)(pauVar1[1] + 8);
                  auVar77._12_4_ =
                       (fVar75 * fVar82 - fVar75 * fVar82) + fVar82 * fVar75 + fVar56 +
                       *(float *)(pauVar1[1] + 0xc);
                }
                else {
                  auVar36._4_4_ = fVar49 * fVar57;
                  auVar36._0_4_ = fVar46 * fVar8;
                  fVar50 = *(float *)*pauVar1;
                  fVar56 = *(float *)(*pauVar1 + 4);
                  fVar70 = *(float *)(*pauVar1 + 8);
                  fVar71 = *(float *)(*pauVar1 + 0xc);
                  fVar82 = fVar50 + fVar50;
                  fVar83 = fVar56 + fVar56;
                  fVar84 = fVar70 + fVar70;
                  fVar45 = fVar71 * (fVar71 + fVar71);
                  auVar80._0_4_ = (auVar17._0_4_ - (fVar70 * fVar84 + fVar56 * fVar83)) * fVar8;
                  auVar80._4_4_ = (fVar9 - (fVar70 * fVar84 + fVar50 * fVar82)) * fVar57;
                  auVar80._8_4_ = (auVar17._8_4_ - (fVar56 * fVar83 + fVar50 * fVar82)) * fVar62;
                  auVar80._12_4_ = (fVar10 - (fVar45 + fVar45)) * fVar51;
                  fVar70 = (fVar83 * fVar50 + fVar84 * fVar71) * fVar8;
                  local_118 = (fVar84 * fVar50 + fVar83 * fVar71) * fVar62;
                  fStack_114 = (fVar84 * fVar56 - fVar82 * fVar71) * fVar62;
                  auVar81 = blendps(auVar80,ZEXT816(0),8);
                  auVar85._4_4_ = (fVar84 * fVar56 + fVar82 * fVar71) * fVar57;
                  auVar85._0_4_ = fVar70;
                  auVar85._8_4_ = local_118;
                  auVar85._12_4_ = (fVar82 * fVar50 + fVar82 * fVar71) * fVar51;
                  local_138._4_4_ = fVar70;
                  local_138._0_4_ = auVar80._0_4_;
                  local_138._8_4_ = (fVar84 * fVar50 - fVar83 * fVar71) * fVar8;
                  local_138._12_4_ = 0;
                  auVar86 = insertps(auVar85,auVar85,0x4c);
                  uStack_120 = auVar86._0_4_;
                  uStack_11c = auVar86._8_4_;
                  uStack_110 = auVar81._8_4_;
                  uStack_10c = auVar81._12_4_;
                  local_128 = (double)CONCAT44(auVar80._4_4_,
                                               (fVar83 * fVar50 - fVar84 * fVar71) * fVar57);
                  local_108 = insertps(pauVar1[1],ZEXT816(0x3f800000),0x30);
                  fVar56 = fVar65 + fVar65;
                  fVar70 = fVar69 + fVar69;
                  fVar71 = fVar63 + fVar63;
                  fVar50 = fVar64 * (fVar64 + fVar64);
                  auVar58._0_4_ = (auVar17._0_4_ - (fVar63 * fVar71 + fVar69 * fVar70)) * fVar46;
                  auVar58._4_4_ = (fVar9 - (fVar63 * fVar71 + fVar65 * fVar56)) * fVar49;
                  auVar58._8_4_ = (auVar17._8_4_ - (fVar69 * fVar70 + fVar65 * fVar56)) * fVar35;
                  auVar58._12_4_ = (fVar10 - (fVar50 + fVar50)) * fVar44;
                  fVar50 = (fVar70 * fVar65 + fVar71 * fVar64) * fVar46;
                  auVar66._4_4_ = (fVar71 * fVar69 + fVar56 * fVar64) * fVar49;
                  auVar66._0_4_ = fVar50;
                  local_158 = (fVar71 * fVar65 + fVar70 * fVar64) * fVar35;
                  auVar38._0_4_ = (fVar70 * fVar65 - fVar71 * fVar64) * fVar49;
                  auVar38._4_4_ = (fVar71 * fVar69 - fVar56 * fVar64) * fVar35;
                  auVar38._8_4_ = (fVar71 * fVar65 - fVar70 * fVar64) * fVar46;
                  auVar38._12_4_ = (fVar56 * fVar65 - fVar56 * fVar64) * fVar44;
                  auVar81 = blendps(auVar58,ZEXT816(0),8);
                  auVar66._8_4_ = local_158;
                  auVar66._12_4_ = (fVar56 * fVar65 + fVar56 * fVar64) * fVar44;
                  local_178._4_4_ = fVar50;
                  local_178._0_4_ = auVar58._0_4_;
                  local_178._8_4_ = auVar38._8_4_;
                  local_178._12_4_ = 0;
                  auVar86 = insertps(auVar66,auVar66,0x4c);
                  uStack_160 = auVar86._0_4_;
                  uStack_15c = auVar86._8_4_;
                  uStack_150 = auVar81._8_4_;
                  uStack_14c = auVar81._12_4_;
                  local_148 = insertps(auVar77,ZEXT816(0x3f800000),0x30);
                  local_168 = auVar38._0_4_;
                  fStack_164 = auVar58._4_4_;
                  fStack_154 = auVar38._4_4_;
                  FUN_144afeb32(auVar38._8_8_,local_178,local_138,auVar81._0_8_);
                  FUN_144afd82e(&local_1d8);
                  auVar39._4_4_ = -(uint)(0.0 <= fVar49 * fVar57);
                  auVar39._0_4_ = -(uint)(0.0 <= fVar46 * fVar8);
                  auVar39._8_4_ = -(uint)(0.0 <= fVar35 * fVar62);
                  auVar39._12_4_ = -(uint)(0.0 <= fVar44 * fVar51);
                  auVar81 = blendvps(_DAT_149f63320,auVar17,auVar39);
                  fVar46 = auVar81._0_4_;
                  fStack_1d4 = fStack_1d4 * fVar46;
                  local_1d8 = local_1d8 * fVar46;
                  fVar49 = auVar81._4_4_;
                  pfStack_1d0 = (float *)CONCAT44(pfStack_1d0._4_4_,pfStack_1d0._0_4_ * fVar46);
                  fStack_1c0 = fStack_1c0 * fVar49;
                  local_1c8 = (double)CONCAT44(local_1c8._4_4_ * fVar49,fVar49 * (float)local_1c8);
                  fVar46 = auVar81._8_4_;
                  fStack_1b0 = fStack_1b0 * fVar46;
                  fStack_1b4 = fStack_1b4 * fVar46;
                  local_1b8 = fVar46 * local_1b8;
                  FUN_14066c2ac(&local_1e8,&local_1d8);
                  fVar46 = local_1e8 * local_1e8 + fStack_1e4 * fStack_1e4;
                  fVar49 = fStack_1e0 * fStack_1e0 + fStack_1dc * fStack_1dc;
                  auVar53._0_4_ = fVar49 + fVar46;
                  auVar53._4_4_ = fVar49 + fVar46;
                  auVar53._8_4_ = fVar46 + fVar49;
                  auVar53._12_4_ = fVar46 + fVar49;
                  auVar40._4_4_ = -(uint)(1e-08 <= auVar53._4_4_);
                  auVar40._0_4_ = -(uint)(1e-08 <= auVar53._0_4_);
                  auVar40._8_4_ = -(uint)(1e-08 <= auVar53._8_4_);
                  auVar40._12_4_ = -(uint)(1e-08 <= auVar53._12_4_);
                  auVar81 = sqrtps(auVar53,auVar53);
                  auVar81 = divps(_DAT_1499314a0,auVar81);
                  auVar59._0_4_ = auVar81._0_4_ * local_1e8;
                  auVar59._4_4_ = auVar81._4_4_ * fStack_1e4;
                  auVar59._8_4_ = auVar81._8_4_ * fStack_1e0;
                  auVar59._12_4_ = auVar81._12_4_ * fStack_1dc;
                  auVar81 = blendvps(auVar52,auVar59,auVar40);
                  auVar15._8_8_ = dStack_1a0;
                  auVar15._0_8_ = local_1a8;
                  auVar77 = blendps(auVar15,ZEXT816(0),8);
                  lVar22 = *(longlong *)(param_2 + 0x1a0);
                  auVar36._8_4_ = fVar35 * fVar62;
                  auVar36._12_4_ = fVar44 * fVar51;
                }
              }
              *(undefined1 (*) [16])(lVar22 + lVar21 * 4) = auVar81;
              *(undefined1 (*) [16])(lVar22 + 0x10 + lVar21 * 4) = auVar77;
              *(undefined1 (*) [16])(lVar22 + 0x20 + lVar21 * 4) = auVar36;
              lVar22 = *(longlong *)(param_2 + 0x1a0);
              lVar27 = *(longlong *)(param_2 + 0x1b0);
              puVar28 = (undefined8 *)(lVar22 + lVar21 * 4);
              uVar24 = *puVar28;
              uVar11 = puVar28[1];
              puVar28 = (undefined8 *)(lVar22 + 0x10 + lVar21 * 4);
              uVar12 = *puVar28;
              uVar13 = puVar28[1];
              puVar28 = (undefined8 *)(lVar22 + 0x20 + lVar21 * 4);
              uVar14 = puVar28[1];
              puVar29 = (undefined8 *)(lVar27 + 0x20 + lVar21 * 4);
              *puVar29 = *puVar28;
              puVar29[1] = uVar14;
              puVar28 = (undefined8 *)(lVar27 + 0x10 + lVar21 * 4);
              *puVar28 = uVar12;
              puVar28[1] = uVar13;
              puVar28 = (undefined8 *)(lVar27 + lVar21 * 4);
              *puVar28 = uVar24;
              puVar28[1] = uVar11;
              uVar33 = uVar33 + 1;
              lVar21 = lVar21 + 0xc;
            } while ((longlong)plVar31 * 0xc != lVar21);
          }
          auVar17 = _DAT_149e1ef10;
          auVar52 = _DAT_149932320;
          if (0 < (int)local_1ec) {
            uVar33 = (ulonglong)local_1ec;
            lVar21 = (longlong)local_200 * 0x30;
            uVar34 = 0;
            fVar9 = DAT_149e1ef10._4_4_;
            fVar10 = DAT_149e1ef10._12_4_;
            do {
              lVar22 = FUN_147d15256(plVar20,uVar34 & 0xffffffff);
              FUN_144a7484c(lVar22 + 0x50,&local_1d8);
              dVar3 = *(double *)(lVar22 + 0x48);
              fVar35 = (float)*(double *)(lVar22 + 0x78);
              fVar44 = (float)*(double *)(lVar22 + 0x68);
              fVar46 = (float)*(double *)(lVar22 + 0x70);
              auVar78._0_8_ = CONCAT44(fVar46,fVar44);
              auVar73._0_4_ = (float)*(double *)(lVar22 + 0x38);
              auVar73._4_4_ = (float)*(double *)(lVar22 + 0x40);
              fVar49 = (float)local_1c8;
              fVar50 = (float)(double)CONCAT44(uStack_1bc,fStack_1c0);
              auVar78._8_4_ = fVar35;
              auVar78._12_4_ = 0.0;
              fVar56 = (float)(double)CONCAT44(fStack_1d4,local_1d8);
              fVar63 = (float)(double)pfStack_1d0;
              auVar72._4_4_ = fVar63;
              auVar72._0_4_ = fVar56;
              auVar73._8_4_ = (float)dVar3;
              auVar73._12_4_ = 0;
              auVar72._12_4_ = fVar50;
              auVar72._8_4_ = fVar49;
              uVar19 = FUN_144a750a0(lVar23,lVar22 + 0x30);
              lVar22 = *(longlong *)(param_2 + 0x1a0);
              if (-1 < (int)uVar19) {
                lVar27 = (ulonglong)uVar19 * 0x30;
                pfVar25 = (float *)(lVar22 + lVar27);
                auVar36 = *(undefined1 (*) [16])(lVar22 + 0x20 + lVar27);
                fVar64 = auVar36._0_4_;
                fVar65 = auVar36._4_4_;
                fVar69 = auVar36._8_4_;
                fVar8 = auVar36._12_4_;
                auVar47._8_4_ = fVar35;
                auVar47._0_8_ = auVar78._0_8_;
                auVar47._12_4_ = 0;
                auVar36 = minps(auVar47,auVar36);
                auVar48._4_4_ = -(uint)(auVar36._4_4_ < 0.0);
                auVar48._0_4_ = -(uint)(auVar36._0_4_ < 0.0);
                auVar48._8_4_ = -(uint)(auVar36._8_4_ < 0.0);
                auVar48._12_4_ = -(uint)(auVar36._12_4_ < 0.0);
                iVar26 = movmskps((int)lVar27,auVar48);
                if (iVar26 == 0) {
                  fVar57 = *pfVar25;
                  fVar62 = pfVar25[1];
                  fVar51 = pfVar25[2];
                  fVar70 = pfVar25[3];
                  fVar84 = auVar73._0_4_ * fVar64;
                  fVar74 = auVar73._4_4_ * fVar65;
                  fVar75 = (float)dVar3 * fVar69;
                  fVar76 = fVar8 * 0.0;
                  fVar71 = fVar74 * fVar57 - fVar84 * fVar62;
                  fVar45 = fVar75 * fVar62 - fVar74 * fVar51;
                  fVar82 = fVar84 * fVar51 - fVar75 * fVar57;
                  fVar83 = fVar76 * fVar70 - fVar76 * fVar70;
                  fVar71 = fVar71 + fVar71;
                  fVar45 = fVar45 + fVar45;
                  fVar82 = fVar82 + fVar82;
                  fVar83 = fVar83 + fVar83;
                  auVar72._4_4_ =
                       fVar51 * fVar56 * 1.0 +
                       fVar62 * fVar50 * 1.0 + fVar57 * fVar49 * -1.0 + fVar63 * fVar70;
                  auVar72._0_4_ =
                       fVar51 * fVar63 * -1.0 +
                       fVar62 * fVar49 * 1.0 + fVar57 * fVar50 * 1.0 + fVar56 * fVar70;
                  auVar78._0_4_ = fVar44 * fVar64;
                  auVar78._4_4_ = fVar46 * fVar65;
                  auVar78._8_4_ = fVar35 * fVar69;
                  auVar78._12_4_ = fVar8 * 0.0;
                  auVar73._4_4_ =
                       (fVar45 * fVar51 - fVar71 * fVar57) + fVar70 * fVar82 + fVar74 + pfVar25[5];
                  auVar73._0_4_ =
                       (fVar71 * fVar62 - fVar82 * fVar51) + fVar70 * fVar45 + fVar84 + pfVar25[4];
                  auVar73._8_4_ =
                       (fVar82 * fVar57 - fVar45 * fVar62) + fVar70 * fVar71 + fVar75 + pfVar25[6];
                  auVar73._12_4_ =
                       (fVar83 * fVar70 - fVar83 * fVar70) + fVar70 * fVar83 + fVar76 + pfVar25[7];
                  auVar72._8_4_ =
                       fVar51 * fVar50 * 1.0 +
                       fVar62 * fVar56 * -1.0 + fVar57 * fVar63 * 1.0 + fVar49 * fVar70;
                  auVar72._12_4_ =
                       fVar51 * fVar49 * -1.0 +
                       fVar62 * fVar63 * -1.0 + fVar57 * fVar56 * -1.0 + fVar50 * fVar70;
                }
                else {
                  fVar57 = *pfVar25;
                  fVar62 = pfVar25[1];
                  fVar51 = pfVar25[2];
                  fVar70 = pfVar25[3];
                  fVar45 = fVar57 + fVar57;
                  fVar82 = fVar62 + fVar62;
                  fVar83 = fVar51 + fVar51;
                  fVar71 = fVar70 * (fVar70 + fVar70);
                  auVar60._0_4_ = (auVar17._0_4_ - (fVar51 * fVar83 + fVar62 * fVar82)) * fVar64;
                  auVar60._4_4_ = (fVar9 - (fVar51 * fVar83 + fVar57 * fVar45)) * fVar65;
                  auVar60._8_4_ = (auVar17._8_4_ - (fVar62 * fVar82 + fVar57 * fVar45)) * fVar69;
                  auVar60._12_4_ = (fVar10 - (fVar71 + fVar71)) * fVar8;
                  fVar51 = (fVar82 * fVar57 + fVar83 * fVar70) * fVar64;
                  auVar67._4_4_ = (fVar83 * fVar62 + fVar45 * fVar70) * fVar65;
                  auVar67._0_4_ = fVar51;
                  local_118 = (fVar83 * fVar57 + fVar82 * fVar70) * fVar69;
                  fStack_114 = (fVar83 * fVar62 - fVar45 * fVar70) * fVar69;
                  auVar36 = blendps(auVar60,ZEXT816(0),8);
                  auVar67._8_4_ = local_118;
                  auVar67._12_4_ = (fVar45 * fVar57 + fVar45 * fVar70) * fVar8;
                  local_138._4_4_ = fVar51;
                  local_138._0_4_ = auVar60._0_4_;
                  local_138._8_4_ = (fVar83 * fVar57 - fVar82 * fVar70) * fVar64;
                  local_138._12_4_ = 0;
                  auVar81 = insertps(auVar67,auVar67,0x4c);
                  uStack_120 = auVar81._0_4_;
                  uStack_11c = auVar81._8_4_;
                  uStack_110 = auVar36._8_4_;
                  uStack_10c = auVar36._12_4_;
                  local_128 = (double)CONCAT44(auVar60._4_4_,
                                               (fVar82 * fVar57 - fVar83 * fVar70) * fVar65);
                  local_108 = insertps(*(undefined1 (*) [16])(pfVar25 + 4),ZEXT816(0x3f800000),0x30)
                  ;
                  fVar57 = fVar56 + fVar56;
                  fVar62 = fVar63 + fVar63;
                  fVar51 = fVar49 + fVar49;
                  fVar70 = fVar50 * (fVar50 + fVar50);
                  auVar54._0_4_ = (auVar17._0_4_ - (fVar49 * fVar51 + fVar63 * fVar62)) * fVar44;
                  auVar54._4_4_ = (fVar9 - (fVar49 * fVar51 + fVar56 * fVar57)) * fVar46;
                  auVar54._8_4_ = (auVar17._8_4_ - (fVar63 * fVar62 + fVar56 * fVar57)) * fVar35;
                  auVar54._12_4_ = (fVar10 - (fVar70 + fVar70)) * 0.0;
                  fVar49 = (fVar62 * fVar56 + fVar51 * fVar50) * fVar44;
                  auVar68._4_4_ = (fVar51 * fVar63 + fVar57 * fVar50) * fVar46;
                  auVar68._0_4_ = fVar49;
                  local_158 = (fVar51 * fVar56 + fVar62 * fVar50) * fVar35;
                  auVar41._0_4_ = (fVar62 * fVar56 - fVar51 * fVar50) * fVar46;
                  auVar41._4_4_ = (fVar51 * fVar63 - fVar57 * fVar50) * fVar35;
                  auVar41._8_4_ = (fVar51 * fVar56 - fVar62 * fVar50) * fVar44;
                  auVar41._12_4_ = (fVar57 * fVar56 - fVar57 * fVar50) * 0.0;
                  auVar36 = blendps(auVar54,ZEXT816(0),8);
                  auVar68._8_4_ = local_158;
                  auVar68._12_4_ = (fVar57 * fVar56 + fVar57 * fVar50) * 0.0;
                  local_178._4_4_ = fVar49;
                  local_178._0_4_ = auVar54._0_4_;
                  local_178._8_4_ = auVar41._8_4_;
                  local_178._12_4_ = 0;
                  auVar81 = insertps(auVar68,auVar68,0x4c);
                  uStack_160 = auVar81._0_4_;
                  uStack_15c = auVar81._8_4_;
                  uStack_150 = auVar36._8_4_;
                  uStack_14c = auVar36._12_4_;
                  local_148 = insertps(auVar73,ZEXT816(0x3f800000),0x30);
                  local_168 = auVar41._0_4_;
                  fStack_164 = auVar54._4_4_;
                  fStack_154 = auVar41._4_4_;
                  FUN_144afeb32(auVar41._8_8_,local_178,auVar36._0_8_);
                  FUN_144afd82e(&local_1d8);
                  auVar42._4_4_ = -(uint)(0.0 <= fVar46 * fVar65);
                  auVar42._0_4_ = -(uint)(0.0 <= fVar44 * fVar64);
                  auVar42._8_4_ = -(uint)(0.0 <= fVar35 * fVar69);
                  auVar42._12_4_ = -(uint)(0.0 <= fVar8 * 0.0);
                  auVar36 = blendvps(_DAT_149f63320,auVar17,auVar42);
                  fVar49 = auVar36._0_4_;
                  fStack_1d4 = fStack_1d4 * fVar49;
                  local_1d8 = local_1d8 * fVar49;
                  fVar50 = auVar36._4_4_;
                  pfStack_1d0 = (float *)CONCAT44(pfStack_1d0._4_4_,pfStack_1d0._0_4_ * fVar49);
                  fStack_1c0 = fStack_1c0 * fVar50;
                  local_1c8 = (double)CONCAT44(local_1c8._4_4_ * fVar50,fVar50 * (float)local_1c8);
                  fVar49 = auVar36._8_4_;
                  fStack_1b0 = fStack_1b0 * fVar49;
                  fStack_1b4 = fStack_1b4 * fVar49;
                  local_1b8 = fVar49 * local_1b8;
                  FUN_14066c2ac(&local_1e8,&local_1d8);
                  fVar49 = local_1e8 * local_1e8 + fStack_1e4 * fStack_1e4;
                  fVar50 = fStack_1e0 * fStack_1e0 + fStack_1dc * fStack_1dc;
                  auVar55._0_4_ = fVar50 + fVar49;
                  auVar55._4_4_ = fVar50 + fVar49;
                  auVar55._8_4_ = fVar49 + fVar50;
                  auVar55._12_4_ = fVar49 + fVar50;
                  auVar43._4_4_ = -(uint)(1e-08 <= auVar55._4_4_);
                  auVar43._0_4_ = -(uint)(1e-08 <= auVar55._0_4_);
                  auVar43._8_4_ = -(uint)(1e-08 <= auVar55._8_4_);
                  auVar43._12_4_ = -(uint)(1e-08 <= auVar55._12_4_);
                  auVar36 = sqrtps(auVar55,auVar55);
                  auVar36 = divps(_DAT_1499314a0,auVar36);
                  auVar61._0_4_ = auVar36._0_4_ * local_1e8;
                  auVar61._4_4_ = auVar36._4_4_ * fStack_1e4;
                  auVar61._8_4_ = auVar36._8_4_ * fStack_1e0;
                  auVar61._12_4_ = auVar36._12_4_ * fStack_1dc;
                  auVar72 = blendvps(auVar52,auVar61,auVar43);
                  auVar16._8_8_ = dStack_1a0;
                  auVar16._0_8_ = local_1a8;
                  auVar73 = blendps(auVar16,ZEXT816(0),8);
                  lVar22 = *(longlong *)(param_2 + 0x1a0);
                  auVar78._4_4_ = fVar46 * fVar65;
                  auVar78._0_4_ = fVar44 * fVar64;
                  auVar78._8_4_ = fVar35 * fVar69;
                  auVar78._12_4_ = fVar8 * 0.0;
                }
              }
              *(undefined1 (*) [16])(lVar22 + lVar21) = auVar72;
              *(undefined1 (*) [16])(lVar22 + 0x10 + lVar21) = auVar73;
              *(undefined1 (*) [16])(lVar22 + 0x20 + lVar21) = auVar78;
              uVar34 = uVar34 + 1;
              lVar21 = lVar21 + 0x30;
            } while (uVar33 != uVar34);
          }
        }
      }
    }
    else {
      lVar21 = FUN_144a799b0();
      if ((*(int *)(plVar20[2] + 0x38) < *(int *)(lVar21 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8) !=
          lVar21 + 0x30)) goto LAB_14809c3a4;
      *(undefined1 *)(param_2 + 0x3a) = 1;
      if (0 < *(int *)(param_2 + 0x170)) {
        lVar23 = 4;
        lVar21 = 0;
        do {
          (**(code **)(*plVar20 + 0x4a8))
                    (plVar20,&local_1d8,*(undefined8 *)(*(longlong *)(param_2 + 400) + lVar21 * 8),2
                    );
          lVar22 = *(longlong *)(param_2 + 0x1a0);
          puVar28 = (undefined8 *)(lVar22 + -0x20 + lVar23 * 8);
          *puVar28 = CONCAT44((float)(double)pfStack_1d0,
                              (float)(double)CONCAT44(fStack_1d4,local_1d8));
          puVar28[1] = CONCAT44((float)(double)CONCAT44(uStack_1bc,fStack_1c0),(float)local_1c8);
          puVar28 = (undefined8 *)(lVar22 + -0x10 + lVar23 * 8);
          *puVar28 = CONCAT44((float)(double)CONCAT44(uStack_1ac,fStack_1b0),
                              (float)(double)CONCAT44(fStack_1b4,local_1b8));
          puVar28[1] = CONCAT44((float)dStack_1a0,(float)local_1a8);
          puVar28 = (undefined8 *)(lVar22 + lVar23 * 8);
          *puVar28 = CONCAT44((float)dStack_190,(float)local_198);
          puVar28[1] = CONCAT44((float)dStack_180,(float)local_188);
          lVar21 = lVar21 + 1;
          lVar23 = lVar23 + 6;
        } while (lVar21 < *(int *)(param_2 + 0x170));
      }
    }
LAB_14809c40c:
    param_3 = local_1f8;
    if (cVar4 != '\0') {
      iVar26 = *(int *)(param_2 + 0x1a8);
      pvVar6 = *(void **)(param_2 + 0x1a0);
      *(int *)(param_2 + 0x1b8) = iVar26;
      if (iVar26 == 0 && *(int *)(param_2 + 0x1bc) == 0) {
        *(undefined4 *)(param_2 + 0x1bc) = 0;
      }
      else {
        FUN_14049199c((undefined8 *)(param_2 + 0x1b0),iVar26);
        if (iVar26 != 0) {
          memcpy(*(void **)(param_2 + 0x1b0),pvVar6,(longlong)iVar26 * 0x30);
        }
      }
    }
  }
  lVar23 = FUN_14479d2ce(param_2 + 0x1c0);
  if (lVar23 == 0) {
LAB_14809c498:
    lVar23 = FUN_14479d2ce(param_3 + 0x48);
    if (lVar23 == 0) goto LAB_14809c5bd;
  }
  else {
    lVar21 = FUN_144a799b0();
    if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < *(int *)(lVar21 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8
         ) != lVar21 + 0x30)) goto LAB_14809c498;
  }
  if (cVar4 == '\0') {
    puVar28 = (undefined8 *)(param_2 + 0x50);
    puVar29 = (undefined8 *)(param_2 + 0xb0);
    for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar29 = *puVar28;
      puVar28 = puVar28 + 1;
      puVar29 = puVar29 + 1;
    }
    puVar28 = (undefined8 *)(lVar23 + 0x240);
    puVar29 = (undefined8 *)(param_2 + 0x50);
    for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar29 = *puVar28;
      puVar28 = puVar28 + 1;
      puVar29 = puVar29 + 1;
    }
  }
  else {
    puVar28 = (undefined8 *)(lVar23 + 0x240);
    puVar29 = (undefined8 *)(param_2 + 0x50);
    for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar29 = *puVar28;
      puVar28 = puVar28 + 1;
      puVar29 = puVar29 + 1;
    }
    memmove((void *)(param_2 + 0xb0),(undefined8 *)(lVar23 + 0x240),0x60);
  }
  local_128 = (double)*(float *)(param_3 + 0x14) * 65536.0;
  local_138._8_8_ = (double)*(float *)(param_3 + 0x10) * 65536.0;
  local_138._0_8_ = (double)*(float *)(param_3 + 0xc) * 65536.0;
  FUN_1481f8c90(local_138,&local_1d8,param_2 + 0x50);
  *(ulonglong *)(param_2 + 0x130) = CONCAT44(fStack_1b4,local_1b8);
  *(ulonglong *)(param_2 + 0x138) = CONCAT44(uStack_1ac,fStack_1b0);
  *(double *)(param_2 + 0x120) = local_1c8;
  *(ulonglong *)(param_2 + 0x128) = CONCAT44(uStack_1bc,fStack_1c0);
  *(ulonglong *)(param_2 + 0x110) = CONCAT44(fStack_1d4,local_1d8);
  *(float **)(param_2 + 0x118) = pfStack_1d0;
  FUN_1481f8c90(local_138,&local_1d8,param_2 + 0xb0);
  *(ulonglong *)(param_2 + 0x160) = CONCAT44(fStack_1b4,local_1b8);
  *(ulonglong *)(param_2 + 0x168) = CONCAT44(uStack_1ac,fStack_1b0);
  *(double *)(param_2 + 0x150) = local_1c8;
  *(ulonglong *)(param_2 + 0x158) = CONCAT44(uStack_1bc,fStack_1c0);
  *(ulonglong *)(param_2 + 0x140) = CONCAT44(fStack_1d4,local_1d8);
  *(float **)(param_2 + 0x148) = pfStack_1d0;
LAB_14809c5bd:
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809d534 FUN_14809d534 body=163 status=ok
// SIG undefined FUN_14809d534(void)

void FUN_14809d534(char *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  int *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14809d5d8(local_20,param_1);
  FUN_140126e42(&local_30,param_1);
  piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar2 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar2) {
    iVar1 = 0;
    do {
      piVar2 = local_30 + local_28;
      *local_30 = -(uint)*(byte *)(local_18 + 0x38);
      iVar1 = iVar1 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = piVar2;
    } while (iVar1 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809d5d8 FUN_14809d5d8 body=148 status=ok
// SIG undefined FUN_14809d5d8(void)

void FUN_14809d5d8(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14809d66c FUN_14809d66c body=696 status=ok
// SIG undefined FUN_14809d66c(void)

void FUN_14809d66c(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  int *piVar22;
  undefined1 auStack_128 [40];
  undefined4 *local_100;
  int local_f8;
  undefined4 *local_f0;
  int local_e8;
  undefined4 *local_e0;
  int local_d8;
  undefined4 *local_d0;
  int local_c8;
  undefined4 *local_c0;
  int local_b8;
  undefined4 *local_b0;
  int local_a8;
  undefined4 *local_a0;
  int local_98;
  undefined4 *local_90;
  int local_88;
  undefined4 *local_80;
  int local_78;
  undefined4 *local_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14809d5d8(local_60,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_b0,param_1);
  FUN_144a76c20(&local_a0,param_1);
  FUN_144a76c20(&local_100,param_1);
  FUN_144a76c20(&local_f0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar22 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar22) {
    uVar14 = *(undefined4 *)(local_58 + 0x120);
    uVar15 = *(undefined4 *)(local_58 + 0x124);
    uVar11 = *(undefined4 *)(local_58 + 0x128);
    uVar16 = *(undefined4 *)(local_58 + 0x130);
    uVar17 = *(undefined4 *)(local_58 + 0x134);
    uVar12 = *(undefined4 *)(local_58 + 0x138);
    uVar18 = *(undefined4 *)(local_58 + 0x110);
    uVar19 = *(undefined4 *)(local_58 + 0x114);
    uVar20 = *(undefined4 *)(local_58 + 0x11c);
    uVar13 = *(undefined4 *)(local_58 + 0x118);
    iVar21 = 0;
    do {
      puVar1 = local_90 + local_88;
      *local_90 = uVar14;
      puVar2 = local_80 + local_78;
      *local_80 = uVar15;
      puVar3 = local_70 + local_68;
      *local_70 = uVar11;
      puVar4 = local_d0 + local_c8;
      *local_d0 = uVar18;
      puVar5 = local_c0 + local_b8;
      *local_c0 = uVar19;
      puVar6 = local_b0 + local_a8;
      *local_b0 = uVar13;
      puVar7 = local_a0 + local_98;
      *local_a0 = uVar20;
      puVar8 = local_100 + local_f8;
      *local_100 = uVar16;
      puVar9 = local_f0 + local_e8;
      *local_f0 = uVar17;
      puVar10 = local_e0 + local_d8;
      *local_e0 = uVar12;
      iVar21 = iVar21 + 1;
      piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar22 = (int *)(param_1 + 0x3c);
      }
      local_100 = puVar8;
      local_f0 = puVar9;
      local_e0 = puVar10;
      local_d0 = puVar4;
      local_c0 = puVar5;
      local_b0 = puVar6;
      local_a0 = puVar7;
      local_90 = puVar1;
      local_80 = puVar2;
      local_70 = puVar3;
    } while (iVar21 < *piVar22);
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809d925 FUN_14809d925 body=164 status=ok
// SIG undefined FUN_14809d925(void)

void FUN_14809d925(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14809d5d8(local_20,param_1);
  FUN_144a76cd4(&local_30);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    uVar2 = *(undefined4 *)(local_18 + 0x170);
    iVar4 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = uVar2;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar4 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809d9ca FUN_14809d9ca body=164 status=ok
// SIG undefined FUN_14809d9ca(void)

void FUN_14809d9ca(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14809d5d8(local_20,param_1);
  FUN_144a76cd4(&local_30);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    uVar2 = *(undefined4 *)(local_18 + 0x174);
    iVar4 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = uVar2;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar4 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809da6f FUN_14809da6f body=164 status=ok
// SIG undefined FUN_14809da6f(void)

void FUN_14809da6f(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14809d5d8(local_20,param_1);
  FUN_144a76cd4(&local_30);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    uVar2 = *(undefined4 *)(local_18 + 0x178);
    iVar4 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = uVar2;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar4 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14809db14 FUN_14809db14 body=2897 status=ok
// SIG undefined FUN_14809db14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14809db14(char *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined1 auVar13 [16];
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int *piVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar38;
  float fVar43;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  undefined1 auVar60 [12];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auStack_2e8 [32];
  float *local_2c8;
  int local_2c0;
  float *local_2b8;
  int local_2b0;
  float *local_2a8;
  int local_2a0;
  float *local_298;
  int local_290;
  undefined8 *local_288;
  int local_280;
  undefined8 *local_278;
  int local_270;
  undefined4 *local_268;
  int local_260;
  undefined8 *local_258;
  int local_250;
  undefined8 *local_248;
  int local_240;
  undefined8 *local_238;
  int local_230;
  float *local_228;
  int local_220;
  undefined8 *local_218;
  int local_210;
  undefined8 *local_208;
  int local_200;
  int *local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  undefined1 local_1d8 [8];
  longlong local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_14809d5d8(local_1d8,param_1);
  local_1f8 = (int *)0x0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  FUN_144a98d08(&local_1f8,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_298,param_1);
  FUN_144a76c20(&local_288,param_1);
  FUN_144a76c20(&local_278,param_1);
  FUN_144a76c20(&local_2c8,param_1);
  FUN_144a76c20(&local_2b8,param_1);
  FUN_144a76c20(&local_2a8,param_1);
  auVar19 = _DAT_149f63320;
  piVar20 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar20 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar20) {
    iVar23 = 0;
    do {
      iVar22 = *local_1f8;
      iVar14 = *(int *)(local_1d0 + 0x170);
      iVar24 = iVar14;
      if (iVar22 < iVar14) {
        iVar24 = iVar22;
      }
      if (iVar22 < 0) {
        iVar24 = iVar14;
      }
      lVar25 = (longlong)iVar24 * 0x30;
      auVar47 = *(undefined1 (*) [16])(local_1d0 + 0x160);
      fVar27 = auVar47._0_4_;
      fVar31 = auVar47._4_4_;
      fVar58 = auVar47._12_4_;
      auVar13 = *(undefined1 (*) [16])(*(longlong *)(local_1d0 + 0x1b0) + 0x20 + lVar25);
      pfVar21 = (float *)(*(longlong *)(local_1d0 + 0x1b0) + lVar25);
      auVar33 = minps(auVar13,auVar47);
      auVar34._4_4_ = -(uint)(auVar33._4_4_ < 0.0);
      auVar34._0_4_ = -(uint)(auVar33._0_4_ < 0.0);
      auVar34._8_4_ = -(uint)(auVar33._8_4_ < 0.0);
      auVar34._12_4_ = -(uint)(auVar33._12_4_ < 0.0);
      iVar22 = movmskps(iVar24,auVar34);
      fVar32 = auVar47._8_4_;
      if (iVar22 == 0) {
        fVar27 = fVar27 * pfVar21[4];
        fVar31 = fVar31 * pfVar21[5];
        fVar32 = fVar32 * pfVar21[6];
        fVar58 = *(float *)(local_1d0 + 0x140);
        fVar26 = *(float *)(local_1d0 + 0x144);
        fVar30 = *(float *)(local_1d0 + 0x148);
        fVar38 = *(float *)(local_1d0 + 0x14c);
        fVar59 = fVar31 * fVar58 - fVar26 * fVar27;
        fVar37 = fVar32 * fVar26 - fVar30 * fVar31;
        fVar50 = fVar27 * fVar30 - fVar58 * fVar32;
        fVar59 = fVar59 + fVar59;
        fVar37 = fVar37 + fVar37;
        fVar50 = fVar50 + fVar50;
        auVar60._0_4_ =
             (fVar59 * fVar26 - fVar50 * fVar30) + fVar38 * fVar37 + fVar27 +
             *(float *)(local_1d0 + 0x150);
        auVar60._4_4_ =
             (fVar37 * fVar30 - fVar59 * fVar58) + fVar38 * fVar50 + fVar31 +
             *(float *)(local_1d0 + 0x154);
        auVar60._8_4_ =
             (fVar50 * fVar58 - fVar37 * fVar26) + fVar38 * fVar59 + fVar32 +
             *(float *)(local_1d0 + 0x158);
        local_1f8 = local_1f8 + local_1e8;
      }
      else {
        fVar26 = *(float *)(local_1d0 + 0x140);
        fVar30 = *(float *)(local_1d0 + 0x144);
        fVar38 = *(float *)(local_1d0 + 0x148);
        fVar59 = *(float *)(local_1d0 + 0x14c);
        fVar50 = fVar26 + fVar26;
        fVar51 = fVar30 + fVar30;
        fVar52 = fVar38 + fVar38;
        fVar37 = fVar59 * (fVar59 + fVar59);
        auVar46._0_4_ = (1.0 - (fVar38 * fVar52 + fVar30 * fVar51)) * fVar27;
        auVar46._4_4_ = (1.0 - (fVar38 * fVar52 + fVar26 * fVar50)) * fVar31;
        auVar46._8_4_ = (1.0 - (fVar30 * fVar51 + fVar26 * fVar50)) * fVar32;
        auVar46._12_4_ = (0.0 - (fVar37 + fVar37)) * fVar58;
        fVar38 = (fVar51 * fVar26 + fVar52 * fVar59) * fVar27;
        auVar54._4_4_ = (fVar52 * fVar30 + fVar50 * fVar59) * fVar31;
        auVar54._0_4_ = fVar38;
        local_158 = (fVar52 * fVar26 + fVar51 * fVar59) * fVar32;
        local_168 = (fVar51 * fVar26 - fVar52 * fVar59) * fVar31;
        fStack_154 = (fVar52 * fVar30 - fVar50 * fVar59) * fVar32;
        auVar47 = blendps(auVar46,ZEXT816(0),8);
        auVar54._8_4_ = local_158;
        auVar54._12_4_ = (fVar50 * fVar26 + fVar50 * fVar59) * fVar58;
        local_178._4_4_ = fVar38;
        local_178._0_4_ = auVar46._0_4_;
        local_178._8_4_ = (fVar52 * fVar26 - fVar51 * fVar59) * fVar27;
        local_178._12_4_ = 0;
        auVar33 = insertps(auVar54,auVar54,0x4c);
        uStack_160 = auVar33._0_4_;
        uStack_15c = auVar33._8_4_;
        uStack_150 = auVar47._8_4_;
        uStack_14c = auVar47._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x150),ZEXT816(0x3f800000),0x30);
        fVar26 = *pfVar21;
        fVar30 = pfVar21[1];
        fVar38 = pfVar21[2];
        fVar59 = pfVar21[3];
        fVar37 = pfVar21[8];
        local_1a8 = pfVar21[9];
        fStack_194 = pfVar21[10];
        fVar51 = fVar26 + fVar26;
        fVar52 = fVar30 + fVar30;
        fVar53 = fVar38 + fVar38;
        fVar50 = fVar59 * (fVar59 + fVar59);
        auVar39._0_4_ = (1.0 - (fVar38 * fVar53 + fVar30 * fVar52)) * fVar37;
        auVar39._4_4_ = (1.0 - (fVar38 * fVar53 + fVar26 * fVar51)) * local_1a8;
        auVar39._8_4_ = (1.0 - (fVar30 * fVar52 + fVar26 * fVar51)) * fStack_194;
        auVar39._12_4_ = (0.0 - (fVar50 + fVar50)) * pfVar21[0xb];
        fVar38 = (fVar52 * fVar26 + fVar53 * fVar59) * fVar37;
        auVar55._4_4_ = (fVar53 * fVar30 + fVar51 * fVar59) * local_1a8;
        auVar55._0_4_ = fVar38;
        local_198 = (fVar53 * fVar26 + fVar52 * fVar59) * fStack_194;
        local_1a8 = (fVar52 * fVar26 - fVar53 * fVar59) * local_1a8;
        fStack_194 = (fVar53 * fVar30 - fVar51 * fVar59) * fStack_194;
        auVar47 = blendps(auVar39,ZEXT816(0),8);
        auVar55._8_4_ = local_198;
        auVar55._12_4_ = (fVar51 * fVar26 + fVar51 * fVar59) * pfVar21[0xb];
        local_1b8._4_4_ = fVar38;
        local_1b8._0_4_ = auVar39._0_4_;
        local_1b8._8_4_ = (fVar53 * fVar26 - fVar52 * fVar59) * fVar37;
        local_1b8._12_4_ = 0;
        auVar33 = insertps(auVar55,auVar55,0x4c);
        uStack_1a0 = auVar33._0_4_;
        uStack_19c = auVar33._8_4_;
        uStack_190 = auVar47._8_4_;
        uStack_18c = auVar47._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar21 + 4),ZEXT816(0x3f800000),0x30);
        local_1f8 = local_1f8 + local_1e8;
        fStack_1a4 = auVar39._4_4_;
        fStack_164 = auVar46._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar47._0_8_);
        FUN_144afd82e(&local_138);
        auVar33._4_4_ = -(uint)(0.0 <= auVar13._4_4_ * fVar31);
        auVar33._0_4_ = -(uint)(0.0 <= auVar13._0_4_ * fVar27);
        auVar33._8_4_ = -(uint)(0.0 <= auVar13._8_4_ * fVar32);
        auVar33._12_4_ = -(uint)(0.0 <= auVar13._12_4_ * fVar58);
        auVar47._8_4_ = 0x3f800000;
        auVar47._0_8_ = &DAT_3f8000003f800000;
        auVar47._12_4_ = 0;
        auVar47 = blendvps(auVar19,auVar47,auVar33);
        fVar27 = auVar47._0_4_;
        local_130 = local_130 * fVar27;
        local_134 = local_134 * fVar27;
        local_138 = local_138 * fVar27;
        fVar27 = auVar47._4_4_;
        local_120 = local_120 * fVar27;
        local_124 = local_124 * fVar27;
        local_128 = fVar27 * local_128;
        fVar27 = auVar47._8_4_;
        local_110 = local_110 * fVar27;
        local_114 = local_114 * fVar27;
        local_118 = fVar27 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        auVar47 = blendps(local_108,ZEXT816(0),8);
        auVar60 = auVar47._0_12_;
      }
      lVar15 = *(longlong *)(local_1d0 + 0x1a0);
      pfVar21 = (float *)(lVar15 + lVar25);
      auVar47 = *(undefined1 (*) [16])(local_1d0 + 0x130);
      fVar27 = auVar47._0_4_;
      fVar31 = auVar47._4_4_;
      fVar58 = auVar47._8_4_;
      fVar32 = auVar47._12_4_;
      auVar13 = *(undefined1 (*) [16])(lVar15 + 0x20 + lVar25);
      auVar47 = minps(auVar13,auVar47);
      auVar35._4_4_ = -(uint)(auVar47._4_4_ < 0.0);
      auVar35._0_4_ = -(uint)(auVar47._0_4_ < 0.0);
      auVar35._8_4_ = -(uint)(auVar47._8_4_ < 0.0);
      auVar35._12_4_ = -(uint)(auVar47._12_4_ < 0.0);
      iVar22 = movmskps((int)lVar15,auVar35);
      if (iVar22 == 0) {
        fVar26 = *pfVar21;
        fVar30 = pfVar21[1];
        fVar38 = pfVar21[2];
        fVar59 = pfVar21[3];
        fVar37 = *(float *)(local_1d0 + 0x110);
        fVar50 = *(float *)(local_1d0 + 0x114);
        fVar51 = *(float *)(local_1d0 + 0x118);
        fVar52 = *(float *)(local_1d0 + 0x11c);
        fVar61 = pfVar21[4] * fVar27;
        fVar62 = pfVar21[5] * fVar31;
        fVar63 = pfVar21[6] * fVar58;
        fVar64 = pfVar21[7] * fVar32;
        fVar53 = fVar62 * fVar37 - fVar50 * fVar61;
        fVar43 = fVar63 * fVar50 - fVar51 * fVar62;
        fVar44 = fVar61 * fVar51 - fVar37 * fVar63;
        fVar45 = fVar64 * fVar52 - fVar52 * fVar64;
        fVar53 = fVar53 + fVar53;
        fVar43 = fVar43 + fVar43;
        fVar44 = fVar44 + fVar44;
        fVar45 = fVar45 + fVar45;
        auVar36._0_4_ =
             fVar51 * fVar30 * -1.0 +
             fVar50 * fVar38 * 1.0 + fVar37 * fVar59 * 1.0 + fVar26 * fVar52;
        auVar36._4_4_ =
             fVar51 * fVar26 * 1.0 +
             fVar50 * fVar59 * 1.0 + fVar37 * fVar38 * -1.0 + fVar30 * fVar52;
        auVar36._8_4_ =
             fVar51 * fVar59 * 1.0 +
             fVar50 * fVar26 * -1.0 + fVar37 * fVar30 * 1.0 + fVar38 * fVar52;
        auVar36._12_4_ =
             fVar51 * fVar38 * -1.0 +
             fVar50 * fVar30 * -1.0 + fVar37 * fVar26 * -1.0 + fVar59 * fVar52;
        auVar42._0_4_ =
             (fVar53 * fVar50 - fVar44 * fVar51) + fVar52 * fVar43 + fVar61 +
             *(float *)(local_1d0 + 0x120);
        auVar42._4_4_ =
             (fVar43 * fVar51 - fVar53 * fVar37) + fVar52 * fVar44 + fVar62 +
             *(float *)(local_1d0 + 0x124);
        auVar42._8_4_ =
             (fVar44 * fVar37 - fVar43 * fVar50) + fVar52 * fVar53 + fVar63 +
             *(float *)(local_1d0 + 0x128);
        auVar42._12_4_ =
             (fVar45 * fVar52 - fVar45 * fVar52) + fVar52 * fVar45 + fVar64 +
             *(float *)(local_1d0 + 300);
      }
      else {
        fVar26 = *(float *)(local_1d0 + 0x110);
        fVar30 = *(float *)(local_1d0 + 0x114);
        fVar38 = *(float *)(local_1d0 + 0x118);
        fVar59 = *(float *)(local_1d0 + 0x11c);
        fVar50 = fVar26 + fVar26;
        fVar51 = fVar30 + fVar30;
        fVar52 = fVar38 + fVar38;
        fVar37 = fVar59 * (fVar59 + fVar59);
        auVar48._0_4_ = (1.0 - (fVar38 * fVar52 + fVar30 * fVar51)) * fVar27;
        auVar48._4_4_ = (1.0 - (fVar38 * fVar52 + fVar26 * fVar50)) * fVar31;
        auVar48._8_4_ = (1.0 - (fVar30 * fVar51 + fVar26 * fVar50)) * fVar58;
        auVar48._12_4_ = (0.0 - (fVar37 + fVar37)) * fVar32;
        fVar38 = (fVar51 * fVar26 + fVar52 * fVar59) * fVar27;
        auVar56._4_4_ = (fVar52 * fVar30 + fVar50 * fVar59) * fVar31;
        auVar56._0_4_ = fVar38;
        local_158 = (fVar52 * fVar26 + fVar51 * fVar59) * fVar58;
        local_168 = (fVar51 * fVar26 - fVar52 * fVar59) * fVar31;
        fStack_154 = (fVar52 * fVar30 - fVar50 * fVar59) * fVar58;
        auVar47 = blendps(auVar48,ZEXT816(0),8);
        auVar56._8_4_ = local_158;
        auVar56._12_4_ = (fVar50 * fVar26 + fVar50 * fVar59) * fVar32;
        local_178._4_4_ = fVar38;
        local_178._0_4_ = auVar48._0_4_;
        local_178._8_4_ = (fVar52 * fVar26 - fVar51 * fVar59) * fVar27;
        local_178._12_4_ = 0;
        auVar33 = insertps(auVar56,auVar56,0x4c);
        uStack_160 = auVar33._0_4_;
        uStack_15c = auVar33._8_4_;
        uStack_150 = auVar47._8_4_;
        uStack_14c = auVar47._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x120),ZEXT816(0x3f800000),0x30);
        fVar26 = *pfVar21;
        fVar30 = pfVar21[1];
        fVar38 = pfVar21[2];
        fVar59 = pfVar21[3];
        fVar37 = pfVar21[8];
        local_1a8 = pfVar21[9];
        fStack_194 = pfVar21[10];
        fVar51 = fVar26 + fVar26;
        fVar52 = fVar30 + fVar30;
        fVar53 = fVar38 + fVar38;
        fVar50 = fVar59 * (fVar59 + fVar59);
        auVar40._0_4_ = (1.0 - (fVar38 * fVar53 + fVar30 * fVar52)) * fVar37;
        auVar40._4_4_ = (1.0 - (fVar38 * fVar53 + fVar26 * fVar51)) * local_1a8;
        auVar40._8_4_ = (1.0 - (fVar30 * fVar52 + fVar26 * fVar51)) * fStack_194;
        auVar40._12_4_ = (0.0 - (fVar50 + fVar50)) * pfVar21[0xb];
        fVar38 = (fVar52 * fVar26 + fVar53 * fVar59) * fVar37;
        auVar57._4_4_ = (fVar53 * fVar30 + fVar51 * fVar59) * local_1a8;
        auVar57._0_4_ = fVar38;
        local_198 = (fVar53 * fVar26 + fVar52 * fVar59) * fStack_194;
        local_1a8 = (fVar52 * fVar26 - fVar53 * fVar59) * local_1a8;
        fStack_194 = (fVar53 * fVar30 - fVar51 * fVar59) * fStack_194;
        auVar47 = blendps(auVar40,ZEXT816(0),8);
        auVar57._8_4_ = local_198;
        auVar57._12_4_ = (fVar51 * fVar26 + fVar51 * fVar59) * pfVar21[0xb];
        local_1b8._4_4_ = fVar38;
        local_1b8._0_4_ = auVar40._0_4_;
        local_1b8._8_4_ = (fVar53 * fVar26 - fVar52 * fVar59) * fVar37;
        local_1b8._12_4_ = 0;
        auVar33 = insertps(auVar57,auVar57,0x4c);
        uStack_1a0 = auVar33._0_4_;
        uStack_19c = auVar33._8_4_;
        uStack_190 = auVar47._8_4_;
        uStack_18c = auVar47._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar21 + 4),ZEXT816(0x3f800000),0x30);
        fStack_1a4 = auVar40._4_4_;
        fStack_164 = auVar48._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar47._0_8_);
        FUN_144afd82e(&local_138);
        auVar28._4_4_ = -(uint)(0.0 <= auVar13._4_4_ * fVar31);
        auVar28._0_4_ = -(uint)(0.0 <= auVar13._0_4_ * fVar27);
        auVar28._8_4_ = -(uint)(0.0 <= auVar13._8_4_ * fVar58);
        auVar28._12_4_ = -(uint)(0.0 <= auVar13._12_4_ * fVar32);
        auVar18._8_4_ = 0x3f800000;
        auVar18._0_8_ = &DAT_3f8000003f800000;
        auVar18._12_4_ = 0;
        auVar47 = blendvps(auVar19,auVar18,auVar28);
        fVar26 = auVar47._0_4_;
        local_130 = local_130 * fVar26;
        local_134 = local_134 * fVar26;
        local_138 = local_138 * fVar26;
        fVar26 = auVar47._4_4_;
        local_120 = local_120 * fVar26;
        local_124 = local_124 * fVar26;
        local_128 = fVar26 * local_128;
        fVar26 = auVar47._8_4_;
        local_110 = local_110 * fVar26;
        local_114 = local_114 * fVar26;
        local_118 = fVar26 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar26 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar30 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar41._0_4_ = fVar30 + fVar26;
        auVar41._4_4_ = fVar30 + fVar26;
        auVar41._8_4_ = fVar26 + fVar30;
        auVar41._12_4_ = fVar26 + fVar30;
        auVar29._4_4_ = -(uint)(1e-08 <= auVar41._4_4_);
        auVar29._0_4_ = -(uint)(1e-08 <= auVar41._0_4_);
        auVar29._8_4_ = -(uint)(1e-08 <= auVar41._8_4_);
        auVar29._12_4_ = -(uint)(1e-08 <= auVar41._12_4_);
        auVar47 = sqrtps(auVar41,auVar41);
        auVar47 = divps(_DAT_1499314a0,auVar47);
        auVar49._0_4_ = auVar47._0_4_ * local_1c8;
        auVar49._4_4_ = auVar47._4_4_ * fStack_1c4;
        auVar49._8_4_ = auVar47._8_4_ * fStack_1c0;
        auVar49._12_4_ = auVar47._12_4_ * fStack_1bc;
        auVar36 = blendvps(_DAT_149932320,auVar49,auVar29);
        auVar42 = blendps(local_108,ZEXT816(0),8);
      }
      fVar27 = auVar13._0_4_ * fVar27;
      fVar32 = auVar13._12_4_ * fVar32;
      fVar58 = auVar13._8_4_ * fVar58;
      fVar31 = auVar13._4_4_ * fVar31;
      fVar26 = *(float *)(local_1d0 + 0x40);
      pfVar21 = local_228 + local_220;
      *local_228 = auVar42._0_4_;
      puVar1 = (undefined8 *)((longlong)local_218 + (longlong)local_210 * 4);
      uVar16 = extractps(auVar42,1);
      *local_218 = uVar16;
      puVar2 = (undefined8 *)((longlong)local_208 + (longlong)local_200 * 4);
      uVar16 = extractps(auVar42,2);
      *local_208 = uVar16;
      puVar3 = local_268 + local_260;
      *local_268 = auVar36._0_4_;
      puVar4 = (undefined8 *)((longlong)local_258 + (longlong)local_250 * 4);
      uVar16 = extractps(auVar36,1);
      *local_258 = uVar16;
      puVar5 = (undefined8 *)((longlong)local_248 + (longlong)local_240 * 4);
      uVar16 = extractps(auVar36,2);
      *local_248 = uVar16;
      puVar6 = (undefined8 *)((longlong)local_238 + (longlong)local_230 * 4);
      uVar16 = extractps(auVar36,3);
      *local_238 = uVar16;
      pfVar7 = local_298 + local_290;
      *local_298 = fVar27;
      puVar8 = (undefined8 *)((longlong)local_288 + (longlong)local_280 * 4);
      auVar13._4_4_ = fVar31;
      auVar13._0_4_ = fVar27;
      auVar13._8_4_ = fVar58;
      auVar13._12_4_ = fVar32;
      uVar16 = extractps(auVar13,1);
      *local_288 = uVar16;
      puVar9 = (undefined8 *)((longlong)local_278 + (longlong)local_270 * 4);
      auVar17._4_4_ = fVar31;
      auVar17._0_4_ = fVar27;
      auVar17._8_4_ = fVar58;
      auVar17._12_4_ = fVar32;
      uVar16 = extractps(auVar17,2);
      *local_278 = uVar16;
      pfVar10 = local_2c8 + local_2c0;
      *local_2c8 = (auVar42._0_4_ - auVar60._0_4_) * fVar26;
      pfVar11 = local_2b8 + local_2b0;
      *local_2b8 = (auVar42._4_4_ - auVar60._4_4_) * fVar26;
      pfVar12 = local_2a8 + local_2a0;
      *local_2a8 = (auVar42._8_4_ - auVar60._8_4_) * fVar26;
      iVar23 = iVar23 + 1;
      piVar20 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar20 = (int *)(param_1 + 0x3c);
      }
      local_2c8 = pfVar10;
      local_2b8 = pfVar11;
      local_2a8 = pfVar12;
      local_298 = pfVar7;
      local_288 = puVar8;
      local_278 = puVar9;
      local_268 = puVar3;
      local_258 = puVar4;
      local_248 = puVar5;
      local_238 = puVar6;
      local_228 = pfVar21;
      local_218 = puVar1;
      local_208 = puVar2;
    } while (iVar23 < *piVar20);
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809e666 FUN_14809e666 body=2926 status=ok
// SIG undefined FUN_14809e666(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14809e666(char *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int *piVar19;
  uint uVar20;
  float *pfVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  float fVar42;
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  undefined1 auVar59 [12];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auStack_2e8 [32];
  float *local_2c8;
  int local_2c0;
  float *local_2b8;
  int local_2b0;
  float *local_2a8;
  int local_2a0;
  float *local_298;
  int local_290;
  undefined8 *local_288;
  int local_280;
  undefined8 *local_278;
  int local_270;
  undefined4 *local_268;
  int local_260;
  undefined8 *local_258;
  int local_250;
  undefined8 *local_248;
  int local_240;
  undefined8 *local_238;
  int local_230;
  float *local_228;
  int local_220;
  undefined8 *local_218;
  int local_210;
  undefined8 *local_208;
  int local_200;
  int *local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  undefined1 local_1d8 [8];
  longlong local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_14809d5d8(local_1d8,param_1);
  local_1f8 = (int *)0x0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  FUN_144a98d08(&local_1f8,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_298,param_1);
  FUN_144a76c20(&local_288,param_1);
  FUN_144a76c20(&local_278,param_1);
  FUN_144a76c20(&local_2c8,param_1);
  FUN_144a76c20(&local_2b8,param_1);
  FUN_144a76c20(&local_2a8,param_1);
  auVar18 = _DAT_149f63320;
  piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar19 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar19) {
    iVar24 = 0;
    do {
      iVar22 = *local_1f8;
      uVar20 = 0;
      if ((-1 < iVar22) && (uVar20 = iVar22 + 1, *(int *)(local_1d0 + 0x174) <= iVar22)) {
        uVar20 = 0;
      }
      iVar22 = *(int *)(*(longlong *)(local_1d0 + 0x180) + (ulonglong)uVar20 * 4);
      lVar23 = (longlong)iVar22 * 0x30;
      auVar46 = *(undefined1 (*) [16])(local_1d0 + 0x160);
      fVar26 = auVar46._0_4_;
      fVar30 = auVar46._4_4_;
      fVar57 = auVar46._12_4_;
      auVar13 = *(undefined1 (*) [16])(*(longlong *)(local_1d0 + 0x1b0) + 0x20 + lVar23);
      pfVar21 = (float *)(*(longlong *)(local_1d0 + 0x1b0) + lVar23);
      auVar32 = minps(auVar13,auVar46);
      auVar33._4_4_ = -(uint)(auVar32._4_4_ < 0.0);
      auVar33._0_4_ = -(uint)(auVar32._0_4_ < 0.0);
      auVar33._8_4_ = -(uint)(auVar32._8_4_ < 0.0);
      auVar33._12_4_ = -(uint)(auVar32._12_4_ < 0.0);
      iVar22 = movmskps(iVar22,auVar33);
      fVar31 = auVar46._8_4_;
      if (iVar22 == 0) {
        fVar26 = fVar26 * pfVar21[4];
        fVar30 = fVar30 * pfVar21[5];
        fVar31 = fVar31 * pfVar21[6];
        fVar57 = *(float *)(local_1d0 + 0x140);
        fVar25 = *(float *)(local_1d0 + 0x144);
        fVar29 = *(float *)(local_1d0 + 0x148);
        fVar37 = *(float *)(local_1d0 + 0x14c);
        fVar58 = fVar30 * fVar57 - fVar25 * fVar26;
        fVar36 = fVar31 * fVar25 - fVar29 * fVar30;
        fVar49 = fVar26 * fVar29 - fVar57 * fVar31;
        fVar58 = fVar58 + fVar58;
        fVar36 = fVar36 + fVar36;
        fVar49 = fVar49 + fVar49;
        auVar59._0_4_ =
             (fVar58 * fVar25 - fVar49 * fVar29) + fVar37 * fVar36 + fVar26 +
             *(float *)(local_1d0 + 0x150);
        auVar59._4_4_ =
             (fVar36 * fVar29 - fVar58 * fVar57) + fVar37 * fVar49 + fVar30 +
             *(float *)(local_1d0 + 0x154);
        auVar59._8_4_ =
             (fVar49 * fVar57 - fVar36 * fVar25) + fVar37 * fVar58 + fVar31 +
             *(float *)(local_1d0 + 0x158);
        local_1f8 = local_1f8 + local_1e8;
      }
      else {
        fVar25 = *(float *)(local_1d0 + 0x140);
        fVar29 = *(float *)(local_1d0 + 0x144);
        fVar37 = *(float *)(local_1d0 + 0x148);
        fVar58 = *(float *)(local_1d0 + 0x14c);
        fVar49 = fVar25 + fVar25;
        fVar50 = fVar29 + fVar29;
        fVar51 = fVar37 + fVar37;
        fVar36 = fVar58 * (fVar58 + fVar58);
        auVar45._0_4_ = (1.0 - (fVar37 * fVar51 + fVar29 * fVar50)) * fVar26;
        auVar45._4_4_ = (1.0 - (fVar37 * fVar51 + fVar25 * fVar49)) * fVar30;
        auVar45._8_4_ = (1.0 - (fVar29 * fVar50 + fVar25 * fVar49)) * fVar31;
        auVar45._12_4_ = (0.0 - (fVar36 + fVar36)) * fVar57;
        fVar37 = (fVar50 * fVar25 + fVar51 * fVar58) * fVar26;
        auVar53._4_4_ = (fVar51 * fVar29 + fVar49 * fVar58) * fVar30;
        auVar53._0_4_ = fVar37;
        local_158 = (fVar51 * fVar25 + fVar50 * fVar58) * fVar31;
        local_168 = (fVar50 * fVar25 - fVar51 * fVar58) * fVar30;
        fStack_154 = (fVar51 * fVar29 - fVar49 * fVar58) * fVar31;
        auVar46 = blendps(auVar45,ZEXT816(0),8);
        auVar53._8_4_ = local_158;
        auVar53._12_4_ = (fVar49 * fVar25 + fVar49 * fVar58) * fVar57;
        local_178._4_4_ = fVar37;
        local_178._0_4_ = auVar45._0_4_;
        local_178._8_4_ = (fVar51 * fVar25 - fVar50 * fVar58) * fVar26;
        local_178._12_4_ = 0;
        auVar32 = insertps(auVar53,auVar53,0x4c);
        uStack_160 = auVar32._0_4_;
        uStack_15c = auVar32._8_4_;
        uStack_150 = auVar46._8_4_;
        uStack_14c = auVar46._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x150),ZEXT816(0x3f800000),0x30);
        fVar25 = *pfVar21;
        fVar29 = pfVar21[1];
        fVar37 = pfVar21[2];
        fVar58 = pfVar21[3];
        fVar36 = pfVar21[8];
        local_1a8 = pfVar21[9];
        fStack_194 = pfVar21[10];
        fVar50 = fVar25 + fVar25;
        fVar51 = fVar29 + fVar29;
        fVar52 = fVar37 + fVar37;
        fVar49 = fVar58 * (fVar58 + fVar58);
        auVar38._0_4_ = (1.0 - (fVar37 * fVar52 + fVar29 * fVar51)) * fVar36;
        auVar38._4_4_ = (1.0 - (fVar37 * fVar52 + fVar25 * fVar50)) * local_1a8;
        auVar38._8_4_ = (1.0 - (fVar29 * fVar51 + fVar25 * fVar50)) * fStack_194;
        auVar38._12_4_ = (0.0 - (fVar49 + fVar49)) * pfVar21[0xb];
        fVar37 = (fVar51 * fVar25 + fVar52 * fVar58) * fVar36;
        auVar54._4_4_ = (fVar52 * fVar29 + fVar50 * fVar58) * local_1a8;
        auVar54._0_4_ = fVar37;
        local_198 = (fVar52 * fVar25 + fVar51 * fVar58) * fStack_194;
        local_1a8 = (fVar51 * fVar25 - fVar52 * fVar58) * local_1a8;
        fStack_194 = (fVar52 * fVar29 - fVar50 * fVar58) * fStack_194;
        auVar46 = blendps(auVar38,ZEXT816(0),8);
        auVar54._8_4_ = local_198;
        auVar54._12_4_ = (fVar50 * fVar25 + fVar50 * fVar58) * pfVar21[0xb];
        local_1b8._4_4_ = fVar37;
        local_1b8._0_4_ = auVar38._0_4_;
        local_1b8._8_4_ = (fVar52 * fVar25 - fVar51 * fVar58) * fVar36;
        local_1b8._12_4_ = 0;
        auVar32 = insertps(auVar54,auVar54,0x4c);
        uStack_1a0 = auVar32._0_4_;
        uStack_19c = auVar32._8_4_;
        uStack_190 = auVar46._8_4_;
        uStack_18c = auVar46._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar21 + 4),ZEXT816(0x3f800000),0x30);
        local_1f8 = local_1f8 + local_1e8;
        fStack_1a4 = auVar38._4_4_;
        fStack_164 = auVar45._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar46._0_8_);
        FUN_144afd82e(&local_138);
        auVar32._4_4_ = -(uint)(0.0 <= auVar13._4_4_ * fVar30);
        auVar32._0_4_ = -(uint)(0.0 <= auVar13._0_4_ * fVar26);
        auVar32._8_4_ = -(uint)(0.0 <= auVar13._8_4_ * fVar31);
        auVar32._12_4_ = -(uint)(0.0 <= auVar13._12_4_ * fVar57);
        auVar46._8_4_ = 0x3f800000;
        auVar46._0_8_ = &DAT_3f8000003f800000;
        auVar46._12_4_ = 0;
        auVar46 = blendvps(auVar18,auVar46,auVar32);
        fVar26 = auVar46._0_4_;
        local_130 = local_130 * fVar26;
        local_134 = local_134 * fVar26;
        local_138 = local_138 * fVar26;
        fVar26 = auVar46._4_4_;
        local_120 = local_120 * fVar26;
        local_124 = local_124 * fVar26;
        local_128 = fVar26 * local_128;
        fVar26 = auVar46._8_4_;
        local_110 = local_110 * fVar26;
        local_114 = local_114 * fVar26;
        local_118 = fVar26 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        auVar46 = blendps(local_108,ZEXT816(0),8);
        auVar59 = auVar46._0_12_;
      }
      lVar14 = *(longlong *)(local_1d0 + 0x1a0);
      pfVar21 = (float *)(lVar14 + lVar23);
      auVar46 = *(undefined1 (*) [16])(local_1d0 + 0x130);
      fVar26 = auVar46._0_4_;
      fVar30 = auVar46._4_4_;
      fVar57 = auVar46._8_4_;
      fVar31 = auVar46._12_4_;
      auVar13 = *(undefined1 (*) [16])(lVar14 + 0x20 + lVar23);
      auVar46 = minps(auVar13,auVar46);
      auVar34._4_4_ = -(uint)(auVar46._4_4_ < 0.0);
      auVar34._0_4_ = -(uint)(auVar46._0_4_ < 0.0);
      auVar34._8_4_ = -(uint)(auVar46._8_4_ < 0.0);
      auVar34._12_4_ = -(uint)(auVar46._12_4_ < 0.0);
      iVar22 = movmskps((int)lVar14,auVar34);
      if (iVar22 == 0) {
        fVar25 = *pfVar21;
        fVar29 = pfVar21[1];
        fVar37 = pfVar21[2];
        fVar58 = pfVar21[3];
        fVar36 = *(float *)(local_1d0 + 0x110);
        fVar49 = *(float *)(local_1d0 + 0x114);
        fVar50 = *(float *)(local_1d0 + 0x118);
        fVar51 = *(float *)(local_1d0 + 0x11c);
        fVar60 = pfVar21[4] * fVar26;
        fVar61 = pfVar21[5] * fVar30;
        fVar62 = pfVar21[6] * fVar57;
        fVar63 = pfVar21[7] * fVar31;
        fVar52 = fVar61 * fVar36 - fVar49 * fVar60;
        fVar42 = fVar62 * fVar49 - fVar50 * fVar61;
        fVar43 = fVar60 * fVar50 - fVar36 * fVar62;
        fVar44 = fVar63 * fVar51 - fVar51 * fVar63;
        fVar52 = fVar52 + fVar52;
        fVar42 = fVar42 + fVar42;
        fVar43 = fVar43 + fVar43;
        fVar44 = fVar44 + fVar44;
        auVar35._0_4_ =
             fVar50 * fVar29 * -1.0 +
             fVar49 * fVar37 * 1.0 + fVar36 * fVar58 * 1.0 + fVar25 * fVar51;
        auVar35._4_4_ =
             fVar50 * fVar25 * 1.0 +
             fVar49 * fVar58 * 1.0 + fVar36 * fVar37 * -1.0 + fVar29 * fVar51;
        auVar35._8_4_ =
             fVar50 * fVar58 * 1.0 +
             fVar49 * fVar25 * -1.0 + fVar36 * fVar29 * 1.0 + fVar37 * fVar51;
        auVar35._12_4_ =
             fVar50 * fVar37 * -1.0 +
             fVar49 * fVar29 * -1.0 + fVar36 * fVar25 * -1.0 + fVar58 * fVar51;
        auVar41._0_4_ =
             (fVar52 * fVar49 - fVar43 * fVar50) + fVar51 * fVar42 + fVar60 +
             *(float *)(local_1d0 + 0x120);
        auVar41._4_4_ =
             (fVar42 * fVar50 - fVar52 * fVar36) + fVar51 * fVar43 + fVar61 +
             *(float *)(local_1d0 + 0x124);
        auVar41._8_4_ =
             (fVar43 * fVar36 - fVar42 * fVar49) + fVar51 * fVar52 + fVar62 +
             *(float *)(local_1d0 + 0x128);
        auVar41._12_4_ =
             (fVar44 * fVar51 - fVar44 * fVar51) + fVar51 * fVar44 + fVar63 +
             *(float *)(local_1d0 + 300);
      }
      else {
        fVar25 = *(float *)(local_1d0 + 0x110);
        fVar29 = *(float *)(local_1d0 + 0x114);
        fVar37 = *(float *)(local_1d0 + 0x118);
        fVar58 = *(float *)(local_1d0 + 0x11c);
        fVar49 = fVar25 + fVar25;
        fVar50 = fVar29 + fVar29;
        fVar51 = fVar37 + fVar37;
        fVar36 = fVar58 * (fVar58 + fVar58);
        auVar47._0_4_ = (1.0 - (fVar37 * fVar51 + fVar29 * fVar50)) * fVar26;
        auVar47._4_4_ = (1.0 - (fVar37 * fVar51 + fVar25 * fVar49)) * fVar30;
        auVar47._8_4_ = (1.0 - (fVar29 * fVar50 + fVar25 * fVar49)) * fVar57;
        auVar47._12_4_ = (0.0 - (fVar36 + fVar36)) * fVar31;
        fVar37 = (fVar50 * fVar25 + fVar51 * fVar58) * fVar26;
        auVar55._4_4_ = (fVar51 * fVar29 + fVar49 * fVar58) * fVar30;
        auVar55._0_4_ = fVar37;
        local_158 = (fVar51 * fVar25 + fVar50 * fVar58) * fVar57;
        local_168 = (fVar50 * fVar25 - fVar51 * fVar58) * fVar30;
        fStack_154 = (fVar51 * fVar29 - fVar49 * fVar58) * fVar57;
        auVar46 = blendps(auVar47,ZEXT816(0),8);
        auVar55._8_4_ = local_158;
        auVar55._12_4_ = (fVar49 * fVar25 + fVar49 * fVar58) * fVar31;
        local_178._4_4_ = fVar37;
        local_178._0_4_ = auVar47._0_4_;
        local_178._8_4_ = (fVar51 * fVar25 - fVar50 * fVar58) * fVar26;
        local_178._12_4_ = 0;
        auVar32 = insertps(auVar55,auVar55,0x4c);
        uStack_160 = auVar32._0_4_;
        uStack_15c = auVar32._8_4_;
        uStack_150 = auVar46._8_4_;
        uStack_14c = auVar46._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x120),ZEXT816(0x3f800000),0x30);
        fVar25 = *pfVar21;
        fVar29 = pfVar21[1];
        fVar37 = pfVar21[2];
        fVar58 = pfVar21[3];
        fVar36 = pfVar21[8];
        local_1a8 = pfVar21[9];
        fStack_194 = pfVar21[10];
        fVar50 = fVar25 + fVar25;
        fVar51 = fVar29 + fVar29;
        fVar52 = fVar37 + fVar37;
        fVar49 = fVar58 * (fVar58 + fVar58);
        auVar39._0_4_ = (1.0 - (fVar37 * fVar52 + fVar29 * fVar51)) * fVar36;
        auVar39._4_4_ = (1.0 - (fVar37 * fVar52 + fVar25 * fVar50)) * local_1a8;
        auVar39._8_4_ = (1.0 - (fVar29 * fVar51 + fVar25 * fVar50)) * fStack_194;
        auVar39._12_4_ = (0.0 - (fVar49 + fVar49)) * pfVar21[0xb];
        fVar37 = (fVar51 * fVar25 + fVar52 * fVar58) * fVar36;
        auVar56._4_4_ = (fVar52 * fVar29 + fVar50 * fVar58) * local_1a8;
        auVar56._0_4_ = fVar37;
        local_198 = (fVar52 * fVar25 + fVar51 * fVar58) * fStack_194;
        local_1a8 = (fVar51 * fVar25 - fVar52 * fVar58) * local_1a8;
        fStack_194 = (fVar52 * fVar29 - fVar50 * fVar58) * fStack_194;
        auVar46 = blendps(auVar39,ZEXT816(0),8);
        auVar56._8_4_ = local_198;
        auVar56._12_4_ = (fVar50 * fVar25 + fVar50 * fVar58) * pfVar21[0xb];
        local_1b8._4_4_ = fVar37;
        local_1b8._0_4_ = auVar39._0_4_;
        local_1b8._8_4_ = (fVar52 * fVar25 - fVar51 * fVar58) * fVar36;
        local_1b8._12_4_ = 0;
        auVar32 = insertps(auVar56,auVar56,0x4c);
        uStack_1a0 = auVar32._0_4_;
        uStack_19c = auVar32._8_4_;
        uStack_190 = auVar46._8_4_;
        uStack_18c = auVar46._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar21 + 4),ZEXT816(0x3f800000),0x30);
        fStack_1a4 = auVar39._4_4_;
        fStack_164 = auVar47._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar46._0_8_);
        FUN_144afd82e(&local_138);
        auVar27._4_4_ = -(uint)(0.0 <= auVar13._4_4_ * fVar30);
        auVar27._0_4_ = -(uint)(0.0 <= auVar13._0_4_ * fVar26);
        auVar27._8_4_ = -(uint)(0.0 <= auVar13._8_4_ * fVar57);
        auVar27._12_4_ = -(uint)(0.0 <= auVar13._12_4_ * fVar31);
        auVar17._8_4_ = 0x3f800000;
        auVar17._0_8_ = &DAT_3f8000003f800000;
        auVar17._12_4_ = 0;
        auVar46 = blendvps(auVar18,auVar17,auVar27);
        fVar25 = auVar46._0_4_;
        local_130 = local_130 * fVar25;
        local_134 = local_134 * fVar25;
        local_138 = local_138 * fVar25;
        fVar25 = auVar46._4_4_;
        local_120 = local_120 * fVar25;
        local_124 = local_124 * fVar25;
        local_128 = fVar25 * local_128;
        fVar25 = auVar46._8_4_;
        local_110 = local_110 * fVar25;
        local_114 = local_114 * fVar25;
        local_118 = fVar25 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar25 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar29 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar40._0_4_ = fVar29 + fVar25;
        auVar40._4_4_ = fVar29 + fVar25;
        auVar40._8_4_ = fVar25 + fVar29;
        auVar40._12_4_ = fVar25 + fVar29;
        auVar28._4_4_ = -(uint)(1e-08 <= auVar40._4_4_);
        auVar28._0_4_ = -(uint)(1e-08 <= auVar40._0_4_);
        auVar28._8_4_ = -(uint)(1e-08 <= auVar40._8_4_);
        auVar28._12_4_ = -(uint)(1e-08 <= auVar40._12_4_);
        auVar46 = sqrtps(auVar40,auVar40);
        auVar46 = divps(_DAT_1499314a0,auVar46);
        auVar48._0_4_ = auVar46._0_4_ * local_1c8;
        auVar48._4_4_ = auVar46._4_4_ * fStack_1c4;
        auVar48._8_4_ = auVar46._8_4_ * fStack_1c0;
        auVar48._12_4_ = auVar46._12_4_ * fStack_1bc;
        auVar35 = blendvps(_DAT_149932320,auVar48,auVar28);
        auVar41 = blendps(local_108,ZEXT816(0),8);
      }
      fVar26 = auVar13._0_4_ * fVar26;
      fVar31 = auVar13._12_4_ * fVar31;
      fVar57 = auVar13._8_4_ * fVar57;
      fVar30 = auVar13._4_4_ * fVar30;
      fVar25 = *(float *)(local_1d0 + 0x40);
      pfVar21 = local_228 + local_220;
      *local_228 = auVar41._0_4_;
      puVar1 = (undefined8 *)((longlong)local_218 + (longlong)local_210 * 4);
      uVar15 = extractps(auVar41,1);
      *local_218 = uVar15;
      puVar2 = (undefined8 *)((longlong)local_208 + (longlong)local_200 * 4);
      uVar15 = extractps(auVar41,2);
      *local_208 = uVar15;
      puVar3 = local_268 + local_260;
      *local_268 = auVar35._0_4_;
      puVar4 = (undefined8 *)((longlong)local_258 + (longlong)local_250 * 4);
      uVar15 = extractps(auVar35,1);
      *local_258 = uVar15;
      puVar5 = (undefined8 *)((longlong)local_248 + (longlong)local_240 * 4);
      uVar15 = extractps(auVar35,2);
      *local_248 = uVar15;
      puVar6 = (undefined8 *)((longlong)local_238 + (longlong)local_230 * 4);
      uVar15 = extractps(auVar35,3);
      *local_238 = uVar15;
      pfVar7 = local_298 + local_290;
      *local_298 = fVar26;
      puVar8 = (undefined8 *)((longlong)local_288 + (longlong)local_280 * 4);
      auVar13._4_4_ = fVar30;
      auVar13._0_4_ = fVar26;
      auVar13._8_4_ = fVar57;
      auVar13._12_4_ = fVar31;
      uVar15 = extractps(auVar13,1);
      *local_288 = uVar15;
      puVar9 = (undefined8 *)((longlong)local_278 + (longlong)local_270 * 4);
      auVar16._4_4_ = fVar30;
      auVar16._0_4_ = fVar26;
      auVar16._8_4_ = fVar57;
      auVar16._12_4_ = fVar31;
      uVar15 = extractps(auVar16,2);
      *local_278 = uVar15;
      pfVar10 = local_2c8 + local_2c0;
      *local_2c8 = (auVar41._0_4_ - auVar59._0_4_) * fVar25;
      pfVar11 = local_2b8 + local_2b0;
      *local_2b8 = (auVar41._4_4_ - auVar59._4_4_) * fVar25;
      pfVar12 = local_2a8 + local_2a0;
      *local_2a8 = (auVar41._8_4_ - auVar59._8_4_) * fVar25;
      iVar24 = iVar24 + 1;
      piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar19 = (int *)(param_1 + 0x3c);
      }
      local_2c8 = pfVar10;
      local_2b8 = pfVar11;
      local_2a8 = pfVar12;
      local_298 = pfVar7;
      local_288 = puVar8;
      local_278 = puVar9;
      local_268 = puVar3;
      local_258 = puVar4;
      local_248 = puVar5;
      local_238 = puVar6;
      local_228 = pfVar21;
      local_218 = puVar1;
      local_208 = puVar2;
    } while (iVar24 < *piVar19);
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809f1d5 FUN_14809f1d5 body=2925 status=ok
// SIG undefined FUN_14809f1d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14809f1d5(char *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int *piVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  float fVar42;
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  undefined1 auVar59 [12];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auStack_2e8 [32];
  float *local_2c8;
  int local_2c0;
  float *local_2b8;
  int local_2b0;
  float *local_2a8;
  int local_2a0;
  float *local_298;
  int local_290;
  undefined8 *local_288;
  int local_280;
  undefined8 *local_278;
  int local_270;
  undefined4 *local_268;
  int local_260;
  undefined8 *local_258;
  int local_250;
  undefined8 *local_248;
  int local_240;
  undefined8 *local_238;
  int local_230;
  float *local_228;
  int local_220;
  undefined8 *local_218;
  int local_210;
  undefined8 *local_208;
  int local_200;
  int *local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  undefined1 local_1d8 [8];
  longlong local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_14809d5d8(local_1d8,param_1);
  local_1f8 = (int *)0x0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  FUN_144a98d08(&local_1f8,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_298,param_1);
  FUN_144a76c20(&local_288,param_1);
  FUN_144a76c20(&local_278,param_1);
  FUN_144a76c20(&local_2c8,param_1);
  FUN_144a76c20(&local_2b8,param_1);
  FUN_144a76c20(&local_2a8,param_1);
  auVar18 = _DAT_149f63320;
  piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar19 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar19) {
    iVar23 = 0;
    do {
      iVar22 = *local_1f8;
      iVar21 = 0;
      if ((-1 < iVar22) && (iVar22 < *(int *)(local_1d0 + 0x178))) {
        iVar21 = *(int *)(local_1d0 + 0x174) + iVar22 + 1;
      }
      iVar22 = *(int *)(*(longlong *)(local_1d0 + 0x180) + (longlong)iVar21 * 4);
      lVar24 = (longlong)iVar22 * 0x30;
      auVar46 = *(undefined1 (*) [16])(local_1d0 + 0x160);
      fVar26 = auVar46._0_4_;
      fVar30 = auVar46._4_4_;
      fVar57 = auVar46._12_4_;
      auVar13 = *(undefined1 (*) [16])(*(longlong *)(local_1d0 + 0x1b0) + 0x20 + lVar24);
      pfVar20 = (float *)(*(longlong *)(local_1d0 + 0x1b0) + lVar24);
      auVar32 = minps(auVar13,auVar46);
      auVar33._4_4_ = -(uint)(auVar32._4_4_ < 0.0);
      auVar33._0_4_ = -(uint)(auVar32._0_4_ < 0.0);
      auVar33._8_4_ = -(uint)(auVar32._8_4_ < 0.0);
      auVar33._12_4_ = -(uint)(auVar32._12_4_ < 0.0);
      iVar22 = movmskps(iVar22,auVar33);
      fVar31 = auVar46._8_4_;
      if (iVar22 == 0) {
        fVar26 = fVar26 * pfVar20[4];
        fVar30 = fVar30 * pfVar20[5];
        fVar31 = fVar31 * pfVar20[6];
        fVar57 = *(float *)(local_1d0 + 0x140);
        fVar25 = *(float *)(local_1d0 + 0x144);
        fVar29 = *(float *)(local_1d0 + 0x148);
        fVar37 = *(float *)(local_1d0 + 0x14c);
        fVar58 = fVar30 * fVar57 - fVar25 * fVar26;
        fVar36 = fVar31 * fVar25 - fVar29 * fVar30;
        fVar49 = fVar26 * fVar29 - fVar57 * fVar31;
        fVar58 = fVar58 + fVar58;
        fVar36 = fVar36 + fVar36;
        fVar49 = fVar49 + fVar49;
        auVar59._0_4_ =
             (fVar58 * fVar25 - fVar49 * fVar29) + fVar37 * fVar36 + fVar26 +
             *(float *)(local_1d0 + 0x150);
        auVar59._4_4_ =
             (fVar36 * fVar29 - fVar58 * fVar57) + fVar37 * fVar49 + fVar30 +
             *(float *)(local_1d0 + 0x154);
        auVar59._8_4_ =
             (fVar49 * fVar57 - fVar36 * fVar25) + fVar37 * fVar58 + fVar31 +
             *(float *)(local_1d0 + 0x158);
        local_1f8 = local_1f8 + local_1e8;
      }
      else {
        fVar25 = *(float *)(local_1d0 + 0x140);
        fVar29 = *(float *)(local_1d0 + 0x144);
        fVar37 = *(float *)(local_1d0 + 0x148);
        fVar58 = *(float *)(local_1d0 + 0x14c);
        fVar49 = fVar25 + fVar25;
        fVar50 = fVar29 + fVar29;
        fVar51 = fVar37 + fVar37;
        fVar36 = fVar58 * (fVar58 + fVar58);
        auVar45._0_4_ = (1.0 - (fVar37 * fVar51 + fVar29 * fVar50)) * fVar26;
        auVar45._4_4_ = (1.0 - (fVar37 * fVar51 + fVar25 * fVar49)) * fVar30;
        auVar45._8_4_ = (1.0 - (fVar29 * fVar50 + fVar25 * fVar49)) * fVar31;
        auVar45._12_4_ = (0.0 - (fVar36 + fVar36)) * fVar57;
        fVar37 = (fVar50 * fVar25 + fVar51 * fVar58) * fVar26;
        auVar53._4_4_ = (fVar51 * fVar29 + fVar49 * fVar58) * fVar30;
        auVar53._0_4_ = fVar37;
        local_158 = (fVar51 * fVar25 + fVar50 * fVar58) * fVar31;
        local_168 = (fVar50 * fVar25 - fVar51 * fVar58) * fVar30;
        fStack_154 = (fVar51 * fVar29 - fVar49 * fVar58) * fVar31;
        auVar46 = blendps(auVar45,ZEXT816(0),8);
        auVar53._8_4_ = local_158;
        auVar53._12_4_ = (fVar49 * fVar25 + fVar49 * fVar58) * fVar57;
        local_178._4_4_ = fVar37;
        local_178._0_4_ = auVar45._0_4_;
        local_178._8_4_ = (fVar51 * fVar25 - fVar50 * fVar58) * fVar26;
        local_178._12_4_ = 0;
        auVar32 = insertps(auVar53,auVar53,0x4c);
        uStack_160 = auVar32._0_4_;
        uStack_15c = auVar32._8_4_;
        uStack_150 = auVar46._8_4_;
        uStack_14c = auVar46._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x150),ZEXT816(0x3f800000),0x30);
        fVar25 = *pfVar20;
        fVar29 = pfVar20[1];
        fVar37 = pfVar20[2];
        fVar58 = pfVar20[3];
        fVar36 = pfVar20[8];
        local_1a8 = pfVar20[9];
        fStack_194 = pfVar20[10];
        fVar50 = fVar25 + fVar25;
        fVar51 = fVar29 + fVar29;
        fVar52 = fVar37 + fVar37;
        fVar49 = fVar58 * (fVar58 + fVar58);
        auVar38._0_4_ = (1.0 - (fVar37 * fVar52 + fVar29 * fVar51)) * fVar36;
        auVar38._4_4_ = (1.0 - (fVar37 * fVar52 + fVar25 * fVar50)) * local_1a8;
        auVar38._8_4_ = (1.0 - (fVar29 * fVar51 + fVar25 * fVar50)) * fStack_194;
        auVar38._12_4_ = (0.0 - (fVar49 + fVar49)) * pfVar20[0xb];
        fVar37 = (fVar51 * fVar25 + fVar52 * fVar58) * fVar36;
        auVar54._4_4_ = (fVar52 * fVar29 + fVar50 * fVar58) * local_1a8;
        auVar54._0_4_ = fVar37;
        local_198 = (fVar52 * fVar25 + fVar51 * fVar58) * fStack_194;
        local_1a8 = (fVar51 * fVar25 - fVar52 * fVar58) * local_1a8;
        fStack_194 = (fVar52 * fVar29 - fVar50 * fVar58) * fStack_194;
        auVar46 = blendps(auVar38,ZEXT816(0),8);
        auVar54._8_4_ = local_198;
        auVar54._12_4_ = (fVar50 * fVar25 + fVar50 * fVar58) * pfVar20[0xb];
        local_1b8._4_4_ = fVar37;
        local_1b8._0_4_ = auVar38._0_4_;
        local_1b8._8_4_ = (fVar52 * fVar25 - fVar51 * fVar58) * fVar36;
        local_1b8._12_4_ = 0;
        auVar32 = insertps(auVar54,auVar54,0x4c);
        uStack_1a0 = auVar32._0_4_;
        uStack_19c = auVar32._8_4_;
        uStack_190 = auVar46._8_4_;
        uStack_18c = auVar46._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar20 + 4),ZEXT816(0x3f800000),0x30);
        local_1f8 = local_1f8 + local_1e8;
        fStack_1a4 = auVar38._4_4_;
        fStack_164 = auVar45._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar46._0_8_);
        FUN_144afd82e(&local_138);
        auVar32._4_4_ = -(uint)(0.0 <= auVar13._4_4_ * fVar30);
        auVar32._0_4_ = -(uint)(0.0 <= auVar13._0_4_ * fVar26);
        auVar32._8_4_ = -(uint)(0.0 <= auVar13._8_4_ * fVar31);
        auVar32._12_4_ = -(uint)(0.0 <= auVar13._12_4_ * fVar57);
        auVar46._8_4_ = 0x3f800000;
        auVar46._0_8_ = &DAT_3f8000003f800000;
        auVar46._12_4_ = 0;
        auVar46 = blendvps(auVar18,auVar46,auVar32);
        fVar26 = auVar46._0_4_;
        local_130 = local_130 * fVar26;
        local_134 = local_134 * fVar26;
        local_138 = local_138 * fVar26;
        fVar26 = auVar46._4_4_;
        local_120 = local_120 * fVar26;
        local_124 = local_124 * fVar26;
        local_128 = fVar26 * local_128;
        fVar26 = auVar46._8_4_;
        local_110 = local_110 * fVar26;
        local_114 = local_114 * fVar26;
        local_118 = fVar26 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        auVar46 = blendps(local_108,ZEXT816(0),8);
        auVar59 = auVar46._0_12_;
      }
      lVar14 = *(longlong *)(local_1d0 + 0x1a0);
      pfVar20 = (float *)(lVar14 + lVar24);
      auVar46 = *(undefined1 (*) [16])(local_1d0 + 0x130);
      fVar26 = auVar46._0_4_;
      fVar30 = auVar46._4_4_;
      fVar57 = auVar46._8_4_;
      fVar31 = auVar46._12_4_;
      auVar13 = *(undefined1 (*) [16])(lVar14 + 0x20 + lVar24);
      auVar46 = minps(auVar13,auVar46);
      auVar34._4_4_ = -(uint)(auVar46._4_4_ < 0.0);
      auVar34._0_4_ = -(uint)(auVar46._0_4_ < 0.0);
      auVar34._8_4_ = -(uint)(auVar46._8_4_ < 0.0);
      auVar34._12_4_ = -(uint)(auVar46._12_4_ < 0.0);
      iVar22 = movmskps((int)lVar14,auVar34);
      if (iVar22 == 0) {
        fVar25 = *pfVar20;
        fVar29 = pfVar20[1];
        fVar37 = pfVar20[2];
        fVar58 = pfVar20[3];
        fVar36 = *(float *)(local_1d0 + 0x110);
        fVar49 = *(float *)(local_1d0 + 0x114);
        fVar50 = *(float *)(local_1d0 + 0x118);
        fVar51 = *(float *)(local_1d0 + 0x11c);
        fVar60 = pfVar20[4] * fVar26;
        fVar61 = pfVar20[5] * fVar30;
        fVar62 = pfVar20[6] * fVar57;
        fVar63 = pfVar20[7] * fVar31;
        fVar52 = fVar61 * fVar36 - fVar49 * fVar60;
        fVar42 = fVar62 * fVar49 - fVar50 * fVar61;
        fVar43 = fVar60 * fVar50 - fVar36 * fVar62;
        fVar44 = fVar63 * fVar51 - fVar51 * fVar63;
        fVar52 = fVar52 + fVar52;
        fVar42 = fVar42 + fVar42;
        fVar43 = fVar43 + fVar43;
        fVar44 = fVar44 + fVar44;
        auVar35._0_4_ =
             fVar50 * fVar29 * -1.0 +
             fVar49 * fVar37 * 1.0 + fVar36 * fVar58 * 1.0 + fVar25 * fVar51;
        auVar35._4_4_ =
             fVar50 * fVar25 * 1.0 +
             fVar49 * fVar58 * 1.0 + fVar36 * fVar37 * -1.0 + fVar29 * fVar51;
        auVar35._8_4_ =
             fVar50 * fVar58 * 1.0 +
             fVar49 * fVar25 * -1.0 + fVar36 * fVar29 * 1.0 + fVar37 * fVar51;
        auVar35._12_4_ =
             fVar50 * fVar37 * -1.0 +
             fVar49 * fVar29 * -1.0 + fVar36 * fVar25 * -1.0 + fVar58 * fVar51;
        auVar41._0_4_ =
             (fVar52 * fVar49 - fVar43 * fVar50) + fVar51 * fVar42 + fVar60 +
             *(float *)(local_1d0 + 0x120);
        auVar41._4_4_ =
             (fVar42 * fVar50 - fVar52 * fVar36) + fVar51 * fVar43 + fVar61 +
             *(float *)(local_1d0 + 0x124);
        auVar41._8_4_ =
             (fVar43 * fVar36 - fVar42 * fVar49) + fVar51 * fVar52 + fVar62 +
             *(float *)(local_1d0 + 0x128);
        auVar41._12_4_ =
             (fVar44 * fVar51 - fVar44 * fVar51) + fVar51 * fVar44 + fVar63 +
             *(float *)(local_1d0 + 300);
      }
      else {
        fVar25 = *(float *)(local_1d0 + 0x110);
        fVar29 = *(float *)(local_1d0 + 0x114);
        fVar37 = *(float *)(local_1d0 + 0x118);
        fVar58 = *(float *)(local_1d0 + 0x11c);
        fVar49 = fVar25 + fVar25;
        fVar50 = fVar29 + fVar29;
        fVar51 = fVar37 + fVar37;
        fVar36 = fVar58 * (fVar58 + fVar58);
        auVar47._0_4_ = (1.0 - (fVar37 * fVar51 + fVar29 * fVar50)) * fVar26;
        auVar47._4_4_ = (1.0 - (fVar37 * fVar51 + fVar25 * fVar49)) * fVar30;
        auVar47._8_4_ = (1.0 - (fVar29 * fVar50 + fVar25 * fVar49)) * fVar57;
        auVar47._12_4_ = (0.0 - (fVar36 + fVar36)) * fVar31;
        fVar37 = (fVar50 * fVar25 + fVar51 * fVar58) * fVar26;
        auVar55._4_4_ = (fVar51 * fVar29 + fVar49 * fVar58) * fVar30;
        auVar55._0_4_ = fVar37;
        local_158 = (fVar51 * fVar25 + fVar50 * fVar58) * fVar57;
        local_168 = (fVar50 * fVar25 - fVar51 * fVar58) * fVar30;
        fStack_154 = (fVar51 * fVar29 - fVar49 * fVar58) * fVar57;
        auVar46 = blendps(auVar47,ZEXT816(0),8);
        auVar55._8_4_ = local_158;
        auVar55._12_4_ = (fVar49 * fVar25 + fVar49 * fVar58) * fVar31;
        local_178._4_4_ = fVar37;
        local_178._0_4_ = auVar47._0_4_;
        local_178._8_4_ = (fVar51 * fVar25 - fVar50 * fVar58) * fVar26;
        local_178._12_4_ = 0;
        auVar32 = insertps(auVar55,auVar55,0x4c);
        uStack_160 = auVar32._0_4_;
        uStack_15c = auVar32._8_4_;
        uStack_150 = auVar46._8_4_;
        uStack_14c = auVar46._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x120),ZEXT816(0x3f800000),0x30);
        fVar25 = *pfVar20;
        fVar29 = pfVar20[1];
        fVar37 = pfVar20[2];
        fVar58 = pfVar20[3];
        fVar36 = pfVar20[8];
        local_1a8 = pfVar20[9];
        fStack_194 = pfVar20[10];
        fVar50 = fVar25 + fVar25;
        fVar51 = fVar29 + fVar29;
        fVar52 = fVar37 + fVar37;
        fVar49 = fVar58 * (fVar58 + fVar58);
        auVar39._0_4_ = (1.0 - (fVar37 * fVar52 + fVar29 * fVar51)) * fVar36;
        auVar39._4_4_ = (1.0 - (fVar37 * fVar52 + fVar25 * fVar50)) * local_1a8;
        auVar39._8_4_ = (1.0 - (fVar29 * fVar51 + fVar25 * fVar50)) * fStack_194;
        auVar39._12_4_ = (0.0 - (fVar49 + fVar49)) * pfVar20[0xb];
        fVar37 = (fVar51 * fVar25 + fVar52 * fVar58) * fVar36;
        auVar56._4_4_ = (fVar52 * fVar29 + fVar50 * fVar58) * local_1a8;
        auVar56._0_4_ = fVar37;
        local_198 = (fVar52 * fVar25 + fVar51 * fVar58) * fStack_194;
        local_1a8 = (fVar51 * fVar25 - fVar52 * fVar58) * local_1a8;
        fStack_194 = (fVar52 * fVar29 - fVar50 * fVar58) * fStack_194;
        auVar46 = blendps(auVar39,ZEXT816(0),8);
        auVar56._8_4_ = local_198;
        auVar56._12_4_ = (fVar50 * fVar25 + fVar50 * fVar58) * pfVar20[0xb];
        local_1b8._4_4_ = fVar37;
        local_1b8._0_4_ = auVar39._0_4_;
        local_1b8._8_4_ = (fVar52 * fVar25 - fVar51 * fVar58) * fVar36;
        local_1b8._12_4_ = 0;
        auVar32 = insertps(auVar56,auVar56,0x4c);
        uStack_1a0 = auVar32._0_4_;
        uStack_19c = auVar32._8_4_;
        uStack_190 = auVar46._8_4_;
        uStack_18c = auVar46._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar20 + 4),ZEXT816(0x3f800000),0x30);
        fStack_1a4 = auVar39._4_4_;
        fStack_164 = auVar47._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar46._0_8_);
        FUN_144afd82e(&local_138);
        auVar27._4_4_ = -(uint)(0.0 <= auVar13._4_4_ * fVar30);
        auVar27._0_4_ = -(uint)(0.0 <= auVar13._0_4_ * fVar26);
        auVar27._8_4_ = -(uint)(0.0 <= auVar13._8_4_ * fVar57);
        auVar27._12_4_ = -(uint)(0.0 <= auVar13._12_4_ * fVar31);
        auVar17._8_4_ = 0x3f800000;
        auVar17._0_8_ = &DAT_3f8000003f800000;
        auVar17._12_4_ = 0;
        auVar46 = blendvps(auVar18,auVar17,auVar27);
        fVar25 = auVar46._0_4_;
        local_130 = local_130 * fVar25;
        local_134 = local_134 * fVar25;
        local_138 = local_138 * fVar25;
        fVar25 = auVar46._4_4_;
        local_120 = local_120 * fVar25;
        local_124 = local_124 * fVar25;
        local_128 = fVar25 * local_128;
        fVar25 = auVar46._8_4_;
        local_110 = local_110 * fVar25;
        local_114 = local_114 * fVar25;
        local_118 = fVar25 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar25 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar29 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar40._0_4_ = fVar29 + fVar25;
        auVar40._4_4_ = fVar29 + fVar25;
        auVar40._8_4_ = fVar25 + fVar29;
        auVar40._12_4_ = fVar25 + fVar29;
        auVar28._4_4_ = -(uint)(1e-08 <= auVar40._4_4_);
        auVar28._0_4_ = -(uint)(1e-08 <= auVar40._0_4_);
        auVar28._8_4_ = -(uint)(1e-08 <= auVar40._8_4_);
        auVar28._12_4_ = -(uint)(1e-08 <= auVar40._12_4_);
        auVar46 = sqrtps(auVar40,auVar40);
        auVar46 = divps(_DAT_1499314a0,auVar46);
        auVar48._0_4_ = auVar46._0_4_ * local_1c8;
        auVar48._4_4_ = auVar46._4_4_ * fStack_1c4;
        auVar48._8_4_ = auVar46._8_4_ * fStack_1c0;
        auVar48._12_4_ = auVar46._12_4_ * fStack_1bc;
        auVar35 = blendvps(_DAT_149932320,auVar48,auVar28);
        auVar41 = blendps(local_108,ZEXT816(0),8);
      }
      fVar26 = auVar13._0_4_ * fVar26;
      fVar31 = auVar13._12_4_ * fVar31;
      fVar57 = auVar13._8_4_ * fVar57;
      fVar30 = auVar13._4_4_ * fVar30;
      fVar25 = *(float *)(local_1d0 + 0x40);
      pfVar20 = local_228 + local_220;
      *local_228 = auVar41._0_4_;
      puVar1 = (undefined8 *)((longlong)local_218 + (longlong)local_210 * 4);
      uVar15 = extractps(auVar41,1);
      *local_218 = uVar15;
      puVar2 = (undefined8 *)((longlong)local_208 + (longlong)local_200 * 4);
      uVar15 = extractps(auVar41,2);
      *local_208 = uVar15;
      puVar3 = local_268 + local_260;
      *local_268 = auVar35._0_4_;
      puVar4 = (undefined8 *)((longlong)local_258 + (longlong)local_250 * 4);
      uVar15 = extractps(auVar35,1);
      *local_258 = uVar15;
      puVar5 = (undefined8 *)((longlong)local_248 + (longlong)local_240 * 4);
      uVar15 = extractps(auVar35,2);
      *local_248 = uVar15;
      puVar6 = (undefined8 *)((longlong)local_238 + (longlong)local_230 * 4);
      uVar15 = extractps(auVar35,3);
      *local_238 = uVar15;
      pfVar7 = local_298 + local_290;
      *local_298 = fVar26;
      puVar8 = (undefined8 *)((longlong)local_288 + (longlong)local_280 * 4);
      auVar13._4_4_ = fVar30;
      auVar13._0_4_ = fVar26;
      auVar13._8_4_ = fVar57;
      auVar13._12_4_ = fVar31;
      uVar15 = extractps(auVar13,1);
      *local_288 = uVar15;
      puVar9 = (undefined8 *)((longlong)local_278 + (longlong)local_270 * 4);
      auVar16._4_4_ = fVar30;
      auVar16._0_4_ = fVar26;
      auVar16._8_4_ = fVar57;
      auVar16._12_4_ = fVar31;
      uVar15 = extractps(auVar16,2);
      *local_278 = uVar15;
      pfVar10 = local_2c8 + local_2c0;
      *local_2c8 = (auVar41._0_4_ - auVar59._0_4_) * fVar25;
      pfVar11 = local_2b8 + local_2b0;
      *local_2b8 = (auVar41._4_4_ - auVar59._4_4_) * fVar25;
      pfVar12 = local_2a8 + local_2a0;
      *local_2a8 = (auVar41._8_4_ - auVar59._8_4_) * fVar25;
      iVar23 = iVar23 + 1;
      piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar19 = (int *)(param_1 + 0x3c);
      }
      local_2c8 = pfVar10;
      local_2b8 = pfVar11;
      local_2a8 = pfVar12;
      local_298 = pfVar7;
      local_288 = puVar8;
      local_278 = puVar9;
      local_268 = puVar3;
      local_258 = puVar4;
      local_248 = puVar5;
      local_238 = puVar6;
      local_228 = pfVar20;
      local_218 = puVar1;
      local_208 = puVar2;
    } while (iVar23 < *piVar19);
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14809fd43 FUN_14809fd43 body=3459 status=ok
// SIG undefined FUN_14809fd43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14809fd43(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int *piVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar57;
  undefined1 auVar54 [12];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar58;
  float fVar60;
  float fVar61;
  undefined1 auVar59 [12];
  undefined1 auStack_338 [44];
  float local_30c;
  undefined1 local_308 [16];
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float *local_2e8;
  int local_2e0;
  float *local_2d8;
  int local_2d0;
  float *local_2c8;
  int local_2c0;
  float *local_2b8;
  int local_2b0;
  float *local_2a8;
  int local_2a0;
  float *local_298;
  int local_290;
  undefined4 *local_288;
  int local_280;
  undefined4 *local_278;
  int local_270;
  undefined4 *local_268;
  int local_260;
  undefined4 *local_258;
  int local_250;
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  undefined8 uStack_210;
  int local_208;
  int *local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  undefined1 local_1d8 [8];
  longlong local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_14809d5d8(local_1d8,param_1);
  iVar22 = 0;
  local_1e8 = 0;
  local_1f8 = (int *)0x0;
  uStack_1f0 = 0;
  FUN_144a98d08(&local_1f8,param_1);
  local_208 = 0;
  local_218 = (float *)0x0;
  uStack_210 = 0;
  FUN_144a98dce(&local_218,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_288,param_1);
  FUN_144a76c20(&local_278,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_2b8,param_1);
  FUN_144a76c20(&local_2a8,param_1);
  FUN_144a76c20(&local_298,param_1);
  FUN_144a76c20(&local_2e8,param_1);
  FUN_144a76c20(&local_2d8,param_1);
  FUN_144a76c20(&local_2c8,param_1);
  piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar19 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar19) {
    auVar26 = _DAT_149932320;
    auVar55 = _DAT_1499314a0;
    do {
      auVar30 = _DAT_149e1ef10;
      iVar21 = *local_1f8;
      iVar13 = *(int *)(local_1d0 + 0x170);
      iVar18 = iVar13;
      if (iVar21 < iVar13) {
        iVar18 = iVar21;
      }
      local_30c = *local_218;
      if (iVar21 < 0) {
        iVar18 = iVar13;
      }
      lVar23 = (longlong)iVar18 * 0x30;
      auVar29 = *(undefined1 (*) [16])(local_1d0 + 0x160);
      fVar15 = auVar29._0_4_;
      fVar16 = auVar29._4_4_;
      fVar17 = auVar29._8_4_;
      fVar25 = auVar29._12_4_;
      auVar31 = *(undefined1 (*) [16])(*(longlong *)(local_1d0 + 0x1b0) + 0x20 + lVar23);
      pfVar20 = (float *)(*(longlong *)(local_1d0 + 0x1b0) + lVar23);
      auVar29 = minps(auVar31,auVar29);
      auVar48._4_4_ = -(uint)(auVar29._4_4_ < 0.0);
      auVar48._0_4_ = -(uint)(auVar29._0_4_ < 0.0);
      auVar48._8_4_ = -(uint)(auVar29._8_4_ < 0.0);
      auVar48._12_4_ = -(uint)(auVar29._12_4_ < 0.0);
      iVar21 = movmskps(iVar18,auVar48);
      if (iVar21 == 0) {
        fVar24 = *pfVar20;
        fVar28 = pfVar20[1];
        fVar33 = pfVar20[2];
        fVar53 = pfVar20[3];
        fVar32 = *(float *)(local_1d0 + 0x140);
        fVar43 = *(float *)(local_1d0 + 0x144);
        fVar44 = *(float *)(local_1d0 + 0x148);
        fVar45 = *(float *)(local_1d0 + 0x14c);
        fVar46 = pfVar20[4] * fVar15;
        fVar52 = pfVar20[5] * fVar16;
        fVar58 = pfVar20[6] * fVar17;
        fVar60 = fVar52 * fVar32 - fVar43 * fVar46;
        fVar61 = fVar58 * fVar43 - fVar44 * fVar52;
        fVar57 = fVar46 * fVar44 - fVar32 * fVar58;
        fVar60 = fVar60 + fVar60;
        fVar61 = fVar61 + fVar61;
        fVar57 = fVar57 + fVar57;
        local_308._0_4_ =
             fVar44 * fVar28 * -1.0 +
             fVar43 * fVar33 * 1.0 + fVar32 * fVar53 * 1.0 + fVar24 * fVar45;
        local_308._4_4_ =
             fVar44 * fVar24 * 1.0 +
             fVar43 * fVar53 * 1.0 + fVar32 * fVar33 * -1.0 + fVar28 * fVar45;
        local_308._8_4_ =
             fVar44 * fVar53 * 1.0 +
             fVar43 * fVar24 * -1.0 + fVar32 * fVar28 * 1.0 + fVar33 * fVar45;
        local_308._12_4_ =
             fVar44 * fVar33 * -1.0 +
             fVar43 * fVar28 * -1.0 + fVar32 * fVar24 * -1.0 + fVar53 * fVar45;
        auVar54._0_4_ =
             (fVar60 * fVar43 - fVar57 * fVar44) + fVar45 * fVar61 + fVar46 +
             *(float *)(local_1d0 + 0x150);
        auVar54._4_4_ =
             (fVar61 * fVar44 - fVar60 * fVar32) + fVar45 * fVar57 + fVar52 +
             *(float *)(local_1d0 + 0x154);
        auVar54._8_4_ =
             (fVar57 * fVar32 - fVar61 * fVar43) + fVar45 * fVar60 + fVar58 +
             *(float *)(local_1d0 + 0x158);
        local_218 = local_218 + local_208;
        local_1f8 = local_1f8 + local_1e8;
      }
      else {
        fVar24 = *(float *)(local_1d0 + 0x140);
        fVar28 = *(float *)(local_1d0 + 0x144);
        fVar33 = *(float *)(local_1d0 + 0x148);
        fVar53 = *(float *)(local_1d0 + 0x14c);
        fVar43 = fVar24 + fVar24;
        fVar44 = fVar28 + fVar28;
        fVar45 = fVar33 + fVar33;
        fVar32 = fVar53 * (fVar53 + fVar53);
        auVar39._0_4_ = ((float)DAT_149e1ef10 - (fVar33 * fVar45 + fVar28 * fVar44)) * fVar15;
        auVar39._4_4_ = (DAT_149e1ef10._4_4_ - (fVar33 * fVar45 + fVar24 * fVar43)) * fVar16;
        auVar39._8_4_ = (DAT_149e1ef10._8_4_ - (fVar28 * fVar44 + fVar24 * fVar43)) * fVar17;
        auVar39._12_4_ = (DAT_149e1ef10._12_4_ - (fVar32 + fVar32)) * fVar25;
        fVar33 = (fVar44 * fVar24 + fVar45 * fVar53) * fVar15;
        auVar47._4_4_ = (fVar45 * fVar28 + fVar43 * fVar53) * fVar16;
        auVar47._0_4_ = fVar33;
        local_158 = (fVar45 * fVar24 + fVar44 * fVar53) * fVar17;
        local_168 = (fVar44 * fVar24 - fVar45 * fVar53) * fVar16;
        fStack_154 = (fVar45 * fVar28 - fVar43 * fVar53) * fVar17;
        auVar29 = blendps(auVar39,ZEXT816(0),8);
        auVar47._8_4_ = local_158;
        auVar47._12_4_ = (fVar43 * fVar24 + fVar43 * fVar53) * fVar25;
        local_178._4_4_ = fVar33;
        local_178._0_4_ = auVar39._0_4_;
        local_178._8_4_ = (fVar45 * fVar24 - fVar44 * fVar53) * fVar15;
        local_178._12_4_ = 0;
        auVar48 = insertps(auVar47,auVar47,0x4c);
        uStack_160 = auVar48._0_4_;
        uStack_15c = auVar48._8_4_;
        uStack_150 = auVar29._8_4_;
        uStack_14c = auVar29._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x150),ZEXT816(0x3f800000),0x30);
        fVar24 = *pfVar20;
        fVar28 = pfVar20[1];
        fVar33 = pfVar20[2];
        fVar53 = pfVar20[3];
        fVar32 = pfVar20[8];
        local_1a8 = pfVar20[9];
        fStack_194 = pfVar20[10];
        fVar44 = fVar24 + fVar24;
        fVar45 = fVar28 + fVar28;
        fVar46 = fVar33 + fVar33;
        fVar43 = fVar53 * (fVar53 + fVar53);
        auVar34._0_4_ = ((float)DAT_149e1ef10 - (fVar33 * fVar46 + fVar28 * fVar45)) * fVar32;
        auVar34._4_4_ = (DAT_149e1ef10._4_4_ - (fVar33 * fVar46 + fVar24 * fVar44)) * local_1a8;
        auVar34._8_4_ = (DAT_149e1ef10._8_4_ - (fVar28 * fVar45 + fVar24 * fVar44)) * fStack_194;
        auVar34._12_4_ = (DAT_149e1ef10._12_4_ - (fVar43 + fVar43)) * pfVar20[0xb];
        fVar33 = (fVar45 * fVar24 + fVar46 * fVar53) * fVar32;
        auVar49._4_4_ = (fVar46 * fVar28 + fVar44 * fVar53) * local_1a8;
        auVar49._0_4_ = fVar33;
        local_198 = (fVar46 * fVar24 + fVar45 * fVar53) * fStack_194;
        local_1a8 = (fVar45 * fVar24 - fVar46 * fVar53) * local_1a8;
        fStack_194 = (fVar46 * fVar28 - fVar44 * fVar53) * fStack_194;
        auVar29 = blendps(auVar34,ZEXT816(0),8);
        auVar49._8_4_ = local_198;
        auVar49._12_4_ = (fVar44 * fVar24 + fVar44 * fVar53) * pfVar20[0xb];
        local_1b8._4_4_ = fVar33;
        local_1b8._0_4_ = auVar34._0_4_;
        local_1b8._8_4_ = (fVar46 * fVar24 - fVar45 * fVar53) * fVar32;
        local_1b8._12_4_ = 0;
        auVar48 = insertps(auVar49,auVar49,0x4c);
        uStack_1a0 = auVar48._0_4_;
        uStack_19c = auVar48._8_4_;
        uStack_190 = auVar29._8_4_;
        uStack_18c = auVar29._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar20 + 4),ZEXT816(0x3f800000),0x30);
        local_218 = local_218 + local_208;
        local_1f8 = local_1f8 + local_1e8;
        fStack_1a4 = auVar34._4_4_;
        fStack_164 = auVar39._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar29._0_8_);
        FUN_144afd82e(&local_138);
        auVar29._4_4_ = -(uint)(0.0 <= auVar31._4_4_ * fVar16);
        auVar29._0_4_ = -(uint)(0.0 <= auVar31._0_4_ * fVar15);
        auVar29._8_4_ = -(uint)(0.0 <= auVar31._8_4_ * fVar17);
        auVar29._12_4_ = -(uint)(0.0 <= auVar31._12_4_ * fVar25);
        auVar30 = blendvps(_DAT_149f63320,auVar30,auVar29);
        fVar24 = auVar30._0_4_;
        fStack_130 = fStack_130 * fVar24;
        fStack_134 = fStack_134 * fVar24;
        local_138 = local_138 * fVar24;
        fVar24 = auVar30._4_4_;
        local_120 = local_120 * fVar24;
        local_124 = local_124 * fVar24;
        local_128 = fVar24 * local_128;
        fVar24 = auVar30._8_4_;
        local_110 = local_110 * fVar24;
        local_114 = local_114 * fVar24;
        local_118 = fVar24 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar24 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar28 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar35._0_4_ = fVar28 + fVar24;
        auVar35._4_4_ = fVar28 + fVar24;
        auVar35._8_4_ = fVar24 + fVar28;
        auVar35._12_4_ = fVar24 + fVar28;
        auVar30._4_4_ = -(uint)(1e-08 <= auVar35._4_4_);
        auVar30._0_4_ = -(uint)(1e-08 <= auVar35._0_4_);
        auVar30._8_4_ = -(uint)(1e-08 <= auVar35._8_4_);
        auVar30._12_4_ = -(uint)(1e-08 <= auVar35._12_4_);
        auVar29 = sqrtps(auVar35,auVar35);
        auVar55 = divps(auVar55,auVar29);
        auVar56._0_4_ = auVar55._0_4_ * local_1c8;
        auVar56._4_4_ = auVar55._4_4_ * fStack_1c4;
        auVar56._8_4_ = auVar55._8_4_ * fStack_1c0;
        auVar56._12_4_ = auVar55._12_4_ * fStack_1bc;
        local_308 = blendvps(auVar26,auVar56,auVar30);
        auVar55 = blendps(local_108,ZEXT816(0),8);
        auVar54 = auVar55._0_12_;
      }
      auVar26 = _DAT_149e1ef10;
      local_2f8 = auVar31._0_4_ * fVar15;
      fStack_2ec = auVar31._12_4_ * fVar25;
      fStack_2f0 = auVar31._8_4_ * fVar17;
      fStack_2f4 = auVar31._4_4_ * fVar16;
      lVar14 = *(longlong *)(local_1d0 + 0x1a0);
      pfVar20 = (float *)(lVar14 + lVar23);
      auVar55 = *(undefined1 (*) [16])(local_1d0 + 0x130);
      fVar15 = auVar55._0_4_;
      fVar16 = auVar55._4_4_;
      fVar17 = auVar55._8_4_;
      fVar25 = auVar55._12_4_;
      auVar30 = *(undefined1 (*) [16])(lVar14 + 0x20 + lVar23);
      auVar55 = minps(auVar30,auVar55);
      auVar31._4_4_ = -(uint)(auVar55._4_4_ < 0.0);
      auVar31._0_4_ = -(uint)(auVar55._0_4_ < 0.0);
      auVar31._8_4_ = -(uint)(auVar55._8_4_ < 0.0);
      auVar31._12_4_ = -(uint)(auVar55._12_4_ < 0.0);
      iVar21 = movmskps((int)lVar14,auVar31);
      if (iVar21 == 0) {
        fVar25 = *pfVar20;
        fVar24 = pfVar20[1];
        fVar28 = pfVar20[2];
        fVar33 = pfVar20[3];
        fVar53 = *(float *)(local_1d0 + 0x110);
        fVar32 = *(float *)(local_1d0 + 0x114);
        fVar43 = *(float *)(local_1d0 + 0x118);
        fVar44 = *(float *)(local_1d0 + 0x11c);
        fVar45 = pfVar20[4] * fVar15;
        fVar46 = pfVar20[5] * fVar16;
        fVar52 = pfVar20[6] * fVar17;
        fVar58 = fVar46 * fVar53 - fVar32 * fVar45;
        fVar60 = fVar52 * fVar32 - fVar43 * fVar46;
        fVar61 = fVar45 * fVar43 - fVar53 * fVar52;
        fVar58 = fVar58 + fVar58;
        fVar60 = fVar60 + fVar60;
        fVar61 = fVar61 + fVar61;
        local_178._0_4_ =
             fVar43 * fVar24 * -1.0 +
             fVar32 * fVar28 * 1.0 + fVar53 * fVar33 * 1.0 + fVar25 * fVar44;
        local_178._4_4_ =
             fVar43 * fVar25 * 1.0 +
             fVar32 * fVar33 * 1.0 + fVar53 * fVar28 * -1.0 + fVar24 * fVar44;
        local_178._8_4_ =
             fVar43 * fVar33 * 1.0 +
             fVar32 * fVar25 * -1.0 + fVar53 * fVar24 * 1.0 + fVar28 * fVar44;
        local_178._12_4_ =
             fVar43 * fVar28 * -1.0 +
             fVar32 * fVar24 * -1.0 + fVar53 * fVar25 * -1.0 + fVar33 * fVar44;
        auVar59._0_4_ =
             (fVar58 * fVar32 - fVar61 * fVar43) + fVar44 * fVar60 + fVar45 +
             *(float *)(local_1d0 + 0x120);
        auVar59._4_4_ =
             (fVar60 * fVar43 - fVar58 * fVar53) + fVar44 * fVar61 + fVar46 +
             *(float *)(local_1d0 + 0x124);
        auVar59._8_4_ =
             (fVar61 * fVar53 - fVar60 * fVar32) + fVar44 * fVar58 + fVar52 +
             *(float *)(local_1d0 + 0x128);
      }
      else {
        fVar24 = *(float *)(local_1d0 + 0x110);
        fVar28 = *(float *)(local_1d0 + 0x114);
        fVar33 = *(float *)(local_1d0 + 0x118);
        fVar53 = *(float *)(local_1d0 + 0x11c);
        fVar43 = fVar24 + fVar24;
        fVar44 = fVar28 + fVar28;
        fVar45 = fVar33 + fVar33;
        fVar32 = fVar53 * (fVar53 + fVar53);
        auVar40._0_4_ = ((float)DAT_149e1ef10 - (fVar33 * fVar45 + fVar28 * fVar44)) * fVar15;
        auVar40._4_4_ = (DAT_149e1ef10._4_4_ - (fVar33 * fVar45 + fVar24 * fVar43)) * fVar16;
        auVar40._8_4_ = (DAT_149e1ef10._8_4_ - (fVar28 * fVar44 + fVar24 * fVar43)) * fVar17;
        auVar40._12_4_ = (DAT_149e1ef10._12_4_ - (fVar32 + fVar32)) * fVar25;
        fVar33 = (fVar44 * fVar24 + fVar45 * fVar53) * fVar15;
        auVar50._4_4_ = (fVar45 * fVar28 + fVar43 * fVar53) * fVar16;
        auVar50._0_4_ = fVar33;
        local_158 = (fVar45 * fVar24 + fVar44 * fVar53) * fVar17;
        local_168 = (fVar44 * fVar24 - fVar45 * fVar53) * fVar16;
        fStack_154 = (fVar45 * fVar28 - fVar43 * fVar53) * fVar17;
        auVar55 = blendps(auVar40,ZEXT816(0),8);
        auVar50._8_4_ = local_158;
        auVar50._12_4_ = (fVar43 * fVar24 + fVar43 * fVar53) * fVar25;
        local_178._4_4_ = fVar33;
        local_178._0_4_ = auVar40._0_4_;
        local_178._8_4_ = (fVar45 * fVar24 - fVar44 * fVar53) * fVar15;
        local_178._12_4_ = 0;
        auVar29 = insertps(auVar50,auVar50,0x4c);
        uStack_160 = auVar29._0_4_;
        uStack_15c = auVar29._8_4_;
        uStack_150 = auVar55._8_4_;
        uStack_14c = auVar55._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x120),ZEXT816(0x3f800000),0x30);
        fVar24 = *pfVar20;
        fVar28 = pfVar20[1];
        fVar33 = pfVar20[2];
        fVar53 = pfVar20[3];
        fVar32 = pfVar20[8];
        local_1a8 = pfVar20[9];
        fStack_194 = pfVar20[10];
        fVar44 = fVar24 + fVar24;
        fVar45 = fVar28 + fVar28;
        fVar46 = fVar33 + fVar33;
        fVar43 = fVar53 * (fVar53 + fVar53);
        auVar36._0_4_ = ((float)DAT_149e1ef10 - (fVar33 * fVar46 + fVar28 * fVar45)) * fVar32;
        auVar36._4_4_ = (DAT_149e1ef10._4_4_ - (fVar33 * fVar46 + fVar24 * fVar44)) * local_1a8;
        auVar36._8_4_ = (DAT_149e1ef10._8_4_ - (fVar28 * fVar45 + fVar24 * fVar44)) * fStack_194;
        auVar36._12_4_ = (DAT_149e1ef10._12_4_ - (fVar43 + fVar43)) * pfVar20[0xb];
        fVar33 = (fVar45 * fVar24 + fVar46 * fVar53) * fVar32;
        auVar51._4_4_ = (fVar46 * fVar28 + fVar44 * fVar53) * local_1a8;
        auVar51._0_4_ = fVar33;
        local_198 = (fVar46 * fVar24 + fVar45 * fVar53) * fStack_194;
        local_1a8 = (fVar45 * fVar24 - fVar46 * fVar53) * local_1a8;
        fStack_194 = (fVar46 * fVar28 - fVar44 * fVar53) * fStack_194;
        auVar55 = blendps(auVar36,ZEXT816(0),8);
        auVar51._8_4_ = local_198;
        auVar51._12_4_ = (fVar44 * fVar24 + fVar44 * fVar53) * pfVar20[0xb];
        local_1b8._4_4_ = fVar33;
        local_1b8._0_4_ = auVar36._0_4_;
        local_1b8._8_4_ = (fVar46 * fVar24 - fVar45 * fVar53) * fVar32;
        local_1b8._12_4_ = 0;
        auVar29 = insertps(auVar51,auVar51,0x4c);
        uStack_1a0 = auVar29._0_4_;
        uStack_19c = auVar29._8_4_;
        uStack_190 = auVar55._8_4_;
        uStack_18c = auVar55._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar20 + 4),ZEXT816(0x3f800000),0x30);
        fStack_1a4 = auVar36._4_4_;
        fStack_164 = auVar40._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar55._0_8_);
        FUN_144afd82e(&local_138);
        auVar55._4_4_ = -(uint)(0.0 <= auVar30._4_4_ * fVar16);
        auVar55._0_4_ = -(uint)(0.0 <= auVar30._0_4_ * fVar15);
        auVar55._8_4_ = -(uint)(0.0 <= auVar30._8_4_ * fVar17);
        auVar55._12_4_ = -(uint)(0.0 <= auVar30._12_4_ * fVar25);
        auVar55 = blendvps(_DAT_149f63320,auVar26,auVar55);
        fVar25 = auVar55._0_4_;
        fStack_130 = fStack_130 * fVar25;
        fStack_134 = fStack_134 * fVar25;
        local_138 = local_138 * fVar25;
        fVar25 = auVar55._4_4_;
        local_120 = local_120 * fVar25;
        local_124 = local_124 * fVar25;
        local_128 = fVar25 * local_128;
        fVar25 = auVar55._8_4_;
        local_110 = local_110 * fVar25;
        local_114 = local_114 * fVar25;
        local_118 = fVar25 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar25 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar24 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar37._0_4_ = fVar24 + fVar25;
        auVar37._4_4_ = fVar24 + fVar25;
        auVar37._8_4_ = fVar25 + fVar24;
        auVar37._12_4_ = fVar25 + fVar24;
        auVar26._4_4_ = -(uint)(1e-08 <= auVar37._4_4_);
        auVar26._0_4_ = -(uint)(1e-08 <= auVar37._0_4_);
        auVar26._8_4_ = -(uint)(1e-08 <= auVar37._8_4_);
        auVar26._12_4_ = -(uint)(1e-08 <= auVar37._12_4_);
        auVar55 = sqrtps(auVar37,auVar37);
        auVar55 = divps(_DAT_1499314a0,auVar55);
        auVar41._0_4_ = auVar55._0_4_ * local_1c8;
        auVar41._4_4_ = auVar55._4_4_ * fStack_1c4;
        auVar41._8_4_ = auVar55._8_4_ * fStack_1c0;
        auVar41._12_4_ = auVar55._12_4_ * fStack_1bc;
        local_178 = blendvps(_DAT_149932320,auVar41,auVar26);
        auVar55 = blendps(local_108,ZEXT816(0),8);
        auVar59 = auVar55._0_12_;
      }
      fVar24 = local_30c;
      fVar32 = auVar59._0_4_ - auVar54._0_4_;
      fVar44 = auVar59._4_4_ - auVar54._4_4_;
      fVar45 = auVar59._8_4_ - auVar54._8_4_;
      fVar25 = *(float *)(local_1d0 + 0x40);
      fVar46 = local_30c * fVar45;
      fVar53 = local_30c * fVar44;
      fVar43 = fVar32 * local_30c;
      local_1b8 = local_308;
      FUN_144afe1e6(&local_138,local_1b8,local_178);
      auVar26 = _DAT_149932320;
      auVar55 = _DAT_1499314a0;
      fVar28 = local_138 * local_138 + fStack_134 * fStack_134;
      fVar33 = fStack_130 * fStack_130 + fStack_12c * fStack_12c;
      auVar38._0_4_ = fVar33 + fVar28;
      auVar38._4_4_ = fVar33 + fVar28;
      auVar38._8_4_ = fVar28 + fVar33;
      auVar38._12_4_ = fVar28 + fVar33;
      auVar27._4_4_ = -(uint)(1e-08 <= auVar38._4_4_);
      auVar27._0_4_ = -(uint)(1e-08 <= auVar38._0_4_);
      auVar27._8_4_ = -(uint)(1e-08 <= auVar38._8_4_);
      auVar27._12_4_ = -(uint)(1e-08 <= auVar38._12_4_);
      auVar29 = sqrtps(auVar38,auVar38);
      auVar29 = divps(_DAT_1499314a0,auVar29);
      auVar42._0_4_ = auVar29._0_4_ * local_138;
      auVar42._4_4_ = auVar29._4_4_ * fStack_134;
      auVar42._8_4_ = auVar29._8_4_ * fStack_130;
      auVar42._12_4_ = auVar29._12_4_ * fStack_12c;
      local_178 = blendvps(_DAT_149932320,auVar42,auVar27);
      pfVar20 = local_248 + local_240;
      *local_248 = fVar43 + auVar54._0_4_;
      pfVar1 = local_238 + local_230;
      *local_238 = fVar53 + auVar54._4_4_;
      pfVar2 = local_228 + local_220;
      *local_228 = fVar46 + auVar54._8_4_;
      puVar3 = local_288 + local_280;
      *local_288 = local_178._0_4_;
      puVar4 = local_278 + local_270;
      *local_278 = local_178._4_4_;
      puVar5 = local_268 + local_260;
      *local_268 = local_178._8_4_;
      puVar6 = local_258 + local_250;
      *local_258 = local_178._12_4_;
      pfVar7 = local_2b8 + local_2b0;
      *local_2b8 = (auVar30._0_4_ * fVar15 - local_2f8) * fVar24 + local_2f8;
      pfVar8 = local_2a8 + local_2a0;
      *local_2a8 = (auVar30._4_4_ * fVar16 - fStack_2f4) * fVar24 + fStack_2f4;
      pfVar9 = local_298 + local_290;
      *local_298 = (auVar30._8_4_ * fVar17 - fStack_2f0) * fVar24 + fStack_2f0;
      pfVar10 = local_2e8 + local_2e0;
      *local_2e8 = fVar25 * fVar32;
      pfVar11 = local_2d8 + local_2d0;
      *local_2d8 = fVar44 * fVar25;
      pfVar12 = local_2c8 + local_2c0;
      *local_2c8 = fVar45 * fVar25;
      iVar22 = iVar22 + 1;
      piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar19 = (int *)(param_1 + 0x3c);
      }
      local_2e8 = pfVar10;
      local_2d8 = pfVar11;
      local_2c8 = pfVar12;
      local_2b8 = pfVar7;
      local_2a8 = pfVar8;
      local_298 = pfVar9;
      local_288 = puVar3;
      local_278 = puVar4;
      local_268 = puVar5;
      local_258 = puVar6;
      local_248 = pfVar20;
      local_238 = pfVar1;
      local_228 = pfVar2;
    } while (iVar22 < *piVar19);
  }
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a0ac7 FUN_1480a0ac7 body=3486 status=ok
// SIG undefined FUN_1480a0ac7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480a0ac7(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int *piVar17;
  float *pfVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  float fVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar56;
  undefined1 auVar53 [12];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  float fVar59;
  float fVar60;
  undefined1 auVar58 [12];
  undefined1 auStack_338 [44];
  float local_30c;
  undefined1 local_308 [16];
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float *local_2e8;
  int local_2e0;
  float *local_2d8;
  int local_2d0;
  float *local_2c8;
  int local_2c0;
  float *local_2b8;
  int local_2b0;
  float *local_2a8;
  int local_2a0;
  float *local_298;
  int local_290;
  undefined4 *local_288;
  int local_280;
  undefined4 *local_278;
  int local_270;
  undefined4 *local_268;
  int local_260;
  undefined4 *local_258;
  int local_250;
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  undefined8 uStack_210;
  int local_208;
  int *local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  undefined1 local_1d8 [8];
  longlong local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_14809d5d8(local_1d8,param_1);
  local_1e8 = 0;
  local_1f8 = (int *)0x0;
  uStack_1f0 = 0;
  FUN_144a98d08(&local_1f8,param_1);
  local_208 = 0;
  local_218 = (float *)0x0;
  uStack_210 = 0;
  FUN_144a98dce(&local_218,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_288,param_1);
  FUN_144a76c20(&local_278,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_2b8,param_1);
  FUN_144a76c20(&local_2a8,param_1);
  FUN_144a76c20(&local_298,param_1);
  FUN_144a76c20(&local_2e8,param_1);
  FUN_144a76c20(&local_2d8,param_1);
  FUN_144a76c20(&local_2c8,param_1);
  piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar17 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar17) {
    iVar22 = 0;
    auVar25 = _DAT_149932320;
    auVar54 = _DAT_1499314a0;
    do {
      auVar29 = _DAT_149e1ef10;
      iVar19 = *local_1f8;
      if (iVar19 < 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = (ulonglong)(iVar19 + 1);
        if (*(int *)(local_1d0 + 0x174) <= iVar19) {
          uVar21 = 0;
        }
      }
      local_30c = *local_218;
      iVar19 = *(int *)(*(longlong *)(local_1d0 + 0x180) + uVar21 * 4);
      lVar20 = (longlong)iVar19 * 0x30;
      auVar28 = *(undefined1 (*) [16])(local_1d0 + 0x160);
      fVar14 = auVar28._0_4_;
      fVar15 = auVar28._4_4_;
      fVar16 = auVar28._8_4_;
      fVar24 = auVar28._12_4_;
      auVar30 = *(undefined1 (*) [16])(*(longlong *)(local_1d0 + 0x1b0) + 0x20 + lVar20);
      pfVar18 = (float *)(*(longlong *)(local_1d0 + 0x1b0) + lVar20);
      auVar28 = minps(auVar30,auVar28);
      auVar47._4_4_ = -(uint)(auVar28._4_4_ < 0.0);
      auVar47._0_4_ = -(uint)(auVar28._0_4_ < 0.0);
      auVar47._8_4_ = -(uint)(auVar28._8_4_ < 0.0);
      auVar47._12_4_ = -(uint)(auVar28._12_4_ < 0.0);
      iVar19 = movmskps(iVar19,auVar47);
      if (iVar19 == 0) {
        fVar23 = *pfVar18;
        fVar27 = pfVar18[1];
        fVar32 = pfVar18[2];
        fVar52 = pfVar18[3];
        fVar31 = *(float *)(local_1d0 + 0x140);
        fVar42 = *(float *)(local_1d0 + 0x144);
        fVar43 = *(float *)(local_1d0 + 0x148);
        fVar44 = *(float *)(local_1d0 + 0x14c);
        fVar45 = pfVar18[4] * fVar14;
        fVar51 = pfVar18[5] * fVar15;
        fVar57 = pfVar18[6] * fVar16;
        fVar59 = fVar51 * fVar31 - fVar42 * fVar45;
        fVar60 = fVar57 * fVar42 - fVar43 * fVar51;
        fVar56 = fVar45 * fVar43 - fVar31 * fVar57;
        fVar59 = fVar59 + fVar59;
        fVar60 = fVar60 + fVar60;
        fVar56 = fVar56 + fVar56;
        local_308._0_4_ =
             fVar43 * fVar27 * -1.0 +
             fVar42 * fVar32 * 1.0 + fVar31 * fVar52 * 1.0 + fVar23 * fVar44;
        local_308._4_4_ =
             fVar43 * fVar23 * 1.0 +
             fVar42 * fVar52 * 1.0 + fVar31 * fVar32 * -1.0 + fVar27 * fVar44;
        local_308._8_4_ =
             fVar43 * fVar52 * 1.0 +
             fVar42 * fVar23 * -1.0 + fVar31 * fVar27 * 1.0 + fVar32 * fVar44;
        local_308._12_4_ =
             fVar43 * fVar32 * -1.0 +
             fVar42 * fVar27 * -1.0 + fVar31 * fVar23 * -1.0 + fVar52 * fVar44;
        auVar53._0_4_ =
             (fVar59 * fVar42 - fVar56 * fVar43) + fVar44 * fVar60 + fVar45 +
             *(float *)(local_1d0 + 0x150);
        auVar53._4_4_ =
             (fVar60 * fVar43 - fVar59 * fVar31) + fVar44 * fVar56 + fVar51 +
             *(float *)(local_1d0 + 0x154);
        auVar53._8_4_ =
             (fVar56 * fVar31 - fVar60 * fVar42) + fVar44 * fVar59 + fVar57 +
             *(float *)(local_1d0 + 0x158);
        local_218 = local_218 + local_208;
        local_1f8 = local_1f8 + local_1e8;
      }
      else {
        fVar23 = *(float *)(local_1d0 + 0x140);
        fVar27 = *(float *)(local_1d0 + 0x144);
        fVar32 = *(float *)(local_1d0 + 0x148);
        fVar52 = *(float *)(local_1d0 + 0x14c);
        fVar42 = fVar23 + fVar23;
        fVar43 = fVar27 + fVar27;
        fVar44 = fVar32 + fVar32;
        fVar31 = fVar52 * (fVar52 + fVar52);
        auVar38._0_4_ = ((float)DAT_149e1ef10 - (fVar32 * fVar44 + fVar27 * fVar43)) * fVar14;
        auVar38._4_4_ = (DAT_149e1ef10._4_4_ - (fVar32 * fVar44 + fVar23 * fVar42)) * fVar15;
        auVar38._8_4_ = (DAT_149e1ef10._8_4_ - (fVar27 * fVar43 + fVar23 * fVar42)) * fVar16;
        auVar38._12_4_ = (DAT_149e1ef10._12_4_ - (fVar31 + fVar31)) * fVar24;
        fVar32 = (fVar43 * fVar23 + fVar44 * fVar52) * fVar14;
        auVar46._4_4_ = (fVar44 * fVar27 + fVar42 * fVar52) * fVar15;
        auVar46._0_4_ = fVar32;
        local_158 = (fVar44 * fVar23 + fVar43 * fVar52) * fVar16;
        local_168 = (fVar43 * fVar23 - fVar44 * fVar52) * fVar15;
        fStack_154 = (fVar44 * fVar27 - fVar42 * fVar52) * fVar16;
        auVar28 = blendps(auVar38,ZEXT816(0),8);
        auVar46._8_4_ = local_158;
        auVar46._12_4_ = (fVar42 * fVar23 + fVar42 * fVar52) * fVar24;
        local_178._4_4_ = fVar32;
        local_178._0_4_ = auVar38._0_4_;
        local_178._8_4_ = (fVar44 * fVar23 - fVar43 * fVar52) * fVar14;
        local_178._12_4_ = 0;
        auVar47 = insertps(auVar46,auVar46,0x4c);
        uStack_160 = auVar47._0_4_;
        uStack_15c = auVar47._8_4_;
        uStack_150 = auVar28._8_4_;
        uStack_14c = auVar28._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x150),ZEXT816(0x3f800000),0x30);
        fVar23 = *pfVar18;
        fVar27 = pfVar18[1];
        fVar32 = pfVar18[2];
        fVar52 = pfVar18[3];
        fVar31 = pfVar18[8];
        local_1a8 = pfVar18[9];
        fStack_194 = pfVar18[10];
        fVar43 = fVar23 + fVar23;
        fVar44 = fVar27 + fVar27;
        fVar45 = fVar32 + fVar32;
        fVar42 = fVar52 * (fVar52 + fVar52);
        auVar33._0_4_ = ((float)DAT_149e1ef10 - (fVar32 * fVar45 + fVar27 * fVar44)) * fVar31;
        auVar33._4_4_ = (DAT_149e1ef10._4_4_ - (fVar32 * fVar45 + fVar23 * fVar43)) * local_1a8;
        auVar33._8_4_ = (DAT_149e1ef10._8_4_ - (fVar27 * fVar44 + fVar23 * fVar43)) * fStack_194;
        auVar33._12_4_ = (DAT_149e1ef10._12_4_ - (fVar42 + fVar42)) * pfVar18[0xb];
        fVar32 = (fVar44 * fVar23 + fVar45 * fVar52) * fVar31;
        auVar48._4_4_ = (fVar45 * fVar27 + fVar43 * fVar52) * local_1a8;
        auVar48._0_4_ = fVar32;
        local_198 = (fVar45 * fVar23 + fVar44 * fVar52) * fStack_194;
        local_1a8 = (fVar44 * fVar23 - fVar45 * fVar52) * local_1a8;
        fStack_194 = (fVar45 * fVar27 - fVar43 * fVar52) * fStack_194;
        auVar28 = blendps(auVar33,ZEXT816(0),8);
        auVar48._8_4_ = local_198;
        auVar48._12_4_ = (fVar43 * fVar23 + fVar43 * fVar52) * pfVar18[0xb];
        local_1b8._4_4_ = fVar32;
        local_1b8._0_4_ = auVar33._0_4_;
        local_1b8._8_4_ = (fVar45 * fVar23 - fVar44 * fVar52) * fVar31;
        local_1b8._12_4_ = 0;
        auVar47 = insertps(auVar48,auVar48,0x4c);
        uStack_1a0 = auVar47._0_4_;
        uStack_19c = auVar47._8_4_;
        uStack_190 = auVar28._8_4_;
        uStack_18c = auVar28._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar18 + 4),ZEXT816(0x3f800000),0x30);
        local_218 = local_218 + local_208;
        local_1f8 = local_1f8 + local_1e8;
        fStack_1a4 = auVar33._4_4_;
        fStack_164 = auVar38._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar28._0_8_);
        FUN_144afd82e(&local_138);
        auVar28._4_4_ = -(uint)(0.0 <= auVar30._4_4_ * fVar15);
        auVar28._0_4_ = -(uint)(0.0 <= auVar30._0_4_ * fVar14);
        auVar28._8_4_ = -(uint)(0.0 <= auVar30._8_4_ * fVar16);
        auVar28._12_4_ = -(uint)(0.0 <= auVar30._12_4_ * fVar24);
        auVar29 = blendvps(_DAT_149f63320,auVar29,auVar28);
        fVar23 = auVar29._0_4_;
        fStack_130 = fStack_130 * fVar23;
        fStack_134 = fStack_134 * fVar23;
        local_138 = local_138 * fVar23;
        fVar23 = auVar29._4_4_;
        local_120 = local_120 * fVar23;
        local_124 = local_124 * fVar23;
        local_128 = fVar23 * local_128;
        fVar23 = auVar29._8_4_;
        local_110 = local_110 * fVar23;
        local_114 = local_114 * fVar23;
        local_118 = fVar23 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar23 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar27 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar34._0_4_ = fVar27 + fVar23;
        auVar34._4_4_ = fVar27 + fVar23;
        auVar34._8_4_ = fVar23 + fVar27;
        auVar34._12_4_ = fVar23 + fVar27;
        auVar29._4_4_ = -(uint)(1e-08 <= auVar34._4_4_);
        auVar29._0_4_ = -(uint)(1e-08 <= auVar34._0_4_);
        auVar29._8_4_ = -(uint)(1e-08 <= auVar34._8_4_);
        auVar29._12_4_ = -(uint)(1e-08 <= auVar34._12_4_);
        auVar28 = sqrtps(auVar34,auVar34);
        auVar54 = divps(auVar54,auVar28);
        auVar55._0_4_ = auVar54._0_4_ * local_1c8;
        auVar55._4_4_ = auVar54._4_4_ * fStack_1c4;
        auVar55._8_4_ = auVar54._8_4_ * fStack_1c0;
        auVar55._12_4_ = auVar54._12_4_ * fStack_1bc;
        local_308 = blendvps(auVar25,auVar55,auVar29);
        auVar54 = blendps(local_108,ZEXT816(0),8);
        auVar53 = auVar54._0_12_;
      }
      auVar25 = _DAT_149e1ef10;
      local_2f8 = auVar30._0_4_ * fVar14;
      fStack_2ec = auVar30._12_4_ * fVar24;
      fStack_2f0 = auVar30._8_4_ * fVar16;
      fStack_2f4 = auVar30._4_4_ * fVar15;
      lVar13 = *(longlong *)(local_1d0 + 0x1a0);
      pfVar18 = (float *)(lVar13 + lVar20);
      auVar54 = *(undefined1 (*) [16])(local_1d0 + 0x130);
      fVar14 = auVar54._0_4_;
      fVar15 = auVar54._4_4_;
      fVar16 = auVar54._8_4_;
      fVar24 = auVar54._12_4_;
      auVar29 = *(undefined1 (*) [16])(lVar13 + 0x20 + lVar20);
      auVar54 = minps(auVar29,auVar54);
      auVar30._4_4_ = -(uint)(auVar54._4_4_ < 0.0);
      auVar30._0_4_ = -(uint)(auVar54._0_4_ < 0.0);
      auVar30._8_4_ = -(uint)(auVar54._8_4_ < 0.0);
      auVar30._12_4_ = -(uint)(auVar54._12_4_ < 0.0);
      iVar19 = movmskps((int)lVar13,auVar30);
      if (iVar19 == 0) {
        fVar24 = *pfVar18;
        fVar23 = pfVar18[1];
        fVar27 = pfVar18[2];
        fVar32 = pfVar18[3];
        fVar52 = *(float *)(local_1d0 + 0x110);
        fVar31 = *(float *)(local_1d0 + 0x114);
        fVar42 = *(float *)(local_1d0 + 0x118);
        fVar43 = *(float *)(local_1d0 + 0x11c);
        fVar44 = pfVar18[4] * fVar14;
        fVar45 = pfVar18[5] * fVar15;
        fVar51 = pfVar18[6] * fVar16;
        fVar57 = fVar45 * fVar52 - fVar31 * fVar44;
        fVar59 = fVar51 * fVar31 - fVar42 * fVar45;
        fVar60 = fVar44 * fVar42 - fVar52 * fVar51;
        fVar57 = fVar57 + fVar57;
        fVar59 = fVar59 + fVar59;
        fVar60 = fVar60 + fVar60;
        local_178._0_4_ =
             fVar42 * fVar23 * -1.0 +
             fVar31 * fVar27 * 1.0 + fVar52 * fVar32 * 1.0 + fVar24 * fVar43;
        local_178._4_4_ =
             fVar42 * fVar24 * 1.0 +
             fVar31 * fVar32 * 1.0 + fVar52 * fVar27 * -1.0 + fVar23 * fVar43;
        local_178._8_4_ =
             fVar42 * fVar32 * 1.0 +
             fVar31 * fVar24 * -1.0 + fVar52 * fVar23 * 1.0 + fVar27 * fVar43;
        local_178._12_4_ =
             fVar42 * fVar27 * -1.0 +
             fVar31 * fVar23 * -1.0 + fVar52 * fVar24 * -1.0 + fVar32 * fVar43;
        auVar58._0_4_ =
             (fVar57 * fVar31 - fVar60 * fVar42) + fVar43 * fVar59 + fVar44 +
             *(float *)(local_1d0 + 0x120);
        auVar58._4_4_ =
             (fVar59 * fVar42 - fVar57 * fVar52) + fVar43 * fVar60 + fVar45 +
             *(float *)(local_1d0 + 0x124);
        auVar58._8_4_ =
             (fVar60 * fVar52 - fVar59 * fVar31) + fVar43 * fVar57 + fVar51 +
             *(float *)(local_1d0 + 0x128);
      }
      else {
        fVar23 = *(float *)(local_1d0 + 0x110);
        fVar27 = *(float *)(local_1d0 + 0x114);
        fVar32 = *(float *)(local_1d0 + 0x118);
        fVar52 = *(float *)(local_1d0 + 0x11c);
        fVar42 = fVar23 + fVar23;
        fVar43 = fVar27 + fVar27;
        fVar44 = fVar32 + fVar32;
        fVar31 = fVar52 * (fVar52 + fVar52);
        auVar39._0_4_ = ((float)DAT_149e1ef10 - (fVar32 * fVar44 + fVar27 * fVar43)) * fVar14;
        auVar39._4_4_ = (DAT_149e1ef10._4_4_ - (fVar32 * fVar44 + fVar23 * fVar42)) * fVar15;
        auVar39._8_4_ = (DAT_149e1ef10._8_4_ - (fVar27 * fVar43 + fVar23 * fVar42)) * fVar16;
        auVar39._12_4_ = (DAT_149e1ef10._12_4_ - (fVar31 + fVar31)) * fVar24;
        fVar32 = (fVar43 * fVar23 + fVar44 * fVar52) * fVar14;
        auVar49._4_4_ = (fVar44 * fVar27 + fVar42 * fVar52) * fVar15;
        auVar49._0_4_ = fVar32;
        local_158 = (fVar44 * fVar23 + fVar43 * fVar52) * fVar16;
        local_168 = (fVar43 * fVar23 - fVar44 * fVar52) * fVar15;
        fStack_154 = (fVar44 * fVar27 - fVar42 * fVar52) * fVar16;
        auVar54 = blendps(auVar39,ZEXT816(0),8);
        auVar49._8_4_ = local_158;
        auVar49._12_4_ = (fVar42 * fVar23 + fVar42 * fVar52) * fVar24;
        local_178._4_4_ = fVar32;
        local_178._0_4_ = auVar39._0_4_;
        local_178._8_4_ = (fVar44 * fVar23 - fVar43 * fVar52) * fVar14;
        local_178._12_4_ = 0;
        auVar28 = insertps(auVar49,auVar49,0x4c);
        uStack_160 = auVar28._0_4_;
        uStack_15c = auVar28._8_4_;
        uStack_150 = auVar54._8_4_;
        uStack_14c = auVar54._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x120),ZEXT816(0x3f800000),0x30);
        fVar23 = *pfVar18;
        fVar27 = pfVar18[1];
        fVar32 = pfVar18[2];
        fVar52 = pfVar18[3];
        fVar31 = pfVar18[8];
        local_1a8 = pfVar18[9];
        fStack_194 = pfVar18[10];
        fVar43 = fVar23 + fVar23;
        fVar44 = fVar27 + fVar27;
        fVar45 = fVar32 + fVar32;
        fVar42 = fVar52 * (fVar52 + fVar52);
        auVar35._0_4_ = ((float)DAT_149e1ef10 - (fVar32 * fVar45 + fVar27 * fVar44)) * fVar31;
        auVar35._4_4_ = (DAT_149e1ef10._4_4_ - (fVar32 * fVar45 + fVar23 * fVar43)) * local_1a8;
        auVar35._8_4_ = (DAT_149e1ef10._8_4_ - (fVar27 * fVar44 + fVar23 * fVar43)) * fStack_194;
        auVar35._12_4_ = (DAT_149e1ef10._12_4_ - (fVar42 + fVar42)) * pfVar18[0xb];
        fVar32 = (fVar44 * fVar23 + fVar45 * fVar52) * fVar31;
        auVar50._4_4_ = (fVar45 * fVar27 + fVar43 * fVar52) * local_1a8;
        auVar50._0_4_ = fVar32;
        local_198 = (fVar45 * fVar23 + fVar44 * fVar52) * fStack_194;
        local_1a8 = (fVar44 * fVar23 - fVar45 * fVar52) * local_1a8;
        fStack_194 = (fVar45 * fVar27 - fVar43 * fVar52) * fStack_194;
        auVar54 = blendps(auVar35,ZEXT816(0),8);
        auVar50._8_4_ = local_198;
        auVar50._12_4_ = (fVar43 * fVar23 + fVar43 * fVar52) * pfVar18[0xb];
        local_1b8._4_4_ = fVar32;
        local_1b8._0_4_ = auVar35._0_4_;
        local_1b8._8_4_ = (fVar45 * fVar23 - fVar44 * fVar52) * fVar31;
        local_1b8._12_4_ = 0;
        auVar28 = insertps(auVar50,auVar50,0x4c);
        uStack_1a0 = auVar28._0_4_;
        uStack_19c = auVar28._8_4_;
        uStack_190 = auVar54._8_4_;
        uStack_18c = auVar54._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar18 + 4),ZEXT816(0x3f800000),0x30);
        fStack_1a4 = auVar35._4_4_;
        fStack_164 = auVar39._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar54._0_8_);
        FUN_144afd82e(&local_138);
        auVar54._4_4_ = -(uint)(0.0 <= auVar29._4_4_ * fVar15);
        auVar54._0_4_ = -(uint)(0.0 <= auVar29._0_4_ * fVar14);
        auVar54._8_4_ = -(uint)(0.0 <= auVar29._8_4_ * fVar16);
        auVar54._12_4_ = -(uint)(0.0 <= auVar29._12_4_ * fVar24);
        auVar54 = blendvps(_DAT_149f63320,auVar25,auVar54);
        fVar24 = auVar54._0_4_;
        fStack_130 = fStack_130 * fVar24;
        fStack_134 = fStack_134 * fVar24;
        local_138 = local_138 * fVar24;
        fVar24 = auVar54._4_4_;
        local_120 = local_120 * fVar24;
        local_124 = local_124 * fVar24;
        local_128 = fVar24 * local_128;
        fVar24 = auVar54._8_4_;
        local_110 = local_110 * fVar24;
        local_114 = local_114 * fVar24;
        local_118 = fVar24 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar24 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar23 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar36._0_4_ = fVar23 + fVar24;
        auVar36._4_4_ = fVar23 + fVar24;
        auVar36._8_4_ = fVar24 + fVar23;
        auVar36._12_4_ = fVar24 + fVar23;
        auVar25._4_4_ = -(uint)(1e-08 <= auVar36._4_4_);
        auVar25._0_4_ = -(uint)(1e-08 <= auVar36._0_4_);
        auVar25._8_4_ = -(uint)(1e-08 <= auVar36._8_4_);
        auVar25._12_4_ = -(uint)(1e-08 <= auVar36._12_4_);
        auVar54 = sqrtps(auVar36,auVar36);
        auVar54 = divps(_DAT_1499314a0,auVar54);
        auVar40._0_4_ = auVar54._0_4_ * local_1c8;
        auVar40._4_4_ = auVar54._4_4_ * fStack_1c4;
        auVar40._8_4_ = auVar54._8_4_ * fStack_1c0;
        auVar40._12_4_ = auVar54._12_4_ * fStack_1bc;
        local_178 = blendvps(_DAT_149932320,auVar40,auVar25);
        auVar54 = blendps(local_108,ZEXT816(0),8);
        auVar58 = auVar54._0_12_;
      }
      fVar23 = local_30c;
      fVar31 = auVar58._0_4_ - auVar53._0_4_;
      fVar43 = auVar58._4_4_ - auVar53._4_4_;
      fVar44 = auVar58._8_4_ - auVar53._8_4_;
      fVar24 = *(float *)(local_1d0 + 0x40);
      fVar45 = local_30c * fVar44;
      fVar52 = local_30c * fVar43;
      fVar42 = fVar31 * local_30c;
      local_1b8 = local_308;
      FUN_144afe1e6(&local_138,local_1b8);
      auVar25 = _DAT_149932320;
      auVar54 = _DAT_1499314a0;
      fVar27 = local_138 * local_138 + fStack_134 * fStack_134;
      fVar32 = fStack_130 * fStack_130 + fStack_12c * fStack_12c;
      auVar37._0_4_ = fVar32 + fVar27;
      auVar37._4_4_ = fVar32 + fVar27;
      auVar37._8_4_ = fVar27 + fVar32;
      auVar37._12_4_ = fVar27 + fVar32;
      auVar26._4_4_ = -(uint)(1e-08 <= auVar37._4_4_);
      auVar26._0_4_ = -(uint)(1e-08 <= auVar37._0_4_);
      auVar26._8_4_ = -(uint)(1e-08 <= auVar37._8_4_);
      auVar26._12_4_ = -(uint)(1e-08 <= auVar37._12_4_);
      auVar28 = sqrtps(auVar37,auVar37);
      auVar28 = divps(_DAT_1499314a0,auVar28);
      auVar41._0_4_ = auVar28._0_4_ * local_138;
      auVar41._4_4_ = auVar28._4_4_ * fStack_134;
      auVar41._8_4_ = auVar28._8_4_ * fStack_130;
      auVar41._12_4_ = auVar28._12_4_ * fStack_12c;
      local_178 = blendvps(_DAT_149932320,auVar41,auVar26);
      pfVar18 = local_248 + local_240;
      *local_248 = fVar42 + auVar53._0_4_;
      pfVar1 = local_238 + local_230;
      *local_238 = fVar52 + auVar53._4_4_;
      pfVar2 = local_228 + local_220;
      *local_228 = fVar45 + auVar53._8_4_;
      puVar3 = local_288 + local_280;
      *local_288 = local_178._0_4_;
      puVar4 = local_278 + local_270;
      *local_278 = local_178._4_4_;
      puVar5 = local_268 + local_260;
      *local_268 = local_178._8_4_;
      puVar6 = local_258 + local_250;
      *local_258 = local_178._12_4_;
      pfVar7 = local_2b8 + local_2b0;
      *local_2b8 = (auVar29._0_4_ * fVar14 - local_2f8) * fVar23 + local_2f8;
      pfVar8 = local_2a8 + local_2a0;
      *local_2a8 = (auVar29._4_4_ * fVar15 - fStack_2f4) * fVar23 + fStack_2f4;
      pfVar9 = local_298 + local_290;
      *local_298 = (auVar29._8_4_ * fVar16 - fStack_2f0) * fVar23 + fStack_2f0;
      pfVar10 = local_2e8 + local_2e0;
      *local_2e8 = fVar24 * fVar31;
      pfVar11 = local_2d8 + local_2d0;
      *local_2d8 = fVar43 * fVar24;
      pfVar12 = local_2c8 + local_2c0;
      *local_2c8 = fVar44 * fVar24;
      iVar22 = iVar22 + 1;
      piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar17 = (int *)(param_1 + 0x3c);
      }
      local_2e8 = pfVar10;
      local_2d8 = pfVar11;
      local_2c8 = pfVar12;
      local_2b8 = pfVar7;
      local_2a8 = pfVar8;
      local_298 = pfVar9;
      local_288 = puVar3;
      local_278 = puVar4;
      local_268 = puVar5;
      local_258 = puVar6;
      local_248 = pfVar18;
      local_238 = pfVar1;
      local_228 = pfVar2;
    } while (iVar22 < *piVar17);
  }
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a1866 FUN_1480a1866 body=3475 status=ok
// SIG undefined FUN_1480a1866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480a1866(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int *piVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  float fVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar56;
  undefined1 auVar53 [12];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  float fVar59;
  float fVar60;
  undefined1 auVar58 [12];
  undefined1 auStack_338 [44];
  float local_30c;
  undefined1 local_308 [16];
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float *local_2e8;
  int local_2e0;
  float *local_2d8;
  int local_2d0;
  float *local_2c8;
  int local_2c0;
  float *local_2b8;
  int local_2b0;
  float *local_2a8;
  int local_2a0;
  float *local_298;
  int local_290;
  undefined4 *local_288;
  int local_280;
  undefined4 *local_278;
  int local_270;
  undefined4 *local_268;
  int local_260;
  undefined4 *local_258;
  int local_250;
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  undefined8 uStack_210;
  int local_208;
  int *local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  undefined1 local_1d8 [8];
  longlong local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_14809d5d8(local_1d8,param_1);
  iVar20 = 0;
  local_1e8 = 0;
  local_1f8 = (int *)0x0;
  uStack_1f0 = 0;
  FUN_144a98d08(&local_1f8,param_1);
  local_208 = 0;
  local_218 = (float *)0x0;
  uStack_210 = 0;
  FUN_144a98dce(&local_218,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_288,param_1);
  FUN_144a76c20(&local_278,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_2b8,param_1);
  FUN_144a76c20(&local_2a8,param_1);
  FUN_144a76c20(&local_298,param_1);
  FUN_144a76c20(&local_2e8,param_1);
  FUN_144a76c20(&local_2d8,param_1);
  FUN_144a76c20(&local_2c8,param_1);
  piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar17 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar17) {
    auVar25 = _DAT_149932320;
    auVar54 = _DAT_1499314a0;
    do {
      auVar29 = _DAT_149e1ef10;
      iVar19 = *local_1f8;
      iVar21 = 0;
      if ((-1 < iVar19) && (iVar21 = 0, iVar19 < *(int *)(local_1d0 + 0x178))) {
        iVar21 = *(int *)(local_1d0 + 0x174) + iVar19 + 1;
      }
      local_30c = *local_218;
      iVar19 = *(int *)(*(longlong *)(local_1d0 + 0x180) + (longlong)iVar21 * 4);
      lVar22 = (longlong)iVar19 * 0x30;
      auVar28 = *(undefined1 (*) [16])(local_1d0 + 0x160);
      fVar14 = auVar28._0_4_;
      fVar15 = auVar28._4_4_;
      fVar16 = auVar28._8_4_;
      fVar24 = auVar28._12_4_;
      auVar30 = *(undefined1 (*) [16])(*(longlong *)(local_1d0 + 0x1b0) + 0x20 + lVar22);
      pfVar18 = (float *)(*(longlong *)(local_1d0 + 0x1b0) + lVar22);
      auVar28 = minps(auVar30,auVar28);
      auVar47._4_4_ = -(uint)(auVar28._4_4_ < 0.0);
      auVar47._0_4_ = -(uint)(auVar28._0_4_ < 0.0);
      auVar47._8_4_ = -(uint)(auVar28._8_4_ < 0.0);
      auVar47._12_4_ = -(uint)(auVar28._12_4_ < 0.0);
      iVar19 = movmskps(iVar19,auVar47);
      if (iVar19 == 0) {
        fVar23 = *pfVar18;
        fVar27 = pfVar18[1];
        fVar32 = pfVar18[2];
        fVar52 = pfVar18[3];
        fVar31 = *(float *)(local_1d0 + 0x140);
        fVar42 = *(float *)(local_1d0 + 0x144);
        fVar43 = *(float *)(local_1d0 + 0x148);
        fVar44 = *(float *)(local_1d0 + 0x14c);
        fVar45 = pfVar18[4] * fVar14;
        fVar51 = pfVar18[5] * fVar15;
        fVar57 = pfVar18[6] * fVar16;
        fVar59 = fVar51 * fVar31 - fVar42 * fVar45;
        fVar60 = fVar57 * fVar42 - fVar43 * fVar51;
        fVar56 = fVar45 * fVar43 - fVar31 * fVar57;
        fVar59 = fVar59 + fVar59;
        fVar60 = fVar60 + fVar60;
        fVar56 = fVar56 + fVar56;
        local_308._0_4_ =
             fVar43 * fVar27 * -1.0 +
             fVar42 * fVar32 * 1.0 + fVar31 * fVar52 * 1.0 + fVar23 * fVar44;
        local_308._4_4_ =
             fVar43 * fVar23 * 1.0 +
             fVar42 * fVar52 * 1.0 + fVar31 * fVar32 * -1.0 + fVar27 * fVar44;
        local_308._8_4_ =
             fVar43 * fVar52 * 1.0 +
             fVar42 * fVar23 * -1.0 + fVar31 * fVar27 * 1.0 + fVar32 * fVar44;
        local_308._12_4_ =
             fVar43 * fVar32 * -1.0 +
             fVar42 * fVar27 * -1.0 + fVar31 * fVar23 * -1.0 + fVar52 * fVar44;
        auVar53._0_4_ =
             (fVar59 * fVar42 - fVar56 * fVar43) + fVar44 * fVar60 + fVar45 +
             *(float *)(local_1d0 + 0x150);
        auVar53._4_4_ =
             (fVar60 * fVar43 - fVar59 * fVar31) + fVar44 * fVar56 + fVar51 +
             *(float *)(local_1d0 + 0x154);
        auVar53._8_4_ =
             (fVar56 * fVar31 - fVar60 * fVar42) + fVar44 * fVar59 + fVar57 +
             *(float *)(local_1d0 + 0x158);
        local_218 = local_218 + local_208;
        local_1f8 = local_1f8 + local_1e8;
      }
      else {
        fVar23 = *(float *)(local_1d0 + 0x140);
        fVar27 = *(float *)(local_1d0 + 0x144);
        fVar32 = *(float *)(local_1d0 + 0x148);
        fVar52 = *(float *)(local_1d0 + 0x14c);
        fVar42 = fVar23 + fVar23;
        fVar43 = fVar27 + fVar27;
        fVar44 = fVar32 + fVar32;
        fVar31 = fVar52 * (fVar52 + fVar52);
        auVar38._0_4_ = ((float)DAT_149e1ef10 - (fVar32 * fVar44 + fVar27 * fVar43)) * fVar14;
        auVar38._4_4_ = (DAT_149e1ef10._4_4_ - (fVar32 * fVar44 + fVar23 * fVar42)) * fVar15;
        auVar38._8_4_ = (DAT_149e1ef10._8_4_ - (fVar27 * fVar43 + fVar23 * fVar42)) * fVar16;
        auVar38._12_4_ = (DAT_149e1ef10._12_4_ - (fVar31 + fVar31)) * fVar24;
        fVar32 = (fVar43 * fVar23 + fVar44 * fVar52) * fVar14;
        auVar46._4_4_ = (fVar44 * fVar27 + fVar42 * fVar52) * fVar15;
        auVar46._0_4_ = fVar32;
        local_158 = (fVar44 * fVar23 + fVar43 * fVar52) * fVar16;
        local_168 = (fVar43 * fVar23 - fVar44 * fVar52) * fVar15;
        fStack_154 = (fVar44 * fVar27 - fVar42 * fVar52) * fVar16;
        auVar28 = blendps(auVar38,ZEXT816(0),8);
        auVar46._8_4_ = local_158;
        auVar46._12_4_ = (fVar42 * fVar23 + fVar42 * fVar52) * fVar24;
        local_178._4_4_ = fVar32;
        local_178._0_4_ = auVar38._0_4_;
        local_178._8_4_ = (fVar44 * fVar23 - fVar43 * fVar52) * fVar14;
        local_178._12_4_ = 0;
        auVar47 = insertps(auVar46,auVar46,0x4c);
        uStack_160 = auVar47._0_4_;
        uStack_15c = auVar47._8_4_;
        uStack_150 = auVar28._8_4_;
        uStack_14c = auVar28._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x150),ZEXT816(0x3f800000),0x30);
        fVar23 = *pfVar18;
        fVar27 = pfVar18[1];
        fVar32 = pfVar18[2];
        fVar52 = pfVar18[3];
        fVar31 = pfVar18[8];
        local_1a8 = pfVar18[9];
        fStack_194 = pfVar18[10];
        fVar43 = fVar23 + fVar23;
        fVar44 = fVar27 + fVar27;
        fVar45 = fVar32 + fVar32;
        fVar42 = fVar52 * (fVar52 + fVar52);
        auVar33._0_4_ = ((float)DAT_149e1ef10 - (fVar32 * fVar45 + fVar27 * fVar44)) * fVar31;
        auVar33._4_4_ = (DAT_149e1ef10._4_4_ - (fVar32 * fVar45 + fVar23 * fVar43)) * local_1a8;
        auVar33._8_4_ = (DAT_149e1ef10._8_4_ - (fVar27 * fVar44 + fVar23 * fVar43)) * fStack_194;
        auVar33._12_4_ = (DAT_149e1ef10._12_4_ - (fVar42 + fVar42)) * pfVar18[0xb];
        fVar32 = (fVar44 * fVar23 + fVar45 * fVar52) * fVar31;
        auVar48._4_4_ = (fVar45 * fVar27 + fVar43 * fVar52) * local_1a8;
        auVar48._0_4_ = fVar32;
        local_198 = (fVar45 * fVar23 + fVar44 * fVar52) * fStack_194;
        local_1a8 = (fVar44 * fVar23 - fVar45 * fVar52) * local_1a8;
        fStack_194 = (fVar45 * fVar27 - fVar43 * fVar52) * fStack_194;
        auVar28 = blendps(auVar33,ZEXT816(0),8);
        auVar48._8_4_ = local_198;
        auVar48._12_4_ = (fVar43 * fVar23 + fVar43 * fVar52) * pfVar18[0xb];
        local_1b8._4_4_ = fVar32;
        local_1b8._0_4_ = auVar33._0_4_;
        local_1b8._8_4_ = (fVar45 * fVar23 - fVar44 * fVar52) * fVar31;
        local_1b8._12_4_ = 0;
        auVar47 = insertps(auVar48,auVar48,0x4c);
        uStack_1a0 = auVar47._0_4_;
        uStack_19c = auVar47._8_4_;
        uStack_190 = auVar28._8_4_;
        uStack_18c = auVar28._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar18 + 4),ZEXT816(0x3f800000),0x30);
        local_218 = local_218 + local_208;
        local_1f8 = local_1f8 + local_1e8;
        fStack_1a4 = auVar33._4_4_;
        fStack_164 = auVar38._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar28._0_8_);
        FUN_144afd82e(&local_138);
        auVar28._4_4_ = -(uint)(0.0 <= auVar30._4_4_ * fVar15);
        auVar28._0_4_ = -(uint)(0.0 <= auVar30._0_4_ * fVar14);
        auVar28._8_4_ = -(uint)(0.0 <= auVar30._8_4_ * fVar16);
        auVar28._12_4_ = -(uint)(0.0 <= auVar30._12_4_ * fVar24);
        auVar29 = blendvps(_DAT_149f63320,auVar29,auVar28);
        fVar23 = auVar29._0_4_;
        fStack_130 = fStack_130 * fVar23;
        fStack_134 = fStack_134 * fVar23;
        local_138 = local_138 * fVar23;
        fVar23 = auVar29._4_4_;
        local_120 = local_120 * fVar23;
        local_124 = local_124 * fVar23;
        local_128 = fVar23 * local_128;
        fVar23 = auVar29._8_4_;
        local_110 = local_110 * fVar23;
        local_114 = local_114 * fVar23;
        local_118 = fVar23 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar23 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar27 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar34._0_4_ = fVar27 + fVar23;
        auVar34._4_4_ = fVar27 + fVar23;
        auVar34._8_4_ = fVar23 + fVar27;
        auVar34._12_4_ = fVar23 + fVar27;
        auVar29._4_4_ = -(uint)(1e-08 <= auVar34._4_4_);
        auVar29._0_4_ = -(uint)(1e-08 <= auVar34._0_4_);
        auVar29._8_4_ = -(uint)(1e-08 <= auVar34._8_4_);
        auVar29._12_4_ = -(uint)(1e-08 <= auVar34._12_4_);
        auVar28 = sqrtps(auVar34,auVar34);
        auVar54 = divps(auVar54,auVar28);
        auVar55._0_4_ = auVar54._0_4_ * local_1c8;
        auVar55._4_4_ = auVar54._4_4_ * fStack_1c4;
        auVar55._8_4_ = auVar54._8_4_ * fStack_1c0;
        auVar55._12_4_ = auVar54._12_4_ * fStack_1bc;
        local_308 = blendvps(auVar25,auVar55,auVar29);
        auVar54 = blendps(local_108,ZEXT816(0),8);
        auVar53 = auVar54._0_12_;
      }
      auVar25 = _DAT_149e1ef10;
      local_2f8 = auVar30._0_4_ * fVar14;
      fStack_2ec = auVar30._12_4_ * fVar24;
      fStack_2f0 = auVar30._8_4_ * fVar16;
      fStack_2f4 = auVar30._4_4_ * fVar15;
      lVar13 = *(longlong *)(local_1d0 + 0x1a0);
      pfVar18 = (float *)(lVar13 + lVar22);
      auVar54 = *(undefined1 (*) [16])(local_1d0 + 0x130);
      fVar14 = auVar54._0_4_;
      fVar15 = auVar54._4_4_;
      fVar16 = auVar54._8_4_;
      fVar24 = auVar54._12_4_;
      auVar29 = *(undefined1 (*) [16])(lVar13 + 0x20 + lVar22);
      auVar54 = minps(auVar29,auVar54);
      auVar30._4_4_ = -(uint)(auVar54._4_4_ < 0.0);
      auVar30._0_4_ = -(uint)(auVar54._0_4_ < 0.0);
      auVar30._8_4_ = -(uint)(auVar54._8_4_ < 0.0);
      auVar30._12_4_ = -(uint)(auVar54._12_4_ < 0.0);
      iVar19 = movmskps((int)lVar13,auVar30);
      if (iVar19 == 0) {
        fVar24 = *pfVar18;
        fVar23 = pfVar18[1];
        fVar27 = pfVar18[2];
        fVar32 = pfVar18[3];
        fVar52 = *(float *)(local_1d0 + 0x110);
        fVar31 = *(float *)(local_1d0 + 0x114);
        fVar42 = *(float *)(local_1d0 + 0x118);
        fVar43 = *(float *)(local_1d0 + 0x11c);
        fVar44 = pfVar18[4] * fVar14;
        fVar45 = pfVar18[5] * fVar15;
        fVar51 = pfVar18[6] * fVar16;
        fVar57 = fVar45 * fVar52 - fVar31 * fVar44;
        fVar59 = fVar51 * fVar31 - fVar42 * fVar45;
        fVar60 = fVar44 * fVar42 - fVar52 * fVar51;
        fVar57 = fVar57 + fVar57;
        fVar59 = fVar59 + fVar59;
        fVar60 = fVar60 + fVar60;
        local_178._0_4_ =
             fVar42 * fVar23 * -1.0 +
             fVar31 * fVar27 * 1.0 + fVar52 * fVar32 * 1.0 + fVar24 * fVar43;
        local_178._4_4_ =
             fVar42 * fVar24 * 1.0 +
             fVar31 * fVar32 * 1.0 + fVar52 * fVar27 * -1.0 + fVar23 * fVar43;
        local_178._8_4_ =
             fVar42 * fVar32 * 1.0 +
             fVar31 * fVar24 * -1.0 + fVar52 * fVar23 * 1.0 + fVar27 * fVar43;
        local_178._12_4_ =
             fVar42 * fVar27 * -1.0 +
             fVar31 * fVar23 * -1.0 + fVar52 * fVar24 * -1.0 + fVar32 * fVar43;
        auVar58._0_4_ =
             (fVar57 * fVar31 - fVar60 * fVar42) + fVar43 * fVar59 + fVar44 +
             *(float *)(local_1d0 + 0x120);
        auVar58._4_4_ =
             (fVar59 * fVar42 - fVar57 * fVar52) + fVar43 * fVar60 + fVar45 +
             *(float *)(local_1d0 + 0x124);
        auVar58._8_4_ =
             (fVar60 * fVar52 - fVar59 * fVar31) + fVar43 * fVar57 + fVar51 +
             *(float *)(local_1d0 + 0x128);
      }
      else {
        fVar23 = *(float *)(local_1d0 + 0x110);
        fVar27 = *(float *)(local_1d0 + 0x114);
        fVar32 = *(float *)(local_1d0 + 0x118);
        fVar52 = *(float *)(local_1d0 + 0x11c);
        fVar42 = fVar23 + fVar23;
        fVar43 = fVar27 + fVar27;
        fVar44 = fVar32 + fVar32;
        fVar31 = fVar52 * (fVar52 + fVar52);
        auVar39._0_4_ = ((float)DAT_149e1ef10 - (fVar32 * fVar44 + fVar27 * fVar43)) * fVar14;
        auVar39._4_4_ = (DAT_149e1ef10._4_4_ - (fVar32 * fVar44 + fVar23 * fVar42)) * fVar15;
        auVar39._8_4_ = (DAT_149e1ef10._8_4_ - (fVar27 * fVar43 + fVar23 * fVar42)) * fVar16;
        auVar39._12_4_ = (DAT_149e1ef10._12_4_ - (fVar31 + fVar31)) * fVar24;
        fVar32 = (fVar43 * fVar23 + fVar44 * fVar52) * fVar14;
        auVar49._4_4_ = (fVar44 * fVar27 + fVar42 * fVar52) * fVar15;
        auVar49._0_4_ = fVar32;
        local_158 = (fVar44 * fVar23 + fVar43 * fVar52) * fVar16;
        local_168 = (fVar43 * fVar23 - fVar44 * fVar52) * fVar15;
        fStack_154 = (fVar44 * fVar27 - fVar42 * fVar52) * fVar16;
        auVar54 = blendps(auVar39,ZEXT816(0),8);
        auVar49._8_4_ = local_158;
        auVar49._12_4_ = (fVar42 * fVar23 + fVar42 * fVar52) * fVar24;
        local_178._4_4_ = fVar32;
        local_178._0_4_ = auVar39._0_4_;
        local_178._8_4_ = (fVar44 * fVar23 - fVar43 * fVar52) * fVar14;
        local_178._12_4_ = 0;
        auVar28 = insertps(auVar49,auVar49,0x4c);
        uStack_160 = auVar28._0_4_;
        uStack_15c = auVar28._8_4_;
        uStack_150 = auVar54._8_4_;
        uStack_14c = auVar54._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(local_1d0 + 0x120),ZEXT816(0x3f800000),0x30);
        fVar23 = *pfVar18;
        fVar27 = pfVar18[1];
        fVar32 = pfVar18[2];
        fVar52 = pfVar18[3];
        fVar31 = pfVar18[8];
        local_1a8 = pfVar18[9];
        fStack_194 = pfVar18[10];
        fVar43 = fVar23 + fVar23;
        fVar44 = fVar27 + fVar27;
        fVar45 = fVar32 + fVar32;
        fVar42 = fVar52 * (fVar52 + fVar52);
        auVar35._0_4_ = ((float)DAT_149e1ef10 - (fVar32 * fVar45 + fVar27 * fVar44)) * fVar31;
        auVar35._4_4_ = (DAT_149e1ef10._4_4_ - (fVar32 * fVar45 + fVar23 * fVar43)) * local_1a8;
        auVar35._8_4_ = (DAT_149e1ef10._8_4_ - (fVar27 * fVar44 + fVar23 * fVar43)) * fStack_194;
        auVar35._12_4_ = (DAT_149e1ef10._12_4_ - (fVar42 + fVar42)) * pfVar18[0xb];
        fVar32 = (fVar44 * fVar23 + fVar45 * fVar52) * fVar31;
        auVar50._4_4_ = (fVar45 * fVar27 + fVar43 * fVar52) * local_1a8;
        auVar50._0_4_ = fVar32;
        local_198 = (fVar45 * fVar23 + fVar44 * fVar52) * fStack_194;
        local_1a8 = (fVar44 * fVar23 - fVar45 * fVar52) * local_1a8;
        fStack_194 = (fVar45 * fVar27 - fVar43 * fVar52) * fStack_194;
        auVar54 = blendps(auVar35,ZEXT816(0),8);
        auVar50._8_4_ = local_198;
        auVar50._12_4_ = (fVar43 * fVar23 + fVar43 * fVar52) * pfVar18[0xb];
        local_1b8._4_4_ = fVar32;
        local_1b8._0_4_ = auVar35._0_4_;
        local_1b8._8_4_ = (fVar45 * fVar23 - fVar44 * fVar52) * fVar31;
        local_1b8._12_4_ = 0;
        auVar28 = insertps(auVar50,auVar50,0x4c);
        uStack_1a0 = auVar28._0_4_;
        uStack_19c = auVar28._8_4_;
        uStack_190 = auVar54._8_4_;
        uStack_18c = auVar54._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar18 + 4),ZEXT816(0x3f800000),0x30);
        fStack_1a4 = auVar35._4_4_;
        fStack_164 = auVar39._4_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar54._0_8_);
        FUN_144afd82e(&local_138);
        auVar54._4_4_ = -(uint)(0.0 <= auVar29._4_4_ * fVar15);
        auVar54._0_4_ = -(uint)(0.0 <= auVar29._0_4_ * fVar14);
        auVar54._8_4_ = -(uint)(0.0 <= auVar29._8_4_ * fVar16);
        auVar54._12_4_ = -(uint)(0.0 <= auVar29._12_4_ * fVar24);
        auVar54 = blendvps(_DAT_149f63320,auVar25,auVar54);
        fVar24 = auVar54._0_4_;
        fStack_130 = fStack_130 * fVar24;
        fStack_134 = fStack_134 * fVar24;
        local_138 = local_138 * fVar24;
        fVar24 = auVar54._4_4_;
        local_120 = local_120 * fVar24;
        local_124 = local_124 * fVar24;
        local_128 = fVar24 * local_128;
        fVar24 = auVar54._8_4_;
        local_110 = local_110 * fVar24;
        local_114 = local_114 * fVar24;
        local_118 = fVar24 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar24 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar23 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar36._0_4_ = fVar23 + fVar24;
        auVar36._4_4_ = fVar23 + fVar24;
        auVar36._8_4_ = fVar24 + fVar23;
        auVar36._12_4_ = fVar24 + fVar23;
        auVar25._4_4_ = -(uint)(1e-08 <= auVar36._4_4_);
        auVar25._0_4_ = -(uint)(1e-08 <= auVar36._0_4_);
        auVar25._8_4_ = -(uint)(1e-08 <= auVar36._8_4_);
        auVar25._12_4_ = -(uint)(1e-08 <= auVar36._12_4_);
        auVar54 = sqrtps(auVar36,auVar36);
        auVar54 = divps(_DAT_1499314a0,auVar54);
        auVar40._0_4_ = auVar54._0_4_ * local_1c8;
        auVar40._4_4_ = auVar54._4_4_ * fStack_1c4;
        auVar40._8_4_ = auVar54._8_4_ * fStack_1c0;
        auVar40._12_4_ = auVar54._12_4_ * fStack_1bc;
        local_178 = blendvps(_DAT_149932320,auVar40,auVar25);
        auVar54 = blendps(local_108,ZEXT816(0),8);
        auVar58 = auVar54._0_12_;
      }
      fVar23 = local_30c;
      fVar31 = auVar58._0_4_ - auVar53._0_4_;
      fVar43 = auVar58._4_4_ - auVar53._4_4_;
      fVar44 = auVar58._8_4_ - auVar53._8_4_;
      fVar24 = *(float *)(local_1d0 + 0x40);
      fVar45 = local_30c * fVar44;
      fVar52 = local_30c * fVar43;
      fVar42 = fVar31 * local_30c;
      local_1b8 = local_308;
      FUN_144afe1e6(&local_138,local_1b8);
      auVar25 = _DAT_149932320;
      auVar54 = _DAT_1499314a0;
      fVar27 = local_138 * local_138 + fStack_134 * fStack_134;
      fVar32 = fStack_130 * fStack_130 + fStack_12c * fStack_12c;
      auVar37._0_4_ = fVar32 + fVar27;
      auVar37._4_4_ = fVar32 + fVar27;
      auVar37._8_4_ = fVar27 + fVar32;
      auVar37._12_4_ = fVar27 + fVar32;
      auVar26._4_4_ = -(uint)(1e-08 <= auVar37._4_4_);
      auVar26._0_4_ = -(uint)(1e-08 <= auVar37._0_4_);
      auVar26._8_4_ = -(uint)(1e-08 <= auVar37._8_4_);
      auVar26._12_4_ = -(uint)(1e-08 <= auVar37._12_4_);
      auVar28 = sqrtps(auVar37,auVar37);
      auVar28 = divps(_DAT_1499314a0,auVar28);
      auVar41._0_4_ = auVar28._0_4_ * local_138;
      auVar41._4_4_ = auVar28._4_4_ * fStack_134;
      auVar41._8_4_ = auVar28._8_4_ * fStack_130;
      auVar41._12_4_ = auVar28._12_4_ * fStack_12c;
      local_178 = blendvps(_DAT_149932320,auVar41,auVar26);
      pfVar18 = local_248 + local_240;
      *local_248 = fVar42 + auVar53._0_4_;
      pfVar1 = local_238 + local_230;
      *local_238 = fVar52 + auVar53._4_4_;
      pfVar2 = local_228 + local_220;
      *local_228 = fVar45 + auVar53._8_4_;
      puVar3 = local_288 + local_280;
      *local_288 = local_178._0_4_;
      puVar4 = local_278 + local_270;
      *local_278 = local_178._4_4_;
      puVar5 = local_268 + local_260;
      *local_268 = local_178._8_4_;
      puVar6 = local_258 + local_250;
      *local_258 = local_178._12_4_;
      pfVar7 = local_2b8 + local_2b0;
      *local_2b8 = (auVar29._0_4_ * fVar14 - local_2f8) * fVar23 + local_2f8;
      pfVar8 = local_2a8 + local_2a0;
      *local_2a8 = (auVar29._4_4_ * fVar15 - fStack_2f4) * fVar23 + fStack_2f4;
      pfVar9 = local_298 + local_290;
      *local_298 = (auVar29._8_4_ * fVar16 - fStack_2f0) * fVar23 + fStack_2f0;
      pfVar10 = local_2e8 + local_2e0;
      *local_2e8 = fVar24 * fVar31;
      pfVar11 = local_2d8 + local_2d0;
      *local_2d8 = fVar43 * fVar24;
      pfVar12 = local_2c8 + local_2c0;
      *local_2c8 = fVar44 * fVar24;
      iVar20 = iVar20 + 1;
      piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar17 = (int *)(param_1 + 0x3c);
      }
      local_2e8 = pfVar10;
      local_2d8 = pfVar11;
      local_2c8 = pfVar12;
      local_2b8 = pfVar7;
      local_2a8 = pfVar8;
      local_298 = pfVar9;
      local_288 = puVar3;
      local_278 = puVar4;
      local_268 = puVar5;
      local_258 = puVar6;
      local_248 = pfVar18;
      local_238 = pfVar1;
      local_228 = pfVar2;
    } while (iVar20 < *piVar17);
  }
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a25fa FUN_1480a25fa body=273 status=ok
// SIG undefined FUN_1480a25fa(void)

void FUN_1480a25fa(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb38470 != DAT_14cb3849c) {
    lVar3 = *param_2;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    puVar6 = &DAT_14cb384a0;
    if (DAT_14cb384a8 != (undefined *)0x0) {
      puVar6 = DAT_14cb384a8;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (DAT_14cb384b0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cb38468 + (longlong)iVar2 * 0x20;
      if (*(longlong *)(DAT_14cb38468 + (longlong)iVar2 * 0x20) == lVar3) {
        if (lVar1 != 0) {
          local_28 = 0;
          uStack_20 = uStack_20 & 0xffffffff00000000;
          FUN_1412f8090(&local_28,lVar1 + 8);
          goto LAB_1480a2628;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  local_28 = 0;
  uStack_20 = 0;
LAB_1480a2628:
  FUN_144a450dc(param_4,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a272e FUN_1480a272e body=495 status=ok
// SIG undefined FUN_1480a272e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480a272e(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_2[9];
  if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
    lVar4 = *(longlong *)(param_2[2] + 0x10);
    lVar8 = lVar3 + 0x48;
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      lVar8 = *(longlong *)(lVar3 + 0x50);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar3 + 0x58) - 1U &
                             (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar7 != -1) {
      do {
        lVar8 = *(longlong *)(lVar3 + 0x10) + (longlong)iVar7 * 0xc0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar7 * 0xc0) == lVar4)
        goto LAB_1480a279b;
        iVar7 = *(int *)(lVar8 + 0xb0);
      } while (iVar7 != -1);
    }
  }
  lVar8 = 0;
LAB_1480a279b:
  lVar3 = *param_2;
  local_30 = FUN_144735dd8(lVar3,lVar8 + 0xa8,0);
  local_48[0] = 0;
  local_44 = 0xffffffff00000000;
  local_38 = 0;
  if ((*(byte *)(local_30 + 0x68) & 0x80) != 0) {
    local_48[0] = 0x1c;
  }
  uVar6 = FUN_14475683e(lVar3 + 0x198,lVar3 + 0x70,local_30 + 8,local_48);
  uVar9 = (int)param_2[10] + 0xfU & 0xfffffff0;
  uVar10 = (ulonglong)uVar9;
  FUN_1480bb908();
  *(uint *)(param_2 + 10) = uVar9 + _DAT_14cb38eec;
  lVar3 = param_2[7];
  *(uint *)(lVar3 + uVar10) = (uint)*(byte *)(lVar8 + 0x10);
  *(undefined4 *)(lVar3 + 4 + uVar10) = *(undefined4 *)(lVar8 + 0x14);
  *(undefined4 *)(lVar3 + 8 + uVar10) = *(undefined4 *)(lVar8 + 0x18);
  *(undefined4 *)(lVar3 + 0xc + uVar10) = *(undefined4 *)(lVar8 + 0x1c);
  *(undefined4 *)(lVar3 + 0x10 + uVar10) = *(undefined4 *)(lVar8 + 0x20);
  auVar2 = *(undefined1 (*) [16])(lVar8 + 0x40);
  *(longlong *)(lVar3 + 0x20 + uVar10) = auVar2._0_8_;
  uVar5 = extractps(auVar2,2);
  *(undefined8 *)(lVar3 + 0x28 + uVar10) = uVar5;
  uVar5 = *(undefined8 *)(lVar8 + 0x38);
  puVar1 = (undefined8 *)(lVar3 + 0x30 + uVar10);
  *puVar1 = *(undefined8 *)(lVar8 + 0x30);
  puVar1[1] = uVar5;
  auVar2 = *(undefined1 (*) [16])(lVar8 + 0x50);
  *(longlong *)(lVar3 + 0x40 + uVar10) = auVar2._0_8_;
  uVar5 = extractps(auVar2,2);
  *(undefined8 *)(lVar3 + 0x48 + uVar10) = uVar5;
  auVar2 = *(undefined1 (*) [16])(lVar8 + 0x70);
  *(longlong *)(lVar3 + 0x50 + uVar10) = auVar2._0_8_;
  uVar5 = extractps(auVar2,2);
  *(undefined8 *)(lVar3 + 0x58 + uVar10) = uVar5;
  uVar5 = *(undefined8 *)(lVar8 + 0x68);
  puVar1 = (undefined8 *)(lVar3 + 0x60 + uVar10);
  *puVar1 = *(undefined8 *)(lVar8 + 0x60);
  puVar1[1] = uVar5;
  auVar2 = *(undefined1 (*) [16])(lVar8 + 0x80);
  *(longlong *)(lVar3 + 0x70 + uVar10) = auVar2._0_8_;
  uVar5 = extractps(auVar2,2);
  *(undefined8 *)(lVar3 + 0x78 + uVar10) = uVar5;
  *(undefined4 *)(lVar3 + 0x7c + uVar10) = *(undefined4 *)(lVar8 + 0x90);
  *(undefined4 *)(lVar3 + 0x80 + uVar10) = *(undefined4 *)(lVar8 + 0x94);
  *(undefined8 *)(lVar3 + 0x88 + uVar10) = uVar6;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a291e FUN_1480a291e body=70 status=ok
// SIG undefined FUN_1480a291e(void)

undefined1 FUN_1480a291e(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1480a2964(param_2);
  FUN_1404e5848(param_2,param_3 + 0x1e8,param_1 + 0x80);
  FUN_14809bdbc(param_1,param_2,param_3);
  return 1;
}



// FUNCTION 1480a2964 FUN_1480a2964 body=287 status=ok
// SIG undefined FUN_1480a2964(void)

undefined4 * FUN_1480a2964(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar1 = FUN_144830b78(param_1 + 6,&DAT_14cb42160);
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x39) = 0x101;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3ff00000;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x26) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3ff00000;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x3e) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined1 **)(param_1 + 0x4c) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x4e) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined1 **)(param_1 + 0x58) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x5a) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  return param_1;
}



// FUNCTION 1480a2a84 FUN_1480a2a84 body=102 status=ok
// SIG undefined FUN_1480a2a84(void)

void FUN_1480a2a84(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1480a2af0 FUN_1480a2af0 body=78 status=ok
// SIG undefined FUN_1480a2af0(void)

undefined8 FUN_1480a2af0(undefined8 param_1,longlong param_2,undefined8 param_3,float param_4)

{
  *(float *)(param_2 + 0x3c) = param_4;
  *(uint *)(param_2 + 0x40) = -(uint)(0.0 < param_4) & (uint)(1.0 / param_4);
  FUN_14809bdbc();
  FUN_14809c2aa(param_1,param_2,param_3);
  return 0;
}



// FUNCTION 1480a2b4a FUN_1480a2b4a body=556 status=ok
// SIG undefined FUN_1480a2b4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480a2b4a(undefined1 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 (*pauVar19) [16];
  int iVar20;
  longlong lVar21;
  int iVar22;
  undefined1 auVar23 [16];
  
  memset(param_1,0,0xa0);
  uVar6 = uRam000000014c846068;
  *(undefined8 *)(param_1 + 0x20) = _DAT_14c846060;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  uVar6 = uRam000000014c846078;
  *(undefined8 *)(param_1 + 0x30) = _DAT_14c846070;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  uVar6 = uRam000000014c846088;
  *(undefined8 *)(param_1 + 0x40) = _DAT_14c846080;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  uVar6 = uRam000000014c846088;
  *(undefined8 *)(param_1 + 0x70) = _DAT_14c846080;
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  uVar6 = uRam000000014c846068;
  *(undefined8 *)(param_1 + 0x50) = _DAT_14c846060;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  uVar6 = uRam000000014c846078;
  *(undefined8 *)(param_1 + 0x60) = _DAT_14c846070;
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *param_1 = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x178);
  uVar6 = *(undefined8 *)(param_2 + 0x110);
  uVar15 = *(undefined8 *)(param_2 + 0x118);
  uVar16 = *(undefined8 *)(param_2 + 0x120);
  uVar17 = *(undefined8 *)(param_2 + 0x128);
  uVar18 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x48) = uVar18;
  *(undefined8 *)(param_1 + 0x30) = uVar16;
  *(undefined8 *)(param_1 + 0x38) = uVar17;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar15;
  uVar8 = *(undefined4 *)(param_2 + 0x140);
  uVar9 = *(undefined4 *)(param_2 + 0x144);
  uVar10 = *(undefined4 *)(param_2 + 0x148);
  uVar11 = *(undefined4 *)(param_2 + 0x14c);
  uVar6 = *(undefined8 *)(param_2 + 0x150);
  uVar15 = *(undefined8 *)(param_2 + 0x158);
  uVar12 = *(undefined4 *)(param_2 + 0x164);
  uVar13 = *(undefined4 *)(param_2 + 0x168);
  uVar14 = *(undefined4 *)(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x74) = uVar12;
  *(undefined4 *)(param_1 + 0x78) = uVar13;
  *(undefined4 *)(param_1 + 0x7c) = uVar14;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar15;
  *(undefined4 *)(param_1 + 0x50) = uVar8;
  *(undefined4 *)(param_1 + 0x54) = uVar9;
  *(undefined4 *)(param_1 + 0x58) = uVar10;
  *(undefined4 *)(param_1 + 0x5c) = uVar11;
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *(undefined1 *)(param_2 + 0x3a) = 0;
    iVar3 = *(int *)(param_2 + 0x188);
    iVar4 = *(int *)(param_2 + 0x1a8);
    iVar22 = iVar3 * 4;
    iVar20 = iVar22 + iVar4 * 0x28;
    *(int *)(param_1 + 0x80) = iVar22;
    *(int *)(param_1 + 0x84) = iVar20;
    FUN_140393c76(param_1 + 0x88,iVar4 * 0x50 + iVar3 * 4,
                  CONCAT71((uint7)(uint3)((uint)iVar20 >> 8),1));
    memcpy(*(void **)(param_1 + 0x88),*(void **)(param_2 + 0x180),(longlong)iVar22);
    iVar3 = *(int *)(param_2 + 0x1a8);
    lVar21 = *(longlong *)(param_1 + 0x88);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_2 + 0x1a0);
      pauVar19 = (undefined1 (*) [16])(lVar21 + (ulonglong)*(uint *)(param_1 + 0x80));
      lVar21 = 0;
      do {
        auVar1 = *(undefined1 (*) [16])(lVar5 + lVar21);
        auVar2 = *(undefined1 (*) [16])(lVar5 + 0x20 + lVar21);
        auVar23 = insertps(*(undefined1 (*) [16])(lVar5 + 0x10 + lVar21),auVar1,0x30);
        *pauVar19 = auVar23;
        auVar23._12_4_ = auVar2._0_4_;
        auVar23._0_12_ = auVar1._4_12_;
        pauVar19[1] = auVar23;
        uVar6 = extractps(auVar2,1);
        *(undefined8 *)pauVar19[2] = uVar6;
        uVar6 = extractps(auVar2,2);
        *(undefined8 *)(pauVar19[2] + 4) = uVar6;
        pauVar19 = (undefined1 (*) [16])(pauVar19[2] + 8);
        lVar21 = lVar21 + 0x30;
      } while ((longlong)iVar3 * 0x30 != lVar21);
      lVar21 = *(longlong *)(param_1 + 0x88);
    }
    iVar3 = *(int *)(param_2 + 0x1b8);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_2 + 0x1b0);
      pauVar19 = (undefined1 (*) [16])(lVar21 + (ulonglong)*(uint *)(param_1 + 0x84));
      lVar21 = 0;
      do {
        auVar1 = *(undefined1 (*) [16])(lVar5 + lVar21);
        auVar2 = *(undefined1 (*) [16])(lVar5 + 0x20 + lVar21);
        auVar23 = insertps(*(undefined1 (*) [16])(lVar5 + 0x10 + lVar21),auVar1,0x30);
        *pauVar19 = auVar23;
        auVar7._12_4_ = auVar2._0_4_;
        auVar7._0_12_ = auVar1._4_12_;
        pauVar19[1] = auVar7;
        uVar6 = extractps(auVar2,1);
        *(undefined8 *)pauVar19[2] = uVar6;
        uVar6 = extractps(auVar2,2);
        *(undefined8 *)(pauVar19[2] + 4) = uVar6;
        pauVar19 = (undefined1 (*) [16])(pauVar19[2] + 8);
        lVar21 = lVar21 + 0x30;
      } while ((longlong)iVar3 * 0x30 != lVar21);
    }
  }
  return;
}



// FUNCTION 1480a2d76 FUN_1480a2d76 body=114 status=ok
// SIG undefined FUN_1480a2d76(void)

char FUN_1480a2d76(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar2;
  
  cVar1 = '\0';
  if ((param_2 != 0) && (*(char *)(param_1 + 0xa1) != '\0')) {
    lVar3 = FUN_14479d2ce(param_2 + 0x1c0);
    if (lVar3 != 0) {
      lVar4 = FUN_144a799b0();
      cVar1 = '\0';
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        bVar5 = (byte)*(undefined4 *)(lVar3 + 0x48);
        if (bVar5 < *(byte *)(lVar3 + 0x49)) {
          bVar5 = *(byte *)(lVar3 + 0x49);
        }
        bVar2 = 5;
        if (bVar5 < 5) {
          bVar2 = bVar5;
        }
        cVar1 = bVar2 + 1;
      }
    }
  }
  return cVar1;
}



// FUNCTION 1480a2de8 FUN_1480a2de8 body=244 status=ok
// SIG undefined FUN_1480a2de8(void)

undefined4 FUN_1480a2de8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if ((((cVar2 != '\0') && (*(char *)(param_2 + 0x38) == *(char *)(param_1 + 0x38))) &&
      (*(int *)(param_2 + 0x48) == *(int *)(param_1 + 0x48))) &&
     (cVar2 = FUN_14000b9e1(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x40)),
     cVar2 != '\0')) {
    if (*(int *)(param_2 + 0x58) != *(int *)(param_1 + 0x58)) {
      return 0;
    }
    if (*(int *)(param_2 + 0x5c) != *(int *)(param_1 + 0x5c)) {
      return 0;
    }
    if (*(int *)(param_2 + 0x60) != *(int *)(param_1 + 0x60)) {
      return 0;
    }
    if (*(int *)(param_2 + 100) != *(int *)(param_1 + 100)) {
      return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x68);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (*(longlong *)(param_2 + 0x68) == lVar1) {
      lVar1 = *(longlong *)(param_1 + 0x70);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      if (((*(longlong *)(param_2 + 0x70) == lVar1) &&
          (*(longlong *)(param_2 + 0x78) == *(longlong *)(param_1 + 0x78))) &&
         ((*(longlong *)(param_1 + 0x80) == *(longlong *)(param_2 + 0x80) &&
          ((*(int *)(param_1 + 0x88) == *(int *)(param_2 + 0x88) &&
           (*(char *)(param_2 + 0xa0) == *(char *)(param_1 + 0xa0))))))) {
        return CONCAT31((int3)((uint)*(int *)(param_1 + 0x88) >> 8),
                        *(char *)(param_2 + 0xa1) == *(char *)(param_1 + 0xa1));
      }
    }
  }
  return 0;
}



// FUNCTION 1480a2edc FUN_1480a2edc body=225 status=ok
// SIG undefined FUN_1480a2edc(void)

undefined8 FUN_1480a2edc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar5 = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    FUN_1406fa324(param_2 + 0x40,param_1 + 0x40);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    lVar6 = *(longlong *)(param_1 + 0x68);
    if (DAT_14c950c29 == 1) {
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar6 = *(longlong *)(param_1 + 0x68);
      }
    }
    bVar4 = DAT_14c950c29;
    *(longlong *)(param_2 + 0x68) = lVar6;
    lVar6 = *(longlong *)(param_1 + 0x70);
    if ((bVar4 & 1) != 0) {
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar6 = *(longlong *)(param_1 + 0x70);
      }
    }
    *(longlong *)(param_2 + 0x70) = lVar6;
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_1 + 0x80);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 0x88);
    FUN_1447a122a(param_2 + 0x90,param_1 + 0x90);
    *(undefined1 *)(param_2 + 0xa0) = *(undefined1 *)(param_1 + 0xa0);
    *(undefined1 *)(param_2 + 0xa1) = *(undefined1 *)(param_1 + 0xa1);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1480a2fbe FUN_1480a2fbe body=218 status=ok
// SIG undefined FUN_1480a2fbe(void)

void FUN_1480a2fbe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1480a309a(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a309a FUN_1480a309a body=122 status=ok
// SIG undefined FUN_1480a309a(void)

void FUN_1480a309a(longlong param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  lVar2 = FUN_1404101e2((undefined8 *)(param_1 + 0x48));
  if (lVar2 != 0) {
    FUN_147a91426(lVar2 + 0x20f,param_1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x60),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x60);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 1480a3114 FUN_1480a3114 body=299 status=ok
// SIG undefined FUN_1480a3114(void)

void FUN_1480a3114(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1480a3240(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a3240 FUN_1480a3240 body=68 status=ok
// SIG undefined FUN_1480a3240(void)

void FUN_1480a3240(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145a78ce0();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0xd0) != param_3)) {
    *(int *)(lVar2 + 0xe8) = *(int *)(lVar2 + 0xe8) + 1;
    *(int *)(lVar2 + 0xd0) = param_3;
  }
  return;
}



// FUNCTION 1480a32a0 FUN_1480a32a0 body=3820 status=ok
// SIG undefined FUN_1480a32a0(void)

void FUN_1480a32a0(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 auVar19 [12];
  undefined8 *puVar20;
  char cVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  int *piVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
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
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined8 uStack_340;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  undefined1 local_328 [16];
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined1 local_2f8 [16];
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float *local_2d8;
  int local_2d0;
  float *local_2c8;
  int local_2c0;
  float *local_2b8;
  int local_2b0;
  float *local_2a8;
  int local_2a0;
  float *local_298;
  int local_290;
  float *local_288;
  int local_280;
  float *local_278;
  int local_270;
  float *local_268;
  int local_260;
  float *local_258;
  int local_250;
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  int local_210;
  float *local_208;
  int local_200;
  float *local_1f8;
  int local_1f0;
  float *local_1e8;
  undefined8 uStack_1e0;
  int local_1d8;
  uint *local_1c8;
  undefined8 uStack_1c0;
  int local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float local_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float local_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float local_164;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  FUN_1405c93a6(local_160);
  local_150 = (undefined8 *)0x0;
  puVar22 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar20 = local_150;
  puVar17 = local_150;
  if (local_150 != puVar22) {
    if (puVar22 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
      UNLOCK();
    }
    puVar17 = puVar22;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar24 = (int *)(local_150 + 1);
      *piVar24 = *piVar24 + -1;
      UNLOCK();
      if (*piVar24 == 0) {
        puVar17 = (undefined8 *)*local_150;
        local_150 = puVar22;
        (*(code *)*puVar17)(puVar20,1);
        puVar17 = local_150;
      }
    }
  }
  local_150 = puVar17;
  iVar26 = 0;
  local_1b8 = 0;
  local_1c8 = (uint *)0x0;
  uStack_1c0 = 0;
  FUN_144a98d08(&local_1c8,param_2);
  local_1d8 = 0;
  local_1e8 = (float *)0x0;
  uStack_1e0 = 0;
  FUN_144a98dce(&local_1e8,param_2);
  FUN_144a76c20(&local_218,param_2);
  FUN_144a76c20(&local_208,param_2);
  FUN_144a76c20(&local_1f8,param_2);
  FUN_144a76c20(&local_248,param_2);
  FUN_144a76c20(&local_238,param_2);
  FUN_144a76c20(&local_228,param_2);
  FUN_144a76c20(&local_278,param_2);
  FUN_144a76c20(&local_268,param_2);
  FUN_144a76c20(&local_258,param_2);
  FUN_144a76c20(&local_2a8,param_2);
  FUN_144a76c20(&local_298,param_2);
  FUN_144a76c20(&local_288,param_2);
  FUN_144a76c20(&local_2d8,param_2);
  FUN_144a76c20(&local_2c8,param_2);
  FUN_144a76c20(&local_2b8,param_2);
  if (local_150 != (undefined8 *)0x0) {
    if (local_150[0x28] == 0) {
      uVar25 = 0xffffffff;
LAB_1480a34ef:
      puVar20 = local_150;
      iVar27 = 0;
      if ((((local_150[0x1e] != 0) && ((longlong *)local_150[0x1a] != (longlong *)0x0)) &&
          (local_150[0x1c] != 0)) &&
         ((cVar21 = (**(code **)(*(longlong *)local_150[0x1a] + 0x58))(), cVar21 != '\0' &&
          (cVar21 = (**(code **)(*(longlong *)puVar20[0x1c] + 0x58))(), cVar21 != '\0')))) {
        iVar27 = *(int *)((longlong)local_150 + 0x10c);
      }
    }
    else {
      cVar21 = FUN_1461c3a34(local_150 + 0x23);
      iVar27 = 0;
      iVar26 = 0;
      if (cVar21 != '\0') {
        iVar26 = *(int *)((longlong)local_150 + 0x14c);
      }
      uVar25 = iVar26 - 1;
      if (local_150 != (undefined8 *)0x0) goto LAB_1480a34ef;
    }
    if ((0 < iVar26) && (iVar26 == iVar27)) {
      piVar24 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar24 = (int *)(param_2 + 0x3c);
      }
      if (0 < *piVar24) {
        local_328 = ZEXT416(-(uint)(0.0 < *(float *)(local_158 + 0x2f0)) &
                            (uint)(1.0 / *(float *)(local_158 + 0x2f0)));
        iVar26 = 0;
        do {
          fVar31 = *local_1e8;
          uVar28 = *local_1c8;
          if ((int)uVar25 <= (int)*local_1c8) {
            uVar28 = uVar25;
          }
          if ((int)uVar28 < 1) {
            uVar28 = 0;
          }
          uVar29 = (ulonglong)uVar28;
          lVar18 = local_150[0x28];
          uVar23 = (ulonglong)(*(int *)(local_150 + 0x29) * uVar28);
          fVar39 = *(float *)(lVar18 + uVar23);
          fVar16 = *(float *)(lVar18 + 4 + uVar23);
          fVar32 = *(float *)(lVar18 + 8 + uVar23);
          local_1e8 = local_1e8 + local_1d8;
          local_1c8 = local_1c8 + local_1b8;
          FUN_144a928e2(&local_138,local_158 + 0x40);
          fVar40 = local_118 * fVar32 + local_128 * fVar16 + local_138 * fVar39 + local_108;
          fVar42 = fStack_114 * fVar32 + fStack_124 * fVar16 + fStack_134 * fVar39 + fStack_104;
          fVar44 = fStack_110 * fVar32 + fStack_120 * fVar16 + fStack_130 * fVar39 + fStack_100;
          fVar46 = fStack_10c * fVar32 + fStack_11c * fVar16 + fStack_12c * fVar39 + fStack_fc;
          FUN_144a928e2(&local_138,local_158 + 0x140);
          fVar33 = fVar32 * local_118 + fVar16 * local_128 + fVar39 * local_138 + local_108;
          fVar35 = fVar32 * fStack_114 + fVar16 * fStack_124 + fVar39 * fStack_134 + fStack_104;
          fVar37 = fVar32 * fStack_110 + fVar16 * fStack_120 + fVar39 * fStack_130 + fStack_100;
          fVar39 = fVar32 * fStack_10c + fVar16 * fStack_11c + fVar39 * fStack_12c + fStack_fc;
          local_2f8._4_4_ = fVar35;
          local_2f8._0_4_ = fVar35;
          local_2f8._8_4_ = fVar39;
          local_2f8._12_4_ = fVar39;
          fVar40 = fVar40 - fVar33;
          local_318 = fVar42 - fVar35;
          fVar44 = fVar44 - fVar37;
          fStack_334 = fVar46 - fVar39;
          auVar19._4_8_ = local_2f8._8_8_;
          auVar19._0_4_ = fVar35;
          auVar30._0_8_ = auVar19._0_8_ << 0x20;
          auVar30._8_4_ = fVar37;
          auVar30._12_4_ = fVar39;
          local_348 = auVar30._8_8_;
          uStack_340 = CONCAT44(fVar39,fVar37);
          local_308 = local_328._0_4_;
          local_338 = fVar44 * local_308;
          local_2e8 = local_318 * local_308;
          local_308 = fVar40 * local_308;
          lVar18 = local_150[0x1e];
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar30 = pmovsxwd(local_328,*(undefined8 *)(lVar18 + uVar29 * 0x10));
            local_184 = (float)auVar30._0_4_ * 3.051851e-05;
            fStack_180 = (float)auVar30._4_4_ * 3.051851e-05;
            fStack_17c = (float)auVar30._8_4_ * 3.051851e-05;
            auVar30 = pmovsxwd(auVar30,*(undefined8 *)(lVar18 + 8 + uVar29 * 0x10));
            fStack_16c = (float)auVar30._0_4_ * 3.051851e-05;
            fStack_168 = (float)auVar30._4_4_ * 3.051851e-05;
            local_164 = (float)auVar30._8_4_ * 3.051851e-05;
            fStack_178 = (float)auVar30._12_4_ * 3.051851e-05;
          }
          else {
            auVar30 = pmovsxbd(local_328,*(undefined4 *)(lVar18 + uVar29 * 8));
            local_184 = (float)auVar30._0_4_ * 0.007874016;
            fStack_180 = (float)auVar30._4_4_ * 0.007874016;
            fStack_17c = (float)auVar30._8_4_ * 0.007874016;
            auVar30 = pmovsxbd(auVar30,*(undefined4 *)(lVar18 + 4 + uVar29 * 8));
            fStack_16c = (float)auVar30._0_4_ * 0.007874016;
            fStack_168 = (float)auVar30._4_4_ * 0.007874016;
            local_164 = (float)auVar30._8_4_ * 0.007874016;
            fStack_178 = (float)auVar30._12_4_ * 0.007874016;
          }
          fStack_170 = (fStack_16c * fStack_180 - local_184 * fStack_168) * fStack_178;
          local_174 = (local_164 * local_184 - fStack_16c * fStack_17c) * fStack_178;
          fStack_178 = (fStack_168 * fStack_17c - local_164 * fStack_180) * fStack_178;
          fStack_330 = fVar44;
          fStack_32c = fStack_334;
          fStack_314 = local_318;
          fStack_310 = fStack_334;
          fStack_30c = fStack_334;
          fStack_304 = local_318;
          fStack_300 = fVar44;
          fStack_2fc = fStack_334;
          fStack_2e4 = local_318;
          fStack_2e0 = fStack_334;
          fStack_2dc = fStack_334;
          FUN_144a928e2(&local_138,local_158 + 0xc0);
          FUN_1480be0f4(&local_184,&local_138);
          local_188 = local_164;
          local_1a8 = CONCAT44(fStack_180,local_184);
          uStack_1a0 = CONCAT44(fStack_178,fStack_17c);
          local_198 = local_174;
          fStack_194 = fStack_170;
          fStack_190 = fStack_16c;
          fStack_18c = fStack_168;
          FUN_144a928e2(&local_138,local_158 + 0xc0);
          FUN_1480be0f4(&local_184,&local_138);
          FUN_144a928e2(&local_138,local_158 + 0x1c0);
          FUN_1480be0f4(&local_1a8,&local_138);
          pfVar1 = local_218 + local_210;
          *local_218 = fVar40 * fVar31 + fVar33;
          pfVar2 = local_208 + local_200;
          *local_208 = (float)local_2f8._0_4_ + local_318 * fVar31;
          pfVar3 = local_1f8 + local_1f0;
          *local_1f8 = (float)local_348 + fVar44 * fVar31;
          pfVar4 = local_248 + local_240;
          *local_248 = local_308;
          pfVar5 = local_238 + local_230;
          *local_238 = local_2e8;
          pfVar6 = local_228 + local_220;
          *local_228 = local_338;
          pfVar7 = local_278 + local_270;
          *local_278 = (fStack_16c - fStack_190) * fVar31 + fStack_190;
          pfVar8 = local_268 + local_260;
          *local_268 = (fStack_168 - fStack_18c) * fVar31 + fStack_18c;
          pfVar9 = local_258 + local_250;
          *local_258 = (local_164 - local_188) * fVar31 + local_188;
          pfVar10 = local_2a8 + local_2a0;
          *local_2a8 = (fStack_178 - uStack_1a0._4_4_) * fVar31 + uStack_1a0._4_4_;
          pfVar11 = local_298 + local_290;
          *local_298 = (local_174 - local_198) * fVar31 + local_198;
          pfVar12 = local_288 + local_280;
          *local_288 = (fStack_170 - fStack_194) * fVar31 + fStack_194;
          pfVar13 = local_2d8 + local_2d0;
          *local_2d8 = (local_184 - (float)local_1a8) * fVar31 + (float)local_1a8;
          pfVar14 = local_2c8 + local_2c0;
          *local_2c8 = (fStack_180 - local_1a8._4_4_) * fVar31 + local_1a8._4_4_;
          pfVar15 = local_2b8 + local_2b0;
          *local_2b8 = (fStack_17c - (float)uStack_1a0) * fVar31 + (float)uStack_1a0;
          iVar26 = iVar26 + 1;
          piVar24 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
          if (*param_2 != '\0') {
            piVar24 = (int *)(param_2 + 0x3c);
          }
          local_2d8 = pfVar13;
          local_2c8 = pfVar14;
          local_2b8 = pfVar15;
          local_2a8 = pfVar10;
          local_298 = pfVar11;
          local_288 = pfVar12;
          local_278 = pfVar7;
          local_268 = pfVar8;
          local_258 = pfVar9;
          local_248 = pfVar4;
          local_238 = pfVar5;
          local_228 = pfVar6;
          local_218 = pfVar1;
          local_208 = pfVar2;
          local_1f8 = pfVar3;
        } while (iVar26 < *piVar24);
      }
      goto LAB_1480a40ea;
    }
  }
  fVar32 = DAT_14c846338;
  fVar39 = DAT_14c846330._4_4_;
  fVar31 = (float)DAT_14c846330;
  FUN_144a928e2(&local_138,local_158 + 0x40);
  fVar33 = DAT_14c846338;
  fVar16 = DAT_14c846330._4_4_;
  fVar35 = fVar32 * local_118 + fVar39 * local_128 + fVar31 * local_138 + local_108;
  fVar37 = fVar32 * fStack_114 + fVar39 * fStack_124 + fVar31 * fStack_134 + fStack_104;
  fVar40 = fVar32 * fStack_110 + fVar39 * fStack_120 + fVar31 * fStack_130 + fStack_100;
  local_338 = (float)DAT_14c846330;
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  fVar50 = local_128 * 0.0 + local_138;
  fVar51 = fStack_124 * 0.0 + fStack_134;
  fVar52 = fStack_120 * 0.0 + fStack_130;
  fVar31 = local_118 * 0.0;
  fVar39 = fStack_114 * 0.0;
  fVar32 = fStack_110 * 0.0;
  fVar42 = local_108 * 0.0;
  fVar44 = fStack_104 * 0.0;
  fVar46 = fStack_100 * 0.0;
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  fVar34 = local_138 * 0.0 + local_128;
  fVar36 = fStack_134 * 0.0 + fStack_124;
  fVar38 = fStack_130 * 0.0 + fStack_120;
  fVar41 = local_118 * 0.0;
  fVar43 = fStack_114 * 0.0;
  fVar45 = fStack_110 * 0.0;
  fVar47 = local_108 * 0.0;
  fVar48 = fStack_104 * 0.0;
  fVar49 = fStack_100 * 0.0;
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  piVar24 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar24 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar24) {
    fVar42 = fVar42 + fVar31 + fVar50;
    fVar44 = fVar44 + fVar39 + fVar51;
    fVar46 = fVar46 + fVar32 + fVar52;
    fVar39 = 1.0 / SQRT(fVar46 * fVar46 + fVar42 * fVar42 + fVar44 * fVar44);
    fVar47 = fVar47 + fVar41 + fVar34;
    fVar48 = fVar48 + fVar43 + fVar36;
    fVar49 = fVar49 + fVar45 + fVar38;
    fVar38 = 1.0 / SQRT(fVar49 * fVar49 + fVar47 * fVar47 + fVar48 * fVar48);
    fVar32 = local_108 * 0.0 + local_128 * 0.0 + local_138 * 0.0 + local_118;
    fVar34 = fStack_104 * 0.0 + fStack_124 * 0.0 + fStack_134 * 0.0 + fStack_114;
    fVar36 = fStack_100 * 0.0 + fStack_120 * 0.0 + fStack_130 * 0.0 + fStack_110;
    local_348 = CONCAT44(fVar34,fVar32);
    uStack_340 = CONCAT44(fStack_fc * 0.0 + fStack_11c * 0.0 + fStack_12c * 0.0 + fStack_10c,fVar36)
    ;
    fVar31 = 1.0 / SQRT(fVar36 * fVar36 + fVar32 * fVar32 + fVar34 * fVar34);
    iVar26 = 0;
    do {
      pfVar1 = local_218 + local_210;
      *local_218 = fVar35;
      pfVar2 = local_208 + local_200;
      *local_208 = fVar37;
      pfVar3 = local_1f8 + local_1f0;
      *local_1f8 = fVar40;
      pfVar4 = local_248 + local_240;
      *local_248 = local_338;
      pfVar5 = local_238 + local_230;
      *local_238 = fVar16;
      pfVar6 = local_228 + local_220;
      *local_228 = fVar33;
      pfVar7 = local_278 + local_270;
      *local_278 = fVar31 * fVar32;
      pfVar8 = local_268 + local_260;
      *local_268 = fVar34 * fVar31;
      pfVar9 = local_258 + local_250;
      *local_258 = fVar36 * fVar31;
      pfVar10 = local_2a8 + local_2a0;
      *local_2a8 = fVar38 * fVar47;
      pfVar11 = local_298 + local_290;
      *local_298 = fVar48 * fVar38;
      pfVar12 = local_288 + local_280;
      *local_288 = fVar49 * fVar38;
      pfVar13 = local_2d8 + local_2d0;
      *local_2d8 = fVar39 * fVar42;
      pfVar14 = local_2c8 + local_2c0;
      *local_2c8 = fVar44 * fVar39;
      pfVar15 = local_2b8 + local_2b0;
      *local_2b8 = fVar46 * fVar39;
      iVar26 = iVar26 + 1;
      piVar24 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar24 = (int *)(param_2 + 0x3c);
      }
      local_2d8 = pfVar13;
      local_2c8 = pfVar14;
      local_2b8 = pfVar15;
      local_2a8 = pfVar10;
      local_298 = pfVar11;
      local_288 = pfVar12;
      local_278 = pfVar7;
      local_268 = pfVar8;
      local_258 = pfVar9;
      local_248 = pfVar4;
      local_238 = pfVar5;
      local_228 = pfVar6;
      local_218 = pfVar1;
      local_208 = pfVar2;
      local_1f8 = pfVar3;
    } while (iVar26 < *piVar24);
  }
LAB_1480a40ea:
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar24 = (int *)(local_150 + 1);
    *piVar24 = *piVar24 + -1;
    UNLOCK();
    if (*piVar24 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a418e FUN_1480a418e body=694 status=ok
// SIG undefined FUN_1480a418e(void)

void FUN_1480a418e(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_128 [32];
  int *local_108;
  int local_100;
  char *local_f8;
  int *local_f0 [2];
  int local_e0;
  int *local_d8;
  int local_c8;
  int *local_c0;
  int local_b0;
  int local_a0;
  int iStack_9c;
  int local_98;
  undefined1 local_90 [8];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1405c93a6(local_90);
  local_f8 = param_2;
  FUN_1416b93de(local_f0,param_2);
  local_a0 = 0;
  iStack_9c = 0;
  local_98 = 0;
  FUN_144a76cd4(&local_108,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar3 = *(int *)(local_88 + 0x3b8);
    lVar14 = 0;
    do {
      pcVar4 = local_f8;
      piVar6 = local_f0[0] + local_e0;
      local_a0 = *local_f0[0];
      piVar9 = local_d8 + local_c8;
      iStack_9c = *local_d8;
      piVar2 = local_c0 + local_b0;
      local_98 = *local_c0;
      local_f0[0] = piVar6;
      local_d8 = piVar9;
      local_c0 = piVar2;
      if (iVar3 < 1) {
        iVar11 = -1;
      }
      else {
        if (local_98 == -1) {
          if (*local_f8 == '\0') {
            lVar10 = *(longlong *)(local_f8 + 0x80) + 0x88;
          }
          else {
            lVar10 = *(longlong *)(local_f8 + 0x58);
          }
          uVar12 = *(int *)(lVar10 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar10 + 4) = uVar12;
          fVar15 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_f8 == '\0') {
            plVar8 = (longlong *)(*(longlong *)(local_f8 + 0x80) + 0x90);
          }
          else {
            plVar8 = *(longlong **)(local_f8 + 0x60);
            if (*plVar8 == 0) {
              uVar7 = FUN_14153c902((longlong)*(int *)(local_f8 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar4 + 0x60) = uVar7;
              plVar8 = *(longlong **)(pcVar4 + 0x60);
            }
          }
          uVar12 = *(uint *)(*plVar8 + lVar14 * 4);
          *(uint *)(*plVar8 + lVar14 * 4) = uVar12 + 1;
          iVar5 = (local_98 << 0x10 | uVar12) * 0x19660d;
          iVar11 = iVar5 + 0x3c6ef35f;
          iVar13 = (iStack_9c * 0x19660d + 0x3c6ef35f) * iVar11 + local_a0 * 0x19660d;
          iVar1 = iVar13 + 0x3c6ef35f;
          iVar11 = iStack_9c * 0x19660d + iVar11 * iVar1 + 0x3c6ef35f;
          fVar15 = (float)((iVar5 + iVar1 * iVar11 + 0x3c6ef35f) * iVar11 + iVar13 + 0x3c6ef35fU >>
                          8) * 5.9604645e-08;
        }
        iVar11 = (int)(fVar15 * (float)iVar3);
      }
      piVar6 = local_108 + local_100;
      *local_108 = iVar11;
      lVar14 = lVar14 + 1;
      piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar9 = (int *)(param_2 + 0x3c);
      }
      local_108 = piVar6;
    } while (lVar14 < *piVar9);
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a4446 FUN_1480a4446 body=763 status=ok
// SIG undefined FUN_1480a4446(void)

void FUN_1480a4446(undefined8 param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  undefined1 auStack_118 [32];
  uint *local_f8;
  int local_f0;
  char *local_e8;
  int *local_e0 [2];
  int local_d0;
  int *local_c8;
  int local_b8;
  int *local_b0;
  int local_a0;
  int local_90;
  int iStack_8c;
  int local_88;
  undefined1 local_80 [8];
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1405c93a6(local_80);
  local_e8 = param_2;
  FUN_1416b93de(local_e0,param_2);
  local_90 = 0;
  iStack_8c = 0;
  local_88 = 0;
  FUN_144a76cd4(&local_f8,param_2);
  iVar8 = *(int *)(local_78 + 0x3c0);
  piVar1 = (int *)(param_2 + 0x3c);
  piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar11 = piVar1;
  }
  if (iVar8 < 1) {
    if (0 < *piVar11) {
      iVar8 = 0;
      do {
        puVar5 = local_f8 + local_f0;
        *local_f8 = 0xffffffff;
        iVar8 = iVar8 + 1;
        piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar11 = piVar1;
        }
        local_f8 = puVar5;
      } while (iVar8 < *piVar11);
    }
  }
  else if (0 < *piVar11) {
    lVar15 = 0;
    do {
      pcVar6 = local_e8;
      piVar11 = local_e0[0] + local_d0;
      local_90 = *local_e0[0];
      piVar3 = local_c8 + local_b8;
      iStack_8c = *local_c8;
      piVar4 = local_b0 + local_a0;
      local_88 = *local_b0;
      local_e0[0] = piVar11;
      local_c8 = piVar3;
      local_b0 = piVar4;
      if (local_88 == -1) {
        if (*local_e8 == '\0') {
          lVar12 = *(longlong *)(local_e8 + 0x80) + 0x88;
        }
        else {
          lVar12 = *(longlong *)(local_e8 + 0x58);
        }
        uVar14 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar12 + 4) = uVar14;
        fVar17 = (float)(uVar14 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_e8 == '\0') {
          plVar10 = (longlong *)(*(longlong *)(local_e8 + 0x80) + 0x90);
        }
        else {
          plVar10 = *(longlong **)(local_e8 + 0x60);
          if (*plVar10 == 0) {
            uVar9 = FUN_14153c902((longlong)*(int *)(local_e8 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar6 + 0x60) = uVar9;
            plVar10 = *(longlong **)(pcVar6 + 0x60);
          }
        }
        uVar14 = *(uint *)(*plVar10 + lVar15 * 4);
        *(uint *)(*plVar10 + lVar15 * 4) = uVar14 + 1;
        iVar7 = (local_88 << 0x10 | uVar14) * 0x19660d;
        iVar13 = iVar7 + 0x3c6ef35f;
        iVar16 = (iStack_8c * 0x19660d + 0x3c6ef35f) * iVar13 + local_90 * 0x19660d;
        iVar2 = iVar16 + 0x3c6ef35f;
        iVar13 = iStack_8c * 0x19660d + iVar13 * iVar2 + 0x3c6ef35f;
        fVar17 = (float)((iVar7 + iVar2 * iVar13 + 0x3c6ef35f) * iVar13 + iVar16 + 0x3c6ef35fU >> 8)
                 * 5.9604645e-08;
      }
      puVar5 = local_f8 + local_f0;
      *local_f8 = (uint)*(ushort *)
                         (*(longlong *)(local_78 + 0x3c8) +
                         (longlong)(int)(fVar17 * (float)iVar8) * 2);
      lVar15 = lVar15 + 1;
      piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar11 = piVar1;
      }
      local_f8 = puVar5;
    } while (lVar15 < *piVar11);
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a4742 FUN_1480a4742 body=786 status=ok
// SIG undefined FUN_1480a4742(void)

void FUN_1480a4742(undefined8 param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  undefined1 auStack_128 [32];
  uint *local_108;
  int local_100;
  char *local_f8;
  int *local_f0 [2];
  int local_e0;
  int *local_d8;
  int local_c8;
  int *local_c0;
  int local_b0;
  int local_a0;
  int iStack_9c;
  int local_98;
  undefined1 local_90 [8];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1405c93a6(local_90);
  local_f8 = param_2;
  FUN_1416b93de(local_f0,param_2);
  local_a0 = 0;
  iStack_9c = 0;
  local_98 = 0;
  FUN_144a76cd4(&local_108,param_2);
  iVar9 = *(int *)(local_88 + 0x3c0);
  iVar6 = *(int *)(local_88 + 0x3d0);
  piVar1 = (int *)(param_2 + 0x3c);
  piVar13 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar13 = piVar1;
  }
  if (iVar9 - iVar6 < 0) {
    if (0 < *piVar13) {
      lVar17 = 0;
      do {
        pcVar8 = local_f8;
        piVar13 = local_f0[0] + local_e0;
        local_a0 = *local_f0[0];
        piVar4 = local_d8 + local_c8;
        iStack_9c = *local_d8;
        piVar5 = local_c0 + local_b0;
        local_98 = *local_c0;
        iVar7 = *(int *)(local_88 + 0x3c0);
        local_f0[0] = piVar13;
        local_d8 = piVar4;
        local_c0 = piVar5;
        if (local_98 == -1) {
          if (*local_f8 == '\0') {
            lVar14 = *(longlong *)(local_f8 + 0x80) + 0x88;
          }
          else {
            lVar14 = *(longlong *)(local_f8 + 0x58);
          }
          uVar16 = *(int *)(lVar14 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar14 + 4) = uVar16;
          fVar19 = (float)(uVar16 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_f8 == '\0') {
            plVar12 = (longlong *)(*(longlong *)(local_f8 + 0x80) + 0x90);
          }
          else {
            plVar12 = *(longlong **)(local_f8 + 0x60);
            if (*plVar12 == 0) {
              uVar11 = FUN_14153c902((longlong)*(int *)(local_f8 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar8 + 0x60) = uVar11;
              plVar12 = *(longlong **)(pcVar8 + 0x60);
            }
          }
          uVar16 = *(uint *)(*plVar12 + lVar17 * 4);
          *(uint *)(*plVar12 + lVar17 * 4) = uVar16 + 1;
          iVar10 = (local_98 << 0x10 | uVar16) * 0x19660d;
          iVar15 = iVar10 + 0x3c6ef35f;
          iVar18 = (iStack_9c * 0x19660d + 0x3c6ef35f) * iVar15 + local_a0 * 0x19660d;
          iVar2 = iVar18 + 0x3c6ef35f;
          iVar15 = iStack_9c * 0x19660d + iVar15 * iVar2 + 0x3c6ef35f;
          fVar19 = (float)((iVar10 + iVar2 * iVar15 + 0x3c6ef35f) * iVar15 + iVar18 + 0x3c6ef35fU >>
                          8) * 5.9604645e-08;
        }
        puVar3 = local_108 + local_100;
        *local_108 = (uint)*(ushort *)
                            (*(longlong *)(local_88 + 0x3c8) +
                            ((longlong)iVar7 + (longlong)(int)(fVar19 * (float)(iVar6 - iVar9))) * 2
                            );
        lVar17 = lVar17 + 1;
        piVar13 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar13 = piVar1;
        }
        local_108 = puVar3;
      } while (lVar17 < *piVar13);
    }
  }
  else if (0 < *piVar13) {
    iVar9 = 0;
    do {
      puVar3 = local_108 + local_100;
      *local_108 = 0xffffffff;
      iVar9 = iVar9 + 1;
      piVar13 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar13 = piVar1;
      }
      local_108 = puVar3;
    } while (iVar9 < *piVar13);
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a4a56 FUN_1480a4a56 body=268 status=ok
// SIG undefined FUN_1480a4a56(void)

void FUN_1480a4a56(undefined8 param_1,char *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  uint *local_58;
  int local_50;
  uint *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c93a6(local_28);
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_2);
  FUN_144a76cd4(&local_58,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = *(int *)(local_20 + 0x3c0);
    uVar1 = iVar4 - 1;
    iVar6 = 0;
    do {
      puVar2 = local_48 + local_38;
      if (iVar4 < 1) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *local_48;
        if ((int)uVar1 <= (int)*local_48) {
          uVar7 = uVar1;
        }
        if ((int)uVar7 < 1) {
          uVar7 = 0;
        }
        uVar7 = (uint)*(ushort *)(*(longlong *)(local_20 + 0x3c8) + (ulonglong)uVar7 * 2);
      }
      puVar3 = local_58 + local_50;
      *local_58 = uVar7;
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_58 = puVar3;
      local_48 = puVar2;
    } while (iVar6 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a4b64 FUN_1480a4b64 body=279 status=ok
// SIG undefined FUN_1480a4b64(void)

void FUN_1480a4b64(undefined8 param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined1 auStack_68 [32];
  uint *local_48;
  int local_40;
  int *local_38;
  undefined8 uStack_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1405c93a6(local_20);
  local_38 = (int *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a98d08(&local_38,param_2);
  FUN_144a76cd4(&local_48,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    uVar2 = *(uint *)(local_18 + 0x3c0);
    iVar4 = ~uVar2 + *(int *)(local_18 + 0x3d0);
    iVar5 = 0;
    do {
      piVar3 = local_38 + local_28;
      if (iVar4 < 0) {
        uVar7 = 0xffffffff;
      }
      else {
        iVar6 = *local_38;
        if (iVar4 <= *local_38) {
          iVar6 = iVar4;
        }
        if (iVar6 < 1) {
          iVar6 = 0;
        }
        uVar7 = (uint)*(ushort *)
                       (*(longlong *)(local_18 + 0x3c8) + (longlong)(int)(iVar6 + uVar2) * 2);
      }
      puVar1 = local_48 + local_40;
      *local_48 = uVar7;
      iVar5 = iVar5 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
      local_38 = piVar3;
    } while (iVar5 < *piVar8);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a4c7c FUN_1480a4c7c body=1192 status=ok
// SIG undefined FUN_1480a4c7c(void)

void FUN_1480a4c7c(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  int *piVar26;
  undefined1 auStack_1e8 [32];
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  float *local_168;
  int local_160;
  float *local_158;
  int local_150;
  float *local_148;
  int local_140;
  float *local_138;
  int local_130;
  float *local_128;
  int local_120;
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 *local_c8;
  undefined1 local_c0 [16];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_1405c93a6(local_d8);
  local_c8 = (undefined8 *)0x0;
  puVar24 = (undefined8 *)FUN_1405c943a(local_d0,local_c0);
  puVar23 = local_c8;
  puVar22 = local_c8;
  if (local_c8 != puVar24) {
    if (puVar24 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
      UNLOCK();
    }
    puVar22 = puVar24;
    if (local_c8 != (undefined8 *)0x0) {
      LOCK();
      piVar26 = (int *)(local_c8 + 1);
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      if (*piVar26 == 0) {
        puVar22 = (undefined8 *)*local_c8;
        local_c8 = puVar24;
        (*(code *)*puVar22)(puVar23,1);
        puVar22 = local_c8;
      }
    }
  }
  local_c8 = puVar22;
  FUN_144a76c20(&local_108,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_158,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_198,param_2);
  FUN_144a76c20(&local_188,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_1c8,param_2);
  FUN_144a76c20(&local_1b8,param_2);
  FUN_144a76c20(&local_1a8,param_2);
  piVar26 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar26 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar26) {
    fVar16 = *(float *)(local_d0 + 0x2f4);
    fVar17 = *(float *)(local_d0 + 0x2f8);
    fVar18 = *(float *)(local_d0 + 0x2fc);
    fVar19 = *(float *)(local_d0 + 0x300);
    fVar20 = *(float *)(local_d0 + 0x304);
    fVar21 = *(float *)(local_d0 + 0x308);
    iVar25 = 0;
    do {
      pfVar1 = local_108 + local_100;
      *local_108 = fVar16;
      pfVar2 = local_f8 + local_f0;
      *local_f8 = fVar17;
      pfVar3 = local_e8 + local_e0;
      *local_e8 = fVar18;
      pfVar4 = local_138 + local_130;
      *local_138 = fVar16 - fVar19;
      pfVar5 = local_128 + local_120;
      *local_128 = fVar17 - fVar20;
      pfVar6 = local_118 + local_110;
      *local_118 = fVar18 - fVar21;
      pfVar7 = local_168 + local_160;
      *local_168 = fVar16 + fVar19;
      pfVar8 = local_158 + local_150;
      *local_158 = fVar17 + fVar20;
      pfVar9 = local_148 + local_140;
      *local_148 = fVar18 + fVar21;
      pfVar10 = local_198 + local_190;
      *local_198 = fVar19 + fVar19;
      pfVar11 = local_188 + local_180;
      *local_188 = fVar20 + fVar20;
      pfVar12 = local_178 + local_170;
      *local_178 = fVar21 + fVar21;
      pfVar13 = local_1c8 + local_1c0;
      *local_1c8 = fVar19;
      pfVar14 = local_1b8 + local_1b0;
      *local_1b8 = fVar20;
      pfVar15 = local_1a8 + local_1a0;
      *local_1a8 = fVar21;
      iVar25 = iVar25 + 1;
      piVar26 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar26 = (int *)(param_2 + 0x3c);
      }
      local_1c8 = pfVar13;
      local_1b8 = pfVar14;
      local_1a8 = pfVar15;
      local_198 = pfVar10;
      local_188 = pfVar11;
      local_178 = pfVar12;
      local_168 = pfVar7;
      local_158 = pfVar8;
      local_148 = pfVar9;
      local_138 = pfVar4;
      local_128 = pfVar5;
      local_118 = pfVar6;
      local_108 = pfVar1;
      local_f8 = pfVar2;
      local_e8 = pfVar3;
    } while (iVar25 < *piVar26);
  }
  if (local_c8 != (undefined8 *)0x0) {
    LOCK();
    piVar26 = (int *)(local_c8 + 1);
    *piVar26 = *piVar26 + -1;
    UNLOCK();
    if (*piVar26 == 0) {
      (**(code **)*local_c8)(local_c8,1);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a5126 FUN_1480a5126 body=1763 status=ok
// SIG undefined FUN_1480a5126(void)

void FUN_1480a5126(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  int *piVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_2a8 [36];
  float local_284;
  float local_280;
  float local_27c;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined1 local_210;
  undefined4 *local_208;
  int local_200;
  undefined4 *local_1f8;
  int local_1f0;
  undefined4 *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  float *local_168;
  int local_160;
  float *local_158;
  int local_150;
  float *local_148;
  int local_140;
  float *local_138;
  int local_130;
  float *local_128;
  int local_120;
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 *local_d8;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_1405c93a6(local_e8);
  local_d8 = (undefined8 *)0x0;
  puVar24 = (undefined8 *)FUN_1405c943a(local_e0,local_d0);
  puVar23 = local_d8;
  puVar22 = local_d8;
  if (local_d8 != puVar24) {
    if (puVar24 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
      UNLOCK();
    }
    puVar22 = puVar24;
    if (local_d8 != (undefined8 *)0x0) {
      LOCK();
      piVar26 = (int *)(local_d8 + 1);
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      if (*piVar26 == 0) {
        puVar22 = (undefined8 *)*local_d8;
        local_d8 = puVar24;
        (*(code *)*puVar22)(puVar23,1);
        puVar22 = local_d8;
      }
    }
  }
  local_d8 = puVar22;
  FUN_144a76c20(&local_118,param_2);
  FUN_144a76c20(&local_108,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_158,param_2);
  FUN_144a76c20(&local_1a8,param_2);
  FUN_144a76c20(&local_198,param_2);
  FUN_144a76c20(&local_188,param_2);
  FUN_144a76c20(&local_1d8,param_2);
  FUN_144a76c20(&local_1c8,param_2);
  FUN_144a76c20(&local_1b8,param_2);
  FUN_144a76c20(&local_208,param_2);
  FUN_144a76c20(&local_1f8,param_2);
  FUN_144a76c20(&local_1e8,param_2);
  local_230 = (double)(*(float *)(local_e0 + 0x2fc) - *(float *)(local_e0 + 0x308));
  local_238 = (double)(*(float *)(local_e0 + 0x2f8) - *(float *)(local_e0 + 0x304));
  local_240 = (double)(*(float *)(local_e0 + 0x2f4) - *(float *)(local_e0 + 0x300));
  local_218 = (double)(*(float *)(local_e0 + 0x2fc) + *(float *)(local_e0 + 0x308));
  local_220 = (double)(*(float *)(local_e0 + 0x2f8) + *(float *)(local_e0 + 0x304));
  local_228 = (double)(*(float *)(local_e0 + 0x2f4) + *(float *)(local_e0 + 0x300));
  local_210 = 1;
  FUN_144b12ece(&local_240,&local_278,local_e0 + 0x40);
  piVar26 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar26 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar26) {
    local_280 = (float)((local_230 + local_218) * 0.5);
    fVar30 = (float)((local_238 + local_220) * 0.5);
    fVar31 = (float)((local_240 + local_228) * 0.5);
    fVar27 = (float)((local_250 - local_268) * 0.5);
    fVar28 = (float)((local_258 - local_270) * 0.5);
    fVar29 = (float)((local_260 - local_278) * 0.5);
    local_27c = fVar27 + fVar27;
    local_284 = fVar28 + fVar28;
    uVar19 = *(undefined4 *)(local_e0 + 0x28);
    iVar25 = 0;
    uVar20 = *(undefined4 *)(local_e0 + 0x2c);
    uVar21 = *(undefined4 *)(local_e0 + 0x30);
    do {
      pfVar1 = local_118 + local_110;
      *local_118 = fVar31;
      pfVar2 = local_108 + local_100;
      *local_108 = fVar30;
      pfVar3 = local_f8 + local_f0;
      *local_f8 = local_280;
      pfVar4 = local_148 + local_140;
      *local_148 = fVar31 - fVar29;
      pfVar5 = local_138 + local_130;
      *local_138 = fVar30 - fVar28;
      pfVar6 = local_128 + local_120;
      *local_128 = local_280 - fVar27;
      pfVar7 = local_178 + local_170;
      *local_178 = fVar31 + fVar29;
      pfVar8 = local_168 + local_160;
      *local_168 = fVar30 + fVar28;
      pfVar9 = local_158 + local_150;
      *local_158 = local_280 + fVar27;
      pfVar10 = local_1a8 + local_1a0;
      *local_1a8 = fVar29 + fVar29;
      pfVar11 = local_198 + local_190;
      *local_198 = local_284;
      pfVar12 = local_188 + local_180;
      *local_188 = local_27c;
      pfVar13 = local_1d8 + local_1d0;
      *local_1d8 = fVar29;
      pfVar14 = local_1c8 + local_1c0;
      *local_1c8 = fVar28;
      pfVar15 = local_1b8 + local_1b0;
      *local_1b8 = fVar27;
      puVar16 = local_208 + local_200;
      *local_208 = uVar19;
      puVar17 = local_1f8 + local_1f0;
      *local_1f8 = uVar20;
      puVar18 = local_1e8 + local_1e0;
      *local_1e8 = uVar21;
      iVar25 = iVar25 + 1;
      piVar26 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar26 = (int *)(param_2 + 0x3c);
      }
      local_208 = puVar16;
      local_1f8 = puVar17;
      local_1e8 = puVar18;
      local_1d8 = pfVar13;
      local_1c8 = pfVar14;
      local_1b8 = pfVar15;
      local_1a8 = pfVar10;
      local_198 = pfVar11;
      local_188 = pfVar12;
      local_178 = pfVar7;
      local_168 = pfVar8;
      local_158 = pfVar9;
      local_148 = pfVar4;
      local_138 = pfVar5;
      local_128 = pfVar6;
      local_118 = pfVar1;
      local_108 = pfVar2;
      local_f8 = pfVar3;
    } while (iVar25 < *piVar26);
  }
  if (local_d8 != (undefined8 *)0x0) {
    LOCK();
    piVar26 = (int *)(local_d8 + 1);
    *piVar26 = *piVar26 + -1;
    UNLOCK();
    if (*piVar26 == 0) {
      (**(code **)*local_d8)(local_d8,1);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a580a FUN_1480a580a body=1766 status=ok
// SIG undefined FUN_1480a580a(void)

void FUN_1480a580a(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  int *piVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_2a8 [36];
  float local_284;
  float local_280;
  float local_27c;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined1 local_210;
  undefined4 *local_208;
  int local_200;
  undefined4 *local_1f8;
  int local_1f0;
  undefined4 *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  float *local_168;
  int local_160;
  float *local_158;
  int local_150;
  float *local_148;
  int local_140;
  float *local_138;
  int local_130;
  float *local_128;
  int local_120;
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 *local_d8;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_1405c93a6(local_e8);
  local_d8 = (undefined8 *)0x0;
  puVar24 = (undefined8 *)FUN_1405c943a(local_e0,local_d0);
  puVar23 = local_d8;
  puVar22 = local_d8;
  if (local_d8 != puVar24) {
    if (puVar24 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
      UNLOCK();
    }
    puVar22 = puVar24;
    if (local_d8 != (undefined8 *)0x0) {
      LOCK();
      piVar26 = (int *)(local_d8 + 1);
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      if (*piVar26 == 0) {
        puVar22 = (undefined8 *)*local_d8;
        local_d8 = puVar24;
        (*(code *)*puVar22)(puVar23,1);
        puVar22 = local_d8;
      }
    }
  }
  local_d8 = puVar22;
  FUN_144a76c20(&local_118,param_2);
  FUN_144a76c20(&local_108,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_158,param_2);
  FUN_144a76c20(&local_1a8,param_2);
  FUN_144a76c20(&local_198,param_2);
  FUN_144a76c20(&local_188,param_2);
  FUN_144a76c20(&local_1d8,param_2);
  FUN_144a76c20(&local_1c8,param_2);
  FUN_144a76c20(&local_1b8,param_2);
  FUN_144a76c20(&local_208,param_2);
  FUN_144a76c20(&local_1f8,param_2);
  FUN_144a76c20(&local_1e8,param_2);
  local_230 = (double)(*(float *)(local_e0 + 0x2fc) - *(float *)(local_e0 + 0x308));
  local_238 = (double)(*(float *)(local_e0 + 0x2f8) - *(float *)(local_e0 + 0x304));
  local_240 = (double)(*(float *)(local_e0 + 0x2f4) - *(float *)(local_e0 + 0x300));
  local_218 = (double)(*(float *)(local_e0 + 0x2fc) + *(float *)(local_e0 + 0x308));
  local_220 = (double)(*(float *)(local_e0 + 0x2f8) + *(float *)(local_e0 + 0x304));
  local_228 = (double)(*(float *)(local_e0 + 0x2f4) + *(float *)(local_e0 + 0x300));
  local_210 = 1;
  FUN_144b12ece(&local_240,&local_278,local_e0 + 0x40);
  piVar26 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar26 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar26) {
    local_280 = (float)((local_268 + local_250) * 0.5);
    fVar30 = (float)((local_270 + local_258) * 0.5);
    fVar31 = (float)((local_278 + local_260) * 0.5);
    fVar27 = (float)((local_250 - local_268) * 0.5);
    fVar28 = (float)((local_258 - local_270) * 0.5);
    fVar29 = (float)((local_260 - local_278) * 0.5);
    local_27c = fVar27 + fVar27;
    local_284 = fVar28 + fVar28;
    uVar19 = *(undefined4 *)(local_e0 + 0x28);
    iVar25 = 0;
    uVar20 = *(undefined4 *)(local_e0 + 0x2c);
    uVar21 = *(undefined4 *)(local_e0 + 0x30);
    do {
      pfVar1 = local_118 + local_110;
      *local_118 = fVar31;
      pfVar2 = local_108 + local_100;
      *local_108 = fVar30;
      pfVar3 = local_f8 + local_f0;
      *local_f8 = local_280;
      pfVar4 = local_148 + local_140;
      *local_148 = fVar31 - fVar29;
      pfVar5 = local_138 + local_130;
      *local_138 = fVar30 - fVar28;
      pfVar6 = local_128 + local_120;
      *local_128 = local_280 - fVar27;
      pfVar7 = local_178 + local_170;
      *local_178 = fVar31 + fVar29;
      pfVar8 = local_168 + local_160;
      *local_168 = fVar30 + fVar28;
      pfVar9 = local_158 + local_150;
      *local_158 = local_280 + fVar27;
      pfVar10 = local_1a8 + local_1a0;
      *local_1a8 = fVar29 + fVar29;
      pfVar11 = local_198 + local_190;
      *local_198 = local_284;
      pfVar12 = local_188 + local_180;
      *local_188 = local_27c;
      pfVar13 = local_1d8 + local_1d0;
      *local_1d8 = fVar29;
      pfVar14 = local_1c8 + local_1c0;
      *local_1c8 = fVar28;
      pfVar15 = local_1b8 + local_1b0;
      *local_1b8 = fVar27;
      puVar16 = local_208 + local_200;
      *local_208 = uVar19;
      puVar17 = local_1f8 + local_1f0;
      *local_1f8 = uVar20;
      puVar18 = local_1e8 + local_1e0;
      *local_1e8 = uVar21;
      iVar25 = iVar25 + 1;
      piVar26 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar26 = (int *)(param_2 + 0x3c);
      }
      local_208 = puVar16;
      local_1f8 = puVar17;
      local_1e8 = puVar18;
      local_1d8 = pfVar13;
      local_1c8 = pfVar14;
      local_1b8 = pfVar15;
      local_1a8 = pfVar10;
      local_198 = pfVar11;
      local_188 = pfVar12;
      local_178 = pfVar7;
      local_168 = pfVar8;
      local_158 = pfVar9;
      local_148 = pfVar4;
      local_138 = pfVar5;
      local_128 = pfVar6;
      local_118 = pfVar1;
      local_108 = pfVar2;
      local_f8 = pfVar3;
    } while (iVar25 < *piVar26);
  }
  if (local_d8 != (undefined8 *)0x0) {
    LOCK();
    piVar26 = (int *)(local_d8 + 1);
    *piVar26 = *piVar26 + -1;
    UNLOCK();
    if (*piVar26 == 0) {
      (**(code **)*local_d8)(local_d8,1);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a5ef2 FUN_1480a5ef2 body=389 status=ok
// SIG undefined FUN_1480a5ef2(void)

undefined8 FUN_1480a5ef2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar2 = FUN_1481192e4();
  if ((cVar2 != '\0') && (*(char *)(param_2 + 0x38) == *(char *)(param_1 + 0x38))) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((*(longlong *)(param_2 + 0x40) == lVar1) &&
       (cVar2 = FUN_144a7afa6(param_2 + 0x50,param_1 + 0x50), cVar2 != '\0')) {
      lVar1 = *(longlong *)(param_1 + 0x70);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      if (*(longlong *)(param_2 + 0x70) == lVar1) {
        iVar3 = *(int *)(param_2 + 0x80);
        if (iVar3 == *(int *)(param_1 + 0x80)) {
          if ((iVar3 != 0) &&
             (iVar3 = memcmp(*(void **)(param_2 + 0x78),*(void **)(param_1 + 0x78),
                             (longlong)iVar3 << 2), iVar3 != 0)) {
            return 0;
          }
          if ((((((*(char *)(param_2 + 0x88) == *(char *)(param_1 + 0x88)) &&
                 (*(char *)(param_2 + 0x89) == *(char *)(param_1 + 0x89))) &&
                (*(char *)(param_2 + 0x8a) == *(char *)(param_1 + 0x8a))) &&
               ((*(int *)(param_2 + 0x8c) == *(int *)(param_1 + 0x8c) &&
                (*(longlong *)(param_1 + 0x90) == *(longlong *)(param_2 + 0x90))))) &&
              ((*(int *)(param_1 + 0x98) == *(int *)(param_2 + 0x98) &&
               ((*(longlong *)(param_1 + 0xb0) == *(longlong *)(param_2 + 0xb0) &&
                (*(int *)(param_1 + 0xb8) == *(int *)(param_2 + 0xb8))))))) &&
             ((*(int *)(param_2 + 0xd0) == *(int *)(param_1 + 0xd0) &&
              (*(int *)(param_2 + 0xe0) == *(int *)(param_1 + 0xe0))))) {
            uVar4 = FUN_14000b9e1(*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(param_1 + 0xd8));
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1480a6078 FUN_1480a6078 body=434 status=ok
// SIG undefined FUN_1480a6078(void)

void FUN_1480a6078(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x48);
  lVar5 = FUN_1404101e2(puVar1);
  if (lVar5 != 0) {
    FUN_147a91426(lVar5 + 0x20f,param_1);
  }
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x70) = param_2;
    if (param_2 != 0) goto LAB_1480a60d0;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x70) = param_2;
LAB_1480a60d0:
    lVar5 = *(longlong *)(param_2 + 0xa8);
    if (lVar5 != 0) {
      FUN_1400bbfae(&local_48,lVar5);
      *(undefined4 *)(param_1 + 0x50) = local_48;
      *(undefined4 *)(param_1 + 0x54) = uStack_44;
      *(undefined4 *)(param_1 + 0x58) = uStack_40;
      *(undefined4 *)(param_1 + 0x5c) = uStack_3c;
      if ((undefined4 *)(param_1 + 0x50) == &local_48) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x60) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x60) = local_38;
        local_38 = 0;
        *(undefined4 *)(param_1 + 0x68) = local_30;
        *(undefined4 *)(param_1 + 0x6c) = local_2c;
      }
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if (cVar4 != '\0') {
        uVar2 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
          *(undefined8 *)(param_1 + 0x48) = 0;
          goto LAB_1480a61a0;
        }
      }
      FUN_14485c47a(puVar1,lVar5);
      goto LAB_1480a61a0;
    }
  }
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x60),0);
  }
  puVar3 = *(undefined2 **)(param_1 + 0x60);
  if (puVar3 != (undefined2 *)0x0) {
    *puVar3 = 0;
  }
LAB_1480a61a0:
  FUN_14110d6ba(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a622c FUN_1480a622c body=137 status=ok
// SIG undefined FUN_1480a622c(void)

void FUN_1480a622c(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1402599be(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x20f,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a62b6 FUN_1480a62b6 body=176 status=ok
// SIG undefined FUN_1480a62b6(void)

undefined8 * FUN_1480a62b6(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb39154) {
    FUN_144b3d300(&DAT_14cb39154);
    if (DAT_14cb39154 == -1) {
      builtin_wcsncpy(local_38 + 8,L"EndPlay",8);
      builtin_wcsncpy(local_38,L"OnSource",8);
      FUN_1446f470e(&DAT_14cb3914c,local_38,1);
      _Init_thread_footer(&DAT_14cb39154);
    }
  }
  *param_1 = DAT_14cb3914c;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a6368 FUN_1480a6368 body=151 status=ok
// SIG undefined FUN_1480a6368(void)

void FUN_1480a6368(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  lVar2 = FUN_1404101e2((undefined8 *)(param_1 + 0x48));
  if (lVar2 != 0) {
    FUN_147a91426(lVar2 + 0x20f,param_1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x60),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x60);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  return;
}



// FUNCTION 1480a6400 FUN_1480a6400 body=367 status=ok
// SIG undefined FUN_1480a6400(void)

void FUN_1480a6400(char *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar3 = local_30;
  puVar2 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar7 = (int *)(local_30 + 1);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        puVar2 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar2)(puVar3,1);
        puVar2 = local_30;
      }
    }
  }
  local_30 = puVar2;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  FUN_140126e42(&local_68,param_1);
  iVar9 = 0;
  if ((local_30 != (undefined8 *)0x0) && (iVar9 = 0, local_30[0x28] != 0)) {
    cVar4 = FUN_1461c3a34(local_30 + 0x23);
    if (cVar4 != '\0') {
      iVar9 = *(int *)((longlong)local_30 + 0x14c);
    }
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      piVar7 = local_58 + local_48;
      piVar1 = local_68 + local_60;
      *local_68 = -(uint)(*local_58 < iVar9 && -1 < *local_58);
      iVar6 = iVar6 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_68 = piVar1;
      local_58 = piVar7;
    } while (iVar6 < *piVar8);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(local_30 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a6570 FUN_1480a6570 body=841 status=ok
// SIG undefined FUN_1480a6570(void)

void FUN_1480a6570(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined1 auStack_148 [40];
  int *local_120;
  int local_118;
  char *local_110;
  int *local_108 [2];
  int local_f8;
  int *local_f0;
  int local_e0;
  int *local_d8;
  int local_c8;
  int local_b8;
  int iStack_b4;
  int local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 local_90 [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1405c93a6(local_a8,param_1);
  local_98 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)FUN_1405c943a(local_a0,local_90);
  puVar5 = local_98;
  puVar3 = local_98;
  if (local_98 != puVar8) {
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
    puVar3 = puVar8;
    if (local_98 != (undefined8 *)0x0) {
      LOCK();
      piVar9 = (int *)(local_98 + 1);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        puVar3 = (undefined8 *)*local_98;
        local_98 = puVar8;
        (*(code *)*puVar3)(puVar5,1);
        puVar3 = local_98;
      }
    }
  }
  local_98 = puVar3;
  local_110 = param_1;
  FUN_1416b93de(local_108,param_1);
  local_b8 = 0;
  iStack_b4 = 0;
  local_b0 = 0;
  FUN_144a76cd4(&local_120,param_1);
  iVar17 = -1;
  if (((local_98 != (undefined8 *)0x0) && (local_98[0x28] != 0)) &&
     (cVar6 = FUN_1461c3a34(local_98 + 0x23), cVar6 != '\0')) {
    iVar17 = *(int *)((longlong)local_98 + 0x14c) + -1;
  }
  piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar9 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar9) {
    lVar16 = 0;
    if (iVar17 < 1) {
      iVar17 = 0;
    }
    do {
      pcVar4 = local_110;
      piVar9 = local_108[0] + local_f8;
      local_b8 = *local_108[0];
      piVar12 = local_f0 + local_e0;
      iStack_b4 = *local_f0;
      piVar2 = local_d8 + local_c8;
      local_b0 = *local_d8;
      local_108[0] = piVar9;
      local_f0 = piVar12;
      local_d8 = piVar2;
      if (local_b0 == -1) {
        if (*local_110 == '\0') {
          lVar13 = *(longlong *)(local_110 + 0x80) + 0x88;
        }
        else {
          lVar13 = *(longlong *)(local_110 + 0x58);
        }
        uVar15 = *(int *)(lVar13 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar13 + 4) = uVar15;
        fVar19 = (float)(uVar15 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_110 == '\0') {
          plVar11 = (longlong *)(*(longlong *)(local_110 + 0x80) + 0x90);
        }
        else {
          plVar11 = *(longlong **)(local_110 + 0x60);
          if (*plVar11 == 0) {
            uVar10 = FUN_14153c902((longlong)*(int *)(local_110 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar4 + 0x60) = uVar10;
            plVar11 = *(longlong **)(pcVar4 + 0x60);
          }
        }
        uVar15 = *(uint *)(*plVar11 + lVar16 * 4);
        *(uint *)(*plVar11 + lVar16 * 4) = uVar15 + 1;
        iVar7 = (local_b0 << 0x10 | uVar15) * 0x19660d;
        iVar14 = iVar7 + 0x3c6ef35f;
        iVar18 = (iStack_b4 * 0x19660d + 0x3c6ef35f) * iVar14 + local_b8 * 0x19660d;
        iVar1 = iVar18 + 0x3c6ef35f;
        iVar14 = iStack_b4 * 0x19660d + iVar14 * iVar1 + 0x3c6ef35f;
        fVar19 = (float)((iVar7 + iVar1 * iVar14 + 0x3c6ef35f) * iVar14 + iVar18 + 0x3c6ef35fU >> 8)
                 * 5.9604645e-08;
      }
      piVar9 = local_120 + local_118;
      *local_120 = (int)(fVar19 * (float)(iVar17 + 1));
      lVar16 = lVar16 + 1;
      piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar12 = (int *)(param_1 + 0x3c);
      }
      local_120 = piVar9;
    } while (lVar16 < *piVar12);
  }
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    piVar9 = (int *)(local_98 + 1);
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (*piVar9 == 0) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a68ba FUN_1480a68ba body=300 status=ok
// SIG undefined FUN_1480a68ba(void)

void FUN_1480a68ba(char *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar3 = local_30;
  puVar2 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar7 = (int *)(local_30 + 1);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        puVar2 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar2)(puVar3,1);
        puVar2 = local_30;
      }
    }
  }
  local_30 = puVar2;
  FUN_144a76cd4(&local_50,param_1);
  uVar8 = 0;
  if ((local_30 != (undefined8 *)0x0) && (uVar8 = 0, local_30[0x28] != 0)) {
    cVar4 = FUN_1461c3a34(local_30 + 0x23);
    if (cVar4 != '\0') {
      uVar8 = *(undefined4 *)((longlong)local_30 + 0x14c);
    }
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      puVar1 = local_50 + local_48;
      *local_50 = uVar8;
      iVar6 = iVar6 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar1;
    } while (iVar6 < *piVar7);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(local_30 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a69e8 FUN_1480a69e8 body=848 status=ok
// SIG undefined FUN_1480a69e8(void)

void FUN_1480a69e8(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  undefined8 **ppuVar16;
  int iVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong *plVar20;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  float *local_78;
  int local_70;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1405c93a6(local_50,param_1);
  local_40 = (undefined8 *)0x0;
  ppuVar16 = local_38;
  puVar12 = (undefined8 *)FUN_1405c943a(local_48,ppuVar16);
  puVar9 = local_40;
  puVar8 = local_40;
  if (local_40 != puVar12) {
    if (puVar12 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
      UNLOCK();
    }
    puVar8 = puVar12;
    if (local_40 != (undefined8 *)0x0) {
      LOCK();
      piVar14 = (int *)(local_40 + 1);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        puVar8 = (undefined8 *)*local_40;
        local_40 = puVar12;
        (*(code *)*puVar8)(puVar9,1);
        puVar8 = local_40;
      }
    }
  }
  local_40 = puVar8;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_144a98d08(&local_68,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_78,param_1);
  if (local_38[0] == (undefined8 *)0x0) {
    if (((local_40 != (undefined8 *)0x0) && (local_40[0x30] != 0)) &&
       (cVar10 = FUN_147cc7ccc(local_40 + 0x2b), cVar10 != '\0')) {
      ppuVar16 = &local_40;
      lVar13 = 0x18c;
      goto LAB_1480a6ad5;
    }
  }
  else {
    cVar10 = FUN_147cc7ccc();
    lVar13 = 0x34;
    if (cVar10 != '\0') {
LAB_1480a6ad5:
      if (0 < *(int *)((longlong)*ppuVar16 + lVar13)) {
        piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar14 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar14) {
          iVar11 = *(int *)((longlong)*ppuVar16 + lVar13) + -1;
          iVar15 = 0;
          do {
            piVar14 = local_68 + local_58;
            iVar17 = *local_68;
            if (iVar11 <= *local_68) {
              iVar17 = iVar11;
            }
            if (iVar17 < 1) {
              iVar17 = 0;
            }
            plVar20 = local_40 + 0x30;
            piVar19 = (int *)(local_40 + 0x31);
            if (local_38[0] != (undefined8 *)0x0) {
              plVar20 = local_38[0] + 5;
              piVar19 = (int *)(local_38[0] + 6);
            }
            lVar13 = *plVar20;
            uVar18 = (ulonglong)(uint)(iVar17 * *piVar19);
            bVar7 = *(byte *)(lVar13 + 3 + uVar18);
            uVar5 = (&DAT_14c758c60)[*(byte *)(lVar13 + uVar18)];
            uVar6 = (&DAT_14c758c60)[*(byte *)(lVar13 + 1 + uVar18)];
            puVar1 = local_a8 + local_a0;
            *local_a8 = (&DAT_14c758c60)[*(byte *)(lVar13 + 2 + uVar18)];
            puVar2 = local_98 + local_90;
            *local_98 = uVar6;
            puVar3 = local_88 + local_80;
            *local_88 = uVar5;
            pfVar4 = local_78 + local_70;
            *local_78 = (float)bVar7 * 0.003921569;
            iVar15 = iVar15 + 1;
            piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar19 = (int *)(param_1 + 0x3c);
            }
            local_a8 = puVar1;
            local_98 = puVar2;
            local_88 = puVar3;
            local_78 = pfVar4;
            local_68 = piVar14;
          } while (iVar15 < *piVar19);
        }
        goto LAB_1480a6cf5;
      }
    }
  }
  piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar14 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar11 = 0;
    do {
      puVar1 = local_a8 + local_a0;
      *local_a8 = 0x3f800000;
      puVar2 = local_98 + local_90;
      *local_98 = 0x3f800000;
      puVar3 = local_88 + local_80;
      *local_88 = 0x3f800000;
      pfVar4 = local_78 + local_70;
      *local_78 = 1.0;
      iVar11 = iVar11 + 1;
      piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar14 = (int *)(param_1 + 0x3c);
      }
      local_a8 = puVar1;
      local_98 = puVar2;
      local_88 = puVar3;
      local_78 = pfVar4;
    } while (iVar11 < *piVar14);
  }
LAB_1480a6cf5:
  if (local_40 != (undefined8 *)0x0) {
    LOCK();
    piVar14 = (int *)(local_40 + 1);
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (*piVar14 == 0) {
      (**(code **)*local_40)(local_40,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a6d3a FUN_1480a6d3a body=879 status=ok
// SIG undefined FUN_1480a6d3a(void)

void FUN_1480a6d3a(char *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  ushort uVar7;
  ushort uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  int *piVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_f8 [32];
  uint *local_d8;
  int local_d0;
  uint *local_c8;
  int local_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  uint *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 *local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1405c93a6(local_78,param_1);
  local_68 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)FUN_1405c943a(local_70,local_60);
  puVar11 = local_68;
  puVar9 = local_68;
  if (local_68 != puVar14) {
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
    }
    puVar9 = puVar14;
    if (local_68 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_68 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        puVar9 = (undefined8 *)*local_68;
        local_68 = puVar14;
        (*(code *)*puVar9)(puVar11,1);
        puVar9 = local_68;
      }
    }
  }
  local_68 = puVar9;
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_1);
  local_a8 = 0;
  local_b8 = (uint *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_c8,param_1);
  iVar12 = FUN_1480a70aa(local_78);
  uVar17 = iVar12 - 1;
  iVar12 = FUN_1480a710e(local_78);
  uVar13 = iVar12 - 1;
  piVar1 = (int *)(param_1 + 0x3c);
  piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar15 = piVar1;
  }
  if ((int)(uVar13 | uVar17) < 0) {
    if (0 < *piVar15) {
      iVar12 = 0;
      do {
        uVar10 = DAT_14c84635c;
        puVar2 = local_d8 + local_d0;
        *local_d8 = (uint)DAT_14c84635c;
        puVar3 = local_c8 + local_c0;
        *local_c8 = (uint)((ulonglong)uVar10 >> 0x20);
        iVar12 = iVar12 + 1;
        piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar15 = piVar1;
        }
        local_d8 = puVar2;
        local_c8 = puVar3;
      } while (iVar12 < *piVar15);
    }
  }
  else if (0 < *piVar15) {
    iVar12 = 0;
    do {
      puVar2 = local_98 + local_88;
      puVar3 = local_b8 + local_a8;
      uVar18 = *local_b8;
      if ((int)uVar13 <= (int)*local_b8) {
        uVar18 = uVar13;
      }
      if ((int)uVar18 < 1) {
        uVar18 = 0;
      }
      uVar21 = (ulonglong)uVar18;
      uVar18 = *local_98;
      if ((int)uVar17 <= (int)*local_98) {
        uVar18 = uVar17;
      }
      if ((int)uVar18 < 1) {
        uVar18 = 0;
      }
      if (*(char *)(local_68 + 0x22) == '\x01') {
        lVar4 = local_68[0x1f] + (ulonglong)uVar18 * (ulonglong)*(uint *)(local_68 + 0x21) * 8;
        uVar18 = *(uint *)(lVar4 + uVar21 * 8);
        uVar20 = *(uint *)(lVar4 + 4 + uVar21 * 8);
      }
      else {
        lVar4 = local_68[0x1f] + (ulonglong)uVar18 * (ulonglong)*(uint *)(local_68 + 0x21) * 4;
        uVar7 = *(ushort *)(lVar4 + 2 + uVar21 * 4);
        uVar18 = (uint)uVar7 << 0xd;
        if ((uVar18 & 0xf800000) == 0xf800000) {
          fVar19 = (float)(uVar18 | 0x70000000);
        }
        else if ((uVar18 & 0xf800000) == 0) {
          fVar19 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar19 = (float)((uVar18 & 0xfffe000) + 0x38000000);
        }
        uVar8 = *(ushort *)(lVar4 + uVar21 * 4);
        uVar18 = (uint)uVar8 << 0xd;
        if ((uVar18 & 0xf800000) == 0xf800000) {
          fVar16 = (float)(uVar18 | 0x70000000);
        }
        else if ((uVar18 & 0xf800000) == 0) {
          fVar16 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar16 = (float)((uVar18 & 0xfffe000) + 0x38000000);
        }
        uVar20 = (uint)fVar19 | (int)(short)uVar7 & 0x80000000U;
        uVar18 = (int)(short)uVar8 & 0x80000000U | (uint)fVar16;
      }
      puVar5 = local_d8 + local_d0;
      *local_d8 = uVar18;
      puVar6 = local_c8 + local_c0;
      *local_c8 = uVar20;
      iVar12 = iVar12 + 1;
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = piVar1;
      }
      local_d8 = puVar5;
      local_c8 = puVar6;
      local_b8 = puVar3;
      local_98 = puVar2;
    } while (iVar12 < *piVar15);
  }
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_68 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_68)(local_68,1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a70aa FUN_1480a70aa body=100 status=ok
// SIG undefined FUN_1480a70aa(void)

undefined4 FUN_1480a70aa(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar3 = 0;
  uVar4 = 0;
  if ((((lVar1 != 0) && (uVar4 = uVar3, *(longlong *)(lVar1 + 0xf8) != 0)) &&
      (*(longlong **)(lVar1 + 0xd0) != (longlong *)0x0)) && (*(longlong *)(lVar1 + 0xe0) != 0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd0) + 0x58))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xe0) + 0x58))();
      if (cVar2 != '\0') {
        uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10c);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1480a710e FUN_1480a710e body=100 status=ok
// SIG undefined FUN_1480a710e(void)

undefined4 FUN_1480a710e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar3 = 0;
  uVar4 = 0;
  if ((((lVar1 != 0) && (uVar4 = uVar3, *(longlong *)(lVar1 + 0xf8) != 0)) &&
      (*(longlong **)(lVar1 + 0xd0) != (longlong *)0x0)) && (*(longlong *)(lVar1 + 0xe0) != 0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd0) + 0x58))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xe0) + 0x58))();
      if (cVar2 != '\0') {
        uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x108);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1480a7172 FUN_1480a7172 body=402 status=ok
// SIG undefined FUN_1480a7172(void)

void FUN_1480a7172(char *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_98 [32];
  int *local_78;
  int local_70;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  int local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar3 = local_30;
  puVar2 = local_30;
  if (local_30 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar4;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar6 = (int *)(local_30 + 1);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        puVar2 = (undefined8 *)*local_30;
        local_30 = puVar4;
        (*(code *)*puVar2)(puVar3,1);
        puVar2 = local_30;
      }
    }
  }
  local_30 = puVar2;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_144a98d08(&local_68,param_1);
  FUN_140126e42(&local_78,param_1);
  if (local_30 == (undefined8 *)0x0) {
    local_48 = 0;
  }
  else {
    FUN_1461c3a4c(local_30 + 0x33,local_50);
    local_48 = local_48 / 3;
  }
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      piVar6 = local_68 + local_58;
      piVar1 = local_78 + local_70;
      *local_78 = -(uint)(*local_68 < local_48 && -1 < *local_68);
      iVar5 = iVar5 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      local_78 = piVar1;
      local_68 = piVar6;
    } while (iVar5 < *piVar7);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar6 = (int *)(local_30 + 1);
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a7306 FUN_1480a7306 body=318 status=ok
// SIG undefined FUN_1480a7306(void)

void FUN_1480a7306(char *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_88 [40];
  int *local_60;
  int local_58;
  undefined1 local_50 [8];
  int local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar2 = local_30;
  puVar1 = local_30;
  if (local_30 != puVar3) {
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    puVar1 = puVar3;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar5 = (int *)(local_30 + 1);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        puVar1 = (undefined8 *)*local_30;
        local_30 = puVar3;
        (*(code *)*puVar1)(puVar2,1);
        puVar1 = local_30;
      }
    }
  }
  local_30 = puVar1;
  FUN_144a76cd4(&local_60,param_1);
  if (local_30 == (undefined8 *)0x0) {
    local_48 = 0;
  }
  else {
    FUN_1461c3a4c(local_30 + 0x33,local_50);
    local_48 = local_48 / 3;
  }
  piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar5 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      piVar5 = local_60 + local_58;
      *local_60 = local_48;
      iVar4 = iVar4 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = (int *)(param_1 + 0x3c);
      }
      local_60 = piVar5;
    } while (iVar4 < *piVar6);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar5 = (int *)(local_30 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a7446 FUN_1480a7446 body=358 status=ok
// SIG undefined FUN_1480a7446(void)

void FUN_1480a7446(char *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar3 = local_30;
  puVar2 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar7 = (int *)(local_30 + 1);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        puVar2 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar2)(puVar3,1);
        puVar2 = local_30;
      }
    }
  }
  local_30 = puVar2;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  FUN_140126e42(&local_68,param_1);
  if (local_30 == (undefined8 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_38 + 0x334);
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      piVar7 = local_58 + local_48;
      piVar1 = local_68 + local_60;
      *local_68 = -(uint)(*local_58 < iVar4 && -1 < *local_58);
      iVar6 = iVar6 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_68 = piVar1;
      local_58 = piVar7;
    } while (iVar6 < *piVar8);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(local_30 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a75ae FUN_1480a75ae body=4506 status=ok
// SIG undefined FUN_1480a75ae(void)

void FUN_1480a75ae(char *param_1)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  undefined8 extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar32 [12];
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  int *local_188;
  float *local_180;
  int local_178;
  float *local_170;
  int local_168;
  float *local_160;
  int local_158;
  int *local_150;
  int local_148;
  char *local_140;
  int *local_138 [2];
  int local_128;
  int *local_120;
  int local_110;
  int *local_108;
  int local_f8;
  int local_e8;
  int iStack_e4;
  int local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 *local_c8;
  undefined1 local_c0 [16];
  ulonglong local_b0;
  undefined1 auVar30 [16];
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1405c93a6(local_d8,param_1);
  local_c8 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)FUN_1405c943a(local_d0,local_c0);
  puVar9 = local_c8;
  puVar7 = local_c8;
  if (local_c8 != puVar11) {
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
    }
    puVar7 = puVar11;
    if (local_c8 != (undefined8 *)0x0) {
      LOCK();
      piVar15 = (int *)(local_c8 + 1);
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        puVar7 = (undefined8 *)*local_c8;
        local_c8 = puVar11;
        (*(code *)*puVar7)(puVar9,1);
        puVar7 = local_c8;
      }
    }
  }
  local_c8 = puVar7;
  local_140 = param_1;
  FUN_1416b93de(local_138,param_1);
  local_e8 = 0;
  iStack_e4 = 0;
  local_e0 = 0;
  FUN_144a76cd4(&local_150,param_1);
  FUN_144a76c20(&local_180,param_1);
  FUN_144a76c20(&local_170,param_1);
  auVar31._0_8_ = FUN_144a76c20(&local_160,param_1);
  auVar31._8_8_ = extraout_XMM0_Qb;
  iVar10 = *(int *)(local_d0 + 0x32c);
  if (iVar10 == 0) {
    piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar15 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar15) {
      lVar20 = 0;
      do {
        pcVar8 = local_140;
        auVar32 = auVar31._4_12_;
        piVar15 = local_138[0] + local_128;
        local_e8 = *local_138[0];
        piVar1 = local_120 + local_110;
        iStack_e4 = *local_120;
        piVar2 = local_108 + local_f8;
        local_e0 = *local_108;
        piVar6 = local_150 + local_148;
        *local_150 = 0;
        local_150 = piVar6;
        local_138[0] = piVar15;
        local_120 = piVar1;
        local_108 = piVar2;
        if (local_e0 == -1) {
          if (*local_140 == '\0') {
            lVar26 = *(longlong *)(local_140 + 0x80) + 0x88;
          }
          else {
            lVar26 = *(longlong *)(local_140 + 0x58);
          }
          uVar17 = *(int *)(lVar26 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar26 + 4) = uVar17;
          fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          if (*local_140 == '\x01') {
            lVar26 = *(longlong *)(local_140 + 0x58);
          }
          else {
            lVar26 = *(longlong *)(local_140 + 0x80) + 0x88;
          }
          uVar17 = *(int *)(lVar26 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar26 + 4) = uVar17;
          fVar29 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          auVar32 = (undefined1  [12])0x0;
        }
        else {
          if (*local_140 == '\0') {
            plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
          }
          else {
            plVar13 = *(longlong **)(local_140 + 0x60);
            if (*plVar13 == 0) {
              uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
              auVar30._8_8_ = extraout_XMM0_Qb_00;
              auVar30._0_8_ = extraout_XMM0_Qa;
              auVar32 = auVar30._4_12_;
              **(undefined8 **)(pcVar8 + 0x60) = uVar12;
              plVar13 = *(longlong **)(pcVar8 + 0x60);
            }
          }
          uVar17 = *(uint *)(*plVar13 + lVar20 * 4);
          *(uint *)(*plVar13 + lVar20 * 4) = uVar17 + 1;
          iVar18 = (local_e0 << 0x10 | uVar17) * 0x19660d;
          iVar10 = iVar18 + 0x3c6ef35f;
          iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar10 + local_e8 * 0x19660d;
          iVar25 = iVar24 + 0x3c6ef35f;
          iVar22 = iStack_e4 * 0x19660d + iVar10 * iVar25 + 0x3c6ef35f;
          iVar10 = iVar18 + iVar25 * iVar22 + 0x3c6ef35f;
          uVar17 = iVar10 * iVar22 + iVar24 + 0x3c6ef35f;
          fVar29 = (float)(uVar17 >> 8) * 5.9604645e-08;
          fVar28 = (float)(iVar10 * uVar17 + iVar22 >> 8) * 5.9604645e-08;
        }
        if (fVar29 < 0.0) {
          auVar31._0_4_ = sqrtf(fVar29);
          auVar31._4_4_ = extraout_XMM0_Db;
          auVar31._8_8_ = extraout_XMM0_Qb_01;
        }
        else {
          auVar31._0_4_ = SQRT(fVar29);
          auVar31._4_12_ = auVar32;
        }
        fVar29 = auVar31._0_4_;
        pfVar3 = local_180 + local_178;
        *local_180 = 1.0 - fVar29;
        pfVar4 = local_170 + local_168;
        *local_170 = (1.0 - fVar28) * fVar29;
        pfVar5 = local_160 + local_158;
        *local_160 = fVar28 * fVar29;
        lVar20 = lVar20 + 1;
        piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar15 = (int *)(param_1 + 0x3c);
        }
        local_180 = pfVar3;
        local_170 = pfVar4;
        local_160 = pfVar5;
      } while (lVar20 < *piVar15);
    }
  }
  else {
    lVar20 = *(longlong *)(local_d0 + 0x350);
    if ((local_c8 == (undefined8 *)0x0) || ((*(byte *)(local_d0 + 0x328) & 0x20) == 0)) {
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar15) {
        lVar26 = 0;
        do {
          pcVar8 = local_140;
          piVar15 = local_138[0] + local_128;
          local_e8 = *local_138[0];
          piVar1 = local_120 + local_110;
          iStack_e4 = *local_120;
          piVar2 = local_108 + local_f8;
          local_e0 = *local_108;
          local_138[0] = piVar15;
          local_120 = piVar1;
          local_108 = piVar2;
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar18 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar25 = iVar18 + 0x3c6ef35f;
            iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
            iVar22 = iVar24 + 0x3c6ef35f;
            iVar25 = iStack_e4 * 0x19660d + iVar25 * iVar22 + 0x3c6ef35f;
            fVar28 = (float)((iVar18 + iVar22 * iVar25 + 0x3c6ef35f) * iVar25 + iVar24 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar8 = local_140;
          lVar27 = (longlong)(int)(fVar28 * (float)iVar10) * 0x10;
          iVar25 = *(int *)(lVar20 + lVar27);
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar14 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar14 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar14 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar14 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar24 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar18 = iVar24 + 0x3c6ef35f;
            iVar23 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar18 + local_e8 * 0x19660d;
            iVar22 = iVar23 + 0x3c6ef35f;
            iVar18 = iStack_e4 * 0x19660d + iVar18 * iVar22 + 0x3c6ef35f;
            fVar28 = (float)((iVar24 + iVar22 * iVar18 + 0x3c6ef35f) * iVar18 + iVar23 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar8 = local_140;
          piVar15 = local_150 + local_148;
          *local_150 = iVar25 + (int)((float)*(uint *)(lVar20 + 4 + lVar27) * fVar28);
          local_150 = piVar15;
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
            if (*local_140 == '\x01') {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar29 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar22 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar25 = iVar22 + 0x3c6ef35f;
            iVar23 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
            iVar18 = iVar23 + 0x3c6ef35f;
            iVar24 = iStack_e4 * 0x19660d + iVar25 * iVar18 + 0x3c6ef35f;
            iVar25 = iVar22 + iVar18 * iVar24 + 0x3c6ef35f;
            uVar17 = iVar25 * iVar24 + iVar23 + 0x3c6ef35f;
            fVar29 = (float)(uVar17 >> 8) * 5.9604645e-08;
            fVar28 = (float)(iVar25 * uVar17 + iVar24 >> 8) * 5.9604645e-08;
          }
          if (fVar29 < 0.0) {
            fVar29 = sqrtf(fVar29);
          }
          else {
            fVar29 = SQRT(fVar29);
          }
          pfVar3 = local_180 + local_178;
          *local_180 = 1.0 - fVar29;
          pfVar4 = local_170 + local_168;
          *local_170 = (1.0 - fVar28) * fVar29;
          pfVar5 = local_160 + local_158;
          *local_160 = fVar28 * fVar29;
          lVar26 = lVar26 + 1;
          piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar15 = (int *)(param_1 + 0x3c);
          }
          local_180 = pfVar3;
          local_170 = pfVar4;
          local_160 = pfVar5;
        } while (lVar26 < *piVar15);
      }
    }
    else {
      local_188 = (int *)(param_1 + 0x3c);
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = local_188;
      }
      if (0 < *piVar15) {
        local_190 = *(longlong *)(local_d0 + 0x340);
        lVar26 = 0;
        do {
          pcVar8 = local_140;
          piVar15 = local_138[0] + local_128;
          local_e8 = *local_138[0];
          piVar1 = local_120 + local_110;
          iStack_e4 = *local_120;
          piVar2 = local_108 + local_f8;
          local_e0 = *local_108;
          local_138[0] = piVar15;
          local_120 = piVar1;
          local_108 = piVar2;
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar18 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar25 = iVar18 + 0x3c6ef35f;
            iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
            iVar22 = iVar24 + 0x3c6ef35f;
            iVar25 = iStack_e4 * 0x19660d + iVar25 * iVar22 + 0x3c6ef35f;
            fVar28 = (float)((iVar18 + iVar22 * iVar25 + 0x3c6ef35f) * iVar25 + iVar24 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar8 = local_140;
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar29 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar25 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar18 = iVar25 + 0x3c6ef35f;
            iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar18 + local_e8 * 0x19660d;
            iVar22 = iVar24 + 0x3c6ef35f;
            iVar18 = iStack_e4 * 0x19660d + iVar18 * iVar22 + 0x3c6ef35f;
            fVar29 = (float)((iVar25 + iVar22 * iVar18 + 0x3c6ef35f) * iVar18 + iVar24 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar8 = local_140;
          lVar27 = (longlong)(int)(fVar28 * (float)iVar10);
          if (*(float *)(lVar20 + 8 + lVar27 * 0x10) <= fVar29) {
            lVar27 = (longlong)*(int *)(lVar27 * 0x10 + lVar20 + 0xc);
          }
          iVar25 = *(int *)(local_190 + lVar27 * 4);
          lVar14 = (longlong)iVar25;
          iVar18 = 0;
          if ((-1 < lVar14) && (iVar18 = 0, iVar25 < *(int *)(local_c8 + 0x4c))) {
            uVar21 = local_c8[0x4b];
            if ((uVar21 & 1) == 0) {
              iVar25 = *(int *)(uVar21 + 0x10 + lVar14 * 0x40);
            }
            else {
              uVar21 = (longlong)local_c8 + ((longlong)uVar21 >> 0x18) + 600;
              iVar25 = *(int *)(lVar14 * 0x40 + 0x10 + uVar21);
            }
            if (iVar25 != 0) {
              if (local_e0 == -1) {
                if (*local_140 == '\0') {
                  lVar16 = *(longlong *)(local_140 + 0x80) + 0x88;
                }
                else {
                  lVar16 = *(longlong *)(local_140 + 0x58);
                }
                uVar17 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar16 + 4) = uVar17;
                fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
              }
              else {
                if (*local_140 == '\0') {
                  plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
                }
                else {
                  plVar13 = *(longlong **)(local_140 + 0x60);
                  if (*plVar13 == 0) {
                    uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                    **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                    plVar13 = *(longlong **)(pcVar8 + 0x60);
                  }
                }
                uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
                *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
                iVar18 = (local_e0 << 0x10 | uVar17) * 0x19660d;
                iVar25 = iVar18 + 0x3c6ef35f;
                iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
                iVar22 = iVar24 + 0x3c6ef35f;
                iVar25 = iStack_e4 * 0x19660d + iVar25 * iVar22 + 0x3c6ef35f;
                fVar28 = (float)((iVar18 + iVar22 * iVar25 + 0x3c6ef35f) * iVar25 + iVar24 +
                                 0x3c6ef35fU >> 8) * 5.9604645e-08;
              }
              pcVar8 = local_140;
              if (local_e0 == -1) {
                if (*local_140 == '\0') {
                  lVar16 = *(longlong *)(local_140 + 0x80) + 0x88;
                }
                else {
                  lVar16 = *(longlong *)(local_140 + 0x58);
                }
                uVar17 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar16 + 4) = uVar17;
                fVar29 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
              }
              else {
                if (*local_140 == '\0') {
                  plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
                }
                else {
                  plVar13 = *(longlong **)(local_140 + 0x60);
                  if (*plVar13 == 0) {
                    uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                    **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                    plVar13 = *(longlong **)(pcVar8 + 0x60);
                  }
                }
                uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
                *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
                iVar22 = (local_e0 << 0x10 | uVar17) * 0x19660d;
                iVar25 = iVar22 + 0x3c6ef35f;
                iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
                iVar18 = iVar24 + 0x3c6ef35f;
                iVar25 = iStack_e4 * 0x19660d + iVar25 * iVar18 + 0x3c6ef35f;
                fVar29 = (float)((iVar22 + iVar18 * iVar25 + 0x3c6ef35f) * iVar25 + iVar24 +
                                 0x3c6ef35fU >> 8) * 5.9604645e-08;
              }
              lVar14 = uVar21 + lVar14 * 0x40;
              iVar25 = (int)((float)*(int *)(lVar14 + 0x10) * fVar29);
              uVar21 = *(ulonglong *)(lVar14 + 8);
              uVar19 = lVar14 + 8 + ((longlong)uVar21 >> 0x18);
              if ((uVar21 & 1) == 0) {
                uVar19 = uVar21;
              }
              if (*(float *)(uVar19 + (longlong)iVar25 * 4) <= fVar28) {
                uVar21 = *(ulonglong *)(lVar14 + 0x18);
                uVar19 = lVar14 + 0x18 + ((longlong)uVar21 >> 0x18);
                if ((uVar21 & 1) == 0) {
                  uVar19 = uVar21;
                }
                iVar25 = *(int *)(uVar19 + (longlong)iVar25 * 4);
              }
              iVar18 = iVar25 + *(int *)(lVar20 + lVar27 * 0x10);
            }
          }
          pcVar8 = local_140;
          piVar15 = local_150 + local_148;
          *local_150 = iVar18;
          local_150 = piVar15;
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
            if (*local_140 == '\x01') {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar29 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar22 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar25 = iVar22 + 0x3c6ef35f;
            iVar23 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
            iVar18 = iVar23 + 0x3c6ef35f;
            iVar24 = iStack_e4 * 0x19660d + iVar25 * iVar18 + 0x3c6ef35f;
            iVar25 = iVar22 + iVar18 * iVar24 + 0x3c6ef35f;
            uVar17 = iVar25 * iVar24 + iVar23 + 0x3c6ef35f;
            fVar29 = (float)(uVar17 >> 8) * 5.9604645e-08;
            fVar28 = (float)(iVar25 * uVar17 + iVar24 >> 8) * 5.9604645e-08;
          }
          if (fVar29 < 0.0) {
            fVar29 = sqrtf(fVar29);
          }
          else {
            fVar29 = SQRT(fVar29);
          }
          pfVar3 = local_180 + local_178;
          *local_180 = 1.0 - fVar29;
          pfVar4 = local_170 + local_168;
          *local_170 = (1.0 - fVar28) * fVar29;
          pfVar5 = local_160 + local_158;
          *local_160 = fVar28 * fVar29;
          lVar26 = lVar26 + 1;
          piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar15 = local_188;
          }
          local_180 = pfVar3;
          local_170 = pfVar4;
          local_160 = pfVar5;
        } while (lVar26 < *piVar15);
      }
    }
  }
  if (local_c8 != (undefined8 *)0x0) {
    LOCK();
    piVar15 = (int *)(local_c8 + 1);
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (*piVar15 == 0) {
      (**(code **)*local_c8)(local_c8,1);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a874a FUN_1480a874a body=286 status=ok
// SIG undefined FUN_1480a874a(void)

void FUN_1480a874a(char *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar3 = local_30;
  puVar2 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar7 = (int *)(local_30 + 1);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        puVar2 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar2)(puVar3,1);
        puVar2 = local_30;
      }
    }
  }
  local_30 = puVar2;
  FUN_144a76cd4(&local_50,param_1);
  if (local_30 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_38 + 0x334);
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      puVar1 = local_50 + local_48;
      *local_50 = uVar4;
      iVar6 = iVar6 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar1;
    } while (iVar6 < *piVar7);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(local_30 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a886a FUN_1480a886a body=525 status=ok
// SIG undefined FUN_1480a886a(void)

void FUN_1480a886a(char *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_a8 [32];
  int *local_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  undefined8 *local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1405c93a6(local_60,param_1);
  local_50 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_58,local_48);
  puVar3 = local_50;
  puVar1 = local_50;
  if (local_50 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar1 = puVar5;
    if (local_50 != (undefined8 *)0x0) {
      LOCK();
      piVar7 = (int *)(local_50 + 1);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        puVar1 = (undefined8 *)*local_50;
        local_50 = puVar5;
        (*(code *)*puVar1)(puVar3,1);
        puVar1 = local_50;
      }
    }
  }
  local_50 = puVar1;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_144a98d08(&local_78,param_1);
  FUN_144a76cd4(&local_88,param_1);
  if ((local_50 == (undefined8 *)0x0) || (*(int *)(local_58 + 0x334) < 2)) {
    piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar7 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar6 = 0;
      do {
        piVar7 = local_88 + local_80;
        *local_88 = 0;
        iVar6 = iVar6 + 1;
        piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar8 = (int *)(param_1 + 0x3c);
        }
        local_88 = piVar7;
      } while (iVar6 < *piVar8);
    }
  }
  else {
    piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar7 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar4 = *(int *)(local_58 + 0x334) + -1;
      lVar2 = *(longlong *)(local_58 + 0x350);
      iVar6 = *(int *)(local_58 + 0x32c);
      iVar13 = 0;
      do {
        piVar7 = local_78 + local_68;
        iVar11 = *local_78;
        if (iVar4 <= *local_78) {
          iVar11 = iVar4;
        }
        if (iVar11 < 1) {
          iVar11 = 0;
        }
        iVar10 = 0;
        if (iVar6 != 0) {
          lVar9 = 0;
          iVar10 = 0;
          do {
            iVar14 = *(int *)(lVar2 + 4 + lVar9) + iVar10;
            if ((iVar10 <= iVar11) && (iVar11 < iVar14)) {
              iVar10 = (iVar11 - iVar10) + *(int *)(lVar2 + lVar9);
              goto LAB_1480a89b7;
            }
            lVar9 = lVar9 + 0x10;
            iVar10 = iVar14;
          } while ((longlong)iVar6 << 4 != lVar9);
          iVar10 = 0;
        }
LAB_1480a89b7:
        piVar8 = local_88 + local_80;
        *local_88 = iVar10;
        iVar13 = iVar13 + 1;
        piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar12 = (int *)(param_1 + 0x3c);
        }
        local_88 = piVar8;
        local_78 = piVar7;
      } while (iVar13 < *piVar12);
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(local_50 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*local_50)(local_50,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a8a78 FUN_1480a8a78 body=358 status=ok
// SIG undefined FUN_1480a8a78(void)

void FUN_1480a8a78(char *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar3 = local_30;
  puVar2 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar7 = (int *)(local_30 + 1);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        puVar2 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar2)(puVar3,1);
        puVar2 = local_30;
      }
    }
  }
  local_30 = puVar2;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  FUN_140126e42(&local_68,param_1);
  if (local_30 == (undefined8 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_38 + 0x338);
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      piVar7 = local_58 + local_48;
      piVar1 = local_68 + local_60;
      *local_68 = -(uint)(*local_58 < iVar4 && -1 < *local_58);
      iVar6 = iVar6 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_68 = piVar1;
      local_58 = piVar7;
    } while (iVar6 < *piVar8);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(local_30 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a8be0 FUN_1480a8be0 body=4524 status=ok
// SIG undefined FUN_1480a8be0(void)

void FUN_1480a8be0(char *param_1)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  undefined8 extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar32 [12];
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  int *local_188;
  float *local_180;
  int local_178;
  float *local_170;
  int local_168;
  float *local_160;
  int local_158;
  int *local_150;
  int local_148;
  char *local_140;
  int *local_138 [2];
  int local_128;
  int *local_120;
  int local_110;
  int *local_108;
  int local_f8;
  int local_e8;
  int iStack_e4;
  int local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 *local_c8;
  undefined1 local_c0 [16];
  ulonglong local_b0;
  undefined1 auVar30 [16];
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1405c93a6(local_d8,param_1);
  local_c8 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)FUN_1405c943a(local_d0,local_c0);
  puVar9 = local_c8;
  puVar7 = local_c8;
  if (local_c8 != puVar11) {
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
    }
    puVar7 = puVar11;
    if (local_c8 != (undefined8 *)0x0) {
      LOCK();
      piVar15 = (int *)(local_c8 + 1);
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        puVar7 = (undefined8 *)*local_c8;
        local_c8 = puVar11;
        (*(code *)*puVar7)(puVar9,1);
        puVar7 = local_c8;
      }
    }
  }
  local_c8 = puVar7;
  local_140 = param_1;
  FUN_1416b93de(local_138,param_1);
  local_e8 = 0;
  iStack_e4 = 0;
  local_e0 = 0;
  FUN_144a76cd4(&local_150,param_1);
  FUN_144a76c20(&local_180,param_1);
  FUN_144a76c20(&local_170,param_1);
  auVar31._0_8_ = FUN_144a76c20(&local_160,param_1);
  auVar31._8_8_ = extraout_XMM0_Qb;
  iVar10 = *(int *)(local_d0 + 0x330);
  if (iVar10 == 0) {
    piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar15 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar15) {
      lVar21 = 0;
      do {
        pcVar8 = local_140;
        auVar32 = auVar31._4_12_;
        piVar15 = local_138[0] + local_128;
        local_e8 = *local_138[0];
        piVar1 = local_120 + local_110;
        iStack_e4 = *local_120;
        piVar2 = local_108 + local_f8;
        local_e0 = *local_108;
        piVar6 = local_150 + local_148;
        *local_150 = 0;
        local_150 = piVar6;
        local_138[0] = piVar15;
        local_120 = piVar1;
        local_108 = piVar2;
        if (local_e0 == -1) {
          if (*local_140 == '\0') {
            lVar26 = *(longlong *)(local_140 + 0x80) + 0x88;
          }
          else {
            lVar26 = *(longlong *)(local_140 + 0x58);
          }
          uVar17 = *(int *)(lVar26 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar26 + 4) = uVar17;
          fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          if (*local_140 == '\x01') {
            lVar26 = *(longlong *)(local_140 + 0x58);
          }
          else {
            lVar26 = *(longlong *)(local_140 + 0x80) + 0x88;
          }
          uVar17 = *(int *)(lVar26 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar26 + 4) = uVar17;
          fVar29 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          auVar32 = (undefined1  [12])0x0;
        }
        else {
          if (*local_140 == '\0') {
            plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
          }
          else {
            plVar13 = *(longlong **)(local_140 + 0x60);
            if (*plVar13 == 0) {
              uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
              auVar30._8_8_ = extraout_XMM0_Qb_00;
              auVar30._0_8_ = extraout_XMM0_Qa;
              auVar32 = auVar30._4_12_;
              **(undefined8 **)(pcVar8 + 0x60) = uVar12;
              plVar13 = *(longlong **)(pcVar8 + 0x60);
            }
          }
          uVar17 = *(uint *)(*plVar13 + lVar21 * 4);
          *(uint *)(*plVar13 + lVar21 * 4) = uVar17 + 1;
          iVar18 = (local_e0 << 0x10 | uVar17) * 0x19660d;
          iVar10 = iVar18 + 0x3c6ef35f;
          iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar10 + local_e8 * 0x19660d;
          iVar25 = iVar24 + 0x3c6ef35f;
          iVar22 = iStack_e4 * 0x19660d + iVar10 * iVar25 + 0x3c6ef35f;
          iVar10 = iVar18 + iVar25 * iVar22 + 0x3c6ef35f;
          uVar17 = iVar10 * iVar22 + iVar24 + 0x3c6ef35f;
          fVar29 = (float)(uVar17 >> 8) * 5.9604645e-08;
          fVar28 = (float)(iVar10 * uVar17 + iVar22 >> 8) * 5.9604645e-08;
        }
        if (fVar29 < 0.0) {
          auVar31._0_4_ = sqrtf(fVar29);
          auVar31._4_4_ = extraout_XMM0_Db;
          auVar31._8_8_ = extraout_XMM0_Qb_01;
        }
        else {
          auVar31._0_4_ = SQRT(fVar29);
          auVar31._4_12_ = auVar32;
        }
        fVar29 = auVar31._0_4_;
        pfVar3 = local_180 + local_178;
        *local_180 = 1.0 - fVar29;
        pfVar4 = local_170 + local_168;
        *local_170 = (1.0 - fVar28) * fVar29;
        pfVar5 = local_160 + local_158;
        *local_160 = fVar28 * fVar29;
        lVar21 = lVar21 + 1;
        piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar15 = (int *)(param_1 + 0x3c);
        }
        local_180 = pfVar3;
        local_170 = pfVar4;
        local_160 = pfVar5;
      } while (lVar21 < *piVar15);
    }
  }
  else {
    lVar21 = (longlong)*(int *)(local_d0 + 0x32c) * 0x10 + *(longlong *)(local_d0 + 0x350);
    if ((local_c8 == (undefined8 *)0x0) || ((*(byte *)(local_d0 + 0x328) & 0x20) == 0)) {
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar15) {
        lVar26 = 0;
        do {
          pcVar8 = local_140;
          piVar15 = local_138[0] + local_128;
          local_e8 = *local_138[0];
          piVar1 = local_120 + local_110;
          iStack_e4 = *local_120;
          piVar2 = local_108 + local_f8;
          local_e0 = *local_108;
          local_138[0] = piVar15;
          local_120 = piVar1;
          local_108 = piVar2;
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar18 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar25 = iVar18 + 0x3c6ef35f;
            iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
            iVar22 = iVar24 + 0x3c6ef35f;
            iVar25 = iStack_e4 * 0x19660d + iVar25 * iVar22 + 0x3c6ef35f;
            fVar28 = (float)((iVar18 + iVar22 * iVar25 + 0x3c6ef35f) * iVar25 + iVar24 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar8 = local_140;
          lVar27 = (longlong)(int)(fVar28 * (float)iVar10) * 0x10;
          iVar25 = *(int *)(lVar21 + lVar27);
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar14 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar14 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar14 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar14 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar24 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar18 = iVar24 + 0x3c6ef35f;
            iVar23 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar18 + local_e8 * 0x19660d;
            iVar22 = iVar23 + 0x3c6ef35f;
            iVar18 = iStack_e4 * 0x19660d + iVar18 * iVar22 + 0x3c6ef35f;
            fVar28 = (float)((iVar24 + iVar22 * iVar18 + 0x3c6ef35f) * iVar18 + iVar23 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar8 = local_140;
          piVar15 = local_150 + local_148;
          *local_150 = iVar25 + (int)((float)*(uint *)(lVar21 + 4 + lVar27) * fVar28);
          local_150 = piVar15;
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
            if (*local_140 == '\x01') {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar29 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar22 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar25 = iVar22 + 0x3c6ef35f;
            iVar23 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
            iVar18 = iVar23 + 0x3c6ef35f;
            iVar24 = iStack_e4 * 0x19660d + iVar25 * iVar18 + 0x3c6ef35f;
            iVar25 = iVar22 + iVar18 * iVar24 + 0x3c6ef35f;
            uVar17 = iVar25 * iVar24 + iVar23 + 0x3c6ef35f;
            fVar29 = (float)(uVar17 >> 8) * 5.9604645e-08;
            fVar28 = (float)(iVar25 * uVar17 + iVar24 >> 8) * 5.9604645e-08;
          }
          if (fVar29 < 0.0) {
            fVar29 = sqrtf(fVar29);
          }
          else {
            fVar29 = SQRT(fVar29);
          }
          pfVar3 = local_180 + local_178;
          *local_180 = 1.0 - fVar29;
          pfVar4 = local_170 + local_168;
          *local_170 = (1.0 - fVar28) * fVar29;
          pfVar5 = local_160 + local_158;
          *local_160 = fVar28 * fVar29;
          lVar26 = lVar26 + 1;
          piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar15 = (int *)(param_1 + 0x3c);
          }
          local_180 = pfVar3;
          local_170 = pfVar4;
          local_160 = pfVar5;
        } while (lVar26 < *piVar15);
      }
    }
    else {
      local_188 = (int *)(param_1 + 0x3c);
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = local_188;
      }
      if (0 < *piVar15) {
        local_190 = (longlong)*(int *)(local_d0 + 0x32c) * 4 + *(longlong *)(local_d0 + 0x340);
        lVar26 = 0;
        do {
          pcVar8 = local_140;
          piVar15 = local_138[0] + local_128;
          local_e8 = *local_138[0];
          piVar1 = local_120 + local_110;
          iStack_e4 = *local_120;
          piVar2 = local_108 + local_f8;
          local_e0 = *local_108;
          local_138[0] = piVar15;
          local_120 = piVar1;
          local_108 = piVar2;
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar18 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar25 = iVar18 + 0x3c6ef35f;
            iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
            iVar22 = iVar24 + 0x3c6ef35f;
            iVar25 = iStack_e4 * 0x19660d + iVar25 * iVar22 + 0x3c6ef35f;
            fVar28 = (float)((iVar18 + iVar22 * iVar25 + 0x3c6ef35f) * iVar25 + iVar24 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar8 = local_140;
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar29 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar25 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar18 = iVar25 + 0x3c6ef35f;
            iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar18 + local_e8 * 0x19660d;
            iVar22 = iVar24 + 0x3c6ef35f;
            iVar18 = iStack_e4 * 0x19660d + iVar18 * iVar22 + 0x3c6ef35f;
            fVar29 = (float)((iVar25 + iVar22 * iVar18 + 0x3c6ef35f) * iVar18 + iVar24 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar8 = local_140;
          lVar27 = (longlong)(int)(fVar28 * (float)iVar10);
          if (*(float *)(lVar21 + 8 + lVar27 * 0x10) <= fVar29) {
            lVar27 = (longlong)*(int *)(lVar27 * 0x10 + lVar21 + 0xc);
          }
          iVar25 = *(int *)(local_190 + lVar27 * 4);
          lVar14 = (longlong)iVar25;
          iVar18 = 0;
          if ((-1 < lVar14) && (iVar18 = 0, iVar25 < *(int *)(local_c8 + 0x4c))) {
            uVar20 = local_c8[0x4b];
            if ((uVar20 & 1) == 0) {
              iVar25 = *(int *)(uVar20 + 0x10 + lVar14 * 0x40);
            }
            else {
              uVar20 = (longlong)local_c8 + ((longlong)uVar20 >> 0x18) + 600;
              iVar25 = *(int *)(lVar14 * 0x40 + 0x10 + uVar20);
            }
            if (iVar25 != 0) {
              if (local_e0 == -1) {
                if (*local_140 == '\0') {
                  lVar16 = *(longlong *)(local_140 + 0x80) + 0x88;
                }
                else {
                  lVar16 = *(longlong *)(local_140 + 0x58);
                }
                uVar17 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar16 + 4) = uVar17;
                fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
              }
              else {
                if (*local_140 == '\0') {
                  plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
                }
                else {
                  plVar13 = *(longlong **)(local_140 + 0x60);
                  if (*plVar13 == 0) {
                    uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                    **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                    plVar13 = *(longlong **)(pcVar8 + 0x60);
                  }
                }
                uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
                *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
                iVar18 = (local_e0 << 0x10 | uVar17) * 0x19660d;
                iVar25 = iVar18 + 0x3c6ef35f;
                iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
                iVar22 = iVar24 + 0x3c6ef35f;
                iVar25 = iStack_e4 * 0x19660d + iVar25 * iVar22 + 0x3c6ef35f;
                fVar28 = (float)((iVar18 + iVar22 * iVar25 + 0x3c6ef35f) * iVar25 + iVar24 +
                                 0x3c6ef35fU >> 8) * 5.9604645e-08;
              }
              pcVar8 = local_140;
              if (local_e0 == -1) {
                if (*local_140 == '\0') {
                  lVar16 = *(longlong *)(local_140 + 0x80) + 0x88;
                }
                else {
                  lVar16 = *(longlong *)(local_140 + 0x58);
                }
                uVar17 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar16 + 4) = uVar17;
                fVar29 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
              }
              else {
                if (*local_140 == '\0') {
                  plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
                }
                else {
                  plVar13 = *(longlong **)(local_140 + 0x60);
                  if (*plVar13 == 0) {
                    uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                    **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                    plVar13 = *(longlong **)(pcVar8 + 0x60);
                  }
                }
                uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
                *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
                iVar22 = (local_e0 << 0x10 | uVar17) * 0x19660d;
                iVar25 = iVar22 + 0x3c6ef35f;
                iVar24 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
                iVar18 = iVar24 + 0x3c6ef35f;
                iVar25 = iStack_e4 * 0x19660d + iVar25 * iVar18 + 0x3c6ef35f;
                fVar29 = (float)((iVar22 + iVar18 * iVar25 + 0x3c6ef35f) * iVar25 + iVar24 +
                                 0x3c6ef35fU >> 8) * 5.9604645e-08;
              }
              lVar14 = uVar20 + lVar14 * 0x40;
              iVar25 = (int)((float)*(int *)(lVar14 + 0x10) * fVar29);
              uVar20 = *(ulonglong *)(lVar14 + 8);
              uVar19 = lVar14 + 8 + ((longlong)uVar20 >> 0x18);
              if ((uVar20 & 1) == 0) {
                uVar19 = uVar20;
              }
              if (*(float *)(uVar19 + (longlong)iVar25 * 4) <= fVar28) {
                uVar20 = *(ulonglong *)(lVar14 + 0x18);
                uVar19 = lVar14 + 0x18 + ((longlong)uVar20 >> 0x18);
                if ((uVar20 & 1) == 0) {
                  uVar19 = uVar20;
                }
                iVar25 = *(int *)(uVar19 + (longlong)iVar25 * 4);
              }
              iVar18 = iVar25 + *(int *)(lVar21 + lVar27 * 0x10);
            }
          }
          pcVar8 = local_140;
          piVar15 = local_150 + local_148;
          *local_150 = iVar18;
          local_150 = piVar15;
          if (local_e0 == -1) {
            if (*local_140 == '\0') {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
            if (*local_140 == '\x01') {
              lVar27 = *(longlong *)(local_140 + 0x58);
            }
            else {
              lVar27 = *(longlong *)(local_140 + 0x80) + 0x88;
            }
            uVar17 = *(int *)(lVar27 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar27 + 4) = uVar17;
            fVar29 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_140 == '\0') {
              plVar13 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
            }
            else {
              plVar13 = *(longlong **)(local_140 + 0x60);
              if (*plVar13 == 0) {
                uVar12 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar8 + 0x60) = uVar12;
                plVar13 = *(longlong **)(pcVar8 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar13 + lVar26 * 4);
            *(uint *)(*plVar13 + lVar26 * 4) = uVar17 + 1;
            iVar22 = (local_e0 << 0x10 | uVar17) * 0x19660d;
            iVar25 = iVar22 + 0x3c6ef35f;
            iVar23 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_e8 * 0x19660d;
            iVar18 = iVar23 + 0x3c6ef35f;
            iVar24 = iStack_e4 * 0x19660d + iVar25 * iVar18 + 0x3c6ef35f;
            iVar25 = iVar22 + iVar18 * iVar24 + 0x3c6ef35f;
            uVar17 = iVar25 * iVar24 + iVar23 + 0x3c6ef35f;
            fVar29 = (float)(uVar17 >> 8) * 5.9604645e-08;
            fVar28 = (float)(iVar25 * uVar17 + iVar24 >> 8) * 5.9604645e-08;
          }
          if (fVar29 < 0.0) {
            fVar29 = sqrtf(fVar29);
          }
          else {
            fVar29 = SQRT(fVar29);
          }
          pfVar3 = local_180 + local_178;
          *local_180 = 1.0 - fVar29;
          pfVar4 = local_170 + local_168;
          *local_170 = (1.0 - fVar28) * fVar29;
          pfVar5 = local_160 + local_158;
          *local_160 = fVar28 * fVar29;
          lVar26 = lVar26 + 1;
          piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar15 = local_188;
          }
          local_180 = pfVar3;
          local_170 = pfVar4;
          local_160 = pfVar5;
        } while (lVar26 < *piVar15);
      }
    }
  }
  if (local_c8 != (undefined8 *)0x0) {
    LOCK();
    piVar15 = (int *)(local_c8 + 1);
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (*piVar15 == 0) {
      (**(code **)*local_c8)(local_c8,1);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480a9d8e FUN_1480a9d8e body=286 status=ok
// SIG undefined FUN_1480a9d8e(void)

void FUN_1480a9d8e(char *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar3 = local_30;
  puVar2 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar7 = (int *)(local_30 + 1);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        puVar2 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar2)(puVar3,1);
        puVar2 = local_30;
      }
    }
  }
  local_30 = puVar2;
  FUN_144a76cd4(&local_50,param_1);
  if (local_30 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_38 + 0x338);
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      puVar1 = local_50 + local_48;
      *local_50 = uVar4;
      iVar6 = iVar6 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar1;
    } while (iVar6 < *piVar7);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(local_30 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480a9eae FUN_1480a9eae body=543 status=ok
// SIG undefined FUN_1480a9eae(void)

void FUN_1480a9eae(char *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_a8 [32];
  int *local_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  undefined8 *local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1405c93a6(local_60,param_1);
  local_50 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)FUN_1405c943a(local_58,local_48);
  puVar2 = local_50;
  puVar1 = local_50;
  if (local_50 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
    }
    puVar1 = puVar4;
    if (local_50 != (undefined8 *)0x0) {
      LOCK();
      piVar6 = (int *)(local_50 + 1);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        puVar1 = (undefined8 *)*local_50;
        local_50 = puVar4;
        (*(code *)*puVar1)(puVar2,1);
        puVar1 = local_50;
      }
    }
  }
  local_50 = puVar1;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_144a98d08(&local_78,param_1);
  FUN_144a76cd4(&local_88,param_1);
  if ((local_50 == (undefined8 *)0x0) || (*(int *)(local_58 + 0x338) < 2)) {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar6) {
      iVar5 = 0;
      do {
        piVar6 = local_88 + local_80;
        *local_88 = 0;
        iVar5 = iVar5 + 1;
        piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar7 = (int *)(param_1 + 0x3c);
        }
        local_88 = piVar6;
      } while (iVar5 < *piVar7);
    }
  }
  else {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar6) {
      iVar3 = *(int *)(local_58 + 0x338) + -1;
      iVar5 = *(int *)(local_58 + 0x330);
      lVar12 = *(longlong *)(local_58 + 0x350) + (longlong)*(int *)(local_58 + 0x32c) * 0x10;
      iVar13 = 0;
      do {
        piVar6 = local_78 + local_68;
        iVar10 = *local_78;
        if (iVar3 <= *local_78) {
          iVar10 = iVar3;
        }
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        iVar9 = 0;
        if (iVar5 != 0) {
          lVar8 = 0;
          iVar9 = 0;
          do {
            iVar14 = *(int *)(lVar12 + 4 + lVar8) + iVar9;
            if ((iVar9 <= iVar10) && (iVar10 < iVar14)) {
              iVar9 = (iVar10 - iVar9) + *(int *)(lVar12 + lVar8);
              goto LAB_1480aa00d;
            }
            lVar8 = lVar8 + 0x10;
            iVar9 = iVar14;
          } while ((longlong)iVar5 << 4 != lVar8);
          iVar9 = 0;
        }
LAB_1480aa00d:
        piVar7 = local_88 + local_80;
        *local_88 = iVar9;
        iVar13 = iVar13 + 1;
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = (int *)(param_1 + 0x3c);
        }
        local_88 = piVar7;
        local_78 = piVar6;
      } while (iVar13 < *piVar11);
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar6 = (int *)(local_50 + 1);
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      (**(code **)*local_50)(local_50,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480aa0ce FUN_1480aa0ce body=1413 status=ok
// SIG undefined FUN_1480aa0ce(void)

void FUN_1480aa0ce(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  char cVar23;
  undefined8 *puVar24;
  int iVar25;
  longlong lVar26;
  int *piVar27;
  uint uVar28;
  undefined8 **ppuVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  ulonglong uVar34;
  int *piVar35;
  longlong *plVar36;
  uint uVar37;
  ulonglong uVar38;
  undefined1 auStack_198 [40];
  longlong local_170;
  undefined4 local_168;
  char local_164;
  float *local_160;
  int local_158;
  float *local_150;
  int local_148;
  float *local_140;
  int local_138;
  float *local_130;
  int local_128;
  float *local_120 [2];
  int local_110;
  float *local_108;
  int local_f8;
  float *local_f0;
  int local_e0;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined1 local_b8 [8];
  int local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 *local_90 [2];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1405c93a6(local_a8,param_1);
  local_98 = (undefined8 *)0x0;
  ppuVar29 = local_90;
  puVar24 = (undefined8 *)FUN_1405c943a(local_a0,ppuVar29);
  puVar22 = local_98;
  puVar20 = local_98;
  if (local_98 != puVar24) {
    if (puVar24 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
      UNLOCK();
    }
    puVar20 = puVar24;
    if (local_98 != (undefined8 *)0x0) {
      LOCK();
      piVar27 = (int *)(local_98 + 1);
      *piVar27 = *piVar27 + -1;
      UNLOCK();
      if (*piVar27 == 0) {
        puVar20 = (undefined8 *)*local_98;
        local_98 = puVar24;
        (*(code *)*puVar20)(puVar22,1);
        puVar20 = local_98;
      }
    }
  }
  local_98 = puVar20;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  FUN_144a98d08(&local_d8,param_1);
  FUN_1448a432c(local_120,param_1);
  FUN_144a76c20(&local_160,param_1);
  FUN_144a76c20(&local_150,param_1);
  FUN_144a76c20(&local_140,param_1);
  FUN_144a76c20(&local_130,param_1);
  if (local_98 == (undefined8 *)0x0) {
    local_170 = 0;
    local_168 = 0;
    local_164 = '\0';
  }
  else {
    FUN_1461c3a4c(local_98 + 0x33,&local_170);
    if ((local_98 != (undefined8 *)0x0) && (FUN_1461c3a4c(local_98 + 0x33,local_b8), 2 < local_b0))
    {
      if (local_90[0] == (undefined8 *)0x0) {
        if (((local_98 != (undefined8 *)0x0) && (local_98[0x30] != 0)) &&
           (cVar23 = FUN_147cc7ccc(local_98 + 0x2b), cVar23 != '\0')) {
          ppuVar29 = &local_98;
          lVar26 = 0x18c;
          goto LAB_1480aa246;
        }
      }
      else {
        cVar23 = FUN_147cc7ccc();
        lVar26 = 0x34;
        if (cVar23 != '\0') {
LAB_1480aa246:
          if (0 < *(int *)((longlong)*ppuVar29 + lVar26)) {
            piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar27 = (int *)(param_1 + 0x3c);
            }
            if (0 < *piVar27) {
              iVar25 = local_b0 / 3 + -1;
              iVar31 = 0;
              do {
                piVar27 = local_d8 + local_c8;
                iVar32 = *local_d8;
                if (iVar25 <= *local_d8) {
                  iVar32 = iVar25;
                }
                if (iVar32 < 1) {
                  iVar32 = 0;
                }
                pfVar1 = local_f0 + local_e0;
                fVar8 = *local_f0;
                pfVar2 = local_108 + local_f8;
                fVar9 = *local_108;
                pfVar3 = local_120[0] + local_110;
                uVar21 = iVar32 * 3;
                uVar30 = (ulonglong)(iVar32 * 3 + 2);
                if (local_164 == '\x01') {
                  uVar33 = *(uint *)(local_170 + uVar30 * 4);
                  uVar37 = *(uint *)(local_170 + (ulonglong)uVar21 * 4);
                  uVar28 = *(uint *)(local_170 + 4 + (ulonglong)uVar21 * 4);
                }
                else {
                  uVar33 = (uint)*(ushort *)(local_170 + uVar30 * 2);
                  uVar28 = (uint)*(ushort *)(local_170 + 2 + (ulonglong)uVar21 * 2);
                  uVar37 = (uint)*(ushort *)(local_170 + (ulonglong)uVar21 * 2);
                }
                plVar36 = local_98 + 0x30;
                piVar35 = (int *)(local_98 + 0x31);
                if (local_90[0] != (undefined8 *)0x0) {
                  plVar36 = local_90[0] + 5;
                  piVar35 = (int *)(local_90[0] + 6);
                }
                fVar10 = *local_120[0];
                lVar26 = *plVar36;
                iVar32 = *piVar35;
                uVar38 = (ulonglong)(uVar37 * iVar32);
                bVar17 = *(byte *)(lVar26 + 3 + uVar38);
                fVar11 = (float)(&DAT_14c758c60)[*(byte *)(lVar26 + uVar38)];
                fVar12 = (float)(&DAT_14c758c60)[*(byte *)(lVar26 + 1 + uVar38)];
                uVar30 = (ulonglong)(uVar28 * iVar32);
                bVar18 = *(byte *)(lVar26 + 3 + uVar30);
                fVar13 = (float)(&DAT_14c758c60)[*(byte *)(lVar26 + uVar30)];
                fVar14 = (float)(&DAT_14c758c60)[*(byte *)(lVar26 + 1 + uVar30)];
                uVar34 = (ulonglong)(uVar33 * iVar32);
                bVar19 = *(byte *)(lVar26 + 3 + uVar34);
                fVar15 = (float)(&DAT_14c758c60)[*(byte *)(lVar26 + uVar34)];
                fVar16 = (float)(&DAT_14c758c60)[*(byte *)(lVar26 + 1 + uVar34)];
                pfVar4 = local_160 + local_158;
                *local_160 = fVar8 * (float)(&DAT_14c758c60)[*(byte *)(lVar26 + 2 + uVar34)] +
                             fVar9 * (float)(&DAT_14c758c60)[*(byte *)(lVar26 + 2 + uVar30)] +
                             fVar10 * (float)(&DAT_14c758c60)[*(byte *)(lVar26 + 2 + uVar38)];
                pfVar5 = local_150 + local_148;
                *local_150 = fVar16 * fVar8 + fVar14 * fVar9 + fVar12 * fVar10;
                pfVar6 = local_140 + local_138;
                *local_140 = fVar15 * fVar8 + fVar13 * fVar9 + fVar11 * fVar10;
                pfVar7 = local_130 + local_128;
                *local_130 = (float)bVar19 * 0.003921569 * fVar8 +
                             (float)bVar18 * 0.003921569 * fVar9 +
                             (float)bVar17 * 0.003921569 * fVar10;
                iVar31 = iVar31 + 1;
                piVar35 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
                if (*param_1 != '\0') {
                  piVar35 = (int *)(param_1 + 0x3c);
                }
                local_160 = pfVar4;
                local_150 = pfVar5;
                local_140 = pfVar6;
                local_130 = pfVar7;
                local_120[0] = pfVar3;
                local_108 = pfVar2;
                local_f0 = pfVar1;
                local_d8 = piVar27;
              } while (iVar31 < *piVar35);
            }
            goto LAB_1480aa5ab;
          }
        }
      }
    }
  }
  piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar27 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar27) {
    iVar25 = 0;
    do {
      pfVar1 = local_160 + local_158;
      *local_160 = 1.0;
      pfVar2 = local_150 + local_148;
      *local_150 = 1.0;
      pfVar3 = local_140 + local_138;
      *local_140 = 1.0;
      pfVar4 = local_130 + local_128;
      *local_130 = 1.0;
      iVar25 = iVar25 + 1;
      piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar27 = (int *)(param_1 + 0x3c);
      }
      local_160 = pfVar1;
      local_150 = pfVar2;
      local_140 = pfVar3;
      local_130 = pfVar4;
    } while (iVar25 < *piVar27);
  }
LAB_1480aa5ab:
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    piVar27 = (int *)(local_98 + 1);
    *piVar27 = *piVar27 + -1;
    UNLOCK();
    if (*piVar27 == 0) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480aa654 FUN_1480aa654 body=1830 status=ok
// SIG undefined FUN_1480aa654(void)

void FUN_1480aa654(char *param_1)

{
  int *piVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  int *piVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  float fVar29;
  uint uVar30;
  float fVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  ulonglong uVar35;
  uint uVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_1b8 [40];
  uint local_190;
  uint local_18c;
  int *local_188;
  ulonglong local_180;
  longlong local_178;
  undefined4 local_170;
  char local_16c;
  float *local_168;
  int local_160;
  float *local_158;
  int local_150;
  uint *local_148;
  undefined8 uStack_140;
  int local_138;
  float *local_130 [2];
  int local_120;
  float *local_118;
  int local_108;
  float *local_100;
  int local_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined1 local_c8 [8];
  int local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [16];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1405c93a6(local_b8,param_1);
  local_a8 = (undefined8 *)0x0;
  puVar22 = (undefined8 *)FUN_1405c943a(local_b0,local_a0);
  puVar20 = local_a8;
  puVar18 = local_a8;
  if (local_a8 != puVar22) {
    if (puVar22 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
      UNLOCK();
    }
    puVar18 = puVar22;
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        puVar18 = (undefined8 *)*local_a8;
        local_a8 = puVar22;
        (*(code *)*puVar18)(puVar20,1);
        puVar18 = local_a8;
      }
    }
  }
  local_a8 = puVar18;
  iVar38 = 0;
  local_d8 = 0;
  local_e8 = (uint *)0x0;
  uStack_e0 = 0;
  FUN_144a98d08(&local_e8,param_1);
  FUN_1448a432c(local_130,param_1);
  local_138 = 0;
  local_148 = (uint *)0x0;
  uStack_140 = 0;
  FUN_144a98d08(&local_148,param_1);
  FUN_144a76c20(&local_168,param_1);
  FUN_144a76c20(&local_158,param_1);
  if (local_a8 == (undefined8 *)0x0) {
    local_178 = 0;
    local_170 = 0;
    local_16c = '\0';
    iVar38 = 0;
  }
  else {
    FUN_1461c3a4c(local_a8 + 0x33,&local_178);
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1461c3a4c(local_a8 + 0x33,local_c8);
      iVar38 = local_c0 / 3;
    }
  }
  iVar21 = FUN_1480a710e(local_b8);
  uVar32 = iVar21 - 1;
  piVar1 = (int *)(param_1 + 0x3c);
  piVar25 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar25 = piVar1;
  }
  if (iVar38 < 1 || (int)uVar32 < 0) {
    if (0 < *piVar25) {
      iVar38 = 0;
      do {
        uVar19 = DAT_14c84635c;
        pfVar3 = local_168 + local_160;
        *local_168 = (float)DAT_14c84635c;
        pfVar4 = local_158 + local_150;
        *local_158 = (float)((ulonglong)uVar19 >> 0x20);
        iVar38 = iVar38 + 1;
        piVar25 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar25 = piVar1;
        }
        local_168 = pfVar3;
        local_158 = pfVar4;
      } while (iVar38 < *piVar25);
    }
  }
  else if (0 < *piVar25) {
    uVar30 = iVar38 - 1;
    local_180 = (ulonglong)uVar30;
    iVar38 = 0;
    do {
      puVar2 = local_e8 + local_d8;
      uVar28 = *local_e8;
      if ((int)uVar30 <= (int)*local_e8) {
        uVar28 = uVar30;
      }
      if ((int)uVar28 < 1) {
        uVar28 = 0;
      }
      pfVar3 = local_100 + local_f0;
      fVar9 = *local_100;
      pfVar4 = local_118 + local_108;
      fVar10 = *local_118;
      pfVar5 = local_130[0] + local_120;
      fVar11 = *local_130[0];
      puVar6 = local_148 + local_138;
      uVar33 = *local_148;
      if ((int)uVar32 <= (int)*local_148) {
        uVar33 = uVar32;
      }
      if ((int)uVar33 < 1) {
        uVar33 = 0;
      }
      uVar27 = (ulonglong)(uVar28 * 3 + 2);
      uVar35 = (ulonglong)(uVar28 * 3);
      if (local_16c == '\x01') {
        uVar28 = *(uint *)(local_178 + uVar27 * 4);
        uVar36 = *(uint *)(local_178 + uVar35 * 4);
        uVar26 = *(uint *)(local_178 + 4 + uVar35 * 4);
      }
      else {
        uVar28 = (uint)*(ushort *)(local_178 + uVar27 * 2);
        uVar26 = (uint)*(ushort *)(local_178 + 2 + uVar35 * 2);
        uVar36 = (uint)*(ushort *)(local_178 + uVar35 * 2);
      }
      uVar27 = (ulonglong)*(uint *)(local_a8 + 0x21);
      lVar24 = local_a8[0x1f];
      uVar35 = (ulonglong)uVar33;
      if (*(char *)(local_a8 + 0x22) == '\0') {
        lVar23 = uVar36 * uVar27 * 4 + lVar24;
        uVar12 = *(ushort *)(lVar23 + 2 + uVar35 * 4);
        local_18c = (uint)uVar12;
        uVar33 = (uint)uVar12 << 0xd;
        if ((uVar33 & 0xf800000) == 0xf800000) {
          fVar39 = (float)(uVar33 | 0x70000000);
        }
        else if ((uVar33 & 0xf800000) == 0) {
          fVar39 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar39 = (float)((uVar33 & 0xfffe000) + 0x38000000);
        }
        uVar13 = *(ushort *)(lVar23 + uVar35 * 4);
        uVar33 = (uint)uVar13 << 0xd;
        if ((uVar33 & 0xf800000) == 0xf800000) {
          fVar34 = (float)(uVar33 | 0x70000000);
        }
        else if ((uVar33 & 0xf800000) == 0) {
          fVar34 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar34 = (float)((uVar33 & 0xfffe000) + 0x38000000);
        }
        lVar23 = uVar26 * uVar27 * 4 + lVar24;
        uVar14 = *(ushort *)(lVar23 + 2 + uVar35 * 4);
        uVar33 = (uint)uVar14 << 0xd;
        if ((uVar33 & 0xf800000) == 0xf800000) {
          fVar37 = (float)(uVar33 | 0x70000000);
        }
        else if ((uVar33 & 0xf800000) == 0) {
          fVar37 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar37 = (float)((uVar33 & 0xfffe000) + 0x38000000);
        }
        uVar15 = *(ushort *)(lVar23 + uVar35 * 4);
        uVar33 = (uint)uVar15 << 0xd;
        if ((uVar33 & 0xf800000) == 0xf800000) {
          fVar31 = (float)(uVar33 | 0x70000000);
        }
        else if ((uVar33 & 0xf800000) == 0) {
          fVar31 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar31 = (float)((uVar33 & 0xfffe000) + 0x38000000);
        }
        lVar24 = lVar24 + uVar28 * uVar27 * 4;
        uVar16 = *(ushort *)(lVar24 + 2 + uVar35 * 4);
        uVar28 = (uint)uVar16 << 0xd;
        if ((uVar28 & 0xf800000) == 0xf800000) {
          fVar29 = (float)(uVar28 | 0x70000000);
        }
        else if ((uVar28 & 0xf800000) == 0) {
          fVar29 = (float)(uVar28 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar29 = (float)((uVar28 & 0xfffe000) + 0x38000000);
        }
        uVar17 = *(ushort *)(lVar24 + uVar35 * 4);
        uVar28 = (uint)uVar17 << 0xd;
        if ((uVar28 & 0xf800000) == 0xf800000) {
          fVar40 = (float)(uVar28 | 0x70000000);
        }
        else if ((uVar28 & 0xf800000) == 0) {
          fVar40 = (float)(uVar28 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar40 = (float)((uVar28 & 0xfffe000) + 0x38000000);
        }
        fVar39 = (float)((uint)fVar39 | (int)(short)uVar12 & 0x80000000U);
        fVar34 = (float)((uint)fVar34 | (int)(short)uVar13 & 0x80000000U);
        fVar37 = (float)((uint)fVar37 | (int)(short)uVar14 & 0x80000000U);
        fVar31 = (float)((uint)fVar31 | (int)(short)uVar15 & 0x80000000U);
        fVar29 = (float)((uint)fVar29 | (int)(short)uVar16 & 0x80000000U);
        fVar40 = (float)((int)(short)uVar17 & 0x80000000U | (uint)fVar40);
      }
      else {
        lVar23 = uVar36 * uVar27 * 8 + lVar24;
        fVar34 = *(float *)(lVar23 + uVar35 * 8);
        fVar39 = *(float *)(lVar23 + 4 + uVar35 * 8);
        lVar23 = uVar26 * uVar27 * 8 + lVar24;
        fVar31 = *(float *)(lVar23 + uVar35 * 8);
        fVar37 = *(float *)(lVar23 + 4 + uVar35 * 8);
        lVar24 = uVar28 * uVar27 * 8 + lVar24;
        fVar40 = *(float *)(lVar24 + uVar35 * 8);
        fVar29 = *(float *)(lVar24 + 4 + uVar35 * 8);
      }
      pfVar7 = local_168 + local_160;
      *local_168 = fVar40 * fVar9 + fVar31 * fVar10 + fVar34 * fVar11;
      pfVar8 = local_158 + local_150;
      *local_158 = fVar29 * fVar9 + fVar37 * fVar10 + fVar39 * fVar11;
      iVar38 = iVar38 + 1;
      piVar25 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar25 = piVar1;
      }
      local_190 = uVar32;
      local_188 = piVar1;
      local_168 = pfVar7;
      local_158 = pfVar8;
      local_148 = puVar6;
      local_130[0] = pfVar5;
      local_118 = pfVar4;
      local_100 = pfVar3;
      local_e8 = puVar2;
    } while (iVar38 < *piVar25);
  }
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480aad7c FUN_1480aad7c body=750 status=ok
// SIG undefined FUN_1480aad7c(void)

void FUN_1480aad7c(char *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  char local_9c;
  uint *local_98;
  int local_90;
  uint *local_88;
  int local_80;
  uint *local_78;
  int local_70;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  int local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar5 = local_30;
  puVar4 = local_30;
  if (local_30 != puVar6) {
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    puVar4 = puVar6;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar8 = (int *)(local_30 + 1);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        puVar4 = (undefined8 *)*local_30;
        local_30 = puVar6;
        (*(code *)*puVar4)(puVar5,1);
        puVar4 = local_30;
      }
    }
  }
  local_30 = puVar4;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_144a98d08(&local_68,param_1);
  FUN_144a76cd4(&local_78,param_1);
  FUN_144a76cd4(&local_88,param_1);
  FUN_144a76cd4(&local_98);
  if (local_30 == (undefined8 *)0x0) {
    local_a8 = 0;
    local_a0 = 0;
  }
  else {
    FUN_1461c3a4c(local_30 + 0x33);
    if ((local_30 != (undefined8 *)0x0) && (FUN_1461c3a4c(local_30 + 0x33), 2 < local_48)) {
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar8) {
        iVar7 = local_48 / 3 + -1;
        iVar9 = 0;
        do {
          piVar8 = local_68 + local_58;
          iVar10 = *local_68;
          if (iVar7 <= *local_68) {
            iVar10 = iVar7;
          }
          if (iVar10 < 1) {
            iVar10 = 0;
          }
          uVar11 = iVar10 * 3;
          if (local_9c == '\x01') {
            uVar13 = *(uint *)(local_a8 + (ulonglong)uVar11 * 4);
          }
          else {
            uVar13 = (uint)*(ushort *)(local_a8 + (ulonglong)uVar11 * 2);
          }
          puVar1 = local_78 + local_70;
          *local_78 = uVar13;
          if (local_9c == '\x01') {
            uVar13 = *(uint *)(local_a8 + (ulonglong)(uVar11 + 1) * 4);
          }
          else {
            uVar13 = (uint)*(ushort *)(local_a8 + (ulonglong)(uVar11 + 1) * 2);
          }
          puVar2 = local_88 + local_80;
          *local_88 = uVar13;
          if (local_9c == '\x01') {
            uVar11 = *(uint *)(local_a8 + (ulonglong)(uVar11 + 2) * 4);
          }
          else {
            uVar11 = (uint)*(ushort *)(local_a8 + (ulonglong)(uVar11 + 2) * 2);
          }
          puVar3 = local_98 + local_90;
          *local_98 = uVar11;
          iVar9 = iVar9 + 1;
          piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar12 = (int *)(param_1 + 0x3c);
          }
          local_98 = puVar3;
          local_88 = puVar2;
          local_78 = puVar1;
          local_68 = piVar8;
        } while (iVar9 < *piVar12);
      }
      goto LAB_1480ab02a;
    }
  }
  piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar8 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar8) {
    iVar7 = 0;
    do {
      puVar1 = local_78 + local_70;
      *local_78 = 0;
      puVar2 = local_88 + local_80;
      *local_88 = 0;
      puVar3 = local_98 + local_90;
      *local_98 = 0;
      iVar7 = iVar7 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_98 = puVar3;
      local_88 = puVar2;
      local_78 = puVar1;
    } while (iVar7 < *piVar8);
  }
LAB_1480ab02a:
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar8 = (int *)(local_30 + 1);
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (*piVar8 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ab06c FUN_1480ab06c body=163 status=ok
// SIG undefined FUN_1480ab06c(void)

void FUN_1480ab06c(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405c93a6(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x3b8);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ab110 FUN_1480ab110 body=163 status=ok
// SIG undefined FUN_1480ab110(void)

void FUN_1480ab110(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405c93a6(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x3c0);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ab1b4 FUN_1480ab1b4 body=170 status=ok
// SIG undefined FUN_1480ab1b4(void)

void FUN_1480ab1b4(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_58 [40];
  int *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405c93a6(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar1 = *(int *)(local_18 + 0x3b8);
    iVar2 = *(int *)(local_18 + 0x3c0);
    iVar4 = 0;
    do {
      piVar3 = local_30 + local_28;
      *local_30 = iVar1 - iVar2;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_30 = piVar3;
    } while (iVar4 < *piVar5);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ab260 FUN_1480ab260 body=350 status=ok
// SIG undefined FUN_1480ab260(void)

void FUN_1480ab260(char *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar3 = local_30;
  puVar2 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar7 = (int *)(local_30 + 1);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        puVar2 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar2)(puVar3,1);
        puVar2 = local_30;
      }
    }
  }
  local_30 = puVar2;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  FUN_140126e42(&local_68,param_1);
  if (local_30 == (undefined8 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_30 + 7);
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      piVar7 = local_58 + local_48;
      piVar1 = local_68 + local_60;
      *local_68 = -(uint)(*local_58 < iVar4 && -1 < *local_58);
      iVar6 = iVar6 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_68 = piVar1;
      local_58 = piVar7;
    } while (iVar6 < *piVar8);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(local_30 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ab3c0 FUN_1480ab3c0 body=382 status=ok
// SIG undefined FUN_1480ab3c0(void)

void FUN_1480ab3c0(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar10 = local_30;
  puVar3 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar3 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar7 = (int *)(local_30 + 1);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        puVar3 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar3)(puVar10,1);
        puVar3 = local_30;
      }
    }
  }
  local_30 = puVar3;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  FUN_144a76cd4(&local_68,param_1);
  if (local_30 == (undefined8 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_30 + 7);
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      piVar7 = local_58 + local_48;
      iVar2 = *local_58;
      uVar9 = 0;
      if ((-1 < (longlong)iVar2) && (iVar2 < iVar4)) {
        puVar10 = local_30 + 2;
        if ((undefined8 *)local_30[6] != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)local_30[6];
        }
        uVar9 = *(undefined4 *)((longlong)puVar10 + (longlong)iVar2 * 0x1c + 8);
      }
      puVar1 = local_68 + local_60;
      *local_68 = uVar9;
      iVar6 = iVar6 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_68 = puVar1;
      local_58 = piVar7;
    } while (iVar6 < *piVar8);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(local_30 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ab540 FUN_1480ab540 body=595 status=ok
// SIG undefined FUN_1480ab540(void)

void FUN_1480ab540(char *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1405c93a6(local_68,param_1);
  local_58 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)FUN_1405c943a(local_60,local_50);
  puVar11 = local_58;
  puVar2 = local_58;
  if (local_58 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar4;
    if (local_58 != (undefined8 *)0x0) {
      LOCK();
      piVar5 = (int *)(local_58 + 1);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        puVar2 = (undefined8 *)*local_58;
        local_58 = puVar4;
        (*(code *)*puVar2)(puVar11,1);
        puVar2 = local_58;
      }
    }
  }
  local_58 = puVar2;
  uVar7 = 0;
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  FUN_144a76cd4(&local_b8,param_1);
  if ((local_58 == (undefined8 *)0x0) || (uVar7 = *(uint *)(local_58 + 7), -1 < (int)uVar7)) {
    piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar5 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar5) {
      iVar8 = 0;
      do {
        puVar1 = local_88 + local_78;
        piVar5 = local_a8 + local_98;
        iVar10 = 0;
        uVar12 = 0;
        if (*local_88 < uVar7) {
          puVar11 = local_58 + 2;
          if ((undefined8 *)local_58[6] != (undefined8 *)0x0) {
            puVar11 = (undefined8 *)local_58[6];
          }
          lVar3 = (ulonglong)*local_88 * 0x1c;
          iVar10 = *(int *)((longlong)puVar11 + lVar3 + 8) + -1;
          uVar12 = *(uint *)((longlong)puVar11 + lVar3 + 4) / 3;
        }
        if (*local_a8 < iVar10) {
          iVar10 = *local_a8;
        }
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        piVar6 = local_b8 + local_b0;
        *local_b8 = iVar10 + uVar12;
        iVar8 = iVar8 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        local_b8 = piVar6;
        local_a8 = piVar5;
        local_88 = puVar1;
      } while (iVar8 < *piVar9);
    }
  }
  else {
    piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar5 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar5) {
      iVar8 = 0;
      do {
        piVar5 = local_b8 + local_b0;
        *local_b8 = 0;
        iVar8 = iVar8 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = (int *)(param_1 + 0x3c);
        }
        local_b8 = piVar5;
      } while (iVar8 < *piVar6);
    }
  }
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    piVar5 = (int *)(local_58 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)*local_58)(local_58,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ab794 FUN_1480ab794 body=413 status=ok
// SIG undefined FUN_1480ab794(void)

void FUN_1480ab794(char *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  int local_60;
  uint *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar6 = local_30;
  puVar4 = local_30;
  if (local_30 != puVar7) {
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
    puVar4 = puVar7;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_30 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        puVar4 = (undefined8 *)*local_30;
        local_30 = puVar7;
        (*(code *)*puVar4)(puVar6,1);
        puVar4 = local_30;
      }
    }
  }
  local_30 = puVar4;
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  FUN_144a76cd4(&local_68,param_1);
  piVar1 = (int *)(param_1 + 0x3c);
  piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar9 = piVar1;
  }
  if (*(int *)(local_38 + 0x32c) < 1) {
    if (0 < *piVar9) {
      iVar10 = 0;
      do {
        puVar3 = local_68 + local_60;
        *local_68 = 0;
        iVar10 = iVar10 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = piVar1;
        }
        local_68 = puVar3;
      } while (iVar10 < *piVar9);
    }
  }
  else if (0 < *piVar9) {
    lVar5 = *(longlong *)(local_38 + 0x340);
    uVar8 = *(int *)(local_38 + 0x32c) - 1;
    iVar10 = 0;
    do {
      puVar2 = local_58 + local_48;
      uVar11 = *local_58;
      if ((int)uVar8 <= (int)*local_58) {
        uVar11 = uVar8;
      }
      uVar12 = (ulonglong)uVar11;
      if ((int)uVar11 < 1) {
        uVar12 = 0;
      }
      puVar3 = local_68 + local_60;
      *local_68 = *(undefined4 *)(lVar5 + uVar12 * 4);
      iVar10 = iVar10 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = piVar1;
      }
      local_68 = puVar3;
      local_58 = puVar2;
    } while (iVar10 < *piVar9);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ab932 FUN_1480ab932 body=422 status=ok
// SIG undefined FUN_1480ab932(void)

void FUN_1480ab932(char *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  int local_60;
  uint *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar6 = local_30;
  puVar4 = local_30;
  if (local_30 != puVar7) {
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
    puVar4 = puVar7;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_30 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        puVar4 = (undefined8 *)*local_30;
        local_30 = puVar7;
        (*(code *)*puVar4)(puVar6,1);
        puVar4 = local_30;
      }
    }
  }
  local_30 = puVar4;
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  FUN_144a76cd4(&local_68,param_1);
  piVar1 = (int *)(param_1 + 0x3c);
  piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar10 = piVar1;
  }
  if (*(int *)(local_38 + 0x330) < 1) {
    if (0 < *piVar10) {
      iVar9 = 0;
      do {
        puVar3 = local_68 + local_60;
        *local_68 = 0;
        iVar9 = iVar9 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = piVar1;
        }
        local_68 = puVar3;
      } while (iVar9 < *piVar10);
    }
  }
  else if (0 < *piVar10) {
    iVar9 = *(int *)(local_38 + 0x32c);
    lVar5 = *(longlong *)(local_38 + 0x340);
    uVar8 = *(int *)(local_38 + 0x330) - 1;
    iVar11 = 0;
    do {
      puVar2 = local_58 + local_48;
      uVar12 = *local_58;
      if ((int)uVar8 <= (int)*local_58) {
        uVar12 = uVar8;
      }
      uVar13 = (ulonglong)uVar12;
      if ((int)uVar12 < 1) {
        uVar13 = 0;
      }
      puVar3 = local_68 + local_60;
      *local_68 = *(undefined4 *)((longlong)iVar9 * 4 + lVar5 + uVar13 * 4);
      iVar11 = iVar11 + 1;
      piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar10 = piVar1;
      }
      local_68 = puVar3;
      local_58 = puVar2;
    } while (iVar11 < *piVar10);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480abada FUN_1480abada body=278 status=ok
// SIG undefined FUN_1480abada(void)

void FUN_1480abada(char *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar3 = local_30;
  puVar2 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar7 = (int *)(local_30 + 1);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        puVar2 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar2)(puVar3,1);
        puVar2 = local_30;
      }
    }
  }
  local_30 = puVar2;
  FUN_144a76cd4(&local_50,param_1);
  if (local_30 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_30 + 7);
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      puVar1 = local_50 + local_48;
      *local_50 = uVar4;
      iVar6 = iVar6 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar1;
    } while (iVar6 < *piVar7);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(local_30 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480abbf2 FUN_1480abbf2 body=264 status=ok
// SIG undefined FUN_1480abbf2(void)

void FUN_1480abbf2(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar4 = local_30;
  puVar3 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar3 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar6 = (int *)(local_30 + 1);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        puVar3 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar3)(puVar4,1);
        puVar3 = local_30;
      }
    }
  }
  local_30 = puVar3;
  FUN_144a76cd4(&local_50);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    uVar2 = *(undefined4 *)(local_38 + 0x32c);
    iVar7 = 0;
    do {
      puVar1 = local_50 + local_48;
      *local_50 = uVar2;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar1;
    } while (iVar7 < *piVar6);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar6 = (int *)(local_30 + 1);
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480abcfc FUN_1480abcfc body=264 status=ok
// SIG undefined FUN_1480abcfc(void)

void FUN_1480abcfc(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c93a6(local_40,param_1);
  local_30 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_1405c943a(local_38,local_28);
  puVar4 = local_30;
  puVar3 = local_30;
  if (local_30 != puVar5) {
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    puVar3 = puVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar6 = (int *)(local_30 + 1);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        puVar3 = (undefined8 *)*local_30;
        local_30 = puVar5;
        (*(code *)*puVar3)(puVar4,1);
        puVar3 = local_30;
      }
    }
  }
  local_30 = puVar3;
  FUN_144a76cd4(&local_50);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    uVar2 = *(undefined4 *)(local_38 + 0x330);
    iVar7 = 0;
    do {
      puVar1 = local_50 + local_48;
      *local_50 = uVar2;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar1;
    } while (iVar7 < *piVar6);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar6 = (int *)(local_30 + 1);
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480abe06 FUN_1480abe06 body=1855 status=ok
// SIG undefined FUN_1480abe06(void)

void FUN_1480abe06(char *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  float fVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar25 [16];
  undefined1 auStack_158 [40];
  undefined4 *local_130;
  int local_128;
  char *local_120;
  int *local_118 [2];
  int local_108;
  int *local_100;
  int local_f0;
  int *local_e8;
  int local_d8;
  int local_c8;
  int iStack_c4;
  int local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [16];
  ulonglong local_90;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [12];
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1405c93a6(local_b8,param_1);
  local_a8 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)FUN_1405c943a(local_b0,local_a0);
  puVar6 = local_a8;
  puVar4 = local_a8;
  if (local_a8 != puVar8) {
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
    puVar4 = puVar8;
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar13 = (int *)(local_a8 + 1);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        puVar4 = (undefined8 *)*local_a8;
        local_a8 = puVar8;
        (*(code *)*puVar4)(puVar6,1);
        puVar4 = local_a8;
      }
    }
  }
  local_a8 = puVar4;
  local_120 = param_1;
  FUN_1416b93de(local_118,param_1);
  local_c8 = 0;
  iStack_c4 = 0;
  local_c0 = 0;
  auVar25._0_8_ = FUN_144a76cd4(&local_130,param_1);
  auVar25._8_8_ = extraout_XMM0_Qb;
  iVar16 = *(int *)(local_b0 + 0x330);
  if (iVar16 < 1) {
    piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar13 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar13) {
      iVar16 = 0;
      do {
        piVar13 = local_118[0] + local_108;
        local_c8 = *local_118[0];
        piVar1 = local_100 + local_f0;
        iStack_c4 = *local_100;
        piVar2 = local_e8 + local_d8;
        local_c0 = *local_e8;
        puVar3 = local_130 + local_128;
        *local_130 = 0;
        iVar16 = iVar16 + 1;
        piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar18 = (int *)(param_1 + 0x3c);
        }
        local_130 = puVar3;
        local_118[0] = piVar13;
        local_100 = piVar1;
        local_e8 = piVar2;
      } while (iVar16 < *piVar18);
    }
  }
  else {
    lVar19 = (longlong)*(int *)(local_b0 + 0x32c) * 4 + *(longlong *)(local_b0 + 0x340);
    if ((local_a8 == (undefined8 *)0x0) || ((*(byte *)(local_b0 + 0x328) & 0x20) == 0)) {
      piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar13 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar13) {
        lVar21 = 0;
        do {
          pcVar5 = local_120;
          piVar13 = local_118[0] + local_108;
          local_c8 = *local_118[0];
          piVar1 = local_100 + local_f0;
          iStack_c4 = *local_100;
          piVar2 = local_e8 + local_d8;
          local_c0 = *local_e8;
          local_118[0] = piVar13;
          local_100 = piVar1;
          local_e8 = piVar2;
          if (local_c0 == -1) {
            if (*local_120 == '\0') {
              lVar11 = *(longlong *)(local_120 + 0x80) + 0x88;
            }
            else {
              lVar11 = *(longlong *)(local_120 + 0x58);
            }
            uVar15 = *(int *)(lVar11 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar11 + 4) = uVar15;
            fVar22 = (float)(uVar15 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_120 == '\0') {
              plVar10 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
            }
            else {
              plVar10 = *(longlong **)(local_120 + 0x60);
              if (*plVar10 == 0) {
                uVar9 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar5 + 0x60) = uVar9;
                plVar10 = *(longlong **)(pcVar5 + 0x60);
              }
            }
            uVar15 = *(uint *)(*plVar10 + lVar21 * 4);
            *(uint *)(*plVar10 + lVar21 * 4) = uVar15 + 1;
            iVar7 = (local_c0 << 0x10 | uVar15) * 0x19660d;
            iVar14 = iVar7 + 0x3c6ef35f;
            iVar20 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar14 + local_c8 * 0x19660d;
            iVar17 = iVar20 + 0x3c6ef35f;
            iVar14 = iStack_c4 * 0x19660d + iVar14 * iVar17 + 0x3c6ef35f;
            fVar22 = (float)((iVar7 + iVar17 * iVar14 + 0x3c6ef35f) * iVar14 + iVar20 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          puVar3 = local_130 + local_128;
          *local_130 = *(undefined4 *)(lVar19 + (longlong)(int)(fVar22 * (float)iVar16) * 4);
          lVar21 = lVar21 + 1;
          piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar13 = (int *)(param_1 + 0x3c);
          }
          local_130 = puVar3;
        } while (lVar21 < *piVar13);
      }
    }
    else {
      piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar13 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar13) {
        lVar21 = (longlong)*(int *)(local_b0 + 0x32c) * 0x10 + *(longlong *)(local_b0 + 0x350);
        lVar11 = 0;
        do {
          pcVar5 = local_120;
          auVar26 = auVar25._4_12_;
          piVar13 = local_118[0] + local_108;
          local_c8 = *local_118[0];
          piVar1 = local_100 + local_f0;
          iStack_c4 = *local_100;
          piVar2 = local_e8 + local_d8;
          local_c0 = *local_e8;
          local_118[0] = piVar13;
          local_100 = piVar1;
          local_e8 = piVar2;
          if (local_c0 == -1) {
            if (*local_120 == '\0') {
              lVar12 = *(longlong *)(local_120 + 0x80) + 0x88;
            }
            else {
              lVar12 = *(longlong *)(local_120 + 0x58);
            }
            uVar15 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar12 + 4) = uVar15;
            fVar22 = (float)(uVar15 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_120 == '\0') {
              plVar10 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
            }
            else {
              plVar10 = *(longlong **)(local_120 + 0x60);
              if (*plVar10 == 0) {
                uVar9 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
                auVar23._8_8_ = extraout_XMM0_Qb_00;
                auVar23._0_8_ = extraout_XMM0_Qa;
                auVar26 = auVar23._4_12_;
                **(undefined8 **)(pcVar5 + 0x60) = uVar9;
                plVar10 = *(longlong **)(pcVar5 + 0x60);
              }
            }
            uVar15 = *(uint *)(*plVar10 + lVar11 * 4);
            *(uint *)(*plVar10 + lVar11 * 4) = uVar15 + 1;
            iVar17 = (local_c0 << 0x10 | uVar15) * 0x19660d;
            iVar14 = iVar17 + 0x3c6ef35f;
            iVar20 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar14 + local_c8 * 0x19660d;
            iVar7 = iVar20 + 0x3c6ef35f;
            iVar14 = iStack_c4 * 0x19660d + iVar14 * iVar7 + 0x3c6ef35f;
            fVar22 = (float)((iVar17 + iVar7 * iVar14 + 0x3c6ef35f) * iVar14 + iVar20 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar5 = local_120;
          if (local_c0 == -1) {
            if (*local_120 == '\0') {
              lVar12 = *(longlong *)(local_120 + 0x80) + 0x88;
            }
            else {
              lVar12 = *(longlong *)(local_120 + 0x58);
            }
            uVar15 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar12 + 4) = uVar15;
            auVar25 = ZEXT416((uint)((float)(uVar15 >> 9 | 0x3f800000) + -1.0));
          }
          else {
            if (*local_120 == '\0') {
              plVar10 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
            }
            else {
              plVar10 = *(longlong **)(local_120 + 0x60);
              if (*plVar10 == 0) {
                uVar9 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
                auVar24._8_8_ = extraout_XMM0_Qb_01;
                auVar24._0_8_ = extraout_XMM0_Qa_00;
                auVar26 = auVar24._4_12_;
                **(undefined8 **)(pcVar5 + 0x60) = uVar9;
                plVar10 = *(longlong **)(pcVar5 + 0x60);
              }
            }
            uVar15 = *(uint *)(*plVar10 + lVar11 * 4);
            *(uint *)(*plVar10 + lVar11 * 4) = uVar15 + 1;
            iVar7 = (local_c0 << 0x10 | uVar15) * 0x19660d;
            iVar14 = iVar7 + 0x3c6ef35f;
            iVar20 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar14 + local_c8 * 0x19660d;
            iVar17 = iVar20 + 0x3c6ef35f;
            iVar14 = iStack_c4 * 0x19660d + iVar14 * iVar17 + 0x3c6ef35f;
            auVar25._0_4_ =
                 (float)((iVar7 + iVar17 * iVar14 + 0x3c6ef35f) * iVar14 + iVar20 + 0x3c6ef35fU >> 8
                        ) * 5.9604645e-08;
            auVar25._4_12_ = auVar26;
          }
          lVar12 = (longlong)(int)(fVar22 * (float)iVar16);
          if (*(float *)(lVar21 + 8 + lVar12 * 0x10) <= auVar25._0_4_) {
            lVar12 = (longlong)*(int *)(lVar12 * 0x10 + lVar21 + 0xc);
          }
          puVar3 = local_130 + local_128;
          *local_130 = *(undefined4 *)(lVar19 + (longlong)*(int *)(lVar19 + lVar12 * 4) * 4);
          lVar11 = lVar11 + 1;
          piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar13 = (int *)(param_1 + 0x3c);
          }
          local_130 = puVar3;
        } while (lVar11 < *piVar13);
      }
    }
  }
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar13 = (int *)(local_a8 + 1);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ac546 FUN_1480ac546 body=169 status=ok
// SIG undefined FUN_1480ac546(void)

void FUN_1480ac546(char *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  int *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405c93a6(local_20,param_1);
  FUN_140126e42(&local_30,param_1);
  piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar2 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar2) {
    iVar1 = 0;
    do {
      piVar2 = local_30 + local_28;
      *local_30 = (*(int *)(local_18 + 0x328) << 0x1c) >> 0x1f;
      iVar1 = iVar1 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = piVar2;
    } while (iVar1 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ac5f0 FUN_1480ac5f0 body=1014 status=ok
// SIG undefined FUN_1480ac5f0(void)

void FUN_1480ac5f0(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  int local_170;
  undefined4 *local_168;
  int local_160;
  undefined4 *local_158;
  int local_150;
  undefined4 *local_148;
  int local_140;
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  undefined1 local_78 [8];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1405c93a6(local_78,param_1);
  FUN_144a76c20(&local_178,param_1);
  FUN_144a76c20(&local_168,param_1);
  FUN_144a76c20(&local_158,param_1);
  FUN_144a76c20(&local_148,param_1);
  FUN_144a76c20(&local_138,param_1);
  FUN_144a76c20(&local_128,param_1);
  FUN_144a76c20(&local_118,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_88,param_1);
  piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar17 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar17) {
    iVar18 = 0;
    do {
      FUN_144a928e2(&local_68,local_70 + 0x40);
      puVar1 = local_178 + local_170;
      *local_178 = local_68;
      puVar2 = local_168 + local_160;
      *local_168 = local_64;
      puVar3 = local_158 + local_150;
      *local_158 = local_60;
      puVar4 = local_148 + local_140;
      *local_148 = local_5c;
      puVar5 = local_138 + local_130;
      *local_138 = local_58;
      puVar6 = local_128 + local_120;
      *local_128 = local_54;
      puVar7 = local_118 + local_110;
      *local_118 = local_50;
      puVar8 = local_108 + local_100;
      *local_108 = local_4c;
      puVar9 = local_f8 + local_f0;
      *local_f8 = local_48;
      puVar10 = local_e8 + local_e0;
      *local_e8 = local_44;
      puVar11 = local_d8 + local_d0;
      *local_d8 = local_40;
      puVar12 = local_c8 + local_c0;
      *local_c8 = local_3c;
      puVar13 = local_b8 + local_b0;
      *local_b8 = local_38;
      puVar14 = local_a8 + local_a0;
      *local_a8 = local_34;
      puVar15 = local_98 + local_90;
      *local_98 = local_30;
      puVar16 = local_88 + local_80;
      *local_88 = local_2c;
      iVar18 = iVar18 + 1;
      piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar17 = (int *)(param_1 + 0x3c);
      }
      local_178 = puVar1;
      local_168 = puVar2;
      local_158 = puVar3;
      local_148 = puVar4;
      local_138 = puVar5;
      local_128 = puVar6;
      local_118 = puVar7;
      local_108 = puVar8;
      local_f8 = puVar9;
      local_e8 = puVar10;
      local_d8 = puVar11;
      local_c8 = puVar12;
      local_b8 = puVar13;
      local_a8 = puVar14;
      local_98 = puVar15;
      local_88 = puVar16;
    } while (iVar18 < *piVar17);
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ac9e8 FUN_1480ac9e8 body=1023 status=ok
// SIG undefined FUN_1480ac9e8(void)

void FUN_1480ac9e8(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  int local_180;
  undefined4 *local_178;
  int local_170;
  undefined4 *local_168;
  int local_160;
  undefined4 *local_158;
  int local_150;
  undefined4 *local_148;
  int local_140;
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined1 local_88 [8];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1405c93a6(local_88,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_178,param_1);
  FUN_144a76c20(&local_168,param_1);
  FUN_144a76c20(&local_158,param_1);
  FUN_144a76c20(&local_148,param_1);
  FUN_144a76c20(&local_138,param_1);
  FUN_144a76c20(&local_128,param_1);
  FUN_144a76c20(&local_118,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_98,param_1);
  piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar17 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar17) {
    iVar18 = 0;
    do {
      FUN_144a928e2(&local_78,local_80 + 0xc0);
      puVar1 = local_188 + local_180;
      *local_188 = local_78;
      puVar2 = local_178 + local_170;
      *local_178 = local_74;
      puVar3 = local_168 + local_160;
      *local_168 = local_70;
      puVar4 = local_158 + local_150;
      *local_158 = local_6c;
      puVar5 = local_148 + local_140;
      *local_148 = local_68;
      puVar6 = local_138 + local_130;
      *local_138 = local_64;
      puVar7 = local_128 + local_120;
      *local_128 = local_60;
      puVar8 = local_118 + local_110;
      *local_118 = local_5c;
      puVar9 = local_108 + local_100;
      *local_108 = local_58;
      puVar10 = local_f8 + local_f0;
      *local_f8 = local_54;
      puVar11 = local_e8 + local_e0;
      *local_e8 = local_50;
      puVar12 = local_d8 + local_d0;
      *local_d8 = local_4c;
      puVar13 = local_c8 + local_c0;
      *local_c8 = local_48;
      puVar14 = local_b8 + local_b0;
      *local_b8 = local_44;
      puVar15 = local_a8 + local_a0;
      *local_a8 = local_40;
      puVar16 = local_98 + local_90;
      *local_98 = local_3c;
      iVar18 = iVar18 + 1;
      piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar17 = (int *)(param_1 + 0x3c);
      }
      local_188 = puVar1;
      local_178 = puVar2;
      local_168 = puVar3;
      local_158 = puVar4;
      local_148 = puVar5;
      local_138 = puVar6;
      local_128 = puVar7;
      local_118 = puVar8;
      local_108 = puVar9;
      local_f8 = puVar10;
      local_e8 = puVar11;
      local_d8 = puVar12;
      local_c8 = puVar13;
      local_b8 = puVar14;
      local_a8 = puVar15;
      local_98 = puVar16;
    } while (iVar18 < *piVar17);
  }
  if ((local_30 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480acde8 FUN_1480acde8 body=271 status=ok
// SIG undefined FUN_1480acde8(void)

void FUN_1480acde8(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_78 [40];
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  float *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c93a6(local_20,param_1);
  FUN_144a76c20(&local_50,param_1);
  FUN_144a76c20(&local_40,param_1);
  FUN_144a76c20(&local_30,param_1);
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      dVar4 = *(double *)(local_18 + 800);
      dVar5 = *(double *)(local_18 + 0x318);
      pfVar1 = local_50 + local_48;
      *local_50 = (float)*(double *)(local_18 + 0x310);
      pfVar2 = local_40 + local_38;
      *local_40 = (float)dVar5;
      pfVar3 = local_30 + local_28;
      *local_30 = (float)dVar4;
      iVar6 = iVar6 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      local_50 = pfVar1;
      local_40 = pfVar2;
      local_30 = pfVar3;
    } while (iVar6 < *piVar7);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480acef8 FUN_1480acef8 body=160 status=ok
// SIG undefined FUN_1480acef8(void)

void FUN_1480acef8(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405c93a6(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x34);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480acf9a FUN_1480acf9a body=224 status=ok
// SIG undefined FUN_1480acf9a(void)

void FUN_1480acf9a(char *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c93a6(local_38,param_1);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar5 = 0;
    piVar3 = local_58;
    iVar6 = *(int *)(local_30 + 0x34);
    bVar2 = false;
    do {
      bVar4 = bVar2;
      local_58 = piVar3 + local_48;
      iVar1 = *piVar3;
      bVar8 = iVar6 != iVar1;
      *(int *)(local_30 + 0x34) = iVar1;
      iVar5 = iVar5 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      piVar3 = local_58;
      iVar6 = iVar1;
      bVar2 = (bool)(bVar4 | bVar8);
    } while (iVar5 < *piVar7);
    if (bVar4 || bVar8) {
      FUN_1480ad07c();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ad07c FUN_1480ad07c body=1543 status=ok
// SIG undefined FUN_1480ad07c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480ad07c(longlong param_1,undefined4 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  int iVar17;
  double *pdVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  
  iVar17 = *(int *)(param_1 + 0x34);
  if (((longlong)iVar17 < 0) || (*(int *)(param_1 + 0x248) <= iVar17)) {
    pdVar18 = (double *)(param_1 + 0x250);
  }
  else {
    pdVar18 = (double *)((longlong)iVar17 * 0x60 + *(longlong *)(param_1 + 0x240));
  }
  dVar12 = *pdVar18;
  dVar13 = pdVar18[1];
  dVar14 = pdVar18[2];
  dVar15 = pdVar18[3];
  dVar5 = pdVar18[4];
  dVar6 = pdVar18[5];
  dVar23 = pdVar18[6];
  auVar30 = *(undefined1 (*) [16])(pdVar18 + 8);
  dVar7 = auVar30._0_8_;
  dVar36 = auVar30._8_8_;
  auVar2 = *(undefined1 (*) [16])(pdVar18 + 10);
  dVar1 = *pdVar18;
  dVar31 = pdVar18[3];
  dVar42 = pdVar18[3];
  *(float *)(param_1 + 0x28) = (float)(dVar5 - *(double *)(param_1 + 0x270));
  *(float *)(param_1 + 0x2c) = (float)(dVar6 - *(double *)(param_1 + 0x278));
  *(float *)(param_1 + 0x30) = (float)(dVar23 - *(double *)(param_1 + 0x280));
  auVar16 = _DAT_149934d80;
  dVar23 = *(double *)(param_1 + 0x2c0) + dVar23;
  dVar9 = dVar13 + dVar13;
  dVar40 = dVar14 + dVar14;
  dVar25 = dVar12 * (dVar12 + dVar12);
  dVar3 = (double)DAT_149934d80;
  dVar4 = DAT_149934d80._8_8_;
  dVar24 = (dVar4 - (dVar14 * dVar40 + dVar25)) * dVar36;
  dVar41 = dVar40 * dVar31;
  dVar42 = (dVar12 + dVar12) * dVar42;
  dVar31 = dVar9 * dVar31;
  dVar33 = auVar2._0_8_;
  dVar32 = (dVar40 * dVar13 - dVar42) * dVar33;
  dVar5 = dVar5 + *(double *)(param_1 + 0x2b0);
  dVar6 = dVar6 + *(double *)(param_1 + 0x2b8);
  dVar35 = (dVar9 * dVar12 + dVar41) * dVar7;
  auVar8._8_4_ = SUB84(dVar35,0);
  auVar8._0_8_ = (dVar3 - (dVar14 * dVar40 + dVar13 * dVar9)) * dVar7;
  auVar8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar8;
  *(double *)(param_1 + 0x50) = (dVar1 * dVar40 - dVar31) * dVar7;
  *(undefined8 *)(param_1 + 0x58) = 0;
  auVar10._8_4_ = SUB84(dVar24,0);
  auVar10._0_8_ = (dVar9 * dVar12 - dVar41) * dVar36;
  auVar10._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar10;
  *(double *)(param_1 + 0x70) = (dVar40 * dVar13 + dVar42) * dVar36;
  *(undefined8 *)(param_1 + 0x78) = 0;
  auVar11._8_4_ = SUB84(dVar32,0);
  auVar11._0_8_ = (dVar31 + dVar1 * dVar40) * dVar33;
  auVar11._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar11;
  *(double *)(param_1 + 0x90) = (1.0 - (dVar25 + dVar13 * dVar9)) * dVar33;
  *(undefined8 *)(param_1 + 0x98) = 0;
  auVar39._8_4_ = SUB84(dVar6,0);
  auVar39._0_8_ = dVar5;
  auVar39._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar39;
  *(double *)(param_1 + 0xb0) = dVar23;
  *(undefined8 *)(param_1 + 0xb8) = 0x3ff0000000000000;
  auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar36));
  auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar7));
  iVar17 = movmskpd((int)pdVar18,auVar37);
  auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
  auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar33));
  uVar20 = movmskpd(param_2,auVar38);
  uVar26 = (undefined4)DAT_14c846480;
  uVar27 = DAT_14c846480._4_4_;
  uVar28 = (undefined4)DAT_14c846488;
  uVar29 = DAT_14c846488._4_4_;
  dVar24 = DAT_14c8464c0;
  dVar25 = DAT_14c8464c8;
  dVar31 = DAT_14c846498;
  dVar32 = DAT_14c8464d0;
  dVar35 = DAT_14c8464b0;
  dVar1 = DAT_14c846490;
  dVar42 = DAT_14c8464a0;
  dVar9 = DAT_14c8464a8;
  if ((uVar20 & 0x3fffffff) != 0 || iVar17 != 0) {
    auVar39 = divpd(auVar16,auVar30);
    auVar30 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
    dVar24 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar7)) & auVar39._0_8_);
    dVar25 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar36)) & auVar39._8_8_);
    dVar32 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar33)) & auVar30._0_8_);
    dVar42 = -dVar12;
    dVar7 = -dVar13;
    dVar1 = dVar14 * -1.0;
    dVar31 = dVar15 * 1.0;
    dVar5 = dVar5 * dVar24;
    dVar6 = dVar6 * dVar25;
    dVar23 = dVar23 * dVar32;
    dVar36 = dVar6 * dVar42 - dVar7 * dVar5;
    dVar9 = dVar23 * dVar7 - dVar1 * dVar6;
    dVar40 = dVar5 * dVar1 - dVar42 * dVar23;
    dVar9 = dVar9 + dVar9;
    dVar40 = dVar40 + dVar40;
    dVar36 = dVar36 + dVar36;
    uVar26 = SUB84(dVar12,0);
    uVar27 = (int)((ulonglong)dVar42 >> 0x20);
    uVar28 = SUB84(dVar13,0);
    uVar29 = (int)((ulonglong)dVar7 >> 0x20);
    dVar35 = 0.0 - (dVar31 * dVar36 + dVar23 + (dVar40 * dVar42 - dVar9 * dVar7));
    dVar42 = 0.0 - ((dVar36 * dVar7 - dVar40 * dVar1) + dVar31 * dVar9 + dVar5);
    dVar9 = 0.0 - (dVar36 * dVar12 + dVar1 * dVar9 + dVar31 * dVar40 + dVar6);
  }
  dVar33 = (double)CONCAT44(uVar27,uVar26) + (double)CONCAT44(uVar27,uVar26);
  dVar34 = (double)CONCAT44(uVar29,uVar28) + (double)CONCAT44(uVar29,uVar28);
  dVar7 = dVar1 + dVar1;
  dVar40 = (double)CONCAT44(uVar27,uVar26) * dVar33;
  dVar41 = (double)CONCAT44(uVar29,uVar28) * dVar34;
  dVar5 = dVar34 * (double)CONCAT44(uVar27,uVar26);
  dVar6 = dVar7 * (double)CONCAT44(uVar29,uVar28);
  dVar33 = dVar33 * dVar31;
  dVar23 = (dVar6 - dVar33) * dVar32;
  dVar36 = dVar7 * (double)CONCAT44(uVar27,uVar26);
  *(double *)(param_1 + 0xc0) = (dVar3 - (dVar1 * dVar7 + dVar41)) * dVar24;
  *(double *)(param_1 + 200) = (dVar5 - dVar7 * dVar31) * dVar25;
  *(double *)(param_1 + 0xd0) = (dVar36 + dVar34 * dVar31) * dVar32;
  *(double *)(param_1 + 0xd8) = dVar42;
  *(double *)(param_1 + 0xe0) = (dVar5 + dVar7 * dVar31) * dVar24;
  auVar30._8_4_ = SUB84(dVar23,0);
  auVar30._0_8_ = (dVar4 - (dVar1 * dVar7 + dVar40)) * dVar25;
  auVar30._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xe8) = auVar30;
  *(double *)(param_1 + 0xf8) = dVar9;
  *(double *)(param_1 + 0x100) = (dVar36 - dVar34 * dVar31) * dVar24;
  *(double *)(param_1 + 0x108) = (dVar6 + dVar33) * dVar25;
  *(double *)(param_1 + 0x110) = (1.0 - (dVar40 + dVar41)) * dVar32;
  *(double *)(param_1 + 0x118) = dVar35;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0x3ff0000000000000;
  *(float *)(param_1 + 0x2d0) = (float)dVar12;
  *(float *)(param_1 + 0x2d4) = (float)dVar13;
  *(float *)(param_1 + 0x2d8) = (float)dVar14;
  *(float *)(param_1 + 0x2dc) = (float)dVar15;
  puVar21 = (undefined8 *)(param_1 + 0x40);
  puVar22 = (undefined8 *)(param_1 + 0x140);
  for (lVar19 = 0x10; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  puVar21 = (undefined8 *)(param_1 + 0xc0);
  puVar22 = (undefined8 *)(param_1 + 0x1c0);
  for (lVar19 = 0x10; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x2d8);
  return;
}



// FUNCTION 1480ad684 FUN_1480ad684 body=966 status=ok
// SIG undefined FUN_1480ad684(void)

void FUN_1480ad684(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_168 [40];
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  int *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  int *local_d8;
  int local_d0;
  undefined4 *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  float *local_a8;
  undefined8 uStack_a0;
  int local_98;
  float *local_90;
  undefined8 uStack_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1405c93a6(local_60,param_1);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_1);
  local_98 = 0;
  local_a8 = (float *)0x0;
  uStack_a0 = 0;
  FUN_144a98dce(&local_a8,param_1);
  local_80 = 0;
  local_90 = (float *)0x0;
  uStack_88 = 0;
  FUN_144a98dce(&local_90,param_1);
  local_b8 = 0;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  FUN_144a98dce(&local_c8,param_1);
  FUN_144a76cd4(&local_d8,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_140126e42(&local_118,param_1);
  cVar7 = FUN_1480d1c0a(local_58 + 0x10);
  if ((cVar7 == '\0') || (lVar6 = *(longlong *)(local_58 + 0x18), lVar6 == 0)) {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar11 = 0;
      do {
        piVar9 = local_d8 + local_d0;
        *local_d8 = -1;
        fVar13 = DAT_14c846338;
        fVar12 = DAT_14c846330._4_4_;
        pfVar1 = local_108 + local_100;
        *local_108 = (float)DAT_14c846330;
        pfVar2 = local_f8 + local_f0;
        *local_f8 = fVar12;
        pfVar3 = local_e8 + local_e0;
        *local_e8 = fVar13;
        piVar4 = local_118 + local_110;
        *local_118 = 0;
        iVar11 = iVar11 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        local_118 = piVar4;
        local_108 = pfVar1;
        local_f8 = pfVar2;
        local_e8 = pfVar3;
        local_d8 = piVar9;
      } while (iVar11 < *piVar10);
    }
  }
  else {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar11 = 0;
      do {
        local_120 = (double)*local_90;
        local_128 = (double)*local_a8;
        if (*local_78 == 0) {
          iVar8 = -1;
          fVar14 = 0.0;
          fVar13 = 0.0;
          fVar12 = 0.0;
          local_c8 = local_c8 + local_b8;
          local_a8 = local_a8 + local_98;
          local_90 = local_90 + local_80;
          local_78 = local_78 + local_68;
        }
        else {
          uVar5 = *local_c8;
          local_c8 = local_c8 + local_b8;
          local_a8 = local_a8 + local_98;
          local_90 = local_90 + local_80;
          local_78 = local_78 + local_68;
          iVar8 = FUN_148193e3a(lVar6,&local_128,uVar5,&local_140);
          fVar12 = (float)local_130;
          fVar13 = (float)local_138;
          fVar14 = (float)local_140;
        }
        piVar9 = local_d8 + local_d0;
        *local_d8 = iVar8;
        pfVar1 = local_108 + local_100;
        *local_108 = fVar14;
        pfVar2 = local_f8 + local_f0;
        *local_f8 = fVar13;
        pfVar3 = local_e8 + local_e0;
        *local_e8 = fVar12;
        piVar4 = local_118 + local_110;
        *local_118 = -(uint)(iVar8 != -1);
        iVar11 = iVar11 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        local_118 = piVar4;
        local_108 = pfVar1;
        local_f8 = pfVar2;
        local_e8 = pfVar3;
        local_d8 = piVar9;
      } while (iVar11 < *piVar10);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ada4c FUN_1480ada4c body=1064 status=ok
// SIG undefined FUN_1480ada4c(void)

void FUN_1480ada4c(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_148;
  double local_140;
  double local_138;
  double local_130;
  int *local_128;
  int local_120;
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  int *local_e8;
  int local_e0;
  float *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  float *local_c0;
  undefined8 uStack_b8;
  int local_b0;
  float *local_a8;
  undefined8 uStack_a0;
  int local_98;
  float *local_90;
  undefined8 uStack_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1405c93a6(local_60,param_1);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_1);
  local_98 = 0;
  local_a8 = (float *)0x0;
  uStack_a0 = 0;
  FUN_144a98dce(&local_a8,param_1);
  local_80 = 0;
  local_90 = (float *)0x0;
  uStack_88 = 0;
  FUN_144a98dce(&local_90,param_1);
  local_c8 = 0;
  local_d8 = (float *)0x0;
  uStack_d0 = 0;
  FUN_144a98dce(&local_d8,param_1);
  local_b0 = 0;
  local_c0 = (float *)0x0;
  uStack_b8 = 0;
  FUN_144a98dce(&local_c0,param_1);
  FUN_144a76cd4(&local_e8,param_1);
  FUN_144a76c20(&local_118,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_140126e42(&local_128,param_1);
  cVar6 = FUN_1480d1c0a(local_58 + 0x10);
  if ((cVar6 == '\0') || (lVar5 = *(longlong *)(local_58 + 0x18), lVar5 == 0)) {
    piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar8 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar8) {
      iVar10 = 0;
      do {
        piVar8 = local_e8 + local_e0;
        *local_e8 = -1;
        fVar12 = DAT_14c846338;
        fVar11 = DAT_14c846330._4_4_;
        pfVar1 = local_118 + local_110;
        *local_118 = (float)DAT_14c846330;
        pfVar2 = local_108 + local_100;
        *local_108 = fVar11;
        pfVar3 = local_f8 + local_f0;
        *local_f8 = fVar12;
        piVar4 = local_128 + local_120;
        *local_128 = 0;
        iVar10 = iVar10 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        local_128 = piVar4;
        local_118 = pfVar1;
        local_108 = pfVar2;
        local_f8 = pfVar3;
        local_e8 = piVar8;
      } while (iVar10 < *piVar9);
    }
  }
  else {
    piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar8 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar8) {
      iVar10 = 0;
      do {
        if (*local_78 == 0) {
          iVar7 = -1;
          fVar13 = 0.0;
          fVar12 = 0.0;
          fVar11 = 0.0;
          local_d8 = local_d8 + local_c8;
          local_c0 = local_c0 + local_b0;
          local_a8 = local_a8 + local_98;
          local_90 = local_90 + local_80;
          local_78 = local_78 + local_68;
        }
        else {
          local_158 = (double)*local_d8;
          local_150 = (double)*local_c0;
          local_168 = (double)*local_a8;
          local_160 = (double)*local_90;
          local_148 = 1;
          local_d8 = local_d8 + local_c8;
          local_c0 = local_c0 + local_b0;
          local_a8 = local_a8 + local_98;
          local_90 = local_90 + local_80;
          local_78 = local_78 + local_68;
          iVar7 = FUN_148193f54(lVar5,&local_168,&local_140);
          fVar11 = (float)local_130;
          fVar12 = (float)local_138;
          fVar13 = (float)local_140;
        }
        piVar8 = local_e8 + local_e0;
        *local_e8 = iVar7;
        pfVar1 = local_118 + local_110;
        *local_118 = fVar13;
        pfVar2 = local_108 + local_100;
        *local_108 = fVar12;
        pfVar3 = local_f8 + local_f0;
        *local_f8 = fVar11;
        piVar4 = local_128 + local_120;
        *local_128 = -(uint)(iVar7 != -1);
        iVar10 = iVar10 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        local_128 = piVar4;
        local_118 = pfVar1;
        local_108 = pfVar2;
        local_f8 = pfVar3;
        local_e8 = piVar8;
      } while (iVar10 < *piVar9);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ade76 FUN_1480ade76 body=149 status=ok
// SIG undefined FUN_1480ade76(void)

void FUN_1480ade76(char *param_1)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 uStack_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405c93a6(local_20,param_1);
  local_38 = (undefined4 *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a98d08(&local_38,param_1);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar1 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar1) {
    *(undefined4 *)(local_18 + 0x3d8) = *local_38;
    local_38 = local_38 + local_28;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480adf0c FUN_1480adf0c body=328 status=ok
// SIG undefined FUN_1480adf0c(void)

void FUN_1480adf0c(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  local_50 = (undefined1 *)0x0;
  local_48 = 0x2000000000;
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < (longlong)iVar1) {
    plVar6 = (longlong *)(param_1 + 0x10);
    lVar7 = 0;
    lVar8 = 0;
    do {
      cVar3 = FUN_1480d1bac(*(undefined8 *)(*plVar6 + lVar7));
      uVar2 = local_48;
      if (cVar3 != '\0') {
        lVar9 = (longlong)(int)local_48;
        uVar4 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar4);
        if (local_48._4_4_ < uVar4) {
          FUN_1456cba76(local_d0,uVar2 & 0xffffffff);
        }
        puVar5 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar5 = local_d0;
        }
        *(int *)(puVar5 + lVar9 * 4) = (int)lVar8;
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar1 != lVar8);
    while ((int)local_48 != 0) {
      puVar5 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar5 = local_d0;
      }
      lVar7 = (longlong)(int)local_48;
      local_48 = CONCAT44(local_48._4_4_,(int)local_48 + -1);
      FUN_1480ccdba(plVar6,*(undefined4 *)(puVar5 + lVar7 * 4 + -4));
      FUN_1480cce42(plVar6);
    }
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ae056 FUN_1480ae056 body=516 status=ok
// SIG undefined FUN_1480ae056(void)

undefined8 *
FUN_1480ae056(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,undefined2 param_6)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  cVar4 = FUN_148193d4e(param_3,param_4,param_5);
  if (cVar4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    SRWLock = (PSRWLOCK)(param_1 + 8);
    AcquireSRWLockShared(SRWLock);
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x10);
      lVar6 = (longlong)*(int *)(param_1 + 0x18) << 4;
      do {
        cVar4 = FUN_148193dd4(*puVar7,param_3,param_4,param_5);
        if (cVar4 != '\0') {
          if (puVar7 != (undefined8 *)0x0) {
            FUN_1480ae25a(param_2,param_6,puVar7,1);
            ReleaseSRWLockShared(SRWLock);
            return param_2;
          }
          break;
        }
        puVar7 = puVar7 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockExclusive(SRWLock);
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x10);
      lVar6 = (longlong)*(int *)(param_1 + 0x18) << 4;
      do {
        cVar4 = FUN_148193dd4(*puVar7,param_3,param_4,param_5);
        if (cVar4 != '\0') {
          if (puVar7 != (undefined8 *)0x0) {
            FUN_1480ae25a(param_2,param_6,puVar7,1);
            goto LAB_1480ae1a1;
          }
          break;
        }
        puVar7 = puVar7 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14ad8bf20;
    FUN_148193d1e(plVar5 + 2,*param_3,param_4,param_5);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar3 + 1U) {
      FUN_1480ccf06((longlong *)(param_1 + 0x10),iVar3);
    }
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar8 = (longlong)iVar3 * 0x10;
    *(longlong **)(lVar6 + lVar8) = plVar5 + 2;
    *(longlong **)(lVar6 + 8 + lVar8) = plVar5;
    FUN_1480ae25a(param_2,param_6,lVar6 + lVar8,1);
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
LAB_1480ae1a1:
    ReleaseSRWLockExclusive(SRWLock);
  }
  return param_2;
}



// FUNCTION 1480ae25a FUN_1480ae25a body=136 status=ok
// SIG undefined FUN_1480ae25a(void)

undefined8 FUN_1480ae25a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = (longlong *)param_3[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  FUN_1408e1074(param_1,param_2,&local_28);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ae2fa FUN_1480ae2fa body=45 status=ok
// SIG undefined FUN_1480ae2fa(void)

longlong FUN_1480ae2fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ae334 FUN_1480ae334 body=45 status=ok
// SIG undefined FUN_1480ae334(void)

undefined8 FUN_1480ae334(void)

{
  longlong in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_14020fad6(in_stack_00000030,L"Compare not implemented");
  if (*(char *)(in_stack_00000028 + 4) == '\x01') {
    *(undefined1 *)(in_stack_00000028 + 4) = 0;
  }
  return 0;
}



// FUNCTION 1480ae38e FUN_1480ae38e body=45 status=ok
// SIG undefined FUN_1480ae38e(void)

longlong FUN_1480ae38e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ae4ea FUN_1480ae4ea body=59 status=ok
// SIG undefined FUN_1480ae4ea(void)

undefined8 FUN_1480ae4ea(longlong *param_1)

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



// FUNCTION 1480ae592 FUN_1480ae592 body=623 status=ok
// SIG undefined FUN_1480ae592(void)

void FUN_1480ae592(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_89;
  undefined *local_88;
  longlong local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar1 = *(longlong *)(param_2[2] + 0x10);
    lVar9 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x58);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      do {
        lVar9 = *(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 0x50;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 0x50) == lVar1)
        goto LAB_1480ae5c5;
        iVar8 = *(int *)(lVar9 + 0x48);
      } while (iVar8 != -1);
    }
  }
  lVar9 = 0;
LAB_1480ae5c5:
  if ((*(byte *)param_2[4] & 1) != 0) {
    lVar3 = *param_2;
    uVar10 = *(int *)(lVar9 + 8) + 4;
    local_a4 = uVar10 & 0x3fffffff;
    local_98 = 0;
    local_a8 = 4;
    local_a0 = 0x10139;
    lVar1 = lVar9 + 0x10;
    FUN_1447f2a09(lVar3,lVar1,&local_a8,L"NiagaraMemoryBuffer");
    if ((int)*(uint *)(lVar9 + 0x38) < 1) {
      if (*(char *)(lVar9 + 0x44) == '\x01') {
        uVar2 = *(undefined4 *)(lVar9 + 0x40);
        local_80 = FUN_144735dd8(lVar3,lVar1,0);
        local_88 = (undefined *)((ulonglong)local_88 & 0xffffffffff000000);
        if ((*(byte *)(local_80 + 0x68) & 0x80) != 0) {
          uVar4 = (ulonglong)local_88 >> 8;
          local_88 = (undefined *)CONCAT71((int7)uVar4,0x1c);
        }
        local_b8 = (undefined **)&local_89;
        local_89 = 0;
        uVar5 = FUN_144a23c98(lVar3 + 0x198,lVar3 + 0x70,local_80 + 8,&local_88);
        FUN_1405bfba3(*param_2,uVar5,uVar2,2);
      }
    }
    else if (*(uint *)(lVar9 + 0x38) == uVar10) {
      uVar5 = *(undefined8 *)(lVar9 + 0x30);
      local_54 = *(undefined4 *)(lVar9 + 0x3c);
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_FUN_14ad87b00;
      local_88 = &DAT_1480aeae4;
      local_60 = uVar5;
      local_58 = uVar10;
      uVar6 = FUN_144735dd8(lVar3,lVar1,0);
      local_b8 = &local_88;
      FUN_1480ae9e8(lVar3,uVar6,uVar5,uVar10 * 4);
      if (local_88 != (undefined *)0x0) {
        pppuVar7 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar7 = &local_68;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else {
      *(undefined4 *)(lVar9 + 0x38) = 0;
      if (*(int *)(lVar9 + 0x3c) != 0) {
        FUN_14480809c(lVar9 + 0x30,0);
      }
    }
    if (*(char *)(lVar9 + 0x44) == '\x01') {
      *(undefined1 *)(lVar9 + 0x44) = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ae802 FUN_1480ae802 body=373 status=ok
// SIG undefined FUN_1480ae802(void)

void FUN_1480ae802(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  int local_98;
  code **local_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_2 + 3) == '\x01') {
    lVar1 = param_2[2];
    if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
      lVar4 = param_1 + 0x50;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x58);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x60) - 1U &
                               (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
      if (iVar5 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x50;
          if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x50) == lVar1)
          goto LAB_1480ae845;
          iVar5 = *(int *)(lVar4 + 0x48);
        } while (iVar5 != -1);
      }
    }
    lVar4 = 0;
LAB_1480ae845:
    if ((0 < *(int *)(lVar4 + 8) && (*(byte *)(lVar4 + 0x28) & 0xfe) == 2) &&
       (*(longlong *)(lVar4 + 0x18) != 0)) {
      uVar2 = *(undefined8 *)(param_2[1] + 0x28);
      iVar5 = *(int *)(lVar4 + 8) + 4;
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      local_88[0] = (code *)0x0;
      local_78 = (undefined8 *)FUN_14001cc68(0x28,8);
      *local_78 = &PTR_FUN_14ad87b20;
      local_78[1] = lVar1;
      local_78[2] = uVar3;
      local_78[3] = param_1;
      *(int *)(local_78 + 4) = iVar5;
      if (local_78 + 1 != (longlong *)0x0) {
        local_88[0] = FUN_1480aeb94;
      }
      local_98 = iVar5 * 4;
      local_90 = local_88;
      FUN_143a9681a(uVar2,*param_2,*(undefined8 *)(lVar4 + 0x18),0);
    }
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ae978 FUN_1480ae978 body=112 status=ok
// SIG undefined FUN_1480ae978(void)

void FUN_1480ae978(undefined4 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = *(undefined8 **)(param_1 + 2);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if (*(longlong *)(param_1 + 10) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 2);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ae9de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1480ae9e8 FUN_1480ae9e8 body=251 status=ok
// SIG undefined FUN_1480ae9e8(void)

void FUN_1480ae9e8(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    iVar2 = *(int *)(param_1 + 0x590);
    *(uint *)(param_1 + 0x590) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x594) < iVar2 + 1U) {
      FUN_144775ac8((longlong *)(param_1 + 0x588),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x588);
    lVar7 = (longlong)iVar2 * 0x120;
    *(undefined2 *)(lVar3 + lVar7) = 0x100;
    *(longlong *)(lVar3 + 8 + lVar7) = param_2;
    *(undefined8 *)(lVar3 + 0x10 + lVar7) = param_3;
    *(longlong *)(lVar3 + 0x18 + lVar7) = param_4;
    *(undefined8 *)(lVar3 + 0x20 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0x30 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0x60 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0x70 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0xa0 + lVar7) = *param_5;
    *(undefined8 *)(lVar3 + 0xb0 + lVar7) = param_5[2];
    param_5[2] = 0;
    uVar4 = param_5[4];
    uVar5 = param_5[5];
    uVar6 = param_5[7];
    puVar1 = (undefined8 *)(lVar3 + 0xd0 + lVar7);
    *puVar1 = param_5[6];
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)(lVar3 + 0xc0 + lVar7);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    if (*(longlong *)(lVar3 + 0xa0 + lVar7) != 0) {
      *param_5 = 0;
    }
    *(undefined8 *)(lVar3 + lVar7 + 0xe0) = 0;
    *(undefined8 *)(lVar3 + lVar7 + 0xf0) = 0;
    *(byte *)(param_2 + 0x24) = *(byte *)(param_2 + 0x24) | 0x80;
  }
  return;
}



// FUNCTION 1480aeae6 FUN_1480aeae6 body=97 status=ok
// SIG undefined FUN_1480aeae6(void)

undefined8 * FUN_1480aeae6(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ad87b00;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1447bda9e(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 2);
  }
  return puVar1;
}



// FUNCTION 1480aeb4e FUN_1480aeb4e body=12 status=ok
// SIG undefined FUN_1480aeb4e(void)

void FUN_1480aeb4e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001480aeb57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1480aeb5a FUN_1480aeb5a body=57 status=ok
// SIG undefined FUN_1480aeb5a(void)

undefined8 * FUN_1480aeb5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad87b00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480aeb94 FUN_1480aeb94 body=62 status=ok
// SIG undefined FUN_1480aeb94(void)

void FUN_1480aeb94(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1480aec5c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480aebd4 FUN_1480aebd4 body=70 status=ok
// SIG undefined FUN_1480aebd4(void)

undefined8 * FUN_1480aebd4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14ad87b20;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1480aec20 FUN_1480aec20 body=29 status=ok
// SIG undefined FUN_1480aec20(void)

void FUN_1480aec20(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1480aec3e FUN_1480aec3e body=29 status=ok
// SIG undefined FUN_1480aec3e(void)

undefined8 FUN_1480aec3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480aec5c FUN_1480aec5c body=339 status=ok
// SIG undefined FUN_1480aec5c(void)

void FUN_1480aec5c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  size_t _Size;
  undefined1 auStack_b8 [32];
  void *local_98;
  ulonglong uStack_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_2[1] == 1) {
    uVar1 = *(uint *)(param_1 + 3);
    puVar7 = (undefined8 *)*param_2;
    if (uVar1 * 4 == *(int *)(puVar7 + 1)) {
      local_98 = (void *)0x0;
      uStack_90 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        _Size = 0;
      }
      else {
        FUN_1447808da(&local_98,0);
        puVar7 = (undefined8 *)*param_2;
        _Size = (longlong)(int)param_1[3] << 2;
      }
      memcpy(local_98,(void *)*puVar7,_Size);
      uVar6 = uStack_90;
      pvVar5 = local_98;
      lVar2 = *param_1;
      local_98 = (void *)0x0;
      uStack_90 = 0;
      lVar3 = param_1[1];
      lVar4 = param_1[2];
      local_88[0] = (undefined1 *)0x0;
      local_78 = (longlong *)FUN_14001cc68(0x30,8);
      *local_78 = (longlong)&PTR_FUN_14ad87b40;
      local_78[1] = lVar2;
      local_78[2] = (longlong)pvVar5;
      local_78[3] = uVar6;
      local_78[4] = lVar3;
      local_78[5] = lVar4;
      if (local_78 + 1 != (longlong *)0x0) {
        local_88[0] = &LAB_1480aedb0;
      }
      thunk_FUN_1481fbf94(local_88);
      if (local_88[0] != (undefined1 *)0x0) {
        plVar8 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar8 = local_68;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480aedb6 FUN_1480aedb6 body=64 status=ok
// SIG undefined FUN_1480aedb6(void)

longlong FUN_1480aedb6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x30,8);
  *param_2 = lVar1;
  FUN_1480aee54(lVar1,param_1 + 8);
  return lVar1 + 8;
}



// FUNCTION 1480aedfc FUN_1480aedfc body=29 status=ok
// SIG undefined FUN_1480aedfc(void)

void FUN_1480aedfc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1480aee1a FUN_1480aee1a body=57 status=ok
// SIG undefined FUN_1480aee1a(void)

undefined8 * FUN_1480aee1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad87b40;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480aee54 FUN_1480aee54 body=125 status=ok
// SIG undefined FUN_1480aee54(void)

undefined8 * FUN_1480aee54(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14ad87b40;
  param_1[1] = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 << 2);
  }
  uVar2 = param_2[4];
  param_1[4] = param_2[3];
  param_1[5] = uVar2;
  return param_1;
}



// FUNCTION 1480aeed2 FUN_1480aeed2 body=266 status=ok
// SIG undefined FUN_1480aeed2(void)

void FUN_1480aeed2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar6 = FUN_144729dda(param_1 + 3);
  if ((cVar6 != '\0') && (lVar2 = param_1[4], *(int *)(lVar2 + 0x70) != *(int *)(lVar2 + 0x9c))) {
    lVar3 = *param_1;
    lVar8 = lVar2 + 0xa0;
    if (*(longlong *)(lVar2 + 0xa8) != 0) {
      lVar8 = *(longlong *)(lVar2 + 0xa8);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar2 + 0xb0) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x68) + (longlong)iVar7 * 0x18);
        if (*plVar1 == lVar3) {
          if ((plVar1 != (longlong *)0x0) && (lVar2 = plVar1[1], lVar2 != 0)) {
            AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 8));
            if (*(int *)(lVar2 + 0x18) == (int)param_1[2]) {
              uVar4 = *(undefined8 *)(lVar2 + 0x10);
              uVar5 = *(undefined8 *)(lVar2 + 0x18);
              lVar3 = param_1[2];
              *(longlong *)(lVar2 + 0x10) = param_1[1];
              *(longlong *)(lVar2 + 0x18) = lVar3;
              local_38._0_4_ = (undefined4)uVar4;
              local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
              uStack_30._0_4_ = (undefined4)uVar5;
              uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
              *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
              *(undefined4 *)((longlong)param_1 + 0xc) = local_38._4_4_;
              *(undefined4 *)(param_1 + 2) = (undefined4)uStack_30;
              *(undefined4 *)((longlong)param_1 + 0x14) = uStack_30._4_4_;
              local_38 = uVar4;
              uStack_30 = uVar5;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
          }
          break;
        }
        iVar7 = (int)plVar1[2];
      } while (iVar7 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480aefee FUN_1480aefee body=347 status=ok
// SIG undefined FUN_1480aefee(void)

void FUN_1480aefee(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  PSRWLOCK SRWLock;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  int local_60;
  int *local_58;
  int local_50;
  uint *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148093bb8(local_30,param_1);
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_140126e42(&local_58,param_1);
  FUN_144a76c20(&local_68);
  SRWLock = (PSRWLOCK)(local_28 + 8);
  AcquireSRWLockShared(SRWLock);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar4 = *(int *)(local_28 + 0x20);
    iVar7 = 0;
    do {
      puVar1 = local_48 + local_38;
      uVar5 = *local_48;
      uVar9 = *(uint *)(local_28 + 0x20);
      if ((int)uVar5 < (int)*(uint *)(local_28 + 0x20)) {
        uVar9 = uVar5;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar3 = *(undefined4 *)(*(longlong *)(local_28 + 0x10) + (ulonglong)uVar9 * 4);
      piVar6 = local_58 + local_50;
      *local_58 = -(uint)((int)uVar5 < iVar4 && -1 < (int)uVar5);
      puVar2 = local_68 + local_60;
      *local_68 = uVar3;
      iVar7 = iVar7 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_68 = puVar2;
      local_58 = piVar6;
      local_48 = puVar1;
    } while (iVar7 < *piVar8);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480af14a FUN_1480af14a body=463 status=ok
// SIG undefined FUN_1480af14a(void)

void FUN_1480af14a(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  PSRWLOCK SRWLock;
  int *piVar9;
  uint uVar10;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int local_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  uint *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  undefined1 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148093bb8(local_60,param_1);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_1);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_1);
  local_a8 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  FUN_144a98dce(&local_b8,param_1);
  FUN_140126e42(&local_c8);
  SRWLock = (PSRWLOCK)(local_58 + 8);
  AcquireSRWLockExclusive(SRWLock);
  *local_58 = 1;
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar4 = *(int *)(local_58 + 0x20);
    iVar8 = 0;
    do {
      piVar7 = local_78 + local_68;
      iVar5 = *local_78;
      puVar1 = local_98 + local_88;
      uVar6 = *local_98;
      puVar2 = local_b8 + local_a8;
      if (iVar5 != 0) {
        uVar10 = *(uint *)(local_58 + 0x20);
        if ((int)uVar6 < (int)*(uint *)(local_58 + 0x20)) {
          uVar10 = uVar6;
        }
        if ((int)uVar10 < 1) {
          uVar10 = 0;
        }
        *(undefined4 *)(*(longlong *)(local_58 + 0x10) + (ulonglong)uVar10 * 4) = *local_b8;
      }
      piVar3 = local_c8 + local_c0;
      *local_c8 = -(uint)((iVar5 != 0 && 0 < (int)uVar6) && (int)uVar6 < iVar4);
      iVar8 = iVar8 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = (int *)(param_1 + 0x3c);
      }
      local_c8 = piVar3;
      local_b8 = puVar2;
      local_98 = puVar1;
      local_78 = piVar7;
    } while (iVar8 < *piVar9);
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480af31a FUN_1480af31a body=392 status=ok
// SIG undefined FUN_1480af31a(void)

void FUN_1480af31a(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  PSRWLOCK SRWLock;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  int *local_58;
  int local_50;
  uint *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148093bb8(local_30,param_1);
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_140126e42(&local_58,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_68);
  SRWLock = (PSRWLOCK)(local_28 + 8);
  AcquireSRWLockShared(SRWLock);
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar4 = *(int *)(local_28 + 0x20);
    iVar8 = 0;
    do {
      puVar1 = local_48 + local_38;
      uVar5 = *local_48;
      uVar10 = *(uint *)(local_28 + 0x20);
      if ((int)uVar5 < (int)*(uint *)(local_28 + 0x20)) {
        uVar10 = uVar5;
      }
      if ((int)uVar10 < 1) {
        uVar10 = 0;
      }
      uVar6 = *(undefined8 *)(*(longlong *)(local_28 + 0x10) + (ulonglong)uVar10 * 4);
      piVar7 = local_58 + local_50;
      *local_58 = -(uint)((int)uVar5 <= iVar4 + -2 && -1 < (int)uVar5);
      puVar2 = local_78 + local_70;
      *local_78 = (int)uVar6;
      puVar3 = local_68 + local_60;
      *local_68 = (int)((ulonglong)uVar6 >> 0x20);
      iVar8 = iVar8 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = (int *)(param_1 + 0x3c);
      }
      local_78 = puVar2;
      local_68 = puVar3;
      local_58 = piVar7;
      local_48 = puVar1;
    } while (iVar8 < *piVar9);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480af4a3 FUN_1480af4a3 body=531 status=ok
// SIG undefined FUN_1480af4a3(void)

void FUN_1480af4a3(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  PSRWLOCK SRWLock;
  int *piVar12;
  uint uVar13;
  undefined1 auStack_108 [32];
  int *local_e8;
  int local_e0;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined4 *local_c0;
  undefined8 uStack_b8;
  int local_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  undefined1 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_148093bb8(local_70,param_1);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  local_c8 = 0;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  FUN_144a98dce(&local_d8,param_1);
  local_b0 = 0;
  local_c0 = (undefined4 *)0x0;
  uStack_b8 = 0;
  FUN_144a98dce(&local_c0,param_1);
  FUN_140126e42(&local_e8);
  SRWLock = (PSRWLOCK)(local_68 + 8);
  AcquireSRWLockExclusive(SRWLock);
  *local_68 = 1;
  piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar10 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar10) {
    iVar6 = *(int *)(local_68 + 0x20);
    iVar11 = 0;
    do {
      piVar10 = local_88 + local_78;
      iVar7 = *local_88;
      puVar1 = local_a8 + local_98;
      uVar8 = *local_a8;
      puVar4 = local_c0 + local_b0;
      uVar5 = *local_c0;
      puVar2 = local_d8 + local_c8;
      if (iVar7 != 0) {
        uVar13 = *(uint *)(local_68 + 0x20);
        if ((int)uVar8 < (int)*(uint *)(local_68 + 0x20)) {
          uVar13 = uVar8;
        }
        if ((int)uVar13 < 1) {
          uVar13 = 0;
        }
        lVar9 = *(longlong *)(local_68 + 0x10);
        *(undefined4 *)(lVar9 + (ulonglong)uVar13 * 4) = *local_d8;
        *(undefined4 *)(lVar9 + 4 + (ulonglong)uVar13 * 4) = uVar5;
      }
      piVar3 = local_e8 + local_e0;
      *local_e8 = -(uint)((iVar7 != 0 && 0 < (int)uVar8) && (int)uVar8 <= iVar6 + -2);
      iVar11 = iVar11 + 1;
      piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar12 = (int *)(param_1 + 0x3c);
      }
      local_e8 = piVar3;
      local_d8 = puVar2;
      local_c0 = puVar4;
      local_a8 = puVar1;
      local_88 = piVar10;
    } while (iVar11 < *piVar12);
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480af6b7 FUN_1480af6b7 body=463 status=ok
// SIG undefined FUN_1480af6b7(void)

void FUN_1480af6b7(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  PSRWLOCK SRWLock;
  int iVar12;
  int *piVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  int *local_68;
  int local_60;
  uint *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148093bb8(local_38,param_1);
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  FUN_140126e42(&local_68,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_78);
  SRWLock = (PSRWLOCK)(local_30 + 8);
  AcquireSRWLockShared(SRWLock);
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    iVar8 = *(int *)(local_30 + 0x20);
    iVar12 = 0;
    do {
      puVar1 = local_58 + local_48;
      uVar9 = *local_58;
      uVar14 = *(uint *)(local_30 + 0x20);
      if ((int)uVar9 < (int)*(uint *)(local_30 + 0x20)) {
        uVar14 = uVar9;
      }
      if ((int)uVar14 < 1) {
        uVar14 = 0;
      }
      uVar15 = (ulonglong)uVar14;
      lVar10 = *(longlong *)(local_30 + 0x10);
      uVar5 = *(undefined4 *)(lVar10 + uVar15 * 4);
      uVar6 = *(undefined4 *)(lVar10 + 4 + uVar15 * 4);
      piVar11 = local_68 + local_60;
      uVar7 = *(undefined4 *)(lVar10 + 8 + uVar15 * 4);
      *local_68 = -(uint)((int)uVar9 <= iVar8 + -3 && -1 < (int)uVar9);
      puVar2 = local_98 + local_90;
      *local_98 = uVar5;
      puVar3 = local_88 + local_80;
      *local_88 = uVar6;
      puVar4 = local_78 + local_70;
      *local_78 = uVar7;
      iVar12 = iVar12 + 1;
      piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar13 = (int *)(param_1 + 0x3c);
      }
      local_98 = puVar2;
      local_88 = puVar3;
      local_78 = puVar4;
      local_68 = piVar11;
      local_58 = puVar1;
    } while (iVar12 < *piVar13);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480af887 FUN_1480af887 body=552 status=ok
// SIG undefined FUN_1480af887(void)

void FUN_1480af887(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  PSRWLOCK SRWLock;
  int *piVar15;
  ulonglong uVar16;
  undefined1 auStack_128 [40];
  int *local_100;
  int local_f8;
  undefined4 *local_f0 [2];
  int local_e0;
  undefined4 *local_d8;
  int local_c8;
  undefined4 *local_c0;
  int local_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  undefined1 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_148093bb8(local_70,param_1);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  FUN_1448a432c(local_f0,param_1);
  FUN_140126e42(&local_100);
  SRWLock = (PSRWLOCK)(local_68 + 8);
  AcquireSRWLockExclusive(SRWLock);
  *local_68 = 1;
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar8 = *(int *)(local_68 + 0x20);
    iVar14 = 0;
    do {
      piVar13 = local_88 + local_78;
      iVar9 = *local_88;
      puVar1 = local_a8 + local_98;
      uVar10 = *local_a8;
      puVar5 = local_c0 + local_b0;
      uVar6 = *local_c0;
      puVar2 = local_d8 + local_c8;
      uVar7 = *local_d8;
      puVar3 = local_f0[0] + local_e0;
      if (iVar9 != 0) {
        uVar12 = *(uint *)(local_68 + 0x20);
        if ((int)uVar10 < (int)*(uint *)(local_68 + 0x20)) {
          uVar12 = uVar10;
        }
        uVar16 = (ulonglong)uVar12;
        if ((int)uVar12 < 1) {
          uVar16 = 0;
        }
        lVar11 = *(longlong *)(local_68 + 0x10);
        *(undefined4 *)(lVar11 + uVar16 * 4) = *local_f0[0];
        *(undefined4 *)(lVar11 + 4 + uVar16 * 4) = uVar7;
        *(undefined4 *)(lVar11 + 8 + uVar16 * 4) = uVar6;
      }
      piVar4 = local_100 + local_f8;
      *local_100 = -(uint)((iVar9 != 0 && 0 < (int)uVar10) && (int)uVar10 <= iVar8 + -3);
      iVar14 = iVar14 + 1;
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      local_100 = piVar4;
      local_f0[0] = puVar3;
      local_d8 = puVar2;
      local_c0 = puVar5;
      local_a8 = puVar1;
      local_88 = piVar13;
    } while (iVar14 < *piVar15);
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480afab0 FUN_1480afab0 body=505 status=ok
// SIG undefined FUN_1480afab0(void)

void FUN_1480afab0(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  PSRWLOCK SRWLock;
  int iVar14;
  int *piVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  int *local_58;
  int local_50;
  uint *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148093bb8(local_28,param_1);
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_140126e42(&local_58,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_68);
  SRWLock = (PSRWLOCK)(local_20 + 8);
  AcquireSRWLockShared(SRWLock);
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar10 = *(int *)(local_20 + 0x20);
    iVar14 = 0;
    do {
      puVar1 = local_48 + local_38;
      uVar11 = *local_48;
      uVar16 = *(uint *)(local_20 + 0x20);
      if ((int)uVar11 < (int)*(uint *)(local_20 + 0x20)) {
        uVar16 = uVar11;
      }
      if ((int)uVar16 < 1) {
        uVar16 = 0;
      }
      uVar17 = (ulonglong)uVar16;
      lVar12 = *(longlong *)(local_20 + 0x10);
      uVar6 = *(undefined4 *)(lVar12 + uVar17 * 4);
      uVar7 = *(undefined4 *)(lVar12 + 4 + uVar17 * 4);
      uVar8 = *(undefined4 *)(lVar12 + 8 + uVar17 * 4);
      uVar9 = *(undefined4 *)(lVar12 + 0xc + uVar17 * 4);
      piVar13 = local_58 + local_50;
      *local_58 = -(uint)((int)uVar11 <= iVar10 + -4 && -1 < (int)uVar11);
      puVar2 = local_98 + local_90;
      *local_98 = uVar6;
      puVar3 = local_88 + local_80;
      *local_88 = uVar7;
      puVar4 = local_78 + local_70;
      *local_78 = uVar8;
      puVar5 = local_68 + local_60;
      *local_68 = uVar9;
      iVar14 = iVar14 + 1;
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      local_98 = puVar2;
      local_88 = puVar3;
      local_78 = puVar4;
      local_68 = puVar5;
      local_58 = piVar13;
      local_48 = puVar1;
    } while (iVar14 < *piVar15);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480afcaa FUN_1480afcaa body=649 status=ok
// SIG undefined FUN_1480afcaa(void)

void FUN_1480afcaa(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  PSRWLOCK SRWLock;
  int *piVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_138 [32];
  int *local_118;
  int local_110;
  undefined4 *local_108;
  undefined8 uStack_100;
  int local_f8;
  undefined4 *local_f0;
  undefined8 uStack_e8;
  int local_e0;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined4 *local_c0;
  undefined8 uStack_b8;
  int local_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  undefined1 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_148093bb8(local_70,param_1);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  local_f8 = 0;
  local_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  FUN_144a98dce(&local_108,param_1);
  local_e0 = 0;
  local_f0 = (undefined4 *)0x0;
  uStack_e8 = 0;
  FUN_144a98dce(&local_f0,param_1);
  local_c8 = 0;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  FUN_144a98dce(&local_d8,param_1);
  local_b0 = 0;
  local_c0 = (undefined4 *)0x0;
  uStack_b8 = 0;
  FUN_144a98dce(&local_c0,param_1);
  FUN_140126e42(&local_118);
  SRWLock = (PSRWLOCK)(local_68 + 8);
  AcquireSRWLockExclusive(SRWLock);
  *local_68 = 1;
  piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar14 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar10 = *(int *)(local_68 + 0x20);
    iVar15 = 0;
    do {
      piVar14 = local_88 + local_78;
      iVar11 = *local_88;
      puVar1 = local_a8 + local_98;
      uVar12 = *local_a8;
      puVar6 = local_c0 + local_b0;
      uVar7 = *local_c0;
      puVar2 = local_d8 + local_c8;
      uVar8 = *local_d8;
      puVar3 = local_f0 + local_e0;
      uVar9 = *local_f0;
      puVar4 = local_108 + local_f8;
      if (iVar11 != 0) {
        uVar17 = *(uint *)(local_68 + 0x20);
        if ((int)uVar12 < (int)*(uint *)(local_68 + 0x20)) {
          uVar17 = uVar12;
        }
        if ((int)uVar17 < 1) {
          uVar17 = 0;
        }
        uVar18 = (ulonglong)uVar17;
        lVar13 = *(longlong *)(local_68 + 0x10);
        *(undefined4 *)(lVar13 + uVar18 * 4) = *local_108;
        *(undefined4 *)(lVar13 + 4 + uVar18 * 4) = uVar9;
        *(undefined4 *)(lVar13 + 8 + uVar18 * 4) = uVar8;
        *(undefined4 *)(lVar13 + 0xc + uVar18 * 4) = uVar7;
      }
      piVar5 = local_118 + local_110;
      *local_118 = -(uint)((iVar11 != 0 && 0 < (int)uVar12) && (int)uVar12 <= iVar10 + -4);
      iVar15 = iVar15 + 1;
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      local_118 = piVar5;
      local_108 = puVar4;
      local_f0 = puVar3;
      local_d8 = puVar2;
      local_c0 = puVar6;
      local_a8 = puVar1;
      local_88 = piVar14;
    } while (iVar15 < *piVar16);
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480aff34 FUN_1480aff34 body=343 status=ok
// SIG undefined FUN_1480aff34(void)

void FUN_1480aff34(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  PSRWLOCK SRWLock;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  int local_60;
  int *local_58;
  int local_50;
  uint *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148093bb8(local_30,param_1);
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_140126e42(&local_58,param_1);
  FUN_144a76cd4(&local_68);
  SRWLock = (PSRWLOCK)(local_28 + 8);
  AcquireSRWLockShared(SRWLock);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar3 = *(int *)(local_28 + 0x20);
    iVar7 = 0;
    do {
      puVar1 = local_48 + local_38;
      uVar4 = *local_48;
      uVar9 = *(uint *)(local_28 + 0x20);
      if ((int)uVar4 < (int)*(uint *)(local_28 + 0x20)) {
        uVar9 = uVar4;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar5 = *(undefined4 *)(*(longlong *)(local_28 + 0x10) + (ulonglong)uVar9 * 4);
      piVar6 = local_58 + local_50;
      *local_58 = -(uint)((int)uVar4 < iVar3 && -1 < (int)uVar4);
      puVar2 = local_68 + local_60;
      *local_68 = uVar5;
      iVar7 = iVar7 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_68 = puVar2;
      local_58 = piVar6;
      local_48 = puVar1;
    } while (iVar7 < *piVar8);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b008c FUN_1480b008c body=459 status=ok
// SIG undefined FUN_1480b008c(void)

void FUN_1480b008c(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  PSRWLOCK SRWLock;
  int *piVar9;
  uint uVar10;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int local_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  uint *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  undefined1 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148093bb8(local_60,param_1);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_1);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_1);
  local_a8 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_1);
  FUN_140126e42(&local_c8);
  SRWLock = (PSRWLOCK)(local_58 + 8);
  AcquireSRWLockExclusive(SRWLock);
  *local_58 = 1;
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar4 = *(int *)(local_58 + 0x20);
    iVar8 = 0;
    do {
      piVar7 = local_78 + local_68;
      iVar5 = *local_78;
      puVar1 = local_98 + local_88;
      uVar6 = *local_98;
      puVar2 = local_b8 + local_a8;
      if (iVar5 != 0) {
        uVar10 = *(uint *)(local_58 + 0x20);
        if ((int)uVar6 < (int)*(uint *)(local_58 + 0x20)) {
          uVar10 = uVar6;
        }
        if ((int)uVar10 < 1) {
          uVar10 = 0;
        }
        *(undefined4 *)(*(longlong *)(local_58 + 0x10) + (ulonglong)uVar10 * 4) = *local_b8;
      }
      piVar3 = local_c8 + local_c0;
      *local_c8 = -(uint)((iVar5 != 0 && 0 < (int)uVar6) && (int)uVar6 < iVar4);
      iVar8 = iVar8 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = (int *)(param_1 + 0x3c);
      }
      local_c8 = piVar3;
      local_b8 = puVar2;
      local_98 = puVar1;
      local_78 = piVar7;
    } while (iVar8 < *piVar9);
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b0258 FUN_1480b0258 body=392 status=ok
// SIG undefined FUN_1480b0258(void)

void FUN_1480b0258(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  PSRWLOCK SRWLock;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  int *local_58;
  int local_50;
  uint *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148093bb8(local_30,param_1);
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_140126e42(&local_58,param_1);
  FUN_144a76cd4(&local_78,param_1);
  FUN_144a76cd4(&local_68);
  SRWLock = (PSRWLOCK)(local_28 + 8);
  AcquireSRWLockShared(SRWLock);
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar4 = *(int *)(local_28 + 0x20);
    iVar8 = 0;
    do {
      puVar1 = local_48 + local_38;
      uVar5 = *local_48;
      uVar10 = *(uint *)(local_28 + 0x20);
      if ((int)uVar5 < (int)*(uint *)(local_28 + 0x20)) {
        uVar10 = uVar5;
      }
      if ((int)uVar10 < 1) {
        uVar10 = 0;
      }
      uVar6 = *(undefined8 *)(*(longlong *)(local_28 + 0x10) + (ulonglong)uVar10 * 4);
      piVar7 = local_58 + local_50;
      *local_58 = -(uint)((int)uVar5 <= iVar4 + -2 && -1 < (int)uVar5);
      puVar2 = local_78 + local_70;
      *local_78 = (int)uVar6;
      puVar3 = local_68 + local_60;
      *local_68 = (int)((ulonglong)uVar6 >> 0x20);
      iVar8 = iVar8 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = (int *)(param_1 + 0x3c);
      }
      local_78 = puVar2;
      local_68 = puVar3;
      local_58 = piVar7;
      local_48 = puVar1;
    } while (iVar8 < *piVar9);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b03e1 FUN_1480b03e1 body=522 status=ok
// SIG undefined FUN_1480b03e1(void)

void FUN_1480b03e1(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  PSRWLOCK SRWLock;
  int *piVar12;
  uint uVar13;
  undefined1 auStack_108 [32];
  int *local_e8;
  int local_e0;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined4 *local_c0;
  undefined8 uStack_b8;
  int local_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  undefined1 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_148093bb8(local_70,param_1);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  local_c8 = 0;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  FUN_144a98d08(&local_d8,param_1);
  local_b0 = 0;
  local_c0 = (undefined4 *)0x0;
  uStack_b8 = 0;
  FUN_144a98d08(&local_c0,param_1);
  FUN_140126e42(&local_e8);
  SRWLock = (PSRWLOCK)(local_68 + 8);
  AcquireSRWLockExclusive(SRWLock);
  *local_68 = 1;
  piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar10 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar10) {
    iVar5 = *(int *)(local_68 + 0x20);
    iVar11 = 0;
    do {
      piVar10 = local_88 + local_78;
      iVar6 = *local_88;
      puVar1 = local_a8 + local_98;
      uVar7 = *local_a8;
      puVar2 = local_c0 + local_b0;
      uVar8 = *local_c0;
      puVar3 = local_d8 + local_c8;
      if (iVar6 != 0) {
        uVar13 = *(uint *)(local_68 + 0x20);
        if ((int)uVar7 < (int)*(uint *)(local_68 + 0x20)) {
          uVar13 = uVar7;
        }
        if ((int)uVar13 < 1) {
          uVar13 = 0;
        }
        lVar9 = *(longlong *)(local_68 + 0x10);
        *(undefined4 *)(lVar9 + (ulonglong)uVar13 * 4) = *local_d8;
        *(undefined4 *)(lVar9 + 4 + (ulonglong)uVar13 * 4) = uVar8;
      }
      piVar4 = local_e8 + local_e0;
      *local_e8 = -(uint)((iVar6 != 0 && 0 < (int)uVar7) && (int)uVar7 <= iVar5 + -2);
      iVar11 = iVar11 + 1;
      piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar12 = (int *)(param_1 + 0x3c);
      }
      local_e8 = piVar4;
      local_d8 = puVar3;
      local_c0 = puVar2;
      local_a8 = puVar1;
      local_88 = piVar10;
    } while (iVar11 < *piVar12);
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b05ec FUN_1480b05ec body=458 status=ok
// SIG undefined FUN_1480b05ec(void)

void FUN_1480b05ec(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int *piVar11;
  PSRWLOCK SRWLock;
  int iVar12;
  int *piVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  int *local_78;
  int local_70;
  uint *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_148093bb8(local_48,param_1);
  local_68 = (uint *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_144a98d08(&local_68,param_1);
  FUN_140126e42(&local_78,param_1);
  FUN_144a76cd4(&local_a8,param_1);
  FUN_144a76cd4(&local_98,param_1);
  FUN_144a76cd4(&local_88);
  SRWLock = (PSRWLOCK)(local_40 + 8);
  AcquireSRWLockShared(SRWLock);
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    iVar5 = *(int *)(local_40 + 0x20);
    iVar12 = 0;
    do {
      puVar1 = local_68 + local_58;
      uVar6 = *local_68;
      uVar14 = *(uint *)(local_40 + 0x20);
      if ((int)uVar6 < (int)*(uint *)(local_40 + 0x20)) {
        uVar14 = uVar6;
      }
      if ((int)uVar14 < 1) {
        uVar14 = 0;
      }
      uVar15 = (ulonglong)uVar14;
      lVar10 = *(longlong *)(local_40 + 0x10);
      uVar7 = *(undefined4 *)(lVar10 + uVar15 * 4);
      uVar8 = *(undefined4 *)(lVar10 + 4 + uVar15 * 4);
      piVar11 = local_78 + local_70;
      uVar9 = *(undefined4 *)(lVar10 + 8 + uVar15 * 4);
      *local_78 = -(uint)((int)uVar6 <= iVar5 + -3 && -1 < (int)uVar6);
      puVar2 = local_a8 + local_a0;
      *local_a8 = uVar7;
      puVar3 = local_98 + local_90;
      *local_98 = uVar8;
      puVar4 = local_88 + local_80;
      *local_88 = uVar9;
      iVar12 = iVar12 + 1;
      piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar13 = (int *)(param_1 + 0x3c);
      }
      local_a8 = puVar2;
      local_98 = puVar3;
      local_88 = puVar4;
      local_78 = piVar11;
      local_68 = puVar1;
    } while (iVar12 < *piVar13);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b07b7 FUN_1480b07b7 body=587 status=ok
// SIG undefined FUN_1480b07b7(void)

void FUN_1480b07b7(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  undefined1 auStack_138 [40];
  PSRWLOCK local_110;
  int *local_108;
  int local_100;
  undefined4 *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined4 *local_e0;
  undefined8 uStack_d8;
  int local_d0;
  undefined4 *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  undefined1 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_148093bb8(local_70,param_1);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  local_e8 = 0;
  local_f8 = (undefined4 *)0x0;
  uStack_f0 = 0;
  FUN_144a98d08(&local_f8,param_1);
  local_d0 = 0;
  local_e0 = (undefined4 *)0x0;
  uStack_d8 = 0;
  FUN_144a98d08(&local_e0,param_1);
  local_b8 = 0;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  FUN_144a98d08(&local_c8,param_1);
  FUN_140126e42(&local_108);
  local_110 = (PSRWLOCK)(local_68 + 8);
  AcquireSRWLockExclusive(local_110);
  *local_68 = 1;
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar6 = *(int *)(local_68 + 0x20);
    iVar14 = 0;
    do {
      piVar13 = local_88 + local_78;
      iVar7 = *local_88;
      puVar1 = local_a8 + local_98;
      uVar8 = *local_a8;
      puVar2 = local_c8 + local_b8;
      uVar9 = *local_c8;
      puVar3 = local_e0 + local_d0;
      uVar10 = *local_e0;
      puVar4 = local_f8 + local_e8;
      if (iVar7 != 0) {
        uVar12 = *(uint *)(local_68 + 0x20);
        if ((int)uVar8 < (int)*(uint *)(local_68 + 0x20)) {
          uVar12 = uVar8;
        }
        uVar16 = (ulonglong)uVar12;
        if ((int)uVar12 < 1) {
          uVar16 = 0;
        }
        lVar11 = *(longlong *)(local_68 + 0x10);
        *(undefined4 *)(lVar11 + uVar16 * 4) = *local_f8;
        *(undefined4 *)(lVar11 + 4 + uVar16 * 4) = uVar10;
        *(undefined4 *)(lVar11 + 8 + uVar16 * 4) = uVar9;
      }
      piVar5 = local_108 + local_100;
      *local_108 = -(uint)((iVar7 != 0 && 0 < (int)uVar8) && (int)uVar8 <= iVar6 + -3);
      iVar14 = iVar14 + 1;
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      local_108 = piVar5;
      local_f8 = puVar4;
      local_e0 = puVar3;
      local_c8 = puVar2;
      local_a8 = puVar1;
      local_88 = piVar13;
    } while (iVar14 < *piVar15);
  }
  ReleaseSRWLockExclusive(local_110);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b0a03 FUN_1480b0a03 body=498 status=ok
// SIG undefined FUN_1480b0a03(void)

void FUN_1480b0a03(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  ulonglong uVar15;
  PSRWLOCK SRWLock;
  int iVar16;
  int *piVar17;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  int *local_78;
  int local_70;
  uint *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148093bb8(local_48,param_1);
  local_68 = (uint *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_144a98d08(&local_68,param_1);
  FUN_140126e42(&local_78,param_1);
  FUN_144a76cd4(&local_b8,param_1);
  FUN_144a76cd4(&local_a8,param_1);
  FUN_144a76cd4(&local_98,param_1);
  FUN_144a76cd4(&local_88);
  SRWLock = (PSRWLOCK)(local_40 + 8);
  AcquireSRWLockShared(SRWLock);
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar6 = *(int *)(local_40 + 0x20);
    iVar16 = 0;
    do {
      puVar1 = local_68 + local_58;
      uVar7 = *local_68;
      uVar14 = *(uint *)(local_40 + 0x20);
      if ((int)uVar7 < (int)*(uint *)(local_40 + 0x20)) {
        uVar14 = uVar7;
      }
      if ((int)uVar14 < 1) {
        uVar14 = 0;
      }
      uVar15 = (ulonglong)uVar14;
      lVar12 = *(longlong *)(local_40 + 0x10);
      uVar8 = *(undefined4 *)(lVar12 + uVar15 * 4);
      uVar9 = *(undefined4 *)(lVar12 + 4 + uVar15 * 4);
      uVar10 = *(undefined4 *)(lVar12 + 8 + uVar15 * 4);
      uVar11 = *(undefined4 *)(lVar12 + 0xc + uVar15 * 4);
      piVar13 = local_78 + local_70;
      *local_78 = -(uint)((int)uVar7 <= iVar6 + -4 && -1 < (int)uVar7);
      puVar2 = local_b8 + local_b0;
      *local_b8 = uVar8;
      puVar3 = local_a8 + local_a0;
      *local_a8 = uVar9;
      puVar4 = local_98 + local_90;
      *local_98 = uVar10;
      puVar5 = local_88 + local_80;
      *local_88 = uVar11;
      iVar16 = iVar16 + 1;
      piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar17 = (int *)(param_1 + 0x3c);
      }
      local_b8 = puVar2;
      local_a8 = puVar3;
      local_98 = puVar4;
      local_88 = puVar5;
      local_78 = piVar13;
      local_68 = puVar1;
    } while (iVar16 < *piVar17);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b0bf6 FUN_1480b0bf6 body=653 status=ok
// SIG undefined FUN_1480b0bf6(void)

void FUN_1480b0bf6(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_148 [40];
  PSRWLOCK local_120;
  int *local_118;
  int local_110;
  undefined4 *local_108;
  undefined8 uStack_100;
  int local_f8;
  undefined4 *local_f0;
  undefined8 uStack_e8;
  int local_e0;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined4 *local_c0;
  undefined8 uStack_b8;
  int local_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  undefined1 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_148093bb8(local_70,param_1);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  local_f8 = 0;
  local_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  FUN_144a98d08(&local_108,param_1);
  local_e0 = 0;
  local_f0 = (undefined4 *)0x0;
  uStack_e8 = 0;
  FUN_144a98d08(&local_f0,param_1);
  local_c8 = 0;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  FUN_144a98d08(&local_d8,param_1);
  local_b0 = 0;
  local_c0 = (undefined4 *)0x0;
  uStack_b8 = 0;
  FUN_144a98d08(&local_c0,param_1);
  FUN_140126e42(&local_118);
  local_120 = (PSRWLOCK)(local_68 + 8);
  AcquireSRWLockExclusive(local_120);
  *local_68 = 1;
  piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar14 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar7 = *(int *)(local_68 + 0x20);
    iVar15 = 0;
    do {
      piVar14 = local_88 + local_78;
      iVar8 = *local_88;
      puVar1 = local_a8 + local_98;
      uVar9 = *local_a8;
      puVar2 = local_c0 + local_b0;
      uVar10 = *local_c0;
      puVar3 = local_d8 + local_c8;
      uVar11 = *local_d8;
      puVar4 = local_f0 + local_e0;
      uVar12 = *local_f0;
      puVar6 = local_108 + local_f8;
      if (iVar8 != 0) {
        uVar17 = *(uint *)(local_68 + 0x20);
        if ((int)uVar9 < (int)*(uint *)(local_68 + 0x20)) {
          uVar17 = uVar9;
        }
        uVar18 = (ulonglong)uVar17;
        if ((int)uVar17 < 1) {
          uVar18 = 0;
        }
        lVar13 = *(longlong *)(local_68 + 0x10);
        *(undefined4 *)(lVar13 + uVar18 * 4) = *local_108;
        *(undefined4 *)(lVar13 + 4 + uVar18 * 4) = uVar12;
        *(undefined4 *)(lVar13 + 8 + uVar18 * 4) = uVar11;
        *(undefined4 *)(lVar13 + 0xc + uVar18 * 4) = uVar10;
      }
      piVar5 = local_118 + local_110;
      *local_118 = -(uint)((iVar8 != 0 && 0 < (int)uVar9) && (int)uVar9 <= iVar7 + -4);
      iVar15 = iVar15 + 1;
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      local_118 = piVar5;
      local_108 = puVar6;
      local_f0 = puVar4;
      local_d8 = puVar3;
      local_c0 = puVar2;
      local_a8 = puVar1;
      local_88 = piVar14;
    } while (iVar15 < *piVar16);
  }
  ReleaseSRWLockExclusive(local_120);
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b0e84 FUN_1480b0e84 body=405 status=ok
// SIG undefined FUN_1480b0e84(void)

void FUN_1480b0e84(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  PSRWLOCK SRWLock;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148093bb8(local_50,param_1);
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  FUN_144a76cd4(local_b8,param_1);
  FUN_144a76cd4(local_c8,param_1);
  SRWLock = (PSRWLOCK)(local_48 + 8);
  AcquireSRWLockShared(SRWLock);
  *local_48 = 1;
  bVar8 = *param_1;
  lVar10 = *(longlong *)(param_1 + 0x80);
  pbVar7 = (byte *)(lVar10 + 0x40);
  if (bVar8 != 0) {
    pbVar7 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar7) {
    iVar6 = 0;
    do {
      piVar1 = local_68 + local_58;
      puVar2 = local_88 + local_78;
      piVar3 = local_a8 + local_98;
      if (*local_68 != 0) {
        uVar5 = *(uint *)(local_48 + 0x20);
        if ((int)*local_88 < (int)*(uint *)(local_48 + 0x20)) {
          uVar5 = *local_88;
        }
        uVar9 = (ulonglong)uVar5;
        if ((int)uVar5 < 1) {
          uVar9 = 0;
        }
        LOCK();
        piVar4 = (int *)(*(longlong *)(local_48 + 0x10) + uVar9 * 4);
        *piVar4 = *piVar4 + *local_a8;
        UNLOCK();
        bVar8 = *param_1;
        lVar10 = *(longlong *)(param_1 + 0x80);
      }
      iVar6 = iVar6 + 1;
      pbVar7 = (byte *)(lVar10 + 0x40);
      if ((bVar8 & 1) != 0) {
        pbVar7 = param_1 + 0x3c;
      }
      local_a8 = piVar3;
      local_88 = puVar2;
      local_68 = piVar1;
    } while (iVar6 < *(int *)pbVar7);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b101a FUN_1480b101a body=405 status=ok
// SIG undefined FUN_1480b101a(void)

void FUN_1480b101a(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  PSRWLOCK SRWLock;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148093bb8(local_50,param_1);
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  FUN_144a76cd4(local_b8,param_1);
  FUN_144a76cd4(local_c8,param_1);
  SRWLock = (PSRWLOCK)(local_48 + 8);
  AcquireSRWLockShared(SRWLock);
  *local_48 = 1;
  bVar8 = *param_1;
  lVar10 = *(longlong *)(param_1 + 0x80);
  pbVar7 = (byte *)(lVar10 + 0x40);
  if (bVar8 != 0) {
    pbVar7 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar7) {
    iVar6 = 0;
    do {
      piVar1 = local_68 + local_58;
      puVar2 = local_88 + local_78;
      puVar3 = local_a8 + local_98;
      if (*local_68 != 0) {
        uVar5 = *(uint *)(local_48 + 0x20);
        if ((int)*local_88 < (int)*(uint *)(local_48 + 0x20)) {
          uVar5 = *local_88;
        }
        uVar9 = (ulonglong)uVar5;
        if ((int)uVar5 < 1) {
          uVar9 = 0;
        }
        LOCK();
        puVar4 = (uint *)(*(longlong *)(local_48 + 0x10) + uVar9 * 4);
        *puVar4 = *puVar4 & *local_a8;
        UNLOCK();
        bVar8 = *param_1;
        lVar10 = *(longlong *)(param_1 + 0x80);
      }
      iVar6 = iVar6 + 1;
      pbVar7 = (byte *)(lVar10 + 0x40);
      if ((bVar8 & 1) != 0) {
        pbVar7 = param_1 + 0x3c;
      }
      local_a8 = puVar3;
      local_88 = puVar2;
      local_68 = piVar1;
    } while (iVar6 < *(int *)pbVar7);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b11b0 FUN_1480b11b0 body=456 status=ok
// SIG undefined FUN_1480b11b0(void)

void FUN_1480b11b0(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  PSRWLOCK SRWLock;
  longlong lVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_148093bb8(local_50,param_1);
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a98d08(&local_c8,param_1);
  FUN_144a76cd4(local_d8,param_1);
  FUN_144a76cd4(local_e8,param_1);
  SRWLock = (PSRWLOCK)(local_48 + 8);
  AcquireSRWLockShared(SRWLock);
  *local_48 = 1;
  bVar7 = *param_1;
  lVar11 = *(longlong *)(param_1 + 0x80);
  pbVar9 = (byte *)(lVar11 + 0x40);
  if (bVar7 != 0) {
    pbVar9 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar9) {
    iVar8 = 0;
    do {
      piVar1 = local_68 + local_58;
      puVar2 = local_88 + local_78;
      piVar3 = local_a8 + local_98;
      piVar4 = local_c8 + local_b8;
      if (*local_68 != 0) {
        uVar6 = *(uint *)(local_48 + 0x20);
        if ((int)*local_88 < (int)*(uint *)(local_48 + 0x20)) {
          uVar6 = *local_88;
        }
        uVar10 = (ulonglong)uVar6;
        if ((int)uVar6 < 1) {
          uVar10 = 0;
        }
        piVar5 = (int *)(*(longlong *)(local_48 + 0x10) + uVar10 * 4);
        LOCK();
        if (*local_c8 == *piVar5) {
          *piVar5 = *local_a8;
        }
        UNLOCK();
        bVar7 = *param_1;
        lVar11 = *(longlong *)(param_1 + 0x80);
      }
      iVar8 = iVar8 + 1;
      pbVar9 = (byte *)(lVar11 + 0x40);
      if ((bVar7 & 1) != 0) {
        pbVar9 = param_1 + 0x3c;
      }
      local_c8 = piVar4;
      local_a8 = piVar3;
      local_88 = puVar2;
      local_68 = piVar1;
    } while (iVar8 < *(int *)pbVar9);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480b1379 FUN_1480b1379 body=422 status=ok
// SIG undefined FUN_1480b1379(void)

void FUN_1480b1379(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  PSRWLOCK SRWLock;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148093bb8(local_50,param_1);
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  FUN_144a76cd4(local_b8,param_1);
  FUN_144a76cd4(local_c8);
  SRWLock = (PSRWLOCK)(local_48 + 8);
  AcquireSRWLockShared(SRWLock);
  *local_48 = 1;
  bVar11 = *param_1;
  lVar12 = *(longlong *)(param_1 + 0x80);
  pbVar9 = (byte *)(lVar12 + 0x40);
  if (bVar11 != 0) {
    pbVar9 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar9) {
    iVar10 = 0;
    do {
      piVar1 = local_68 + local_58;
      puVar2 = local_88 + local_78;
      piVar3 = local_a8 + local_98;
      if (*local_68 != 0) {
        uVar13 = *(uint *)(local_48 + 0x20);
        if ((int)*local_88 < (int)*(uint *)(local_48 + 0x20)) {
          uVar13 = *local_88;
        }
        if ((int)uVar13 < 1) {
          uVar13 = 0;
        }
        iVar6 = *local_a8;
        lVar7 = *(longlong *)(local_48 + 0x10);
        iVar8 = *(int *)(lVar7 + (ulonglong)uVar13 * 4);
        if (iVar8 < iVar6) {
          do {
            piVar4 = (int *)(lVar7 + (ulonglong)uVar13 * 4);
            LOCK();
            iVar5 = *piVar4;
            if (iVar8 == iVar5) {
              *piVar4 = iVar6;
              iVar5 = iVar8;
            }
            iVar8 = iVar5;
            UNLOCK();
          } while (iVar8 < iVar6);
          bVar11 = *param_1;
          lVar12 = *(longlong *)(param_1 + 0x80);
        }
      }
      iVar10 = iVar10 + 1;
      pbVar9 = (byte *)(lVar12 + 0x40);
      if ((bVar11 & 1) != 0) {
        pbVar9 = param_1 + 0x3c;
      }
      local_a8 = piVar3;
      local_88 = puVar2;
      local_68 = piVar1;
    } while (iVar10 < *(int *)pbVar9);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480b1520 FUN_1480b1520 body=422 status=ok
// SIG undefined FUN_1480b1520(void)

void FUN_1480b1520(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  PSRWLOCK SRWLock;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148093bb8(local_50,param_1);
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  FUN_144a76cd4(local_b8,param_1);
  FUN_144a76cd4(local_c8);
  SRWLock = (PSRWLOCK)(local_48 + 8);
  AcquireSRWLockShared(SRWLock);
  *local_48 = 1;
  bVar11 = *param_1;
  lVar12 = *(longlong *)(param_1 + 0x80);
  pbVar9 = (byte *)(lVar12 + 0x40);
  if (bVar11 != 0) {
    pbVar9 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar9) {
    iVar10 = 0;
    do {
      piVar1 = local_68 + local_58;
      puVar2 = local_88 + local_78;
      piVar3 = local_a8 + local_98;
      if (*local_68 != 0) {
        uVar13 = *(uint *)(local_48 + 0x20);
        if ((int)*local_88 < (int)*(uint *)(local_48 + 0x20)) {
          uVar13 = *local_88;
        }
        if ((int)uVar13 < 1) {
          uVar13 = 0;
        }
        iVar6 = *local_a8;
        lVar7 = *(longlong *)(local_48 + 0x10);
        iVar8 = *(int *)(lVar7 + (ulonglong)uVar13 * 4);
        if (iVar6 < iVar8) {
          do {
            piVar4 = (int *)(lVar7 + (ulonglong)uVar13 * 4);
            LOCK();
            iVar5 = *piVar4;
            if (iVar8 == iVar5) {
              *piVar4 = iVar6;
              iVar5 = iVar8;
            }
            iVar8 = iVar5;
            UNLOCK();
          } while (iVar6 < iVar8);
          bVar11 = *param_1;
          lVar12 = *(longlong *)(param_1 + 0x80);
        }
      }
      iVar10 = iVar10 + 1;
      pbVar9 = (byte *)(lVar12 + 0x40);
      if ((bVar11 & 1) != 0) {
        pbVar9 = param_1 + 0x3c;
      }
      local_a8 = piVar3;
      local_88 = puVar2;
      local_68 = piVar1;
    } while (iVar10 < *(int *)pbVar9);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480b16c7 FUN_1480b16c7 body=405 status=ok
// SIG undefined FUN_1480b16c7(void)

void FUN_1480b16c7(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  PSRWLOCK SRWLock;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148093bb8(local_50,param_1);
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  FUN_144a76cd4(local_b8,param_1);
  FUN_144a76cd4(local_c8,param_1);
  SRWLock = (PSRWLOCK)(local_48 + 8);
  AcquireSRWLockShared(SRWLock);
  *local_48 = 1;
  bVar8 = *param_1;
  lVar10 = *(longlong *)(param_1 + 0x80);
  pbVar7 = (byte *)(lVar10 + 0x40);
  if (bVar8 != 0) {
    pbVar7 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar7) {
    iVar6 = 0;
    do {
      piVar1 = local_68 + local_58;
      puVar2 = local_88 + local_78;
      puVar3 = local_a8 + local_98;
      if (*local_68 != 0) {
        uVar5 = *(uint *)(local_48 + 0x20);
        if ((int)*local_88 < (int)*(uint *)(local_48 + 0x20)) {
          uVar5 = *local_88;
        }
        uVar9 = (ulonglong)uVar5;
        if ((int)uVar5 < 1) {
          uVar9 = 0;
        }
        LOCK();
        puVar4 = (uint *)(*(longlong *)(local_48 + 0x10) + uVar9 * 4);
        *puVar4 = *puVar4 | *local_a8;
        UNLOCK();
        bVar8 = *param_1;
        lVar10 = *(longlong *)(param_1 + 0x80);
      }
      iVar6 = iVar6 + 1;
      pbVar7 = (byte *)(lVar10 + 0x40);
      if ((bVar8 & 1) != 0) {
        pbVar7 = param_1 + 0x3c;
      }
      local_a8 = puVar3;
      local_88 = puVar2;
      local_68 = piVar1;
    } while (iVar6 < *(int *)pbVar7);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b185d FUN_1480b185d body=405 status=ok
// SIG undefined FUN_1480b185d(void)

void FUN_1480b185d(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  PSRWLOCK SRWLock;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148093bb8(local_50,param_1);
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  FUN_144a76cd4(local_b8,param_1);
  FUN_144a76cd4(local_c8,param_1);
  SRWLock = (PSRWLOCK)(local_48 + 8);
  AcquireSRWLockShared(SRWLock);
  *local_48 = 1;
  bVar8 = *param_1;
  lVar10 = *(longlong *)(param_1 + 0x80);
  pbVar7 = (byte *)(lVar10 + 0x40);
  if (bVar8 != 0) {
    pbVar7 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar7) {
    iVar6 = 0;
    do {
      piVar1 = local_68 + local_58;
      puVar2 = local_88 + local_78;
      puVar3 = local_a8 + local_98;
      if (*local_68 != 0) {
        uVar5 = *(uint *)(local_48 + 0x20);
        if ((int)*local_88 < (int)*(uint *)(local_48 + 0x20)) {
          uVar5 = *local_88;
        }
        uVar9 = (ulonglong)uVar5;
        if ((int)uVar5 < 1) {
          uVar9 = 0;
        }
        LOCK();
        puVar4 = (uint *)(*(longlong *)(local_48 + 0x10) + uVar9 * 4);
        *puVar4 = *puVar4 ^ *local_a8;
        UNLOCK();
        bVar8 = *param_1;
        lVar10 = *(longlong *)(param_1 + 0x80);
      }
      iVar6 = iVar6 + 1;
      pbVar7 = (byte *)(lVar10 + 0x40);
      if ((bVar8 & 1) != 0) {
        pbVar7 = param_1 + 0x3c;
      }
      local_a8 = puVar3;
      local_88 = puVar2;
      local_68 = piVar1;
    } while (iVar6 < *(int *)pbVar7);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480b19f3 FUN_1480b19f3 body=544 status=ok
// SIG undefined FUN_1480b19f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480b19f3(char *param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  PSRWLOCK SRWLock;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 auVar14 [16];
  longlong lVar15;
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  ulonglong local_40;
  longlong lVar13;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148093bb8(local_50,param_1);
  uVar10 = 0;
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  SRWLock = (PSRWLOCK)(local_48 + 8);
  AcquireSRWLockExclusive(SRWLock);
  *local_48 = 1;
  auVar3 = _DAT_149931e80;
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  iVar5 = *piVar6;
  if (0 < iVar5) {
    piVar6 = local_68;
    puVar11 = local_88;
    bVar4 = 0;
    do {
      bVar2 = bVar4;
      local_68 = piVar6 + local_58;
      local_88 = puVar11 + local_78;
      bVar12 = *piVar6 != 0;
      if (bVar12) {
        uVar10 = *puVar11;
      }
      iVar5 = iVar5 + -1;
      piVar6 = local_68;
      puVar11 = local_88;
      bVar4 = bVar2 | bVar12;
    } while (iVar5 != 0);
    if ((bool)(bVar2 | bVar12)) {
      if ((local_48[1] == '\x01') && ((longlong)*(int *)(local_48 + 0x18) != 0)) {
        lVar1 = *(longlong *)(local_48 + 0x10);
        uVar7 = (longlong)*(int *)(local_48 + 0x18) + 0x3fffffffffffffff;
        uVar8 = uVar7 & 0x3fffffffffffffff;
        auVar14._8_4_ = (int)uVar8;
        auVar14._0_8_ = uVar8;
        auVar14._12_4_ = (int)(uVar8 >> 0x20);
        uVar9 = 0;
        auVar16 = pmovsxbq(in_XMM1,0x302);
        auVar17 = pmovsxbq(in_XMM2,0x100);
        auVar14 = auVar14 | _DAT_149931e80;
        lVar13 = auVar14._0_8_;
        do {
          lVar15 = auVar14._8_8_;
          if ((bool)(~(lVar13 < (longlong)(uVar9 ^ auVar3._0_8_)) & 1)) {
            *(undefined4 *)(lVar1 + uVar9 * 4) = uVar10;
          }
          auVar18._8_4_ = (int)uVar9;
          auVar18._0_8_ = uVar9;
          auVar18._12_4_ = (int)(uVar9 >> 0x20);
          if ((longlong)((auVar18._8_8_ | auVar17._8_8_) ^ auVar3._8_8_) <= lVar15) {
            *(undefined4 *)(lVar1 + 4 + uVar9 * 4) = uVar10;
          }
          auVar18 = (auVar18 | auVar16) ^ auVar3;
          if (auVar18._0_8_ <= lVar13) {
            *(undefined4 *)(lVar1 + 8 + uVar9 * 4) = uVar10;
          }
          if (auVar18._8_8_ <= lVar15) {
            *(undefined4 *)(lVar1 + 0xc + uVar9 * 4) = uVar10;
          }
          uVar9 = uVar9 + 4;
        } while ((uVar8 - ((uint)uVar7 & 3)) + 4 != uVar9);
      }
      *(undefined4 *)(local_48 + 0x28) = uVar10;
      local_48[0x2c] = 1;
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480b1c14 FUN_1480b1c14 body=544 status=ok
// SIG undefined FUN_1480b1c14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480b1c14(char *param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  PSRWLOCK SRWLock;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 auVar14 [16];
  longlong lVar15;
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  ulonglong local_40;
  longlong lVar13;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148093bb8(local_50,param_1);
  uVar10 = 0;
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_1);
  SRWLock = (PSRWLOCK)(local_48 + 8);
  AcquireSRWLockExclusive(SRWLock);
  *local_48 = 1;
  auVar3 = _DAT_149931e80;
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  iVar5 = *piVar6;
  if (0 < iVar5) {
    piVar6 = local_68;
    puVar11 = local_88;
    bVar4 = 0;
    do {
      bVar2 = bVar4;
      local_68 = piVar6 + local_58;
      local_88 = puVar11 + local_78;
      bVar12 = *piVar6 != 0;
      if (bVar12) {
        uVar10 = *puVar11;
      }
      iVar5 = iVar5 + -1;
      piVar6 = local_68;
      puVar11 = local_88;
      bVar4 = bVar2 | bVar12;
    } while (iVar5 != 0);
    if ((bool)(bVar2 | bVar12)) {
      if ((local_48[1] == '\x01') && ((longlong)*(int *)(local_48 + 0x18) != 0)) {
        lVar1 = *(longlong *)(local_48 + 0x10);
        uVar7 = (longlong)*(int *)(local_48 + 0x18) + 0x3fffffffffffffff;
        uVar8 = uVar7 & 0x3fffffffffffffff;
        auVar14._8_4_ = (int)uVar8;
        auVar14._0_8_ = uVar8;
        auVar14._12_4_ = (int)(uVar8 >> 0x20);
        uVar9 = 0;
        auVar16 = pmovsxbq(in_XMM1,0x302);
        auVar17 = pmovsxbq(in_XMM2,0x100);
        auVar14 = auVar14 | _DAT_149931e80;
        lVar13 = auVar14._0_8_;
        do {
          lVar15 = auVar14._8_8_;
          if ((bool)(~(lVar13 < (longlong)(uVar9 ^ auVar3._0_8_)) & 1)) {
            *(undefined4 *)(lVar1 + uVar9 * 4) = uVar10;
          }
          auVar18._8_4_ = (int)uVar9;
          auVar18._0_8_ = uVar9;
          auVar18._12_4_ = (int)(uVar9 >> 0x20);
          if ((longlong)((auVar18._8_8_ | auVar17._8_8_) ^ auVar3._8_8_) <= lVar15) {
            *(undefined4 *)(lVar1 + 4 + uVar9 * 4) = uVar10;
          }
          auVar18 = (auVar18 | auVar16) ^ auVar3;
          if (auVar18._0_8_ <= lVar13) {
            *(undefined4 *)(lVar1 + 8 + uVar9 * 4) = uVar10;
          }
          if (auVar18._8_8_ <= lVar15) {
            *(undefined4 *)(lVar1 + 0xc + uVar9 * 4) = uVar10;
          }
          uVar9 = uVar9 + 4;
        } while ((uVar8 - ((uint)uVar7 & 3)) + 4 != uVar9);
      }
      *(undefined4 *)(local_48 + 0x28) = uVar10;
      local_48[0x2c] = 1;
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480b1e36 FUN_1480b1e36 body=95 status=ok
// SIG undefined FUN_1480b1e36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480b1e36(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  DAT_14cb38a98 = 0;
  lVar1 = *param_1;
  iVar2 = (int)((ulonglong)(param_1[1] - lVar1) >> 3) * -0x55555555;
  DAT_14cb38aa0 = iVar2;
  if (iVar2 == 0) {
    _DAT_14cb38aa4 = 0;
    return;
  }
  FUN_1480b1e96(iVar2);
  FUN_1480b1f02(DAT_14cb38a98,lVar1,iVar2);
  return;
}



// FUNCTION 1480b1e96 FUN_1480b1e96 body=108 status=ok
// SIG undefined FUN_1480b1e96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1480b1e96(int param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_1 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_1 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(&DAT_14cb38a98,0,uVar5,0x18,8);
  }
  _DAT_14cb38aa4 = iVar4;
  return uVar3;
}



// FUNCTION 1480b1f02 FUN_1480b1f02 body=79 status=ok
// SIG undefined FUN_1480b1f02(void)

void FUN_1480b1f02(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 8 + lVar2);
    puVar1[-1] = *(undefined8 *)(param_2 + lVar2);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    FUN_1412f8090();
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1480b1f51 FUN_1480b1f51 body=42 status=ok
// SIG undefined FUN_1480b1f51(void)

void FUN_1480b1f51(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1480b1f7c FUN_1480b1f7c body=32 status=ok
// SIG undefined FUN_1480b1f7c(void)

undefined8 FUN_1480b1f7c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FNDIPhysicsAssetBuffer");
  return param_2;
}



// FUNCTION 1480b1fa2 FUN_1480b1fa2 body=48 status=ok
// SIG undefined FUN_1480b1fa2(void)

void FUN_1480b1fa2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe950,0x10);
  }
  return;
}



// FUNCTION 1480b1fd2 FUN_1480b1fd2 body=260 status=ok
// SIG undefined FUN_1480b1fd2(void)

void FUN_1480b1fd2(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = 0x10;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x3850);
  lVar2 = 0x3850;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x7090);
  lVar2 = 0x7090;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x8350);
  lVar2 = 0x8350;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x9610);
  lVar2 = 0x9610;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xa8d0);
  lVar2 = 0xa8d0;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xbb90);
  lVar2 = 0xbb90;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xce50);
  lVar2 = 0xce50;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xe110);
  lVar2 = 0xe110;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xe750);
  return;
}



// FUNCTION 1480b20d6 FUN_1480b20d6 body=29 status=ok
// SIG undefined FUN_1480b20d6(void)

undefined8 FUN_1480b20d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480b2108 FUN_1480b2108 body=93 status=ok
// SIG undefined FUN_1480b2108(void)

void FUN_1480b2108(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad87ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480b2166 FUN_1480b2166 body=93 status=ok
// SIG undefined FUN_1480b2166(void)

void FUN_1480b2166(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad87ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480b21c4 FUN_1480b21c4 body=126 status=ok
// SIG undefined FUN_1480b21c4(void)

void FUN_1480b21c4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad87ce0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480b2233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480b2248 FUN_1480b2248 body=29 status=ok
// SIG undefined FUN_1480b2248(void)

undefined8 FUN_1480b2248(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480b227a FUN_1480b227a body=93 status=ok
// SIG undefined FUN_1480b227a(void)

void FUN_1480b227a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad87d50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480b22d8 FUN_1480b22d8 body=93 status=ok
// SIG undefined FUN_1480b22d8(void)

void FUN_1480b22d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad87d50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


