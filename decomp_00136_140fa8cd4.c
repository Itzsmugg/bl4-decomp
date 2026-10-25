// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140fa8cd4 FUN_140fa8cd4 body=572 status=ok
// SIG undefined FUN_140fa8cd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fa8cd4(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  longlong lVar16;
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  bVar14 = (byte)(*(char *)(param_2 + 0x4c) - 1U) < 2;
  *(bool *)(param_1 + 0x239) = bVar14;
  if ((bVar14) && (*(longlong *)(param_1 + 0x240) != 0)) {
    FUN_140fa8f10(*(longlong *)(param_1 + 0x240),param_2);
  }
  lVar4 = FUN_14493e20e(param_1);
  auVar2 = _DAT_149931e80;
  if (lVar4 != 0) {
    if ((longlong)*(int *)(lVar4 + 0x120) != 0) {
      uVar5 = (longlong)*(int *)(lVar4 + 0x120) * 0xf8 - 0xf8U >> 3;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar5;
      auVar18._8_4_ = SUB164(auVar17 * ZEXT816(0x2108421084210843),8);
      auVar18._0_8_ = SUB168(auVar17 * ZEXT816(0x2108421084210843),8);
      auVar18._12_4_ = (int)(uVar5 / 0x7c0000000);
      auVar15._0_8_ = uVar5 / 0x1f;
      auVar15._8_8_ = auVar18._8_8_ >> 2;
      puVar7 = (undefined4 *)(*(longlong *)(lVar4 + 0x118) + 0x398);
      uVar6 = 0;
      auVar17 = pmovsxbq(in_XMM1,0x302);
      auVar18 = pmovsxbq(in_XMM2,0x100);
      auVar15 = auVar15 | _DAT_149931e80;
      do {
        lVar12 = auVar15._0_8_;
        lVar16 = auVar15._8_8_;
        if ((bool)(~(lVar12 < (longlong)(uVar6 ^ auVar2._0_8_)) & 1)) {
          puVar7[-0xba] = 3;
        }
        auVar19._8_4_ = (int)uVar6;
        auVar19._0_8_ = uVar6;
        auVar19._12_4_ = (int)(uVar6 >> 0x20);
        if ((longlong)((auVar19._8_8_ | auVar18._8_8_) ^ auVar2._8_8_) <= lVar16) {
          puVar7[-0x7c] = 3;
        }
        auVar19 = (auVar19 | auVar17) ^ auVar2;
        if (auVar19._0_8_ <= lVar12) {
          puVar7[-0x3e] = 3;
        }
        if (auVar19._8_8_ <= lVar16) {
          *puVar7 = 3;
        }
        uVar6 = uVar6 + 4;
        puVar7 = puVar7 + 0xf8;
      } while ((uVar5 / 0x1f + 4 & 0xfffffffffffffffc) != uVar6);
    }
    if ((longlong)*(int *)(param_2 + 0x28) != 0) {
      puVar13 = *(undefined8 **)(param_2 + 0x20);
      lVar12 = (longlong)*(int *)(param_2 + 0x28) * 0xf8;
      do {
        iVar1 = *(int *)(lVar4 + 0x120);
        iVar3 = FUN_145a1094c((longlong *)(lVar4 + 0x118),puVar13);
        lVar16 = *(longlong *)(lVar4 + 0x118);
        if (iVar3 == iVar1) {
          *(undefined4 *)(lVar16 + 0xb0 + (longlong)iVar1 * 0xf8) = 0;
        }
        else {
          lVar9 = (longlong)iVar3 * 0xf8;
          *(undefined8 *)(lVar16 + lVar9) = *puVar13;
          FUN_145c075da((undefined8 *)(lVar16 + lVar9) + 1,puVar13 + 1);
          puVar10 = puVar13 + 0x16;
          puVar11 = (undefined8 *)(lVar16 + lVar9 + 0xb0);
          for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          *(undefined4 *)(*(longlong *)(lVar4 + 0x118) + 0xb0 + lVar9) = 1;
        }
        puVar13 = puVar13 + 0x1f;
        lVar12 = lVar12 + -0xf8;
      } while (lVar12 != 0);
    }
  }
  return;
}



// FUNCTION 140fa8f10 FUN_140fa8f10 body=541 status=ok
// SIG undefined FUN_140fa8f10(void)

void FUN_140fa8f10(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  void *_Src;
  ulonglong uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined2 local_70;
  void *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1402c757e(param_1 + 0x498,param_2 + 2);
  local_68 = (void *)0x0;
  uStack_60 = 0;
  lVar8 = param_2[1];
  if ((longlong)(int)lVar8 == 0) {
    uVar5 = (undefined4)param_2[6];
    local_78 = 0;
  }
  else {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      uVar3 = uStack_60;
      fVar1 = *(float *)(lVar2 + lVar6);
      lVar7 = (longlong)(int)uStack_60;
      uVar4 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
      if (uStack_60._4_4_ < uVar4) {
        FUN_144941252(&local_68,uVar3 & 0xffffffff);
      }
      _Src = local_68;
      *(double *)((longlong)local_68 + lVar7 * 8) = (double)fVar1;
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar8 * 4 != lVar6);
    lVar8 = (longlong)(int)uStack_60;
    uVar5 = (undefined4)param_2[6];
    local_80 = (void *)0x0;
    local_78 = (int)uStack_60;
    if (lVar8 != 0) {
      FUN_1408fdf90(&local_80,uStack_60 & 0xffffffff,0);
      memcpy(local_80,_Src,lVar8 << 3);
      goto LAB_140fa8ff6;
    }
  }
  local_80 = (void *)0x0;
  local_74 = 0;
LAB_140fa8ff6:
  local_70 = 0x203;
  FUN_140fa912e(param_1,&local_80,uVar5);
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_1 + 0x610) != *(longlong *)((longlong)param_2 + 0x34)) &&
     ((longlong *)((longlong)param_2 + 0x34) != (longlong *)(param_1 + 0x7e8))) {
    *(longlong *)(param_1 + 0x7e8) = *(longlong *)((longlong)param_2 + 0x34);
  }
  if ((*(int *)(param_1 + 0x60c) != *(int *)((longlong)param_2 + 0x3c)) &&
     ((longlong)param_2 + 0x3c != param_1 + 0x7e0)) {
    *(int *)(param_1 + 0x7e0) = *(int *)((longlong)param_2 + 0x3c);
    *(undefined1 *)(param_1 + 0x7e4) = 1;
  }
  if ((*(longlong *)(param_1 + 0x61c) != param_2[8]) &&
     (param_2 + 8 != (longlong *)(param_1 + 0x7f8))) {
    *(longlong *)(param_1 + 0x7f8) = param_2[8];
  }
  if ((*(int *)(param_1 + 0x618) != (int)param_2[9]) &&
     (param_2 + 9 != (longlong *)(param_1 + 0x7f0))) {
    *(int *)(param_1 + 0x7f0) = (int)param_2[9];
    *(undefined1 *)(param_1 + 0x7f4) = 1;
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa912e FUN_140fa912e body=493 status=ok
// SIG undefined FUN_140fa912e(void)

void FUN_140fa912e(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined2 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = 0x203;
  local_40 = param_3;
  FUN_1408fdf38(local_58);
  lVar2 = DAT_14c9abad0;
  local_48 = *(undefined2 *)(param_2 + 0x10);
  iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  uVar8 = 0;
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar7 = 0;
  }
  else if (iVar3 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  iVar3 = *(int *)(lVar2 + uVar7 * 4);
  plVar1 = (longlong *)(param_1 + 0x408);
  uVar9 = *(uint *)(param_1 + 0x410);
  if ((int)uVar9 < 1) {
LAB_140fa92f1:
    if ((uint)uVar8 != uVar9) goto LAB_140fa924c;
  }
  else {
    puVar6 = (uint *)(*plVar1 + 0x18);
    uVar8 = 0;
    do {
      if (param_3 < *puVar6) {
        FUN_1457da5b8(plVar1,local_58,uVar8 & 0xffffffff);
        uVar9 = *(uint *)(param_1 + 0x410);
        goto LAB_140fa92f1;
      }
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 8;
    } while (uVar9 != uVar8);
  }
  *(uint *)(param_1 + 0x410) = uVar9 + 1;
  if (*(uint *)(param_1 + 0x414) < uVar9 + 1) {
    FUN_140fa9382(plVar1,uVar9);
  }
  lVar2 = *(longlong *)(param_1 + 0x408);
  FUN_140fa931c(lVar2 + (longlong)(int)uVar9 * 0x20,local_58);
  *(uint *)(lVar2 + 0x18 + (longlong)(int)uVar9 * 0x20) = local_40;
  uVar9 = *(uint *)(param_1 + 0x410);
LAB_140fa924c:
  if (iVar3 < (int)uVar9) {
    plVar1 = (longlong *)*plVar1;
    if (*plVar1 != 0) {
      FUN_1400020a8();
      uVar9 = *(uint *)(param_1 + 0x410);
    }
    if (uVar9 - 1 == 0) {
      iVar3 = 0;
    }
    else {
      memmove(plVar1,plVar1 + 4,(longlong)(int)(uVar9 - 1) << 5);
      iVar3 = *(int *)(param_1 + 0x410) + -1;
    }
    *(int *)(param_1 + 0x410) = iVar3;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa931c FUN_140fa931c body=102 status=ok
// SIG undefined FUN_140fa931c(void)

undefined8 * FUN_140fa931c(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1408fdf90(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  return param_1;
}



// FUNCTION 140fa9382 FUN_140fa9382 body=255 status=ok
// SIG undefined FUN_140fa9382(void)

void FUN_140fa9382(longlong param_1,int param_2)

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



// FUNCTION 140fa9482 FUN_140fa9482 body=9 status=ok
// SIG undefined FUN_140fa9482(void)

void FUN_140fa9482(longlong param_1)

{
  FUN_140fa948c(param_1 + 0x10);
  return;
}



// FUNCTION 140fa948c FUN_140fa948c body=444 status=ok
// SIG undefined FUN_140fa948c(void)

void FUN_140fa948c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_140f4695a(param_1);
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140b343a6(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xc0);
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
  FUN_140f46ebd(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xa0);
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
  FUN_140f46e87(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_140549ad6((longlong *)(param_1 + 0x10),0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0x80 < *(uint *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(param_1 + 0x20,0);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fa960e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140fa9648 FUN_140fa9648 body=1931 status=ok
// SIG undefined FUN_140fa9648(void)

/* WARNING: Removing unreachable block (ram,0x000140fa9caf) */
/* WARNING: Removing unreachable block (ram,0x000140fa9bc4) */
/* WARNING: Removing unreachable block (ram,0x000140fa9dad) */
/* WARNING: Removing unreachable block (ram,0x000140fa9cbe) */
/* WARNING: Removing unreachable block (ram,0x000140fa9bce) */
/* WARNING: Removing unreachable block (ram,0x000140fa9dbc) */

void FUN_140fa9648(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined2 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if ((lVar6 == 0) || (*(int *)(param_1 + 0x208) == 0)) goto LAB_140fa9849;
  if ((*(int *)(param_1 + 0x34) != 0) &&
     ((((uVar4 = *(uint *)(param_1 + 0x30), -1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
       (lVar15 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar15 != 0)) &&
      ((*(int *)(lVar15 + 0x10) == *(int *)(param_1 + 0x34) &&
       ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)))))) {
    FUN_1400021e4(&DAT_14cbdda88,&local_60);
    puVar16 = local_60;
    if (local_58 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_88,L"UI.State.%s",puVar16);
    iVar5 = (int)local_80 + -1;
    if ((int)local_80 == 0) {
      iVar5 = 0;
    }
    FUN_1446f82e2(&local_50,iVar5,local_88,1);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_50,local_50,1);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_140fa9871:
      lVar15 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x30);
      lVar15 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           (((int)plVar14[2] != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_140fa9871;
        lVar15 = *plVar14;
      }
    }
    cVar11 = FUN_140426394(lVar15 + 0x3c0,&local_50);
    if (*(char *)(lVar6 + 0x130) != cVar11) {
      *(char *)(lVar6 + 0x130) = cVar11;
      puVar8 = *(ushort **)(lVar6 + 0x80);
      if (puVar8 != (ushort *)0x0) {
        *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
      }
    }
  }
  FUN_1448d5e3c(&local_88,param_1 + 0x208);
  plVar14 = *(longlong **)(local_88 + 0x1a0);
  AcquireSRWLockShared((PSRWLOCK)(plVar14 + 0x18));
  plVar3 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(int *)(param_1 + 0x298) != (int)plVar14[0x17]) {
    *(int *)(param_1 + 0x298) = (int)plVar14[0x17];
    plVar3 = (longlong *)(lVar6 + 200);
    FUN_140fa9dd4(*(undefined8 *)(lVar6 + 200),*(undefined4 *)(lVar6 + 0xd0));
    *(undefined4 *)(lVar6 + 0xd0) = 0;
    if (*(int *)(lVar6 + 0xd4) != 0) {
      FUN_140fa9e12(plVar3);
    }
    local_90 = plVar3;
    if ((longlong)(int)plVar14[1] != 0) {
      lVar15 = (longlong)(int)plVar14[1] * 0x28;
      lVar18 = *plVar14 + 0x10;
      lVar17 = local_88;
      plVar3 = local_80;
      uVar9 = local_78;
      uVar10 = local_70;
      do {
        local_70 = uVar10;
        local_78 = uVar9;
        local_80 = plVar3;
        local_88 = lVar17;
        local_98 = *(undefined1 *)(lVar18 + 0x11);
        FUN_140fa9e42(&local_88,lVar18 + -0x10,lVar18,*(undefined1 *)(lVar18 + 0x10));
        iVar5 = *(int *)(lVar6 + 0xd0);
        lVar17 = (longlong)iVar5;
        *(uint *)(lVar6 + 0xd0) = iVar5 + 1U;
        if (*(uint *)(lVar6 + 0xd4) < iVar5 + 1U) {
          FUN_140fa9efe(local_90,iVar5);
        }
        lVar7 = *local_90;
        *(undefined8 *)(lVar7 + lVar17 * 0x28) = 0;
        *(longlong *)(lVar7 + lVar17 * 0x28) = local_88;
        *(int *)(lVar7 + 8 + lVar17 * 0x28) = (int)local_80;
        *(undefined4 *)(lVar7 + 0xc + lVar17 * 0x28) = local_80._4_4_;
        *(undefined8 *)(lVar7 + 0x10 + lVar17 * 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x10 + lVar17 * 0x28) = local_78;
        *(undefined4 *)(lVar7 + 0x18 + lVar17 * 0x28) = (undefined4)local_70;
        *(undefined4 *)(lVar7 + 0x1c + lVar17 * 0x28) = local_70._4_4_;
        *(undefined1 *)(lVar7 + 0x22 + lVar17 * 0x28) = local_66;
        *(undefined2 *)(lVar7 + 0x20 + lVar17 * 0x28) = local_68;
        local_70 = 0;
        uVar10 = local_70;
        local_78 = 0;
        uVar9 = local_78;
        local_80 = (longlong *)0x0;
        plVar3 = local_80;
        local_88 = 0;
        lVar17 = local_88;
        local_70 = 0;
        local_78 = 0;
        local_80 = (longlong *)0x0;
        local_88 = 0;
        lVar18 = lVar18 + 0x28;
        lVar15 = lVar15 + -0x28;
      } while (lVar15 != 0);
    }
    plVar3 = (longlong *)(lVar6 + 0xd8);
    FUN_140fa9dd4(*(undefined8 *)(lVar6 + 0xd8),*(undefined4 *)(lVar6 + 0xe0));
    *(undefined4 *)(lVar6 + 0xe0) = 0;
    if (*(int *)(lVar6 + 0xe4) != 0) {
      FUN_140fa9e12(plVar3);
    }
    if ((longlong)(int)plVar14[4] != 0) {
      lVar15 = (longlong)(int)plVar14[4] * 0x28;
      lVar17 = plVar14[3] + 0x10;
      do {
        local_98 = *(undefined1 *)(lVar17 + 0x11);
        FUN_140fa9e42(&local_88,lVar17 + -0x10,lVar17,*(undefined1 *)(lVar17 + 0x10));
        iVar5 = *(int *)(lVar6 + 0xe0);
        lVar18 = (longlong)iVar5;
        *(uint *)(lVar6 + 0xe0) = iVar5 + 1U;
        if (*(uint *)(lVar6 + 0xe4) < iVar5 + 1U) {
          FUN_140fa9efe(plVar3,iVar5);
        }
        lVar7 = *plVar3;
        *(undefined8 *)(lVar7 + lVar18 * 0x28) = 0;
        *(longlong *)(lVar7 + lVar18 * 0x28) = local_88;
        *(int *)(lVar7 + 8 + lVar18 * 0x28) = (int)local_80;
        *(undefined4 *)(lVar7 + 0xc + lVar18 * 0x28) = local_80._4_4_;
        *(undefined8 *)(lVar7 + 0x10 + lVar18 * 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x10 + lVar18 * 0x28) = local_78;
        *(undefined4 *)(lVar7 + 0x18 + lVar18 * 0x28) = (undefined4)local_70;
        *(undefined4 *)(lVar7 + 0x1c + lVar18 * 0x28) = local_70._4_4_;
        *(undefined1 *)(lVar7 + 0x22 + lVar18 * 0x28) = local_66;
        *(undefined2 *)(lVar7 + 0x20 + lVar18 * 0x28) = local_68;
        local_70 = 0;
        local_78 = 0;
        local_80 = (longlong *)0x0;
        local_88 = 0;
        lVar17 = lVar17 + 0x28;
        lVar15 = lVar15 + -0x28;
      } while (lVar15 != 0);
    }
    plVar3 = (longlong *)(lVar6 + 0xe8);
    FUN_140fa9dd4(*(undefined8 *)(lVar6 + 0xe8),*(undefined4 *)(lVar6 + 0xf0));
    *(undefined4 *)(lVar6 + 0xf0) = 0;
    if (*(int *)(lVar6 + 0xf4) != 0) {
      FUN_140fa9e12(plVar3);
    }
    if ((longlong)(int)plVar14[7] != 0) {
      lVar15 = (longlong)(int)plVar14[7] * 0x28;
      lVar17 = plVar14[6] + 0x10;
      do {
        local_98 = *(undefined1 *)(lVar17 + 0x11);
        FUN_140fa9e42(&local_88,lVar17 + -0x10,lVar17,*(undefined1 *)(lVar17 + 0x10));
        iVar5 = *(int *)(lVar6 + 0xf0);
        lVar18 = (longlong)iVar5;
        *(uint *)(lVar6 + 0xf0) = iVar5 + 1U;
        if (*(uint *)(lVar6 + 0xf4) < iVar5 + 1U) {
          FUN_140fa9efe(plVar3,iVar5);
        }
        lVar7 = *plVar3;
        *(undefined8 *)(lVar7 + lVar18 * 0x28) = 0;
        *(longlong *)(lVar7 + lVar18 * 0x28) = local_88;
        *(int *)(lVar7 + 8 + lVar18 * 0x28) = (int)local_80;
        *(undefined4 *)(lVar7 + 0xc + lVar18 * 0x28) = local_80._4_4_;
        *(undefined8 *)(lVar7 + 0x10 + lVar18 * 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x10 + lVar18 * 0x28) = local_78;
        *(undefined4 *)(lVar7 + 0x18 + lVar18 * 0x28) = (undefined4)local_70;
        *(undefined4 *)(lVar7 + 0x1c + lVar18 * 0x28) = local_70._4_4_;
        *(undefined1 *)(lVar7 + 0x22 + lVar18 * 0x28) = local_66;
        *(undefined2 *)(lVar7 + 0x20 + lVar18 * 0x28) = local_68;
        local_70 = 0;
        local_78 = 0;
        local_80 = (longlong *)0x0;
        local_88 = 0;
        lVar17 = lVar17 + 0x28;
        lVar15 = lVar15 + -0x28;
      } while (lVar15 != 0);
    }
    *(char *)(lVar6 + 0xbd) = (char)plVar14[9];
    *(char *)(lVar6 + 0xbe) = (char)plVar14[10];
    *(char *)(lVar6 + 0xb0) = (char)plVar14[0xb];
    *(char *)(lVar6 + 0xbc) = (char)plVar14[0xc];
    *(longlong *)(lVar6 + 0xb4) = plVar14[0xd];
    if (*(int *)(lVar6 + 0xfc) != (int)plVar14[0xf]) {
      *(undefined1 *)(lVar6 + 0xf8) = *(undefined1 *)((longlong)plVar14 + 0x74);
      *(int *)(lVar6 + 0xfc) = (int)plVar14[0xf];
    }
    if (*(int *)(lVar6 + 0x110) != (int)plVar14[0x13]) {
      FUN_144a787a6(lVar6 + 0x100,plVar14 + 0x11);
      *(int *)(lVar6 + 0x110) = (int)plVar14[0x13];
    }
    if (*(int *)(lVar6 + 0x128) != (int)plVar14[0x16]) {
      FUN_144a787a6(lVar6 + 0x118,plVar14 + 0x14);
      *(int *)(lVar6 + 0x128) = (int)plVar14[0x16];
    }
    bVar13 = false;
    if (1 < *(int *)(lVar6 + 0x108)) {
      bVar13 = 1 < *(int *)(lVar6 + 0x120);
    }
    *(bool *)(lVar6 + 0xbf) = bVar13;
    bVar12 = false;
    if (*(char *)((longlong)plVar14 + 0x7c) != '\0') {
      bVar12 = bVar13;
    }
    *(bool *)(lVar6 + 0xc0) = bVar12;
    *(undefined8 *)(param_1 + 0x29c) = 0;
    puVar8 = *(ushort **)(lVar6 + 0x80);
    if (puVar8 != (ushort *)0x0) {
      *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 0x18));
LAB_140fa9849:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa9dd4 FUN_140fa9dd4 body=61 status=ok
// SIG undefined FUN_140fa9dd4(void)

void FUN_140fa9dd4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fa9e12 FUN_140fa9e12 body=48 status=ok
// SIG undefined FUN_140fa9e12(void)

void FUN_140fa9e12(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 140fa9e42 FUN_140fa9e42 body=187 status=ok
// SIG undefined FUN_140fa9e42(void)

undefined8 *
FUN_140fa9e42(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
             undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22) = param_5;
  return param_1;
}



// FUNCTION 140fa9efe FUN_140fa9efe body=373 status=ok
// SIG undefined FUN_140fa9efe(void)

void FUN_140fa9efe(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fa9f87;
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
LAB_140fa9f87:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140faa074 FUN_140faa074 body=277 status=ok
// SIG undefined FUN_140faa074(void)

undefined8 FUN_140faa074(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140faa183;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140faa183;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140faa183:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140faa131;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_140faa131;
    }
  }
  uVar6 = 0;
LAB_140faa131:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140faa18a FUN_140faa18a body=345 status=ok
// SIG undefined FUN_140faa18a(void)

void FUN_140faa18a(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  bVar2 = *(byte *)(param_1 + 0xb2a);
  if ((bVar2 & 2) != 0) {
    lVar3 = FUN_140faa2e4(*(longlong *)(param_1 + 0xb30) + 0x18);
    if (*(longlong *)(param_1 + 0x9f8) == lVar3) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0xb2a);
  }
  *(byte *)(param_1 + 0xb2a) = bVar2 | 2;
  lVar3 = FUN_140faa2e4(*(longlong *)(param_1 + 0xb30) + 0x18);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x9f8) = lVar3;
  uVar4 = FUN_140f41b0a(*(longlong *)(param_1 + 0xb30) + 0x40);
  FUN_140e41048(param_1 + 0x3a0,uVar4);
  lVar3 = *(longlong *)(param_1 + 0x9f8);
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x428) == 0) {
LAB_140faa214:
      puVar6 = (undefined8 *)(param_1 + 0x420);
    }
    else {
      puVar6 = (undefined8 *)(param_1 + 0x428);
      if ((*(longlong *)(param_1 + 0x970) != 0) &&
         (lVar1 = *(longlong *)(param_1 + 0x420),
         lVar5 = FUN_14060002e(*(longlong *)(param_1 + 0x970) + 0x20), lVar1 != lVar5))
      goto LAB_140faa214;
    }
    FUN_140faa4c0(lVar3,param_1,*puVar6);
  }
  if ((*(byte *)(param_1 + 0x65) & 0x18) != 0x10) {
    lVar3 = FUN_1447210f0(param_1);
    if (lVar3 != 0) {
      lVar3 = FUN_1447210f0(param_1);
      bVar2 = *(byte *)(lVar3 + 0x152);
      if ((bVar2 != 1) && ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) goto LAB_140faa26c;
    }
    return;
  }
LAB_140faa26c:
  FUN_140fdc4b2(param_1);
  return;
}



// FUNCTION 140faa2e4 FUN_140faa2e4 body=246 status=ok
// SIG undefined FUN_140faa2e4(void)

longlong FUN_140faa2e4(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_140faa3da();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140faa3da FUN_140faa3da body=228 status=ok
// SIG undefined FUN_140faa3da(void)

longlong FUN_140faa3da(void)

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
  if (DAT_14cb6ed90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1487a013d;
    local_40 = &LAB_1458fc7ec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/GbxGame",L"PuddleHazardConfigurationData",&DAT_14cb6ed90,FUN_14653e506);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ed90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140faa4c0 FUN_140faa4c0 body=1291 status=ok
// SIG undefined FUN_140faa4c0(void)

void FUN_140faa4c0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58 [16];
  longlong *local_48;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb81968) && (FUN_144b3d300(&DAT_14cb81968), DAT_14cb81968 == -1)) {
    FUN_1446f470e(&DAT_14cb81960,L"ProcMeshActor",1);
    _Init_thread_footer(&DAT_14cb81968);
  }
  FUN_1447210f0(param_2);
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    puVar11 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar11 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_60,puVar11,1);
    if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x6c)) {
LAB_140faa55a:
      lVar8 = 0;
    }
    else {
      uVar7 = (uint)((ulonglong)local_60 >> 0x10);
      uVar10 = (uint)local_60 & 0xffff;
      uVar10 = (uVar10 >> 4) +
               ((uint)local_60 << 0x10 | uVar10) + (int)((ulonglong)local_60 >> 0x20) +
               (uVar7 << 0x13 | uVar7 & 0xffff) + 0xf9874325 ^ 0x33c5;
      uVar7 = uVar10 << 8 ^ 0x97bebcde - uVar10;
      uVar12 = uVar7 >> 0xd ^ (0x678bcdb - uVar10) - uVar7;
      uVar14 = uVar12 >> 0xc ^ (uVar10 - uVar7) - uVar12;
      uVar10 = uVar14 << 0x10 ^ (uVar7 - uVar12) - uVar14;
      uVar7 = uVar10 >> 5 ^ (uVar12 - uVar14) - uVar10;
      uVar12 = uVar7 >> 3 ^ (uVar14 - uVar10) - uVar7;
      uVar10 = uVar12 << 10 ^ (uVar10 - uVar7) - uVar12;
      lVar5 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x78);
      }
      iVar13 = *(int *)(lVar5 + (ulonglong)
                                (*(int *)(param_1 + 0x80) - 1U &
                                (uVar10 >> 0xf ^ uVar7 - (uVar12 + uVar10))) * 4);
      if (iVar13 == -1) goto LAB_140faa55a;
      lVar5 = *(longlong *)(param_1 + 0x38);
      do {
        lVar15 = (longlong)iVar13 * 0x60;
        if ((*(longlong *)(lVar5 + lVar15) == local_60) &&
           (lVar8 = lVar5 + lVar15, *(int *)(lVar5 + 8 + lVar15) == 0x678bcdb)) break;
        iVar13 = *(int *)(lVar5 + lVar15 + 0x58);
        lVar8 = 0;
      } while (iVar13 != -1);
    }
    lVar5 = lVar8 + 0x18;
    if (lVar8 == 0) {
      lVar5 = 0;
    }
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar15 = lVar5 + 0x30;
    if (lVar5 == 0) {
      lVar15 = param_1 + 0x110;
    }
    if (*(int *)(lVar15 + 8) != 0) {
      if (*(longlong **)(param_2 + 0xa18) == (longlong *)0x0) {
LAB_140faa5a5:
        uVar3 = FUN_14058439c();
        local_88 = 0;
        uStack_80 = 0;
        local_90 = 0;
        local_98 = 0;
        plVar4 = (longlong *)FUN_140584627(param_2,uVar3,0,0);
        plVar9 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          lVar5 = FUN_140288b94();
          if ((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
              != lVar5 + 0x30)) {
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = plVar4;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar4);
            }
          }
        }
        *(longlong **)(param_2 + 0xa18) = plVar9;
        (**(code **)(*plVar9 + 0xaa8))(plVar9,1);
        pbVar2 = (byte *)(*(longlong *)(param_2 + 0xa18) + 0x9e);
        *pbVar2 = *pbVar2 | 4;
        pbVar2 = (byte *)(*(longlong *)(param_2 + 0xa18) + 0x9e);
        *pbVar2 = *pbVar2 & 0xf7;
        (**(code **)(**(longlong **)(param_2 + 0xa18) + 0xa78))
                  (*(longlong **)(param_2 + 0xa18),*(undefined8 *)(param_1 + 0xe8));
        (**(code **)(**(longlong **)(param_2 + 0xa18) + 0xa20))
                  (*(longlong **)(param_2 + 0xa18),DAT_14cb81960,param_2);
        FUN_140583e18(*(undefined8 *)(param_2 + 0xa18),1);
        (**(code **)(**(longlong **)(param_2 + 0xa18) + 0x490))
                  (*(longlong **)(param_2 + 0xa18),*(undefined8 *)(param_2 + 0xa00),&DAT_14cadada0,0
                  );
        uVar3 = *(undefined8 *)(param_2 + 0xa18);
        uVar6 = FUN_1447210f0(param_2);
        FUN_140b506dc(uVar3,uVar6,0);
        (**(code **)(**(longlong **)(param_2 + 0xa18) + 0xa60))(*(longlong **)(param_2 + 0xa18),1);
        local_58[0] = '\0';
        local_30[0] = 0;
        FUN_1456bb102(local_58,param_2);
        local_70 = *(undefined8 *)(param_1 + 0xf0);
        local_68 = *(undefined4 *)(param_1 + 0xf8);
        FUN_140e99737(*(undefined8 *)(param_2 + 0xa18),&local_70,local_58);
        FUN_1448173f8(local_30);
        if ((local_58[0] == '\x03') && (local_48 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
        plVar9 = *(longlong **)(param_2 + 0xa18);
        if (plVar9 == (longlong *)0x0) goto LAB_140faa78c;
      }
      else {
        lVar5 = (**(code **)(**(longlong **)(param_2 + 0xa18) + 0xa70))();
        plVar9 = *(longlong **)(param_2 + 0xa18);
        if (*(longlong *)(param_1 + 0xe8) != lVar5) {
          (**(code **)(*plVar9 + 0x2b0))();
          *(undefined8 *)(param_2 + 0xa18) = 0;
          goto LAB_140faa5a5;
        }
        if (plVar9 == (longlong *)0x0) goto LAB_140faa5a5;
      }
      if ((*(longlong *)(param_2 + 0x9f8) != 0) &&
         (lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x9f8) + 0x100), lVar5 != 0)) {
        (**(code **)(*plVar9 + 0xa08))(plVar9,lVar5,*(undefined4 *)(param_2 + 0xa78));
      }
      goto LAB_140faa78c;
    }
  }
  if (*(longlong **)(param_2 + 0xa18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xa18) + 0x2b0))();
    (**(code **)(**(longlong **)(param_2 + 0xa18) + 0x4a0))
              (*(longlong **)(param_2 + 0xa18),&DAT_14cadad9c);
    *(undefined8 *)(param_2 + 0xa18) = 0;
  }
LAB_140faa78c:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140faa9cc FUN_140faa9cc body=2037 status=ok
// SIG undefined FUN_140faa9cc(void)

void FUN_140faa9cc(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[0x13f] == 0) goto LAB_140faad15;
  if (param_1[0x85] == 0) {
LAB_140faaa09:
    plVar9 = param_1 + 0x84;
  }
  else {
    plVar9 = param_1 + 0x85;
    if ((param_1[0x12e] != 0) &&
       (lVar5 = param_1[0x84], lVar4 = FUN_14060002e(param_1[0x12e] + 0x20), lVar5 != lVar4))
    goto LAB_140faaa09;
  }
  lVar5 = *plVar9;
  if (*(char *)((longlong)param_1 + 0xb2a) < '\0') {
    *(undefined4 *)(param_1 + 0x168) = 0x3f800000;
    lVar4 = FUN_1447210f0(param_1);
    *(float *)((longlong)param_1 + 0xb3c) = (float)*(double *)(lVar4 + 0x6d0);
    if (param_1[0x145] == 0) {
      FUN_1488bbdf0(param_1 + 0x74,param_1[0x142]);
      lVar4 = param_1[0x142];
      if (DAT_14c950c29 == 1) {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = param_1[0x142];
        }
      }
      param_1[0x145] = lVar4;
      param_1[0x142] = 0;
      FUN_140f41ee4(param_1);
      FUN_140f41c18(param_1 + 0x74,param_1[0x142]);
    }
    FUN_1405fdecc(param_1,1);
  }
  if (*(char *)((longlong)param_1 + 0xb29) == '\0') {
    if (param_1[0x142] == 0) {
LAB_140faad3c:
      lVar12 = 0;
    }
    else {
      lVar3 = FUN_1405fc15c();
      lVar4 = param_1[0x142];
      if (lVar4 == 0) goto LAB_140faad3c;
      lVar12 = 0;
      if ((lVar3 != 0) && (lVar13 = *(longlong *)(lVar4 + 0x10), lVar13 != 0)) {
        if (*(int *)(lVar13 + 0x38) < *(int *)(lVar3 + 0x38)) goto LAB_140faad3c;
        lVar12 = 0;
        if (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar12 = lVar4;
        }
      }
    }
    local_88 = lVar5;
    FUN_140fdca88(param_1[0x13f],param_1,lVar12,*(undefined4 *)((longlong)param_1 + 0xa5c));
  }
  else {
    lVar4 = param_1[0x13f];
    if (param_1[0x142] == 0) {
LAB_140faaf10:
      lVar13 = 0;
    }
    else {
      lVar12 = FUN_14081cebe();
      lVar3 = param_1[0x142];
      if (lVar3 == 0) goto LAB_140faaf10;
      lVar13 = 0;
      if ((lVar12 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar12 + 0x38)) goto LAB_140faaf10;
        lVar13 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
            lVar12 + 0x30) {
          lVar13 = lVar3;
        }
      }
    }
    FUN_1488bd14e(lVar4,param_1,lVar13,lVar5);
  }
  lVar4 = param_1[0x13f];
  FUN_140fdcee0(lVar4,param_1,lVar5);
  FUN_140faa4c0(lVar4,param_1,lVar5);
  if (lVar5 != 0) {
    puVar10 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
      puVar10 = *(undefined4 **)(lVar5 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_30,puVar10,1);
    if (*(int *)(lVar4 + 0x40) != *(int *)(lVar4 + 0x6c)) {
      uVar6 = (uint)((ulonglong)local_30 >> 0x10);
      uVar7 = (uint)local_30 & 0xffff;
      uVar7 = (uVar7 >> 4) +
              ((uint)local_30 << 0x10 | uVar7) + (int)((ulonglong)local_30 >> 0x20) +
              (uVar6 << 0x13 | uVar6 & 0xffff) + 0xf9874325 ^ 0x33c5;
      uVar6 = uVar7 << 8 ^ 0x97bebcde - uVar7;
      uVar11 = uVar6 >> 0xd ^ (0x678bcdb - uVar7) - uVar6;
      uVar14 = uVar11 >> 0xc ^ (uVar7 - uVar6) - uVar11;
      uVar7 = uVar14 << 0x10 ^ (uVar6 - uVar11) - uVar14;
      uVar6 = uVar7 >> 5 ^ (uVar11 - uVar14) - uVar7;
      uVar11 = uVar6 >> 3 ^ (uVar14 - uVar7) - uVar6;
      uVar7 = uVar11 << 10 ^ (uVar7 - uVar6) - uVar11;
      lVar5 = lVar4 + 0x70;
      if (*(longlong *)(lVar4 + 0x78) != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x78);
      }
      iVar8 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar4 + 0x80) - 1U &
                               (uVar7 >> 0xf ^ uVar6 - (uVar11 + uVar7))) * 4);
      if (iVar8 != -1) {
        lVar5 = *(longlong *)(lVar4 + 0x38);
        do {
          lVar12 = (longlong)iVar8 * 0x60;
          lVar3 = lVar5 + lVar12;
          if ((*(code **)(lVar5 + lVar12) == local_30) &&
             (*(int *)(lVar5 + 8 + lVar12) == 0x678bcdb)) {
            if (lVar3 != 0) {
              lVar5 = *(longlong *)(lVar4 + 0x138);
              if ((lVar3 != -0x18) && (*(longlong *)(lVar3 + 0x40) != 0)) {
                lVar5 = *(longlong *)(lVar3 + 0x40);
              }
              goto LAB_140faab0e;
            }
            break;
          }
          iVar8 = *(int *)(lVar3 + 0x58);
        } while (iVar8 != -1);
      }
    }
  }
  lVar5 = *(longlong *)(lVar4 + 0x138);
LAB_140faab0e:
  if ((lVar5 == 0) && (lVar5 = *(longlong *)(DAT_14cb0d2b0 + 0x898), lVar5 == 0)) {
    lVar5 = 0;
  }
  plVar9 = (longlong *)param_1[0x140];
  if (plVar9 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar9 + 0x7b8))(plVar9,0,1,0xffffffff);
    if (lVar4 != 0) {
      lVar4 = (**(code **)(*(longlong *)param_1[0x140] + 0x7b8))
                        ((longlong *)param_1[0x140],0,1,0xffffffff);
      if (*(longlong *)(lVar4 + 0x120) != lVar5) {
        (**(code **)(*(longlong *)param_1[0x140] + 0x8d0))
                  ((longlong *)param_1[0x140],0,0x3f800000,1);
        (**(code **)(*(longlong *)param_1[0x140] + 0x968))((longlong *)param_1[0x140],lVar5);
      }
    }
  }
  bVar2 = *(byte *)((longlong)param_1 + 0xb2a);
  if ((bVar2 & 8) != 0) {
    plVar9 = (longlong *)param_1[0x144];
    if (plVar9 != (longlong *)0x0) {
      if (*(longlong *)(param_1[0x13f] + 0xa8) == 0) {
LAB_140fab0c7:
        if ((char)bVar2 < '\0') {
          lVar5 = param_1[0x144];
          if (DAT_14c950c29 == 1) {
            if (lVar5 == 0) {
              lVar5 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar5 = param_1[0x144];
            }
          }
          param_1[0x146] = lVar5;
        }
        else {
          (**(code **)(*(longlong *)param_1[0x144] + 0x420))((longlong *)param_1[0x144],0);
        }
        param_1[0x144] = 0;
      }
      else {
        lVar5 = (**(code **)(*plVar9 + 0x600))(plVar9,0);
        if (lVar5 != 0) {
          if (DAT_14caec308 == 0) {
            local_50 = &local_30;
            local_30 = FUN_1417df956;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_146386466;
            local_58 = &LAB_147bb408b;
            local_60 = &LAB_1463eaa15;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000001;
            local_80 = 8;
            local_88 = CONCAT44(local_88._4_4_,0x2e0);
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
          }
          if ((*(int *)(DAT_14caec308 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) == DAT_14caec308 + 0x30)) {
            lVar5 = (**(code **)(*(longlong *)param_1[0x144] + 0x600))((longlong *)param_1[0x144],0)
            ;
            if (lVar5 == 0) {
LAB_140faae80:
              lVar5 = 0;
            }
            else {
              if (DAT_14caec308 == 0) {
                local_50 = &local_30;
                local_30 = FUN_1417df956;
                local_40 = FUN_14081d0ea;
                local_48 = &LAB_146386466;
                local_58 = &LAB_147bb408b;
                local_60 = &LAB_1463eaa15;
                local_68 = L"Engine";
                local_70 = 0;
                local_78 = 0x10000001;
                local_80 = 8;
                local_88 = CONCAT44(local_88._4_4_,0x2e0);
                FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
              }
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14caec308 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                   (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) != DAT_14caec308 + 0x30))
              goto LAB_140faae80;
            }
            lVar4 = *(longlong *)(param_1[0x13f] + 0xa8);
            if ((lVar4 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar4);
            }
            if (*(longlong *)(lVar5 + 0x110) != lVar4) {
              bVar2 = *(byte *)((longlong)param_1 + 0xb2a);
              goto LAB_140fab0c7;
            }
          }
        }
        if (param_1[0x144] != 0) goto LAB_140faace8;
      }
    }
    if (*(longlong *)(param_1[0x13f] + 0xa8) != 0) {
      lVar5 = FUN_140fdc912(param_1[0x13f],param_1);
      if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar5);
      }
      param_1[0x144] = lVar5;
    }
  }
LAB_140faace8:
  bVar2 = *(byte *)((longlong)param_1 + 0xb2a);
  if (((bVar2 & 0x28) != 0) && ((char)param_1[0x2f] == '\x03')) {
    (**(code **)(*param_1 + 0x578))(param_1);
    bVar2 = *(byte *)((longlong)param_1 + 0xb2a);
  }
  *(byte *)((longlong)param_1 + 0xb2a) = bVar2 | 0x20;
LAB_140faad15:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fab1c2 FUN_140fab1c2 body=374 status=ok
// SIG undefined FUN_140fab1c2(void)

undefined8 FUN_140fab1c2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
      lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
      if (lVar1 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_40 = &local_28;
          local_28 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1459f2e4c;
          local_48 = &LAB_148c39de3;
          local_50 = &LAB_1457a9eb2;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          lVar1 = FUN_140fab352(lVar1);
          if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fab352 FUN_140fab352 body=115 status=ok
// SIG undefined FUN_140fab352(void)

void FUN_140fab352(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_140fab3c6();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_140fab37d;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_140fab37d:
    lVar2 = FUN_140fab3c6();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar3 = lVar1;
      }
      goto LAB_140fab3a2;
    }
  }
  lVar3 = 0;
LAB_140fab3a2:
  FUN_1448a6f9c(param_1 + 0x3b38,lVar3);
  return;
}



// FUNCTION 140fab3c6 FUN_140fab3c6 body=228 status=ok
// SIG undefined FUN_140fab3c6(void)

longlong FUN_140fab3c6(void)

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
  if (DAT_14cbb2d50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_148c5a501;
    local_40 = FUN_1465f6c27;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_News",&DAT_14cbb2d50,&DAT_148c5a500);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2d50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fab724 FUN_140fab724 body=123 status=ok
// SIG undefined FUN_140fab724(void)

void FUN_140fab724(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_140fab7a0((longlong *)(param_3 + 8),iVar1);
  }
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_3 + 8);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar2 + 8 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  ((undefined8 *)(lVar2 + lVar4))[1] = 0;
  FUN_14005b18c(param_1 + 8,(longlong)param_2,1);
  return;
}



// FUNCTION 140fab7a0 FUN_140fab7a0 body=269 status=ok
// SIG undefined FUN_140fab7a0(void)

void FUN_140fab7a0(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140fab8ba FUN_140fab8ba body=353 status=ok
// SIG undefined FUN_140fab8ba(void)

undefined8 * FUN_140fab8ba(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  FUN_1409e1656(param_1 + 5);
  *param_1 = &PTR_FUN_14acc0ab0;
  param_1[5] = &PTR_FUN_14acc0d50;
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
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 2;
  memset(param_1 + 0x16,0,0xcc);
  *(undefined1 *)(param_1 + 0x31) = 2;
  *(byte *)((longlong)param_1 + 0x18a) = *(byte *)((longlong)param_1 + 0x18a) & 0x80 | 5;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  for (puVar1 = param_1; (puVar1 != (undefined8 *)0x0 && ((*(uint *)(puVar1 + 1) & 0x30) == 0));
      puVar1 = (undefined8 *)puVar1[4]) {
  }
  return param_1;
}



// FUNCTION 140faba1c FUN_140faba1c body=415 status=ok
// SIG undefined FUN_140faba1c(void)

void FUN_140faba1c(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (((char)param_1[0x1b] == '\x01') &&
     (lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1), lVar3 != 0)) {
    uVar4 = FUN_1406d3bdc();
    cVar2 = FUN_1448093f4(lVar3,uVar4);
    if (cVar2 != '\0') {
      lVar5 = *(longlong *)(lVar3 + 0x220);
      if (lVar5 == 0) {
        uVar4 = FUN_140bd9786();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x220) = lVar5;
      }
      plVar6 = (longlong *)(lVar3 + 0x218);
      if (*(longlong *)(lVar3 + 0x228) != 0) {
LAB_140faba98:
        if (lVar5 != 0) {
          return;
        }
        uVar4 = FUN_140bd9786();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x220) = lVar5;
        if (*(longlong *)(lVar3 + 0x228) != 0) {
          return;
        }
        if (lVar5 == 0) {
          return;
        }
        if (*plVar6 != 0) {
          plVar1 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            uVar4 = FUN_144aff482(uVar4,plVar6);
          }
          *(undefined8 *)(lVar3 + 0x228) = uVar4;
          return;
        }
        return;
      }
      if ((lVar5 != 0) && (*plVar6 != 0)) {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          *(undefined8 *)(lVar3 + 0x228) = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,plVar6);
          *(longlong *)(lVar3 + 0x228) = lVar5;
          if (lVar5 != 0) {
            lVar5 = *(longlong *)(lVar3 + 0x220);
            goto LAB_140faba98;
          }
        }
      }
    }
  }
  FUN_140fabbbc(param_1,param_2);
  return;
}



// FUNCTION 140fabbbc FUN_140fabbbc body=197 status=ok
// SIG undefined FUN_140fabbbc(void)

undefined8 FUN_140fabbbc(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14041acbe(param_1);
    uVar6 = 0;
    uVar5 = 0;
    if ((((*(int *)((longlong)param_1 + 0x2c) != 0) &&
         (uVar1 = *(uint *)(param_1 + 5), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
       (((plVar7 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)), uVar6 = uVar5,
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)((longlong)param_1 + 0x2c))) &&
        ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = 0;
      if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar7;
      }
      else {
        lVar4 = 0;
      }
      if (*(longlong *)(lVar4 + 0x30) != 0) {
        uVar6 = *(undefined4 *)(*(longlong *)(lVar4 + 0x30) + 0x120);
      }
    }
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar6,uVar3,param_2,0,0,0);
  }
  return uVar3;
}



// FUNCTION 140fabc82 FUN_140fabc82 body=37 status=ok
// SIG undefined FUN_140fabc82(void)

void FUN_140fabc82(longlong *param_1,float param_2)

{
  if ((*(float *)((longlong)param_1 + 0x184) == param_2) &&
     (!NAN(*(float *)((longlong)param_1 + 0x184)) && !NAN(param_2))) {
    return;
  }
  *(float *)((longlong)param_1 + 0x184) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000140fabca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))();
  return;
}



// FUNCTION 140fabca8 FUN_140fabca8 body=85 status=ok
// SIG undefined FUN_140fabca8(void)

void FUN_140fabca8(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_1410da48c();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fabcfe FUN_140fabcfe body=336 status=ok
// SIG undefined FUN_140fabcfe(void)

undefined8 * FUN_140fabcfe(undefined8 *param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c6b9f8();
  *param_1 = &PTR_FUN_14a1c25d0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddda2(&local_68,"class",0);
  FUN_1404e49fa(param_1 + 0x5a,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddda2(&local_68,"parent",0);
  FUN_1404e49fa(param_1 + 0x5f,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fabe50 FUN_140fabe50 body=34 status=ok
// SIG undefined FUN_140fabe50(void)

void FUN_140fabe50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140fabe72();
  FUN_140fad270(param_1,param_2,param_3);
  return;
}



// FUNCTION 140fabe72 FUN_140fabe72 body=421 status=ok
// SIG undefined FUN_140fabe72(void)

void FUN_140fabe72(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,3,0);
  if (param_3 != &DAT_14c9a1308) {
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)param_3[1];
    *param_3 = local_38;
    param_3[1] = plStack_30;
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
  FUN_140fac0be(param_1);
  FUN_140facbdc(param_1);
  FUN_140fac47e(param_1);
  FUN_140facfb2(param_1);
  FUN_140fac548(param_1);
  FUN_140fac612(param_1);
  FUN_140fac6dc(param_1);
  FUN_140faca0c(param_1);
  FUN_140facaf2(param_1);
  FUN_140fac018(param_1);
  FUN_140fac16e(param_1);
  FUN_140fac232(param_1);
  FUN_140fac2f6(param_1);
  FUN_140fac3ba(param_1);
  FUN_140fac870(param_1);
  FUN_140facd08(param_1);
  FUN_140fac7a6(param_1);
  FUN_140fac93c(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac018 FUN_140fac018 body=164 status=ok
// SIG undefined FUN_140fac018(void)

void FUN_140fac018(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  FUN_1406111c2(local_38,*(undefined4 *)(param_1 + 0x7c));
  local_48 = 0;
  FUN_140516f2a(*param_3,&DAT_14cb97430,&local_38,0);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac0be FUN_140fac0be body=175 status=ok
// SIG undefined FUN_140fac0be(void)

void FUN_140fac0be(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if (local_38 != 0) {
    FUN_1404a8912(local_38,*(undefined4 *)(param_1 + 0x14));
  }
  if (*param_3 != 0) {
    local_48 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb973d8,&local_38,0);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac16e FUN_140fac16e body=195 status=ok
// SIG undefined FUN_140fac16e(void)

void FUN_140fac16e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((*(byte *)(local_38 + 1) & 2) == 0) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x80) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  local_48 = 0;
  FUN_140516f2a(*param_3,&DAT_14cb97438,&local_38,0);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac232 FUN_140fac232 body=195 status=ok
// SIG undefined FUN_140fac232(void)

void FUN_140fac232(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((*(byte *)(local_38 + 1) & 2) == 0) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x81) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  local_48 = 0;
  FUN_140516f2a(*param_3,&DAT_14cb97440,&local_38,0);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac2f6 FUN_140fac2f6 body=195 status=ok
// SIG undefined FUN_140fac2f6(void)

void FUN_140fac2f6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((*(byte *)(local_38 + 1) & 2) == 0) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x82) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  local_48 = 0;
  FUN_140516f2a(*param_3,&DAT_14cb97448,&local_38,0);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac3ba FUN_140fac3ba body=195 status=ok
// SIG undefined FUN_140fac3ba(void)

void FUN_140fac3ba(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((*(byte *)(local_38 + 1) & 2) == 0) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x83) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  local_48 = 0;
  FUN_140516f2a(*param_3,&DAT_14cb97450,&local_38,0);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac47e FUN_140fac47e body=200 status=ok
// SIG undefined FUN_140fac47e(void)

void FUN_140fac47e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((local_38 != 0) && ((*(byte *)(local_38 + 1) & 2) == 0)) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x20) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  if (*param_3 != 0) {
    local_48 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb973f0,&local_38,0);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac548 FUN_140fac548 body=200 status=ok
// SIG undefined FUN_140fac548(void)

void FUN_140fac548(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((local_38 != 0) && ((*(byte *)(local_38 + 1) & 2) == 0)) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x21) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  if (*param_3 != 0) {
    local_48 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb97408,&local_38,0);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac612 FUN_140fac612 body=200 status=ok
// SIG undefined FUN_140fac612(void)

void FUN_140fac612(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((local_38 != 0) && ((*(byte *)(local_38 + 1) & 2) == 0)) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x22) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  if (*param_3 != 0) {
    local_48 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb97410,&local_38,0);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac6dc FUN_140fac6dc body=200 status=ok
// SIG undefined FUN_140fac6dc(void)

void FUN_140fac6dc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((local_38 != 0) && ((*(byte *)(local_38 + 1) & 2) == 0)) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x23) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  if (*param_3 != 0) {
    local_48 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb97418,&local_38,0);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac7a6 FUN_140fac7a6 body=200 status=ok
// SIG undefined FUN_140fac7a6(void)

void FUN_140fac7a6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((local_38 != 0) && ((*(byte *)(local_38 + 1) & 2) == 0)) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x78) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  if (*param_3 != 0) {
    local_48 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb97400,&local_38,0);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac870 FUN_140fac870 body=203 status=ok
// SIG undefined FUN_140fac870(void)

void FUN_140fac870(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((local_38 != 0) && ((*(byte *)(local_38 + 1) & 2) == 0)) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x84) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  if (*param_3 != 0) {
    local_48 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb97458,&local_38,0);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fac93c FUN_140fac93c body=207 status=ok
// SIG undefined FUN_140fac93c(void)

void FUN_140fac93c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c872bf0 == '\0') {
    cVar4 = FUN_140b3f358();
    if ((cVar4 == '\0') && ((DAT_14c872bf2 & 1) == 0)) {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      FUN_14009b010(&local_38,1,0);
      FUN_1406114e4(&local_38,*(undefined4 *)(param_1 + 0xd8));
      if (*param_3 != 0) {
        local_48 = 0;
        FUN_140516f2a(*param_3,&DAT_14cb97468,&local_38,0);
      }
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140faca0c FUN_140faca0c body=228 status=ok
// SIG undefined FUN_140faca0c(void)

void FUN_140faca0c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  longlong *plStack_40;
  char local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x18))(param_1,&local_2a);
  if (local_29 == '\x01') {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_14009b010(&local_48,1,0);
    if ((*(byte *)(local_48 + 1) & 2) == 0) {
      pcVar5 = &local_2a;
      if (*(char *)((longlong)param_1 + 0x25) != '\0') {
        pcVar5 = (char *)((longlong)param_1 + 0x24);
      }
      pcVar4 = "false";
      if (*pcVar5 != '\0') {
        pcVar4 = "true";
      }
      FUN_140126aca(local_48,pcVar4);
    }
    local_58 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb97420,&local_48,0);
    plVar3 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140facaf2 FUN_140facaf2 body=233 status=ok
// SIG undefined FUN_140facaf2(void)

void FUN_140facaf2(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  longlong *plStack_40;
  char local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x18))(param_1,&local_2a);
  if (local_29 == '\x01') {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_14009b010(&local_48,1,0);
    pcVar5 = &local_2a;
    if (*(char *)((longlong)param_1 + 0x27) != '\0') {
      pcVar5 = (char *)((longlong)param_1 + 0x26);
    }
    if ((local_48 != 0) && ((*(byte *)(local_48 + 1) & 2) == 0)) {
      pcVar4 = "false";
      if (*pcVar5 != '\0') {
        pcVar4 = "true";
      }
      FUN_140126aca(local_48,pcVar4);
    }
    local_58 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb97428,&local_48,0);
    plVar3 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140facbdc FUN_140facbdc body=299 status=ok
// SIG undefined FUN_140facbdc(void)

void FUN_140facbdc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_14009b010(&local_48,1,0);
  if (local_48 != 0) {
    FUN_1404a8912(local_48,*(undefined4 *)(param_1 + 0x18));
  }
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_14009b010(&local_58,1,0);
  if (local_58 != 0) {
    FUN_1404a8912(local_58,*(undefined4 *)(param_1 + 0x1c));
  }
  if (*param_3 != 0) {
    local_68 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb973e0,&local_48,0);
    if (*param_3 != 0) {
      local_68 = 0;
      FUN_140516f2a(*param_3,&DAT_14cb973e8,&local_58,0);
    }
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140facd08 FUN_140facd08 body=681 status=ok
// SIG undefined FUN_140facd08(void)

void FUN_140facd08(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  size_t sVar8;
  wchar_t *_Str;
  int iVar9;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined8 local_128;
  longlong *plStack_120;
  longlong *local_110;
  undefined8 local_108;
  longlong local_100;
  uint local_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  iVar9 = 0;
  FUN_14009b010(&local_e8,2,0);
  plVar4 = (longlong *)(param_1 + 0x88);
  lVar5 = param_1 + 0x98;
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  local_c0 = 0;
  local_d0 = lVar5;
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_1449c0562(&local_d8);
    iVar9 = *(int *)(param_1 + 0xb0);
  }
  local_f8 = local_c8;
  iStack_f4 = iStack_c4;
  local_f0 = local_c0;
  local_ec = local_bc;
  local_108 = local_d8;
  local_100 = local_d0;
  local_110 = plVar4;
  if ((iStack_c4 != iVar9) || (local_d0 != lVar5)) {
    do {
      lVar6 = *local_110;
      lVar7 = (longlong)iStack_f4;
      local_128 = 0;
      plStack_120 = (longlong *)0x0;
      FUN_14009b010(&local_128,1,0);
      if (*(int *)(lVar6 + 8 + lVar7 * 0x18) == 0) {
        _Str = L"";
LAB_140facef0:
        local_58 = 0;
        sVar8 = wcslen(_Str);
        FUN_1449b853c(&local_d8,_Str,sVar8 & 0xffffffff,1);
      }
      else {
        _Str = *(wchar_t **)(lVar6 + lVar7 * 0x18);
        local_58 = 0;
        if (_Str != (wchar_t *)0x0) goto LAB_140facef0;
        local_50 = 0;
        local_48 = 0;
      }
      FUN_1417381b0(&local_128,local_50);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14173818c(&local_e8,&local_128);
      plVar1 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_120 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      local_f8 = local_f8 & ~local_108._4_4_;
      FUN_1449c0562(&local_108);
    } while (((iStack_f4 != iVar9) || (local_100 != lVar5)) || (local_110 != plVar4));
  }
  if (*param_3 != 0) {
    local_138 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb97460,&local_e8,0);
  }
  plVar4 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140facfb2 FUN_140facfb2 body=700 status=ok
// SIG undefined FUN_140facfb2(void)

void FUN_140facfb2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  size_t sVar6;
  wchar_t *_Str;
  int iVar7;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_138;
  longlong *plStack_130;
  wchar_t *local_120;
  int local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong local_100;
  uint local_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  iVar7 = 0;
  FUN_14009b010(&local_e8,2,0);
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  local_c0 = 0;
  local_d0 = lVar2;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1449c0562(&local_d8);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  local_f8 = local_c8;
  iStack_f4 = iStack_c4;
  local_f0 = local_c0;
  local_ec = local_bc;
  local_108 = local_d8;
  local_100 = local_d0;
  local_110 = plVar1;
  if ((iStack_c4 != iVar7) || (local_d0 != lVar2)) {
    do {
      FUN_140b6c526(&local_120,*(undefined8 *)(*local_110 + (longlong)iStack_f4 * 0x18));
      local_138 = 0;
      plStack_130 = (longlong *)0x0;
      FUN_14009b010(&local_138,1,0);
      _Str = local_120;
      if (local_118 == 0) {
        _Str = L"";
      }
      local_58 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar6 = wcslen(_Str);
        FUN_1449b853c(&local_d8,_Str,sVar6 & 0xffffffff,1);
      }
      FUN_1417381b0(&local_138,local_50);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14173818c(&local_e8,&local_138);
      plVar3 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_130 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar4 = (int *)((longlong)plVar3 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_120 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_f8 = local_f8 & ~local_108._4_4_;
      FUN_1449c0562(&local_108);
    } while (((iStack_f4 != iVar7) || (local_100 != lVar2)) || (local_110 != plVar1));
  }
  if (*param_3 != 0) {
    local_148 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb973f8,&local_e8,0);
  }
  plVar1 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar4 = (int *)((longlong)plVar1 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fad270 FUN_140fad270 body=1625 status=ok
// SIG undefined FUN_140fad270(void)

void FUN_140fad270(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint *puVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  wchar_t *pwVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  ulonglong local_160;
  uint *local_158;
  longlong *local_150;
  wchar_t *local_148;
  int local_140;
  longlong local_138;
  longlong *plStack_130;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *plStack_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  uVar20 = 0;
  FUN_14009b010(&local_108,2,0);
  uVar4 = *(uint *)(param_1 + 0x108);
  local_150 = param_3;
  if (uVar4 == 0) {
    uVar13 = 1;
    uVar6 = 0;
    iVar18 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x100);
    if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0xf0);
    }
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      iVar18 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar18 = uVar4 - 1;
      }
      uVar20 = 0;
      uVar13 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar13 = uVar20;
      }
      iVar18 = 0;
      do {
        if (uVar13 == uVar20) goto LAB_140fad610;
        iVar18 = iVar18 + 0x20;
        uVar6 = puVar7[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar20 = 0;
      iVar18 = 0;
    }
    uVar13 = (ulonglong)(-uVar6 & uVar6);
    uVar3 = uVar13 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar6 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar6) {
      uVar6 = uVar4;
    }
  }
  if (uVar6 != uVar4) {
    uVar12 = 0xffffffff;
    local_160 = (ulonglong)uVar4;
    local_158 = (uint *)(param_1 + 0xf0);
    do {
      lVar14 = *(longlong *)(param_1 + 0xe0);
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
      FUN_14009b010(&local_118,3,0);
      local_128 = 0;
      plStack_120 = (longlong *)0x0;
      FUN_14009b010(&local_128,1,0);
      local_138 = 0;
      plStack_130 = (longlong *)0x0;
      FUN_14009b010(&local_138,1,0);
      FUN_140b6c526(&local_148,*(undefined8 *)(lVar14 + (longlong)(int)uVar6 * 0x28));
      pwVar17 = L"";
      if (local_140 != 0) {
        pwVar17 = local_148;
      }
      local_78 = 0;
      if (pwVar17 == (wchar_t *)0x0) {
        local_70 = 0;
        local_68 = 0;
      }
      else {
        sVar8 = wcslen(pwVar17);
        FUN_1449b853c(&local_f8,pwVar17,sVar8 & 0xffffffff,1);
      }
      if ((local_128 != 0) && ((*(byte *)(local_128 + 1) & 2) == 0)) {
        FUN_140126aca();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_148 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar15 = local_138;
      puVar7 = local_158;
      lVar14 = lVar14 + (longlong)(int)uVar6 * 0x28;
      if (*(int *)(lVar14 + 0x18) == 0) {
        pwVar17 = L"";
LAB_140fad481:
        local_78 = 0;
        sVar8 = wcslen(pwVar17);
        FUN_1449b853c(&local_f8,pwVar17,sVar8 & 0xffffffff,1);
      }
      else {
        pwVar17 = *(wchar_t **)(lVar14 + 0x10);
        local_78 = 0;
        if (pwVar17 != (wchar_t *)0x0) goto LAB_140fad481;
        local_70 = 0;
        local_68 = 0;
      }
      if ((*(byte *)(lVar15 + 1) & 2) == 0) {
        FUN_140126aca(lVar15,local_70);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_118 != 0) {
        local_168 = 0;
        FUN_14014191c(local_118,&DAT_14cbce380,&local_128,0);
        if (local_118 != 0) {
          local_168 = 0;
          FUN_14014191c(local_118,&DAT_14cbce3a8,&local_138,0);
        }
      }
      if (local_108 != 0) {
        local_168 = 0;
        FUN_140141db6(local_108,&local_118,0,0);
      }
      plVar5 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_130 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_120 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_110 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar12 = uVar12 & ~(uint)uVar13;
      puVar16 = *(uint **)(param_1 + 0x100);
      if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
        puVar16 = puVar7;
      }
      uVar4 = *(uint *)(param_1 + 0x108);
      iVar19 = (int)uVar20;
      lVar14 = (longlong)iVar19;
      uVar6 = puVar16[lVar14] & uVar12;
      if (uVar6 == 0) {
        iVar9 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar9 = uVar4 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar19) {
          iVar10 = iVar19;
        }
        if (iVar19 < iVar9) {
          lVar15 = 0;
          do {
            uVar6 = puVar16[lVar14 + lVar15 + 1];
            if (uVar6 != 0) {
              uVar20 = (ulonglong)(iVar19 + (int)lVar15 + 1);
              uVar12 = 0xffffffff;
              goto LAB_140fad5de;
            }
            iVar18 = iVar18 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar14 != lVar15);
          uVar12 = 0xffffffff;
          iVar19 = iVar10;
        }
        uVar20 = (ulonglong)(iVar19 + 1);
        uVar6 = uVar4;
      }
      else {
LAB_140fad5de:
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar3 = uVar13 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar6 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar6) {
          uVar6 = uVar4;
        }
      }
    } while (uVar6 != (uint)local_160);
  }
LAB_140fad610:
  plVar5 = local_150;
  if (*local_150 != 0) {
    local_168 = 0;
    FUN_14014191c(*local_150,&DAT_14cbce358,&local_108,0);
  }
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  FUN_14009b010(&local_f8,1,0);
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  FUN_14009b010(&local_118,1,0);
  if ((local_f8 != 0) && ((*(byte *)(local_f8 + 1) & 2) == 0)) {
    pcVar11 = "false";
    if (*(char *)(param_1 + 0x130) != '\0') {
      pcVar11 = "true";
    }
    FUN_140126aca(local_f8,pcVar11);
  }
  lVar14 = *plVar5;
  if (lVar14 != 0) {
    local_168 = 0;
    FUN_14014191c(lVar14,&DAT_14cbce3d0,&local_f8,0);
    lVar14 = *plVar5;
    if (lVar14 != 0) {
      local_168 = 0;
      FUN_14014191c(lVar14,&DAT_14cbce3f8,&local_118,0);
    }
  }
  plVar5 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fad8d8 FUN_140fad8d8 body=124 status=ok
// SIG undefined FUN_140fad8d8(void)

undefined8 * FUN_140fad8d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5d0f40;
  if (param_1[0x124] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x940);
  }
  return param_1;
}



// FUNCTION 140fad960 FUN_140fad960 body=268 status=ok
// SIG undefined FUN_140fad960(void)

undefined8 * FUN_140fad960(undefined8 *param_1)

{
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14b8e3210;
  param_1[0x79] = &PTR_LAB_14b8e3880;
  *(undefined2 *)(param_1 + 0x7a) = 0x101;
  *(undefined4 *)(param_1 + 0x7b) = 0x42200000;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0xf00000d0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined1 *)((longlong)param_1 + 0x43c) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x85] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42f) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x459) = 0;
  *(undefined8 *)((longlong)param_1 + 0x461) = 0;
  *(undefined4 *)(param_1 + 0x90) = 2;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4a9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  param_1[0x9f] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  FUN_140e10a64(param_1);
  return param_1;
}



// FUNCTION 140fada6c thunk_FUN_1405f85e0 body=5 status=ok
// SIG undefined thunk_FUN_1405f85e0(void)

void thunk_FUN_1405f85e0(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x101);
  while( true ) {
    cVar2 = FUN_1437e848c(param_1);
    if (cVar2 == '\0') break;
    *(char *)(param_1 + 0x101) = *(char *)(param_1 + 0x101) + '\x01';
  }
  if (*(char *)(param_1 + 0x101) == cVar1) {
    return;
  }
  FUN_140696594(param_1);
  FUN_1405f7e3e(param_1);
  return;
}



// FUNCTION 140fada72 FUN_140fada72 body=79 status=ok
// SIG undefined FUN_140fada72(void)

void FUN_140fada72(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140d4761c(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fada87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140fadafc(&DAT_14cbe6af0);
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b677390;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x31) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x39) = 0;
  return;
}



// FUNCTION 140fadac2 FUN_140fadac2 body=58 status=ok
// SIG undefined FUN_140fadac2(void)

void FUN_140fadac2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140fadafc(&DAT_14cbe6af0);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b677390;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x31) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x39) = 0;
  return;
}



// FUNCTION 140fadafc FUN_140fadafc body=84 status=ok
// SIG undefined FUN_140fadafc(void)

void FUN_140fadafc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x480,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 9;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140fadb50 FUN_140fadb50 body=840 status=ok
// SIG undefined FUN_140fadb50(void)

longlong * FUN_140fadb50(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  
  if (param_2 == 0) {
    iVar11 = (int)param_1[1];
  }
  else {
    iVar11 = (int)param_1[1];
    if ((longlong)iVar11 == 0) {
      iVar11 = 0;
    }
    else {
      plVar9 = (longlong *)*param_1;
      lVar5 = (longlong)iVar11 * 0xb0;
      do {
        if (*plVar9 == param_2) {
          if (plVar9 != (longlong *)0x0) {
            return plVar9;
          }
          break;
        }
        plVar9 = plVar9 + 0x16;
        lVar5 = lVar5 + -0xb0;
      } while (lVar5 != 0);
    }
  }
  *(uint *)(param_1 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar11 + 1U) {
    FUN_1457da664(param_1,iVar11);
  }
  lVar5 = *param_1;
  lVar10 = (longlong)iVar11 * 0xb0;
  *(longlong *)(lVar5 + lVar10) = param_2;
  puVar1 = (undefined8 *)(lVar5 + 8 + lVar10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar10) = 2;
  puVar1 = (undefined8 *)(lVar5 + 0x1c + lVar10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + 0x2c + lVar10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar5 + 0x3c + lVar10) = 0;
  *(longlong **)(lVar5 + 0x40 + lVar10) = param_1;
  *(undefined8 *)(lVar5 + 0x48 + lVar10) = 0xffffffffffffffff;
  *(undefined8 *)(lVar5 + 0x58 + lVar10) = 0;
  *(undefined8 *)(lVar5 + 0x60 + lVar10) = 0x200000000;
  *(undefined8 *)(lVar5 + 0x70 + lVar10) = 0;
  *(undefined8 *)(lVar5 + 0x78 + lVar10) = 0x200000000;
  *(undefined1 *)(lVar5 + 0x80 + lVar10) = 0;
  *(undefined8 *)(lVar5 + 0x98 + lVar10) = 0;
  *(undefined8 *)(lVar5 + 0xa0 + lVar10) = 0x200000000;
  pbVar2 = (byte *)(lVar5 + 0xa8 + lVar10);
  *pbVar2 = *pbVar2 & 0xfe;
  *(int *)(*param_1 + 0x48 + lVar10) = iVar11;
  lVar5 = *(longlong *)(param_2 + 0x20);
  if (lVar5 == 0) {
    uVar6 = FUN_145c2bba6();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x20) = lVar5;
  }
  lVar7 = *(longlong *)(param_2 + 0x28);
  if (lVar7 == 0) {
    if ((lVar5 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) goto LAB_140fadcc4;
    plVar9 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar9 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar4 == '\0')) {
      *(undefined8 *)(param_2 + 0x28) = 0;
      goto LAB_140fadcc4;
    }
    uVar6 = (**(code **)(*plVar9 + 0x110))(plVar9);
    lVar7 = FUN_144aff482(uVar6,(longlong *)(param_2 + 0x18));
    *(longlong *)(param_2 + 0x28) = lVar7;
    if (lVar7 == 0) goto LAB_140fadcc4;
  }
  lVar5 = FUN_140fadb50(param_1,lVar7);
  *(undefined4 *)(*param_1 + lVar10 + 0x4c) = *(undefined4 *)(lVar5 + 0x48);
  FUN_140fade98(lVar5 + 0x50);
LAB_140fadcc4:
  if ((longlong)*(int *)(param_2 + 0x38) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x30);
    lVar5 = (longlong)*(int *)(param_2 + 0x38) * 0x18;
    do {
      lVar7 = plVar9[1];
      if (lVar7 == 0) {
        uVar6 = FUN_145c2bba6();
        lVar7 = FUN_14477b664(uVar6);
        plVar9[1] = lVar7;
      }
      lVar8 = plVar9[2];
      if (lVar8 == 0) {
        if ((lVar7 != 0) && (*plVar9 != 0)) {
          plVar3 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
            plVar9[2] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar8 = FUN_144aff482(uVar6,plVar9);
            plVar9[2] = lVar8;
            if (lVar8 != 0) {
              lVar7 = plVar9[1];
              goto LAB_140fadd8f;
            }
          }
        }
      }
      else {
LAB_140fadd8f:
        if (lVar7 == 0) {
          uVar6 = FUN_145c2bba6();
          lVar7 = FUN_14477b664(uVar6);
          plVar9[1] = lVar7;
          lVar8 = plVar9[2];
          if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar9 != 0)) {
            plVar3 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
              lVar8 = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar8 = FUN_144aff482(uVar6,plVar9);
            }
            plVar9[2] = lVar8;
          }
        }
        lVar8 = FUN_140fadb50(param_1,lVar8);
        lVar7 = *param_1;
        FUN_140fade98(lVar7 + lVar10 + 0x68,lVar8 + 0x48);
        FUN_140fade98(lVar8 + 0x50,lVar7 + lVar10 + 0x48);
      }
      plVar9 = plVar9 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  return (longlong *)(lVar10 + *param_1);
}



// FUNCTION 140fade98 FUN_140fade98 body=124 status=ok
// SIG undefined FUN_140fade98(void)

void FUN_140fade98(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 4;
    } while (lVar5 * 4 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_140fadf14(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + lVar5 * 4) = *param_2;
  return;
}



// FUNCTION 140fadf14 FUN_140fadf14 body=360 status=ok
// SIG undefined FUN_140fadf14(void)

void FUN_140fadf14(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar2 < 3) {
    uVar7 = 2;
  }
  else {
    if (*(uint *)(param_1 + 0x14) < 3) {
      uVar3 = 4;
      if (4 < uVar2) {
        uVar3 = uVar2;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
    }
    uVar5 = lVar4 * 4;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fadfa2;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_140fadfa2:
    uVar7 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar5 >> 2)) {
      uVar7 = uVar5 >> 2 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x14) = (int)uVar7;
  FUN_140fae07c(param_1,param_2,uVar7,4);
  return;
}



// FUNCTION 140fae07c FUN_140fae07c body=132 status=ok
// SIG undefined FUN_140fae07c(void)

void FUN_140fae07c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 140fae106 FUN_140fae106 body=228 status=ok
// SIG undefined FUN_140fae106(void)

longlong FUN_140fae106(void)

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
  if (DAT_14cab6bd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146340e96;
    local_38 = &LAB_1476c9536;
    local_40 = FUN_14634f381;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/UMG",L"WidgetAnimation",&DAT_14cab6bd8,FUN_14634f35a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6bd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fae1fc FUN_140fae1fc body=41 status=ok
// SIG undefined FUN_140fae1fc(void)

void FUN_140fae1fc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  return;
}



// FUNCTION 140fae226 FUN_140fae226 body=78 status=ok
// SIG undefined FUN_140fae226(void)

void FUN_140fae226(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b42f4c0;
  plVar3 = *(longlong **)(param_1 + 0xa8);
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
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 140fae274 FUN_140fae274 body=159 status=ok
// SIG undefined FUN_140fae274(void)

void FUN_140fae274(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b419dc0;
  FUN_140c02a9b(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[6];
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
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fae30f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140fae314 FUN_140fae314 body=31 status=ok
// SIG undefined FUN_140fae314(void)

undefined8 FUN_140fae314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fae334 FUN_140fae334 body=448 status=ok
// SIG undefined FUN_140fae334(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140fae334(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_80 [3];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1401c3ca6();
  if ((*(byte *)((longlong)param_1 + 0x9c) & 0x20) != 0) {
    param_2 = (longlong *)0x0;
    FUN_140b361ee(param_1,0);
    lVar1 = param_1[0x15];
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) {
      local_80[1] = 0;
      local_80[2] = 0;
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0x3ff00000;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_34 = 0x3ff00000;
      uStack_30 = 0;
      uStack_2c = 0x3ff00000;
      local_28 = 0x3ff0000000000000;
      uStack_20 = 0;
      local_80[0] = FUN_140fae4f6();
      if ((local_80[0] != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_80[0]);
      }
      local_88 = 0;
      param_2 = local_80;
      lVar1 = FUN_140fae5dc(lVar1,param_2,0,local_80 + 1);
      if (lVar1 != 0) {
        lVar2 = FUN_140fae4f6();
        param_2 = (longlong *)(longlong)*(int *)(lVar2 + 0x38);
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)param_2 * 8)
            == lVar2 + 0x30)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar1);
          }
          param_1[0x5d] = lVar1;
          param_2 = param_1;
          FUN_140d37f18(lVar1,param_1);
          *(longlong *)(param_1[0x5d] + 0x2b0) = param_1[3];
          FUN_140d37530();
          goto LAB_140fae37f;
        }
      }
      param_1[0x5d] = 0;
    }
  }
LAB_140fae37f:
  if ((*(byte *)(param_1 + 0x55) & 1) != 0) {
    (**(code **)(*param_1 + 0x5e8))(param_1);
  }
  lVar1 = param_1[0x59];
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x65) & 0x18) != 0x10)) {
    if (param_1[0x15] == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_1[0x15] + 100)) &
              0xffffffffffffff04;
      uVar4 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 2);
    }
    FUN_1405f107a(lVar1,uVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fae4f6 FUN_140fae4f6 body=228 status=ok
// SIG undefined FUN_140fae4f6(void)

longlong FUN_140fae4f6(void)

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
  if (DAT_14cb21fc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147f22b05;
    local_40 = &LAB_140aeed9f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxChildActorComponentReplicator",&DAT_14cb21fc8,FUN_146436c4a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb21fc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fae5dc FUN_140fae5dc body=1123 status=ok
// SIG undefined FUN_140fae5dc(void)

undefined8
FUN_140fae5dc(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    if (DAT_14cad00c8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1479b7a0c;
      local_70 = (code *)&LAB_1463b464e;
      local_78 = L"Engine";
      uStack_80 = 0;
      local_88 = CONCAT44(local_88._4_4_,0x10000005);
      local_90 = 8;
      local_98 = CONCAT44(local_98._4_4_,0x110);
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_140fae639;
    }
    if (((((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
           == DAT_14cad00c8 + 0x30)) && (*param_2 != 0)) &&
        (((*(uint *)(param_1 + 8) & 0x10) == 0 &&
         (lVar5 = *(longlong *)(param_1 + 0x20), lVar5 != 0)))) &&
       (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
        if (DAT_14cae8b20 == 0) {
          local_60 = &local_40;
          local_40 = (code *)&LAB_14355090c;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_14081d0ea;
          local_68 = &LAB_147b8e16d;
          local_70 = (code *)&LAB_140810a38;
          local_78 = L"Engine";
          uStack_80 = 0x800000000;
          local_88 = CONCAT44(local_88._4_4_,0x10000000);
          local_90 = 8;
          local_98 = CONCAT44(local_98._4_4_,0x3f0);
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar5 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_60 = &local_40;
          local_40 = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_14081d0ea;
          local_68 = &LAB_1468c5283;
          local_70 = FUN_142809da0;
          local_78 = L"Engine";
          uStack_80 = 0x400000000;
          local_88 = CONCAT44(local_88._4_4_,0x10000000);
          local_90 = 8;
          local_98 = CONCAT44(local_98._4_4_,0x50);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar3 = *(longlong *)(param_1 + 0x20);
        if (lVar3 != 0) {
          iVar2 = *(int *)(lVar5 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
               (lVar6 = lVar3,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
               lVar5 + 0x30)) {
              lVar6 = 0;
            }
          } while ((lVar6 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
          if ((lVar6 != 0) &&
             ((*(longlong *)(lVar6 + 0xc0) != 0 &&
              ((*(byte *)(*(longlong *)(lVar6 + 0xc0) + 0x155) & 0x20) == 0)))) {
            lVar5 = *param_2;
            if (lVar5 == 0) {
LAB_140fae76e:
              lVar5 = 0;
            }
            else {
              if (DAT_14cad00c8 == 0) {
                local_60 = &local_40;
                local_40 = FUN_144a7958c;
                local_50 = FUN_14081d0ea;
                local_58 = FUN_14081d0ea;
                local_68 = &LAB_1479b7a0c;
                local_70 = (code *)&LAB_1463b464e;
                local_78 = L"Engine";
                uStack_80 = 0;
                local_88 = CONCAT44(local_88._4_4_,0x10000005);
                local_90 = 8;
                local_98 = CONCAT44(local_98._4_4_,0x110);
                FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
                if (DAT_14cad00c8 == 0) goto LAB_140fae76e;
              }
              if ((*(int *)(lVar5 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
                  DAT_14cad00c8 + 0x30)) goto LAB_140fae76e;
              lVar5 = *param_2;
            }
            local_88 = 0;
            uStack_80 = 0;
            local_90 = local_90 & 0xffffff00;
            local_98 = 0;
            uVar4 = FUN_1417b3041(param_1,lVar5,0,0);
            FUN_140f9d52a(param_1,uVar4);
            if (param_5 == '\0') {
              FUN_141450f18(param_1,uVar4,param_3,param_4);
            }
            goto LAB_140fae63c;
          }
        }
      }
    }
  }
LAB_140fae639:
  uVar4 = 0;
LAB_140fae63c:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140faea40 FUN_140faea40 body=1773 status=ok
// SIG undefined FUN_140faea40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140faea40(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  double *pdVar11;
  uint uVar12;
  int iVar13;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  code **local_1e0;
  code *local_1d8;
  code *local_1d0;
  undefined8 *local_1c0;
  int local_1b8;
  longlong local_1b0;
  double local_1a8 [2];
  undefined1 local_198 [48];
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  code *local_148;
  longlong local_140;
  longlong *local_138;
  undefined8 *local_100;
  int local_f8;
  longlong local_f0;
  undefined4 local_e8;
  longlong local_d8;
  longlong *local_d0;
  undefined1 *local_c8 [2];
  undefined8 local_b8 [6];
  undefined1 *local_88;
  undefined ***local_78;
  undefined **local_68;
  ulonglong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (((param_1[0x15] != 0) && (*(char *)(param_1[0x15] + 0x178) != '\x03')) || (param_1[0x56] == 0)
     ) goto LAB_140faee86;
  (**(code **)(*param_1 + 0x5f0))(param_1);
  if ((*(byte *)(param_1 + 0x55) & 8) == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1[0x15];
  }
  uVar12 = 0;
  if (((*(byte *)(param_1 + 0x55) & 0x10) == 0) || (lVar8 = param_1[0x15], lVar8 == 0)) {
LAB_140faeaeb:
    lVar8 = 0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_1e0 = &local_148;
      local_148 = FUN_141030f22;
      local_1d0 = FUN_14081d0ea;
      local_1d8 = FUN_142b4754c;
      local_1e8 = &LAB_147c45ce0;
      local_1f0 = &LAB_1463f1ff4;
      local_1f8 = &DAT_149e063b2;
      local_200 = 0x4000000000;
      local_208 = 0x10000004;
      local_210 = 8;
      local_218 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) goto LAB_140faeaeb;
  }
  uVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar12 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar5 = *(uint *)(lVar15 + 0x10);
      bVar17 = uVar5 == 0;
      if (bVar17) {
        *(uint *)(lVar15 + 0x10) = uVar10;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar5 = uVar10;
      }
      uVar6 = (ulonglong)uVar5;
    }
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_FUN_14ac88bd0;
  local_60 = (ulonglong)uVar12 | uVar6 << 0x20;
  local_88 = &LAB_14386a9f4;
  pdVar11 = (double *)(param_1 + 0x48);
  pdVar14 = local_1a8;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *pdVar14 = *pdVar11;
    pdVar11 = pdVar11 + 1;
    pdVar14 = pdVar14 + 1;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a9) & 1) == 0) {
    local_168 = _DAT_149934d80;
    local_158 = 0x3ff0000000000000;
    uStack_150 = 0;
    dVar19 = (double)local_198._0_8_ * (double)local_198._0_8_ + local_1a8[0] * local_1a8[0];
    dVar22 = (double)local_198._8_8_ * (double)local_198._8_8_ + local_1a8[1] * local_1a8[1];
    auVar20._0_8_ = dVar19 + dVar22;
    auVar20._8_8_ = dVar19 + dVar22;
    auVar21 = sqrtpd(auVar20,auVar20);
    auVar21 = divpd(_DAT_149934d80,auVar21);
    auVar18._0_8_ = auVar21._0_8_ * (double)local_198._0_8_;
    auVar18._8_8_ = auVar21._8_8_ * (double)local_198._8_8_;
    local_1a8[0] = (double)((ulonglong)(local_1a8[0] * auVar21._0_8_) &
                           -(ulonglong)(1e-08 <= auVar20._0_8_));
    local_1a8[1] = (double)((ulonglong)(local_1a8[1] * auVar21._8_8_) &
                           -(ulonglong)(1e-08 <= auVar20._8_8_));
    auVar21._8_8_ = -(ulonglong)(1e-08 <= auVar20._8_8_);
    auVar21._0_8_ = -(ulonglong)(1e-08 <= auVar20._0_8_);
    local_198._0_16_ = blendvpd(_DAT_149935300,auVar18,auVar21);
  }
  local_1b0 = param_1[0x56];
  FUN_1411374ca(&local_148,param_1[0x15],&local_1b0,local_1a8);
  FUN_140faf1c8(&local_148,lVar16);
  FUN_140faf27a(&local_148,lVar8);
  local_c8[0] = local_88;
  local_b8[0] = 0;
  if (local_88 != (undefined1 *)0x0) {
    pppuVar7 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar7 = &local_68;
    }
    (*(code *)**pppuVar7)(pppuVar7,local_b8);
  }
  FUN_140faf186(&local_148,local_c8);
  local_1c0 = (undefined8 *)0x0;
  local_1b8 = 0;
  FUN_1446efa72(&local_1c0,0,3,0x10);
  puVar4 = local_1c0;
  local_1b8 = 3;
  *local_1c0 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  local_1c0[2] = lVar8;
  *local_1c0 = &PTR_FUN_14ac88bf0;
  local_1c0[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar12 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_1c0 + 3) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar13 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar13 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar13 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar9;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar13 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar13;
  puVar4[4] = &LAB_140eed980;
  *(undefined4 *)(puVar4 + 5) = 0;
  FUN_140244c74(local_140 + 0x120,&local_1c0);
  FUN_140faf12e(&local_148,&local_d8);
  plVar2 = local_d0;
  param_1[0x66] = local_d8;
  local_d8 = 0;
  plVar3 = (longlong *)param_1[0x67];
  if (local_d0 == plVar3) {
LAB_140faf097:
    plVar3 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_d0)(local_d0);
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
  else {
    local_d0 = (longlong *)0x0;
    param_1[0x67] = (longlong)plVar2;
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
      goto LAB_140faf097;
    }
  }
  if (local_1b8 == 0) {
LAB_140faedfa:
    if (local_1c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1c0 != (undefined8 *)0x0) {
    (**(code **)*local_1c0)(local_1c0,0);
    FUN_1446efa72(&local_1c0,0,0,0x10);
    local_1b8 = 0;
    goto LAB_140faedfa;
  }
  FUN_140861e20(local_f0,local_e8);
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 == 0) {
LAB_140faee3b:
    if (local_100 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_100 != (undefined8 *)0x0) {
    (**(code **)*local_100)(local_100,0);
    FUN_1446efa72(&local_100,0,0,0x10);
    local_f8 = 0;
    goto LAB_140faee3b;
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_138 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar1 = (int *)((longlong)local_138 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_138 + 0x10))(local_138);
      }
    }
  }
  if (local_88 != (undefined1 *)0x0) {
    pppuVar7 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar7 = local_78;
    }
    (*(code *)(*pppuVar7)[2])(pppuVar7);
  }
LAB_140faee86:
  if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140faf12e FUN_140faf12e body=88 status=ok
// SIG undefined FUN_140faf12e(void)

undefined8 * FUN_140faf12e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  
  FUN_140faf7b4(*(undefined8 *)(param_1 + 8),param_1);
  cVar2 = FUN_1405136b0(*(undefined8 *)(param_1 + 8));
  if (cVar2 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_140faf32c(param_1 + 8);
    *param_2 = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 140faf186 FUN_140faf186 body=66 status=ok
// SIG undefined FUN_140faf186(void)

longlong FUN_140faf186(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_140cf06ca(*(longlong *)(param_1 + 8) + 0xe0);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return param_1;
}



// FUNCTION 140faf1c8 FUN_140faf1c8 body=177 status=ok
// SIG undefined FUN_140faf1c8(void)

undefined1 * FUN_140faf1c8(undefined1 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (param_2 == 0) {
    *(undefined4 *)(lVar2 + 0x88) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(lVar2 + 0x88) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)(lVar2 + 0x8c) = iVar3;
  *param_1 = 1;
  return param_1;
}



// FUNCTION 140faf27a FUN_140faf27a body=178 status=ok
// SIG undefined FUN_140faf27a(void)

longlong FUN_140faf27a(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (param_2 == 0) {
    *(undefined4 *)(lVar2 + 0x90) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(lVar2 + 0x90) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)(lVar2 + 0x94) = iVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 140faf32c FUN_140faf32c body=869 status=ok
// SIG undefined FUN_140faf32c(void)

void FUN_140faf32c(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar9 = (undefined1 *)*param_1;
  if (puVar9 != (undefined1 *)0x0) {
    if (((((*(int *)(puVar9 + 0x84) != 0) && (uVar2 = *(uint *)(puVar9 + 0x80), -1 < (int)uVar2)) &&
         ((int)uVar2 < DAT_14c9647dc)) &&
        ((plVar11 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(puVar9 + 0x84))))) &&
       (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && ((longlong *)*plVar11 != (longlong *)0x0))))
    {
      lVar7 = (**(code **)(*(longlong *)*plVar11 + 0x180))();
      if (lVar7 == 0) {
        puVar9 = (undefined1 *)*param_1;
      }
      else {
        iVar6 = FUN_14490d72a(lVar7);
        puVar9 = (undefined1 *)*param_1;
        if (iVar6 != 3) {
          if ((((*(int *)(puVar9 + 0x84) != 0) &&
               (uVar2 = *(uint *)(puVar9 + 0x80), -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (((plVar11 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(puVar9 + 0x84))) &&
                ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))))) &&
             (((longlong *)*plVar11 != (longlong *)0x0 &&
              (lVar7 = (**(code **)(*(longlong *)*plVar11 + 0x180))(), uVar4 = DAT_14cb1ae68,
              lVar7 != 0)))) {
            if (DAT_14c9a7d10 == (undefined8 *)0x0) {
              DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
              *DAT_14c9a7d10 = 0;
              DAT_14c9a7d10[1] = 0;
              DAT_14c9a7d10[2] = 0;
              DAT_14c9a7d10[3] = 0;
            }
            FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,lVar7);
            plVar11 = local_30;
            if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
              plVar11 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(local_30 + 1) = (int)local_30[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
              UNLOCK();
              LOCK();
              plVar10 = local_30 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*local_30)();
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))();
                }
              }
            }
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_30 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*local_30)();
                LOCK();
                piVar1 = (int *)((longlong)local_30 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_30 + 0x10))();
                }
              }
            }
            if (plVar11 != (longlong *)0x0) {
              iVar6 = (int)plVar11[1];
              do {
                plVar10 = (longlong *)0x0;
                if (iVar6 == 0) break;
                LOCK();
                iVar5 = (int)plVar11[1];
                bVar13 = iVar6 == iVar5;
                if (bVar13) {
                  *(int *)(plVar11 + 1) = iVar6 + 1;
                  iVar5 = iVar6;
                }
                iVar6 = iVar5;
                UNLOCK();
                plVar10 = plVar11;
              } while (!bVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))();
              }
              if (plVar10 != (longlong *)0x0) {
                if (local_38 != 0) {
                  lVar7 = *(longlong *)(local_38 + 0x628);
                  iVar6 = *(int *)(local_38 + 0x630);
                  lVar12 = (longlong)iVar6;
                  if (lVar12 != 0) {
                    uVar8 = 0;
                    do {
                      if (*(longlong *)(lVar7 + uVar8) == *param_1) {
                        if ((int)(~uVar8 >> 4) != 0) goto LAB_140faf580;
                        break;
                      }
                      uVar8 = uVar8 + 0x10;
                    } while (lVar12 << 4 != uVar8);
                  }
                  *(uint *)(local_38 + 0x630) = iVar6 + 1U;
                  if (*(uint *)(local_38 + 0x634) < iVar6 + 1U) {
                    FUN_140faf6a6((longlong *)(local_38 + 0x628),iVar6);
                    lVar7 = *(longlong *)(local_38 + 0x628);
                  }
                  *(longlong *)(lVar7 + lVar12 * 0x10) = *param_1;
                  lVar3 = param_1[1];
                  *(longlong *)(lVar7 + 8 + lVar12 * 0x10) = lVar3;
                  if (lVar3 != 0) {
                    LOCK();
                    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                    UNLOCK();
                  }
                }
LAB_140faf580:
                LOCK();
                plVar11 = plVar10 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
            }
          }
          goto LAB_140faf58a;
        }
      }
    }
    *(undefined8 *)(puVar9 + 4) = 0;
    *puVar9 = 1;
    if ((*(int *)(puVar9 + 0x128) != 0) && (*(longlong *)(puVar9 + 0x120) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
LAB_140faf58a:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140faf6a6 FUN_140faf6a6 body=269 status=ok
// SIG undefined FUN_140faf6a6(void)

void FUN_140faf6a6(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140faf7b4 FUN_140faf7b4 body=3387 status=ok
// SIG undefined FUN_140faf7b4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140faf7b4(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  code **ppcVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined1 auStack_1058 [32];
  undefined4 local_1038;
  undefined4 local_1030;
  undefined4 local_1028;
  undefined8 local_1020;
  wchar_t *local_1018;
  undefined1 *local_1010;
  undefined1 *local_1008;
  code **local_1000;
  code *local_ff8;
  code *local_ff0;
  longlong local_fe0;
  code *local_fd8;
  longlong *local_fd0;
  longlong *local_fc8;
  code **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1058;
  if (((((*(int *)(param_1 + 0x84) == 0) || (uVar5 = *(uint *)(param_1 + 0x80), (int)uVar5 < 0)) ||
       (DAT_14c9647dc <= (int)uVar5)) ||
      ((plVar16 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)(param_1 + 0x84))))) ||
     (((*(uint *)(plVar16 + 1) & 0x10200000) != 0 ||
      (plVar16 = (longlong *)*plVar16, plVar16 == (longlong *)0x0)))) goto LAB_140fafd8b;
  if (((((*(int *)(param_1 + 0x8c) == 0) || (uVar5 = *(uint *)(param_1 + 0x88), (int)uVar5 < 0)) ||
       (DAT_14c9647dc <= (int)uVar5)) ||
      (((lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar12 == 0 ||
        (*(int *)(lVar12 + 0x10) != *(int *)(param_1 + 0x8c))) ||
       ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)))) && (*param_2 == '\0')) {
    if (DAT_14cac9ca8 == 0) {
      local_1000 = &local_fd8;
      local_fd8 = FUN_141030f22;
      local_ff0 = FUN_14081d0ea;
      local_ff8 = FUN_14081d0ea;
      local_1008 = &LAB_1478c0a72;
      local_1010 = &LAB_1417b2375;
      local_1018 = L"Engine";
      local_1020 = 0x1000000000;
      local_1028 = 0x10000004;
      local_1030 = 8;
      local_1038 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar16[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      uVar5 = *(uint *)((longlong)plVar16 + 0xc);
      *(uint *)(param_1 + 0x88) = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar6 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar6 = *(int *)(lVar12 + 0x10);
        bVar19 = iVar6 == 0;
        if (bVar19) {
          *(int *)(lVar12 + 0x10) = iVar15;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar19) {
          iVar6 = iVar15;
        }
      }
      *(int *)(param_1 + 0x8c) = iVar6;
    }
  }
  iVar6 = DAT_14c9647dc;
  lVar12 = DAT_14c9647c8;
  if (((((*(int *)(param_1 + 0x94) == 0) || (uVar5 = *(uint *)(param_1 + 0x90), (int)uVar5 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar5 ||
        (((lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar13 == 0 ||
          (*(int *)(lVar13 + 0x10) != *(int *)(param_1 + 0x94))) ||
         ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)))))) &&
      ((((param_2[1] == '\0' && (*(int *)(param_1 + 0x8c) != 0)) &&
        (uVar5 = *(uint *)(param_1 + 0x88), -1 < (int)uVar5)) &&
       (((int)uVar5 < DAT_14c9647dc &&
        (plVar9 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
        plVar9 != (longlong *)0x0)))))) &&
     (((int)plVar9[2] == *(int *)(param_1 + 0x8c) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))))
  {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar13 = *plVar9;
    }
    else {
      lVar13 = 0;
    }
    if (*(longlong *)(lVar13 + 0x1b0) == 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      iVar6 = 0;
    }
    else {
      uVar5 = *(uint *)(*(longlong *)(lVar13 + 0x1b0) + 0xc);
      *(uint *)(param_1 + 0x90) = uVar5;
      if ((int)uVar5 < iVar6) {
        lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(lVar12 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar6 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar6 = *(int *)(lVar12 + 0x10);
        bVar19 = iVar6 == 0;
        if (bVar19) {
          *(int *)(lVar12 + 0x10) = iVar15;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar19) {
          iVar6 = iVar15;
        }
      }
    }
    *(int *)(param_1 + 0x94) = iVar6;
  }
  plVar9 = (longlong *)(param_1 + 0x98);
  plVar8 = (longlong *)FUN_1400d690e(plVar9);
  if (plVar8 != (longlong *)0x0) {
    local_58 = (code **)0x0;
    local_50 = 0x1000000000;
    uVar10 = 0;
    (**(code **)(*plVar8 + 0x50))(plVar8,plVar16,&local_fd8,0);
    if (*(int *)(param_1 + 0x84) != 0) {
      uVar5 = *(uint *)(param_1 + 0x80);
      uVar10 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        puVar14 = (undefined8 *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((puVar14 == (undefined8 *)0x0) ||
           ((*(int *)(puVar14 + 2) != *(int *)(param_1 + 0x84) ||
            ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) {
          uVar10 = 0;
        }
        else {
          uVar10 = *puVar14;
        }
      }
    }
    uVar5 = FUN_140fb0704(&local_fd8,uVar10,0xbf800000);
    if (((int)uVar5 < 0) || ((int)local_50 <= (int)uVar5)) {
      if ((*plVar9 != 0) || (*(int *)(param_1 + 0xa0) != 0x4000)) {
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0xa0) = 0x4000;
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
    }
    else {
      ppcVar17 = &local_fd8;
      if (local_58 != (code **)0x0) {
        ppcVar17 = local_58;
      }
      lVar12 = FUN_1400d690e(ppcVar17 + (ulonglong)uVar5 * 0x1f);
      if (lVar12 == 0) {
        local_fe0 = 0;
      }
      else {
        puVar18 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar12 + 8) != (undefined4 *)0x0) {
          puVar18 = *(undefined4 **)(lVar12 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar12 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar12);
          DAT_14c947fe0 = lVar12;
        }
        FUN_140045924(DAT_14c947fe0,&local_fe0,puVar18,1);
      }
      if (*plVar9 != local_fe0) {
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      *plVar9 = local_fe0;
    }
    FUN_14034c5a2(&local_fd8);
  }
  plVar9 = (longlong *)FUN_1400d690e(plVar9);
  if (((((*(int *)(param_1 + 0xc4) == 0) || (uVar5 = *(uint *)(param_1 + 0xc0), (int)uVar5 < 0)) ||
       (DAT_14c9647dc <= (int)uVar5)) ||
      ((lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar12 == 0 ||
       (*(int *)(lVar12 + 0x10) != *(int *)(param_1 + 0xc4))))) ||
     ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)) {
    uVar10 = FUN_1401b0f18();
    plVar8 = (longlong *)(**(code **)(*plVar16 + 0x288))(plVar16,uVar10);
    if (plVar8 == (longlong *)0x0) {
LAB_140fb041e:
      cVar4 = '\x01';
    }
    else {
      uVar10 = FUN_1401b0f18();
      plVar11 = (longlong *)FUN_144718840(plVar8,uVar10);
      if (((plVar8 == plVar11) || (plVar11 == (longlong *)0x0)) ||
         (lVar12 = (**(code **)(*plVar11 + 0x28))(plVar11), lVar12 == 0)) goto LAB_140fb041e;
      FUN_1406c9d00(lVar12,&local_fd8);
      if (local_fd0 == (longlong *)0x0) {
        uVar10 = FUN_140927942();
        local_fd0 = (longlong *)FUN_14477b664(uVar10);
      }
      if (local_fc8 == (longlong *)0x0) {
        if ((((local_fd8 != (code *)0x0) && (local_fd0 != (longlong *)0x0)) &&
            (plVar8 = (longlong *)local_fd0[0x17], plVar8 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 != '\0')) {
          uVar10 = (**(code **)(*plVar8 + 0x110))(plVar8);
          local_fc8 = (longlong *)FUN_144aff482(uVar10,&local_fd8);
          if (local_fc8 != (longlong *)0x0) goto LAB_140fafb3b;
        }
        goto LAB_140fb041e;
      }
LAB_140fafb3b:
      cVar4 = (**(code **)(*local_fc8 + 0x20))();
      if (cVar4 == '\0') goto LAB_140fb041e;
      if (plVar9 == (longlong *)0x0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    if (DAT_14cac9ca8 == 0) {
      local_1000 = &local_fd8;
      local_fd8 = FUN_141030f22;
      local_ff0 = FUN_14081d0ea;
      local_ff8 = FUN_14081d0ea;
      local_1008 = &LAB_1478c0a72;
      local_1010 = &LAB_1417b2375;
      local_1018 = L"Engine";
      local_1020 = 0x1000000000;
      local_1028 = 0x10000004;
      local_1030 = 8;
      local_1038 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    bVar19 = true;
    if ((*(int *)(plVar16[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
        DAT_14cac9ca8 + 0x30)) {
      plVar8 = (longlong *)0x0;
LAB_140fafbaa:
      if (cVar4 != '\0') {
        uVar10 = FUN_1401b0f18();
        plVar11 = (longlong *)FUN_144718840(plVar16,uVar10);
        if (plVar11 == (longlong *)0x0) {
          if (!bVar19) goto LAB_140faff47;
        }
        else {
          lVar12 = (**(code **)(*plVar11 + 0x18))(plVar11);
          if (bVar19 || lVar12 != 0) {
LAB_140faff7a:
            if (lVar12 != 0) goto LAB_140faff83;
          }
          else {
LAB_140faff47:
            lVar12 = plVar8[0x36];
            if (lVar12 != 0) {
              uVar10 = FUN_1401b0f18();
              plVar8 = (longlong *)FUN_144718840(lVar12,uVar10);
              if (plVar8 != (longlong *)0x0) {
                lVar12 = (**(code **)(*plVar8 + 0x18))(plVar8);
                goto LAB_140faff7a;
              }
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    else {
      lVar12 = FUN_140fb058a(plVar16);
      if (lVar12 == 0) {
        bVar19 = false;
        plVar8 = plVar16;
        goto LAB_140fafbaa;
      }
LAB_140faff83:
      uVar5 = *(uint *)(lVar12 + 0xc);
      *(uint *)(param_1 + 0xc0) = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar6 = *(int *)(lVar12 + 0x10);
      if (iVar6 == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar6 = *(int *)(lVar12 + 0x10);
        bVar19 = iVar6 == 0;
        if (bVar19) {
          *(int *)(lVar12 + 0x10) = iVar15;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar19) {
          iVar6 = iVar15;
        }
        *(int *)(param_1 + 0xc4) = iVar6;
        if (iVar6 == 0) goto LAB_140fafbbe;
      }
      else {
        *(int *)(param_1 + 0xc4) = iVar6;
      }
      uVar5 = *(uint *)(param_1 + 0xc0);
      if (((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) &&
         ((lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar12 != 0 &&
          ((*(int *)(lVar12 + 0x10) == iVar6 && ((*(uint *)(lVar12 + 8) & 0x10200000) == 0))))))
      goto LAB_140fafce1;
    }
LAB_140fafbbe:
    lVar12 = (**(code **)(*plVar16 + 0x180))(plVar16);
    uVar7 = DAT_14cb1ae68;
    if (lVar12 != 0) {
      if (DAT_14c9a7d10 == (undefined8 *)0x0) {
        DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *DAT_14c9a7d10 = 0;
        DAT_14c9a7d10[1] = 0;
        DAT_14c9a7d10[2] = 0;
        DAT_14c9a7d10[3] = 0;
      }
      FUN_14005915a(DAT_14c9a7d10,&local_fd8,uVar7,lVar12);
      plVar8 = local_fd0;
      pcVar3 = local_fd8;
      if ((local_fd8 == (code *)0x0) || (local_fd0 == (longlong *)0x0)) {
        plVar8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_fd0 + 1) = (int)local_fd0[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)local_fd0 + 0xc) = *(int *)((longlong)local_fd0 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar11 = local_fd0 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_fd0)(local_fd0);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      plVar11 = local_fd0;
      if (local_fd0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_fd0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_fd0)(local_fd0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        iVar6 = (int)plVar8[1];
        do {
          plVar11 = (longlong *)0x0;
          if (iVar6 == 0) break;
          LOCK();
          iVar15 = (int)plVar8[1];
          bVar19 = iVar6 == iVar15;
          if (bVar19) {
            *(int *)(plVar8 + 1) = iVar6 + 1;
            iVar15 = iVar6;
          }
          iVar6 = iVar15;
          UNLOCK();
          plVar11 = plVar8;
        } while (!bVar19);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        if (plVar11 != (longlong *)0x0) {
          if (pcVar3 != (code *)0x0) {
            lVar12 = FUN_141136cb6(pcVar3);
            if (lVar12 == 0) {
              *(undefined4 *)(param_1 + 0xc0) = 0;
              iVar6 = 0;
            }
            else {
              uVar5 = *(uint *)(lVar12 + 0xc);
              *(uint *)(param_1 + 0xc0) = uVar5;
              if ((int)uVar5 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar6 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar6 = DAT_14c964868 + 1;
                UNLOCK();
                iVar15 = DAT_14c964868 + 1;
                bVar19 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar6;
                if (bVar19) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar15);
                }
                LOCK();
                iVar6 = *(int *)(lVar12 + 0x10);
                bVar19 = iVar6 == 0;
                if (bVar19) {
                  *(int *)(lVar12 + 0x10) = iVar15;
                  iVar6 = 0;
                }
                UNLOCK();
                if (bVar19) {
                  iVar6 = iVar15;
                }
              }
            }
            *(int *)(param_1 + 0xc4) = iVar6;
          }
          LOCK();
          plVar8 = plVar11 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
    }
  }
LAB_140fafce1:
  if (*(longlong *)(param_1 + 0xb0) != 0) goto LAB_140fafd8b;
  if (plVar9 == (longlong *)0x0) {
LAB_140fafd20:
    uVar7 = 10;
  }
  else {
    cVar4 = (**(code **)(*plVar9 + 0x80))(plVar9);
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*plVar9 + 0x88))(plVar9);
      if (cVar4 == '\0') goto LAB_140fafd20;
      uVar7 = 0x1e;
    }
    else {
      uVar7 = 0x8c;
    }
  }
  *(undefined4 *)(param_2 + 0x68) = uVar7;
  *(longlong **)(param_2 + 0x18) = plVar9;
  FUN_140fb04f0(param_2 + 0x18,plVar16);
  FUN_140fb05f2(param_2 + 0x18,&local_fd8);
  plVar9 = local_fd0;
  *(code **)(param_1 + 0xb0) = local_fd8;
  local_fd8 = (code *)0x0;
  plVar16 = *(longlong **)(param_1 + 0xb8);
  if (local_fd0 != plVar16) {
    local_fd0 = (longlong *)0x0;
    *(longlong **)(param_1 + 0xb8) = plVar9;
    if (plVar16 == (longlong *)0x0) goto LAB_140fafd8b;
    LOCK();
    plVar9 = plVar16 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  plVar16 = local_fd0;
  if (local_fd0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_fd0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_fd0)(local_fd0);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
LAB_140fafd8b:
  if ((local_48 ^ (ulonglong)auStack_1058) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fb04f0 FUN_140fb04f0 body=153 status=ok
// SIG undefined FUN_140fb04f0(void)

longlong FUN_140fb04f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x10) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return param_1;
}



// FUNCTION 140fb058a FUN_140fb058a body=102 status=ok
// SIG undefined FUN_140fb058a(void)

void FUN_140fb058a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1407fc5ce();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb05f2 FUN_140fb05f2 body=273 status=ok
// SIG undefined FUN_140fb05f2(void)

longlong * FUN_140fb05f2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1437e863e();
  plVar3 = (longlong *)FUN_14001cc68(0xb8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ab63480;
  plVar3[2] = 0;
  plVar3[3] = 0;
  FUN_140697b8a(plVar3 + 4,param_1);
  *(undefined4 *)(plVar3 + 0xf) = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  *(undefined1 *)(plVar3 + 0x16) = 0;
  local_50 = plVar3 + 2;
  local_48 = plVar3;
  FUN_140697c1a(&local_50,plVar3 + 2);
  plVar3 = local_48;
  *param_2 = (longlong)local_50;
  param_2[1] = (longlong)local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
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
  FUN_1406979e8(*param_2);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb0704 FUN_140fb0704 body=439 status=ok
// SIG undefined FUN_140fb0704(void)

ulonglong FUN_140fb0704(longlong param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 < 0.0) {
    uVar3 = rand();
    param_3 = (float)(uVar3 & 0x7fff) / 32767.0;
  }
  local_60 = (undefined1 *)0x0;
  local_54 = 0x20;
  local_58 = *(int *)(param_1 + 0xf88);
  uVar6 = (ulonglong)local_58;
  if (0x20 < uVar6) {
    FUN_140fb08bc(local_e0);
  }
  puVar4 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar4 = local_e0;
  }
  memset(puVar4,0,uVar6 << 2);
  if (*(int *)(param_1 + 0xf88) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    fVar12 = 0.0;
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0xf80);
      if (*(longlong *)(param_1 + 0xf80) == 0) {
        lVar5 = param_1;
      }
      uVar10 = FUN_14034c8ba(lVar5 + lVar7,param_2);
      puVar4 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar4 = local_e0;
      }
      *(undefined4 *)(puVar4 + lVar9 * 4) = uVar10;
      puVar4 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar4 = local_e0;
      }
      fVar12 = fVar12 + *(float *)(puVar4 + lVar9 * 4);
      lVar9 = lVar9 + 1;
      iVar1 = *(int *)(param_1 + 0xf88);
      lVar7 = lVar7 + 0xf8;
    } while (lVar9 < iVar1);
    uVar6 = 0xffffffff;
    if (0 < iVar1) {
      fVar11 = 0.0;
      uVar8 = 0;
      do {
        bVar2 = fVar11 <= param_3 * fVar12;
        fVar11 = fVar11 + *(float *)(puVar4 + uVar8 * 4);
        if ((bVar2) && (param_3 * fVar12 <= fVar11)) {
          uVar6 = uVar8 & 0xffffffff;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((longlong)iVar1 != uVar8);
    }
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140fb08bc FUN_140fb08bc body=359 status=ok
// SIG undefined FUN_140fb08bc(void)

void FUN_140fb08bc(longlong param_1,int param_2)

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
  if (uVar2 < 0x21) {
    uVar6 = 0x20;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x20 < *(uint *)(param_1 + 0x8c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 4;
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
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140fb0943;
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
LAB_140fb0943:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x8c) = (int)uVar6;
  FUN_140fb0a24(param_1,param_2,uVar6,4);
  return;
}



// FUNCTION 140fb0a24 FUN_140fb0a24 body=142 status=ok
// SIG undefined FUN_140fb0a24(void)

void FUN_140fb0a24(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 140fb0ab2 FUN_140fb0ab2 body=37 status=ok
// SIG undefined FUN_140fb0ab2(void)

void FUN_140fb0ab2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x200);
  FUN_140fb0ad8(param_2);
  return;
}



// FUNCTION 140fb0ad8 FUN_140fb0ad8 body=303 status=ok
// SIG undefined FUN_140fb0ad8(void)

void FUN_140fb0ad8(undefined8 *param_1)

{
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0xffffffff;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3ff00000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0x3ff0000000000000;
  param_1[0x36] = 0x3ff0000000000000;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  param_1[0x39] = 0;
  *param_1 = &PTR_FUN_14ab90cd0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return;
}



// FUNCTION 140fb0c08 FUN_140fb0c08 body=2406 status=ok
// SIG undefined FUN_140fb0c08(void)

void FUN_140fb0c08(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  undefined1 *puVar16;
  int *piVar17;
  longlong lVar18;
  void *_Src;
  ulonglong uVar19;
  uint *puVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  ulonglong local_b0;
  char local_a8;
  undefined7 uStack_a7;
  undefined4 local_a0;
  uint local_98 [6];
  longlong local_80;
  uint local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar18 = *param_2;
  if (((((lVar18 == 0) || (*(int *)(lVar18 + 0x1c) == 0)) ||
       (uVar5 = *(uint *)(lVar18 + 0x18), (int)uVar5 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar5 ||
       (plVar11 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0)))) ||
     (((int)plVar11[2] != *(int *)(lVar18 + 0x1c) ||
      (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar18 = *plVar11, lVar18 == 0))))))
  goto LAB_140fb1374;
  lVar6 = FUN_140fb15e0();
  if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     ((*(longlong *)
        (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       != lVar6 + 0x30 || (lVar18 + 0x520 == 0)))) goto LAB_140fb1374;
  FUN_1406f1bc8(lVar18 + 0x520,&local_a8);
  cVar2 = FUN_1401144ce(&local_a8);
  if (cVar2 != '\0') {
    local_b8 = (longlong *)(param_1 + 0x6e0);
    if (local_a8 == '\x01') {
      FUN_1447a97f4(&local_70,local_98);
      if (0 < local_6c) {
        lVar18 = 0;
        uVar19 = 0;
        iVar3 = local_6c;
        uVar5 = DAT_14c948000;
        do {
          bVar21 = local_70 != 0;
          bVar22 = local_70 != uVar5;
          piVar15 = &DAT_14c948620;
          piVar17 = (int *)&DAT_14c948618;
          if (bVar22 && bVar21) {
            puVar16 = local_68;
            if (0 < local_4c) {
              puVar16 = local_58;
            }
            if (1 < iVar3) {
              puVar16 = local_58;
            }
            piVar15 = (int *)(puVar16 + lVar18 + 8);
            piVar17 = (int *)(puVar16 + lVar18);
          }
          if ((*piVar17 == DAT_14cb7beb0) && (*piVar15 == DAT_14cb7beb8)) {
LAB_140fb0ef6:
            FUN_1402b5374(&local_70,uVar19 & 0xffffffff,0);
            iVar3 = local_6c;
            uVar5 = DAT_14c948000;
          }
          else {
            piVar15 = &DAT_14c948620;
            piVar17 = (int *)&DAT_14c948618;
            if (bVar22 && bVar21) {
              puVar16 = local_68;
              if (0 < local_4c) {
                puVar16 = local_58;
              }
              if (1 < iVar3) {
                puVar16 = local_58;
              }
              piVar15 = (int *)(puVar16 + lVar18 + 8);
              piVar17 = (int *)(puVar16 + lVar18);
            }
            if ((*piVar17 == DAT_14cb7bec8) && (*piVar15 == DAT_14cb7bed0)) goto LAB_140fb0ef6;
            piVar15 = &DAT_14c948620;
            piVar17 = (int *)&DAT_14c948618;
            if (bVar22 && bVar21) {
              puVar16 = local_68;
              if (0 < local_4c) {
                puVar16 = local_58;
              }
              if (1 < iVar3) {
                puVar16 = local_58;
              }
              piVar15 = (int *)(puVar16 + lVar18 + 8);
              piVar17 = (int *)(puVar16 + lVar18);
            }
            if ((*piVar17 == DAT_14cb7bee0) && (*piVar15 == DAT_14cb7bee8)) goto LAB_140fb0ef6;
            piVar15 = &DAT_14c948620;
            piVar17 = (int *)&DAT_14c948618;
            if (bVar22 && bVar21) {
              puVar16 = local_68;
              if (0 < local_4c) {
                puVar16 = local_58;
              }
              if (1 < iVar3) {
                puVar16 = local_58;
              }
              piVar15 = (int *)(puVar16 + lVar18 + 8);
              piVar17 = (int *)(puVar16 + lVar18);
            }
            if ((*piVar17 == DAT_14cb7bef8) && (*piVar15 == DAT_14cb7bf00)) goto LAB_140fb0ef6;
            piVar15 = &DAT_14c948620;
            piVar17 = (int *)&DAT_14c948618;
            if (bVar22 && bVar21) {
              puVar16 = local_68;
              if (0 < local_4c) {
                puVar16 = local_58;
              }
              if (1 < iVar3) {
                puVar16 = local_58;
              }
              piVar15 = (int *)(puVar16 + lVar18 + 8);
              piVar17 = (int *)(puVar16 + lVar18);
            }
            if ((*piVar17 == DAT_14cb7bf10) && (*piVar15 == DAT_14cb7bf18)) goto LAB_140fb0ef6;
          }
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 0xc;
        } while ((longlong)uVar19 < (longlong)iVar3);
      }
      local_98[0] = local_70;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_140fb1570(local_b8,local_98[0],&local_a8);
    if (iVar3 == -1) {
      lVar18 = *param_2;
      if (*(int *)(param_1 + 0x714) == 0) {
        uVar5 = *(uint *)(param_1 + 0x6e8);
        uVar19 = (ulonglong)uVar5;
        *(uint *)(param_1 + 0x6e8) = uVar5 + 1;
        if (*(uint *)(param_1 + 0x6ec) == uVar5) {
          FUN_1406fba42(local_b8,uVar5);
        }
        iVar3 = *(int *)(param_1 + 0x708);
        if (iVar3 == 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar4 = iVar3 + -1;
          }
          iVar4 = iVar4 >> 5;
        }
        lVar12 = param_1 + 0x6f0;
        iVar10 = iVar3 + 1;
        iVar14 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar14 = iVar3;
        }
        if (iVar14 >> 5 == iVar4) {
          *(int *)(param_1 + 0x708) = iVar10;
        }
        else {
          if (*(int *)(param_1 + 0x70c) <= iVar3) {
            if (iVar3 + 0x20U < 0xa0) {
              iVar10 = 0x80;
              iVar4 = iVar3;
            }
            else {
              uVar13 = iVar3 + 0x20U >> 5;
              if (*(int *)(param_1 + 0x70c) + 0x1fU < 0xa0) {
                uVar9 = 4;
                if (4 < uVar13) {
                  uVar9 = uVar13;
                }
              }
              else {
                uVar9 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
              }
              uVar7 = FUN_144a3809e(uVar9 << 2,0);
              iVar4 = (int)(uVar7 >> 2);
              iVar10 = -0x20;
              if ((int)uVar13 <= iVar4) {
                iVar10 = iVar4 << 5;
              }
              iVar4 = *(int *)(param_1 + 0x708);
            }
            *(int *)(param_1 + 0x70c) = iVar10;
            FUN_1446efbd8(lVar12,iVar4);
            iVar10 = *(int *)(param_1 + 0x708) + 1;
          }
          iVar4 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar4 = iVar10;
          }
          *(int *)(param_1 + 0x708) = iVar10;
          if (iVar10 % 0x20 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x700);
            if (*(longlong *)(param_1 + 0x700) == 0) {
              lVar6 = lVar12;
            }
            bVar8 = -(char)(iVar10 % 0x20);
            *(uint *)(lVar6 + (longlong)(iVar4 >> 5) * 4) =
                 (uint)(*(int *)(lVar6 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
                 (bVar8 & 0x1f);
          }
        }
        lVar6 = (longlong)(int)uVar5;
        if (*(longlong *)(param_1 + 0x700) != 0) {
          lVar12 = *(longlong *)(param_1 + 0x700);
        }
        bVar8 = (byte)iVar3 & 0x1f;
        puVar20 = (uint *)(lVar12 + (longlong)(iVar14 >> 5) * 4);
        *puVar20 = *puVar20 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      }
      else {
        uVar19 = (ulonglong)*(uint *)(param_1 + 0x710);
        lVar6 = (longlong)(int)*(uint *)(param_1 + 0x710);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x6e0) + 4 + lVar6 * 0x50);
        *(int *)(param_1 + 0x710) = iVar3;
        iVar4 = *(int *)(param_1 + 0x714) + -1;
        *(int *)(param_1 + 0x714) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x6e0) + (longlong)iVar3 * 0x50) = 0xffffffff;
        }
      }
      iVar3 = (int)uVar19;
      lVar12 = param_1 + 0x6f0;
      if (*(longlong *)(param_1 + 0x700) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x700);
      }
      iVar4 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      puVar20 = (uint *)(lVar12 + (longlong)(iVar4 >> 5) * 4);
      *puVar20 = *puVar20 | 1 << ((byte)uVar19 & 0x1f);
      lVar12 = *(longlong *)(param_1 + 0x6e0);
      pcVar1 = (char *)(lVar12 + lVar6 * 0x50);
      puVar20 = (uint *)(pcVar1 + 0x10);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      puVar20[0] = 0;
      puVar20[1] = 0;
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x28] = '\0';
      pcVar1[0x29] = '\0';
      pcVar1[0x2a] = '\0';
      pcVar1[0x2b] = '\0';
      pcVar1[0x2c] = '\0';
      pcVar1[0x2d] = '\0';
      pcVar1[0x2e] = '\0';
      pcVar1[0x2f] = '\0';
      pcVar1[0x30] = '\0';
      pcVar1[0x31] = '\0';
      pcVar1[0x32] = '\0';
      pcVar1[0x33] = '\0';
      pcVar1[0x34] = '\0';
      pcVar1[0x35] = '\0';
      pcVar1[0x36] = '\0';
      pcVar1[0x37] = '\0';
      *(undefined4 *)(pcVar1 + 8) = local_a0;
      *(ulonglong *)pcVar1 = CONCAT71(uStack_a7,local_a8);
      local_b0 = uVar19;
      FUN_1447715ec(puVar20);
      *(undefined8 *)(pcVar1 + 0x38) = *(undefined8 *)(lVar18 + 8);
      *(undefined8 *)(pcVar1 + 0x40) = *(undefined8 *)(lVar18 + 0x10);
      pcVar1[0x48] = -1;
      pcVar1[0x49] = -1;
      pcVar1[0x4a] = -1;
      pcVar1[0x4b] = -1;
      if (*pcVar1 == '\x01') {
        FUN_1447a97f4(&local_70,puVar20);
        if (0 < local_6c) {
          lVar18 = 0;
          uVar19 = 0;
          iVar3 = local_6c;
          uVar5 = DAT_14c948000;
          do {
            bVar21 = local_70 != 0;
            bVar22 = local_70 != uVar5;
            piVar15 = (int *)&DAT_14c948618;
            piVar17 = &DAT_14c948620;
            if (bVar22 && bVar21) {
              puVar16 = local_68;
              if (0 < local_4c) {
                puVar16 = local_58;
              }
              if (1 < iVar3) {
                puVar16 = local_58;
              }
              piVar17 = (int *)(puVar16 + lVar18 + 8);
              piVar15 = (int *)(puVar16 + lVar18);
            }
            if ((*piVar15 == DAT_14cb7beb0) && (*piVar17 == DAT_14cb7beb8)) {
LAB_140fb1271:
              FUN_1402b5374(&local_70,uVar19 & 0xffffffff,0);
              iVar3 = local_6c;
              uVar5 = DAT_14c948000;
            }
            else {
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar16 = local_68;
                if (0 < local_4c) {
                  puVar16 = local_58;
                }
                if (1 < iVar3) {
                  puVar16 = local_58;
                }
                piVar15 = (int *)(puVar16 + lVar18 + 8);
                piVar17 = (int *)(puVar16 + lVar18);
              }
              if ((*piVar17 == DAT_14cb7bec8) && (*piVar15 == DAT_14cb7bed0)) goto LAB_140fb1271;
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar16 = local_68;
                if (0 < local_4c) {
                  puVar16 = local_58;
                }
                if (1 < iVar3) {
                  puVar16 = local_58;
                }
                piVar15 = (int *)(puVar16 + lVar18 + 8);
                piVar17 = (int *)(puVar16 + lVar18);
              }
              if ((*piVar17 == DAT_14cb7bee0) && (*piVar15 == DAT_14cb7bee8)) goto LAB_140fb1271;
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar16 = local_68;
                if (0 < local_4c) {
                  puVar16 = local_58;
                }
                if (1 < iVar3) {
                  puVar16 = local_58;
                }
                piVar15 = (int *)(puVar16 + lVar18 + 8);
                piVar17 = (int *)(puVar16 + lVar18);
              }
              if ((*piVar17 == DAT_14cb7bef8) && (*piVar15 == DAT_14cb7bf00)) goto LAB_140fb1271;
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar16 = local_68;
                if (0 < local_4c) {
                  puVar16 = local_58;
                }
                if (1 < iVar3) {
                  puVar16 = local_58;
                }
                piVar15 = (int *)(puVar16 + lVar18 + 8);
                piVar17 = (int *)(puVar16 + lVar18);
              }
              if ((*piVar17 == DAT_14cb7bf10) && (*piVar15 == DAT_14cb7bf18)) goto LAB_140fb1271;
            }
            uVar19 = uVar19 + 1;
            lVar18 = lVar18 + 0xc;
          } while ((longlong)uVar19 < (longlong)iVar3);
        }
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        local_70 = *puVar20;
      }
      _Src = (void *)(lVar12 + lVar6 * 0x50);
      iVar3 = 1;
      if (*(int *)(param_1 + 0x6e8) - *(int *)(param_1 + 0x714) == 1) {
        uVar5 = 1;
      }
      else {
        iVar4 = FUN_140fb1570(local_b8,local_70,_Src);
        if (iVar4 != -1) {
          lVar18 = *local_b8;
          if (*(longlong *)(lVar18 + 0x28 + (longlong)iVar4 * 0x50) != 0) {
            FUN_1400020a8();
          }
          memmove((void *)(lVar18 + (longlong)iVar4 * 0x50),_Src,0x48);
          FUN_1489b6348(local_b8,local_b0);
          goto LAB_140fb1366;
        }
        uVar5 = *(int *)(param_1 + 0x6e8) - *(int *)(param_1 + 0x714);
        if (3 < uVar5) {
          uVar19 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar18 & 0x1f);
        }
      }
      if (((int)uVar5 < 1) || (iVar3 <= *(int *)(param_1 + 0x728))) {
        local_70 = *(int *)(param_1 + 0x728) - 1U & local_70;
        *(uint *)((longlong)_Src + 0x4c) = local_70;
        lVar18 = *(longlong *)(param_1 + 0x720);
        if (*(longlong *)(param_1 + 0x720) == 0) {
          lVar18 = param_1 + 0x718;
        }
        *(undefined4 *)((longlong)_Src + 0x48) =
             *(undefined4 *)
              (lVar18 + ((longlong)*(int *)(param_1 + 0x728) - 1U & (longlong)(int)local_70) * 4);
        lVar18 = *(longlong *)(param_1 + 0x720);
        if (*(longlong *)(param_1 + 0x720) == 0) {
          lVar18 = param_1 + 0x718;
        }
        *(int *)(lVar18 + ((longlong)*(int *)(param_1 + 0x728) - 1U & (longlong)(int)local_70) * 4)
             = (int)local_b0;
      }
      else {
        *(int *)(param_1 + 0x728) = iVar3;
        FUN_140fb16c6(local_b8);
      }
    }
  }
LAB_140fb1366:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_140fb1374:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fb1570 FUN_140fb1570 body=112 status=ok
// SIG undefined FUN_140fb1570(void)

int FUN_140fb1570(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_14493b798(lVar3 + (longlong)iVar4 * 0x50,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140fb15e0 FUN_140fb15e0 body=228 status=ok
// SIG undefined FUN_140fb15e0(void)

longlong FUN_140fb15e0(void)

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
  if (DAT_14cb5edf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464182ea;
    local_38 = &LAB_1486b0c83;
    local_40 = &LAB_1464e4135;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x618;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameSpawnEncounter",&DAT_14cb5edf0,&DAT_1486b0c82);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5edf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb16c6 FUN_140fb16c6 body=1159 status=ok
// SIG undefined FUN_140fb16c6(void)

void FUN_140fb16c6(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  longlong **pplVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 != 0) {
    plVar3 = param_1 + 7;
    FUN_144a1cbf0(plVar3,0,uVar10,4);
    if (0 < (int)uVar10) {
      uVar2 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar3;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
             0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar10 != uVar2);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] == 0) {
      uVar17 = 1;
      local_98 = 0xffffffff;
      local_60._4_4_ = 0;
      uVar16 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      uVar16 = local_70 & 0xffffffff;
      uVar17 = local_70 >> 0x20;
      local_98 = (uint)local_60;
    }
    local_80 = local_68;
    if (local_60._4_4_ < (int)local_68[3]) {
      iVar9 = local_60._4_4_;
      iVar14 = local_58;
      local_88 = plVar3;
      do {
        local_78 = *param_1 + (longlong)iVar9 * 0x50;
        local_94 = iVar14;
        local_90 = uVar16;
        if (*(char *)(*param_1 + (longlong)iVar9 * 0x50) == '\x01') {
          FUN_1447a97f4(&local_70,local_78 + 0x10);
          if (0 < local_70._4_4_) {
            lVar15 = 0;
            uVar16 = 0;
            iVar14 = local_70._4_4_;
            iVar4 = DAT_14c948000;
            do {
              bVar18 = (int)local_70 != 0;
              bVar19 = (int)local_70 != iVar4;
              piVar11 = &DAT_14c948620;
              piVar12 = (int *)&DAT_14c948618;
              if (bVar19 && bVar18) {
                pplVar13 = &local_68;
                if (0 < local_4c) {
                  pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                if (1 < iVar14) {
                  pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                piVar11 = (int *)((longlong)pplVar13 + lVar15 + 8);
                piVar12 = (int *)((longlong)pplVar13 + lVar15);
              }
              if ((*piVar12 == DAT_14cb7beb0) && (*piVar11 == DAT_14cb7beb8)) {
LAB_140fb19af:
                FUN_1402b5374(&local_70,uVar16 & 0xffffffff,0);
                iVar14 = local_70._4_4_;
                iVar4 = DAT_14c948000;
              }
              else {
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar14) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar15 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar15);
                }
                if ((*piVar12 == DAT_14cb7bec8) && (*piVar11 == DAT_14cb7bed0)) goto LAB_140fb19af;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar14) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar15 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar15);
                }
                if ((*piVar12 == DAT_14cb7bee0) && (*piVar11 == DAT_14cb7bee8)) goto LAB_140fb19af;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar14) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar15 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar15);
                }
                if ((*piVar12 == DAT_14cb7bef8) && (*piVar11 == DAT_14cb7bf00)) goto LAB_140fb19af;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar14) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar15 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar15);
                }
                if ((*piVar12 == DAT_14cb7bf10) && (*piVar11 == DAT_14cb7bf18)) goto LAB_140fb19af;
              }
              uVar16 = uVar16 + 1;
              lVar15 = lVar15 + 0xc;
            } while ((longlong)uVar16 < (longlong)iVar14);
          }
          iVar14 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar14 = *(int *)(local_78 + 0x10);
        }
        uVar16 = (longlong)iVar14 & (longlong)(int)param_1[9] - 1U;
        iVar14 = (int)uVar16;
        *(int *)(local_78 + 0x4c) = iVar14;
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = local_88;
        }
        *(undefined4 *)(local_78 + 0x48) =
             *(undefined4 *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = local_88;
        }
        *(int *)((longlong)plVar3 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9
        ;
        uVar10 = local_98 & ~(uint)uVar17;
        plVar3 = (longlong *)local_80[2];
        if ((longlong *)local_80[2] == (longlong *)0x0) {
          plVar3 = local_80;
        }
        iVar4 = (int)local_80[3];
        iVar9 = (int)local_90;
        lVar15 = (longlong)iVar9;
        uVar2 = *(uint *)((longlong)plVar3 + lVar15 * 4) & uVar10;
        uVar16 = local_90;
        iVar14 = local_94;
        if (uVar2 == 0) {
          iVar5 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar5 = iVar4 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar6 = iVar5;
          if (iVar5 < iVar9) {
            iVar6 = iVar9;
          }
          if (iVar5 <= iVar9) break;
          lVar8 = 0;
          while( true ) {
            iVar14 = iVar14 + 0x20;
            uVar2 = *(uint *)((longlong)plVar3 + lVar8 * 4 + lVar15 * 4 + 4);
            if (uVar2 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar6 - lVar15 == lVar8) goto LAB_140fb1b0e;
          }
          local_98 = 0xffffffff;
          uVar16 = (ulonglong)(iVar9 + (int)lVar8 + 1);
          uVar10 = local_98;
        }
        local_98 = uVar10;
        uVar17 = (ulonglong)(-uVar2 & uVar2);
        uVar1 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar9 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar4);
    }
  }
LAB_140fb1b0e:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb1b4e FUN_140fb1b4e body=268 status=ok
// SIG undefined FUN_140fb1b4e(void)

void FUN_140fb1b4e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar11 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar11 = param_1;
  }
  iVar3 = *(int *)(param_1 + 0xc08);
  iVar9 = -1;
  if ((longlong)iVar3 != 0) {
    lVar12 = lVar11;
    do {
      plVar6 = *(longlong **)(lVar12 + 0x10);
      if (plVar6 == (longlong *)0x0) {
LAB_140fb1c19:
        lVar10 = 0;
      }
      else {
        iVar8 = (int)plVar6[1];
        do {
          if (iVar8 == 0) goto LAB_140fb1c19;
          LOCK();
          iVar7 = (int)plVar6[1];
          bVar13 = iVar8 == iVar7;
          if (bVar13) {
            *(int *)(plVar6 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
        } while (!bVar13);
        lVar10 = *(longlong *)(lVar12 + 8);
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
      if (lVar10 == lVar4) {
        iVar9 = (int)((ulonglong)(lVar12 - lVar11) >> 3) * -0x55555555;
        break;
      }
      lVar12 = lVar12 + 0x18;
    } while (lVar12 != lVar11 + (longlong)iVar3 * 0x18);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)();
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((-1 < iVar9) && (iVar9 < *(int *)(param_1 + 0xc08))) {
    FUN_1402d37b8(param_1,iVar9);
    *(undefined1 *)(param_1 + 0xc1c) = 1;
  }
  return;
}



// FUNCTION 140fb1c5a FUN_140fb1c5a body=83 status=ok
// SIG undefined FUN_140fb1c5a(void)

void FUN_140fb1c5a(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_140fb1dbc();
  cVar1 = FUN_1409df8ac(param_1,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_14052c20c(param_2);
    *(undefined1 *)(param_1 + 10) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000140fb1ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 140fb1cae FUN_140fb1cae body=78 status=ok
// SIG undefined FUN_140fb1cae(void)

void FUN_140fb1cae(longlong param_1,uint param_2)

{
  FUN_140fb1cfc(param_1 + 0x51,param_1 + 0x50,*(undefined4 *)(param_1 + 0x18),param_2);
  if ((param_2 >> 0x11 & 1) == 0) {
    *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(param_1 + 0x18) | param_2 & 0xff00ffff;
    FUN_14078f2d2(param_1 + 0x20,param_1);
    return;
  }
  return;
}



// FUNCTION 140fb1cfc FUN_140fb1cfc body=191 status=ok
// SIG undefined FUN_140fb1cfc(void)

void FUN_140fb1cfc(undefined1 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  if ((param_4 >> 0x11 & 1) != 0) {
    *param_1 = *param_2;
    return;
  }
  if (DAT_14c8407a8 == 0) {
    FUN_1414b00ea();
  }
  lVar3 = DAT_14c8407a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) goto LAB_140fb1d53;
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 != DVar5) goto LAB_140fb1d53;
  }
  if (((param_3 & 0x20) == 0) || (plVar2 = *(longlong **)(lVar3 + 0xf0), plVar2 == (longlong *)0x0))
  {
    *param_1 = *param_2;
  }
  else {
    (**(code **)(*plVar2 + 8))(plVar2,param_1,*param_2);
  }
LAB_140fb1d53:
  if ((param_4 >> 0x10 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x170) = 1;
  }
  return;
}



// FUNCTION 140fb1dbc FUN_140fb1dbc body=495 status=ok
// SIG undefined FUN_140fb1dbc(void)

void FUN_140fb1dbc(ulonglong *param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined *puVar5;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong *local_50;
  undefined8 **local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = param_1[9];
  local_58 = param_4;
  if (uVar3 == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    param_1[9] = (ulonglong)puVar2;
    (**(code **)(*param_1 + 0xc0))(param_1,&local_50);
    puVar4 = local_50;
    if ((int)local_48 == 0) {
      puVar4 = (ulonglong *)&DAT_149dfb77a;
    }
    FUN_140fb1ff2(puVar2,puVar4,0,0);
    if (local_50 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = param_1[9];
  }
  FUN_140fb1ff2(uVar3,param_2,param_3,param_4);
  if (param_4 != 0) {
    iVar1 = FUN_144a788f7(param_4 & 0xffffffff);
    if (DAT_14c83f430 != DAT_14c83f45c) {
      puVar5 = &DAT_14c83f460;
      if (DAT_14c83f468 != (undefined *)0x0) {
        puVar5 = DAT_14c83f468;
      }
      iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14c83f470 - 1U & iVar1 + (int)(param_4 >> 0x20)) * 4
                      );
      while (iVar1 != -1) {
        puVar4 = (ulonglong *)(DAT_14c83f428 + (longlong)iVar1 * 0x18);
        if (*puVar4 == param_4) {
          if ((puVar4 != (ulonglong *)0x0) && (uVar3 = puVar4[1], uVar3 != 0)) goto LAB_140fb1f51;
          break;
        }
        iVar1 = (int)puVar4[2];
      }
    }
    local_60 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    local_60[4] = 0;
    *(undefined4 *)(local_60 + 5) = 0;
    *local_60 = 0;
    local_60[1] = 0;
    *(undefined8 *)((longlong)local_60 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)local_60 + 0x34) = 0;
    local_60[8] = 0;
    *(undefined4 *)(local_60 + 9) = 0;
    local_48 = &local_60;
    local_50 = &local_58;
    FUN_1467be6a8(&local_3c);
    uVar3 = *(ulonglong *)(DAT_14c83f428 + 8 + (longlong)local_3c * 0x18);
LAB_140fb1f51:
    local_50 = param_1;
    FUN_1467bebf6(uVar3,&local_60);
    *(undefined1 *)(param_1[9] + 0x10) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb1fac FUN_140fb1fac body=70 status=ok
// SIG undefined FUN_140fb1fac(void)

undefined8 FUN_140fb1fac(longlong param_1,undefined8 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  char *pcVar3;
  
  iVar1 = FUN_140052f36();
  if (iVar1 == 0) {
    pcVar3 = (char *)(param_1 + 0x58);
  }
  else {
    pcVar3 = *(char **)(param_1 + 0x50);
  }
  pwVar2 = L"false";
  if (*pcVar3 != '\0') {
    pwVar2 = L"true";
  }
  FUN_140056680(param_2,pwVar2);
  return param_2;
}



// FUNCTION 140fb1ff2 FUN_140fb1ff2 body=567 status=ok
// SIG undefined FUN_140fb1ff2(void)

void FUN_140fb1ff2(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  
  uVar11 = FUN_1409e01db(param_2);
  cVar7 = FUN_14052c20c(uVar11);
  uVar2 = *(uint *)(param_1 + 1);
  lVar13 = *param_1;
  uVar8 = 0;
  uVar14 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar14 >> 1) + uVar8;
      if (*(int *)(lVar13 + (ulonglong)uVar1 * 0x18) < (int)param_3) {
        uVar8 = uVar1 + (uVar14 & 1);
      }
      bVar5 = 1 < uVar14;
      uVar14 = uVar14 >> 1;
    } while (bVar5);
  }
  if ((((int)uVar8 < (int)uVar2) && (*(int *)(lVar13 + (ulonglong)uVar8 * 0x18) <= (int)param_3)) &&
     (puVar15 = (uint *)(lVar13 + (ulonglong)uVar8 * 0x18 + 8), puVar15 != (uint *)0x0))
  goto LAB_140fb20f1;
  uVar14 = 0;
  if ((int)uVar2 < 1) {
LAB_140fb209c:
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
      FUN_140fb2426(param_1,uVar2);
      lVar13 = *param_1;
    }
    lVar6 = (ulonglong)uVar14 * 0x18;
    memmove((void *)(lVar13 + lVar6 + 0x18),(void *)(lVar13 + lVar6),
            (ulonglong)(uVar2 - uVar14) * 0x18);
    puVar15 = (uint *)(lVar6 + *param_1);
  }
  else {
    uVar14 = 0;
    uVar8 = uVar2;
    do {
      uVar1 = (uVar8 >> 1) + uVar14;
      if (*(int *)(lVar13 + (ulonglong)uVar1 * 0x18) < (int)param_3) {
        uVar14 = uVar1 + (uVar8 & 1);
      }
      bVar5 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar5);
    if (((int)uVar2 <= (int)uVar14) || ((int)param_3 < *(int *)(lVar13 + (ulonglong)uVar14 * 0x18)))
    goto LAB_140fb209c;
    puVar15 = (uint *)(lVar13 + (ulonglong)uVar14 * 0x18);
    FUN_1467c0ac0(puVar15,1);
  }
  *puVar15 = param_3;
  puVar15[2] = 0;
  puVar15[3] = 0;
  puVar15[4] = 0;
  puVar15[5] = 0;
  puVar15 = puVar15 + 2;
LAB_140fb20f1:
  if ((((param_3 & 0xfd000000) != 0x5000000) && ((param_3 & 0xfe000000) != 0xa000000)) &&
     (0 < (int)puVar15[2])) {
    plVar4 = *(longlong **)puVar15;
    if (*plVar4 == param_4) {
      iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar12 = 0;
      }
      else if (iVar3 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar12 = (ulonglong)(DVar9 != DVar10);
      }
      else {
        uVar12 = 1;
      }
      if (*(char *)((longlong)plVar4 + uVar12 + 8) == cVar7) {
        return;
      }
    }
    puVar15[2] = 0;
    if (puVar15[3] != 1) {
      FUN_1457da736(puVar15);
    }
  }
  uVar2 = puVar15[2];
  puVar15[2] = uVar2 + 1;
  if (puVar15[3] < uVar2 + 1) {
    FUN_140fb222a(puVar15,uVar2);
  }
  lVar13 = *(longlong *)puVar15;
  *(longlong *)(lVar13 + (longlong)(int)uVar2 * 0xc) = param_4;
  *(ushort *)(lVar13 + 8 + (longlong)(int)uVar2 * 0xc) = CONCAT11(cVar7,cVar7);
  return;
}



// FUNCTION 140fb222a FUN_140fb222a body=370 status=ok
// SIG undefined FUN_140fb222a(void)

void FUN_140fb222a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fb22b3;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140fb22b3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140fb239c FUN_140fb239c body=137 status=ok
// SIG undefined FUN_140fb239c(void)

undefined8 FUN_140fb239c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar4 = 0;
  }
  else if (iVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar4 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar4 = 1;
  }
  pwVar5 = L"false";
  if (*(char *)(param_1 + 0x50 + uVar4) != '\0') {
    pwVar5 = L"true";
  }
  FUN_140056680(param_2,pwVar5);
  return param_2;
}



// FUNCTION 140fb2426 FUN_140fb2426 body=370 status=ok
// SIG undefined FUN_140fb2426(void)

void FUN_140fb2426(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fb24af;
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
LAB_140fb24af:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140fb2598 FUN_140fb2598 body=438 status=ok
// SIG undefined FUN_140fb2598(void)

void FUN_140fb2598(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  int local_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FDynamicBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = *(int *)(param_1 + 0x20);
  local_80 = *(int *)(param_1 + 0x28);
  local_7c = (uint)(local_80 != 0) * 0x4000 + 0x4000;
  if (local_84 == 0) {
    FUN_14570b4be(param_2,&local_78);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  FUN_140fb2750(param_1,&local_90);
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb2750 FUN_140fb2750 body=58 status=ok
// SIG undefined FUN_140fb2750(void)

void FUN_140fb2750(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar4 = *param_2;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
        return;
      }
    }
  }
  return;
}



// FUNCTION 140fb278a FUN_140fb278a body=360 status=ok
// SIG undefined FUN_140fb278a(void)

void FUN_140fb278a(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  if (*(char *)(param_1 + 0x49) != '\x01') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  plVar7 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar7[2] != iVar3) {
    return;
  }
  if ((*(uint *)(plVar7 + 1) & 0x10200000) != 0) {
    return;
  }
  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
    lVar4 = *plVar7;
  }
  else {
    lVar4 = 0;
  }
  if (*(longlong *)(&DAT_00006850 + lVar4) == 0) {
LAB_140fb282a:
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != iVar3 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_140fb28e7;
      lVar4 = *plVar7;
    }
  }
  else {
    cVar2 = FUN_140ed89ca();
    if (cVar2 != '\0') {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 != 0) goto LAB_140fb282a;
    iVar3 = 0;
LAB_140fb28e7:
    lVar4 = 0;
  }
  if (*(longlong **)(lVar4 + 0x11e8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x11e8) + 0xeb8))();
    if (cVar2 != '\0') {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x34);
  }
  if (iVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140fb28cd;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == iVar3 && ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      uVar5 = *puVar6;
      goto LAB_140fb28cd;
    }
  }
  uVar5 = 0;
LAB_140fb28cd:
  FUN_140fb28f2(uVar5,*(undefined1 *)(param_1 + 0x48));
  return;
}



// FUNCTION 140fb28f2 FUN_140fb28f2 body=142 status=ok
// SIG undefined FUN_140fb28f2(void)

void FUN_140fb28f2(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(&DAT_00006850 + param_1) != 0) {
    local_19 = 0;
    cVar1 = FUN_140fb2982();
    lVar2 = *(longlong *)(&DAT_00006850 + param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_140fb29f8(lVar2,&local_19);
      lVar2 = *(longlong *)(&DAT_00006850 + param_1);
      if (cVar1 != '\0') {
        *(byte *)(lVar2 + 0x4458) = *(byte *)(lVar2 + 0x4458) | 1;
        *(undefined1 *)(lVar2 + 0x4448) = param_2;
        goto LAB_140fb2954;
      }
    }
    FUN_140fb2b78(lVar2,0x80000,local_19);
  }
LAB_140fb2954:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb2982 FUN_140fb2982 body=117 status=ok
// SIG undefined FUN_140fb2982(void)

ulonglong FUN_140fb2982(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong **)(param_1 + 0x4208) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4208) + 0x700))();
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x3170) == 0) {
        if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_140fb29c0;
        param_1 = param_1 + 0x3210;
      }
      else {
        param_1 = *(longlong *)(param_1 + 0x3170) + 0xd8;
      }
      if (param_1 != 0) {
        cVar1 = FUN_143cf5d7e();
        if (cVar1 != '\0') {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 0;
          }
          uVar2 = 0;
        }
      }
    }
  }
LAB_140fb29c0:
  return uVar2 & 0xffffffff;
}



// FUNCTION 140fb29f8 FUN_140fb29f8 body=141 status=ok
// SIG undefined FUN_140fb29f8(void)

undefined8 FUN_140fb29f8(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  
  cVar1 = FUN_140fb2a86();
  if (cVar1 == '\0') {
LAB_140fb2a09:
    uVar2 = 0;
  }
  else {
    if (((*(longlong *)(param_1 + 0xb0) != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) &&
       (dVar4 = *(double *)(param_1 + 0x4450), 0.0 <= dVar4)) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6(param_1);
        dVar4 = *(double *)(param_1 + 0x4450);
      }
      if ((float)(*(double *)(lVar3 + 0x6d0) - dVar4) <
          *(float *)(*(longlong *)(param_1 + 0x4210) + 0x28c)) goto LAB_140fb2a09;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140fb2a86 FUN_140fb2a86 body=123 status=ok
// SIG undefined FUN_140fb2a86(void)

undefined8 FUN_140fb2a86(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_1401536e4(param_1,1,param_2);
  if (cVar2 != '\0') {
    lVar1 = param_1[0x841];
    if (lVar1 != 0) {
      uVar3 = (**(code **)(*(longlong *)(lVar1 + 0x3b38) + 0x18))(lVar1 + 0x3b38);
      cVar2 = FUN_140226b70(uVar3);
      if (cVar2 != '\0') {
        return 0;
      }
    }
    cVar2 = FUN_140fb2b02(param_1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0xe78))(param_1,0x80000);
      if (cVar2 != '\0') {
        return 1;
      }
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140fb2b02 FUN_140fb2b02 body=117 status=ok
// SIG undefined FUN_140fb2b02(void)

undefined8 FUN_140fb2b02(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = 1;
  if ((((((*(longlong *)(param_1 + 0x44d8) != 0) &&
         ((&DAT_00001100)[*(longlong *)(param_1 + 0x44d8)] == '\r')) &&
        (*(int *)(param_1 + 0x44f4) != 0)) &&
       ((uVar1 = *(uint *)(param_1 + 0x44f0), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x44f4) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)
        ))))) && ((*plVar3 != 0 && (*(char *)(*plVar3 + 0x25f9) != '\0')))) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140fb2b78 FUN_140fb2b78 body=445 status=ok
// SIG undefined FUN_140fb2b78(void)

void FUN_140fb2b78(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0x4208) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x4208) + 0x700))();
    if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x4208) != 0)) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x3c0);
      if (lVar1 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_50 = &local_30;
          local_30 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1459f2e4c;
          local_58 = &LAB_148c39de3;
          local_60 = &LAB_1457a9eb2;
          local_68 = &DAT_149e063b2;
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30)) {
          FUN_1440eb1de(param_1 + 0x47e0,param_2,param_3);
        }
      }
      if (*(longlong *)(param_1 + 0x4208) != 0) {
        uVar3 = 0;
        if (param_2 < 0x80000) {
          if (param_2 == 0x10000) {
            uVar3 = 2;
          }
          else {
            uVar3 = 0;
            if (param_2 == 0x20000) {
              uVar3 = 3;
            }
          }
        }
        else if (param_2 == 0x80000) {
          uVar3 = 1;
        }
        else if (param_2 == 0x200000) {
          uVar3 = 4;
        }
        local_30._0_2_ = CONCAT11((char)param_3,uVar3);
        FUN_1447cd2ec(*(longlong *)(param_1 + 0x4208) + 0x9ca0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb2d9c FUN_140fb2d9c body=771 status=ok
// SIG undefined FUN_140fb2d9c(void)

void FUN_140fb2d9c(longlong param_1,double *param_2)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  float fVar12;
  
  iVar5 = DAT_14c9647dc;
  lVar6 = DAT_14c9647c8;
  iVar10 = *(int *)(param_1 + 0x4c);
  if (iVar10 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x48);
  if ((int)uVar4 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar4) {
    return;
  }
  plVar11 = (longlong *)
            ((ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar11[2] != iVar10) {
    return;
  }
  if ((*(uint *)(plVar11 + 1) & 0x10200000) != 0) {
    return;
  }
  dVar2 = *param_2;
  dVar3 = param_2[1];
  if (0.0 <= dVar2) {
    if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
      lVar9 = *plVar11;
    }
    else {
      lVar9 = 0;
    }
    fVar12 = (float)dVar2 + *(float *)(lVar9 + 0x1a70);
    *(float *)(lVar9 + 0x1a70) = fVar12;
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    if (fVar12 <= -1.0) {
      fVar12 = -1.0;
    }
    *(float *)(lVar9 + 0x390) = fVar12;
    iVar10 = *(int *)(param_1 + 0x4c);
  }
  if (dVar2 <= 0.0) {
    if (iVar10 == 0) {
LAB_140fb3069:
      lVar9 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x48);
      lVar9 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < iVar5)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != iVar10 || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))))
        goto LAB_140fb3069;
        lVar9 = *plVar11;
      }
    }
    fVar12 = *(float *)(lVar9 + 0x1a78) - (float)dVar2;
    *(float *)(lVar9 + 0x1a78) = fVar12;
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    if (fVar12 <= -1.0) {
      fVar12 = -1.0;
    }
    *(float *)(lVar9 + 0x394) = fVar12;
    iVar10 = *(int *)(param_1 + 0x4c);
  }
  if (iVar10 == 0) {
LAB_140fb305b:
    lVar9 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x48);
    lVar9 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < iVar5)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         (((int)plVar11[2] != iVar10 || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))))
      goto LAB_140fb305b;
      lVar9 = *plVar11;
    }
  }
  fVar12 = (float)dVar3 + *(float *)(lVar9 + 0x1a74);
  *(float *)(lVar9 + 0x1a74) = fVar12;
  if (1.0 <= fVar12) {
    fVar12 = 1.0;
  }
  if (fVar12 <= -1.0) {
    fVar12 = -1.0;
  }
  *(float *)(lVar9 + 0x38c) = fVar12;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  puVar1 = (uint *)(param_1 + 0x38);
  uVar4 = *puVar1;
  if ((int)uVar4 < 0) {
    return;
  }
  if (iVar5 <= (int)uVar4) {
    return;
  }
  puVar7 = (undefined8 *)
           ((ulonglong)((uVar4 & 0xffff) * 0x18) +
           *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 0x10) * 8));
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x3c)) {
    return;
  }
  if ((*(uint *)(puVar7 + 1) & 0x10200000) != 0) {
    return;
  }
  if ((((dVar2 == 0.0) && (!NAN(dVar2))) && (dVar3 == 0.0)) && (!NAN(dVar3))) {
    return;
  }
  if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
    uVar8 = *puVar7;
  }
  else {
    uVar8 = 0;
  }
  FUN_140545fa2(uVar8);
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar4 = *puVar1;
    lVar6 = 0;
    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_140fb2fbe;
    plVar11 = (longlong *)
              ((ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if ((plVar11 != (longlong *)0x0) &&
       (((int)plVar11[2] == *(int *)(param_1 + 0x3c) && ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)
        ))) {
      lVar6 = *plVar11;
      goto LAB_140fb2fbe;
    }
  }
  lVar6 = 0;
LAB_140fb2fbe:
  if ((*(char *)(lVar6 + 0xa99) == '\x01') && (*(char *)(lVar6 + 0xa98) == '\x01')) {
    lVar6 = FUN_14479d2ce(puVar1);
    if (*(longlong *)(lVar6 + 0x31f8) != 0) {
      *(undefined1 *)(*(longlong *)(lVar6 + 0x31f8) + 0x84) = 1;
    }
  }
  return;
}



// FUNCTION 140fb30a0 FUN_140fb30a0 body=1350 status=ok
// SIG undefined FUN_140fb30a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fb30a0(longlong param_1,double *param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  longlong *plVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x3c) == 0) goto LAB_140fb34d5;
  puVar1 = (uint *)(param_1 + 0x38);
  uVar5 = *puVar1;
  if ((int)uVar5 < 0) goto LAB_140fb34d5;
  if (DAT_14c9647dc <= (int)uVar5) goto LAB_140fb34d5;
  plVar8 = (longlong *)
           ((ulonglong)((uVar5 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
  if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != *(int *)(param_1 + 0x3c))) ||
     ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_140fb34d5;
  dVar3 = *param_2;
  dVar4 = param_2[1];
  local_60 = dVar3;
  local_58 = dVar4;
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 0x44) != 0) {
      puVar2 = (uint *)(param_1 + 0x40);
      uVar5 = *puVar2;
      if (((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) &&
         ((plVar13 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
          plVar13 != (longlong *)0x0 &&
          (((int)plVar13[2] == *(int *)(param_1 + 0x44) &&
           ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))))) {
        fVar14 = 1.0;
        if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar10 = *plVar8;
          }
          else {
            lVar10 = 0;
          }
          if ((*(char *)(lVar10 + 0xa99) == '\x01') && (*(char *)(lVar10 + 0xa98) != '\0')) {
            if (*(char *)(lVar10 + 0xa98) == '\x01') {
              lVar10 = FUN_14479d2ce();
              fVar14 = *(float *)(lVar10 + 0x378);
            }
          }
          else {
            if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
              lVar10 = *plVar13;
            }
            else {
              lVar10 = 0;
            }
            fVar14 = *(float *)(lVar10 + 0x374);
          }
        }
        if (((*(int *)(param_1 + 0x34) == 0) || (uVar5 = *(uint *)(param_1 + 0x30), (int)uVar5 < 0))
           || (DAT_14c9647dc <= (int)uVar5)) {
LAB_140fb3268:
          iVar6 = *(int *)(param_1 + 0x44);
          if (((iVar6 == 0) || (uVar5 = *puVar2, (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5))
          {
            local_60 = dVar3 * (double)(_DAT_0000037c * fVar14);
LAB_140fb3539:
            lVar10 = 0;
          }
          else {
            plVar8 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != iVar6)) ||
               ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) {
              lVar10 = 0;
            }
            else {
              lVar10 = *plVar8;
            }
            local_60 = dVar3 * (double)(*(float *)(lVar10 + 0x37c) * fVar14);
            plVar8 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != iVar6)) ||
               ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_140fb3539;
            lVar10 = *plVar8;
          }
          pfVar9 = (float *)(lVar10 + 0x380);
        }
        else {
          plVar8 = (longlong *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != *(int *)(param_1 + 0x34))) ||
             ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_140fb3268;
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar10 = *plVar8;
          }
          else {
            lVar10 = 0;
          }
          cVar7 = (**(code **)(*(longlong *)(lVar10 + 0x518) + 0x50))();
          if (cVar7 == '\0') goto LAB_140fb3268;
          lVar10 = FUN_14479d2ce(puVar2);
          local_60 = dVar3 * (double)(*(float *)(lVar10 + 900) * fVar14);
          lVar10 = FUN_14479d2ce();
          pfVar9 = (float *)(lVar10 + 0x388);
        }
        local_58 = dVar4 * (double)(fVar14 * *pfVar9);
      }
    }
  }
  else {
    FUN_148d1a664(param_1,&local_60);
  }
  dVar3 = local_58;
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_140fb3504:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar5 = *puVar1;
    plVar8 = (longlong *)0x0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x3c) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_140fb3504;
      plVar8 = (longlong *)*puVar11;
    }
  }
  (**(code **)(*plVar8 + 0xc88))(plVar8,(float)local_58);
  dVar4 = local_60;
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_140fb350b:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar5 = *puVar1;
    plVar8 = (longlong *)0x0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x3c) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_140fb350b;
      plVar8 = (longlong *)*puVar11;
    }
  }
  (**(code **)(*plVar8 + 0xc90))(plVar8,(float)local_60);
  if ((((dVar3 == 0.0) && (!NAN(dVar3))) && (dVar4 == 0.0)) && (!NAN(dVar4))) goto LAB_140fb34d5;
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_140fb3512:
    uVar12 = 0;
  }
  else {
    uVar5 = *puVar1;
    uVar12 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x3c) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_140fb3512;
      uVar12 = *puVar11;
    }
  }
  FUN_140545fa2(uVar12);
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_140fb3519:
    lVar10 = 0;
  }
  else {
    uVar5 = *puVar1;
    lVar10 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0x3c) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)
          ))) goto LAB_140fb3519;
      lVar10 = *plVar8;
    }
  }
  if ((*(char *)(lVar10 + 0xa99) == '\x01') && (*(char *)(lVar10 + 0xa98) == '\x01')) {
    lVar10 = FUN_14479d2ce(puVar1);
    if (*(longlong *)(lVar10 + 0x31f8) != 0) {
      *(undefined1 *)(*(longlong *)(lVar10 + 0x31f8) + 0x85) = 1;
    }
  }
LAB_140fb34d5:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb35e8 FUN_140fb35e8 body=475 status=ok
// SIG undefined FUN_140fb35e8(void)

void FUN_140fb35e8(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0x60) == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar2 = FUN_140fb37c4();
    if (lVar3 == lVar2) {
      lVar3 = *(longlong *)(param_2 + 0x50);
      if (((*(int *)(lVar3 + 0xc) != 0) && (uVar1 = *(uint *)(lVar3 + 8), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(lVar3 + 0xc))) &&
           (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
          if (*(uint *)(lVar3 + 0x28) < 2) {
            FUN_140056680(&local_40,L"Object");
            lVar3 = *(longlong *)(param_2 + 0x50);
            if ((*(uint *)(lVar3 + 0x28) < 2) && ((longlong *)(lVar3 + 0x20) != &local_40)) {
              if (*(longlong *)(lVar3 + 0x20) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(lVar3 + 0x20) = local_40;
              local_40 = 0;
              *(undefined4 *)(lVar3 + 0x28) = local_38;
              *(undefined4 *)(lVar3 + 0x2c) = local_34;
            }
            else if (local_40 != 0) {
              FUN_1400020a8();
            }
            lVar3 = *(longlong *)(param_2 + 0x50);
          }
          if (*(uint *)(lVar3 + 0x18) < 2) {
            local_30 = *(undefined8 *)(lVar2 + 0x18);
            FUN_1400021e4(&local_30,&local_40);
            lVar3 = *(longlong *)(param_2 + 0x50);
            if ((*(uint *)(lVar3 + 0x18) < 2) && ((longlong *)(lVar3 + 0x10) != &local_40)) {
              if (*(longlong *)(lVar3 + 0x10) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(lVar3 + 0x10) = local_40;
              *(undefined4 *)(lVar3 + 0x18) = local_38;
              *(undefined4 *)(lVar3 + 0x1c) = local_34;
            }
            else if (local_40 != 0) {
              FUN_1400020a8();
            }
          }
          local_40 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x18);
          FUN_140fb38a2(param_2,&DAT_14c9a3120);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb37c4 FUN_140fb37c4 body=221 status=ok
// SIG undefined FUN_140fb37c4(void)

longlong FUN_140fb37c4(void)

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
  if (DAT_14c9a2bc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470ac01b;
    local_40 = FUN_1462a3f0e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxCore",L"GbxAnalyticsContextResolver",&DAT_14c9a2bc8,&DAT_1470ac01a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a2bc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb38a2 FUN_140fb38a2 body=225 status=ok
// SIG undefined FUN_140fb38a2(void)

void FUN_140fb38a2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_28 >> 0x10);
    uVar3 = (uint)local_28 & 0xffff;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar3) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x10) == local_28) goto LAB_140fb392d;
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_1 + 8);
      } while (iVar4 != -1);
    }
  }
  FUN_144a13f80(param_1,local_2c,&local_28,0);
  FUN_140fb3984(param_1[10] + 0x30,&local_28,param_3);
LAB_140fb392d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb3984 FUN_140fb3984 body=125 status=ok
// SIG undefined FUN_140fb3984(void)

longlong * FUN_140fb3984(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar4 < 1) {
    FUN_140d7698c(param_1,1);
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (uVar4 < iVar1 + 1U) {
    FUN_140eed74c(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar5 = (longlong)iVar1 * 0x30;
  uVar3 = *param_3;
  *(undefined1 *)(lVar2 + 0x20 + lVar5) = 0;
  FUN_140aec01a(lVar2 + lVar5,uVar3);
  *(undefined8 *)(lVar2 + 0x28 + lVar5) = *param_2;
  return param_1;
}



// FUNCTION 140fb3a02 FUN_140fb3a02 body=89 status=ok
// SIG undefined FUN_140fb3a02(void)

undefined8 * FUN_140fb3a02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aae7ba0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140fb3a5c(param_1 + 0xd);
  FUN_1406741a4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fb3a5c FUN_140fb3a5c body=55 status=ok
// SIG undefined FUN_140fb3a5c(void)

void FUN_140fb3a5c(longlong *param_1)

{
  FUN_140fb3a94(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fb3a94 FUN_140fb3a94 body=503 status=ok
// SIG undefined FUN_140fb3a94(void)

void FUN_140fb3a94(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140fb3bdd;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      plVar3 = *(longlong **)(*param_1 + 8 + (longlong)iVar5 * 0x20);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        iVar4 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar5 = (int)uVar14;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar9[lVar12] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar6 = puVar9[lVar12 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar12 == lVar10) goto LAB_140fb3bdd;
        }
        uVar14 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_140fb3bdd:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar6 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140fb3c8c FUN_140fb3c8c body=228 status=ok
// SIG undefined FUN_140fb3c8c(void)

undefined8 FUN_140fb3c8c(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    do {
      lVar13 = *(longlong *)(param_3 + -0x50);
      if (DAT_14c950c29 == 1) {
        if (lVar13 == 0) {
          lVar13 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar13 = *(longlong *)(param_3 + -0x50);
        }
      }
      bVar12 = DAT_14c950c29;
      *param_2 = lVar13;
      param_2[7] = *(longlong *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0x48);
      uVar2 = *(undefined4 *)(param_3 + -0x44);
      uVar3 = *(undefined4 *)(param_3 + -0x40);
      uVar4 = *(undefined4 *)(param_3 + -0x3c);
      uVar5 = *(undefined4 *)(param_3 + -0x38);
      uVar6 = *(undefined4 *)(param_3 + -0x34);
      uVar7 = *(undefined4 *)(param_3 + -0x30);
      uVar8 = *(undefined4 *)(param_3 + -0x2c);
      uVar9 = *(undefined4 *)(param_3 + -0x24);
      uVar10 = *(undefined4 *)(param_3 + -0x20);
      uVar11 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)((longlong)param_2 + 0x2c) = uVar9;
      *(undefined4 *)(param_2 + 6) = uVar10;
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar11;
      *(undefined4 *)(param_2 + 3) = uVar5;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar6;
      *(undefined4 *)(param_2 + 4) = uVar7;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar8;
      *(undefined4 *)(param_2 + 1) = uVar1;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
      *(undefined4 *)(param_2 + 2) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
      lVar13 = *(longlong *)(param_3 + -0x10);
      if ((bVar12 & 1) != 0) {
        if (lVar13 == 0) {
          lVar13 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar13 = *(longlong *)(param_3 + -0x10);
        }
      }
      param_2[8] = lVar13;
      param_2[9] = *(longlong *)(param_3 + -8);
      FUN_140fb3d70(param_2 + 10,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x4c);
      uVar2 = *(undefined4 *)(param_3 + 0x50);
      uVar3 = *(undefined4 *)(param_3 + 0x54);
      uVar4 = *(undefined4 *)(param_3 + 0x58);
      uVar5 = *(undefined4 *)(param_3 + 0x5c);
      uVar6 = *(undefined4 *)(param_3 + 0x60);
      uVar7 = *(undefined4 *)(param_3 + 100);
      uVar8 = *(undefined4 *)(param_3 + 0x68);
      uVar9 = *(undefined4 *)(param_3 + 0x6c);
      uVar10 = *(undefined4 *)(param_3 + 0x70);
      uVar11 = *(undefined4 *)(param_3 + 0x74);
      *(undefined4 *)(param_2 + 0x13) = *(undefined4 *)(param_3 + 0x48);
      *(undefined4 *)((longlong)param_2 + 0x9c) = uVar1;
      *(undefined4 *)(param_2 + 0x14) = uVar2;
      *(undefined4 *)((longlong)param_2 + 0xa4) = uVar3;
      *(undefined4 *)(param_2 + 0x15) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0xac) = uVar5;
      *(undefined4 *)(param_2 + 0x16) = uVar6;
      *(undefined4 *)((longlong)param_2 + 0xb4) = uVar7;
      *(undefined4 *)(param_2 + 0x17) = uVar8;
      *(undefined4 *)((longlong)param_2 + 0xbc) = uVar9;
      *(undefined4 *)(param_2 + 0x18) = uVar10;
      *(undefined4 *)((longlong)param_2 + 0xc4) = uVar11;
      param_3 = param_3 + 200;
      param_2 = param_2 + 0x19;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140fb3d70 FUN_140fb3d70 body=458 status=ok
// SIG undefined FUN_140fb3d70(void)

longlong FUN_140fb3d70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)(param_1 + 8);
    FUN_1417c5c90(plVar1,*(undefined4 *)(param_2 + 0x10));
    iVar5 = *(int *)(param_2 + 0x10);
    if (0 < iVar5) {
      lVar11 = 0;
      lVar12 = 0;
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_2 + 8) + lVar11);
        if (plVar3 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar3 + 0x10))();
          puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          puVar7[1] = &DAT_100000001;
          *puVar7 = &PTR_LAB_14a8ea070;
          puVar7[2] = uVar6;
          iVar5 = *(int *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x10) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x14) < iVar5 + 1U) {
            FUN_1479d9002(plVar1,iVar5);
          }
          lVar4 = *plVar1;
          *(undefined8 *)(lVar4 + (longlong)iVar5 * 0x10) = uVar6;
          *(undefined8 **)(lVar4 + 8 + (longlong)iVar5 * 0x10) = puVar7;
          iVar5 = *(int *)(param_2 + 0x10);
        }
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar12 < iVar5);
    }
    plVar1 = (longlong *)(param_1 + 0x18);
    FUN_1417c5c90(plVar1,*(undefined4 *)(param_2 + 0x20));
    iVar5 = *(int *)(param_2 + 0x20);
    if (0 < iVar5) {
      lVar11 = 0;
      lVar12 = 0;
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x18) + lVar11);
        if (plVar3 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar3 + 0x10))();
          puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          puVar7[1] = &DAT_100000001;
          *puVar7 = &PTR_LAB_14a8ea070;
          puVar7[2] = uVar6;
          iVar5 = *(int *)(param_1 + 0x20);
          *(uint *)(param_1 + 0x20) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x24) < iVar5 + 1U) {
            FUN_1479d9002(plVar1,iVar5);
          }
          lVar4 = *plVar1;
          *(undefined8 *)(lVar4 + (longlong)iVar5 * 0x10) = uVar6;
          *(undefined8 **)(lVar4 + 8 + (longlong)iVar5 * 0x10) = puVar7;
          iVar5 = *(int *)(param_2 + 0x20);
        }
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar12 < iVar5);
    }
    bVar8 = *(byte *)(param_2 + 0x28) & 1;
    bVar2 = *(byte *)(param_1 + 0x28);
    *(byte *)(param_1 + 0x28) = bVar2 & 0xfe | bVar8;
    bVar9 = *(byte *)(param_2 + 0x28) & 2;
    *(byte *)(param_1 + 0x28) = bVar2 & 0xfc | bVar8 | bVar9;
    bVar10 = *(byte *)(param_2 + 0x28) & 4;
    *(byte *)(param_1 + 0x28) = bVar2 & 0xf8 | bVar8 | bVar9 | bVar10;
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(byte *)(param_1 + 0x28) =
         bVar2 & 0xf0 | bVar8 | bVar9 | bVar10 | *(byte *)(param_2 + 0x28) & 8;
    *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  }
  return param_1;
}



// FUNCTION 140fb3f3a FUN_140fb3f3a body=37 status=ok
// SIG undefined FUN_140fb3f3a(void)

void FUN_140fb3f3a(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000140fb3f5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 140fb3fbc FUN_140fb3fbc body=85 status=ok
// SIG undefined FUN_140fb3fbc(void)

void FUN_140fb3fbc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140fb40a6(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fb3fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140fb4052();
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b0dd3c0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x1c) = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(byte *)((longlong)puVar2 + 0x1d) = *(byte *)((longlong)puVar2 + 0x1d) & 0xfc;
  return;
}



// FUNCTION 140fb4012 FUN_140fb4012 body=64 status=ok
// SIG undefined FUN_140fb4012(void)

void FUN_140fb4012(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140fb4052();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b0dd3c0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x1c) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(byte *)((longlong)puVar1 + 0x1d) = *(byte *)((longlong)puVar1 + 0x1d) & 0xfc;
  return;
}



// FUNCTION 140fb4052 FUN_140fb4052 body=84 status=ok
// SIG undefined FUN_140fb4052(void)

void FUN_140fb4052(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x380,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 7;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140fb40a6 FUN_140fb40a6 body=191 status=ok
// SIG undefined FUN_140fb40a6(void)

longlong FUN_140fb40a6(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140fb4166();
  lVar3 = *param_1;
  if (DAT_14cb752f8 != DAT_14cb75324) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb75328;
    if (DAT_14cb75330 != (undefined *)0x0) {
      puVar7 = DAT_14cb75330;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb75338 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb752f0 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb752e8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140fb4166 FUN_140fb4166 body=152 status=ok
// SIG undefined FUN_140fb4166(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fb4166(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb75340) {
    FUN_144b3d300(&DAT_14cb75340);
    if (DAT_14cb75340 == -1) {
      DAT_14cb75310 = 0;
      DAT_14cb75318 = 0;
      DAT_14cb752f0 = 0;
      _DAT_14cb752f8 = 0;
      _DAT_14cb7531c = 0xffffffff00000080;
      DAT_14cb75324 = 0;
      DAT_14cb75330 = 0;
      DAT_14cb75338 = 0;
      atexit(FUN_143cd7732);
      _Init_thread_footer(&DAT_14cb75340);
      return;
    }
  }
  return;
}



// FUNCTION 140fb420a FUN_140fb420a body=193 status=ok
// SIG undefined FUN_140fb420a(void)

undefined8 * FUN_140fb420a(undefined8 *param_1)

{
  FUN_140307c5a();
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 1;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 1;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0x12;
  *(byte *)((longlong)param_1 + 0x13c) = *(byte *)((longlong)param_1 + 0x13c) & 0xf8;
  *param_1 = &PTR_FUN_14aad77c0;
  param_1[0x19] = &PTR_FUN_14aad7ba0;
  param_1[0x1a] = &PTR_FUN_14aad7be0;
  param_1[0x28] = &DAT_100000001;
  *(undefined1 *)((longlong)param_1 + 0x15b) = 6;
  *(byte *)((longlong)param_1 + 0x15c) = *(byte *)((longlong)param_1 + 0x15c) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(byte *)((longlong)param_1 + 0x15a) = *(byte *)((longlong)param_1 + 0x15a) & 0xf8 | 5;
  *(undefined1 *)((longlong)param_1 + 0x15d) = *(undefined1 *)((longlong)param_1 + 0xf1);
  *(undefined2 *)((longlong)param_1 + 0x15e) = 0x101;
  return param_1;
}



// FUNCTION 140fb42e2 FUN_140fb42e2 body=45 status=ok
// SIG undefined FUN_140fb42e2(void)

void FUN_140fb42e2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1407afa82();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x755f) = 0;
    FUN_140fb4310(lVar1);
    return;
  }
  return;
}



// FUNCTION 140fb4310 FUN_140fb4310 body=55 status=ok
// SIG undefined FUN_140fb4310(void)

void FUN_140fb4310(longlong param_1)

{
  FUN_140f837ee(param_1 + 0x9b0);
  if (*(char *)(param_1 + 0xb2d) != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0xb2d) = 0;
  FUN_140fb4348(param_1);
  return;
}



// FUNCTION 140fb4348 FUN_140fb4348 body=164 status=ok
// SIG undefined FUN_140fb4348(void)

void FUN_140fb4348(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_140231a4a(*(undefined8 *)(param_1 + 0x3f0));
  FUN_140fb43ee(uVar3,&local_28);
  if (local_28 == 0) {
    puVar4 = &DAT_14cbcc678;
  }
  else {
    *(undefined8 *)(param_1 + 0x9a4) = *(undefined8 *)(local_28 + 8);
    puVar4 = (undefined8 *)(local_28 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x9b0) = *puVar4;
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb43ee FUN_140fb43ee body=83 status=ok
// SIG undefined FUN_140fb43ee(void)

longlong * FUN_140fb43ee(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140dc9394();
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



// FUNCTION 140fb4442 FUN_140fb4442 body=33 status=ok
// SIG undefined FUN_140fb4442(void)

void FUN_140fb4442(longlong param_1)

{
  FUN_1405f1eac();
  FUN_1401b3e2a(param_1 + 0x578);
  return;
}



// FUNCTION 140fb4464 FUN_140fb4464 body=21 status=ok
// SIG undefined FUN_140fb4464(void)

undefined8 FUN_140fb4464(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140fb447a FUN_140fb447a body=534 status=ok
// SIG undefined FUN_140fb447a(void)

void FUN_140fb447a(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0x1b1) == '\x01') &&
     (bVar1 = *(byte *)(param_1 + 0xd0), (bVar1 & 0xfe) != 2)) {
    uVar4 = FUN_140963a30(param_1 + 0x108);
    FUN_1440bd69a(param_1,uVar4,0);
    if ((bVar1 == 1) && (lVar7 = *(longlong *)(param_1 + 0x48), lVar7 != 0)) {
      if (DAT_14cba8288 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464cee30;
        local_48 = &LAB_148bfac22;
        local_50 = &LAB_140f21842;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        lVar7 = *(longlong *)(param_1 + 0x48);
        if (lVar7 == 0) goto LAB_140fb4568;
      }
      if ((((DAT_14cba8288 != 0) && (lVar5 = *(longlong *)(lVar7 + 0x10), lVar5 != 0)) &&
          (*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
          == DAT_14cba8288 + 0x30)) {
        lVar5 = FUN_140963a30(param_1 + 0x1b8);
        if (lVar5 == 0) {
          *(undefined4 *)(lVar7 + 0x7eb8) = 0;
          iVar3 = 0;
        }
        else {
          uVar2 = *(uint *)(lVar5 + 0xc);
          *(uint *)(lVar7 + 0x7eb8) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          iVar3 = *(int *)(lVar5 + 0x10);
          if (*(int *)(lVar5 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar8 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar8) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
            }
            LOCK();
            iVar3 = *(int *)(lVar5 + 0x10);
            bVar8 = iVar3 == 0;
            if (bVar8) {
              *(int *)(lVar5 + 0x10) = iVar6;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar8) {
              iVar3 = iVar6;
            }
          }
        }
        *(int *)(lVar7 + 0x7ebc) = iVar3;
      }
    }
  }
LAB_140fb4568:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fb4692 FUN_140fb4692 body=646 status=ok
// SIG undefined FUN_140fb4692(void)

void FUN_140fb4692(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_20);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_20 = *(undefined8 *)(pbVar4 + 1);
        pbVar4 = pbVar4 + 9;
        *(byte **)(param_2 + 0x20) = pbVar4;
        goto LAB_140fb474c;
      }
      (*pcVar2)(uVar1,param_2,&local_20);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
LAB_140fb474c:
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38[0] = *(undefined8 *)(pbVar4 + 1);
      *(byte **)(param_2 + 0x20) = pbVar4 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_38);
    }
  }
  puVar5 = local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_140fb491a(local_20,puVar5);
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb491a FUN_140fb491a body=690 status=ok
// SIG undefined FUN_140fb491a(void)

undefined8 FUN_140fb491a(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  code *local_48;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cb22240 == 0) {
      local_80 = &local_48;
      local_48 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464376fa;
      local_88 = &LAB_147f28935;
      local_90 = FUN_146437c39;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,DAT_14cb22240);
    if (plVar3 != (longlong *)0x0) {
      if (DAT_14cb22240 == 0) {
        local_80 = &local_48;
        local_48 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = &LAB_1464376fa;
        local_88 = &LAB_147f28935;
        local_90 = FUN_146437c39;
        local_98 = L"Engine";
        local_a0 = 0;
        local_a8 = 0x10004001;
        local_b0 = 8;
        local_b8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      plVar4 = (longlong *)FUN_144718840(plVar3,DAT_14cb22240);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4);
        uVar6 = 0;
        if ((*(int *)(lVar5 + 0xc0) == 0) || (*(int *)(lVar5 + 0x80) < 1)) goto LAB_140fb498e;
        piVar1 = *(int **)(lVar5 + 0x78);
        if (*piVar1 != 0x7fffffff) {
          uVar2 = piVar1[1];
          local_48 = *(code **)piVar1;
          iStack_40 = piVar1[2];
          iStack_3c = piVar1[3];
          local_38 = piVar1[4];
          iStack_34 = piVar1[5];
          iStack_30 = piVar1[6];
          iStack_2c = piVar1[7];
          local_28 = piVar1[8];
          iStack_24 = piVar1[9];
          iStack_20 = piVar1[10];
          iStack_1c = piVar1[0xb];
          if (iStack_40 != 0) {
            uVar6 = 0;
            if (((int)uVar2 < 0) || (uVar6 = 0, DAT_14c9647dc <= (int)uVar2)) goto LAB_140fb498e;
            lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if ((lVar5 != 0) &&
               ((*(int *)(lVar5 + 0x10) == iStack_40 && ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))
               ) {
              FUN_140519d92(&local_48,&local_60,0);
              *(undefined8 *)(param_2 + 4) = local_50;
              *param_2 = local_60;
              param_2[1] = uStack_5c;
              param_2[2] = uStack_58;
              param_2[3] = uStack_54;
              uVar6 = 1;
              goto LAB_140fb498e;
            }
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_140fb498e:
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb4bce FUN_140fb4bce body=3048 status=ok
// SIG undefined FUN_140fb4bce(void)

void FUN_140fb4bce(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined8 uVar19;
  char cVar20;
  DWORD DVar21;
  DWORD DVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong *plVar31;
  bool bVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  uint local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  undefined8 *local_108;
  ulonglong local_100;
  int *local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  code *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar23 = *(longlong *)(param_1 + 0x20);
  if (lVar23 != 0) {
    if (DAT_14caa6dc0 == 0) {
      local_120 = &local_e8;
      local_e8 = (code *)&LAB_1432469d6;
      local_110 = FUN_14081d0ea;
      local_118 = &LAB_145920864;
      local_128 = &LAB_14746b954;
      local_130 = &LAB_14632611e;
      local_138 = L"Engine";
      local_140 = 0;
      local_148 = 0x10000005;
      local_150 = 8;
      local_158 = 0x8a8;
      FUN_14081cfa3(L"/Script/Landscape",L"LandscapeProxy",&DAT_14caa6dc0,FUN_1463260fc);
    }
    if ((*(int *)(DAT_14caa6dc0 + 0x38) <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caa6dc0 + 0x38) * 8) == DAT_14caa6dc0 + 0x30)) {
      uVar36 = (undefined4)*(undefined8 *)(param_1 + 400);
      uVar37 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 400) >> 0x20);
      local_c8 = *(undefined8 *)(param_1 + 0x170);
      local_d8 = *(undefined8 *)(param_1 + 0x160);
      uStack_d0 = *(undefined8 *)(param_1 + 0x168);
      if (*(longlong *)(lVar23 + 0x1c8) == 0) {
        uVar33 = 0;
        uVar35 = 0x3ff00000;
      }
      else {
        uVar29 = *(ulonglong *)(*(longlong *)(lVar23 + 0x1c8) + 0x1c8) & 0x7fffffffffffffff;
        uVar33 = (undefined4)uVar29;
        uVar35 = (undefined4)(uVar29 >> 0x20);
      }
      fVar38 = 0.0;
      if (0.0 <= *(float *)(lVar23 + 0x550)) {
        fVar38 = *(float *)(lVar23 + 0x550);
      }
      fVar38 = (float)((double)((float)*(int *)(param_1 + 0x628) * fVar38 * 0.75) *
                      (double)CONCAT44(uVar35,uVar33));
      goto LAB_140fb4cf3;
    }
  }
  uVar36 = (undefined4)*(undefined8 *)(param_1 + 400);
  uVar37 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 400) >> 0x20);
  local_c8 = *(undefined8 *)(param_1 + 0x170);
  local_d8 = *(undefined8 *)(param_1 + 0x160);
  uStack_d0 = *(undefined8 *)(param_1 + 0x168);
  fVar38 = 0.0;
LAB_140fb4cf3:
  local_108 = (undefined8 *)(param_1 + 0x160);
  if ((*(longlong *)(param_1 + 0x20) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x84d) == '\0')) {
    lVar23 = 0x650;
  }
  else {
    lVar23 = 0x660;
  }
  lVar23 = (longlong)*(int *)(param_1 + lVar23);
  if (0 < lVar23) {
    uVar29 = (ulonglong)*(uint *)(param_2 + 0x3c);
    local_f8 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    lVar28 = 0;
    local_100 = uVar29;
    local_f0 = lVar23;
    do {
      if ((*(longlong *)(param_1 + 0x20) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x20) + 0x84d) == '\0')) {
        lVar24 = 0x648;
      }
      else {
        lVar24 = 0x658;
      }
      plVar25 = *(longlong **)(*(longlong *)(param_1 + lVar24) + lVar28 * 8);
      if (plVar25 != (longlong *)0x0) {
        local_e8 = (code *)0x0;
        uStack_e0 = 0;
        local_158 = (undefined4)uVar29;
        local_150 = local_150 & 0xffffff00;
        (**(code **)(*plVar25 + 0x310))(plVar25,&local_e8,4,0);
        lVar23 = FUN_140fb57b8();
        if ((*(int *)(plVar25[2] + 0x38) < *(int *)(lVar23 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar25[2] + 0x30) + (longlong)*(int *)(lVar23 + 0x38) * 8)
            != lVar23 + 0x30)) {
          plVar25 = (longlong *)0x0;
        }
        if (0 < (int)uStack_e0) {
          lVar23 = 0;
          do {
            lVar24 = *(longlong *)(local_e8 + lVar23 * 8);
            if (lVar24 != 0) {
              if (DAT_14cb0b4f0 == 0) {
                local_120 = &local_b8;
                local_b8 = FUN_1449e2820;
                local_110 = FUN_14081d0ea;
                local_118 = &LAB_14580b774;
                local_128 = &LAB_147d6e27b;
                local_130 = &LAB_140307be8;
                local_138 = L"Engine";
                local_140 = 0;
                local_148 = 0x10000000;
                local_150 = 8;
                local_158 = 0x158;
                FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0);
              }
              if ((*(int *)(DAT_14cb0b4f0 + 0x38) <= *(int *)(*(longlong *)(lVar24 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cb0b4f0 + 0x38) * 8) == DAT_14cb0b4f0 + 0x30)) {
                iVar5 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar5 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
                  FUN_144781dc0(param_3,iVar5);
                }
                lVar26 = *param_3;
                lVar30 = (longlong)iVar5 * 0x50;
                *(undefined8 *)(lVar26 + lVar30) = 0;
                *(undefined8 *)(lVar26 + 0x40 + lVar30) = 0x3f800000;
                *(uint *)(lVar26 + 0x48 + lVar30) =
                     *(uint *)(lVar26 + 0x48 + lVar30) & 0xfffffffc | 2;
                puVar1 = (undefined8 *)(lVar26 + 8 + lVar30);
                *puVar1 = local_d8;
                puVar1[1] = uStack_d0;
                *(undefined8 *)(lVar26 + 0x18 + lVar30) = local_c8;
                *(ulonglong *)(lVar26 + 0x20 + lVar30) = CONCAT44(uVar37,uVar36);
                *(ulonglong *)(lVar26 + 0x28 + lVar30) = CONCAT44(uVar37,uVar36);
                *(ulonglong *)(lVar26 + 0x30 + lVar30) = CONCAT44(uVar37,uVar36);
                *(ulonglong *)(lVar26 + 0x38 + lVar30) = CONCAT44(uVar37,uVar36);
                *(float *)(lVar26 + 0x40 + lVar30) = DAT_14c760efc * fVar38;
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(lVar24);
                }
                plVar31 = (longlong *)(lVar26 + lVar30);
                *plVar31 = lVar24;
                if (plVar25 != (longlong *)0x0) {
                  fVar34 = 1.0;
                  if ((longlong)(int)plVar25[0x5e] != 0) {
                    lVar26 = 0;
                    do {
                      if (*(longlong *)(plVar25[0x5d] + lVar26) == *(longlong *)(lVar24 + 0x18)) {
                        fVar34 = *(float *)(plVar25[0x5d] + 8 + lVar26);
                        break;
                      }
                      lVar26 = lVar26 + 0xc;
                      fVar34 = 1.0;
                    } while ((longlong)(int)plVar25[0x5e] * 0xc != lVar26);
                  }
                  *(float *)(plVar31 + 8) = fVar34 * *(float *)(plVar31 + 8);
                }
              }
            }
            lVar23 = lVar23 + 1;
          } while (lVar23 < (int)uStack_e0);
        }
        plVar25 = (longlong *)FUN_140a0f536();
        if ((plVar25 == (longlong *)0x0) || ((longlong *)*plVar25 == (longlong *)0x0)) {
          lVar23 = 0;
        }
        else {
          lVar23 = (**(code **)(*(longlong *)*plVar25 + 0x30))();
        }
        uVar29 = local_100;
        lVar24 = DAT_14cb0d0e0;
        if ((int)local_100 < 2) {
LAB_140fb5151:
          bVar32 = false;
        }
        else {
          iVar5 = *local_f8;
          if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
            uVar27 = 0;
          }
          else if (iVar5 == 1) {
            DVar21 = FUN_140ad26c0();
            DVar22 = GetCurrentThreadId();
            uVar27 = (ulonglong)(DVar21 != DVar22);
          }
          else {
            uVar27 = 1;
          }
          if (*(int *)(lVar24 + uVar27 * 4) == 0) goto LAB_140fb5151;
          bVar32 = (&DAT_14ca814b8)[(ulonglong)*(ushort *)(&DAT_14ca85070 + uVar29 * 2) * 0xf] != 1;
        }
        if (lVar23 != 0) {
          cVar20 = FUN_147b9a792(lVar23,bVar32 ^ 1U);
          if (cVar20 != '\0') {
            dVar3 = *(double *)(lVar23 + 0xe0);
            if (9.99999993922529e-09 < dVar3) {
              dVar4 = *(double *)(lVar23 + 0xe8);
              if (9.99999993922529e-09 < dVar4) {
                iVar5 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar5 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
                  FUN_144781dc0(param_3,iVar5);
                }
                lVar24 = *param_3;
                lVar26 = FUN_147b9a77e(lVar23,bVar32 ^ 1U);
                *(longlong *)(lVar24 + (longlong)iVar5 * 0x50) = lVar26;
                if ((lVar26 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar26);
                }
                uVar33 = SUB84(dVar3,0);
                uVar35 = (int)((ulonglong)dVar3 >> 0x20);
                if (dVar4 <= dVar3) {
                  uVar33 = SUB84(dVar4,0);
                  uVar35 = (int)((ulonglong)dVar4 >> 0x20);
                }
                fVar34 = (float)((double)fVar38 / (double)CONCAT44(uVar35,uVar33));
                lVar24 = lVar24 + (longlong)iVar5 * 0x50;
                *(undefined8 *)(lVar24 + 0x38) = local_108[6];
                uVar33 = *(undefined4 *)local_108;
                uVar35 = *(undefined4 *)((longlong)local_108 + 4);
                uVar6 = *(undefined4 *)(local_108 + 1);
                uVar7 = *(undefined4 *)((longlong)local_108 + 0xc);
                uVar8 = *(undefined4 *)(local_108 + 2);
                uVar9 = *(undefined4 *)((longlong)local_108 + 0x14);
                uVar10 = *(undefined4 *)(local_108 + 3);
                uVar11 = *(undefined4 *)((longlong)local_108 + 0x1c);
                uVar12 = *(undefined4 *)((longlong)local_108 + 0x24);
                uVar13 = *(undefined4 *)(local_108 + 5);
                uVar14 = *(undefined4 *)((longlong)local_108 + 0x2c);
                *(undefined4 *)(lVar24 + 0x28) = *(undefined4 *)(local_108 + 4);
                *(undefined4 *)(lVar24 + 0x2c) = uVar12;
                *(undefined4 *)(lVar24 + 0x30) = uVar13;
                *(undefined4 *)(lVar24 + 0x34) = uVar14;
                *(undefined4 *)(lVar24 + 0x18) = uVar8;
                *(undefined4 *)(lVar24 + 0x1c) = uVar9;
                *(undefined4 *)(lVar24 + 0x20) = uVar10;
                *(undefined4 *)(lVar24 + 0x24) = uVar11;
                *(undefined4 *)(lVar24 + 8) = uVar33;
                *(undefined4 *)(lVar24 + 0xc) = uVar35;
                *(undefined4 *)(lVar24 + 0x10) = uVar6;
                *(undefined4 *)(lVar24 + 0x14) = uVar7;
                *(float *)(lVar24 + 0x40) = fVar34;
                *(undefined4 *)(lVar24 + 0x44) = 0;
                *(uint *)(lVar24 + 0x48) = *(uint *)(lVar24 + 0x48) & 0xfffffffc | 2;
                iVar5 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar5 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
                  FUN_144781dc0(param_3,iVar5);
                }
                lVar24 = *param_3;
                lVar26 = FUN_147b9a78c(lVar23);
                *(longlong *)(lVar24 + (longlong)iVar5 * 0x50) = lVar26;
                if ((lVar26 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar26);
                }
                lVar24 = lVar24 + (longlong)iVar5 * 0x50;
                *(undefined8 *)(lVar24 + 0x38) = local_108[6];
                uVar33 = *(undefined4 *)local_108;
                uVar35 = *(undefined4 *)((longlong)local_108 + 4);
                uVar6 = *(undefined4 *)(local_108 + 1);
                uVar7 = *(undefined4 *)((longlong)local_108 + 0xc);
                uVar8 = *(undefined4 *)(local_108 + 2);
                uVar9 = *(undefined4 *)((longlong)local_108 + 0x14);
                uVar10 = *(undefined4 *)(local_108 + 3);
                uVar11 = *(undefined4 *)((longlong)local_108 + 0x1c);
                uVar12 = *(undefined4 *)((longlong)local_108 + 0x24);
                uVar13 = *(undefined4 *)(local_108 + 5);
                uVar14 = *(undefined4 *)((longlong)local_108 + 0x2c);
                *(undefined4 *)(lVar24 + 0x28) = *(undefined4 *)(local_108 + 4);
                *(undefined4 *)(lVar24 + 0x2c) = uVar12;
                *(undefined4 *)(lVar24 + 0x30) = uVar13;
                *(undefined4 *)(lVar24 + 0x34) = uVar14;
                *(undefined4 *)(lVar24 + 0x18) = uVar8;
                *(undefined4 *)(lVar24 + 0x1c) = uVar9;
                *(undefined4 *)(lVar24 + 0x20) = uVar10;
                *(undefined4 *)(lVar24 + 0x24) = uVar11;
                *(undefined4 *)(lVar24 + 8) = uVar33;
                *(undefined4 *)(lVar24 + 0xc) = uVar35;
                *(undefined4 *)(lVar24 + 0x10) = uVar6;
                *(undefined4 *)(lVar24 + 0x14) = uVar7;
                *(float *)(lVar24 + 0x40) = fVar34;
                *(undefined4 *)(lVar24 + 0x44) = 0;
                *(uint *)(lVar24 + 0x48) = *(uint *)(lVar24 + 0x48) & 0xfffffffc | 2;
                iVar5 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar5 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
                  FUN_144781dc0(param_3,iVar5);
                }
                lVar24 = *param_3;
                lVar23 = FUN_147b9a786(lVar23);
                *(longlong *)(lVar24 + (longlong)iVar5 * 0x50) = lVar23;
                if ((lVar23 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar23);
                }
                lVar24 = lVar24 + (longlong)iVar5 * 0x50;
                *(undefined8 *)(lVar24 + 0x38) = local_108[6];
                uVar33 = *(undefined4 *)local_108;
                uVar35 = *(undefined4 *)((longlong)local_108 + 4);
                uVar6 = *(undefined4 *)(local_108 + 1);
                uVar7 = *(undefined4 *)((longlong)local_108 + 0xc);
                uVar15 = local_108[2];
                uVar16 = local_108[3];
                uVar17 = local_108[5];
                *(undefined8 *)(lVar24 + 0x28) = local_108[4];
                *(undefined8 *)(lVar24 + 0x30) = uVar17;
                *(undefined8 *)(lVar24 + 0x18) = uVar15;
                *(undefined8 *)(lVar24 + 0x20) = uVar16;
                *(undefined4 *)(lVar24 + 8) = uVar33;
                *(undefined4 *)(lVar24 + 0xc) = uVar35;
                *(undefined4 *)(lVar24 + 0x10) = uVar6;
                *(undefined4 *)(lVar24 + 0x14) = uVar7;
                *(float *)(lVar24 + 0x40) = fVar34;
                *(undefined4 *)(lVar24 + 0x44) = 0;
                *(uint *)(lVar24 + 0x48) = *(uint *)(lVar24 + 0x48) & 0xfffffffc | 2;
                uVar29 = local_100;
              }
            }
          }
        }
        if ((((plVar25 != (longlong *)0x0) && ((longlong *)plVar25[1] != (longlong *)0x0)) &&
            (lVar23 = (**(code **)(*(longlong *)plVar25[1] + 0x28))(), lVar23 != 0)) &&
           (*(longlong *)(lVar23 + 0x20) != 0)) {
          dVar3 = *(double *)(lVar23 + 0x28);
          if (9.99999993922529e-09 < dVar3) {
            dVar4 = *(double *)(lVar23 + 0x30);
            if (9.99999993922529e-09 < dVar4) {
              iVar5 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar5 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
                FUN_144781dc0(param_3,iVar5);
              }
              lVar24 = *param_3;
              lVar23 = FUN_147d115fc(lVar23);
              *(longlong *)(lVar24 + (longlong)iVar5 * 0x50) = lVar23;
              if ((lVar23 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar23);
              }
              uVar33 = SUB84(dVar3,0);
              uVar35 = (int)((ulonglong)dVar3 >> 0x20);
              if (dVar4 <= dVar3) {
                uVar33 = SUB84(dVar4,0);
                uVar35 = (int)((ulonglong)dVar4 >> 0x20);
              }
              lVar24 = lVar24 + (longlong)iVar5 * 0x50;
              *(undefined8 *)(lVar24 + 0x38) = local_108[6];
              uVar15 = *local_108;
              uVar16 = local_108[1];
              uVar17 = local_108[2];
              uVar18 = local_108[3];
              uVar19 = local_108[5];
              *(undefined8 *)(lVar24 + 0x28) = local_108[4];
              *(undefined8 *)(lVar24 + 0x30) = uVar19;
              *(undefined8 *)(lVar24 + 0x18) = uVar17;
              *(undefined8 *)(lVar24 + 0x20) = uVar18;
              *(undefined8 *)(lVar24 + 8) = uVar15;
              *(undefined8 *)(lVar24 + 0x10) = uVar16;
              *(float *)(lVar24 + 0x40) = (float)((double)fVar38 / (double)CONCAT44(uVar35,uVar33));
              *(undefined4 *)(lVar24 + 0x44) = 0;
              *(uint *)(lVar24 + 0x48) = *(uint *)(lVar24 + 0x48) & 0xfffffffc | 2;
              uVar29 = local_100;
            }
          }
        }
        lVar23 = local_f0;
        if (local_e8 != (code *)0x0) {
          FUN_1400020a8();
          lVar23 = local_f0;
        }
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 != lVar23);
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    iVar5 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
      FUN_144781dc0(param_3,iVar5);
    }
    lVar23 = *param_3;
    lVar28 = (longlong)iVar5 * 0x50;
    *(undefined8 *)(lVar23 + lVar28) = 0;
    *(undefined8 *)(lVar23 + 0x40 + lVar28) = 0x3f800000;
    *(uint *)(lVar23 + 0x48 + lVar28) = *(uint *)(lVar23 + 0x48 + lVar28) & 0xfffffffc | 2;
    puVar1 = (undefined8 *)(lVar23 + 8 + lVar28);
    *puVar1 = local_d8;
    puVar1[1] = uStack_d0;
    *(undefined8 *)(lVar23 + 0x18 + lVar28) = local_c8;
    *(ulonglong *)(lVar23 + 0x20 + lVar28) = CONCAT44(uVar37,uVar36);
    *(ulonglong *)(lVar23 + 0x28 + lVar28) = CONCAT44(uVar37,uVar36);
    *(ulonglong *)(lVar23 + 0x30 + lVar28) = CONCAT44(uVar37,uVar36);
    *(ulonglong *)(lVar23 + 0x38 + lVar28) = CONCAT44(uVar37,uVar36);
    if (*(int *)(param_1 + 0x7a4) < 0) {
      lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x148);
      if (lVar24 == 0) {
        fVar34 = 0.0;
      }
      else {
        fVar34 = (float)*(int *)(lVar24 + 4);
      }
      fVar34 = (fVar34 / (float)(*(int *)(param_1 + 0x628) + 1)) * fVar38;
    }
    else {
      fVar34 = (float)(-1 << (0xdU - (char)*(int *)(param_1 + 0x7a4) & 0x1f));
    }
    *(float *)((longlong *)(lVar23 + lVar28) + 8) = fVar34;
    lVar24 = *(longlong *)(param_1 + 0x728);
    if (DAT_14c950c29 == '\x01') {
      if (lVar24 == 0) {
        lVar24 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar24 = *(longlong *)(param_1 + 0x728);
      }
    }
    *(longlong *)(lVar23 + lVar28) = lVar24;
  }
  if (*(longlong *)(param_1 + 0x678) != 0) {
    iVar5 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
      FUN_144781dc0(param_3,iVar5);
    }
    lVar23 = *param_3;
    lVar24 = (longlong)iVar5 * 0x50;
    *(undefined8 *)(lVar23 + lVar24) = 0;
    *(undefined4 *)(lVar23 + 0x44 + lVar24) = 0;
    *(uint *)(lVar23 + 0x48 + lVar24) = *(uint *)(lVar23 + 0x48 + lVar24) & 0xfffffffc | 2;
    puVar2 = (undefined4 *)(lVar23 + 8 + lVar24);
    *puVar2 = (undefined4)local_d8;
    puVar2[1] = local_d8._4_4_;
    puVar2[2] = (undefined4)uStack_d0;
    puVar2[3] = uStack_d0._4_4_;
    *(undefined8 *)(lVar23 + 0x18 + lVar24) = local_c8;
    *(ulonglong *)(lVar23 + 0x20 + lVar24) = CONCAT44(uVar37,uVar36);
    *(ulonglong *)(lVar23 + 0x28 + lVar24) = CONCAT44(uVar37,uVar36);
    *(ulonglong *)(lVar23 + 0x30 + lVar24) = CONCAT44(uVar37,uVar36);
    *(ulonglong *)(lVar23 + 0x38 + lVar24) = CONCAT44(uVar37,uVar36);
    *(float *)(lVar23 + 0x40 + lVar24) = fVar38;
    lVar28 = *(longlong *)(param_1 + 0x678);
    if (DAT_14c950c29 == '\x01') {
      if (lVar28 == 0) {
        lVar28 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar28 = *(longlong *)(param_1 + 0x678);
      }
    }
    *(longlong *)(lVar23 + lVar24) = lVar28;
  }
  if ((local_b0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fb57b8 FUN_140fb57b8 body=228 status=ok
// SIG undefined FUN_140fb57b8(void)

longlong FUN_140fb57b8(void)

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
  if (DAT_14caa1b18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417df956;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146323680;
    local_38 = &LAB_147451fa5;
    local_40 = FUN_141791847;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x300;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeMaterialInstanceConstant",&DAT_14caa1b18,
                  &DAT_147451fa4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1b18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb589e FUN_140fb589e body=411 status=ok
// SIG undefined FUN_140fb589e(void)

undefined8 *
FUN_140fb589e(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,float *param_8,float *param_9,
             float param_10,float param_11)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_149f58610;
  param_1[1] = param_5;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  local_58 = DAT_14c84635c;
  local_68 = 0x10;
  FUN_140b3a44e(param_1 + 3,&local_58,param_6);
  param_1[3] = &PTR_FUN_149f57478;
  param_1[10] = 0x40dd0c55447a0000;
  param_1[0xb] = 0;
  fVar2 = param_8[1];
  if (param_10 <= param_8[1]) {
    fVar2 = param_10;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = *param_8;
  if (param_10 <= *param_8) {
    fVar3 = param_10;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  bVar1 = 1;
  if ((*(float *)(param_1 + 8) == fVar3) && (!NAN(*(float *)(param_1 + 8)) && !NAN(fVar3))) {
    bVar1 = -(*(float *)((longlong)param_1 + 0x44) != fVar2) & 1;
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | bVar1;
  *(float *)(param_1 + 8) = fVar3;
  *(float *)((longlong)param_1 + 0x44) = fVar2;
  fVar2 = *param_9;
  fVar3 = param_9[1];
  if (10.0 <= fVar3) {
    fVar3 = 10.0;
  }
  if (fVar3 <= 0.01) {
    fVar3 = 0.01;
  }
  if (10.0 <= fVar2) {
    fVar2 = 10.0;
  }
  if (fVar2 <= 0.01) {
    fVar2 = 0.01;
  }
  local_58 = CONCAT44(fVar3 * param_11,fVar2 * param_11);
  local_68 = 0x10;
  FUN_140b3a44e(param_1 + 0xc,&local_58,param_7,param_4);
  FUN_140fb5a3a(param_1,0x3c088889,1);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb5a3a FUN_140fb5a3a body=535 status=ok
// SIG undefined FUN_140fb5a3a(void)

void FUN_140fb5a3a(longlong param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (((*(float *)(param_1 + 0x58) != param_2) || (NAN(*(float *)(param_1 + 0x58)) || NAN(param_2)))
     || (*(int *)(param_1 + 0x5c) != param_3)) {
    *(float *)(param_1 + 0x58) = param_2;
    *(int *)(param_1 + 0x5c) = param_3;
  }
  else if ((*(byte *)(param_1 + 0x48) & 1) == 0) goto LAB_140fb5b9c;
  lVar3 = (longlong)*(int *)(param_1 + 0x38);
  fVar6 = 1.0;
  if (1 < lVar3) {
    fVar6 = 1.0 / (float)(*(int *)(param_1 + 0x38) + -1);
  }
  if (0 < lVar3) {
    fVar1 = *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x44);
    lVar4 = 0;
    do {
      fVar5 = (float)(int)lVar4 * fVar6 * (fVar2 - fVar1) + fVar1;
      if (fVar5 <= 1e-08) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = 1.0;
        if (fVar5 < 1.0) {
          fVar7 = *(float *)(param_1 + 0x50);
          fVar5 = expf(fVar5 * *(float *)(param_1 + 0x54));
          fVar5 = logf(1.0 - (fVar5 + -1.0) / (fVar7 + -1.0));
          fVar7 = expf(fVar5 * ((param_2 * 120.0) / (float)param_3));
          fVar7 = 1.0 - fVar7;
        }
      }
      *(float *)(*(longlong *)(param_1 + 0x30) + lVar4 * 4) = fVar7;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
LAB_140fb5b9c:
  if (*(char *)(param_1 + 0x90) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 0x80);
    fVar6 = 1.0;
    if (1 < lVar3) {
      fVar6 = 1.0 / (float)(*(int *)(param_1 + 0x80) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0x88);
      fVar2 = *(float *)(param_1 + 0x8c);
      lVar4 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x78) + lVar4 * 4) =
             (float)(int)lVar4 * fVar6 * (fVar2 - fVar1) + fVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 140fb5c52 FUN_140fb5c52 body=339 status=ok
// SIG undefined FUN_140fb5c52(void)

undefined8 * FUN_140fb5c52(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963ee0) {
    FUN_144b3d300(&DAT_14c963ee0);
    if (DAT_14c963ee0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140fb5c52;
      local_50 = 0;
      local_58 = 0x40008001;
      FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
      atexit(FUN_14282980e);
      _Init_thread_footer(&DAT_14c963ee0);
    }
  }
  puVar1[1] = &DAT_14c963e90;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e71b60;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140fb5da6(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb5da6 FUN_140fb5da6 body=176 status=ok
// SIG undefined FUN_140fb5da6(void)

undefined8 *
FUN_140fb5da6(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  local_38 = uVar1;
  if (((uVar1 & 1) != 0) && (uVar1 = uVar1 & 0xfffffffffffffffe, uVar1 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(uVar1);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(uVar1);
    }
  }
  FUN_1403a630a(param_1,&local_38,param_3,param_4);
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  *param_1 = &PTR_LAB_149e71b60;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140fb5e58 FUN_140fb5e58 body=235 status=ok
// SIG undefined FUN_140fb5e58(void)

void FUN_140fb5e58(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140fb5f44(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined4 *)((longlong)iVar1 * 0x90 + *param_1 + 0x88);
      do {
        *(undefined8 *)(puVar2 + -0x1a) = 0;
        *(undefined8 *)(puVar2 + -0x18) = 0x8000000000;
        *(undefined8 *)(puVar2 + -0x22) = 0;
        *(undefined8 *)(puVar2 + -0x20) = 0;
        *(undefined8 *)(puVar2 + -0xe) = 0;
        puVar2[-0xc] = 0;
        *(undefined8 *)(puVar2 + -0x16) = 0;
        *(undefined8 *)(puVar2 + -0x14) = 0;
        *(undefined8 *)(puVar2 + -0xb) = 0xffffffff00000080;
        puVar2[-9] = 0;
        *(undefined8 *)(puVar2 + -6) = 0;
        puVar2[-4] = 0;
        *(undefined8 *)(puVar2 + -2) = 0xffffffff;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x24;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_147ce446c(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_147ce44d4(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140fb5f44 FUN_140fb5f44 body=272 status=ok
// SIG undefined FUN_140fb5f44(void)

void FUN_140fb5f44(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x90;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140fb6054 FUN_140fb6054 body=12 status=ok
// SIG undefined FUN_140fb6054(void)

void FUN_140fb6054(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140fb605d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140fb6060 FUN_140fb6060 body=59 status=ok
// SIG undefined FUN_140fb6060(void)

undefined8 * FUN_140fb6060(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4788a0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fb609c FUN_140fb609c body=495 status=ok
// SIG undefined FUN_140fb609c(void)

void FUN_140fb609c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cb94538 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148a18249;
      local_50 = FUN_14657713c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb94538);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb94538 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148a18249;
        local_50 = FUN_14657713c;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb94538);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb62a4 FUN_140fb62a4 body=157 status=ok
// SIG undefined FUN_140fb62a4(void)

void FUN_140fb62a4(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  undefined7 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 == '\0') {
    FUN_1400bc8c2();
  }
  else {
    FUN_1400bc96c((char *)(param_1 + 0x1e0));
  }
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    iVar2 = *(int *)(param_1 + 0xa8);
    if (0 < iVar2) {
      lVar5 = 0x20;
      lVar6 = 0;
      bVar3 = DAT_14c950c29;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar5);
        uVar4 = (undefined7)((ulonglong)*(longlong *)(param_1 + 0xa0) >> 8);
        if ((lVar1 != 0 & bVar3) == 1) {
          FUN_1456cec3c(lVar1);
LAB_140fb62fe:
          FUN_140fb6342(lVar1,CONCAT71(uVar4,1));
          iVar2 = *(int *)(param_1 + 0xa8);
          bVar3 = DAT_14c950c29;
        }
        else if (lVar1 != 0) goto LAB_140fb62fe;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x170;
      } while (lVar6 < iVar2);
    }
  }
  return;
}



// FUNCTION 140fb6342 FUN_140fb6342 body=213 status=ok
// SIG undefined FUN_140fb6342(void)

void FUN_140fb6342(longlong *param_1,char param_2)

{
  byte bVar1;
  
  if (*(char *)((longlong)param_1 + 0xb91) != '\0') {
    if (param_1[0x1ac] == DAT_14cb94e30) {
      bVar1 = 1;
    }
    else {
      bVar1 = (*(byte *)(param_1 + 0x172) & 0x10) >> 4;
    }
    if ((param_1[0x167] != 0) && ((longlong *)param_1[0x168] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0x168] + 0x38))();
    }
    *(undefined1 *)((longlong)param_1 + 0xb91) = 0;
    *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xcf;
    if (param_2 != '\0') {
      if (bVar1 == 0) {
        param_1[0x16f] = 0;
      }
      else {
        FUN_140ebdd2e(param_1);
      }
    }
  }
  if ((char)param_1[0x175] != '\0') {
    if ((param_1[0x167] != 0) && ((longlong *)param_1[0x168] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0x168] + 0x38))();
    }
    if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140fb63fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x870))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140fb6426 FUN_140fb6426 body=45 status=ok
// SIG undefined FUN_140fb6426(void)

undefined8 FUN_140fb6426(undefined8 param_1,int param_2)

{
  FUN_140fb6454();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140fb6454 FUN_140fb6454 body=241 status=ok
// SIG undefined FUN_140fb6454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fb6454(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b318730;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140fb655c(param_1 + 9);
  FUN_140fb6545(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140fb65f4(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140fb6593(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140fb6537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140fb6545 FUN_140fb6545 body=23 status=ok
// SIG undefined FUN_140fb6545(void)

void FUN_140fb6545(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fb655c FUN_140fb655c body=55 status=ok
// SIG undefined FUN_140fb655c(void)

void FUN_140fb655c(longlong *param_1)

{
  FUN_140fb6692(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fb6593 FUN_140fb6593 body=97 status=ok
// SIG undefined FUN_140fb6593(void)

void FUN_140fb6593(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      plVar1[-2] = (longlong)&DAT_14a171d50;
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_140115c12(plVar1,0);
      }
      plVar1[-1] = 0;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fb65f4 FUN_140fb65f4 body=158 status=ok
// SIG undefined FUN_140fb65f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fb65f4(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x78);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-8] = 0;
      }
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 + 2;
      puVar2 = puVar2 + 0x10;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 140fb6692 FUN_140fb6692 body=506 status=ok
// SIG undefined FUN_140fb6692(void)

void FUN_140fb6692(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140fb6777;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140fb6777;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140fb6777:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140fb688e FUN_140fb688e body=106 status=ok
// SIG undefined FUN_140fb688e(void)

void FUN_140fb688e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x210));
  FUN_140fb68fa(param_1 + 0xb28,local_24,param_3);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x210));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb68fa FUN_140fb68fa body=573 status=ok
// SIG undefined FUN_140fb68fa(void)

uint * FUN_140fb68fa(uint *param_1,uint *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar13 = *param_1;
  lVar10 = (longlong)(int)uVar13;
  if (lVar10 == 0xffffff) {
    uVar13 = param_1[0x10];
    if (uVar13 == param_1[0x11]) {
      uVar2 = FUN_14001fdce(*(undefined8 *)(param_1 + 0xe),(ulonglong)(uVar13 + 4) << 7,8);
      *(undefined8 *)(param_1 + 0xe) = uVar2;
      param_1[0x11] = param_1[0x11] + 4;
      uVar13 = param_1[0x10];
    }
    FUN_140fb6b38(param_1 + 2);
    uVar14 = param_1[0xc];
    if (uVar14 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar1 = uVar14 - 1;
      }
      iVar1 = iVar1 >> 5;
    }
    puVar7 = param_1 + 6;
    uVar12 = uVar14 + 1;
    uVar9 = uVar14 + 0x1f;
    if (-1 < (int)uVar14) {
      uVar9 = uVar14;
    }
    if ((int)uVar9 >> 5 == iVar1) {
      param_1[0xc] = uVar12;
    }
    else {
      if ((int)param_1[0xd] <= (int)uVar14) {
        if (uVar14 + 0x20 < 0xa0) {
          uVar5 = 0x80;
          uVar12 = uVar14;
        }
        else {
          uVar12 = uVar14 + 0x20 >> 5;
          if (param_1[0xd] + 0x1f < 0xa0) {
            uVar5 = 4;
            if (4 < uVar12) {
              uVar5 = uVar12;
            }
          }
          else {
            uVar5 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar5 << 2,0);
          iVar1 = (int)(uVar3 >> 2);
          uVar5 = 0xffffffe0;
          if ((int)uVar12 <= iVar1) {
            uVar5 = iVar1 << 5;
          }
          uVar12 = param_1[0xc];
        }
        param_1[0xd] = uVar5;
        FUN_1446efbd8(puVar7,uVar12);
        uVar12 = param_1[0xc] + 1;
      }
      uVar5 = uVar12 + 0x1f;
      if (-1 < (int)uVar12) {
        uVar5 = uVar12;
      }
      param_1[0xc] = uVar12;
      if ((int)uVar12 % 0x20 != 0) {
        puVar8 = *(uint **)(param_1 + 10);
        if (*(uint **)(param_1 + 10) == (uint *)0x0) {
          puVar8 = puVar7;
        }
        bVar4 = -(char)((int)uVar12 % 0x20);
        puVar8[(int)uVar5 >> 5] = (puVar8[(int)uVar5 >> 5] << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
      }
    }
    if (*(uint **)(param_1 + 10) != (uint *)0x0) {
      puVar7 = *(uint **)(param_1 + 10);
    }
    puVar7[(int)uVar9 >> 5] = puVar7[(int)uVar9 >> 5] | 1 << ((byte)uVar14 & 0x1f);
    param_1[0x10] = param_1[0x10] + 1;
    lVar10 = (longlong)(int)uVar13;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 2);
    puVar7 = param_1 + 6;
    if (*(uint **)(param_1 + 10) != (uint *)0x0) {
      puVar7 = *(uint **)(param_1 + 10);
    }
    uVar14 = uVar13 + 0x1f;
    if (-1 < (int)uVar13) {
      uVar14 = uVar13;
    }
    puVar7[(int)uVar14 >> 5] = puVar7[(int)uVar14 >> 5] | 1 << ((byte)uVar13 & 0x1f);
    *param_1 = *(uint *)(lVar6 + lVar10 * 4) & 0xffffff;
    puVar7 = (uint *)(lVar6 + lVar10 * 4);
    *puVar7 = *puVar7 | 0xffffff;
  }
  puVar11 = (undefined8 *)(lVar10 * 0x80 + *(longlong *)(param_1 + 0xe));
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *param_3;
    param_3 = param_3 + 1;
    puVar11 = puVar11 + 1;
  }
  param_1[0x12] = param_1[0x12] + 1;
  uVar14 = 0;
  if (((-1 < (int)uVar13) && ((int)uVar13 < (int)param_1[4])) &&
     (uVar12 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar13 * 4), uVar14 = 0,
     0xffffff < uVar12)) {
    uVar14 = uVar13 & 0xffffff | uVar12 & 0xff000000;
  }
  *param_2 = uVar14;
  return param_2;
}



// FUNCTION 140fb6b38 FUN_140fb6b38 body=65 status=ok
// SIG undefined FUN_140fb6b38(void)

int FUN_140fb6b38(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457da84e(param_1,iVar1);
  }
  FUN_140fb6b79((longlong)iVar1 * 4 + *param_1,1);
  return iVar1;
}



// FUNCTION 140fb6b79 FUN_140fb6b79 body=243 status=ok
// SIG undefined FUN_140fb6b79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fb6b79(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar2 = (ulonglong)param_2 - 1;
    auVar4._8_4_ = (int)lVar2;
    auVar4._0_8_ = lVar2;
    auVar4._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    uVar3 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x302);
    auVar7 = pmovsxbq(in_XMM2,0x100);
    auVar4 = auVar4 ^ _DAT_149931e80;
    do {
      lVar2 = auVar4._0_8_;
      lVar5 = auVar4._8_8_;
      if ((bool)(~(lVar2 < (longlong)(uVar3 ^ auVar1._0_8_)) & 1)) {
        *(undefined4 *)(param_1 + uVar3 * 4) = 0x1ffffff;
      }
      auVar8._8_4_ = (int)uVar3;
      auVar8._0_8_ = uVar3;
      auVar8._12_4_ = (int)(uVar3 >> 0x20);
      if ((longlong)((auVar8._8_8_ | auVar7._8_8_) ^ auVar1._8_8_) <= lVar5) {
        *(undefined4 *)(param_1 + 4 + uVar3 * 4) = 0x1ffffff;
      }
      auVar8 = (auVar8 | auVar6) ^ auVar1;
      if (auVar8._0_8_ <= lVar2) {
        *(undefined4 *)(param_1 + 8 + uVar3 * 4) = 0x1ffffff;
      }
      if (auVar8._8_8_ <= lVar5) {
        *(undefined4 *)(param_1 + 0xc + uVar3 * 4) = 0x1ffffff;
      }
      uVar3 = uVar3 + 4;
    } while (((ulonglong)param_2 + 3 & 0xfffffffffffffffc) != uVar3);
  }
  return;
}



// FUNCTION 140fb6c7a FUN_140fb6c7a body=40 status=ok
// SIG undefined FUN_140fb6c7a(void)

undefined8 FUN_140fb6c7a(undefined8 param_1,int param_2)

{
  FUN_140fb6ca2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fb6ca2 FUN_140fb6ca2 body=154 status=ok
// SIG undefined FUN_140fb6ca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fb6ca2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b1a5550;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140fb6d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140fb6d42 FUN_140fb6d42 body=228 status=ok
// SIG undefined FUN_140fb6d42(void)

longlong FUN_140fb6d42(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6ab98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1458c3afc;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148769cfb;
    local_40 = &LAB_146528bff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x980;
    FUN_14081cfa3(L"/Script/GbxGame",L"LightBeam",&DAT_14cb6ab98,FUN_146528bd8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ab98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb6e28 FUN_140fb6e28 body=150 status=ok
// SIG undefined FUN_140fb6e28(void)

ulonglong FUN_140fb6e28(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_4;
  (**(code **)(*param_1 + 0x1d0))(param_1,&local_28,param_2,param_3);
  if (local_28 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar3 = (**(code **)(*local_28 + 0x30))();
    uVar4 = CONCAT71((int7)((ulonglong)&local_28 >> 8),iVar3 == 1);
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb6ec4 FUN_140fb6ec4 body=938 status=ok
// SIG undefined FUN_140fb6ec4(void)

undefined8 *
FUN_140fb6ec4(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0xe8);
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x380) + 0xf0);
  if (plVar11 == (longlong *)0x0) {
    local_98 = param_5;
    FUN_140cdd2fe(local_58,uVar3,param_3,param_4);
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_98 = param_5;
    FUN_140cdd2fe(local_58,uVar3,param_3,param_4);
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_58[0] != (longlong *)0xffffffffffffffff) {
    (**(code **)(*local_58[0] + 8))(local_58[0],&local_78);
    local_68 = local_78;
    local_60 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_78 + 0x40))();
    iVar5 = FUN_1415c991c((longlong *)(param_1 + 0x428));
    plVar11 = local_60;
    if (iVar5 == -1) {
      lVar15 = 0;
    }
    else {
      lVar15 = (longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x428);
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_70 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    if (lVar15 != 0) {
      iVar5 = *(int *)(param_5 + 1);
      uVar9 = 0;
      iVar8 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar8 = 0;
      }
      if (0 < iVar8) {
        if (iVar5 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        else {
          puVar7 = (undefined2 *)*param_5;
        }
        lVar13 = 0;
        uVar9 = 0;
        do {
          uVar10 = ((uint)(0x19 < (ushort)puVar7[lVar13] - 0x61) * 0x20 +
                   (uint)(ushort)puVar7[lVar13]) - 0x20;
          uVar14 = (uint)(uVar9 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar10) & 0xff) * 4);
          uVar9 = (ulonglong)
                  (uVar14 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
          lVar13 = lVar13 + 1;
        } while (iVar8 != (int)lVar13);
      }
      iVar5 = FUN_1415b7a94((longlong *)(lVar15 + 0x10),uVar9,param_5);
      if ((iVar5 != -1) &&
         (lVar15 = (longlong)iVar5 * 0x68 + *(longlong *)(lVar15 + 0x10),
         plVar11 = (longlong *)(lVar15 + 0x10), plVar11 != (longlong *)0x0 && lVar15 != 0)) {
        FUN_1408f45ee(&local_88,param_4);
        plVar1 = local_80;
        if (local_80 == (longlong *)0x0) {
          local_60 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
          local_60 = local_80;
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        local_68 = local_88;
        uVar6 = (**(code **)(*local_88 + 0x40))();
        iVar5 = FUN_1412f0ef2(plVar11,uVar6,&local_68);
        plVar4 = local_60;
        if (iVar5 == -1) {
          lVar15 = 0;
        }
        else {
          lVar15 = (longlong)iVar5 * 0x28 + *plVar11;
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_60 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar1 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
          LOCK();
          plVar11 = plVar1 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        puVar12 = (undefined8 *)(lVar15 + 0x10);
        if (lVar15 == 0) {
          puVar12 = (undefined8 *)0x0;
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_80 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)local_80 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_80 + 0x10))(local_80);
            }
          }
        }
        if (puVar12 != (undefined8 *)0x0) {
          *param_2 = *puVar12;
          lVar15 = puVar12[1];
          param_2[1] = lVar15;
          if (lVar15 != 0) {
            LOCK();
            *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
            UNLOCK();
          }
          goto LAB_140fb7207;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140fb7207:
  if (local_40._4_4_ != -1) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    local_48 = 0;
    local_40 = 0xffffffff00000000;
  }
  FUN_14438be00(local_58);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb7270 FUN_140fb7270 body=184 status=ok
// SIG undefined FUN_140fb7270(void)

undefined8 FUN_140fb7270(void)

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
  
  uVar1 = DAT_14c951640;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(DAT_14c951640,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140fb732a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = uVar1;
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



// FUNCTION 140fb732a FUN_140fb732a body=228 status=ok
// SIG undefined FUN_140fb732a(void)

longlong FUN_140fb732a(void)

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
  if (DAT_14cc272a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458cb67a;
    local_38 = &LAB_1497f2329;
    local_40 = FUN_140e622a3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/ChaosCloth",L"ChaosClothingSimulationInteractor",&DAT_14cc272a8,
                  &DAT_1497f2328);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc272a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb740f FUN_140fb740f body=49 status=ok
// SIG undefined FUN_140fb740f(void)

longlong FUN_140fb740f(void)

{
  if (DAT_14caa87e0 == 0) {
    FUN_140f50038(&DAT_14caa87e0,&PTR_s__Script_DataflowSimulation_14a3e5d47_1_14a3e5d28);
  }
  return DAT_14caa87e0;
}



// FUNCTION 140fb7440 FUN_140fb7440 body=82 status=ok
// SIG undefined FUN_140fb7440(void)

void FUN_140fb7440(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x10;
  do {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2);
    if (lVar1 != 0) {
      FUN_140fb7440(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x30);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fb7492 FUN_140fb7492 body=286 status=ok
// SIG undefined FUN_140fb7492(void)

undefined8 FUN_140fb7492(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140fb75aa;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140fb75aa;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140fb75aa:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140fb7557;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140fb7557;
    }
  }
  uVar6 = 0;
LAB_140fb7557:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb75b2 FUN_140fb75b2 body=409 status=ok
// SIG undefined FUN_140fb75b2(void)

void FUN_140fb75b2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar6 = FUN_140fd4d7e(param_1,param_2,0,0);
  if (cVar6 != '\0') {
    FUN_1449027d0(param_1,&local_40);
    lVar3 = *(longlong *)(local_40 + 0x240);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa0));
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar10 = (int *)((longlong)local_38 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if (*(int *)(lVar3 + 0x50) != *(int *)(lVar3 + 0x7c)) {
      lVar4 = *param_2;
      lVar9 = lVar3 + 0x80;
      if (*(longlong *)(lVar3 + 0x88) != 0) {
        lVar9 = *(longlong *)(lVar3 + 0x88);
      }
      uVar8 = (longlong)((int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) &
              (longlong)*(int *)(lVar3 + 0x90) - 1U;
      iVar11 = *(int *)(lVar9 + (uVar8 & 0xffffffff) * 4);
      if (iVar11 != -1) {
        lVar5 = *(longlong *)(lVar3 + 0x48);
        do {
          if (*(longlong *)(lVar5 + (longlong)iVar11 * 0x58) == lVar4) {
            iVar11 = *(int *)(lVar9 + uVar8 * 4);
            goto LAB_140fb76b8;
          }
          iVar11 = *(int *)((longlong)iVar11 * 0x58 + lVar5 + 0x50);
        } while (iVar11 != -1);
      }
    }
LAB_140fb76f1:
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa0));
  }
  FUN_1406a235e(param_1,2);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140fb76b8:
  if (iVar11 != -1) {
    lVar2 = lVar5 + (longlong)iVar11 * 0x58;
    if (*(longlong *)(lVar5 + (longlong)iVar11 * 0x58) != lVar4) goto LAB_140fb7725;
    iVar7 = *(int *)(lVar9 + (longlong)*(int *)(lVar2 + 0x54) * 4);
    if (iVar7 == iVar11) {
      piVar10 = (int *)(lVar9 + (longlong)*(int *)(lVar2 + 0x54) * 4);
    }
    else {
      do {
        piVar10 = (int *)(lVar5 + (longlong)iVar7 * 0x58 + 0x50);
        iVar7 = *piVar10;
      } while (iVar7 != iVar11);
    }
    *piVar10 = *(int *)(lVar2 + 0x50);
    FUN_140fb774c();
  }
  goto LAB_140fb76ea;
LAB_140fb7725:
  iVar11 = *(int *)(lVar2 + 0x50);
  goto LAB_140fb76b8;
LAB_140fb76ea:
  *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
  goto LAB_140fb76f1;
}



// FUNCTION 140fb774c FUN_140fb774c body=116 status=ok
// SIG undefined FUN_140fb774c(void)

void FUN_140fb774c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140fb77ce FUN_140fb77ce body=72 status=ok
// SIG undefined FUN_140fb77ce(void)

undefined8 * FUN_140fb77ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b693f90;
  if (param_1[0xb0] != 0) {
    FUN_1400020a8();
  }
  FUN_140c09192(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fb7824 FUN_140fb7824 body=172 status=ok
// SIG undefined FUN_140fb7824(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140fb7824(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b3adfb0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140c08aca(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fb78d0 FUN_140fb78d0 body=207 status=ok
// SIG undefined FUN_140fb78d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140fb78d0(void)

{
  if ((DAT_14ca9ef2f & 2) == 0) {
    DAT_14ca9ef2f = DAT_14ca9ef2f | 2;
    _DAT_14ca9eed0 = L"FShaderResourceParameter";
    _DAT_14ca9eee8 = FUN_146826540;
    _DAT_14ca9eef0 = FUN_146825d77;
    _DAT_14ca9eef8 = FUN_146825fd6;
    _DAT_14ca9ef00 = FUN_1407e02ea;
    _DAT_14ca9ef08 = FUN_146826273;
    _DAT_14ca9eee0 = &LAB_14744099a;
    _DAT_14ca9ef20 = 0xffffffff00000004;
    _DAT_14ca9ef28 = 2;
    DAT_14ca9ef2c = 0;
    _DAT_14ca9ef10 = &LAB_1474409a2;
    FUN_1457da8d4();
    FUN_1407e00cc(&DAT_14ca9eec8);
  }
  return &DAT_14ca9eec8;
}



// FUNCTION 140fb79a0 FUN_140fb79a0 body=26 status=ok
// SIG undefined FUN_140fb79a0(void)

void FUN_140fb79a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 == 0) {
    return;
  }
  if (((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) ||
     ((*(uint *)(param_2 + 8) & 0x30) != 0)) {
    return;
  }
  iVar8 = *(int *)(lVar3 + 0x228);
  if ((longlong)iVar8 != 0) {
    lVar4 = 0;
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x220) + lVar4) == param_1) {
        lVar6 = *(longlong *)(lVar3 + 0x220) - lVar6;
        if (lVar6 != 0) {
          FUN_140bf259a(lVar6 + 0x18,param_2,param_3);
          if (-1 < *(char *)(param_1 + 0x9c)) {
            return;
          }
          if ((*(byte *)(param_1 + 0x9f) & 0x20) == 0) {
            return;
          }
          FUN_147bda5a0(param_1,param_2,param_3);
          return;
        }
        break;
      }
      lVar6 = lVar6 + -0x28;
      lVar4 = lVar4 + 0x28;
    } while (-lVar6 != (longlong)iVar8 * 0x28);
  }
  if (param_1 == 0) {
    iVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(lVar6 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar5 = iVar9;
      }
    }
    iVar8 = *(int *)(lVar3 + 0x228);
  }
  plVar1 = (longlong *)(lVar3 + 0x220);
  *(uint *)(lVar3 + 0x228) = iVar8 + 1U;
  if (*(uint *)(lVar3 + 0x22c) < iVar8 + 1U) {
    FUN_1405f22b2(plVar1,iVar8);
  }
  lVar3 = *plVar1;
  lVar6 = (longlong)iVar8 * 0x28;
  *(longlong *)(lVar3 + lVar6) = param_1;
  *(uint *)(lVar3 + 8 + lVar6) = uVar7;
  *(int *)(lVar3 + 0xc + lVar6) = iVar5;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = 0xf;
  puVar2 = (undefined8 *)(lVar3 + 0x18 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_140bf259a(*plVar1 + 0x18 + lVar6,param_2,param_3);
  return;
}



// FUNCTION 140fb79ba FUN_140fb79ba body=472 status=ok
// SIG undefined FUN_140fb79ba(void)

void FUN_140fb79ba(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (((param_3 == 0) || ((*(uint *)(param_3 + 8) >> 0x1e & 1) != 0)) ||
     ((*(uint *)(param_3 + 8) & 0x30) != 0)) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x228);
  if ((longlong)iVar7 != 0) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x220) + lVar3) == param_2) {
        lVar5 = *(longlong *)(param_1 + 0x220) - lVar5;
        if (lVar5 != 0) {
          FUN_140bf259a(lVar5 + 0x18,param_3,param_4);
          if (-1 < *(char *)(param_2 + 0x9c)) {
            return;
          }
          if ((*(byte *)(param_2 + 0x9f) & 0x20) == 0) {
            return;
          }
          FUN_147bda5a0(param_2,param_3,param_4);
          return;
        }
        break;
      }
      lVar5 = lVar5 + -0x28;
      lVar3 = lVar3 + 0x28;
    } while (-lVar5 != (longlong)iVar7 * 0x28);
  }
  if (param_2 == 0) {
    iVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar5 + 0x10) = iVar8;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar8;
      }
    }
    iVar7 = *(int *)(param_1 + 0x228);
  }
  plVar1 = (longlong *)(param_1 + 0x220);
  *(uint *)(param_1 + 0x228) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x22c) < iVar7 + 1U) {
    FUN_1405f22b2(plVar1,iVar7);
  }
  lVar5 = *plVar1;
  lVar3 = (longlong)iVar7 * 0x28;
  *(longlong *)(lVar5 + lVar3) = param_2;
  *(uint *)(lVar5 + 8 + lVar3) = uVar6;
  *(int *)(lVar5 + 0xc + lVar3) = iVar4;
  *(undefined4 *)(lVar5 + 0x10 + lVar3) = 0xf;
  puVar2 = (undefined8 *)(lVar5 + 0x18 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_140bf259a(*plVar1 + 0x18 + lVar3,param_3,param_4);
  return;
}



// FUNCTION 140fb7b9e FUN_140fb7b9e body=237 status=ok
// SIG undefined FUN_140fb7b9e(void)

undefined8 * FUN_140fb7b9e(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b0bc380;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_28,L"AudioVolume",1);
  local_48 = FUN_140fb7c8c();
  local_38 = 0;
  local_40 = 1;
  lVar2 = FUN_140486aac(param_2,param_1,local_28,local_48);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar2;
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
    lVar2 = param_1[0x72];
  }
  param_1[0x39] = lVar2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb7c8c FUN_140fb7c8c body=228 status=ok
// SIG undefined FUN_140fb7c8c(void)

longlong FUN_140fb7c8c(void)

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
  if (DAT_14cb5a1a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1486658ba;
    local_40 = &LAB_1410647c7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x7a0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAudioVolumeComponent",&DAT_14cb5a1a8,FUN_1464c8814);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5a1a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb7d76 FUN_140fb7d76 body=221 status=ok
// SIG undefined FUN_140fb7d76(void)

longlong FUN_140fb7d76(void)

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
  if (DAT_14caec538 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147bbf07e;
    local_40 = &LAB_1457f47ae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialParameterCollection",&DAT_14caec538,FUN_1463eb5a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caec538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb7e54 FUN_140fb7e54 body=258 status=ok
// SIG undefined FUN_140fb7e54(void)

void FUN_140fb7e54(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar2 = uVar2 >> 0x10 ^ uVar2;
    lVar5 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x88);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (uVar2 * 0x40 + (uVar1 >> 0x10 ^ uVar1) + (uVar2 >> 2) + 0x9e3779b9 ^
                             uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x48);
      do {
        lVar6 = (longlong)iVar4 * 0x20;
        lVar3 = lVar5 + lVar6;
        if ((*(ulonglong *)(lVar5 + lVar6) == param_2) &&
           (*(ulonglong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar3 + 0x18);
        lVar3 = 0;
      } while (iVar4 != -1);
      goto LAB_140fb7f33;
    }
  }
  lVar3 = 0;
LAB_140fb7f33:
  FUN_140fb7f56(param_2,*(undefined4 *)(lVar3 + 0x10),param_4);
  return;
}



// FUNCTION 140fb7f56 FUN_140fb7f56 body=126 status=ok
// SIG undefined FUN_140fb7f56(void)

void FUN_140fb7f56(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_146e23e8a();
    return;
  }
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0x1a0);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x198);
  uVar5 = 0;
  if (0 < (int)uVar8) {
    uVar9 = -param_2;
    if ((int)-param_2 < 0) {
      uVar9 = param_2;
    }
    uVar6 = (ulonglong)uVar8;
    do {
      uVar6 = uVar6 >> 1;
      uVar10 = (uint)uVar6 + (int)uVar5;
      uVar1 = *(uint *)(lVar3 + (ulonglong)uVar10 * 4);
      uVar7 = -uVar1;
      if ((int)uVar7 < 0) {
        uVar7 = uVar1;
      }
      if (uVar7 <= uVar9) {
        uVar5 = (ulonglong)(uVar10 + (uVar8 & 1));
      }
      bVar4 = 1 < uVar8;
      uVar8 = (uint)uVar6;
    } while (bVar4);
  }
  iVar2 = *(int *)(lVar3 + uVar5 * 4);
  if (iVar2 < 1 == (bool)param_3) {
    *(int *)(lVar3 + uVar5 * 4) = -iVar2;
  }
  return;
}



// FUNCTION 140fb7fe2 FUN_140fb7fe2 body=85 status=ok
// SIG undefined FUN_140fb7fe2(void)

undefined8 * FUN_140fb7fe2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3a4a60;
  plVar3 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fb8048 FUN_140fb8048 body=49 status=ok
// SIG undefined FUN_140fb8048(void)

void FUN_140fb8048(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b04c4c0;
  *(undefined2 *)(param_1 + 3) = 1;
  return;
}



// FUNCTION 140fb807a FUN_140fb807a body=456 status=ok
// SIG undefined FUN_140fb807a(void)

void FUN_140fb807a(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined7 uVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f05dd8();
  lVar4 = FUN_1447210f0(param_1);
  if ((((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x1f0), lVar4 != 0)) &&
      (*(longlong *)(param_1 + 0x4f0) != 0)) &&
     (((*(int *)(param_1 + 0x4ec) != 0 && (uVar2 = *(uint *)(param_1 + 0x4e8), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)))) {
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x4ec))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      if ((DAT_14cbe7058 != 0) && ((longlong)*(int *)(param_1 + 0x4e0) != 0)) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x68 + lVar6) == DAT_14cbe7058) {
            iVar5 = (int)(lVar6 >> 3) * -0xf0f0f0f;
            if (((iVar5 != -1) &&
                (lVar6 = *(longlong *)(param_1 + 0x4d8) + (longlong)iVar5 * 0x88, lVar6 != 0)) &&
               (*(int *)(lVar6 + 0x80) < 1)) {
              uVar7 = 0;
              goto LAB_140fb81ee;
            }
            break;
          }
          lVar6 = lVar6 + 0x88;
        } while ((longlong)*(int *)(param_1 + 0x4e0) * 0x88 != lVar6);
      }
      plVar1 = (longlong *)(param_1 + 0x4d8);
      local_30 = DAT_14cbe7060;
      local_28 = -1;
      cVar3 = FUN_144a7a548(plVar1);
      uVar8 = (undefined7)((ulonglong)plVar1 >> 8);
      if ((cVar3 == '\0') || (lVar6 = (longlong)local_28 * 0x88 + *plVar1, lVar6 == 0)) {
        uVar7 = (undefined4)CONCAT71(uVar8,1);
      }
      else {
        uVar7 = (undefined4)CONCAT71(uVar8,*(int *)(lVar6 + 0x80) < 1);
      }
LAB_140fb81ee:
      lVar4 = FUN_140fb8258(lVar4);
      if (lVar4 != 0) {
        FUN_140fb83f4(lVar4,param_1 + 0x25f8,uVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb8258 FUN_140fb8258 body=105 status=ok
// SIG undefined FUN_140fb8258(void)

void FUN_140fb8258(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140fb830e();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140fb82c2(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb82c2 FUN_140fb82c2 body=76 status=ok
// SIG undefined FUN_140fb82c2(void)

void FUN_140fb82c2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140fb830e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140fb82ff;
    }
  }
  lVar2 = 0;
LAB_140fb82ff:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140fb830e FUN_140fb830e body=228 status=ok
// SIG undefined FUN_140fb830e(void)

longlong FUN_140fb830e(void)

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
  if (DAT_14cbaf6c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148c4a005;
    local_40 = &LAB_145f9bc50;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2c8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakTrackerObjectManager",&DAT_14cbaf6c8,&DAT_148c4a004);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaf6c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb83f4 FUN_140fb83f4 body=181 status=ok
// SIG undefined FUN_140fb83f4(void)

void FUN_140fb83f4(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar1 != 0) {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(lVar1 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,local_38,puVar2,1);
    FUN_140fb8546(param_1,local_38,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb84c8 FUN_140fb84c8 body=124 status=ok
// SIG undefined FUN_140fb84c8(void)

longlong FUN_140fb84c8(undefined8 *param_1)

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
    lVar1 = FUN_1403a1980(local_48);
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



// FUNCTION 140fb8546 FUN_140fb8546 body=766 status=ok
// SIG undefined FUN_140fb8546(void)

void FUN_140fb8546(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_88 [32];
  longlong *local_68;
  uint *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  cVar6 = (char)param_3;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = FUN_1403a1726();
  if (lVar9 != 0) {
    *(char *)(lVar9 + 0x60) = cVar6;
    local_68 = param_2;
    cVar7 = FUN_14039fb48(param_1,param_2);
    if (cVar7 != cVar6) {
      FUN_148efed08(param_1,local_68,param_3);
    }
    if (cVar6 == '\0') {
      puVar20 = (uint *)(param_1 + 0x2c);
      iVar3 = (int)param_1[0x2f];
      if (iVar3 == 0) {
        uVar22 = 1;
        uVar21 = 0;
        iVar12 = 0;
        iVar18 = 0;
      }
      else {
        puVar10 = (uint *)param_1[0x2e];
        if ((uint *)param_1[0x2e] == (uint *)0x0) {
          puVar10 = puVar20;
        }
        uVar17 = *puVar10;
        if (uVar17 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          uVar21 = 0;
          uVar22 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar22 = uVar21;
          }
          iVar18 = 0;
          do {
            if (uVar22 == uVar21) goto LAB_140fb86ed;
            iVar18 = iVar18 + 0x20;
            uVar17 = puVar10[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar21 = 0;
          iVar18 = 0;
        }
        uVar22 = (ulonglong)(-uVar17 & uVar17);
        uVar2 = uVar22 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar12 = (iVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar12) {
          iVar12 = iVar3;
        }
      }
      if (iVar12 != iVar3) {
        uVar17 = 0xffffffff;
        iVar8 = iVar3;
        do {
          lVar9 = param_1[0x2a];
          plVar4 = *(longlong **)(lVar9 + 8 + (longlong)iVar12 * 0x18);
          if ((plVar4 != (longlong *)0x0) && (lVar19 = *plVar4, lVar19 != 0)) {
            puVar5 = *(undefined4 **)(lVar19 + 8);
            puVar16 = &DAT_14c9485f0;
            if (puVar5 != (undefined4 *)0x0) {
              puVar16 = puVar5;
            }
            local_60 = puVar20;
            FUN_1447325ac(puVar16,&local_58,1);
            if (local_58 == *local_68) {
              puVar1 = (undefined8 *)(lVar9 + (longlong)iVar12 * 0x18);
              puVar1[1] = 0;
              local_50 = *puVar1;
              iVar12 = FUN_1400ff362(param_1 + 0x20,
                                     (uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
              if (iVar12 == -1) {
                lVar9 = 0;
              }
              else {
                lVar9 = (longlong)iVar12 * 0x14 + param_1[0x20];
              }
              *(undefined4 *)(lVar9 + 8) = 0xffffffff;
              uVar11 = FUN_14479d2ce(puVar1);
              FUN_148ef978e(param_1 + 7,uVar11,1);
            }
            iVar8 = (int)param_1[0x2f];
            puVar20 = local_60;
          }
          uVar17 = uVar17 & ~(uint)uVar22;
          puVar10 = (uint *)param_1[0x2e];
          if ((uint *)param_1[0x2e] == (uint *)0x0) {
            puVar10 = puVar20;
          }
          iVar12 = (int)uVar21;
          lVar9 = (longlong)iVar12;
          uVar13 = puVar10[lVar9] & uVar17;
          if (uVar13 == 0) {
            iVar14 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar14 = iVar8 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar18 = iVar18 + 0x20;
            iVar15 = iVar14;
            if (iVar14 < iVar12) {
              iVar15 = iVar12;
            }
            if (iVar12 < iVar14) {
              lVar19 = 0;
              do {
                uVar13 = puVar10[lVar9 + lVar19 + 1];
                if (uVar13 != 0) {
                  uVar21 = (ulonglong)(iVar12 + (int)lVar19 + 1);
                  uVar17 = 0xffffffff;
                  goto LAB_140fb86c0;
                }
                iVar18 = iVar18 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar15 - lVar9 != lVar19);
              uVar17 = 0xffffffff;
              iVar12 = iVar15;
            }
            uVar21 = (ulonglong)(iVar12 + 1);
            iVar12 = iVar8;
          }
          else {
LAB_140fb86c0:
            uVar22 = (ulonglong)(-uVar13 & uVar13);
            uVar2 = uVar22 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar12 = (iVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if (iVar8 <= iVar12) {
              iVar12 = iVar8;
            }
          }
        } while (iVar12 != iVar3);
      }
    }
LAB_140fb86ed:
    lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar9 != 0) {
      FUN_140fb8846(param_1,lVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fb8846 FUN_140fb8846 body=1645 status=ok
// SIG undefined FUN_140fb8846(void)

void FUN_140fb8846(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  uint *local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0) {
    local_b0 = (longlong *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0xf8) = 0;
    local_b8 = param_1;
    if (*(int *)(param_1 + 0xfc) != 0) {
      FUN_140fb8eb4();
    }
    lVar7 = local_b8;
    lVar9 = *(longlong *)(param_2 + 0x18);
    plVar13 = (longlong *)(local_b8 + 0x150);
    iVar18 = *(int *)(local_b8 + 0x198);
    if (iVar18 < 2) {
      lVar7 = local_b8 + 0x188;
      if (*(longlong *)(local_b8 + 400) != 0) {
        lVar7 = *(longlong *)(local_b8 + 400);
      }
      iVar15 = iVar18 + 3;
      if (-1 < iVar18) {
        iVar15 = iVar18;
      }
      if (*(int *)(local_b8 + 0x158) - *(int *)(local_b8 + 0x184) < iVar15 >> 2) {
        lVar6 = local_b8 + 0x160;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar6;
        if (*(int *)(local_b8 + 0x178) == 0) {
          iVar18 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar18 = *(int *)(local_b8 + 0x178);
        }
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78 = local_58;
        uVar3 = local_78;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar15 = local_78._4_4_;
        local_90 = plVar13;
        if ((local_78._4_4_ != iVar18) || (local_78 = uVar3, uStack_60 != lVar6)) {
          do {
            local_78 = uVar3;
            *(undefined4 *)
             (lVar7 + (longlong)*(int *)(*local_90 + 0x14 + (longlong)iVar15 * 0x18) * 4) =
                 0xffffffff;
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar15 = local_78._4_4_;
            uVar3 = local_78;
          } while (local_90 != plVar13 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar6 || local_78._4_4_ != iVar18));
        }
      }
      else if (iVar18 == 1) {
        lVar6 = 0;
        do {
          *(undefined4 *)(lVar7 + lVar6 * 4) = 0xffffffff;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(local_b8 + 0x198));
      }
      FUN_140fb9046(plVar13,0);
    }
    else {
      FUN_140fb9046(plVar13,0);
      *(undefined4 *)(lVar7 + 0x198) = 1;
      FUN_14665e1ee(plVar13);
    }
    lVar7 = local_b8;
    plVar13 = (longlong *)(local_b8 + 0x100);
    iVar18 = *(int *)(local_b8 + 0x148);
    if (iVar18 < 2) {
      lVar7 = local_b8 + 0x138;
      if (*(longlong *)(local_b8 + 0x140) != 0) {
        lVar7 = *(longlong *)(local_b8 + 0x140);
      }
      iVar15 = iVar18 + 3;
      if (-1 < iVar18) {
        iVar15 = iVar18;
      }
      if (*(int *)(local_b8 + 0x108) - *(int *)(local_b8 + 0x134) < iVar15 >> 2) {
        lVar6 = local_b8 + 0x110;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar6;
        if (*(int *)(local_b8 + 0x128) == 0) {
          iVar18 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar18 = *(int *)(local_b8 + 0x128);
        }
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78 = local_58;
        uVar3 = local_78;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar15 = local_78._4_4_;
        local_90 = plVar13;
        if ((local_78._4_4_ != iVar18) || (local_78 = uVar3, uStack_60 != lVar6)) {
          do {
            local_78 = uVar3;
            *(undefined4 *)
             (lVar7 + (longlong)*(int *)(*local_90 + 0x10 + (longlong)iVar15 * 0x14) * 4) =
                 0xffffffff;
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar15 = local_78._4_4_;
            uVar3 = local_78;
          } while (local_90 != plVar13 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar6 || local_78._4_4_ != iVar18));
        }
      }
      else if (iVar18 == 1) {
        lVar6 = 0;
        do {
          *(undefined4 *)(lVar7 + lVar6 * 4) = 0xffffffff;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(local_b8 + 0x148));
      }
      FUN_140fb90c0(plVar13,0);
    }
    else {
      FUN_140fb90c0(plVar13,0);
      *(undefined4 *)(lVar7 + 0x148) = 1;
      FUN_14665e030(plVar13);
    }
    if (*(int *)(local_b8 + 0xa8) != *(int *)(local_b8 + 0xd4)) {
      uVar2 = (uint)((ulonglong)lVar9 >> 0x10);
      uVar14 = (uint)lVar9 & 0xffff;
      lVar7 = local_b8 + 0xd8;
      if (*(longlong *)(local_b8 + 0xe0) != 0) {
        lVar7 = *(longlong *)(local_b8 + 0xe0);
      }
      iVar18 = *(int *)(lVar7 + (ulonglong)
                                (*(int *)(local_b8 + 0xe8) - 1U &
                                (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar14) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar14 >> 4)) * 4);
      if (iVar18 != -1) {
        lVar7 = *(longlong *)(local_b8 + 0xa0);
        iVar15 = iVar18;
        do {
          if (*(longlong *)(lVar7 + (longlong)iVar15 * 0x60) == lVar9) goto LAB_140fb8a30;
          iVar15 = *(int *)((longlong)iVar15 * 0x60 + lVar7 + 0x58);
        } while (iVar15 != -1);
      }
    }
  }
  goto LAB_140fb8bfa;
  while (iVar18 = *(int *)(lVar6 + 0x58), iVar18 != -1) {
LAB_140fb8a30:
    lVar6 = lVar7 + (longlong)iVar18 * 0x60;
    if (*(longlong *)(lVar7 + (longlong)iVar18 * 0x60) == lVar9) goto LAB_140fb8a49;
  }
  lVar6 = 0;
LAB_140fb8a49:
  puVar12 = (uint *)(lVar6 + 0x18);
  uVar2 = *(uint *)(lVar6 + 0x30);
  lVar7 = local_b8;
  local_98 = lVar9;
  if (uVar2 == 0) {
    uVar11 = 1;
    uVar16 = 0;
    uVar14 = 0;
    iVar18 = 0;
  }
  else {
    puVar8 = *(uint **)(lVar6 + 0x28);
    if (*(uint **)(lVar6 + 0x28) == (uint *)0x0) {
      puVar8 = puVar12;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar18 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar18 = uVar2 - 1;
      }
      uVar16 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar16;
      }
      iVar18 = 0;
      do {
        if (uVar11 == uVar16) goto LAB_140fb8bee;
        iVar18 = iVar18 + 0x20;
        uVar14 = puVar8[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar18 = 0;
    }
    uVar11 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar14 = (iVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar14) {
      uVar14 = uVar2;
    }
  }
  if (uVar14 != uVar2) {
    uVar17 = 0xffffffff;
    plVar13 = local_b0;
    local_a8 = puVar12;
    local_a0 = (ulonglong)uVar2;
    do {
      lVar9 = *(longlong *)(lVar6 + 8);
      iVar15 = *(int *)(lVar7 + 0xf8);
      *(uint *)(lVar7 + 0xf8) = iVar15 + 1U;
      if (*(uint *)(lVar7 + 0xfc) < iVar15 + 1U) {
        FUN_140fb8ee4(plVar13,iVar15);
        puVar12 = local_a8;
        lVar7 = local_b8;
        plVar13 = local_b0;
      }
      *(longlong *)(*plVar13 + (longlong)iVar15 * 8) = (longlong)(int)uVar14 * 0x90 + lVar9 + 8;
      uVar17 = uVar17 & ~(uint)uVar11;
      puVar8 = *(uint **)(lVar6 + 0x28);
      if (*(uint **)(lVar6 + 0x28) == (uint *)0x0) {
        puVar8 = puVar12;
      }
      uVar2 = *(uint *)(lVar6 + 0x30);
      iVar15 = (int)uVar16;
      lVar9 = (longlong)iVar15;
      uVar14 = puVar8[lVar9] & uVar17;
      if (uVar14 == 0) {
        iVar4 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar4 = uVar2 - 1;
        }
        iVar4 = iVar4 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar15) {
          iVar5 = iVar15;
        }
        puVar12 = local_a8;
        if (iVar15 < iVar4) {
          lVar10 = 0;
          do {
            uVar14 = puVar8[lVar9 + lVar10 + 1];
            if (uVar14 != 0) {
              uVar16 = (ulonglong)(iVar15 + (int)lVar10 + 1);
              uVar17 = 0xffffffff;
              goto LAB_140fb8b99;
            }
            iVar18 = iVar18 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar5 - lVar9 != lVar10);
          uVar17 = 0xffffffff;
          iVar15 = iVar5;
        }
        uVar16 = (ulonglong)(iVar15 + 1);
        lVar7 = local_b8;
        plVar13 = local_b0;
        uVar14 = uVar2;
      }
      else {
LAB_140fb8b99:
        uVar11 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar11 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar14 = (iVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar14) {
          uVar14 = uVar2;
        }
      }
    } while (uVar14 != (uint)local_a0);
  }
LAB_140fb8bee:
  *(longlong *)(lVar7 + 0x218) = local_98;
LAB_140fb8bfa:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fb8eb4 FUN_140fb8eb4 body=48 status=ok
// SIG undefined FUN_140fb8eb4(void)

void FUN_140fb8eb4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 140fb8ee4 FUN_140fb8ee4 body=353 status=ok
// SIG undefined FUN_140fb8ee4(void)

void FUN_140fb8ee4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fb8f6b;
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
LAB_140fb8f6b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140fb9046 FUN_140fb9046 body=121 status=ok
// SIG undefined FUN_140fb9046(void)

void FUN_140fb9046(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 140fb90c0 FUN_140fb90c0 body=121 status=ok
// SIG undefined FUN_140fb90c0(void)

void FUN_140fb90c0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 140fb913a FUN_140fb913a body=1169 status=ok
// SIG undefined FUN_140fb913a(void)

void FUN_140fb913a(longlong *param_1,longlong *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  double *pdVar13;
  longlong lVar14;
  undefined4 *puVar15;
  bool bVar16;
  double dVar17;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar3 == 0) goto LAB_140fb948f;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
LAB_140fb91ba:
    lVar4 = param_3;
    if (param_3 == 0) goto LAB_140fb948f;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1478c0a72;
      local_70 = &LAB_1417b2375;
      local_78 = L"Engine";
      local_80 = 0x1000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_140fb91ba;
  }
  puVar15 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
    puVar15 = *(undefined4 **)(lVar3 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar5 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar5);
    DAT_14c947fe0 = lVar5;
  }
  FUN_140045924(DAT_14c947fe0,&local_40,puVar15,1);
  if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
    lVar3 = *(longlong *)(lVar3 + 0x98);
    uVar12 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    plVar6 = param_1 + 0x1b;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x1c];
    }
    iVar8 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x1d] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                    (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      lVar5 = param_1[0x14];
      iVar10 = iVar8;
      do {
        iVar11 = iVar8;
        if (*(longlong *)(lVar5 + (longlong)iVar10 * 0x60) == lVar3) goto LAB_140fb929c;
        iVar10 = *(int *)((longlong)iVar10 * 0x60 + lVar5 + 0x58);
      } while (iVar10 != -1);
    }
  }
  goto LAB_140fb948f;
  while (iVar11 = *(int *)(lVar9 + 0x58), *(int *)(lVar9 + 0x58) != -1) {
LAB_140fb929c:
    lVar9 = lVar5 + (longlong)iVar11 * 0x60;
    if (*(longlong *)(lVar5 + (longlong)iVar11 * 0x60) == lVar3) goto LAB_140fb92be;
  }
  lVar9 = 0;
LAB_140fb92be:
  if (*(int *)(lVar9 + 0x10) != *(int *)(lVar9 + 0x3c)) {
    uVar12 = (uint)((ulonglong)local_40 >> 0x10);
    uVar7 = (uint)local_40 & 0xffff;
    uVar12 = (int)((ulonglong)local_40 >> 0x20) + ((uint)local_40 << 0x10 | uVar7) +
             (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar7 >> 4);
    lVar14 = lVar9 + 0x40;
    if (*(longlong *)(lVar9 + 0x48) != 0) {
      lVar14 = *(longlong *)(lVar9 + 0x48);
    }
    iVar10 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar9 + 0x50) - 1U & uVar12) * 4);
    if (iVar10 != -1) {
      do {
        if (*(code **)(*(longlong *)(lVar9 + 8) + (longlong)iVar10 * 0x90) == local_40) {
          lVar9 = *(longlong *)(lVar4 + 0x1c8);
          if (lVar9 == 0) {
            pdVar13 = (double *)&DAT_14c8464e0;
            dVar17 = DAT_14c8464f0;
          }
          else {
            pdVar13 = (double *)(lVar9 + 0x260);
            dVar17 = *(double *)(lVar9 + 0x270);
          }
          dVar1 = *pdVar13;
          dVar2 = pdVar13[1];
          goto LAB_140fb9384;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x90 + *(longlong *)(lVar9 + 8) + 0x88);
      } while (iVar10 != -1);
    }
  }
  goto LAB_140fb948f;
  while (iVar8 = *(int *)(lVar9 + 0x58), iVar8 != -1) {
LAB_140fb9384:
    lVar9 = lVar5 + (longlong)iVar8 * 0x60;
    if (*(longlong *)(lVar5 + (longlong)iVar8 * 0x60) == lVar3) goto LAB_140fb93a3;
  }
  lVar9 = 0;
LAB_140fb93a3:
  if (*(int *)(lVar9 + 0x10) != *(int *)(lVar9 + 0x3c)) {
    lVar3 = lVar9 + 0x40;
    if (*(longlong *)(lVar9 + 0x48) != 0) {
      lVar3 = *(longlong *)(lVar9 + 0x48);
    }
    iVar8 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar9 + 0x50) - 1U & uVar12) * 4);
    if (iVar8 != -1) {
      do {
        lVar3 = *(longlong *)(lVar9 + 8) + (longlong)iVar8 * 0x90;
        if (*(code **)(*(longlong *)(lVar9 + 8) + (longlong)iVar8 * 0x90) == local_40)
        goto LAB_140fb93f0;
        iVar8 = *(int *)(lVar3 + 0x88);
      } while (iVar8 != -1);
    }
  }
  lVar3 = 0;
LAB_140fb93f0:
  if ((((dVar1 != *(double *)(lVar3 + 0x50)) || (NAN(dVar1) || NAN(*(double *)(lVar3 + 0x50)))) ||
      (dVar2 != *(double *)(lVar3 + 0x58))) || (NAN(dVar2) || NAN(*(double *)(lVar3 + 0x58)))) {
LAB_140fb9413:
    *(double *)(lVar3 + 0x50) = dVar1;
    *(double *)(lVar3 + 0x58) = dVar2;
    *(double *)(lVar3 + 0x60) = dVar17;
  }
  else if ((dVar17 != *(double *)(lVar3 + 0x60)) || (NAN(dVar17) || NAN(*(double *)(lVar3 + 0x60))))
  goto LAB_140fb9413;
  lVar5 = FUN_140aed286();
  if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
      lVar5 + 0x30)) {
    uVar12 = *(uint *)(lVar4 + 0xc);
    *(uint *)(lVar3 + 0x10) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar8 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar4 + 0x10);
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(lVar4 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar8 = iVar10;
      }
    }
    *(int *)(lVar3 + 0x14) = iVar8;
  }
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar3 != 0) {
    FUN_140fb8846(param_1,lVar3);
  }
LAB_140fb948f:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fb95cc FUN_140fb95cc body=42 status=ok
// SIG undefined FUN_140fb95cc(void)

undefined8 FUN_140fb95cc(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140fb95f6();
  if ((lVar1 == 0) || ((DAT_14c872bf2 == '\x01' && (*(char *)(lVar1 + 0x31) != '\x01')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140fb95f6 FUN_140fb95f6 body=395 status=ok
// SIG undefined FUN_140fb95f6(void)

longlong FUN_140fb95f6(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*param_1 + 0x2d8))();
  if (lVar3 != 0) {
    lVar4 = FUN_1407c8d60(lVar3);
    if (((lVar4 != 0) && (*(char *)(lVar4 + 0x34) == '\x01')) && (*(char *)(lVar4 + 0x35) == '\0'))
    {
      uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      plVar6 = *(longlong **)(lVar3 + 0x38);
      if (plVar6 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar5);
        if (cVar2 == '\0') goto LAB_140fb967d;
      }
      cVar2 = FUN_140db3cd0(lVar3,uVar5);
      if (cVar2 != '\0') goto LAB_140fb9758;
    }
LAB_140fb967d:
    if (param_1[0x19] != 0) {
      lVar3 = FUN_14050b0aa();
      if (0 < *(int *)(lVar3 + 8)) {
        plVar6 = (longlong *)FUN_14050b0aa(param_1[0x19]);
        lVar4 = plVar6[1];
        if ((longlong)(int)lVar4 != 0) {
          lVar1 = *plVar6;
          lVar8 = 0;
          do {
            lVar7 = *(longlong *)(lVar1 + lVar8);
            if (lVar7 != 0) {
              lVar3 = *(longlong *)(lVar7 + 0x240);
              if (lVar3 == 0) {
                local_48 = *(undefined8 *)(lVar7 + 0x230);
                lVar3 = FUN_14050aea0(&local_48);
                *(longlong *)(lVar7 + 0x240) = lVar3;
                if (lVar3 == 0) goto LAB_140fb9749;
              }
              lVar7 = FUN_1407c8d60(lVar3);
              if (((lVar7 != 0) && (*(char *)(lVar7 + 0x34) == '\x01')) &&
                 (*(char *)(lVar7 + 0x35) == '\0')) {
                uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
                plVar6 = *(longlong **)(lVar3 + 0x38);
                if (plVar6 != (longlong *)0x0) {
                  cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar5);
                  if (cVar2 == '\0') goto LAB_140fb9749;
                }
                cVar2 = FUN_140db3cd0(lVar3,uVar5);
                if (cVar2 != '\0') goto LAB_140fb9758;
              }
            }
LAB_140fb9749:
            lVar8 = lVar8 + 8;
          } while ((longlong)(int)lVar4 * 8 != lVar8);
        }
      }
    }
  }
  lVar3 = 0;
LAB_140fb9758:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb9788 FUN_140fb9788 body=186 status=ok
// SIG undefined FUN_140fb9788(void)

undefined8 * FUN_140fb9788(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e050) {
    FUN_144b3d300(&DAT_14c98e050);
    if (DAT_14c98e050 == -1) {
      FUN_1446ddc76(&local_18,"SVerticalBox",1);
      FUN_145c282e2(&DAT_14c98e018,local_18,&DAT_145c2837e);
      atexit(FUN_142879d7c);
      _Init_thread_footer(&DAT_14c98e050);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c98e018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fb984a FUN_140fb984a body=57 status=ok
// SIG undefined FUN_140fb984a(void)

void FUN_140fb984a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56598 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56598 = FUN_140002ddd(FUN_1464b7d3a,uVar1,L"DamageFilterDef");
  }
  return;
}



// FUNCTION 140fb9884 FUN_140fb9884 body=93 status=ok
// SIG undefined FUN_140fb9884(void)

undefined8 * FUN_140fb9884(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (((*(longlong *)(param_1 + 0x20) == 0) ||
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x32b8), lVar1 == 0)) || (param_3 == 0)
     ) {
    param_2[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar2;
  }
  else {
    uVar3 = FUN_144909502(lVar1,param_3);
    FUN_140fb98e2(lVar1,param_2,uVar3);
  }
  return param_2;
}



// FUNCTION 140fb98e2 FUN_140fb98e2 body=341 status=ok
// SIG undefined FUN_140fb98e2(void)

undefined8 * FUN_140fb98e2(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x658);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar3 != 0) != 0) goto LAB_140fb99c4;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140fb99c4:
    FUN_1456cec3c(lVar3);
  }
  if (((int)param_3 < 0) || (lVar3 == 0)) goto LAB_140fb9a1d;
  plVar4 = *(longlong **)(param_1 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) != 0) goto LAB_140fb99ea;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140fb99ea:
    FUN_1456cec3c(plVar4);
  }
  lVar3 = (**(code **)(*plVar4 + 0x310))(plVar4);
  if (*(int *)(lVar3 + 0x28) <= (int)param_3) {
LAB_140fb9a1d:
    param_2[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar2;
    return param_2;
  }
  plVar4 = *(longlong **)(param_1 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) == 0) goto LAB_140fb9971;
  }
  else if (DAT_14c950c29 != 1) goto LAB_140fb9971;
  FUN_1456cec3c(plVar4);
LAB_140fb9971:
  lVar3 = (**(code **)(*plVar4 + 0x310))(plVar4);
  lVar3 = *(longlong *)(lVar3 + 0x30);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + (ulonglong)param_3 * 0x60);
  uVar2 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = *(undefined8 *)(lVar3 + 0x30 + (ulonglong)param_3 * 0x60);
  return param_2;
}



// FUNCTION 140fb9a38 FUN_140fb9a38 body=40 status=ok
// SIG undefined FUN_140fb9a38(void)

undefined8 FUN_140fb9a38(undefined8 param_1,int param_2)

{
  FUN_140fb9a60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fb9a60 FUN_140fb9a60 body=413 status=ok
// SIG undefined FUN_140fb9a60(void)

void FUN_140fb9a60(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0db960;
  plVar1 = param_1 + 0x7f;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x83) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x82)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x82)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140fb9bfe(param_1 + 0x33);
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 140fb9bfe FUN_140fb9bfe body=970 status=ok
// SIG undefined FUN_140fb9bfe(void)

void FUN_140fb9bfe(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 0x208);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x228) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x220)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x220)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x1d0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1e8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1e8)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 400);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1b0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1a8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1a8)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x158);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x178) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x170)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x170)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x120);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x140) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x138)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x138)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0xe8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x108) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x100)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x100)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0xb0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xd0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 200)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 200)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x78);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x98) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x90)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x90)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x60) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x58)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x58)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 0x20) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 140fb9fc8 FUN_140fb9fc8 body=38 status=ok
// SIG undefined FUN_140fb9fc8(void)

undefined8 FUN_140fb9fc8(undefined8 param_1,int param_2)

{
  FUN_140fb9fee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fb9fee FUN_140fb9fee body=112 status=ok
// SIG undefined FUN_140fb9fee(void)

void FUN_140fb9fee(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a544a68;
  if (param_1[5] != 0) {
    piVar1 = (int *)(param_1[5] + 0x30);
    *piVar1 = *piVar1 + -1;
    param_1[5] = 0;
  }
  puVar2 = (undefined8 *)param_1[3];
  if (param_1[2] != 0) {
    *(undefined8 **)(param_1[2] + 8) = puVar2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_1[2];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[1])();
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 140fba05e FUN_140fba05e body=688 status=ok
// SIG undefined FUN_140fba05e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fba05e(undefined4 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  code **ppcVar3;
  longlong lVar4;
  undefined1 auStack_8e8 [40];
  uint local_8c0;
  code **local_8b8;
  code **local_8b0;
  undefined1 **local_8a8;
  int local_89c;
  undefined1 *local_898;
  code ***local_890;
  code *local_888;
  code ***local_880;
  code *local_878;
  undefined4 local_870;
  code **local_478;
  undefined8 local_470;
  undefined1 local_468;
  code *local_460 [128];
  code **local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8e8;
  local_60 = (code **)0x0;
  local_58 = 0x2000000000;
  local_50 = 0;
  local_89c = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c949e68);
  FUN_140619b9c(&DAT_14c949e18,&local_898);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c949e68);
  FUN_140fba51e(local_460,param_1,(ulonglong)local_890 & 0xffffffff,0);
  local_878 = (code *)0x0;
  local_870 = 0;
  local_888 = FUN_14171689a;
  local_8c0 = (uint)((int)local_58 == 1);
  local_8b8 = &local_878;
  local_8b0 = local_460;
  local_8a8 = &local_898;
  local_880 = &local_8b0;
  FUN_1411ca36e(L"GC.MarkRootObjectsAsReachable");
  if (local_898 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_478 = (code **)0x0;
  local_470 = 0x2000000000;
  local_468 = 0;
  if (param_2 != 0) {
    FUN_140fba51e(&local_878,param_1,DAT_14c9647dc,DAT_14c9647b8);
    local_8a8 = (undefined1 **)&local_89c;
    local_888 = (code *)0x0;
    local_880 = (code ***)((ulonglong)local_880 & 0xffffffff00000000);
    local_898 = &LAB_1468b1ffe;
    local_8c0 = (uint)((int)local_470 == 1);
    local_8b8 = &local_888;
    local_8b0 = &local_878;
    local_890 = &local_8b0;
    FUN_1411ca36e(L"GC.SlowMarkObjectAsReachable");
  }
  ppcVar3 = local_460;
  if (local_60 != (code **)0x0) {
    ppcVar3 = local_60;
  }
  iVar2 = 0;
  iVar1 = 0;
  if ((longlong)(int)local_58 != 0) {
    lVar4 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)((longlong)ppcVar3 + lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
    } while ((longlong)(int)local_58 * 0x20 != lVar4);
  }
  ppcVar3 = &local_878;
  if (local_478 != (code **)0x0) {
    ppcVar3 = local_478;
  }
  if ((longlong)(int)local_470 != 0) {
    lVar4 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)((longlong)ppcVar3 + lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
    } while ((longlong)(int)local_470 * 0x20 != lVar4);
  }
  iVar2 = *(int *)(param_3 + 8) + iVar1 + iVar2 + 0x10;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_3 + 0xc) < iVar2) {
    FUN_14079e7a6(param_3);
  }
  FUN_140fba34e(local_460,param_3);
  FUN_140fba34e(&local_878,param_3);
  _DAT_14c9502f4 = *(undefined4 *)(param_3 + 8);
  FUN_140fba310(&local_878);
  FUN_140fba310(local_460);
  if ((local_48 ^ (ulonglong)auStack_8e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fba310 FUN_140fba310 body=61 status=ok
// SIG undefined FUN_140fba310(void)

void FUN_140fba310(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar1 = param_1;
  }
  FUN_140fba4ef(lVar1,*(undefined4 *)(param_1 + 0x408));
  if (*(longlong *)(param_1 + 0x400) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fba34e FUN_140fba34e body=417 status=ok
// SIG undefined FUN_140fba34e(void)

void FUN_140fba34e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar5 == 1) {
    lVar4 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar4 = param_1;
    }
    if ((int)param_2[1] == 0) {
      if ((longlong *)(lVar4 + 0x10) != param_2) {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = *(longlong *)(lVar4 + 0x10);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar4 + 0x18);
        *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar4 + 0x1c);
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      goto LAB_140fba41c;
    }
    lVar2 = lVar4 + 0x20;
LAB_140fba392:
    iVar5 = 0;
    do {
      iVar5 = iVar5 + *(int *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar2);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar4 = param_1;
    }
    if (iVar5 != 0) {
      lVar2 = (longlong)iVar5 * 0x20 + lVar4;
      goto LAB_140fba392;
    }
    iVar5 = 0;
  }
  iVar3 = (int)param_2[1] + iVar5;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    FUN_14079e7a6(param_2);
  }
  if (0 < iVar5) {
    lVar4 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar4 = param_1;
    }
    iVar5 = *(int *)(param_1 + 0x408);
    if ((longlong)iVar5 != 0) {
      lVar2 = 0;
      do {
        uVar1 = *(uint *)(lVar4 + 0x18 + lVar2);
        if ((longlong)(int)uVar1 != 0) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + uVar1;
          if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar1) {
            FUN_1447f76d2(param_2,iVar3);
          }
          memcpy((void *)((longlong)iVar3 * 8 + *param_2),*(void **)(lVar4 + 0x10 + lVar2),
                 (longlong)(int)uVar1 << 3);
        }
        lVar2 = lVar2 + 0x20;
      } while ((longlong)iVar5 * 0x20 != lVar2);
    }
  }
LAB_140fba41c:
  if (*(int *)(param_1 + 0x40c) < 0) {
    FUN_1468b2006(param_1);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar4 = param_1;
    }
    FUN_140fba4ef(lVar4,*(undefined4 *)(param_1 + 0x408));
    *(undefined4 *)(param_1 + 0x408) = 0;
  }
  *(undefined1 *)(param_1 + 0x410) = 0;
  return;
}



// FUNCTION 140fba4ef FUN_140fba4ef body=47 status=ok
// SIG undefined FUN_140fba4ef(void)

void FUN_140fba4ef(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fba51e FUN_140fba51e body=295 status=ok
// SIG undefined FUN_140fba51e(void)

void FUN_140fba51e(longlong param_1,ulonglong param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar8 = param_3 - param_4;
  uVar7 = 1;
  if (((param_2 & 1) != 0) && (0 < iVar8)) {
    uVar1 = (**(code **)(*DAT_14c82b500 + 0x20))();
    uVar6 = 1;
    if (1 < (int)uVar1) {
      uVar6 = uVar1;
    }
    uVar1 = (iVar8 + 99U) / 100;
    uVar7 = (ulonglong)uVar6;
    if (uVar1 < uVar6) {
      uVar7 = (ulonglong)uVar1;
    }
  }
  uVar6 = (uint)uVar7;
  iVar2 = iVar8 / (int)uVar6 + 1;
  iVar8 = *(int *)(param_1 + 0x408);
  *(uint *)(param_1 + 0x408) = iVar8 + uVar6;
  if ((uint)(*(int *)(param_1 + 0x40c) - iVar8) < uVar6) {
    FUN_1468b1ef8(param_1,iVar8);
  }
  lVar3 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar3 = param_1;
  }
  FUN_140fba645((longlong)iVar8 * 0x20 + lVar3,uVar7);
  lVar3 = 0xc;
  uVar4 = 0;
  do {
    lVar5 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar5 = param_1;
    }
    *(int *)(lVar5 + -0xc + lVar3) = param_4;
    *(int *)(lVar5 + -8 + lVar3) = param_4;
    iVar8 = param_3 - iVar2 * (uVar6 - 1);
    if (uVar4 < uVar6 - 1) {
      iVar8 = iVar2;
    }
    *(int *)(lVar5 + -4 + lVar3) = iVar8;
    iVar8 = iVar8 + param_4 + -1;
    if (param_3 + -1 < iVar8) {
      iVar8 = param_3 + -1;
    }
    *(int *)(lVar5 + lVar3) = iVar8;
    uVar4 = uVar4 + 1;
    param_4 = param_4 + iVar2;
    lVar3 = lVar3 + 0x20;
  } while (uVar7 != uVar4);
  return;
}



// FUNCTION 140fba645 FUN_140fba645 body=14 status=ok
// SIG undefined FUN_140fba645(void)

void FUN_140fba645(void *param_1,uint param_2)

{
  memset(param_1,0,(ulonglong)param_2 << 5);
  return;
}



// FUNCTION 140fba654 FUN_140fba654 body=83 status=ok
// SIG undefined FUN_140fba654(void)

void FUN_140fba654(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_140fb1dbc();
  cVar1 = FUN_1409df8ac(param_1,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_14052c20c(param_2);
    *(undefined1 *)(param_1 + 0xb) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000140fba69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 140fba6a8 FUN_140fba6a8 body=78 status=ok
// SIG undefined FUN_140fba6a8(void)

void FUN_140fba6a8(longlong param_1,uint param_2)

{
  FUN_140fb1cfc(*(undefined8 *)(param_1 + 0x50),param_1 + 0x58,*(undefined4 *)(param_1 + 0x18),
                param_2);
  if ((param_2 >> 0x11 & 1) == 0) {
    *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(param_1 + 0x18) | param_2 & 0xff00ffff;
    FUN_14078f2d2(param_1 + 0x20,param_1);
    return;
  }
  return;
}



// FUNCTION 140fba6f6 FUN_140fba6f6 body=40 status=ok
// SIG undefined FUN_140fba6f6(void)

undefined8 FUN_140fba6f6(undefined8 param_1,int param_2)

{
  FUN_140fba71e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fba71e FUN_140fba71e body=93 status=ok
// SIG undefined FUN_140fba71e(void)

void FUN_140fba71e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4b4e20;
  param_1[0x1f] = &PTR_FUN_14a4b5190;
  FUN_1404dbc70(param_1 + 0x86);
  FUN_1404dbc70(param_1 + 100);
  FUN_1404dbc70(param_1 + 0x42);
  FUN_1404dbc70(param_1 + 0x20);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 140fba784 FUN_140fba784 body=241 status=ok
// SIG undefined FUN_140fba784(void)

void FUN_140fba784(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b677820;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
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
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return;
}



// FUNCTION 140fba876 FUN_140fba876 body=141 status=ok
// SIG undefined FUN_140fba876(void)

void FUN_140fba876(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_140fba904((longlong *)(param_3 + 8),iVar1);
  }
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_3 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar2 + 8 + lVar4);
  *(undefined4 *)(lVar3 + 0xc + lVar5) = *(undefined4 *)(lVar2 + 0xc + lVar4);
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  FUN_140056534(param_1 + 8,(longlong)param_2,1);
  return;
}



// FUNCTION 140fba904 FUN_140fba904 body=269 status=ok
// SIG undefined FUN_140fba904(void)

void FUN_140fba904(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140fbaa12 FUN_140fbaa12 body=87 status=ok
// SIG undefined FUN_140fbaa12(void)

undefined8 * FUN_140fbaa12(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a76bb10;
  param_1[5] = &PTR_LAB_14a76bf90;
  param_1[6] = &PTR_LAB_14a76bfd0;
  FUN_140fbaa6a(param_1 + 0x22);
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fbaa6a FUN_140fbaa6a body=207 status=ok
// SIG undefined FUN_140fbaa6a(void)

void FUN_140fbaa6a(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x88) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140fbaa8f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140fbaa8f:
  FUN_140fbab39(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140fbab91(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_140fbab65(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fbab39 FUN_140fbab39 body=44 status=ok
// SIG undefined FUN_140fbab39(void)

void FUN_140fbab39(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fbab65 FUN_140fbab65 body=44 status=ok
// SIG undefined FUN_140fbab65(void)

void FUN_140fbab65(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fbab91 FUN_140fbab91 body=100 status=ok
// SIG undefined FUN_140fbab91(void)

void FUN_140fbab91(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if ((int)plVar2[1] == 0) {
LAB_140fbabb1:
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,0);
          FUN_1446efa72(plVar2,0,0,0x10);
          *(undefined4 *)(plVar2 + 1) = 0;
          goto LAB_140fbabb1;
        }
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fbabf6 FUN_140fbabf6 body=283 status=ok
// SIG undefined FUN_140fbabf6(void)

undefined8 FUN_140fbabf6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140fbad0b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140fbad0b;
    }
    FUN_1400841de(param_1 + 0x28,&local_28);
    lVar7 = local_28;
  }
  else {
LAB_140fbad0b:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140fbacc2;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x2c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_28 = *plVar5;
      FUN_140fbad12(param_1 + 8,param_1 + 0x30);
      uVar6 = 1;
      goto LAB_140fbacc2;
    }
  }
  uVar6 = 0;
LAB_140fbacc2:
  if (lVar7 != 0) {
    FUN_140113f3a(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbad12 FUN_140fbad12 body=118 status=ok
// SIG undefined FUN_140fbad12(void)

void FUN_140fbad12(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar2 = (code *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = *param_3;
  local_40 = *param_1;
  uVar4 = FUN_14477b664(param_1[1]);
  local_38 = FUN_14477b664(uVar4);
  local_30 = param_1[2];
  (*pcVar2)(iVar1 + lVar3,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbad8a FUN_140fbad8a body=1042 status=ok
// SIG undefined FUN_140fbad8a(void)

void FUN_140fbad8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined **ppuVar16;
  ulonglong uVar17;
  
  lVar12 = param_2[1];
  if (lVar12 == 0) {
    uVar11 = FUN_140c04244();
    lVar12 = FUN_14477b664(uVar11);
    param_2[1] = lVar12;
  }
  if (param_2[2] == 0) {
    if (lVar12 == 0) {
      return;
    }
    if (*param_2 == 0) {
      return;
    }
    plVar5 = *(longlong **)(lVar12 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar8 == '\0')) goto LAB_140fbb192;
    uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
    lVar12 = FUN_144aff482(uVar11,param_2);
    param_2[2] = lVar12;
    if (lVar12 == 0) {
      return;
    }
    lVar12 = param_2[1];
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar12 == 0) {
    uVar11 = FUN_140c04244();
    lVar12 = FUN_14477b664(uVar11);
    param_2[1] = lVar12;
    if (param_2[2] == 0) {
      if (lVar12 == 0) {
        return;
      }
      if (*param_2 == 0) {
        return;
      }
      plVar5 = *(longlong **)(lVar12 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar8 == '\0')) {
LAB_140fbb192:
        param_2[2] = 0;
        return;
      }
      uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
      lVar12 = FUN_144aff482(uVar11,param_2);
      param_2[2] = lVar12;
      if (lVar12 == 0) {
        return;
      }
    }
  }
  iVar2 = *(int *)(lVar3 + 0x78);
  if ((longlong)iVar2 != 0) {
    lVar12 = *(longlong *)(lVar3 + 0x70);
    uVar17 = 0;
    do {
      if (*(longlong *)(lVar12 + 8 + uVar17) == 0) {
        uVar11 = FUN_140c04244();
        uVar11 = FUN_14477b664(uVar11);
        *(undefined8 *)(lVar12 + 8 + uVar17) = uVar11;
      }
      lVar13 = param_2[1];
      if (lVar13 == 0) {
        lVar13 = FUN_140c04244();
      }
      lVar4 = *param_2;
      lVar13 = FUN_14477b664(lVar13);
      iVar9 = 0;
      if ((lVar13 != 0) && (plVar5 = *(longlong **)(lVar13 + 0xb8), plVar5 != (longlong *)0x0)) {
        lVar14 = *plVar5;
        pcVar6 = *(code **)(lVar14 + 0x108);
        if (pcVar6 != (code *)&LAB_14478342e && pcVar6 != (code *)&LAB_144783422) {
          cVar8 = (*pcVar6)(plVar5);
          iVar9 = 0;
          if (cVar8 == '\0') goto LAB_140fbaeb3;
          lVar14 = *plVar5;
        }
        pcVar6 = *(code **)(lVar14 + 0x110);
        ppuVar16 = &PTR_PTR_14c763408;
        if ((pcVar6 != (code *)&LAB_144783426) &&
           (ppuVar16 = &PTR_PTR_14c75f798, pcVar6 != (code *)&LAB_144783432)) {
          ppuVar16 = (undefined **)(*pcVar6)(plVar5);
        }
        iVar9 = FUN_144aff48c(ppuVar16);
      }
LAB_140fbaeb3:
      lVar14 = *(longlong *)(lVar12 + uVar17);
      lVar7 = *(longlong *)(lVar12 + 8 + uVar17);
      iVar10 = 0;
      if ((lVar7 != 0) &&
         (plVar5 = *(longlong **)(lVar7 + 0xb8), iVar10 = 0, plVar5 != (longlong *)0x0)) {
        lVar15 = *plVar5;
        pcVar6 = *(code **)(lVar15 + 0x108);
        if (pcVar6 != (code *)&LAB_14478342e && pcVar6 != (code *)&LAB_144783422) {
          cVar8 = (*pcVar6)(plVar5);
          if (cVar8 == '\0') goto LAB_140fbaf1d;
          lVar15 = *plVar5;
        }
        pcVar6 = *(code **)(lVar15 + 0x110);
        ppuVar16 = &PTR_PTR_14c763408;
        if ((pcVar6 != (code *)&LAB_144783426) &&
           (ppuVar16 = &PTR_PTR_14c75f798, pcVar6 != (code *)&LAB_144783432)) {
          ppuVar16 = (undefined **)(*pcVar6)(plVar5);
        }
        iVar10 = FUN_144aff48c(ppuVar16);
      }
LAB_140fbaf1d:
      if ((iVar10 == iVar9) && (lVar14 == lVar4)) {
        if (lVar7 == lVar13) {
LAB_140fbb098:
          if ((int)(uVar17 >> 3) * -0x55555555 != -1) goto LAB_140fbb106;
          break;
        }
        if ((lVar13 != 0) && (lVar7 != 0)) {
          iVar9 = *(int *)(lVar13 + 0x38);
          iVar10 = *(int *)(lVar7 + 0x38);
          if (((iVar9 <= iVar10) &&
              (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar9 * 8) == lVar13 + 0x30))
             || ((iVar10 <= iVar9 &&
                 (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar10 * 8) == lVar7 + 0x30
                 )))) goto LAB_140fbb098;
        }
      }
      uVar17 = uVar17 + 0x18;
    } while ((longlong)iVar2 * 0x18 != uVar17);
  }
  iVar2 = *(int *)(lVar3 + 0x78);
  lVar12 = (longlong)iVar2;
  *(uint *)(lVar3 + 0x78) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x7c) < iVar2 + 1U) {
    FUN_146550e92((longlong *)(lVar3 + 0x70),iVar2);
  }
  lVar13 = *(longlong *)(lVar3 + 0x70);
  puVar1 = (undefined8 *)(lVar13 + lVar12 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar13 + 0x10 + lVar12 * 0x18) = 0;
  *(longlong *)(lVar13 + lVar12 * 0x18) = *param_2;
  uVar11 = FUN_14477b664(param_2[1]);
  uVar11 = FUN_14477b664(uVar11);
  *(undefined8 *)(lVar13 + 8 + lVar12 * 0x18) = uVar11;
  *(longlong *)(lVar13 + 0x10 + lVar12 * 0x18) = param_2[2];
LAB_140fbb106:
  FUN_1405a4d40(*(undefined8 *)(lVar3 + 0x58),param_2);
  return;
}



// FUNCTION 140fbb1b2 FUN_140fbb1b2 body=1130 status=ok
// SIG undefined FUN_140fbb1b2(void)

void FUN_140fbb1b2(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined7 uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[0x7ee] == 0) goto LAB_140fbb358;
  if (*(char *)((longlong)param_1 + 0x78fc) == '\0') {
    *(bool *)((longlong)param_1 + 0x78fc) = 0 < (int)param_1[0xf1e];
  }
  lVar6 = (**(code **)(*param_1 + 0x5e8))(param_1);
  if (lVar6 == 0) {
LAB_140fbb214:
    lVar6 = 0;
  }
  else {
    if (DAT_14cbae3d8 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464f5fc4;
      local_78 = &LAB_148c3dd26;
      local_80 = &LAB_1459673ba;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x1360;
      param_3 = &DAT_14cbae3d8;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) != DAT_14cbae3d8 + 0x30)) goto LAB_140fbb214;
  }
  if (0 < (int)param_1[0xf1e]) {
    lVar14 = 0x40;
    uVar12 = 0;
    lVar10 = 0;
    do {
      lVar2 = param_1[0xf1d];
      uVar4 = (uint)uVar12;
      if (*(char *)(lVar2 + -0x10 + lVar14) == -1) {
        if (lVar10 == 0) {
          cVar3 = (**(code **)(*(longlong *)param_1[0x7ee] + 0x80))();
          if (cVar3 != '\0') {
            lVar8 = FUN_14011c349();
            lVar7 = *(longlong *)(lVar8 + 0x28);
            if (lVar7 == 0) {
              uVar9 = FUN_145d8612a();
              lVar7 = FUN_14477b664(uVar9);
              *(longlong *)(lVar8 + 0x28) = lVar7;
            }
            lVar10 = *(longlong *)(lVar8 + 0x30);
            if (lVar10 != 0) goto LAB_140fbb46e;
            lVar10 = 0;
            if ((lVar7 == 0) || (*(longlong *)(lVar8 + 0x20) == 0)) goto LAB_140fbb261;
            plVar11 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar11 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar3 == '\0')) {
              *(undefined8 *)(lVar8 + 0x30) = 0;
            }
            else {
              uVar9 = (**(code **)(*plVar11 + 0x110))(plVar11);
              lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar8 + 0x20));
              *(longlong *)(lVar8 + 0x30) = lVar10;
              if (lVar10 != 0) goto LAB_140fbb46e;
            }
          }
          lVar10 = 0;
        }
        else {
LAB_140fbb46e:
          uVar5 = FUN_140fbb61e(lVar10,uVar12 & 0xffffffff);
          if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar10 + 0x20))) {
            *(char *)(lVar2 + -0x10 + lVar14) = (char)uVar5;
            *(undefined8 *)(lVar2 + -0x2c + lVar14) =
                 *(undefined8 *)(*(longlong *)(lVar10 + 0x18) + (ulonglong)uVar5 * 0x38);
          }
        }
      }
LAB_140fbb261:
      if ((*(uint *)(param_1 + 0xf1f) >> (uVar4 & 0x1f) & 1) != 0) {
        *(undefined1 *)(lVar2 + -0x24 + lVar14) = 1;
        *(uint *)(param_1 + 0xf1f) = *(uint *)(param_1 + 0xf1f) & ~(1 << ((byte)uVar12 & 0x1f));
      }
      if (lVar6 != 0) {
        if ((int)uVar4 < *(int *)(lVar6 + 0xd08)) {
          lVar7 = lVar6 + 0xcf0;
          if (*(longlong *)(lVar6 + 0xd00) != 0) {
            lVar7 = *(longlong *)(lVar6 + 0xd00);
          }
          bVar15 = (*(uint *)(lVar7 + (uVar12 >> 5 & 0x7ffffff) * 4) >> (uVar4 & 0x1f) & 1) == 0;
        }
        else {
          bVar15 = false;
        }
        cVar3 = *(char *)(lVar2 + -0x30 + lVar14);
        uVar13 = (undefined7)((ulonglong)param_3 >> 8);
        param_3 = (undefined8 *)CONCAT71(uVar13,cVar3);
        if ((bool)cVar3 == bVar15) {
          param_3 = (undefined8 *)(CONCAT71(uVar13,cVar3) ^ 1);
          FUN_1457dac38(lVar6,uVar12 & 0xffffffff,param_3);
          if (*(char *)(lVar2 + -0x30 + lVar14) == '\0') {
            param_3 = *(undefined8 **)(lVar2 + -0x2c + lVar14);
            FUN_141074256(param_1 + 0xc00,uVar12 & 0xffffffff,param_3);
          }
        }
      }
      iVar1 = *(int *)(lVar2 + -0x34 + lVar14);
      if (iVar1 != *(int *)(lVar2 + -0xc + lVar14)) {
        *(int *)(lVar2 + -0xc + lVar14) = iVar1;
        FUN_1401861f4(param_1 + 0xef8,uVar12 & 0xffffffff);
      }
      lVar7 = *(longlong *)(lVar2 + -0x20 + lVar14);
      if (lVar7 != *(longlong *)(lVar2 + -8 + lVar14)) {
        if ((lVar7 == 0) ||
           (plVar11 = *(longlong **)(lVar2 + -0x18 + lVar14), plVar11 == (longlong *)0x0)) {
          *(undefined8 *)(lVar2 + -8 + lVar14) = 0;
          *(undefined4 *)(lVar2 + lVar14) = 0xffffffff;
        }
        else {
          *(longlong *)(lVar2 + -8 + lVar14) = lVar7;
          *(undefined4 *)(lVar2 + lVar14) = *(undefined4 *)(lVar2 + -0x34 + lVar14);
          uVar4 = (**(code **)(*plVar11 + 0x20))();
          if (uVar12 != uVar4) {
            if (*(longlong *)(lVar2 + -0x2c + lVar14) == 0) {
              if (*(longlong *)(lVar2 + -0x20 + lVar14) == 0) {
                plVar11 = (longlong *)0x0;
              }
              else {
                plVar11 = *(longlong **)(lVar2 + -0x18 + lVar14);
              }
              lVar7 = (**(code **)(*plVar11 + 8))();
              lVar7 = *(longlong *)(lVar7 + 0x3f0);
              if (lVar7 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = *(longlong *)(lVar7 + 0x98);
                if (lVar8 == 0) {
                  lVar8 = *(longlong *)(lVar7 + 0x3c);
                }
              }
              *(longlong *)(lVar2 + -0x2c + lVar14) = lVar8;
            }
            if (*(longlong *)(lVar2 + -0x20 + lVar14) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(lVar2 + -0x18 + lVar14);
            }
            param_3 = (undefined8 *)(uVar12 & 0xffffffff);
            (**(code **)(*plVar11 + 0x10))(plVar11,param_1,param_3,0);
          }
        }
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x48;
    } while ((longlong)uVar12 < (longlong)(int)param_1[0xf1e]);
  }
LAB_140fbb358:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fbb61e FUN_140fbb61e body=69 status=ok
// SIG undefined FUN_140fbb61e(void)

ulonglong FUN_140fbb61e(longlong param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (0 < (longlong)*(int *)(param_1 + 0x20)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
    uVar3 = 0;
    iVar4 = 0;
    do {
      bVar1 = iVar4 <= param_2;
      iVar4 = iVar4 + *piVar2;
      if (bVar1 && param_2 < iVar4) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0xe;
    } while ((longlong)*(int *)(param_1 + 0x20) != uVar3);
  }
  return 0xffffffff;
}



// FUNCTION 140fbb664 FUN_140fbb664 body=631 status=ok
// SIG undefined FUN_140fbb664(void)

void FUN_140fbb664(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar2 = *(code **)(*plVar1 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar1 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar1);
          if (cVar4 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar5,&local_29);
            goto LAB_140fbb74b;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_29,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_29,lVar5,1);
      }
      else {
        (*pcVar2)(plVar1,&local_29,lVar5);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar6;
        puVar6 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
LAB_140fbb74b:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar5 = FUN_14047210e(param_1);
  if (lVar5 != 0) {
    FUN_140fbb8dc(param_1,lVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbb8dc FUN_140fbb8dc body=998 status=ok
// SIG undefined FUN_140fbb8dc(void)

void FUN_140fbb8dc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_90 [6];
  longlong local_78;
  int local_68;
  undefined4 uStack_64;
  longlong *local_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  }
  FUN_140471fae(param_1);
  uVar5 = FUN_1409715bc(param_1);
  cVar4 = FUN_14011bf50(uVar5);
  if (cVar4 == '\0') goto LAB_140fbba98;
  FUN_1403adc5e(&local_68,uVar5);
  lVar2 = *(longlong *)(CONCAT44(uStack_64,local_68) + 0xa0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 200));
  *(int *)(lVar2 + 0xc0) = *(int *)(lVar2 + 0xc0) + 1;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0xd44);
  cVar4 = FUN_140fbbd78(param_2);
  iVar9 = *(int *)(lVar2 + 0x8c);
  if (*(char *)(lVar2 + 0x88) == cVar4) {
    if (iVar9 == 0) {
      iVar9 = 0;
      goto LAB_140fbb998;
    }
  }
  else {
LAB_140fbb998:
    *(char *)(lVar2 + 0x88) = cVar4;
    *(int *)(lVar2 + 0x8c) = iVar9 + 1;
  }
  bVar11 = true;
  if (((*(longlong *)(param_2 + 0xd60) != DAT_14cb94e30) &&
      ((*(byte *)(param_2 + 0xb90) & 0x10) == 0)) &&
     (*(longlong *)(param_2 + 0xd60) != DAT_14cb94e38)) {
    bVar11 = *(longlong *)(param_2 + 0xba0) != 0;
  }
  if (bVar11 == (bool)*(char *)(lVar2 + 0x90)) {
    if (*(int *)(lVar2 + 0x94) == 0) {
      iVar9 = 1;
      goto LAB_140fbbad2;
    }
  }
  else {
    iVar9 = *(int *)(lVar2 + 0x94) + 1;
LAB_140fbbad2:
    *(bool *)(lVar2 + 0x90) = bVar11;
    *(int *)(lVar2 + 0x94) = iVar9;
  }
  plVar6 = (longlong *)FUN_140fbbd16(param_2,*(undefined1 *)(param_2 + 0xbd8));
  if (plVar6 == (longlong *)0x0) {
LAB_140fbbb02:
    FUN_140c12dec(lVar2 + 0xa0,&DAT_149e02088);
LAB_140fbbb18:
    FUN_148e5c80e(param_1);
  }
  else {
    lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
    lVar8 = FUN_140fbbcdc();
    if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_140fbbb02;
    FUN_1449a0272(lVar2 + 0xa0,plVar6 + 3);
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar7 = plVar6[6];
      if (lVar7 == 0) {
        uVar5 = FUN_1458b6df2();
        lVar7 = FUN_14477b664(uVar5);
        plVar6[6] = lVar7;
      }
      if (plVar6[7] != 0) goto LAB_140fbba6d;
      if ((lVar7 != 0) && (plVar6[5] != 0)) {
        plVar10 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar10 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 == '\0')) {
          plVar6[7] = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
          lVar7 = FUN_144aff482(uVar5,plVar6 + 5);
          plVar6[7] = lVar7;
          if (lVar7 != 0) goto LAB_140fbba6d;
        }
      }
      goto LAB_140fbbb18;
    }
LAB_140fbba6d:
    lVar7 = plVar6[6];
    if (lVar7 == 0) {
      uVar5 = FUN_1458b6df2();
      lVar7 = FUN_14477b664(uVar5);
      plVar6[6] = lVar7;
    }
    plVar10 = plVar6 + 5;
    if (plVar6[7] == 0) {
      if ((*plVar10 != 0) && (lVar7 != 0)) {
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          plVar6[7] = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar5,plVar10);
          plVar6[7] = lVar7;
          if (lVar7 != 0) goto LAB_140fbbc2b;
        }
      }
    }
    else {
LAB_140fbbc2b:
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        uVar5 = FUN_1415c99d8(*(longlong *)(param_1 + 0xa0) + 0x390);
        FUN_1406987fe(uVar5,&local_68);
        local_98 = *plVar10;
        FUN_1446dcdd4(local_90);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if (local_68 == local_90[0]) goto LAB_140fbba8f;
      }
      FUN_148e5c882(param_1,plVar10);
    }
  }
LAB_140fbba8f:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 200));
LAB_140fbba98:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fbbcdc FUN_140fbbcdc body=57 status=ok
// SIG undefined FUN_140fbbcdc(void)

void FUN_140fbbcdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9568 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9568 = FUN_140002ddd(FUN_1465d3e88,uVar1,L"OakCrosshairDef");
  }
  return;
}



// FUNCTION 140fbbd16 FUN_140fbbd16 body=97 status=ok
// SIG undefined FUN_140fbbd16(void)

undefined8 FUN_140fbbd16(longlong param_1,byte param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (((int)(uint)param_2 < *(int *)(param_1 + 0xbf0)) &&
     (lVar1 = *(longlong *)
               (*(longlong *)(param_1 + 0xbe8) + 8 +
               (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8), lVar1 != 0)) {
    if ((*(longlong *)(lVar1 + 0x50) == 0) ||
       ((plVar3 = (longlong *)FUN_1401654a2(), plVar3 == (longlong *)0x0 ||
        (cVar2 = (**(code **)(*plVar3 + 0x50))(plVar3), cVar2 == '\0')))) {
      puVar4 = (undefined8 *)(lVar1 + 0x48);
    }
    else {
      puVar4 = (undefined8 *)(lVar1 + 0x50);
    }
    return *puVar4;
  }
  return 0;
}



// FUNCTION 140fbbd78 FUN_140fbbd78 body=152 status=ok
// SIG undefined FUN_140fbbd78(void)

bool FUN_140fbbd78(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar3 = DAT_14cb94e38;
  if ((*(char *)(param_1 + 0xd2a) == '\x01') &&
     (lVar2 = *(longlong *)(param_1 + 0xd60), lVar2 != DAT_14cb94e30)) {
    plVar5 = (longlong *)FUN_1401654a2(param_1);
    bVar6 = lVar2 != lVar3;
    if ((bVar6) && (plVar5 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*plVar5 + 0x50))();
      bVar6 = true;
      if (cVar4 != '\0') {
        bVar1 = *(byte *)(param_1 + 0xbd8);
        if (((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
           (lVar3 = *(longlong *)
                     (*(longlong *)(param_1 + 0xbe8) + 0x28 +
                     (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar3 != 0)) {
          bVar6 = (bool)(*(byte *)(*(longlong *)(lVar3 + 0x38) + 100) & 1);
        }
      }
    }
  }
  else {
    FUN_1401654a2(param_1);
    bVar6 = false;
  }
  return bVar6;
}



// FUNCTION 140fbbe26 FUN_140fbbe26 body=294 status=ok
// SIG undefined FUN_140fbbe26(void)

void FUN_140fbbe26(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = *(char *)(param_1 + 0x5d30);
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(byte *)(param_1 + 0x6168) = *(byte *)(param_1 + 0x6168) & 0xfe | local_19 != '\x02';
  }
  FUN_1447cd2ec(param_1 + 0x4e40);
  FUN_140fbc06a(param_1 + 0x4e28,*(undefined1 *)(param_1 + 0x5d30));
  cVar1 = *(char *)(param_1 + 0x5d30);
  if (cVar1 != '\x02') {
    if ((cVar1 != '\x01') && (cVar1 != '\0')) {
      if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if (((*(longlong **)(param_1 + 0x3f70) != (longlong *)0x0) &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3f70) + 0x80))(), cVar1 != '\0')) &&
     (-1 < *(char *)(param_1 + 0x4598))) {
    FUN_1457db0aa(param_1 + 0x4128);
  }
  FUN_1447cd2ec(param_1 + 0x4e70,0);
  FUN_1447f69b6(param_1 + 0x4e80);
  FUN_140fbbf6e(param_1 + 0x6890);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 140fbbf6e FUN_140fbbf6e body=88 status=ok
// SIG undefined FUN_140fbbf6e(void)

void FUN_140fbbf6e(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  char local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fbc1b3(local_20,param_1);
  if (local_1c == '\x01') {
    local_1c = '\0';
  }
  FUN_140fbc10c(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbbfc8 FUN_140fbbfc8 body=162 status=ok
// SIG undefined FUN_140fbbfc8(void)

void FUN_140fbbfc8(longlong *param_1,undefined8 param_2)

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
        goto LAB_140fbc055;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140fbc055:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140fbc06a FUN_140fbc06a body=162 status=ok
// SIG undefined FUN_140fbc06a(void)

void FUN_140fbc06a(longlong *param_1,undefined4 param_2)

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
        goto LAB_140fbc0f7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140fbc0f7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140fbc10c FUN_140fbc10c body=167 status=ok
// SIG undefined FUN_140fbc10c(void)

void FUN_140fbc10c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x20c) == '\x01') {
    if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
      if (lVar1 != 0) {
        lVar2 = FUN_144a2f878();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          (**(code **)(*(longlong *)(lVar1 + 0x3c60) + 0x58))(lVar1 + 0x3c60);
        }
      }
    }
    FUN_1457daea8(param_1);
    FUN_1457dad44(param_1);
    FUN_1457dadce(param_1);
    FUN_1457daf92(param_1);
    if (*(char *)(param_1 + 0x1bc) == '\x01') {
      *(undefined1 *)(param_1 + 0x1bc) = 0;
    }
    *(undefined1 *)(param_1 + 0x20c) = 0;
  }
  return;
}



// FUNCTION 140fbc1b3 FUN_140fbc1b3 body=694 status=ok
// SIG undefined FUN_140fbc1b3(void)

/* WARNING: Removing unreachable block (ram,0x000140fbc3ea) */
/* WARNING: Removing unreachable block (ram,0x000140fbc3f5) */
/* WARNING: Removing unreachable block (ram,0x000140fbc408) */

longlong FUN_140fbc1b3(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  char local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(byte *)(param_2 + 0xc0) & 8) != 0) && (*(char *)(param_2 + 0x20b) != '\x01')) {
    lVar6 = FUN_140fbc46a();
    lVar4 = *(longlong *)(lVar6 + 0x20);
    plVar5 = *(longlong **)(lVar6 + 0x28);
    if (plVar5 == (longlong *)0x0) {
      if (lVar4 != 0) goto LAB_140fbc25a;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      if (lVar4 != 0) {
LAB_140fbc25a:
        local_84 = '\0';
        local_60 = 0;
        local_58 = 0;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        local_80 = 0;
        uStack_78 = 0;
        local_54 = 0xffffffff00000080;
        local_4c = 0;
        local_40 = 0;
        local_38 = 0;
        if (plVar5 == (longlong *)0x0) {
          plStack_a0 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          plStack_a0 = plVar5;
        }
        local_a8 = lVar4;
        FUN_140fbc5b2(param_2 + 0x48,param_1,&local_a8);
        local_38 = 0;
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        FUN_140333f4e(&local_80);
        plVar1 = plStack_90;
        if (local_84 == '\x01') {
          local_84 = '\0';
        }
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_90 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        plVar1 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_a0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
        goto LAB_140fbc1e3;
      }
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  *(undefined1 *)(param_1 + 4) = 0;
LAB_140fbc1e3:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbc46a FUN_140fbc46a body=326 status=ok
// SIG undefined FUN_140fbc46a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140fbc46a(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbd36a0 == (longlong *)0x0) {
    DAT_14cbd36b0 = 0;
    uRam000000014cbd36b8 = 0;
    plVar3 = &DAT_14cbd36b0;
    _DAT_14cbd36c0 = 0xffffffff;
    _DAT_14cbd36a8 = &PTR_FUN_14b775fd0;
    memset(&DAT_14cbd36c8,0,0xd8);
    DAT_14cbd36a0 = (longlong *)&DAT_14cbd36a8;
LAB_140fbc49b:
    plVar2 = DAT_14cbd36a0;
    if (*plVar3 == 0) goto LAB_140fbc542;
    cVar1 = FUN_1449e3c20(DAT_14cbd36a0);
    if (cVar1 == '\0') goto LAB_140fbc4b5;
  }
  else {
    plVar3 = DAT_14cbd36a0 + 1;
    if ((char)DAT_14cbd36a0[2] == '\0') goto LAB_140fbc49b;
    if ((char)DAT_14cbd36a0[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_140fbc49b;
    }
LAB_140fbc542:
    plVar2 = DAT_14cbd36a0;
    if (DAT_14c9a17d8 == (longlong *)0x0) goto LAB_140fbc4b5;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_oak_statuseffects",0);
    if (DAT_14c9a17d8 != (longlong *)0x0) {
      (**(code **)(*DAT_14c9a17d8 + 0x2a0))(DAT_14c9a17d8,plVar2,&local_48);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar2 + 0x20))(plVar2);
LAB_140fbc4b5:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbc5b2 FUN_140fbc5b2 body=608 status=ok
// SIG undefined FUN_140fbc5b2(void)

undefined4 * FUN_140fbc5b2(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar6 = *param_3;
  if (lVar6 == 0) {
    uVar9 = 0;
    goto LAB_140fbc6f5;
  }
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar4 + 1;
  iVar5 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar5 + 1U) {
    FUN_140fbc942((longlong *)(param_1 + 0x20),iVar5);
  }
  lVar11 = *(longlong *)(param_1 + 0x20);
  lVar10 = (longlong)iVar5 * 0x90;
  puVar3 = (undefined4 *)(lVar11 + lVar10);
  *(int *)(lVar11 + lVar10) = iVar4;
  *(longlong *)(lVar11 + 8 + lVar10) = lVar6;
  *(longlong **)(lVar11 + 0x10 + lVar10) = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar3 + 0xb) = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  puVar3[0x18] = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x19) = 0xffffffff00000080;
  puVar3[0x1b] = 0;
  *(undefined8 *)(puVar3 + 0x1e) = 0;
  puVar3[0x20] = 0;
  *(undefined1 *)(puVar3 + 0x22) = 0;
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
  lVar6 = param_3[2];
  lVar11 = param_3[3];
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(puVar3 + 8);
  *(longlong *)(puVar3 + 6) = lVar6;
  *(longlong *)(puVar3 + 8) = lVar11;
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
  if (param_3 + 4 != (longlong *)(puVar3 + 10)) {
    if (*(char *)((longlong)param_3 + 0x24) == '\x01') {
      puVar3[10] = (int)param_3[4];
      uVar9 = 1;
    }
    else {
      if (*(char *)(puVar3 + 0xb) != '\x01') goto LAB_140fbc6cc;
      uVar9 = 0;
    }
    *(undefined1 *)(puVar3 + 0xb) = uVar9;
  }
LAB_140fbc6cc:
  FUN_140725242(puVar3 + 0xe,param_3 + 5);
  lVar6 = *(longlong *)(puVar3 + 6);
  if (lVar6 == 0) {
LAB_140fbc6e4:
    FUN_140fbc812(param_1,puVar3);
  }
  else {
    if (*(int *)(lVar6 + 0x20) != 3) {
      FUN_1446efa72((longlong *)(lVar6 + 0x18),0,3,0x10);
      *(undefined4 *)(lVar6 + 0x20) = 3;
    }
    puVar8 = *(undefined8 **)(lVar6 + 0x18);
    *puVar8 = &PTR_LAB_14b42c990;
    *(undefined4 *)(puVar8 + 1) = *puVar3;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar8[2] = lVar11;
    *puVar8 = &PTR_FUN_14b430240;
    puVar8[3] = param_1;
    puVar8[4] = &LAB_14899e1b2;
    if ((*(byte *)(*(longlong *)(puVar3 + 6) + 0x28) & 2) != 0) goto LAB_140fbc6e4;
  }
  *param_2 = *puVar3;
  uVar9 = 1;
LAB_140fbc6f5:
  *(undefined1 *)(param_2 + 1) = uVar9;
  return param_2;
}



// FUNCTION 140fbc812 FUN_140fbc812 body=303 status=ok
// SIG undefined FUN_140fbc812(void)

void FUN_140fbc812(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(longlong **)(param_1 + 2) != (longlong *)0x0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(uint *)(lVar4 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 2) + 0x10))();
      if ((lVar4 != 0) && (*(char *)(param_2 + 0x88) == '\0')) {
        uVar1 = param_1[6];
        param_1[6] = uVar1 + 1;
        if (param_1[7] < uVar1 + 1) {
          FUN_140fbca52(param_1 + 4,uVar1);
        }
        lVar2 = *(longlong *)(param_1 + 4);
        *(undefined8 *)(lVar2 + (longlong)(int)uVar1 * 0x10) = *(undefined8 *)(param_2 + 8);
        lVar3 = *(longlong *)(param_2 + 0x10);
        *(longlong *)(lVar2 + 8 + (longlong)(int)uVar1 * 0x10) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        *(undefined1 *)(param_2 + 0x88) = 1;
        if (*(char *)(param_2 + 0x2c) == '\x01') {
          FUN_141268f40(param_1,param_2,1);
        }
        local_40 = lVar4;
        local_38 = param_2;
        (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbc942 FUN_140fbc942 body=272 status=ok
// SIG undefined FUN_140fbc942(void)

void FUN_140fbc942(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x90;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140fbca52 FUN_140fbca52 body=269 status=ok
// SIG undefined FUN_140fbca52(void)

void FUN_140fbca52(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140fbcb60 FUN_140fbcb60 body=29 status=ok
// SIG undefined FUN_140fbcb60(void)

undefined4 * FUN_140fbcb60(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 140fbcb7d FUN_140fbcb7d body=38 status=ok
// SIG undefined FUN_140fbcb7d(void)

undefined8 FUN_140fbcb7d(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))();
  }
  FUN_14053d96a(param_1);
  return 1;
}



// FUNCTION 140fbcba4 FUN_140fbcba4 body=859 status=ok
// SIG undefined FUN_140fbcba4(void)

undefined8 * FUN_140fbcba4(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b52bb00;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
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
  param_1[0xf] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 4;
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
  param_1[0x12] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x13) = 0;
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
  param_1[0x14] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xf0 | 7;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}



// FUNCTION 140fbcf0e FUN_140fbcf0e body=130 status=ok
// SIG undefined FUN_140fbcf0e(void)

undefined8 * FUN_140fbcf0e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b35c3c0;
  plVar3 = (longlong *)param_1[0xb];
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
  plVar3 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140fbcf90 FUN_140fbcf90 body=181 status=ok
// SIG undefined FUN_140fbcf90(void)

void FUN_140fbcf90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x158))
                    (param_1,param_2,FUN_148a06ec0,FUN_148a06f1a,&LAB_148a06f15,&LAB_148a06ead);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
    if (0 < (int)param_2[1]) {
      lVar4 = 0;
      iVar3 = 0;
      do {
        lVar1 = *param_2;
        (**(code **)(*param_1 + 0x28))(param_1);
        FUN_140fbd045(param_1,lVar1 + lVar4);
        (**(code **)(*param_1 + 0x48))(param_1,lVar1 + lVar4);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x38;
      } while (iVar3 < (int)param_2[1]);
    }
                    /* WARNING: Could not recover jumptable at 0x000140fbd032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x168))(param_1);
    return;
  }
  return;
}


