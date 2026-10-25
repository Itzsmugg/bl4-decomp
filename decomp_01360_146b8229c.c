// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b8229c FUN_146b8229c body=347 status=ok
// SIG undefined FUN_146b8229c(void)

undefined4 * FUN_146b8229c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b823f8(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_146b824de(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x1c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146b8268e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b823f8 FUN_146b823f8 body=229 status=ok
// SIG undefined FUN_146b823f8(void)

int * FUN_146b823f8(longlong *param_1,int *param_2)

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



// FUNCTION 146b824de FUN_146b824de body=114 status=ok
// SIG undefined FUN_146b824de(void)

undefined8 FUN_146b824de(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_146b82550(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146b8261c(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 146b82550 FUN_146b82550 body=203 status=ok
// SIG undefined FUN_146b82550(void)

int FUN_146b82550(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146b8259a:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146b82610;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146b82610;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146b82601;
    }
  }
  return -1;
LAB_146b82610:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146b82601:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146b8259a;
}



// FUNCTION 146b8261c FUN_146b8261c body=114 status=ok
// SIG undefined FUN_146b8261c(void)

void FUN_146b8261c(longlong *param_1,int param_2)

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



// FUNCTION 146b8268e FUN_146b8268e body=476 status=ok
// SIG undefined FUN_146b8268e(void)

void FUN_146b8268e(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x20;
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
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
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



// FUNCTION 146b8286c FUN_146b8286c body=133 status=ok
// SIG undefined FUN_146b8286c(void)

longlong FUN_146b8286c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_146b828f2();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x70;
    if (lVar3 + lVar2 != 0) goto LAB_146b828a5;
  }
  local_30 = param_3;
  FUN_146b829be(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x70;
LAB_146b828a5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b828f2 FUN_146b828f2 body=203 status=ok
// SIG undefined FUN_146b828f2(void)

int FUN_146b828f2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146b8293c:
      lVar10 = (longlong)iVar1 * 0x70;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146b829b2;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146b829b2;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146b829a3;
    }
  }
  return -1;
LAB_146b829b2:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146b829a3:
  iVar1 = *(int *)(lVar4 + 0x68 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146b8293c;
}



// FUNCTION 146b829be FUN_146b829be body=272 status=ok
// SIG undefined FUN_146b829be(void)

undefined4 * FUN_146b829be(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_146b82ad0(param_1,local_48);
  FUN_146b82c1c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x68) = 0xffffffff;
  cVar1 = FUN_146b82bb2(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x6c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x68) =
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
      FUN_146b82db8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b82ad0 FUN_146b82ad0 body=226 status=ok
// SIG undefined FUN_146b82ad0(void)

int * FUN_146b82ad0(longlong *param_1,int *param_2)

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
      FUN_140275bcc(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 146b82bb2 FUN_146b82bb2 body=105 status=ok
// SIG undefined FUN_146b82bb2(void)

undefined8 FUN_146b82bb2(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_146b828f2(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x70 + *param_1);
    FUN_146b489b4(_Dst);
    memmove(_Dst,param_3,0x68);
    FUN_146b82d44(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 146b82c1c FUN_146b82c1c body=177 status=ok
// SIG undefined FUN_146b82c1c(void)

undefined8 FUN_146b82c1c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [40];
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  local_7e = 0;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_146b82cce(param_2,*param_1,&local_80);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b82cce FUN_146b82cce body=118 status=ok
// SIG undefined FUN_146b82cce(void)

undefined8 * FUN_146b82cce(undefined8 *param_1,undefined8 *param_2,undefined2 *param_3)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)(param_3 + 1);
  *(undefined2 *)(param_1 + 2) = *param_3;
  FUN_145aeb3d6(param_1 + 3,param_3 + 4);
  return param_1;
}



// FUNCTION 146b82d44 FUN_146b82d44 body=116 status=ok
// SIG undefined FUN_146b82d44(void)

void FUN_146b82d44(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
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



// FUNCTION 146b82db8 FUN_146b82db8 body=476 status=ok
// SIG undefined FUN_146b82db8(void)

void FUN_146b82db8(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x70;
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
        *(int *)(lVar3 + 0x6c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x68 + lVar11) =
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



// FUNCTION 146b82fb0 FUN_146b82fb0 body=29 status=ok
// SIG undefined FUN_146b82fb0(void)

undefined8 FUN_146b82fb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b82fce FUN_146b82fce body=184 status=ok
// SIG undefined FUN_146b82fce(void)

undefined8 FUN_146b82fce(longlong param_1)

{
  undefined1 auStack_e8 [32];
  undefined **local_c8 [5];
  byte local_a0;
  byte local_9f;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0x90);
  FUN_144869430(local_c8);
  local_38 = 0;
  local_c8[0] = &PTR_FUN_149e1e050;
  local_28 = 0x7fffffffffffffff;
  local_a0 = local_a0 | 1;
  local_9f = local_9f | 1;
  local_30 = param_1 + 8;
  FUN_1408383eb(local_c8,&local_20);
  FUN_144a7fc42(local_c8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b83088 FUN_146b83088 body=135 status=ok
// SIG undefined FUN_146b83088(void)

longlong FUN_146b83088(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_146b83110();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_146b830c2;
  }
  local_30 = param_3;
  FUN_146b83184(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_146b830c2:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b83110 FUN_146b83110 body=115 status=ok
// SIG undefined FUN_146b83110(void)

int FUN_146b83110(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b83184 FUN_146b83184 body=286 status=ok
// SIG undefined FUN_146b83184(void)

undefined4 * FUN_146b83184(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b832a4(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  FUN_146b7af9d(0,0);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_146b8338a(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146b8347c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b832a4 FUN_146b832a4 body=230 status=ok
// SIG undefined FUN_146b832a4(void)

int * FUN_146b832a4(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146b8338a FUN_146b8338a body=128 status=ok
// SIG undefined FUN_146b8338a(void)

undefined8 FUN_146b8338a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_146b83110(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_146b7af9d(*(undefined8 *)(puVar1 + 4),puVar1[6]);
    if (*(longlong *)(puVar1 + 4) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146b8340a(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 146b8340a FUN_146b8340a body=114 status=ok
// SIG undefined FUN_146b8340a(void)

void FUN_146b8340a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 146b8347c FUN_146b8347c body=443 status=ok
// SIG undefined FUN_146b8347c(void)

void FUN_146b8347c(longlong *param_1)

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
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
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



// FUNCTION 146b83638 FUN_146b83638 body=132 status=ok
// SIG undefined FUN_146b83638(void)

void FUN_146b83638(longlong param_1,int param_2)

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



// FUNCTION 146b836be FUN_146b836be body=147 status=ok
// SIG undefined FUN_146b836be(void)

void FUN_146b836be(longlong param_1,int param_2)

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



// FUNCTION 146b8376a FUN_146b8376a body=29 status=ok
// SIG undefined FUN_146b8376a(void)

undefined8 FUN_146b8376a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b83788 FUN_146b83788 body=62 status=ok
// SIG undefined FUN_146b83788(void)

void FUN_146b83788(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b837c6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 146b837c6 FUN_146b837c6 body=112 status=ok
// SIG undefined FUN_146b837c6(void)

ulonglong FUN_146b837c6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146b83800;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,4);
      param_2 = param_2 / 0x18;
    }
  }
LAB_146b83800:
  return param_2 & 0xffffffff;
}



// FUNCTION 146b83836 FUN_146b83836 body=29 status=ok
// SIG undefined FUN_146b83836(void)

undefined8 FUN_146b83836(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b83870 FUN_146b83870 body=93 status=ok
// SIG undefined FUN_146b83870(void)

void FUN_146b83870(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f34060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f339f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b838ce FUN_146b838ce body=93 status=ok
// SIG undefined FUN_146b838ce(void)

void FUN_146b838ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f34060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f339f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b8392c FUN_146b8392c body=126 status=ok
// SIG undefined FUN_146b8392c(void)

void FUN_146b8392c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f34060;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f339f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b8399b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b839b8 FUN_146b839b8 body=21 status=ok
// SIG undefined FUN_146b839b8(void)

undefined8 FUN_146b839b8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b839cd FUN_146b839cd body=40 status=ok
// SIG undefined FUN_146b839cd(void)

void FUN_146b839cd(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 146b839f6 FUN_146b839f6 body=147 status=ok
// SIG undefined FUN_146b839f6(void)

void FUN_146b839f6(longlong param_1,int param_2)

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



// FUNCTION 146b83a8a FUN_146b83a8a body=59 status=ok
// SIG undefined FUN_146b83a8a(void)

void FUN_146b83a8a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 146b83ac6 FUN_146b83ac6 body=147 status=ok
// SIG undefined FUN_146b83ac6(void)

void FUN_146b83ac6(longlong param_1,int param_2)

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



// FUNCTION 146b83b5a FUN_146b83b5a body=11 status=ok
// SIG undefined FUN_146b83b5a(void)

void FUN_146b83b5a(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 146b83b66 FUN_146b83b66 body=132 status=ok
// SIG undefined FUN_146b83b66(void)

void FUN_146b83b66(longlong param_1,int param_2)

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



// FUNCTION 146b83bec FUN_146b83bec body=88 status=ok
// SIG undefined FUN_146b83bec(void)

void FUN_146b83bec(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 146b83c44 FUN_146b83c44 body=47 status=ok
// SIG undefined FUN_146b83c44(void)

void FUN_146b83c44(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_146b83c74(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 146b83c74 FUN_146b83c74 body=157 status=ok
// SIG undefined FUN_146b83c74(void)

undefined8 * FUN_146b83c74(undefined8 *param_1,undefined8 *param_2)

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
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1417246d8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 146b83d12 FUN_146b83d12 body=33 status=ok
// SIG undefined FUN_146b83d12(void)

void FUN_146b83d12(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x20)) {
  case 0:
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
                    /* WARNING: Could not recover jumptable at 0x000146b83d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
    return;
  case 2:
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return;
  }
  if (lVar4 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar4);
    return;
  }
  return;
}



// FUNCTION 146b83d26 FUN_146b83d26 body=29 status=ok
// SIG undefined FUN_146b83d26(void)

undefined8 FUN_146b83d26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b83d44 caseD_0 body=56 status=ok
// SIG undefined caseD_0(void)

void switchD_146b83d21::caseD_0(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b83d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b83d8c FUN_146b83d8c body=122 status=ok
// SIG undefined FUN_146b83d8c(void)

undefined8 * FUN_146b83d8c(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_149f340d0;
  puVar2 = (undefined8 *)*param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return param_1;
}



// FUNCTION 146b83e06 FUN_146b83e06 body=38 status=ok
// SIG undefined FUN_146b83e06(void)

void FUN_146b83e06(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b6f244(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 146b83e2c FUN_146b83e2c body=48 status=ok
// SIG undefined FUN_146b83e2c(void)

void FUN_146b83e2c(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}



// FUNCTION 146b83e5c FUN_146b83e5c body=143 status=ok
// SIG undefined FUN_146b83e5c(void)

void FUN_146b83e5c(longlong param_1,int param_2)

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



// FUNCTION 146b83eec FUN_146b83eec body=62 status=ok
// SIG undefined FUN_146b83eec(void)

void FUN_146b83eec(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b83f2a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 146b83f2a FUN_146b83f2a body=104 status=ok
// SIG undefined FUN_146b83f2a(void)

ulonglong FUN_146b83f2a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x68) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146b83f60;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x68,8);
      param_2 = param_2 / 0x68;
    }
  }
LAB_146b83f60:
  return param_2 & 0xffffffff;
}



// FUNCTION 146b83f92 FUN_146b83f92 body=161 status=ok
// SIG undefined FUN_146b83f92(void)

void FUN_146b83f92(longlong *param_1,longlong param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    FUN_145aeb3d6(local_90,param_2);
    local_40 = *(undefined4 *)(param_2 + 0x50);
    local_38 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
    local_30 = *(undefined4 *)(param_2 + 0x60);
    local_2c = *(undefined4 *)(param_2 + 100);
    *(undefined8 *)(param_2 + 0x60) = 0;
    local_28 = *(undefined8 *)(param_2 + 0x68);
    (**(code **)(*param_1 + 0x60))(param_1,local_90);
  }
  FUN_146b84034(param_2);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b84034 FUN_146b84034 body=56 status=ok
// SIG undefined FUN_146b84034(void)

void FUN_146b84034(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1);
  return;
}



// FUNCTION 146b8406c FUN_146b8406c body=48 status=ok
// SIG undefined FUN_146b8406c(void)

void FUN_146b8406c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x68,8);
  }
  return;
}



// FUNCTION 146b840aa FUN_146b840aa body=132 status=ok
// SIG undefined FUN_146b840aa(void)

void FUN_146b840aa(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b84130 FUN_146b84130 body=115 status=ok
// SIG undefined FUN_146b84130(void)

int FUN_146b84130(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b841a4 FUN_146b841a4 body=305 status=ok
// SIG undefined FUN_146b841a4(void)

undefined4 * FUN_146b841a4(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b842d6(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar5 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar5;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 2) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar2;
  *(undefined4 *)(local_40 + 3) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar4;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_146b843bc(param_1,uVar7,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x24) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146b8448c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b842d6 FUN_146b842d6 body=230 status=ok
// SIG undefined FUN_146b842d6(void)

int * FUN_146b842d6(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146b843bc FUN_146b843bc body=93 status=ok
// SIG undefined FUN_146b843bc(void)

undefined8 FUN_146b843bc(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_146b84130(), iVar10 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146b8441a(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 146b8441a FUN_146b8441a body=114 status=ok
// SIG undefined FUN_146b8441a(void)

void FUN_146b8441a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 146b8448c FUN_146b8448c body=443 status=ok
// SIG undefined FUN_146b8448c(void)

void FUN_146b8448c(longlong *param_1)

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
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
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



// FUNCTION 146b84648 FUN_146b84648 body=142 status=ok
// SIG undefined FUN_146b84648(void)

longlong FUN_146b84648(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_144a7df4c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_146b84681;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_146b846d8(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_146b84681:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b846d8 FUN_146b846d8 body=318 status=ok
// SIG undefined FUN_146b846d8(void)

undefined4 *
FUN_146b846d8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409bc900(param_1,local_58);
  param_4 = (undefined8 *)*param_4;
  *local_50 = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_50 + 1) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_50 + 0xc) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  *(undefined4 *)(local_50 + 2) = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1409bc7bc(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1409bd292(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b84817 FUN_146b84817 body=38 status=ok
// SIG undefined FUN_146b84817(void)

void FUN_146b84817(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b70b9a(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 146b8483e FUN_146b8483e body=93 status=ok
// SIG undefined FUN_146b8483e(void)

void FUN_146b8483e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1467f45e0(param_1,param_2,1);
  return;
}



// FUNCTION 146b8489c FUN_146b8489c body=135 status=ok
// SIG undefined FUN_146b8489c(void)

longlong FUN_146b8489c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_146b84924();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_146b848d6;
  }
  local_30 = param_3;
  FUN_146b849f0(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_146b848d6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b84924 FUN_146b84924 body=203 status=ok
// SIG undefined FUN_146b84924(void)

int FUN_146b84924(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146b8496e:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146b849e4;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146b849e4;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146b849d5;
    }
  }
  return -1;
LAB_146b849e4:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146b849d5:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146b8496e;
}



// FUNCTION 146b849f0 FUN_146b849f0 body=298 status=ok
// SIG undefined FUN_146b849f0(void)

undefined4 * FUN_146b849f0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b84b1c(param_1,local_48);
  param_4 = (undefined8 *)*param_4;
  *local_40 = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar1 = FUN_146b84c02(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
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
      FUN_146b84ce6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b84b1c FUN_146b84b1c body=230 status=ok
// SIG undefined FUN_146b84b1c(void)

int * FUN_146b84b1c(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146b84c02 FUN_146b84c02 body=114 status=ok
// SIG undefined FUN_146b84c02(void)

undefined8 FUN_146b84c02(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_146b84924(), iVar9 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(plVar1 + 2) = param_3[4];
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
    *(undefined4 *)(plVar1 + 3) = uVar7;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_146b84c74(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 146b84c74 FUN_146b84c74 body=114 status=ok
// SIG undefined FUN_146b84c74(void)

void FUN_146b84c74(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 146b84ce6 FUN_146b84ce6 body=476 status=ok
// SIG undefined FUN_146b84ce6(void)

void FUN_146b84ce6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
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
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 146b84ec4 FUN_146b84ec4 body=147 status=ok
// SIG undefined FUN_146b84ec4(void)

void FUN_146b84ec4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b84f58 FUN_146b84f58 body=937 status=ok
// SIG undefined FUN_146b84f58(void)

void FUN_146b84f58(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  longlong *plVar13;
  int iVar14;
  uint *puVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 0x14 + -0x14;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar13 = &local_348;
    do {
      puVar7 = (uint *)*plVar13;
      puVar15 = (uint *)plVar13[1];
      iVar14 = (int)plVar13[2];
      iVar8 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar7) >> 2);
      if (iVar14 != 0) {
LAB_146b84ff9:
        uVar9 = iVar8 * -0x33333333 + 1;
        if (8 < (int)uVar9) {
          uVar10 = (ulonglong)(uVar9 >> 1);
          uVar9 = puVar7[uVar10 * 5 + 4];
          uVar1 = *(undefined8 *)(puVar7 + uVar10 * 5);
          uVar2 = *(undefined8 *)(puVar7 + uVar10 * 5 + 2);
          puVar7[uVar10 * 5 + 4] = puVar7[4];
          uVar3 = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)(puVar7 + uVar10 * 5) = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar7 + uVar10 * 5 + 2) = uVar3;
          puVar7[4] = uVar9;
          *(undefined8 *)puVar7 = uVar1;
          *(undefined8 *)(puVar7 + 2) = uVar2;
          puVar11 = puVar15 + 5;
          puVar6 = puVar7;
          do {
            puVar6 = puVar6 + 5;
            if (puVar6 <= puVar15) {
              while (*puVar6 <= *puVar7) {
                if (((*puVar7 <= *puVar6) &&
                    ((puVar7[1] < puVar6[1] ||
                     ((puVar7[1] == puVar6[1] &&
                      ((puVar7[2] < puVar6[2] ||
                       ((puVar7[2] == puVar6[2] &&
                        ((puVar7[3] < puVar6[3] ||
                         ((puVar7[3] == puVar6[3] && ((int)puVar7[4] < (int)puVar6[4]))))))))))))))
                   || (puVar6 = puVar6 + 5, puVar15 < puVar6)) break;
              }
            }
            puVar4 = puVar11 + -5;
            puVar5 = puVar11;
            if (puVar7 < puVar4) {
              do {
                puVar12 = puVar4;
                puVar4 = puVar12;
                puVar5 = puVar11;
                if (puVar11[-5] < *puVar7) break;
                if (puVar11[-5] <= *puVar7) {
                  if (puVar12[1] < puVar7[1]) break;
                  if (puVar12[1] == puVar7[1]) {
                    if (puVar12[2] < puVar7[2]) break;
                    if (puVar12[2] == puVar7[2]) {
                      if (puVar12[3] < puVar7[3]) break;
                      if ((puVar12[3] == puVar7[3]) && ((int)puVar12[4] < (int)puVar7[4])) {
                        puVar5 = puVar12 + 5;
                        break;
                      }
                    }
                  }
                }
                puVar4 = puVar12 + -5;
                puVar11 = puVar12;
                puVar5 = puVar12;
              } while (puVar7 < puVar4);
            }
            puVar11 = puVar4;
            if (puVar11 < puVar6) goto LAB_146b85158;
            uVar9 = puVar6[4];
            uVar1 = *(undefined8 *)puVar6;
            uVar2 = *(undefined8 *)(puVar6 + 2);
            puVar6[4] = puVar11[4];
            uVar3 = *(undefined8 *)(puVar11 + 2);
            *(undefined8 *)puVar6 = *(undefined8 *)puVar11;
            *(undefined8 *)(puVar6 + 2) = uVar3;
            puVar11[4] = uVar9;
            *(undefined8 *)puVar11 = uVar1;
            *(undefined8 *)(puVar11 + 2) = uVar2;
          } while( true );
        }
        for (; puVar6 = puVar7, puVar11 = puVar7, puVar7 < puVar15; puVar15 = puVar15 + -5) {
          while (puVar11 = puVar11 + 5, puVar11 <= puVar15) {
            if ((*puVar6 < *puVar11) ||
               ((*puVar6 <= *puVar11 &&
                ((puVar6[1] < puVar11[1] ||
                 ((puVar6[1] == puVar11[1] &&
                  ((puVar6[2] < puVar11[2] ||
                   ((puVar6[2] == puVar11[2] &&
                    ((puVar6[3] < puVar11[3] ||
                     ((puVar6[3] == puVar11[3] && ((int)puVar6[4] < (int)puVar11[4]))))))))))))))))
            {
              puVar6 = puVar11;
            }
          }
          local_38 = puVar6[4];
          local_48 = *(undefined8 *)puVar6;
          uStack_40 = *(undefined8 *)(puVar6 + 2);
          uVar2 = local_48;
          uVar3 = uStack_40;
          puVar6[4] = puVar15[4];
          uVar1 = *(undefined8 *)(puVar15 + 2);
          *(undefined8 *)puVar6 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar6 + 2) = uVar1;
          puVar15[4] = local_38;
          local_48._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
          uStack_40._4_4_ = (uint)((ulonglong)uStack_40 >> 0x20);
          *puVar15 = (uint)local_48;
          puVar15[1] = local_48._4_4_;
          puVar15[2] = (uint)uStack_40;
          puVar15[3] = uStack_40._4_4_;
          local_48 = uVar2;
          uStack_40 = uVar3;
        }
        goto LAB_146b852cd;
      }
LAB_146b85215:
      FUN_146b85302(puVar7);
LAB_146b852cd:
      plVar13 = plVar13 + -3;
    } while (&local_348 <= plVar13);
  }
  if ((local_30 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146b85158:
  local_38 = puVar7[4];
  local_48 = *(undefined8 *)puVar7;
  uStack_40 = *(undefined8 *)(puVar7 + 2);
  uVar2 = local_48;
  uVar3 = uStack_40;
  puVar7[4] = puVar11[4];
  uVar1 = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)puVar7 = *(undefined8 *)puVar11;
  *(undefined8 *)(puVar7 + 2) = uVar1;
  puVar11[4] = local_38;
  local_48._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (uint)((ulonglong)uStack_40 >> 0x20);
  *puVar11 = (uint)local_48;
  puVar11[1] = local_48._4_4_;
  puVar11[2] = (uint)uStack_40;
  puVar11[3] = uStack_40._4_4_;
  iVar14 = iVar14 + -1;
  puVar5 = puVar5 + -10;
  local_48 = uVar2;
  uStack_40 = uVar3;
  if ((longlong)puVar5 - (longlong)puVar7 < (longlong)puVar15 - (longlong)puVar6) {
    if (puVar6 < puVar15) {
      *plVar13 = (longlong)puVar6;
      plVar13[1] = (longlong)puVar15;
      *(int *)(plVar13 + 2) = iVar14;
      plVar13 = plVar13 + 3;
    }
    if (puVar11 <= puVar7 + 5) goto LAB_146b852cd;
  }
  else {
    if (puVar7 + 5 < puVar11) {
      *plVar13 = (longlong)puVar7;
      plVar13[1] = (longlong)puVar5;
      *(int *)(plVar13 + 2) = iVar14;
      plVar13 = plVar13 + 3;
    }
    puVar5 = puVar15;
    puVar7 = puVar6;
    if (puVar15 <= puVar6) goto LAB_146b852cd;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar5 - (longlong)puVar7) >> 2);
  puVar15 = puVar5;
  if (iVar14 == 0) goto LAB_146b85215;
  goto LAB_146b84ff9;
}



// FUNCTION 146b85302 FUN_146b85302 body=901 status=ok
// SIG undefined FUN_146b85302(void)

void FUN_146b85302(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar11 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar16 = iVar11;
joined_r0x000146b8533b:
    do {
      iVar13 = iVar11 * 2 + 1;
      if (iVar13 < (int)param_2) {
        iVar15 = iVar11 * 2 + 2;
        if (iVar15 < (int)param_2) {
          lVar17 = (longlong)iVar15;
          lVar14 = (longlong)iVar13;
          uVar6 = *(uint *)((longlong)param_1 + lVar14 * 0x14);
          uVar7 = *(uint *)((longlong)param_1 + lVar17 * 0x14);
          if ((uVar7 < uVar6) ||
             ((uVar7 <= uVar6 &&
              ((uVar6 = *(uint *)((longlong)param_1 + lVar14 * 0x14 + 4),
               uVar7 = *(uint *)((longlong)param_1 + lVar17 * 0x14 + 4), uVar7 < uVar6 ||
               ((uVar7 == uVar6 &&
                ((uVar6 = *(uint *)((longlong)param_1 + lVar14 * 0x14 + 8),
                 uVar7 = *(uint *)((longlong)param_1 + lVar17 * 0x14 + 8), uVar7 < uVar6 ||
                 ((uVar7 == uVar6 &&
                  ((uVar6 = *(uint *)((longlong)param_1 + lVar17 * 0x14 + 0xc),
                   uVar7 = *(uint *)((longlong)param_1 + lVar14 * 0x14 + 0xc), uVar6 < uVar7 ||
                   ((uVar6 == uVar7 &&
                    (*(int *)((longlong)param_1 + lVar17 * 0x14 + 0x10) <
                     *(int *)((longlong)param_1 + lVar14 * 0x14 + 0x10)))))))))))))))))
          goto LAB_146b85379;
        }
        else {
LAB_146b85379:
          lVar17 = (longlong)iVar13;
          iVar15 = iVar13;
        }
        puVar2 = (uint *)((longlong)param_1 + (longlong)iVar11 * 0x14);
        puVar3 = (uint *)((longlong)param_1 + lVar17 * 0x14);
        if ((*puVar2 < *puVar3) ||
           ((*puVar2 <= *puVar3 &&
            ((puVar2[1] < puVar3[1] ||
             ((puVar2[1] == puVar3[1] &&
              ((puVar2[2] < puVar3[2] ||
               ((puVar2[2] == puVar3[2] &&
                ((puVar2[3] < puVar3[3] ||
                 ((puVar2[3] == puVar3[3] && ((int)puVar2[4] < (int)puVar3[4])))))))))))))))) {
          local_38 = puVar2[4];
          uVar8 = *(undefined8 *)puVar2;
          uVar9 = *(undefined8 *)(puVar2 + 2);
          puVar2[4] = puVar3[4];
          uVar10 = *(undefined8 *)(puVar3 + 2);
          *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
          *(undefined8 *)(puVar2 + 2) = uVar10;
          puVar3[4] = local_38;
          local_48._0_4_ = (uint)uVar8;
          local_48._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
          uStack_40._0_4_ = (uint)uVar9;
          uStack_40._4_4_ = (uint)((ulonglong)uVar9 >> 0x20);
          *puVar3 = (uint)local_48;
          puVar3[1] = local_48._4_4_;
          puVar3[2] = (uint)uStack_40;
          puVar3[3] = uStack_40._4_4_;
          iVar11 = iVar15;
          local_48 = uVar8;
          uStack_40 = uVar9;
          goto joined_r0x000146b8533b;
        }
      }
      bVar18 = iVar16 != 0;
      iVar11 = iVar16 + -1;
      iVar16 = iVar11;
    } while (bVar18);
    if (1 < (int)param_2) {
      uVar12 = (ulonglong)param_2 - 1;
      local_38 = *(uint *)(param_1 + 2);
      uVar8 = *param_1;
      uVar9 = param_1[1];
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + uVar12 * 0x14 + 0x10);
      puVar4 = (undefined8 *)((longlong)param_1 + uVar12 * 0x14);
      uVar10 = puVar4[1];
      *param_1 = *puVar4;
      param_1[1] = uVar10;
      *(uint *)((longlong)param_1 + uVar12 * 0x14 + 0x10) = local_38;
      local_48._0_4_ = (uint)uVar8;
      local_48._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
      uStack_40._0_4_ = (uint)uVar9;
      uStack_40._4_4_ = (uint)((ulonglong)uVar9 >> 0x20);
      puVar5 = (undefined4 *)((longlong)param_1 + uVar12 * 0x14);
      *puVar5 = (uint)local_48;
      puVar5[1] = local_48._4_4_;
      puVar5[2] = (uint)uStack_40;
      puVar5[3] = uStack_40._4_4_;
      local_48 = uVar8;
      uStack_40 = uVar9;
      if (param_2 != 2) {
        do {
          iVar16 = 0;
          iVar11 = 1;
          iVar13 = 0;
          do {
            iVar15 = iVar16 + 2;
            lVar14 = (longlong)iVar15;
            if (lVar14 < (longlong)uVar12) {
              lVar17 = (longlong)iVar11;
              uVar6 = *(uint *)((longlong)param_1 + lVar17 * 0x14);
              uVar7 = *(uint *)((longlong)param_1 + lVar14 * 0x14);
              if ((uVar7 < uVar6) ||
                 ((uVar7 <= uVar6 &&
                  ((uVar6 = *(uint *)((longlong)param_1 + lVar17 * 0x14 + 4),
                   uVar7 = *(uint *)((longlong)param_1 + lVar14 * 0x14 + 4), uVar7 < uVar6 ||
                   ((uVar7 == uVar6 &&
                    ((uVar6 = *(uint *)((longlong)param_1 + lVar17 * 0x14 + 8),
                     uVar7 = *(uint *)((longlong)param_1 + lVar14 * 0x14 + 8), uVar7 < uVar6 ||
                     ((uVar7 == uVar6 &&
                      ((uVar6 = *(uint *)((longlong)param_1 + lVar14 * 0x14 + 0xc),
                       uVar7 = *(uint *)((longlong)param_1 + lVar17 * 0x14 + 0xc), uVar6 < uVar7 ||
                       ((uVar6 == uVar7 &&
                        (*(int *)((longlong)param_1 + lVar14 * 0x14 + 0x10) <
                         *(int *)((longlong)param_1 + lVar17 * 0x14 + 0x10)))))))))))))))))
              goto LAB_146b85514;
            }
            else {
LAB_146b85514:
              lVar14 = (longlong)iVar11;
              iVar15 = iVar11;
            }
            puVar2 = (uint *)((longlong)param_1 + (longlong)iVar13 * 0x14);
            puVar3 = (uint *)((longlong)param_1 + lVar14 * 0x14);
            if ((*puVar3 <= *puVar2) &&
               ((*puVar3 < *puVar2 ||
                ((puVar3[1] <= puVar2[1] &&
                 ((puVar2[1] != puVar3[1] ||
                  ((puVar3[2] <= puVar2[2] &&
                   ((puVar2[2] != puVar3[2] ||
                    ((puVar3[3] <= puVar2[3] &&
                     ((puVar2[3] != puVar3[3] || ((int)puVar3[4] <= (int)puVar2[4]))))))))))))))))
            break;
            uVar6 = puVar2[4];
            uVar8 = *(undefined8 *)puVar2;
            uVar9 = *(undefined8 *)(puVar2 + 2);
            puVar2[4] = puVar3[4];
            uVar10 = *(undefined8 *)(puVar3 + 2);
            *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
            *(undefined8 *)(puVar2 + 2) = uVar10;
            puVar3[4] = uVar6;
            *(undefined8 *)puVar3 = uVar8;
            *(undefined8 *)(puVar3 + 2) = uVar9;
            iVar16 = iVar15 * 2;
            iVar11 = iVar15 * 2 + 1;
            iVar13 = iVar15;
          } while ((longlong)iVar11 < (longlong)uVar12);
          uVar1 = uVar12 - 1;
          local_38 = *(uint *)(param_1 + 2);
          uVar8 = *param_1;
          uVar9 = param_1[1];
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + uVar1 * 0x14 + 0x10);
          puVar4 = (undefined8 *)((longlong)param_1 + uVar1 * 0x14);
          uVar10 = puVar4[1];
          *param_1 = *puVar4;
          param_1[1] = uVar10;
          *(uint *)((longlong)param_1 + uVar1 * 0x14 + 0x10) = local_38;
          local_48._0_4_ = (uint)uVar8;
          local_48._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
          uStack_40._0_4_ = (uint)uVar9;
          uStack_40._4_4_ = (uint)((ulonglong)uVar9 >> 0x20);
          puVar5 = (undefined4 *)((longlong)param_1 + uVar1 * 0x14);
          *puVar5 = (uint)local_48;
          puVar5[1] = local_48._4_4_;
          puVar5[2] = (uint)uStack_40;
          puVar5[3] = uStack_40._4_4_;
          bVar18 = 2 < uVar12;
          uVar12 = uVar1;
          local_48 = uVar8;
          uStack_40 = uVar9;
        } while (bVar18);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b85688 FUN_146b85688 body=155 status=ok
// SIG undefined FUN_146b85688(void)

void FUN_146b85688(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x1c + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
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
      puVar7 = puVar7 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146b85732 FUN_146b85732 body=29 status=ok
// SIG undefined FUN_146b85732(void)

undefined8 FUN_146b85732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b85750 FUN_146b85750 body=64 status=ok
// SIG undefined FUN_146b85750(void)

undefined8 * FUN_146b85750(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f33e40;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 146b85794 FUN_146b85794 body=81 status=ok
// SIG undefined FUN_146b85794(void)

undefined8 FUN_146b85794(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 146b857ec FUN_146b857ec body=89 status=ok
// SIG undefined FUN_146b857ec(void)

bool FUN_146b857ec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_146b85837;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_146b85837:
  return lVar6 == param_2;
}



// FUNCTION 146b8586e FUN_146b8586e body=118 status=ok
// SIG undefined FUN_146b8586e(void)

void FUN_146b8586e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f33eb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f33e40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146b858e4 FUN_146b858e4 body=118 status=ok
// SIG undefined FUN_146b858e4(void)

void FUN_146b858e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f33eb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f33e40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146b8595a FUN_146b8595a body=156 status=ok
// SIG undefined FUN_146b8595a(void)

void FUN_146b8595a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f33eb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f33e40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b859e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b859f6 FUN_146b859f6 body=98 status=ok
// SIG undefined FUN_146b859f6(void)

void FUN_146b859f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000146b85a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b85a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 146b85a58 FUN_146b85a58 body=94 status=ok
// SIG undefined FUN_146b85a58(void)

ulonglong FUN_146b85a58(longlong param_1)

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
LAB_146b85aab:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146b85aab;
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



// FUNCTION 146b85ab8 FUN_146b85ab8 body=64 status=ok
// SIG undefined FUN_146b85ab8(void)

undefined8 * FUN_146b85ab8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f33f20;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 146b85afc FUN_146b85afc body=81 status=ok
// SIG undefined FUN_146b85afc(void)

undefined8 FUN_146b85afc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 146b85b54 FUN_146b85b54 body=89 status=ok
// SIG undefined FUN_146b85b54(void)

bool FUN_146b85b54(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_146b85b9f;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_146b85b9f:
  return lVar6 == param_2;
}



// FUNCTION 146b85bca FUN_146b85bca body=118 status=ok
// SIG undefined FUN_146b85bca(void)

void FUN_146b85bca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f34060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f33f20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146b85c40 FUN_146b85c40 body=118 status=ok
// SIG undefined FUN_146b85c40(void)

void FUN_146b85c40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f34060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f33f20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146b85cb6 FUN_146b85cb6 body=156 status=ok
// SIG undefined FUN_146b85cb6(void)

void FUN_146b85cb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f34060;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f33f20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b85d42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b85d52 FUN_146b85d52 body=98 status=ok
// SIG undefined FUN_146b85d52(void)

void FUN_146b85d52(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000146b85d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b85daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 146b85db4 FUN_146b85db4 body=94 status=ok
// SIG undefined FUN_146b85db4(void)

ulonglong FUN_146b85db4(longlong param_1)

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
LAB_146b85e07:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146b85e07;
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



// FUNCTION 146b85e12 FUN_146b85e12 body=115 status=ok
// SIG undefined FUN_146b85e12(void)

int FUN_146b85e12(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x48) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x48) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x48) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x48) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x48 + 0x40);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b85e85 FUN_146b85e85 body=97 status=ok
// SIG undefined FUN_146b85e85(void)

undefined8 * FUN_146b85e85(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149f33ff0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar1[3] = puVar2;
  puVar1[2] = puVar2;
  return puVar1;
}



// FUNCTION 146b85ef0 FUN_146b85ef0 body=29 status=ok
// SIG undefined FUN_146b85ef0(void)

undefined8 FUN_146b85ef0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b85f0e FUN_146b85f0e body=63 status=ok
// SIG undefined FUN_146b85f0e(void)

void FUN_146b85f0e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 146b85f4e FUN_146b85f4e body=135 status=ok
// SIG undefined FUN_146b85f4e(void)

longlong FUN_146b85f4e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_146b85e12();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x48 != 0) goto LAB_146b85f88;
  }
  local_30 = param_3;
  FUN_146b85fd6(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_146b85f88:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x48 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b85fd6 FUN_146b85fd6 body=289 status=ok
// SIG undefined FUN_146b85fd6(void)

undefined4 * FUN_146b85fd6(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b860f8(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[7] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  cVar2 = FUN_146b861de(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x44) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146b862d6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b860f8 FUN_146b860f8 body=230 status=ok
// SIG undefined FUN_146b860f8(void)

int * FUN_146b860f8(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 146b861de FUN_146b861de body=133 status=ok
// SIG undefined FUN_146b861de(void)

undefined8 FUN_146b861de(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_146b85e12(), iVar17 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x48);
    if (*(longlong *)(puVar1 + 6) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    uVar14 = param_3[0xd];
    uVar15 = param_3[0xe];
    uVar16 = param_3[0xf];
    puVar1[0xc] = param_3[0xc];
    puVar1[0xd] = uVar14;
    puVar1[0xe] = uVar15;
    puVar1[0xf] = uVar16;
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146b86264(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 146b86264 FUN_146b86264 body=114 status=ok
// SIG undefined FUN_146b86264(void)

void FUN_146b86264(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 146b862d6 FUN_146b862d6 body=443 status=ok
// SIG undefined FUN_146b862d6(void)

void FUN_146b862d6(longlong *param_1)

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
        lVar2 = *local_80 + (longlong)iVar5 * 0x48;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x44) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x40) =
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



// FUNCTION 146b86492 FUN_146b86492 body=326 status=ok
// SIG undefined FUN_146b86492(void)

undefined4 * FUN_146b86492(longlong param_1,undefined4 *param_2,longlong *param_3)

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
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b865da(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  *puVar2 = 0;
  local_40[6] = *(undefined4 *)(puVar2 + 1);
  local_40[7] = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_146b866c0(param_1,uVar7,local_40,&local_4c);
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
      local_40[9] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[8] = *(undefined4 *)
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
      FUN_146b8681a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b865da FUN_146b865da body=230 status=ok
// SIG undefined FUN_146b865da(void)

int * FUN_146b865da(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146b866c0 FUN_146b866c0 body=115 status=ok
// SIG undefined FUN_146b866c0(void)

undefined8 FUN_146b866c0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_146b86734(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    if (*(longlong *)(puVar1 + 4) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146b867a8(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 146b86734 FUN_146b86734 body=115 status=ok
// SIG undefined FUN_146b86734(void)

int FUN_146b86734(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b867a8 FUN_146b867a8 body=114 status=ok
// SIG undefined FUN_146b867a8(void)

void FUN_146b867a8(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 146b8681a FUN_146b8681a body=443 status=ok
// SIG undefined FUN_146b8681a(void)

void FUN_146b8681a(longlong *param_1)

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
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
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



// FUNCTION 146b869d6 FUN_146b869d6 body=152 status=ok
// SIG undefined FUN_146b869d6(void)

void FUN_146b869d6(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((*(int *)(lVar1 + lVar4 * 0x48) == *param_2) &&
             (*(int *)(lVar1 + 4 + lVar4 * 0x48) == param_2[1])) &&
            (*(int *)(lVar1 + 8 + lVar4 * 0x48) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4 * 0x48) == param_2[3])) {
          FUN_146b86a6e(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x48 + 0x40);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146b86a6e FUN_146b86a6e body=87 status=ok
// SIG undefined FUN_146b86a6e(void)

void FUN_146b86a6e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x48;
  lVar6 = (longlong)*(int *)(lVar1 + 0x44);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x40 + lVar6 * 0x48);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x48 + 0x40);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x40);
  FUN_146b86ac6();
  return;
}



// FUNCTION 146b86ac6 FUN_146b86ac6 body=52 status=ok
// SIG undefined FUN_146b86ac6(void)

void FUN_146b86ac6(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_146b86264(param_1,param_2);
  return;
}



// FUNCTION 146b86afa FUN_146b86afa body=152 status=ok
// SIG undefined FUN_146b86afa(void)

void FUN_146b86afa(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((*(int *)(lVar1 + lVar4 * 0x28) == *param_2) &&
             (*(int *)(lVar1 + 4 + lVar4 * 0x28) == param_2[1])) &&
            (*(int *)(lVar1 + 8 + lVar4 * 0x28) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4 * 0x28) == param_2[3])) {
          FUN_146b86b92(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146b86b92 FUN_146b86b92 body=87 status=ok
// SIG undefined FUN_146b86b92(void)

void FUN_146b86b92(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_146b86bea();
  return;
}



// FUNCTION 146b86bea FUN_146b86bea body=52 status=ok
// SIG undefined FUN_146b86bea(void)

void FUN_146b86bea(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_146b867a8(param_1,param_2);
  return;
}



// FUNCTION 146b86c1e FUN_146b86c1e body=88 status=ok
// SIG undefined FUN_146b86c1e(void)

void FUN_146b86c1e(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x1c) == param_2) {
          FUN_146b86c76(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x1c + *param_1 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146b86c76 FUN_146b86c76 body=101 status=ok
// SIG undefined FUN_146b86c76(void)

void FUN_146b86c76(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x18 + (longlong)param_2 * 0x1c);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x14 + lVar5 * 0x1c);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x1c + 0x14);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x1c + 0x14);
  FUN_146b86cdc();
  return;
}



// FUNCTION 146b86cdc FUN_146b86cdc body=128 status=ok
// SIG undefined FUN_146b86cdc(void)

void FUN_146b86cdc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 146b86d5c FUN_146b86d5c body=287 status=ok
// SIG undefined FUN_146b86d5c(void)

undefined4 * FUN_146b86d5c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b86e7c(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[1] = *puVar1;
  local_40[2] = uVar6;
  local_40[3] = uVar2;
  local_40[4] = uVar3;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_146b86f78(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[6] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[5] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146b87008(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b86e7c FUN_146b86e7c body=251 status=ok
// SIG undefined FUN_146b86e7c(void)

int * FUN_146b86e7c(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 146b86f78 FUN_146b86f78 body=144 status=ok
// SIG undefined FUN_146b86f78(void)

undefined8 FUN_146b86f78(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x1c);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x1c) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          piVar1[4] = param_3[4];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146b86cdc(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[5];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b87008 FUN_146b87008 body=430 status=ok
// SIG undefined FUN_146b87008(void)

void FUN_146b87008(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
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
  uVar5 = local_58;
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
    uVar5 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar6 = local_58._4_4_;
      local_58 = uVar5;
      do {
        lVar3 = *local_70;
        lVar4 = (longlong)iVar6 * 0x1c;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar4);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
        uVar5 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b871b8 FUN_146b871b8 body=303 status=ok
// SIG undefined FUN_146b871b8(void)

undefined4 * FUN_146b871b8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b872e8(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_146b873ce(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b874fe(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b872e8 FUN_146b872e8 body=229 status=ok
// SIG undefined FUN_146b872e8(void)

int * FUN_146b872e8(longlong *param_1,int *param_2)

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



// FUNCTION 146b873ce FUN_146b873ce body=189 status=ok
// SIG undefined FUN_146b873ce(void)

undefined8 FUN_146b873ce(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
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
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_146b8748c(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b8748c FUN_146b8748c body=114 status=ok
// SIG undefined FUN_146b8748c(void)

void FUN_146b8748c(longlong *param_1,int param_2)

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



// FUNCTION 146b874fe FUN_146b874fe body=422 status=ok
// SIG undefined FUN_146b874fe(void)

void FUN_146b874fe(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 146b876a6 FUN_146b876a6 body=596 status=ok
// SIG undefined FUN_146b876a6(void)

undefined8 *
FUN_146b876a6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_149f34140;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  param_1[4] = *param_5;
  *param_5 = 0;
  *(int *)(param_1 + 5) = (int)param_5[1];
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_5 + 0xc);
  param_5[1] = 0;
  param_1[8] = param_5[4];
  lVar3 = param_5[3];
  param_1[6] = param_5[2];
  param_1[7] = lVar3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 4) = 0xff;
  param_1[0x2b] = puVar4;
  param_1[0x2a] = puVar4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar5 = FUN_1405d8a54(1);
  param_1[0x2d] = uVar5;
  FUN_145d28d24(param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  uVar5 = FUN_1405d8a54(1);
  param_1[0x34] = uVar5;
  *(undefined1 *)(param_1 + 0x30) = 1;
  local_98 = param_1[0x2e];
  local_90 = (longlong *)param_1[0x2f];
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  FUN_14614a64a(param_1 + 0x31,&local_98);
  plVar6 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[8] + 8))();
  param_1[0x33] = plVar6;
  local_78 = 0;
  local_68 = &PTR_LAB_149f35b20;
  local_88 = FUN_142959d32;
  local_60 = param_1;
  (**(code **)(*plVar6 + 8))(plVar6);
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b878fc FUN_146b878fc body=594 status=ok
// SIG undefined FUN_146b878fc(void)

void FUN_146b878fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong *local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_149f34140;
  LOCK();
  *(undefined1 *)(param_1 + 0x28) = 0;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[0x2d] + 0x10))();
  (**(code **)(*(longlong *)param_1[0x34] + 0x10))();
  lVar3 = param_1[0x31];
  if (param_1[0x31] != 0) {
    while( true ) {
      do {
        lVar6 = lVar3;
        lVar3 = 0;
      } while (lVar6 == 0);
      plVar7 = *(longlong **)(lVar6 + 0x70);
      cVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar3 = param_1[0x31];
    }
  }
  FUN_14018802a(param_1[0x34]);
  FUN_14018802a(param_1[0x2d]);
  (**(code **)(*(longlong *)param_1[8] + 0x10))((longlong *)param_1[8],param_1[0x33]);
  param_1[0x33] = 0;
  local_30 = -1;
  cVar5 = FUN_146b87b50(param_1 + 0x2a);
  if (cVar5 != '\0') {
    do {
      plVar7 = local_38;
      if (local_30 == '\x01') {
        if (local_38 != (longlong *)0x0) {
          (**(code **)*local_38)(local_38,1);
        }
      }
      else if (local_30 == '\0') {
        lVar3 = *local_38;
        *(undefined1 *)(lVar3 + 0x80) = 10;
        *(undefined8 *)(lVar3 + 0x88) = 0;
        FUN_140b576f0();
        FUN_146b95624(plVar7);
      }
      cVar5 = FUN_146b87b50(param_1 + 0x2a,local_48);
    } while (cVar5 != '\0');
  }
  plVar7 = (longlong *)param_1[0x32];
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
  plVar7 = (longlong *)param_1[0x2f];
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
  while ((undefined8 *)param_1[0x2b] != (undefined8 *)0x0) {
    param_1[0x2b] = *(undefined8 *)param_1[0x2b];
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x1e);
  puVar4 = (undefined8 *)param_1[0x1d];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  if (param_1[0xe] != 0) {
    plVar7 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b87b50 FUN_146b87b50 body=132 status=ok
// SIG undefined FUN_146b87b50(void)

bool FUN_146b87b50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [56];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_146b95598(param_2,lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_30 = 0xff;
    FUN_146b95598(lVar1 + 8);
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b87bd6 FUN_146b87bd6 body=169 status=ok
// SIG undefined FUN_146b87bd6(void)

void FUN_146b87bd6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  FUN_146b87c80(param_1,param_2,param_3);
  FUN_1457adc9c(param_1 + 0xf0,local_2c,param_2,0);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0x124));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  puVar1 = (undefined8 *)*param_3;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b87c80 FUN_146b87c80 body=236 status=ok
// SIG undefined FUN_146b87c80(void)

void FUN_146b87c80(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x160)) {
    do {
      if ((*(byte *)(param_1 + 0x140) & 1) == 0) break;
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x20))(*(longlong **)(param_1 + 0x168),1000,0)
      ;
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x18))();
    } while (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x160));
  }
  LOCK();
  *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
  UNLOCK();
  local_38 = *param_3;
  *param_3 = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_30 = 1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 4) = 0xff;
  FUN_146b95598(puVar2 + 1,&local_48);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x150);
    *(undefined8 **)(param_1 + 0x150) = puVar2;
    UNLOCK();
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000146b87d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x10))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 146b87d6e FUN_146b87d6e body=407 status=ok
// SIG undefined FUN_146b87d6e(void)

undefined8 * FUN_146b87d6e(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  if ((((*(int *)(param_1 + 0xd8) == *param_2) && (*(int *)(param_1 + 0xdc) == param_2[1])) &&
      (*(int *)(param_1 + 0xe0) == param_2[2])) && (*(int *)(param_1 + 0xe4) == param_2[3])) {
    puVar9 = *(undefined8 **)(param_1 + 0xe8);
  }
  else {
    uVar7 = FUN_1447addd0(param_2,0x10);
    iVar8 = FUN_140f5cb3a(param_1 + 0xf0,uVar7,param_2);
    if (iVar8 == -1) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      FUN_146b87f06(param_1,&local_40,param_2);
      while ((*(byte *)(local_40 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(local_40 + 0x70) + 0x20))
                  (*(longlong **)(local_40 + 0x70),0xffffffff,0);
      }
      if (*(char *)(local_40 + 0x80) == '\0') {
        puVar3 = *(undefined8 **)(local_40 + 0x88);
        iVar8 = param_2[1];
        iVar5 = param_2[2];
        iVar6 = param_2[3];
        *(int *)(param_1 + 0xd8) = *param_2;
        *(int *)(param_1 + 0xdc) = iVar8;
        *(int *)(param_1 + 0xe0) = iVar5;
        *(int *)(param_1 + 0xe4) = iVar6;
        puVar4 = *(undefined8 **)(param_1 + 0xe8);
        puVar9 = puVar4;
        if ((puVar4 != puVar3) &&
           (*(undefined8 **)(param_1 + 0xe8) = puVar3, puVar9 = puVar3, puVar4 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar4)(puVar4,1);
          puVar9 = *(undefined8 **)(param_1 + 0xe8);
        }
      }
      else {
        FUN_146b71246(param_1 + 0xf0,param_2);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                  (*(longlong **)(param_1 + 0x18),
                   *(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0x124));
        puVar9 = (undefined8 *)0x0;
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
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar9;
}



// FUNCTION 146b87f06 FUN_146b87f06 body=339 status=ok
// SIG undefined FUN_146b87f06(void)

longlong * FUN_146b87f06(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x160)) {
    do {
      if ((*(byte *)(param_1 + 0x140) & 1) == 0) break;
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x20))(*(longlong **)(param_1 + 0x168),1000,0)
      ;
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x18))();
    } while (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x160));
  }
  LOCK();
  *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
  UNLOCK();
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  FUN_146b95766(plVar3);
  *(undefined1 *)(plVar3 + 2) = 1;
  *param_2 = *plVar3;
  lVar2 = plVar3[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    lVar2 = *plVar3;
    *(undefined1 *)(lVar2 + 0x80) = 10;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    FUN_140b576f0();
  }
  else {
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_40 = 0;
    local_48 = plVar3;
    puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 4) = 0xff;
    FUN_146b95598(puVar4 + 1,&local_58);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0x150);
      *(undefined8 **)(param_1 + 0x150) = puVar4;
      UNLOCK();
      LOCK();
      *puVar1 = puVar4;
      UNLOCK();
    }
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x10))();
    plVar3 = (longlong *)0x0;
  }
  FUN_146b95624(plVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8805a FUN_146b8805a body=426 status=ok
// SIG undefined FUN_146b8805a(void)

longlong * FUN_146b8805a(longlong param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  *param_2 = 0;
  if ((((*(int *)(param_1 + 0xd8) == *param_3) && (*(int *)(param_1 + 0xdc) == param_3[1])) &&
      (*(int *)(param_1 + 0xe0) == param_3[2])) && (*(int *)(param_1 + 0xe4) == param_3[3])) {
    plVar6 = (longlong *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (plVar6 != param_2) {
      *param_2 = *plVar6;
      *plVar6 = 0;
    }
  }
  else {
    uVar4 = FUN_1447addd0(param_3,0x10);
    iVar5 = FUN_140f5cb3a(param_1 + 0xf0,uVar4,param_3);
    if (iVar5 != -1) {
      FUN_146b87f06(param_1,&local_50,param_3);
      while ((*(byte *)(local_50 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(local_50 + 0x70) + 0x20))
                  (*(longlong **)(local_50 + 0x70),0xffffffff,0);
      }
      cVar2 = *(char *)(local_50 + 0x80);
      puVar3 = (undefined8 *)*param_2;
      if ((puVar3 != *(undefined8 **)(local_50 + 0x88)) &&
         (*param_2 = (longlong)*(undefined8 **)(local_50 + 0x88), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      if (cVar2 != '\0') {
        FUN_146b71246(param_1 + 0xf0,param_3);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                  (*(longlong **)(param_1 + 0x18),
                   *(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0x124));
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_48 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8820c FUN_146b8820c body=237 status=ok
// SIG undefined FUN_146b8820c(void)

void FUN_146b8820c(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0xa0) = param_2[6];
  *(longlong *)(param_1 + 0xa8) = lVar15;
  *(longlong *)(param_1 + 0x90) = lVar13;
  *(longlong *)(param_1 + 0x98) = lVar14;
  *(longlong *)(param_1 + 0x80) = lVar11;
  *(longlong *)(param_1 + 0x88) = lVar12;
  *(longlong *)(param_1 + 0x70) = lVar9;
  *(longlong *)(param_1 + 0x78) = lVar10;
  local_68._0_4_ = (undefined4)uVar1;
  local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar2;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_58._0_4_ = (undefined4)uVar3;
  local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar4;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_48._0_4_ = (undefined4)uVar5;
  local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar6;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_38._0_4_ = (undefined4)uVar7;
  local_38._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar8;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_38._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_40._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_68;
  *(undefined4 *)((longlong)param_2 + 4) = local_68._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
  local_68 = uVar1;
  uStack_60 = uVar2;
  local_58 = uVar3;
  uStack_50 = uVar4;
  local_48 = uVar5;
  uStack_40 = uVar6;
  local_38 = uVar7;
  uStack_30 = uVar8;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8830c FUN_146b8830c body=133 status=ok
// SIG undefined FUN_146b8830c(void)

ulonglong FUN_146b8830c(longlong param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_146b4754e(local_30,param_1);
    lVar1 = FUN_146b47582(local_30);
    uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                     *(int *)(lVar1 + 0x14) == param_2[3] &&
                     (*(int *)(lVar1 + 0x10) == param_2[2] &&
                     (*(int *)(lVar1 + 0xc) == param_2[1] && *(int *)(lVar1 + 8) == *param_2)));
    FUN_146b47578(local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b88392 FUN_146b88392 body=95 status=ok
// SIG undefined FUN_146b88392(void)

void FUN_146b88392(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  pcVar1 = *(code **)(param_1 + 0x70);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x80);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000146b883ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 146b883f2 FUN_146b883f2 body=176 status=ok
// SIG undefined FUN_146b883f2(void)

undefined8 FUN_146b883f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14001cc68(0x1b0,0x10);
  local_58 = *param_4;
  local_68 = &local_58;
  *param_4 = 0;
  local_50 = (undefined4)param_4[1];
  local_4c = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  local_38 = param_4[4];
  local_48 = (undefined4)param_4[2];
  uStack_44 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_40 = (undefined4)param_4[3];
  uStack_3c = *(undefined4 *)((longlong)param_4 + 0x1c);
  FUN_146b876a6(uVar1,param_1,param_2,param_3);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b884a4 FUN_146b884a4 body=127 status=ok
// SIG undefined FUN_146b884a4(void)

void FUN_146b884a4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar7 = param_1[3];
  uVar8 = param_1[4];
  uVar1 = *(undefined1 *)(param_1 + 5);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 6);
  *puVar9 = &PTR_FUN_149f34188;
  puVar9[1] = param_2;
  puVar9[2] = uVar5;
  puVar9[3] = uVar6;
  *(undefined4 *)(puVar9 + 4) = uVar2;
  puVar9[5] = uVar7;
  puVar9[6] = uVar8;
  *(undefined1 *)(puVar9 + 7) = uVar1;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar3;
  *(undefined4 *)(puVar9 + 8) = uVar4;
  *(undefined4 *)(puVar9 + 9) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar3;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar9 + 100) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x6c) = 0x1000000004;
  return;
}



// FUNCTION 146b88524 FUN_146b88524 body=268 status=ok
// SIG undefined FUN_146b88524(void)

undefined8 *
FUN_146b88524(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  *(undefined4 *)(param_1 + 6) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
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
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x20),4000);
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 146b88630 FUN_146b88630 body=191 status=ok
// SIG undefined FUN_146b88630(void)

void FUN_146b88630(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  FUN_146b947b8(param_1 + 0x128);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_146b9493c(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_146b94ae2(param_1 + 0x60);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b886e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146b886f0 FUN_146b886f0 body=489 status=ok
// SIG undefined FUN_146b886f0(void)

void FUN_146b886f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar2 = param_1 + 0x70;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x88);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      (**(code **)(**(longlong **)(*local_88 + 8 + (longlong)iStack_6c * 0x20) + 0x118))();
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  plVar1 = (longlong *)(param_1 + 0xb0);
  lVar2 = param_1 + 0xc0;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0xd8) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0xd8);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      LOCK();
      *(undefined1 *)(*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18) + 8) = 1;
      UNLOCK();
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b888da FUN_146b888da body=1923 status=ok
// SIG undefined FUN_146b888da(void)

int FUN_146b888da(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong **pplVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  void *_Src;
  undefined8 *puVar6;
  longlong **pplVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  LPCRITICAL_SECTION p_Var12;
  longlong *plVar13;
  _LIST_ENTRY *p_Var14;
  _LIST_ENTRY *p_Var15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined8 local_a0;
  _RTL_CRITICAL_SECTION *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  DWORD DStack_80;
  DWORD DStack_7c;
  DWORD local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_64;
  longlong *plStack_60;
  longlong **local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  LOCK();
  plVar13 = param_1 + 6;
  lVar17 = *plVar13;
  *(int *)plVar13 = (int)*plVar13 + 1;
  UNLOCK();
  local_64 = (int)lVar17 + 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  local_a8 = (longlong *)0x0;
  local_a0 = (longlong **)((ulonglong)local_a0._4_4_ << 0x20);
  FUN_146b95856(&local_a8,param_3);
  local_98 = (_RTL_CRITICAL_SECTION *)0x0;
  local_90 = (ulonglong)local_90._4_4_ << 0x20;
  FUN_146b958da(&local_98,param_4);
  plStack_60 = (longlong *)&local_64;
  local_58 = &local_a8;
  FUN_146b9595e(param_1 + 0x25,&local_4c,&plStack_60);
  FUN_1449db362(&local_98);
  FUN_1449db362(&local_a8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  cVar9 = FUN_144a791f8(param_2,&DAT_149e3fc1c,4,1);
  if (cVar9 == '\0') {
    plVar13 = (longlong *)FUN_14001cc68(0x10,0x10);
    *plVar13 = 0;
    plVar13[1] = 0;
    local_c8 = plVar13;
    plStack_60 = plVar13;
    FUN_14295516a(param_1,&local_a8,local_64,param_2);
    puVar6 = (undefined8 *)*plVar13;
    *plVar13 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar6 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_a8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_a8)(local_a8,1);
        }
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    local_a8 = (longlong *)&local_64;
    local_a0 = &plStack_60;
    FUN_146b96716(param_1 + 0x16,&local_4c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    plVar13 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      puVar6 = (undefined8 *)*plStack_60;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar6 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      FUN_1400020a8(plVar13);
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],&plStack_60);
    local_a8 = (longlong *)&local_64;
    local_a0 = &plStack_60;
    FUN_146b95e6c(param_1 + 0xc,&local_4c);
    pplVar7 = local_58;
    plVar13 = *(longlong **)(param_1[0xc] + 8 + (longlong)local_4c * 0x20);
    plVar4 = *(longlong **)(param_1[0xc] + 0x10 + (longlong)local_4c * 0x20);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_58 != (longlong **)0x0) {
      LOCK();
      pplVar1 = local_58 + 1;
      *(int *)pplVar1 = *(int *)pplVar1 + -1;
      UNLOCK();
      if (*(int *)pplVar1 == 0) {
        (*(code *)**pplVar7)(pplVar7);
        LOCK();
        piVar2 = (int *)((longlong)pplVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar7)[2])(pplVar7);
        }
      }
    }
    local_c0 = plVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    (**(code **)(*plVar13 + 0x138))(plVar13,1);
    (**(code **)(*plVar13 + 0x68))(plVar13,param_2);
    FUN_140056680(&local_a8,&DAT_149e8e77a);
    (**(code **)(*plVar13 + 0x60))(plVar13,&local_a8);
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    p_Var12 = (LPCRITICAL_SECTION)(**(code **)(*plVar13 + 0xf8))(plVar13);
    iVar11 = local_64;
    EnterCriticalSection(p_Var12);
    if (p_Var12[1].LockCount != 4) {
      FUN_1446efa72(p_Var12 + 1,0,4,0x10);
      p_Var12[1].LockCount = 4;
    }
    p_Var5 = p_Var12[1].DebugInfo;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) {
LAB_146b88b0c:
      *(undefined ***)p_Var5 = &PTR_LAB_149f2ad60;
      LOCK();
      UNLOCK();
      p_Var14 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
      lVar17 = DAT_14c758608 + 1;
      if (p_Var14 == (_LIST_ENTRY *)0x0) {
        LOCK();
        UNLOCK();
        p_Var14 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      (p_Var5->ProcessLocksList).Flink = p_Var14;
      *(undefined ***)p_Var5 = &PTR_FUN_149f35bc0;
      (p_Var5->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
      p_Var5->EntryCount = 0;
      p_Var5->ContentionCount = 0;
      *(longlong **)&p_Var5->Flags = param_1;
      local_64._0_2_ = (undefined2)iVar11;
      local_64._2_2_ = SUB42(iVar11,2);
      p_Var5[1].Type = (undefined2)local_64;
      p_Var5[1].CreatorBackTraceIndex = local_64._2_2_;
    }
    else {
      iVar10 = (int)plVar4[1];
      do {
        if (iVar10 == 0) goto LAB_146b88b0c;
        LOCK();
        iVar8 = (int)plVar4[1];
        bVar18 = iVar10 == iVar8;
        if (bVar18) {
          *(int *)(plVar4 + 1) = iVar10 + 1;
          iVar8 = iVar10;
        }
        iVar10 = iVar8;
        UNLOCK();
      } while (!bVar18);
      p_Var14 = (_LIST_ENTRY *)*param_1;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(undefined ***)p_Var5 = &PTR_LAB_149f2ad60;
      LOCK();
      UNLOCK();
      p_Var15 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
      lVar17 = DAT_14c758608 + 1;
      if (p_Var15 == (_LIST_ENTRY *)0x0) {
        LOCK();
        UNLOCK();
        p_Var15 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      (p_Var5->ProcessLocksList).Flink = p_Var15;
      *(undefined ***)p_Var5 = &PTR_FUN_149f35bc0;
      (p_Var5->ProcessLocksList).Blink = p_Var14;
      *(longlong **)&p_Var5->EntryCount = plVar4;
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      *(longlong **)&p_Var5->Flags = param_1;
      local_64._0_2_ = (undefined2)iVar11;
      local_64._2_2_ = SUB42(iVar11,2);
      p_Var5[1].Type = (undefined2)local_64;
      p_Var5[1].CreatorBackTraceIndex = local_64._2_2_;
      LOCK();
      plVar16 = plVar4 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
      plVar16 = plVar4 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
      plVar16 = plVar4 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    if (p_Var12 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var12);
    }
    p_Var12 = (LPCRITICAL_SECTION)(**(code **)(*plVar13 + 0xf0))(plVar13);
    local_b8 = (void *)0x0;
    local_b0 = *(int *)(param_2 + 1);
    lVar17 = (longlong)local_b0;
    _Src = (void *)*param_2;
    local_a8 = param_1;
    if (lVar17 == 0) {
      local_ac = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_b0,0);
      memcpy(local_b8,_Src,lVar17 * 2);
    }
    plVar4 = local_c0;
    FUN_146b8905e(&local_a0,local_64,&local_b8);
    EnterCriticalSection(p_Var12);
    if (p_Var12[1].LockCount != 7) {
      FUN_1446efa72(p_Var12 + 1,0,7,0x10);
      p_Var12[1].LockCount = 7;
    }
    pplVar7 = local_a0;
    p_Var5 = p_Var12[1].DebugInfo;
    plVar16 = (longlong *)param_1[1];
    if (plVar16 == (longlong *)0x0) {
LAB_146b88e74:
      *(undefined ***)p_Var5 = &PTR_LAB_149f2a800;
      LOCK();
      UNLOCK();
      p_Var14 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
      lVar17 = DAT_14c758608 + 1;
      if (p_Var14 == (_LIST_ENTRY *)0x0) {
        LOCK();
        UNLOCK();
        p_Var14 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      (p_Var5->ProcessLocksList).Flink = p_Var14;
      *(undefined ***)p_Var5 = &PTR_FUN_149f35c30;
      (p_Var5->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
      p_Var5->EntryCount = 0;
      p_Var5->ContentionCount = 0;
      bVar18 = true;
      plVar16 = (longlong *)0x0;
    }
    else {
      iVar11 = (int)plVar16[1];
      do {
        if (iVar11 == 0) goto LAB_146b88e74;
        LOCK();
        iVar10 = (int)plVar16[1];
        bVar18 = iVar11 == iVar10;
        if (bVar18) {
          *(int *)(plVar16 + 1) = iVar11 + 1;
          iVar10 = iVar11;
        }
        iVar11 = iVar10;
        UNLOCK();
      } while (!bVar18);
      p_Var14 = (_LIST_ENTRY *)*param_1;
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      *(undefined ***)p_Var5 = &PTR_LAB_149f2a800;
      LOCK();
      UNLOCK();
      p_Var15 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
      lVar17 = DAT_14c758608 + 1;
      if (p_Var15 == (_LIST_ENTRY *)0x0) {
        LOCK();
        UNLOCK();
        p_Var15 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      (p_Var5->ProcessLocksList).Flink = p_Var15;
      *(undefined ***)p_Var5 = &PTR_FUN_149f35c30;
      (p_Var5->ProcessLocksList).Blink = p_Var14;
      *(longlong **)&p_Var5->EntryCount = plVar16;
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      bVar18 = false;
    }
    *(longlong **)&p_Var5->Flags = local_a8;
    p_Var5[1].Type = (undefined2)local_a0;
    p_Var5[1].CreatorBackTraceIndex = local_a0._2_2_;
    p_Var5[1].CriticalSection = local_98;
    local_98 = (_RTL_CRITICAL_SECTION *)0x0;
    *(undefined4 *)&p_Var5[1].ProcessLocksList.Flink = (undefined4)local_90;
    *(uint *)((longlong)&p_Var5[1].ProcessLocksList.Flink + 4) = local_90._4_4_;
    local_90 = 0;
    p_Var5[1].Flags = local_78;
    p_Var5[1].CreatorBackTraceIndexHigh = (undefined2)uStack_74;
    p_Var5[1].SpareWORD = uStack_74._2_2_;
    p_Var5[2].Type = (undefined2)uStack_70;
    p_Var5[2].CreatorBackTraceIndex = uStack_70._2_2_;
    *(undefined4 *)&p_Var5[2].field_0x4 = uStack_6c;
    *(undefined4 *)&p_Var5[1].ProcessLocksList.Blink = local_88;
    *(undefined4 *)((longlong)&p_Var5[1].ProcessLocksList.Blink + 4) = uStack_84;
    p_Var5[1].EntryCount = DStack_80;
    p_Var5[1].ContentionCount = DStack_7c;
    local_a0 = pplVar7;
    if (!bVar18) {
      LOCK();
      plVar3 = plVar16 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      LOCK();
      plVar3 = plVar16 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      LOCK();
      plVar3 = plVar16 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (p_Var12 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var12);
    }
    if (local_98 != (_RTL_CRITICAL_SECTION *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*plVar13 + 0xe8))(plVar13);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar4 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  (**(code **)(*(longlong *)param_1[4] + 8))((longlong *)param_1[4],local_64,param_2);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_64;
}



// FUNCTION 146b8905e FUN_146b8905e body=185 status=ok
// SIG undefined FUN_146b8905e(void)

undefined4 * FUN_146b8905e(undefined4 *param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = param_2;
  if ((longlong *)(param_1 + 2) != param_3) {
    lVar1 = param_3[1];
    *(longlong *)(param_1 + 2) = *param_3;
    *param_3 = 0;
    *(longlong *)(param_1 + 4) = lVar1;
    param_3[1] = 0;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0xffffffff;
  QueryPerformanceCounter(&local_28);
  *(LARGE_INTEGER *)(param_1 + 8) = local_28;
  *(LARGE_INTEGER *)(param_1 + 10) = local_28;
  *(undefined8 *)(param_1 + 0xc) = 0;
  if (*param_3 != 0) {
    FUN_1400020a8();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b89118 FUN_146b89118 body=282 status=ok
// SIG undefined FUN_146b89118(void)

void FUN_146b89118(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar2 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xa0);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x20) == param_2) {
          if ((undefined8 *)(lVar2 + 8) != (undefined8 *)0x0 && lVar2 != 0) {
            (**(code **)(**(longlong **)(lVar2 + 8) + 0x118))();
          }
          break;
        }
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
    }
  }
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar2 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xf0);
    }
    uVar4 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            LOCK();
            *(undefined1 *)(*(longlong *)(puVar1 + 2) + 8) = 1;
            UNLOCK();
          }
          break;
        }
        uVar4 = puVar1[4];
      } while (uVar4 != 0xffffffff);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b89154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 146b89232 FUN_146b89232 body=68 status=ok
// SIG undefined FUN_146b89232(void)

void FUN_146b89232(longlong param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  FUN_146b96bce(param_1 + 0x128,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  FUN_146b89118(param_1,param_2);
  return;
}



// FUNCTION 146b89276 FUN_146b89276 body=168 status=ok
// SIG undefined FUN_146b89276(void)

undefined8 *
FUN_146b89276(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar2 = &PTR_FUN_149f359b0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x188,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149f359d0;
  puVar1 = puVar3 + 2;
  FUN_146b88524(puVar1,param_1,param_2,param_3,param_4);
  puVar2[1] = puVar1;
  puVar2[2] = puVar3;
  FUN_146b94cda(puVar2 + 1,puVar1);
  return puVar2;
}



// FUNCTION 146b8931e FUN_146b8931e body=383 status=ok
// SIG undefined FUN_146b8931e(void)

undefined8 *
FUN_146b8931e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7,longlong *param_8)

{
  int iVar1;
  void *pvVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_149f34240;
  param_1[1] = param_2;
  param_1[2] = param_3;
  FUN_145aeb3d6(param_1 + 3,param_4);
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_5 + 1);
  pvVar2 = (void *)*param_5;
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_6 + 1);
  pvVar2 = (void *)*param_6;
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x11) = param_7;
  param_1[0x12] = param_8;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  local_44 = 0;
  local_48 = 6;
  (**(code **)(*param_8 + 0x18))(param_8);
  *(undefined4 *)(param_4 + 0x48) = 0;
  if (*(longlong *)(param_4 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_4);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b894b4 FUN_146b894b4 body=827 status=ok
// SIG undefined FUN_146b894b4(void)

undefined8 FUN_146b894b4(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10),&local_b8);
  local_100 = (longlong *)((ulonglong)local_100._4_4_ << 0x20);
  local_d8 = CONCAT44(local_d8._4_4_,6);
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))
            (*(longlong **)(param_1 + 0x90),&local_d8,&local_100);
  local_100 = &local_d8;
  FUN_146b4d79c(&local_b8,&local_100);
  FUN_14482b9e8(&local_b8);
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  uStack_c0 = 0;
  iVar7 = 0;
  uStack_d0 = local_a8;
  if (local_90 != 0) {
    FUN_1449c0562(&local_d8);
    iVar7 = local_90;
  }
  uStack_e0 = CONCAT44(uStack_bc,uStack_c0);
  local_e8 = local_c8;
  iStack_e4 = iStack_c4;
  local_f8 = (undefined4)local_d8;
  uStack_f4 = local_d8._4_4_;
  uStack_f0 = (undefined4)uStack_d0;
  uStack_ec = uStack_d0._4_4_;
  local_100 = &local_b8;
  if ((iStack_c4 != iVar7) || (uStack_d0 != local_a8)) {
    local_110 = param_1 + 0x18;
    iVar9 = -1;
    do {
      puVar8 = (undefined8 *)((longlong)iStack_e4 * 0x18 + *local_100);
      if (*(int *)(param_1 + 0x9c) != 0) break;
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                        (*(longlong **)(param_1 + 0x10),puVar8);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10),puVar8);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))
                        (*(longlong **)(param_1 + 0x10),puVar8);
      bVar10 = true;
      if ((char)uVar2 == '\0') {
        iVar4 = *(int *)(puVar8 + 1);
        puVar6 = &DAT_149dfb77a;
        if (iVar4 != 0) {
          puVar6 = (undefined2 *)*puVar8;
        }
        iVar1 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar1 = 0;
        }
        uVar3 = FUN_144a49b4a(iVar1,puVar6);
        iVar4 = FUN_1456cf568(local_110,uVar3,puVar8);
        bVar10 = iVar4 != -1;
      }
      if ((lVar5 != 0) && (bVar10)) {
        FUN_146b899a0(param_1,&local_d8,puVar8);
        FUN_146b897f0(param_1,&local_d8,lVar5,uVar2);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
      }
      iVar9 = iVar9 + 1;
      local_d8 = CONCAT44(local_d8._4_4_,(float)iVar9 / (float)((int)uStack_b0 - local_84));
      local_104 = 6;
      (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))
                (*(longlong **)(param_1 + 0x90),&local_104,&local_d8);
      while ((*(int *)(param_1 + 0x98) != 0 && (*(int *)(param_1 + 0x9c) == 0))) {
        FUN_14000f986(0x3f000000);
      }
      local_e8 = local_e8 & ~uStack_f4;
      FUN_1449c0562(&local_f8);
    } while (local_100 != &local_b8 ||
             ((undefined1 *)CONCAT44(uStack_ec,uStack_f0) != local_a8 || iStack_e4 != iVar7));
  }
  local_100 = (longlong *)CONCAT44(local_100._4_4_,0x3f800000);
  local_d8 = CONCAT44(local_d8._4_4_,6);
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 146b897f0 FUN_146b897f0 body=430 status=ok
// SIG undefined FUN_146b897f0(void)

void FUN_146b897f0(longlong param_1,undefined8 *param_2,longlong param_3,byte param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  undefined7 uVar6;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  bVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                    (*(longlong **)(param_1 + 8),puVar4,&local_4c);
  uVar2 = local_4c;
  if ((bVar3 & (local_4c & 1) == 0) == 0) {
    bVar7 = (byte)((local_4c & 2) >> 1);
    bVar1 = *(byte *)(param_3 + 0x34);
    uVar6 = (undefined7)((ulonglong)param_3 >> 8);
    uVar5 = CONCAT71(uVar6,bVar1);
    uVar10 = uVar5 & 0xffffff02;
    bVar8 = (bool)((byte)uVar10 >> 1);
    bVar3 = bVar3 & (param_4 ^ 1);
    if (((bVar3 ^ 1) != 0) || (((local_4c & 4) == 0) == bVar8)) {
      if ((bVar3 & (local_4c & 2) == 0) == 0) {
        if (*(int *)(param_2 + 1) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)*param_2;
        }
        bVar7 = 0;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),puVar4,0);
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                (*(longlong **)(param_1 + 8),puVar4,CONCAT71((int7)(uVar10 >> 8),bVar8));
    }
    uVar5 = uVar5 & 0xffffff04;
    bVar9 = (byte)uVar5 >> 2;
    if ((bVar3 & ((uVar2 & 8) == 0 ^ bVar9)) == 0) {
      if ((bVar3 == 0) || (bVar7 != 0)) {
        if (*(int *)(param_2 + 1) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)*param_2;
        }
        bVar7 = 0;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),puVar4,0);
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                (*(longlong **)(param_1 + 8),puVar4,CONCAT71((int7)(uVar5 >> 8),bVar9));
    }
    if (((bVar7 ^ bVar1 | bVar3 ^ 1) & 1) != 0) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                (*(longlong **)(param_1 + 8),puVar4,(uint)CONCAT71(uVar6,bVar1) & 0xffffff01);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b899a0 FUN_146b899a0 body=401 status=ok
// SIG undefined FUN_146b899a0(void)

longlong * FUN_146b899a0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  int local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    iVar3 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar3 = 0;
    }
    local_48 = iVar3 + 1 + (uint)(*(int *)(param_1 + 0x80) == 0);
    local_40 = 0;
    FUN_14125bce8(&local_40,*(undefined8 *)(param_1 + 0x78),*(int *)(param_1 + 0x80),0);
    FUN_1401aebe8(&local_40,*param_3,iVar3);
    if (&local_40 == param_2) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_40;
      local_40 = 0;
      *(undefined4 *)(param_2 + 1) = local_38;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_34;
    }
    if ((int)param_2[1] == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                      (*(longlong **)(param_1 + 8),puVar2,&local_40);
    if (cVar1 != '\0') goto LAB_146b89ae4;
  }
  iVar3 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar3 = 0;
  }
  local_48 = iVar3 + 1 + (uint)(*(int *)(param_1 + 0x70) == 0);
  local_40 = 0;
  FUN_14125bce8(&local_40,*(undefined8 *)(param_1 + 0x68),*(int *)(param_1 + 0x70),0);
  FUN_1401aebe8(&local_40,*param_3,iVar3);
  if (&local_40 == param_2) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_40;
    *(undefined4 *)(param_2 + 1) = local_38;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_34;
  }
LAB_146b89ae4:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b89b32 FUN_146b89b32 body=221 status=ok
// SIG undefined FUN_146b89b32(void)

undefined8
FUN_146b89b32(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = FUN_14001cc68(0xa0,0x10);
  iVar1 = *(int *)(param_5 + 8);
  FUN_145aeb3d6(local_98,param_3);
  local_a8 = 1 < iVar1;
  local_a0 = param_6;
  local_b0 = param_5;
  local_b8 = param_4;
  FUN_146b8931e(uVar2,param_1,param_2,local_98);
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_3);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b89c10 FUN_146b89c10 body=422 status=ok
// SIG undefined FUN_146b89c10(void)

void FUN_146b89c10(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f34260;
  param_1[1] = &PTR_FUN_149f342a0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_146b94dcc(param_1 + 0x52);
  while ((undefined8 *)param_1[0x51] != (undefined8 *)0x0) {
    param_1[0x51] = *(undefined8 *)param_1[0x51];
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x3c);
  FUN_146b96da3(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x26);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x1c);
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 2);
  return;
}



// FUNCTION 146b89dcc FUN_146b89dcc body=207 status=ok
// SIG undefined FUN_146b89dcc(void)

undefined8 FUN_146b89dcc(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_a8 [40];
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1461c8dd4(param_3,param_2,param_1 + 0x180);
  FUN_146b35124(param_3,local_80,param_1 + 0x180);
  FUN_146b6df08(param_1 + 0x230,local_80);
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))(*(longlong **)(param_1 + 0x88),local_80);
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_80);
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_3);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b89e9c FUN_146b89e9c body=114 status=ok
// SIG undefined FUN_146b89e9c(void)

bool FUN_146b89e9c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_140f5cb3a(param_1 + 0x180,uVar3,param_2);
  if (iVar4 != -1) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar5 = 0;
    uVar2 = param_2[1];
    puVar5[1] = *param_2;
    puVar5[2] = uVar2;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0x280);
      *(undefined8 **)(param_1 + 0x280) = puVar5;
      UNLOCK();
      LOCK();
      *puVar1 = puVar5;
      UNLOCK();
    }
  }
  return iVar4 != -1;
}



// FUNCTION 146b89f0e FUN_146b89f0e body=63 status=ok
// SIG undefined FUN_146b89f0e(void)

void FUN_146b89f0e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_146b7045c(param_1 + 0xa0);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146b89f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 146b89f56 FUN_146b89f56 body=243 status=ok
// SIG undefined FUN_146b89f56(void)

undefined8
FUN_146b89f56(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_b8 [80];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar1 = FUN_14001cc68(0x2e0,0x10);
  FUN_1409e67a4(local_b8,param_1);
  local_68 = *(undefined8 *)(param_1 + 0x50);
  local_d0 = param_7;
  uStack_c8 = param_8;
  local_e0 = param_5;
  uStack_d8 = param_6;
  local_e8 = param_4;
  FUN_142955672(uVar1,local_b8,param_2,param_3);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8a04a FUN_146b8a04a body=124 status=ok
// SIG undefined FUN_146b8a04a(void)

longlong * FUN_146b8a04a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 3) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
    uVar1 = (undefined4)param_3[1];
  }
  FUN_146b17e4e(*param_3,uVar1);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b8a0c6 FUN_146b8a0c6 body=407 status=ok
// SIG undefined FUN_146b8a0c6(void)

undefined8 * FUN_146b8a0c6(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149f342e0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar4 = FUN_1401cb356();
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e02020;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_149f35d80;
  local_48[3] = param_1;
  local_48[4] = FUN_146b8a25e;
  local_58 = 0;
  FUN_1405f67fc(uVar4,&local_38,&local_48,L"FInstallerAnalytics_Tick");
  if (param_1 + 0xb != &local_38) {
    param_1[0xb] = local_38;
    local_38 = 0;
    plVar2 = (longlong *)param_1[0xc];
    param_1[0xc] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  FUN_1449db362(&local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8a25e FUN_146b8a25e body=17 status=ok
// SIG undefined FUN_146b8a25e(void)

undefined8 FUN_146b8a25e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  return 1;
}



// FUNCTION 146b8a270 FUN_146b8a270 body=163 status=ok
// SIG undefined FUN_146b8a270(void)

void FUN_146b8a270(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149f342e0;
  FUN_1401cb356();
  local_20 = param_1[0xb];
  local_18 = param_1[0xc];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_20);
  plVar2 = (longlong *)param_1[0xc];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_146b97623(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8a314 FUN_146b8a314 body=914 status=ok
// SIG undefined FUN_146b8a314(void)

/* WARNING: Removing unreachable block (ram,0x000146b8a51a) */
/* WARNING: Removing unreachable block (ram,0x000146b8a627) */
/* WARNING: Removing unreachable block (ram,0x000146b8a529) */
/* WARNING: Removing unreachable block (ram,0x000146b8a636) */

void FUN_146b8a314(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_3c = param_3;
  if (iVar2 < 0x14) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_140056680(local_98,L"ChunkURL");
    FUN_146b280ea(&local_88,local_98,param_2);
    uStack_50._0_4_ = 1;
    FUN_146b17dba(&local_58,0);
    *local_58 = 0;
    *local_58 = local_88;
    local_88 = 0;
    *(undefined4 *)(local_58 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)local_58 + 0xc) = local_80._4_4_;
    local_80 = 0;
    local_58[2] = 0;
    local_58[2] = local_78;
    local_78 = 0;
    *(undefined4 *)(local_58 + 3) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_58 + 0x1c) = local_70._4_4_;
    local_70 = 0;
    local_58[4] = local_68;
    *(undefined1 *)(local_58 + 5) = local_60;
    *(undefined4 *)((longlong)local_58 + 0x2c) = local_5c;
    FUN_140056680(local_a8,L"ResponseCode");
    FUN_146b172be(&local_88,local_a8,&local_3c);
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_146b17dba(&local_58);
    }
    lVar3 = lVar4 * 0x30;
    local_58[lVar4 * 6] = 0;
    local_58[lVar4 * 6] = local_88;
    *(undefined4 *)(local_58 + lVar4 * 6 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0xc) = local_80._4_4_;
    local_58[lVar4 * 6 + 2] = 0;
    local_58[lVar4 * 6 + 2] = local_78;
    *(undefined4 *)(local_58 + lVar4 * 6 + 3) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0x1c) = local_70._4_4_;
    local_58[lVar4 * 6 + 4] = local_68;
    *(undefined1 *)(local_58 + lVar4 * 6 + 5) = local_60;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0x2c) = local_5c;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    FUN_140056680(local_b8,L"ErrorString");
    FUN_146b280ea(&local_88,local_b8,param_4);
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_146b17dba(&local_58);
    }
    lVar3 = lVar4 * 0x30;
    local_58[lVar4 * 6] = 0;
    local_58[lVar4 * 6] = local_88;
    *(undefined4 *)(local_58 + lVar4 * 6 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0xc) = local_80._4_4_;
    local_58[lVar4 * 6 + 2] = 0;
    local_58[lVar4 * 6 + 2] = local_78;
    *(undefined4 *)(local_58 + lVar4 * 6 + 3) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0x1c) = local_70._4_4_;
    local_58[lVar4 * 6 + 4] = local_68;
    *(undefined1 *)(local_58 + lVar4 * 6 + 5) = local_60;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0x2c) = local_5c;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_c8 = local_58;
    uStack_c0 = uStack_50;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_140056680(local_d8,L"Patcher.Error.Download");
    FUN_146b8a6a8(param_1,local_d8,&local_c8);
    FUN_146b17e4e(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8a6a8 FUN_146b8a6a8 body=256 status=ok
// SIG undefined FUN_146b8a6a8(void)

void FUN_146b8a6a8(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_146b9784e((longlong *)(param_1 + 0x48),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_48 = *param_3;
  *param_3 = 0;
  local_40 = (undefined4)param_3[1];
  local_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_58 = *param_2;
  *param_2 = 0;
  local_50 = (undefined4)param_2[1];
  local_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_146b8a04a((longlong)iVar1 * 0x20 + lVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8a7be FUN_146b8a7be body=1536 status=ok
// SIG undefined FUN_146b8a7be(void)

/* WARNING: Removing unreachable block (ram,0x000146b8abf3) */
/* WARNING: Removing unreachable block (ram,0x000146b8a9a5) */
/* WARNING: Removing unreachable block (ram,0x000146b8aacc) */
/* WARNING: Removing unreachable block (ram,0x000146b8ad1a) */
/* WARNING: Removing unreachable block (ram,0x000146b8ac05) */
/* WARNING: Removing unreachable block (ram,0x000146b8a9b7) */
/* WARNING: Removing unreachable block (ram,0x000146b8aade) */
/* WARNING: Removing unreachable block (ram,0x000146b8ad2c) */

void FUN_146b8a7be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_48 = param_3;
  local_40 = param_4;
  FUN_140056680(local_98,L"ChunkURL");
  FUN_146b280ea(&local_88,local_98,param_2);
  uStack_50._0_4_ = 1;
  FUN_146b17dba(&local_58,0);
  *local_58 = 0;
  *local_58 = local_88;
  local_88 = 0;
  *(undefined4 *)(local_58 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + 0xc) = local_80._4_4_;
  local_80 = 0;
  local_58[2] = 0;
  local_58[2] = local_78;
  local_78 = 0;
  *(undefined4 *)(local_58 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + 0x1c) = local_70._4_4_;
  local_70 = 0;
  local_58[4] = local_68;
  *(undefined1 *)(local_58 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + 0x2c) = local_5c;
  FUN_140056680(local_a8,L"ChunkTime");
  FUN_146b174e6(&local_88,local_a8,&local_48);
  lVar2 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  lVar1 = lVar2 * 0x30;
  local_58[lVar2 * 6] = 0;
  local_58[lVar2 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar2 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0xc) = local_80._4_4_;
  local_58[lVar2 * 6 + 2] = 0;
  local_58[lVar2 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar2 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0x1c) = local_70._4_4_;
  local_58[lVar2 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar2 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_140056680(local_b8,L"ChunkMean");
  FUN_146b174e6(&local_88,local_b8,&local_40);
  lVar2 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  lVar1 = lVar2 * 0x30;
  local_58[lVar2 * 6] = 0;
  local_58[lVar2 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar2 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0xc) = local_80._4_4_;
  local_58[lVar2 * 6 + 2] = 0;
  local_58[lVar2 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar2 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0x1c) = local_70._4_4_;
  local_58[lVar2 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar2 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_140056680(local_c8,L"ChunkStd");
  FUN_146b174e6(&local_88,local_c8,&stack0x00000028);
  lVar2 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  lVar1 = lVar2 * 0x30;
  local_58[lVar2 * 6] = 0;
  local_58[lVar2 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar2 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0xc) = local_80._4_4_;
  local_58[lVar2 * 6 + 2] = 0;
  local_58[lVar2 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar2 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0x1c) = local_70._4_4_;
  local_58[lVar2 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar2 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_140056680(local_d8,L"BreakingPoint");
  FUN_146b174e6(&local_88,local_d8,&stack0x00000030);
  lVar2 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  lVar1 = lVar2 * 0x30;
  local_58[lVar2 * 6] = 0;
  local_58[lVar2 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar2 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0xc) = local_80._4_4_;
  local_58[lVar2 * 6 + 2] = 0;
  local_58[lVar2 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar2 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0x1c) = local_70._4_4_;
  local_58[lVar2 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar2 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar1 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_e8 = local_58;
  uStack_e0 = uStack_50;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_140056680(local_f8,L"Patcher.Warning.ChunkAborted");
  FUN_146b8a6a8(param_1,local_f8,&local_e8);
  FUN_146b17e4e(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8adc0 FUN_146b8adc0 body=1579 status=ok
// SIG undefined FUN_146b8adc0(void)

/* WARNING: Removing unreachable block (ram,0x000146b8b23f) */
/* WARNING: Removing unreachable block (ram,0x000146b8afee) */
/* WARNING: Removing unreachable block (ram,0x000146b8b115) */
/* WARNING: Removing unreachable block (ram,0x000146b8b369) */
/* WARNING: Removing unreachable block (ram,0x000146b8b259) */
/* WARNING: Removing unreachable block (ram,0x000146b8b000) */
/* WARNING: Removing unreachable block (ram,0x000146b8b12f) */
/* WARNING: Removing unreachable block (ram,0x000146b8b37b) */

void FUN_146b8adc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  LOCK();
  piVar1 = (int *)(param_1 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_64 = param_4;
  if (iVar2 < 0x14) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_1407c869a(param_2,&local_b8,0);
    FUN_140056680(&local_88,L"ChunkGuid");
    uVar5 = uStack_80;
    uVar4 = local_88;
    uVar3 = uStack_b0;
    lVar8 = local_b8;
    local_88 = 0;
    uStack_80 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_70 = CONCAT44(uStack_70._4_4_,1);
    FUN_146b17dba(&local_78,0);
    *local_78 = uVar4;
    local_78[1] = uVar5;
    local_78[2] = lVar8;
    local_78[3] = uVar3;
    local_78[4] = 0;
    *(undefined1 *)(local_78 + 5) = 0;
    *(undefined4 *)((longlong)local_78 + 0x2c) = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_c8,L"Filename");
    FUN_146b280ea(&local_b8,local_c8,param_3);
    lVar8 = (longlong)(int)(uint)uStack_70;
    uVar6 = (uint)uStack_70 + 1;
    uStack_70._0_4_ = uVar6;
    if (uStack_70._4_4_ < uVar6) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar8 * 0x30;
    local_78[lVar8 * 6] = 0;
    local_78[lVar8 * 6] = local_b8;
    *(undefined4 *)(local_78 + lVar8 * 6 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0xc) = uStack_b0._4_4_;
    local_78[lVar8 * 6 + 2] = 0;
    local_78[lVar8 * 6 + 2] = local_a8;
    *(undefined4 *)(local_78 + lVar8 * 6 + 3) = (undefined4)local_a0;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0x1c) = local_a0._4_4_;
    local_78[lVar8 * 6 + 4] = local_98;
    *(undefined1 *)(local_78 + lVar8 * 6 + 5) = local_90;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0x2c) = local_8c;
    local_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    FUN_140056680(local_d8,L"LastError");
    FUN_146b172be(&local_b8,local_d8,&local_64);
    lVar8 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar8 * 0x30;
    local_78[lVar8 * 6] = 0;
    local_78[lVar8 * 6] = local_b8;
    *(undefined4 *)(local_78 + lVar8 * 6 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0xc) = uStack_b0._4_4_;
    local_78[lVar8 * 6 + 2] = 0;
    local_78[lVar8 * 6 + 2] = local_a8;
    *(undefined4 *)(local_78 + lVar8 * 6 + 3) = (undefined4)local_a0;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0x1c) = local_a0._4_4_;
    local_78[lVar8 * 6 + 4] = local_98;
    *(undefined1 *)(local_78 + lVar8 * 6 + 5) = local_90;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0x2c) = local_8c;
    local_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    FUN_140056680(local_e8,L"SystemName");
    FUN_146b280ea(&local_b8,local_e8,param_5);
    lVar8 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar8 * 0x30;
    local_78[lVar8 * 6] = 0;
    local_78[lVar8 * 6] = local_b8;
    *(undefined4 *)(local_78 + lVar8 * 6 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0xc) = uStack_b0._4_4_;
    local_78[lVar8 * 6 + 2] = 0;
    local_78[lVar8 * 6 + 2] = local_a8;
    *(undefined4 *)(local_78 + lVar8 * 6 + 3) = (undefined4)local_a0;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0x1c) = local_a0._4_4_;
    local_78[lVar8 * 6 + 4] = local_98;
    *(undefined1 *)(local_78 + lVar8 * 6 + 5) = local_90;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0x2c) = local_8c;
    local_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    FUN_140056680(local_f8,L"ErrorString");
    FUN_146b280ea(&local_b8,local_f8,param_6);
    lVar8 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar8 * 0x30;
    local_78[lVar8 * 6] = 0;
    local_78[lVar8 * 6] = local_b8;
    *(undefined4 *)(local_78 + lVar8 * 6 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0xc) = uStack_b0._4_4_;
    local_78[lVar8 * 6 + 2] = 0;
    local_78[lVar8 * 6 + 2] = local_a8;
    *(undefined4 *)(local_78 + lVar8 * 6 + 3) = (undefined4)local_a0;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0x1c) = local_a0._4_4_;
    local_78[lVar8 * 6 + 4] = local_98;
    *(undefined1 *)(local_78 + lVar8 * 6 + 5) = local_90;
    *(undefined4 *)((longlong)local_78 + lVar7 + 0x2c) = local_8c;
    local_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    local_108 = local_78;
    uStack_100 = uStack_70;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_140056680(local_118,L"Patcher.Error.Cache");
    FUN_146b8a6a8(param_1,local_118,&local_108);
    FUN_146b17e4e(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8b3ec FUN_146b8b3ec body=914 status=ok
// SIG undefined FUN_146b8b3ec(void)

/* WARNING: Removing unreachable block (ram,0x000146b8b5f2) */
/* WARNING: Removing unreachable block (ram,0x000146b8b6ff) */
/* WARNING: Removing unreachable block (ram,0x000146b8b601) */
/* WARNING: Removing unreachable block (ram,0x000146b8b70e) */

void FUN_146b8b3ec(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  LOCK();
  piVar1 = (int *)(param_1 + 0x18);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_3c = param_3;
  if (iVar2 < 0x14) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_140056680(local_98,L"Filename");
    FUN_146b280ea(&local_88,local_98,param_2);
    uStack_50._0_4_ = 1;
    FUN_146b17dba(&local_58,0);
    *local_58 = 0;
    *local_58 = local_88;
    local_88 = 0;
    *(undefined4 *)(local_58 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)local_58 + 0xc) = local_80._4_4_;
    local_80 = 0;
    local_58[2] = 0;
    local_58[2] = local_78;
    local_78 = 0;
    *(undefined4 *)(local_58 + 3) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_58 + 0x1c) = local_70._4_4_;
    local_70 = 0;
    local_58[4] = local_68;
    *(undefined1 *)(local_58 + 5) = local_60;
    *(undefined4 *)((longlong)local_58 + 0x2c) = local_5c;
    FUN_140056680(local_a8,L"LastError");
    FUN_146b172be(&local_88,local_a8,&local_3c);
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_146b17dba(&local_58);
    }
    lVar3 = lVar4 * 0x30;
    local_58[lVar4 * 6] = 0;
    local_58[lVar4 * 6] = local_88;
    *(undefined4 *)(local_58 + lVar4 * 6 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0xc) = local_80._4_4_;
    local_58[lVar4 * 6 + 2] = 0;
    local_58[lVar4 * 6 + 2] = local_78;
    *(undefined4 *)(local_58 + lVar4 * 6 + 3) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0x1c) = local_70._4_4_;
    local_58[lVar4 * 6 + 4] = local_68;
    *(undefined1 *)(local_58 + lVar4 * 6 + 5) = local_60;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0x2c) = local_5c;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    FUN_140056680(local_b8,L"ErrorString");
    FUN_146b280ea(&local_88,local_b8,param_4);
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_146b17dba(&local_58);
    }
    lVar3 = lVar4 * 0x30;
    local_58[lVar4 * 6] = 0;
    local_58[lVar4 * 6] = local_88;
    *(undefined4 *)(local_58 + lVar4 * 6 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0xc) = local_80._4_4_;
    local_58[lVar4 * 6 + 2] = 0;
    local_58[lVar4 * 6 + 2] = local_78;
    *(undefined4 *)(local_58 + lVar4 * 6 + 3) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0x1c) = local_70._4_4_;
    local_58[lVar4 * 6 + 4] = local_68;
    *(undefined1 *)(local_58 + lVar4 * 6 + 5) = local_60;
    *(undefined4 *)((longlong)local_58 + lVar3 + 0x2c) = local_5c;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_c8 = local_58;
    uStack_c0 = uStack_50;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_140056680(local_d8,L"Patcher.Error.Construction");
    FUN_146b8a6a8(param_1,local_d8,&local_c8);
    FUN_146b17e4e(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8b780 FUN_146b8b780 body=1828 status=ok
// SIG undefined FUN_146b8b780(void)

/* WARNING: Removing unreachable block (ram,0x000146b8bcd4) */
/* WARNING: Removing unreachable block (ram,0x000146b8ba83) */
/* WARNING: Removing unreachable block (ram,0x000146b8b961) */
/* WARNING: Removing unreachable block (ram,0x000146b8bbad) */
/* WARNING: Removing unreachable block (ram,0x000146b8bdfe) */
/* WARNING: Removing unreachable block (ram,0x000146b8bcee) */
/* WARNING: Removing unreachable block (ram,0x000146b8ba9d) */
/* WARNING: Removing unreachable block (ram,0x000146b8b973) */
/* WARNING: Removing unreachable block (ram,0x000146b8bbbf) */
/* WARNING: Removing unreachable block (ram,0x000146b8be10) */

void FUN_146b8b780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_140056680(local_98,L"AppName");
  FUN_146b280ea(&local_88,local_98,param_2);
  uStack_50._0_4_ = 1;
  FUN_146b17dba(&local_58,0);
  *local_58 = 0;
  *local_58 = local_88;
  local_88 = 0;
  *(undefined4 *)(local_58 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + 0xc) = local_80._4_4_;
  local_80 = 0;
  local_58[2] = 0;
  local_58[2] = local_78;
  local_78 = 0;
  *(undefined4 *)(local_58 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + 0x1c) = local_70._4_4_;
  local_70 = 0;
  local_58[4] = local_68;
  *(undefined1 *)(local_58 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + 0x2c) = local_5c;
  FUN_140056680(local_a8,L"AppVersion");
  FUN_146b280ea(&local_88,local_a8,param_3);
  lVar3 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  lVar2 = lVar3 * 0x30;
  local_58[lVar3 * 6] = 0;
  local_58[lVar3 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar3 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0xc) = local_80._4_4_;
  local_58[lVar3 * 6 + 2] = 0;
  local_58[lVar3 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar3 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x1c) = local_70._4_4_;
  local_58[lVar3 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar3 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_140056680(local_b8,L"Filename");
  FUN_146b280ea(&local_88,local_b8,param_4);
  lVar3 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  lVar2 = lVar3 * 0x30;
  local_58[lVar3 * 6] = 0;
  local_58[lVar3 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar3 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0xc) = local_80._4_4_;
  local_58[lVar3 * 6 + 2] = 0;
  local_58[lVar3 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar3 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x1c) = local_70._4_4_;
  local_58[lVar3 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar3 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_140056680(local_c8,L"CommandLine");
  FUN_146b280ea(&local_88,local_c8,param_5);
  lVar3 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  lVar2 = lVar3 * 0x30;
  local_58[lVar3 * 6] = 0;
  local_58[lVar3 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar3 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0xc) = local_80._4_4_;
  local_58[lVar3 * 6 + 2] = 0;
  local_58[lVar3 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar3 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x1c) = local_70._4_4_;
  local_58[lVar3 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar3 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_140056680(local_d8,L"ReturnCode");
  FUN_146b172be(&local_88,local_d8,&param_6);
  lVar3 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  uVar1 = param_7;
  lVar2 = lVar3 * 0x30;
  local_58[lVar3 * 6] = 0;
  local_58[lVar3 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar3 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0xc) = local_80._4_4_;
  local_58[lVar3 * 6 + 2] = 0;
  local_58[lVar3 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar3 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x1c) = local_70._4_4_;
  local_58[lVar3 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar3 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_140056680(local_e8,L"ErrorString");
  FUN_146b280ea(&local_88,local_e8,uVar1);
  lVar3 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  lVar2 = lVar3 * 0x30;
  local_58[lVar3 * 6] = 0;
  local_58[lVar3 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar3 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0xc) = local_80._4_4_;
  local_58[lVar3 * 6 + 2] = 0;
  local_58[lVar3 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar3 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x1c) = local_70._4_4_;
  local_58[lVar3 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar3 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_f8 = local_58;
  uStack_f0 = uStack_50;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_140056680(local_108,L"Patcher.Error.Prerequisites");
  FUN_146b8a6a8(param_1,local_108,&local_f8);
  FUN_146b17e4e(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8bea8 FUN_146b8bea8 body=83 status=ok
// SIG undefined FUN_146b8bea8(void)

undefined8 * FUN_146b8bea8(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar1 = &PTR_FUN_149f359f0;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    FUN_146b8a0c6(puVar1,param_1);
  }
  return puVar1;
}



// FUNCTION 146b8befb FUN_146b8befb body=2827 status=ok
// SIG undefined FUN_146b8befb(void)

undefined8 * FUN_146b8befb(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991eb8) && (FUN_144b3d300(&DAT_14c991eb8), DAT_14c991eb8 == -1)) {
    local_38 = L"BuildPatchInstallShortError_NoError";
    local_30 = 0x23;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991ea8,local_40,local_3c,L"The operation was successful.");
    atexit((_func_5014 *)&LAB_142956b15);
    _Init_thread_footer(&DAT_14c991eb8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991ed0) && (FUN_144b3d300(&DAT_14c991ed0), DAT_14c991ed0 == -1)) {
    local_38 = L"BuildPatchInstallShortError_DownloadError";
    local_30 = 0x29;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991ec0,local_40,local_3c,
                  L"Could not download patch data. Please check your internet connection, and try again."
                 );
    atexit((_func_5014 *)&LAB_142956b29);
    _Init_thread_footer(&DAT_14c991ed0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991ee8) && (FUN_144b3d300(&DAT_14c991ee8), DAT_14c991ee8 == -1)) {
    local_38 = L"BuildPatchInstallShortError_FileConstructionFail";
    local_30 = 0x30;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991ed8,local_40,local_3c,
                  L"A file corruption has occurred. Please try again.");
    atexit((_func_5014 *)&LAB_142956b3d);
    _Init_thread_footer(&DAT_14c991ee8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991f00) && (FUN_144b3d300(&DAT_14c991f00), DAT_14c991f00 == -1)) {
    local_38 = L"BuildPatchInstallShortError_MoveFileToInstall";
    local_30 = 0x2d;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991ef0,local_40,local_3c,
                  L"A file access error has occurred. Please check your running processes.");
    atexit((_func_5014 *)&LAB_142956b51);
    _Init_thread_footer(&DAT_14c991f00);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991f18) && (FUN_144b3d300(&DAT_14c991f18), DAT_14c991f18 == -1)) {
    local_38 = L"BuildPatchInstallShortError_BuildCorrupt";
    local_30 = 0x28;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991f08,local_40,local_3c,
                  L"The installation is corrupt. Please contact support.");
    atexit((_func_5014 *)&LAB_142956b65);
    _Init_thread_footer(&DAT_14c991f18);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991f30) && (FUN_144b3d300(&DAT_14c991f30), DAT_14c991f30 == -1)) {
    local_38 = L"BuildPatchInstallShortError_ApplicationClosing";
    local_30 = 0x2e;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991f20,local_40,local_3c,L"The application is closing.");
    atexit((_func_5014 *)&LAB_142956b79);
    _Init_thread_footer(&DAT_14c991f30);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991f48) && (FUN_144b3d300(&DAT_14c991f48), DAT_14c991f48 == -1)) {
    local_38 = L"BuildPatchInstallShortError_ApplicationError";
    local_30 = 0x2c;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991f38,local_40,local_3c,
                  L"Patching service could not start. Please contact support.");
    atexit((_func_5014 *)&LAB_142956b8d);
    _Init_thread_footer(&DAT_14c991f48);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991f60) && (FUN_144b3d300(&DAT_14c991f60), DAT_14c991f60 == -1)) {
    local_38 = L"BuildPatchInstallShortError_UserCanceled";
    local_30 = 0x28;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991f50,local_40,local_3c,L"User cancelled.");
    atexit((_func_5014 *)&LAB_142956ba1);
    _Init_thread_footer(&DAT_14c991f60);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991f78) && (FUN_144b3d300(&DAT_14c991f78), DAT_14c991f78 == -1)) {
    local_38 = L"BuildPatchInstallShortError_PrerequisiteError";
    local_30 = 0x2d;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991f68,local_40,local_3c,
                  L"The necessary prerequisites have failed to install. Please contact support.");
    atexit((_func_5014 *)&LAB_142956bb5);
    _Init_thread_footer(&DAT_14c991f78);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991f90) && (FUN_144b3d300(&DAT_14c991f90), DAT_14c991f90 == -1)) {
    local_38 = L"BuildPatchInstallShortError_InitializationError";
    local_30 = 0x2f;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991f80,local_40,local_3c,
                  L"The installer failed to initialize. Please contact support.");
    atexit((_func_5014 *)&LAB_142956bc9);
    _Init_thread_footer(&DAT_14c991f90);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991fa8) && (FUN_144b3d300(&DAT_14c991fa8), DAT_14c991fa8 == -1)) {
    local_38 = L"BuildPatchInstallShortError_PathLengthExceeded";
    local_30 = 0x2e;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991f98,local_40,local_3c,
                  L"Maximum path length exceeded. Please specify a shorter install location.");
    atexit((_func_5014 *)&LAB_142956bdd);
    _Init_thread_footer(&DAT_14c991fa8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991fc0) && (FUN_144b3d300(&DAT_14c991fc0), DAT_14c991fc0 == -1)) {
    local_38 = L"BuildPatchInstallShortError_OutOfDiskSpace";
    local_30 = 0x2a;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991fb0,local_40,local_3c,
                  L"Not enough disk space available. Please free up some disk space and try again.")
    ;
    atexit((_func_5014 *)&LAB_142956bf1);
    _Init_thread_footer(&DAT_14c991fc0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991fd8) && (FUN_144b3d300(&DAT_14c991fd8), DAT_14c991fd8 == -1)) {
    local_38 = L"BuildPatchInstallShortError_InvalidOrMax";
    local_30 = 0x28;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BuildPatchInstallError";
    local_30 = 0x16;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c991fc8,local_40,local_3c,
                  L"An unknown error ocurred. Please contact support.");
    atexit((_func_5014 *)&LAB_142956c05);
    _Init_thread_footer(&DAT_14c991fd8);
  }
  plVar12 = DAT_14c991fc8;
  plVar11 = DAT_14c991fb0;
  plVar10 = DAT_14c991f98;
  plVar9 = DAT_14c991f80;
  plVar8 = DAT_14c991f68;
  plVar7 = DAT_14c991f50;
  plVar6 = DAT_14c991f38;
  plVar5 = DAT_14c991f20;
  plVar4 = DAT_14c991f08;
  plVar3 = DAT_14c991ef0;
  plVar2 = DAT_14c991ed8;
  plVar1 = DAT_14c991ec0;
  plVar13 = DAT_14c991ea8;
  switch(param_2) {
  case 0:
    *param_1 = DAT_14c991ea8;
    puVar14 = (undefined4 *)&DAT_14c991eb0;
    break;
  case 1:
    *param_1 = DAT_14c991ec0;
    puVar14 = (undefined4 *)&DAT_14c991ec8;
    plVar13 = plVar1;
    break;
  case 2:
    *param_1 = DAT_14c991ed8;
    puVar14 = (undefined4 *)&DAT_14c991ee0;
    plVar13 = plVar2;
    break;
  case 3:
    *param_1 = DAT_14c991ef0;
    puVar14 = (undefined4 *)&DAT_14c991ef8;
    plVar13 = plVar3;
    break;
  case 4:
    *param_1 = DAT_14c991f08;
    puVar14 = (undefined4 *)&DAT_14c991f10;
    plVar13 = plVar4;
    break;
  case 5:
    *param_1 = DAT_14c991f20;
    puVar14 = (undefined4 *)&DAT_14c991f28;
    plVar13 = plVar5;
    break;
  case 6:
    *param_1 = DAT_14c991f38;
    puVar14 = (undefined4 *)&DAT_14c991f40;
    plVar13 = plVar6;
    break;
  case 7:
    *param_1 = DAT_14c991f50;
    puVar14 = (undefined4 *)&DAT_14c991f58;
    plVar13 = plVar7;
    break;
  case 8:
    *param_1 = DAT_14c991f68;
    puVar14 = (undefined4 *)&DAT_14c991f70;
    plVar13 = plVar8;
    break;
  case 9:
    *param_1 = DAT_14c991f80;
    puVar14 = (undefined4 *)&DAT_14c991f88;
    plVar13 = plVar9;
    break;
  case 10:
    *param_1 = DAT_14c991f98;
    puVar14 = (undefined4 *)&DAT_14c991fa0;
    plVar13 = plVar10;
    break;
  case 0xb:
    *param_1 = DAT_14c991fb0;
    puVar14 = &DAT_14c991fb8;
    plVar13 = plVar11;
    break;
  default:
    *param_1 = DAT_14c991fc8;
    puVar14 = (undefined4 *)&DAT_14c991fd0;
    plVar13 = plVar12;
  }
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  *(undefined4 *)(param_1 + 1) = *puVar14;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b8ca07 FUN_146b8ca07 body=885 status=ok
// SIG undefined FUN_146b8ca07(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_146b8ca07(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_98 [16];
  undefined8 local_88;
  longlong *plStack_80;
  longlong *local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991ff0) {
    FUN_144b3d300(&DAT_14c991ff0);
    if (DAT_14c991ff0 == -1) {
      local_68 = L"InstallDirectoryDiskSpace";
      uStack_60._0_4_ = 0x19;
      FUN_1446e940c(local_78,&local_68);
      local_68 = L"BuildPatchInstallError";
      uStack_60 = CONCAT44(uStack_60._4_4_,0x16);
      FUN_1446e940c(&local_88,&local_68);
      FUN_140208bae(&DAT_14c991fe0,&local_88,local_78,
                    L"There is not enough space at {Location}\n{RequiredBytes} is required.\n{AvailableBytes} is available.\nYou need an additional {SpaceAdditional} to perform the installation."
                   );
      atexit((_func_5014 *)&LAB_142956c19);
      _Init_thread_footer(&DAT_14c991ff0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99200c) {
    FUN_144b3d300(&DAT_14c99200c);
    if (DAT_14c99200c == -1) {
      FUN_141366fce(&local_68);
      _DAT_14c992004 = &DAT_200000002;
      _DAT_14c991ff4 = (undefined4)local_68;
      uRam000000014c991ff8 = local_68._4_4_;
      uRam000000014c991ffc = (undefined4)uStack_60;
      uRam000000014c992000 = uStack_60._4_4_;
      _Init_thread_footer(&DAT_14c99200c);
    }
  }
  puVar4 = &DAT_14c991ff4;
  if (param_5 != (undefined *)0x0) {
    puVar4 = param_5;
  }
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  FUN_140009b9a(local_78,param_2);
  FUN_146b8cd7e(&local_68,local_78);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_a8 = 1;
  FUN_14023326e(local_78,param_3,puVar4);
  FUN_146b8cf66(&local_68,local_78);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_a8 = 1;
  FUN_14023326e(local_78,param_4,puVar4);
  FUN_1468877ba(&local_68,L"AvailableBytes",local_78);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_a8 = 1;
  FUN_14023326e(local_78,param_3 - param_4,puVar4);
  FUN_146b8d14e(&local_68,local_78);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_14023409e(local_98,&DAT_14c991fe0,1);
  FUN_140233c04(param_1,local_98,&local_68);
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8cd7e FUN_146b8cd7e body=486 status=ok
// SIG undefined FUN_146b8cd7e(void)

void FUN_146b8cd7e(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = *(uint *)(param_1 + 1);
  if ((int)uVar9 < 1) {
    uVar8 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar8 = 0;
    local_68 = param_2;
    local_60 = param_1;
    do {
      uVar1 = (uVar9 >> 1) + uVar8;
      lVar7 = (ulonglong)uVar1 * 0x30;
      FUN_140056680(&local_58,L"Location");
      pwVar6 = local_58;
      pwVar5 = local_58;
      if (local_50 == 0) {
        pwVar5 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar7);
      }
      iVar4 = wcscmp(_Str1,pwVar5);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar9 & 1);
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
      }
      param_1 = local_60;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    uVar9 = *(uint *)(local_60 + 1);
    param_2 = local_68;
    if ((int)uVar8 < (int)uVar9) {
      lVar2 = *local_60;
      lVar7 = (ulonglong)uVar8 * 0x30;
      FUN_140056680(&local_58,L"Location");
      pwVar6 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + lVar7);
      }
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar4) {
        lVar7 = lVar7 + *param_1;
        FUN_14010f8af(lVar7,1);
        param_2 = local_68;
        goto LAB_146b8cf18;
      }
      uVar9 = *(uint *)(param_1 + 1);
      param_2 = local_68;
    }
  }
  *(uint *)(param_1 + 1) = uVar9 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar9) {
    FUN_140234572(param_1,uVar9);
  }
  lVar7 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(*param_1 + lVar7 + 0x30),(void *)(*param_1 + lVar7),
          (ulonglong)(uVar9 - uVar8) * 0x30);
  lVar7 = lVar7 + *param_1;
LAB_146b8cf18:
  FUN_140056680(lVar7,L"Location");
  *(undefined4 *)(lVar7 + 0x10) = 4;
  FUN_14023423e(lVar7 + 0x20,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b8cf66 FUN_146b8cf66 body=486 status=ok
// SIG undefined FUN_146b8cf66(void)

void FUN_146b8cf66(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = *(uint *)(param_1 + 1);
  if ((int)uVar9 < 1) {
    uVar8 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar8 = 0;
    local_68 = param_2;
    local_60 = param_1;
    do {
      uVar1 = (uVar9 >> 1) + uVar8;
      lVar7 = (ulonglong)uVar1 * 0x30;
      FUN_140056680(&local_58,L"RequiredBytes");
      pwVar6 = local_58;
      pwVar5 = local_58;
      if (local_50 == 0) {
        pwVar5 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar7);
      }
      iVar4 = wcscmp(_Str1,pwVar5);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar9 & 1);
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
      }
      param_1 = local_60;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    uVar9 = *(uint *)(local_60 + 1);
    param_2 = local_68;
    if ((int)uVar8 < (int)uVar9) {
      lVar2 = *local_60;
      lVar7 = (ulonglong)uVar8 * 0x30;
      FUN_140056680(&local_58,L"RequiredBytes");
      pwVar6 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + lVar7);
      }
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar4) {
        lVar7 = lVar7 + *param_1;
        FUN_14010f8af(lVar7,1);
        param_2 = local_68;
        goto LAB_146b8d100;
      }
      uVar9 = *(uint *)(param_1 + 1);
      param_2 = local_68;
    }
  }
  *(uint *)(param_1 + 1) = uVar9 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar9) {
    FUN_140234572(param_1,uVar9);
  }
  lVar7 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(*param_1 + lVar7 + 0x30),(void *)(*param_1 + lVar7),
          (ulonglong)(uVar9 - uVar8) * 0x30);
  lVar7 = lVar7 + *param_1;
LAB_146b8d100:
  FUN_140056680(lVar7,L"RequiredBytes");
  *(undefined4 *)(lVar7 + 0x10) = 4;
  FUN_14023423e(lVar7 + 0x20,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b8d14e FUN_146b8d14e body=486 status=ok
// SIG undefined FUN_146b8d14e(void)

void FUN_146b8d14e(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = *(uint *)(param_1 + 1);
  if ((int)uVar9 < 1) {
    uVar8 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar8 = 0;
    local_68 = param_2;
    local_60 = param_1;
    do {
      uVar1 = (uVar9 >> 1) + uVar8;
      lVar7 = (ulonglong)uVar1 * 0x30;
      FUN_140056680(&local_58,L"SpaceAdditional");
      pwVar6 = local_58;
      pwVar5 = local_58;
      if (local_50 == 0) {
        pwVar5 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar7);
      }
      iVar4 = wcscmp(_Str1,pwVar5);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar9 & 1);
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
      }
      param_1 = local_60;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    uVar9 = *(uint *)(local_60 + 1);
    param_2 = local_68;
    if ((int)uVar8 < (int)uVar9) {
      lVar2 = *local_60;
      lVar7 = (ulonglong)uVar8 * 0x30;
      FUN_140056680(&local_58,L"SpaceAdditional");
      pwVar6 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + lVar7);
      }
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar4) {
        lVar7 = lVar7 + *param_1;
        FUN_14010f8af(lVar7,1);
        param_2 = local_68;
        goto LAB_146b8d2e8;
      }
      uVar9 = *(uint *)(param_1 + 1);
      param_2 = local_68;
    }
  }
  *(uint *)(param_1 + 1) = uVar9 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar9) {
    FUN_140234572(param_1,uVar9);
  }
  lVar7 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(*param_1 + lVar7 + 0x30),(void *)(*param_1 + lVar7),
          (ulonglong)(uVar9 - uVar8) * 0x30);
  lVar7 = lVar7 + *param_1;
LAB_146b8d2e8:
  FUN_140056680(lVar7,L"SpaceAdditional");
  *(undefined4 *)(lVar7 + 0x10) = 4;
  FUN_14023423e(lVar7 + 0x20,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b8d336 FUN_146b8d336 body=148 status=ok
// SIG undefined FUN_146b8d336(void)

undefined8 * FUN_146b8d336(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f35150;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_140056680(param_1 + 7,&DAT_149e1d814);
  FUN_146b8befb(param_1 + 9,*(undefined4 *)(param_1 + 6));
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  return param_1;
}



// FUNCTION 146b8d3ca FUN_146b8d3ca body=107 status=ok
// SIG undefined FUN_146b8d3ca(void)

void FUN_146b8d3ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f35150;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_146b94f84(param_1 + 0xc);
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000146b8d42e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 146b8d436 FUN_146b8d436 body=49 status=ok
// SIG undefined FUN_146b8d436(void)

ulonglong FUN_146b8d436(longlong param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x30);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 != 0) & 0xffffffff;
}



// FUNCTION 146b8d468 FUN_146b8d468 body=50 status=ok
// SIG undefined FUN_146b8d468(void)

bool FUN_146b8d468(longlong param_1)

{
  uint uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 0x30);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return (uVar1 & 0xfffffffd) == 5;
}



// FUNCTION 146b8d49a FUN_146b8d49a body=53 status=ok
// SIG undefined FUN_146b8d49a(void)

bool FUN_146b8d49a(longlong param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x30);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return (iVar1 - 2U & 0xfffffffd) == 0;
}



// FUNCTION 146b8d4d0 FUN_146b8d4d0 body=43 status=ok
// SIG undefined FUN_146b8d4d0(void)

undefined4 FUN_146b8d4d0(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar1;
}



// FUNCTION 146b8d4fc FUN_146b8d4fc body=112 status=ok
// SIG undefined FUN_146b8d4fc(void)

undefined8 * FUN_146b8d4fc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return param_2;
}



// FUNCTION 146b8d56c FUN_146b8d56c body=70 status=ok
// SIG undefined FUN_146b8d56c(void)

longlong * FUN_146b8d56c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  plVar1 = *(longlong **)(param_1 + 0x48);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x50);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return param_2;
}



// FUNCTION 146b8d5b2 FUN_146b8d5b2 body=357 status=ok
// SIG undefined FUN_146b8d5b2(void)

void FUN_146b8d5b2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146b978d4(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar4 = iStack_5c;
      lVar5 = *local_78;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14060a7c0(param_2,iVar1);
      }
      lVar2 = *param_2;
      lVar7 = (longlong)iVar1 * 0x40;
      lVar3 = *(longlong *)(lVar5 + (longlong)iVar4 * 0x60 + 0x10);
      *(longlong *)(lVar2 + lVar7) = lVar3;
      *(undefined8 *)(lVar2 + 0x10 + lVar7) = 0;
      if (lVar3 != 0) {
        lVar5 = (longlong)iVar4 * 0x60 + lVar5;
        puVar6 = *(undefined8 **)(lVar5 + 0x20);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)(lVar5 + 0x30);
        }
        (**(code **)*puVar6)(puVar6,lVar2 + lVar7 + 0x10);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8d718 FUN_146b8d718 body=168 status=ok
// SIG undefined FUN_146b8d718(void)

int FUN_146b8d718(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_68 [36];
  int local_44;
  int *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  LOCK();
  piVar1 = (int *)(param_1 + 0x58);
  local_44 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_44 = local_44 + 1;
  local_40 = &local_44;
  local_38 = param_2;
  FUN_146b9791a(param_1 + 0x60,local_2c);
  iVar2 = local_44;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8d7c2 FUN_146b8d7c2 body=56 status=ok
// SIG undefined FUN_146b8d7c2(void)

void FUN_146b8d7c2(longlong param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_146b97e22(param_1 + 0x60,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146b8d7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 146b8d7fa FUN_146b8d7fa body=145 status=ok
// SIG undefined FUN_146b8d7fa(void)

void FUN_146b8d7fa(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_14020fad6(param_1 + 0x38,&DAT_149e1d814);
  FUN_146b8befb(local_30,*(undefined4 *)(param_1 + 0x30));
  FUN_140008f88(param_1 + 0x48,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8d88c FUN_146b8d88c body=31 status=ok
// SIG undefined FUN_146b8d88c(void)

void FUN_146b8d88c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xb0,0x10);
  FUN_146b8d336(uVar1);
  return;
}



// FUNCTION 146b8d8ac FUN_146b8d8ac body=91 status=ok
// SIG undefined FUN_146b8d8ac(void)

void FUN_146b8d8ac(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f35210;
  param_1[1] = &PTR_FUN_149f35220;
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
    param_1[3] = 0;
  }
  FUN_14018802a(param_1[2]);
  param_1[2] = 0;
  FUN_146b8d908(param_1 + 4);
  return;
}



// FUNCTION 146b8d908 FUN_146b8d908 body=93 status=ok
// SIG undefined FUN_146b8d908(void)

void FUN_146b8d908(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  FUN_1400020a8();
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 8) = puVar3;
    puVar1 = (undefined8 *)*puVar3;
    if (puVar3[2] != 0) {
      plVar2 = puVar3 + 6;
      if ((longlong *)puVar3[4] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar3[4];
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      puVar3 = *(undefined8 **)(param_1 + 8);
    }
    FUN_1400020a8(puVar3);
    puVar3 = puVar1;
  }
  return;
}



// FUNCTION 146b8d966 FUN_146b8d966 body=121 status=ok
// SIG undefined FUN_146b8d966(void)

void FUN_146b8d966(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 1;
  FUN_146b8d9f0(param_1 + 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8d9f0 FUN_146b8d9f0 body=106 status=ok
// SIG undefined FUN_146b8d9f0(void)

void FUN_146b8d9f0(undefined8 *param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar8 = 0;
  uVar2 = *param_3;
  lVar3 = *param_2;
  lVar4 = param_2[2];
  param_2[2] = 0;
  if (lVar3 != 0) {
    *param_2 = 0;
  }
  lVar5 = param_2[4];
  lVar6 = param_2[5];
  lVar7 = param_2[7];
  puVar8[8] = param_2[6];
  puVar8[9] = lVar7;
  puVar8[6] = lVar5;
  puVar8[7] = lVar6;
  puVar8[2] = lVar3;
  puVar8[4] = lVar4;
  *(undefined1 *)(puVar8 + 10) = uVar2;
  LOCK();
  puVar1 = (undefined8 *)*param_1;
  *param_1 = puVar8;
  UNLOCK();
  *puVar1 = puVar8;
  return;
}



// FUNCTION 146b8da5a FUN_146b8da5a body=236 status=ok
// SIG undefined FUN_146b8da5a(void)

undefined8 FUN_146b8da5a(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  do {
    bVar5 = 0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),0xffffffff,0);
    local_88[0] = (code *)0x0;
    local_78 = (longlong *)0x0;
    local_48 = 0;
    cVar2 = FUN_146b8db48(param_1 + 0x18,local_88);
    if (cVar2 != '\0') {
      bVar5 = 0;
      do {
        pcVar1 = local_88[0];
        if ((local_48 & 1) != 0) {
          plVar4 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar4 = local_68;
          }
          uVar3 = (**(code **)(*plVar4 + 8))();
          (*pcVar1)(uVar3);
        }
        bVar5 = bVar5 | (local_48 & 2) >> 1;
        cVar2 = FUN_146b8db48(param_1 + 0x18,local_88);
      } while (cVar2 != '\0');
    }
    if (local_88[0] != (code *)0x0) {
      plVar4 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar4 = local_68;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  } while (bVar5 == 0);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8db48 FUN_146b8db48 body=265 status=ok
// SIG undefined FUN_146b8db48(void)

ulonglong FUN_146b8db48(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  char local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_146b97f22(param_1,&local_c8);
  if (local_78 == '\x01') {
    lVar1 = *param_2;
    uStack_60 = param_2[1];
    plVar8 = (longlong *)param_2[2];
    uStack_50 = param_2[3];
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    local_38 = param_2[6];
    uStack_30 = param_2[7];
    lVar6 = local_38;
    lVar7 = uStack_30;
    lVar4 = local_48;
    lVar5 = uStack_40;
    local_58 = plVar8;
    plVar8 = local_58;
    lVar3 = uStack_50;
    local_68 = lVar1;
    lVar1 = local_68;
    lVar2 = uStack_60;
    param_2[6] = CONCAT44(uStack_94,local_98);
    param_2[7] = CONCAT44(uStack_8c,uStack_90);
    param_2[4] = CONCAT44(uStack_a4,local_a8);
    param_2[5] = CONCAT44(uStack_9c,uStack_a0);
    param_2[2] = CONCAT44(uStack_b4,local_b8);
    param_2[3] = CONCAT44(uStack_ac,uStack_b0);
    *param_2 = CONCAT44(uStack_c4,local_c8);
    param_2[1] = CONCAT44(uStack_bc,uStack_c0);
    local_68._0_4_ = (undefined4)lVar1;
    local_68._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    local_58._0_4_ = SUB84(plVar8,0);
    local_58._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_98 = (undefined4)local_38;
    uStack_94 = local_38._4_4_;
    uStack_90 = (undefined4)uStack_30;
    uStack_8c = uStack_30._4_4_;
    local_a8 = (undefined4)local_48;
    uStack_a4 = local_48._4_4_;
    uStack_a0 = (undefined4)uStack_40;
    uStack_9c = uStack_40._4_4_;
    local_b8 = (undefined4)local_58;
    uStack_b4 = local_58._4_4_;
    uStack_b0 = (undefined4)uStack_50;
    uStack_ac = uStack_50._4_4_;
    local_c8 = (undefined4)local_68;
    uStack_c4 = local_68._4_4_;
    uStack_c0 = (undefined4)uStack_60;
    uStack_bc = uStack_60._4_4_;
    *(undefined1 *)(param_2 + 8) = local_88;
    local_68 = lVar1;
    uStack_60 = lVar2;
    local_58 = plVar8;
    uStack_50 = lVar3;
    local_48 = lVar4;
    uStack_40 = lVar5;
    local_38 = lVar6;
    uStack_30 = lVar7;
    if (lVar1 != 0) {
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)&local_a8;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_78) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8dc52 FUN_146b8dc52 body=66 status=ok
// SIG undefined FUN_146b8dc52(void)

void FUN_146b8dc52(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(puVar2 + 10) = 2;
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  UNLOCK();
  *puVar1 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x000146b8dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return;
}



// FUNCTION 146b8dc94 FUN_146b8dc94 body=166 status=ok
// SIG undefined FUN_146b8dc94(void)

void FUN_146b8dc94(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (-1 < param_2) {
    plVar1 = (longlong *)(param_1 + 8);
    if (*(int *)(param_1 + 0x14) < param_2) {
      FUN_146b97f98(plVar1,param_2);
    }
    do {
      lVar3 = FUN_142956e72(param_1);
      if (lVar3 != 0) {
        iVar2 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
          FUN_146b97ff8(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar3;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    *(undefined1 *)(param_1 + 0x4c) = 1;
                    /* WARNING: Could not recover jumptable at 0x000146b8dd1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146b8dd3c FUN_146b8dd3c body=112 status=ok
// SIG undefined FUN_146b8dd3c(void)

int FUN_146b8dd3c(undefined8 param_1,uint param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 1;
  local_28 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"BuildPatchServices",L"bEnableDiskOverflowStore",&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (uint)local_19 + (param_2 & 0xff) + 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8ddae FUN_146b8ddae body=111 status=ok
// SIG undefined FUN_146b8ddae(void)

void FUN_146b8ddae(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    iVar1 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
      FUN_146b97ff8((longlong *)(param_1 + 8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000146b8ddfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 146b8de1e FUN_146b8de1e body=134 status=ok
// SIG undefined FUN_146b8de1e(void)

undefined8 * FUN_146b8de1e(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar3 = (longlong *)FUN_146b9807d();
  *param_1 = plVar3 + 2;
  param_1[1] = plVar3;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8dea7 FUN_146b8dea7 body=196 status=ok
// SIG undefined FUN_146b8dea7(void)

undefined8 * FUN_146b8dea7(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58;
  ulonglong uStack_50;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = param_2;
  FUN_14105aa76(DAT_14c872ce0,L"Portal.BuildPatch",L"InstalledPrereqs",&local_58);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  local_40 = local_58;
  local_38 = (undefined4)uStack_50;
  FUN_14282d1cc(param_1);
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8df6c FUN_146b8df6c body=161 status=ok
// SIG undefined FUN_146b8df6c(void)

void FUN_146b8df6c(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  uVar1 = DAT_14c872ce0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e83cb0(param_2,&local_38);
  local_48 = param_1;
  FUN_14680529c(uVar1,L"Portal.BuildPatch",L"InstalledPrereqs",&local_38);
  FUN_1447a1747(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (param_3 != '\0') {
    FUN_140d6d8de(DAT_14c872ce0,0,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8e00e FUN_146b8e00e body=847 status=ok
// SIG undefined FUN_146b8e00e(void)

undefined8 * FUN_146b8e00e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  code *pcVar7;
  longlong *plVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 **local_108;
  undefined ***local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  code *local_c8;
  undefined8 **local_b8;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  longlong *local_80;
  undefined8 **local_78;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_149f35e70;
  local_108 = (undefined8 **)FUN_14295c39e;
  local_e0 = param_1;
  pcVar7 = (code *)FUN_14001cc68(0x18,0x10);
  FUN_146b98122(pcVar7);
  pcVar7[0x10] = (code)0x0;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f35e30;
  plVar8[2] = (longlong)pcVar7;
  local_88 = pcVar7;
  local_80 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    local_78 = (undefined8 **)FUN_14295c39e;
    local_68 = (undefined8 *)0x0;
    pppuVar11 = (undefined ***)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_78 = local_108;
    local_68 = (undefined8 *)0x0;
    pppuVar11 = local_f8;
    if (local_108 == (undefined8 **)0x0) goto LAB_146b8e0f2;
  }
  local_68 = (undefined8 *)0x0;
  if (pppuVar11 == (undefined ***)0x0) {
    pppuVar11 = &local_e8;
  }
  (*(code *)**pppuVar11)();
LAB_146b8e0f2:
  local_c8 = (code *)0x0;
  ppuVar9 = (undefined8 **)FUN_14001cc68(0x60,0x10);
  local_b8 = ppuVar9;
  *ppuVar9 = &PTR_FUN_149f35e50;
  ppuVar9[2] = (undefined8 *)local_88;
  ppuVar9[3] = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  ppuVar9[4] = local_78;
  ppuVar9[6] = (undefined8 *)0x0;
  if (local_78 != (undefined8 **)0x0) {
    puVar12 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)&local_58;
    }
    (**(code **)*puVar12)(puVar12,ppuVar9 + 6);
  }
  if (ppuVar9 != (undefined8 **)&DAT_fffffffffffffff0) {
    local_c8 = FUN_14295c1e8;
  }
  pcVar5 = local_c8;
  FUN_14295c190(&local_88);
  cVar6 = FUN_144a61b4f();
  if (cVar6 == '\0') {
    local_78 = local_b8;
    local_b8 = (undefined8 **)0x0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    local_58 = local_98;
    uStack_54 = uStack_94;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    if (pcVar5 != (code *)0x0) {
      local_c8 = (code *)0x0;
    }
    local_88 = pcVar5;
    FUN_1407461b0(1,&local_88);
  }
  else {
    ppuVar9 = local_b8;
    if (local_b8 == (undefined8 **)0x0) {
      ppuVar9 = &local_a8;
    }
    uVar10 = (*(code *)(*ppuVar9)[1])();
    (*pcVar5)(uVar10);
  }
  pcVar7[0x10] = (code)0x1;
  lVar3 = *(longlong *)pcVar7;
  plVar4 = *(longlong **)(pcVar7 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_c8 != (code *)0x0) {
    ppuVar9 = &local_a8;
    if (local_b8 != (undefined8 **)0x0) {
      ppuVar9 = local_b8;
    }
    (*(code *)(*ppuVar9)[2])(ppuVar9);
  }
  if (plVar8 != (longlong *)0x0) {
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
  while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff,0);
  }
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_1410b2022(param_2,lVar3 + 0x80);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if (local_108 != (undefined8 **)0x0) {
    pppuVar11 = &local_e8;
    if (local_f8 != (undefined ***)0x0) {
      pppuVar11 = local_f8;
    }
    (*(code *)(*pppuVar11)[2])(pppuVar11);
  }
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b8e35e FUN_146b8e35e body=780 status=ok
// SIG undefined FUN_146b8e35e(void)

void FUN_146b8e35e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  code *pcVar7;
  longlong *plVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 **local_108;
  undefined ***local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  code *local_c8;
  undefined8 **local_b8;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  longlong *local_80;
  undefined8 **local_78;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_149f35eb0;
  local_108 = (undefined8 **)&LAB_14295c5b6;
  local_e0 = param_1;
  local_d8 = param_2;
  pcVar7 = (code *)FUN_14001cc68(0x18,0x10);
  FUN_145d28d24(pcVar7);
  pcVar7[0x10] = (code)0x0;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f2f980;
  plVar8[2] = (longlong)pcVar7;
  local_88 = pcVar7;
  local_80 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    local_78 = (undefined8 **)&LAB_14295c5b6;
    local_68 = (undefined8 *)0x0;
    pppuVar11 = (undefined ***)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_78 = local_108;
    local_68 = (undefined8 *)0x0;
    pppuVar11 = local_f8;
    if (local_108 == (undefined8 **)0x0) goto LAB_146b8e440;
  }
  local_68 = (undefined8 *)0x0;
  if (pppuVar11 == (undefined ***)0x0) {
    pppuVar11 = &local_e8;
  }
  (*(code *)**pppuVar11)();
LAB_146b8e440:
  local_c8 = (code *)0x0;
  ppuVar9 = (undefined8 **)FUN_14001cc68(0x60,0x10);
  local_b8 = ppuVar9;
  *ppuVar9 = &PTR_FUN_149f35e90;
  ppuVar9[2] = (undefined8 *)local_88;
  ppuVar9[3] = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  ppuVar9[4] = local_78;
  ppuVar9[6] = (undefined8 *)0x0;
  if (local_78 != (undefined8 **)0x0) {
    puVar12 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)&local_58;
    }
    (**(code **)*puVar12)(puVar12,ppuVar9 + 6);
  }
  if (ppuVar9 != (undefined8 **)&DAT_fffffffffffffff0) {
    local_c8 = FUN_14295c45c;
  }
  pcVar5 = local_c8;
  FUN_14295c404(&local_88);
  cVar6 = FUN_144a61b4f();
  if (cVar6 == '\0') {
    local_78 = local_b8;
    local_b8 = (undefined8 **)0x0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    local_58 = local_98;
    uStack_54 = uStack_94;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    if (pcVar5 != (code *)0x0) {
      local_c8 = (code *)0x0;
    }
    local_88 = pcVar5;
    FUN_1407461b0(1,&local_88);
  }
  else {
    ppuVar9 = local_b8;
    if (local_b8 == (undefined8 **)0x0) {
      ppuVar9 = &local_a8;
    }
    uVar10 = (*(code *)(*ppuVar9)[1])();
    (*pcVar5)(uVar10);
  }
  pcVar7[0x10] = (code)0x1;
  lVar3 = *(longlong *)pcVar7;
  plVar4 = *(longlong **)(pcVar7 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_c8 != (code *)0x0) {
    ppuVar9 = &local_a8;
    if (local_b8 != (undefined8 **)0x0) {
      ppuVar9 = local_b8;
    }
    (*(code *)(*ppuVar9)[2])(ppuVar9);
  }
  if (plVar8 != (longlong *)0x0) {
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
  if (lVar3 != 0) {
    do {
      plVar8 = *(longlong **)(lVar3 + 0x70);
      cVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,0xffffffff,0);
    } while (cVar6 == '\0');
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if (local_108 != (undefined8 **)0x0) {
    pppuVar11 = &local_e8;
    if (local_f8 != (undefined ***)0x0) {
      pppuVar11 = local_f8;
    }
    (*(code *)(*pppuVar11)[2])(pppuVar11);
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b8e66c FUN_146b8e66c body=131 status=ok
// SIG undefined FUN_146b8e66c(void)

undefined8 * FUN_146b8e66c(undefined8 *param_1,undefined1 param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_149f35280;
  puVar2[1] = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(puVar2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 1,iVar1,0);
    memcpy((void *)puVar2[1],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar2 + 3) = param_2;
  return puVar2;
}



// FUNCTION 146b8e6f0 FUN_146b8e6f0 body=195 status=ok
// SIG undefined FUN_146b8e6f0(void)

undefined8 *
FUN_146b8e6f0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  *param_1 = &PTR_FUN_149f352a0;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[0xc] = param_3;
  param_1[0xd] = param_4;
  param_1[0xe] = param_5;
  param_1[0xf] = param_6;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x10),4000);
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x21),4000);
  (**(code **)(*(longlong *)param_1[0xe] + 0x28))
            ((longlong *)param_1[0xe],*(undefined4 *)(param_1 + 1));
  return param_1;
}



// FUNCTION 146b8e7b4 FUN_146b8e7b4 body=432 status=ok
// SIG undefined FUN_146b8e7b4(void)

void FUN_146b8e7b4(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_149f352a0;
  plVar1 = param_1 + 2;
  puVar2 = param_1 + 4;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 7) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 7);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (local_48 != puVar2)) {
    do {
      (**(code **)(*(longlong *)param_1[0xe] + 0x10))
                ((longlong *)param_1[0xe],(longlong)iStack_5c * 0x20 + *local_78);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (local_68 != puVar2 || iStack_5c != iVar4));
  }
  if (param_1[0x20] != 0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))((longlong *)param_1[0xe],param_1 + 0x1e);
  }
  (**(code **)(*(longlong *)param_1[0xe] + 0x20))((longlong *)param_1[0xe],0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  puVar2 = (undefined8 *)param_1[0x20];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1[0x16] != 0) {
    plVar3 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_146154fde(plVar1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8e966 FUN_146b8e966 body=95 status=ok
// SIG undefined FUN_146b8e966(void)

void FUN_146b8e966(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  *param_3 = 0;
  FUN_146b8e9c6();
  puVar1 = (undefined8 *)*param_3;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8e9c6 FUN_146b8e9c6 body=1024 status=ok
// SIG undefined FUN_146b8e9c6(void)

void FUN_146b8e9c6(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_168 [32];
  longlong *local_148;
  int local_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8 [2];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  plVar1 = (longlong *)(param_1 + 0x10);
  local_98 = param_2;
  plStack_90 = param_3;
  FUN_146b9881e(plVar1,local_e8);
  if (param_4 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 8))(*(longlong **)(param_1 + 0x70),param_2);
    FUN_146b8edc8(param_1);
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_148 = local_e8;
    (**(code **)(**(longlong **)(param_1 + 0x60) + 8))
              (*(longlong **)(param_1 + 0x60),plVar1,*(undefined4 *)(param_1 + 8));
    local_108 = 0x100000000;
    local_f8._0_4_ = 0xffffffff;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    iVar7 = 0;
    puStack_100 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_108);
      iVar7 = local_70;
    }
    local_118._0_4_ = (uint)local_f8;
    local_118._4_4_ = local_f8._4_4_;
    uStack_110 = CONCAT44(uStack_ec,uStack_f0);
    local_128 = local_108;
    puStack_120 = puStack_100;
    local_130 = &local_98;
    if ((local_f8._4_4_ != iVar7) || (puStack_100 != local_88)) {
      do {
        lVar9 = (longlong)local_118._4_4_ * 0x18 + *local_130;
        FUN_146b9833a(plVar1,lVar9);
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))(*(longlong **)(param_1 + 0x70),lVar9);
        local_118._0_4_ = (uint)local_118 & ~local_128._4_4_;
        FUN_1449c0562(&local_128);
      } while (local_130 != &local_98 || (puStack_120 != local_88 || local_118._4_4_ != iVar7));
    }
    local_108 = 0x100000000;
    local_f8 = 0xffffffff;
    uStack_f0 = 0;
    puStack_100 = local_d8;
    if (local_c0 == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_108);
      iVar7 = local_c0;
    }
    uStack_110 = CONCAT44(uStack_ec,uStack_f0);
    local_118 = local_f8;
    uVar4 = local_118;
    local_128 = local_108;
    puStack_120 = puStack_100;
    local_118._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    iVar5 = local_118._4_4_;
    local_130 = local_e8;
    if ((local_118._4_4_ != iVar7) || (local_118 = uVar4, puStack_100 != local_d8)) {
      do {
        local_118 = uVar4;
        local_13c = iVar7;
        lVar9 = (longlong)iVar5 * 0x18 + *local_130;
        plVar3 = *(longlong **)(param_1 + 0x68);
        if (plVar3 == (longlong *)0x0) {
          FUN_146b8f232(param_1,lVar9);
        }
        else {
          uVar6 = FUN_1447addd0(lVar9,0x10);
          iVar7 = FUN_146b982c6(plVar1,uVar6,lVar9);
          if (iVar7 == -1) {
            lVar8 = 0;
          }
          else {
            lVar8 = (longlong)iVar7 * 0x20 + *plVar1;
          }
          local_138 = *(undefined8 *)(lVar8 + 0x10);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar3 + 8))(plVar3,lVar9,&local_138);
        }
        FUN_146b9833a(plVar1,lVar9);
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))(*(longlong **)(param_1 + 0x70),lVar9);
        local_118 = CONCAT44(local_118._4_4_,(uint)local_118 & ~local_128._4_4_);
        FUN_1449c0562(&local_128);
        iVar5 = local_118._4_4_;
        iVar7 = local_13c;
        uVar4 = local_118;
      } while (local_130 != local_e8 || (puStack_120 != local_d8 || local_118._4_4_ != local_13c));
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(local_e8);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_98);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  puVar2 = (undefined8 *)*param_3;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b8edc8 FUN_146b8edc8 body=112 status=ok
// SIG undefined FUN_146b8edc8(void)

void FUN_146b8edc8(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (((*(int *)(param_1 + 0xf4) != 0 || *(int *)(param_1 + 0xf0) != 0) ||
      *(int *)(param_1 + 0xf8) != 0) || *(int *)(param_1 + 0xfc) != 0) {
    uVar1 = FUN_1447addd0(param_1 + 0xf0,0x10);
    iVar2 = FUN_146b982c6(param_1 + 0x10,uVar1,param_1 + 0xf0);
    uVar3 = (uint)(iVar2 == -1);
  }
                    /* WARNING: Could not recover jumptable at 0x000146b8ee06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))
            (*(longlong **)(param_1 + 0x70),
             (uVar3 + *(int *)(param_1 + 0x18)) - *(int *)(param_1 + 0x44));
  return;
}



// FUNCTION 146b8ee38 FUN_146b8ee38 body=286 status=ok
// SIG undefined FUN_146b8ee38(void)

undefined8 * FUN_146b8ee38(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  puVar6 = (undefined8 *)0x0;
  if ((((*(int *)(param_1 + 0xf0) == *param_3) && (*(int *)(param_1 + 0xf4) == param_3[1])) &&
      (*(int *)(param_1 + 0xf8) == param_3[2])) &&
     (puVar6 = (undefined8 *)0x0, *(int *)(param_1 + 0xfc) == param_3[3])) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar3 = FUN_1447addd0(param_3,0x10);
  iVar4 = FUN_146b982c6(plVar1,uVar3,param_3);
  if (iVar4 != -1) {
    uVar3 = FUN_1447addd0(param_3,0x10);
    iVar4 = FUN_146b982c6(plVar1,uVar3,param_3);
    if (iVar4 == -1) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)iVar4 * 0x20 + *plVar1;
    }
    puVar2 = *(undefined8 **)(lVar5 + 0x10);
    *(undefined8 *)(lVar5 + 0x10) = 0;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_146b9833a(plVar1,param_3);
    puVar6 = puVar2;
  }
  FUN_146b8edc8(param_1);
  *param_2 = puVar6;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  return param_2;
}



// FUNCTION 146b8ef5a FUN_146b8ef5a body=246 status=ok
// SIG undefined FUN_146b8ef5a(void)

void FUN_146b8ef5a(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  uVar4 = *(undefined8 *)(param_1 + 200);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  uVar7 = *(undefined8 *)(param_1 + 0xe0);
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0xe0) = param_2[6];
  *(longlong *)(param_1 + 0xe8) = lVar15;
  *(longlong *)(param_1 + 0xd0) = lVar13;
  *(longlong *)(param_1 + 0xd8) = lVar14;
  *(longlong *)(param_1 + 0xc0) = lVar11;
  *(longlong *)(param_1 + 200) = lVar12;
  *(longlong *)(param_1 + 0xb0) = lVar9;
  *(longlong *)(param_1 + 0xb8) = lVar10;
  local_68._0_4_ = (undefined4)uVar1;
  local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar2;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_58._0_4_ = (undefined4)uVar3;
  local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar4;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_48._0_4_ = (undefined4)uVar5;
  local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar6;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_38._0_4_ = (undefined4)uVar7;
  local_38._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar8;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_38._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_40._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_68;
  *(undefined4 *)((longlong)param_2 + 4) = local_68._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
  local_68 = uVar1;
  uStack_60 = uVar2;
  local_58 = uVar3;
  uStack_50 = uVar4;
  local_48 = uVar5;
  uStack_40 = uVar6;
  local_38 = uVar7;
  uStack_30 = uVar8;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8f062 FUN_146b8f062 body=463 status=ok
// SIG undefined FUN_146b8f062(void)

void FUN_146b8f062(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    lVar2 = param_1 + 0x20;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar9 = 0;
    local_50 = lVar2;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_1449c0562(&local_58);
      iVar9 = *(int *)(param_1 + 0x38);
    }
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar7 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar9) || (local_68 = uVar6, local_50 != lVar2)) {
      do {
        local_68 = uVar6;
        lVar4 = *local_80;
        lVar8 = (longlong)iVar7 * 0x20;
        plVar5 = *(longlong **)(param_1 + 0x68);
        local_88 = *(undefined8 *)(lVar4 + 0x10 + lVar8);
        *(undefined8 *)(lVar4 + 0x10 + lVar8) = 0;
        (**(code **)(*plVar5 + 8))(plVar5,lVar4 + lVar8);
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar7 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_80 != plVar1 || (local_70 != lVar2 || local_68._4_4_ != iVar9));
    }
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x100) = 0;
      local_90 = lVar2;
      (**(code **)(**(longlong **)(param_1 + 0x68) + 8))
                (*(longlong **)(param_1 + 0x68),param_1 + 0xf0);
    }
  }
  FUN_146b984d8(param_1 + 0x10);
  puVar3 = *(undefined8 **)(param_1 + 0x100);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_146b8edc8(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8f232 FUN_146b8f232 body=101 status=ok
// SIG undefined FUN_146b8f232(void)

void FUN_146b8f232(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  pcVar1 = *(code **)(param_1 + 0xb0);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0xd0);
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0xc0);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000146b8f290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return;
}



// FUNCTION 146b8f298 FUN_146b8f298 body=91 status=ok
// SIG undefined FUN_146b8f298(void)

undefined8
FUN_146b8f298(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_146b8e6f0(uVar1,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}



// FUNCTION 146b8f2f4 FUN_146b8f2f4 body=164 status=ok
// SIG undefined FUN_146b8f2f4(void)

void FUN_146b8f2f4(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0xff;
  FUN_146b98ab6(local_50);
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 4) = 0xff;
  FUN_146b98b5e(puVar2 + 1,local_50);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    UNLOCK();
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
  }
  FUN_146b98b22(local_50);
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8f39a FUN_146b8f39a body=164 status=ok
// SIG undefined FUN_146b8f39a(void)

void FUN_146b8f39a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0xff;
  FUN_146b98bcc(local_50);
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 4) = 0xff;
  FUN_146b98b5e(puVar2 + 1,local_50);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    UNLOCK();
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
  }
  FUN_146b98b22(local_50);
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8f440 FUN_146b8f440 body=487 status=ok
// SIG undefined FUN_146b8f440(void)

void FUN_146b8f440(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong in_RCX;
  longlong *plVar11;
  undefined1 auStack_128 [44];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(uint *)(in_RCX + 0x50) & 1) == 0) {
    local_88[0] = *param_3;
    local_78[0] = 0;
    if (local_88[0] != 0) {
      plVar11 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar11 = (longlong *)param_3[2];
      }
      param_1 = (**(code **)*plVar11)(plVar11,local_78);
    }
    FUN_146b8f628(param_1,param_2,local_88);
  }
  else {
    local_f0 = *param_2;
    *param_2 = 0;
    lVar9 = param_2[1];
    local_f4 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    lVar2 = param_2[2];
    param_2[2] = 0;
    local_f8 = (undefined4)param_2[3];
    local_fc = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    lVar3 = *param_3;
    lVar4 = param_3[2];
    param_3[2] = 0;
    local_98 = param_3[6];
    lStack_90 = param_3[7];
    local_a8 = (undefined4)param_3[4];
    uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_a0 = (undefined4)param_3[5];
    uStack_9c = *(undefined4 *)((longlong)param_3 + 0x2c);
    if (lVar3 != 0) {
      *param_3 = 0;
    }
    local_c8 = lVar3;
    puVar10 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    *puVar10 = 0;
    puVar10[2] = local_f0;
    local_e8 = 0;
    *(int *)(puVar10 + 3) = (int)lVar9;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = local_f4;
    local_e0 = 0;
    puVar10[4] = lVar2;
    local_d8 = 0;
    *(undefined4 *)(puVar10 + 5) = local_f8;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = local_fc;
    local_d0 = 0;
    puVar10[6] = lVar3;
    puVar10[8] = lVar4;
    local_b8 = 0;
    lVar2 = param_3[4];
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
    lVar4 = param_3[5];
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
    uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
    lVar9 = param_3[7];
    uVar8 = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(int *)(puVar10 + 0xc) = (int)param_3[6];
    *(undefined4 *)((longlong)puVar10 + 100) = uVar7;
    *(int *)(puVar10 + 0xd) = (int)lVar9;
    *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar8;
    *(int *)(puVar10 + 10) = (int)lVar2;
    *(undefined4 *)((longlong)puVar10 + 0x54) = uVar5;
    *(int *)(puVar10 + 0xb) = (int)lVar4;
    *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar6;
    if (lVar3 != 0) {
      local_c8 = 0;
    }
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(in_RCX + 0x20);
      *(undefined8 **)(in_RCX + 0x20) = puVar10;
      UNLOCK();
      LOCK();
      *puVar1 = puVar10;
      UNLOCK();
    }
    FUN_146b8f6fa(&local_e8);
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    plVar11 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8f628 FUN_146b8f628 body=208 status=ok
// SIG undefined FUN_146b8f628(void)

undefined8 FUN_146b8f628(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  int local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = *(int *)(param_2 + 3) + -1;
  if (*(int *)(param_2 + 3) == 0) {
    iVar4 = 0;
  }
  local_48 = iVar4 + 1 + (uint)(*(int *)(param_2 + 1) == 0);
  local_40[0] = 0;
  FUN_14125bce8(local_40,*param_2,*(int *)(param_2 + 1),0);
  FUN_1401aebe8(local_40,param_2[2],iVar4);
  pcVar1 = (code *)*param_3;
  plVar3 = (longlong *)param_3[2];
  if ((longlong *)param_3[2] == (longlong *)0x0) {
    plVar3 = param_3 + 4;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8f6fa FUN_146b8f6fa body=75 status=ok
// SIG undefined FUN_146b8f6fa(void)

void FUN_146b8f6fa(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
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



// FUNCTION 146b8f746 FUN_146b8f746 body=583 status=ok
// SIG undefined FUN_146b8f746(void)

void FUN_146b8f746(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_148 [2];
  undefined8 local_138 [6];
  longlong local_108 [2];
  undefined8 local_f8 [6];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 *local_98;
  undefined8 local_88 [4];
  undefined1 local_68 [24];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_50 = -1;
  local_158 = param_1;
  cVar4 = FUN_146b8f98e(param_1 + 0x10);
  if (cVar4 != '\0') {
    do {
      if (local_50 == '\x01') {
        iVar1 = *(int *)(local_158 + 0x48);
        if ((longlong)iVar1 != 0) {
          lVar2 = *(longlong *)(local_158 + 0x40);
          lVar6 = 0;
          do {
            plVar3 = *(longlong **)(lVar2 + lVar6);
            (**(code **)(*plVar3 + 8))(plVar3,local_68);
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar1 * 8 != lVar6);
        }
      }
      else if ((local_50 == '\0') && (iVar1 = *(int *)(local_158 + 0x48), (longlong)iVar1 != 0)) {
        lVar2 = *(longlong *)(local_158 + 0x40);
        lVar6 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + lVar6);
          (**(code **)(*plVar3 + 0x10))(plVar3,local_68);
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar1 * 8 != lVar6);
      }
      cVar4 = FUN_146b8f98e(param_1 + 0x10,local_68);
    } while (cVar4 != '\0');
  }
  local_98 = (undefined8 *)0x0;
  local_150 = local_158 + 0x20;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  cVar4 = FUN_146b8fa28();
  if (cVar4 != '\0') {
    uVar7 = extraout_XMM0_Da;
    do {
      iVar1 = *(int *)(local_158 + 0x48);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(local_158 + 0x40);
        lVar6 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + lVar6);
          local_108[0] = local_a8;
          local_f8[0] = 0;
          if (local_a8 != 0) {
            puVar5 = local_98;
            if (local_98 == (undefined8 *)0x0) {
              puVar5 = local_88;
            }
            (**(code **)*puVar5)(puVar5,local_f8);
          }
          cVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,&local_c8,local_108);
          if (cVar4 != '\0') goto LAB_146b8f8c9;
          lVar6 = lVar6 + 8;
          uVar7 = extraout_XMM0_Da_01;
        } while ((longlong)iVar1 * 8 != lVar6);
      }
      local_148[0] = local_a8;
      local_138[0] = 0;
      if (local_a8 != 0) {
        puVar5 = local_98;
        if (local_98 == (undefined8 *)0x0) {
          puVar5 = local_88;
        }
        uVar7 = (**(code **)*puVar5)(puVar5,local_138);
      }
      FUN_146b8f628(uVar7,&local_c8,local_148);
LAB_146b8f8c9:
      cVar4 = FUN_146b8fa28(local_150,&local_c8);
      uVar7 = extraout_XMM0_Da_00;
    } while (cVar4 != '\0');
  }
  FUN_146b8f6fa(&local_c8);
  FUN_146b98b22(local_68);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b8f98e FUN_146b8f98e body=152 status=ok
// SIG undefined FUN_146b8f98e(void)

bool FUN_146b8f98e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_146b98b5e(param_2,lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_30 = 0xff;
    FUN_146b98b5e(lVar1 + 8,local_48);
    FUN_146b98b22(local_48);
    if (lVar2 != 0) {
      FUN_146b98b22(lVar2 + 8);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8fa28 FUN_146b8fa28 body=438 status=ok
// SIG undefined FUN_146b8fa28(void)

bool FUN_146b8fa28(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
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
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_146b98c38(param_2,lVar1 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    uVar9 = *(undefined8 *)(param_2 + 0x50);
    uVar10 = *(undefined8 *)(param_2 + 0x58);
    uVar11 = *(undefined8 *)(lVar1 + 0x30);
    uVar12 = *(undefined8 *)(lVar1 + 0x38);
    uVar13 = *(undefined8 *)(lVar1 + 0x40);
    uVar14 = *(undefined8 *)(lVar1 + 0x48);
    uVar15 = *(undefined8 *)(lVar1 + 0x50);
    uVar16 = *(undefined8 *)(lVar1 + 0x58);
    uVar17 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(param_2 + 0x58) = uVar17;
    *(undefined8 *)(param_2 + 0x40) = uVar15;
    *(undefined8 *)(param_2 + 0x48) = uVar16;
    *(undefined8 *)(param_2 + 0x30) = uVar13;
    *(undefined8 *)(param_2 + 0x38) = uVar14;
    *(undefined8 *)(param_2 + 0x20) = uVar11;
    *(undefined8 *)(param_2 + 0x28) = uVar12;
    local_c8._0_4_ = (undefined4)uVar5;
    local_c8._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_c0._0_4_ = (undefined4)uVar6;
    uStack_c0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_b8._0_4_ = (undefined4)uVar7;
    local_b8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_b0._0_4_ = (undefined4)uVar8;
    uStack_b0._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_a8._0_4_ = (undefined4)uVar9;
    local_a8._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_a0._0_4_ = (undefined4)uVar10;
    uStack_a0._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
    *(undefined4 *)(lVar1 + 0x60) = (undefined4)local_a8;
    *(undefined4 *)(lVar1 + 100) = local_a8._4_4_;
    *(undefined4 *)(lVar1 + 0x68) = (undefined4)uStack_a0;
    *(undefined4 *)(lVar1 + 0x6c) = uStack_a0._4_4_;
    *(undefined4 *)(lVar1 + 0x50) = (undefined4)local_b8;
    *(undefined4 *)(lVar1 + 0x54) = local_b8._4_4_;
    *(undefined4 *)(lVar1 + 0x58) = (undefined4)uStack_b0;
    *(undefined4 *)(lVar1 + 0x5c) = uStack_b0._4_4_;
    *(undefined4 *)(lVar1 + 0x40) = (undefined4)local_c8;
    *(undefined4 *)(lVar1 + 0x44) = local_c8._4_4_;
    *(undefined4 *)(lVar1 + 0x48) = (undefined4)uStack_c0;
    *(undefined4 *)(lVar1 + 0x4c) = uStack_c0._4_4_;
    *(undefined8 *)(lVar1 + 0x30) = uVar3;
    *(undefined8 *)(lVar1 + 0x38) = uVar4;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146b98c38(lVar1 + 0x10,&local_d8);
    local_78 = *(undefined8 *)(lVar1 + 0x30);
    uStack_70 = *(undefined8 *)(lVar1 + 0x38);
    local_68 = *(undefined8 *)(lVar1 + 0x40);
    uStack_60 = *(undefined8 *)(lVar1 + 0x48);
    local_58 = *(undefined8 *)(lVar1 + 0x50);
    uStack_50 = *(undefined8 *)(lVar1 + 0x58);
    local_48 = *(undefined8 *)(lVar1 + 0x60);
    uStack_40 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x60) = local_88;
    *(undefined8 *)(lVar1 + 0x68) = uStack_80;
    *(undefined8 *)(lVar1 + 0x50) = local_98;
    *(undefined8 *)(lVar1 + 0x58) = uStack_90;
    *(undefined8 *)(lVar1 + 0x40) = local_a8;
    *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
    *(undefined8 *)(lVar1 + 0x30) = local_b8;
    *(undefined8 *)(lVar1 + 0x38) = uStack_b0;
    local_b8 = local_78;
    uStack_b0 = uStack_70;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    local_98 = local_58;
    uStack_90 = uStack_50;
    local_88 = local_48;
    uStack_80 = uStack_40;
    FUN_146b8f6fa(&local_d8);
    if (lVar2 != 0) {
      FUN_146b8f6fa(lVar2 + 0x10);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8fbe0 FUN_146b8fbe0 body=63 status=ok
// SIG undefined FUN_146b8fbe0(void)

void FUN_146b8fbe0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  LOCK();
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | *(uint *)(param_2 + 8);
  UNLOCK();
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_146b98ca8((longlong *)(param_1 + 0x40),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 146b8fc20 FUN_146b8fc20 body=122 status=ok
// SIG undefined FUN_146b8fc20(void)

void FUN_146b8fc20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_20;
  LOCK();
  *(undefined4 *)(param_1 + 0x50) = 0;
  UNLOCK();
  local_20 = param_2;
  FUN_146b98d2e(param_1 + 0x40);
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar1 = 0;
    do {
      LOCK();
      *(uint *)(param_1 + 0x50) =
           *(uint *)(param_1 + 0x50) |
           *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar1) + 8);
      UNLOCK();
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + 0x48) * 8 != lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b8fc9c FUN_146b8fc9c body=57 status=ok
// SIG undefined FUN_146b8fc9c(void)

void FUN_146b8fc9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  FUN_146b8fcd6(puVar1);
  return;
}



// FUNCTION 146b8fcd6 FUN_146b8fcd6 body=135 status=ok
// SIG undefined FUN_146b8fcd6(void)

undefined8 * FUN_146b8fcd6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f35a70;
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 4) = 0xff;
  param_1[3] = puVar1;
  param_1[2] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = 0;
  puVar1[8] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  param_1[5] = puVar1;
  param_1[4] = puVar1;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[6] = &PTR_FUN_149f35ab0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 146b8fd5e FUN_146b8fd5e body=150 status=ok
// SIG undefined FUN_146b8fd5e(void)

undefined8 * FUN_146b8fd5e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar3 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 4,iVar1,0);
    FUN_140b8566a(param_1[4],uVar3,iVar1);
  }
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 146b8fdf4 FUN_146b8fdf4 body=254 status=ok
// SIG undefined FUN_146b8fdf4(void)

ulonglong FUN_146b8fdf4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) == 0) {
    plVar3 = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    plVar3 = &local_40;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x88))(*(longlong **)(param_1 + 0x18),plVar3);
    if ((longlong)local_38 == 0) {
      local_38 = 0;
      plVar3 = (longlong *)0x0;
    }
    else {
      lVar5 = (longlong)local_38 << 4;
      lVar4 = local_40;
      do {
        lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1f8))
                          (*(longlong **)(param_1 + 8),lVar4);
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))
                          (*(longlong **)(param_1 + 0x18),lVar4);
        plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
        if ((lVar1 == 0) ||
           (*(int *)(lVar2 + 0x30) != *(int *)(lVar1 + 0x30) ||
            *(undefined1 (*) [16])(lVar2 + 0x20) != *(undefined1 (*) [16])(lVar1 + 0x20)))
        goto LAB_146b8fead;
        lVar4 = lVar4 + 0x10;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
      plVar3 = (longlong *)0x0;
    }
LAB_146b8fead:
    FUN_1447a1747(local_40,local_38);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar3 & 0xffffffff;
}



// FUNCTION 146b8fef4 FUN_146b8fef4 body=375 status=ok
// SIG undefined FUN_146b8fef4(void)

void FUN_146b8fef4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  code *local_68;
  longlong *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f340d0;
  plVar4[2] = *param_2;
  lVar2 = param_2[1];
  plVar4[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(plVar4 + 4) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  pcVar3 = *(code **)(param_1 + 0x60);
  local_58 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  local_48 = *(undefined4 *)(param_1 + 0x80);
  uStack_44 = *(undefined4 *)(param_1 + 0x84);
  uStack_40 = *(undefined4 *)(param_1 + 0x88);
  uStack_3c = *(undefined4 *)(param_1 + 0x8c);
  local_38 = *(undefined4 *)(param_1 + 0x90);
  uStack_34 = *(undefined4 *)(param_1 + 0x94);
  uStack_30 = *(undefined4 *)(param_1 + 0x98);
  uStack_2c = *(undefined4 *)(param_1 + 0x9c);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xd0);
  *(longlong **)(lVar2 + 0x80) = plVar4 + 2;
  *(longlong **)(lVar2 + 0x88) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_68 = pcVar3;
  FUN_140b576f0();
  if (pcVar3 != (code *)0x0) {
    plVar6 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar6 = (longlong *)&local_48;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(uVar5,plVar4 + 2);
    if (local_68 != (code *)0x0) {
      plVar6 = (longlong *)&local_48;
      if (local_58 != (longlong *)0x0) {
        plVar6 = local_58;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9006c FUN_146b9006c body=102 status=ok
// SIG undefined FUN_146b9006c(void)

undefined8 FUN_146b9006c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xe8);
  while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff,0);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x80);
  plVar5 = *(longlong **)(lVar3 + 0x88);
  if (plVar5 != (longlong *)0x0) {
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
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return uVar4;
}



// FUNCTION 146b900d2 FUN_146b900d2 body=76 status=ok
// SIG undefined FUN_146b900d2(void)

undefined4 FUN_146b900d2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    while( true ) {
      do {
        lVar4 = lVar2;
        lVar2 = 0;
      } while (lVar4 == 0);
      plVar1 = *(longlong **)(lVar4 + 0x70);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar2 = *(longlong *)(param_1 + 0xe8);
    }
  }
  return *(undefined4 *)(param_1 + 0xf8);
}



// FUNCTION 146b9011e FUN_146b9011e body=105 status=ok
// SIG undefined FUN_146b9011e(void)

undefined8 * FUN_146b9011e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x200000000;
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



// FUNCTION 146b90188 FUN_146b90188 body=47 status=ok
// SIG undefined FUN_146b90188(void)

void FUN_146b90188(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14295737a(uVar1,param_1,param_2);
  return;
}



// FUNCTION 146b901b8 FUN_146b901b8 body=85 status=ok
// SIG undefined FUN_146b901b8(void)

void FUN_146b901b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_FUN_149f353b8;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  puVar1[5] = param_5;
  return;
}



// FUNCTION 146b9025c FUN_146b9025c body=66 status=ok
// SIG undefined FUN_146b9025c(void)

void FUN_146b9025c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = &PTR_FUN_149f35480;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 146b9029e FUN_146b9029e body=189 status=ok
// SIG undefined FUN_146b9029e(void)

undefined8 *
FUN_146b9029e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f354b0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  *(undefined4 *)(param_1 + 0xe) = 4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x11) = 5;
  FUN_14475e4ac(param_1 + 0x10,0);
  puVar1 = (undefined8 *)param_1[0x10];
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 146b90374 FUN_146b90374 body=133 status=ok
// SIG undefined FUN_146b90374(void)

void FUN_146b90374(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 8);
  local_29 = param_4;
  uVar2 = FUN_146b46e89();
  FUN_140056680(local_40,uVar2);
  (**(code **)(*plVar1 + 8))(plVar1,param_3,0xffffffff,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  LOCK();
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  UNLOCK();
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b903fa FUN_146b903fa body=61 status=ok
// SIG undefined FUN_146b903fa(void)

void FUN_146b903fa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
            (*(longlong **)(param_1 + 8),param_3,param_6,param_4,param_5,param_7);
  LOCK();
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  UNLOCK();
  return;
}



// FUNCTION 146b90438 FUN_146b90438 body=111 status=ok
// SIG undefined FUN_146b90438(void)

void FUN_146b90438(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  *(longlong *)(param_1 + 0x20) = param_2;
  UNLOCK();
  if (0 < *(longlong *)(param_1 + 0x28)) {
    local_c = (float)((double)param_2 / (double)*(longlong *)(param_1 + 0x28));
    local_10 = 3;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b904a8 FUN_146b904a8 body=111 status=ok
// SIG undefined FUN_146b904a8(void)

void FUN_146b904a8(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  *(longlong *)(param_1 + 0x28) = param_2;
  UNLOCK();
  if (0 < param_2) {
    local_c = (float)((double)*(longlong *)(param_1 + 0x20) / (double)param_2);
    local_10 = 3;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b90518 FUN_146b90518 body=159 status=ok
// SIG undefined FUN_146b90518(void)

void FUN_146b90518(longlong param_1,undefined4 param_2)

{
  double dVar1;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  QueryPerformanceCounter(&local_30);
  if (0 < *(longlong *)(param_1 + 0x78)) {
    dVar1 = (double)FUN_146b45318(local_30.QuadPart - *(longlong *)(param_1 + 0x78));
    *(float *)(*(longlong *)(param_1 + 0x80) + (longlong)*(int *)(param_1 + 0x70) * 4) =
         (float)((double)*(float *)(*(longlong *)(param_1 + 0x80) +
                                   (longlong)*(int *)(param_1 + 0x70) * 4) + dVar1);
  }
  *(undefined4 *)(param_1 + 0x70) = param_2;
  LOCK();
  ((LARGE_INTEGER *)(param_1 + 0x78))->QuadPart = (LONGLONG)local_30;
  UNLOCK();
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000146b905ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b905c8 FUN_146b905c8 body=52 status=ok
// SIG undefined FUN_146b905c8(void)

int FUN_146b905c8(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))(*(longlong **)(param_1 + 0x10),param_2 != 0)
  ;
  LOCK();
  *(int *)(param_1 + 0x3c) = param_2;
  UNLOCK();
  do {
    iVar1 = *(int *)(param_1 + 0x40);
    if (param_2 <= iVar1) {
      return iVar1;
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 0x40);
    bVar3 = iVar1 == iVar2;
    if (bVar3) {
      *(int *)(param_1 + 0x40) = param_2;
      iVar2 = iVar1;
    }
    UNLOCK();
  } while (!bVar3);
  return iVar2;
}



// FUNCTION 146b90632 FUN_146b90632 body=43 status=ok
// SIG undefined FUN_146b90632(void)

undefined4 FUN_146b90632(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return uVar1;
}



// FUNCTION 146b9065e FUN_146b9065e body=119 status=ok
// SIG undefined FUN_146b9065e(void)

undefined8 * FUN_146b9065e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x88);
  _Src = *(void **)(param_1 + 0x80);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1447c510a(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return param_2;
}



// FUNCTION 146b906de FUN_146b906de body=55 status=ok
// SIG undefined FUN_146b906de(void)

void FUN_146b906de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x90,0x10);
  FUN_146b9029e(uVar1,param_1,param_2,param_3);
  return;
}



// FUNCTION 146b90716 FUN_146b90716 body=232 status=ok
// SIG undefined FUN_146b90716(void)

void FUN_146b90716(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  DWORD DVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong local_60 [2];
  longlong local_50 [2];
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_39 = param_4;
  if (param_4 == '\0') {
    LOCK();
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    UNLOCK();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar3 = FUN_146b46ea6(&local_39);
  FUN_140056680(local_50,uVar3);
  FUN_140056680(local_60,L"DiskChunkStoreSave");
  DVar2 = GetLastError();
  local_78 = local_60;
  local_70 = local_50;
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,DVar2);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b90832 FUN_146b90832 body=216 status=ok
// SIG undefined FUN_146b90832(void)

void FUN_146b90832(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  DWORD DVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong local_60 [2];
  longlong local_50 [2];
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_39 = param_4;
  if (param_4 == '\0') {
    lVar4 = 0x18;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    uVar3 = FUN_146b46e89(&local_39);
    FUN_140056680(local_50,uVar3);
    FUN_140056680(local_60,L"DiskChunkStoreLoad");
    DVar2 = GetLastError();
    local_78 = local_60;
    local_70 = local_50;
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,DVar2);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    lVar4 = 0x20;
  }
  LOCK();
  *(int *)(param_1 + lVar4) = *(int *)(param_1 + lVar4) + 1;
  UNLOCK();
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9091e FUN_146b9091e body=80 status=ok
// SIG undefined FUN_146b9091e(void)

void FUN_146b9091e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_149f35550;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
  return;
}



// FUNCTION 146b9096e FUN_146b9096e body=156 status=ok
// SIG undefined FUN_146b9096e(void)

undefined8 *
FUN_146b9096e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &PTR_FUN_149f355f0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x10),4000);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x17),4000);
  return param_1;
}



// FUNCTION 146b90a0a FUN_146b90a0a body=140 status=ok
// SIG undefined FUN_146b90a0a(void)

void FUN_146b90a0a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  lVar1 = FUN_146b990c2(param_1 + 0x30,param_2,&local_34);
  FUN_144a787a6(lVar1,param_3);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


