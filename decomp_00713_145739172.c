// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145739172 FUN_145739172 body=230 status=ok
// SIG undefined FUN_145739172(void)

int * FUN_145739172(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 145739258 FUN_145739258 body=1068 status=ok
// SIG undefined FUN_145739258(void)

void FUN_145739258(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  undefined2 *puVar14;
  uint uVar15;
  code *pcVar16;
  undefined2 *puVar17;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  code **local_a8;
  undefined1 local_a0;
  longlong local_90;
  code *local_88;
  longlong *local_80;
  undefined1 local_71;
  undefined2 *local_70;
  code *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = *(uint *)(param_2 + 1);
  uVar5 = (ulonglong)uVar4;
  if ((int)uVar4 < 1) {
    iVar13 = (int)((ulonglong)DAT_14c947cd0 >> 0x20);
    lVar9 = *param_2;
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      iVar13 = (int)uVar11;
      if ((*(longlong *)(*param_2 + uVar11 * 0x18) == 0) ||
         (*(int *)(*param_2 + uVar11 * 0x18 + 0x10) < 2)) {
        FUN_146863c7a(param_2);
        FUN_146863cd4(param_2);
        iVar13 = iVar13 + -1;
        uVar5 = (ulonglong)*(uint *)(param_2 + 1);
      }
      uVar11 = (ulonglong)(iVar13 + 1U);
      uVar4 = (uint)uVar5;
    } while ((int)(iVar13 + 1U) < (int)uVar4);
    iVar13 = (int)((ulonglong)DAT_14c947cd0 >> 0x20);
    lVar9 = *param_2;
    uVar11 = 0;
    if (0 < (int)uVar4) {
      uVar11 = 0;
      do {
        uVar12 = (int)(uVar5 >> 1) + (int)uVar11;
        iVar10 = *(int *)(lVar9 + (ulonglong)uVar12 * 0x18) - (int)DAT_14c947cd0;
        if (iVar10 == 0) {
          iVar10 = *(int *)(lVar9 + 4 + (ulonglong)uVar12 * 0x18) - iVar13;
        }
        uVar15 = (uint)uVar5;
        if (iVar10 < 0) {
          uVar11 = (ulonglong)(uVar12 + (uVar15 & 1));
        }
        uVar5 = uVar5 >> 1;
      } while (1 < uVar15);
    }
  }
  if ((int)uVar11 < (int)uVar4) {
    iVar10 = (int)DAT_14c947cd0 - *(int *)(lVar9 + uVar11 * 0x18);
    if (iVar10 == 0) {
      iVar10 = iVar13 - *(int *)(lVar9 + 4 + uVar11 * 0x18);
    }
    if (-1 < iVar10) {
      puVar14 = *(undefined2 **)(lVar9 + 8 + uVar11 * 0x18);
      iVar13 = *(int *)(lVar9 + 0x10 + uVar11 * 0x18);
      puVar2 = (undefined8 *)(lVar9 + 8 + uVar11 * 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar17 = &DAT_149dfb77a;
      if (iVar13 != 0) {
        puVar17 = puVar14;
      }
      FUN_146863c7a(param_2);
      FUN_146863cd4(param_2);
      local_b8 = CONCAT71(local_b8._1_7_,2);
      local_70 = puVar17;
      FUN_145c78a6c(&local_71,0,0,0);
      local_68 = (code *)0x0;
      uStack_60 = (code **)0x0;
      local_b8 = DAT_14c872be8;
      cVar3 = FUN_146857756(&local_68,&local_70,0,0);
      if (cVar3 == '\0') {
        uVar6 = FUN_14689213c();
        local_80 = &local_90;
        local_a8 = &local_88;
        local_88 = FUN_1427b3552;
        local_b0 = DAT_14c872be8;
        local_a0 = 1;
        local_b8 = local_b8 & 0xffffffff00000000;
        local_90 = param_1;
        FUN_1408de6dc(uVar6,local_70,&local_68,0);
      }
      iVar13 = (int)uStack_60;
      if ((int)uStack_60 < 1) {
        plVar8 = (longlong *)0x0;
        plVar7 = (longlong *)0x0;
        pcVar16 = local_68;
      }
      else {
        plVar7 = (longlong *)FUN_14001cc68(0x10,0x10);
        *plVar7 = (longlong)local_68;
        local_68 = (code *)0x0;
        *(int *)(plVar7 + 1) = iVar13;
        *(undefined4 *)((longlong)plVar7 + 0xc) = uStack_60._4_4_;
        uStack_60 = (code **)0x0;
        plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar8[1] = (longlong)&DAT_100000001;
        *plVar8 = (longlong)&PTR_FUN_149e5d610;
        plVar8[2] = (longlong)plVar7;
        pcVar16 = (code *)0x0;
        iVar13 = 0;
      }
      FUN_1401a56c2(pcVar16,iVar13);
      if (local_68 != (code *)0x0) {
        FUN_1400020a8();
      }
      uStack_60 = &local_88;
      local_68 = FUN_146271634;
      lVar9 = FUN_144a773aa(&local_68,&DAT_14c75ebfc);
      *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
      FUN_145a9f146(lVar9 + 0x10);
      *(longlong **)(param_1 + 0x48) = plVar7;
      plVar7 = *(longlong **)(param_1 + 0x50);
      if (plVar8 == plVar7) {
        if (plVar8 == (longlong *)0x0) goto LAB_1457392c6;
        LOCK();
        plVar7 = plVar8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 != 0) goto LAB_1457392c6;
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) goto LAB_1457392c6;
        lVar9 = *plVar8;
      }
      else {
        *(longlong **)(param_1 + 0x50) = plVar8;
        if (plVar7 == (longlong *)0x0) goto LAB_1457392c6;
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 != 0) goto LAB_1457392c6;
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) goto LAB_1457392c6;
        lVar9 = *plVar7;
        plVar8 = plVar7;
      }
      (**(code **)(lVar9 + 0x10))(plVar8);
      goto LAB_1457392c6;
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar8 = *(longlong **)(param_1 + 0x50);
  if (plVar8 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  puVar14 = (undefined2 *)0x0;
LAB_1457392c6:
  lVar9 = param_2[1];
  if ((int)lVar9 < 1) {
    plVar8 = (longlong *)0x0;
  }
  else {
    local_88 = (code *)0x0;
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    *plVar8 = *param_2;
    *param_2 = 0;
    *(int *)(plVar8 + 1) = (int)lVar9;
    *(undefined4 *)((longlong)plVar8 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    *(undefined4 *)(plVar8 + 2) = 0;
    LOCK();
    *(undefined4 *)(plVar8 + 2) = 1;
    UNLOCK();
  }
  local_88 = (code *)0x0;
  local_68 = *(code **)(param_1 + 0x40);
  *(longlong **)(param_1 + 0x40) = plVar8;
  FUN_1400b4210();
  FUN_1400b4210(&local_88);
  if (puVar14 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar14);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145739686 FUN_145739686 body=312 status=ok
// SIG undefined FUN_145739686(void)

void FUN_145739686(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  int local_60;
  undefined1 local_59;
  code *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    local_60 = param_2;
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,param_4);
    }
    _Src = (void *)*param_1;
    local_50 = &local_59;
    local_58 = FUN_140036a08;
    lVar3 = FUN_144a773aa(&local_58,&DAT_14c7585d0);
    puVar1 = (ulonglong *)(lVar3 + 0x10);
    uVar4 = (int)param_4 * param_3;
    uVar6 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar5 = (uint)(uVar4 >= 0x10) * 8;
    lVar2 = (ulonglong)uVar5 + 7;
    _Dst = (void *)(*(longlong *)(lVar3 + 0x10) + lVar2 & uVar6);
    uVar8 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)(lVar3 + 0x18) < uVar8) {
      FUN_140023dd8(puVar1,uVar5 + 8 + uVar4);
      _Dst = (void *)(lVar2 + *puVar1 & uVar6);
      uVar8 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar1 = uVar8;
    *param_1 = _Dst;
    if (local_60 != 0 && _Src != (void *)0x0) {
      iVar7 = local_60;
      if (param_3 < local_60) {
        iVar7 = param_3;
      }
      memcpy(_Dst,_Src,iVar7 * param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457397c0 FUN_1457397c0 body=163 status=ok
// SIG undefined FUN_1457397c0(void)

undefined8 FUN_1457397c0(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_1406e1f6c(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145739864 FUN_145739864 body=376 status=ok
// SIG undefined FUN_145739864(void)

undefined4 *
FUN_145739864(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406e28c6(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_1406e2804(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1406e2aa2(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457399de FUN_1457399de body=138 status=ok
// SIG undefined FUN_1457399de(void)

void FUN_1457399de(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145739a68 FUN_145739a68 body=200 status=ok
// SIG undefined FUN_145739a68(void)

longlong FUN_145739a68(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_144a49b4a(*(undefined4 *)(param_2 + 1),*param_2);
  iVar2 = FUN_145739b32(param_1,uVar1,param_2);
  lVar3 = 0;
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x68 + *param_1;
  }
  if (lVar3 == 0) {
    FUN_14006620a(&local_38,*param_2,*(undefined4 *)(param_2 + 1));
    local_48 = (undefined4)local_38;
    uStack_44 = local_38._4_4_;
    uStack_40 = uStack_30;
    uStack_3c = uStack_2c;
    local_38 = &local_48;
    FUN_145739bda(param_1,&local_24,&local_38);
    lVar3 = *param_1;
    if (CONCAT44(uStack_44,local_48) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + (longlong)local_24 * 0x68;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 145739b32 FUN_145739b32 body=167 status=ok
// SIG undefined FUN_145739b32(void)

int FUN_145739b32(longlong *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
        uStack_44 = param_3[1];
        uStack_40 = param_3[2];
        uStack_3c = param_3[3];
        cVar1 = FUN_14277ac86(lVar3 + (longlong)iVar4 * 0x68,&local_48);
        if (cVar1 != '\0') goto LAB_145739b59;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x60 + (longlong)iVar4 * 0x68);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145739b59:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 145739bda FUN_145739bda body=312 status=ok
// SIG undefined FUN_145739bda(void)

undefined4 * FUN_145739bda(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145739e32(param_1,local_48);
  FUN_145739d84(param_3,local_40);
  *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_145739d14(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 100) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145739f16(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145739d14 FUN_145739d14 body=111 status=ok
// SIG undefined FUN_145739d14(void)

undefined8 FUN_145739d14(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_14680a874(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x68 + *param_1);
    FUN_1457586f6(_Dst);
    memmove(_Dst,param_3,0x60);
    FUN_1467dbaca(param_1,*param_4,1);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 145739d84 FUN_145739d84 body=172 status=ok
// SIG undefined FUN_145739d84(void)

undefined8 * FUN_145739d84(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  param_1 = (undefined8 *)*param_1;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  FUN_140d69258(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145739e32 FUN_145739e32 body=227 status=ok
// SIG undefined FUN_145739e32(void)

int * FUN_145739e32(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 145739f16 FUN_145739f16 body=485 status=ok
// SIG undefined FUN_145739f16(void)

void FUN_145739f16(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x68;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 100 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573a0fc FUN_14573a0fc body=267 status=ok
// SIG undefined FUN_14573a0fc(void)

ulonglong FUN_14573a0fc(longlong *param_1)

{
  longlong *plVar1;
  ulonglong unaff_RBX;
  int iVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1), uStack_48 != plVar1))
  {
    do {
      bVar3 = *(int *)(*local_78 + 0x18 + (longlong)iStack_5c * 0x68) ==
              *(int *)(*local_78 + 0x44 + (longlong)iStack_5c * 0x68);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar3);
      if (!bVar3) break;
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 14573a208 FUN_14573a208 body=58 status=ok
// SIG undefined FUN_14573a208(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14573a208(void)

{
  uint uVar1;
  
  uVar1 = DAT_14caa88c0;
  if (((DAT_14caa88b8 != 0x400) || (DAT_14c7585d8 != 0)) &&
     ((DAT_14caa88b8 != 0x800 || (DAT_14c7585dc != 0)))) {
    uVar1 = DAT_14caa88b8 | _DAT_14caa88bc;
  }
  return uVar1 | 0xff;
}



// FUNCTION 14573a242 FUN_14573a242 body=132 status=ok
// SIG undefined FUN_14573a242(void)

void FUN_14573a242(longlong param_1,int param_2)

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



// FUNCTION 14573a2c8 FUN_14573a2c8 body=103 status=ok
// SIG undefined FUN_14573a2c8(void)

undefined8 FUN_14573a2c8(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_1406ea0e0(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14573a330 FUN_14573a330 body=163 status=ok
// SIG undefined FUN_14573a330(void)

void FUN_14573a330(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_14485c47a(param_1 + 3,*param_2);
  lVar3 = 0;
  if (*param_2 != 0) {
    lVar3 = param_2[1];
  }
  param_1[4] = lVar3;
  param_1[1] = *param_3;
  plVar2 = (longlong *)param_3[1];
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = (longlong *)param_1[2];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    param_1[2] = (longlong)plVar2;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014573a3cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14573a3d4 FUN_14573a3d4 body=325 status=ok
// SIG undefined FUN_14573a3d4(void)

undefined4 *
FUN_14573a3d4(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14573a5c4(param_1,local_50);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_48 = *puVar1;
  local_48[1] = uVar3;
  local_48[2] = uVar4;
  local_48[3] = uVar5;
  *(undefined8 *)(local_48 + 4) = *puVar2;
  lVar11 = puVar2[1];
  *(longlong *)(local_48 + 6) = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  local_48[8] = 0xffffffff;
  local_54 = local_50[0];
  uVar7 = FUN_1447addd0(local_48,0x10);
  local_68 = param_4;
  cVar6 = FUN_14573a51a(param_1,uVar7,local_48,&local_54);
  uVar3 = local_54;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_48[9] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_48[8] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1406ef13a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573a51a FUN_14573a51a body=170 status=ok
// SIG undefined FUN_14573a51a(void)

void FUN_14573a51a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  int iVar13;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar13 = FUN_1406eed16();
    if (iVar13 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x28);
      plVar4 = *(longlong **)(puVar3 + 6);
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
      uVar5 = *param_3;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      uVar8 = param_3[3];
      uVar9 = param_3[5];
      uVar10 = param_3[6];
      uVar11 = param_3[7];
      puVar3[4] = param_3[4];
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_14898a3ac(param_1,*param_4);
      *param_4 = iVar13;
      uVar12 = 1;
      goto LAB_14573a550;
    }
  }
  uVar12 = 0;
LAB_14573a550:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar12;
  }
  return;
}



// FUNCTION 14573a5c4 FUN_14573a5c4 body=231 status=ok
// SIG undefined FUN_14573a5c4(void)

int * FUN_14573a5c4(longlong *param_1,int *param_2)

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



// FUNCTION 14573a6ac FUN_14573a6ac body=78 status=ok
// SIG undefined FUN_14573a6ac(void)

undefined8 * FUN_14573a6ac(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14573a6fa();
  *param_2 = plVar3 + 2;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14573a6fa FUN_14573a6fa body=104 status=ok
// SIG undefined FUN_14573a6fa(void)

void FUN_14573a6fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b42b020;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[2] = &PTR_FUN_14b26bb40;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)((longlong)puVar1 + 100) = 0x80;
  *(undefined4 *)(puVar1 + 0xd) = 0xffffffff;
  return;
}



// FUNCTION 14573a762 FUN_14573a762 body=57 status=ok
// SIG undefined FUN_14573a762(void)

void FUN_14573a762(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f650 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f650 = FUN_140002ddd(FUN_146540b4b,uVar1,L"UnlockableLedgerDef");
  }
  return;
}



// FUNCTION 14573a7a4 FUN_14573a7a4 body=58 status=ok
// SIG undefined FUN_14573a7a4(void)

undefined8 * FUN_14573a7a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140f71704(param_1,uVar1);
  *param_1 = &PTR_FUN_14b902e50;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14573a7de(param_1);
  return param_1;
}



// FUNCTION 14573a7de FUN_14573a7de body=848 status=ok
// SIG undefined FUN_14573a7de(void)

void FUN_14573a7de(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  char cVar6;
  undefined1 auStack_f8 [32];
  longlong *local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined1 local_98 [56];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar6 = '\0';
  do {
    FUN_1406f1ea8(&local_c0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar6) {
    case '\0':
      uStack_9c = 0;
      iStack_b8 = CONCAT31(iStack_b8._1_3_,1);
      local_c0 = DAT_14cbe81b8;
      break;
    case '\x01':
      uStack_9c = 1;
      iStack_b8 = (uint)iStack_b8._1_3_ << 8;
      uVar3 = FUN_1409f759a();
      FUN_1406f1d90(uVar3,local_d8,1);
      puVar4 = (undefined8 *)FUN_1447a1f4a(local_d8);
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(puVar4 + 1) != 0) {
        puVar5 = (undefined2 *)*puVar4;
      }
      FUN_1446f470e(&local_c8,puVar5,1);
      local_c0 = local_c8;
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      local_60 = 0xff00ff00;
      break;
    case '\x02':
      uStack_9c = 2;
      iStack_b8 = (uint)iStack_b8._1_3_ << 8;
      uVar3 = FUN_1409f759a();
      FUN_1406f1d90(uVar3,local_d8,2);
      puVar4 = (undefined8 *)FUN_1447a1f4a(local_d8);
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(puVar4 + 1) != 0) {
        puVar5 = (undefined2 *)*puVar4;
      }
      FUN_1446f470e(&local_c8,puVar5,1);
      local_c0 = local_c8;
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      local_60 = 0xff00ffff;
      break;
    case '\x03':
      uStack_9c = 3;
      iStack_b8 = (uint)iStack_b8._1_3_ << 8;
      uVar3 = FUN_1409f759a();
      FUN_1406f1d90(uVar3,local_d8,3);
      puVar4 = (undefined8 *)FUN_1447a1f4a(local_d8);
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(puVar4 + 1) != 0) {
        puVar5 = (undefined2 *)*puVar4;
      }
      FUN_1446f470e(&local_c8,puVar5,1);
      local_c0 = local_c8;
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      local_60 = 0xffff0000;
      break;
    case '\x04':
      uStack_9c = 4;
      iStack_b8 = (uint)iStack_b8._1_3_ << 8;
      uVar3 = FUN_1409f759a();
      FUN_1406f1d90(uVar3,local_d8,4);
      puVar4 = (undefined8 *)FUN_1447a1f4a(local_d8);
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(puVar4 + 1) != 0) {
        puVar5 = (undefined2 *)*puVar4;
      }
      FUN_1446f470e(&local_c8,puVar5,1);
      local_c0 = local_c8;
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      local_60 = 0xff0000ff;
      break;
    case '\x05':
      uStack_9c = 5;
      iStack_b8 = (uint)iStack_b8._1_3_ << 8;
      uVar3 = FUN_1409f759a();
      FUN_1406f1d90(uVar3,local_d8,5);
      puVar4 = (undefined8 *)FUN_1447a1f4a(local_d8);
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(puVar4 + 1) != 0) {
        puVar5 = (undefined2 *)*puVar4;
      }
      FUN_1446f470e(&local_c8,puVar5,1);
      local_c0 = local_c8;
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      local_60 = 0xffffff00;
    }
    iVar2 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
      FUN_14573ab30((longlong *)(param_1 + 0x60),iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x78);
    *(ulonglong *)((longlong)puVar1 + 0x1d) =
         CONCAT17(uStack_9c,CONCAT43(uStack_a0,uStack_a4._1_3_));
    puVar1[4] = local_b0;
    puVar1[5] = uStack_ac;
    puVar1[6] = uStack_a8;
    puVar1[7] = uStack_a4;
    *puVar1 = (undefined4)local_c0;
    puVar1[1] = local_c0._4_4_;
    puVar1[2] = iStack_b8;
    puVar1[3] = uStack_b4;
    FUN_14034cca6(puVar1 + 10,local_98);
    puVar1[0x18] = local_60;
    puVar1[0x19] = uStack_5c;
    puVar1[0x1a] = uStack_58;
    puVar1[0x1b] = uStack_54;
    puVar1[0x1c] = local_50;
    FUN_144a2da94(local_98);
    cVar6 = cVar6 + '\x01';
  } while (cVar6 != '\x06');
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573ab30 FUN_14573ab30 body=143 status=ok
// SIG undefined FUN_14573ab30(void)

void FUN_14573ab30(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14573abc0 FUN_14573abc0 body=89 status=ok
// SIG undefined FUN_14573abc0(void)

void FUN_14573abc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6e0c(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xb8) != 0)) {
        FUN_14573ac1a(*(longlong *)(lVar1 + 0xb8),param_4,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14573ac1a FUN_14573ac1a body=172 status=ok
// SIG undefined FUN_14573ac1a(void)

void FUN_14573ac1a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    lVar3 = FUN_1400f6f32(lVar3);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 != 0)) {
      uVar2 = FUN_140def96c(lVar3,param_3 + 0x18);
      FUN_14573adc2(param_1,uVar2);
      lVar4 = FUN_1411753f0(param_1,uVar2);
      if (lVar4 != 0) {
        FUN_14573b35c(param_2,lVar4);
        cVar1 = FUN_14573acc6(lVar3,param_3 + 0x18);
        if (cVar1 != '\0') {
          FUN_141175460(param_1 + 0x11,lVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14573acc6 FUN_14573acc6 body=251 status=ok
// SIG undefined FUN_14573acc6(void)

ulonglong FUN_14573acc6(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar4 != 0) && (*(uint *)(lVar4 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar4 + 4)) {
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar4 + 2) * 8);
        } while (-1 < *(short *)(lVar4 + 4));
        if (lVar4 == 0) goto LAB_14573adba;
      }
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        lVar4 = FUN_14479d2ce();
        if (lVar4 != 0) {
          cVar3 = FUN_1406f1f80(lVar4);
          uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
          if (cVar3 != '\0') goto LAB_14573ad38;
        }
        iVar2 = *(int *)(param_1 + 0x10);
        uVar6 = 0;
        if ((longlong)iVar2 != 0) {
          lVar4 = *(longlong *)(param_1 + 8);
          lVar7 = 0;
          do {
            lVar5 = *(longlong *)(lVar4 + lVar7);
            if (((lVar5 != 0) && (*(short *)(lVar5 + 4) < 0)) && (*(longlong *)(lVar5 + 0x10) != 0))
            {
              uVar6 = (ulonglong)((int)uVar6 + 1);
              lVar5 = FUN_14479d2ce();
              if ((lVar5 != 0) && (cVar3 = FUN_1406f1f80(lVar5), cVar3 != '\0')) goto LAB_14573adba;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar2 * 8 != lVar7);
          uVar6 = CONCAT71((int7)(uVar6 >> 8),(int)uVar6 == 1);
        }
        goto LAB_14573ad38;
      }
    }
  }
LAB_14573adba:
  uVar6 = 0;
LAB_14573ad38:
  return uVar6 & 0xffffffff;
}



// FUNCTION 14573adc2 FUN_14573adc2 body=143 status=ok
// SIG undefined FUN_14573adc2(void)

void FUN_14573adc2(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [88];
  longlong *local_50;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_3c = param_2;
  FUN_1459c794e(local_a8);
  local_38 = &local_3c;
  local_30 = local_a8;
  FUN_14573ae52(param_1 + 0xa0,local_24);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573ae52 FUN_14573ae52 body=342 status=ok
// SIG undefined FUN_14573ae52(void)

undefined4 * FUN_14573ae52(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14573b054(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar6 = *(uint *)*param_3;
  *local_48 = uVar6;
  puVar10 = puVar1;
  puVar11 = local_48;
  for (lVar7 = 10; puVar11 = puVar11 + 2, lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined8 *)puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
  }
  local_48[0x16] = *(uint *)(puVar1 + 10);
  plVar2 = (longlong *)puVar1[0xb];
  *(longlong **)(local_48 + 0x18) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
    uVar6 = *local_48;
  }
  local_48[0x1a] = *(uint *)(puVar1 + 0xc);
  local_48[0x1c] = 0xffffffff;
  local_54 = local_50[0];
  cVar4 = FUN_14573afaa(param_1,uVar6,local_48,&local_54);
  uVar3 = local_54;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_48[0x1d] = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[0x1c] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14573b1ae(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573afaa FUN_14573afaa body=169 status=ok
// SIG undefined FUN_14573afaa(void)

undefined8 FUN_14573afaa(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x78);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x78) == *param_3) {
          if (*(longlong **)((longlong)_Dst + 0x60) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)_Dst + 0x60) + 0x10))();
          }
          memmove(_Dst,param_3,0x70);
          FUN_14573b138(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x70);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14573b054 FUN_14573b054 body=227 status=ok
// SIG undefined FUN_14573b054(void)

int * FUN_14573b054(longlong *param_1,int *param_2)

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
      FUN_1410fd1ac(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x78);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x78) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x78 + *param_1;
  return param_2;
}



// FUNCTION 14573b138 FUN_14573b138 body=118 status=ok
// SIG undefined FUN_14573b138(void)

void FUN_14573b138(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
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



// FUNCTION 14573b1ae FUN_14573b1ae body=428 status=ok
// SIG undefined FUN_14573b1ae(void)

void FUN_14573b1ae(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x78;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x74 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar7) =
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



// FUNCTION 14573b35c FUN_14573b35c body=1075 status=ok
// SIG undefined FUN_14573b35c(void)

void FUN_14573b35c(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_68 = DAT_14cbe4558;
  local_60 = DAT_14cbe4560;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_1,local_58);
  uVar3 = FUN_140b963dc(uVar2,*(undefined4 *)(param_2 + 0x24));
  *(undefined4 *)(param_2 + 0x24) = uVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_88 = *(undefined4 *)(param_2 + 0x14);
  uStack_84 = *(undefined4 *)(param_2 + 0x18);
  uStack_80 = *(undefined4 *)(param_2 + 0x1c);
  uStack_7c = *(undefined4 *)(param_2 + 0x20);
  local_98 = DAT_14cbe4564;
  local_90 = DAT_14cbe456c;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_1,local_58);
  FUN_1400097a2(&local_78,uVar2,&local_88);
  *(undefined4 *)(param_2 + 0x14) = local_78;
  *(undefined4 *)(param_2 + 0x18) = uStack_74;
  *(undefined4 *)(param_2 + 0x1c) = uStack_70;
  *(undefined4 *)(param_2 + 0x20) = uStack_6c;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_a8 = DAT_14cbe4570;
  local_a0 = DAT_14cbe4578;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_1,local_58);
  uVar3 = FUN_140b963dc(uVar2,*(undefined4 *)(param_2 + 0x28));
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_2 + 0x2c);
  uStack_b4 = *(undefined4 *)(param_2 + 0x30);
  uStack_b0 = *(undefined4 *)(param_2 + 0x34);
  uStack_ac = *(undefined4 *)(param_2 + 0x38);
  local_c8 = DAT_14cbe457c;
  local_c0 = DAT_14cbe4584;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_1,local_58);
  FUN_1400097a2(&local_78,uVar2,&local_b8);
  *(undefined4 *)(param_2 + 0x2c) = local_78;
  *(undefined4 *)(param_2 + 0x30) = uStack_74;
  *(undefined4 *)(param_2 + 0x34) = uStack_70;
  *(undefined4 *)(param_2 + 0x38) = uStack_6c;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_d8 = DAT_14cbe4594;
  local_d0 = DAT_14cbe459c;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_1,local_58);
  uVar3 = FUN_140b963dc(uVar2,*(undefined4 *)(param_2 + 0x3c));
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_e8 = *(undefined4 *)(param_2 + 0x44);
  uStack_e4 = *(undefined4 *)(param_2 + 0x48);
  uStack_e0 = *(undefined4 *)(param_2 + 0x4c);
  uStack_dc = *(undefined4 *)(param_2 + 0x50);
  local_f8 = DAT_14cbe4588;
  local_f0 = DAT_14cbe4590;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_1,local_58);
  FUN_1400097a2(&local_78,uVar2,&local_e8);
  *(undefined4 *)(param_2 + 0x44) = local_78;
  *(undefined4 *)(param_2 + 0x48) = uStack_74;
  *(undefined4 *)(param_2 + 0x4c) = uStack_70;
  *(undefined4 *)(param_2 + 0x50) = uStack_6c;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_108 = DAT_14cbe45a0;
  local_100 = DAT_14cbe45a8;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_1,local_58);
  uVar1 = FUN_1410c4486(uVar2,*(undefined1 *)(param_2 + 0x40));
  *(undefined1 *)(param_2 + 0x40) = uVar1;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_118 = DAT_14cbe45ac;
  local_110 = DAT_14cbe45b4;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_1,local_58);
  uVar1 = FUN_1410c4486(uVar2,*(undefined1 *)(param_2 + 0x10));
  *(undefined1 *)(param_2 + 0x10) = uVar1;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_128 = DAT_14cbe45b8;
  local_120 = DAT_14cbe45c0;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_1,local_58);
  uVar1 = FUN_1410c4486(uVar2,*(undefined1 *)(param_2 + 0x11));
  *(undefined1 *)(param_2 + 0x11) = uVar1;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_138 = DAT_14cbe45c4;
  local_130 = DAT_14cbe45cc;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_1,local_58);
  uVar1 = FUN_1410c4486(uVar2,*(undefined1 *)(param_2 + 0x12));
  *(undefined1 *)(param_2 + 0x12) = uVar1;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573b790 FUN_14573b790 body=622 status=ok
// SIG undefined FUN_14573b790(void)

void FUN_14573b790(undefined8 ****param_1)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  undefined8 *****pppppuVar9;
  float fVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 ****local_c0;
  undefined4 local_b8;
  ushort local_a8;
  byte local_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 local_70;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14573ba00();
  if (param_1[9] != (undefined8 ***)0x0) {
    lVar5 = FUN_1447210f0();
    if (((lVar5 != 0) && (param_1[10] != (undefined8 ***)0x0)) &&
       (ppuVar1 = param_1[10][0x340], ppuVar1 != (undefined8 **)0x0)) {
      uVar6 = FUN_1406f3fb0((longlong)ppuVar1 + 0x124a);
      local_98 = local_98 & 0xffffffffffffff00;
      local_70 = 0;
      FUN_1456bb102(&local_98,param_1[9]);
      FUN_1448729ea(uVar6,&local_c0,&local_98);
      fVar10 = (float)FUN_144a7ecd0(&local_c0);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
      if (pcVar2 != (code *)0x0) {
        pppppuVar9 = &local_c0;
        if (0x18 < local_a8) {
          pppppuVar9 = (undefined8 *****)local_c0;
        }
        (*pcVar2)(pppppuVar9);
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(local_c0);
      }
      FUN_144a5ac3a(&local_98);
      if (0.0 < fVar10) {
        if (*(longlong *)(lVar5 + 0x1f0) == 0) {
          puVar7 = (undefined8 *)(lVar5 + 0x458);
        }
        else {
          puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
        }
        uVar6 = *puVar7;
        pppuVar3 = param_1[9];
        local_c0 = (undefined8 *****)0x0;
        local_b8 = 0;
        FUN_1446efa72(&local_c0,0,3,0x10);
        ppppuVar4 = local_c0;
        local_b8 = 3;
        *local_c0 = (undefined8 ***)&PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        ppppuVar8 = (undefined8 ****)(DAT_14c758608 + 1);
        lVar5 = DAT_14c758608 + 1;
        if (ppppuVar8 == (undefined8 ****)0x0) {
          LOCK();
          UNLOCK();
          ppppuVar8 = (undefined8 ****)(DAT_14c758608 + 2);
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_c0[2] = ppppuVar8;
        *local_c0 = (undefined8 ***)&PTR_FUN_14b9dd130;
        local_c0[3] = (undefined8 ****)0x0;
        FUN_14485c47a(local_c0 + 3,pppuVar3);
        ppppuVar4[4] = param_1;
        local_98 = 0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,&local_c0);
        local_58 = 1;
        local_d0 = 0xbf800000;
        local_d8 = 0;
        FUN_1406f3fee(uVar6,param_1 + 8,&local_98,fVar10);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(&local_c0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573ba00 FUN_14573ba00 body=115 status=ok
// SIG undefined FUN_14573ba00(void)

void FUN_14573ba00(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = FUN_1447210f0();
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 0x1f0) == 0) {
          puVar3 = (undefined8 *)(lVar2 + 0x458);
        }
        else {
          puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
        }
        uVar1 = *puVar3;
        lVar2 = FUN_144a61814(uVar1,puVar4);
        if (lVar2 != 0) {
          FUN_1405a424c(uVar1,*puVar4);
        }
      }
    }
    *puVar4 = 0;
  }
  return;
}



// FUNCTION 14573ba74 FUN_14573ba74 body=24 status=ok
// SIG undefined FUN_14573ba74(void)

bool FUN_14573ba74(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14573ba8c FUN_14573ba8c body=132 status=ok
// SIG undefined FUN_14573ba8c(void)

void FUN_14573ba8c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14573bb12 FUN_14573bb12 body=130 status=ok
// SIG undefined FUN_14573bb12(void)

void FUN_14573bb12(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x410);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      uVar4 = 0x10;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x414)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 6,0x10);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 6)) {
        uVar4 = uVar2 >> 6 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x414) = (int)uVar4;
    FUN_14573bb94(param_1,param_2,uVar4,0x40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14573bb94 FUN_14573bb94 body=185 status=ok
// SIG undefined FUN_14573bb94(void)

void FUN_14573bb94(void *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  void *_Src;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)((longlong)param_1 + 0x400);
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x11) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 6);
      if (*(longlong *)((longlong)param_1 + 0x400) != 0) {
        if (param_4 - 0x80000000U < 0xffffffff80000001) {
                    /* WARNING: Subroutine does not return */
          FUN_1467ac60e(0,param_4);
        }
        uVar2 = FUN_14001fdce(*(longlong *)((longlong)param_1 + 0x400),0,0x10);
        *puVar1 = uVar2;
      }
    }
    return;
  }
  if (_Src == (void *)0x0) {
    FUN_144a7ea90(puVar1,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 6);
    return;
  }
  FUN_144a7ea90(puVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14573bc4e FUN_14573bc4e body=132 status=ok
// SIG undefined FUN_14573bc4e(void)

void FUN_14573bc4e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14573bcd4 FUN_14573bcd4 body=63 status=ok
// SIG undefined FUN_14573bcd4(void)

longlong FUN_14573bcd4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_14070560c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14573bd14 FUN_14573bd14 body=106 status=ok
// SIG undefined FUN_14573bd14(void)

ulonglong FUN_14573bd14(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((((**(longlong **)(param_1 + 0x2698) == 0) && (**(longlong **)(param_1 + 0x2688) == 0)) &&
      (**(longlong **)(param_1 + 0x2678) == 0)) &&
     (((*(char *)(param_1 + 0x2ae0) == '\0' && (*(char *)(param_1 + 0x2ae1) == '\0')) &&
      ((*(int *)(param_1 + 0x2970) != *(int *)(param_1 + 0x299c) ||
       (cVar1 = FUN_140890098(), cVar1 == '\0')))))) {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14573bd7e FUN_14573bd7e body=260 status=ok
// SIG undefined FUN_14573bd7e(void)

void FUN_14573bd7e(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [39];
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (lVar3 != 0) {
    local_41 = '\0';
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
    lVar3 = lVar3 * 0x150 + lVar6;
    do {
      if ((*(int *)(lVar6 + 0x108) != -1) && (*(longlong *)(lVar6 + 0x18) != 0)) {
        if ((longlong)*(int *)(lVar6 + 0x30) != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0x28) + lVar5) == 0) goto LAB_14573be32;
            lVar5 = lVar5 + 8;
          } while ((longlong)*(int *)(lVar6 + 0x30) * 8 != lVar5);
        }
        pcVar1 = (code *)*param_2;
        plVar4 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar4 = param_2 + 4;
        }
        uVar2 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar2,lVar6 + 0x10,&local_41);
        if (local_41 != '\0') break;
      }
LAB_14573be32:
      lVar6 = lVar6 + 0x150;
    } while (lVar6 != lVar3);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573be84 FUN_14573be84 body=294 status=ok
// SIG undefined FUN_14573be84(void)

undefined4 * FUN_14573be84(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14573c03a(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_14573bfac(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)(local_40 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_14573c122(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573bfac FUN_14573bfac body=141 status=ok
// SIG undefined FUN_14573bfac(void)

undefined8 FUN_14573bfac(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar2 = FUN_140705240();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar3 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x14) = uVar3;
      FUN_148f11d70(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_14573bfd0;
    }
  }
  uVar3 = 0;
LAB_14573bfd0:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573c03a FUN_14573c03a body=231 status=ok
// SIG undefined FUN_14573c03a(void)

int * FUN_14573c03a(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 14573c122 FUN_14573c122 body=445 status=ok
// SIG undefined FUN_14573c122(void)

void FUN_14573c122(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 14573c2e0 FUN_14573c2e0 body=359 status=ok
// SIG undefined FUN_14573c2e0(void)

undefined1 FUN_14573c2e0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) &&
       ((*(byte *)((longlong)param_2 + 0x65) & 2) == 0)) &&
      (((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0 && ((*(byte *)(param_1 + 0x65) & 2) == 0)))) &&
     ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    if (*(char *)(param_1 + 0x178) == '\x03') {
      lVar4 = FUN_1447210f0(param_1);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
        lVar4 = FUN_140704886();
        if (lVar4 != 0) {
          pcVar5 = (char *)FUN_14573c448(lVar4,param_1,param_2);
          if ((pcVar5 != (char *)0x0) && (uVar1 = 1, *pcVar5 != '\0')) goto LAB_14573c385;
        }
      }
    }
    else {
      cVar2 = (**(code **)(*param_2 + 0x6c8))(param_2);
      if (cVar2 != '\0') {
        plVar6 = (longlong *)(param_1 + 0x28c0);
        local_30 = 0;
        FUN_14485c47a(&local_30,param_2);
        local_28 = local_30;
        iVar3 = FUN_14612029a(plVar6,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
        if (iVar3 != -1) {
          local_38 = 0;
          FUN_14485c47a(&local_38,param_2);
          local_28 = local_38;
          iVar3 = FUN_14612029a(plVar6,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
          if (iVar3 == -1) {
            lVar4 = 0;
          }
          else {
            lVar4 = (longlong)iVar3 * 0x14 + *plVar6;
          }
          uVar1 = *(undefined1 *)(lVar4 + 8);
          goto LAB_14573c385;
        }
      }
    }
  }
  uVar1 = 0;
LAB_14573c385:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573c448 FUN_14573c448 body=440 status=ok
// SIG undefined FUN_14573c448(void)

longlong FUN_14573c448(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)(param_1 + 0x150);
  local_40 = 0;
  FUN_14485c47a(&local_40);
  local_38 = local_40;
  iVar1 = FUN_14088c684(plVar2,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
  if (iVar1 != -1) {
    local_48 = 0;
    FUN_14485c47a(&local_48,param_2);
    local_38 = local_48;
    iVar1 = FUN_14088c684(plVar2,(uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48);
    if (iVar1 == -1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)iVar1 * 0x60 + *plVar2;
    }
    local_50 = 0;
    FUN_14485c47a(&local_50,param_3);
    local_38 = local_50;
    iVar1 = FUN_1411b8176(lVar3 + 8,(uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
    if (iVar1 != -1) {
      local_58 = 0;
      FUN_14485c47a(&local_58,param_2);
      local_38 = local_58;
      iVar1 = FUN_14088c684(plVar2,(uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58);
      if (iVar1 == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)iVar1 * 0x60 + *plVar2;
      }
      local_60 = 0;
      FUN_14485c47a(&local_60,param_3);
      local_38 = local_60;
      iVar1 = FUN_1411b8176((longlong *)(lVar3 + 8),
                            (uint)((ulonglong)local_60 >> 0x20) ^ (uint)local_60);
      if (iVar1 == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)iVar1 * 0x18 + *(longlong *)(lVar3 + 8);
      }
      lVar3 = lVar3 + 8;
      goto LAB_14573c5ca;
    }
  }
  lVar3 = 0;
LAB_14573c5ca:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573c602 FUN_14573c602 body=615 status=ok
// SIG undefined FUN_14573c602(void)

undefined4 FUN_14573c602(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar6 = 0;
  uVar5 = 0;
  if (((((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) &&
       ((*(byte *)((longlong)param_2 + 0x65) & 2) == 0)) &&
      ((uVar6 = uVar5, (*(uint *)(param_2 + 1) >> 0x1e & 1) == 0 &&
       ((*(byte *)(param_1 + 0x65) & 2) == 0)))) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    if (*(char *)(param_1 + 0x178) == '\x03') {
      lVar3 = FUN_1447210f0(param_1);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
        lVar3 = FUN_140704886();
        if (lVar3 != 0) {
          pcVar4 = (char *)FUN_14573c448(lVar3,param_1,param_2);
          if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\x01')) {
            uVar6 = *(undefined4 *)(pcVar4 + 4);
          }
        }
      }
    }
    else {
      cVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
      if (cVar1 != '\0') {
        plVar7 = (longlong *)(param_1 + 0x2968);
        local_128 = 0;
        FUN_14485c47a(&local_128,param_2);
        local_118 = local_128;
        iVar2 = FUN_141303122(plVar7,(uint)((ulonglong)local_128 >> 0x20) ^ (uint)local_128);
        if (iVar2 != -1) {
          local_b8 = 0;
          local_b0 = 0x8000000000;
          uStack_a8 = 0xffffffff;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_60 = 0xf;
          local_58 = 1;
          local_30 = 0;
          local_54 = 0;
          uStack_4c = 0;
          uStack_38 = 0;
          uStack_34 = uStack_34 & 0xff000000;
          local_40 = 0;
          uStack_3c = 0;
          local_130 = 0;
          FUN_14485c47a(&local_130,param_2);
          local_120 = local_130;
          iVar2 = FUN_141303122(plVar7,(uint)((ulonglong)local_130 >> 0x20) ^ (uint)local_130);
          lVar3 = 0;
          if (iVar2 != -1) {
            lVar3 = (longlong)iVar2 * 0x20 + *plVar7;
          }
          uVar6 = 0;
          if ((longlong)*(int *)(lVar3 + 0x10) != 0) {
            lVar8 = *(longlong *)(lVar3 + 8);
            lVar3 = (longlong)*(int *)(lVar3 + 0x10) * 0xf0;
            do {
              if (*(char *)(lVar8 + 0xe4) == '\x01') {
                FUN_1407b25f0(&local_118,lVar8);
                local_30 = *(undefined8 *)(lVar8 + 0xe8);
                local_40 = *(int *)(lVar8 + 0xd8);
                uStack_3c = *(undefined4 *)(lVar8 + 0xdc);
                uStack_38 = *(undefined4 *)(lVar8 + 0xe0);
                uStack_34 = *(uint *)(lVar8 + 0xe4);
                uVar6 = 0;
                if (local_40 != 0) {
                  uVar6 = uStack_3c;
                }
                break;
              }
              lVar8 = lVar8 + 0xf0;
              lVar3 = lVar3 + -0xf0;
            } while (lVar3 != 0);
          }
          FUN_140368b56(&local_118);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573c86a FUN_14573c86a body=111 status=ok
// SIG undefined FUN_14573c86a(void)

undefined8 * FUN_14573c86a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b9daf40;
  uVar1 = *param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1409e1656(param_1 + 2);
  param_1[2] = &PTR_FUN_14b9d8e90;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,uVar1);
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
  return param_1;
}



// FUNCTION 14573c8da FUN_14573c8da body=162 status=ok
// SIG undefined FUN_14573c8da(void)

void FUN_14573c8da(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14573c919;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14573c919;
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
LAB_14573c919:
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
                    /* WARNING: Could not recover jumptable at 0x00014573c978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14573c97c FUN_14573c97c body=618 status=ok
// SIG undefined FUN_14573c97c(void)

void FUN_14573c97c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 **local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((ulonglong)*(byte *)(param_1 + 0xa0) < 4) {
    lVar1 = *param_2;
    lVar8 = (ulonglong)*(byte *)(param_1 + 0xa0) * 0x130;
    local_a0[0] = 0;
    local_78 = 0;
    FUN_1456bb102(local_a0,param_2[1]);
    FUN_1447c3578(lVar8 + lVar1 + 0x7f0,local_70,local_a0);
    iVar4 = FUN_1405d5f74(local_70);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar7 = local_70;
      if (0x18 < local_58) {
        pppuVar7 = (undefined8 ***)local_70[0];
      }
      (*pcVar2)(pppuVar7);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_144a5ac3a(local_a0);
    iVar9 = 100;
    if (iVar4 < 100) {
      iVar9 = iVar4;
    }
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    uVar5 = rand();
    iVar6 = (int)(((float)(uVar5 & 0x7fff) / 32767.0) * 100.0);
    iVar4 = 99;
    if (iVar6 < 99) {
      iVar4 = iVar6;
    }
    cVar3 = *(char *)(param_1 + 0x724);
    if ((bool)*(char *)(param_1 + 0x724) != iVar4 < iVar9) {
      *(int *)(param_1 + 0x728) = (int)param_2[3];
      cVar3 = iVar4 < iVar9;
    }
    *(undefined4 *)(param_1 + 0x72c) = 0;
    *(undefined1 *)(param_1 + 0x725) = 1;
    *(char *)(param_1 + 0x724) = cVar3;
    local_a0[0] = 0;
    local_78 = 0;
    FUN_1456bb102(local_a0,param_2[1]);
    FUN_1447c3578(lVar8 + lVar1 + 0x828,local_70,local_a0);
    uVar10 = FUN_144a7ecd0(local_70);
    *(undefined4 *)(param_1 + 0x788) = uVar10;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar7 = local_70;
      if (0x18 < local_58) {
        pppuVar7 = (undefined8 ***)local_70[0];
      }
      (*pcVar2)(pppuVar7);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_144a5ac3a(local_a0);
    *(int *)(param_1 + 0x734) = (int)param_2[3];
    *(undefined2 *)(param_1 + 0x730) = 0x101;
    *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(param_1 + 0x788);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573cbe8 FUN_14573cbe8 body=4 status=ok
// SIG undefined FUN_14573cbe8(void)

undefined1 FUN_14573cbe8(longlong param_1)

{
  return *(undefined1 *)(param_1 + 1);
}



// FUNCTION 14573cbec FUN_14573cbec body=36 status=ok
// SIG undefined FUN_14573cbec(void)

void FUN_14573cbec(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  FUN_14573d240(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14573cc10 FUN_14573cc10 body=368 status=ok
// SIG undefined FUN_14573cc10(void)

ulonglong FUN_14573cc10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar3 == (longlong *)0x0) {
LAB_14573cca3:
    uVar11 = 0;
  }
  else {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_14573cca3;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar12 = iVar9 == iVar7;
      if (bVar12) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar4 = *(longlong *)(param_1 + 0x90);
    if ((((lVar4 == 0) || (*(longlong *)(lVar4 + 0x520) == 0)) ||
        (*(longlong *)(lVar4 + 0x4b0) == 0)) || (cVar8 = FUN_1449c239e(), cVar8 != '\x05')) {
      uVar11 = 0;
    }
    else {
      lVar5 = *param_2;
      local_98[0] = 0;
      local_70 = 0;
      FUN_1456bb102(local_98,param_2[1]);
      FUN_1447c3578(lVar5 + 0xe0,local_68,local_98);
      fVar13 = (float)FUN_144a7ecd0(local_68);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppuVar10 = local_68;
        if (0x18 < local_50) {
          ppppuVar10 = (undefined8 ****)local_68[0];
        }
        (*pcVar6)(ppppuVar10);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(local_68[0]);
      }
      FUN_144a5ac3a(local_98);
      fVar14 = (float)FUN_147e3ce50(lVar4 + 0x510);
      uVar11 = CONCAT71((int7)((ulonglong)(lVar4 + 0x510) >> 8),fVar13 < fVar14);
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
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 14573cd82 FUN_14573cd82 body=350 status=ok
// SIG undefined FUN_14573cd82(void)

undefined8 * FUN_14573cd82(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  FUN_14485c47a();
  uVar1 = FUN_1407725cc();
  lVar2 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
  if (lVar2 == 0) {
LAB_14573ced2:
    lVar3 = 0;
  }
  else {
    uVar1 = FUN_1407725cc();
    lVar3 = FUN_144718840(lVar2,uVar1);
    if (lVar2 == lVar3) goto LAB_14573ced2;
  }
  FUN_1407eff2c(param_1 + 1,lVar3);
  uVar1 = FUN_144a7fd54();
  lVar2 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_144a7fd54();
    lVar3 = FUN_144718840(lVar2,uVar1);
    if (lVar2 != lVar3) goto LAB_14573ce20;
  }
  lVar3 = 0;
LAB_14573ce20:
  FUN_14070e9ee(param_1 + 3,lVar3);
  param_1[5] = DAT_14cb7e160;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[9] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[7] = DAT_14c8464e0;
  param_1[8] = uVar1;
  uVar1 = DAT_14c8463a8;
  param_1[10] = DAT_14c8463a0;
  param_1[0xb] = uVar1;
  param_1[0xc] = DAT_14c8463b0;
  *(undefined4 *)(param_1 + 0xd) = 0x7f7fffff;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x14] = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  return param_1;
}



// FUNCTION 14573cee0 FUN_14573cee0 body=601 status=ok
// SIG undefined FUN_14573cee0(void)

bool FUN_14573cee0(longlong param_1,longlong *param_2,ulonglong *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  float fVar7;
  double dVar8;
  undefined1 auStack_198 [40];
  ulonglong local_170;
  double local_168;
  undefined4 local_148;
  undefined8 ***local_140 [3];
  ushort local_128;
  byte local_120;
  undefined1 local_118 [4];
  undefined8 local_114;
  undefined1 local_c8 [32];
  char local_a8;
  undefined1 local_98 [72];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x30);
    if ((cVar2 != '\0') && (plVar5 = *(longlong **)(param_1 + 0x38), plVar5 != (longlong *)0x0)) {
      if (*(code **)(*plVar5 + 0x10) == (code *)&LAB_144944cea) {
        plVar5 = plVar5 + 0xe1;
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))();
      }
      lVar4 = FUN_144a782da(plVar5,&DAT_14cb72618);
      if (lVar4 != 0) {
        local_118[0] = 1;
        local_114 = 0;
        local_170 = *param_3;
        FUN_145ef4c5c(local_98,&local_170,local_118,param_2[1]);
        FUN_14186d5a6(lVar4,local_118,local_98);
        if (local_a8 == '\x01') {
          FUN_1448052ee(local_c8,&local_170);
          lVar4 = FUN_1407726b2(lVar4);
          dVar8 = (double)FUN_144719204(SUB84((double)((float)local_168 -
                                                      (float)*(double *)(lVar4 + 8)),0),
                                        0x4076800000000000);
          dVar8 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                          (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
          lVar4 = *param_2;
          local_170 = local_170 & 0xffffffffffffff00;
          local_148 = 0;
          FUN_1456bb102(&local_170,param_2[1]);
          FUN_1447c3578(lVar4 + 0xa8,local_140,&local_170);
          fVar7 = (float)FUN_144a7ecd0(local_140);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_120 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppuVar6 = local_140;
            if (0x18 < local_128) {
              ppppuVar6 = (undefined8 ****)local_140[0];
            }
            (*pcVar1)(ppppuVar6);
          }
          if (0x18 < local_128) {
            FUN_1400020a8(local_140[0]);
          }
          FUN_144a5ac3a(&local_170);
          bVar3 = fVar7 * 0.5 <=
                  ABS((float)(double)(~-(ulonglong)(180.0 < dVar8) & (ulonglong)dVar8 |
                                     (ulonglong)(dVar8 + -360.0) & -(ulonglong)(180.0 < dVar8)));
          goto LAB_14573cfc4;
        }
      }
    }
  }
  bVar3 = false;
LAB_14573cfc4:
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573d13a FUN_14573d13a body=212 status=ok
// SIG undefined FUN_14573d13a(void)

float FUN_14573d13a(longlong *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if ((param_2 != 0) && ((longlong)(int)param_1[1] != 0)) {
    pcVar3 = (char *)*param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x118;
    do {
      if (*(int *)(pcVar3 + 4) == param_2) {
        if (pcVar3 == (char *)0x0) {
          return 0.0;
        }
        fVar5 = (float)FUN_143d65ca4(pcVar3);
        if (*pcVar3 != '\x01') {
          return fVar5;
        }
        if ((longlong)(int)param_1[1] == 0) {
          return fVar5;
        }
        lVar2 = *param_1 + 0x98;
        lVar4 = (longlong)(int)param_1[1] * 0x118;
        do {
          if ((((pcVar3 != (char *)(lVar2 + -0x98)) &&
               (*(int *)(lVar2 + -4) == *(int *)(pcVar3 + 0x94))) &&
              (cVar1 = FUN_140317cec(lVar2,pcVar3 + 0x98), cVar1 != '\0')) &&
             (*(int *)(lVar2 + -0x94) < *(int *)(pcVar3 + 4))) {
            fVar6 = (float)FUN_143d65ca4(pcVar3);
            fVar5 = fVar5 + fVar6;
          }
          lVar2 = lVar2 + 0x118;
          lVar4 = lVar4 + -0x118;
        } while (lVar4 != 0);
        return fVar5;
      }
      pcVar3 = pcVar3 + 0x118;
      lVar2 = lVar2 + -0x118;
    } while (lVar2 != 0);
  }
  return 0.0;
}



// FUNCTION 14573d20e FUN_14573d20e body=50 status=ok
// SIG undefined FUN_14573d20e(void)

undefined8 FUN_14573d20e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  FUN_14070dfbe(uVar1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14573d240 FUN_14573d240 body=731 status=ok
// SIG undefined FUN_14573d240(void)

void FUN_14573d240(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  int local_48;
  
  if (param_3 == '\0') {
    if (param_2 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xb8);
    lVar6 = (longlong)iVar1;
    if (lVar6 != 0) {
      piVar4 = *(int **)(param_1 + 0xb0);
      local_48 = 0;
      bVar9 = *piVar4 == param_2;
      iVar10 = 0;
      do {
        lVar14 = (longlong)iVar10;
        iVar8 = iVar10 + 1;
        if (iVar10 + 1 < iVar1) {
          iVar8 = iVar1;
        }
        piVar13 = piVar4 + lVar14 * 0x6e + 0x6e;
        iVar12 = iVar10;
        lVar15 = lVar14;
        do {
          lVar15 = lVar15 + 1;
          iVar11 = iVar8;
          if (lVar6 <= lVar15) break;
          iVar2 = *piVar13;
          iVar12 = iVar12 + 1;
          piVar13 = piVar13 + 0x6e;
          iVar11 = iVar12;
        } while (bVar9 == (iVar2 == param_2));
        iVar8 = iVar11 - iVar10;
        if (bVar9 == false) {
          if (local_48 != iVar10) {
            memmove(piVar4 + (longlong)local_48 * 0x6e,piVar4 + lVar14 * 0x6e,
                    (longlong)iVar8 * 0x1b8);
          }
          local_48 = local_48 + iVar8;
        }
        else {
          FUN_1404967ae(piVar4 + lVar14 * 0x6e,iVar8);
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar10 = iVar11;
      } while (lVar15 < lVar6);
      *(int *)(param_1 + 0xb8) = local_48;
    }
  }
  else {
    lVar6 = FUN_14070e69a(param_1);
    if (lVar6 == 0) {
      return;
    }
    if (*(char *)(lVar6 + 0x178) != '\x03') {
      return;
    }
    if (param_2 == 0) {
      return;
    }
    if (((*(longlong *)(param_1 + 0x68) != 0) &&
        (cVar5 = FUN_144729dda(param_1 + 0x60), cVar5 != '\0')) &&
       (plVar3 = *(longlong **)(param_1 + 0x68), plVar3 != (longlong *)0x0)) {
      plVar7 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3);
      if (plVar7 != (longlong *)0x0) {
        lVar6 = FUN_144a6c4d8();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          (**(code **)(*plVar7 + 0x578))(plVar7);
        }
      }
      (**(code **)(*plVar3 + 0x48))(plVar3);
    }
    iVar1 = *(int *)(param_1 + 0xa8);
    lVar6 = (longlong)iVar1;
    if (lVar6 != 0) {
      piVar4 = *(int **)(param_1 + 0xa0);
      local_48 = 0;
      bVar9 = *piVar4 == param_2;
      iVar10 = 0;
      do {
        lVar14 = (longlong)iVar10;
        iVar8 = iVar10 + 1;
        if (iVar10 + 1 < iVar1) {
          iVar8 = iVar1;
        }
        piVar13 = piVar4 + lVar14 * 0x6e + 0x6e;
        iVar12 = iVar10;
        lVar15 = lVar14;
        do {
          lVar15 = lVar15 + 1;
          iVar11 = iVar8;
          if (lVar6 <= lVar15) break;
          iVar2 = *piVar13;
          iVar12 = iVar12 + 1;
          piVar13 = piVar13 + 0x6e;
          iVar11 = iVar12;
        } while (bVar9 == (iVar2 == param_2));
        iVar8 = iVar11 - iVar10;
        if (bVar9 == false) {
          if (local_48 != iVar10) {
            memmove(piVar4 + (longlong)local_48 * 0x6e,piVar4 + lVar14 * 0x6e,
                    (longlong)iVar8 * 0x1b8);
          }
          local_48 = local_48 + iVar8;
        }
        else {
          FUN_1404967ae(piVar4 + lVar14 * 0x6e,iVar8);
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar10 = iVar11;
      } while (lVar15 < lVar6);
      *(int *)(param_1 + 0xa8) = local_48;
    }
  }
  FUN_1410b8cda(param_1);
  if (((*(longlong *)(param_1 + 0x68) != 0) &&
      (cVar5 = FUN_144729dda(param_1 + 0x60), cVar5 != '\0')) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    FUN_1409b52ac();
    return;
  }
  return;
}



// FUNCTION 14573d51c FUN_14573d51c body=415 status=ok
// SIG undefined FUN_14573d51c(void)

void FUN_14573d51c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14573d5e9:
    *puVar3 = &PTR_LAB_14b3e9b40;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b405e50;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_14886d6f2;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14573d5e9;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3e9b40;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b405e50;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14886d6f2;
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
                    /* WARNING: Could not recover jumptable at 0x00014573d6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14573d6bc FUN_14573d6bc body=85 status=ok
// SIG undefined FUN_14573d6bc(void)

void FUN_14573d6bc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x38);
  (**(code **)(*plVar1 + 0x2f0))(plVar1,param_2,1);
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00014573d70e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2e8))(plVar1,param_2,1,*(code **)(*plVar1 + 0x2e8));
  return;
}



// FUNCTION 14573d718 FUN_14573d718 body=307 status=ok
// SIG undefined FUN_14573d718(void)

longlong * FUN_14573d718(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 2,(longlong)*(int *)((longlong)param_2 + 0xc) * 2);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1404d5fcc(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x800000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar4 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_140ea945c(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar4 = (uint)param_2[1];
    }
    uVar3 = *param_2;
    uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar3;
    }
    (**(code **)(*param_1 + 0x170))(param_1,uVar5,(longlong)(int)uVar4 * 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14573d84c FUN_14573d84c body=128 status=ok
// SIG undefined FUN_14573d84c(void)

void FUN_14573d84c(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_78);
  }
  local_48 = 0;
  local_38 = &PTR_LAB_14b453330;
  local_58 = &DAT_143e8e73a;
  local_30 = param_1;
  FUN_1407461b0(1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573da8a FUN_14573da8a body=107 status=ok
// SIG undefined FUN_14573da8a(void)

void FUN_14573da8a(longlong param_1,uint param_2)

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
LAB_14573dad9:
      FUN_141525ade(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1407135ae(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14573dad9;
  FUN_14573dc2e(param_1);
  FUN_141525ade(param_1,param_2);
  return;
}



// FUNCTION 14573daf6 FUN_14573daf6 body=140 status=ok
// SIG undefined FUN_14573daf6(void)

longlong FUN_14573daf6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_140713886();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1407135ae(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14573db82 FUN_14573db82 body=170 status=ok
// SIG undefined FUN_14573db82(void)

undefined8 FUN_14573db82(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_38,"Atlases/AtlasMappingData.gbxam");
  FUN_1410f2562(&local_48);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1412cfe60(param_2,&local_48,iVar1 + 1 + (uint)(local_40 == 0));
  FUN_1401aebe8(param_2,local_38,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573dc2e FUN_14573dc2e body=339 status=ok
// SIG undefined FUN_14573dc2e(void)

void FUN_14573dc2e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x4c + (longlong)iVar4 * 0x50) * 4) =
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



// FUNCTION 14573dd82 FUN_14573dd82 body=401 status=ok
// SIG undefined FUN_14573dd82(void)

void FUN_14573dd82(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x138) <= param_2)) {
    if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x120);
    plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x128) * 2;
    do {
      plVar3 = (longlong *)plVar7[1];
      if (plVar3 == (longlong *)0x0) {
        plStack_80 = (longlong *)0x0;
LAB_14573defc:
        local_88 = 0;
        bVar9 = true;
        plVar8 = (longlong *)0x0;
      }
      else {
        local_88 = *plVar7;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) {
            plStack_80 = (longlong *)0x0;
            goto LAB_14573defc;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar9);
        plStack_80 = plVar3;
        if (plVar3 == (longlong *)0x0) goto LAB_14573defc;
        bVar9 = false;
        plVar8 = plVar3;
      }
      if (local_88 != 0) {
        FUN_14573df3c(param_1,param_2,&local_88,param_3);
      }
      if (!bVar9) {
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
    } while (plVar7 != plVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14573df3c FUN_14573df3c body=526 status=ok
// SIG undefined FUN_14573df3c(void)

void FUN_14573df3c(longlong param_1,uint param_2,longlong *param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [39];
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_3 = (longlong *)*param_3;
  AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 0x2d));
  *(int *)(param_3 + 0x2c) = (int)param_3[0x2c] + 1;
  plVar5 = *(longlong **)(param_1 + 0x118);
  if (plVar5 == (longlong *)0x0) goto LAB_14573e0aa;
  uVar4 = FUN_144a7b040();
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4);
  if (plVar5 == (longlong *)0x0) goto LAB_14573e0aa;
  uVar4 = FUN_144a7b040();
  plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
  if ((plVar5 == plVar6) || (plVar6 == (longlong *)0x0)) goto LAB_14573e0aa;
  lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if ((lVar7 == 0) ||
     (((*(int *)(param_1 + 0x138) <= (int)param_2 || (*(int *)(lVar7 + 0x40) <= (int)param_2)) ||
      ((int)param_3[1] <= (int)param_2)))) goto LAB_14573e0aa;
  lVar8 = *param_3;
  lVar10 = (ulonglong)param_2 * 0x58;
  lVar1 = lVar8 + lVar10;
  fVar2 = *(float *)(lVar8 + 0x38 + lVar10);
  iVar9 = *(int *)(lVar8 + 0x3c + lVar10);
  lVar7 = (ulonglong)param_2 * 0x88 + *(longlong *)(lVar7 + 0x38);
  if ((fVar2 != param_4) || (NAN(fVar2) || NAN(param_4))) {
    iVar9 = iVar9 + 1;
LAB_14573e034:
    *(float *)(lVar1 + 0x38) = param_4;
    *(int *)(lVar1 + 0x3c) = iVar9;
  }
  else if (iVar9 == 0) {
    iVar9 = 1;
    goto LAB_14573e034;
  }
  lVar8 = lVar7 + 0x30;
  cVar3 = FUN_14486ea84(lVar8);
  if (cVar3 == '\0') {
    if ((*(float *)(lVar1 + 0x40) != 1.0) || (NAN(*(float *)(lVar1 + 0x40)))) {
      iVar9 = *(int *)(lVar1 + 0x44) + 1;
    }
    else {
      if (*(int *)(lVar1 + 0x44) != 0) goto LAB_14573e07c;
      iVar9 = 1;
    }
    *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
LAB_14573e11d:
    *(int *)(lVar1 + 0x44) = iVar9;
  }
  else {
    lVar8 = FUN_140280ec4(lVar8);
    fVar2 = *(float *)(lVar8 + 0x3c);
    if ((fVar2 != *(float *)(lVar1 + 0x40)) || (NAN(fVar2) || NAN(*(float *)(lVar1 + 0x40)))) {
      iVar9 = *(int *)(lVar1 + 0x44) + 1;
LAB_14573e117:
      *(float *)(lVar1 + 0x40) = fVar2;
      goto LAB_14573e11d;
    }
    if (*(int *)(lVar1 + 0x44) == 0) {
      iVar9 = 1;
      goto LAB_14573e117;
    }
  }
LAB_14573e07c:
  local_41 = '\x04';
  cVar3 = FUN_14071466e(lVar7);
  if (cVar3 != '\0') {
    if (local_41 == *(char *)(lVar1 + 0x50)) {
      if (*(int *)(lVar1 + 0x54) != 0) goto LAB_14573e0aa;
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)(lVar1 + 0x54) + 1;
    }
    *(char *)(lVar1 + 0x50) = local_41;
    *(int *)(lVar1 + 0x54) = iVar9;
  }
LAB_14573e0aa:
  ReleaseSRWLockExclusive((PSRWLOCK)(param_3 + 0x2d));
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573e14c FUN_14573e14c body=102 status=ok
// SIG undefined FUN_14573e14c(void)

void FUN_14573e14c(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  FUN_14573e236();
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x30);
    if (cVar2 != '\0') {
      uVar1 = FUN_14479d2ce(param_1 + 0x30);
      uVar3 = 0;
      if (*(longlong *)(param_1 + 0x2e8) != DAT_14cbe2680) {
        uVar3 = 0x3f800000;
      }
      FUN_14573e1ce(uVar1,&DAT_14cbe2648,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14573e1b2 FUN_14573e1b2 body=28 status=ok
// SIG undefined FUN_14573e1b2(void)

void FUN_14573e1b2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x31c) = 0xffffffff00000000;
  return;
}



// FUNCTION 14573e1ce FUN_14573e1ce body=87 status=ok
// SIG undefined FUN_14573e1ce(void)

void FUN_14573e1ce(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (plVar4 == (longlong *)0x0) {
    FUN_14573e226(uVar3,*param_2);
    return;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  FUN_14573e226(uVar3,*param_2);
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
                    /* WARNING: Could not recover jumptable at 0x00014573e221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14573e226 FUN_14573e226 body=16 status=ok
// SIG undefined FUN_14573e226(void)

void FUN_14573e226(longlong param_1)

{
  FUN_14472da24(*(undefined8 *)(*(longlong *)(param_1 + 0x228) + 0x20));
  return;
}



// FUNCTION 14573e236 FUN_14573e236 body=471 status=ok
// SIG undefined FUN_14573e236(void)

void FUN_14573e236(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140715f5a();
  lVar1 = param_1[0x51];
  if (lVar1 != 0) {
    if (param_1[0x2c] == 0) {
      puVar3 = &DAT_14c9a1308;
    }
    else {
      puVar3 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdfe90);
    }
    uVar4 = FUN_144a7cdd6(puVar3,0);
    FUN_1446ddc76(&local_30,uVar4,1);
    param_1[0x5d] = local_30;
    if ((local_30 != 0) && ((longlong)*(int *)(lVar1 + 200) != 0)) {
      lVar8 = (longlong)*(int *)(lVar1 + 200) * 0xb0;
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0xc0) + uVar5) == local_30) {
          iVar7 = (int)(uVar5 >> 4) * -0x45d1745d;
          if (iVar7 != -1) {
            (**(code **)(*param_1 + 0x1a0))(param_1,iVar7,CONCAT71((int7)((ulonglong)lVar8 >> 8),1))
            ;
            if (param_1[0x2c] == 0) {
              puVar3 = &DAT_14c9a1308;
            }
            else {
              puVar3 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdfe98);
            }
            uVar4 = FUN_144a7cdd6(puVar3,0);
            FUN_1446ddc76(&local_30,uVar4,1);
            param_1[0x5e] = local_30;
            iVar6 = -1;
            if ((local_30 == 0) || ((longlong)*(int *)(lVar1 + 0x1b0) == 0)) goto LAB_14573e360;
            uVar5 = 0;
            goto LAB_14573e3bf;
          }
          break;
        }
        uVar5 = uVar5 + 0xb0;
      } while (lVar8 - uVar5 != 0);
    }
  }
  goto LAB_14573e382;
  while (uVar5 = uVar5 + 0xb0, (longlong)*(int *)(lVar1 + 0x1b0) * 0xb0 - uVar5 != 0) {
LAB_14573e3bf:
    if (*(longlong *)(*(longlong *)(lVar1 + 0x1a8) + uVar5) == local_30) {
      iVar6 = (int)(uVar5 >> 4) * -0x45d1745d;
      break;
    }
  }
LAB_14573e360:
  uVar2 = FUN_1412e481c(param_1);
  (**(code **)(*param_1 + 0x1b0))(param_1,uVar2,iVar7,iVar6);
  if (iVar6 != -1) {
    (**(code **)(*param_1 + 0x1a8))(param_1,iVar6,0);
  }
LAB_14573e382:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14573e40e FUN_14573e40e body=342 status=ok
// SIG undefined FUN_14573e40e(void)

void FUN_14573e40e(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x288);
  local_30 = param_2;
  local_2c = param_3;
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
    iVar3 = *(int *)(param_1 + 0x314);
    FUN_14071621b(*(undefined8 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x310));
    *(undefined4 *)(param_1 + 0x310) = 0;
    if ((iVar3 < 0) && (*(int *)(param_1 + 0x314) != 0)) {
      FUN_14574681c(param_1 + 0x308,0);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x40) == '\x01') {
      FUN_140716660(param_1,&local_30,&local_2c);
    }
    else {
      FUN_148eb0fbc(param_1,&local_30,&local_2c);
    }
    *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x310);
    if (*(int *)(param_1 + 0x310) < 1) {
      *(undefined4 *)(param_1 + 0x2fc) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x1a4) = 0xffffffff;
    }
    else {
      iVar3 = 0;
      if (param_4 != -1) {
        iVar3 = param_4;
      }
      *(int *)(param_1 + 0x2fc) = iVar3;
      *(int *)(lVar1 + 0x1a4) = iVar3;
      if ((param_4 != -1) && ((*(uint *)(param_1 + 0x8c) & 0x80) != 0)) {
        FUN_14573e566(param_1,param_1 + 0x2fc);
      }
    }
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573e566 FUN_14573e566 body=161 status=ok
// SIG undefined FUN_14573e566(void)

void FUN_14573e566(longlong *param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = (longlong)*param_2;
  if ((-1 < lVar2) && (*param_2 < (int)param_1[0x62])) {
    if ((*(char *)(param_1[0x61] + 8 + lVar2 * 0xb0) == '\0') &&
       (lVar3 = param_1[0x61] + lVar2 * 0xb0, *(char *)(lVar3 + 0x80) == '\0')) {
      cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,lVar2,0);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*param_1 + 0x1e8))(param_1);
        if ((cVar1 != '\0') && ((longlong)*(int *)(lVar3 + 0x90) != 0)) {
          lVar4 = *(longlong *)(lVar3 + 0x88);
          lVar2 = lVar4 + (longlong)*(int *)(lVar3 + 0x90) * 0x18;
          do {
            (**(code **)(*param_1 + 0x100))(param_1,lVar4,lVar4 + 8);
            lVar4 = lVar4 + 0x18;
          } while (lVar4 != lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 14573e60c FUN_14573e60c body=341 status=ok
// SIG undefined FUN_14573e60c(void)

undefined4 * FUN_14573e60c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_14023423e(param_1 + 4,param_2 + 4);
  FUN_14023423e(param_1 + 8,param_2 + 8);
  FUN_14023423e(param_1 + 0xc,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x14) = 0;
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_2 + 0x1c) = 0;
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_2 + 0x22) = 0;
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  *(undefined8 *)(param_2 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 14573e762 FUN_14573e762 body=892 status=ok
// SIG undefined FUN_14573e762(void)

undefined8 FUN_14573e762(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  wchar_t *_Str;
  size_t sVar7;
  ulonglong uVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_218 [44];
  uint local_1ec;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  char local_1d0;
  undefined1 local_1c8 [256];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1ec = param_2;
  if (((((int)param_2 < 0) || (*(int *)(param_1 + 0x310) <= (int)param_2)) ||
      (*(char *)(*(longlong *)(param_1 + 0x308) + 8 + (ulonglong)param_2 * 0xb0) != '\0')) ||
     (lVar2 = *(longlong *)(param_1 + 0x288), lVar2 == 0)) {
    uVar6 = 0;
    goto LAB_14573e9b7;
  }
  *(uint *)(param_1 + 0x2fc) = param_2;
  uVar6 = FUN_14479d2ce(param_1 + 0x30);
  local_1e8 = local_1c8;
  local_1d0 = '\0';
  local_1d8 = local_c8;
  local_1e0 = local_1e8;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"Event_SetActiveSubNavItemByIndex",&local_1e8);
  local_48 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_40 = 0;
    local_38 = 0;
  }
  else {
    sVar7 = wcslen(_Str);
    FUN_1446fe5a4(local_c8,_Str,sVar7 & 0xffffffff,1);
  }
  FUN_140c7f7d4(uVar6,local_40,&local_1ec);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_1d0 == '\x01') {
    FUN_1400020a8(local_1e8);
  }
  uVar12 = *(uint *)(param_1 + 0x324);
  if (*(char *)(param_1 + 0x329) == '\x01') {
    uVar13 = uVar12;
    if (uVar12 == 0xffffffff) {
      uVar13 = *(uint *)(param_1 + 0x2fc);
    }
    uVar8 = (ulonglong)uVar13;
    do {
      uVar4 = (longlong)((int)uVar8 + *(int *)(param_1 + 0x304) + -1) %
              (longlong)*(int *)(param_1 + 0x304);
      uVar8 = uVar4 & 0xffffffff;
      uVar13 = uVar12;
      if (uVar12 == 0xffffffff) {
        uVar13 = *(uint *)(param_1 + 0x2fc);
      }
      uVar5 = (uint)uVar4;
      bVar10 = 0;
      if (((int)uVar5 < 0) || (bVar10 = 0, uVar13 == uVar5)) break;
      if (*(int *)(param_1 + 0x310) <= (int)uVar5) goto LAB_14573ea32;
    } while ((*(char *)(*(longlong *)(param_1 + 0x308) + 8 + uVar8 * 0xb0) != '\0') ||
            (bVar10 = 4, *(char *)(*(longlong *)(param_1 + 0x308) + uVar8 * 0xb0 + 0x80) != '\0'));
  }
  else {
    if (uVar12 == 0xffffffff) {
      uVar12 = *(uint *)(param_1 + 0x2fc);
    }
    if (((int)uVar12 < 1) || (*(int *)(param_1 + 0x310) < (int)uVar12)) {
LAB_14573ea32:
      bVar10 = 0;
    }
    else {
      uVar8 = (ulonglong)uVar12 + 1;
      pcVar9 = (char *)(*(longlong *)(param_1 + 0x308) + (ulonglong)uVar12 * 0xb0 + -0x30);
      bVar10 = 0;
      do {
        if ((pcVar9[-0x78] == '\0') && (*pcVar9 != '\x01')) {
          bVar10 = 4;
          break;
        }
        uVar8 = uVar8 - 1;
        pcVar9 = pcVar9 + -0xb0;
      } while (1 < uVar8);
    }
  }
  bVar1 = *(byte *)(lVar2 + 0x230);
  *(byte *)(lVar2 + 0x230) = bVar1 & 0xfb | bVar10;
  uVar12 = *(uint *)(param_1 + 0x324);
  if (*(char *)(param_1 + 0x329) == '\x01') {
    uVar13 = uVar12;
    if (uVar12 == 0xffffffff) {
      uVar13 = *(uint *)(param_1 + 0x2fc);
    }
    uVar8 = (ulonglong)uVar13;
    do {
      uVar4 = (longlong)((int)uVar8 + 1) % (longlong)*(int *)(param_1 + 0x304);
      uVar8 = uVar4 & 0xffffffff;
      uVar13 = uVar12;
      if (uVar12 == 0xffffffff) {
        uVar13 = *(uint *)(param_1 + 0x2fc);
      }
      uVar5 = (uint)uVar4;
      bVar11 = 0;
      if (((int)uVar5 < 0) || (bVar11 = 0, uVar13 == uVar5)) break;
      if (*(int *)(param_1 + 0x310) <= (int)uVar5) goto LAB_14573ea8e;
    } while ((*(char *)(*(longlong *)(param_1 + 0x308) + 8 + uVar8 * 0xb0) != '\0') ||
            (bVar11 = 8, *(char *)(*(longlong *)(param_1 + 0x308) + uVar8 * 0xb0 + 0x80) != '\0'));
  }
  else {
    if (uVar12 == 0xffffffff) {
      uVar12 = *(uint *)(param_1 + 0x2fc);
    }
    if (-2 < (int)uVar12) {
      uVar12 = uVar12 + 1;
      if ((int)uVar12 < (int)*(uint *)(param_1 + 0x310)) {
        do {
          if ((*(char *)(*(longlong *)(param_1 + 0x308) + 8 + (ulonglong)uVar12 * 0xb0) == '\0') &&
             (*(char *)((ulonglong)uVar12 * 0xb0 + *(longlong *)(param_1 + 0x308) + 0x80) != '\x01')
             ) {
            bVar11 = 8;
            break;
          }
          uVar12 = uVar12 + 1;
          bVar11 = 0;
        } while (*(uint *)(param_1 + 0x310) != uVar12);
        goto LAB_14573e98c;
      }
    }
LAB_14573ea8e:
    bVar11 = 0;
  }
LAB_14573e98c:
  *(byte *)(lVar2 + 0x230) = bVar1 & 0xf3 | bVar10 | bVar11;
  puVar3 = *(ushort **)(lVar2 + 0x80);
  uVar6 = 1;
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
LAB_14573e9b7:
  if ((local_30 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14573eae0 FUN_14573eae0 body=9 status=ok
// SIG undefined FUN_14573eae0(void)

void FUN_14573eae0(longlong param_1)

{
  FUN_1481c5f5a(*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 14573eaea FUN_14573eaea body=226 status=ok
// SIG undefined FUN_14573eaea(void)

longlong * FUN_14573eaea(longlong *param_1)

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
  pcVar13 = FUN_1464707e0;
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



// FUNCTION 14573ebd2 FUN_14573ebd2 body=132 status=ok
// SIG undefined FUN_14573ebd2(void)

undefined1 * FUN_14573ebd2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WriteBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14573ebce;
}



// FUNCTION 14573ec56 FUN_14573ec56 body=116 status=ok
// SIG undefined FUN_14573ec56(void)

void FUN_14573ec56(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14573eccc(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147d591fc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14573eccc FUN_14573eccc body=132 status=ok
// SIG undefined FUN_14573eccc(void)

void FUN_14573eccc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14573ed50 FUN_14573ed50 body=112 status=ok
// SIG undefined FUN_14573ed50(void)

void FUN_14573ed50(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else if (param_2 < 9) {
    uVar2 = 8;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = (int)uVar2;
    FUN_14573edc0(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 14573edc0 FUN_14573edc0 body=142 status=ok
// SIG undefined FUN_14573edc0(void)

void FUN_14573edc0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 14573ee4e FUN_14573ee4e body=40 status=ok
// SIG undefined FUN_14573ee4e(void)

undefined8 FUN_14573ee4e(undefined8 param_1,int param_2)

{
  thunk_FUN_14071fe68();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14573ee76 FUN_14573ee76 body=345 status=ok
// SIG undefined FUN_14573ee76(void)

void FUN_14573ee76(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_3 = param_3 * 0.017453292;
  param_3 = (float)(longlong)
                   (param_3 * 0.15915494 +
                   *(float *)(&DAT_14a184448 + (ulonglong)(param_3 < 0.0) * 4)) * -6.2831855 +
            param_3;
  if (1.5707964 < param_3) {
    fVar2 = 3.1415927;
  }
  else {
    if (-1.5707964 <= param_3) {
      fVar2 = 1.0;
      goto LAB_14573eee4;
    }
    fVar2 = -3.1415927;
  }
  param_3 = fVar2 - param_3;
  fVar2 = -1.0;
LAB_14573eee4:
  fVar3 = param_3 * param_3;
  param_3 = (((((fVar3 * -2.3889859e-08 + 2.7525562e-06) * fVar3 + -0.00019840874) * fVar3 +
              0.008333331) * fVar3 + -0.16666667) * fVar3 + 1.0) * param_3;
  fVar2 = (((((fVar3 * -2.6051615e-07 + 2.4760495e-05) * fVar3 + -0.0013888378) * fVar3 +
            0.041666638) * fVar3 + -0.5) * fVar3 + 1.0) * fVar2;
  fVar3 = *param_1;
  fVar1 = param_1[1];
  *param_2 = fVar2 * fVar3 - fVar1 * param_3;
  param_2[1] = param_3 * fVar3 + fVar1 * fVar2;
  return;
}



// FUNCTION 14573efd0 FUN_14573efd0 body=245 status=ok
// SIG undefined FUN_14573efd0(void)

longlong * FUN_14573efd0(longlong param_1,longlong *param_2,undefined8 param_3)

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
  plVar4 = (longlong *)FUN_14001cc68(0x168,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b9a59d0;
  plVar1 = plVar4 + 2;
  FUN_14573f0c8(plVar1,param_1,param_3);
  plVar4[2] = (longlong)&PTR_FUN_14b9a4000;
  plVar4[0x2b] = param_1;
  *(undefined1 *)(plVar4 + 0x2c) = 0;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_14573f232(&local_40,plVar1);
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



// FUNCTION 14573f0c8 FUN_14573f0c8 body=132 status=ok
// SIG undefined FUN_14573f0c8(void)

undefined8 * FUN_14573f0c8(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140724c32();
  *param_1 = &PTR_FUN_14b9a3f60;
  param_1[0x24] = param_2;
  param_1[0x28] = 0;
  *(undefined2 *)((longlong)param_1 + 0x12d) = 0;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    lVar1 = FUN_14573f14c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14573f132;
  }
  lVar2 = 0;
LAB_14573f132:
  FUN_14485c47a(param_1 + 0x28,lVar2);
  return param_1;
}



// FUNCTION 14573f14c FUN_14573f14c body=228 status=ok
// SIG undefined FUN_14573f14c(void)

longlong FUN_14573f14c(void)

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
  if (DAT_14cba3a30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b60d2;
    local_38 = &LAB_148bc1603;
    local_40 = FUN_1465bab97;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxTrickScript_AICharge",&DAT_14cba3a30,&DAT_148bc1602);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba3a30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573f232 FUN_14573f232 body=162 status=ok
// SIG undefined FUN_14573f232(void)

void FUN_14573f232(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14573f271;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14573f271;
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
LAB_14573f271:
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
                    /* WARNING: Could not recover jumptable at 0x00014573f2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14573f2d4 FUN_14573f2d4 body=132 status=ok
// SIG undefined FUN_14573f2d4(void)

void FUN_14573f2d4(longlong param_1,int param_2)

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



// FUNCTION 14573f35a FUN_14573f35a body=367 status=ok
// SIG undefined FUN_14573f35a(void)

undefined4 * FUN_14573f35a(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14573f4ca(param_1,local_48);
  FUN_140725dcc(param_3,local_40);
  local_40[0x2a] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  if (local_40[2] != 0) {
    uVar4 = FUN_144a78877(uVar4);
  }
  uVar5 = local_40[3];
  if (local_40[5] != 0) {
    uVar5 = FUN_144a78877(uVar5);
  }
  uVar3 = local_40[6];
  if (local_40[8] != 0) {
    uVar3 = FUN_144a78877(uVar3);
  }
  uVar3 = uVar5 ^ uVar4 ^ uVar3;
  cVar2 = FUN_140725d2a(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_40[0x2b] = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x2a] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14573fa76(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573f4ca FUN_14573f4ca body=232 status=ok
// SIG undefined FUN_14573f4ca(void)

int * FUN_14573f4ca(longlong *param_1,int *param_2)

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
      FUN_14573f9e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xb0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xb0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xb0 + *param_1;
  return param_2;
}



// FUNCTION 14573f7b0 FUN_14573f7b0 body=393 status=ok
// SIG undefined FUN_14573f7b0(void)

void FUN_14573f7b0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401144ce(param_4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  lVar4 = FUN_140d7fcdc(&local_58,param_4);
  cVar3 = FUN_14069eaf4(param_2 + 0x10,lVar4);
  if (cVar3 == '\0') {
    FUN_140725f10(param_2);
    FUN_14485c47a(param_2 + 0x10,lVar4);
    if (lVar4 == 0) {
      FUN_145a9ef66(param_1,param_2);
    }
    else {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,2,0x10);
      local_40 = 2;
      *local_48 = &PTR_LAB_14a1c7440;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_48[2] = lVar5;
      *local_48 = &PTR_FUN_14b3fdcc0;
      local_48[3] = param_1;
      FUN_140725f8c(lVar4 + 0x2d0,&local_60,&local_48);
      FUN_1449db362(&local_48);
      *(undefined8 *)(param_2 + 8) = local_60;
      iVar1 = *(int *)(param_2 + 0x20);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_2 + 0x18);
        lVar5 = 0;
        do {
          FUN_14573f93a(param_1,*(undefined4 *)(lVar2 + lVar5),lVar4);
          lVar5 = lVar5 + 4;
        } while ((longlong)iVar1 * 4 != lVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573f93a FUN_14573f93a body=168 status=ok
// SIG undefined FUN_14573f93a(void)

void FUN_14573f93a(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
    lVar2 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x428);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 1000) + (longlong)iVar3 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 1000) + (longlong)iVar3 * 0x10) == param_2) {
          if (lVar2 == 0) {
            return;
          }
          if ((uint *)(lVar2 + 4) == (uint *)0x0) {
            return;
          }
          uVar1 = *(uint *)(lVar2 + 4);
          if ((int)uVar1 < 0) {
            return;
          }
          if (*(int *)(param_1 + 0x60) <= (int)uVar1) {
            return;
          }
          lVar2 = param_1 + 0x48;
          if (*(longlong *)(param_1 + 0x58) != 0) {
            lVar2 = *(longlong *)(param_1 + 0x58);
          }
          if ((*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) {
            return;
          }
          FUN_140725afe(param_1,(ulonglong)uVar1 * 0x300 + *(longlong *)(param_1 + 0x38));
          return;
        }
        iVar3 = *(int *)(lVar2 + 8);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14573f9e2 FUN_14573f9e2 body=146 status=ok
// SIG undefined FUN_14573f9e2(void)

void FUN_14573f9e2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14573fa76 FUN_14573fa76 body=551 status=ok
// SIG undefined FUN_14573fa76(void)

void FUN_14573fa76(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
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
  uVar4 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar4 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar4,4);
    if (0 < (int)uVar4) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar4 != uVar8);
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
      iVar11 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        lVar10 = (longlong)iVar11 * 0xb0;
        uVar4 = *(uint *)(lVar9 + lVar10);
        if (*(int *)(lVar9 + 8 + lVar10) != 0) {
          uVar4 = FUN_144a78877(uVar4);
        }
        lVar9 = lVar9 + lVar10;
        uVar8 = *(uint *)(lVar9 + 0xc);
        if (*(int *)(lVar9 + 0x14) != 0) {
          uVar8 = FUN_144a78877(uVar8);
        }
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (*(int *)(lVar9 + 0x20) != 0) {
          uVar3 = FUN_144a78877(uVar3);
        }
        uVar7 = (longlong)(int)(uVar8 ^ uVar4 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar9 + 0xac) = iVar6;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0xa8) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
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



// FUNCTION 14573fc9e FUN_14573fc9e body=99 status=ok
// SIG undefined FUN_14573fc9e(void)

void FUN_14573fc9e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1407280fc();
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa8);
  if (lVar2 != 0) {
    lVar1 = FUN_140e85284();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_14573fce5;
    }
  }
  lVar2 = 0;
LAB_14573fce5:
  *(longlong *)(param_1 + 0x5a8) = lVar2;
  return;
}



// FUNCTION 14573fd02 FUN_14573fd02 body=138 status=ok
// SIG undefined FUN_14573fd02(void)

void FUN_14573fd02(undefined8 *param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_14573fdc6(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x60);
  *param_1 = *(undefined8 *)(param_2 + 0x58);
  FUN_144a7bb84(param_1 + 2,param_2 + 0x68);
  FUN_144a82394(param_1 + 5,param_2 + 0x80);
  param_1[6] = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x90);
  FUN_144a7bb84(param_1 + 8,param_2 + 0x98);
  FUN_144a82394(param_1 + 0xb,param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 8);
  return;
}



// FUNCTION 14573fd8c FUN_14573fd8c body=57 status=ok
// SIG undefined FUN_14573fd8c(void)

void FUN_14573fd8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55ba8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55ba8 = FUN_140002ddd(FUN_1464b4a98,uVar1,L"CharacterSoundDef");
  }
  return;
}



// FUNCTION 14573fdc6 FUN_14573fdc6 body=118 status=ok
// SIG undefined FUN_14573fdc6(void)

void FUN_14573fdc6(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_74 = 0;
  local_44 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_14573fe3e(0,local_78);
  FUN_14072dc1c(local_78);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573fe3e FUN_14573fe3e body=106 status=ok
// SIG undefined FUN_14573fe3e(void)

undefined8 * FUN_14573fe3e(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_14072dc6e(param_1 + 2,param_2 + 2);
  FUN_1407ec87c(param_1 + 5,param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  FUN_14072dc6e(param_1 + 8,param_2 + 8);
  FUN_1407ec87c(param_1 + 0xb,param_2 + 0xb);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 14573fea8 FUN_14573fea8 body=130 status=ok
// SIG undefined FUN_14573fea8(void)

LPCRITICAL_SECTION FUN_14573fea8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  param_1[1].LockSemaphore = (HANDLE)0x0;
  param_1[1].SpinCount = 0;
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x4000;
  param_1[2].LockCount = 0;
  param_1[2].OwningThread = &DAT_14c7585e0;
  param_1[2].LockSemaphore = (HANDLE)0x0;
  param_1[2].SpinCount = 0x400;
  *(undefined4 *)&param_1[3].DebugInfo = 0;
  *(undefined **)&param_1[3].LockCount = &DAT_14c7585e0;
  param_1[3].OwningThread = (HANDLE)0x0;
  param_1[3].LockSemaphore = (HANDLE)0x0;
  param_1[3].SpinCount = 0;
  param_1[4].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[4].LockCount = 0;
  param_1[4].RecursionCount = 0;
  param_1[4].OwningThread = (HANDLE)0x0;
  *(undefined4 *)&param_1[4].LockSemaphore = 1;
  return param_1;
}



// FUNCTION 14573ff2a FUN_14573ff2a body=146 status=ok
// SIG undefined FUN_14573ff2a(void)

void FUN_14573ff2a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14573ffbe FUN_14573ffbe body=132 status=ok
// SIG undefined FUN_14573ffbe(void)

void FUN_14573ffbe(longlong param_1,int param_2)

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



// FUNCTION 145740042 FUN_145740042 body=135 status=ok
// SIG undefined FUN_145740042(void)

void FUN_145740042(uint *param_1,uint param_2)

{
  void *_Src;
  uint uVar1;
  void *_Dst;
  
  if (param_2 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    _Dst = (void *)FUN_14001cc68((ulonglong)param_2 * 2,0x10);
    if ((ulonglong)param_1[1] != 0) {
      _Src = *(void **)(param_1 + 4);
      memcpy(_Dst,_Src,(ulonglong)param_1[1] * 2);
      if (_Src != (void *)0x0) {
        FUN_1400020a8(_Src);
      }
    }
    uVar1 = *param_1;
    if (param_2 <= *param_1) {
      uVar1 = param_2;
    }
    *param_1 = uVar1;
    param_1[1] = param_2;
    *(void **)(param_1 + 4) = _Dst;
  }
  return;
}



// FUNCTION 1457400ca FUN_1457400ca body=240 status=ok
// SIG undefined FUN_1457400ca(void)

void FUN_1457400ca(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar3 = FUN_14001cc68((ulonglong)param_2 * 4,0x10);
    lVar4 = FUN_14001cc68((ulonglong)param_2 * 2,0x10);
    uVar6 = (ulonglong)*(uint *)(param_1 + 8);
    if (uVar6 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar5 = *(longlong *)(param_1 + 0x20);
      uVar7 = 0;
      do {
        *(undefined4 *)(lVar3 + uVar7 * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
        *(undefined2 *)(lVar4 + uVar7 * 2) = *(undefined2 *)(lVar5 + uVar7 * 2);
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
      if (lVar2 != 0) {
        FUN_1400020a8(lVar2);
        lVar5 = *(longlong *)(param_1 + 0x20);
      }
      if (lVar5 != 0) {
        FUN_1400020a8();
      }
    }
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < param_2) {
      memset((void *)(lVar4 + (ulonglong)uVar1 * 2),(int)CONCAT71((int7)(uVar6 >> 8),0xff),
             (ulonglong)(~uVar1 + param_2) * 2 + 2);
    }
    *(uint *)(param_1 + 8) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar3;
    *(longlong *)(param_1 + 0x20) = lVar4;
  }
  return;
}



// FUNCTION 1457401ba FUN_1457401ba body=335 status=ok
// SIG undefined FUN_1457401ba(void)

undefined4 * FUN_1457401ba(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145740370(local_40);
  puVar1 = (undefined4 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  *(undefined8 *)(local_38 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *local_38 = *puVar1;
  local_38[1] = uVar4;
  local_38[2] = uVar5;
  local_38[3] = uVar6;
  local_38[8] = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)(local_38 + 6) = *puVar2;
  local_38[9] = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = FUN_14072e304(local_38);
  cVar7 = FUN_14574030a(uVar8,local_38,&local_44);
  uVar4 = local_44;
  if (cVar7 == '\0') {
    uVar9 = DAT_14ca712e8 - DAT_14ca71314;
    if (uVar9 < 4) {
      iVar12 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= DAT_14ca71328)) {
      uVar8 = DAT_14ca71328 - 1U & uVar8;
      local_38[10] = uVar8;
      puVar10 = DAT_14ca71320;
      if (DAT_14ca71320 == (undefined *)0x0) {
        puVar10 = &DAT_14ca71318;
      }
      local_38[9] = *(undefined4 *)
                     (puVar10 + ((longlong)DAT_14ca71328 - 1U & (longlong)(int)uVar8) * 4);
      puVar10 = DAT_14ca71320;
      if (DAT_14ca71320 == (undefined *)0x0) {
        puVar10 = &DAT_14ca71318;
      }
      *(undefined4 *)(puVar10 + ((longlong)DAT_14ca71328 - 1U & (longlong)(int)uVar8) * 4) =
           local_44;
    }
    else {
      DAT_14ca71328 = iVar12;
      FUN_14072ef66();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574030a FUN_14574030a body=102 status=ok
// SIG undefined FUN_14574030a(void)

undefined8 FUN_14574030a(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  if ((DAT_14ca712e8 - DAT_14ca71314 != 1) &&
     (iVar11 = FUN_14072e1c2(), lVar10 = DAT_14ca712e0, iVar11 != -1)) {
    lVar12 = (longlong)iVar11 * 0x2c;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    *(undefined4 *)(DAT_14ca712e0 + 0x20 + lVar12) = param_2[8];
    puVar1 = (undefined4 *)(lVar10 + 0x10 + lVar12);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar10 + lVar12);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147347b1c(*param_3);
    *param_3 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 145740370 FUN_145740370 body=279 status=ok
// SIG undefined FUN_145740370(void)

int * FUN_145740370(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca71310;
  iVar3 = DAT_14ca712e8;
  if (DAT_14ca71314 == 0) {
    iVar2 = DAT_14ca712e8 + 1;
    bVar7 = DAT_14ca712ec == DAT_14ca712e8;
    DAT_14ca712e8 = iVar2;
    if (bVar7) {
      FUN_1458dc740(&DAT_14ca712e0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14ca712f0,1);
    puVar4 = DAT_14ca71300;
    if (DAT_14ca71300 == (undefined *)0x0) {
      puVar4 = &DAT_14ca712f0;
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
    lVar6 = (longlong)DAT_14ca71310;
    DAT_14ca71310 = *(int *)(DAT_14ca712e0 + 4 + lVar6 * 0x2c);
    DAT_14ca71314 = DAT_14ca71314 + -1;
    if (DAT_14ca71314 != 0) {
      *(undefined4 *)(DAT_14ca712e0 + (longlong)DAT_14ca71310 * 0x2c) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14ca712f0;
  if (DAT_14ca71300 != (undefined *)0x0) {
    puVar4 = DAT_14ca71300;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x2c + DAT_14ca712e0;
  return param_1;
}



// FUNCTION 145740487 FUN_145740487 body=433 status=ok
// SIG undefined FUN_145740487(void)

void FUN_145740487(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined6 uStack_70;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined8 uStack_62;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6a = 0;
  uStack_68 = 0;
  uStack_62 = 0;
  FUN_1457406cc((longlong)param_1 + 6,*(undefined1 *)((longlong)param_1 + 5),*param_1,&local_78);
  iVar4 = uStack_62._2_4_;
  fVar12 = 1.0;
  if (uStack_62._7_1_ == '\x01') {
    fVar12 = (float)FUN_14574063a();
  }
  iVar3 = (int)((float)iVar4 * fVar12);
  iVar4 = iVar3;
  if (iVar3 < (int)local_58) {
    iVar4 = (int)local_58;
  }
  if ((int)local_58 < 1) {
    iVar4 = iVar3;
  }
  if (1.0 <= fVar12) {
    iVar4 = iVar3;
  }
  iVar3 = local_58._4_4_;
  if (iVar4 < local_58._4_4_) {
    iVar3 = iVar4;
  }
  if (local_58._4_4_ < 1) {
    iVar3 = iVar4;
  }
  if (fVar12 <= 1.0) {
    iVar3 = iVar4;
  }
  if (*(char *)((longlong)param_1 + 5) == '\0') {
    lVar9 = 0;
  }
  else {
    uVar11 = 0;
    lVar9 = 0;
    do {
      lVar6 = FUN_14072ec41(*param_1,*param_1,0,*(undefined1 *)((longlong)param_1 + uVar11 + 6));
      lVar9 = lVar9 + lVar6;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(byte *)((longlong)param_1 + 5));
  }
  uVar11 = 1;
  do {
    uVar1 = (ulonglong)(longlong)(iVar3 << 0x14) / (uVar11 * lVar9);
    uVar7 = uVar1 & 0xffffffff;
    if ((uint)uVar1 < 2) {
      uVar7 = 1;
    }
    uVar8 = (int)ROUND(SQRT((float)uVar7) + SQRT((float)uVar7) + -0.5) >> 1;
    iVar4 = FUN_14574067e();
    bVar2 = iVar4 < (int)uVar8 && 0 < iVar4;
    uVar10 = (int)uVar11 + (uint)bVar2;
    uVar11 = (ulonglong)uVar10;
  } while (bVar2);
  uVar5 = *param_1;
  uVar11 = (ulonglong)(uVar5 * uVar8);
  if (DAT_14ca84e40 < uVar5 * uVar8) {
    uVar8 = DAT_14ca84e40 / uVar5;
    uVar11 = (ulonglong)DAT_14ca84e40 % (ulonglong)uVar5;
  }
  uVar5 = 0xb5;
  if ((int)uVar8 < 0xb5) {
    uVar5 = uVar8;
  }
  *param_2 = uVar5;
  param_2[1] = uVar10;
  *(undefined1 *)(param_2 + 2) = uStack_62._6_1_;
  if (local_78 != 0) {
    FUN_1400020a8(local_78,uVar11);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574063a FUN_14574063a body=68 status=ok
// SIG undefined FUN_14574063a(void)

undefined4 FUN_14574063a(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14cb0fd58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(undefined4 *)(lVar1 + uVar3 * 4);
}



// FUNCTION 14574067e FUN_14574067e body=77 status=ok
// SIG undefined FUN_14574067e(void)

int FUN_14574067e(void)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  
  lVar2 = DAT_14cb0fd88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  iVar1 = *(int *)(lVar2 + uVar4 * 4);
  iVar5 = 0;
  if (0 < iVar1) {
    iVar5 = iVar1;
  }
  return iVar5;
}



// FUNCTION 1457406cc FUN_1457406cc body=95 status=ok
// SIG undefined FUN_1457406cc(void)

void FUN_1457406cc(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_140dfbee4();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  FUN_14072ecc4(lVar2,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14574072c FUN_14574072c body=84 status=ok
// SIG undefined FUN_14574072c(void)

undefined8 * FUN_14574072c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145740780(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 145740780 FUN_145740780 body=90 status=ok
// SIG undefined FUN_145740780(void)

void FUN_145740780(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457407da FUN_1457407da body=82 status=ok
// SIG undefined FUN_1457407da(void)

undefined8 * FUN_1457407da(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  lVar1 = *param_2;
  uVar3 = param_2[1] - lVar1;
  iVar2 = (int)(uVar3 >> 8);
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144723f1e(param_1,uVar3 >> 8 & 0xffffffff);
    FUN_144723ff3(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 14574082c FUN_14574082c body=57 status=ok
// SIG undefined FUN_14574082c(void)

void FUN_14574082c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb614e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb614e8 = FUN_14171c317(FUN_1464f2d66,uVar1,L"EGbxMovingPlatformRelevantState");
  }
  return;
}



// FUNCTION 14574087a FUN_14574087a body=215 status=ok
// SIG undefined FUN_14574087a(void)

int * FUN_14574087a(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  int *piStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar2 = FUN_14073624c(param_3);
  iVar3 = FUN_140735f50(plVar1,uVar2,param_3);
  if (((iVar3 == -1) || (lVar4 = (longlong)iVar3 * 0x24 + *plVar1, lVar4 == 0)) ||
     (iVar3 = *(int *)(lVar4 + 0x18), *param_2 = iVar3, iVar3 == -1)) {
    local_78 = param_3[2];
    local_88 = (undefined8 *)*param_3;
    piStack_80 = (int *)param_3[1];
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    uStack_57 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    iVar3 = FUN_1457409e2(param_1 + 0x68,&local_88);
    *param_2 = iVar3;
    local_88 = param_3;
    piStack_80 = param_2;
    FUN_145740e30(plVar1,local_34,&local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145740952 FUN_145740952 body=144 status=ok
// SIG undefined FUN_145740952(void)

ulonglong FUN_145740952(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar8;
  uint uVar9;
  undefined7 uVar7;
  
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x40 + (longlong)param_2 * 0x48);
  uVar7 = (undefined7)((ulonglong)*(longlong *)(param_1 + 0x68) >> 8);
  uVar5 = CONCAT71(uVar7,bVar2);
  if ((param_3 != '\x01') && (uVar5 = CONCAT71(uVar7,1), ((bVar2 & 2) == 0 & bVar2) == 0)) {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar6 = *(longlong *)(param_1 + 0xa0);
    uVar9 = 0;
    uVar8 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar8 >> 1) + uVar9;
        if (*(int *)(lVar6 + (ulonglong)uVar1 * 0x30) < param_2) {
          uVar9 = uVar1 + (uVar8 & 1);
        }
        bVar4 = 1 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar4);
    }
    if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar6 + (ulonglong)uVar9 * 0x30) <= param_2)) {
      lVar6 = lVar6 + (ulonglong)uVar9 * 0x30;
      uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),lVar6 != -8);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1457409e2 FUN_1457409e2 body=149 status=ok
// SIG undefined FUN_1457409e2(void)

undefined4 FUN_1457409e2(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145740b52(param_1,local_28);
  local_20[2] = param_2[2];
  uVar5 = param_2[1];
  *local_20 = *param_2;
  local_20[1] = uVar5;
  local_20[5] = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(local_20 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)local_20 + 0x1c) = uVar2;
  *(undefined4 *)(local_20 + 4) = uVar3;
  *(undefined4 *)((longlong)local_20 + 0x24) = uVar4;
  local_20[6] = param_2[6];
  lVar1 = param_2[7];
  local_20[7] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(local_20 + 8) = *(undefined1 *)(param_2 + 8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145740a78 FUN_145740a78 body=216 status=ok
// SIG undefined FUN_145740a78(void)

undefined8 * FUN_145740a78(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_14485c47a(param_2,*param_1);
  param_2[1] = *(undefined8 *)((longlong)param_1 + 0x2c);
  lVar1 = param_1[1];
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_30 = 0;
  FUN_14485c47a(&local_30,lVar1);
  param_2[2] = local_30;
  param_2[3] = param_1[0x2c];
  lVar1 = param_1[0x2d];
  if (DAT_14c950c29 == 1) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_1[0x2d];
    }
  }
  param_2[4] = lVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145740b52 FUN_145740b52 body=231 status=ok
// SIG undefined FUN_145740b52(void)

int * FUN_145740b52(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 145740c3a FUN_145740c3a body=238 status=ok
// SIG undefined FUN_145740c3a(void)

undefined4 *
FUN_145740c3a(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  if (*param_3 != 0) {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_50 = local_38;
  }
  lVar1 = *param_4;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else {
    local_48 = 0;
    if (lVar1 == 0) goto LAB_145740cd2;
  }
  local_38 = 0;
  FUN_14485c47a(&local_38,lVar1);
  local_48 = local_38;
LAB_145740cd2:
  local_40 = *param_5;
  FUN_14574087a(param_1,param_2 + 2);
  *param_2 = 0xffffffff;
  param_2[1] = *(undefined4 *)(param_1 + 0xc0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145740d2a FUN_145740d2a body=261 status=ok
// SIG undefined FUN_145740d2a(void)

void FUN_145740d2a(longlong param_1,int param_2,char param_3,undefined8 *param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = (longlong)param_2 * 0x48 + *(longlong *)(param_1 + 0x68);
  local_1c = param_2;
  if (param_3 == '\x01') {
    *(undefined8 *)(lVar3 + 0x18) = *param_4;
    *(undefined8 *)(lVar3 + 0x20) = param_4[1];
    *(undefined8 *)(lVar3 + 0x28) = param_4[2];
    *(undefined8 *)(lVar3 + 0x30) = param_4[3];
    lVar2 = param_4[4];
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = param_4[4];
      }
    }
    *(longlong *)(lVar3 + 0x38) = lVar2;
    *(byte *)(lVar3 + 0x40) = *(byte *)(lVar3 + 0x40) | 3;
  }
  else {
    bVar1 = *(byte *)(lVar3 + 0x40);
    if ((bVar1 & 1) == 0) {
      *(undefined8 *)(lVar3 + 0x18) = *param_4;
      *(undefined8 *)(lVar3 + 0x20) = param_4[1];
      *(undefined8 *)(lVar3 + 0x28) = param_4[2];
      *(undefined8 *)(lVar3 + 0x30) = param_4[3];
      lVar2 = param_4[4];
      if (DAT_14c950c29 == '\x01') {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = param_4[4];
          bVar1 = *(byte *)(lVar3 + 0x40);
        }
      }
      *(longlong *)(lVar3 + 0x38) = lVar2;
      *(byte *)(lVar3 + 0x40) = bVar1 | 1;
    }
    else {
      FUN_1476afd7a(param_1 + 0xa0,&local_1c,param_4);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145740e30 FUN_145740e30 body=302 status=ok
// SIG undefined FUN_145740e30(void)

undefined4 * FUN_145740e30(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145740fc6(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[6] = *puVar2;
  local_40[7] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_14073624c(local_40);
  cVar6 = FUN_145740f60(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[8] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[7] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1457410ae(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145740f60 FUN_145740f60 body=102 status=ok
// SIG undefined FUN_145740f60(void)

undefined8 FUN_145740f60(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar8 = FUN_140735f50(), iVar8 != -1)) {
    lVar2 = *param_1;
    lVar9 = (longlong)iVar8;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar3 = *(undefined8 *)(param_3 + 4);
    *(undefined4 *)(lVar2 + 0x18 + lVar9 * 0x24) = param_3[6];
    *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x24) = uVar3;
    puVar1 = (undefined4 *)(lVar2 + lVar9 * 0x24);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_1461aa2f2(param_1,*param_4);
    *param_4 = iVar8;
    return 1;
  }
  return 0;
}



// FUNCTION 145740fc6 FUN_145740fc6 body=231 status=ok
// SIG undefined FUN_145740fc6(void)

int * FUN_145740fc6(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x24) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 1457410ae FUN_1457410ae body=447 status=ok
// SIG undefined FUN_1457410ae(void)

void FUN_1457410ae(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x24;
        iVar6 = FUN_14073624c(lVar2);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x20) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x1c) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14574126e FUN_14574126e body=254 status=ok
// SIG undefined FUN_14574126e(void)

undefined8
FUN_14574126e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3f7600;
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
  *local_48 = &PTR_FUN_14b41eea0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140740a5e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145741374 FUN_145741374 body=132 status=ok
// SIG undefined FUN_145741374(void)

void FUN_145741374(longlong param_1,int param_2)

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



// FUNCTION 1457413fa FUN_1457413fa body=101 status=ok
// SIG undefined FUN_1457413fa(void)

void FUN_1457413fa(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_2 + 9) == '\x01') {
    lVar1 = FUN_1411902e8();
    if (lVar1 != 0) {
      lVar2 = FUN_14479d2ce(param_2 + 0x70);
      if (lVar2 == 0) {
        lVar2 = FUN_14479d2ce(param_2 + 0x58);
      }
      FUN_1486386d6(lVar1,lVar2,param_3,*(undefined4 *)(param_2 + 0x24));
      return;
    }
  }
  return;
}



// FUNCTION 145741460 FUN_145741460 body=98 status=ok
// SIG undefined FUN_145741460(void)

void FUN_145741460(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457414c2 FUN_1457414c2 body=117 status=ok
// SIG undefined FUN_1457414c2(void)

void FUN_1457414c2(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145741538 FUN_145741538 body=98 status=ok
// SIG undefined FUN_145741538(void)

void FUN_145741538(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14574159a FUN_14574159a body=109 status=ok
// SIG undefined FUN_14574159a(void)

void FUN_14574159a(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar3;
      uVar2 = *(undefined8 *)(piVar3 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1474d59d0(param_1,iVar1,0);
        FUN_1474d5a32(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145741608 FUN_145741608 body=94 status=ok
// SIG undefined FUN_145741608(void)

void FUN_145741608(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1438f268a;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457416d2 FUN_1457416d2 body=40 status=ok
// SIG undefined FUN_1457416d2(void)

undefined8 FUN_1457416d2(undefined8 param_1,int param_2)

{
  FUN_1457416fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457416fa FUN_1457416fa body=133 status=ok
// SIG undefined FUN_1457416fa(void)

void FUN_1457416fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8f0380;
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x96) = 0;
  if (param_1[0x95] != 0) {
    FUN_1400020a8();
  }
  FUN_140fb3a5c(param_1 + 0x8d);
  if ((longlong *)param_1[0x8b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x8b] + 0x10))();
  }
  FUN_14075380c(param_1);
  return;
}



// FUNCTION 145741780 FUN_145741780 body=40 status=ok
// SIG undefined FUN_145741780(void)

undefined8 FUN_145741780(undefined8 param_1,int param_2)

{
  FUN_1457417a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457417a8 FUN_1457417a8 body=573 status=ok
// SIG undefined FUN_1457417a8(void)

void FUN_1457417a8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b101b10;
  param_1[0x72] = &PTR_FUN_14b102150;
  param_1[0x73] = &PTR_FUN_14b1021c0;
  param_1[0x74] = &PTR_FUN_14b1021f0;
  param_1[0x75] = &PTR_FUN_14b102220;
  param_1[0x76] = &PTR_FUN_14b102290;
  param_1[0x77] = &PTR_FUN_14b1022c0;
  param_1[0x78] = &PTR_FUN_14b102300;
  param_1[0x79] = &PTR_FUN_14b102318;
  param_1[0x7a] = &PTR_FUN_14b102330;
  param_1[0x7b] = &PTR_FUN_14b102380;
  param_1[0x7c] = &PTR_FUN_14b1023a0;
  param_1[0x7d] = &PTR_FUN_14b102440;
  if (param_1[0x269] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x25b],*(undefined4 *)(param_1 + 0x25c));
  if (param_1[0x25b] != 0) {
    FUN_1400020a8();
  }
  FUN_1457419e5(param_1[0x259],*(undefined4 *)(param_1 + 0x25a));
  if (param_1[0x259] != 0) {
    FUN_1400020a8();
  }
  if (param_1[599] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x251];
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
  FUN_145741a14(param_1 + 0x24c,1);
  FUN_14028f4a8(param_1 + 0x231);
  FUN_140754d00(param_1 + 0x105);
  FUN_140358fe5(param_1[0x102],*(undefined4 *)(param_1 + 0x103));
  if (param_1[0x102] != 0) {
    FUN_1400020a8();
  }
  param_1[0xbe] = &PTR_FUN_14b105b00;
  if (param_1[0xc6] != 0) {
    FUN_140872868(param_1 + 0xbe);
  }
  FUN_1403d7c6c(param_1 + 0xbe);
  FUN_1403d7bbc(param_1 + 0xae);
  FUN_1403d7b38(param_1 + 0xa0);
  FUN_1403d7d90(param_1 + 0x7e);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1457419e5 FUN_1457419e5 body=47 status=ok
// SIG undefined FUN_1457419e5(void)

void FUN_1457419e5(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      FUN_14051f4c4(param_1);
      param_1 = param_1 + 0xe8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145741a14 FUN_145741a14 body=128 status=ok
// SIG undefined FUN_145741a14(void)

void FUN_145741a14(longlong *param_1)

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



// FUNCTION 145741a94 FUN_145741a94 body=117 status=ok
// SIG undefined FUN_145741a94(void)

void FUN_145741a94(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1446dd912(param_1,iVar1);
    }
    FUN_1446dd7a8((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140c05acc(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145741b0a FUN_145741b0a body=150 status=ok
// SIG undefined FUN_145741b0a(void)

void FUN_145741b0a(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_140a55250(param_1 + 0x18,iVar1);
  }
  lVar4 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8) = uVar2;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8);
  puVar3 = (undefined8 *)(lVar4 + 0x40);
  if (*(char *)((longlong)param_2 + 0x54) != '\0') {
    puVar3 = param_2 + 10;
  }
  *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)puVar3;
  FUN_140a54f44(lVar4,param_1,param_2);
  return;
}



// FUNCTION 145741ba0 FUN_145741ba0 body=254 status=ok
// SIG undefined FUN_145741ba0(void)

undefined8
FUN_145741ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a544860;
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
  *local_48 = &PTR_FUN_14a5447f0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145741ca0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145741ca0 FUN_145741ca0 body=216 status=ok
// SIG undefined FUN_145741ca0(void)

undefined8 * FUN_145741ca0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145741d86 FUN_145741d86 body=24 status=ok
// SIG undefined FUN_145741d86(void)

bool FUN_145741d86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145741d9e FUN_145741d9e body=99 status=ok
// SIG undefined FUN_145741d9e(void)

void FUN_145741d9e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ac16(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae7e9f0;
  puVar1[5] = &PTR_FUN_14ae7f3f0;
  puVar1[6] = &PTR_LAB_14ae7f430;
  puVar1[0x55] = &PTR_FUN_14ae7f480;
  puVar1[0x56] = &PTR_FUN_14ae7f500;
  puVar1[0x57] = &PTR_FUN_14ae7f510;
  return;
}



// FUNCTION 145741e02 FUN_145741e02 body=45 status=ok
// SIG undefined FUN_145741e02(void)

undefined8 FUN_145741e02(undefined8 param_1,int param_2)

{
  FUN_145741e30();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x538);
  }
  return param_1;
}



// FUNCTION 145741e30 FUN_145741e30 body=144 status=ok
// SIG undefined FUN_145741e30(void)

void FUN_145741e30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b60bc60;
  FUN_144a2da94(param_1 + 0x9f);
  FUN_144a2da94(param_1 + 0x98);
  FUN_144a2da94(param_1 + 0x91);
  FUN_144a2da94(param_1 + 0x8a);
  FUN_14076ba26(param_1 + 0x3b);
  FUN_144a2da94(param_1 + 0x33);
  *param_1 = &PTR_FUN_14ac52c60;
  FUN_14076bc70(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145741ec0 FUN_145741ec0 body=1279 status=ok
// SIG undefined FUN_145741ec0(void)

void FUN_145741ec0(double *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_238 [40];
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double *local_1f0;
  double local_1e8;
  double local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1d8 = 0;
  uStack_1d0 = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  local_1e8 = 1.0;
  uVar22 = 0;
  uVar23 = 0x411ffb80;
  uVar32 = uVar22;
  uVar33 = uVar23;
  if ((longlong)iVar1 == 0) {
    local_200 = 523.0;
    local_1f8 = 523000.0;
    dVar5 = 0.0;
    dVar4 = 0.0;
    dVar3 = 0.0;
    uVar13 = 0;
    uVar14 = 0;
    local_208 = 0.0;
    local_210 = 0.0;
    uVar20 = 0;
    uVar21 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    dVar15 = 0.0;
    dVar16 = 0.0;
    dVar17 = 0.0;
    dVar18 = 524000.0;
    dVar19 = 0.0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x20);
    dVar6 = 0.0;
    lVar11 = 0;
    dVar7 = 0.0;
    dVar3 = 0.0;
    dVar4 = 0.0;
    dVar5 = 0.0;
    local_1f0 = param_1;
    do {
      if (*(longlong *)(lVar2 + lVar11) != 0) {
        local_1b8 = 0.0;
        dStack_1b0 = 0.0;
        local_1c8 = 0.0;
        dStack_1c0 = 0.0;
        local_1a8 = 0.0;
        local_188 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_180 = 0x3ff0000000000000;
        local_108 = 0;
        local_118 = 0.0;
        dStack_110 = 0.0;
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0.0;
        uStack_140 = 0;
        local_158 = 0.0;
        dStack_150 = 0.0;
        local_168 = 0.0;
        dStack_160 = 0.0;
        local_178 = 0;
        uStack_170 = 0;
        dStack_100 = 1.0;
        cVar9 = FUN_14076cbae(&local_1c8);
        uVar8 = uStack_1d0;
        if (cVar9 != '\0') {
          lVar12 = (longlong)(int)uStack_1d0;
          uVar10 = (int)uStack_1d0 + 1;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar10);
          if (uStack_1d0._4_4_ < uVar10) {
            FUN_14076cc58(&local_1d8,uVar8 & 0xffffffff);
          }
          memcpy((void *)(lVar12 * 0xd0 + local_1d8),&local_1c8,0xd0);
          dVar6 = dVar6 + local_1c8;
          dVar7 = dVar7 + dStack_1c0;
          dVar5 = dVar5 + local_1c8 * local_1b8;
          dVar4 = dVar4 + dStack_1b0 * local_1c8;
          dVar3 = dVar3 + local_1a8 * local_1c8;
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar1 * 8 != lVar11);
    uVar13 = 0;
    uVar14 = 0;
    if ((dVar6 <= 0.0) || ((int)uStack_1d0 < 1)) {
      local_200 = 523.0;
      local_1f8 = 523000.0;
      dVar17 = 0.0;
      dVar15 = 0.0;
      local_208 = 0.0;
      local_210 = 0.0;
      dVar18 = 524000.0;
      dVar19 = 0.0;
      uVar20 = 0;
      uVar21 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      dVar16 = 0.0;
      uVar30 = 0;
      uVar31 = 0;
      param_1 = local_1f0;
    }
    else {
      dVar18 = 1.0 / dVar6;
      dVar5 = dVar5 * dVar18;
      dVar4 = dVar4 * dVar18;
      dVar3 = dVar3 * dVar18;
      FUN_14076cd6b(&local_1c8,&local_1d8);
      uVar13 = (undefined4)uStack_170;
      uVar14 = (undefined4)((ulonglong)uStack_170 >> 0x20);
      local_1e0 = local_168;
      local_208 = dStack_160;
      local_210 = local_158;
      uVar20 = (undefined4)uStack_140;
      uVar21 = (undefined4)((ulonglong)uStack_140 >> 0x20);
      uVar24 = (undefined4)local_138;
      uVar25 = (undefined4)((ulonglong)local_138 >> 0x20);
      uVar26 = (undefined4)uStack_130;
      uVar27 = (undefined4)((ulonglong)uStack_130 >> 0x20);
      uVar22 = (undefined4)local_128;
      uVar23 = (undefined4)((ulonglong)local_128 >> 0x20);
      uVar28 = (undefined4)uStack_120;
      uVar29 = (undefined4)((ulonglong)uStack_120 >> 0x20);
      uVar30 = (undefined4)local_108;
      uVar31 = (undefined4)((ulonglong)local_108 >> 0x20);
      local_1e8 = dStack_100;
      param_1 = local_1f0;
      dVar15 = local_118;
      dVar16 = dStack_110;
      dVar17 = local_168;
      dVar18 = dStack_150;
      dVar19 = local_148;
      uVar32 = (int)local_178;
      uVar33 = (int)((ulonglong)local_178 >> 0x20);
      local_200 = dVar6;
      local_1f8 = dVar7;
    }
  }
  param_1[10] = (double)CONCAT44(uVar33,uVar32);
  param_1[0xb] = (double)CONCAT44(uVar14,uVar13);
  param_1[0xc] = dVar17;
  param_1[0xd] = local_208;
  param_1[0xe] = local_210;
  param_1[0xf] = dVar18;
  param_1[0x10] = dVar19;
  param_1[0x11] = (double)CONCAT44(uVar21,uVar20);
  param_1[0x12] = (double)CONCAT44(uVar25,uVar24);
  param_1[0x13] = (double)CONCAT44(uVar27,uVar26);
  param_1[0x14] = (double)CONCAT44(uVar23,uVar22);
  param_1[0x15] = (double)CONCAT44(uVar29,uVar28);
  param_1[0x16] = dVar15;
  param_1[0x17] = dVar16;
  param_1[0x18] = (double)CONCAT44(uVar31,uVar30);
  param_1[0x19] = local_1e8;
  *param_1 = local_200;
  param_1[1] = local_1f8;
  param_1[2] = dVar5;
  param_1[3] = dVar4;
  param_1[4] = dVar3;
  dVar3 = DAT_14c8463e8;
  param_1[8] = DAT_14c8463e0;
  param_1[9] = dVar3;
  uVar22 = DAT_14c8463d8._4_4_;
  uVar33 = (undefined4)DAT_14c8463d8;
  uVar32 = DAT_14c8463d0._4_4_;
  *(undefined4 *)(param_1 + 6) = (undefined4)DAT_14c8463d0;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar32;
  *(undefined4 *)(param_1 + 7) = uVar33;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar22;
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457423c8 FUN_1457423c8 body=102 status=ok
// SIG undefined FUN_1457423c8(void)

undefined8 * FUN_1457423c8(undefined8 *param_1)

{
  FUN_14076ff26();
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
  *param_1 = &PTR_FUN_14b65cb80;
  param_1[6] = &PTR_FUN_14b65ce70;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}



// FUNCTION 14574242e FUN_14574242e body=709 status=ok
// SIG undefined FUN_14574242e(void)

undefined8 * FUN_14574242e(undefined8 *param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  ulonglong uVar3;
  void *_Dst;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  longlong *local_88 [2];
  undefined4 *local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_140056680(&local_b8);
  uVar5 = (int)uStack_b0 - 1;
  if ((int)uStack_b0 == 0) {
    uVar5 = 0;
  }
  uVar2 = 10;
  if ((int)uVar5 < 10) {
    uVar2 = uVar5;
  }
  uVar3 = (ulonglong)uVar2;
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  uVar5 = uVar5 - (int)uVar3;
  local_a0 = (int)uStack_b0;
  if (0 < (int)uVar5) {
    iVar6 = (int)uStack_b0 - (uVar5 + (int)uVar3);
    if (iVar6 != 0) {
      _Dst = (void *)(uVar3 * 2 + local_b8);
      memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar5 * 2),(longlong)iVar6 * 2);
    }
    local_a0 = (int)uStack_b0 - uVar5;
  }
  local_a8 = local_b8;
  local_9c = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a882a8(local_98,&local_a8,&DAT_149e30fc2);
  FUN_140233b1a(local_88,local_98);
  local_60._0_4_ = 4;
  FUN_14023423e(&local_50,local_88);
  uStack_70 = CONCAT44(uStack_70._4_4_,1);
  FUN_140188694(&local_78,0);
  *local_78 = (undefined4)local_60;
  local_78[1] = local_60._4_4_;
  local_78[2] = uStack_58;
  local_78[3] = uStack_54;
  if (local_50 == (longlong *)0x0) {
    *(undefined8 *)(local_78 + 4) = 0;
    local_78[6] = 0;
  }
  else {
    FUN_14023423e(local_78 + 4,&local_50);
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
    local_50 = (longlong *)0x0;
    local_48 = 0;
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_60 = L"InvalidTokenDefinition";
  uStack_58 = 0x16;
  FUN_1446e940c(local_98,&local_60);
  local_60 = L"StringFormatter";
  uStack_58 = 0xf;
  FUN_1446e940c(&local_a8,&local_60);
  FUN_140208bae(local_88,&local_a8,local_98,L"Invalid token definition at \'{0}\'");
  FUN_14023409e(local_c8,local_88,1);
  FUN_140188794(&local_60,local_c8,&local_78);
  pwVar1 = local_60;
  *param_1 = local_60;
  uVar4 = uStack_58;
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 8))(local_60);
    uVar4 = uStack_58;
    (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
  }
  *(undefined4 *)(param_1 + 1) = uVar4;
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  FUN_14007f2db(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457426f4 FUN_1457426f4 body=121 status=ok
// SIG undefined FUN_1457426f4(void)

void FUN_1457426f4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  code *local_30;
  longlong *local_28;
  code **local_20;
  code *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_28 = &local_40;
    local_20 = &local_30;
    local_30 = FUN_143cbca2e;
    local_10 = &local_20;
    local_18 = FUN_1487df56e;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1447c5ba2();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574276e FUN_14574276e body=138 status=ok
// SIG undefined FUN_14574276e(void)

void FUN_14574276e(longlong *param_1,int param_2,int param_3)

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
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1457427f8 FUN_1457427f8 body=26 status=ok
// SIG undefined FUN_1457427f8(void)

void FUN_1457427f8(undefined8 param_1)

{
  FUN_1402811b8();
  FUN_144925f42(param_1);
  return;
}



// FUNCTION 145742812 FUN_145742812 body=41 status=ok
// SIG undefined FUN_145742812(void)

void FUN_145742812(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14574283c(param_1);
    param_1 = param_1 + 0x268;
  }
  return;
}



// FUNCTION 14574283c FUN_14574283c body=258 status=ok
// SIG undefined FUN_14574283c(void)

void FUN_14574283c(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x238) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x238) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x220) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x220) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  FUN_14574293e(*(undefined8 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x188));
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14574293e FUN_14574293e body=49 status=ok
// SIG undefined FUN_14574293e(void)

void FUN_14574293e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145742970 FUN_145742970 body=132 status=ok
// SIG undefined FUN_145742970(void)

void FUN_145742970(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457429f4 FUN_1457429f4 body=146 status=ok
// SIG undefined FUN_1457429f4(void)

void FUN_1457429f4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x268,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x268)) {
      uVar5 = uVar4 / 0x268 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x268,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145742a86 FUN_145742a86 body=543 status=ok
// SIG undefined FUN_145742a86(void)

undefined1 * FUN_145742a86(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1400b22c2(param_1 + 0x20,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x30,&DAT_149e02088);
  FUN_140056680(param_1 + 0x40,&DAT_149dfb77a);
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x70] = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0x42c80000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0x42c80000;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd1) = 0;
  *(undefined8 *)(param_1 + 0xd9) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0x42c80000;
  param_1[0x140] = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  param_1[400] = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x199) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0;
  param_1[0x1a8] = 1;
  *(undefined8 *)(param_1 + 0x1ac) = 0x3f00000000000000;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  param_1[0x1b8] = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  param_1[0x1c0] = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  param_1[0x1c8] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  param_1[0x1d0] = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  param_1[0x1d8] = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  param_1[0x1e0] = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  param_1[0x1e8] = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  param_1[0x1f0] = 0;
  param_1[0x210] = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  param_1[0x218] = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x204) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  FUN_144a5dc74(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x230) = 0;
  FUN_144a5dc74(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x248) = 0;
  param_1[0x250] = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  param_1[600] = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  param_1[0x260] = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  return param_1;
}



// FUNCTION 145742ca6 FUN_145742ca6 body=2175 status=ok
// SIG undefined FUN_145742ca6(void)

undefined1 * FUN_145742ca6(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  pvVar2 = *(void **)(param_2 + 0x10);
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy(*(void **)(param_1 + 0x10),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  pvVar2 = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  pvVar2 = *(void **)(param_2 + 0x30);
  *(int *)(param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x30,iVar1,0);
    memcpy(*(void **)(param_1 + 0x30),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  pvVar2 = *(void **)(param_2 + 0x40);
  *(int *)(param_1 + 0x48) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x40,iVar1,0);
    memcpy(*(void **)(param_1 + 0x40),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x50] = param_2[0x50];
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x58] = param_2[0x58];
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x60] = param_2[0x60];
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x68] = param_2[0x68];
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x70] = param_2[0x70];
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe0] = param_2[0xe0];
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  param_1[0xe8] = param_2[0xe8];
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  iVar1 = *(int *)(param_2 + 0xf8);
  pvVar2 = *(void **)(param_2 + 0xf0);
  *(int *)(param_1 + 0xf8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  else {
    FUN_140c6f052(param_1 + 0xf0,iVar1,0);
    memcpy(*(void **)(param_1 + 0xf0),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  param_1[0x140] = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  param_1[0x140] = param_2[0x140];
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  param_1[0x148] = param_2[0x148];
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_144a787a6(param_1 + 0x168,param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x180) = 0;
  iVar1 = *(int *)(param_2 + 0x188);
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  *(int *)(param_1 + 0x188) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  else {
    FUN_148c71f3a(param_1 + 0x180,iVar1,0);
    FUN_148c71fad(*(undefined8 *)(param_1 + 0x180),uVar3,iVar1);
  }
  param_1[400] = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  param_1[400] = param_2[400];
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  param_1[0x1a0] = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  param_1[0x1a0] = param_2[0x1a0];
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  param_1[0x1a8] = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  param_1[0x1a8] = param_2[0x1a8];
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  param_1[0x1b8] = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  param_1[0x1b8] = param_2[0x1b8];
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  param_1[0x1c0] = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  param_1[0x1c0] = param_2[0x1c0];
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  param_1[0x1c8] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  param_1[0x1c8] = param_2[0x1c8];
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  param_1[0x1d0] = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  param_1[0x1d0] = param_2[0x1d0];
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  param_1[0x1d8] = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  param_1[0x1d8] = param_2[0x1d8];
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  param_1[0x1e0] = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  param_1[0x1e0] = param_2[0x1e0];
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  param_1[0x1e8] = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  param_1[0x1e8] = param_2[0x1e8];
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  param_1[0x1f0] = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  param_1[0x1f0] = param_2[0x1f0];
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  FUN_144a787a6(param_1 + 0x1f8,param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  param_1[0x210] = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  param_1[0x210] = param_2[0x210];
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  param_1[0x218] = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  param_1[0x218] = param_2[0x218];
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x21c);
  FUN_140dd90de(param_1 + 0x220,param_2 + 0x220);
  FUN_140dd90de(param_1 + 0x238,param_2 + 0x238);
  param_1[0x250] = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  param_1[0x250] = param_2[0x250];
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
  param_1[600] = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  param_1[600] = param_2[600];
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  param_1[0x260] = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  param_1[0x260] = param_2[0x260];
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  return param_1;
}



// FUNCTION 145743526 FUN_145743526 body=69 status=ok
// SIG undefined FUN_145743526(void)

undefined8 FUN_145743526(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x20);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
      if (lVar2 != 0) {
        uVar3 = FUN_1447210f0(lVar2);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14574356c FUN_14574356c body=147 status=ok
// SIG undefined FUN_14574356c(void)

void FUN_14574356c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145743600 FUN_145743600 body=40 status=ok
// SIG undefined FUN_145743600(void)

undefined8 FUN_145743600(undefined8 param_1,int param_2)

{
  FUN_145743628();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145743628 FUN_145743628 body=89 status=ok
// SIG undefined FUN_145743628(void)

void FUN_145743628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1c34e0;
  param_1[5] = &PTR_FUN_14b1c3960;
  param_1[6] = &PTR_LAB_14b1c39a0;
  FUN_1407777dc(param_1 + 0x6a);
  FUN_14129d1b2(param_1 + 0x46);
  FUN_14129d1b2(param_1 + 0x22);
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145743682 FUN_145743682 body=179 status=ok
// SIG undefined FUN_145743682(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145743682(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0xdd) == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 0;
  }
  *(undefined8 *)(param_1 + 0x3f4) = 0;
  *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) & 0xf8;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x400) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x404) = uVar1;
  *(undefined4 *)(param_1 + 0x408) = uVar2;
  *(undefined4 *)(param_1 + 0x40c) = uVar3;
  *(undefined8 *)(param_1 + 0x410) = DAT_14c8464f0;
  FUN_140784a8a(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x428) = DAT_14c846508;
  uVar3 = DAT_14c846500._4_4_;
  uVar2 = (undefined4)DAT_14c846500;
  uVar1 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x418) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)(param_1 + 0x41c) = uVar1;
  *(undefined4 *)(param_1 + 0x420) = uVar2;
  *(undefined4 *)(param_1 + 0x424) = uVar3;
  FUN_140784a8a(param_1 + 0x450);
  *(undefined8 *)(param_1 + 0x440) = DAT_14cb71d78;
  uVar3 = uRam000000014cb71d74;
  uVar2 = _DAT_14cb71d70;
  uVar1 = uRam000000014cb71d6c;
  *(undefined4 *)(param_1 + 0x430) = _DAT_14cb71d68;
  *(undefined4 *)(param_1 + 0x434) = uVar1;
  *(undefined4 *)(param_1 + 0x438) = uVar2;
  *(undefined4 *)(param_1 + 0x43c) = uVar3;
  FUN_140784a8a(param_1 + 0x458);
  return;
}



// FUNCTION 145743736 FUN_145743736 body=171 status=ok
// SIG undefined FUN_145743736(void)

void FUN_145743736(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pbVar1 = (byte *)(param_1 + 0x20);
  bVar3 = *(byte *)(param_1 + 0x20) & 0xf7;
  *(byte *)(param_1 + 0x20) = bVar3;
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,pbVar1,param_3);
    bVar3 = *pbVar1;
  }
  if ((bVar3 & 0x20) != 0) {
    lVar4 = FUN_1447e736e();
    if (lVar4 != 0) {
      FUN_1457437e2(lVar4,local_1c,param_1 + 0x60);
    }
    bVar3 = *pbVar1 & 0xdf;
    *pbVar1 = bVar3;
  }
  if ((0.0 < *(float *)(param_1 + 0x30)) && (0.0 < *(float *)(param_1 + 0x60))) {
    *(undefined4 *)(param_1 + 100) = 0;
    *(byte *)(param_1 + 0x20) = bVar3 | 0x10;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457437e2 FUN_1457437e2 body=232 status=ok
// SIG undefined FUN_1457437e2(void)

void FUN_1457437e2(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_78 [40];
  float local_50;
  float local_4c;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28,&local_48);
  if ((0 < local_40) &&
     ((**(code **)(**(longlong **)(local_48 + 8) + 0x68))
                (*(longlong **)(local_48 + 8),param_2,param_3), 1 < local_40)) {
    lVar2 = 1;
    lVar1 = 0x18;
    do {
      (**(code **)(**(longlong **)(local_48 + lVar1) + 0x68))
                (*(longlong **)(local_48 + lVar1),&local_4c,&local_50);
      fVar3 = local_4c;
      if (*param_2 <= local_4c) {
        fVar3 = *param_2;
      }
      *param_2 = fVar3;
      fVar3 = local_50;
      if (local_50 <= *param_3) {
        fVar3 = *param_3;
      }
      *param_3 = fVar3;
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < local_40);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457438cc FUN_1457438cc body=63 status=ok
// SIG undefined FUN_1457438cc(void)

undefined8 * FUN_1457438cc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_14574390c(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  puVar1[1] = param_1 + 8;
  return param_2;
}



// FUNCTION 14574390c FUN_14574390c body=132 status=ok
// SIG undefined FUN_14574390c(void)

void FUN_14574390c(longlong param_1,int param_2)

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



// FUNCTION 1457439a0 FUN_1457439a0 body=147 status=ok
// SIG undefined FUN_1457439a0(void)

void FUN_1457439a0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145743a34 FUN_145743a34 body=301 status=ok
// SIG undefined FUN_145743a34(void)

void FUN_145743a34(longlong param_1,longlong *param_2)

{
  undefined8 *_Dst;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_68 [40];
  undefined8 ***local_40;
  undefined4 local_38;
  undefined8 local_30;
  ushort local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 ***)*param_2;
  local_38 = (undefined4)param_2[1];
  local_28 = 0x18;
  local_30 = 0;
  local_20 = 10;
  _Dst = (undefined8 *)(param_1 + 8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      puVar2 = (undefined8 *)*_Dst;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_1 + 0x20)) {
    FUN_1400020a8(*_Dst);
  }
  *(undefined2 *)(param_1 + 0x20) = 0x18;
  pcVar1 = DAT_14c9a90f8;
  if ((DAT_14c9a90f8 == (code *)0x0) && (pcVar1 = DAT_14c9a90f0, DAT_14c9a90f0 == (code *)0x0)) {
    memcpy(_Dst,&local_40,(longlong)DAT_14c9a9050);
  }
  else {
    (*pcVar1)(_Dst,&local_40);
  }
  *(undefined1 *)(param_1 + 0x28) = local_20;
  local_20 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar3 = (undefined8 ****)local_40;
    if (local_28 < 0x19) {
      ppppuVar3 = &local_40;
    }
    (*DAT_14c9a85d0)(ppppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145743b62 FUN_145743b62 body=200 status=ok
// SIG undefined FUN_145743b62(void)

void FUN_145743b62(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < iVar5) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar4 + (ulonglong)uVar7 * 8) <= iVar5)) {
      piVar9 = (int *)(lVar4 + (ulonglong)uVar7 * 8);
      goto LAB_145743bee;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_145743e2a(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  piVar9 = (int *)(uVar8 * 8 + *param_1);
  iVar5 = *param_2;
LAB_145743bee:
  *piVar9 = iVar5;
  piVar9[1] = *param_3;
  return;
}



// FUNCTION 145743c2a FUN_145743c2a body=25 status=ok
// SIG undefined FUN_145743c2a(void)

void FUN_145743c2a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 145743c44 FUN_145743c44 body=134 status=ok
// SIG undefined FUN_145743c44(void)

void FUN_145743c44(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4d7cf0;
  param_1[0x1b] = &PTR_FUN_14a4d7d40;
  return;
}



// FUNCTION 145743cca FUN_145743cca body=162 status=ok
// SIG undefined FUN_145743cca(void)

void FUN_145743cca(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145743d09;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145743d09;
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
LAB_145743d09:
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
                    /* WARNING: Could not recover jumptable at 0x000145743d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145743d6c FUN_145743d6c body=188 status=ok
// SIG undefined FUN_145743d6c(void)

void FUN_145743d6c(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145743e2a FUN_145743e2a body=132 status=ok
// SIG undefined FUN_145743e2a(void)

void FUN_145743e2a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145743eb0 FUN_145743eb0 body=106 status=ok
// SIG undefined FUN_145743eb0(void)

undefined8 * FUN_145743eb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83f4a0) {
    FUN_144b3d300(&DAT_14c83f4a0);
    if (DAT_14c83f4a0 == -1) {
      DAT_14c83f490 = 0;
      uRam000000014c83f498 = 0;
      atexit((_func_5014 *)&LAB_142751142);
      _Init_thread_footer(&DAT_14c83f4a0);
    }
  }
  return &DAT_14c83f490;
}



// FUNCTION 145743f1a FUN_145743f1a body=132 status=ok
// SIG undefined FUN_145743f1a(void)

void FUN_145743f1a(longlong param_1,int param_2)

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



// FUNCTION 145743f9e FUN_145743f9e body=45 status=ok
// SIG undefined FUN_145743f9e(void)

void FUN_145743f9e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x78;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != -0x30);
  return;
}



// FUNCTION 145743fcc FUN_145743fcc body=61 status=ok
// SIG undefined FUN_145743fcc(void)

void FUN_145743fcc(void)

{
  longlong lVar1;
  
  if (DAT_14cb0ad90 != 0) {
    lVar1 = FUN_144a52528();
    if (DAT_14cb0ad90 != 0) {
      FUN_141092d32(lVar1 + 0x310);
    }
    DAT_14cb0ad90 = 0;
  }
  return;
}



// FUNCTION 14574400a FUN_14574400a body=325 status=ok
// SIG undefined FUN_14574400a(void)

void FUN_14574400a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 145744150 FUN_145744150 body=196 status=ok
// SIG undefined FUN_145744150(void)

void FUN_145744150(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_140f7f142();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x178) != 0) {
      lVar3 = FUN_14041aabe();
      if ((((*(longlong *)(lVar2 + 0x178) != 0) && (lVar3 != 0)) &&
          (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x178) + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
    FUN_148d87afe(local_30,param_1);
    FUN_1406f5a84(lVar2 + 0x800,local_38,local_30);
    FUN_1449db362(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145744462 FUN_145744462 body=169 status=ok
// SIG undefined FUN_145744462(void)

void FUN_145744462(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x488) != 0)) {
    FUN_1407934de(&local_28);
    if (local_28 != 0) {
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_141348248(param_1,&local_38);
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574450c FUN_14574450c body=423 status=ok
// SIG undefined FUN_14574450c(void)

longlong * FUN_14574450c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1457445e3:
    *puVar3 = &PTR_LAB_14b3fc170;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b97d2c0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_145744462;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457445e3;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3fc170;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b97d2c0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_145744462;
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



// FUNCTION 1457446b8 FUN_1457446b8 body=138 status=ok
// SIG undefined FUN_1457446b8(void)

code * FUN_1457446b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d922e;
}



// FUNCTION 145744742 FUN_145744742 body=138 status=ok
// SIG undefined FUN_145744742(void)

code * FUN_145744742(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OwnerToMeshVector";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d8c40;
}



// FUNCTION 1457447cc FUN_1457447cc body=196 status=ok
// SIG undefined FUN_1457447cc(void)

void FUN_1457447cc(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined8 *)(param_2 + 8);
  FUN_142b50e30(&local_30);
  FUN_1470f9c20(param_2,*(longlong *)(param_2 + 0x30) == local_30);
  iVar1 = *(int *)(param_2 + 0x20);
  if ((longlong)iVar1 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 0.0;
    lVar4 = 0;
    do {
      fVar5 = fVar5 + *(float *)(*(longlong *)(param_2 + 0x18) + lVar4);
      lVar4 = lVar4 + 4;
    } while ((longlong)iVar1 * 4 - lVar4 != 0);
  }
  iVar3 = 1;
  if (1 < iVar1) {
    iVar3 = iVar1;
  }
  lVar4 = param_1 + 0x28;
  if (1e-08 <= fVar5 / (float)iVar3) {
    lVar4 = param_1 + 0x40;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144a2c094(lVar4,uVar2);
  return;
}



// FUNCTION 145744892 FUN_145744892 body=40 status=ok
// SIG undefined FUN_145744892(void)

undefined8 FUN_145744892(undefined8 param_1,int param_2)

{
  FUN_1457448ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457448ba FUN_1457448ba body=170 status=ok
// SIG undefined FUN_1457448ba(void)

void FUN_1457448ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b65dad0;
  param_1[6] = &PTR_FUN_14b65ddc0;
  param_1[0x8f] = &DAT_14a176f00;
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x8f] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x90);
  FUN_14079c464(param_1 + 0x5b);
  param_1[0x48] = &DAT_14a176f00;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  param_1[0x48] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x49);
  FUN_14079c464(param_1 + 0x13);
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 145744964 FUN_145744964 body=171 status=ok
// SIG undefined FUN_145744964(void)

void FUN_145744964(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined7 local_3f;
  undefined1 uStack_38;
  undefined8 uStack_37;
  undefined8 local_2c;
  undefined8 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145744a10();
  plVar1 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3f = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_2c = 0;
  uStack_24 = 0;
  FUN_1412bdb18(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x20);
  }
  *(int *)((longlong)plVar1 + 0x3fc) = *(int *)((longlong)plVar1 + 0x3fc) + 1;
  (**(code **)(*plVar1 + 0x578))(plVar1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145744a10 FUN_145744a10 body=90 status=ok
// SIG undefined FUN_145744a10(void)

void FUN_145744a10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(byte *)(param_1 + 0x2ea) = *(byte *)(param_1 + 0x2ea) & 0xfd;
  if ((*(ushort *)(param_1 + 0x19c) & 2) != 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar2 = 0;
    }
    if (*(char *)(lVar2 + 0x178) == '\x03') {
      *(ushort *)(param_1 + 0x19c) = *(ushort *)(param_1 + 0x19c) & 0xfffd;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x20);
      }
      else {
        plVar1 = (longlong *)0x0;
      }
      *(int *)((longlong)plVar1 + 0x3fc) = *(int *)((longlong)plVar1 + 0x3fc) + 1;
                    /* WARNING: Could not recover jumptable at 0x000145744a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x578))();
      return;
    }
  }
  return;
}



// FUNCTION 145744a6a FUN_145744a6a body=301 status=ok
// SIG undefined FUN_145744a6a(void)

undefined4 * FUN_145744a6a(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145744c16(local_48);
  *local_40 = *(undefined4 *)*param_3;
  *(undefined8 *)(local_40 + 2) = 0;
  local_40[4] = 0xffffffff;
  cVar2 = FUN_1407a37c2(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14c9495b0 - DAT_14c9495dc;
    if (uVar3 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14c9495f0)) {
      param_2 = DAT_14c9495f0 - 1U & param_2;
      local_40[5] = param_2;
      puVar4 = DAT_14c9495e8;
      if (DAT_14c9495e8 == (undefined4 *)0x0) {
        puVar4 = &DAT_14c9495e0;
      }
      local_40[4] = puVar4[(longlong)DAT_14c9495f0 - 1U & (longlong)(int)param_2];
      puVar4 = DAT_14c9495e8;
      if (DAT_14c9495e8 == (undefined4 *)0x0) {
        puVar4 = &DAT_14c9495e0;
      }
      puVar4[(longlong)DAT_14c9495f0 - 1U & (longlong)(int)param_2] = local_48[0];
    }
    else {
      DAT_14c9495f0 = iVar6;
      FUN_1407a3e40();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145744b98 FUN_145744b98 body=125 status=ok
// SIG undefined FUN_145744b98(void)

undefined8 * FUN_145744b98(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145744d88();
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



// FUNCTION 145744c16 FUN_145744c16 body=283 status=ok
// SIG undefined FUN_145744c16(void)

int * FUN_145744c16(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9495d8;
  iVar3 = DAT_14c9495b0;
  if (DAT_14c9495dc == 0) {
    iVar2 = DAT_14c9495b0 + 1;
    bVar7 = DAT_14c9495b4 == DAT_14c9495b0;
    DAT_14c9495b0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9495a8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9495b8,1);
    puVar4 = DAT_14c9495c8;
    if (DAT_14c9495c8 == (undefined *)0x0) {
      puVar4 = &DAT_14c9495b8;
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
    lVar6 = (longlong)DAT_14c9495d8;
    DAT_14c9495d8 = *(int *)(DAT_14c9495a8 + 4 + lVar6 * 0x18);
    DAT_14c9495dc = DAT_14c9495dc + -1;
    if (DAT_14c9495dc != 0) {
      *(undefined4 *)(DAT_14c9495a8 + (longlong)DAT_14c9495d8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9495b8;
  if (DAT_14c9495c8 != (undefined *)0x0) {
    puVar4 = DAT_14c9495c8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9495a8;
  return param_1;
}



// FUNCTION 145744d32 FUN_145744d32 body=85 status=ok
// SIG undefined FUN_145744d32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145744d32(void)

{
  if (DAT_14c9495b0 != DAT_14c9495dc) {
    FUN_1407a3cd0();
    DAT_14c9495b0 = 0;
    if (DAT_14c9495b4 < 0) {
      FUN_144727cd0(&DAT_14c9495a8,0);
    }
    _DAT_14c9495d8 = 0xffffffff;
    DAT_14c9495d0 = 0;
  }
  return;
}



// FUNCTION 145744d88 FUN_145744d88 body=463 status=ok
// SIG undefined FUN_145744d88(void)

longlong * FUN_145744d88(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x20;
        FUN_1407a3a24(*(undefined8 *)(lVar2 + 8 + lVar8),*(undefined4 *)(lVar2 + 0x10 + lVar8));
        if (*(longlong *)(lVar2 + 8 + lVar8) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
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
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145744f58 FUN_145744f58 body=291 status=ok
// SIG undefined FUN_145744f58(void)

undefined4 * FUN_145744f58(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145744c16(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar7 = *(uint *)*param_2;
  *local_38 = uVar7;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar4 = FUN_1407a37c2(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14c9495b0 - DAT_14c9495dc;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14c9495f0)) {
      uVar7 = DAT_14c9495f0 - 1U & uVar7;
      local_38[5] = uVar7;
      puVar6 = DAT_14c9495e8;
      if (DAT_14c9495e8 == (undefined4 *)0x0) {
        puVar6 = &DAT_14c9495e0;
      }
      local_38[4] = puVar6[(longlong)DAT_14c9495f0 - 1U & (longlong)(int)uVar7];
      puVar6 = DAT_14c9495e8;
      if (DAT_14c9495e8 == (undefined4 *)0x0) {
        puVar6 = &DAT_14c9495e0;
      }
      puVar6[(longlong)DAT_14c9495f0 - 1U & (longlong)(int)uVar7] = local_44;
    }
    else {
      DAT_14c9495f0 = iVar9;
      FUN_1407a3e40();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574507c FUN_14574507c body=159 status=ok
// SIG undefined FUN_14574507c(void)

void FUN_14574507c(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14c949600;
  if (param_1 <= (int)DAT_14c949600) {
    if (DAT_14c949604 == 0) {
      uVar2 = 4;
      if (4 < DAT_14c949600) {
        uVar2 = DAT_14c949600;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c949600 * 3) >> 3) + (longlong)(int)DAT_14c949600 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    DAT_14c949604 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9495f8,param_1,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14574511c FUN_14574511c body=99 status=ok
// SIG undefined FUN_14574511c(void)

void FUN_14574511c(longlong *param_1)

{
  FUN_1407a3a24(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a24(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a24(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145745180 FUN_145745180 body=67 status=ok
// SIG undefined FUN_145745180(void)

void FUN_145745180(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1407a5378();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
  }
  lVar1 = FUN_1457451c4(uVar2);
  if (lVar1 != 0) {
    FUN_1407a555c(lVar1,*(undefined1 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1457451c4 FUN_1457451c4 body=91 status=ok
// SIG undefined FUN_1457451c4(void)

undefined8 FUN_1457451c4(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1412c0c36();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1412c0c36();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145745213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 145745220 FUN_145745220 body=141 status=ok
// SIG undefined FUN_145745220(void)

void FUN_145745220(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *(char *)(param_1 + 0x430);
  local_28 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2((char *)(param_1 + 0x430),&local_28);
  }
  else {
    FUN_1400bc96c();
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x200);
  if ((lVar2 != 0) && (cVar1 != *(char *)(param_1 + 0x430))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457452c0 FUN_1457452c0 body=147 status=ok
// SIG undefined FUN_1457452c0(void)

void FUN_1457452c0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145745354 FUN_145745354 body=147 status=ok
// SIG undefined FUN_145745354(void)

void FUN_145745354(longlong param_1,int param_2)

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



// FUNCTION 1457453e8 FUN_1457453e8 body=226 status=ok
// SIG undefined FUN_1457453e8(void)

longlong * FUN_1457453e8(longlong *param_1)

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
  pcVar13 = FUN_14630ccdc;
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



// FUNCTION 1457454cc FUN_1457454cc body=138 status=ok
// SIG undefined FUN_1457454cc(void)

code * FUN_1457454cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OpaqueRoughRefractionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630cd64;
}



// FUNCTION 145745556 FUN_145745556 body=138 status=ok
// SIG undefined FUN_145745556(void)

code * FUN_145745556(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClosureTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731cab8;
}



// FUNCTION 1457455e0 FUN_1457455e0 body=138 status=ok
// SIG undefined FUN_1457455e0(void)

code * FUN_1457455e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FirstSliceStoringSubstrateSSSData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x240000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731cd6a;
}



// FUNCTION 14574566a FUN_14574566a body=69 status=ok
// SIG undefined FUN_14574566a(void)

LPCRITICAL_SECTION FUN_14574566a(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].LockSemaphore = (HANDLE)0x0;
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[3].LockCount = -1;
  param_1[3].RecursionCount = 1;
  return param_1;
}



// FUNCTION 1457456af FUN_1457456af body=147 status=ok
// SIG undefined FUN_1457456af(void)

undefined8 *
FUN_1457456af(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149e35cc0;
  uVar2 = *param_5;
  uVar3 = *param_4;
  uVar1 = *param_3;
  puVar4[2] = 0;
  puVar4[3] = 0;
  uVar5 = FUN_1407bb416();
  uVar5 = FUN_145c4d91c(uVar5,param_1,param_2,
                        CONCAT71((int7)((ulonglong)param_4 >> 8),uVar1) & 0xffffffff,uVar3,uVar2);
  puVar4[4] = uVar5;
  return puVar4;
}



// FUNCTION 145745742 FUN_145745742 body=159 status=ok
// SIG undefined FUN_145745742(void)

void FUN_145745742(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_14574577f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14574577f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14574577f:
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
                    /* WARNING: Could not recover jumptable at 0x0001457457dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457457e2 FUN_1457457e2 body=132 status=ok
// SIG undefined FUN_1457457e2(void)

void FUN_1457457e2(longlong param_1,int param_2)

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



// FUNCTION 145745866 FUN_145745866 body=258 status=ok
// SIG undefined FUN_145745866(void)

int FUN_145745866(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1 = puVar3 + 6;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  FUN_141067f4a(puVar1);
  puVar3[6] = &PTR_FUN_14b32b5d0;
  puVar3[0xb] = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
  *(byte *)((longlong)puVar3 + 0x3a) = *(byte *)((longlong)puVar3 + 0x3a) & 0xf9 | 2;
  *(undefined1 *)(puVar3 + 7) = 5;
  puVar3[0xd] = 0;
  iVar2 = *(int *)(param_1 + 0x3b0);
  *(uint *)(param_1 + 0x3b0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x3b4) < iVar2 + 1U) {
    FUN_1456bd870(param_1 + 0x3a8,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar2 * 8) = puVar3;
  *(int *)(puVar3 + 0xc) = *(int *)(param_1 + 0x3b0) + -1;
  *(undefined4 *)puVar3 = 0;
  puVar3[0xb] = param_1;
  *(undefined1 *)(puVar3 + 7) = 5;
  FUN_14082bc44(puVar1,param_1,param_1 + 0x30);
  if ((*(byte **)(param_1 + 0x50) != (byte *)0x0) && ((**(byte **)(param_1 + 0x50) & 1) != 0)) {
    uVar4 = FUN_144a79cc8(param_1);
    FUN_1402eb876(puVar1,uVar4);
  }
  return *(int *)(param_1 + 0x3b0) + -1;
}



// FUNCTION 145745968 FUN_145745968 body=49 status=ok
// SIG undefined FUN_145745968(void)

void FUN_145745968(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
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



// FUNCTION 14574599a FUN_14574599a body=67 status=ok
// SIG undefined FUN_14574599a(void)

void FUN_14574599a(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  
  uVar1 = *param_1;
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  cVar3 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    if (cVar3 == '\0') {
      return;
    }
    puVar4 = &DAT_14c7590b4;
  }
  else {
    puVar4 = &DAT_14c7590bc;
    if (cVar3 != '\0') {
      puVar4 = &DAT_14c7590b8;
    }
  }
  *puVar4 = uVar1;
  return;
}



// FUNCTION 1457459de FUN_1457459de body=136 status=ok
// SIG undefined FUN_1457459de(void)

undefined4 * FUN_1457459de(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  cVar1 = (*(code *)PTR_FUN_14c758760)();
  cVar2 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      uVar3 = 0xffffffff;
      goto LAB_145745a08;
    }
    puVar4 = &DAT_14c7590b4;
  }
  else {
    puVar4 = &DAT_14c7590bc;
    if (cVar2 != '\0') {
      puVar4 = &DAT_14c7590b8;
    }
  }
  uVar3 = *puVar4;
LAB_145745a08:
  *param_1 = uVar3;
  cVar1 = (*(code *)PTR_FUN_14c758760)();
  cVar2 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      return param_1;
    }
    puVar4 = &DAT_14c7590b4;
  }
  else {
    puVar4 = &DAT_14c7590bc;
    if (cVar2 != '\0') {
      puVar4 = &DAT_14c7590b8;
    }
  }
  *puVar4 = param_2;
  return param_1;
}



// FUNCTION 145745a66 FUN_145745a66 body=486 status=ok
// SIG undefined FUN_145745a66(void)

void FUN_145745a66(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 145745c4e caseD_3c body=884 status=ok
// SIG undefined caseD_3c(void)

void switchD_143c3d4dc::caseD_3c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  int local_b8;
  undefined1 local_b0 [24];
  int local_98;
  int local_8c;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_60;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar4 = *(longlong *)(lVar5 + 0xd38);
  if (*(longlong *)(lVar5 + 0xd38) == 0) {
    lVar4 = lVar5 + 0xd28;
  }
  if ((longlong)*(int *)(lVar5 + 0xd40) != 0) {
    lVar7 = 0;
    do {
      if (*(longlong **)(lVar4 + lVar7) == param_1) goto LAB_145745ccf;
      lVar7 = lVar7 + 8;
    } while ((longlong)*(int *)(lVar5 + 0xd40) * 8 != lVar7);
  }
  FUN_146890b74(&local_c0,param_1,5);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_4b = *(longlong *)(lVar5 + 0xd48) != 0;
  if (*(char *)(lVar5 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xd40);
  *(uint *)(lVar4 + 0xd40) = iVar6 + 1U;
  if (*(uint *)(lVar4 + 0xd44) < iVar6 + 1U) {
    FUN_1468c2caa(iVar6);
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar7 = *(longlong *)(lVar4 + 0xd38);
  if (*(longlong *)(lVar4 + 0xd38) == 0) {
    lVar7 = lVar4 + 0xd28;
  }
  *(longlong **)(lVar7 + (longlong)iVar6 * 8) = param_1;
  FUN_146890bb2(local_e8,&local_c0);
  (**(code **)(*param_1 + 0x1b8))(param_1,local_e8);
  if (*(char *)(lVar4 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd40);
  *piVar1 = *piVar1 + -1;
  iVar6 = (local_b8 - local_8c) + (int)param_2[1];
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    FUN_1468c2e4a(param_2);
  }
  local_e0 = 0x100000000;
  local_d0 = 0xffffffff;
  local_c8 = 0;
  iVar6 = 0;
  local_d8 = local_b0;
  if (local_98 != 0) {
    FUN_1449c0562(&local_e0);
    iVar6 = local_98;
  }
  local_118 = (longlong *)(lVar5 + 0xd48);
  local_f8 = local_d0;
  uVar3 = local_f8;
  local_f0 = local_c8;
  local_ec = local_c4;
  local_108 = local_e0;
  local_100 = local_d8;
  local_110 = &local_c0;
  local_f8._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
  if ((local_f8._4_4_ != iVar6) || (local_d8 != local_b0)) {
    iVar8 = local_f8._4_4_;
    local_f8 = uVar3;
    do {
      lVar5 = *local_110;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1468c2eaa(param_2,iVar2);
      }
      lVar5 = (longlong)iVar8 * 0x30 + lVar5;
      lVar4 = *param_2;
      lVar7 = (longlong)iVar2 * 0x20;
      *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar5 + 8);
      *(undefined8 *)(lVar4 + 8 + lVar7) = 0;
      *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined4 *)(lVar4 + 0x10 + lVar7) = *(undefined4 *)(lVar5 + 0x18);
      *(undefined4 *)(lVar4 + 0x14 + lVar7) = *(undefined4 *)(lVar5 + 0x1c);
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x18 + lVar7) = *(undefined8 *)(lVar5 + 0x20);
      local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
      FUN_1449c0562(&local_108);
      iVar8 = local_f8._4_4_;
      uVar3 = local_f8;
    } while (local_110 != &local_c0 || (local_100 != local_b0 || local_f8._4_4_ != iVar6));
  }
  local_f8 = uVar3;
  if ((undefined8 *)*local_118 != (undefined8 *)0x0) {
    *(undefined8 *)*local_118 = local_60;
  }
  local_78 = 0;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  FUN_14598d4fc(&local_c0);
LAB_145745ccf:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145745fc4 FUN_145745fc4 body=83 status=ok
// SIG undefined FUN_145745fc4(void)

undefined8 FUN_145745fc4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  
  FUN_1407c950e();
  fVar1 = SQRT(*(float *)(param_4 + 0x30) * *(float *)(param_4 + 0x30) +
               *(float *)(param_4 + 0x34) * *(float *)(param_4 + 0x34));
  if (*(float *)(param_1 + 0x310) <= fVar1 && fVar1 != *(float *)(param_1 + 0x310)) {
    FUN_141646d72(DAT_14cb98ab0,0);
  }
  return param_2;
}



// FUNCTION 145746018 FUN_145746018 body=338 status=ok
// SIG undefined FUN_145746018(void)

void FUN_145746018(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x32b8) != 0) && (*(char *)(param_1 + 0x32c0) != '\0')) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x32b8) + 0xae8), lVar3 != 0)) {
    uVar4 = FUN_1414339a4();
    FUN_140d92a98(param_1 + 0x1508,&local_38,uVar4);
    if (local_38 != 0) {
      FUN_140c4a7e8(param_1 + 0x1508,*(undefined1 *)(local_38 + 0x40),1);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    FUN_1402577d6(param_1,0);
    FUN_14574616c(*(undefined8 *)(param_1 + 0x32b8));
    lVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x32b8) + 0x1238) + 0x10))
                      (*(longlong *)(param_1 + 0x32b8) + 0x1238);
    if (lVar5 != 0) {
      local_48 = &LAB_143c9c45a;
      local_40 = &local_38;
      FUN_1408d6bd2(lVar5,DAT_14c9abbf0);
    }
    *(undefined1 *)(param_1 + 0x32c0) = 0;
    lVar5 = FUN_14479d2ce(&DAT_000032c4 + param_1);
    if (lVar5 != 0) {
      FUN_1406712fc(lVar3,&DAT_14cb8d430,lVar5);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574616c FUN_14574616c body=18 status=ok
// SIG undefined FUN_14574616c(void)

void FUN_14574616c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014574617b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd80))(param_1,0,1);
  return;
}



// FUNCTION 14574617e FUN_14574617e body=353 status=ok
// SIG undefined FUN_14574617e(void)

void FUN_14574617e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined1 local_d0 [56];
  undefined1 local_98 [64];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar4 = FUN_144729dda(param_1 + 0x38);
  if ((((cVar4 != '\0') && (*(longlong *)(param_1 + 0x50) != 0)) &&
      (cVar4 = FUN_144729dda(param_1 + 0x48), cVar4 != '\0')) &&
     (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_140a7042e(param_1,&local_d8);
    if (local_d8 != 0) {
      lVar6 = FUN_14479d2ce(param_1 + 0x38);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1447210f0(lVar6);
      }
      FUN_140a702f6(&local_e8,uVar7);
      if (local_e0 != (longlong *)0x0) {
        iVar5 = (int)local_e0[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_e0[1];
          bVar9 = iVar5 == iVar3;
          if (bVar9) {
            *(int *)(local_e0 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
          plVar8 = local_e0;
        } while (!bVar9);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_e0 + 0x10))();
        }
        if (plVar8 != (longlong *)0x0) {
          if (local_e8 != 0) {
            FUN_14105eeda(local_e8,&local_d8,lVar6,0);
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
        }
      }
    }
    FUN_144a2da94(local_58);
    FUN_144a2da94(local_98);
    FUN_144a2da94(local_d0);
  }
  if ((local_20 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457462e0 FUN_1457462e0 body=353 status=ok
// SIG undefined FUN_1457462e0(void)

void FUN_1457462e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined1 local_d0 [56];
  undefined1 local_98 [64];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar4 = FUN_144729dda(param_1 + 0x38);
  if ((((cVar4 != '\0') && (*(longlong *)(param_1 + 0x50) != 0)) &&
      (cVar4 = FUN_144729dda(param_1 + 0x48), cVar4 != '\0')) &&
     (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_140a7042e(param_1,&local_d8);
    if (local_d8 != 0) {
      lVar6 = FUN_14479d2ce(param_1 + 0x38);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1447210f0(lVar6);
      }
      FUN_140a702f6(&local_e8,uVar7);
      if (local_e0 != (longlong *)0x0) {
        iVar5 = (int)local_e0[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_e0[1];
          bVar9 = iVar5 == iVar3;
          if (bVar9) {
            *(int *)(local_e0 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
          plVar8 = local_e0;
        } while (!bVar9);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_e0 + 0x10))();
        }
        if (plVar8 != (longlong *)0x0) {
          if (local_e8 != 0) {
            FUN_14119101a(local_e8,&local_d8,lVar6,0);
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
        }
      }
    }
    FUN_144a2da94(local_58);
    FUN_144a2da94(local_98);
    FUN_144a2da94(local_d0);
  }
  if ((local_20 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145746442 FUN_145746442 body=128 status=ok
// SIG undefined FUN_145746442(void)

void FUN_145746442(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  
  FUN_1407cb6b6();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x160) == 0) {
      plVar3 = &DAT_14c9a1308;
    }
    else {
      plVar3 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2688);
    }
    if (*plVar3 == 0) {
      bVar4 = *(byte *)(lVar1 + 0x230);
      bVar5 = 0;
    }
    else {
      bVar5 = 0;
      cVar2 = FUN_14000584e(*plVar3,0);
      bVar4 = *(byte *)(lVar1 + 0x230);
      if (cVar2 != '\0') {
        bVar5 = 0x10;
      }
    }
    *(byte *)(lVar1 + 0x230) = bVar4 & 0xef | bVar5;
  }
  return;
}



// FUNCTION 1457464c2 FUN_1457464c2 body=57 status=ok
// SIG undefined FUN_1457464c2(void)

void FUN_1457464c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbae30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbae30 = FUN_140002ddd(FUN_1466082fd,uVar1,L"OakWidgetData_NavigationBar");
  }
  return;
}



// FUNCTION 1457464fc FUN_1457464fc body=445 status=ok
// SIG undefined FUN_1457464fc(void)

void FUN_1457464fc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1407cbc56();
  lVar2 = param_1[0x51];
  if (lVar2 != 0) {
    FUN_14071621b(*(undefined8 *)(lVar2 + 0xc0),*(undefined4 *)(lVar2 + 200));
    *(undefined4 *)(lVar2 + 200) = 0;
    if (*(int *)(lVar2 + 0xcc) != 0) {
      FUN_14574681c(lVar2 + 0xc0,0);
    }
    if (param_1[0x2c] == 0) {
      puVar4 = &DAT_14c9a1308;
    }
    else {
      puVar4 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cb92960);
    }
    uVar5 = FUN_140e82300();
    FUN_1457466ba(puVar4,local_38,uVar5);
    FUN_140008f88(lVar2 + 0xb0,local_38);
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
    if (param_1[0x2c] == 0) {
      plVar6 = &DAT_14c9a1308;
    }
    else {
      plVar6 = (longlong *)FUN_1446e60f4(param_1[0x2c],&DAT_14cb92988);
    }
    if (*plVar6 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_14000584e(*plVar6,0);
    }
    *(undefined1 *)(lVar2 + 0xdc) = uVar3;
    if (param_1[0x35] != 0) {
      if (*(char *)(param_1[0x35] + 0x40) == '\x01') {
        FUN_1407cc832(param_1);
      }
      else {
        FUN_148a015a4(param_1);
      }
    }
    if ((int)param_1[0x59] < 2) {
      iVar1 = (int)param_1[0x5b];
      *(uint *)(param_1 + 0x5b) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2dc) < iVar1 + 1U) {
        FUN_1446f48e2(param_1 + 0x5a,iVar1);
      }
      *(undefined4 *)(param_1[0x5a] + (longlong)iVar1 * 4) = 0;
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    else {
      FUN_1457467b8(param_1,param_1 + 0x58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457466ba FUN_1457466ba body=66 status=ok
// SIG undefined FUN_1457466ba(void)

longlong * FUN_1457466ba(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (*param_1 == 0) {
    plVar1 = (longlong *)*param_3;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)param_3[1];
  }
  else {
    FUN_145746b8c(*param_1,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 1457466fc FUN_1457466fc body=55 status=ok
// SIG undefined FUN_1457466fc(void)

ulonglong FUN_1457466fc(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 != *param_2) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != param_2[1])) {
    cVar1 = FUN_144729dda();
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(param_2);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 145746734 FUN_145746734 body=132 status=ok
// SIG undefined FUN_145746734(void)

void FUN_145746734(longlong param_1,int param_2)

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



// FUNCTION 1457467b8 FUN_1457467b8 body=99 status=ok
// SIG undefined FUN_1457467b8(void)

void FUN_1457467b8(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_145746a1c();
  if (iVar2 != -1) {
    iVar1 = (int)param_1[0x5b];
    *(uint *)(param_1 + 0x5b) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x2dc) < iVar1 + 1U) {
      FUN_1446f48e2(param_1 + 0x5a,iVar1);
    }
    *(int *)(param_1[0x5a] + (longlong)iVar1 * 4) = iVar2;
                    /* WARNING: Could not recover jumptable at 0x00014574680b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x180))(param_1);
    return;
  }
  return;
}



// FUNCTION 14574681c FUN_14574681c body=112 status=ok
// SIG undefined FUN_14574681c(void)

void FUN_14574681c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,8);
  }
  return;
}



// FUNCTION 14574688c FUN_14574688c body=61 status=ok
// SIG undefined FUN_14574688c(void)

void FUN_14574688c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_1457468ca(param_1);
    return;
  }
  FUN_1410a5d35(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1457468ca FUN_1457468ca body=58 status=ok
// SIG undefined FUN_1457468ca(void)

void FUN_1457468ca(undefined8 *param_1,int param_2)

{
  FUN_1410a5d35(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1457469ac(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145746904 FUN_145746904 body=168 status=ok
// SIG undefined FUN_145746904(void)

undefined8 * FUN_145746904(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140716578(param_1 + 2,iVar1,0);
    FUN_140716304(param_1[2],uVar2,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1415eee28(param_1 + 4,iVar1,0);
    FUN_1415eed97(param_1[4],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1457469ac FUN_1457469ac body=112 status=ok
// SIG undefined FUN_1457469ac(void)

void FUN_1457469ac(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 145746a1c FUN_145746a1c body=366 status=ok
// SIG undefined FUN_145746a1c(void)

undefined4 FUN_145746a1c(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x2b8);
  uVar7 = 0xffffffff;
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x2b0);
    lVar10 = lVar4;
    do {
      FUN_1400021e4(lVar10 + 4,&local_58);
      if (local_50 == (int)param_2[1]) {
        if (local_50 < 2) {
          bVar11 = true;
        }
        else {
          lVar8 = 0;
          while( true ) {
            uVar1 = *(ushort *)(local_58 + lVar8);
            uVar5 = (uint)uVar1;
            uVar2 = *(ushort *)(*param_2 + lVar8);
            uVar9 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145746aaf;
              }
              iVar6 = uVar5 - uVar9;
              goto LAB_145746af5;
            }
            if (uVar1 == 0) break;
LAB_145746aaf:
            lVar8 = lVar8 + 2;
          }
          iVar6 = 0;
LAB_145746af5:
          bVar11 = iVar6 == 0;
        }
      }
      else {
        bVar11 = (int)param_2[1] + local_50 == 1;
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        uVar5 = (int)(lVar10 - lVar4 >> 4) * -0x55555555;
        if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x2b8))) {
          uVar7 = *(undefined4 *)
                   (*(longlong *)(param_1 + 0x2b0) + (ulonglong)(uVar5 & 0x7fffffff) * 0x30);
        }
        break;
      }
      lVar10 = lVar10 + 0x30;
    } while (lVar10 != (longlong)iVar3 * 0x30 + lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 145746b8c FUN_145746b8c body=467 status=ok
// SIG undefined FUN_145746b8c(void)

longlong * FUN_145746b8c(byte *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*param_1 & 0x6b) != 1) {
    plVar1 = (longlong *)*param_3;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)param_3[1];
    goto LAB_145746ccf;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (((param_1[1] & 8) == 0) ||
     (cVar2 = FUN_145746d60(*(undefined8 *)(param_1 + 8),&local_58,&local_68,&local_78),
     cVar2 == '\0')) {
    plVar1 = (longlong *)*param_3;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)param_3[1];
  }
  else {
    FUN_144a5dc74(&local_88);
    local_48 = local_68;
    local_40 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      local_40 = 0;
    }
    FUN_1446e940c(local_8c,&local_48);
    local_48 = local_58;
    local_40 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      local_40 = 0;
    }
    FUN_1446e940c(local_90,&local_48);
    cVar2 = FUN_140008c02(local_90,local_8c,&local_88,&local_78);
    if (cVar2 == '\0') {
      if ((int)uStack_70 < 2) {
        plVar1 = (longlong *)*param_3;
        *param_2 = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        local_80 = (undefined4)param_3[1];
        goto LAB_145746c8f;
      }
      FUN_140009b9a(param_2,&local_78);
    }
    else {
      *param_2 = (longlong)local_88;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 8))();
      }
LAB_145746c8f:
      *(undefined4 *)(param_2 + 1) = local_80;
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_145746ccf:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145746d60 FUN_145746d60 body=431 status=ok
// SIG undefined FUN_145746d60(void)

undefined8 FUN_145746d60(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined1 auStack_198 [32];
  longlong local_178 [2];
  longlong local_168 [2];
  longlong local_158 [32];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((((param_1 != (char *)0x0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    local_58 = 0;
    sVar3 = strlen(param_1);
    FUN_1446e6fe8(local_158,param_1,sVar3 & 0xffffffff,1);
    FUN_140056680(local_168,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_158[0] = 0;
    local_158[1] = 0;
    FUN_140056680(local_178,&DAT_149e06196);
    cVar2 = FUN_1407cdba6(local_168,local_178,param_2,local_158);
    if (local_178[0] != 0) {
      FUN_1400020a8();
    }
    bVar1 = true;
    if (cVar2 != '\0') {
      FUN_140056680(local_178,&DAT_149e06196);
      cVar2 = FUN_1407cdba6(local_158,local_178,param_3,param_4);
      if (local_178[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar2 != '\0') {
        FUN_140ded26a(param_2);
        FUN_140ded312(param_2);
        FUN_140ded26a(param_3);
        FUN_140ded312(param_3);
        FUN_140ded26a(param_4);
        FUN_140ded312(param_4);
        bVar1 = false;
      }
    }
    if (local_158[0] != 0) {
      FUN_1400020a8();
    }
    if (local_168[0] != 0) {
      FUN_1400020a8();
    }
    uVar4 = 1;
    if (!bVar1) goto LAB_145746ed8;
  }
  uVar4 = 0;
LAB_145746ed8:
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


