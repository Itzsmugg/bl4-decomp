// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1458cfc60 FUN_1458cfc60 body=198 status=ok
// SIG undefined FUN_1458cfc60(void)

void FUN_1458cfc60(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x30);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
  *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + 1;
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
  FUN_140bad112(lVar3,&DAT_149dfb77a);
  FUN_140bad112(lVar3 + 0x18,&DAT_149dfb77a);
  if (*(char *)(lVar3 + 0x30) == '\0') {
    iVar4 = *(int *)(lVar3 + 0x34) + 1;
  }
  else {
    iVar4 = 1;
    if (*(int *)(lVar3 + 0x34) != 0) goto LAB_1458cfce0;
  }
  *(undefined1 *)(lVar3 + 0x30) = 1;
  *(int *)(lVar3 + 0x34) = iVar4;
LAB_1458cfce0:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cfd28 FUN_1458cfd28 body=422 status=ok
// SIG undefined FUN_1458cfd28(void)

void FUN_1458cfd28(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1458cfed0 FUN_1458cfed0 body=119 status=ok
// SIG undefined FUN_1458cfed0(void)

longlong FUN_1458cfed0(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (*(int *)(lVar3 + 0xb0) == *param_2) {
        lVar4 = *(longlong *)(param_2 + 2);
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar4);
        }
        if (*(longlong *)(lVar3 + 0xb8) == lVar4) {
          return lVar3;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 1458cff48 FUN_1458cff48 body=111 status=ok
// SIG undefined FUN_1458cff48(void)

ulonglong FUN_1458cff48(longlong param_1)

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
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_1458cff9a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1458cff9a;
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
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x30))
                (lVar4 + *(int *)(param_1 + 0x38),*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x10));
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



// FUNCTION 1458cffc2 FUN_1458cffc2 body=929 status=ok
// SIG undefined FUN_1458cffc2(void)

void FUN_1458cffc2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined4 *local_150;
  uint local_148;
  longlong *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [3];
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar4 = FUN_1403ca227();
  lVar5 = FUN_1412fe774(lVar4 + 0x390);
  if (lVar5 != 0) {
    lVar5 = FUN_1412fe774(lVar4 + 0x3b8);
    if ((lVar5 != 0) && (param_1[0x39] != 0)) {
      cVar3 = FUN_144729dda(param_1 + 0x4c6);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_1 + 0x700))(param_1);
        if (cVar3 == '\0') {
          local_b8 = DAT_14c8464f0;
          local_c8 = (undefined4)DAT_14c8464e0;
          uStack_c4 = DAT_14c8464e0._4_4_;
          uStack_c0 = (undefined4)DAT_14c8464e8;
          uStack_bc = DAT_14c8464e8._4_4_;
          local_e8 = (undefined4)DAT_14c8464f8;
          uStack_e4 = DAT_14c8464f8._4_4_;
          uStack_e0 = (undefined4)DAT_14c846500;
          uStack_dc = DAT_14c846500._4_4_;
          local_d8 = DAT_14c846508;
          local_108 = (undefined4)DAT_14c8464e0;
          uStack_104 = DAT_14c8464e0._4_4_;
          uStack_100 = (undefined4)DAT_14c8464e8;
          uStack_fc = DAT_14c8464e8._4_4_;
          local_f8 = DAT_14c8464f0;
          lVar5 = param_1[0x39];
          uVar6 = FUN_1412fe774(lVar4 + 0x390);
          local_128 = 1;
          local_130 = 1;
          local_140 = (longlong *)CONCAT71(local_140._1_7_,1);
          local_138 = 2;
          local_148 = 2;
          local_158 = &local_e8;
          local_150 = &local_c8;
          uVar6 = FUN_140e3e448(uVar6,lVar5,0,&local_108);
          FUN_14485c47a(param_1 + 0x4c6,uVar6);
        }
      }
      local_110 = 0;
      FUN_14485c47a(&local_110,param_1);
      lVar7 = FUN_14050fd64();
      uVar6 = local_110;
      local_88[2] = 0;
      local_70 = 0;
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      FUN_1446efa72(&local_68,0,2,0x10);
      uStack_60 = 2;
      *local_68 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_68[2] = lVar8;
      *local_68 = &PTR_FUN_14b95f900;
      local_68[3] = uVar6;
      FUN_144a450dc(local_88 + 2,&local_68);
      FUN_1449db362(&local_68);
      FUN_140d01986();
      local_88[0] = 0;
      local_88[1] = 0;
      local_68 = *(undefined8 **)(lVar4 + 1000);
      uStack_60 = *(undefined4 *)(lVar4 + 0x3f0);
      uStack_5c = *(undefined4 *)(lVar4 + 0x3f4);
      local_58 = (void *)0x0;
      local_50 = *(int *)(lVar4 + 0x400);
      lVar5 = (longlong)local_50;
      _Src = *(void **)(lVar4 + 0x3f8);
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar5 * 2);
      }
      local_a0 = &local_48;
      local_a8 = &local_68;
      FUN_140a1e2b2(&local_98);
      local_140 = local_88;
      local_148 = local_148 & 0xffffff00;
      local_150 = (undefined4 *)((ulonglong)local_150 & 0xffffffffffffff00);
      local_158 = (undefined4 *)((ulonglong)local_158 & 0xffffffff00000000);
      FUN_140421d62(lVar7 + 0x1e8,local_120,&local_98,local_88 + 2);
      FUN_140861e20(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1449db362(local_88 + 2);
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_118 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar2 = (int *)((longlong)local_118 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_118 + 0x10))(local_118);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d0364 FUN_1458d0364 body=232 status=ok
// SIG undefined FUN_1458d0364(void)

longlong * FUN_1458d0364(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462b84e0;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458d0458 FUN_1458d0458 body=125 status=ok
// SIG undefined FUN_1458d0458(void)

undefined1 * FUN_1458d0458(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  FUN_1458d04d6(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  iVar1 = *(int *)(param_2 + 0xb0);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(int *)(param_1 + 0xb0) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    FUN_1470d5588(param_1 + 0xa8,iVar1,0);
    FUN_1470d55fb(*(undefined8 *)(param_1 + 0xa8),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1458d04d6 FUN_1458d04d6 body=163 status=ok
// SIG undefined FUN_1458d04d6(void)

undefined4 * FUN_1458d04d6(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_144a7f96e(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  FUN_144a7f96e(param_1 + 0x16,param_2 + 0x16);
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = param_2[0x26];
  return param_1;
}



// FUNCTION 1458d0582 FUN_1458d0582 body=135 status=ok
// SIG undefined FUN_1458d0582(void)

undefined8 * FUN_1458d0582(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1412fe974(param_1,uVar1);
  *param_1 = &PTR_FUN_14b1f1d20;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1447715ec(param_1 + 5,&DAT_14cb899f8);
  FUN_1447715ec(param_1 + 10,&DAT_14cb89a20);
  param_1[0x10] = DAT_14cb899f0;
  *(undefined2 *)((longlong)param_1 + 0xe9) = 0x101;
  *(undefined4 *)(param_1 + 0x1e) = 2;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41b00000;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return param_1;
}



// FUNCTION 1458d060a FUN_1458d060a body=338 status=ok
// SIG undefined FUN_1458d060a(void)

void FUN_1458d060a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined1 auStack_98 [32];
  undefined *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_14001cc68(0x60,0x10);
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14a57e9c0;
  local_50 = FUN_1477f0bf8;
  local_78[0] = &DAT_1477f0c18;
  FUN_1458d078e(uVar2,local_78,&DAT_14c99e41c,0x101);
  if (local_78[0] != (undefined *)0x0) {
    pppuVar3 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar3 = &local_58;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  uVar2 = FUN_14001cc68(0x60,0x10);
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14a57e9c0;
  local_50 = FUN_1477f0c3a;
  local_78[0] = &DAT_1477f0c18;
  FUN_1458d078e(uVar2,local_78,&DAT_14c99e424,0x101);
  if (local_78[0] != (undefined *)0x0) {
    pppuVar3 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar3 = local_68;
    }
    (*(code *)(*pppuVar3)[2])(pppuVar3);
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d075e FUN_1458d075e body=12 status=ok
// SIG undefined FUN_1458d075e(void)

void FUN_1458d075e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001458d0767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1458d076a FUN_1458d076a body=36 status=ok
// SIG undefined FUN_1458d076a(void)

undefined8 FUN_1458d076a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1458d078e FUN_1458d078e body=121 status=ok
// SIG undefined FUN_1458d078e(void)

undefined8 *
FUN_1458d078e(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined2 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a57db90;
  lVar1 = *param_2;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  param_1[10] = *param_3;
  *(undefined2 *)(param_1 + 0xb) = param_4;
  plVar2 = (longlong *)FUN_1412feae2();
  (**(code **)(*plVar2 + 8))(plVar2,param_1,param_1[10]);
  return param_1;
}



// FUNCTION 1458d080a FUN_1458d080a body=77 status=ok
// SIG undefined FUN_1458d080a(void)

void FUN_1458d080a(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x350))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xb1) = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001458d0844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x358))(*(longlong **)(param_1 + 0x130),param_1)
    ;
    return;
  }
  return;
}



// FUNCTION 1458d085e FUN_1458d085e body=115 status=ok
// SIG undefined FUN_1458d085e(void)

void FUN_1458d085e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141155906();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar1 = FUN_1458d08d2();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) goto LAB_1458d08b0;
    }
  }
  lVar2 = 0;
LAB_1458d08b0:
  FUN_14485c47a(param_1 + 0x134,lVar2);
  FUN_1458d09b8(param_1);
  return;
}



// FUNCTION 1458d08d2 FUN_1458d08d2 body=228 status=ok
// SIG undefined FUN_1458d08d2(void)

longlong FUN_1458d08d2(void)

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
  if (DAT_14cc1d888 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14673a346;
    local_38 = &LAB_1494e7ab3;
    local_40 = &LAB_14673c478;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusNodeSubGraph",&DAT_14cc1d888,&DAT_1494e7ab2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1d888;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d09b8 FUN_1458d09b8 body=451 status=ok
// SIG undefined FUN_1458d09b8(void)

void FUN_1458d09b8(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = param_1 + 0x134;
  cVar3 = FUN_144729dda(lVar5);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(lVar5);
    iVar1 = *(int *)(lVar4 + 0xc0);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0xb8);
      lVar6 = 0;
      do {
        if ((*(int *)(lVar4 + 8 + lVar6) != 0) &&
           (plVar2 = *(longlong **)(lVar4 + lVar6), plVar2 != (longlong *)0x0)) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') goto LAB_1458d0b58;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar6);
    }
    lVar4 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a3654;
    local_48 = 0;
    FUN_1412fed8a(lVar4 + 0xb8,local_40,param_1,&local_50);
    lVar4 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a378a;
    local_48 = 0;
    FUN_1412fed8a(lVar4 + 0xd0,local_40,param_1,&local_50);
    lVar4 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a3988;
    local_48 = 0;
    FUN_1412fed8a(lVar4 + 0xe8,local_40,param_1,&local_50);
    lVar4 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a3a58;
    local_48 = 0;
    FUN_1412fed8a(lVar4 + 0x100,local_40,param_1,&local_50);
    lVar4 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a3a58;
    local_48 = 0;
    FUN_1412fed8a(lVar4 + 0x118,local_40,param_1,&local_50);
    lVar5 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a3b62;
    local_48 = 0;
    FUN_1412fed8a(lVar5 + 0x130,local_40,param_1,&local_50);
  }
LAB_1458d0b58:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d0b7c FUN_1458d0b7c body=29 status=ok
// SIG undefined FUN_1458d0b7c(void)

bool FUN_1458d0b7c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1458d0b9a FUN_1458d0b9a body=918 status=ok
// SIG undefined FUN_1458d0b9a(void)

void FUN_1458d0b9a(longlong param_1)

{
  undefined4 *puVar1;
  void *_Src;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1b8 [40];
  undefined8 *local_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  void *local_f0;
  int local_e8;
  undefined1 local_e0 [64];
  undefined2 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_144757f48(param_1,8);
  iVar3 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x50);
    lVar9 = 0;
    do {
      FUN_1400337aa(*(undefined8 *)(lVar6 + lVar9));
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  local_88 = 0x10ca737593ede1aa;
  uStack_80 = 0x49b157a04df98a28;
  iVar3 = FUN_1448a256a(param_1);
  if (iVar3 < 3) {
    FUN_145ebd534(param_1 + 0x1a0,param_1 + 0x180);
    FUN_145ebd534(param_1 + 0x1b0,param_1 + 400);
  }
  if ((longlong)*(int *)(param_1 + 0x178) != 0) {
    local_98 = 0;
    uStack_90 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x170);
    local_190 = puVar5 + (longlong)*(int *)(param_1 + 0x178) * 7;
    do {
      local_118 = 0;
      local_158 = 0;
      uStack_150 = 0;
      FUN_140e6511c(&local_110,&local_158);
      FUN_140e6507e(local_e0);
      local_a0 = 0;
      local_118 = *puVar5;
      local_110 = puVar5[1];
      local_108 = puVar5[2];
      local_100 = *(undefined4 *)(puVar5 + 3);
      uStack_fc = *(undefined4 *)((longlong)puVar5 + 0x1c);
      uStack_f8 = *(undefined4 *)(puVar5 + 4);
      uStack_f4 = *(undefined4 *)((longlong)puVar5 + 0x24);
      FUN_144a787a6(&local_f0,puVar5 + 5);
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      FUN_140e6507e(&local_158);
      FUN_14949dfc4(local_e0,&local_158);
      FUN_14121c54c(&local_158);
      uVar2 = uStack_90;
      lVar6 = (longlong)(int)uStack_90;
      uVar4 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
      if (uStack_90._4_4_ < uVar4) {
        FUN_1494d6e7c(&local_98,uVar2 & 0xffffffff);
      }
      _Src = local_f0;
      lVar6 = lVar6 * 0x80;
      lVar9 = local_98 + lVar6;
      *(undefined8 *)(local_98 + lVar6) = local_118;
      *(undefined8 *)(local_98 + 8 + lVar6) = local_110;
      *(undefined8 *)(local_98 + 0x10 + lVar6) = local_108;
      puVar1 = (undefined4 *)(local_98 + 0x18 + lVar6);
      *puVar1 = local_100;
      puVar1[1] = uStack_fc;
      puVar1[2] = uStack_f8;
      puVar1[3] = uStack_f4;
      *(undefined8 *)(local_98 + 0x28 + lVar6) = 0;
      lVar8 = (longlong)local_e8;
      *(int *)(local_98 + 0x30 + lVar6) = local_e8;
      if (lVar8 == 0) {
        *(undefined4 *)(lVar9 + 0x34) = 0;
      }
      else {
        puVar7 = (undefined8 *)(lVar6 + local_98 + 0x28);
        FUN_1446dd670(puVar7,local_e8,0);
        memcpy((void *)*puVar7,_Src,lVar8 * 2);
      }
      FUN_149482cae(lVar9 + 0x38,local_e0);
      *(undefined2 *)(lVar9 + 0x78) = local_a0;
      FUN_14121c54c(local_e0);
      if (local_f0 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar5 = puVar5 + 7;
    } while (puVar5 != local_190);
    FUN_14949e07a(param_1 + 0x1a0,&local_98);
    FUN_141239a12(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  local_168 = 0x10ca737593ede1aa;
  uStack_160 = 0x49b157a04df98a28;
  iVar3 = FUN_1448a256a(param_1);
  if (iVar3 < 8) {
    FUN_14949e0de(param_1);
    FUN_14949e35c(param_1);
  }
  local_178 = 0x10ca737593ede1aa;
  uStack_170 = 0x49b157a04df98a28;
  iVar3 = FUN_1448a256a(param_1);
  if (iVar3 < 9) {
    FUN_14949e4bc(param_1);
  }
  local_118 = *(undefined8 *)(param_1 + 0x138);
  FUN_145715fae(local_188);
  FUN_1458d0f32(param_1,local_188);
  if ((local_70 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d0f32 FUN_1458d0f32 body=131 status=ok
// SIG undefined FUN_1458d0f32(void)

uint FUN_1458d0f32(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  uVar4 = FUN_144722c14(plVar1,param_2,0);
  if ((char)uVar4 == '\0') {
    plVar2 = (longlong *)*param_2;
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != plVar2) {
      *plVar1 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 0x38) = (int)param_2[1];
    FUN_1494bd580(param_1,2);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return uVar4 ^ 1;
}



// FUNCTION 1458d0fb6 FUN_1458d0fb6 body=53 status=ok
// SIG undefined FUN_1458d0fb6(void)

void FUN_1458d0fb6(longlong *param_1)

{
  FUN_1458d0fec();
  if ((char)param_1[0xeb] == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xeb) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001458d0fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xaf8))(param_1);
  return;
}



// FUNCTION 1458d0fec FUN_1458d0fec body=638 status=ok
// SIG undefined FUN_1458d0fec(void)

void FUN_1458d0fec(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  thunk_FUN_1401c3c2c();
  uVar2 = FUN_1408c9060();
  lVar3 = FUN_1458d1275(param_1,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0xe9] = lVar3;
  uVar2 = FUN_1400d1e14();
  lVar3 = FUN_1458d1331(param_1,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0xea] = lVar3;
  if ((((param_1[0xe9] != 0) && (lVar3 != 0)) && ((*(uint *)(param_1[0xe9] + 8) & 0x40000000) == 0))
     && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
    LOCK();
    UNLOCK();
    local_70 = DAT_14c761474 + 1;
    local_78 = local_78 & 0xffffffffffffff00;
    DAT_14c761474 = DAT_14c761474 + 1;
    FUN_1406507bc(lVar3 + 0x30,local_50,0,0);
    LOCK();
    UNLOCK();
    local_70 = DAT_14c761474 + 1;
    local_78 = local_78 & 0xffffffffffffff00;
    DAT_14c761474 = DAT_14c761474 + 1;
    FUN_1406507bc(param_1[0xea] + 0x30,local_50,0x3f400000,0x3f800000);
    FUN_1408c8fc2(param_1[0xe9],0x3f800000);
    FUN_1458d126c(param_1[0xe9],0x3f733333);
    FUN_1408c8a12(param_1[0xe9],0);
    local_50[0] = 0;
    FUN_1446f470e(&local_58,L"UpdateOpacity",1);
    FUN_14485c47a(local_50,param_1);
    local_68 = local_50[0];
    local_60 = local_58;
    local_78 = 0;
    FUN_1408c9004(param_1[0xe9],param_1[0xea],&local_68,0);
    FUN_140b506a4(param_1[0xe9]);
  }
  iVar1 = FUN_1457c5e5a(6);
  FUN_1412ff0e6(param_1,-iVar1);
  if (((*(char *)((longlong)param_1 + 0x742) == '\x01') && ((char)param_1[0xe8] != '\0')) &&
     (*(undefined1 *)(param_1 + 0xe8) = 0, *(char *)((longlong)param_1 + 0x741) == '\0')) {
    (**(code **)(*param_1 + 0xaf8))(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x741) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x741) = 0;
    (**(code **)(*param_1 + 0xaf8))(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x742) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x742) = 1;
    (**(code **)(*param_1 + 0xaf8))(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d126c FUN_1458d126c body=9 status=ok
// SIG undefined FUN_1458d126c(void)

void FUN_1458d126c(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x118) = param_2;
  return;
}



// FUNCTION 1458d1275 FUN_1458d1275 body=187 status=ok
// SIG undefined FUN_1458d1275(void)

undefined8 FUN_1458d1275(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d1331 FUN_1458d1331 body=187 status=ok
// SIG undefined FUN_1458d1331(void)

undefined8 FUN_1458d1331(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d13ee FUN_1458d13ee body=262 status=ok
// SIG undefined FUN_1458d13ee(void)

void FUN_1458d13ee(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
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
    lVar3 = (longlong)
            *(int *)((longlong)plVar2 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (lVar3 != -1) {
      lVar4 = *param_1;
      lVar3 = lVar3 * 0x10;
      local_40 = *(undefined8 *)(lVar4 + lVar3);
      local_48 = param_2;
      cVar1 = FUN_1458d150c();
      if (cVar1 == '\0') {
        lVar4 = lVar4 + lVar3;
        do {
          if ((longlong)*(int *)(lVar4 + 8) == -1) goto LAB_1458d14e7;
          lVar3 = (longlong)*(int *)(lVar4 + 8) * 0x10;
          lVar4 = *param_1 + lVar3;
          local_40 = *(undefined8 *)(*param_1 + lVar3);
          local_48 = param_2;
          cVar1 = FUN_1458d150c(&local_40,&local_48);
        } while (cVar1 == '\0');
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
LAB_1458d14e7:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458d150c FUN_1458d150c body=55 status=ok
// SIG undefined FUN_1458d150c(void)

ulonglong FUN_1458d150c(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1458d159e FUN_1458d159e body=114 status=ok
// SIG undefined FUN_1458d159e(void)

void FUN_1458d159e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 1458d1610 FUN_1458d1610 body=74 status=ok
// SIG undefined FUN_1458d1610(void)

undefined8 * FUN_1458d1610(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b452040;
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1458d165a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d165a FUN_1458d165a body=389 status=ok
// SIG undefined FUN_1458d165a(void)

void FUN_1458d165a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14b451fe0;
  if (DAT_14c98e618 != 0) {
    plVar5 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe8))();
    if (plVar5 != (longlong *)0x0) {
      local_30 = param_1[1];
      plVar3 = (longlong *)param_1[2];
      if (plVar3 == (longlong *)0x0) {
        local_28 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        local_28 = plVar3;
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
      cVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_30);
      if (cVar4 != '\0') {
        (**(code **)(*plVar5 + 0x28))(plVar5,&local_30);
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
      plVar5 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_28 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_28)(local_28);
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
  FUN_1458d17e0(param_1[1]);
  plVar5 = (longlong *)param_1[4];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d17e0 FUN_1458d17e0 body=9 status=ok
// SIG undefined FUN_1458d17e0(void)

void FUN_1458d17e0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1458d17ea FUN_1458d17ea body=24 status=ok
// SIG undefined FUN_1458d17ea(void)

void FUN_1458d17ea(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458d17fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1458d1802 FUN_1458d1802 body=59 status=ok
// SIG undefined FUN_1458d1802(void)

undefined8 * FUN_1458d1802(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b452a40;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d183e FUN_1458d183e body=428 status=ok
// SIG undefined FUN_1458d183e(void)

void FUN_1458d183e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  
  iVar1 = (int)param_2[1];
  puVar2 = &DAT_14cbdb3f8;
  if (iVar1 == DAT_14cbdb590) {
    if (1 < iVar1) {
      lVar6 = 0;
      while( true ) {
        uVar7 = *(ushort *)(*param_2 + lVar6);
        uVar5 = (ulonglong)uVar7;
        uVar4 = *(ushort *)(DAT_14cbdb588 + lVar6);
        if (uVar7 != uVar4) break;
        if (uVar7 == 0) goto LAB_1458d18fa;
LAB_1458d1936:
        lVar6 = lVar6 + 2;
      }
      if ((uVar4 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar3 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1458d1936;
      }
      if (uVar7 != uVar4) goto LAB_1458d186d;
    }
  }
  else if (DAT_14cbdb590 + iVar1 != 1) {
LAB_1458d186d:
    if (iVar1 == DAT_14cbdb5a0) {
      puVar2 = &DAT_14cbdb478;
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar6);
          uVar5 = (ulonglong)uVar7;
          uVar4 = *(ushort *)(DAT_14cbdb598 + lVar6);
          if (uVar7 != uVar4) break;
          if (uVar7 == 0) goto LAB_1458d18fa;
LAB_1458d1998:
          lVar6 = lVar6 + 2;
        }
        if ((uVar4 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1458d1998;
        }
        if (uVar7 != uVar4) goto LAB_1458d1888;
      }
    }
    else if (DAT_14cbdb5a0 + iVar1 == 1) {
      puVar2 = &DAT_14cbdb478;
    }
    else {
LAB_1458d1888:
      if (iVar1 == DAT_14cbdb5b0) {
        puVar2 = &DAT_14cbdb4f8;
        if (1 < iVar1) {
          lVar6 = 0;
          while( true ) {
            uVar7 = *(ushort *)(*param_2 + lVar6);
            uVar5 = (ulonglong)uVar7;
            uVar4 = *(ushort *)(DAT_14cbdb5a8 + lVar6);
            if (uVar7 != uVar4) break;
            if (uVar7 == 0) goto LAB_1458d18fa;
LAB_1458d18cd:
            lVar6 = lVar6 + 2;
          }
          if ((uVar4 | uVar7) < 0x80) {
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            uVar3 = (ulonglong)uVar4;
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1458d18cd;
          }
          if (uVar7 != uVar4) {
            return;
          }
        }
      }
      else {
        if (DAT_14cbdb5b0 + iVar1 != 1) {
          return;
        }
        puVar2 = &DAT_14cbdb4f8;
      }
    }
  }
LAB_1458d18fa:
  FUN_140de1078(param_1,puVar2,0,0);
  return;
}



// FUNCTION 1458d19ea FUN_1458d19ea body=439 status=ok
// SIG undefined FUN_1458d19ea(void)

void FUN_1458d19ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  
  iVar1 = (int)param_2[1];
  if (iVar1 == DAT_14cbdb590) {
    puVar2 = &DAT_14cbdb458;
    if (1 < iVar1) {
      lVar6 = 0;
      while( true ) {
        uVar7 = *(ushort *)(*param_2 + lVar6);
        uVar5 = (ulonglong)uVar7;
        uVar4 = *(ushort *)(DAT_14cbdb588 + lVar6);
        if (uVar7 != uVar4) break;
        if (uVar7 == 0) goto LAB_1458d1a9d;
LAB_1458d1ae0:
        lVar6 = lVar6 + 2;
      }
      if ((uVar4 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar3 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1458d1ae0;
      }
      if (uVar7 != uVar4) goto LAB_1458d1a10;
    }
  }
  else if (DAT_14cbdb590 + iVar1 == 1) {
    puVar2 = &DAT_14cbdb458;
  }
  else {
LAB_1458d1a10:
    if (iVar1 == DAT_14cbdb5a0) {
      puVar2 = &DAT_14cbdb4d8;
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar6);
          uVar5 = (ulonglong)uVar7;
          uVar4 = *(ushort *)(DAT_14cbdb598 + lVar6);
          if (uVar7 != uVar4) break;
          if (uVar7 == 0) goto LAB_1458d1a9d;
LAB_1458d1b4f:
          lVar6 = lVar6 + 2;
        }
        if ((uVar4 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1458d1b4f;
        }
        if (uVar7 != uVar4) goto LAB_1458d1a2b;
      }
    }
    else if (DAT_14cbdb5a0 + iVar1 == 1) {
      puVar2 = &DAT_14cbdb4d8;
    }
    else {
LAB_1458d1a2b:
      if (iVar1 == DAT_14cbdb5b0) {
        puVar2 = &DAT_14cbdb578;
        if (1 < iVar1) {
          lVar6 = 0;
          while( true ) {
            uVar7 = *(ushort *)(*param_2 + lVar6);
            uVar5 = (ulonglong)uVar7;
            uVar4 = *(ushort *)(DAT_14cbdb5a8 + lVar6);
            if (uVar7 != uVar4) break;
            if (uVar7 == 0) goto LAB_1458d1a9d;
LAB_1458d1a70:
            lVar6 = lVar6 + 2;
          }
          if ((uVar4 | uVar7) < 0x80) {
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            uVar3 = (ulonglong)uVar4;
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1458d1a70;
          }
          if (uVar7 != uVar4) {
            return;
          }
        }
      }
      else {
        if (DAT_14cbdb5b0 + iVar1 != 1) {
          return;
        }
        puVar2 = &DAT_14cbdb578;
      }
    }
  }
LAB_1458d1a9d:
  FUN_140de1078(param_1,puVar2,0,0);
  return;
}



// FUNCTION 1458d1ba2 FUN_1458d1ba2 body=69 status=ok
// SIG undefined FUN_1458d1ba2(void)

void FUN_1458d1ba2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1458d1be7(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1458d1c8c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1458d1be7 FUN_1458d1be7 body=41 status=ok
// SIG undefined FUN_1458d1be7(void)

void FUN_1458d1be7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458d1c10(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1458d1c10 FUN_1458d1c10 body=123 status=ok
// SIG undefined FUN_1458d1c10(void)

void FUN_1458d1c10(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a9e4558;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[7] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_LAB_14a3d46d0;
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1458d1c8c FUN_1458d1c8c body=115 status=ok
// SIG undefined FUN_1458d1c8c(void)

void FUN_1458d1c8c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x88,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x88)) {
      uVar2 = uVar1 / 0x88 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x88,8);
  }
  return;
}



// FUNCTION 1458d1d00 FUN_1458d1d00 body=57 status=ok
// SIG undefined FUN_1458d1d00(void)

int FUN_1458d1d00(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458d1d58(param_1,iVar1);
  }
  FUN_1458d1d39((longlong)iVar1 * 0x68 + *param_1);
  return iVar1;
}



// FUNCTION 1458d1d39 FUN_1458d1d39 body=31 status=ok
// SIG undefined FUN_1458d1d39(void)

void FUN_1458d1d39(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// FUNCTION 1458d1d58 FUN_1458d1d58 body=143 status=ok
// SIG undefined FUN_1458d1d58(void)

void FUN_1458d1d58(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458d1de8 FUN_1458d1de8 body=71 status=ok
// SIG undefined FUN_1458d1de8(void)

void FUN_1458d1de8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1458d1e62(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458d1dfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140cb9134(&DAT_14cb75508);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b0dd410;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  return;
}



// FUNCTION 1458d1e30 FUN_1458d1e30 body=50 status=ok
// SIG undefined FUN_1458d1e30(void)

void FUN_1458d1e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cb9134(&DAT_14cb75508);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b0dd410;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



// FUNCTION 1458d1e62 FUN_1458d1e62 body=191 status=ok
// SIG undefined FUN_1458d1e62(void)

longlong FUN_1458d1e62(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1458d1f22();
  lVar3 = *param_1;
  if (DAT_14cb754b8 != DAT_14cb754e4) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb754e8;
    if (DAT_14cb754f0 != (undefined *)0x0) {
      puVar7 = DAT_14cb754f0;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb754f8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb754b0 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb754a8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1458d1f22 FUN_1458d1f22 body=152 status=ok
// SIG undefined FUN_1458d1f22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458d1f22(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb75500) {
    FUN_144b3d300(&DAT_14cb75500);
    if (DAT_14cb75500 == -1) {
      DAT_14cb754d0 = 0;
      DAT_14cb754d8 = 0;
      DAT_14cb754b0 = 0;
      _DAT_14cb754b8 = 0;
      _DAT_14cb754dc = 0xffffffff00000080;
      DAT_14cb754e4 = 0;
      DAT_14cb754f0 = 0;
      DAT_14cb754f8 = 0;
      atexit(FUN_143cd7782);
      _Init_thread_footer(&DAT_14cb75500);
      return;
    }
  }
  return;
}



// FUNCTION 1458d1fba FUN_1458d1fba body=223 status=ok
// SIG undefined FUN_1458d1fba(void)

longlong * FUN_1458d1fba(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 *_Dst;
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  _Dst = (undefined8 *)FUN_14001cc68(0xd8);
  memset(_Dst,0,0xd8);
  *(undefined2 *)((longlong)_Dst + 0xc) = 0x30a;
  memset(_Dst + 3,0,0x84);
  *(undefined1 *)((longlong)_Dst + 0x9c) = 4;
  *(undefined2 *)((longlong)_Dst + 0x9e) = 0;
  *(undefined4 *)(_Dst + 0x17) = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  *(undefined8 *)((longlong)_Dst + 0xad) = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  *(undefined2 *)(_Dst + 0x1a) = 0;
  *_Dst = &PTR_FUN_14a34fd10;
  lVar1 = FUN_1458d209a(_Dst,&local_38);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d209a FUN_1458d209a body=288 status=ok
// SIG undefined FUN_1458d209a(void)

longlong FUN_1458d209a(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined **local_f8 [5];
  byte local_d0;
  byte local_cf;
  ulonglong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar4 = *param_2;
  iVar3 = *(int *)(param_2 + 1);
  memset(local_f8,0,0x90);
  FUN_144869430(local_f8);
  local_68 = 0;
  local_f8[0] = &PTR_FUN_149e1ddc0;
  local_50 = 0x7fffffffffffffff;
  local_d0 = local_d0 | 1;
  local_cf = local_cf | 1;
  lVar6 = param_1 + 0x10;
  local_60 = uVar4;
  local_58 = (longlong)iVar3;
  FUN_1402ee999(local_f8,lVar6);
  cVar5 = FUN_1412ff8b4(&local_48,local_68 & 0xffffffff,param_1);
  if (cVar5 == '\0') {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(param_1);
    }
    param_1 = 0;
  }
  else {
    if (param_1 == 0) {
      lVar6 = 0;
    }
    FUN_1402eea41(lVar6);
  }
  FUN_144a7fc42(local_f8);
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d21bc FUN_1458d21bc body=380 status=ok
// SIG undefined FUN_1458d21bc(void)

longlong * FUN_1458d21bc(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar4 != 0) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_1458d2217;
  }
  lVar4 = 0;
LAB_1458d2217:
  local_50 = lVar4;
  lVar5 = (**(code **)(*(longlong *)*param_3 + 0x10))();
  if ((lVar4 != 0) && (lVar5 != 0)) {
    lVar5 = FUN_14130060e(DAT_14cb0d2b0,lVar5);
    local_38[0] = *(undefined1 *)(lVar5 + 0x80);
    local_58 = (longlong *)FUN_1458d2339(local_38,&local_50);
    local_60 = local_58 + 2;
    FUN_1458d23ac(&local_60);
    local_48 = FUN_148de19bc;
    local_40 = 0;
    FUN_1458d244e(local_38,&local_60);
    FUN_1448b6402(lVar4 + 0x6eb8,&local_48,local_38);
    FUN_1449db362(local_38);
    plVar3 = local_58;
    *param_2 = (longlong)local_60;
    param_2[1] = (longlong)local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
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
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458d2339 FUN_1458d2339 body=115 status=ok
// SIG undefined FUN_1458d2339(void)

undefined8 * FUN_1458d2339(char *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14b99fbd0;
  uVar2 = *param_2;
  cVar1 = *param_1;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(char *)(puVar3 + 7) = cVar1 * '\x02';
  puVar3[2] = &PTR_FUN_14b99fbf0;
  puVar3[8] = 0;
  FUN_14485c47a(puVar3 + 8,uVar2);
  return puVar3;
}



// FUNCTION 1458d23ac FUN_1458d23ac body=162 status=ok
// SIG undefined FUN_1458d23ac(void)

void FUN_1458d23ac(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1458d23eb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1458d23eb;
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
LAB_1458d23eb:
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
                    /* WARNING: Could not recover jumptable at 0x0001458d244a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458d244e FUN_1458d244e body=300 status=ok
// SIG undefined FUN_1458d244e(void)

longlong * FUN_1458d244e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b99fc10;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b99fc10;
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



// FUNCTION 1458d257a FUN_1458d257a body=38 status=ok
// SIG undefined FUN_1458d257a(void)

undefined8 FUN_1458d257a(undefined8 param_1,int param_2)

{
  FUN_1458d25a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d25a0 FUN_1458d25a0 body=191 status=ok
// SIG undefined FUN_1458d25a0(void)

void FUN_1458d25a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ec6a90;
  param_1[1] = &PTR_LAB_149ec6b80;
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
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x0001458d265b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458d2674 FUN_1458d2674 body=73 status=ok
// SIG undefined FUN_1458d2674(void)

void FUN_1458d2674(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (param_2 != 0) {
    FUN_140721fbe(param_1 + 0xa8,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d26be FUN_1458d26be body=439 status=ok
// SIG undefined FUN_1458d26be(void)

void FUN_1458d26be(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x3008;
  local_28 = 0;
  FUN_1446ef920();
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
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  FUN_1458d2876(local_20,&local_60,local_40,local_48);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d2876 FUN_1458d2876 body=225 status=ok
// SIG undefined FUN_1458d2876(void)

void FUN_1458d2876(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) goto LAB_1458d2931;
  uVar1 = FUN_1403ec9c0();
  plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
  if (((plVar2 == (longlong *)0x0) || (*param_2 == 0)) || (0xfffffffd < (int)param_2[1] - 1U))
  goto LAB_1458d2931;
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2);
  if (plVar2 == (longlong *)0x0) {
LAB_1458d2954:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_14049e780();
    if ((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_1458d2954;
    plVar5 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30) {
      plVar5 = plVar2;
    }
  }
  local_48 = *param_2;
  local_40 = (undefined4)param_2[1];
  local_38 = 0;
  FUN_1458d2958(plVar5,&local_48,param_3,param_4);
LAB_1458d2931:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d2958 FUN_1458d2958 body=234 status=ok
// SIG undefined FUN_1458d2958(void)

void FUN_1458d2958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_1458d2a44(param_2);
  if ((lVar5 != 0) && (lVar3 = *(longlong *)(lVar5 + 0x18), lVar3 != 0)) {
    plVar4 = *(longlong **)(lVar5 + 0x20);
    local_40 = lVar3;
    if (plVar4 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      FUN_1458d2ad6(param_1,&local_40,param_3,param_4);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      local_38 = plVar4;
      FUN_1458d2ad6(param_1,&local_40,param_3,param_4);
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
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d2a44 FUN_1458d2a44 body=122 status=ok
// SIG undefined FUN_1458d2a44(void)

longlong FUN_1458d2a44(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_1458d2ac0(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d2ac0 FUN_1458d2ac0 body=22 status=ok
// SIG undefined FUN_1458d2ac0(void)

undefined8 FUN_1458d2ac0(int *param_1)

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
  
  plVar4 = DAT_14cb94a48;
  if (DAT_14cb94a48 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb94a48 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb94a48 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb94a48[0x3a] <= *(int *)((longlong)DAT_14cb94a48 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb94a48 + 0x300))(DAT_14cb94a48);
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



// FUNCTION 1458d2ad6 FUN_1458d2ad6 body=272 status=ok
// SIG undefined FUN_1458d2ad6(void)

void FUN_1458d2ad6(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  
  if ((longlong)*(int *)(param_1 + 0x278) != 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x270) + 0x10);
    lVar3 = (longlong)*(int *)(param_1 + 0x278) * 0x28;
    do {
      if (((*(longlong *)(piVar4 + -4) == *param_2) && (piVar4[1] != 0 || *piVar4 != 0)) &&
         (lVar2 = FUN_14479d2ce(piVar4), lVar2 == param_4)) {
        if (piVar4 != (int *)&DAT_00000010) {
          return;
        }
        break;
      }
      piVar4 = piVar4 + 10;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x278);
  *(uint *)(param_1 + 0x278) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x27c) < iVar1 + 1U) {
    FUN_1458d2c3e((longlong *)(param_1 + 0x270),iVar1);
  }
  FUN_1458d2be6(*(longlong *)(param_1 + 0x270) + (longlong)iVar1 * 0x28,param_2,param_4,param_3);
  if (*(char *)(*param_2 + 0x148) == '\x01') {
    FUN_148d097b2((longlong)iVar1 * 0x28 + *(longlong *)(param_1 + 0x270),
                  *(undefined8 *)(param_1 + 0x1b0));
  }
  FUN_1447f69b6(param_1 + 0x248);
  return;
}



// FUNCTION 1458d2be6 FUN_1458d2be6 body=88 status=ok
// SIG undefined FUN_1458d2be6(void)

undefined8 *
FUN_1458d2be6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,param_3);
  param_1[3] = 0;
  FUN_14485c47a(param_1 + 3,param_4);
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 1458d2c3e FUN_1458d2c3e body=147 status=ok
// SIG undefined FUN_1458d2c3e(void)

void FUN_1458d2c3e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458d2ce0 FUN_1458d2ce0 body=45 status=ok
// SIG undefined FUN_1458d2ce0(void)

undefined8 FUN_1458d2ce0(undefined8 param_1,int param_2)

{
  FUN_1458d2d0e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1458d2d0e FUN_1458d2d0e body=69 status=ok
// SIG undefined FUN_1458d2d0e(void)

void FUN_1458d2d0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b499c00;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458d2d53 FUN_1458d2d53 body=54 status=ok
// SIG undefined FUN_1458d2d53(void)

void FUN_1458d2d53(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458d2d8a(puVar1);
  *puVar1 = &PTR_FUN_14aef0d90;
  puVar1[6] = &PTR_FUN_14aef10a0;
  puVar1[7] = &PTR_FUN_14aef10c0;
  return;
}



// FUNCTION 1458d2d8a FUN_1458d2d8a body=673 status=ok
// SIG undefined FUN_1458d2d8a(void)

undefined8 * FUN_1458d2d8a(undefined8 *param_1)

{
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14aeff2c0;
  param_1[6] = &PTR_FUN_14aeff5d0;
  param_1[7] = &PTR_FUN_14aeff5f0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 100;
  param_1[0x22] = 0;
  param_1[0x24] = &PTR_LAB_149f36510;
  param_1[0x25] = &LAB_1484d40b6;
  param_1[0x20] = FUN_146bd3274;
  param_1[0x2a] = 0;
  param_1[0x2c] = &PTR_LAB_149f36510;
  param_1[0x2d] = &LAB_1484d40ba;
  param_1[0x28] = FUN_146bd3274;
  param_1[0x32] = 0;
  param_1[0x34] = &PTR_LAB_14aefe440;
  param_1[0x35] = param_1;
  param_1[0x30] = &LAB_1484d40be;
  param_1[0x3a] = 0;
  param_1[0x3c] = &PTR_LAB_14aefe460;
  param_1[0x3d] = param_1;
  param_1[0x38] = &LAB_1484d40e6;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3ff00000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3ff00000;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  FUN_1458d302c(param_1 + 0x54);
  FUN_1458d302c(param_1 + 0x72);
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  FUN_1458d302c(param_1 + 0x92);
  FUN_1458d302c(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xce) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x674) = 0;
  *(undefined1 *)((longlong)param_1 + 0x676) = 0;
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x73c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0x1010000;
  FUN_141300fc0(param_1 + 0xfa);
  FUN_141300fc0(param_1 + 0x11e);
  FUN_141300fc0(param_1 + 0x142);
  *(undefined1 *)(param_1 + 0x166) = 1;
  return param_1;
}



// FUNCTION 1458d302c FUN_1458d302c body=175 status=ok
// SIG undefined FUN_1458d302c(void)

undefined8 * FUN_1458d302c(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_1402226aa(param_1);
  FUN_1402226aa(param_1 + 10);
  FUN_1402226aa(param_1 + 0x14);
  return param_1;
}



// FUNCTION 1458d30e4 FUN_1458d30e4 body=155 status=ok
// SIG undefined FUN_1458d30e4(void)

void FUN_1458d30e4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (((((*(byte *)(param_2 + 0x28) & 1) != 0) &&
       (lVar2 = *(longlong *)(param_1 + 0x180), lVar2 != 0)) &&
      (*(int *)(param_1 + 0x188) - 1U < 0xfffffffe)) && (*(int *)(param_1 + 0x178) == 0)) {
    *(undefined4 *)(param_1 + 0x178) = 1;
    if (*(int *)(param_1 + 0x17c) == 0) {
      FUN_1487d451a(param_1 + 0x170);
      lVar2 = *(longlong *)(param_1 + 0x180);
    }
    plVar1 = *(longlong **)(param_1 + 0x170);
    *plVar1 = lVar2;
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(param_1 + 0x188);
    plVar1[2] = 0;
    if (*(longlong *)(param_1 + 0x180) != 0) {
      *(undefined8 *)(param_1 + 400) = 0;
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  return;
}



// FUNCTION 1458d3180 FUN_1458d3180 body=103 status=ok
// SIG undefined FUN_1458d3180(void)

ulonglong FUN_1458d3180(longlong param_1)

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
LAB_1458d31ca:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1458d31ca;
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



// FUNCTION 1458d31e8 FUN_1458d31e8 body=94 status=ok
// SIG undefined FUN_1458d31e8(void)

void FUN_1458d31e8(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = &PTR_LAB_14a5aa530;
  local_48 = FUN_143382e76;
  local_20 = param_1;
  FUN_1407461b0(1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d3247 FUN_1458d3247 body=536 status=ok
// SIG undefined FUN_1458d3247(void)

void FUN_1458d3247(undefined8 param_1)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
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
  longlong local_38;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb02a29 == '\x01') {
    FUN_1477f57ae(&local_70,&DAT_14cb02978);
  }
  else {
    FUN_145be17f3(&local_70);
  }
  local_78 = param_1;
  FUN_1458d3460(DAT_14c872ce0,L"ScalabilityGroups",L"sg.ResolutionQuality",local_70);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.ViewDistanceQuality",local_6c);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.AntiAliasingQuality",local_68);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.ShadowQuality",local_64);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.GlobalIlluminationQuality",local_60);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.ReflectionQuality",local_5c);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.PostProcessQuality",local_58);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.TextureQuality",local_54);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.EffectsQuality",local_50);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.FoliageQuality",local_4c);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.ShadingQuality",local_48);
  local_78 = param_1;
  FUN_141301e58(DAT_14c872ce0,L"ScalabilityGroups",L"sg.LandscapeQuality",local_44);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d3460 FUN_1458d3460 body=169 status=ok
// SIG undefined FUN_1458d3460(void)

void FUN_1458d3460(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_868 [32];
  undefined1 local_848 [2056];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_868;
  lVar1 = FUN_14052bcbc(param_1,param_5);
  if (lVar1 != 0) {
    FUN_141301ee6(local_848,L"%.*g",9,(double)param_4);
    FUN_1410abc54(lVar1,param_2,param_3,local_848);
  }
  if ((local_40 ^ (ulonglong)auStack_868) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d350a FUN_1458d350a body=179 status=ok
// SIG undefined FUN_1458d350a(void)

bool FUN_1458d350a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
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



// FUNCTION 1458d35be FUN_1458d35be body=11 status=ok
// SIG undefined FUN_1458d35be(void)

undefined8 * FUN_1458d35be(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



// FUNCTION 1458d35ca FUN_1458d35ca body=15 status=ok
// SIG undefined FUN_1458d35ca(void)

undefined8 FUN_1458d35ca(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x38));
  }
  return 0;
}



// FUNCTION 1458d35da FUN_1458d35da body=116 status=ok
// SIG undefined FUN_1458d35da(void)

undefined8 * FUN_1458d35da(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    FUN_1400b22c2(param_2,&DAT_149e02088);
  }
  else {
    puVar2 = (undefined8 *)FUN_1447a1f4a(*param_1 + 0x28);
    *param_2 = 0;
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 1458d365c FUN_1458d365c body=40 status=ok
// SIG undefined FUN_1458d365c(void)

undefined8 FUN_1458d365c(undefined8 param_1,int param_2)

{
  FUN_1458d3684();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d3684 FUN_1458d3684 body=71 status=ok
// SIG undefined FUN_1458d3684(void)

void FUN_1458d3684(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b827570;
  FUN_141302908(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458d36cb FUN_1458d36cb body=87 status=ok
// SIG undefined FUN_1458d36cb(void)

void FUN_1458d36cb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458d3722(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7fb020;
  puVar1[7] = &PTR_FUN_14b7fb2f0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  FUN_141302974(puVar1 + 0x15,0);
  return;
}



// FUNCTION 1458d3722 FUN_1458d3722 body=62 status=ok
// SIG undefined FUN_1458d3722(void)

undefined8 * FUN_1458d3722(undefined8 *param_1)

{
  FUN_14131b9ca();
  *param_1 = &PTR_FUN_14b2a3180;
  param_1[7] = &PTR_FUN_14b2a3450;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 1458d376c FUN_1458d376c body=303 status=ok
// SIG undefined FUN_1458d376c(void)

longlong * FUN_1458d376c(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1400ead26();
  *param_1 = (longlong)&PTR_FUN_14aa38500;
  param_1[5] = (longlong)&PTR_LAB_14aa38af0;
  param_1[6] = (longlong)&PTR_LAB_14aa38b30;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cd) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x43480000;
  *(undefined1 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x57) = 0x41200000;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  iVar1 = FUN_141302b5a(2);
  if (iVar1 != 0x20) {
    (**(code **)(*param_1 + 0x5e0))(param_1,iVar1);
  }
  iVar1 = FUN_141302b5a(5);
  if (iVar1 != 0x20) {
    (**(code **)(*param_1 + 0x5e0))(param_1,iVar1);
  }
  iVar1 = FUN_141302b5a(6);
  if (iVar1 != 0x20) {
    (**(code **)(*param_1 + 0x5e0))(param_1,iVar1);
  }
  iVar1 = FUN_141302b5a(7);
  if (iVar1 != 0x20) {
    (**(code **)(*param_1 + 0x5e0))(param_1,iVar1);
  }
  uVar4 = 0;
  if (0 < (int)param_1[0x59]) {
    lVar3 = 0;
    do {
      uVar2 = FUN_141302a0a(*(undefined1 *)(param_1[0x58] + lVar3));
      uVar2 = (uint)uVar4 | 1 << (uVar2 & 0x1f);
      uVar4 = (ulonglong)uVar2;
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < (int)param_1[0x59]);
    uVar4 = (ulonglong)uVar2;
  }
  param_1[0x5a] = uVar4;
  return param_1;
}



// FUNCTION 1458d389c FUN_1458d389c body=88 status=ok
// SIG undefined FUN_1458d389c(void)

void FUN_1458d389c(longlong *param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + lVar3) == *param_2) {
        if ((int)lVar3 != -1) {
          return;
        }
        break;
      }
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458d38f4(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(char *)(lVar2 + lVar4) = *param_2;
  return;
}



// FUNCTION 1458d38f4 FUN_1458d38f4 body=124 status=ok
// SIG undefined FUN_1458d38f4(void)

void FUN_1458d38f4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
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
    iVar3 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar3) {
      iVar5 = iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458d3970 FUN_1458d3970 body=40 status=ok
// SIG undefined FUN_1458d3970(void)

undefined8 FUN_1458d3970(undefined8 param_1,int param_2)

{
  thunk_FUN_1458d399e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d3998 thunk_FUN_1458d399e body=5 status=ok
// SIG undefined thunk_FUN_1458d399e(void)

void thunk_FUN_1458d399e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b425280;
  param_1[5] = &PTR_FUN_14b425560;
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458d399e FUN_1458d399e body=95 status=ok
// SIG undefined FUN_1458d399e(void)

void FUN_1458d399e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b425280;
  param_1[5] = &PTR_FUN_14b425560;
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458d39fe FUN_1458d39fe body=62 status=ok
// SIG undefined FUN_1458d39fe(void)

void FUN_1458d39fe(longlong param_1)

{
  FUN_141302ef4();
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    FUN_14121574a(param_1,0,0,1);
    return;
  }
  return;
}



// FUNCTION 1458d3a3c FUN_1458d3a3c body=13 status=ok
// SIG undefined FUN_1458d3a3c(void)

void FUN_1458d3a3c(longlong param_1)

{
  FUN_1458d3a4a(param_1 + 0x10,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1458d3a4a FUN_1458d3a4a body=63 status=ok
// SIG undefined FUN_1458d3a4a(void)

void FUN_1458d3a4a(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x58) = 0;
    if (*(longlong *)(param_2 + 0x50) != 0) {
      FUN_1400020a8();
    }
    FUN_1400fd330(param_2 + 0x10);
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 1458d3a8a FUN_1458d3a8a body=192 status=ok
// SIG undefined FUN_1458d3a8a(void)

void FUN_1458d3a8a(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xb78))(param_1,local_1c);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"BroadcastLevelUp_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xb80))(param_1,local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d3b50 FUN_1458d3b50 body=46 status=ok
// SIG undefined FUN_1458d3b50(void)

void FUN_1458d3b50(longlong param_1,undefined4 param_2)

{
  FUN_1458d3b7e(param_1 + 0x3f98);
  FUN_1401861f4(param_1 + 0x3fa8,param_2);
  return;
}



// FUNCTION 1458d3b7e FUN_1458d3b7e body=61 status=ok
// SIG undefined FUN_1458d3b7e(void)

void FUN_1458d3b7e(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d3bc2 FUN_1458d3bc2 body=228 status=ok
// SIG undefined FUN_1458d3bc2(void)

longlong FUN_1458d3bc2(void)

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
  if (DAT_14c99c6d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145985df8;
    local_38 = &LAB_146fa0257;
    local_40 = FUN_1458c1d73;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2f0;
    FUN_14081cfa3(L"/Script/StaticMeshDescription",L"StaticMeshDescription",&DAT_14c99c6d8,
                  FUN_14628f922);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99c6d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d3cae FUN_1458d3cae body=228 status=ok
// SIG undefined FUN_1458d3cae(void)

longlong FUN_1458d3cae(void)

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
  if (DAT_14c99f7e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14706004a;
    local_40 = FUN_14629c978;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementRuntime",L"TypedElementAssetDataInterface",&DAT_14c99f7e8,
                  FUN_14629c956);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f7e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d3d9a FUN_1458d3d9a body=228 status=ok
// SIG undefined FUN_1458d3d9a(void)

longlong FUN_1458d3d9a(void)

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
  if (DAT_14c99f810 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14706051a;
    local_40 = FUN_14629ca50;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementRuntime",L"TypedElementHierarchyInterface",&DAT_14c99f810,
                  FUN_14629ca2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f810;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d3e86 FUN_1458d3e86 body=228 status=ok
// SIG undefined FUN_1458d3e86(void)

longlong FUN_1458d3e86(void)

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
  if (DAT_14c99f838 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147060939;
    local_40 = FUN_14629cb28;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementRuntime",L"TypedElementObjectInterface",&DAT_14c99f838,
                  FUN_14629cb06);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f838;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d3f70 FUN_1458d3f70 body=228 status=ok
// SIG undefined FUN_1458d3f70(void)

longlong FUN_1458d3f70(void)

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
  if (DAT_14c9a4f80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1470c7a79;
    local_40 = FUN_1462ab806;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxConstructContentProvider",&DAT_14c9a4f80,&DAT_1470c7a78)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a4f80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d405c FUN_1458d405c body=228 status=ok
// SIG undefined FUN_1458d405c(void)

longlong FUN_1458d405c(void)

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
  if (DAT_14caa8d60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14632b264;
    local_38 = &LAB_14749039b;
    local_40 = FUN_14632b29a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"FieldNodeInt",&DAT_14caa8d60,&DAT_14749039a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8d60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4146 FUN_1458d4146 body=228 status=ok
// SIG undefined FUN_1458d4146(void)

longlong FUN_1458d4146(void)

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
  if (DAT_14caa9980 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1474af4a9;
    local_40 = &LAB_145b2124c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GeometryCollectionEngine",L"GeometryCollectionISMPoolComponent",
                  &DAT_14caa9980,&DAT_1474af4a8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa9980;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4232 FUN_1458d4232 body=228 status=ok
// SIG undefined FUN_1458d4232(void)

longlong FUN_1458d4232(void)

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
  if (DAT_14cad5aa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147a5b021;
    local_40 = &LAB_1463c2e44;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x670;
    FUN_14081cfa3(L"/Script/Engine",L"DebugDrawComponent",&DAT_14cad5aa8,&DAT_147a5b020);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad5aa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4322 FUN_1458d4322 body=228 status=ok
// SIG undefined FUN_1458d4322(void)

longlong FUN_1458d4322(void)

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
  if (DAT_14cab6260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_14769f9c5;
    local_40 = FUN_1417a7a23;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"WeightAndEasingEvaluatorSystem",&DAT_14cab6260,
                  &DAT_14769f9c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d440e FUN_1458d440e body=228 status=ok
// SIG undefined FUN_1458d440e(void)

longlong FUN_1458d440e(void)

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
  if (DAT_14cabbe60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146363562;
    local_38 = &LAB_1477f673d;
    local_40 = FUN_1463638fe;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieSceneCapture",L"MovieSceneAudioCaptureProtocolBase",&DAT_14cabbe60,
                  &DAT_1477f673c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabbe60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d44fa FUN_1458d44fa body=228 status=ok
// SIG undefined FUN_1458d44fa(void)

longlong FUN_1458d44fa(void)

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
  if (DAT_14cabbe48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146363562;
    local_38 = &LAB_1477f6739;
    local_40 = FUN_1463638c8;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieSceneCapture",L"MovieSceneImageCaptureProtocolBase",&DAT_14cabbe48,
                  &DAT_1477f6738);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabbe48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d45e4 FUN_1458d45e4 body=228 status=ok
// SIG undefined FUN_1458d45e4(void)

longlong FUN_1458d45e4(void)

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
  if (DAT_14cabc678 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f0bcc;
    local_38 = &LAB_1478128f2;
    local_40 = &LAB_1460d71db;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x9f0;
    FUN_14081cfa3(L"/Script/MediaAssets",L"MediaSoundComponent",&DAT_14cabc678,FUN_1463664b8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabc678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d46d4 FUN_1458d46d4 body=228 status=ok
// SIG undefined FUN_1458d46d4(void)

longlong FUN_1458d46d4(void)

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
  if (DAT_14cac1e60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147879231;
    local_40 = &LAB_1459be4ee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"Interface_PreviewMeshProvider",&DAT_14cac1e60,&DAT_147879230);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1e60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d47c0 FUN_1458d47c0 body=228 status=ok
// SIG undefined FUN_1458d47c0(void)

longlong FUN_1458d47c0(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac5d70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_147887c5d;
    local_40 = &LAB_145877470;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleTypeDataBase",&DAT_14cac5d70,&DAT_147887c5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5d70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d48aa FUN_1458d48aa body=228 status=ok
// SIG undefined FUN_1458d48aa(void)

longlong FUN_1458d48aa(void)

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
  if (DAT_14cacf0c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14798ecdf;
    local_40 = FUN_1463b0539;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"CameraLensEffectInterface",&DAT_14cacf0c0,FUN_1463b0512);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacf0c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4994 FUN_1458d4994 body=228 status=ok
// SIG undefined FUN_1458d4994(void)

longlong FUN_1458d4994(void)

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
  if (DAT_14cad1350 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1479dd2ba;
    local_40 = &LAB_145d0cf5e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x3a0;
    FUN_14081cfa3(L"/Script/Engine",L"ForceFeedbackComponent",&DAT_14cad1350,FUN_1463b75aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1350;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4a7e FUN_1458d4a7e body=228 status=ok
// SIG undefined FUN_1458d4a7e(void)

longlong FUN_1458d4a7e(void)

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
  if (DAT_14cad4238 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580f4ee;
    local_38 = &LAB_147a3f532;
    local_40 = FUN_1417c3525;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x178;
    FUN_14081cfa3(L"/Script/Engine",L"CurveLinearColorAtlas",&DAT_14cad4238,FUN_1463c16c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad4238;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4b68 FUN_1458d4b68 body=228 status=ok
// SIG undefined FUN_1458d4b68(void)

longlong FUN_1458d4b68(void)

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
  if (DAT_14cad7ee0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147a86cfa;
    local_40 = FUN_1463c6249;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"TypedElementWorldInterface",&DAT_14cad7ee0,FUN_1463c6222);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7ee0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4c52 FUN_1458d4c52 body=228 status=ok
// SIG undefined FUN_1458d4c52(void)

longlong FUN_1458d4c52(void)

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
  if (DAT_14cadaa20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463c9dde;
    local_38 = &LAB_147aa3625;
    local_40 = FUN_1463ca217;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayerSaveGame",&DAT_14cadaa20,FUN_1463ca1f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadaa20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4d3c FUN_1458d4d3c body=228 status=ok
// SIG undefined FUN_1458d4d3c(void)

longlong FUN_1458d4d3c(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb10e78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1458f15f0;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147db4041;
    local_40 = FUN_14640f573;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x12000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/Engine",L"DataLayer",&DAT_14cb10e78,FUN_14640f54c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb10e78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4e28 FUN_1458d4e28 body=228 status=ok
// SIG undefined FUN_1458d4e28(void)

longlong FUN_1458d4e28(void)

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
  if (DAT_14cb1a460 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458bba18;
    local_38 = &LAB_147e195dd;
    local_40 = &LAB_146417b7c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"GbxPreviewComponent",&DAT_14cb1a460,FUN_146417b5a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a460;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4f12 FUN_1458d4f12 body=228 status=ok
// SIG undefined FUN_1458d4f12(void)

longlong FUN_1458d4f12(void)

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
  if (DAT_14cb1b9a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b5764;
    local_38 = &LAB_147e31d85;
    local_40 = &LAB_14641cff9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x680;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavBoxComponent",&DAT_14cb1b9a8,&DAT_147e31d84);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b9a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d4ffe FUN_1458d4ffe body=228 status=ok
// SIG undefined FUN_1458d4ffe(void)

longlong FUN_1458d4ffe(void)

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
  if (DAT_14cb25708 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_147f75f27;
    local_40 = &LAB_145d25b15;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxAudio",L"NexusConfigStore_WwiseObjects",&DAT_14cb25708,&DAT_147f75f26
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb25708;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d50ea FUN_1458d50ea body=228 status=ok
// SIG undefined FUN_1458d50ea(void)

longlong FUN_1458d50ea(void)

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
  if (DAT_14cb29228 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141116d1e;
    local_38 = &LAB_147fcf4ab;
    local_40 = FUN_14645741b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"BlendCameraNode",&DAT_14cb29228,&DAT_147fcf4aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29228;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d51d4 FUN_1458d51d4 body=228 status=ok
// SIG undefined FUN_1458d51d4(void)

longlong FUN_1458d51d4(void)

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
  if (DAT_14cb43350 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145959fba;
    local_38 = &LAB_1481e8e95;
    local_40 = &LAB_145bcb6e7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/Niagara",L"AsyncNiagaraCaptureSimCache",&DAT_14cb43350,FUN_146479c4a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb43350;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d52c0 FUN_1458d52c0 body=228 status=ok
// SIG undefined FUN_1458d52c0(void)

longlong FUN_1458d52c0(void)

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
  if (DAT_14cb464f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a9566;
    local_38 = &LAB_14826111d;
    local_40 = &LAB_1459a3fd8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x290;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonActivatableWidgetContainerBase",&DAT_14cb464f0,
                  FUN_146484d5e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb464f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d53aa FUN_1458d53aa body=228 status=ok
// SIG undefined FUN_1458d53aa(void)

longlong FUN_1458d53aa(void)

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
  if (DAT_14cb46c58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1483e09f4;
    local_40 = FUN_14183ce56;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x4a8;
    FUN_14081cfa3(L"/Script/Water",L"BuoyancyManager",&DAT_14cb46c58,FUN_146485ee6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46c58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5494 FUN_1458d5494 body=228 status=ok
// SIG undefined FUN_1458d5494(void)

longlong FUN_1458d5494(void)

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
  if (DAT_14cb47150 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1483e7087;
    local_40 = &LAB_1460657d3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3a0;
    FUN_14081cfa3(L"/Script/Water",L"WaterBodyIsland",&DAT_14cb47150,FUN_146487282);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb47150;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5580 FUN_1458d5580 body=228 status=ok
// SIG undefined FUN_1458d5580(void)

longlong FUN_1458d5580(void)

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
  if (DAT_14cb4a990 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458cc12a;
    local_38 = &LAB_14840d1e7;
    local_40 = &LAB_146111e9a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"AnyButtonInputBehavior",&DAT_14cb4a990,
                  &DAT_14840d1e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a990;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d566c FUN_1458d566c body=228 status=ok
// SIG undefined FUN_1458d566c(void)

longlong FUN_1458d566c(void)

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
  if (DAT_14cb4c838 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f23b4;
    local_38 = &LAB_1484caf11;
    local_40 = FUN_1464930bb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"SingleSelectionMeshEditingToolBuilder",
                  &DAT_14cb4c838,&DAT_1484caf10);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c838;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5758 FUN_1458d5758 body=228 status=ok
// SIG undefined FUN_1458d5758(void)

longlong FUN_1458d5758(void)

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
  if (DAT_14cb4c850 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145995692;
    local_38 = &LAB_1484caf15;
    local_40 = FUN_14649310f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"SingleSelectionMeshEditingTool",&DAT_14cb4c850,
                  &DAT_1484caf14);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c850;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5842 FUN_1458d5842 body=228 status=ok
// SIG undefined FUN_1458d5842(void)

longlong FUN_1458d5842(void)

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
  if (DAT_14cb57f08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_14864bb03;
    local_40 = &LAB_1464bfbd8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x560;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActivityArea",&DAT_14cb57f08,&DAT_14864bb02);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57f08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d592e FUN_1458d592e body=228 status=ok
// SIG undefined FUN_1458d592e(void)

longlong FUN_1458d592e(void)

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
  if (DAT_14cb5c518 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14654aeb8;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464d5456;
    local_38 = &LAB_14868a939;
    local_40 = &LAB_146045d41;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x15b0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDangerZoneCracks",&DAT_14cb5c518,FUN_1464d5d34);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c518;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5a1a FUN_1458d5a1a body=228 status=ok
// SIG undefined FUN_1458d5a1a(void)

longlong FUN_1458d5a1a(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb96ee0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148a68e25;
    local_40 = FUN_14657f142;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxOnline",L"GbxMatchmakingSubsystem",&DAT_14cb96ee0,&DAT_148a68e24);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96ee0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5b06 FUN_1458d5b06 body=228 status=ok
// SIG undefined FUN_1458d5b06(void)

longlong FUN_1458d5b06(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9b328 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14634e584;
    local_28 = &LAB_14634e58a;
    local_38 = &LAB_148b16f5d;
    local_40 = FUN_145c253ea;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/ModelViewViewModel",L"MVVMView",&DAT_14cb9b328,FUN_146597d26);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9b328;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5bf2 FUN_1458d5bf2 body=228 status=ok
// SIG undefined FUN_1458d5bf2(void)

longlong FUN_1458d5bf2(void)

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
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9cf88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148b51df3;
    local_40 = FUN_14659cd20;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000007;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGSubsystem",&DAT_14cb9cf88,&DAT_148b51df2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cf88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5cdc FUN_1458d5cdc body=228 status=ok
// SIG undefined FUN_1458d5cdc(void)

longlong FUN_1458d5cdc(void)

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
  if (DAT_14cba3c18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b60de;
    local_38 = &LAB_148bc18bb;
    local_40 = &LAB_1465bb0ec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x510;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxTrick_Stasis",&DAT_14cba3c18,&DAT_148bc18ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba3c18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5dc6 FUN_1458d5dc6 body=228 status=ok
// SIG undefined FUN_1458d5dc6(void)

longlong FUN_1458d5dc6(void)

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
  if (DAT_14cbaf9e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c4a6f7;
    local_40 = FUN_1465f09a6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIBaseDataCollector",&DAT_14cbaf9e0,&DAT_148c4a6f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaf9e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5eb0 FUN_1458d5eb0 body=228 status=ok
// SIG undefined FUN_1458d5eb0(void)

longlong FUN_1458d5eb0(void)

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
  if (DAT_14cbf5e80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_149010c23;
    local_40 = &LAB_146013b00;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x458;
    FUN_14081cfa3(L"/Script/Lobby",L"LobbyBeaconPlayerState",&DAT_14cbf5e80,FUN_1466723f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf5e80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d5f9a FUN_1458d5f9a body=228 status=ok
// SIG undefined FUN_1458d5f9a(void)

longlong FUN_1458d5f9a(void)

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
  if (DAT_14cbf70a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_149064850;
    local_40 = &LAB_145aff5f7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6e0;
    FUN_14081cfa3(L"/Script/GeometryCache",L"GeometryCacheComponent",&DAT_14cbf70a8,FUN_146676620);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf70a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d6086 FUN_1458d6086 body=228 status=ok
// SIG undefined FUN_1458d6086(void)

longlong FUN_1458d6086(void)

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
  if (DAT_14cc0d030 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1419073aa;
    local_38 = &LAB_14933511a;
    local_40 = &LAB_146720694;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/InterchangeNodes",L"InterchangeTextureNode",&DAT_14cc0d030,FUN_146720672
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0d030;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d6172 FUN_1458d6172 body=228 status=ok
// SIG undefined FUN_1458d6172(void)

longlong FUN_1458d6172(void)

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
  if (DAT_14cc0ef90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14119ce84;
    local_38 = &LAB_14937b0de;
    local_40 = &LAB_14672701e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1d0;
    FUN_14081cfa3(L"/Script/InterchangeFactoryNodes",L"InterchangeActorFactoryNode",&DAT_14cc0ef90,
                  FUN_146726ffc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0ef90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d625e FUN_1458d625e body=228 status=ok
// SIG undefined FUN_1458d625e(void)

longlong FUN_1458d625e(void)

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
  if (DAT_14cc14738 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14671c336;
    local_38 = &LAB_1493d9d5d;
    local_40 = FUN_14672df51;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/InterchangeImport",L"InterchangeActorFactory",&DAT_14cc14738,
                  &DAT_1493d9d5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc14738;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d6348 FUN_1458d6348 body=228 status=ok
// SIG undefined FUN_1458d6348(void)

longlong FUN_1458d6348(void)

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
  if (DAT_14cc14af0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14581f52c;
    local_38 = &LAB_1493e7a11;
    local_40 = FUN_14672e736;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/InterchangePipelines",L"InterchangeGenericCommonMeshesProperties",
                  &DAT_14cc14af0,&DAT_1493e7a10);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc14af0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d6432 FUN_1458d6432 body=228 status=ok
// SIG undefined FUN_1458d6432(void)

longlong FUN_1458d6432(void)

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
  if (DAT_14cc14b08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14581f52c;
    local_38 = &LAB_1493e7a7d;
    local_40 = FUN_14672e7c8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x158;
    FUN_14081cfa3(L"/Script/InterchangePipelines",
                  L"InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties",&DAT_14cc14b08,
                  &DAT_1493e7a7c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc14b08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d6518 FUN_1458d6518 body=125 status=ok
// SIG undefined FUN_1458d6518(void)

undefined8 * FUN_1458d6518(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1458d6596();
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



// FUNCTION 1458d6596 FUN_1458d6596 body=150 status=ok
// SIG undefined FUN_1458d6596(void)

longlong * FUN_1458d6596(longlong *param_1,longlong *param_2)

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



// FUNCTION 1458d662c FUN_1458d662c body=40 status=ok
// SIG undefined FUN_1458d662c(void)

undefined8 FUN_1458d662c(undefined8 param_1,int param_2)

{
  FUN_1458d6654();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d6654 FUN_1458d6654 body=398 status=ok
// SIG undefined FUN_1458d6654(void)

void FUN_1458d6654(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b272610;
  param_1[0x72] = &PTR_FUN_14b272cc0;
  param_1[0x73] = &PTR_FUN_14b272d30;
  param_1[0x74] = &PTR_FUN_14b272d60;
  param_1[0x75] = &PTR_FUN_14b272d90;
  param_1[0x76] = &PTR_FUN_14b272e00;
  param_1[0x77] = &PTR_FUN_14b272e30;
  param_1[0x78] = &PTR_FUN_14b272e60;
  param_1[0x79] = &PTR_FUN_14b272ed0;
  param_1[0x7a] = &PTR_FUN_14b272ef0;
  param_1[0x7b] = &PTR_FUN_14b272f10;
  param_1[0x7c] = &PTR_FUN_14b272f60;
  plVar3 = (longlong *)param_1[0x176];
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
  FUN_14063adfa(param_1 + 0x15a);
  FUN_14063ab46(param_1 + 0x13c);
  FUN_1403d7bbc(param_1 + 300);
  FUN_1458d67e2(param_1 + 200);
  FUN_1403d7b38(param_1 + 0xba);
  FUN_1403c48c4(param_1 + 0xab);
  FUN_1403d7d90(param_1 + 0x8a);
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x86);
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1458d67e2 FUN_1458d67e2 body=184 status=ok
// SIG undefined FUN_1458d67e2(void)

void FUN_1458d67e2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b276690;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x59);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x4f);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x45);
  FUN_1403d7c6c(param_1);
  return;
}



// FUNCTION 1458d689a FUN_1458d689a body=40 status=ok
// SIG undefined FUN_1458d689a(void)

undefined8 FUN_1458d689a(undefined8 param_1,int param_2)

{
  FUN_1458d68c2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d68c2 FUN_1458d68c2 body=187 status=ok
// SIG undefined FUN_1458d68c2(void)

void FUN_1458d68c2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5488f0;
  FUN_1458d697d(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d697d(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d697d(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d697d(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x13c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  }
  FUN_140ee3dc0(param_1);
  return;
}



// FUNCTION 1458d697d FUN_1458d697d body=73 status=ok
// SIG undefined FUN_1458d697d(void)

void FUN_1458d697d(longlong param_1,int param_2)

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



// FUNCTION 1458d69c6 FUN_1458d69c6 body=17 status=ok
// SIG undefined FUN_1458d69c6(void)

void FUN_1458d69c6(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458d69d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1458d69e0 FUN_1458d69e0 body=39 status=ok
// SIG undefined FUN_1458d69e0(void)

undefined8 * FUN_1458d69e0(undefined8 *param_1)

{
  FUN_140dbffdc();
  *param_1 = &PTR_FUN_14a3b13c0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1458d6a1a FUN_1458d6a1a body=39 status=ok
// SIG undefined FUN_1458d6a1a(void)

undefined8 * FUN_1458d6a1a(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bcd5df0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1458d6a42 FUN_1458d6a42 body=528 status=ok
// SIG undefined FUN_1458d6a42(void)

longlong * FUN_1458d6a42(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined1 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = (**(code **)(*(longlong *)*param_3 + 0x20))();
  if (lVar3 == 0) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    FUN_1407ae1a6(lVar3,&local_48,&DAT_14cb8c3a8);
    lVar3 = local_48;
    if (local_48 != 0) {
      FUN_1446ddc76(&local_78,"Input",1);
      local_80[0] = FUN_1413030ec(lVar3,&local_78);
      local_68 = param_3[1];
      local_60 = (longlong *)param_3[2];
      if (local_60 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        plVar4 = local_60;
      }
      local_50 = (longlong *)FUN_1458d6c53(&local_68,local_80);
      local_58 = local_50 + 2;
      FUN_1458d6d6a();
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
      lVar3 = local_48;
      local_78 = &LAB_140911d30;
      local_70 = 0;
      FUN_1458d6e0c(&local_68,&local_58);
      FUN_1446ddc76(&local_78,"Input",1);
      FUN_14109b102(lVar3,local_80,&local_78,&local_68);
      FUN_1449db362(&local_68);
      plVar4 = local_50;
      *param_2 = (longlong)local_58;
      param_2[1] = (longlong)local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      goto LAB_1458d6ba7;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1458d6ba7:
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d6c53 FUN_1458d6c53 body=149 status=ok
// SIG undefined FUN_1458d6c53(void)

undefined8 * FUN_1458d6c53(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b99fb00;
  uVar1 = *param_2;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1458d6cea(puVar2 + 2,&local_30,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d6cea FUN_1458d6cea body=128 status=ok
// SIG undefined FUN_1458d6cea(void)

undefined8 * FUN_1458d6cea(undefined8 *param_1,undefined8 *param_2,char param_3)

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
  *param_1 = &PTR_FUN_14b99fb40;
  param_1[6] = *param_2;
  lVar3 = param_2[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14b99fb20;
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



// FUNCTION 1458d6d6a FUN_1458d6d6a body=162 status=ok
// SIG undefined FUN_1458d6d6a(void)

void FUN_1458d6d6a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1458d6da9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1458d6da9;
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
LAB_1458d6da9:
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
                    /* WARNING: Could not recover jumptable at 0x0001458d6e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458d6e0c FUN_1458d6e0c body=300 status=ok
// SIG undefined FUN_1458d6e0c(void)

longlong * FUN_1458d6e0c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
    *puVar5 = &PTR_LAB_14b42a8e0;
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
    *puVar5 = &PTR_FUN_14b99fb60;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b42a8e0;
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
    *puVar5 = &PTR_FUN_14b99fb60;
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



// FUNCTION 1458d6f38 FUN_1458d6f38 body=194 status=ok
// SIG undefined FUN_1458d6f38(void)

void FUN_1458d6f38(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  local_30 = local_38;
  iVar2 = FUN_141303122(param_1 + 0x2968,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
  if (iVar2 != -1) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_2);
    puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar3 = 0;
    puVar3[1] = local_30;
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x2670);
      *(undefined8 **)(param_1 + 0x2670) = puVar3;
      *puVar1 = puVar3;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d6ffc FUN_1458d6ffc body=132 status=ok
// SIG undefined FUN_1458d6ffc(void)

void FUN_1458d6ffc(longlong param_1,int param_2)

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



// FUNCTION 1458d7082 FUN_1458d7082 body=132 status=ok
// SIG undefined FUN_1458d7082(void)

void FUN_1458d7082(longlong param_1,int param_2)

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



// FUNCTION 1458d7108 FUN_1458d7108 body=146 status=ok
// SIG undefined FUN_1458d7108(void)

void FUN_1458d7108(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x160,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x160)) {
      uVar5 = uVar4 / 0x160 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x160,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458d719c FUN_1458d719c body=146 status=ok
// SIG undefined FUN_1458d719c(void)

void FUN_1458d719c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x10c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x10c)) {
      uVar5 = uVar4 / 0x10c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458d7230 FUN_1458d7230 body=147 status=ok
// SIG undefined FUN_1458d7230(void)

void FUN_1458d7230(longlong param_1,int param_2)

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



// FUNCTION 1458d72c4 FUN_1458d72c4 body=147 status=ok
// SIG undefined FUN_1458d72c4(void)

void FUN_1458d72c4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
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



// FUNCTION 1458d7364 FUN_1458d7364 body=148 status=ok
// SIG undefined FUN_1458d7364(void)

undefined8 * FUN_1458d7364(undefined8 *param_1)

{
  FUN_14480568a();
  *(undefined4 *)(param_1 + 0xc4) = 0xffdf959d;
  *param_1 = &PTR_FUN_14afa8c10;
  param_1[5] = &PTR_FUN_14afa9610;
  param_1[6] = &PTR_LAB_14afa9650;
  param_1[0x55] = &PTR_FUN_14afa96a0;
  param_1[0x56] = &PTR_FUN_14afa9720;
  param_1[0x57] = &PTR_FUN_14afa9730;
  param_1[0xc5] = 0x42c80000;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  return param_1;
}



// FUNCTION 1458d73f8 FUN_1458d73f8 body=386 status=ok
// SIG undefined FUN_1458d73f8(void)

void FUN_1458d73f8(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  FUN_140bf96d8(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_148e671ea(param_1 + 0x20,0);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x58;
    lVar4 = *(longlong *)(param_1 + 0x30) + 0x10;
    do {
      FUN_140d9136e(lVar4);
      lVar4 = lVar4 + 0x58;
      lVar3 = lVar3 + -0x58;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    iVar1 = *(int *)(param_1 + 0x104);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x38))) {
      cVar2 = FUN_1403ae288(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x58 + 0x10);
      if (cVar2 != '\0') {
        lVar3 = FUN_14008e0ae(*(longlong *)(param_1 + 0x30) +
                              (longlong)*(int *)(param_1 + 0x104) * 0x58 + 0x10);
        if (*(longlong *)(param_1 + 0xf0) != 0) {
          FUN_14480f766(lVar3 + 0x228);
        }
        *(undefined8 *)(param_1 + 0xf0) = 0;
      }
    }
  }
  FUN_140d9136e(param_1 + 0x40);
  FUN_140d9136e(param_1 + 0x78);
  FUN_140d9136e(param_1 + 0xb0);
  lVar3 = *(longlong *)(param_1 + -0x10);
  if (lVar3 != 0) {
    lVar4 = FUN_1402095ca();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = (**(code **)(*(longlong *)(lVar3 + 0x4a0) + 0x10))(lVar3 + 0x4a0);
      if (lVar4 != 0) {
        if (*(longlong *)(param_1 + 0xf8) != 0) {
          FUN_14480f766(lVar4 + 0x18);
        }
        *(undefined8 *)(param_1 + 0xf8) = 0;
      }
      FUN_1458d757c(lVar3 + 0x3d4,param_1 + -0x30);
    }
  }
  return;
}



// FUNCTION 1458d757c FUN_1458d757c body=96 status=ok
// SIG undefined FUN_1458d757c(void)

void FUN_1458d757c(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == '\x01') {
    FUN_1410d8386(param_1,&local_28);
    cVar1 = FUN_140819828(param_1 + -0x3d4,local_28,param_2);
    *param_1 = cVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d75de FUN_1458d75de body=39 status=ok
// SIG undefined FUN_1458d75de(void)

void FUN_1458d75de(longlong param_1,undefined4 param_2)

{
  FUN_14032a73a();
  FUN_1458d7606(param_1 + 0x2dc0,param_2);
  return;
}



// FUNCTION 1458d7606 FUN_1458d7606 body=185 status=ok
// SIG undefined FUN_1458d7606(void)

void FUN_1458d7606(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == '\0') {
    if ((*(byte **)(param_1 + 0x1a8) != (byte *)0x0) && ((**(byte **)(param_1 + 0x1a8) & 1) != 0)) {
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      FUN_1405f3418(param_1 + 0x188);
      return;
    }
  }
  else if (*(longlong *)(param_1 + 0x180) != 0) {
    lVar1 = FUN_144a79cc8();
    if (lVar1 != 0) {
      *(longlong *)(param_1 + 0x1b0) = param_1;
      uVar2 = FUN_144a79cc8(*(undefined8 *)(param_1 + 0x180));
      FUN_1402eb876(param_1 + 0x188,uVar2);
      lVar1 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x180));
      if ((lVar1 != 0) && (DAT_14cadbee0 == '\x01')) {
        FUN_14082bc44(param_1 + 0x188,lVar1,lVar1 + 0x950);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458d76ca FUN_1458d76ca body=358 status=ok
// SIG undefined FUN_1458d76ca(void)

undefined8 * FUN_1458d76ca(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a573910;
  param_1[5] = &PTR_FUN_14a573f30;
  param_1[6] = &PTR_LAB_14a573f70;
  param_1[0x56] = 0;
  FUN_1458d791c(param_1 + 0x57);
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  FUN_1458d7830(param_1 + 0xdc);
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 2;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  param_1[0x11f] = puVar1;
  param_1[0x11e] = puVar1;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 2;
  *(byte *)((longlong)param_1 + 0x2ac) = *(byte *)((longlong)param_1 + 0x2ac) | 7;
  *(byte *)((longlong)param_1 + 0x9e) = (*(byte *)((longlong)param_1 + 0x9e) & 0xf6) + 1;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 0x20;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  *(byte *)(param_1 + 0x112) = *(byte *)(param_1 + 0x112) & 0xfa | 4;
  param_1[0x11a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0x400;
  return param_1;
}



// FUNCTION 1458d7830 FUN_1458d7830 body=32 status=ok
// SIG undefined FUN_1458d7830(void)

longlong FUN_1458d7830(longlong param_1)

{
  FUN_1458d7850();
  *(undefined4 *)(param_1 + 0x160) = 0x1010101;
  return param_1;
}



// FUNCTION 1458d7850 FUN_1458d7850 body=204 status=ok
// SIG undefined FUN_1458d7850(void)

void FUN_1458d7850(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0xffffffff00000080;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0xffffffff00000080;
  param_1[0x25] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0xffffffff00000080;
  param_1[0x3b] = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  param_1[0x40] = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x4f) = 0xffffffff00000080;
  param_1[0x51] = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0;
  *param_1 = 0;
  param_1[0x16] = 0;
  param_1[0x2c] = 0x41a00000;
  param_1[0x42] = 0x469c4000;
  return;
}



// FUNCTION 1458d791c FUN_1458d791c body=367 status=ok
// SIG undefined FUN_1458d791c(void)

undefined8 * FUN_1458d791c(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_1458d7a8c();
  *param_1 = &PTR_FUN_14a78dfa0;
  *(undefined1 *)(param_1 + 0x18) = 0x83;
  *(byte *)((longlong)param_1 + 0xc1) = *(byte *)((longlong)param_1 + 0xc1) & 0xc0 | 0x20;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  FUN_14109baa4(param_1 + 0x1b);
  FUN_14109baa4(param_1 + 0x2c);
  *(undefined2 *)(param_1 + 0x3d) = 0x300;
  *(undefined8 *)((longlong)param_1 + 0x1ea) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f1) = 0;
  param_1[0x3f] = 0x453b800043480000;
  param_1[0x40] = 0x469c400045bb8000;
  param_1[0x41] = 0x469c4000;
  param_1[0x42] = 0x41f0000000000000;
  param_1[0x43] = 0x3f80000042700000;
  param_1[0x44] = &DAT_3f8000003f800000;
  param_1[0x45] = &DAT_3f8000003f800000;
  param_1[0x46] = &DAT_3f8000003f800000;
  param_1[0x47] = 0x469c40003f800000;
  param_1[0x48] = 0x3dcccccd3f800000;
  param_1[0x49] = 0x3f7333333e99999a;
  fVar1 = (float)(double)param_1[2];
  *(float *)(param_1 + 0x4a) = fVar1;
  fVar2 = *(float *)((longlong)param_1 + 0x2c) + fVar1;
  *(float *)((longlong)param_1 + 0x254) = fVar2;
  param_1[0x4b] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(float *)((longlong)param_1 + 0x264) = fVar1;
  *(float *)(param_1 + 0x4d) = fVar2;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3f800000;
  FUN_14109baa4(param_1 + 0x4e);
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  FUN_14109baa4(param_1 + 0x61);
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  return param_1;
}



// FUNCTION 1458d7a8c FUN_1458d7a8c body=90 status=ok
// SIG undefined FUN_1458d7a8c(void)

undefined8 * FUN_1458d7a8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a78dee8;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xc2700000;
  param_1[2] = 0x4079000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x45610000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_14109baa4(param_1 + 7);
  return param_1;
}



// FUNCTION 1458d7af6 FUN_1458d7af6 body=102 status=ok
// SIG undefined FUN_1458d7af6(void)

void FUN_1458d7af6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  fVar2 = *(float *)((longlong)param_1 + 0xf4);
  if (360.0 <= fVar2) {
    fVar2 = 360.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = cosf(fVar2 * 0.5 * 0.017453292);
  *(float *)(param_1 + 0x1f) = -fVar2;
  return;
}



// FUNCTION 1458d7b5c FUN_1458d7b5c body=40 status=ok
// SIG undefined FUN_1458d7b5c(void)

undefined8 FUN_1458d7b5c(undefined8 param_1,int param_2)

{
  FUN_1458d7b84();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d7b84 FUN_1458d7b84 body=73 status=ok
// SIG undefined FUN_1458d7b84(void)

void FUN_1458d7b84(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd32f20;
  plVar3 = (longlong *)param_1[0xd];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458d7bce thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(void)

{
  FUN_144760e82();
  return;
}



// FUNCTION 1458d7bd4 FUN_1458d7bd4 body=24 status=ok
// SIG undefined FUN_1458d7bd4(void)

void FUN_1458d7bd4(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_1458e33a2(param_1 + 0x4ea0,0);
    return;
  }
  return;
}



// FUNCTION 1458d7bec FUN_1458d7bec body=444 status=ok
// SIG undefined FUN_1458d7bec(void)

void FUN_1458d7bec(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x1838) != 0) && (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x1838);
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar5;
    lVar4 = FUN_144a61814(uVar3,puVar1);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar3,*puVar1);
    }
    *puVar1 = 0;
  }
  if (((*(char *)(param_1 + 0x1dfa) != param_2) && (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) &&
     ((bVar2 = *(byte *)(lVar4 + 0x152), bVar2 == 1 ||
      ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))))) {
    *(char *)(param_1 + 0x1dfa) = param_2;
    lVar4 = param_1 + 0x1920;
    if (param_2 == '\0') {
      if (*(longlong *)(param_1 + 0x1d10) != 0) {
        FUN_140a19d0e(param_1 + 0x1d00,0);
        *(undefined8 *)(&DAT_00001ce8 + param_1) = 0;
        *(undefined8 *)(param_1 + 0x1cf0) = 0;
        *(undefined8 *)(param_1 + 0x1cf8) = 0;
      }
      FUN_14035cf04(param_1 + 0x1e08);
      FUN_14035d552(lVar4);
      if (*(longlong *)(param_1 + 0x1e00) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
    else {
      FUN_140359e06(param_1 + 0x1cd0,param_1);
      FUN_14035ca24(param_1 + 0x1e08,param_1);
      FUN_14035d02e(lVar4,param_1);
      local_40 = &LAB_1487c27cc;
      local_38 = 0;
      FUN_1458d7dbe(lVar4,&local_30,param_1);
      *(undefined8 *)(param_1 + 0x1e00) = local_30;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458d7dbe FUN_1458d7dbe body=254 status=ok
// SIG undefined FUN_1458d7dbe(void)

undefined8
FUN_1458d7dbe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14ac89870;
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
  *local_48 = &PTR_FUN_14b3e9140;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140d0168e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d7ecc FUN_1458d7ecc body=40 status=ok
// SIG undefined FUN_1458d7ecc(void)

undefined8 FUN_1458d7ecc(undefined8 param_1,int param_2)

{
  FUN_1458d7ef4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d7ef4 FUN_1458d7ef4 body=133 status=ok
// SIG undefined FUN_1458d7ef4(void)

void FUN_1458d7ef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7541b0;
  FUN_1413045ef(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1413045ef(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1413045ef(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_1413045ef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458d7f7a FUN_1458d7f7a body=38 status=ok
// SIG undefined FUN_1458d7f7a(void)

undefined8 FUN_1458d7f7a(undefined8 param_1,int param_2)

{
  FUN_1458d7fa0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d7fa0 FUN_1458d7fa0 body=269 status=ok
// SIG undefined FUN_1458d7fa0(void)

void FUN_1458d7fa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8b9400;
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[99] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[99] + 0x10))();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d813a(param_1 + 0x3a);
  FUN_140d4710a(param_1 + 0x2a);
  FUN_140d4710a(param_1 + 0x1a);
  FUN_1458d80ad(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d80ad(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 1458d80ad FUN_1458d80ad body=40 status=ok
// SIG undefined FUN_1458d80ad(void)

void FUN_1458d80ad(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458d80d6(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1458d80d6 FUN_1458d80d6 body=59 status=ok
// SIG undefined FUN_1458d80d6(void)

void FUN_1458d80d6(longlong *param_1)

{
  FUN_1458d8111(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458d8111 FUN_1458d8111 body=41 status=ok
// SIG undefined FUN_1458d8111(void)

void FUN_1458d8111(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458d813a(param_1);
    param_1 = param_1 + 0x138;
  }
  return;
}



// FUNCTION 1458d813a FUN_1458d813a body=301 status=ok
// SIG undefined FUN_1458d813a(void)

void FUN_1458d813a(longlong *param_1)

{
  FUN_1458d8267(param_1[0x24],(int)param_1[0x25]);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9f63b(param_1[0x21],(int)param_1[0x22]);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d82dc(param_1 + 0x14);
  FUN_1458d8294(param_1[0x11],(int)param_1[0x12]);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458d8267 FUN_1458d8267 body=45 status=ok
// SIG undefined FUN_1458d8267(void)

void FUN_1458d8267(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1458d8294 FUN_1458d8294 body=72 status=ok
// SIG undefined FUN_1458d8294(void)

void FUN_1458d8294(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b8b8750;
    if (param_1[0x16] != 0) {
      FUN_1400020a8();
    }
    FUN_140fe7f26(param_1);
    param_1 = param_1 + 0x19;
  }
  return;
}



// FUNCTION 1458d82dc FUN_1458d82dc body=88 status=ok
// SIG undefined FUN_1458d82dc(void)

void FUN_1458d82dc(longlong *param_1)

{
  FUN_1407dde2a(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1407dde2a(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458d8323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1458d8334 FUN_1458d8334 body=226 status=ok
// SIG undefined FUN_1458d8334(void)

longlong * FUN_1458d8334(longlong *param_1)

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
  pcVar13 = FUN_1462b7ef8;
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



// FUNCTION 1458d841c FUN_1458d841c body=138 status=ok
// SIG undefined FUN_1458d841c(void)

undefined1 * FUN_1458d841c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x51;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1458d8418;
}



// FUNCTION 1458d84a6 FUN_1458d84a6 body=148 status=ok
// SIG undefined FUN_1458d84a6(void)

bool FUN_1458d84a6(longlong param_1)

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



// FUNCTION 1458d853c FUN_1458d853c body=171 status=ok
// SIG undefined FUN_1458d853c(void)

void FUN_1458d853c(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  if (*(char *)(param_1 + 0x125) == '\x01') {
    FUN_144259a3a(param_1,0);
  }
  plVar2 = (longlong *)FUN_1400d7050(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1449f3324();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      if (*(char *)((longlong)plVar2 + 0xa99) == '\0') {
        *(undefined1 *)(param_1 + 0x9c) = 0;
      }
      else {
        lVar3 = plVar2[0x153];
        *(char *)(param_1 + 0x9c) = (char)lVar3;
        if ((char)lVar3 == '\x01') {
          cVar1 = (**(code **)(*plVar2 + 0xe48))(plVar2);
          if ((cVar1 != '\0') && (*(char *)(param_1 + 0x98) == '\x01')) {
            *(undefined1 *)(param_1 + 0x124) = 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1458d85e8 FUN_1458d85e8 body=40 status=ok
// SIG undefined FUN_1458d85e8(void)

undefined8 FUN_1458d85e8(undefined8 param_1,int param_2)

{
  FUN_1458d8610();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d8610 FUN_1458d8610 body=922 status=ok
// SIG undefined FUN_1458d8610(void)

void FUN_1458d8610(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b162020;
  FUN_144760e21(param_1[0xe1],*(undefined4 *)(param_1 + 0xe2));
  if (param_1[0xe1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xde],*(undefined4 *)(param_1 + 0xdf));
  if (param_1[0xde] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xdd) == '\x01') {
    *(undefined1 *)(param_1 + 0xdd) = 0;
  }
  if (*(char *)(param_1 + 0xdc) == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 0;
  }
  *(undefined4 *)(param_1 + 0xd9) = 0;
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0xd0);
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  param_1[0xc6] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  if (*(int *)((longlong)param_1 + 0x64c) != 0) {
    FUN_140115c12(param_1 + 200,0);
  }
  param_1[199] = 0;
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  FUN_14588264a(param_1 + 0xbf);
  plVar3 = (longlong *)param_1[0xbe];
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
  FUN_144760e21(param_1[0xba],*(undefined4 *)(param_1 + 0xbb));
  if (param_1[0xba] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb9) = 0;
  if (param_1[0xb8] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0xb0);
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
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  param_1[0x9f] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  if (*(int *)((longlong)param_1 + 0x514) != 0) {
    FUN_140115c12(param_1 + 0xa1,0);
  }
  param_1[0xa0] = 0;
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  param_1[0x9b] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  if (*(int *)((longlong)param_1 + 0x4f4) != 0) {
    FUN_140115c12(param_1 + 0x9d,0);
  }
  param_1[0x9c] = 0;
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x96],*(undefined4 *)(param_1 + 0x97));
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x93],*(undefined4 *)(param_1 + 0x94));
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x8f],*(undefined4 *)(param_1 + 0x90));
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d89b4(param_1);
  return;
}



// FUNCTION 1458d89aa FUN_1458d89aa body=9 status=ok
// SIG undefined FUN_1458d89aa(void)

void FUN_1458d89aa(longlong param_1)

{
  FUN_1458d8a78(param_1 + 0x10);
  return;
}



// FUNCTION 1458d89b4 FUN_1458d89b4 body=50 status=ok
// SIG undefined FUN_1458d89b4(void)

void FUN_1458d89b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8e4840;
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d89e6(param_1);
  return;
}



// FUNCTION 1458d89e6 FUN_1458d89e6 body=105 status=ok
// SIG undefined FUN_1458d89e6(void)

void FUN_1458d89e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8eda80;
  FUN_1458d8a4f(param_1[0x83],*(undefined4 *)(param_1 + 0x84));
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x80] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x80] + 0x10))();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1458d8a4f FUN_1458d8a4f body=40 status=ok
// SIG undefined FUN_1458d8a4f(void)

void FUN_1458d8a4f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1458d8a78 FUN_1458d8a78 body=1175 status=ok
// SIG undefined FUN_1458d8a78(void)

void FUN_1458d8a78(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1629d0;
  plVar3 = (longlong *)param_1[0x7f];
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
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x74] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x77) = 0;
  if (*(int *)((longlong)param_1 + 0x3bc) != 0) {
    FUN_140115c12(param_1 + 0x76,0);
  }
  param_1[0x75] = 0;
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d8f40(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x70];
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
  plVar3 = (longlong *)param_1[0x6d];
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
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x5a] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (*(int *)((longlong)param_1 + 0x2ec) != 0) {
    FUN_140115c12(param_1 + 0x5c,0);
  }
  param_1[0x5b] = 0;
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x57];
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
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x41);
  FUN_1458d8f0f(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d8f8d(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 1458d8f0f FUN_1458d8f0f body=49 status=ok
// SIG undefined FUN_1458d8f0f(void)

void FUN_1458d8f0f(longlong param_1,int param_2)

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



// FUNCTION 1458d8f40 FUN_1458d8f40 body=77 status=ok
// SIG undefined FUN_1458d8f40(void)

void FUN_1458d8f40(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458d8f8d FUN_1458d8f8d body=77 status=ok
// SIG undefined FUN_1458d8f8d(void)

void FUN_1458d8f8d(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458d8fda FUN_1458d8fda body=29 status=ok
// SIG undefined FUN_1458d8fda(void)

void FUN_1458d8fda(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1458d8ff8 FUN_1458d8ff8 body=54 status=ok
// SIG undefined FUN_1458d8ff8(void)

undefined8 * FUN_1458d8ff8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c1100;
  FUN_14581e826(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458d902e FUN_1458d902e body=111 status=ok
// SIG undefined FUN_1458d902e(void)

void FUN_1458d902e(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x668))(param_1,local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d909e FUN_1458d909e body=148 status=ok
// SIG undefined FUN_1458d909e(void)

longlong * FUN_1458d909e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x2650);
  if (lVar2 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x2640);
    lVar2 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2650) = lVar2;
    if (lVar2 == 0) {
      FUN_144a5dc74(param_2);
      goto LAB_1458d90e1;
    }
  }
  plVar1 = *(longlong **)(lVar2 + 0x98);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar2 + 0xa0);
LAB_1458d90e1:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d9134 FUN_1458d9134 body=82 status=ok
// SIG undefined FUN_1458d9134(void)

undefined8 * FUN_1458d9134(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar2 = (**(code **)(*param_2 + 8))(param_2), lVar2 == 0)) {
    lVar2 = 0;
  }
  FUN_14485c47a(param_1,lVar2);
  cVar1 = FUN_14493c216(param_1,0);
  if (cVar1 == '\0') {
    param_1[1] = param_2;
  }
  return param_1;
}



// FUNCTION 1458d9186 FUN_1458d9186 body=231 status=ok
// SIG undefined FUN_1458d9186(void)

longlong * FUN_1458d9186(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x140,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4166a0;
  plVar1 = plVar4 + 2;
  FUN_141306792(plVar1,param_1,param_3);
  plVar4[2] = (longlong)&PTR_FUN_14b416050;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_1458d9270(&local_40,plVar1);
  plVar3 = local_38;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d9270 FUN_1458d9270 body=162 status=ok
// SIG undefined FUN_1458d9270(void)

void FUN_1458d9270(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1458d92af;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1458d92af;
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
LAB_1458d92af:
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
                    /* WARNING: Could not recover jumptable at 0x0001458d930e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458d9312 FUN_1458d9312 body=356 status=ok
// SIG undefined FUN_1458d9312(void)

void FUN_1458d9312(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0xc3769d17;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  FUN_1458d9478(local_20,&local_58,local_40);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d9478 FUN_1458d9478 body=117 status=ok
// SIG undefined FUN_1458d9478(void)

void FUN_1458d9478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  lVar1 = FUN_141306a67("static UGbxCinematicFunctionLibrary::PushPlayerCinematicModeWithReason",
                        param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_141306ba4("static UGbxCinematicFunctionLibrary::PushPlayerCinematicModeWithReason",
                          param_2);
    if (lVar2 != 0) {
      FUN_141306a06(lVar1,lVar2,&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d94fa FUN_1458d94fa body=76 status=ok
// SIG undefined FUN_1458d94fa(void)

void FUN_1458d94fa(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1458d9546(lVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1458d9546 FUN_1458d9546 body=188 status=ok
// SIG undefined FUN_1458d9546(void)

void FUN_1458d9546(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a7c5f6(param_3);
  if (cVar1 == '\0') {
    lVar2 = FUN_1458d9604(param_1,0xffffffff);
    if (lVar2 != 0) {
      cVar1 = FUN_144a7c5f6(param_2);
      uVar3 = param_2;
      if (cVar1 != '\0') {
        uVar3 = param_3;
      }
      cVar1 = FUN_144a7c5f6(param_2);
      if (cVar1 != '\0') {
        param_3 = FUN_140e82300();
      }
      local_40 = local_30;
      local_48 = 2;
      local_50 = 0x40a00000;
      local_58 = param_3;
      FUN_1458d98da(lVar2,local_34,&DAT_14cbcdea0,uVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d9604 FUN_1458d9604 body=95 status=ok
// SIG undefined FUN_1458d9604(void)

undefined8 FUN_1458d9604(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1458d9664();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
    lVar2 = FUN_144a5dd5e();
    if (((*(longlong *)(lVar1 + 0x30) != 0) &&
        (((lVar2 != 0 && (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x10), lVar1 != 0)) &&
         (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = FUN_1458d973e();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1458d9664 FUN_1458d9664 body=121 status=ok
// SIG undefined FUN_1458d9664(void)

longlong FUN_1458d9664(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1400b465c();
  if (lVar2 != 0) {
    if (param_2 == -1) {
      lVar3 = FUN_1458d96de(param_1,lVar2);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar2 = FUN_14119d4d6(lVar2);
      return lVar2;
    }
    if ((longlong)*(int *)(lVar2 + 0x40) != 0) {
      lVar3 = 0;
      while ((lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar3), lVar1 == 0 ||
             (*(int *)(lVar1 + 0xe0) != param_2))) {
        lVar3 = lVar3 + 8;
        if ((longlong)*(int *)(lVar2 + 0x40) * 8 == lVar3) {
          return 0;
        }
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1458d96de FUN_1458d96de body=88 status=ok
// SIG undefined FUN_1458d96de(void)

longlong FUN_1458d96de(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) || (param_2 = FUN_1400b465c(), param_2 != 0)) {
    lVar1 = FUN_1403ca142();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_1458d9736(param_2);
      if (lVar1 != 0) {
        return lVar1;
      }
      return *(longlong *)(param_2 + 0x478);
    }
  }
  return 0;
}



// FUNCTION 1458d9736 FUN_1458d9736 body=8 status=ok
// SIG undefined FUN_1458d9736(void)

undefined8 FUN_1458d9736(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x4b8);
}



// FUNCTION 1458d973e FUN_1458d973e body=105 status=ok
// SIG undefined FUN_1458d973e(void)

void FUN_1458d973e(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458d97f4();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1458d97a8(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d97a8 FUN_1458d97a8 body=76 status=ok
// SIG undefined FUN_1458d97a8(void)

void FUN_1458d97a8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1458d97f4();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1458d97e5;
    }
  }
  lVar2 = 0;
LAB_1458d97e5:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1458d97f4 FUN_1458d97f4 body=228 status=ok
// SIG undefined FUN_1458d97f4(void)

longlong FUN_1458d97f4(void)

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
  if (DAT_14cbb2d80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_1465f42c2;
    local_38 = &LAB_148c5a509;
    local_40 = FUN_1465f6cce;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_OnlineMessage",&DAT_14cbb2d80,
                  &DAT_148c5a508);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2d80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d98da FUN_1458d98da body=166 status=ok
// SIG undefined FUN_1458d98da(void)

int * FUN_1458d98da(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 *local_40;
  undefined8 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &local_2c;
  local_2c = 0;
  local_48 = param_7;
  local_50 = param_6;
  local_58 = param_5;
  FUN_1458d9982(param_1,&local_24);
  if (local_24 == -1) {
    local_24 = -1;
  }
  else {
    FUN_1412099d2(param_1,&DAT_14cbd6ef8);
  }
  *param_2 = local_24;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d9982 FUN_1458d9982 body=309 status=ok
// SIG undefined FUN_1458d9982(void)

undefined8
FUN_1458d9982(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5,undefined4 param_6,undefined1 param_7,undefined8 *param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_198 [40];
  undefined1 local_170 [4];
  undefined8 local_16c;
  undefined1 local_164;
  longlong *local_160;
  undefined4 local_158;
  longlong *local_150;
  undefined4 local_148;
  undefined4 local_f8;
  undefined8 local_e4;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_14125b7f0(local_170);
  plVar2 = local_160;
  local_16c = *param_3;
  plVar1 = (longlong *)*param_4;
  if (local_160 != plVar1) {
    local_160 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_150;
  local_158 = (undefined4)param_4[1];
  plVar1 = (longlong *)*param_5;
  if (local_150 != plVar1) {
    local_150 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_148 = (undefined4)param_5[1];
  local_f8 = param_6;
  local_164 = param_7;
  local_e4 = *param_8;
  FUN_14120969a(param_1,param_2,local_170);
  FUN_140989dc4(local_170);
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d9ace FUN_1458d9ace body=177 status=ok
// SIG undefined FUN_1458d9ace(void)

void FUN_1458d9ace(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  
  *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xef;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) {
    cVar4 = FUN_1403ae288(param_1 + 0xa0);
    if (cVar4 != '\0') {
      lVar2 = FUN_1447210f0(lVar1);
      if (lVar2 != 0) {
        uVar3 = FUN_14008e0ae(param_1 + 0xa0);
        FUN_1458d9b80(uVar3,param_1 + 0xc4);
        lVar1 = FUN_1447210f0(lVar1);
        *(float *)(param_1 + 0xc0) = (float)*(double *)(lVar1 + 0x6d0);
      }
    }
  }
  FUN_141306cb2(param_1);
  if (0 < *(int *)(param_1 + 0x90)) {
    FUN_14053d8da(param_1 + 0x88,1);
  }
  if ((*(byte *)(param_1 + 0x98) & 8) == 0) {
    return;
  }
  FUN_148f1516c(param_1);
  return;
}



// FUNCTION 1458d9b80 FUN_1458d9b80 body=26 status=ok
// SIG undefined FUN_1458d9b80(void)

void FUN_1458d9b80(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 200);
  param_2[1] = *(undefined4 *)(param_1 + 0x11c);
  return;
}



// FUNCTION 1458d9b9a FUN_1458d9b9a body=165 status=ok
// SIG undefined FUN_1458d9b9a(void)

void FUN_1458d9b9a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == 0) {
    return;
  }
  FUN_140994e4c(lVar1,DAT_14cbe79e8,0,0);
  uVar2 = DAT_14cbe79e8;
  FUN_140980406(lVar1,DAT_14cbe79e8,0,*(char *)(param_1 + 0x99) == '\x01' | 2,0);
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    FUN_14592b798(param_1,CONCAT71((int7)((ulonglong)uVar2 >> 8),
                                   (*(char *)(param_1 + 0x99) == '\x01') * '\x02') | 4);
    return;
  }
  FUN_1458d9c40(param_1,param_1 + 0xf8,(*(char *)(param_1 + 0x99) == '\x01') * '\x02' + '\x03');
  return;
}



// FUNCTION 1458d9c40 FUN_1458d9c40 body=195 status=ok
// SIG undefined FUN_1458d9c40(void)

void FUN_1458d9c40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_1404fa388(param_2);
  if (cVar2 == '\0') goto LAB_1458d9ce1;
  lVar4 = FUN_14592b8dc(param_1,param_3);
  if ((lVar4 == 0) || (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 == 0)) {
LAB_1458d9d00:
    lVar4 = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x520) + 0x10))(lVar1 + 0x520,local_30);
    lVar4 = FUN_140206ee8(lVar4 + 0x10,local_30);
    if (lVar4 == 0) goto LAB_1458d9d00;
    iVar3 = _finite((double)*(float *)(lVar4 + 0x48));
    if (iVar3 == 0) goto LAB_1458d9d00;
    if (*(char *)(lVar4 + 0x41) != '\0') {
      lVar4 = 0;
    }
  }
  FUN_140bd765a(param_2,lVar4,0);
LAB_1458d9ce1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d9d10 FUN_1458d9d10 body=320 status=ok
// SIG undefined FUN_1458d9d10(void)

undefined8 * FUN_1458d9d10(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *param_1 = &PTR_FUN_14a529030;
  param_1[5] = &PTR_FUN_14a529350;
  *(undefined4 *)(param_1 + 0x30) = 0x41700000;
  *(undefined1 *)((longlong)param_1 + 0x184) = 1;
  FUN_1458d9e50(param_1 + 0x32);
  FUN_1412cd7de(param_1 + 0x90);
  *(undefined2 *)(param_1 + 0x15a) = 1;
  *(undefined1 *)((longlong)param_1 + 0xad2) = 0;
  param_1[0x15b] = 0x4022000000000000;
  param_1[0x15c] = 0x4022000000000000;
  *(undefined4 *)(param_1 + 0x15d) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xaec) = 0x40000000;
  *(undefined4 *)(param_1 + 0x15e) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xaf4) = 0x40000000;
  *(undefined2 *)(param_1 + 0x15f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xafa) = 1;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb04) = 0;
  *(undefined4 *)((longlong)param_1 + 0xafb) = 0;
  *(undefined4 *)(param_1 + 0x161) = 0x3f800000;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,0);
  FUN_141266e28(param_1,1);
  lVar1 = FUN_140bcc93a();
  FUN_1458d9ec6(param_1 + 0x32,lVar1 + 0x2d90);
  lVar1 = FUN_140bcc93a();
  FUN_1412cc8ca(param_1 + 0x90,lVar1 + 0x2740);
  *(undefined1 *)((longlong)param_1 + 0xb05) = 1;
  return param_1;
}



// FUNCTION 1458d9e50 FUN_1458d9e50 body=117 status=ok
// SIG undefined FUN_1458d9e50(void)

undefined8 * FUN_1458d9e50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eeb8d0;
  *(undefined4 *)(param_1 + 1) = 0x41100000;
  FUN_140ca8f8e(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x18);
  FUN_140ca8f8e(param_1 + 0x2e);
  FUN_140ca8f8e(param_1 + 0x44);
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  return param_1;
}



// FUNCTION 1458d9ec6 FUN_1458d9ec6 body=124 status=ok
// SIG undefined FUN_1458d9ec6(void)

longlong FUN_1458d9ec6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_140f13d9e(param_1 + 0x10,param_2 + 0x10);
  FUN_140f13d9e(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140f13d9e(param_1 + 0x170,param_2 + 0x170);
  FUN_140f13d9e(param_1 + 0x220,param_2 + 0x220);
  uVar1 = *(undefined8 *)(param_2 + 0x2d8);
  uVar2 = *(undefined8 *)(param_2 + 0x2e0);
  uVar3 = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d8) = uVar1;
  *(undefined8 *)(param_1 + 0x2e0) = uVar2;
  *(undefined8 *)(param_1 + 0x2e8) = uVar3;
  return param_1;
}



// FUNCTION 1458d9f42 FUN_1458d9f42 body=127 status=ok
// SIG undefined FUN_1458d9f42(void)

void FUN_1458d9f42(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458d9fc2(&local_48);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  local_28 = *(undefined8 *)(param_2 + 8);
  uVar1 = FUN_14477b072(param_1,DAT_14cb5ba78);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458d9fc2 FUN_1458d9fc2 body=51 status=ok
// SIG undefined FUN_1458d9fc2(void)

void FUN_1458d9fc2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(uint *)((longlong)param_1 + 0x24) = (*(uint *)((longlong)param_1 + 0x24) & 0xffffffe0) + 1;
  return;
}



// FUNCTION 1458d9ff6 FUN_1458d9ff6 body=40 status=ok
// SIG undefined FUN_1458d9ff6(void)

undefined8 FUN_1458d9ff6(undefined8 param_1,int param_2)

{
  FUN_1458da01e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458da01e FUN_1458da01e body=112 status=ok
// SIG undefined FUN_1458da01e(void)

void FUN_1458da01e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c4d20;
  param_1[0x72] = &PTR_LAB_14b4c5490;
  FUN_1458da114(param_1 + 0x8c);
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x88);
  FUN_1449db362(param_1 + 0x86);
  FUN_1449db362(param_1 + 0x84);
  FUN_1458da08e(param_1);
  return;
}



// FUNCTION 1458da08e FUN_1458da08e body=69 status=ok
// SIG undefined FUN_1458da08e(void)

void FUN_1458da08e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4bd1d0;
  param_1[0x72] = &PTR_LAB_14b4bd850;
  FUN_1458da0d4(param_1 + 0x7e);
  FUN_1449db362(param_1 + 0x7b);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1458da0d4 FUN_1458da0d4 body=64 status=ok
// SIG undefined FUN_1458da0d4(void)

void FUN_1458da0d4(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458da114 FUN_1458da114 body=129 status=ok
// SIG undefined FUN_1458da114(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458da114(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1458da195(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1458da195(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14a5af930;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x20)) {
  case 1:
    return;
  case 2:
    *(code **)(param_1 + 0x10) = switchD_1458da17c::caseD_0;
    *(undefined **)(param_1 + 0x18) = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0x4053b5c6;
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458da195 FUN_1458da195 body=40 status=ok
// SIG undefined FUN_1458da195(void)

void FUN_1458da195(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145c7f17e(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 1458da1be FUN_1458da1be body=52 status=ok
// SIG undefined FUN_1458da1be(void)

void FUN_1458da1be(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x398);
  memset(_Dst,0,0x398);
  FUN_1458da1f2(_Dst);
  return;
}



// FUNCTION 1458da1f2 FUN_1458da1f2 body=235 status=ok
// SIG undefined FUN_1458da1f2(void)

undefined8 * FUN_1458da1f2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140e8cffc();
  *param_1 = &PTR_FUN_14b9bf420;
  uVar1 = DAT_14c8464e8;
  param_1[0x53] = DAT_14c8464e0;
  param_1[0x54] = uVar1;
  param_1[0x55] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x57] = DAT_14c8464e0;
  param_1[0x58] = uVar1;
  param_1[0x59] = DAT_14c8464f0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 4;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  return param_1;
}



// FUNCTION 1458da2de FUN_1458da2de body=136 status=ok
// SIG undefined FUN_1458da2de(void)

undefined4 * FUN_1458da2de(undefined4 *param_1,undefined1 param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_14001cc68(0x20,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 2) = lVar1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_141306e40(param_1 + 6,0x10,lVar1);
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x69) = param_2;
  return param_1;
}



// FUNCTION 1458da366 FUN_1458da366 body=42 status=ok
// SIG undefined FUN_1458da366(void)

void FUN_1458da366(ulonglong param_1)

{
  if (param_1 < 0x200) {
    FUN_14001cc68(param_1 * 8 + (ulonglong)(param_1 * 8 == 0),0x10);
    return;
  }
  FUN_140c1ca1d();
  return;
}



// FUNCTION 1458da398 FUN_1458da398 body=206 status=ok
// SIG undefined FUN_1458da398(void)

undefined8 * FUN_1458da398(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_14007ca06();
  FUN_140938eb2(param_1,uVar1);
  *param_1 = &PTR_FUN_14afb4b40;
  param_1[5] = &PTR_FUN_14afb5590;
  param_1[6] = &PTR_LAB_14afb55d0;
  param_1[0x55] = &PTR_FUN_14afb5620;
  param_1[0x56] = &PTR_FUN_14afb56a0;
  param_1[0x57] = &PTR_FUN_14afb56b0;
  param_1[0xd7] = 0;
  uVar1 = DAT_14cb51518;
  uVar2 = FUN_1458da466();
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2,1,0);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  param_1[0xd7] = lVar3;
  FUN_144757f48(lVar3,8);
  return param_1;
}



// FUNCTION 1458da466 FUN_1458da466 body=228 status=ok
// SIG undefined FUN_1458da466(void)

longlong FUN_1458da466(void)

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
  if (DAT_14cb51470 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d5262;
    local_38 = &LAB_1485f0a97;
    local_40 = FUN_1464a66ca;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxSpline",L"GbxSplineMetadata",&DAT_14cb51470,&DAT_1485f0a96);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb51470;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458da54c FUN_1458da54c body=200 status=ok
// SIG undefined FUN_1458da54c(void)

void FUN_1458da54c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xe8);
    lVar3 = (longlong)*(int *)(param_1 + 0xf0) << 3;
    do {
      lVar1 = FUN_14479d2ce(lVar4);
      if (lVar1 != 0) {
        FUN_1413071ac(lVar1);
      }
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) < 0) {
    FUN_140373bdc(param_1 + 0xe8,0);
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 200);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x5c8))(plVar2,0);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xd0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x5c8))(plVar2,0);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_141307202(param_1);
  return;
}



// FUNCTION 1458da614 FUN_1458da614 body=56 status=ok
// SIG undefined FUN_1458da614(void)

void FUN_1458da614(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458da64c FUN_1458da64c body=132 status=ok
// SIG undefined FUN_1458da64c(void)

void FUN_1458da64c(longlong param_1,int param_2)

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



// FUNCTION 1458da6d2 FUN_1458da6d2 body=73 status=ok
// SIG undefined FUN_1458da6d2(void)

undefined8 * FUN_1458da6d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a46dfb0;
  param_1[0xc] = &PTR_LAB_14a46e2a0;
  FUN_1404db99a(param_1 + 0xe);
  thunk_FUN_1404db954(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458da71c thunk_FUN_1404db954 body=5 status=ok
// SIG undefined thunk_FUN_1404db954(void)

void thunk_FUN_1404db954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a492200;
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458da72a FUN_1458da72a body=32 status=ok
// SIG undefined FUN_1458da72a(void)

undefined8 * FUN_1458da72a(undefined8 *param_1)

{
  FUN_1458da74a();
  *param_1 = &PTR_FUN_14a742110;
  return param_1;
}


