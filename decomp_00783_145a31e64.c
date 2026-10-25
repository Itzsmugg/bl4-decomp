// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145a31e64 FUN_145a31e64 body=91 status=ok
// SIG undefined FUN_145a31e64(void)

undefined8 * FUN_145a31e64(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_14117405e(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_14117405e();
  }
  FUN_141067fd6(param_1,param_2);
  *param_1 = &PTR_FUN_14b9a1790;
  return param_1;
}



// FUNCTION 145a31ecc FUN_145a31ecc body=31 status=ok
// SIG undefined FUN_145a31ecc(void)

void FUN_145a31ecc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x98,0x10);
  FUN_145a31eec(uVar1);
  return;
}



// FUNCTION 145a31eec FUN_145a31eec body=162 status=ok
// SIG undefined FUN_145a31eec(void)

undefined8 * FUN_145a31eec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be8b960;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xb] = &PTR_FUN_14be8b9b0;
  param_1[0xd] = 0;
  param_1[0xe] = param_1 + 1;
  FUN_145a31f8e(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xf] = &PTR_FUN_14be8bbe0;
  param_1[0x11] = 0;
  param_1[0x12] = param_1 + 1;
  FUN_145a31f8e(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return param_1;
}



// FUNCTION 145a31f8e FUN_145a31f8e body=105 status=ok
// SIG undefined FUN_145a31f8e(void)

void FUN_145a31f8e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  lVar2 = param_1 + 8;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  FUN_145a31ff8(&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145a31fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,local_28,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48,local_28);
}



// FUNCTION 145a31ff8 FUN_145a31ff8 body=120 status=ok
// SIG undefined FUN_145a31ff8(void)

undefined8 * FUN_145a31ff8(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e7c8) {
    FUN_144b3d300(&DAT_14c99e7c8);
    if (DAT_14c99e7c8 == -1) {
      FUN_1446f470e(&DAT_14c99e7c0,L"External Audio Endpoint",1);
      _Init_thread_footer(&DAT_14c99e7c8);
    }
  }
  *param_1 = DAT_14c99e7c0;
  return param_1;
}



// FUNCTION 145a32070 FUN_145a32070 body=226 status=ok
// SIG undefined FUN_145a32070(void)

longlong * FUN_145a32070(longlong *param_1)

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
  pcVar13 = FUN_1462ce49e;
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



// FUNCTION 145a32158 FUN_145a32158 body=140 status=ok
// SIG undefined FUN_145a32158(void)

undefined1 * FUN_145a32158(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145a321e4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairStrandsVoxelCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9dfed8;
  return &LAB_145a32154;
}



// FUNCTION 145a321e4 FUN_145a321e4 body=258 status=ok
// SIG undefined FUN_145a321e4(void)

void FUN_145a321e4(void)

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
              0x110) < DAT_14c9dff58) {
    FUN_144b3d300(&DAT_14c9dff58);
    if (DAT_14c9dff58 == -1) {
      FUN_141470a5a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsVoxelCommonParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0xa1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dfed8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e69b);
      _Init_thread_footer(&DAT_14c9dff58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a322ec FUN_145a322ec body=138 status=ok
// SIG undefined FUN_145a322ec(void)

code * FUN_145a322ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DensityScale_Environment";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0284;
}



// FUNCTION 145a32376 FUN_145a32376 body=138 status=ok
// SIG undefined FUN_145a32376(void)

code * FUN_145a32376(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SteppingScale_Shadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c000000b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a005c;
}



// FUNCTION 145a32400 FUN_145a32400 body=95 status=ok
// SIG undefined FUN_145a32400(void)

ulonglong FUN_145a32400(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145a32442:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145a32442;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 145a32460 FUN_145a32460 body=79 status=ok
// SIG undefined FUN_145a32460(void)

void FUN_145a32460(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 == 0) {
    cVar3 = '\x01';
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      cVar3 = FUN_145a324b0(*(undefined8 *)(lVar2 + lVar4));
      if (cVar3 == '\0') break;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  FUN_145a324b4(param_1,cVar3);
  return;
}



// FUNCTION 145a324b0 FUN_145a324b0 body=4 status=ok
// SIG undefined FUN_145a324b0(void)

undefined1 FUN_145a324b0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



// FUNCTION 145a324b4 FUN_145a324b4 body=789 status=ok
// SIG undefined FUN_145a324b4(void)

void FUN_145a324b4(undefined8 *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 5) == param_2) goto LAB_145a324d5;
  *(char *)(param_1 + 5) = param_2;
  lVar6 = FUN_140d1d7e4();
  FUN_1409c4e4e(lVar6 + 0x10c,local_58);
  FUN_144a659ac(local_48,&local_90,1);
  FUN_14890cef6(*param_1,&local_b8);
  if (((int)local_90 == (int)local_b8) && (local_88 == local_b0)) {
    uVar8 = *param_1;
    FUN_140ac173c(&local_b8,local_58);
    local_90 = local_b8;
    local_88 = local_b0;
    uStack_84 = uStack_ac;
    local_7c = local_a4;
    local_78 = local_a0;
    local_70 = local_98;
    local_6c = 0;
    FUN_140d7f1a8(uVar8,&local_68);
    if (local_68 != (longlong *)0x0) {
      lVar6 = (**(code **)(*local_68 + 8))(local_68);
      lVar7 = FUN_14050ce48();
      if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) {
        if ((((double)local_68[0xd] == 0.0) && (!NAN((double)local_68[0xd]))) &&
           (((double)local_68[0xe] == 0.0 && (!NAN((double)local_68[0xe]))))) {
          if (((double)local_68[0xf] == 0.0) && (!NAN((double)local_68[0xf]))) {
            lVar7 = FUN_140d1d7e4();
            lVar6 = *(longlong *)(lVar7 + 0x148);
            local_68[0xd] = *(longlong *)(lVar7 + 0x140);
            local_68[0xe] = lVar6;
            local_68[0xf] = *(longlong *)(lVar7 + 0x150);
          }
        }
        puVar2 = param_1 + 1;
        if (*(char *)(param_1 + 5) == '\x01') {
          local_c0 = *(undefined4 *)(param_1 + 2);
          local_c8 = *puVar2;
          FUN_148d7d14e(local_68);
          cVar5 = FUN_14141775e(*param_1);
          if (cVar5 == '\0') {
            FUN_148d7d280(&local_90);
            if (local_90 != 0) {
              *(undefined4 *)(local_90 + 0x18) = *(undefined4 *)(param_1 + 2);
              *(undefined8 *)(local_90 + 0x10) = *puVar2;
              *(undefined1 *)(local_90 + 0x1c) = 1;
LAB_145a3273c:
              local_b8 = local_90;
              local_b0 = local_88;
              uStack_ac = uStack_84;
              if (CONCAT44(uStack_84,local_88) != 0) {
                LOCK();
                piVar1 = (int *)(CONCAT44(uStack_84,local_88) + 8);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              uVar8 = FUN_140d80c3e(*param_1);
              FUN_141000642(uVar8,&local_b8);
              plVar4 = (longlong *)CONCAT44(uStack_ac,local_b0);
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
            }
LAB_145a32792:
            plVar4 = (longlong *)CONCAT44(uStack_84,local_88);
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
          }
        }
        else {
          local_d0 = *(undefined4 *)(param_1 + 2);
          local_d8 = *puVar2;
          FUN_148d7d1f0(local_68);
          cVar5 = FUN_14141775e(*param_1);
          if (cVar5 == '\0') {
            FUN_148d7d280(&local_90);
            if (local_90 != 0) {
              *(undefined4 *)(local_90 + 0x18) = *(undefined4 *)(param_1 + 2);
              *(undefined8 *)(local_90 + 0x10) = *puVar2;
              *(undefined1 *)(local_90 + 0x1c) = 0;
              goto LAB_145a3273c;
            }
            goto LAB_145a32792;
          }
        }
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
LAB_145a324d5:
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a327ca FUN_145a327ca body=223 status=ok
// SIG undefined FUN_145a327ca(void)

bool FUN_145a327ca(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined6 uStack_46;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar5 = CONCAT62(uStack_46,local_48);
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    pcVar2 = *(code **)(param_1 + 0x20);
    local_48 = *param_3;
    local_40 = *(longlong *)(param_3 + 4);
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (*pcVar2)(iVar1 + lVar4,param_2,&local_48);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a328aa FUN_145a328aa body=45 status=ok
// SIG undefined FUN_145a328aa(void)

void FUN_145a328aa(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((param_2 != 0) && (lVar1 == param_2)) {
    *(undefined1 *)(param_1 + 0x4e) = 1;
  }
  return;
}



// FUNCTION 145a328d8 FUN_145a328d8 body=40 status=ok
// SIG undefined FUN_145a328d8(void)

undefined8 FUN_145a328d8(undefined8 param_1,int param_2)

{
  FUN_145a32900();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a32900 FUN_145a32900 body=326 status=ok
// SIG undefined FUN_145a32900(void)

void FUN_145a32900(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a8dc380;
  param_1[6] = &PTR_FUN_14a8dc640;
  plVar3 = (longlong *)param_1[0x32];
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
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145a32a46(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145a32a7c(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_145a32ae8(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145a32ab2(param_1 + 9);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a32a46 FUN_145a32a46 body=53 status=ok
// SIG undefined FUN_145a32a46(void)

void FUN_145a32a46(longlong *param_1)

{
  FUN_145a32b20();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a32a7c FUN_145a32a7c body=53 status=ok
// SIG undefined FUN_145a32a7c(void)

void FUN_145a32a7c(longlong *param_1)

{
  FUN_145a32b78();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a32ab2 FUN_145a32ab2 body=53 status=ok
// SIG undefined FUN_145a32ab2(void)

void FUN_145a32ab2(longlong *param_1)

{
  FUN_145a32bd0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a32ae8 FUN_145a32ae8 body=55 status=ok
// SIG undefined FUN_145a32ae8(void)

void FUN_145a32ae8(longlong *param_1)

{
  FUN_145a32c2a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a32b20 FUN_145a32b20 body=88 status=ok
// SIG undefined FUN_145a32b20(void)

void FUN_145a32b20(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
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



// FUNCTION 145a32b78 FUN_145a32b78 body=88 status=ok
// SIG undefined FUN_145a32b78(void)

void FUN_145a32b78(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
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



// FUNCTION 145a32bd0 FUN_145a32bd0 body=90 status=ok
// SIG undefined FUN_145a32bd0(void)

void FUN_145a32bd0(longlong param_1)

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



// FUNCTION 145a32c2a FUN_145a32c2a body=123 status=ok
// SIG undefined FUN_145a32c2a(void)

void FUN_145a32c2a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 145a32ca6 FUN_145a32ca6 body=208 status=ok
// SIG undefined FUN_145a32ca6(void)

void FUN_145a32ca6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140115e24();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    if (*(longlong *)(param_1 + 0x188) == 0) {
      FUN_1446f470e(&local_20,L"GameplayDebug_Input",1);
      local_30 = 0;
      local_38 = 0;
      lVar2 = FUN_145a32d77(param_1,local_20,0,0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x188) = lVar2;
      FUN_140b506a4(lVar2);
    }
    cVar1 = FUN_1408c7dae(*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      FUN_1408c9530(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x188),0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a32d77 FUN_145a32d77 body=221 status=ok
// SIG undefined FUN_145a32d77(void)

undefined8
FUN_145a32d77(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_141262dda();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a32e56 FUN_145a32e56 body=537 status=ok
// SIG undefined FUN_145a32e56(void)

undefined8 * FUN_145a32e56(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  float *pfVar2;
  undefined1 uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = param_2;
  uVar3 = FUN_14010fb43(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 8) * 2));
  *(undefined1 *)(param_1 + 0xc) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  pfVar2 = DAT_14ca45390;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    fVar7 = *DAT_14ca45390;
  }
  else {
    bVar4 = FUN_144a61b4f();
    lVar6 = DAT_14ca45378;
    fVar7 = pfVar2[bVar4 ^ 1];
    if (*(int *)(lVar1 + 0xc60) != 0x40000002) {
      bVar4 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar4 ^ 1);
      goto LAB_145a32f10;
    }
  }
  uVar5 = 0;
  lVar6 = DAT_14ca45378;
LAB_145a32f10:
  FUN_141470b3e(param_1 + 0xd,(double)*(float *)(lVar6 + uVar5 * 4),(double)fVar7);
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  FUN_141222082(param_1 + 100,0);
  param_1[0x87] = 0;
  param_1[0x88] = 0x8000000000;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0x8000000000;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0xffffffff;
  param_1[0x92] = 0x1010100000010;
  *(undefined4 *)(param_1 + 0x93) = 0x10;
  param_1[0x94] = L"SceneCulling.CellHeaders";
  *(undefined1 *)(param_1 + 0x95) = 1;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0x10;
  param_1[0x98] = L"SceneCulling.ItemChunks";
  *(undefined1 *)(param_1 + 0x99) = 1;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0x10;
  param_1[0x9c] = L"SceneCulling.Items";
  *(undefined1 *)(param_1 + 0x9d) = 1;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0x10;
  param_1[0xa0] = L"SceneCulling.CellBlockData";
  *(undefined1 *)(param_1 + 0xa1) = 1;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0x10;
  param_1[0xa4] = L"SceneCulling.ExplicitCellBounds";
  *(undefined1 *)(param_1 + 0xa5) = 1;
  param_1[0xa6] = 0;
  return param_1;
}



// FUNCTION 145a33070 FUN_145a33070 body=102 status=ok
// SIG undefined FUN_145a33070(void)

undefined8 * FUN_145a33070(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  FUN_14473de44(param_1 + 4);
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x100000000;
  param_1[0xe] = 0;
  param_1[10] = &DAT_100000001;
  FUN_144718544(param_1 + 0xb);
  return param_1;
}



// FUNCTION 145a330e2 FUN_145a330e2 body=43 status=ok
// SIG undefined FUN_145a330e2(void)

undefined8 * FUN_145a330e2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a1c1a40;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 145a33114 FUN_145a33114 body=103 status=ok
// SIG undefined FUN_145a33114(void)

undefined4 FUN_145a33114(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar2 = FUN_14019108b(*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_1;
    if (2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf]) {
      puVar3 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar3 = DAT_14ca96af8;
      }
      if (((uint)puVar3[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return CONCAT31((int3)((uint)~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] >> 8),
                        (~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) == 0);
      }
    }
  }
  return 0;
}



// FUNCTION 145a33186 FUN_145a33186 body=43 status=ok
// SIG undefined FUN_145a33186(void)

undefined8 * FUN_145a33186(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14a5d9b30;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 145a331bc FUN_145a331bc body=43 status=ok
// SIG undefined FUN_145a331bc(void)

undefined8 * FUN_145a331bc(undefined8 *param_1)

{
  FUN_14598c1ae();
  *param_1 = &PTR_FUN_14a5e02b0;
  param_1[5] = &PTR_LAB_14a5e0590;
  return param_1;
}



// FUNCTION 145a331f2 FUN_145a331f2 body=43 status=ok
// SIG undefined FUN_145a331f2(void)

undefined8 * FUN_145a331f2(undefined8 *param_1)

{
  FUN_145a5be18();
  *param_1 = &PTR_FUN_14a5e2a20;
  param_1[5] = &PTR_LAB_14a5e2d00;
  return param_1;
}



// FUNCTION 145a33228 FUN_145a33228 body=43 status=ok
// SIG undefined FUN_145a33228(void)

undefined8 * FUN_145a33228(undefined8 *param_1)

{
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14a632300;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 145a3325e FUN_145a3325e body=43 status=ok
// SIG undefined FUN_145a3325e(void)

undefined8 * FUN_145a3325e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_145c753fc(param_1,uVar1);
  *param_1 = &PTR_FUN_14a669c70;
  return param_1;
}



// FUNCTION 145a33294 FUN_145a33294 body=43 status=ok
// SIG undefined FUN_145a33294(void)

undefined8 * FUN_145a33294(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a66e630;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 145a332ca FUN_145a332ca body=43 status=ok
// SIG undefined FUN_145a332ca(void)

undefined8 * FUN_145a332ca(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6a9af0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 145a33300 FUN_145a33300 body=43 status=ok
// SIG undefined FUN_145a33300(void)

undefined8 * FUN_145a33300(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6e2a20;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 145a33336 FUN_145a33336 body=43 status=ok
// SIG undefined FUN_145a33336(void)

undefined8 * FUN_145a33336(undefined8 *param_1)

{
  FUN_14110ae2a();
  *param_1 = &PTR_FUN_14a75a530;
  param_1[5] = &PTR_FUN_14a75a860;
  return param_1;
}



// FUNCTION 145a3337c FUN_145a3337c body=29 status=ok
// SIG undefined FUN_145a3337c(void)

undefined8 FUN_145a3337c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a333b4 FUN_145a333b4 body=29 status=ok
// SIG undefined FUN_145a333b4(void)

undefined8 FUN_145a333b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a333ec FUN_145a333ec body=29 status=ok
// SIG undefined FUN_145a333ec(void)

undefined8 FUN_145a333ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33424 FUN_145a33424 body=29 status=ok
// SIG undefined FUN_145a33424(void)

undefined8 FUN_145a33424(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3345c FUN_145a3345c body=29 status=ok
// SIG undefined FUN_145a3345c(void)

undefined8 FUN_145a3345c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3347a FUN_145a3347a body=126 status=ok
// SIG undefined FUN_145a3347a(void)

longlong * FUN_145a3347a(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_144a7937e();
  FUN_14123d74c(uVar2,param_1,param_3,param_2,uVar1 | param_4 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 145a33512 FUN_145a33512 body=29 status=ok
// SIG undefined FUN_145a33512(void)

undefined8 FUN_145a33512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3354a FUN_145a3354a body=29 status=ok
// SIG undefined FUN_145a3354a(void)

undefined8 FUN_145a3354a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33582 FUN_145a33582 body=29 status=ok
// SIG undefined FUN_145a33582(void)

undefined8 FUN_145a33582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a335ba FUN_145a335ba body=29 status=ok
// SIG undefined FUN_145a335ba(void)

undefined8 FUN_145a335ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a335f2 FUN_145a335f2 body=29 status=ok
// SIG undefined FUN_145a335f2(void)

undefined8 FUN_145a335f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3362a FUN_145a3362a body=29 status=ok
// SIG undefined FUN_145a3362a(void)

undefined8 FUN_145a3362a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33662 FUN_145a33662 body=29 status=ok
// SIG undefined FUN_145a33662(void)

undefined8 FUN_145a33662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3369a FUN_145a3369a body=29 status=ok
// SIG undefined FUN_145a3369a(void)

undefined8 FUN_145a3369a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a336d2 FUN_145a336d2 body=29 status=ok
// SIG undefined FUN_145a336d2(void)

undefined8 FUN_145a336d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3370a FUN_145a3370a body=29 status=ok
// SIG undefined FUN_145a3370a(void)

undefined8 FUN_145a3370a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33742 FUN_145a33742 body=29 status=ok
// SIG undefined FUN_145a33742(void)

undefined8 FUN_145a33742(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3377a FUN_145a3377a body=29 status=ok
// SIG undefined FUN_145a3377a(void)

undefined8 FUN_145a3377a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a337b2 FUN_145a337b2 body=29 status=ok
// SIG undefined FUN_145a337b2(void)

undefined8 FUN_145a337b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a337ea FUN_145a337ea body=29 status=ok
// SIG undefined FUN_145a337ea(void)

undefined8 FUN_145a337ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33808 FUN_145a33808 body=25 status=ok
// SIG undefined FUN_145a33808(void)

void FUN_145a33808(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a3381d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145a33822 FUN_145a33822 body=29 status=ok
// SIG undefined FUN_145a33822(void)

undefined8 FUN_145a33822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33840 FUN_145a33840 body=25 status=ok
// SIG undefined FUN_145a33840(void)

void FUN_145a33840(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a33855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145a3385a FUN_145a3385a body=29 status=ok
// SIG undefined FUN_145a3385a(void)

undefined8 FUN_145a3385a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33882 FUN_145a33882 body=43 status=ok
// SIG undefined FUN_145a33882(void)

undefined8 * FUN_145a33882(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad63e20;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 145a338ae FUN_145a338ae body=40 status=ok
// SIG undefined FUN_145a338ae(void)

undefined8 FUN_145a338ae(undefined8 param_1,int param_2)

{
  FUN_145a338d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a338d6 FUN_145a338d6 body=68 status=ok
// SIG undefined FUN_145a338d6(void)

void FUN_145a338d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afdc380;
  FUN_144760e21(param_1[0x70],*(undefined4 *)(param_1 + 0x71));
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_140efdedc(param_1);
  return;
}



// FUNCTION 145a3391a FUN_145a3391a body=40 status=ok
// SIG undefined FUN_145a3391a(void)

undefined8 FUN_145a3391a(undefined8 param_1,int param_2)

{
  FUN_145a33942();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33942 FUN_145a33942 body=68 status=ok
// SIG undefined FUN_145a33942(void)

void FUN_145a33942(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b257960;
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    FUN_145797fa4(lVar1);
    thunk_FUN_1400020a8(lVar1,0x90);
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a33986 FUN_145a33986 body=40 status=ok
// SIG undefined FUN_145a33986(void)

undefined8 FUN_145a33986(undefined8 param_1,int param_2)

{
  FUN_145a339ae();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a339ae FUN_145a339ae body=68 status=ok
// SIG undefined FUN_145a339ae(void)

void FUN_145a339ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2795f0;
  FUN_144760e21(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 145a339fa FUN_145a339fa body=100 status=ok
// SIG undefined FUN_145a339fa(void)

undefined8 * FUN_145a339fa(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b33e0c0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1446f470e(param_1 + 5,L"UpperBody",1);
  param_1[6] = 0x4296000042200000;
  param_1[7] = 0x432f000000000000;
  param_1[8] = 0x4248000043480000;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 145a33a5e FUN_145a33a5e body=40 status=ok
// SIG undefined FUN_145a33a5e(void)

undefined8 FUN_145a33a5e(undefined8 param_1,int param_2)

{
  FUN_145a33a86();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33a86 FUN_145a33a86 body=68 status=ok
// SIG undefined FUN_145a33a86(void)

void FUN_145a33a86(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b377640;
  FUN_144760e21(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 145a33aca FUN_145a33aca body=38 status=ok
// SIG undefined FUN_145a33aca(void)

undefined8 FUN_145a33aca(undefined8 param_1,int param_2)

{
  FUN_141470ce4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33afc FUN_145a33afc body=43 status=ok
// SIG undefined FUN_145a33afc(void)

undefined8 * FUN_145a33afc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *param_1 = &PTR_FUN_14b537630;
  return param_1;
}



// FUNCTION 145a33b36 FUN_145a33b36 body=40 status=ok
// SIG undefined FUN_145a33b36(void)

undefined8 FUN_145a33b36(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33b6c FUN_145a33b6c body=40 status=ok
// SIG undefined FUN_145a33b6c(void)

undefined8 FUN_145a33b6c(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33ba2 FUN_145a33ba2 body=40 status=ok
// SIG undefined FUN_145a33ba2(void)

undefined8 FUN_145a33ba2(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33bd8 FUN_145a33bd8 body=40 status=ok
// SIG undefined FUN_145a33bd8(void)

undefined8 FUN_145a33bd8(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33c0e FUN_145a33c0e body=40 status=ok
// SIG undefined FUN_145a33c0e(void)

undefined8 FUN_145a33c0e(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33c44 FUN_145a33c44 body=40 status=ok
// SIG undefined FUN_145a33c44(void)

undefined8 FUN_145a33c44(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33c7a FUN_145a33c7a body=40 status=ok
// SIG undefined FUN_145a33c7a(void)

undefined8 FUN_145a33c7a(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33cb0 FUN_145a33cb0 body=40 status=ok
// SIG undefined FUN_145a33cb0(void)

undefined8 FUN_145a33cb0(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33ce6 FUN_145a33ce6 body=40 status=ok
// SIG undefined FUN_145a33ce6(void)

undefined8 FUN_145a33ce6(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33d1c FUN_145a33d1c body=40 status=ok
// SIG undefined FUN_145a33d1c(void)

undefined8 FUN_145a33d1c(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33d52 FUN_145a33d52 body=40 status=ok
// SIG undefined FUN_145a33d52(void)

undefined8 FUN_145a33d52(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33d88 FUN_145a33d88 body=40 status=ok
// SIG undefined FUN_145a33d88(void)

undefined8 FUN_145a33d88(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33dbe FUN_145a33dbe body=40 status=ok
// SIG undefined FUN_145a33dbe(void)

undefined8 FUN_145a33dbe(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33df4 FUN_145a33df4 body=40 status=ok
// SIG undefined FUN_145a33df4(void)

undefined8 FUN_145a33df4(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33e2a FUN_145a33e2a body=40 status=ok
// SIG undefined FUN_145a33e2a(void)

undefined8 FUN_145a33e2a(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33e60 FUN_145a33e60 body=40 status=ok
// SIG undefined FUN_145a33e60(void)

undefined8 FUN_145a33e60(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33e96 FUN_145a33e96 body=40 status=ok
// SIG undefined FUN_145a33e96(void)

undefined8 FUN_145a33e96(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33ecc FUN_145a33ecc body=40 status=ok
// SIG undefined FUN_145a33ecc(void)

undefined8 FUN_145a33ecc(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33f02 FUN_145a33f02 body=40 status=ok
// SIG undefined FUN_145a33f02(void)

undefined8 FUN_145a33f02(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33f38 FUN_145a33f38 body=40 status=ok
// SIG undefined FUN_145a33f38(void)

undefined8 FUN_145a33f38(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33f6e FUN_145a33f6e body=40 status=ok
// SIG undefined FUN_145a33f6e(void)

undefined8 FUN_145a33f6e(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33fa4 FUN_145a33fa4 body=40 status=ok
// SIG undefined FUN_145a33fa4(void)

undefined8 FUN_145a33fa4(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a33fda FUN_145a33fda body=40 status=ok
// SIG undefined FUN_145a33fda(void)

undefined8 FUN_145a33fda(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a34010 FUN_145a34010 body=40 status=ok
// SIG undefined FUN_145a34010(void)

undefined8 FUN_145a34010(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a34046 FUN_145a34046 body=40 status=ok
// SIG undefined FUN_145a34046(void)

undefined8 FUN_145a34046(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3407c FUN_145a3407c body=40 status=ok
// SIG undefined FUN_145a3407c(void)

undefined8 FUN_145a3407c(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a340b2 FUN_145a340b2 body=40 status=ok
// SIG undefined FUN_145a340b2(void)

undefined8 FUN_145a340b2(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a340e8 FUN_145a340e8 body=40 status=ok
// SIG undefined FUN_145a340e8(void)

undefined8 FUN_145a340e8(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3411e FUN_145a3411e body=40 status=ok
// SIG undefined FUN_145a3411e(void)

undefined8 FUN_145a3411e(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a34154 FUN_145a34154 body=40 status=ok
// SIG undefined FUN_145a34154(void)

undefined8 FUN_145a34154(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3418a FUN_145a3418a body=40 status=ok
// SIG undefined FUN_145a3418a(void)

undefined8 FUN_145a3418a(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a341c0 FUN_145a341c0 body=40 status=ok
// SIG undefined FUN_145a341c0(void)

undefined8 FUN_145a341c0(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a341f6 FUN_145a341f6 body=40 status=ok
// SIG undefined FUN_145a341f6(void)

undefined8 FUN_145a341f6(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3422c FUN_145a3422c body=40 status=ok
// SIG undefined FUN_145a3422c(void)

undefined8 FUN_145a3422c(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a34262 FUN_145a34262 body=40 status=ok
// SIG undefined FUN_145a34262(void)

undefined8 FUN_145a34262(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a34298 FUN_145a34298 body=40 status=ok
// SIG undefined FUN_145a34298(void)

undefined8 FUN_145a34298(undefined8 param_1,int param_2)

{
  FUN_145907464();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a342ce FUN_145a342ce body=40 status=ok
// SIG undefined FUN_145a342ce(void)

undefined8 FUN_145a342ce(undefined8 param_1,int param_2)

{
  FUN_145907464();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a34304 FUN_145a34304 body=40 status=ok
// SIG undefined FUN_145a34304(void)

undefined8 FUN_145a34304(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3433a FUN_145a3433a body=40 status=ok
// SIG undefined FUN_145a3433a(void)

undefined8 FUN_145a3433a(undefined8 param_1,int param_2)

{
  FUN_1457f2e8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a34370 FUN_145a34370 body=40 status=ok
// SIG undefined FUN_145a34370(void)

undefined8 FUN_145a34370(undefined8 param_1,int param_2)

{
  FUN_1457f2e8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a343a6 FUN_145a343a6 body=40 status=ok
// SIG undefined FUN_145a343a6(void)

undefined8 FUN_145a343a6(undefined8 param_1,int param_2)

{
  FUN_1457f2e8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a343dc FUN_145a343dc body=40 status=ok
// SIG undefined FUN_145a343dc(void)

undefined8 FUN_145a343dc(undefined8 param_1,int param_2)

{
  FUN_1457f2e8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a34412 FUN_145a34412 body=40 status=ok
// SIG undefined FUN_145a34412(void)

undefined8 FUN_145a34412(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a34454 FUN_145a34454 body=29 status=ok
// SIG undefined FUN_145a34454(void)

undefined8 FUN_145a34454(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a34471 FUN_145a34471 body=58 status=ok
// SIG undefined FUN_145a34471(void)

void FUN_145a34471(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ba828(puVar1);
  *puVar1 = &PTR_FUN_14be7e1f0;
  puVar1[6] = &PTR_LAB_14be7e4d0;
  *(undefined1 *)(puVar1 + 8) = 0;
  FUN_145a344ac(puVar1 + 9);
  return;
}



// FUNCTION 145a344ac FUN_145a344ac body=148 status=ok
// SIG undefined FUN_145a344ac(void)

undefined8 * FUN_145a344ac(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446f470e(local_18,L"gbx::Vegetation::FDynamicAABBTree",1);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_14be7feb8;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  FUN_145a34542(param_1 + 0xe);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a34542 FUN_145a34542 body=117 status=ok
// SIG undefined FUN_145a34542(void)

void FUN_145a34542(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  return;
}



// FUNCTION 145a345b8 FUN_145a345b8 body=120 status=ok
// SIG undefined FUN_145a345b8(void)

longlong FUN_145a345b8(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_141244c22();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_145a34632(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x68 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 145a34632 FUN_145a34632 body=271 status=ok
// SIG undefined FUN_145a34632(void)

undefined4 * FUN_145a34632(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141244d34(param_1,local_48);
  FUN_145a34742(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_141244c78(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
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
      FUN_141244f16(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a34742 FUN_145a34742 body=158 status=ok
// SIG undefined FUN_145a34742(void)

undefined4 * FUN_145a34742(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined4 *)*param_1;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  FUN_144a87124(param_2 + 4,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a347e2 FUN_145a347e2 body=901 status=ok
// SIG undefined FUN_145a347e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145a347e2(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145a34bde();
  plVar3 = DAT_14c846b08;
  if (DAT_14c846b08 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c846b08 + 1;
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
  _DAT_14c846af8 = 0;
  if (DAT_14c846af0 != 0) {
    FUN_1400020a8();
  }
  FUN_145a34b72(&DAT_14c846ab0);
  _DAT_14c846aa8 = 0;
  if (DAT_14c846aa0 != 0) {
    FUN_1400020a8();
  }
  FUN_145a34b72(&DAT_14c846a60);
  FUN_1449db362(&DAT_14c846a48);
  FUN_1449db362(&DAT_14c846a38);
  if (DAT_14c846a20 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c846a10 != 0) {
    FUN_1400020a8();
  }
  FUN_145a35134();
  FUN_145a3518a();
  _DAT_14c8469c0 = 0;
  if (DAT_14c8469b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&DAT_14c846978);
  DAT_14c846970 = 0;
  if (DAT_14c846968 != 0) {
    FUN_1400020a8();
  }
  FUN_145a34ba8();
  _DAT_14c8467d0 = &PTR_FUN_149e29f00;
  LOCK();
  DAT_14c8468f0 = 0;
  UNLOCK();
  LOCK();
  DAT_14c8468e8 = 0;
  UNLOCK();
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c8468f8);
  FUN_145a3576c(&DAT_14c8467d0);
  _DAT_14c8467b8 = &PTR_FUN_149e29ea0;
  LOCK();
  DAT_14c8467c8 = 0;
  UNLOCK();
  FUN_144a8720c(&DAT_14c8467b8);
  FUN_144760e21(DAT_14c8467a0,DAT_14c8467a8);
  if (DAT_14c8467a0 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c846788,DAT_14c846790);
  if (DAT_14c846788 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c846770,DAT_14c846778);
  if (DAT_14c846770 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c846758,DAT_14c846760);
  if (DAT_14c846758 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c846740,DAT_14c846748);
  if (DAT_14c846740 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c846728,DAT_14c846730);
  if (DAT_14c846728 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c846710,DAT_14c846718);
  if (DAT_14c846710 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c8466f8,DAT_14c846700);
  if (DAT_14c8466f8 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c8466e0,DAT_14c8466e8);
  if (DAT_14c8466e0 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c8466c8,DAT_14c8466d0);
  if (DAT_14c8466c8 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c8466b0,DAT_14c8466b8);
  if (DAT_14c8466b0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a34b68 FUN_145a34b68 body=9 status=ok
// SIG undefined FUN_145a34b68(void)

void FUN_145a34b68(longlong param_1)

{
  FUN_145a34c1a(param_1 + 0x10);
  return;
}



// FUNCTION 145a34b72 FUN_145a34b72 body=53 status=ok
// SIG undefined FUN_145a34b72(void)

void FUN_145a34b72(longlong *param_1)

{
  FUN_145a354ba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a34ba8 FUN_145a34ba8 body=54 status=ok
// SIG undefined FUN_145a34ba8(void)

void FUN_145a34ba8(void)

{
  FUN_145a3560c();
  if (DAT_14c846948 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c846928 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a34bde FUN_145a34bde body=59 status=ok
// SIG undefined FUN_145a34bde(void)

void FUN_145a34bde(void)

{
  if (1 < DAT_14c846970) {
    FUN_145a3560c();
    DAT_14c846970 = 1;
    FUN_14156cabc(&DAT_14c846928);
    return;
  }
  FUN_146809a76();
  FUN_145a3560c();
  return;
}



// FUNCTION 145a34c1a FUN_145a34c1a body=229 status=ok
// SIG undefined FUN_145a34c1a(void)

void FUN_145a34c1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e343e0;
  FUN_145a34e96(param_1 + 0x47);
  FUN_145a34d36(param_1 + 0x1f);
  FUN_141359509(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145a34d00(param_1 + 0x12);
  FUN_141151e4c(param_1 + 0xc);
  if (*(char *)(param_1 + 0xb) == '\x01') {
    (*(code *)(&PTR_FUN_149e1da60)[*(byte *)(param_1 + 10)])(param_1 + 8);
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  FUN_1449079f2(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a34ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145a34d00 FUN_145a34d00 body=53 status=ok
// SIG undefined FUN_145a34d00(void)

void FUN_145a34d00(longlong *param_1)

{
  FUN_145a3534c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a34d36 FUN_145a34d36 body=173 status=ok
// SIG undefined FUN_145a34d36(void)

void FUN_145a34d36(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_145a34de4(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_141470d46(param_1);
  return;
}



// FUNCTION 145a34de4 FUN_145a34de4 body=55 status=ok
// SIG undefined FUN_145a34de4(void)

void FUN_145a34de4(longlong *param_1)

{
  FUN_145a34e1c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a34e1c FUN_145a34e1c body=121 status=ok
// SIG undefined FUN_145a34e1c(void)

void FUN_145a34e1c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1407f13e6(param_1,param_2);
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



// FUNCTION 145a34e96 FUN_145a34e96 body=173 status=ok
// SIG undefined FUN_145a34e96(void)

void FUN_145a34e96(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_145a34f7a(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_145a34fb0(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145a34f44(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a34f44(param_1);
  return;
}



// FUNCTION 145a34f44 FUN_145a34f44 body=53 status=ok
// SIG undefined FUN_145a34f44(void)

void FUN_145a34f44(longlong *param_1)

{
  FUN_145a34fe6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a34f7a FUN_145a34f7a body=53 status=ok
// SIG undefined FUN_145a34f7a(void)

void FUN_145a34f7a(longlong *param_1)

{
  FUN_145a351e0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a34fb0 FUN_145a34fb0 body=53 status=ok
// SIG undefined FUN_145a34fb0(void)

void FUN_145a34fb0(longlong *param_1)

{
  FUN_141470df8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a34fe6 FUN_145a34fe6 body=332 status=ok
// SIG undefined FUN_145a34fe6(void)

void FUN_145a34fe6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
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
      if (*(longlong *)(*local_68 + 0x30 + (longlong)iStack_4c * 0x80) != 0) {
        lVar3 = *local_68 + (longlong)iStack_4c * 0x80;
        plVar2 = *(longlong **)(lVar3 + 0x40);
        plVar4 = (longlong *)(lVar3 + 0x50);
        if (plVar2 != (longlong *)0x0) {
          plVar4 = plVar2;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140240048(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a35134 FUN_145a35134 body=85 status=ok
// SIG undefined FUN_145a35134(void)

void FUN_145a35134(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  while (puVar5 = DAT_14c8469e8, DAT_14c8469e8 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*DAT_14c8469e8;
    plVar4 = (longlong *)DAT_14c8469e8[2];
    DAT_14c8469e8 = puVar3;
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
    FUN_1400020a8(puVar5);
  }
  return;
}



// FUNCTION 145a3518a FUN_145a3518a body=85 status=ok
// SIG undefined FUN_145a3518a(void)

void FUN_145a3518a(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  while (puVar5 = DAT_14c8469d8, DAT_14c8469d8 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*DAT_14c8469d8;
    plVar4 = (longlong *)DAT_14c8469d8[2];
    DAT_14c8469d8 = puVar3;
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
    FUN_1400020a8(puVar5);
  }
  return;
}



// FUNCTION 145a351e0 FUN_145a351e0 body=363 status=ok
// SIG undefined FUN_145a351e0(void)

void FUN_145a351e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
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
      if (*(longlong *)(*local_68 + 0x30 + (longlong)iStack_4c * 0x80) != 0) {
        lVar3 = *local_68 + (longlong)iStack_4c * 0x80;
        plVar2 = *(longlong **)(lVar3 + 0x40);
        plVar4 = (longlong *)(lVar3 + 0x50);
        if (plVar2 != (longlong *)0x0) {
          plVar4 = plVar2;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140240048(param_1,0);
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



// FUNCTION 145a3534c FUN_145a3534c body=365 status=ok
// SIG undefined FUN_145a3534c(void)

void FUN_145a3534c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x28);
      FUN_1449db362(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a354ba FUN_145a354ba body=336 status=ok
// SIG undefined FUN_145a354ba(void)

void FUN_145a354ba(longlong *param_1)

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
      FUN_14680633a((longlong)iStack_4c * 0x30 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 145a3560c FUN_145a3560c body=350 status=ok
// SIG undefined FUN_145a3560c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145a3560c(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c846938;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c846950 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c846928;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c846930 = 0;
  if (DAT_14c846934 != 0) {
    FUN_1446f4a44(&DAT_14c846928,0);
  }
  _DAT_14c846958 = 0xffffffff;
  DAT_14c846950 = 0;
  if (0x80 < DAT_14c846954) {
    DAT_14c846954 = 0x80;
    FUN_1446efbd8(&DAT_14c846938,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a3576c FUN_145a3576c body=406 status=ok
// SIG undefined FUN_145a3576c(void)

void FUN_145a3576c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e2df90;
  FUN_145a35902(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x20];
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
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_1447a1747(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144a8720c(param_1);
  return;
}



// FUNCTION 145a35902 FUN_145a35902 body=43 status=ok
// SIG undefined FUN_145a35902(void)

void FUN_145a35902(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146814f24(param_1,*param_1);
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 145a35936 FUN_145a35936 body=242 status=ok
// SIG undefined FUN_145a35936(void)

undefined8 * FUN_145a35936(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145a35a60();
  *param_1 = &PTR_FUN_14b53b710;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_145a35a2a(param_1 + 0x30);
  FUN_145a35ac6(param_1 + 5,local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a35a2a FUN_145a35a2a body=53 status=ok
// SIG undefined FUN_145a35a2a(void)

void FUN_145a35a2a(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 145a35a60 FUN_145a35a60 body=101 status=ok
// SIG undefined FUN_145a35a60(void)

undefined8 * FUN_145a35a60(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b532620;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 145a35ac6 FUN_145a35ac6 body=244 status=ok
// SIG undefined FUN_145a35ac6(void)

undefined8 FUN_145a35ac6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b538b70;
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
  *local_38 = &PTR_FUN_14b541330;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_141521a3c;
  FUN_1410e6738(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a35bbc FUN_145a35bbc body=70 status=ok
// SIG undefined FUN_145a35bbc(void)

undefined8 * FUN_145a35bbc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac52490;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_145a35c02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a35c02 FUN_145a35c02 body=79 status=ok
// SIG undefined FUN_145a35c02(void)

void FUN_145a35c02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac4f1a0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 145a35c52 FUN_145a35c52 body=149 status=ok
// SIG undefined FUN_145a35c52(void)

undefined8 FUN_145a35c52(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if ((longlong)*(int *)(lVar2 + 0x38) != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x30);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x38);
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        if ((longlong)*(int *)(lVar2 + 0x78) != 0) {
          plVar4 = *(longlong **)(lVar2 + 0x70);
          lVar2 = (longlong)*(int *)(lVar2 + 0x78) * 0x28;
          do {
            if ((longlong *)*plVar4 == (longlong *)0x0) {
              lVar5 = 0;
            }
            else {
              lVar5 = *(longlong *)*plVar4;
            }
            if (lVar5 == param_2) {
              if (plVar4 != (longlong *)0x0) {
                if ((char)plVar4[3] != '\0') goto LAB_145a35cdb;
                goto LAB_145a35cc4;
              }
              break;
            }
            plVar4 = plVar4 + 5;
            lVar2 = lVar2 + -0x28;
          } while (lVar2 != 0);
        }
        if (DAT_14cb711b8 == param_2) {
LAB_145a35cdb:
          return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
        }
      }
LAB_145a35cc4:
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return 0;
}



// FUNCTION 145a35ce8 FUN_145a35ce8 body=42 status=ok
// SIG undefined FUN_145a35ce8(void)

void FUN_145a35ce8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145a35d12(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145a35d12 FUN_145a35d12 body=86 status=ok
// SIG undefined FUN_145a35d12(void)

void FUN_145a35d12(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a35d68(param_1);
  return;
}



// FUNCTION 145a35d68 FUN_145a35d68 body=53 status=ok
// SIG undefined FUN_145a35d68(void)

void FUN_145a35d68(longlong *param_1)

{
  FUN_145a35d9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a35d9e FUN_145a35d9e body=309 status=ok
// SIG undefined FUN_145a35d9e(void)

void FUN_145a35d9e(longlong *param_1)

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
      FUN_145a35ed4((longlong)iStack_4c * 0xa0 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14152de66(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a35ed4 FUN_145a35ed4 body=102 status=ok
// SIG undefined FUN_145a35ed4(void)

void FUN_145a35ed4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x90);
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
  plVar3 = *(longlong **)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x000145a35f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a35f3a FUN_145a35f3a body=42 status=ok
// SIG undefined FUN_145a35f3a(void)

void FUN_145a35f3a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145a35f64(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145a35f64 FUN_145a35f64 body=49 status=ok
// SIG undefined FUN_145a35f64(void)

void FUN_145a35f64(longlong param_1)

{
  FUN_141470fc6();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a35f96(param_1);
  return;
}



// FUNCTION 145a35f96 FUN_145a35f96 body=53 status=ok
// SIG undefined FUN_145a35f96(void)

void FUN_145a35f96(longlong *param_1)

{
  FUN_145c26446();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a35fd4 FUN_145a35fd4 body=455 status=ok
// SIG undefined FUN_145a35fd4(void)

undefined8 * FUN_145a35fd4(undefined8 *param_1)

{
  FUN_145a3619c();
  *param_1 = &PTR_FUN_14aeb4870;
  param_1[5] = &PTR_FUN_14aeb4c30;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined2 *)((longlong)param_1 + 0x43) = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0x801;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 2;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x50] = &PTR_LAB_14aeb6a30;
  param_1[0x51] = &LAB_14841c73c;
  param_1[0x4c] = FUN_146bd3274;
  param_1[0x56] = 0;
  param_1[0x58] = &PTR_LAB_14aeb6a50;
  param_1[0x59] = &LAB_14841c740;
  param_1[0x54] = &LAB_14841c744;
  param_1[0x5e] = 0;
  param_1[0x60] = &PTR_LAB_14aeb57e0;
  param_1[0x61] = param_1;
  param_1[0x5c] = &LAB_14841c75a;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  return param_1;
}



// FUNCTION 145a3619c FUN_145a3619c body=187 status=ok
// SIG undefined FUN_145a3619c(void)

undefined8 * FUN_145a3619c(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aed6890;
  param_1[5] = &PTR_FUN_14aed6b70;
  param_1[6] = 0;
  FUN_144757f48(param_1,0x40);
  FUN_1446f470e(&local_28,L"GizmoInputBehaviors",1);
  local_30 = 0;
  local_38 = 0;
  lVar1 = FUN_140fe6954(param_1,local_28,0,0);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  param_1[6] = lVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a36266 FUN_145a36266 body=45 status=ok
// SIG undefined FUN_145a36266(void)

undefined8 FUN_145a36266(undefined8 param_1,int param_2)

{
  FUN_145a36294();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 145a36294 FUN_145a36294 body=104 status=ok
// SIG undefined FUN_145a36294(void)

void FUN_145a36294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1814b0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 145a362fc FUN_145a362fc body=45 status=ok
// SIG undefined FUN_145a362fc(void)

void FUN_145a362fc(longlong param_1)

{
  char cVar1;
  
  do {
    cVar1 = FUN_145a3632a(param_1 + 0x30);
  } while (cVar1 != '\0');
  FUN_145a363c0(param_1 + 0x40,0);
  return;
}



// FUNCTION 145a3632a FUN_145a3632a body=150 status=ok
// SIG undefined FUN_145a3632a(void)

bool FUN_145a3632a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = **(longlong **)(param_1 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar3;
    *(undefined8 *)(lVar3 + 8) = 0;
    plVar5 = *(longlong **)(lVar3 + 0x10);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
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
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x10);
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
      FUN_1400020a8(lVar4);
    }
  }
  return lVar3 != 0;
}



// FUNCTION 145a363c0 FUN_145a363c0 body=107 status=ok
// SIG undefined FUN_145a363c0(void)

void FUN_145a363c0(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145a3640f:
      FUN_1447564ae(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1403921f0(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145a3640f;
  FUN_145a3642c(param_1);
  FUN_1447564ae(param_1,param_2);
  return;
}



// FUNCTION 145a3642c FUN_145a3642c body=325 status=ok
// SIG undefined FUN_145a3642c(void)

void FUN_145a3642c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 145a36572 FUN_145a36572 body=278 status=ok
// SIG undefined FUN_145a36572(void)

void FUN_145a36572(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined8 local_220;
  wchar_t local_218 [260];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872eb0) {
    FUN_144b3d300(&DAT_14c872eb0);
    if (DAT_14c872eb0 == -1) {
      local_228 = 0;
      FUN_141471170(&DAT_14c872ea0,L"networkversionoverride",&DAT_14c872e94,
                    L"Sets network version used for multiplayer ");
      atexit(FUN_1427866b2);
      _Init_thread_footer(&DAT_14c872eb0);
    }
  }
  if (DAT_14c872e98 == '\0') {
    DAT_14c872e98 = '\x01';
    uVar2 = FUN_14118da1c();
    local_228 = CONCAT31(local_228._1_3_,1);
    local_220 = 0;
    cVar1 = FUN_140751ea8(uVar2,L"networkversionoverride=",local_218,0x100);
    if (cVar1 != '\0') {
      DAT_14c872e94 = _wtoi(local_218);
    }
  }
  if (DAT_14c872e94 == 0) {
    FUN_145a36689();
  }
  if ((local_10 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a36689 FUN_145a36689 body=6 status=ok
// SIG undefined FUN_145a36689(void)

undefined8 FUN_145a36689(void)

{
  return 0x4ade3d;
}



// FUNCTION 145a366a8 FUN_145a366a8 body=147 status=ok
// SIG undefined FUN_145a366a8(void)

void FUN_145a366a8(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  
  lVar4 = (longlong)param_2 * 0x58;
  pcVar3 = (char *)(*(longlong *)(param_1 + 0x108) + lVar4 + 0x10);
  cVar6 = '\x01';
  if (param_3 != '\0') {
    if (*pcVar3 != '\x01') {
      return;
    }
    lVar5 = (longlong)param_2 * 0x10;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + lVar5);
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 8 + lVar5);
    if ((1 < *(byte *)((longlong)plVar1 + 0xc)) &&
       (*(char *)(*(longlong *)(*plVar1 + 0x2c0) + 0xd + (longlong)(int)plVar1[1] * 0x10) != '\0'))
    {
      return;
    }
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    if ((1 < *(byte *)((longlong)plVar2 + 0xc)) &&
       (*(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xd + (longlong)(int)plVar2[1] * 0x10) != '\0'))
    {
      return;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x108) + 0x11 + lVar4) != '\0') {
      return;
    }
    cVar6 = '\0';
  }
  *pcVar3 = cVar6;
  return;
}



// FUNCTION 145a3674a FUN_145a3674a body=55 status=ok
// SIG undefined FUN_145a3674a(void)

void FUN_145a3674a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_14ac8a218);
    if (iVar1 < 0) {
      FUN_147f4aed8(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145a36782 FUN_145a36782 body=87 status=ok
// SIG undefined FUN_145a36782(void)

undefined8 * FUN_145a36782(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b652b70;
  param_1[5] = &PTR_LAB_14b653010;
  param_1[6] = &PTR_LAB_14b653050;
  FUN_145a367da(param_1 + 0x24);
  FUN_145837928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a367da FUN_145a367da body=74 status=ok
// SIG undefined FUN_145a367da(void)

void FUN_145a367da(longlong param_1)

{
  if (*(char *)(param_1 + 0x130) == '\x01') {
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  FUN_145a36824(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1);
  return;
}



// FUNCTION 145a36824 FUN_145a36824 body=43 status=ok
// SIG undefined FUN_145a36824(void)

void FUN_145a36824(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148bbced2(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 145a36850 FUN_145a36850 body=37 status=ok
// SIG undefined FUN_145a36850(void)

void FUN_145a36850(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145a36876();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145a36876 FUN_145a36876 body=91 status=ok
// SIG undefined FUN_145a36876(void)

undefined8 FUN_145a36876(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_145a368d2(lVar1 + 0x4ea0);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145a368d2 FUN_145a368d2 body=8 status=ok
// SIG undefined FUN_145a368d2(void)

bool FUN_145a368d2(longlong param_1)

{
  return *(byte *)(param_1 + 0x6a) < 2;
}



// FUNCTION 145a368da FUN_145a368da body=40 status=ok
// SIG undefined FUN_145a368da(void)

undefined8 FUN_145a368da(undefined8 param_1,int param_2)

{
  FUN_145a36902();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a36902 FUN_145a36902 body=128 status=ok
// SIG undefined FUN_145a36902(void)

void FUN_145a36902(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beefe80;
  param_1[5] = &PTR_LAB_14bef0130;
  plVar3 = (longlong *)param_1[0x1c];
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
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3698e(param_1);
  return;
}



// FUNCTION 145a36984 FUN_145a36984 body=9 status=ok
// SIG undefined FUN_145a36984(void)

void FUN_145a36984(longlong param_1)

{
  FUN_145a36b92(param_1 + 0x10);
  return;
}



// FUNCTION 145a3698e FUN_145a3698e body=74 status=ok
// SIG undefined FUN_145a3698e(void)

void FUN_145a3698e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a595cc0;
  param_1[5] = &PTR_LAB_14a595f70;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145a369d8(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a369d8 FUN_145a369d8 body=55 status=ok
// SIG undefined FUN_145a369d8(void)

void FUN_145a369d8(longlong *param_1)

{
  FUN_145a36a10(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a36a10 FUN_145a36a10 body=384 status=ok
// SIG undefined FUN_145a36a10(void)

void FUN_145a36a10(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28) != 0) {
        FUN_1400020a8();
      }
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
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 145a36b92 FUN_145a36b92 body=220 status=ok
// SIG undefined FUN_145a36b92(void)

void FUN_145a36b92(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14beef5e8;
  param_1[3] = &PTR_FUN_14beef5f0;
  FUN_145a36ca6();
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145a36c6e(param_1 + 0x19);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  FUN_140100e25(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140100e25(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a36c6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145a36c6e FUN_145a36c6e body=55 status=ok
// SIG undefined FUN_145a36c6e(void)

void FUN_145a36c6e(longlong *param_1)

{
  FUN_145a36d50(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a36ca6 FUN_145a36ca6 body=169 status=ok
// SIG undefined FUN_145a36ca6(void)

void FUN_145a36ca6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1498d1316(param_1 + 0x20);
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_14480f766(&DAT_14c867438);
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000145a36cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 145a36d50 FUN_145a36d50 body=388 status=ok
// SIG undefined FUN_145a36d50(void)

void FUN_145a36d50(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x50) != 0) {
        FUN_1400020a8();
      }
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
    FUN_140e9549c(param_1,param_2);
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



// FUNCTION 145a36ed6 FUN_145a36ed6 body=363 status=ok
// SIG undefined FUN_145a36ed6(void)

void FUN_145a36ed6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1400d7050();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = param_1 + -0x30;
      if (*(longlong *)(param_1 + 0x18) == 0) {
        local_40 = FUN_148e37eae;
        local_38 = 0;
        FUN_145a37042(lVar1 + 0x34d8,&local_30,lVar2);
        *(undefined8 *)(param_1 + 0x18) = local_30;
      }
      if (*(longlong *)(param_1 + 0x20) == 0) {
        local_40 = FUN_148e37f4e;
        local_38 = 0;
        FUN_145a37042(lVar1 + 0x2238,&local_30,lVar2);
        *(undefined8 *)(param_1 + 0x20) = local_30;
      }
      if (*(longlong *)(param_1 + 0x28) == 0) {
        local_40 = FUN_14168b33c;
        local_38 = 0;
        FUN_145a37142(lVar1 + 0x31d0,&local_30,lVar2);
        *(undefined8 *)(param_1 + 0x28) = local_30;
      }
      if (*(longlong *)(param_1 + 0x30) == 0) {
        local_40 = FUN_141583c5a;
        local_38 = 0;
        FUN_145a37340(lVar1 + 0x2320,&local_30,lVar2);
        *(undefined8 *)(param_1 + 0x30) = local_30;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a37042 FUN_145a37042 body=254 status=ok
// SIG undefined FUN_145a37042(void)

undefined8
FUN_145a37042(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e06450;
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
  *local_48 = &PTR_FUN_14b9ae500;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a37142 FUN_145a37142 body=254 status=ok
// SIG undefined FUN_145a37142(void)

undefined8
FUN_145a37142(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9ae5e0;
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
  *local_48 = &PTR_FUN_14b9ae570;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a37242(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a37242 FUN_145a37242 body=216 status=ok
// SIG undefined FUN_145a37242(void)

undefined8 * FUN_145a37242(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145a37328 FUN_145a37328 body=24 status=ok
// SIG undefined FUN_145a37328(void)

bool FUN_145a37328(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145a37340 FUN_145a37340 body=254 status=ok
// SIG undefined FUN_145a37340(void)

undefined8
FUN_145a37340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9abb20;
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
  *local_48 = &PTR_FUN_14b9ae650;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a37440(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a37440 FUN_145a37440 body=216 status=ok
// SIG undefined FUN_145a37440(void)

undefined8 * FUN_145a37440(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145a37526 FUN_145a37526 body=24 status=ok
// SIG undefined FUN_145a37526(void)

bool FUN_145a37526(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145a3753e FUN_145a3753e body=164 status=ok
// SIG undefined FUN_145a3753e(void)

void FUN_145a3753e(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_4 != 0) && (*(char *)(param_3 + 0x68) == '\0')) &&
     (*(longlong *)(param_1 + 0x60) == 0)) {
    local_50 = &LAB_145cb3b08;
    local_48 = 0;
    FUN_145a37dd0(local_40,param_1);
    FUN_145a375e4(param_2,&local_50,param_4,local_40);
    *(undefined1 **)(param_1 + 0x60) = local_50;
    FUN_1449db362(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a375e4 FUN_145a375e4 body=200 status=ok
// SIG undefined FUN_145a375e4(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_145a375e4(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  ulonglong local_40 [2];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[0] = param_3;
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar3 = FUN_145a3772c(param_1 + 0xa8,uVar2 >> 0x10 ^ uVar2,local_40);
    puVar1 = local_40 + 1;
    local_40[1] = 0;
    local_30 = 0;
    FUN_145a376ae(puVar1,param_4);
    FUN_145a377e2(uVar3,param_2,puVar1);
    FUN_1449db362(puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a376ae FUN_145a376ae body=124 status=ok
// SIG undefined FUN_145a376ae(void)

void FUN_145a376ae(longlong *param_1,longlong *param_2)

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



// FUNCTION 145a3772c FUN_145a3772c body=180 status=ok
// SIG undefined FUN_145a3772c(void)

longlong * FUN_145a3772c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_145a377b8;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145a378bc(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_145a377b8:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 145a377e2 FUN_145a377e2 body=216 status=ok
// SIG undefined FUN_145a377e2(void)

undefined8 * FUN_145a377e2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145a378bc FUN_145a378bc body=260 status=ok
// SIG undefined FUN_145a378bc(void)

undefined4 * FUN_145a378bc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a37af8(param_1,local_48);
  FUN_145a379c2(param_4,local_40);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar1 = FUN_145a37a46(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
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
      FUN_145a37bec(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a379c2 FUN_145a379c2 body=131 status=ok
// SIG undefined FUN_145a379c2(void)

undefined8 * FUN_145a379c2(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 2;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 2;
  FUN_14019d794(param_2 + 1,&local_38);
  FUN_144760e21(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a37a46 FUN_145a37a46 body=178 status=ok
// SIG undefined FUN_145a37a46(void)

undefined8 FUN_145a37a46(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          FUN_144760e21(plVar8[1],(int)plVar8[2]);
          if (plVar8[1] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_14898a490(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145a37af8 FUN_145a37af8 body=243 status=ok
// SIG undefined FUN_145a37af8(void)

int * FUN_145a37af8(longlong *param_1,int *param_2)

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



// FUNCTION 145a37bec FUN_145a37bec body=483 status=ok
// SIG undefined FUN_145a37bec(void)

void FUN_145a37bec(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 145a37dd0 FUN_145a37dd0 body=428 status=ok
// SIG undefined FUN_145a37dd0(void)

longlong * FUN_145a37dd0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145a37eb0:
    *puVar5 = &PTR_LAB_14b42a950;
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
    *puVar5 = &PTR_FUN_14b42dc00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145a37eb0;
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
    *puVar5 = &PTR_LAB_14b42a950;
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
    *puVar5 = &PTR_FUN_14b42dc00;
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



// FUNCTION 145a37f7c FUN_145a37f7c body=59 status=ok
// SIG undefined FUN_145a37f7c(void)

void FUN_145a37f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f94f20;
  FUN_145a37fb9(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145a37fb8(param_1);
  return;
}



// FUNCTION 145a37fb8 FUN_145a37fb8 body=1 status=ok
// SIG undefined FUN_145a37fb8(void)

void FUN_145a37fb8(void)

{
  return;
}



// FUNCTION 145a37fb9 FUN_145a37fb9 body=49 status=ok
// SIG undefined FUN_145a37fb9(void)

void FUN_145a37fb9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_146f11920();
      }
      plVar1 = plVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a37ff6 FUN_145a37ff6 body=98 status=ok
// SIG undefined FUN_145a37ff6(void)

undefined8 * FUN_145a37ff6(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *param_1 = &PTR_FUN_14a5127e0;
  param_1[5] = &PTR_FUN_14a512b00;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 145a38058 FUN_145a38058 body=117 status=ok
// SIG undefined FUN_145a38058(void)

void FUN_145a38058(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a380ce(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aab2b80;
  puVar1[5] = &PTR_FUN_14aab3150;
  puVar1[6] = &PTR_LAB_14aab3190;
  puVar1[0x2f] = &PTR_FUN_14aab31e0;
  puVar1[0x3c] = 0x457a000044960000;
  *(undefined4 *)(puVar1 + 0x3d) = 0x463b8000;
  *(undefined1 *)(puVar1 + 0x39) = *(undefined1 *)(puVar1 + 0x32);
  *(byte *)(puVar1 + 0x3f) = *(byte *)(puVar1 + 0x3f) & 0xfe;
  return;
}



// FUNCTION 145a380ce FUN_145a380ce body=101 status=ok
// SIG undefined FUN_145a380ce(void)

undefined8 * FUN_145a380ce(undefined8 *param_1)

{
  FUN_14109bb0a();
  *param_1 = &PTR_FUN_14a8d3500;
  param_1[5] = &PTR_FUN_14a8d3ad0;
  param_1[6] = &PTR_LAB_14a8d3b10;
  param_1[0x2f] = &PTR_FUN_14a8d3b60;
  param_1[0x3c] = 0x457a000044960000;
  param_1[0x3d] = 0x4100000045fa0000;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xfe;
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_1 + 0x32);
  return param_1;
}



// FUNCTION 145a38134 FUN_145a38134 body=40 status=ok
// SIG undefined FUN_145a38134(void)

undefined8 FUN_145a38134(undefined8 param_1,int param_2)

{
  FUN_141471a12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a38164 FUN_145a38164 body=395 status=ok
// SIG undefined FUN_145a38164(void)

void FUN_145a38164(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar2 = &local_24;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_144a5dc74(&local_38);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  local_48 = local_30;
  FUN_145a382f0(puVar2,&local_50,uVar1);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a382f0 FUN_145a382f0 body=203 status=ok
// SIG undefined FUN_145a382f0(void)

void FUN_145a382f0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong ****pppplVar2;
  undefined1 auStack_78 [40];
  longlong ***local_50;
  undefined4 local_48;
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0x10;
  local_50 = (longlong ***)*param_2;
  if ((longlong ****)local_50 != (longlong ****)0x0) {
    (*(code *)(*local_50)[1])();
  }
  local_48 = (undefined4)param_2[1];
  local_30 = 0x1b;
  FUN_141107e97(param_1,&local_50,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppplVar2 = &local_50;
    if (0x18 < local_38) {
      pppplVar2 = (longlong ****)local_50;
    }
    (*pcVar1)(pppplVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a383bc FUN_145a383bc body=171 status=ok
// SIG undefined FUN_145a383bc(void)

void FUN_145a383bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  lVar4 = DAT_14c98e618;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c98e618 != 0) {
    local_28 = *(undefined8 *)(param_1 + 0x188);
    local_20 = *(longlong *)(param_1 + 400);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_145a3846a(lVar4,&local_28);
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  plVar3 = *(longlong **)(param_1 + 400);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0;
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a38468 FUN_145a38468 body=1 status=ok
// SIG undefined FUN_145a38468(void)

void FUN_145a38468(void)

{
  return;
}



// FUNCTION 145a3846a FUN_145a3846a body=134 status=ok
// SIG undefined FUN_145a3846a(void)

void FUN_145a3846a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_145a384f2(param_1 + 0x648,&local_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a384f2 FUN_145a384f2 body=639 status=ok
// SIG undefined FUN_145a384f2(void)

void FUN_145a384f2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    iVar9 = *(int *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xc0) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0xc4) < iVar9 + 1U) {
      FUN_1456d4c80((longlong *)(param_1 + 0xb8),iVar9);
    }
    lVar2 = *(longlong *)(param_1 + 0xb8);
    *(longlong *)(lVar2 + (longlong)iVar9 * 0x10) = *param_2;
    lVar8 = param_2[1];
    *(longlong *)(lVar2 + 8 + (longlong)iVar9 * 0x10) = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    lVar2 = param_1 + 0x80;
    local_60 = (longlong *)&DAT_100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar2;
    if (*(int *)(param_1 + 0x90) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_144a81a4c(&local_60);
      iVar9 = *(int *)(param_1 + 0x90);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    uVar4 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = (longlong *)param_1;
    if ((local_70._4_4_ != iVar9) || (local_70 = uVar4, uStack_58 != lVar2)) {
      do {
        local_70 = uVar4;
        plVar7 = (longlong *)*(longlong *)((longlong)local_88 + 0x70);
        if (*(longlong *)((longlong)local_88 + 0x70) == 0) {
          plVar7 = local_88;
        }
        local_60 = param_2;
        FUN_145a38772((longlong)iVar6 * 0x10 + (longlong)plVar7);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_144a81a4c(&local_80);
        iVar6 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_88 != (longlong *)param_1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar2 || local_70._4_4_ != iVar9));
    }
    local_88 = param_2;
    FUN_145a38772(param_1 + 0xa0);
  }
  lVar2 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar9 = *(int *)(param_1 + 0xd0);
  if (0 < iVar9) {
    plVar3 = (longlong *)(param_1 + 200);
    uVar10 = 0;
    bVar5 = false;
    do {
      uVar10 = (ulonglong)(int)uVar10;
      lVar8 = uVar10 * 0x18 + 8;
      while (*(longlong *)(*plVar3 + lVar8) != lVar2) {
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x18;
        if ((longlong)iVar9 <= (longlong)uVar10) {
          if (bVar5) goto LAB_145a38765;
          goto LAB_145a38622;
        }
      }
      FUN_1469b6dde(plVar3,uVar10 & 0xffffffff);
      iVar9 = *(int *)(param_1 + 0xd0);
      bVar5 = true;
    } while ((int)uVar10 < iVar9);
LAB_145a38765:
    FUN_1469b6da0(plVar3);
  }
LAB_145a38622:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a38772 FUN_145a38772 body=252 status=ok
// SIG undefined FUN_145a38772(void)

void FUN_145a38772(longlong *param_1,undefined8 *param_2)

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
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar9 = 0;
    bVar5 = *plVar2 == *(longlong *)*param_2;
    iVar10 = 0;
    do {
      lVar7 = (longlong)iVar10;
      iVar4 = iVar10 + 1;
      if (iVar10 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar6 = plVar2 + lVar7 * 2 + 2;
      iVar11 = iVar10;
      lVar8 = lVar7;
      do {
        lVar8 = lVar8 + 1;
        iVar12 = iVar4;
        if (lVar13 <= lVar8) break;
        lVar3 = *plVar6;
        iVar11 = iVar11 + 1;
        plVar6 = plVar6 + 2;
        iVar12 = iVar11;
      } while (bVar5 == (lVar3 == *(longlong *)*param_2));
      iVar4 = iVar12 - iVar10;
      if (bVar5 == false) {
        if (iVar9 != iVar10) {
          memmove(plVar2 + (longlong)iVar9 * 2,plVar2 + lVar7 * 2,(longlong)iVar4 << 4);
        }
        iVar9 = iVar9 + iVar4;
      }
      else {
        FUN_1402c4db1(plVar2 + lVar7 * 2,iVar4);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar10 = iVar12;
    } while (lVar8 < lVar13);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 145a3886e FUN_145a3886e body=1446 status=ok
// SIG undefined FUN_145a3886e(void)

void FUN_145a3886e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141471d82(param_1 + 0x10);
  FUN_145a38e6a(param_1 + 0x60);
  lVar3 = FUN_1449e3f1e();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x428);
  }
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd8564();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  if (param_3[2] == 0) {
    if ((lVar5 == 0) || (*param_3 == 0)) goto LAB_145a38a89;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,param_3);
        param_3[2] = lVar5;
        if (lVar5 == 0) goto LAB_145a38a89;
        goto LAB_145a38922;
      }
    }
    param_3[2] = 0;
    goto LAB_145a38a89;
  }
LAB_145a38922:
  cVar2 = FUN_144729dda(param_1 + 0x150);
  if ((lVar3 == 0) || (cVar2 == '\0')) goto LAB_145a38a89;
  lVar5 = param_3[1];
  local_38 = param_1;
  local_30 = lVar3;
  if (lVar5 == 0) {
    uVar4 = FUN_145cd8564();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  lVar6 = param_3[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_145a38de7:
      lVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_145a38de7;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = lVar6;
  }
  FUN_141471dd6(&local_38,lVar6 + 0x18,0);
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd8564();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  lVar6 = param_3[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_145a38dee:
      lVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_145a38dee;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = lVar6;
  }
  FUN_141471dd6(&local_38,lVar6 + 0x28,1);
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd8564();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  lVar6 = param_3[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_145a38df5:
      lVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_145a38df5;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = lVar6;
  }
  FUN_141471dd6(&local_38,lVar6 + 0x38,2);
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd8564();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  lVar6 = param_3[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_145a38dfc:
      lVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_145a38dfc;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = lVar6;
  }
  FUN_141471dd6(&local_38,lVar6 + 0x48,3);
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd8564();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  lVar6 = param_3[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_145a38e03:
      lVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_145a38e03;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = lVar6;
  }
  FUN_141471dd6(&local_38,lVar6 + 0x58,4);
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd8564();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  lVar6 = param_3[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_145a38e0a:
      lVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_145a38e0a;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = lVar6;
  }
  FUN_141471dd6(&local_38,lVar6 + 0x68,5);
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd8564();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  lVar6 = param_3[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_145a38e11:
      lVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_145a38e11;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = lVar6;
  }
  FUN_141471dd6(&local_38,lVar6 + 0x78,6);
  FUN_145a38e16(param_1 + 0x38,lVar3 + 0x80);
LAB_145a38a89:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a38e16 FUN_145a38e16 body=84 status=ok
// SIG undefined FUN_145a38e16(void)

undefined8 * FUN_145a38e16(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145a38ecc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 145a38e6a FUN_145a38e6a body=98 status=ok
// SIG undefined FUN_145a38e6a(void)

void FUN_145a38e6a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  *(int *)(param_1 + 0xe8) = iVar1 + 7;
  if ((uint)(*(int *)(param_1 + 0xec) - iVar1) < 7) {
    FUN_1487f526c(param_1);
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    lVar2 = param_1;
  }
  memset((void *)((longlong)iVar1 * 0x20 + lVar2),0,0xe0);
  return;
}



// FUNCTION 145a38ecc FUN_145a38ecc body=90 status=ok
// SIG undefined FUN_145a38ecc(void)

void FUN_145a38ecc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145a38f26 FUN_145a38f26 body=9 status=ok
// SIG undefined FUN_145a38f26(void)

void FUN_145a38f26(longlong param_1)

{
  FUN_145a38f30(param_1 + 0x10);
  return;
}



// FUNCTION 145a38f30 FUN_145a38f30 body=119 status=ok
// SIG undefined FUN_145a38f30(void)

void FUN_145a38f30(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b634a30;
  plVar3 = (longlong *)param_1[0x30];
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
  plVar3 = (longlong *)param_1[0x2e];
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
  FUN_145a38fa8(param_1);
  return;
}



// FUNCTION 145a38fa8 FUN_145a38fa8 body=363 status=ok
// SIG undefined FUN_145a38fa8(void)

void FUN_145a38fa8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b626ef0;
  plVar3 = (longlong *)param_1[0x22];
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
  plVar3 = (longlong *)param_1[0x20];
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
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x12];
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
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 145a39114 FUN_145a39114 body=253 status=ok
// SIG undefined FUN_145a39114(void)

void FUN_145a39114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = FUN_141472624();
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1448f70da(*param_4,uVar1,param_5,&local_b8);
  local_b8 = param_5;
  local_a8 = *(undefined4 *)param_4;
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_a0 = *(undefined4 *)(param_4 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = *param_6;
  local_90 = param_6[1];
  local_88 = param_7;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_b0 = param_2;
  uVar1 = FUN_141472624();
  local_c8 = &local_b8;
  FUN_145a39212(param_1,param_3,uVar1,param_5);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a39212 FUN_145a39212 body=372 status=ok
// SIG undefined FUN_145a39212(void)

void FUN_145a39212(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = *(longlong *)(param_3 + 0x48);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_68 = 2;
  local_58 = param_4;
  local_48 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_58,1);
  *puVar14 = &PTR_FUN_14a2e71b0;
  uVar10 = param_5[1];
  uVar11 = param_5[2];
  uVar12 = param_5[3];
  puVar14[0x37] = *param_5;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_5[4];
  puVar14[0x3c] = param_5[5];
  uVar3 = *(undefined4 *)(param_5 + 6);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x34);
  uVar5 = *(undefined4 *)(param_5 + 7);
  uVar6 = *(undefined4 *)((longlong)param_5 + 0x3c);
  uVar7 = *(undefined4 *)(param_5 + 8);
  uVar8 = *(undefined4 *)((longlong)param_5 + 0x44);
  uVar9 = *(undefined4 *)(param_5 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_5 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a39388 FUN_145a39388 body=226 status=ok
// SIG undefined FUN_145a39388(void)

longlong * FUN_145a39388(longlong *param_1)

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
  pcVar13 = FUN_1462b739e;
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



// FUNCTION 145a39470 FUN_145a39470 body=132 status=ok
// SIG undefined FUN_145a39470(void)

undefined1 * FUN_145a39470(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DrawColorMRT";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x55;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 8;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145a3946c;
}



// FUNCTION 145a394f4 FUN_145a394f4 body=1135 status=ok
// SIG undefined FUN_145a394f4(void)

void FUN_145a394f4(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_4;
  local_d8 = param_3;
  lVar10 = FUN_145a39964(param_3);
  if (lVar10 == 0) goto LAB_145a397b3;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar2 = (undefined4 *)(lVar13 + 0xc7c);
  uVar5 = *puVar2;
  pbVar3 = (byte *)(lVar13 + 0xc80);
  bVar4 = *pbVar3;
  if ((bVar4 & 1) != 0) {
    *pbVar3 = 0;
    *puVar2 = 0xffffffff;
  }
  local_e0 = param_1;
  plVar11 = (longlong *)FUN_14001cc68(0x180);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14b97dfa0;
  plVar15 = plVar11 + 2;
  memset(plVar15,0,0x170);
  local_d0 = plVar15;
  FUN_141210884(plVar15);
  plVar11[2] = (longlong)&PTR_FUN_14b00bec0;
  plVar11[0x2d] = 0;
  plVar11[0x2e] = 0;
  if ((bVar4 & 1) != 0) {
    *puVar2 = uVar5;
    *pbVar3 = 1;
  }
  uVar12 = FUN_140b7bab8();
  cVar9 = FUN_1448093f4(param_2,uVar12);
  if ((param_2 != 0) && (cVar9 != '\0')) {
    if (*(longlong *)(param_2 + 0xd0) == 0) {
      *(undefined1 *)(plVar11 + 5) = *(undefined1 *)(param_2 + 0x90);
      if (plVar11[6] == *(longlong *)(param_2 + 0x98)) {
        iVar14 = *(int *)(param_2 + 0xa0);
        if ((int)plVar11[7] != iVar14) goto LAB_145a3963d;
      }
      else {
        iVar14 = *(int *)(param_2 + 0xa0);
LAB_145a3963d:
        plVar11[6] = *(longlong *)(param_2 + 0x98);
        *(int *)(plVar11 + 7) = iVar14;
        plVar11[8] = 0;
      }
      *(undefined4 *)(plVar11 + 10) = *(undefined4 *)(param_2 + 0xb8);
      plVar11[9] = *(longlong *)(param_2 + 0xb0);
    }
    else {
      local_c8 = plVar11[0xc];
      uStack_80 = plVar11[0xd];
      local_b8 = (longlong *)plVar11[0xe];
      uStack_70 = plVar11[0xf];
      local_68 = plVar11[0x10];
      lStack_60 = plVar11[0x11];
      local_58 = plVar11[0x12];
      uStack_50 = plVar11[0x13];
      lVar6 = local_58;
      lVar8 = uStack_50;
      local_78 = local_b8;
      lVar13 = uStack_70;
      local_88 = local_c8;
      uVar7 = uStack_80;
      plVar11[0x12] = CONCAT44(uStack_94,local_98);
      plVar11[0x13] = CONCAT44(uStack_8c,uStack_90);
      plVar11[0x10] = (longlong)&PTR_LAB_14b97dfc0;
      plVar11[0x11] = (longlong)FUN_1441aea0c;
      plVar11[0xe] = 0;
      plVar11[0xf] = CONCAT44(uStack_ac,uStack_b0);
      plVar11[0xc] = (longlong)FUN_148d8a794;
      plVar11[0xd] = CONCAT44(uStack_bc,uStack_c0);
      uStack_80._4_4_ = (undefined4)(uStack_80 >> 0x20);
      uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
      local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
      uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
      local_98 = (undefined4)local_58;
      uStack_94 = local_58._4_4_;
      uStack_90 = (undefined4)uStack_50;
      uStack_8c = uStack_50._4_4_;
      local_a8 = local_68;
      lStack_a0 = lStack_60;
      uStack_b0 = (undefined4)uStack_70;
      uStack_ac = uStack_70._4_4_;
      uStack_c0 = (undefined4)uStack_80;
      uStack_bc = uStack_80._4_4_;
      uStack_80 = uVar7;
      uStack_70 = lVar13;
      local_58 = lVar6;
      uStack_50 = lVar8;
      if (local_c8 != 0) {
        plVar15 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar15 = &local_a8;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  uVar12 = local_e8;
  *(undefined1 *)((longlong)plVar11 + 0x10c) = 1;
  FUN_140d8a0fe(param_2,&local_88,local_e8);
  lVar13 = local_e0;
  *(undefined4 *)(plVar11 + 0x21) = (undefined4)uStack_80;
  plVar11[0x20] = local_88;
  FUN_145a39a7c(plVar11 + 0x2a,local_e0 + 0x10);
  plVar11[0x29] = *(longlong *)(lVar13 + 8);
  FUN_140641ec6(lVar10,&local_88,0);
  FUN_1408228f2(plVar11 + 0x2d,&local_88);
  FUN_1447cd778(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(lVar10 + 0x94));
  local_88 = *(longlong *)(lVar10 + 0x8c);
  FUN_145a39ad2(&local_c8,uVar12);
  lVar10 = local_d8;
  lVar13 = FUN_140d89a16(param_2,local_d8,&local_c8,&local_88);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  iVar14 = *(int *)(lVar13 + 0x50);
  *(uint *)(lVar13 + 0x50) = iVar14 + 1U;
  if (*(uint *)(lVar13 + 0x54) < iVar14 + 1U) {
    FUN_140822376((longlong *)(lVar13 + 0x48),iVar14);
  }
  lVar6 = *(longlong *)(lVar13 + 0x48);
  *(longlong **)(lVar6 + (longlong)iVar14 * 0x10) = local_d0;
  *(longlong **)(lVar6 + 8 + (longlong)iVar14 * 0x10) = plVar11;
  if (plVar11 == (longlong *)0x0) {
    lVar10 = FUN_1406b2efc(lVar10 + 0x2c0);
    FUN_140d22200(lVar10 + 0xb0,lVar13 + 0x18);
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar15 = plVar11 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    lVar10 = FUN_1406b2efc(lVar10 + 0x2c0);
    FUN_140d22200(lVar10 + 0xb0,lVar13 + 0x18);
    LOCK();
    plVar15 = plVar11 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_145a397b3:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a39964 FUN_145a39964 body=137 status=ok
// SIG undefined FUN_145a39964(void)

undefined8 FUN_145a39964(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a399ee((ulonglong)((uint)*(ushort *)(param_1 + 0x2ae) * 0x18) +
                *(longlong *)(DAT_14cb86da8 + 0x340),&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a399ee FUN_145a399ee body=83 status=ok
// SIG undefined FUN_145a399ee(void)

longlong * FUN_145a399ee(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_145a39a42();
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



// FUNCTION 145a39a42 FUN_145a39a42 body=57 status=ok
// SIG undefined FUN_145a39a42(void)

void FUN_145a39a42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dd58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dd58 = FUN_140002ddd(FUN_146538706,uVar1,L"ObjectiveTypeSettings_GbxInteract");
  }
  return;
}



// FUNCTION 145a39a7c FUN_145a39a7c body=86 status=ok
// SIG undefined FUN_145a39a7c(void)

longlong * FUN_145a39a7c(longlong *param_1,longlong *param_2)

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



// FUNCTION 145a39ad2 FUN_145a39ad2 body=218 status=ok
// SIG undefined FUN_145a39ad2(void)

longlong FUN_145a39ad2(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [44];
  undefined1 local_4c [12];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 8);
  }
  FUN_144a7660c(puVar1,local_4c,1);
  FUN_1408226d0(local_4c,&local_40,1);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_140002266(&local_30,L"__Bind_IOSpawnPickup_%s",puVar2);
  *(undefined8 *)(param_1 + 4) = 0;
  puVar2 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar2 = local_30;
  }
  FUN_1405f0d29(param_1,puVar2,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a39bae FUN_145a39bae body=40 status=ok
// SIG undefined FUN_145a39bae(void)

undefined8 FUN_145a39bae(undefined8 param_1,int param_2)

{
  FUN_145a39bd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a39bd6 FUN_145a39bd6 body=547 status=ok
// SIG undefined FUN_145a39bd6(void)

void FUN_145a39bd6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b7f07b0;
  param_1[0x72] = &PTR_FUN_14b7f0de8;
  param_1[0x73] = &PTR_FUN_14b7f0e00;
  param_1[0x74] = &PTR_FUN_14b7f0e50;
  param_1[0x75] = &PTR_FUN_14b7f0e70;
  plVar3 = (longlong *)param_1[0xb0];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0xae];
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
  plVar3 = (longlong *)param_1[0xac];
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
  plVar3 = (longlong *)param_1[0xa9];
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
  if (param_1[0xa0] != 0) {
    plVar3 = param_1 + 0xa4;
    if ((longlong *)param_1[0xa2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xa2];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  param_1[0x97] = &PTR_FUN_14b695510;
  FUN_1449e6b18((longlong)param_1 + 0x4ec);
  FUN_1449e6b18(param_1 + 0x9c);
  FUN_1449e6b18((longlong)param_1 + 0x4d4);
  FUN_1449e6b18(param_1 + 0x99);
  param_1[0x8e] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x91) = 0;
  if (*(int *)((longlong)param_1 + 0x48c) != 0) {
    FUN_140115c12(param_1 + 0x90,0);
  }
  param_1[0x8f] = 0;
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145a39dfa FUN_145a39dfa body=156 status=ok
// SIG undefined FUN_145a39dfa(void)

bool FUN_145a39dfa(longlong param_1,undefined4 param_2)

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



// FUNCTION 145a39e98 FUN_145a39e98 body=321 status=ok
// SIG undefined FUN_145a39e98(void)

void FUN_145a39e98(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x180) + 0x128);
  if (lVar8 != 0) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x180) + 0x120);
    plVar9 = plVar7 + lVar8 * 2;
    do {
      lVar8 = *plVar7;
      plVar3 = (longlong *)plVar7[1];
      if (plVar3 == (longlong *)0x0) {
LAB_145a39f95:
        plVar6 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_145a39f95;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
          plVar6 = plVar3;
        } while (!bVar10);
      }
      if (plVar6 == (longlong *)0x0) {
        lVar8 = 0;
      }
      if (lVar8 != 0 && param_2 == '\0') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x168));
        *(int *)(lVar8 + 0x160) = *(int *)(lVar8 + 0x160) + 1;
        *(int *)(lVar8 + 0x118) = *(int *)(lVar8 + 0x118) + 1;
        *(int *)(lVar8 + 0xd0) = *(int *)(lVar8 + 0xd0) + 1;
        *(int *)(lVar8 + 0xd4) = *(int *)(lVar8 + 0xd4) + 1;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x168));
      }
      if (plVar6 != (longlong *)0x0) {
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar9);
  }
  return;
}



// FUNCTION 145a39fda FUN_145a39fda body=239 status=ok
// SIG undefined FUN_145a39fda(void)

void FUN_145a39fda(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145a3a0ca(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3a0ca FUN_145a3a0ca body=483 status=ok
// SIG undefined FUN_145a3a0ca(void)

void FUN_145a3a0ca(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != (longlong *)0x0) {
    if (param_2 != (longlong *)0x0) {
      uVar2 = FUN_140eaf18a();
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_140eaf18a();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
          plVar3 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4);
          if (plVar3 != (longlong *)0x0) {
            FUN_1449027d0(param_1,&local_48);
            local_38 = *(undefined8 *)(local_48 + 0x520);
            local_30 = *(longlong *)(local_48 + 0x528);
            if (local_30 != 0) {
              LOCK();
              *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
              UNLOCK();
            }
            (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
            plVar3 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_40 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_40)(local_40);
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
      }
    }
    uVar2 = FUN_140eaf18a();
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140eaf18a();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4);
        if (plVar3 != (longlong *)0x0) {
          FUN_1449027d0(param_1,&local_48);
          local_58 = *(undefined8 *)(local_48 + 0x520);
          local_50 = *(longlong *)(local_48 + 0x528);
          if (local_50 != 0) {
            LOCK();
            *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_58);
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_40 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar1 = (int *)((longlong)local_40 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_40 + 0x10))(local_40);
              }
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3a2ba FUN_145a3a2ba body=206 status=ok
// SIG undefined FUN_145a3a2ba(void)

undefined8 * FUN_145a3a2ba(undefined8 *param_1)

{
  FUN_145a3a388();
  *param_1 = &PTR_FUN_14ab20650;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x99] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  return param_1;
}


