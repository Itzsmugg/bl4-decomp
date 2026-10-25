// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145dfd264 FUN_145dfd264 body=216 status=ok
// SIG undefined FUN_145dfd264(void)

undefined8 * FUN_145dfd264(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145dfd354 FUN_145dfd354 body=189 status=ok
// SIG undefined FUN_145dfd354(void)

undefined8 * FUN_145dfd354(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6909e0;
  memset(param_1 + 0x16,0,0xa0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebad0) {
    FUN_144b3d300(&DAT_14caebad0);
    if (DAT_14caebad0 == -1) {
      FUN_1415627ca();
      atexit((_func_5014 *)&LAB_14356ef05);
      _Init_thread_footer(&DAT_14caebad0);
    }
  }
  param_1[0x2a] = 0x42c8000043800000;
  return param_1;
}



// FUNCTION 145dfd41c FUN_145dfd41c body=185 status=ok
// SIG undefined FUN_145dfd41c(void)

undefined8 * FUN_145dfd41c(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a698860;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
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
  param_1[0x24] = 0;
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xfe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec0e8) {
    FUN_144b3d300(&DAT_14caec0e8);
    if (DAT_14caec0e8 == -1) {
      FUN_141562870();
      atexit((_func_5014 *)&LAB_14356f594);
      _Init_thread_footer(&DAT_14caec0e8);
    }
  }
  return param_1;
}



// FUNCTION 145dfd4e0 FUN_145dfd4e0 body=185 status=ok
// SIG undefined FUN_145dfd4e0(void)

undefined8 * FUN_145dfd4e0(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a698d20;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
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
  param_1[0x24] = 0;
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xfe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec100) {
    FUN_144b3d300(&DAT_14caec100);
    if (DAT_14caec100 == -1) {
      FUN_14156291a();
      atexit((_func_5014 *)&LAB_14356f5a8);
      _Init_thread_footer(&DAT_14caec100);
    }
  }
  return param_1;
}



// FUNCTION 145dfd59a FUN_145dfd59a body=707 status=ok
// SIG undefined FUN_145dfd59a(void)

void FUN_145dfd59a(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = (**(code **)(*param_1 + 0x180))();
  if (((lVar8 == 0) ||
      (((bVar2 = *(byte *)(lVar8 + 0x152), bVar2 != 1 &&
        ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) || (param_2 == 0)))) ||
     (*(char *)(param_2 + 0x3b8) != '\x01')) goto LAB_145dfd65c;
  lVar4 = *(longlong *)(param_2 + 0x40);
  plVar5 = *(longlong **)(param_2 + 0x48);
  if (plVar5 == (longlong *)0x0) {
    if (lVar4 == 0) goto LAB_145dfd65c;
    lVar10 = param_1[5];
    local_40 = (longlong *)0x0;
LAB_145dfd621:
    local_48 = lVar4;
    FUN_145dfd85e(lVar10,&local_48,param_3);
    lVar4 = param_1[5];
    if ((((*(longlong *)(lVar4 + 0x1c0) == 0) || (lVar4 = *(longlong *)(lVar4 + 0x1c8), lVar4 == 0))
        || (*(int *)(lVar4 + 8) < 1)) &&
       (plVar9 = (longlong *)FUN_1449baec6(lVar8), plVar9 != (longlong *)0x0)) {
      cVar3 = *(char *)(param_2 + 0x3b9);
      param_2 = param_2 + 0x370;
      cVar7 = FUN_144729dda(param_2);
      if (cVar3 == '\0') {
        if ((cVar7 != '\0') && (lVar8 = FUN_14479d2ce(param_2), lVar8 != 0)) {
          local_58 = param_1[5];
          plVar6 = (longlong *)param_1[6];
          if (plVar6 == (longlong *)0x0) {
            local_50 = (longlong *)0x0;
            (**(code **)(*plVar9 + 0x2e8))(plVar9,lVar8,&local_58,5000);
          }
          else {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            local_50 = plVar6;
            (**(code **)(*plVar9 + 0x2e8))(plVar9,lVar8,&local_58,5000);
            LOCK();
            plVar9 = plVar6 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
          FUN_145dfd982(param_1[5],lVar8);
        }
      }
      else if ((cVar7 == '\0') || (lVar8 = FUN_14479d2ce(param_2), lVar8 == 0)) {
        local_68 = param_1[5];
        plVar6 = (longlong *)param_1[6];
        if (plVar6 == (longlong *)0x0) {
          local_60 = (longlong *)0x0;
          (**(code **)(*plVar9 + 0x2d8))(plVar9,&local_68,5000);
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          local_60 = plVar6;
          (**(code **)(*plVar9 + 0x2d8))(plVar9,&local_68,5000);
          LOCK();
          plVar9 = plVar6 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
    }
    if (plVar5 == (longlong *)0x0) goto LAB_145dfd65c;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (lVar4 != 0) {
      lVar10 = param_1[5];
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_40 = plVar5;
      goto LAB_145dfd621;
    }
  }
  LOCK();
  plVar9 = plVar5 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_145dfd65c:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dfd85e FUN_145dfd85e body=290 status=ok
// SIG undefined FUN_145dfd85e(void)

void FUN_145dfd85e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8 [24];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140763f46(param_1,local_d8);
  local_108 = *(undefined4 *)(param_1 + 0x20c);
  uStack_104 = *(undefined4 *)(param_1 + 0x210);
  uStack_100 = *(undefined4 *)(param_1 + 0x214);
  uStack_fc = *(undefined4 *)(param_1 + 0x218);
  local_f8 = 1;
  local_f0 = 0;
  uStack_e8 = 0;
  local_b0 = 1;
  local_c0 = local_108;
  uStack_bc = uStack_104;
  uStack_b8 = uStack_100;
  uStack_b4 = uStack_fc;
  FUN_144a450dc(local_a8,&local_f0);
  FUN_1449db362(&local_f0);
  local_118 = *param_2;
  local_110 = (longlong *)param_2[1];
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  FUN_140a4fd40(local_d8,&local_118);
  plVar3 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1407640b6(local_d8);
  FUN_140fe1f54(param_1);
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
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfd982 FUN_145dfd982 body=95 status=ok
// SIG undefined FUN_145dfd982(void)

void FUN_145dfd982(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14485c47a(param_1 + 0x21c);
  local_28 = DAT_14c96b23a;
  local_27 = 1;
  local_20 = 0;
  uStack_18 = 0;
  FUN_140fe254e(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfd9e2 FUN_145dfd9e2 body=144 status=ok
// SIG undefined FUN_145dfd9e2(void)

code * FUN_145dfd9e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dfda72();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DenoiserCommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"Denoiser::FCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x180000000cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d3266;
}



// FUNCTION 145dfda72 FUN_145dfda72 body=268 status=ok
// SIG undefined FUN_145dfda72(void)

undefined * FUN_145dfda72(void)

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
              0x110) < DAT_14c9e7380) {
    FUN_144b3d300(&DAT_14c9e7380);
    if (DAT_14c9e7380 == -1) {
      FUN_145dfdb80(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCommonShaderParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x19;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e7300,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccd904);
      _Init_thread_footer(&DAT_14c9e7380);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e7300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfdb80 FUN_145dfdb80 body=226 status=ok
// SIG undefined FUN_145dfdb80(void)

longlong * FUN_145dfdb80(longlong *param_1)

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
  pcVar13 = FUN_1462d32f6;
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



// FUNCTION 145dfdc68 FUN_145dfdc68 body=132 status=ok
// SIG undefined FUN_145dfdc68(void)

undefined1 * FUN_145dfdc68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DenoiserBufferSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dfdc64;
}



// FUNCTION 145dfdcec FUN_145dfdcec body=138 status=ok
// SIG undefined FUN_145dfdcec(void)

code * FUN_145dfdcec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DenoiserBufferBilinearUVMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfdc68;
}



// FUNCTION 145dfdd76 FUN_145dfdd76 body=144 status=ok
// SIG undefined FUN_145dfdd76(void)

code * FUN_145dfdd76(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dfde06();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ImportanceSampling";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenProbeImportanceSamplingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1200000007d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471e416c;
}



// FUNCTION 145dfde06 FUN_145dfde06 body=268 status=ok
// SIG undefined FUN_145dfde06(void)

undefined * FUN_145dfde06(void)

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
              0x110) < DAT_14c9f2038) {
    FUN_144b3d300(&DAT_14c9f2038);
    if (DAT_14c9f2038 == -1) {
      FUN_145dfdf14(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScreenProbeImportanceSamplingParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x47;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f1fb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2638b);
      _Init_thread_footer(&DAT_14c9f2038);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9f1fb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfdf14 FUN_145dfdf14 body=226 status=ok
// SIG undefined FUN_145dfdf14(void)

longlong * FUN_145dfdf14(longlong *param_1)

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
  pcVar13 = FUN_1462d9d3c;
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



// FUNCTION 145dfdffc FUN_145dfdffc body=132 status=ok
// SIG undefined FUN_145dfdffc(void)

undefined1 * FUN_145dfdffc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxImportanceSamplingOctahedronResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dfdff8;
}



// FUNCTION 145dfe080 FUN_145dfe080 body=138 status=ok
// SIG undefined FUN_145dfe080(void)

code * FUN_145dfe080(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenProbeBRDFOctahedronResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfdffc;
}



// FUNCTION 145dfe10a FUN_145dfe10a body=138 status=ok
// SIG undefined FUN_145dfe10a(void)

undefined1 * FUN_145dfe10a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dfe194();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"TracingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenMeshSDFTracingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x58;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471f9db6;
}



// FUNCTION 145dfe194 FUN_145dfe194 body=268 status=ok
// SIG undefined FUN_145dfe194(void)

undefined * FUN_145dfe194(void)

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
              0x110) < DAT_14c9f8360) {
    FUN_144b3d300(&DAT_14c9f8360);
    if (DAT_14c9f8360 == -1) {
      FUN_145dfe2a2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenMeshSDFTracingParameters";
      local_38 = 0;
      local_50 = 0x100;
      local_58 = 0x4f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f82e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d59639);
      _Init_thread_footer(&DAT_14c9f8360);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9f82e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfe2a2 FUN_145dfe2a2 body=226 status=ok
// SIG undefined FUN_145dfe2a2(void)

longlong * FUN_145dfe2a2(longlong *param_1)

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
  pcVar13 = FUN_1462dfa3c;
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



// FUNCTION 145dfe38a FUN_145dfe38a body=138 status=ok
// SIG undefined FUN_145dfe38a(void)

code * FUN_145dfe38a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshSDFNotCoveredExpandSurfaceScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dfac4;
}



// FUNCTION 145dfe414 FUN_145dfe414 body=138 status=ok
// SIG undefined FUN_145dfe414(void)

code * FUN_145dfe414(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshSDFNotCoveredMinStepScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf400000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfe38a;
}



// FUNCTION 145dfe49e FUN_145dfe49e body=144 status=ok
// SIG undefined FUN_145dfe49e(void)

code * FUN_145dfe49e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dfe52e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam41";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScaleMeshSizeModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x42000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dfe832;
}



// FUNCTION 145dfe52e FUN_145dfe52e body=268 status=ok
// SIG undefined FUN_145dfe52e(void)

undefined * FUN_145dfe52e(void)

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
              0x110) < DAT_14cb34a10) {
    FUN_144b3d300(&DAT_14cb34a10);
    if (DAT_14cb34a10 == -1) {
      FUN_145dfe63c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScaleMeshSizeModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x4c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34990,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb8d0);
      _Init_thread_footer(&DAT_14cb34a10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34990;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfe63c FUN_145dfe63c body=226 status=ok
// SIG undefined FUN_145dfe63c(void)

longlong * FUN_145dfe63c(longlong *param_1)

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
  pcVar13 = FUN_146462a58;
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



// FUNCTION 145dfe724 FUN_145dfe724 body=132 status=ok
// SIG undefined FUN_145dfe724(void)

undefined1 * FUN_145dfe724(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleMeshSize_Distribution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dfe720;
}



// FUNCTION 145dfe7a8 FUN_145dfe7a8 body=138 status=ok
// SIG undefined FUN_145dfe7a8(void)

code * FUN_145dfe7a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleMeshSize_CurveScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfe724;
}



// FUNCTION 145dfe832 FUN_145dfe832 body=144 status=ok
// SIG undefined FUN_145dfe832(void)

code * FUN_145dfe832(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dfe8c2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam40";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScaleSpriteSizeBySpeedModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x40000000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d4d578;
}



// FUNCTION 145dfe8c2 FUN_145dfe8c2 body=268 status=ok
// SIG undefined FUN_145dfe8c2(void)

undefined * FUN_145dfe8c2(void)

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
              0x110) < DAT_14cb34a98) {
    FUN_144b3d300(&DAT_14cb34a98);
    if (DAT_14cb34a98 == -1) {
      FUN_145dfe9d0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScaleSpriteSizeBySpeedModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x6a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34a18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb8dc);
      _Init_thread_footer(&DAT_14cb34a98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34a18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfe9d0 FUN_145dfe9d0 body=226 status=ok
// SIG undefined FUN_145dfe9d0(void)

longlong * FUN_145dfe9d0(longlong *param_1)

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
  pcVar13 = FUN_146462ae0;
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



// FUNCTION 145dfeab8 FUN_145dfeab8 body=132 status=ok
// SIG undefined FUN_145dfeab8(void)

undefined1 * FUN_145dfeab8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleSpriteSizeBySpeed_ScaleFactorBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dfeab4;
}



// FUNCTION 145dfeb3c FUN_145dfeb3c body=138 status=ok
// SIG undefined FUN_145dfeb3c(void)

code * FUN_145dfeb3c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleSpriteSizeBySpeed_ScaleDistribution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148056416;
}



// FUNCTION 145dfebc6 FUN_145dfebc6 body=144 status=ok
// SIG undefined FUN_145dfebc6(void)

code * FUN_145dfebc6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dfec56();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam37";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMeshRotationRateModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3a000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dfef5a;
}



// FUNCTION 145dfec56 FUN_145dfec56 body=268 status=ok
// SIG undefined FUN_145dfec56(void)

undefined * FUN_145dfec56(void)

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
              0x110) < DAT_14cb34c30) {
    FUN_144b3d300(&DAT_14cb34c30);
    if (DAT_14cb34c30 == -1) {
      FUN_145dfed64(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMeshRotationRateModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x5f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34bb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb900);
      _Init_thread_footer(&DAT_14cb34c30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34bb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfed64 FUN_145dfed64 body=226 status=ok
// SIG undefined FUN_145dfed64(void)

longlong * FUN_145dfed64(longlong *param_1)

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
  pcVar13 = FUN_146462c72;
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



// FUNCTION 145dfee4c FUN_145dfee4c body=132 status=ok
// SIG undefined FUN_145dfee4c(void)

undefined1 * FUN_145dfee4c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshRotationRate_ModuleEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dfee48;
}



// FUNCTION 145dfeed0 FUN_145dfeed0 body=138 status=ok
// SIG undefined FUN_145dfeed0(void)

code * FUN_145dfeed0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshRotationRate_Scale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfee4c;
}



// FUNCTION 145dfef5a FUN_145dfef5a body=144 status=ok
// SIG undefined FUN_145dfef5a(void)

code * FUN_145dfef5a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dfefea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam36";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMeshIndexModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x39000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ee7c78;
}



// FUNCTION 145dfefea FUN_145dfefea body=268 status=ok
// SIG undefined FUN_145dfefea(void)

undefined * FUN_145dfefea(void)

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
              0x110) < DAT_14cb34cb8) {
    FUN_144b3d300(&DAT_14cb34cb8);
    if (DAT_14cb34cb8 == -1) {
      FUN_145dff0f8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMeshIndexModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x59;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34c38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb90c);
      _Init_thread_footer(&DAT_14cb34cb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34c38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dff0f8 FUN_145dff0f8 body=226 status=ok
// SIG undefined FUN_145dff0f8(void)

longlong * FUN_145dff0f8(longlong *param_1)

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
  pcVar13 = FUN_146462cfa;
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



// FUNCTION 145dff1e0 FUN_145dff1e0 body=132 status=ok
// SIG undefined FUN_145dff1e0(void)

undefined1 * FUN_145dff1e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshIndex_Index";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dff1dc;
}



// FUNCTION 145dff264 FUN_145dff264 body=138 status=ok
// SIG undefined FUN_145dff264(void)

code * FUN_145dff264(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshIndex_TableOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dff1e0;
}



// FUNCTION 145dff2ee FUN_145dff2ee body=144 status=ok
// SIG undefined FUN_145dff2ee(void)

code * FUN_145dff2ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dff37e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam90";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FRotateAroundPointModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1900000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14646357c;
}



// FUNCTION 145dff37e FUN_145dff37e body=268 status=ok
// SIG undefined FUN_145dff37e(void)

undefined * FUN_145dff37e(void)

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
              0x110) < DAT_14cb35208) {
    FUN_144b3d300(&DAT_14cb35208);
    if (DAT_14cb35208 == -1) {
      FUN_145dff48c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRotateAroundPointModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x27;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb35188,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb984);
      _Init_thread_footer(&DAT_14cb35208);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb35188;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dff48c FUN_145dff48c body=226 status=ok
// SIG undefined FUN_145dff48c(void)

longlong * FUN_145dff48c(longlong *param_1)

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
  pcVar13 = FUN_14646360c;
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



// FUNCTION 145dff574 FUN_145dff574 body=132 status=ok
// SIG undefined FUN_145dff574(void)

undefined1 * FUN_145dff574(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RotateAroundPoint_RateScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dff570;
}



// FUNCTION 145dff5f8 FUN_145dff5f8 body=138 status=ok
// SIG undefined FUN_145dff5f8(void)

code * FUN_145dff5f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RotateAroundPoint_RadiusScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146463694;
}



// FUNCTION 145dff682 FUN_145dff682 body=21 status=ok
// SIG undefined FUN_145dff682(void)

undefined * FUN_145dff682(void)

{
  FUN_145dff698();
  return &DAT_14cc1a8d0;
}



// FUNCTION 145dff698 FUN_145dff698 body=205 status=ok
// SIG undefined FUN_145dff698(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dff698(void)

{
  if ((DAT_14cc1a937 & 2) != 0) {
    return;
  }
  DAT_14cc1a937 = DAT_14cc1a937 | 2;
  _DAT_14cc1a8d8 = L"FComputeKernelShaderMapContent";
  _DAT_14cc1a8f0 = FUN_146826540;
  _DAT_14cc1a8f8 = FUN_146825d77;
  _DAT_14cc1a900 = FUN_146825fd6;
  _DAT_14cc1a908 = FUN_1407e02ea;
  _DAT_14cc1a910 = FUN_146826273;
  _DAT_14cc1a8e8 = FUN_149457eec;
  _DAT_14cc1a928 = 0xffffffff000000a0;
  _DAT_14cc1a930 = 8;
  DAT_14cc1a934 = 0;
  _DAT_14cc1a918 = &LAB_149457f2e;
  FUN_145dff766();
  FUN_145dff7e0();
  FUN_1407e00cc(&DAT_14cc1a8d0);
  return;
}



// FUNCTION 145dff766 FUN_145dff766 body=121 status=ok
// SIG undefined FUN_145dff766(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dff766(void)

{
  FUN_145dff85c();
  _DAT_14cc1ac88 = L"FriendlyName";
  DAT_14cc1acb2 = FUN_140850cc5();
  _DAT_14cc1ac90 = FUN_145790020();
  _DAT_14cc1aca0 = &LAB_14682652b;
  _DAT_14cc1aca8 = &DAT_100000060;
  _DAT_14cc1acb0 = 0;
  _DAT_14cc1ac98 = DAT_14cc1a8e0;
  DAT_14cc1a8e0 = &DAT_14cc1ac88;
  return;
}



// FUNCTION 145dff7e0 FUN_145dff7e0 body=123 status=ok
// SIG undefined FUN_145dff7e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dff7e0(void)

{
  _DAT_14cc1ad58 = L"BASE";
  DAT_14cc1ad82 = 4;
  _DAT_14cc1ad60 = FUN_1457fb4a4();
  _DAT_14cc1ad68 = DAT_14cc1a8e0;
  _DAT_14cc1ad70 = &LAB_14682652b;
  DAT_14cc1a8e0 = &DAT_14cc1ad58;
  DAT_14cc1a935 = DAT_14cc1a935 + '\x01';
  _DAT_14cc1ad78 = 0x100000000;
  if (*(char *)(_DAT_14cc1ad60 + 100) != '\0') {
    DAT_14cc1a936 = DAT_14cc1a936 + '\x01';
  }
  return;
}



// FUNCTION 145dff85c FUN_145dff85c body=230 status=ok
// SIG undefined FUN_145dff85c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dff85c(void)

{
  _DAT_14cc1ace8 = L"CompilationOutput";
  DAT_14cc1ad12 = FUN_140850cc5();
  FUN_145dff942();
  _DAT_14cc1acf0 = &DAT_14cc1a7f0;
  _DAT_14cc1ad00 = &LAB_14682652b;
  _DAT_14cc1ad08 = 0x100000098;
  _DAT_14cc1ad10 = 0;
  _DAT_14cc1acf8 = DAT_14cc1a8e0;
  DAT_14cc1a8e0 = &DAT_14cc1ace8;
  _DAT_14cc1acb8 = L"ShaderMapId";
  DAT_14cc1ace2 = FUN_140850cc5();
  FUN_145dff9f8();
  _DAT_14cc1acc0 = &DAT_14cc1a860;
  _DAT_14cc1acd0 = &LAB_14682652b;
  _DAT_14cc1acd8 = 0x100000070;
  _DAT_14cc1ace0 = 0;
  _DAT_14cc1acc8 = DAT_14cc1a8e0;
  DAT_14cc1a8e0 = &DAT_14cc1acb8;
  return;
}



// FUNCTION 145dff942 FUN_145dff942 body=181 status=ok
// SIG undefined FUN_145dff942(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dff942(void)

{
  if ((DAT_14cc1a857 & 2) == 0) {
    DAT_14cc1a857 = DAT_14cc1a857 | 2;
    _DAT_14cc1a7f8 = L"FComputeKernelCompilationOutput";
    _DAT_14cc1a810 = FUN_146826540;
    _DAT_14cc1a818 = FUN_146825d77;
    _DAT_14cc1a820 = FUN_146825fd6;
    _DAT_14cc1a828 = FUN_1407e02ea;
    _DAT_14cc1a830 = FUN_146826273;
    _DAT_14cc1a808 = &LAB_149457ea8;
    _DAT_14cc1a848 = 0xffffffff00000001;
    _DAT_14cc1a850 = 1;
    DAT_14cc1a854 = 0;
    _DAT_14cc1a838 = &LAB_149457eac;
    FUN_1407e00cc(&DAT_14cc1a7f0);
    return;
  }
  return;
}



// FUNCTION 145dff9f8 FUN_145dff9f8 body=205 status=ok
// SIG undefined FUN_145dff9f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dff9f8(void)

{
  if ((DAT_14cc1a8c7 & 2) == 0) {
    DAT_14cc1a8c7 = DAT_14cc1a8c7 | 2;
    _DAT_14cc1a868 = L"FComputeKernelShaderMapId";
    _DAT_14cc1a880 = FUN_146826540;
    _DAT_14cc1a888 = FUN_146825d77;
    _DAT_14cc1a890 = FUN_146825fd6;
    _DAT_14cc1a898 = FUN_1407e02ea;
    _DAT_14cc1a8a0 = FUN_146826273;
    _DAT_14cc1a878 = FUN_149457eb0;
    _DAT_14cc1a8b8 = 0xffffffff00000028;
    _DAT_14cc1a8c0 = 8;
    DAT_14cc1a8c4 = 0;
    _DAT_14cc1a8a8 = &LAB_149457ee8;
    FUN_145dffac6();
    FUN_1407e00cc(&DAT_14cc1a860);
    return;
  }
  return;
}



// FUNCTION 145dffac6 FUN_145dffac6 body=275 status=ok
// SIG undefined FUN_145dffac6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dffac6(void)

{
  FUN_145dffbda();
  _DAT_14cc1abc8 = L"FeatureLevel";
  DAT_14cc1abf2 = FUN_140850cc5();
  if ((DAT_14cb3465f & 2) == 0) {
    DAT_14cb3465f = DAT_14cb3465f | 3;
    _DAT_14cb34600 = L"ERHIFeatureLevel::Type";
    _DAT_14cb34618 = &LAB_14805533e;
    _DAT_14cb34620 = &LAB_14805534a;
    _DAT_14cb34628 = &LAB_148055356;
    _DAT_14cb34630 = &LAB_14805535c;
    _DAT_14cb34638 = &LAB_148055360;
    _DAT_14cb34610 = &LAB_148055366;
    _DAT_14cb34650 = 0x400000004;
    _DAT_14cb34658 = 4;
    DAT_14cb3465c = 0;
  }
  _DAT_14cc1abd0 = &DAT_14cb345f8;
  _DAT_14cc1abe0 = &LAB_14682652b;
  _DAT_14cc1abe8 = 0x100000000;
  _DAT_14cc1abf0 = 0;
  _DAT_14cc1abd8 = DAT_14cc1a870;
  DAT_14cc1a870 = &DAT_14cc1abc8;
  return;
}



// FUNCTION 145dffbda FUN_145dffbda body=276 status=ok
// SIG undefined FUN_145dffbda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dffbda(void)

{
  FUN_145dffcee();
  _DAT_14cc1abf8 = L"ShaderCodeHash";
  DAT_14cc1ac22 = FUN_140850cc5();
  if ((DAT_14c87e707 & 2) == 0) {
    DAT_14c87e707 = DAT_14c87e707 | 3;
    _DAT_14c87e6a8 = L"unsigned long long";
    _DAT_14c87e6c0 = FUN_146828f6a;
    _DAT_14c87e6c8 = &LAB_146828f9c;
    _DAT_14c87e6d0 = &LAB_146828fa8;
    _DAT_14c87e6d8 = &LAB_146828fae;
    _DAT_14c87e6e0 = FUN_146828fb2;
    _DAT_14c87e6b8 = &LAB_146828fce;
    _DAT_14c87e6f8 = 0x800000008;
    _DAT_14c87e700 = 8;
    DAT_14c87e704 = 0;
  }
  _DAT_14cc1ac00 = &DAT_14c87e6a0;
  _DAT_14cc1ac10 = &LAB_14682652b;
  _DAT_14cc1ac18 = &DAT_100000008;
  _DAT_14cc1ac20 = 0;
  _DAT_14cc1ac08 = DAT_14cc1a870;
  DAT_14cc1a870 = &DAT_14cc1abf8;
  return;
}



// FUNCTION 145dffcee FUN_145dffcee body=372 status=ok
// SIG undefined FUN_145dffcee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dffcee(void)

{
  _DAT_14cc1ac58 = L"LayoutParams";
  DAT_14cc1ac82 = FUN_140850cc5();
  _DAT_14cc1ac60 = FUN_1457921a4();
  _DAT_14cc1ac70 = &LAB_14682652b;
  _DAT_14cc1ac78 = &DAT_100000020;
  _DAT_14cc1ac80 = 0;
  _DAT_14cc1ac68 = DAT_14cc1a870;
  DAT_14cc1a870 = &DAT_14cc1ac58;
  _DAT_14cc1ac28 = L"ShaderTypeDependencies";
  DAT_14cc1ac52 = FUN_140850cc5();
  if ((DAT_14cb34527 & 2) == 0) {
    DAT_14cb34527 = DAT_14cb34527 | 3;
    _DAT_14cb344c8 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb344e0 = &LAB_14805472a;
    _DAT_14cb344e8 = FUN_148054738;
    _DAT_14cb344f0 = &LAB_148054758;
    _DAT_14cb344f8 = &LAB_148054766;
    _DAT_14cb34500 = FUN_148054774;
    _DAT_14cb344d8 = FUN_1480547ba;
    _DAT_14cb34518 = 0x1000000010;
    _DAT_14cb34520 = 8;
    DAT_14cb34524 = 0;
  }
  _DAT_14cc1ac30 = &DAT_14cb344c0;
  _DAT_14cc1ac40 = &LAB_14682652b;
  _DAT_14cc1ac48 = &DAT_100000010;
  _DAT_14cc1ac50 = 0;
  _DAT_14cc1ac38 = DAT_14cc1a870;
  DAT_14cc1a870 = &DAT_14cc1ac28;
  return;
}



// FUNCTION 145dffe62 FUN_145dffe62 body=38 status=ok
// SIG undefined FUN_145dffe62(void)

undefined8 FUN_145dffe62(undefined8 param_1,int param_2)

{
  FUN_145dffe88();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dffe88 FUN_145dffe88 body=158 status=ok
// SIG undefined FUN_145dffe88(void)

void FUN_145dffe88(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e33e90;
  FUN_1415629c4();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_145dfff5c(param_1 + 0x21);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    plVar1 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_145dfff28(param_1 + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 145dfff28 FUN_145dfff28 body=52 status=ok
// SIG undefined FUN_145dfff28(void)

void FUN_145dfff28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar1 = param_1;
  }
  FUN_141286b11(lVar1,*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dfff5c FUN_145dfff5c body=53 status=ok
// SIG undefined FUN_145dfff5c(void)

void FUN_145dfff5c(longlong *param_1)

{
  FUN_145dfff92();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dfff92 FUN_145dfff92 body=90 status=ok
// SIG undefined FUN_145dfff92(void)

void FUN_145dfff92(longlong param_1)

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



// FUNCTION 145dfffec FUN_145dfffec body=140 status=ok
// SIG undefined FUN_145dfffec(void)

void FUN_145dfffec(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c963f18;
  if (param_1 <= (int)DAT_14c963f18) {
    if (DAT_14c963f1c == 0) {
      uVar2 = 4;
      if (4 < DAT_14c963f18) {
        uVar2 = DAT_14c963f18;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14c963f18 + ((ulonglong)((longlong)(int)DAT_14c963f18 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    DAT_14c963f1c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c963f10,param_1,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145e0007a FUN_145e0007a body=261 status=ok
// SIG undefined FUN_145e0007a(void)

undefined8 *
FUN_145e0007a(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_145e00180(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e00180 FUN_145e00180 body=423 status=ok
// SIG undefined FUN_145e00180(void)

void FUN_145e00180(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145e00256:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9d29a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145e00256;
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
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9d29a0;
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
                    /* WARNING: Could not recover jumptable at 0x000145e0030f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e00328 FUN_145e00328 body=146 status=ok
// SIG undefined FUN_145e00328(void)

code * FUN_145e00328(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e003ba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Textures";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FReservoirTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f7470;
  return FUN_1471fa54a;
}



// FUNCTION 145e003ba FUN_145e003ba body=261 status=ok
// SIG undefined FUN_145e003ba(void)

void FUN_145e003ba(void)

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
              0x110) < DAT_14c9f74f0) {
    FUN_144b3d300(&DAT_14c9f74f0);
    if (DAT_14c9f74f0 == -1) {
      FUN_145e004c0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FReservoirTextures";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f7470,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d59681);
      _Init_thread_footer(&DAT_14c9f74f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e004c0 FUN_145e004c0 body=226 status=ok
// SIG undefined FUN_145e004c0(void)

longlong * FUN_145e004c0(longlong *param_1)

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
  pcVar13 = FUN_1462e05ce;
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



// FUNCTION 145e005a8 FUN_145e005a8 body=138 status=ok
// SIG undefined FUN_145e005a8(void)

code * FUN_145e005a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReservoirTraceRadiance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e0656;
}



// FUNCTION 145e00632 FUN_145e00632 body=138 status=ok
// SIG undefined FUN_145e00632(void)

code * FUN_145e00632(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReservoirTraceHitDistance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e005a8;
}



// FUNCTION 145e006bc FUN_145e006bc body=146 status=ok
// SIG undefined FUN_145e006bc(void)

code * FUN_145e006bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e0074e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PathTracingData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FPathTracingData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000497;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca21bc8;
  return FUN_1462f627c;
}



// FUNCTION 145e0074e FUN_145e0074e body=261 status=ok
// SIG undefined FUN_145e0074e(void)

void FUN_145e0074e(void)

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
              0x110) < DAT_14ca21c48) {
    FUN_144b3d300(&DAT_14ca21c48);
    if (DAT_14ca21c48 == -1) {
      FUN_141562b74(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FPathTracingData";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x201;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21bc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c85);
      _Init_thread_footer(&DAT_14ca21c48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e00858 FUN_145e00858 body=138 status=ok
// SIG undefined FUN_145e00858(void)

code * FUN_145e00858(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxBounces";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000207;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f641c;
}



// FUNCTION 145e008e2 FUN_145e008e2 body=138 status=ok
// SIG undefined FUN_145e008e2(void)

code * FUN_145e008e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSSGuidingRatio";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000020a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727c716;
}



// FUNCTION 145e0096c FUN_145e0096c body=146 status=ok
// SIG undefined FUN_145e0096c(void)

code * FUN_145e0096c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e009fe();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SSAOParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FMobileSSAOShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca285e0;
  return FUN_1462f9070;
}



// FUNCTION 145e009fe FUN_145e009fe body=261 status=ok
// SIG undefined FUN_145e009fe(void)

void FUN_145e009fe(void)

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
              0x110) < DAT_14ca28660) {
    FUN_144b3d300(&DAT_14ca28660);
    if (DAT_14ca28660 == -1) {
      FUN_145e00b04(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMobileSSAOShaderParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x2a8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca285e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6c14);
      _Init_thread_footer(&DAT_14ca28660);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e00b04 FUN_145e00b04 body=226 status=ok
// SIG undefined FUN_145e00b04(void)

longlong * FUN_145e00b04(longlong *param_1)

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
  pcVar13 = FUN_1462f9100;
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



// FUNCTION 145e00bec FUN_145e00bec body=132 status=ok
// SIG undefined FUN_145e00bec(void)

undefined1 * FUN_145e00bec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenSpaceAOParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 5;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e00be8;
}



// FUNCTION 145e00c70 FUN_145e00c70 body=144 status=ok
// SIG undefined FUN_145e00c70(void)

code * FUN_145e00c70(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"AOViewport";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x50000002ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e00bec;
}



// FUNCTION 145e00d00 FUN_145e00d00 body=146 status=ok
// SIG undefined FUN_145e00d00(void)

code * FUN_145e00d00(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e00d92();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ACESTonemapParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FACESTonemapShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca28d78;
  return FUN_145dea972;
}



// FUNCTION 145e00d92 FUN_145e00d92 body=261 status=ok
// SIG undefined FUN_145e00d92(void)

void FUN_145e00d92(void)

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
              0x110) < DAT_14ca28df8) {
    FUN_144b3d300(&DAT_14ca28df8);
    if (DAT_14ca28df8 == -1) {
      FUN_145e00e98(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FACESTonemapShaderParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x83;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28d78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edbf99);
      _Init_thread_footer(&DAT_14ca28df8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e00e98 FUN_145e00e98 body=226 status=ok
// SIG undefined FUN_145e00e98(void)

longlong * FUN_145e00e98(longlong *param_1)

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
  pcVar13 = FUN_1462f9b32;
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



// FUNCTION 145e00f80 FUN_145e00f80 body=138 status=ok
// SIG undefined FUN_145e00f80(void)

code * FUN_145e00f80(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ACESCoefsLow_0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000086;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0100a;
}



// FUNCTION 145e0100a FUN_145e0100a body=138 status=ok
// SIG undefined FUN_145e0100a(void)

code * FUN_145e0100a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ACESMidData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147290f4a;
}



// FUNCTION 145e01094 FUN_145e01094 body=146 status=ok
// SIG undefined FUN_145e01094(void)

code * FUN_145e01094(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e01126();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputDevice";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDeviceEncodingOnlyOutputDeviceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca29910;
  return FUN_145dd06fe;
}



// FUNCTION 145e01126 FUN_145e01126 body=261 status=ok
// SIG undefined FUN_145e01126(void)

void FUN_145e01126(void)

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
              0x110) < DAT_14ca29990) {
    FUN_144b3d300(&DAT_14ca29990);
    if (DAT_14ca29990 == -1) {
      FUN_145e0122c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDeviceEncodingOnlyOutputDeviceParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca29910,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edc0ea);
      _Init_thread_footer(&DAT_14ca29990);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0122c FUN_145e0122c body=226 status=ok
// SIG undefined FUN_145e0122c(void)

longlong * FUN_145e0122c(longlong *param_1)

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
  pcVar13 = FUN_1462f9f80;
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



// FUNCTION 145e01314 FUN_145e01314 body=138 status=ok
// SIG undefined FUN_145e01314(void)

code * FUN_145e01314(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputDevice";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472914a4;
}



// FUNCTION 145e0139e FUN_145e0139e body=138 status=ok
// SIG undefined FUN_145e0139e(void)

code * FUN_145e0139e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputGamut";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e01314;
}



// FUNCTION 145e01428 FUN_145e01428 body=146 status=ok
// SIG undefined FUN_145e01428(void)

code * FUN_145e01428(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e014ba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Froxel::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000003c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca676d8;
  return FUN_14732f0c2;
}



// FUNCTION 145e014ba FUN_145e014ba body=261 status=ok
// SIG undefined FUN_145e014ba(void)

void FUN_145e014ba(void)

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
              0x110) < DAT_14ca67758) {
    FUN_144b3d300(&DAT_14ca67758);
    if (DAT_14ca67758 == -1) {
      FUN_145e015c0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x2b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca676d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e543f);
      _Init_thread_footer(&DAT_14ca67758);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e015c0 FUN_145e015c0 body=226 status=ok
// SIG undefined FUN_145e015c0(void)

longlong * FUN_145e015c0(longlong *param_1)

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
  pcVar13 = FUN_14631126c;
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



// FUNCTION 145e016a8 FUN_145e016a8 body=138 status=ok
// SIG undefined FUN_145e016a8(void)

code * FUN_145e016a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Froxels";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FPackedFroxel >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e01732;
}



// FUNCTION 145e01732 FUN_145e01732 body=138 status=ok
// SIG undefined FUN_145e01732(void)

undefined1 * FUN_145e01732(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3b00a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"FroxelParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSharedParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e016a4;
}



// FUNCTION 145e017bc FUN_145e017bc body=456 status=ok
// SIG undefined FUN_145e017bc(void)

void FUN_145e017bc(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 145e01986 FUN_145e01986 body=241 status=ok
// SIG undefined FUN_145e01986(void)

undefined8 * FUN_145e01986(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149e1c420;
  FUN_14118b488(param_1 + 1);
  *param_1 = &PTR_FUN_149e1c3d0;
  param_1[1] = &PTR_FUN_149e1c3f0;
  param_1[0x102] = 0;
  param_1[0x103] = 0x10000000000;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0;
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  param_1[0x112] = 0;
  *(undefined4 *)(param_1 + 0x113) = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = 0;
  param_1[0x116] = 0;
  *(undefined4 *)(param_1 + 0x117) = 0;
  param_1[0x11c] = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8f4) = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x121) = 0;
  *(undefined1 *)(param_1 + 0x122) = 0;
  return param_1;
}



// FUNCTION 145e01a82 FUN_145e01a82 body=172 status=ok
// SIG undefined FUN_145e01a82(void)

undefined8 * FUN_145e01a82(undefined8 *param_1)

{
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14a7f3b30;
  *(undefined1 *)(param_1 + 0x7a) = 1;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0x400000003f000000;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7f) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x80) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x81) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x82) = 0x3f000000;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cad0f30,1);
  *(byte *)(param_1[0x75] + 0x2d3) = *(byte *)(param_1[0x75] + 0x2d3) | 4;
  *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) | 1;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0xffffff00;
  *(byte *)((longlong)param_1 + 0x3cc) = *(byte *)((longlong)param_1 + 0x3cc) | 1;
  return param_1;
}



// FUNCTION 145e01b36 FUN_145e01b36 body=175 status=ok
// SIG undefined FUN_145e01b36(void)

undefined8 * FUN_145e01b36(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad72750;
  param_1[6] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x44,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  param_1[6] = &PTR_FUN_14ad6b620;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  FUN_14602c130(param_1 + 6,&DAT_14c846350);
  param_1[0xc] = 0;
  uVar1 = FUN_144830b78(param_1 + 0xd,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0xd) = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 145e01be5 FUN_145e01be5 body=32 status=ok
// SIG undefined FUN_145e01be5(void)

void FUN_145e01be5(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_145e01c06(param_1);
  *param_1 = &PTR_FUN_14b545900;
  return;
}



// FUNCTION 145e01c06 FUN_145e01c06 body=151 status=ok
// SIG undefined FUN_145e01c06(void)

undefined8 * FUN_145e01c06(undefined8 *param_1)

{
  FUN_140fbcba4();
  *(undefined1 *)(param_1 + 0x21) = 1;
  *param_1 = &PTR_FUN_14b536610;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0x3ff0000000000000;
  param_1[0x32] = 0x3f847ae147ae147b;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  return param_1;
}



// FUNCTION 145e01c9e FUN_145e01c9e body=38 status=ok
// SIG undefined FUN_145e01c9e(void)

undefined8 FUN_145e01c9e(undefined8 param_1,int param_2)

{
  FUN_145e01cc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e01cc4 FUN_145e01cc4 body=145 status=ok
// SIG undefined FUN_145e01cc4(void)

void FUN_145e01cc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b895660;
  FUN_140d4710a(param_1 + 0xcd);
  FUN_1412d6a62(param_1 + 0x7d);
  FUN_1407dde54(param_1 + 0x62);
  FUN_141045c30(param_1 + 0x42);
  FUN_14596ebe4(param_1 + 0x1d);
  if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
  }
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x10))();
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145e01d56 FUN_145e01d56 body=528 status=ok
// SIG undefined FUN_145e01d56(void)

undefined8 * FUN_145e01d56(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar4 == 0) {
LAB_145e01efe:
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar5 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_145e01efe;
  lVar5 = FUN_1404281d6(lVar4);
  if (lVar5 != 0) {
    lVar6 = FUN_144a7a5f4();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) goto LAB_145e01df2;
  }
  lVar5 = 0;
LAB_145e01df2:
  uVar3 = FUN_1409f733c(param_1,lVar5);
  local_50 = (code *)CONCAT71(local_50._1_7_,uVar3);
  local_40 = param_3[1];
  local_38 = (longlong *)param_3[2];
  if (local_38 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    plVar7 = local_38;
  }
  local_58 = (longlong *)FUN_145e01f67(&local_40,&local_50);
  local_60 = local_58 + 2;
  FUN_145e0208a();
  if (plVar7 != (longlong *)0x0) {
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
  plVar7 = local_60;
  FUN_14485c47a(local_60 + 8,lVar5);
  FUN_1411aee94(plVar7,lVar5);
  local_50 = FUN_1411aeb44;
  local_48 = 0;
  FUN_145e0212c(&local_40,&local_60);
  FUN_14100c9d8(lVar4 + 0x6170,&local_50,&local_40);
  FUN_1449db362(&local_40);
  plVar1 = local_58;
  *param_2 = plVar7;
  param_2[1] = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_58 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 145e01f67 FUN_145e01f67 body=149 status=ok
// SIG undefined FUN_145e01f67(void)

undefined8 * FUN_145e01f67(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b99f8f0;
  uVar1 = *param_2;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_145e01ffe(puVar2 + 2,&local_30,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e01ffe FUN_145e01ffe body=140 status=ok
// SIG undefined FUN_145e01ffe(void)

undefined8 * FUN_145e01ffe(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf0 | param_3 * '\x02';
  *param_1 = &PTR_FUN_14b99f930;
  param_1[6] = *param_2;
  lVar3 = param_2[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14b99f910;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 145e0208a FUN_145e0208a body=162 status=ok
// SIG undefined FUN_145e0208a(void)

void FUN_145e0208a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145e020c9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145e020c9;
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
LAB_145e020c9:
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
                    /* WARNING: Could not recover jumptable at 0x000145e02128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145e0212c FUN_145e0212c body=300 status=ok
// SIG undefined FUN_145e0212c(void)

longlong * FUN_145e0212c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
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
    *puVar5 = &PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f950;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f950;
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



// FUNCTION 145e02258 FUN_145e02258 body=156 status=ok
// SIG undefined FUN_145e02258(void)

bool FUN_145e02258(longlong param_1,undefined4 param_2)

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



// FUNCTION 145e022f6 FUN_145e022f6 body=26 status=ok
// SIG undefined FUN_145e022f6(void)

void FUN_145e022f6(undefined8 param_1)

{
  FUN_14128c22a();
  FUN_1458ff23e(param_1);
  return;
}



// FUNCTION 145e02310 FUN_145e02310 body=594 status=ok
// SIG undefined FUN_145e02310(void)

void FUN_145e02310(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1407cbc56();
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x690;
    FUN_1400b22c2(&local_78,"profile.newgame.ultimatevaulthunter");
    FUN_140d07d58(lVar1,&DAT_14cbe06b8,&local_78);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a787a6(lVar3 + 0x2a8,&DAT_14cbe06b8);
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    lVar6 = FUN_145825ec4();
    if (lVar6 != 0) {
      FUN_145825ecc(lVar6,&local_78);
      if ((longlong)(int)uStack_70 != 0) {
        plVar2 = local_78 + (int)uStack_70;
        plVar10 = local_78;
        do {
          if ((*(char *)(*plVar10 + 0xac) == '\x01') &&
             (lVar6 = FUN_141563480(*plVar10 + 0xb0), lVar6 != 0)) {
            FUN_1400021e4(lVar6 + 0x38,&local_98);
            puVar5 = local_98;
            uVar7 = (int)uStack_90 - 1;
            if ((int)uStack_90 == 0) {
              uVar7 = 0;
            }
            if (0 < (int)uVar7) {
              uVar8 = 0;
              do {
                local_98[uVar8] =
                     (ushort)((ushort)local_98[uVar8] - 0x41 < 0x1a) * 0x20 + local_98[uVar8];
                uVar8 = uVar8 + 1;
              } while (uVar7 != uVar8);
            }
            puVar9 = local_98;
            if ((int)uStack_90 == 0) {
              puVar9 = &DAT_149dfb77a;
            }
            local_98 = (undefined2 *)0x0;
            uStack_90 = 0;
            FUN_140002266(local_88,L"profile.dlc.%s",puVar9);
            FUN_140d07d58(lVar1,&DAT_14cbe06b8,local_88);
            if (local_88[0] != 0) {
              FUN_1400020a8();
            }
            if (puVar5 != (undefined2 *)0x0) {
              FUN_1400020a8(puVar5);
            }
            if (local_98 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar2);
      }
    }
    FUN_140714e1e(lVar1,&DAT_14cbe06b8,*(undefined4 *)(param_1 + 0x208));
    FUN_1415c0f98(lVar3);
    puVar4 = *(ushort **)(lVar3 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e0256a FUN_145e0256a body=122 status=ok
// SIG undefined FUN_145e0256a(void)

void FUN_145e0256a(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e025e6 FUN_145e025e6 body=237 status=ok
// SIG undefined FUN_145e025e6(void)

void FUN_145e025e6(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  uint local_1c [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)(param_1 + 0x2c8) = param_2;
  local_1c[1] = *(int *)(param_1 + 0x2cc);
  local_1c[0] = ((int)(local_1c[1] + 2) / 3) * -3 + local_1c[1] + 2;
  local_1c[2] = local_1c[1] + ((int)(local_1c[1] + 1) / 3) * -3 + 1;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    uVar1 = local_1c[param_2];
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x1c0))) {
      *(int *)(lVar2 + 0x1c8) = *(int *)(lVar2 + 0x1c8) + 1;
      lVar2 = (ulonglong)uVar1 * 0x1e8 + *(longlong *)(lVar2 + 0x1b8) + 0x28;
      if (lVar2 != 0) {
        FUN_140f9ba4c(param_1,lVar2,0);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140de1078(param_1,&DAT_14cbe20a0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,&DAT_14cbe20a0);
}



// FUNCTION 145e026d4 FUN_145e026d4 body=40 status=ok
// SIG undefined FUN_145e026d4(void)

undefined8 FUN_145e026d4(undefined8 param_1,int param_2)

{
  FUN_145e026fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e026fc FUN_145e026fc body=143 status=ok
// SIG undefined FUN_145e026fc(void)

void FUN_145e026fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba17db0;
  param_1[5] = &PTR_FUN_14ba18170;
  param_1[0x13] = &PTR_FUN_14ba18190;
  FUN_145be4ae8(param_1 + 0x42);
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_140627eac(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145e02796 FUN_145e02796 body=172 status=ok
// SIG undefined FUN_145e02796(void)

undefined8 * FUN_145e02796(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14baacd40;
  param_1[7] = &PTR_FUN_14baad180;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_14485c47a(param_1 + 10,0);
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14bab03f0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145e02842 FUN_145e02842 body=40 status=ok
// SIG undefined FUN_145e02842(void)

undefined8 FUN_145e02842(undefined8 param_1,int param_2)

{
  FUN_145e0286a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e0286a FUN_145e0286a body=143 status=ok
// SIG undefined FUN_145e0286a(void)

void FUN_145e0286a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14babafb0;
  FUN_1447a1747(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c1a06(param_1);
  return;
}



// FUNCTION 145e028fa FUN_145e028fa body=40 status=ok
// SIG undefined FUN_145e028fa(void)

undefined8 FUN_145e028fa(undefined8 param_1,int param_2)

{
  FUN_145e02922();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e02922 FUN_145e02922 body=143 status=ok
// SIG undefined FUN_145e02922(void)

void FUN_145e02922(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd07a40;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0x52],*(undefined4 *)(param_1 + 0x53));
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_1403dd3e6(param_1);
  return;
}



// FUNCTION 145e029b2 FUN_145e029b2 body=40 status=ok
// SIG undefined FUN_145e029b2(void)

undefined8 FUN_145e029b2(undefined8 param_1,int param_2)

{
  FUN_145e029da();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e029da FUN_145e029da body=143 status=ok
// SIG undefined FUN_145e029da(void)

void FUN_145e029da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd5ac70;
  FUN_1447a1747(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145e02a6a FUN_145e02a6a body=21 status=ok
// SIG undefined FUN_145e02a6a(void)

undefined8 FUN_145e02a6a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145e02a8a FUN_145e02a8a body=68 status=ok
// SIG undefined FUN_145e02a8a(void)

void FUN_145e02a8a(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x5b0);
  memset(_Dst,0,0x5b0);
  FUN_145e02ace(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145e02ace FUN_145e02ace body=230 status=ok
// SIG undefined FUN_145e02ace(void)

undefined8 * FUN_145e02ace(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_145965434();
  *param_1 = &PTR_FUN_14b8ae230;
  *(undefined4 *)(param_1 + 0x34) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0x1a4) = 0x100;
  param_1[0x35] = 0xffffffffffffffff;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x36] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x37) = (int)plVar2[1];
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  FUN_141563852(param_1 + 0x3a);
  FUN_145e02bb4(param_1 + 0x9b);
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return param_1;
}



// FUNCTION 145e02bb4 FUN_145e02bb4 body=156 status=ok
// SIG undefined FUN_145e02bb4(void)

longlong FUN_145e02bb4(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x10) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x20) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x28) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x30) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x38) = (int)plVar2[1];
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x50) = 1;
  FUN_140056680(param_1 + 0x58,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 145e02c50 FUN_145e02c50 body=40 status=ok
// SIG undefined FUN_145e02c50(void)

undefined8 FUN_145e02c50(undefined8 param_1,int param_2)

{
  FUN_145e02c78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e02c78 FUN_145e02c78 body=91 status=ok
// SIG undefined FUN_145e02c78(void)

void FUN_145e02c78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba56860;
  param_1[5] = &PTR_FUN_14ba56b70;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145e02cd4(param_1 + 7);
  FUN_14114f6bc(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e02cd4 FUN_145e02cd4 body=53 status=ok
// SIG undefined FUN_145e02cd4(void)

void FUN_145e02cd4(longlong *param_1)

{
  FUN_145e02d0a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e02d0a FUN_145e02d0a body=365 status=ok
// SIG undefined FUN_145e02d0a(void)

void FUN_145e02d0a(longlong *param_1)

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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x78);
      FUN_148fdb144(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
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



// FUNCTION 145e02e78 FUN_145e02e78 body=851 status=ok
// SIG undefined FUN_145e02e78(void)

void FUN_145e02e78(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a3b34e();
  FUN_140056680(local_40,L"default");
  FUN_1403c7a68(param_1,param_1 + 0x60,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_144a8e69e(param_1 + 0x110);
  if (cVar2 != '\0') {
    FUN_144799a06(param_1,param_1 + 0x60,1,1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x110) + 0x118) = 0x6140;
    lVar4 = *(longlong *)(param_1 + 0x110);
    if (*(int *)(lVar4 + 0x58) != 3) {
      FUN_1446efa72((longlong *)(lVar4 + 0x50),0,3,0x10);
      *(undefined4 *)(lVar4 + 0x58) = 3;
    }
    puVar1 = *(undefined8 **)(lVar4 + 0x50);
    *puVar1 = &PTR_LAB_14b41f0c0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14b41f050;
    puVar1[3] = param_1;
    puVar1[4] = &LAB_140834c66;
    *(undefined4 *)(puVar1 + 5) = 0;
    lVar4 = *(longlong *)(param_1 + 0x110);
    if (*(int *)(lVar4 + 0x68) != 3) {
      FUN_1446efa72((longlong *)(lVar4 + 0x60),0,3,0x10);
      *(undefined4 *)(lVar4 + 0x68) = 3;
    }
    puVar1 = *(undefined8 **)(lVar4 + 0x60);
    *puVar1 = &PTR_LAB_14b41f1a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14b41f130;
    puVar1[3] = param_1;
    puVar1[4] = FUN_148929452;
    *(undefined4 *)(puVar1 + 5) = 0;
    lVar4 = *(longlong *)(param_1 + 0x110);
    if (*(int *)(lVar4 + 0x78) != 3) {
      FUN_1446efa72((longlong *)(lVar4 + 0x70),0,3,0x10);
      *(undefined4 *)(lVar4 + 0x78) = 3;
    }
    puVar1 = *(undefined8 **)(lVar4 + 0x70);
    *puVar1 = &PTR_LAB_14b41f0c0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14b41f050;
    puVar1[3] = param_1;
    puVar1[4] = FUN_140834c90;
    *(undefined4 *)(puVar1 + 5) = 0;
    lVar4 = *(longlong *)(param_1 + 0x110);
    if (*(int *)(lVar4 + 0x88) != 3) {
      FUN_1446efa72((longlong *)(lVar4 + 0x80),0,3,0x10);
      *(undefined4 *)(lVar4 + 0x88) = 3;
    }
    puVar1 = *(undefined8 **)(lVar4 + 0x80);
    *puVar1 = &PTR_LAB_14b41f280;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14b41f210;
    puVar1[3] = param_1;
    puVar1[4] = &LAB_140a0a616;
    *(undefined4 *)(puVar1 + 5) = 0;
  }
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    lVar3 = (longlong)*(int *)(param_1 + 0x128) * 0xc0;
    do {
      FUN_1400021e4(lVar4,local_40);
      FUN_1403c7a68(param_1,lVar4,local_40);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      FUN_144799a06(param_1,lVar4,1,1);
      lVar4 = lVar4 + 0xc0;
      lVar3 = lVar3 + -0xc0;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e031cc FUN_145e031cc body=144 status=ok
// SIG undefined FUN_145e031cc(void)

code * FUN_145e031cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e0325c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam45";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubUVAnimationModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4a00000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e33db2;
}



// FUNCTION 145e0325c FUN_145e0325c body=268 status=ok
// SIG undefined FUN_145e0325c(void)

undefined * FUN_145e0325c(void)

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
              0x110) < DAT_14cb347f0) {
    FUN_144b3d300(&DAT_14cb347f0);
    if (DAT_14cb347f0 == -1) {
      FUN_145e0336a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSubUVAnimationModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x7b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34770,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb8a0);
      _Init_thread_footer(&DAT_14cb347f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0336a FUN_145e0336a body=226 status=ok
// SIG undefined FUN_145e0336a(void)

longlong * FUN_145e0336a(longlong *param_1)

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
  pcVar13 = FUN_146462838;
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



// FUNCTION 145e03452 FUN_145e03452 body=136 status=ok
// SIG undefined FUN_145e03452(void)

code * FUN_145e03452(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubUVAnimation_InitialFrameBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000007f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e034da;
}



// FUNCTION 145e034da FUN_145e034da body=138 status=ok
// SIG undefined FUN_145e034da(void)

code * FUN_145e034da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubUVAnimation_InitialFrameScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000007e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148056284;
}



// FUNCTION 145e03564 FUN_145e03564 body=133 status=ok
// SIG undefined FUN_145e03564(void)

undefined8 * FUN_145e03564(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145e035ea(&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e035ea FUN_145e035ea body=212 status=ok
// SIG undefined FUN_145e035ea(void)

undefined8 * FUN_145e035ea(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  FUN_1415641a4(puVar1);
  *puVar1 = &PTR_FUN_149ecaad0;
  puVar1[3] = &PTR_FUN_149ecac00;
  puVar1[5] = 0;
  puVar1[7] = 2;
  *(undefined4 *)(puVar1 + 0x14) = 0x3f800000;
  *(byte *)((longlong)puVar1 + 0xa4) = *(byte *)((longlong)puVar1 + 0xa4) & 0xf0 | 2;
  *(undefined4 *)(puVar1 + 0x15) = 0x3f800000;
  *(undefined1 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0x2c;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149ecae30;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 145e036ca FUN_145e036ca body=202 status=ok
// SIG undefined FUN_145e036ca(void)

undefined8 * FUN_145e036ca(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a3d6150;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7be0) {
    FUN_144b3d300(&DAT_14caa7be0);
    if (DAT_14caa7be0 == -1) {
      FUN_1415641ba();
      atexit((_func_5014 *)&LAB_143270b12);
      _Init_thread_footer(&DAT_14caa7be0);
    }
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 145e037a0 FUN_145e037a0 body=187 status=ok
// SIG undefined FUN_145e037a0(void)

undefined8 * FUN_145e037a0(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a664130;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebf10) {
    FUN_144b3d300(&DAT_14caebf10);
    if (DAT_14caebf10 == -1) {
      FUN_141564254();
      atexit((_func_5014 *)&LAB_14356f328);
      _Init_thread_footer(&DAT_14caebf10);
    }
  }
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  return param_1;
}



// FUNCTION 145e0385c FUN_145e0385c body=232 status=ok
// SIG undefined FUN_145e0385c(void)

void FUN_145e0385c(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  longlong lVar7;
  
  if (DAT_14c9a63a0 != DAT_14c9a63cc) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar5 = &DAT_14c9a63d0;
    if (DAT_14c9a63d8 != (undefined *)0x0) {
      puVar5 = DAT_14c9a63d8;
    }
    for (iVar2 = *(int *)(puVar5 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                   (longlong)DAT_14c9a63e0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a6398 + (longlong)iVar2 * 0x28 + 0x20)) {
      if (*(ulonglong *)(DAT_14c9a6398 + (longlong)iVar2 * 0x28) == param_1) {
        puVar5 = &DAT_14c9a63d0;
        if (DAT_14c9a63d8 != (undefined *)0x0) {
          puVar5 = DAT_14c9a63d8;
        }
        lVar1 = DAT_14c9a6398 + (longlong)iVar2 * 0x28;
        lVar7 = (longlong)*(int *)(lVar1 + 0x24);
        iVar4 = *(int *)(puVar5 + lVar7 * 4);
        if (iVar4 == iVar2) {
          piVar6 = (int *)(puVar5 + lVar7 * 4);
        }
        else {
          do {
            piVar6 = (int *)(DAT_14c9a6398 + (longlong)iVar4 * 0x28 + 0x20);
            iVar4 = *piVar6;
          } while (iVar4 != iVar2);
        }
        *piVar6 = *(int *)(lVar1 + 0x20);
        FUN_145e03944();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e03944 FUN_145e03944 body=135 status=ok
// SIG undefined FUN_145e03944(void)

void FUN_145e03944(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a6398;
  if (DAT_14c9a63cc != 0) {
    *(int *)(DAT_14c9a6398 + (longlong)DAT_14c9a63c8 * 0x28) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x28);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a63cc) {
    iVar4 = DAT_14c9a63c8;
  }
  puVar1[1] = iVar4;
  DAT_14c9a63cc = DAT_14c9a63cc + 1;
  puVar5 = &DAT_14c9a63a8;
  if (DAT_14c9a63b8 != (undefined *)0x0) {
    puVar5 = DAT_14c9a63b8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a63c8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145e039cc FUN_145e039cc body=232 status=ok
// SIG undefined FUN_145e039cc(void)

void FUN_145e039cc(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  longlong lVar7;
  
  if (DAT_14c9a6350 != DAT_14c9a637c) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar5 = &DAT_14c9a6380;
    if (DAT_14c9a6388 != (undefined *)0x0) {
      puVar5 = DAT_14c9a6388;
    }
    for (iVar2 = *(int *)(puVar5 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                   (longlong)DAT_14c9a6390 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a6348 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(ulonglong *)(DAT_14c9a6348 + (longlong)iVar2 * 0x18) == param_1) {
        puVar5 = &DAT_14c9a6380;
        if (DAT_14c9a6388 != (undefined *)0x0) {
          puVar5 = DAT_14c9a6388;
        }
        lVar1 = DAT_14c9a6348 + (longlong)iVar2 * 0x18;
        lVar7 = (longlong)*(int *)(lVar1 + 0x14);
        iVar4 = *(int *)(puVar5 + lVar7 * 4);
        if (iVar4 == iVar2) {
          piVar6 = (int *)(puVar5 + lVar7 * 4);
        }
        else {
          do {
            piVar6 = (int *)(DAT_14c9a6348 + (longlong)iVar4 * 0x18 + 0x10);
            iVar4 = *piVar6;
          } while (iVar4 != iVar2);
        }
        *piVar6 = *(int *)(lVar1 + 0x10);
        FUN_145e03ab4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e03ab4 FUN_145e03ab4 body=135 status=ok
// SIG undefined FUN_145e03ab4(void)

void FUN_145e03ab4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a6348;
  if (DAT_14c9a637c != 0) {
    *(int *)(DAT_14c9a6348 + (longlong)DAT_14c9a6378 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a637c) {
    iVar4 = DAT_14c9a6378;
  }
  puVar1[1] = iVar4;
  DAT_14c9a637c = DAT_14c9a637c + 1;
  puVar5 = &DAT_14c9a6358;
  if (DAT_14c9a6368 != (undefined *)0x0) {
    puVar5 = DAT_14c9a6368;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a6378 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145e03b46 FUN_145e03b46 body=245 status=ok
// SIG undefined FUN_145e03b46(void)

undefined8 * FUN_145e03b46(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_145c12328();
  *param_1 = &PTR_FUN_14abbedd0;
  param_1[0x72] = &PTR_FUN_14abbf5a0;
  *(byte *)(param_1 + 0xbe) = *(byte *)(param_1 + 0xbe) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = DAT_14c9a5298;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = DAT_14c9a52a0;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x604) = 0;
  *(uint *)(param_1 + 0xc1) = *(uint *)(param_1 + 0xc1) & 0xffff8000;
  *(undefined2 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0xffffffff;
  lVar1 = 0x634;
  do {
    *(undefined8 *)((longlong)param_1 + lVar1 + -8) = 0x4120000041c80000;
    *(undefined4 *)((longlong)param_1 + lVar1) = 0x420c0000;
    lVar1 = lVar1 + 0xc;
  } while (lVar1 != 0x658);
  *(undefined4 *)((longlong)param_1 + 0x6bc) = 0xd;
  param_1[0xd8] = 0x3f60624dd2f1a9fc;
  *(undefined4 *)(param_1 + 0xd9) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6cc) = 1;
  FUN_145e03c3c(param_1 + 0xda);
  *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) & 0xfe;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 2;
  return param_1;
}



// FUNCTION 145e03c3c FUN_145e03c3c body=111 status=ok
// SIG undefined FUN_145e03c3c(void)

undefined1 * FUN_145e03c3c(undefined1 *param_1)

{
  longlong lVar1;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = 0x4120000043160000;
  *(undefined8 *)(param_1 + 0xc) = 0x4248000043160000;
  *(undefined8 *)(param_1 + 0x14) = 0x3f80000042a00000;
  *(undefined4 *)(param_1 + 0x1c) = 0x42a00000;
  *(undefined2 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x48] = 0;
  lVar1 = FUN_14142c306();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return param_1;
}



// FUNCTION 145e03cac FUN_145e03cac body=40 status=ok
// SIG undefined FUN_145e03cac(void)

undefined8 FUN_145e03cac(undefined8 param_1,int param_2)

{
  FUN_145e03cd4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e03cd4 FUN_145e03cd4 body=327 status=ok
// SIG undefined FUN_145e03cd4(void)

void FUN_145e03cd4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b55d150;
  param_1[5] = &PTR_FUN_14b55d450;
  plVar3 = (longlong *)param_1[0xe5];
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
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xde] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  FUN_14130c426(param_1 + 0x48);
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  param_1[0x31] = &DAT_14a176f00;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x31] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x32);
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145e03e1c FUN_145e03e1c body=40 status=ok
// SIG undefined FUN_145e03e1c(void)

undefined8 FUN_145e03e1c(undefined8 param_1,int param_2)

{
  FUN_145e03e44();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e03e44 FUN_145e03e44 body=944 status=ok
// SIG undefined FUN_145e03e44(void)

void FUN_145e03e44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_14ba66690;
  if (DAT_14c951760 == '\0') {
    uVar5 = FUN_140c61bfa();
    FUN_140457ffc(uVar5,param_1);
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4e) = 0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x45);
  lVar3 = param_1[0x42];
  if (lVar3 != 0) {
    FUN_1468861be(lVar3);
    FUN_1400020a8(lVar3);
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
  FUN_145e0421f(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_145e041f4(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_145e041f4(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145e041f4(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145e041f4(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_145e0424a(param_1 + 0x20);
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
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
  FUN_144760e21(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_1449db362(param_1 + 7);
  plVar4 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e041f4 FUN_145e041f4 body=43 status=ok
// SIG undefined FUN_145e041f4(void)

void FUN_145e041f4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148fc3128(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 145e0421f FUN_145e0421f body=43 status=ok
// SIG undefined FUN_145e0421f(void)

void FUN_145e0421f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149017220(param_1);
    param_1 = param_1 + 0xf8;
  }
  return;
}



// FUNCTION 145e0424a FUN_145e0424a body=53 status=ok
// SIG undefined FUN_145e0424a(void)

void FUN_145e0424a(longlong *param_1)

{
  FUN_145e04280();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e04280 FUN_145e04280 body=345 status=ok
// SIG undefined FUN_145e04280(void)

void FUN_145e04280(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
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



// FUNCTION 145e043da FUN_145e043da body=205 status=ok
// SIG undefined FUN_145e043da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e043da(void)

{
  if ((DAT_14ca66c47 & 2) == 0) {
    DAT_14ca66c47 = DAT_14ca66c47 | 2;
    _DAT_14ca66be8 = L"FInvalidateInstancePagesLoadBalancerCS";
    _DAT_14ca66c00 = FUN_146826540;
    _DAT_14ca66c08 = FUN_146825d77;
    _DAT_14ca66c10 = FUN_146825fd6;
    _DAT_14ca66c18 = FUN_1407e02ea;
    _DAT_14ca66c20 = FUN_146826273;
    _DAT_14ca66bf8 = FUN_14732cf46;
    _DAT_14ca66c38 = 0xffffffff000000e0;
    _DAT_14ca66c40 = 8;
    DAT_14ca66c44 = 0;
    _DAT_14ca66c28 = &LAB_14732cf70;
    FUN_145e044a8();
    FUN_1407e00cc(&DAT_14ca66be0);
    return;
  }
  return;
}



// FUNCTION 145e044a8 FUN_145e044a8 body=123 status=ok
// SIG undefined FUN_145e044a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e044a8(void)

{
  _DAT_14ca690b0 = L"BASE";
  DAT_14ca690da = 4;
  _DAT_14ca690b8 = FUN_140b35ae4();
  _DAT_14ca690c0 = DAT_14ca66bf0;
  _DAT_14ca690c8 = &LAB_14682652b;
  DAT_14ca66bf0 = &DAT_14ca690b0;
  DAT_14ca66c45 = DAT_14ca66c45 + '\x01';
  _DAT_14ca690d0 = 0x100000000;
  if (*(char *)(_DAT_14ca690b8 + 100) != '\0') {
    DAT_14ca66c46 = DAT_14ca66c46 + '\x01';
  }
  return;
}



// FUNCTION 145e04524 FUN_145e04524 body=226 status=ok
// SIG undefined FUN_145e04524(void)

longlong * FUN_145e04524(longlong *param_1)

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
  pcVar13 = FUN_146313110;
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



// FUNCTION 145e0460c FUN_145e0460c body=140 status=ok
// SIG undefined FUN_145e0460c(void)

undefined1 * FUN_145e0460c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e04698();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvalidatePagesParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FInvalidatePagesParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca687d8;
  return &LAB_145e04608;
}



// FUNCTION 145e04698 FUN_145e04698 body=261 status=ok
// SIG undefined FUN_145e04698(void)

void FUN_145e04698(void)

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
              0x110) < DAT_14ca68858) {
    FUN_144b3d300(&DAT_14ca68858);
    if (DAT_14ca68858 == -1) {
      FUN_145e0479e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FInvalidatePagesParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x5ba;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca687d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e6c1f);
      _Init_thread_footer(&DAT_14ca68858);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0479e FUN_145e0479e body=226 status=ok
// SIG undefined FUN_145e0479e(void)

longlong * FUN_145e0479e(longlong *param_1)

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
  pcVar13 = FUN_14631319e;
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



// FUNCTION 145e04886 FUN_145e04886 body=138 status=ok
// SIG undefined FUN_145e04886(void)

code * FUN_145e04886(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000005c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147331ad0;
}



// FUNCTION 145e04910 FUN_145e04910 body=144 status=ok
// SIG undefined FUN_145e04910(void)

code * FUN_145e04910(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000005bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1463132ae;
}



// FUNCTION 145e049a0 FUN_145e049a0 body=136 status=ok
// SIG undefined FUN_145e049a0(void)

void FUN_145e049a0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14001cc68(0x1a8,0x10);
  FUN_145e04aa0(uVar1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  plVar2 = (longlong *)FUN_1448c2e86();
  lVar3 = *(longlong *)(param_1 + 8) + 8;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar3 = 0;
  }
  FUN_145e04a2a(&local_28);
  (**(code **)(*plVar2 + 0x28))(plVar2,local_28,lVar3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e04a2a FUN_145e04a2a body=118 status=ok
// SIG undefined FUN_145e04a2a(void)

undefined8 * FUN_145e04a2a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9797c) {
    FUN_144b3d300(&DAT_14cb9797c);
    if (DAT_14cb9797c == -1) {
      FUN_1446f470e(&DAT_14cb97974,L"VoiceChat",1);
      _Init_thread_footer(&DAT_14cb9797c);
    }
  }
  *param_1 = DAT_14cb97974;
  return param_1;
}



// FUNCTION 145e04aa0 FUN_145e04aa0 body=296 status=ok
// SIG undefined FUN_145e04aa0(void)

undefined8 * FUN_145e04aa0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b528700;
  FUN_14118b488(param_1 + 1);
  *param_1 = &PTR_FUN_14b528030;
  param_1[1] = &PTR_FUN_14b5282d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
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
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 2;
  return param_1;
}



// FUNCTION 145e04bc8 FUN_145e04bc8 body=142 status=ok
// SIG undefined FUN_145e04bc8(void)

bool FUN_145e04bc8(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e04c58 FUN_145e04c58 body=387 status=ok
// SIG undefined FUN_145e04c58(void)

void FUN_145e04c58(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  code *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  int local_8c;
  longlong local_88 [11];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((param_2 != 0) && (*(char *)(param_2 + 0x38) == '\x01')) &&
     (*(longlong *)(param_2 + 0x40) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x30);
    if (lVar1 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(lVar1 + 0x2b0);
    }
    cVar2 = (**(code **)(*plVar3 + 0x658))();
    if (cVar2 != '\0') {
      local_88[4] = 0;
      local_88[7] = 0;
      local_88[8] = 0;
      local_88[9] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[5] = 0x8000000000;
      local_88[6] = 0xffffffff;
      local_a8 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      local_a0 = &local_a8;
      local_98 = local_88;
      FUN_145e04e12((longlong *)(param_1 + 0x30),&local_8c);
      lVar1 = *(longlong *)(param_1 + 0x30);
      local_88[9] = local_88[9] & 0xffffffff00000000;
      if (local_88[8] != 0) {
        FUN_1400020a8();
      }
      FUN_145e04ddc(local_88);
      if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
        local_88[0] = (longlong)local_8c * 0x60 + lVar1 + 8;
        local_b8 = FUN_1437abafe;
        local_b0 = local_88;
        (**(code **)(**(longlong **)(param_2 + 0x30) + 0x2a8))();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e04ddc FUN_145e04ddc body=53 status=ok
// SIG undefined FUN_145e04ddc(void)

void FUN_145e04ddc(longlong *param_1)

{
  FUN_141565c9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e04e12 FUN_145e04e12 body=353 status=ok
// SIG undefined FUN_145e04e12(void)

undefined4 * FUN_145e04e12(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145e05116(param_1,local_48);
  FUN_145e04f74(param_3,local_40);
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_145e05038(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x5c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145e053c2(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e04f74 FUN_145e04f74 body=70 status=ok
// SIG undefined FUN_145e04f74(void)

longlong * FUN_145e04f74(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = param_1[1];
  lVar2 = *(longlong *)*param_1;
  *param_2 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_145e04fba(param_2 + 1,uVar1);
  return param_2;
}



// FUNCTION 145e04fba FUN_145e04fba body=125 status=ok
// SIG undefined FUN_145e04fba(void)

undefined8 * FUN_145e04fba(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145e05206();
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



// FUNCTION 145e05038 FUN_145e05038 body=221 status=ok
// SIG undefined FUN_145e05038(void)

undefined8 FUN_145e05038(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar2 = FUN_14017c546(param_1,param_2,&local_38);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      lVar4 = (longlong)iVar2 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar4) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar4) != 0) {
        FUN_1400020a8();
      }
      FUN_145e04ddc(lVar1 + lVar4 + 8);
      memmove((void *)(lVar1 + lVar4),param_3,0x58);
      FUN_145db0978(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_145e0505e;
    }
  }
  uVar3 = 0;
LAB_145e0505e:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e05116 FUN_145e05116 body=239 status=ok
// SIG undefined FUN_145e05116(void)

int * FUN_145e05116(longlong *param_1,int *param_2)

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



// FUNCTION 145e05206 FUN_145e05206 body=443 status=ok
// SIG undefined FUN_145e05206(void)

longlong * FUN_145e05206(longlong *param_1,longlong *param_2)

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
        if (*(longlong *)(*local_78 + 0x18 + (longlong)iVar6 * 0x30) != 0) {
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



// FUNCTION 145e053c2 FUN_145e053c2 body=521 status=ok
// SIG undefined FUN_145e053c2(void)

void FUN_145e053c2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x60);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x60;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x5c) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x58) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e055cc FUN_145e055cc body=480 status=ok
// SIG undefined FUN_145e055cc(void)

void FUN_145e055cc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  code *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_2 + 0x150) == '\x01') {
    local_30 = (code *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    pcVar4 = local_30;
    local_28 = 3;
    *(undefined ***)local_30 = &PTR_LAB_149fc9ff0;
    uVar5 = FUN_144a3f946();
    *(undefined8 *)(pcVar4 + 0x10) = uVar5;
    *(undefined ***)pcVar4 = &PTR_FUN_149fc9f80;
    *(undefined8 *)(pcVar4 + 0x18) = 0;
    FUN_14485c47a(pcVar4 + 0x18,param_1);
    *(undefined4 *)(pcVar4 + 0x28) = 0;
    *(code **)(pcVar4 + 0x20) = FUN_146ff09ae;
    uVar3 = DAT_14c867138;
    lVar6 = (longlong)(int)DAT_14c867138;
    DAT_14c867138 = DAT_14c867138 + 1;
    if (DAT_14c86713c < DAT_14c867138) {
      FUN_1470065a0(uVar3);
    }
    lVar2 = DAT_14c867130;
    lVar6 = lVar6 * 0x10;
    lVar1 = DAT_14c867130 + lVar6;
    *(undefined8 *)(DAT_14c867130 + lVar6) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
    FUN_146874de0(lVar1,&local_30);
    FUN_1449db362(&local_30);
  }
  local_30 = FUN_14153f788;
  local_28 = 0;
  FUN_145e057ae(&DAT_14c8673d8,local_38,param_1,&local_30);
  local_30 = FUN_142acc68a;
  local_28 = 0;
  FUN_145e0588a(&DAT_14c9485c0,local_38,param_1,&local_30);
  local_30 = FUN_142acc9da;
  local_28 = 0;
  FUN_145e0588a(&DAT_14c9485d8,local_38,param_1,&local_30);
  local_30 = FUN_14153f6ea;
  local_28 = 0;
  FUN_145e057ae(&DAT_14c872cf8,local_38,param_1,&local_30);
  FUN_144a8054c();
  if ((DAT_14c867cfc & 1) == 0) {
    local_30 = FUN_14153f72e;
    local_28 = 0;
    FUN_145e057ae(&DAT_14c867390,local_38,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e057ae FUN_145e057ae body=218 status=ok
// SIG undefined FUN_145e057ae(void)

undefined8
FUN_145e057ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_149fca060;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e0588a FUN_145e0588a body=218 status=ok
// SIG undefined FUN_145e0588a(void)

undefined8
FUN_145e0588a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e62de0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_149fca0d0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1458c6c8c(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e05966 FUN_145e05966 body=144 status=ok
// SIG undefined FUN_145e05966(void)

code * FUN_145e05966(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e059f6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam42";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScaleMeshSizeBySpeedModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4400000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dfe49e;
}



// FUNCTION 145e059f6 FUN_145e059f6 body=268 status=ok
// SIG undefined FUN_145e059f6(void)

undefined * FUN_145e059f6(void)

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
              0x110) < DAT_14cb34988) {
    FUN_144b3d300(&DAT_14cb34988);
    if (DAT_14cb34988 == -1) {
      FUN_145e05b04(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScaleMeshSizeBySpeedModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x52;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34908,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb8c4);
      _Init_thread_footer(&DAT_14cb34988);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34908;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e05b04 FUN_145e05b04 body=226 status=ok
// SIG undefined FUN_145e05b04(void)

longlong * FUN_145e05b04(longlong *param_1)

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
  pcVar13 = FUN_1464629d0;
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



// FUNCTION 145e05bec FUN_145e05bec body=138 status=ok
// SIG undefined FUN_145e05bec(void)

code * FUN_145e05bec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleMeshSizeBySpeed_ScaleDistribution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e05c76;
}



// FUNCTION 145e05c76 FUN_145e05c76 body=138 status=ok
// SIG undefined FUN_145e05c76(void)

code * FUN_145e05c76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleMeshSizeBySpeed_ScaleFactorScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148056392;
}



// FUNCTION 145e05d00 FUN_145e05d00 body=284 status=ok
// SIG undefined FUN_145e05d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e05d00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0a1d0) {
    FUN_144b3d300(&DAT_14cb0a1d0);
    if (DAT_14cb0a1d0 == -1) {
      FUN_145e05e1c();
      FUN_140db5666(&DAT_14cb0a128,0,&DAT_14cb0a0c0,L"FStereoLayerPS",
                    L"/Engine/Private/StereoLayerShader.usf",L"MainPS_Texture2D",3,1,FUN_147d5d6f0,
                    FUN_147d5d6c2,&LAB_147d5d6be,&LAB_147d5d6ba,&LAB_14712ac0c,&LAB_14712ac08,0xf0,0
                   );
      _DAT_14cb0a128 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14371ad97);
      _Init_thread_footer(&DAT_14cb0a1d0);
    }
  }
  return &DAT_14cb0a128;
}



// FUNCTION 145e05e1c FUN_145e05e1c body=205 status=ok
// SIG undefined FUN_145e05e1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e05e1c(void)

{
  if ((DAT_14cb0a127 & 2) == 0) {
    DAT_14cb0a127 = DAT_14cb0a127 | 2;
    _DAT_14cb0a0c8 = L"FStereoLayerPS";
    _DAT_14cb0a0e0 = FUN_146826540;
    _DAT_14cb0a0e8 = FUN_146825d77;
    _DAT_14cb0a0f0 = FUN_146825fd6;
    _DAT_14cb0a0f8 = FUN_1407e02ea;
    _DAT_14cb0a100 = FUN_146826273;
    _DAT_14cb0a0d8 = FUN_147d5d68c;
    _DAT_14cb0a118 = 0xffffffff000000f0;
    _DAT_14cb0a120 = 8;
    DAT_14cb0a124 = 0;
    _DAT_14cb0a108 = &LAB_147d5d6b6;
    FUN_145e05eea();
    FUN_1407e00cc(&DAT_14cb0a0c0);
    return;
  }
  return;
}



// FUNCTION 145e05eea FUN_145e05eea body=133 status=ok
// SIG undefined FUN_145e05eea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e05eea(void)

{
  _DAT_14cb0a858 = L"BASE";
  DAT_14cb0a882 = 4;
  FUN_145e05f70();
  _DAT_14cb0a868 = DAT_14cb0a0d0;
  _DAT_14cb0a860 = &DAT_14cb09f28;
  _DAT_14cb0a870 = &LAB_14682652b;
  DAT_14cb0a0d0 = &DAT_14cb0a858;
  DAT_14cb0a125 = DAT_14cb0a125 + '\x01';
  _DAT_14cb0a878 = 0x100000000;
  if (DAT_14cb09f8c != '\0') {
    DAT_14cb0a126 = DAT_14cb0a126 + '\x01';
  }
  return;
}



// FUNCTION 145e05f70 FUN_145e05f70 body=205 status=ok
// SIG undefined FUN_145e05f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e05f70(void)

{
  if ((DAT_14cb09f8f & 2) != 0) {
    return;
  }
  DAT_14cb09f8f = DAT_14cb09f8f | 2;
  _DAT_14cb09f30 = L"FStereoLayerPS_Base";
  _DAT_14cb09f48 = FUN_146826540;
  _DAT_14cb09f50 = FUN_146825d77;
  _DAT_14cb09f58 = FUN_146825fd6;
  _DAT_14cb09f60 = FUN_1407e02ea;
  _DAT_14cb09f68 = FUN_146826273;
  _DAT_14cb09f40 = FUN_147d5d5c2;
  _DAT_14cb09f80 = 0xffffffff000000f0;
  _DAT_14cb09f88 = 8;
  DAT_14cb09f8c = 0;
  _DAT_14cb09f70 = &LAB_147d5d5ec;
  FUN_145e0603e();
  FUN_145e060b8();
  FUN_1407e00cc(&DAT_14cb09f28);
  return;
}



// FUNCTION 145e0603e FUN_145e0603e body=121 status=ok
// SIG undefined FUN_145e0603e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e0603e(void)

{
  FUN_145e06134();
  _DAT_14cb0a698 = L"InTexture";
  DAT_14cb0a6c2 = FUN_140850cc5();
  _DAT_14cb0a6a0 = FUN_140fb78d0();
  _DAT_14cb0a6b0 = &LAB_14682652b;
  _DAT_14cb0a6b8 = 0x1000000e0;
  _DAT_14cb0a6c0 = 0;
  _DAT_14cb0a6a8 = DAT_14cb09f38;
  DAT_14cb09f38 = &DAT_14cb0a698;
  return;
}



// FUNCTION 145e060b8 FUN_145e060b8 body=123 status=ok
// SIG undefined FUN_145e060b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e060b8(void)

{
  _DAT_14cb0a7f8 = L"BASE";
  DAT_14cb0a822 = 4;
  _DAT_14cb0a800 = FUN_140b35ae4();
  _DAT_14cb0a808 = DAT_14cb09f38;
  _DAT_14cb0a810 = &LAB_14682652b;
  DAT_14cb09f38 = &DAT_14cb0a7f8;
  DAT_14cb09f8d = DAT_14cb09f8d + '\x01';
  _DAT_14cb0a818 = 0x100000000;
  if (*(char *)(_DAT_14cb0a800 + 100) != '\0') {
    DAT_14cb09f8e = DAT_14cb09f8e + '\x01';
  }
  return;
}



// FUNCTION 145e06134 FUN_145e06134 body=216 status=ok
// SIG undefined FUN_145e06134(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e06134(void)

{
  _DAT_14cb0a6f8 = L"InIsOpaque";
  DAT_14cb0a722 = FUN_140850cc5();
  _DAT_14cb0a700 = FUN_140ec6960();
  _DAT_14cb0a710 = &LAB_14682652b;
  _DAT_14cb0a718 = 0x1000000e8;
  _DAT_14cb0a720 = 0;
  _DAT_14cb0a708 = DAT_14cb09f38;
  DAT_14cb09f38 = &DAT_14cb0a6f8;
  _DAT_14cb0a6c8 = L"InTextureSampler";
  DAT_14cb0a6f2 = FUN_140850cc5();
  _DAT_14cb0a6d0 = FUN_140fb78d0();
  _DAT_14cb0a6e0 = &LAB_14682652b;
  _DAT_14cb0a6e8 = 0x1000000e4;
  _DAT_14cb0a6f0 = 0;
  _DAT_14cb0a6d8 = DAT_14cb09f38;
  DAT_14cb09f38 = &DAT_14cb0a6c8;
  return;
}



// FUNCTION 145e06218 FUN_145e06218 body=173 status=ok
// SIG undefined FUN_145e06218(void)

undefined8 * FUN_145e06218(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a17b1c0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}



// FUNCTION 145e062c6 FUN_145e062c6 body=226 status=ok
// SIG undefined FUN_145e062c6(void)

longlong * FUN_145e062c6(longlong *param_1)

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
  pcVar13 = FUN_1462f2b3a;
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



// FUNCTION 145e063ae FUN_145e063ae body=138 status=ok
// SIG undefined FUN_145e063ae(void)

undefined1 * FUN_145e063ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b47e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FPixelShaderUtils::FRasterizeToRectsVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x118;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e063aa;
}



// FUNCTION 145e06438 FUN_145e06438 body=226 status=ok
// SIG undefined FUN_145e06438(void)

longlong * FUN_145e06438(longlong *param_1)

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
  pcVar13 = FUN_1462f2bca;
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



// FUNCTION 145e06520 FUN_145e06520 body=138 status=ok
// SIG undefined FUN_145e06520(void)

undefined1 * FUN_145e06520(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b47e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FPixelShaderUtils::FRasterizeToRectsVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x11d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e0651c;
}



// FUNCTION 145e065aa FUN_145e065aa body=9 status=ok
// SIG undefined FUN_145e065aa(void)

void FUN_145e065aa(longlong param_1)

{
  FUN_145e065b4(param_1 + 0x10);
  return;
}



// FUNCTION 145e065b4 FUN_145e065b4 body=83 status=ok
// SIG undefined FUN_145e065b4(void)

void FUN_145e065b4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f5df0;
  FUN_14124efea(param_1 + 10);
  FUN_1449db362(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e06603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145e06608 FUN_145e06608 body=40 status=ok
// SIG undefined FUN_145e06608(void)

undefined8 FUN_145e06608(undefined8 param_1,int param_2)

{
  FUN_141566b46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e06630 FUN_145e06630 body=40 status=ok
// SIG undefined FUN_145e06630(void)

undefined8 FUN_145e06630(undefined8 param_1,int param_2)

{
  FUN_145e06658();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e06658 FUN_145e06658 body=144 status=ok
// SIG undefined FUN_145e06658(void)

void FUN_145e06658(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5a2870;
  param_1[5] = &PTR_FUN_14b5a2b70;
  plVar3 = (longlong *)param_1[0x45];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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



// FUNCTION 145e066e8 FUN_145e066e8 body=67 status=ok
// SIG undefined FUN_145e066e8(void)

void FUN_145e066e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_145e0672c();
  lVar1 = FUN_14112c5dc(*(undefined8 *)(param_2 + 8));
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0xa0) = lVar1;
  return;
}



// FUNCTION 145e0672c FUN_145e0672c body=208 status=ok
// SIG undefined FUN_145e0672c(void)

void FUN_145e0672c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412e4f8c(*(undefined8 *)(param_2 + 0x10),&local_28,&DAT_14cb8c368);
  plVar2 = local_20;
  if ((undefined8 *)(param_1 + 0x50) != &local_28) {
    *(undefined8 *)(param_1 + 0x50) = local_28;
    local_28 = 0;
    plVar3 = *(longlong **)(param_1 + 0x58);
    if (local_20 != plVar3) {
      local_20 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x58) = plVar2;
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
  plVar2 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e067fe FUN_145e067fe body=192 status=ok
// SIG undefined FUN_145e067fe(void)

bool FUN_145e067fe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
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
    local_48 = param_5;
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



// FUNCTION 145e068c0 FUN_145e068c0 body=80 status=ok
// SIG undefined FUN_145e068c0(void)

longlong * FUN_145e068c0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_145e06910(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 145e06910 FUN_145e06910 body=58 status=ok
// SIG undefined FUN_145e06910(void)

void FUN_145e06910(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1449db362(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e0694a FUN_145e0694a body=40 status=ok
// SIG undefined FUN_145e0694a(void)

undefined8 FUN_145e0694a(undefined8 param_1,int param_2)

{
  FUN_145e06972();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e06972 FUN_145e06972 body=144 status=ok
// SIG undefined FUN_145e06972(void)

void FUN_145e06972(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ba522c0;
  plVar2 = (longlong *)param_1[0x11];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  param_1[6] = &PTR_FUN_14a5af930;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 9)])(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e06a02 FUN_145e06a02 body=21 status=ok
// SIG undefined FUN_145e06a02(void)

undefined8 FUN_145e06a02(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145e06a1e FUN_145e06a1e body=150 status=ok
// SIG undefined FUN_145e06a1e(void)

void FUN_145e06a1e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FUN_140526f64();
  if (cVar3 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x198) != '\x02') {
    iVar1 = *(int *)(param_1 + 0x108);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x100);
      lVar4 = 0;
      do {
        thunk_FUN_14890e696(*(undefined8 *)(lVar2 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    iVar1 = *(int *)(param_1 + 0x118);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x110);
      lVar4 = 0;
      do {
        thunk_FUN_14890e696(*(undefined8 *)(lVar2 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  FUN_141566e80(param_1);
  return;
}



// FUNCTION 145e06ab4 FUN_145e06ab4 body=40 status=ok
// SIG undefined FUN_145e06ab4(void)

undefined8 FUN_145e06ab4(undefined8 param_1,int param_2)

{
  FUN_145e06adc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e06adc FUN_145e06adc body=435 status=ok
// SIG undefined FUN_145e06adc(void)

void FUN_145e06adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba613f0;
  FUN_144760e21(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_145e06c90(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_145e06cc6(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145e06cfc(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145e06d32(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145e06d68(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e06c90 FUN_145e06c90 body=53 status=ok
// SIG undefined FUN_145e06c90(void)

void FUN_145e06c90(longlong *param_1)

{
  FUN_145e07106();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e06cc6 FUN_145e06cc6 body=53 status=ok
// SIG undefined FUN_145e06cc6(void)

void FUN_145e06cc6(longlong *param_1)

{
  FUN_145e06e52();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e06cfc FUN_145e06cfc body=53 status=ok
// SIG undefined FUN_145e06cfc(void)

void FUN_145e06cfc(longlong *param_1)

{
  FUN_145e06fac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e06d32 FUN_145e06d32 body=53 status=ok
// SIG undefined FUN_145e06d32(void)

void FUN_145e06d32(longlong *param_1)

{
  FUN_145e06d9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e06d68 FUN_145e06d68 body=53 status=ok
// SIG undefined FUN_145e06d68(void)

void FUN_145e06d68(longlong *param_1)

{
  FUN_145e06df8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e06d9e FUN_145e06d9e body=90 status=ok
// SIG undefined FUN_145e06d9e(void)

void FUN_145e06d9e(longlong param_1)

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



// FUNCTION 145e06df8 FUN_145e06df8 body=90 status=ok
// SIG undefined FUN_145e06df8(void)

void FUN_145e06df8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145e06e52 FUN_145e06e52 body=345 status=ok
// SIG undefined FUN_145e06e52(void)

void FUN_145e06e52(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
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



// FUNCTION 145e06fac FUN_145e06fac body=345 status=ok
// SIG undefined FUN_145e06fac(void)

void FUN_145e06fac(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
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



// FUNCTION 145e07106 FUN_145e07106 body=413 status=ok
// SIG undefined FUN_145e07106(void)

void FUN_145e07106(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar2 = *local_90;
      lVar3 = (longlong)iStack_74 * 0x40;
      *(undefined ***)(lVar2 + lVar3) = &PTR_FUN_14a5af930;
      if (*(longlong *)(lVar2 + 0x20 + lVar3) != 0) {
        FUN_1400020a8();
      }
      puVar4 = (undefined8 *)(lVar2 + lVar3);
      *puVar4 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar4 + 3)])(puVar4 + 1);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
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
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e072a4 FUN_145e072a4 body=292 status=ok
// SIG undefined FUN_145e072a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e072a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf88f8) {
    FUN_144b3d300(&DAT_14cbf88f8);
    if (DAT_14cbf88f8 == -1) {
      FUN_145e07512();
      FUN_145e073c8();
      FUN_140db5666(&DAT_14cbf8850,0,&DAT_14cbf87e8,L"FDrawDebugStrandsCVsCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_149083b74,
                    FUN_149083b14,&LAB_14667abec,&LAB_149083b10,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbf8eb0);
      _DAT_14cbf8850 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144421c6a);
      _Init_thread_footer(&DAT_14cbf88f8);
    }
  }
  return &DAT_14cbf8850;
}



// FUNCTION 145e073c8 FUN_145e073c8 body=205 status=ok
// SIG undefined FUN_145e073c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e073c8(void)

{
  if ((DAT_14cbf884f & 2) == 0) {
    DAT_14cbf884f = DAT_14cbf884f | 2;
    _DAT_14cbf87f0 = L"FDrawDebugStrandsCVsCS";
    _DAT_14cbf8808 = FUN_146826540;
    _DAT_14cbf8810 = FUN_146825d77;
    _DAT_14cbf8818 = FUN_146825fd6;
    _DAT_14cbf8820 = FUN_1407e02ea;
    _DAT_14cbf8828 = FUN_146826273;
    _DAT_14cbf8800 = FUN_149083ae2;
    _DAT_14cbf8840 = 0xffffffff000000e0;
    _DAT_14cbf8848 = 8;
    DAT_14cbf884c = 0;
    _DAT_14cbf8830 = &LAB_149083b0c;
    FUN_145e07496();
    FUN_1407e00cc(&DAT_14cbf87e8);
    return;
  }
  return;
}



// FUNCTION 145e07496 FUN_145e07496 body=123 status=ok
// SIG undefined FUN_145e07496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e07496(void)

{
  _DAT_14cbf91a8 = L"BASE";
  DAT_14cbf91d2 = 4;
  _DAT_14cbf91b0 = FUN_140b35ae4();
  _DAT_14cbf91b8 = DAT_14cbf87f8;
  _DAT_14cbf91c0 = &LAB_14682652b;
  DAT_14cbf87f8 = &DAT_14cbf91a8;
  DAT_14cbf884d = DAT_14cbf884d + '\x01';
  _DAT_14cbf91c8 = 0x100000000;
  if (*(char *)(_DAT_14cbf91b0 + 100) != '\0') {
    DAT_14cbf884e = DAT_14cbf884e + '\x01';
  }
  return;
}



// FUNCTION 145e07512 FUN_145e07512 body=261 status=ok
// SIG undefined FUN_145e07512(void)

void FUN_145e07512(void)

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
              0x110) < DAT_14cbf8f30) {
    FUN_144b3d300(&DAT_14cbf8f30);
    if (DAT_14cbf8f30 == -1) {
      FUN_145e07618(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x1bf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf8eb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444275be);
      _Init_thread_footer(&DAT_14cbf8f30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e07618 FUN_145e07618 body=226 status=ok
// SIG undefined FUN_145e07618(void)

longlong * FUN_145e07618(longlong *param_1)

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
  pcVar13 = FUN_14667b2ea;
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



// FUNCTION 145e07700 FUN_145e07700 body=136 status=ok
// SIG undefined FUN_145e07700(void)

code * FUN_145e07700(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LinearSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000001c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149086aa0;
}



// FUNCTION 145e07788 FUN_145e07788 body=144 status=ok
// SIG undefined FUN_145e07788(void)

code * FUN_145e07788(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e07818();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"HairStrandsVF";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsVertexFactoryUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x90000001c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14908698c;
}



// FUNCTION 145e07818 FUN_145e07818 body=278 status=ok
// SIG undefined FUN_145e07818(void)

undefined * FUN_145e07818(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfc2c8) {
    FUN_144b3d300(&DAT_14cbfc2c8);
    if (DAT_14cbfc2c8 == -1) {
      FUN_145e07930(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"HairStrandsVF";
      local_78 = L"FHairStrandsVertexFactoryUniformShaderParameters";
      local_50 = 400;
      local_58 = 0x36;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfc248,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444451b5);
      _Init_thread_footer(&DAT_14cbfc2c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cbfc248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e07930 FUN_145e07930 body=226 status=ok
// SIG undefined FUN_145e07930(void)

longlong * FUN_145e07930(longlong *param_1)

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
  pcVar13 = FUN_14667e362;
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



// FUNCTION 145e07a14 FUN_145e07a14 body=138 status=ok
// SIG undefined FUN_145e07a14(void)

undefined1 * FUN_145e07a14(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf55e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x37;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1490ac72c;
}



// FUNCTION 145e07a9e FUN_145e07a9e body=144 status=ok
// SIG undefined FUN_145e07a9e(void)

code * FUN_145e07a9e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145daf190();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Resources";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceResourceRawParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x13000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e07a14;
}



// FUNCTION 145e07b2e FUN_145e07b2e body=146 status=ok
// SIG undefined FUN_145e07b2e(void)

code * FUN_145e07b2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e07bc0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevResources";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairStrandsInstancePrevResourceRawParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cbfd408;
  return FUN_145e07a9e;
}



// FUNCTION 145e07bc0 FUN_145e07bc0 body=261 status=ok
// SIG undefined FUN_145e07bc0(void)

void FUN_145e07bc0(void)

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
              0x110) < DAT_14cbfd488) {
    FUN_144b3d300(&DAT_14cbfd488);
    if (DAT_14cbfd488 == -1) {
      FUN_145e07cc6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsInstancePrevResourceRawParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x6c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfd408,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144449f87);
      _Init_thread_footer(&DAT_14cbfd488);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e07cc6 FUN_145e07cc6 body=226 status=ok
// SIG undefined FUN_145e07cc6(void)

longlong * FUN_145e07cc6(longlong *param_1)

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
  pcVar13 = FUN_14667e3f0;
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



// FUNCTION 145e07dae FUN_145e07dae body=132 status=ok
// SIG undefined FUN_145e07dae(void)

undefined1 * FUN_145e07dae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e07daa;
}



// FUNCTION 145e07e32 FUN_145e07e32 body=292 status=ok
// SIG undefined FUN_145e07e32(void)

void FUN_145e07e32(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

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
  plVar3 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4e0de0;
  plVar1 = plVar3 + 2;
  FUN_145e08010(plVar1,*param_2,param_3,param_4);
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_145e07f6e(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145ea965c(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145ea965c(param_1);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e07f6e FUN_145e07f6e body=162 status=ok
// SIG undefined FUN_145e07f6e(void)

void FUN_145e07f6e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145e07fad;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145e07fad;
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
LAB_145e07fad:
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
                    /* WARNING: Could not recover jumptable at 0x000145e0800c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145e08010 FUN_145e08010 body=227 status=ok
// SIG undefined FUN_145e08010(void)

undefined8 *
FUN_145e08010(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_2;
  *param_1 = &PTR_FUN_14b4e0e00;
  param_1[4] = &PTR_FUN_14b4e0e28;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14b4e49b0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 2;
  puVar3[2] = &PTR_FUN_14b4e49d0;
  param_1[7] = puVar3 + 2;
  param_1[8] = puVar3;
  param_1[9] = *param_3;
  lVar1 = param_3[1];
  param_1[10] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_145e080f4(param_1 + 0xb,param_4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 145e080f4 FUN_145e080f4 body=124 status=ok
// SIG undefined FUN_145e080f4(void)

void FUN_145e080f4(longlong *param_1,longlong *param_2)

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



// FUNCTION 145e0817a FUN_145e0817a body=202 status=ok
// SIG undefined FUN_145e0817a(void)

undefined8 * FUN_145e0817a(undefined8 *param_1)

{
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145aa9ef0();
  *param_1 = &PTR_FUN_14a9ebd80;
  *(undefined2 *)(param_1 + 0xbe) = 0xffff;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  local_48 = 0;
  local_38 = &PTR_LAB_14a9ef020;
  local_30 = FUN_147bd836a;
  local_58 = FUN_147be26a6;
  FUN_145e08246(param_1);
  local_88 = 0;
  local_78 = &PTR_LAB_14a9ef040;
  local_70 = FUN_147bd83e6;
  local_98 = &LAB_147be270a;
  FUN_145e08286(param_1);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e08246 FUN_145e08246 body=63 status=ok
// SIG undefined FUN_145e08246(void)

void FUN_145e08246(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_145e082c6(param_1 + 0x110);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000145e0827a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 145e08286 FUN_145e08286 body=63 status=ok
// SIG undefined FUN_145e08286(void)

void FUN_145e08286(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_145e083ec(param_1 + 0x150);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000145e082ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 145e082c6 FUN_145e082c6 body=292 status=ok
// SIG undefined FUN_145e082c6(void)

longlong * FUN_145e082c6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e083ec FUN_145e083ec body=292 status=ok
// SIG undefined FUN_145e083ec(void)

longlong * FUN_145e083ec(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e08512 FUN_145e08512 body=144 status=ok
// SIG undefined FUN_145e08512(void)

code * FUN_145e08512(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e085a2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParticleBoundsParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FParticleBoundsParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000008b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14caf4ed8;
  return FUN_145f5c810;
}



// FUNCTION 145e085a2 FUN_145e085a2 body=278 status=ok
// SIG undefined FUN_145e085a2(void)

undefined * FUN_145e085a2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf4f58) {
    FUN_144b3d300(&DAT_14caf4f58);
    if (DAT_14caf4f58 == -1) {
      FUN_145e086ba(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"ParticleBounds";
      local_78 = L"FParticleBoundsParameters";
      local_50 = 0x10;
      local_58 = 0x89c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf4ed8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435d2a93);
      _Init_thread_footer(&DAT_14caf4f58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf4ed8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e086ba FUN_145e086ba body=226 status=ok
// SIG undefined FUN_145e086ba(void)

longlong * FUN_145e086ba(longlong *param_1)

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
  pcVar13 = FUN_1463f034e;
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



// FUNCTION 145e087a2 FUN_145e087a2 body=132 status=ok
// SIG undefined FUN_145e087a2(void)

undefined1 * FUN_145e087a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ChunksPerGroup";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x89d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e0879e;
}



// FUNCTION 145e08826 FUN_145e08826 body=138 status=ok
// SIG undefined FUN_145e08826(void)

code * FUN_145e08826(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExtraChunkCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000089e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e087a2;
}



// FUNCTION 145e088b0 FUN_145e088b0 body=55 status=ok
// SIG undefined FUN_145e088b0(void)

void FUN_145e088b0(longlong *param_1)

{
  FUN_141567336(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


