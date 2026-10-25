// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14989e642 FUN_14989e642 body=29 status=ok
// SIG undefined FUN_14989e642(void)

undefined8 FUN_14989e642(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989e660 FUN_14989e660 body=38 status=ok
// SIG undefined FUN_14989e660(void)

undefined8 FUN_14989e660(undefined8 param_1,int param_2)

{
  FUN_146efa5e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989e686 FUN_14989e686 body=45 status=ok
// SIG undefined FUN_14989e686(void)

longlong FUN_14989e686(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_146efa5e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989e6b4 FUN_14989e6b4 body=38 status=ok
// SIG undefined FUN_14989e6b4(void)

undefined8 FUN_14989e6b4(undefined8 param_1,int param_2)

{
  FUN_146efa5e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989e6da FUN_14989e6da body=45 status=ok
// SIG undefined FUN_14989e6da(void)

longlong FUN_14989e6da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_146efa5e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989e708 FUN_14989e708 body=102 status=ok
// SIG undefined FUN_14989e708(void)

longlong * FUN_14989e708(longlong *param_1,longlong *param_2,char *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,&DAT_149e063bc,(int)*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14989e76e FUN_14989e76e body=220 status=ok
// SIG undefined FUN_14989e76e(void)

int FUN_14989e76e(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (DAT_14cc2e3c8 != DAT_14cc2e3f4) {
    puVar8 = &DAT_14cc2e3f8;
    if (DAT_14cc2e400 != (undefined *)0x0) {
      puVar8 = DAT_14cc2e400;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)(DAT_14cc2e408 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_14989e7c8:
      lVar9 = (longlong)iVar1;
      iVar3 = *(int *)(DAT_14cc2e3c0 + 8 + lVar9 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar4 = 0;
        do {
          uVar6 = *(ushort *)(*(longlong *)(DAT_14cc2e3c0 + lVar9 * 0x28) + lVar4);
          uVar7 = (ulonglong)uVar6;
          uVar5 = *(ushort *)(*param_2 + lVar4);
          if (uVar6 == uVar5) {
            if (uVar6 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar5 | uVar6)) goto LAB_14989e83f;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar10 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_14989e83f;
          }
          lVar4 = lVar4 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14989e830;
    }
  }
  return -1;
LAB_14989e83f:
  if (uVar6 == uVar5) {
    return iVar1;
  }
LAB_14989e830:
  iVar1 = *(int *)(DAT_14cc2e3c0 + 0x20 + lVar9 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14989e7c8;
}



// FUNCTION 14989e84a FUN_14989e84a body=338 status=ok
// SIG undefined FUN_14989e84a(void)

undefined4 * FUN_14989e84a(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14989e99e(local_40);
  FUN_14989eb2a(local_38,*param_2,param_2[1]);
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  iVar9 = *(int *)(local_38 + 1);
  if (iVar9 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*local_38;
  }
  iVar2 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar10);
  cVar4 = FUN_14989eaac(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14cc2e3c8 - DAT_14cc2e3f4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cc2e408)) {
      uVar5 = DAT_14cc2e408 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x24) = uVar5;
      puVar7 = DAT_14cc2e400;
      if (DAT_14cc2e400 == (undefined *)0x0) {
        puVar7 = &DAT_14cc2e3f8;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cc2e408 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14cc2e400;
      if (DAT_14cc2e400 == (undefined *)0x0) {
        puVar7 = &DAT_14cc2e3f8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cc2e408 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14cc2e408 = iVar9;
      FUN_14989ec4e(&DAT_14cc2e3c0);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989e99e FUN_14989e99e body=270 status=ok
// SIG undefined FUN_14989e99e(void)

int * FUN_14989e99e(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cc2e3f0;
  iVar4 = DAT_14cc2e3c8;
  if (DAT_14cc2e3f4 == 0) {
    iVar2 = DAT_14cc2e3c8 + 1;
    bVar7 = DAT_14cc2e3cc == DAT_14cc2e3c8;
    DAT_14cc2e3c8 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14cc2e3c0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cc2e3d0,1);
    puVar3 = DAT_14cc2e3e0;
    if (DAT_14cc2e3e0 == (undefined *)0x0) {
      puVar3 = &DAT_14cc2e3d0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cc2e3f0;
    DAT_14cc2e3f0 = *(int *)(DAT_14cc2e3c0 + 4 + lVar6 * 0x28);
    DAT_14cc2e3f4 = DAT_14cc2e3f4 + -1;
    iVar4 = iVar2;
    if (DAT_14cc2e3f4 != 0) {
      *(undefined4 *)(DAT_14cc2e3c0 + (longlong)DAT_14cc2e3f0 * 0x28) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cc2e3d0;
  if (DAT_14cc2e3e0 != (undefined *)0x0) {
    puVar3 = DAT_14cc2e3e0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14cc2e3c0;
  return param_1;
}



// FUNCTION 14989eaac FUN_14989eaac body=125 status=ok
// SIG undefined FUN_14989eaac(void)

undefined8 FUN_14989eaac(undefined8 param_1,undefined4 *param_2,int *param_3)

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
  
  if ((DAT_14cc2e3c8 - DAT_14cc2e3f4 != 1) && (iVar9 = FUN_14989e76e(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(DAT_14cc2e3c0 + (longlong)iVar9 * 0x28);
    FUN_14989e5f8(puVar1);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    puVar1[4] = param_2[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14989eb98(&DAT_14cc2e3c0,*param_3);
    *param_3 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 14989eb2a FUN_14989eb2a body=110 status=ok
// SIG undefined FUN_14989eb2a(void)

undefined8 * FUN_14989eb2a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  return param_1;
}



// FUNCTION 14989eb98 FUN_14989eb98 body=114 status=ok
// SIG undefined FUN_14989eb98(void)

void FUN_14989eb98(longlong *param_1,int param_2)

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



// FUNCTION 14989ec0a FUN_14989ec0a body=68 status=ok
// SIG undefined FUN_14989ec0a(void)

void FUN_14989ec0a(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14989ec4e(param_1);
  return;
}



// FUNCTION 14989ec4e FUN_14989ec4e body=476 status=ok
// SIG undefined FUN_14989ec4e(void)

void FUN_14989ec4e(longlong *param_1)

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



// FUNCTION 14989ee2c FUN_14989ee2c body=42 status=ok
// SIG undefined FUN_14989ee2c(void)

void FUN_14989ee2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_14467a198(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 14989ee56 FUN_14989ee56 body=29 status=ok
// SIG undefined FUN_14989ee56(void)

undefined8 FUN_14989ee56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989ee74 FUN_14989ee74 body=117 status=ok
// SIG undefined FUN_14989ee74(void)

void FUN_14989ee74(longlong *param_1,int param_2)

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
  FUN_14989e5f8((longlong)param_2 * 0x28 + *param_1);
  FUN_14989eb98(param_1,param_2);
  return;
}



// FUNCTION 14989eeea FUN_14989eeea body=59 status=ok
// SIG undefined FUN_14989eeea(void)

void FUN_14989eeea(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1[3] != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014989ef1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar1)(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14989ef26 FUN_14989ef26 body=29 status=ok
// SIG undefined FUN_14989ef26(void)

undefined8 FUN_14989ef26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989ef44 FUN_14989ef44 body=59 status=ok
// SIG undefined FUN_14989ef44(void)

void FUN_14989ef44(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1[3] != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014989ef75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar1)(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14989ef80 FUN_14989ef80 body=29 status=ok
// SIG undefined FUN_14989ef80(void)

undefined8 FUN_14989ef80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989efb6 FUN_14989efb6 body=29 status=ok
// SIG undefined FUN_14989efb6(void)

undefined8 FUN_14989efb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989efd4 FUN_14989efd4 body=31 status=ok
// SIG undefined FUN_14989efd4(void)

undefined8 FUN_14989efd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989f010 FUN_14989f010 body=93 status=ok
// SIG undefined FUN_14989f010(void)

void FUN_14989f010(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bed36b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14989f06e FUN_14989f06e body=123 status=ok
// SIG undefined FUN_14989f06e(void)

void FUN_14989f06e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bed36b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14989f0ea FUN_14989f0ea body=21 status=ok
// SIG undefined FUN_14989f0ea(void)

undefined8 FUN_14989f0ea(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14989f12c FUN_14989f12c body=75 status=ok
// SIG undefined FUN_14989f12c(void)

void FUN_14989f12c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1498a08e2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989f238 FUN_14989f238 body=156 status=ok
// SIG undefined FUN_14989f238(void)

void FUN_14989f238(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_1498a095a(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989f2d6 FUN_14989f2d6 body=485 status=ok
// SIG undefined FUN_14989f2d6(void)

void FUN_14989f2d6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[4] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1498a121a(local_48[4],local_48 + 2,plVar1,plVar2);
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989f4c2 FUN_14989f4c2 body=405 status=ok
// SIG undefined FUN_14989f4c2(void)

void FUN_14989f4c2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1498a11ee(&local_40,local_20,local_28,local_2c != 0);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989f65e FUN_14989f65e body=372 status=ok
// SIG undefined FUN_14989f65e(void)

void FUN_14989f65e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1498a1204(&local_40,local_20,local_28,local_2c != 0);
  FUN_1410e5bda(param_3,&local_40);
  FUN_1447a1747(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989f7de FUN_14989f7de body=156 status=ok
// SIG undefined FUN_14989f7de(void)

void FUN_14989f7de(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14467c654(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989f8b6 FUN_14989f8b6 body=115 status=ok
// SIG undefined FUN_14989f8b6(void)

void FUN_14989f8b6(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_1498a14f4(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989f944 FUN_14989f944 body=45 status=ok
// SIG undefined FUN_14989f944(void)

longlong FUN_14989f944(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989f972 FUN_14989f972 body=45 status=ok
// SIG undefined FUN_14989f972(void)

void FUN_14989f972(void)

{
  FUN_140033559("..\\Plugins\\Enterprise\\DatasmithContent\\Source\\DatasmithContent/Public/DatasmithCustomAction.h"
                ,0x43,L"Pure virtual not implemented (%s)",L"GetLabel");
  FUN_140e82300();
  return;
}



// FUNCTION 14989f9a0 FUN_14989f9a0 body=45 status=ok
// SIG undefined FUN_14989f9a0(void)

void FUN_14989f9a0(void)

{
  FUN_140033559("..\\Plugins\\Enterprise\\DatasmithContent\\Source\\DatasmithContent/Public/DatasmithCustomAction.h"
                ,0x44,L"Pure virtual not implemented (%s)",L"GetTooltip");
  FUN_140e82300();
  return;
}



// FUNCTION 14989fa22 FUN_14989fa22 body=59 status=ok
// SIG undefined FUN_14989fa22(void)

undefined8 FUN_14989fa22(longlong *param_1)

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



// FUNCTION 14989faf8 FUN_14989faf8 body=86 status=ok
// SIG undefined FUN_14989faf8(void)

undefined8 FUN_14989faf8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined1 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(puVar1 + 8);
      uVar3 = *(undefined4 *)(puVar1 + 0x14);
      uVar4 = *(undefined4 *)(puVar1 + 0x18);
      uVar5 = *(undefined4 *)(puVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 0x10);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14989fb76 FUN_14989fb76 body=59 status=ok
// SIG undefined FUN_14989fb76(void)

undefined8 FUN_14989fb76(longlong *param_1)

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



// FUNCTION 14989fbbc FUN_14989fbbc body=38 status=ok
// SIG undefined FUN_14989fbbc(void)

void FUN_14989fbbc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14989fc9e FUN_14989fc9e body=59 status=ok
// SIG undefined FUN_14989fc9e(void)

undefined8 FUN_14989fc9e(longlong *param_1)

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



// FUNCTION 14989fdac FUN_14989fdac body=59 status=ok
// SIG undefined FUN_14989fdac(void)

undefined8 FUN_14989fdac(longlong *param_1)

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



// FUNCTION 14989febe FUN_14989febe body=59 status=ok
// SIG undefined FUN_14989febe(void)

undefined8 FUN_14989febe(longlong *param_1)

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



// FUNCTION 14989ffee FUN_14989ffee body=59 status=ok
// SIG undefined FUN_14989ffee(void)

undefined8 FUN_14989ffee(longlong *param_1)

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



// FUNCTION 1498a00fc FUN_1498a00fc body=59 status=ok
// SIG undefined FUN_1498a00fc(void)

undefined8 FUN_1498a00fc(longlong *param_1)

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



// FUNCTION 1498a020a FUN_1498a020a body=59 status=ok
// SIG undefined FUN_1498a020a(void)

undefined8 FUN_1498a020a(longlong *param_1)

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



// FUNCTION 1498a031a FUN_1498a031a body=59 status=ok
// SIG undefined FUN_1498a031a(void)

undefined8 FUN_1498a031a(longlong *param_1)

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



// FUNCTION 1498a0432 FUN_1498a0432 body=59 status=ok
// SIG undefined FUN_1498a0432(void)

undefined8 FUN_1498a0432(longlong *param_1)

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



// FUNCTION 1498a058c FUN_1498a058c body=59 status=ok
// SIG undefined FUN_1498a058c(void)

undefined8 FUN_1498a058c(longlong *param_1)

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



// FUNCTION 1498a06f8 FUN_1498a06f8 body=59 status=ok
// SIG undefined FUN_1498a06f8(void)

undefined8 FUN_1498a06f8(longlong *param_1)

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



// FUNCTION 1498a07da FUN_1498a07da body=75 status=ok
// SIG undefined FUN_1498a07da(void)

void FUN_1498a07da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1498a0826(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a0826 FUN_1498a0826 body=118 status=ok
// SIG undefined FUN_1498a0826(void)

void FUN_1498a0826(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39238);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e39238);
  if (0 < iVar1) {
    FUN_140562eea(local_1a,param_2,0,&DAT_14c896044);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a08e2 FUN_1498a08e2 body=118 status=ok
// SIG undefined FUN_1498a08e2(void)

void FUN_1498a08e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39238);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e39238);
  if (0 < iVar1) {
    FUN_140562eea(local_1a,param_2,0,&DAT_14c896044);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a095a FUN_1498a095a body=221 status=ok
// SIG undefined FUN_1498a095a(void)

longlong FUN_1498a095a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    lVar1 = FUN_144a6c4d8();
    if (((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) ||
       (param_1 = *(longlong *)(param_1 + 0x1c8), param_1 != 0)) {
      uVar2 = FUN_1411bc9a6();
      plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        local_18 = FUN_1459fd9d6();
        if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(local_18);
        }
        lVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,&local_18);
        if (lVar1 != 0) {
          lVar4 = FUN_1459fd9d6();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_1498a0a18;
        }
      }
    }
  }
  lVar1 = 0;
LAB_1498a0a18:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1498a0a38 FUN_1498a0a38 body=901 status=ok
// SIG undefined FUN_1498a0a38(void)

undefined8 * FUN_1498a0a38(undefined8 *param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  wchar_t *_Str;
  bool bVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  wchar_t *local_80;
  int local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_70 = param_3;
  if ((param_2 == 0) || (lVar5 = FUN_1498a095a(param_2), lVar5 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
LAB_1498a0a70:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_4 == '\0') {
    if (*(int *)(lVar5 + 0x30) != *(int *)(lVar5 + 0x5c)) {
      uVar2 = (uint)((ulonglong)param_3 >> 0x10);
      uVar8 = (uint)param_3 & 0xffff;
      lVar6 = lVar5 + 0x60;
      if (*(longlong *)(lVar5 + 0x68) != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x68);
      }
      iVar9 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(lVar5 + 0x70) - 1U &
                               (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar8) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          lVar6 = *(longlong *)(lVar5 + 0x28) + (longlong)iVar9 * 0x20;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar9 * 0x20) == param_3) {
            if ((lVar6 + 8U & 0xfffffffffffffff7) != 0) {
              iVar9 = *(int *)(lVar6 + 0x10) + -1;
              if (*(int *)(lVar6 + 0x10) == 0) {
                iVar9 = 0;
              }
              FUN_1402980a2(param_1,*(undefined8 *)(lVar6 + 8),iVar9);
              goto LAB_1498a0a70;
            }
            break;
          }
          iVar9 = *(int *)(lVar6 + 0x18);
        } while (iVar9 != -1);
      }
    }
  }
  else {
    FUN_1400021e4(&local_70,&local_80);
    plVar1 = (longlong *)(lVar5 + 0x28);
    pvVar10 = (void *)(lVar5 + 0x38);
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = pvVar10;
    if (*(int *)(lVar5 + 0x50) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(lVar5 + 0x50);
    }
    uStack_88 = CONCAT44(uStack_4c,uStack_50);
    local_90 = local_58;
    uVar3 = local_90;
    local_a0 = (undefined4)local_68;
    uStack_9c = local_68._4_4_;
    uStack_98 = (undefined4)uStack_60;
    uStack_94 = uStack_60._4_4_;
    local_90._4_4_ = (int)(local_58 >> 0x20);
    local_a8 = plVar1;
    if ((local_90._4_4_ != iVar9) || (uStack_60 != pvVar10)) {
      iVar4 = local_90._4_4_;
      local_90 = uVar3;
      do {
        lVar5 = *local_a8;
        lVar6 = (longlong)iVar4 * 0x20;
        local_68 = *(undefined8 *)(lVar5 + lVar6);
        uStack_60 = (void *)0x0;
        uVar2 = *(uint *)(lVar5 + 0x10 + lVar6);
        _Src = *(void **)(lVar5 + 8 + lVar6);
        local_58 = CONCAT44(local_58._4_4_,uVar2);
        if ((longlong)(int)uVar2 == 0) {
          local_58 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&uStack_60,uVar2,0);
          memcpy(uStack_60,_Src,(longlong)(int)uVar2 * 2);
        }
        FUN_1400021e4(&local_68,local_b8);
        _Str = L"";
        if (local_78 != 0) {
          _Str = local_80;
        }
        if (_Str == (wchar_t *)0x0) {
          bVar11 = false;
        }
        else {
          sVar7 = wcslen(_Str);
          local_c0 = 0xffffffff;
          local_c8 = 0;
          iVar4 = FUN_1447ee042(local_b8,_Str,sVar7 & 0xffffffff,1);
          bVar11 = iVar4 != -1;
        }
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        if (bVar11) {
          iVar9 = (int)local_58 + -1;
          if ((int)local_58 == 0) {
            iVar9 = 0;
          }
          FUN_1402980a2(param_1,uStack_60,iVar9);
          uVar3 = local_90;
          if (uStack_60 != (void *)0x0) {
            FUN_1400020a8();
            uVar3 = local_90;
          }
          break;
        }
        if (uStack_60 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
        FUN_1449c0562(&local_a0);
        iVar4 = local_90._4_4_;
        uVar3 = local_90;
      } while (local_a8 != plVar1 ||
               ((void *)CONCAT44(uStack_94,uStack_98) != pvVar10 || local_90._4_4_ != iVar9));
    }
    local_90 = uVar3;
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a0dbe FUN_1498a0dbe body=1065 status=ok
// SIG undefined FUN_1498a0dbe(void)

longlong * FUN_1498a0dbe(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  size_t sVar8;
  uint uVar9;
  wchar_t *_Str;
  longlong lVar10;
  void *pvVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  void *local_c0;
  longlong local_b8 [2];
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  wchar_t *local_80;
  int local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_70 = param_3;
  if ((param_2 == 0) || (lVar6 = FUN_1498a095a(param_2), lVar6 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
LAB_1498a0df9:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_4 == '\0') {
    if (*(int *)(lVar6 + 0x30) != *(int *)(lVar6 + 0x5c)) {
      uVar3 = (uint)((ulonglong)param_3 >> 0x10);
      uVar9 = (uint)param_3 & 0xffff;
      lVar7 = lVar6 + 0x60;
      if (*(longlong *)(lVar6 + 0x68) != 0) {
        lVar7 = *(longlong *)(lVar6 + 0x68);
      }
      iVar12 = *(int *)(lVar7 + (ulonglong)
                                (*(int *)(lVar6 + 0x70) - 1U &
                                (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar9)
                                + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar12 != -1) {
        do {
          lVar7 = *(longlong *)(lVar6 + 0x28) + (longlong)iVar12 * 0x20;
          if (*(longlong *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar12 * 0x20) == param_3) {
            if ((lVar7 + 8U & 0xfffffffffffffff7) != 0) {
              *(undefined4 *)(param_1 + 1) = 1;
              FUN_1447a1bd6(param_1,0);
              puVar2 = (undefined8 *)*param_1;
              *puVar2 = 0;
              iVar12 = *(int *)(lVar7 + 0x10);
              pvVar11 = *(void **)(lVar7 + 8);
              *(int *)(puVar2 + 1) = iVar12;
              if ((longlong)iVar12 != 0) {
                FUN_1446dd670(puVar2,iVar12,0);
                memcpy((void *)*puVar2,pvVar11,(longlong)iVar12 * 2);
                goto LAB_1498a0df9;
              }
              *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
            }
            break;
          }
          iVar12 = *(int *)(lVar7 + 0x18);
        } while (iVar12 != -1);
      }
    }
  }
  else {
    FUN_1400021e4(&local_70,&local_80);
    plVar1 = (longlong *)(lVar6 + 0x28);
    pvVar11 = (void *)(lVar6 + 0x38);
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = pvVar11;
    if (*(int *)(lVar6 + 0x50) == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = *(int *)(lVar6 + 0x50);
    }
    uStack_88 = CONCAT44(uStack_4c,uStack_50);
    local_90 = local_58;
    uVar4 = local_90;
    local_a0 = (undefined4)local_68;
    uStack_9c = local_68._4_4_;
    uStack_98 = (undefined4)uStack_60;
    uStack_94 = uStack_60._4_4_;
    local_90._4_4_ = (int)(local_58 >> 0x20);
    local_a8 = plVar1;
    if ((local_90._4_4_ != iVar12) || (uStack_60 != pvVar11)) {
      iVar5 = local_90._4_4_;
      local_c0 = pvVar11;
      local_90 = uVar4;
      do {
        lVar6 = *local_a8;
        lVar7 = (longlong)iVar5 * 0x20;
        local_68 = *(undefined8 *)(lVar6 + lVar7);
        uStack_60 = (void *)0x0;
        uVar3 = *(uint *)(lVar6 + 0x10 + lVar7);
        _Src = *(void **)(lVar6 + 8 + lVar7);
        local_58 = CONCAT44(local_58._4_4_,uVar3);
        if ((longlong)(int)uVar3 == 0) {
          local_58 = (ulonglong)uVar3;
        }
        else {
          FUN_1446dd670(&uStack_60,uVar3,0);
          memcpy(uStack_60,_Src,(longlong)(int)uVar3 * 2);
        }
        FUN_1400021e4(&local_68,local_b8);
        _Str = L"";
        if (local_78 != 0) {
          _Str = local_80;
        }
        if (_Str == (wchar_t *)0x0) {
          bVar13 = false;
        }
        else {
          sVar8 = wcslen(_Str);
          local_d0 = 0xffffffff;
          local_d8 = 0;
          iVar5 = FUN_1447ee042(local_b8,_Str,sVar8 & 0xffffffff,1);
          bVar13 = iVar5 != -1;
        }
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        if (bVar13) {
          iVar5 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
            FUN_1447a1bd6(param_1,iVar5);
          }
          pvVar11 = uStack_60;
          lVar6 = *param_1;
          lVar7 = (longlong)iVar5 * 0x10;
          puVar2 = (undefined8 *)(lVar6 + lVar7);
          *(undefined8 *)(lVar6 + lVar7) = 0;
          lVar10 = (longlong)(int)local_58;
          *(int *)(lVar6 + 8 + lVar7) = (int)local_58;
          if (lVar10 == 0) {
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
            pvVar11 = local_c0;
          }
          else {
            FUN_1446dd670(puVar2,local_58 & 0xffffffff,0);
            memcpy((void *)*puVar2,pvVar11,lVar10 * 2);
            pvVar11 = local_c0;
          }
        }
        if (uStack_60 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
        FUN_1449c0562(&local_a0);
        iVar5 = local_90._4_4_;
        uVar4 = local_90;
      } while (local_a8 != plVar1 ||
               ((void *)CONCAT44(uStack_94,uStack_98) != pvVar11 || local_90._4_4_ != iVar12));
    }
    local_90 = uVar4;
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a11e8 thunk_FUN_1498a095a body=5 status=ok
// SIG undefined thunk_FUN_1498a095a(void)

longlong thunk_FUN_1498a095a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    lVar1 = FUN_144a6c4d8();
    if (((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) ||
       (param_1 = *(longlong *)(param_1 + 0x1c8), param_1 != 0)) {
      uVar2 = FUN_1411bc9a6();
      plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        lStack_18 = FUN_1459fd9d6();
        if ((lStack_18 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(lStack_18);
        }
        lVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,&lStack_18);
        if (lVar1 != 0) {
          lVar4 = FUN_1459fd9d6();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_1498a0a18;
        }
      }
    }
  }
  lVar1 = 0;
LAB_1498a0a18:
  if ((uStack_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1498a11ee FUN_1498a11ee body=22 status=ok
// SIG undefined FUN_1498a11ee(void)

undefined8 FUN_1498a11ee(undefined8 param_1)

{
  FUN_1498a0a38();
  return param_1;
}



// FUNCTION 1498a1204 FUN_1498a1204 body=22 status=ok
// SIG undefined FUN_1498a1204(void)

undefined8 FUN_1498a1204(undefined8 param_1)

{
  FUN_1498a0dbe();
  return param_1;
}



// FUNCTION 1498a121a FUN_1498a121a body=676 status=ok
// SIG undefined FUN_1498a121a(void)

void FUN_1498a121a(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  size_t sVar7;
  int iVar8;
  undefined8 *puVar9;
  wchar_t *_Str;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a0;
  undefined8 *local_98;
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
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1402191ca(param_3,0);
  }
  iVar8 = *(int *)((longlong)param_4 + 0xc);
  FUN_1447a1747(*param_4,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  if ((iVar8 < 0) && (*(int *)((longlong)param_4 + 0xc) != 0)) {
    FUN_1408be2c4(param_4,0);
  }
  if ((param_1 != 0) && (lVar6 = FUN_1498a095a(param_1), lVar6 != 0)) {
    plVar1 = (longlong *)(lVar6 + 0x28);
    local_a0 = lVar6 + 0x38;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = local_a0;
    if (*(int *)(lVar6 + 0x50) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar8 = *(int *)(lVar6 + 0x50);
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar3 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar4 = local_78._4_4_;
    local_98 = param_2;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar8) || (local_78 = local_58, uStack_60 != local_a0)) {
      do {
        local_78 = uVar3;
        if (*(int *)(local_98 + 1) == 0) {
          _Str = L"";
        }
        else {
          _Str = (wchar_t *)*local_98;
        }
        if (_Str != (wchar_t *)0x0) {
          lVar6 = *local_90;
          sVar7 = wcslen(_Str);
          local_b0 = 0xffffffff;
          local_b8 = 0;
          iVar5 = FUN_1447ee042((longlong)iVar4 * 0x20 + 8 + lVar6,_Str,sVar7 & 0xffffffff,1);
          if (iVar5 != -1) {
            iVar5 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
              FUN_1446f84a2(param_3,iVar5);
            }
            puVar9 = (undefined8 *)(lVar6 + (longlong)iVar4 * 0x20);
            *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = *puVar9;
            iVar4 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
              FUN_1447a1bd6(param_4,iVar4);
            }
            lVar6 = *param_4;
            lVar10 = (longlong)iVar4 * 0x10;
            puVar2 = (undefined8 *)(lVar6 + lVar10);
            *(undefined8 *)(lVar6 + lVar10) = 0;
            iVar4 = *(int *)(puVar9 + 2);
            _Src = (void *)puVar9[1];
            *(int *)(lVar6 + 8 + lVar10) = iVar4;
            if ((longlong)iVar4 == 0) {
              *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar2,iVar4,0);
              memcpy((void *)*puVar2,_Src,(longlong)iVar4 * 2);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar4 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != local_a0 || local_78._4_4_ != iVar8));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498a14f4 FUN_1498a14f4 body=119 status=ok
// SIG undefined FUN_1498a14f4(void)

void FUN_1498a14f4(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  lVar2 = FUN_144aff0e0(&local_28);
  bVar1 = *(byte *)(lVar2 + 0x2a);
  lVar2 = FUN_144aff0e0(&local_28);
  *(byte *)(lVar2 + 0x2a) = *(byte *)(lVar2 + 0x2a) | 8;
  switchD_143c3d4dc::caseD_20(param_1,local_28);
  lVar2 = FUN_144aff0e0(&local_28);
  *(byte *)(lVar2 + 0x2a) = *(byte *)(lVar2 + 0x2a) & 0xf7 | bVar1 & 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a1572 FUN_1498a1572 body=77 status=ok
// SIG undefined FUN_1498a1572(void)

void FUN_1498a1572(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a15cc FUN_1498a15cc body=97 status=ok
// SIG undefined FUN_1498a15cc(void)

longlong FUN_1498a15cc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a799b0();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return *(longlong *)(param_2 + 0xa8);
    }
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a1630 FUN_1498a1630 body=147 status=ok
// SIG undefined FUN_1498a1630(void)

undefined8 FUN_1498a1630(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_145bb238c();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       (*(int *)(param_2 + 0x38) - *(int *)(param_2 + 100) ==
        *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100))) {
      cVar1 = FUN_1498a2b4a(param_2 + 0x30,param_1 + 0x30);
      if ((cVar1 != '\0') &&
         (*(int *)(param_2 + 0x88) - *(int *)(param_2 + 0xb4) ==
          *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4))) {
        uVar3 = FUN_1498a2b4a(param_2 + 0x80,param_1 + 0x80);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1498a16c6 FUN_1498a16c6 body=108 status=ok
// SIG undefined FUN_1498a16c6(void)

undefined8 FUN_1498a16c6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a799b0();
    if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) ||
       (param_2 = *(longlong *)(param_2 + 0xa8), param_2 != 0)) {
      lVar1 = FUN_145a9830c();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return *(undefined8 *)(param_2 + 0x1c8);
      }
    }
  }
  return 0;
}



// FUNCTION 1498a1732 FUN_1498a1732 body=522 status=ok
// SIG undefined FUN_1498a1732(void)

bool FUN_1498a1732(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145bb2476();
    if (((((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
           (*(char *)(param_1 + 0x30) == *(char *)(param_2 + 0x30))) &&
          ((*(char *)(param_1 + 0x31) == *(char *)(param_2 + 0x31) &&
           (ABS(*(double *)(param_1 + 0x38) - *(double *)(param_2 + 0x38)) <= 9.999999747378752e-05)
           ))) && ((ABS(*(double *)(param_1 + 0x40) - *(double *)(param_2 + 0x40)) <=
                    9.999999747378752e-05 &&
                   ((ABS(*(float *)(param_1 + 0x48) - *(float *)(param_2 + 0x48)) < 0.0001 &&
                    (ABS(*(float *)(param_1 + 0x4c) - *(float *)(param_2 + 0x4c)) < 0.0001)))))) &&
        (ABS(*(float *)(param_1 + 0x50) - *(float *)(param_2 + 0x50)) < 0.0001)) &&
       (((((ABS(*(float *)(param_1 + 0x54) - *(float *)(param_2 + 0x54)) < 0.0001 &&
           (ABS(*(float *)(param_1 + 0x58) - *(float *)(param_2 + 0x58)) <= 1e-08)) &&
          (*(char *)(param_1 + 0x5c) == *(char *)(param_2 + 0x5c))) &&
         (((ABS(*(float *)(param_1 + 0x60) - *(float *)(param_2 + 0x60)) <= 1e-08 &&
           (cVar1 = FUN_144a7afa6(param_1 + 0x70,param_2 + 0x70), cVar1 != '\0')) &&
          ((*(char *)(param_1 + 0x90) == *(char *)(param_2 + 0x90) &&
           ((ABS(*(float *)(param_1 + 0x94) - *(float *)(param_2 + 0x94)) <= 1e-08 &&
            (cVar1 = FUN_146232d50(param_1 + 0x98,param_2 + 0x98,0x3f1a36e2e0000000), cVar1 != '\0')
            ))))))) &&
        ((ABS(*(float *)(param_1 + 0xb0) - *(float *)(param_2 + 0xb0)) <= 1e-08 &&
         (ABS(*(float *)(param_1 + 0xb4) - *(float *)(param_2 + 0xb4)) <= 1e-08)))))) {
      return ABS(*(float *)(param_1 + 0xb8) - *(float *)(param_2 + 0xb8)) <= 1e-08;
    }
  }
  return false;
}



// FUNCTION 1498a193c FUN_1498a193c body=33 status=ok
// SIG undefined FUN_1498a193c(void)

undefined8 FUN_1498a193c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1498a4122(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1c8);
  }
  return uVar2;
}



// FUNCTION 1498a1960 FUN_1498a1960 body=93 status=ok
// SIG undefined FUN_1498a1960(void)

undefined8 FUN_1498a1960(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb2e84();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (((*(byte *)(param_2 + 0x30) ^ *(byte *)(param_1 + 0x30)) & 3) == 0)) {
      uVar2 = FUN_144a7afa6(param_1 + 0x40,param_2 + 0x40);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1498a19be FUN_1498a19be body=311 status=ok
// SIG undefined FUN_1498a19be(void)

bool FUN_1498a19be(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2 ^ *param_1;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 4) != 0) {
      return false;
    }
    if (1e-08 < ABS((float)param_1[2] - (float)param_2[2])) {
      return false;
    }
    if ((uVar1 & 2) != 0) {
      return false;
    }
    if (1e-08 < ABS((float)param_1[3] - (float)param_2[3])) {
      return false;
    }
    if (((ABS(*(double *)(param_1 + 4) - *(double *)(param_2 + 4)) <= 9.999999747378752e-05) &&
        (ABS(*(double *)(param_1 + 6) - *(double *)(param_2 + 6)) <= 9.999999747378752e-05)) &&
       (ABS(*(double *)(param_1 + 8) - *(double *)(param_2 + 8)) <= 9.999999747378752e-05)) {
      if ((uVar1 & 8) != 0) {
        return false;
      }
      if (9.999999747378752e-05 < ABS(*(double *)(param_1 + 10) - *(double *)(param_2 + 10))) {
        return false;
      }
      if ((uVar1 & 0x10) != 0) {
        return false;
      }
      if ((char)param_1[0xc] != (char)param_2[0xc]) {
        return false;
      }
      if ((uVar1 & 0x20) != 0) {
        return false;
      }
      if (1e-08 < ABS((float)param_1[0xd] - (float)param_2[0xd])) {
        return false;
      }
      if ((ABS((float)param_1[0xe] - (float)param_2[0xe]) <= 1e-08) &&
         ((((byte)param_2[1] ^ (byte)param_1[1]) & 1) == 0)) {
        return ABS((float)param_1[0xf] - (float)param_2[0xf]) <= 1e-08;
      }
    }
  }
  return false;
}



// FUNCTION 1498a1af6 FUN_1498a1af6 body=56 status=ok
// SIG undefined FUN_1498a1af6(void)

longlong FUN_1498a1af6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14130829c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a1b30 FUN_1498a1b30 body=239 status=ok
// SIG undefined FUN_1498a1b30(void)

undefined8 FUN_1498a1b30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb2f6e();
    if ((((((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
          (ABS(*(float *)(param_1 + 0x44) - *(float *)(param_2 + 0x44)) <= 1e-08)) &&
         ((ABS(*(float *)(param_1 + 0x48) - *(float *)(param_2 + 0x48)) <= 1e-08 &&
          (ABS(*(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x30)) <= 1e-08)))) &&
        ((ABS(*(float *)(param_1 + 0x34) - *(float *)(param_2 + 0x34)) <= 1e-08 &&
         ((ABS(*(float *)(param_1 + 0x38) - *(float *)(param_2 + 0x38)) <= 1e-08 &&
          (*(char *)(param_1 + 0x3c) == *(char *)(param_2 + 0x3c))))))) &&
       (ABS(*(float *)(param_1 + 0x40) - *(float *)(param_2 + 0x40)) <= 1e-08)) {
      uVar2 = FUN_1498a19be(param_1 + 0x50,param_2 + 0x50);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1498a1c20 FUN_1498a1c20 body=56 status=ok
// SIG undefined FUN_1498a1c20(void)

longlong FUN_1498a1c20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1405fc15c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a1c5a FUN_1498a1c5a body=145 status=ok
// SIG undefined FUN_1498a1c5a(void)

bool FUN_1498a1c5a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb3058();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30))) {
      if ((*(double *)(param_1 + 0x38) == *(double *)(param_2 + 0x38)) &&
         (!NAN(*(double *)(param_1 + 0x38)) && !NAN(*(double *)(param_2 + 0x38)))) {
        if ((*(double *)(param_1 + 0x40) == *(double *)(param_2 + 0x40)) &&
           (!NAN(*(double *)(param_1 + 0x40)) && !NAN(*(double *)(param_2 + 0x40)))) {
          if ((*(double *)(param_1 + 0x48) == *(double *)(param_2 + 0x48)) &&
             (!NAN(*(double *)(param_1 + 0x48)) && !NAN(*(double *)(param_2 + 0x48)))) {
            lVar1 = *(longlong *)(param_2 + 0x50);
            if ((lVar1 != 0 & DAT_14c950c29) == 1) {
              FUN_14689c22e(lVar1);
            }
            return *(longlong *)(param_1 + 0x50) == lVar1;
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 1498a1cec FUN_1498a1cec body=33 status=ok
// SIG undefined FUN_1498a1cec(void)

undefined8 FUN_1498a1cec(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1498a4188(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1c8);
  }
  return uVar2;
}



// FUNCTION 1498a1d10 FUN_1498a1d10 body=105 status=ok
// SIG undefined FUN_1498a1d10(void)

undefined4 FUN_1498a1d10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb3316();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = *(longlong *)(param_2 + 0x30);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar1);
      }
      if (*(longlong *)(param_1 + 0x30) == lVar1) {
        return CONCAT31((int3)((uint)*(int *)(param_1 + 0x38) >> 8),
                        *(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38));
      }
    }
  }
  return 0;
}



// FUNCTION 1498a1d7a FUN_1498a1d7a body=56 status=ok
// SIG undefined FUN_1498a1d7a(void)

longlong FUN_1498a1d7a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140c8105a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a1db4 FUN_1498a1db4 body=350 status=ok
// SIG undefined FUN_1498a1db4(void)

bool FUN_1498a1db4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb3400();
    if ((((((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
          (((*(byte *)(param_2 + 0x30) ^ *(byte *)(param_1 + 0x30)) & 1) == 0)) &&
         ((ABS(*(float *)(param_1 + 0x38) - *(float *)(param_2 + 0x38)) <= 1e-08 &&
          (((*(uint *)(param_2 + 0x34) ^ *(uint *)(param_1 + 0x34)) & 1) == 0)))) &&
        ((ABS(*(float *)(param_1 + 0x44) - *(float *)(param_2 + 0x44)) < 0.0001 &&
         ((ABS(*(float *)(param_1 + 0x48) - *(float *)(param_2 + 0x48)) < 0.0001 &&
          (ABS(*(float *)(param_1 + 0x4c) - *(float *)(param_2 + 0x4c)) < 0.0001)))))) &&
       (ABS(*(float *)(param_1 + 0x50) - *(float *)(param_2 + 0x50)) < 0.0001)) {
      lVar1 = *(longlong *)(param_2 + 0x58);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar1);
      }
      if ((*(longlong *)(param_1 + 0x58) == lVar1) &&
         (uVar2 = *(uint *)(param_2 + 0x34) ^ *(uint *)(param_1 + 0x34), (uVar2 & 2) == 0)) {
        if ((uVar2 & 4) != 0) {
          return false;
        }
        if (1e-08 < ABS(*(float *)(param_1 + 0x3c) - *(float *)(param_2 + 0x3c))) {
          return false;
        }
        return ABS(*(float *)(param_1 + 0x40) - *(float *)(param_2 + 0x40)) <= 1e-08;
      }
    }
  }
  return false;
}



// FUNCTION 1498a1f12 FUN_1498a1f12 body=201 status=ok
// SIG undefined FUN_1498a1f12(void)

void FUN_1498a1f12(undefined8 param_1)

{
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_148c85cc2(&local_98);
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_148c85cc2(&local_e8,param_1);
  FUN_1498a1fdc(&local_e8,&local_98);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a1fdc FUN_1498a1fdc body=524 status=ok
// SIG undefined FUN_1498a1fdc(void)

ulonglong FUN_1498a1fdc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar7 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar3 == iVar7);
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
  if ((iStack_3c < (int)local_48[3]) && (iVar3 == iVar7)) {
    do {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar1 = *(longlong *)(*local_78 + (longlong)iStack_5c * 0x14);
        uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
        uVar6 = (uint)lVar1 & 0xffff;
        plVar5 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar5 = param_2 + 7;
        }
        iVar3 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
        if (iVar3 != -1) {
          do {
            plVar5 = (longlong *)(*param_2 + (longlong)iVar3 * 0x14);
            if (*plVar5 == lVar1) {
              if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
                uVar4 = CONCAT71((int7)(uVar4 >> 8),
                                 *(char *)(*local_78 + 8 + (longlong)iStack_5c * 0x14) ==
                                 (char)plVar5[1]);
                goto LAB_1498a20ab;
              }
              break;
            }
            iVar3 = *(int *)((longlong)plVar5 + 0xc);
          } while (iVar3 != -1);
        }
      }
      uVar4 = 0;
LAB_1498a20ab:
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (((char)uVar4 != '\0') && (iStack_5c < (int)local_68[3]));
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1);
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1498a21ea FUN_1498a21ea body=56 status=ok
// SIG undefined FUN_1498a21ea(void)

longlong FUN_1498a21ea(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14129edf0();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a2228 FUN_1498a2228 body=587 status=ok
// SIG undefined FUN_1498a2228(void)

undefined4 FUN_1498a2228(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (param_2 != 0) {
    lVar3 = FUN_145bb34ea();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      lVar3 = FUN_1402d20ea(param_2 + 0x30);
      lVar4 = FUN_1402d20ea(param_1 + 0x30);
      uVar2 = 0;
      if (lVar3 == lVar4) {
        local_88 = 0;
        local_80 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_7c = 0xffffffff00000080;
        local_74 = 0;
        local_68 = 0;
        local_60 = 0;
        FUN_140d188f2(&local_a8,param_2 + 0x58);
        local_d8 = 0;
        local_d0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_cc = 0xffffffff00000080;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_140d188f2(&local_f8,param_1 + 0x58);
        cVar1 = FUN_1498a2474(&local_f8,&local_a8);
        if (cVar1 != '\0') {
          local_128 = 0;
          local_120 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_11c = 0xffffffff00000080;
          local_114 = 0;
          local_108 = 0;
          local_100 = 0;
          FUN_146965a88(&local_148,param_2 + 0xa8);
          local_178 = 0;
          local_170 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_16c = 0xffffffff00000080;
          local_164 = 0;
          local_158 = 0;
          local_150 = 0;
          FUN_146965a88(&local_198,param_1 + 0xa8);
          cVar1 = FUN_1498a2689(&local_198,&local_148);
          uVar2 = 0;
          if (cVar1 != '\0') {
            local_1c8 = 0;
            local_1c0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1bc = 0xffffffff00000080;
            local_1b4 = 0;
            local_1a8 = 0;
            local_1a0 = 0;
            FUN_148746146(&local_1e8,param_2 + 0xf8);
            local_218 = 0;
            local_210 = 0;
            local_238 = 0;
            uStack_230 = 0;
            local_20c = 0xffffffff00000080;
            local_204 = 0;
            local_1f8 = 0;
            local_1f0 = 0;
            FUN_148746146(&local_238,param_1 + 0xf8);
            cVar1 = FUN_1498a28eb(&local_238,&local_1e8);
            uVar2 = 0;
            if (cVar1 != '\0') {
              uVar2 = FUN_1498a1f12(param_1 + 0x148,param_2 + 0x148);
            }
          }
        }
      }
      goto LAB_1498a225b;
    }
  }
  uVar2 = 0;
LAB_1498a225b:
  if ((local_50 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a2474 FUN_1498a2474 body=532 status=ok
// SIG undefined FUN_1498a2474(void)

ulonglong FUN_1498a2474(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar7 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar3 == iVar7);
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
  if ((iStack_3c < (int)local_48[3]) && (iVar3 == iVar7)) {
    do {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar1 = *(longlong *)(*local_78 + (longlong)iStack_5c * 0x14);
        uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
        uVar6 = (uint)lVar1 & 0xffff;
        plVar5 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar5 = param_2 + 7;
        }
        iVar3 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
        if (iVar3 != -1) {
          do {
            plVar5 = (longlong *)(*param_2 + (longlong)iVar3 * 0x14);
            if (*plVar5 == lVar1) {
              if ((float *)(plVar5 + 1) != (float *)0x0 && plVar5 != (longlong *)0x0) {
                uVar4 = (ulonglong)
                        (-(uint)(*(float *)(plVar5 + 1) ==
                                *(float *)(*local_78 + 8 + (longlong)iStack_5c * 0x14)) & 1);
                goto LAB_1498a2543;
              }
              break;
            }
            iVar3 = *(int *)((longlong)plVar5 + 0xc);
          } while (iVar3 != -1);
        }
      }
      uVar4 = 0;
LAB_1498a2543:
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while ((iStack_5c < (int)local_68[3]) && ((char)uVar4 != '\0'));
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1);
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1498a2689 FUN_1498a2689 body=609 status=ok
// SIG undefined FUN_1498a2689(void)

ulonglong FUN_1498a2689(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
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
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar12 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar8 == iVar12);
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
  if ((iVar8 == iVar12) && (iStack_3c < (int)local_48[3])) {
    do {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar5 = *local_78;
        lVar6 = (longlong)iStack_5c * 0x20;
        lVar3 = *(longlong *)(lVar5 + lVar6);
        uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar11 = (uint)lVar3 & 0xffff;
        plVar10 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar10 = param_2 + 7;
        }
        iVar8 = *(int *)((longlong)plVar10 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar11) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            lVar1 = *param_2 + (longlong)iVar8 * 0x20;
            if (*(longlong *)(*param_2 + (longlong)iVar8 * 0x20) == lVar3) {
              pfVar7 = (float *)(lVar1 + 8);
              if (((pfVar7 != (float *)0x0 && lVar1 != 0) &&
                  (fVar2 = *(float *)(lVar5 + 8 + lVar6), fVar2 == *pfVar7)) &&
                 (!NAN(fVar2) && !NAN(*pfVar7))) {
                lVar5 = lVar5 + lVar6;
                if (((*(float *)(lVar5 + 0xc) == *(float *)(lVar1 + 0xc)) &&
                    (!NAN(*(float *)(lVar5 + 0xc)) && !NAN(*(float *)(lVar1 + 0xc)))) &&
                   ((*(float *)(lVar5 + 0x10) == *(float *)(lVar1 + 0x10) &&
                    (!NAN(*(float *)(lVar5 + 0x10)) && !NAN(*(float *)(lVar1 + 0x10)))))) {
                  uVar9 = (ulonglong)
                          (-(uint)(*(float *)(lVar1 + 0x14) == *(float *)(lVar5 + 0x14)) & 1);
                  goto LAB_1498a2758;
                }
              }
              break;
            }
            iVar8 = *(int *)(lVar1 + 0x18);
          } while (iVar8 != -1);
        }
      }
      uVar9 = 0;
LAB_1498a2758:
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (((char)uVar9 != '\0') && (iStack_5c < (int)local_68[3]));
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1406feffc(param_1);
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1406feffc(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1498a28eb FUN_1498a28eb body=521 status=ok
// SIG undefined FUN_1498a28eb(void)

ulonglong FUN_1498a28eb(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
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
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar8 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar5 == iVar8);
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
  if ((iVar5 == iVar8) && (iStack_3c < (int)local_48[3])) {
    do {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar2 = *(longlong *)(*local_78 + (longlong)iStack_5c * 0x38);
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar7 = (uint)lVar2 & 0xffff;
        plVar4 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar4 = param_2 + 7;
        }
        iVar5 = *(int *)((longlong)plVar4 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar5 != -1) {
          do {
            lVar1 = *param_2 + (longlong)iVar5 * 0x38;
            if (*(longlong *)(*param_2 + (longlong)iVar5 * 0x38) == lVar2) {
              if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
                uVar3 = FUN_144a7afa6((longlong)iStack_5c * 0x38 + *local_78 + 0x10,lVar1 + 0x10);
                uVar6 = (ulonglong)uVar3;
                goto LAB_1498a29ba;
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x30);
          } while (iVar5 != -1);
        }
      }
      uVar6 = 0;
LAB_1498a29ba:
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (((char)uVar6 != '\0') && (iStack_5c < (int)local_68[3]));
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b31d0(param_1);
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b31d0(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1498a2af6 FUN_1498a2af6 body=83 status=ok
// SIG undefined FUN_1498a2af6(void)

undefined8 FUN_1498a2af6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb34ea();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = FUN_144a7afa6(param_1 + 0x38,param_2 + 0x38);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1498a2b4a FUN_1498a2b4a body=403 status=ok
// SIG undefined FUN_1498a2b4a(void)

ulonglong FUN_1498a2b4a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
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
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) <
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
LAB_1498a2b75:
    uVar7 = 0;
    uVar3 = local_58;
  }
  else {
    local_40 = param_2 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    local_70 = param_2;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_1498a2b75;
        lVar1 = *(longlong *)(*local_70 + (longlong)iVar4 * 0x10);
        uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
        uVar6 = (uint)lVar1 & 0xffff;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = param_1 + 7;
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
        if (iVar4 == -1) goto LAB_1498a2b75;
        while (*(longlong *)(*param_1 + (longlong)iVar4 * 0x10) != lVar1) {
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_1 + 8);
          if (iVar4 == -1) goto LAB_1498a2b75;
        }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1498a2ce0 FUN_1498a2ce0 body=56 status=ok
// SIG undefined FUN_1498a2ce0(void)

longlong FUN_1498a2ce0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140e3ec56();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a2d18 FUN_1498a2d18 body=146 status=ok
// SIG undefined FUN_1498a2d18(void)

undefined8 FUN_1498a2d18(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb35d4();
    if ((((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
        (*(char *)(param_1 + 0x30) == *(char *)(param_2 + 0x30))) &&
       ((ABS(*(float *)(param_1 + 0x34) - *(float *)(param_2 + 0x34)) <= 1e-08 &&
        (ABS(*(float *)(param_1 + 0x38) - *(float *)(param_2 + 0x38)) <= 1e-08)))) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                      ABS(*(float *)(param_1 + 0x3c) - *(float *)(param_2 + 0x3c)) <= 1e-08);
    }
  }
  return 0;
}



// FUNCTION 1498a2daa FUN_1498a2daa body=33 status=ok
// SIG undefined FUN_1498a2daa(void)

undefined8 FUN_1498a2daa(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1498a41ee(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1c8);
  }
  return uVar2;
}



// FUNCTION 1498a2dce FUN_1498a2dce body=93 status=ok
// SIG undefined FUN_1498a2dce(void)

undefined8 FUN_1498a2dce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb36be();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (((*(uint *)(param_2 + 0x70) ^ *(uint *)(param_1 + 0x70)) & 3) == 0)) {
      uVar2 = FUN_1498a19be(param_1 + 0x30,param_2 + 0x30);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1498a2e2c FUN_1498a2e2c body=56 status=ok
// SIG undefined FUN_1498a2e2c(void)

longlong FUN_1498a2e2c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a799b0();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a2e66 FUN_1498a2e66 body=533 status=ok
// SIG undefined FUN_1498a2e66(void)

undefined8 FUN_1498a2e66(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  
  if (param_2 != 0) {
    lVar12 = FUN_145bb3892();
    if (*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30);
      if (*(longlong *)(lVar1 + (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30) {
        auVar6._8_8_ = -(ulonglong)
                        (0.014999999664723873 <
                        ABS(*(double *)(param_1 + 0x58) - *(double *)(param_2 + 0x58)));
        auVar6._0_8_ = -(ulonglong)
                        (0.014999999664723873 <
                        ABS(*(double *)(param_1 + 0x50) - *(double *)(param_2 + 0x50)));
        iVar11 = movmskpd((int)(lVar12 + 0x30),auVar6);
        auVar4._8_8_ = -(ulonglong)
                        (0.014999999664723873 <
                        ABS(*(double *)(param_1 + 0x68) - *(double *)(param_2 + 0x68)));
        auVar4._0_8_ = -(ulonglong)
                        (0.014999999664723873 <
                        ABS(*(double *)(param_1 + 0x60) - *(double *)(param_2 + 0x60)));
        uVar14 = movmskpd((int)lVar1,auVar4);
        if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
          lVar12 = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0x38) - *(double *)(param_2 + 0x38)));
          auVar9._8_4_ = (int)lVar12;
          auVar9._0_8_ = -(ulonglong)
                          (9.999999747378752e-05 <
                          ABS(*(double *)(param_1 + 0x30) - *(double *)(param_2 + 0x30)));
          auVar9._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
          uVar14 = movmskpd(iVar11,auVar9);
          lVar12 = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0x48) - *(double *)(param_2 + 0x48)));
          auVar8._8_4_ = (int)lVar12;
          auVar8._0_8_ = -(ulonglong)
                          (9.999999747378752e-05 <
                          ABS(*(double *)(param_1 + 0x40) - *(double *)(param_2 + 0x40)));
          auVar8._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
          iVar11 = movmskpd(0,auVar8);
          uVar15 = iVar11 << 2 | uVar14;
          if (uVar15 != 0) {
            auVar7._8_8_ = -(ulonglong)
                            (9.999999747378752e-05 <
                            ABS(*(double *)(param_1 + 0x38) + *(double *)(param_2 + 0x38)));
            auVar7._0_8_ = -(ulonglong)
                            (9.999999747378752e-05 <
                            ABS(*(double *)(param_1 + 0x30) + *(double *)(param_2 + 0x30)));
            uVar14 = movmskpd(uVar14,auVar7);
            auVar5._8_8_ = -(ulonglong)
                            (9.999999747378752e-05 <
                            ABS(*(double *)(param_1 + 0x48) + *(double *)(param_2 + 0x48)));
            auVar5._0_8_ = -(ulonglong)
                            (9.999999747378752e-05 <
                            ABS(*(double *)(param_1 + 0x40) + *(double *)(param_2 + 0x40)));
            uVar15 = movmskpd(uVar15,auVar5);
            if ((uVar15 & 0x3fffffff) != 0 || uVar14 != 0) {
              return 0;
            }
          }
          auVar2._8_8_ = -(ulonglong)
                          (9.999999747378752e-05 <
                          ABS(*(double *)(param_1 + 0x78) - *(double *)(param_2 + 0x78)));
          auVar2._0_8_ = -(ulonglong)
                          (9.999999747378752e-05 <
                          ABS(*(double *)(param_1 + 0x70) - *(double *)(param_2 + 0x70)));
          iVar11 = movmskpd(uVar14,auVar2);
          auVar3._8_8_ = -(ulonglong)
                          (9.999999747378752e-05 <
                          ABS(*(double *)(param_1 + 0x88) - *(double *)(param_2 + 0x88)));
          auVar3._0_8_ = -(ulonglong)
                          (9.999999747378752e-05 <
                          ABS(*(double *)(param_1 + 0x80) - *(double *)(param_2 + 0x80)));
          uVar14 = movmskpd(0,auVar3);
          if (((((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) &&
               (*(char *)(param_1 + 0x90) == *(char *)(param_2 + 0x90))) &&
              (*(char *)(param_1 + 0xc0) == *(char *)(param_2 + 0xc0))) &&
             (((*(char *)(param_1 + 0xc1) == *(char *)(param_2 + 0xc1) &&
               (cVar10 = FUN_144a7afa6(param_1 + 0xa0,param_2 + 0xa0), cVar10 != '\0')) &&
              (*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xfc) ==
               *(int *)(param_2 + 0xd0) - *(int *)(param_2 + 0xfc))))) {
            uVar13 = FUN_1498a2b4a(param_1 + 200,param_2 + 200);
            return uVar13;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1498a307e FUN_1498a307e body=56 status=ok
// SIG undefined FUN_1498a307e(void)

longlong FUN_1498a307e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_141221a30();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a30b6 FUN_1498a30b6 body=111 status=ok
// SIG undefined FUN_1498a30b6(void)

bool FUN_1498a30b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb397c();
    if ((((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
        (*(char *)(param_1 + 0x30) == *(char *)(param_2 + 0x30))) &&
       (*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34))) {
      lVar1 = *(longlong *)(param_2 + 0x38);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar1);
      }
      return *(longlong *)(param_1 + 0x38) == lVar1;
    }
  }
  return false;
}



// FUNCTION 1498a3128 FUN_1498a3128 body=56 status=ok
// SIG undefined FUN_1498a3128(void)

longlong FUN_1498a3128(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140c81140();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a3160 FUN_1498a3160 body=113 status=ok
// SIG undefined FUN_1498a3160(void)

undefined8 FUN_1498a3160(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb3a66();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (ABS(*(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x30)) <= 1e-08)) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                      ABS(*(float *)(param_1 + 0x34) - *(float *)(param_2 + 0x34)) <= 1e-08);
    }
  }
  return 0;
}



// FUNCTION 1498a31d2 FUN_1498a31d2 body=56 status=ok
// SIG undefined FUN_1498a31d2(void)

longlong FUN_1498a31d2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a7a726();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a320c FUN_1498a320c body=124 status=ok
// SIG undefined FUN_1498a320c(void)

undefined8 FUN_1498a320c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb3b50();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = *(longlong *)(param_2 + 0x30);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar1);
      }
      if ((*(longlong *)(param_1 + 0x30) == lVar1) &&
         (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))) {
        uVar2 = FUN_1474731f1(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1498a3288 FUN_1498a3288 body=135 status=ok
// SIG undefined FUN_1498a3288(void)

void FUN_1498a3288(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  
  bVar2 = *param_2 & 1;
  bVar1 = *param_1;
  *param_1 = bVar1 & 0xfe | bVar2;
  bVar3 = *param_2 & 2;
  *param_1 = bVar1 & 0xfc | bVar2 | bVar3;
  bVar4 = *param_2 & 4;
  *param_1 = bVar1 & 0xf8 | bVar2 | bVar3 | bVar4;
  bVar5 = *param_2 >> 1 & 8;
  *param_1 = bVar1 & 0xf0 | bVar2 | bVar3 | bVar4 | bVar5;
  bVar6 = *param_2 >> 2 & 0x10;
  *param_1 = bVar1 & 0xe0 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6;
  bVar7 = *param_2 >> 2 & 0x20;
  *param_1 = bVar1 & 0xc0 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6 | bVar7;
  *param_1 = bVar1 & 0x80 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6 | bVar7 | (param_2[1] & 2) << 5;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return;
}



// FUNCTION 1498a3310 FUN_1498a3310 body=117 status=ok
// SIG undefined FUN_1498a3310(void)

undefined8 * FUN_1498a3310(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147d53054(&local_48);
  *param_1 = local_40;
  if (DAT_14c950c29 == '\x01') {
    if (local_48 == 0) {
      local_48 = 0;
    }
    else {
      FUN_14689c22e();
    }
  }
  param_1[1] = local_48;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a3386 FUN_1498a3386 body=457 status=ok
// SIG undefined FUN_1498a3386(void)

undefined8 FUN_1498a3386(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
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
  iVar8 = 0;
  uVar7 = 0;
  uVar4 = local_70;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar8 = (int)param_1[5];
    }
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    uVar7 = 1;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar8) || (local_58 != plVar1)) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) {
LAB_1498a3526:
          uVar7 = 0;
          uVar4 = local_70;
          break;
        }
        uVar2 = *(uint *)(*local_88 + (longlong)iVar5 * 0x10);
        plVar10 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar10 = param_2 + 7;
        }
        iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_2[9] - 1U & uVar2) * 4);
        if (iVar9 == -1) goto LAB_1498a3526;
        lVar3 = *param_2;
        iVar12 = iVar9;
        while (*(uint *)(lVar3 + (longlong)iVar12 * 0x10) != uVar2) {
          iVar12 = *(int *)((longlong)iVar12 * 0x10 + lVar3 + 8);
          if (iVar12 == -1) goto LAB_1498a3526;
        }
        do {
          lVar11 = lVar3 + (longlong)iVar9 * 0x10;
          if (*(uint *)(lVar3 + (longlong)iVar9 * 0x10) == uVar2) goto LAB_1498a34d4;
          iVar9 = *(int *)(lVar11 + 8);
        } while (iVar9 != -1);
        lVar11 = 0;
LAB_1498a34d4:
        piVar6 = (int *)(lVar11 + 4);
        if (lVar11 == 0) {
          piVar6 = (int *)0x0;
        }
        if (*(int *)(*local_88 + (longlong)iVar5 * 0x10 + 4) != *piVar6) goto LAB_1498a3526;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_88 != param_1 || (local_78 != plVar1 || local_70._4_4_ != iVar8));
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1498a3550 FUN_1498a3550 body=56 status=ok
// SIG undefined FUN_1498a3550(void)

longlong FUN_1498a3550(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1406d0862();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1498a358a FUN_1498a358a body=367 status=ok
// SIG undefined FUN_1498a358a(void)

ulonglong FUN_1498a358a(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    lVar4 = FUN_145bb3c3a();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
        (*(int *)(param_1 + 0x80) == *(int *)(param_2 + 0x80))) &&
       ((*(int *)(param_1 + 0x84) == *(int *)(param_2 + 0x84) &&
        (cVar3 = FUN_1498a3386(param_1 + 0x30,param_2 + 0x30), cVar3 != '\0')))) {
      uVar1 = *(uint *)(param_1 + 0x90);
      if (uVar1 == *(uint *)(param_2 + 0x90)) {
        if (0 < (int)uVar1) {
          lVar4 = *(longlong *)(param_1 + 0x88);
          lVar7 = *(longlong *)(param_2 + 0x88);
          lVar6 = 0;
          do {
            if (((((*(byte *)(lVar7 + lVar6) ^ *(byte *)(lVar4 + lVar6)) & 0x7f) != 0) ||
                (*(int *)(lVar4 + 4 + lVar6) != *(int *)(lVar7 + 4 + lVar6))) ||
               ((*(int *)(lVar4 + 8 + lVar6) != *(int *)(lVar7 + 8 + lVar6) ||
                (*(int *)(lVar4 + 0xc + lVar6) != *(int *)(lVar7 + 0xc + lVar6)))))
            goto LAB_1498a359e;
            lVar6 = lVar6 + 0x10;
          } while ((ulonglong)uVar1 << 4 != lVar6);
        }
        if (*(int *)(param_1 + 0xa0) == *(int *)(param_2 + 0xa0)) {
          uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
          if (0 < *(int *)(param_1 + 0xa0)) {
            lVar7 = 8;
            lVar4 = 0;
            do {
              lVar6 = *(longlong *)(param_1 + 0x98);
              if (*(longlong *)(lVar6 + -8 + lVar7) !=
                  *(longlong *)(*(longlong *)(param_2 + 0x98) + -8 + lVar7)) goto LAB_1498a359e;
              lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x98) + lVar7);
              if ((lVar2 != 0 & DAT_14c950c29) == 1) {
                FUN_14689c22e(lVar2);
              }
              if (*(longlong *)(lVar6 + lVar7) != lVar2) goto LAB_1498a359e;
              lVar4 = lVar4 + 1;
              lVar7 = lVar7 + 0x10;
            } while (lVar4 < *(int *)(param_1 + 0xa0));
          }
          goto LAB_1498a35a0;
        }
      }
    }
  }
LAB_1498a359e:
  uVar5 = 0;
LAB_1498a35a0:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1498a3704 FUN_1498a3704 body=45 status=ok
// SIG undefined FUN_1498a3704(void)

longlong FUN_1498a3704(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498a3786 FUN_1498a3786 body=42 status=ok
// SIG undefined FUN_1498a3786(void)

void FUN_1498a3786(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_2);
  return;
}



// FUNCTION 1498a37c6 FUN_1498a37c6 body=54 status=ok
// SIG undefined FUN_1498a37c6(void)

undefined1 FUN_1498a37c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c85cc2(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1498a3824 FUN_1498a3824 body=59 status=ok
// SIG undefined FUN_1498a3824(void)

undefined8 FUN_1498a3824(longlong *param_1)

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



// FUNCTION 1498a386a FUN_1498a386a body=53 status=ok
// SIG undefined FUN_1498a386a(void)

void FUN_1498a386a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140e90ec0(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1498a38f0 FUN_1498a38f0 body=119 status=ok
// SIG undefined FUN_1498a38f0(void)

void FUN_1498a38f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined2 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0x237;
  local_4c = 0x40;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_40 = 0x3f800000;
  local_38 = 0x3ff0000000000000;
  local_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  local_20 = 0x3f800000;
  local_18 = 0;
  local_10 = 0xc;
  FUN_1498a3288(param_2);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a3968 FUN_1498a3968 body=119 status=ok
// SIG undefined FUN_1498a3968(void)

void FUN_1498a3968(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined2 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0x237;
  local_4c = 0x40;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_40 = 0x3f800000;
  local_38 = 0x3ff0000000000000;
  local_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  local_20 = 0x3f800000;
  local_18 = 0;
  local_10 = 0xc;
  FUN_1498a3288(param_2);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a3a3c FUN_1498a3a3c body=59 status=ok
// SIG undefined FUN_1498a3a3c(void)

undefined8 FUN_1498a3a3c(longlong *param_1)

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



// FUNCTION 1498a3b06 FUN_1498a3b06 body=101 status=ok
// SIG undefined FUN_1498a3b06(void)

undefined1 FUN_1498a3b06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1498a3b94 FUN_1498a3b94 body=59 status=ok
// SIG undefined FUN_1498a3b94(void)

undefined8 FUN_1498a3b94(longlong *param_1)

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



// FUNCTION 1498a3ca2 FUN_1498a3ca2 body=59 status=ok
// SIG undefined FUN_1498a3ca2(void)

undefined8 FUN_1498a3ca2(longlong *param_1)

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



// FUNCTION 1498a3d92 FUN_1498a3d92 body=42 status=ok
// SIG undefined FUN_1498a3d92(void)

void FUN_1498a3d92(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145c67e5c(param_2);
  return;
}



// FUNCTION 1498a3dd2 FUN_1498a3dd2 body=54 status=ok
// SIG undefined FUN_1498a3dd2(void)

undefined1 FUN_1498a3dd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1498a3efc(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1498a3e30 FUN_1498a3e30 body=59 status=ok
// SIG undefined FUN_1498a3e30(void)

undefined8 FUN_1498a3e30(longlong *param_1)

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



// FUNCTION 1498a3e76 FUN_1498a3e76 body=55 status=ok
// SIG undefined FUN_1498a3e76(void)

void FUN_1498a3e76(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145c67e5c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1498a3efc FUN_1498a3efc body=122 status=ok
// SIG undefined FUN_1498a3efc(void)

longlong FUN_1498a3efc(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1498a3f76(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1498a3f76 FUN_1498a3f76 body=117 status=ok
// SIG undefined FUN_1498a3f76(void)

undefined8 * FUN_1498a3f76(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c67e94(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 1498a3fec FUN_1498a3fec body=36 status=ok
// SIG undefined FUN_1498a3fec(void)

undefined8 FUN_1498a3fec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498a402c FUN_1498a402c body=93 status=ok
// SIG undefined FUN_1498a402c(void)

void FUN_1498a402c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bee5630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498a408a FUN_1498a408a body=123 status=ok
// SIG undefined FUN_1498a408a(void)

void FUN_1498a408a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bee5630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498a4106 FUN_1498a4106 body=21 status=ok
// SIG undefined FUN_1498a4106(void)

undefined8 FUN_1498a4106(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498a4122 FUN_1498a4122 body=102 status=ok
// SIG undefined FUN_1498a4122(void)

longlong FUN_1498a4122(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) ||
       (param_1 = *(longlong *)(param_1 + 0xa8), param_1 != 0)) {
      lVar1 = FUN_1459914d2();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return param_1;
      }
    }
  }
  return 0;
}



// FUNCTION 1498a4188 FUN_1498a4188 body=102 status=ok
// SIG undefined FUN_1498a4188(void)

longlong FUN_1498a4188(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) ||
       (param_1 = *(longlong *)(param_1 + 0xa8), param_1 != 0)) {
      lVar1 = FUN_1406c3de4();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return param_1;
      }
    }
  }
  return 0;
}



// FUNCTION 1498a41ee FUN_1498a41ee body=102 status=ok
// SIG undefined FUN_1498a41ee(void)

longlong FUN_1498a41ee(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) ||
       (param_1 = *(longlong *)(param_1 + 0xa8), param_1 != 0)) {
      lVar1 = FUN_145a72dda();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return param_1;
      }
    }
  }
  return 0;
}



// FUNCTION 1498a4254 FUN_1498a4254 body=190 status=ok
// SIG undefined FUN_1498a4254(void)

undefined8 * FUN_1498a4254(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bee57c0;
  *(undefined4 *)(param_1 + 3) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  FUN_1498a4312(param_1 + 0xb);
  FUN_1498a4312(param_1 + 0x12);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x19] = 0;
  FUN_1414d73b6(DAT_14c872ce0,L"BackChannel",L"SendBufferSize",&DAT_14c767a48,&DAT_14c872ce8);
  FUN_1414d73b6(DAT_14c872ce0,L"BackChannel",L"RecvBufferSize",&DAT_14c767a4c,&DAT_14c872ce8);
  return param_1;
}



// FUNCTION 1498a4312 FUN_1498a4312 body=170 status=ok
// SIG undefined FUN_1498a4312(void)

undefined8 * FUN_1498a4312(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  QueryPerformanceCounter(&local_38);
  param_1[5] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  QueryPerformanceCounter(&local_38);
  param_1[6] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a43be FUN_1498a43be body=76 status=ok
// SIG undefined FUN_1498a43be(void)

void FUN_1498a43be(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bee57c0;
  if (param_1[9] != 0) {
    FUN_14467c9c2(param_1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498a43ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1498a440e FUN_1498a440e body=69 status=ok
// SIG undefined FUN_1498a440e(void)

ulonglong FUN_1498a440e(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))();
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),iVar1 == 1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar2 & 0xffffffff;
}



// FUNCTION 1498a4458 FUN_1498a4458 body=138 status=ok
// SIG undefined FUN_1498a4458(void)

undefined8 * FUN_1498a4458(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 == 0) {
    FUN_140056680(param_2,L"No Socket");
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x18);
    _Src = *(void **)(lVar2 + 0x10);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return param_2;
}



// FUNCTION 1498a451a FUN_1498a451a body=92 status=ok
// SIG undefined FUN_1498a451a(void)

undefined4 FUN_1498a451a(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pcVar3 = (code *)*param_1;
  plVar6 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[2];
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  uVar4 = (*pcVar3)(uVar5,param_2);
  plVar6 = *(longlong **)(param_2 + 8);
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
  return uVar4;
}



// FUNCTION 1498a4582 FUN_1498a4582 body=43 status=ok
// SIG undefined FUN_1498a4582(void)

undefined8 FUN_1498a4582(undefined8 param_1,int param_2)

{
  FUN_1498a43be();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1498a45ae FUN_1498a45ae body=25 status=ok
// SIG undefined FUN_1498a45ae(void)

void FUN_1498a45ae(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498a45c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x68))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1498a45c8 FUN_1498a45c8 body=34 status=ok
// SIG undefined FUN_1498a45c8(void)

undefined8 FUN_1498a45c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1498a45ea FUN_1498a45ea body=36 status=ok
// SIG undefined FUN_1498a45ea(void)

undefined8 FUN_1498a45ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498a462a FUN_1498a462a body=93 status=ok
// SIG undefined FUN_1498a462a(void)

void FUN_1498a462a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bee5a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498a4688 FUN_1498a4688 body=126 status=ok
// SIG undefined FUN_1498a4688(void)

void FUN_1498a4688(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bee5a40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498a46f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498a4706 FUN_1498a4706 body=21 status=ok
// SIG undefined FUN_1498a4706(void)

undefined8 FUN_1498a4706(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498a471c FUN_1498a471c body=313 status=ok
// SIG undefined FUN_1498a471c(void)

longlong * FUN_1498a471c(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0xd0,0x10);
  FUN_1498a4254(lVar2);
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bee5a20;
  plVar3[2] = lVar2;
  if ((lVar2 == 0) ||
     (((*(longlong *)(lVar2 + 8) != 0 && (*(longlong *)(lVar2 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))))) {
    *param_2 = lVar2;
    param_2[1] = (longlong)plVar3;
    if (plVar3 == (longlong *)0x0) {
      return param_2;
    }
    goto LAB_1498a4802;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) goto LAB_1498a4843;
LAB_1498a47ca:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x10) = plVar3;
    if (plVar3 == (longlong *)0x0) {
LAB_1498a4843:
      *param_2 = lVar2;
      param_2[1] = 0;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) goto LAB_1498a47ca;
      *(longlong **)(lVar2 + 0x10) = plVar3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *param_2 = lVar2;
  param_2[1] = (longlong)plVar3;
LAB_1498a4802:
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_2;
}



// FUNCTION 1498a488c FUN_1498a488c body=468 status=ok
// SIG undefined FUN_1498a488c(void)

void FUN_1498a488c(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  int local_70;
  undefined8 local_6c;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_144b34a28();
  if (cVar3 != '\0') {
    lVar6 = *param_3;
    if (lVar6 == 0) {
      uVar7 = *(uint *)(param_4 + 1);
      if (uVar7 == 0) {
        *param_4 = (longlong)&DAT_14c846330;
        *(undefined4 *)(param_4 + 1) = 1;
        uVar7 = 1;
      }
      lVar6 = *param_1;
      local_78 = &local_41;
      local_41 = 0;
      local_50 = param_5;
      uVar12 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        uVar12 = DAT_14ca84e48;
      }
      local_70 = uVar12 + (uVar12 == 0);
      uVar12 = DAT_14ca84e48;
      if (uVar7 < DAT_14ca84e48) {
        uVar12 = uVar7;
      }
      local_60 = 0;
      local_6c = CONCAT44(0x4109,uVar12 + (uVar12 == 0));
      puVar1 = (ulonglong *)(lVar6 + 0x70);
      lVar4 = FUN_144738de6(lVar6 + 0x188);
      uVar7 = *(uint *)(param_4 + 1);
      uVar10 = *(longlong *)(lVar6 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar13 = uVar10 + (ulonglong)uVar7 * 0x10;
      if (*(ulonglong *)(lVar6 + 0x78) < uVar13) {
        FUN_140023dd8(puVar1);
        uVar10 = *puVar1 + 0xf & 0xfffffffffffffff0;
        uVar13 = (ulonglong)uVar7 * 0x10 + uVar10;
      }
      *puVar1 = uVar13;
      lVar11 = (longlong)(int)param_4[1];
      if (0 < lVar11) {
        puVar5 = (undefined4 *)(uVar10 + 0xc);
        lVar8 = 8;
        lVar9 = 0;
        do {
          uVar2 = *(undefined4 *)(*param_4 + lVar8);
          *(undefined8 *)(puVar5 + -3) = *(undefined8 *)(*param_4 + -8 + lVar8);
          puVar5[-1] = uVar2;
          *puVar5 = 0x3f800000;
          lVar9 = lVar9 + 1;
          lVar11 = (longlong)(int)param_4[1];
          puVar5 = puVar5 + 4;
          lVar8 = lVar8 + 0xc;
        } while (lVar9 < lVar11);
      }
      local_78 = (undefined1 *)CONCAT71(local_78._1_7_,1);
      FUN_1447759b4(lVar6,lVar4,uVar10,lVar11 << 4);
      local_70 = CONCAT31(local_70._1_3_,1);
      local_6c = 0xffffffff00000000;
      local_60 = 0;
      local_58 = lVar4;
      lVar6 = FUN_14475683e(lVar6 + 0x198,puVar1,lVar4 + 8);
      *param_3 = lVar6;
    }
    *param_2 = lVar6;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a4a62 FUN_1498a4a62 body=801 status=ok
// SIG undefined FUN_1498a4a62(void)

ulonglong FUN_1498a4a62(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 unaff_RBX;
  
  bVar6 = FUN_1414db5a0();
  bVar6 = param_2 != (longlong *)0x0 & bVar6;
  if (bVar6 == 1) {
    FUN_1498a4d84(param_2 + 7,param_1 + 0x38);
    *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x88);
    *(undefined4 *)((longlong)param_2 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_1 + 0x90);
    *(undefined1 *)((longlong)param_2 + 0x94) = *(undefined1 *)(param_1 + 0x94);
    *(undefined1 *)(param_2 + 0x56) = *(undefined1 *)(param_1 + 0x2b0);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    param_2[0x13] = *(longlong *)(param_1 + 0x98);
    param_2[0x14] = lVar5;
    *(undefined4 *)(param_2 + 0x15) = *(undefined4 *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xb8);
    param_2[0x16] = *(longlong *)(param_1 + 0xb0);
    param_2[0x17] = lVar5;
    lVar5 = *(longlong *)(param_1 + 200);
    param_2[0x18] = *(longlong *)(param_1 + 0xc0);
    param_2[0x19] = lVar5;
    lVar5 = *(longlong *)(param_1 + 0xd8);
    param_2[0x1a] = *(longlong *)(param_1 + 0xd0);
    param_2[0x1b] = lVar5;
    lVar5 = *(longlong *)(param_1 + 0xe8);
    param_2[0x1c] = *(longlong *)(param_1 + 0xe0);
    param_2[0x1d] = lVar5;
    lVar5 = *(longlong *)(param_1 + 0xf8);
    param_2[0x1e] = *(longlong *)(param_1 + 0xf0);
    param_2[0x1f] = lVar5;
    lVar5 = *(longlong *)(param_1 + 0x108);
    param_2[0x20] = *(longlong *)(param_1 + 0x100);
    param_2[0x21] = lVar5;
    lVar5 = *(longlong *)(param_1 + 0x118);
    param_2[0x22] = *(longlong *)(param_1 + 0x110);
    param_2[0x23] = lVar5;
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x120);
    *(undefined1 *)((longlong)param_2 + 0x124) = *(undefined1 *)(param_1 + 0x124);
    *(undefined1 *)((longlong)param_2 + 0x125) = *(undefined1 *)(param_1 + 0x125);
    lVar5 = *(longlong *)(param_1 + 0x130);
    param_2[0x25] = *(longlong *)(param_1 + 0x128);
    param_2[0x26] = lVar5;
    *(undefined1 *)(param_2 + 0x27) = *(undefined1 *)(param_1 + 0x138);
    lVar5 = *(longlong *)(param_1 + 0x148);
    param_2[0x28] = *(longlong *)(param_1 + 0x140);
    param_2[0x29] = lVar5;
    *(undefined1 *)(param_2 + 0x2a) = *(undefined1 *)(param_1 + 0x150);
    lVar5 = *(longlong *)(param_1 + 0x160);
    param_2[0x2b] = *(longlong *)(param_1 + 0x158);
    param_2[0x2c] = lVar5;
    *(undefined1 *)((longlong)param_2 + 0x16c) = *(undefined1 *)(param_1 + 0x16c);
    *(undefined1 *)((longlong)param_2 + 0x16e) = *(undefined1 *)(param_1 + 0x16e);
    *(undefined1 *)((longlong)param_2 + 0x16d) = *(undefined1 *)(param_1 + 0x16d);
    *(undefined1 *)(param_2 + 0x42) = *(undefined1 *)(param_1 + 0x210);
    *(undefined1 *)((longlong)param_2 + 0x211) = *(undefined1 *)(param_1 + 0x211);
    param_2[0x30] = *(longlong *)(param_1 + 0x180);
    lVar5 = *(longlong *)(param_1 + 0x178);
    param_2[0x2e] = *(longlong *)(param_1 + 0x170);
    param_2[0x2f] = lVar5;
    param_2[0x33] = *(longlong *)(param_1 + 0x198);
    lVar5 = *(longlong *)(param_1 + 400);
    param_2[0x31] = *(longlong *)(param_1 + 0x188);
    param_2[0x32] = lVar5;
    uVar2 = *(undefined4 *)(param_1 + 0x1a4);
    uVar3 = *(undefined4 *)(param_1 + 0x1a8);
    uVar4 = *(undefined4 *)(param_1 + 0x1ac);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uVar2;
    *(undefined4 *)(param_2 + 0x35) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = uVar4;
    param_2[0x36] = *(longlong *)(param_1 + 0x1b0);
    *(undefined4 *)(param_2 + 0x37) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined1 *)((longlong)param_2 + 0x1bc) = *(undefined1 *)(param_1 + 0x1bc);
    FUN_1498a4dfe(param_2 + 0x38,param_1 + 0x1c0);
    lVar5 = *(longlong *)(param_1 + 0x220);
    param_2[0x43] = *(longlong *)(param_1 + 0x218);
    param_2[0x44] = lVar5;
    *(undefined4 *)(param_2 + 0x45) = *(undefined4 *)(param_1 + 0x228);
    *(undefined1 *)((longlong)param_2 + 0x22c) = *(undefined1 *)(param_1 + 0x22c);
    lVar5 = *(longlong *)(param_1 + 0x238);
    param_2[0x46] = *(longlong *)(param_1 + 0x230);
    param_2[0x47] = lVar5;
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x240);
    param_2[0x4b] = *(longlong *)(param_1 + 600);
    lVar5 = *(longlong *)(param_1 + 0x250);
    param_2[0x49] = *(longlong *)(param_1 + 0x248);
    param_2[0x4a] = lVar5;
    param_2[0x4e] = *(longlong *)(param_1 + 0x270);
    lVar5 = *(longlong *)(param_1 + 0x268);
    param_2[0x4c] = *(longlong *)(param_1 + 0x260);
    param_2[0x4d] = lVar5;
    lVar5 = *(longlong *)(param_1 + 0x280);
    param_2[0x4f] = *(longlong *)(param_1 + 0x278);
    param_2[0x50] = lVar5;
    *(undefined4 *)(param_2 + 0x51) = *(undefined4 *)(param_1 + 0x288);
    *(undefined1 *)((longlong)param_2 + 0x28c) = *(undefined1 *)(param_1 + 0x28c);
    *(undefined4 *)(param_2 + 0x52) = *(undefined4 *)(param_1 + 0x290);
    *(undefined4 *)((longlong)param_2 + 0x294) = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)((longlong)param_2 + 0x2ac) = *(undefined4 *)(param_1 + 0x2ac);
    *(undefined4 *)(param_2 + 0x55) = *(undefined4 *)(param_1 + 0x2a8);
    uVar1 = *(uint *)(param_2 + 6);
    *(uint *)(param_2 + 6) = uVar1 | 1;
    if ((~uVar1 & 4) == 0) {
      (**(code **)(*param_2 + 0x428))(param_2);
      *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe;
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar6) & 0xffffffff;
}



// FUNCTION 1498a4d84 FUN_1498a4d84 body=122 status=ok
// SIG undefined FUN_1498a4d84(void)

longlong FUN_1498a4d84(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1498b30e2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1498a4dfe FUN_1498a4dfe body=122 status=ok
// SIG undefined FUN_1498a4dfe(void)

longlong FUN_1498a4dfe(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1498b31ca(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1498a4e78 FUN_1498a4e78 body=2258 status=ok
// SIG undefined FUN_1498a4e78(void)

ulonglong FUN_1498a4e78(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  wchar_t **ppwVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_b8 [40];
  wchar_t *local_90;
  int local_88;
  wchar_t **local_80;
  int local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = FUN_1481192e4();
  uVar8 = 0;
  if ((param_2 == 0) || (cVar4 == '\0')) goto LAB_1498a4ead;
  lVar6 = FUN_145bb3d24();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     ((*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       != lVar6 + 0x30 ||
      (*(int *)(param_2 + 0x40) - *(int *)(param_2 + 0x6c) !=
       *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c))))) {
    uVar8 = 0;
    goto LAB_1498a4ead;
  }
  FUN_1498a574c(param_1 + 0x38,&local_70);
  _Src = local_70;
  local_60 = (void *)0x0;
  local_58 = local_68;
  if ((longlong)local_68 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1498b3398(&local_60,local_68);
    memcpy(local_60,_Src,(longlong)local_68 << 3);
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8(local_70);
  }
  FUN_1498a574c(param_2 + 0x38,&local_80);
  ppwVar7 = local_80;
  local_70 = (void *)0x0;
  lVar6 = (longlong)local_78;
  local_68 = local_78;
  if (lVar6 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1498b3398(&local_70,local_78);
    memcpy(local_70,ppwVar7,lVar6 << 3);
  }
  ppwVar7 = local_80;
  if (local_80 != (wchar_t **)0x0) {
    FUN_1400020a8(local_80);
  }
  if (local_58 < 1) {
LAB_1498a50b1:
    if (((((((((*(char *)(param_2 + 0x94) != *(char *)(param_1 + 0x94)) ||
              (*(char *)(param_2 + 0x2b0) != *(char *)(param_1 + 0x2b0))) ||
             (*(char *)(param_2 + 0x88) != *(char *)(param_1 + 0x88))) ||
            (((*(int *)(param_2 + 0x8c) != *(int *)(param_1 + 0x8c) ||
              (*(int *)(param_2 + 0x90) != *(int *)(param_1 + 0x90))) ||
             ((*(double *)(param_2 + 0x98) != *(double *)(param_1 + 0x98) ||
              ((NAN(*(double *)(param_2 + 0x98)) || NAN(*(double *)(param_1 + 0x98)) ||
               (*(double *)(param_2 + 0xa0) != *(double *)(param_1 + 0xa0))))))))) ||
           ((NAN(*(double *)(param_2 + 0xa0)) || NAN(*(double *)(param_1 + 0xa0)) ||
            (((*(float *)(param_2 + 0xa8) != *(float *)(param_1 + 0xa8) ||
              (NAN(*(float *)(param_2 + 0xa8)) || NAN(*(float *)(param_1 + 0xa8)))) ||
             (*(double *)(param_2 + 0xb0) != *(double *)(param_1 + 0xb0))))))) ||
          (((NAN(*(double *)(param_2 + 0xb0)) || NAN(*(double *)(param_1 + 0xb0)) ||
            (*(double *)(param_2 + 0xb8) != *(double *)(param_1 + 0xb8))) ||
           (((NAN(*(double *)(param_2 + 0xb8)) || NAN(*(double *)(param_1 + 0xb8)) ||
             ((*(double *)(param_2 + 0xc0) != *(double *)(param_1 + 0xc0) ||
              (NAN(*(double *)(param_2 + 0xc0)) || NAN(*(double *)(param_1 + 0xc0)))))) ||
            (*(double *)(param_2 + 200) != *(double *)(param_1 + 200))))))) ||
         (((((NAN(*(double *)(param_2 + 200)) || NAN(*(double *)(param_1 + 200)) ||
             (*(double *)(param_2 + 0xd0) != *(double *)(param_1 + 0xd0))) ||
            (NAN(*(double *)(param_2 + 0xd0)) || NAN(*(double *)(param_1 + 0xd0)))) ||
           ((*(double *)(param_2 + 0xd8) != *(double *)(param_1 + 0xd8) ||
            (NAN(*(double *)(param_2 + 0xd8)) || NAN(*(double *)(param_1 + 0xd8)))))) ||
          ((*(double *)(param_2 + 0xe0) != *(double *)(param_1 + 0xe0) ||
           ((NAN(*(double *)(param_2 + 0xe0)) || NAN(*(double *)(param_1 + 0xe0)) ||
            (*(double *)(param_2 + 0xe8) != *(double *)(param_1 + 0xe8))))))))) ||
        (((NAN(*(double *)(param_2 + 0xe8)) || NAN(*(double *)(param_1 + 0xe8)) ||
          (((((((*(double *)(param_2 + 0xf0) != *(double *)(param_1 + 0xf0) ||
                (NAN(*(double *)(param_2 + 0xf0)) || NAN(*(double *)(param_1 + 0xf0)))) ||
               (*(double *)(param_2 + 0xf8) != *(double *)(param_1 + 0xf8))) ||
              (((NAN(*(double *)(param_2 + 0xf8)) || NAN(*(double *)(param_1 + 0xf8)) ||
                (*(double *)(param_2 + 0x100) != *(double *)(param_1 + 0x100))) ||
               ((NAN(*(double *)(param_2 + 0x100)) || NAN(*(double *)(param_1 + 0x100)) ||
                ((*(double *)(param_2 + 0x108) != *(double *)(param_1 + 0x108) ||
                 (NAN(*(double *)(param_2 + 0x108)) || NAN(*(double *)(param_1 + 0x108)))))))))) ||
             (*(double *)(param_2 + 0x110) != *(double *)(param_1 + 0x110))) ||
            (((NAN(*(double *)(param_2 + 0x110)) || NAN(*(double *)(param_1 + 0x110)) ||
              (*(double *)(param_2 + 0x118) != *(double *)(param_1 + 0x118))) ||
             (NAN(*(double *)(param_2 + 0x118)) || NAN(*(double *)(param_1 + 0x118)))))) ||
           ((*(int *)(param_2 + 0x120) != *(int *)(param_1 + 0x120) ||
            (*(char *)(param_2 + 0x124) != *(char *)(param_1 + 0x124))))))) ||
         ((((*(char *)(param_2 + 0x125) != *(char *)(param_1 + 0x125) ||
            ((*(double *)(param_2 + 0x128) != *(double *)(param_1 + 0x128) ||
             (NAN(*(double *)(param_2 + 0x128)) || NAN(*(double *)(param_1 + 0x128)))))) ||
           ((*(double *)(param_2 + 0x130) != *(double *)(param_1 + 0x130) ||
            ((((((NAN(*(double *)(param_2 + 0x130)) || NAN(*(double *)(param_1 + 0x130)) ||
                 (*(char *)(param_2 + 0x138) != *(char *)(param_1 + 0x138))) ||
                (*(double *)(param_2 + 0x140) != *(double *)(param_1 + 0x140))) ||
               ((NAN(*(double *)(param_2 + 0x140)) || NAN(*(double *)(param_1 + 0x140)) ||
                (*(double *)(param_2 + 0x148) != *(double *)(param_1 + 0x148))))) ||
              (NAN(*(double *)(param_2 + 0x148)) || NAN(*(double *)(param_1 + 0x148)))) ||
             ((*(char *)(param_2 + 0x150) != *(char *)(param_1 + 0x150) ||
              (*(double *)(param_2 + 0x158) != *(double *)(param_1 + 0x158))))))))) ||
          ((NAN(*(double *)(param_2 + 0x158)) || NAN(*(double *)(param_1 + 0x158)) ||
           (((*(double *)(param_2 + 0x160) != *(double *)(param_1 + 0x160) ||
             (NAN(*(double *)(param_2 + 0x160)) || NAN(*(double *)(param_1 + 0x160)))) ||
            (*(char *)(param_2 + 0x16c) != *(char *)(param_1 + 0x16c))))))))))) ||
       ((((((*(char *)(param_2 + 0x16e) != *(char *)(param_1 + 0x16e) ||
            (*(char *)(param_2 + 0x16d) != *(char *)(param_1 + 0x16d))) ||
           (*(char *)(param_2 + 0x210) != *(char *)(param_1 + 0x210))) ||
          (((*(char *)(param_2 + 0x211) != *(char *)(param_1 + 0x211) ||
            (*(double *)(param_2 + 0x170) != *(double *)(param_1 + 0x170))) ||
           ((((NAN(*(double *)(param_2 + 0x170)) || NAN(*(double *)(param_1 + 0x170)) ||
              (((*(double *)(param_2 + 0x178) != *(double *)(param_1 + 0x178) ||
                (NAN(*(double *)(param_2 + 0x178)) || NAN(*(double *)(param_1 + 0x178)))) ||
               (*(double *)(param_2 + 0x180) != *(double *)(param_1 + 0x180))))) ||
             ((NAN(*(double *)(param_2 + 0x180)) || NAN(*(double *)(param_1 + 0x180)) ||
              (*(double *)(param_2 + 0x188) != *(double *)(param_1 + 0x188))))) ||
            (NAN(*(double *)(param_2 + 0x188)) || NAN(*(double *)(param_1 + 0x188)))))))) ||
         (((*(double *)(param_2 + 400) != *(double *)(param_1 + 400) ||
           (NAN(*(double *)(param_2 + 400)) || NAN(*(double *)(param_1 + 400)))) ||
          ((*(double *)(param_2 + 0x198) != *(double *)(param_1 + 0x198) ||
           ((((NAN(*(double *)(param_2 + 0x198)) || NAN(*(double *)(param_1 + 0x198)) ||
              (*(double *)(param_2 + 0x1a0) != *(double *)(param_1 + 0x1a0))) ||
             (NAN(*(double *)(param_2 + 0x1a0)) || NAN(*(double *)(param_1 + 0x1a0)))) ||
            ((*(double *)(param_2 + 0x1a8) != *(double *)(param_1 + 0x1a8) ||
             (NAN(*(double *)(param_2 + 0x1a8)) || NAN(*(double *)(param_1 + 0x1a8)))))))))))) ||
        (((*(double *)(param_2 + 0x1b0) != *(double *)(param_1 + 0x1b0) ||
          (((NAN(*(double *)(param_2 + 0x1b0)) || NAN(*(double *)(param_1 + 0x1b0)) ||
            (*(int *)(param_2 + 0x1b8) != *(int *)(param_1 + 0x1b8))) ||
           (((*(char *)(param_2 + 0x1bc) != *(char *)(param_1 + 0x1bc) ||
             (((*(double *)(param_2 + 0x218) != *(double *)(param_1 + 0x218) ||
               (NAN(*(double *)(param_2 + 0x218)) || NAN(*(double *)(param_1 + 0x218)))) ||
              (*(double *)(param_2 + 0x220) != *(double *)(param_1 + 0x220))))) ||
            ((((NAN(*(double *)(param_2 + 0x220)) || NAN(*(double *)(param_1 + 0x220)) ||
               (*(float *)(param_2 + 0x228) != *(float *)(param_1 + 0x228))) ||
              (NAN(*(float *)(param_2 + 0x228)) || NAN(*(float *)(param_1 + 0x228)))) ||
             ((*(char *)(param_2 + 0x22c) != *(char *)(param_1 + 0x22c) ||
              (*(double *)(param_2 + 0x230) != *(double *)(param_1 + 0x230))))))))))) ||
         (((((NAN(*(double *)(param_2 + 0x230)) || NAN(*(double *)(param_1 + 0x230)) ||
             (((*(double *)(param_2 + 0x238) != *(double *)(param_1 + 0x238) ||
               (NAN(*(double *)(param_2 + 0x238)) || NAN(*(double *)(param_1 + 0x238)))) ||
              (*(float *)(param_2 + 0x240) != *(float *)(param_1 + 0x240))))) ||
            (((NAN(*(float *)(param_2 + 0x240)) || NAN(*(float *)(param_1 + 0x240)) ||
              (*(double *)(param_2 + 0x248) != *(double *)(param_1 + 0x248))) ||
             ((NAN(*(double *)(param_2 + 0x248)) || NAN(*(double *)(param_1 + 0x248)) ||
              (((*(double *)(param_2 + 0x250) != *(double *)(param_1 + 0x250) ||
                (NAN(*(double *)(param_2 + 0x250)) || NAN(*(double *)(param_1 + 0x250)))) ||
               ((*(double *)(param_2 + 600) != *(double *)(param_1 + 600) ||
                ((((NAN(*(double *)(param_2 + 600)) || NAN(*(double *)(param_1 + 600)) ||
                   (*(double *)(param_2 + 0x260) != *(double *)(param_1 + 0x260))) ||
                  (NAN(*(double *)(param_2 + 0x260)) || NAN(*(double *)(param_1 + 0x260)))) ||
                 ((*(double *)(param_2 + 0x268) != *(double *)(param_1 + 0x268) ||
                  (NAN(*(double *)(param_2 + 0x268)) || NAN(*(double *)(param_1 + 0x268)))))))))))))
             ))) || ((*(double *)(param_2 + 0x270) != *(double *)(param_1 + 0x270) ||
                     ((NAN(*(double *)(param_2 + 0x270)) || NAN(*(double *)(param_1 + 0x270)) ||
                      (*(double *)(param_2 + 0x278) != *(double *)(param_1 + 0x278))))))) ||
          (((NAN(*(double *)(param_2 + 0x278)) || NAN(*(double *)(param_1 + 0x278)) ||
            (((*(double *)(param_2 + 0x280) != *(double *)(param_1 + 0x280) ||
              (NAN(*(double *)(param_2 + 0x280)) || NAN(*(double *)(param_1 + 0x280)))) ||
             (*(float *)(param_2 + 0x288) != *(float *)(param_1 + 0x288))))) ||
           (NAN(*(float *)(param_2 + 0x288)) || NAN(*(float *)(param_1 + 0x288))))))))))))
    goto LAB_1498a56f6;
    uVar8 = CONCAT71((int7)((ulonglong)ppwVar7 >> 8),
                     *(char *)(param_2 + 0x28c) == *(char *)(param_1 + 0x28c));
  }
  else {
    bVar9 = true;
    lVar6 = 0;
    ppwVar7 = &local_90;
    iVar5 = local_58;
    do {
      lVar1 = *(longlong *)((longlong)local_60 + lVar6 * 8);
      lVar2 = *(longlong *)((longlong)local_70 + lVar6 * 8);
      if (lVar2 != 0 && lVar1 != 0) {
        if (bVar9) {
          local_90 = *(wchar_t **)(lVar1 + 0x18);
          FUN_1400021e4(ppwVar7,&local_80);
          local_50 = *(undefined8 *)(lVar2 + 0x18);
          FUN_1400021e4(&local_50,ppwVar7);
          pwVar3 = local_90;
          if (local_78 == local_88) {
            bVar9 = true;
            if (1 < local_78) {
              iVar5 = wcscmp((wchar_t *)local_80,local_90);
              bVar9 = iVar5 == 0;
            }
          }
          else {
            bVar9 = local_88 + local_78 == 1;
          }
          if (pwVar3 != (wchar_t *)0x0) {
            FUN_1400020a8(pwVar3);
          }
          iVar5 = local_58;
          if (local_80 != (wchar_t **)0x0) {
            FUN_1400020a8();
            iVar5 = local_58;
          }
        }
        else {
          bVar9 = false;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    if (bVar9) goto LAB_1498a50b1;
LAB_1498a56f6:
    uVar8 = 0;
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1498a4ead:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1498a574c FUN_1498a574c body=344 status=ok
// SIG undefined FUN_1498a574c(void)

longlong * FUN_1498a574c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1498b32b2(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1498b3312(param_2,iVar2);
      }
      lVar1 = *(longlong *)(lVar3 * 0x10 + lVar1);
      *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar1;
      if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
        FUN_1456cec3c();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1498a58a6 FUN_1498a58a6 body=189 status=ok
// SIG undefined FUN_1498a58a6(void)

void FUN_1498a58a6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x9d0);
  if (lVar1 != 0) {
    *(undefined1 *)(*(longlong *)(param_2 + 0x9d8) + 0x20) = 1;
    *(undefined1 *)(*(longlong *)(param_2 + 0x9d8) + 0x21) = 1;
    *(undefined1 *)(*(longlong *)(param_2 + 0x9c8) + 0x7b9) = 1;
    *(undefined1 *)(*(longlong *)(param_2 + 0x9d8) + 0x22) = 1;
    local_24 = 0;
    FUN_1498a5964(lVar1,&local_24,param_1);
    local_24 = 1;
    FUN_1498a5d78(lVar1,&local_24,param_1);
    local_24 = 2;
    FUN_1498a629c(lVar1,&local_24,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a5964 FUN_1498a5964 body=160 status=ok
// SIG undefined FUN_1498a5964(void)

void FUN_1498a5964(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8);
  local_30 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *local_30 = &PTR_FUN_14beea430;
  local_30[1] = param_3;
  local_30[2] = FUN_1498a5a06;
  local_30[3] = 0;
  (**(code **)(*plVar2 + 8))(plVar2);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a5a06 FUN_1498a5a06 body=881 status=ok
// SIG undefined FUN_1498a5a06(void)

void FUN_1498a5a06(longlong param_1,longlong param_2)

{
  void *_Dst;
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144a61b4f();
  iVar5 = *(int *)(param_1 + 0x2d4);
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (iVar5 < 0) {
    FUN_1498b36c6(param_1 + 0x2c8);
    iVar8 = *(int *)(param_1 + 0x2d0);
    iVar5 = *(int *)(param_1 + 0x2d4);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 0x2d0) = uVar2 + iVar8;
  if ((uint)(iVar5 - iVar8) < uVar2) {
    FUN_1498b36f6(param_1 + 0x2c8);
  }
  if ((longlong)*(int *)(param_2 + 0x10) != 0) {
    puVar10 = *(undefined8 **)(param_2 + 8);
    local_120 = puVar10 + (longlong)*(int *)(param_2 + 0x10) * 0x24;
    lVar9 = 0;
    do {
      lVar11 = *(longlong *)(param_1 + 0x2c8);
      lVar12 = lVar9 * 0xe8;
      _Dst = (void *)(lVar11 + lVar12);
      local_108 = puVar10[2];
      local_118 = *puVar10;
      uStack_110 = puVar10[1];
      local_f0 = puVar10[5];
      local_100 = puVar10[3];
      uStack_f8 = puVar10[4];
      local_d8 = puVar10[8];
      local_e8 = puVar10[6];
      uStack_e0 = puVar10[7];
      local_c0 = puVar10[0xb];
      local_d0 = puVar10[9];
      uStack_c8 = puVar10[10];
      local_a8 = puVar10[0xe];
      local_b8 = puVar10[0xc];
      uStack_b0 = puVar10[0xd];
      local_90 = puVar10[0x17];
      local_a0 = puVar10[0x15];
      uStack_98 = puVar10[0x16];
      local_78 = puVar10[0x1a];
      local_88 = puVar10[0x18];
      uStack_80 = puVar10[0x19];
      uVar7 = puVar10[0x1b];
      uVar3 = puVar10[0x1c];
      memcpy(_Dst,&local_118,0xa8);
      puVar1 = (undefined8 *)(lVar11 + 0xa8 + lVar12);
      *puVar1 = uVar7;
      puVar1[1] = uVar3;
      *(undefined8 *)(lVar11 + 0xb8 + lVar12) = 0xbff0000000000000;
      *(undefined8 *)(lVar11 + 0xc0 + lVar12) = 0xbff0000000000000;
      *(undefined8 *)(lVar11 + 200 + lVar12) = 0xbff0000000000000;
      *(undefined8 *)(lVar11 + 0xd0 + lVar12) = 0xffffffffffffffff;
      puVar1 = (undefined8 *)(lVar11 + 0xd8 + lVar12);
      *puVar1 = 0;
      puVar1[1] = 0;
      if ((longlong)*(int *)(param_1 + 0x2c0) != 0) {
        local_128 = (undefined8 *)(lVar11 + lVar12 + 0xd8);
        lVar11 = (longlong)*(int *)(param_1 + 0x2c0) * 0x18;
        lVar12 = *(longlong *)(param_1 + 0x2b8) + 0x10;
        do {
          if (((*(longlong *)(lVar12 + -0x10) != 0) &&
              (cVar4 = FUN_144729dda(lVar12), cVar4 != '\0')) &&
             (lVar6 = FUN_1498a7a16(*(undefined8 *)(lVar12 + -0x10),puVar10[0x20]), lVar6 != 0)) {
            lVar11 = FUN_14075957a(lVar6);
            if (lVar11 == 0) {
              uVar7 = 0;
            }
            else {
              *(uint *)((longlong)_Dst + 0xd0) = (uint)*(byte *)(lVar11 + 0x60);
              uVar7 = *(undefined8 *)(lVar11 + 0x18);
            }
            *local_128 = uVar7;
            goto LAB_1498a5c44;
          }
          lVar12 = lVar12 + 0x18;
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != 0);
        lVar6 = 0;
LAB_1498a5c44:
        if ((longlong)*(int *)(param_1 + 0x2c0) != 0) {
          lVar11 = (longlong)*(int *)(param_1 + 0x2c0) * 0x18;
          lVar12 = *(longlong *)(param_1 + 0x2b8) + 0x10;
          do {
            if ((*(longlong *)(lVar12 + -0x10) != 0) &&
               (cVar4 = FUN_144729dda(lVar12), cVar4 != '\0')) {
              lVar6 = FUN_1498a7a16(*(undefined8 *)(lVar12 + -0x10),puVar10[0x21]);
              if (lVar6 != 0) goto LAB_1498a5ca2;
              lVar6 = 0;
            }
            lVar12 = lVar12 + 0x18;
            lVar11 = lVar11 + -0x18;
          } while (lVar11 != 0);
        }
        if (lVar6 != 0) {
LAB_1498a5ca2:
          lVar11 = FUN_14075957a(lVar6);
          if (lVar11 == 0) {
            uVar7 = 0;
          }
          else {
            *(uint *)((longlong)_Dst + 0xd4) = (uint)*(byte *)(lVar11 + 0x60);
            uVar7 = *(undefined8 *)(lVar11 + 0x18);
          }
          *(undefined8 *)((longlong)_Dst + 0xe0) = uVar7;
        }
      }
      *(undefined8 *)((longlong)_Dst + 0xb8) = 0x412e848000000000;
      *(undefined8 *)((longlong)_Dst + 0xc0) = 0x4059000000000000;
      *(undefined8 *)((longlong)_Dst + 200) = 0x4059000000000000;
      lVar9 = lVar9 + 1;
      puVar10 = puVar10 + 0x24;
    } while (puVar10 != local_120);
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498a5d78 FUN_1498a5d78 body=160 status=ok
// SIG undefined FUN_1498a5d78(void)

void FUN_1498a5d78(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8);
  local_30 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *local_30 = &PTR_FUN_14beea450;
  local_30[1] = param_3;
  local_30[2] = FUN_1498a5e1a;
  local_30[3] = 0;
  (**(code **)(*plVar2 + 8))(plVar2);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a5e1a FUN_1498a5e1a body=1152 status=ok
// SIG undefined FUN_1498a5e1a(void)

void FUN_1498a5e1a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined1 local_cc [4];
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144a61b4f();
  plVar1 = (longlong *)(param_1 + 0x2d8);
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_1 + 0x2e0);
  *(uint *)(param_1 + 0x2e0) = uVar5 + uVar4;
  if (*(int *)(param_1 + 0x2e4) - uVar5 < uVar4) {
    FUN_1498b41b2(plVar1,uVar5);
  }
  memmove((void *)(*plVar1 + (longlong)(int)uVar4 * 0x110),(void *)*plVar1,(ulonglong)uVar5 * 0x110)
  ;
  memset((void *)*plVar1,0,(longlong)(int)uVar4 * 0x110);
  if ((longlong)*(int *)(param_2 + 0x10) != 0) {
    lVar13 = *(longlong *)(param_2 + 8);
    local_d8 = (longlong)*(int *)(param_2 + 0x10) * 0x98 + lVar13;
    lVar16 = 0;
    do {
      lVar17 = *(longlong *)(param_1 + 0x2d8);
      if (*(char *)(param_1 + 0x210) == '\x01') {
        lVar12 = lVar16 * 0x110;
        puVar2 = (undefined8 *)(lVar17 + lVar12);
        local_c8[2] = *(undefined8 *)(lVar13 + 0x20);
        local_c8[0] = *(undefined8 *)(lVar13 + 0x10);
        local_c8[1] = *(undefined8 *)(lVar13 + 0x18);
        uStack_a0 = *(undefined8 *)(lVar13 + 0x38);
        local_c8[3] = *(undefined8 *)(lVar13 + 0x28);
        uStack_a8 = *(undefined8 *)(lVar13 + 0x30);
        local_88 = *(undefined8 *)(lVar13 + 0x50);
        local_98 = *(undefined8 *)(lVar13 + 0x40);
        uStack_90 = *(undefined8 *)(lVar13 + 0x48);
        uVar10 = *(undefined8 *)(lVar13 + 0x58);
        puVar14 = local_c8;
        puVar15 = puVar2;
        for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        *(undefined8 *)(lVar17 + 0x48 + lVar12) = uVar10;
        *(undefined8 *)(lVar17 + 0x50 + lVar12) = 0xbff0000000000000;
        *(undefined8 *)(lVar17 + 0x58 + lVar12) = 0xbff0000000000000;
        *(undefined8 *)(lVar17 + 0x60 + lVar12) = 0xbff0000000000000;
        *(undefined4 *)(lVar17 + 0x68 + lVar12) = 0xffffffff;
        *(undefined1 *)(lVar17 + 0xf8 + lVar12) = 0;
        *(undefined8 *)(lVar17 + 0x100 + lVar12) = 0;
        puVar14 = (undefined8 *)(lVar17 + 0x90 + lVar12);
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14 = (undefined8 *)(lVar17 + 0x70 + lVar12);
        *puVar14 = 0;
        puVar14[1] = 0;
        *(undefined8 *)(lVar17 + 0x80 + lVar12) = 0;
        puVar3 = (undefined4 *)(lVar17 + 0xa0 + lVar12);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0x3ff00000;
        puVar14 = (undefined8 *)(lVar17 + 0xb0 + lVar12);
        *puVar14 = 0x3ff0000000000000;
        puVar14[1] = 0x3ff0000000000000;
        *(undefined8 *)(lVar17 + 0xc0 + lVar12) = 0x3ff0000000000000;
        local_c8[2] = *(undefined8 *)(lVar13 + 0x70);
        local_c8[0] = *(undefined8 *)(lVar13 + 0x60);
        local_c8[1] = *(undefined8 *)(lVar13 + 0x68);
        uStack_a0 = *(undefined8 *)(lVar13 + 0x88);
        local_c8[3] = *(undefined8 *)(lVar13 + 0x78);
        uStack_a8 = *(undefined8 *)(lVar13 + 0x80);
        puVar14 = (undefined8 *)(lVar17 + 0xd8 + lVar12);
        *puVar14 = local_c8[2];
        puVar14[1] = local_c8[3];
        puVar14 = (undefined8 *)(lVar17 + 0xe8 + lVar12);
        *puVar14 = uStack_a8;
        puVar14[1] = uStack_a0;
        puVar14 = (undefined8 *)(lVar17 + 200 + lVar12);
        *puVar14 = local_c8[0];
        puVar14[1] = local_c8[1];
        *(undefined1 *)(lVar17 + 0xf8 + lVar12) = 1;
        dVar6 = *(double *)(lVar17 + 0xf0 + lVar12) - *(double *)(lVar17 + 0xd8 + lVar12);
        dVar7 = *(double *)(lVar17 + 0xe8 + lVar12) - *(double *)(lVar17 + 0xd0 + lVar12);
        dVar8 = *(double *)(lVar17 + 0xe0 + lVar12) - *(double *)(lVar17 + 200 + lVar12);
        dVar18 = dVar8;
        if (dVar7 <= dVar8) {
          dVar18 = dVar7;
        }
        if (dVar6 <= dVar18) {
          dVar18 = dVar6;
        }
        *(double *)(lVar17 + 0x58 + lVar12) = dVar18;
        dVar18 = dVar8;
        if (dVar8 <= dVar7) {
          dVar18 = dVar7;
        }
        if (dVar18 <= dVar6) {
          dVar18 = dVar6;
        }
        *(double *)(lVar17 + 0x60 + lVar12) = dVar18;
        *(double *)(lVar17 + 0x50 + lVar12) = dVar8 * dVar7 * dVar6;
        if ((longlong)*(int *)(param_1 + 0x2c0) != 0) {
          lVar17 = (longlong)*(int *)(param_1 + 0x2c0) * 0x18;
          lVar11 = *(longlong *)(param_1 + 0x2b8) + 0x10;
          do {
            if (((*(longlong *)(lVar11 + -0x10) != 0) &&
                (cVar9 = FUN_144729dda(lVar11), cVar9 != '\0')) &&
               (lVar12 = FUN_1498a7a16(*(undefined8 *)(lVar11 + -0x10),*(undefined8 *)(lVar13 + 8)),
               lVar12 != 0)) {
              lVar17 = FUN_14075957a(lVar12);
              if (lVar17 == 0) {
                uVar10 = 0;
              }
              else {
                *(uint *)(puVar2 + 0xd) = (uint)*(byte *)(lVar17 + 0x60);
                uVar10 = *(undefined8 *)(lVar17 + 0x18);
              }
              puVar2[0x20] = uVar10;
              if (*(char *)(lVar12 + 0x842) == '\x01') {
                local_c8[0] = 0;
                FUN_14485c47a(local_c8,lVar12);
                FUN_1498b4246(param_1 + 0x2f8,local_cc,local_c8);
              }
              break;
            }
            lVar11 = lVar11 + 0x18;
            lVar17 = lVar17 + -0x18;
          } while (lVar17 != 0);
        }
      }
      else {
        lVar11 = lVar16 * 0x110;
        *(undefined8 *)(lVar17 + 0x50 + lVar11) = 0x412e848000000000;
        *(undefined8 *)(*plVar1 + 0x58 + lVar11) = 0x4059000000000000;
        *(undefined8 *)(*plVar1 + 0x60 + lVar11) = 0x4059000000000000;
        lVar17 = *plVar1;
        *(undefined8 *)(lVar17 + 200 + lVar11) = 0xc059000000000000;
        *(undefined8 *)(lVar17 + 0xd0 + lVar11) = 0xc059000000000000;
        *(undefined8 *)(lVar17 + 0xd8 + lVar11) = 0xc059000000000000;
        *(undefined8 *)(lVar17 + 0xe0 + lVar11) = 0x4059000000000000;
        *(undefined8 *)(lVar17 + 0xe8 + lVar11) = 0x4059000000000000;
        *(undefined8 *)(lVar17 + 0xf0 + lVar11) = 0x4059000000000000;
        *(undefined1 *)(lVar17 + 0xf8 + lVar11) = 1;
        *(undefined4 *)(*plVar1 + 0x68 + lVar11) = 0;
        lVar17 = *plVar1;
        *(undefined8 *)(lVar17 + 0x80 + lVar11) = 0;
        puVar2 = (undefined8 *)(lVar17 + 0x70 + lVar11);
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar17 = *plVar1;
        *(undefined8 *)(lVar17 + 0xa0 + lVar11) = 0;
        puVar2 = (undefined8 *)(lVar17 + 0x90 + lVar11);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar17 + 0xa8 + lVar11) = 0x3ff0000000000000;
        lVar17 = *plVar1;
        *(undefined8 *)(lVar17 + 0xb0 + lVar11) = 0x3ff0000000000000;
        *(undefined8 *)(lVar17 + 0xb8 + lVar11) = 0x3ff0000000000000;
        *(undefined8 *)(lVar17 + 0xc0 + lVar11) = 0x3ff0000000000000;
        *(undefined8 *)(*plVar1 + 0x100 + lVar11) = 0;
      }
      lVar16 = lVar16 + 1;
      lVar13 = lVar13 + 0x98;
    } while (lVar13 != local_d8);
  }
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498a629c FUN_1498a629c body=160 status=ok
// SIG undefined FUN_1498a629c(void)

void FUN_1498a629c(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8);
  local_30 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *local_30 = &PTR_FUN_14beea470;
  local_30[1] = param_3;
  local_30[2] = FUN_1498a633e;
  local_30[3] = 0;
  (**(code **)(*plVar2 + 8))(plVar2);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a633e FUN_1498a633e body=5206 status=ok
// SIG undefined FUN_1498a633e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498a633e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  longlong *plVar16;
  char cVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  int iVar21;
  double *pdVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *plVar29;
  ulonglong uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  float fVar59;
  double dVar60;
  double dVar61;
  undefined1 auStack_488 [36];
  int local_464;
  longlong local_460;
  longlong *local_458;
  longlong local_450;
  longlong *local_448;
  longlong *local_440;
  float local_434;
  longlong *local_430;
  longlong *local_428;
  longlong local_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  longlong lStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  undefined8 uStack_390;
  double local_388;
  undefined8 uStack_380;
  longlong *local_378;
  longlong *plStack_370;
  double local_368;
  undefined8 uStack_360;
  double local_358;
  undefined8 uStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  longlong lStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  undefined8 local_2c8;
  longlong *plStack_2c0;
  undefined1 local_2b8 [16];
  longlong local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  longlong *local_1f8;
  longlong *plStack_1f0;
  double local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  longlong *local_178;
  undefined8 uStack_170;
  longlong *local_168;
  uint uStack_160;
  int iStack_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_488;
  FUN_144a61b4f();
  local_440 = param_1 + 0x5d;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
    FUN_1498b4f82(local_440);
  }
  fVar59 = *(float *)(param_1 + 0x2d);
  plVar2 = param_1 + 0x5f;
  local_2a8 = 0;
  uStack_2a0 = 0;
  plVar3 = param_1 + 0x61;
  local_178 = (longlong *)&DAT_100000000;
  local_168 = (longlong *)&DAT_ffffffff;
  uStack_160 = 0;
  uStack_170 = plVar3;
  if ((int)param_1[100] == 0) {
    iVar21 = 0;
  }
  else {
    FUN_1449c0562(&local_178);
    iVar21 = (int)param_1[100];
  }
  fVar59 = fVar59 * fVar59;
  auVar52._8_4_ = uStack_160;
  auVar52._0_8_ = local_168;
  auVar52._12_4_ = iStack_15c;
  local_2c8 = local_178;
  plStack_2c0 = uStack_170;
  local_2b8._4_4_ = (undefined4)((ulonglong)local_168 >> 0x20);
  iVar19 = local_2b8._4_4_;
  local_464 = iVar21;
  local_2d0 = plVar2;
  if ((local_2b8._4_4_ != iVar21) || (local_2b8 = auVar52, uStack_170 != plVar3)) {
    do {
      local_2b8 = auVar52;
      puVar24 = (undefined8 *)((longlong)iVar19 * 0x10 + *local_2d0);
      cVar17 = FUN_144729dda(puVar24);
      uVar26 = uStack_2a0;
      if (cVar17 == '\0') {
        lVar27 = (longlong)(int)uStack_2a0;
        uVar18 = (int)uStack_2a0 + 1;
        uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar18);
        if (uStack_2a0._4_4_ < uVar18) {
          FUN_1498b4fb2(&local_2a8,uVar26 & 0xffffffff);
        }
        *(undefined8 *)(local_2a8 + lVar27 * 8) = *puVar24;
      }
      else {
        FUN_1400841de(puVar24,&local_178);
        plVar16 = local_178;
        uVar26 = uStack_2a0;
        if (local_178 != (longlong *)0x0) {
          if ((*(byte *)((longlong)local_178 + 0x9c) & 8) == 0) {
            lVar27 = (longlong)(int)uStack_2a0;
            uVar18 = (int)uStack_2a0 + 1;
            uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar18);
            if (uStack_2a0._4_4_ < uVar18) {
              FUN_1498b4fb2(&local_2a8,uVar26 & 0xffffffff);
            }
            *(undefined8 *)(local_2a8 + lVar27 * 8) = *puVar24;
          }
          else if (*(char *)((longlong)local_178 + 0x842) == '\x01') {
            lVar27 = FUN_14075957a(local_178);
            if ((lVar27 == 0) || (*(char *)((longlong)param_1 + 0x1bc) != '\x01')) {
LAB_1498a7316:
              local_458 = (longlong *)FUN_1474a5e18(plVar16);
              dVar54 = (double)plVar16[0x48];
              dVar48 = *(double *)*(undefined1 (*) [16])(plVar16 + 0x49);
              dVar12 = (double)plVar16[0x4a];
              auVar52 = *(undefined1 (*) [16])(plVar16 + 0x49);
              dVar13 = (double)plVar16[0x4b];
              local_3e8 = (double)plVar16[0x4c];
              dStack_3e0 = (double)plVar16[0x4d];
              local_3f8 = (double)plVar16[0x4e];
              lStack_3f0 = plVar16[0x4f];
              dVar31 = (double)plVar16[0x50];
              dVar37 = (double)plVar16[0x51];
              dVar43 = (double)plVar16[0x52];
              lVar27 = plVar16[0x53];
              lVar23 = FUN_144b1df94(plVar16);
              if ((lVar23 != 0) && (lVar28 = plVar16[0xcc], lVar28 != 0)) {
                uVar10 = *(undefined8 *)(lVar28 + 0x218);
                local_428 = *(longlong **)(lVar28 + 0x220);
                if (local_428 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_428 + 1) = (int)local_428[1] + 1;
                  UNLOCK();
                }
                uVar15 = DAT_14c9974a8;
                local_460 = lVar23;
                FUN_1446f470e(&local_2d8,L"MassToLocal",1);
                cVar17 = FUN_140498cd4(uVar10,local_2d8,uVar15);
                uVar15 = DAT_14c9974a8;
                iVar21 = local_464;
                if (cVar17 != '\0') {
                  FUN_1446f470e(&local_2e0,L"MassToLocal",1);
                  local_420 = FUN_1401466c8(uVar10,local_2e0,uVar15);
                  uVar10 = DAT_14c9974a8;
                  FUN_1446ddc76(&local_2e8,"LinearVelocity",1);
                  plVar20 = (longlong *)FUN_1409bc3ac(local_460,local_2e8,uVar10);
                  uVar10 = DAT_14c9974a8;
                  FUN_1446ddc76(&local_2f0,"AngularVelocity",1);
                  iVar21 = local_464;
                  local_430 = (longlong *)FUN_1409bc3ac(local_460,local_2f0,uVar10);
                  if (local_430 != (longlong *)0x0 && plVar20 != (longlong *)0x0) {
                    local_448 = plVar20;
                    (**(code **)(*plVar20 + 0x60))(plVar20);
                    (**(code **)(*local_430 + 0x60))();
                    iVar19 = *(int *)(local_460 + 0x148);
                    if (0 < iVar19) {
                      lVar28 = local_460 + 0x130;
                      dVar38 = dVar48 + dVar48;
                      dVar39 = dVar12 + dVar12;
                      dVar50 = dVar54 * (dVar54 + dVar54);
                      local_378 = (longlong *)((1.0 - (dVar12 * dVar39 + dVar48 * dVar38)) * dVar31)
                      ;
                      dStack_330 = (1.0 - (dVar12 * dVar39 + dVar50)) * dVar37;
                      local_358 = (1.0 - (dVar50 + dVar48 * dVar38)) * dVar43;
                      dVar50 = (dVar54 + dVar54) * dVar13;
                      plStack_370 = (longlong *)((dVar38 * dVar54 + dVar39 * dVar13) * dVar31);
                      local_388 = (dVar39 * dVar48 + dVar50) * dVar37;
                      local_338 = (dVar38 * dVar54 - dVar39 * dVar13) * dVar37;
                      dVar50 = (dVar39 * dVar48 - dVar50) * dVar43;
                      local_368 = (dVar54 * dVar39 - dVar38 * dVar13) * dVar31;
                      uStack_350 = 0;
                      uStack_360 = 0;
                      uStack_380 = 0;
                      local_348._8_4_ = SUB84(dVar50,0);
                      local_348._0_8_ = (dVar38 * dVar13 + dVar54 * dVar39) * dVar43;
                      local_348._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
                      local_398 = local_3f8;
                      uStack_390 = 0x3ff0000000000000;
                      lVar25 = 0;
                      uVar26 = 0;
                      lVar23 = local_460;
                      plVar20 = local_448;
                      local_450 = lVar28;
                      local_434 = fVar59;
                      local_3d8 = auVar52;
                      local_3c8 = dVar54;
                      dStack_3c0 = dVar13;
                      local_3b8 = dVar13;
                      dStack_3b0 = dVar13;
                      local_3a8 = dVar54;
                      dStack_3a0 = dVar48;
                      local_328 = dVar43;
                      lStack_320 = lVar27;
                      local_318 = dVar31;
                      dStack_310 = dVar37;
                      local_308 = dVar12;
                      dStack_300 = dVar13;
                      do {
                        auVar52 = _DAT_149934d80;
                        lVar27 = *(longlong *)(lVar23 + 0x140);
                        if (*(longlong *)(lVar23 + 0x140) == 0) {
                          lVar27 = lVar28;
                        }
                        uVar30 = uVar26 >> 5 & 0x7ffffff;
                        if (((*(uint *)(lVar27 + uVar30 * 4) >> ((uint)uVar26 & 0x1f) & 1) != 0) &&
                           (lVar27 = plVar20[2], fVar4 = *(float *)(lVar27 + 4 + lVar25),
                           fVar5 = *(float *)(lVar27 + 8 + lVar25),
                           fVar59 <= fVar5 * fVar5 +
                                     *(float *)(lVar27 + lVar25) * *(float *)(lVar27 + lVar25) +
                                     fVar4 * fVar4)) {
                          lVar27 = *local_458;
                          uVar10 = *(undefined8 *)(lVar27 + 0x20 + lVar25 * 4);
                          auVar51._0_8_ = (double)(float)uVar10;
                          auVar51._8_8_ = (double)(float)((ulonglong)uVar10 >> 0x20);
                          uVar10 = *(undefined8 *)(lVar27 + 0x28 + lVar25 * 4);
                          auVar55._0_8_ = (double)(float)uVar10;
                          auVar55._8_8_ = (double)(float)((ulonglong)uVar10 >> 0x20);
                          uVar10 = *(undefined8 *)(lVar27 + 0x10 + lVar25 * 4);
                          local_418 = (double)(float)uVar10;
                          dStack_410 = (double)(float)((ulonglong)uVar10 >> 0x20);
                          uVar10 = *(undefined8 *)(lVar27 + 0x18 + lVar25 * 4);
                          local_408 = (double)(float)uVar10;
                          dStack_400 = (double)(float)((ulonglong)uVar10 >> 0x20);
                          uVar10 = *(undefined8 *)(lVar27 + lVar25 * 4);
                          dVar12 = (double)(float)uVar10;
                          dVar13 = (double)(float)((ulonglong)uVar10 >> 0x20);
                          lVar23 = *(longlong *)(local_420 + 0x10);
                          uVar10 = *(undefined8 *)(lVar27 + 8 + lVar25 * 4);
                          dVar54 = (double)(float)uVar10;
                          dVar48 = (double)(float)((ulonglong)uVar10 >> 0x20);
                          auVar46 = *(undefined1 (*) [16])(lVar23 + 0x40 + lVar25 * 8);
                          auVar9 = *(undefined1 (*) [16])(lVar23 + 0x50 + lVar25 * 8);
                          auVar32 = minpd(auVar46,auVar51);
                          auVar40 = minpd(auVar9,auVar55);
                          auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
                          auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
                          iVar21 = movmskpd((int)lVar27,auVar33);
                          auVar32._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
                          auVar32._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
                          uVar18 = movmskpd((int)uVar30,auVar32);
                          if ((uVar18 & 0x3fffffff) == 0 && iVar21 == 0) {
                            pdVar22 = (double *)(lVar23 + lVar25 * 8);
                            dVar31 = *pdVar22;
                            dVar37 = pdVar22[1];
                            pdVar22 = (double *)(lVar23 + 0x10 + lVar25 * 8);
                            dVar43 = *pdVar22;
                            dVar50 = pdVar22[1];
                            dVar57 = dVar37 * dVar54 * -1.0 +
                                     dVar43 * dVar13 + dVar12 * dVar50 * 1.0 + dVar48 * dVar31;
                            dVar58 = dVar31 * dVar54 * 1.0 +
                                     dVar50 * dVar13 + dVar12 * dVar43 * -1.0 + dVar48 * dVar37;
                            auVar40._0_8_ =
                                 dVar50 * dVar54 * 1.0 +
                                 ((dVar12 * dVar37 * 1.0 + dVar48 * dVar43) - dVar13 * dVar31);
                            auVar40._8_8_ =
                                 dVar43 * dVar54 * -1.0 +
                                 ((dVar12 * dVar31 * -1.0 + dVar48 * dVar50) - dVar13 * dVar37);
                            pdVar22 = (double *)(lVar23 + 0x20 + lVar25 * 8);
                            dVar31 = *pdVar22 * auVar51._0_8_;
                            dVar37 = pdVar22[1] * auVar51._8_8_;
                            dVar50 = *(double *)(lVar23 + 0x30 + lVar25 * 8) * auVar55._0_8_;
                            dVar38 = dVar37 * dVar12 - dVar13 * dVar31;
                            dVar39 = dVar50 * dVar13 - dVar54 * dVar37;
                            dVar43 = dVar31 * dVar54 - dVar12 * dVar50;
                            dVar39 = dVar39 + dVar39;
                            dVar43 = dVar43 + dVar43;
                            dVar38 = dVar38 + dVar38;
                            dVar31 = (dVar38 * dVar13 - dVar54 * dVar43) + dVar48 * dVar39 + dVar31
                                     + local_418;
                            dVar37 = (dVar39 * dVar54 - dVar38 * dVar12) + dVar48 * dVar43 + dVar37
                                     + dStack_410;
                            dVar54 = (dVar43 * dVar12 - dVar13 * dVar39) + dVar48 * dVar38 + dVar50
                                     + local_408;
                          }
                          else {
                            dVar31 = dVar13 + dVar13;
                            dVar43 = dVar54 + dVar54;
                            dVar38 = (dVar12 + dVar12) * dVar12;
                            local_1a8 = (1.0 - (dVar38 + dVar31 * dVar13)) * auVar55._0_8_;
                            dVar50 = (dVar12 + dVar12) * dVar48;
                            local_1d8 = (dVar31 * dVar12 - dVar43 * dVar48) * auVar51._8_8_;
                            dVar37 = (dVar43 * dVar13 - dVar50) * auVar55._0_8_;
                            local_1f8 = (longlong *)
                                        (((double)DAT_149934d80 -
                                         (dVar54 * dVar43 + dVar31 * dVar13)) * auVar51._0_8_);
                            dStack_1d0 = (DAT_149934d80._8_8_ - (dVar54 * dVar43 + dVar38)) *
                                         auVar51._8_8_;
                            plStack_1f0 = (longlong *)
                                          ((dVar31 * dVar12 + dVar43 * dVar48) * auVar51._0_8_);
                            local_1c8 = (dVar43 * dVar13 + dVar50) * auVar51._8_8_;
                            local_1e8 = (dVar12 * dVar43 - dVar31 * dVar48) * auVar51._0_8_;
                            uStack_1e0 = 0;
                            uStack_1dc = 0;
                            uStack_1c0 = 0;
                            local_1b8._8_4_ = SUB84(dVar37,0);
                            local_1b8._0_8_ = (dVar12 * dVar43 + dVar31 * dVar48) * auVar55._0_8_;
                            local_1b8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
                            uStack_1a0 = 0;
                            uStack_180 = 0x3ff0000000000000;
                            pdVar22 = (double *)(lVar23 + lVar25 * 8);
                            dVar13 = *pdVar22;
                            dVar31 = pdVar22[1];
                            dVar48 = *(double *)(lVar23 + 0x10 + lVar25 * 8);
                            pdVar22 = (double *)(lVar23 + 0x40 + lVar25 * 8);
                            local_268 = *pdVar22;
                            dVar37 = pdVar22[1];
                            dStack_230 = *(double *)(lVar23 + 0x50 + lVar25 * 8);
                            dVar39 = dVar31 + dVar31;
                            dVar43 = dVar48 + dVar48;
                            dVar54 = dVar13 * (dVar13 + dVar13);
                            local_278 = ((double)DAT_149934d80 - (dVar48 * dVar43 + dVar31 * dVar39)
                                        ) * local_268;
                            dVar48 = (DAT_149934d80._8_8_ - (dVar48 * dVar43 + dVar54)) * dVar37;
                            local_228 = (1.0 - (dVar54 + dVar31 * dVar39)) * dStack_230;
                            dVar12 = *(double *)(lVar23 + lVar25 * 8) * dVar43;
                            pdVar22 = (double *)(lVar23 + 0x18 + lVar25 * 8);
                            dVar54 = *pdVar22;
                            dVar50 = dVar43 * dVar54;
                            dVar38 = (dVar13 + dVar13) * *pdVar22;
                            dVar54 = dVar39 * dVar54;
                            dStack_270 = (dVar39 * dVar13 + dVar50) * local_268;
                            local_238 = (dVar54 + dVar12) * dStack_230;
                            local_268 = (dVar12 - dVar54) * local_268;
                            dStack_230 = (dVar43 * dVar31 - dVar38) * dStack_230;
                            uStack_260 = 0;
                            local_258._8_4_ = SUB84(dVar48,0);
                            local_258._0_8_ = (dVar39 * dVar13 - dVar50) * dVar37;
                            local_258._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
                            local_248._8_8_ = 0;
                            local_248._0_8_ = (dVar43 * dVar31 + dVar38) * dVar37;
                            uStack_220 = 0;
                            pdVar22 = (double *)(lVar23 + 0x20 + lVar25 * 8);
                            local_218 = *pdVar22;
                            dStack_210 = pdVar22[1];
                            local_208._8_8_ = 0x3ff0000000000000;
                            local_208._0_8_ = *(undefined8 *)(lVar23 + 0x30 + lVar25 * 8);
                            local_198 = local_418;
                            dStack_190 = dStack_410;
                            local_188 = local_408;
                            FUN_1447fea8d(&local_178);
                            FUN_144a1c686(&local_178,0x3e45798ee0000000);
                            auVar34._8_8_ = -(ulonglong)(0.0 <= auVar46._8_8_ * auVar51._8_8_);
                            auVar34._0_8_ = -(ulonglong)(0.0 <= auVar46._0_8_ * auVar51._0_8_);
                            auVar32 = blendvpd(_DAT_149936790,auVar52,auVar34);
                            uVar30 = -(ulonglong)(0.0 <= auVar9._0_8_ * auVar55._0_8_);
                            dVar54 = (double)(~uVar30 & 0xbff0000000000000 |
                                             uVar30 & 0x3ff0000000000000);
                            dVar48 = auVar32._0_8_;
                            local_168 = (longlong *)((double)local_168 * dVar48);
                            uStack_170 = (longlong *)((double)uStack_170 * dVar48);
                            local_178 = (longlong *)((double)local_178 * dVar48);
                            dVar48 = auVar32._8_8_;
                            local_148 = local_148 * dVar48;
                            local_150 = local_150 * dVar48;
                            local_158 = dVar48 * local_158;
                            local_128 = local_128 * dVar54;
                            local_130 = local_130 * dVar54;
                            local_138 = dVar54 * local_138;
                            pdVar22 = &local_298;
                            lVar23 = FUN_14481fd10(pdVar22,&local_178);
                            iVar21 = (int)pdVar22;
                            dVar54 = local_288 * local_288 + local_298 * local_298;
                            dVar48 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                            auVar44._0_8_ = dVar54 + dVar48;
                            auVar44._8_8_ = dVar54 + dVar48;
                            auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
                            auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
                            auVar32 = sqrtpd(auVar44,auVar44);
                            auVar52 = divpd(auVar52,auVar32);
                            auVar53._0_8_ = auVar52._0_8_ * local_288;
                            auVar53._8_8_ = auVar52._8_8_ * dStack_280;
                            dVar57 = (double)((ulonglong)(local_298 * auVar52._0_8_) &
                                             -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
                            dVar58 = (double)((ulonglong)(dStack_290 * auVar52._8_8_) &
                                             -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
                            auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar53,auVar35);
                            dVar54 = local_108;
                            dVar31 = local_118;
                            dVar37 = dStack_110;
                          }
                          dVar43 = local_328;
                          dVar13 = auVar46._8_8_ * auVar51._8_8_;
                          dVar12 = auVar46._0_8_ * auVar51._0_8_;
                          dVar48 = auVar9._0_8_ * auVar55._0_8_;
                          auVar41._8_8_ = dVar13;
                          auVar41._0_8_ = dVar12;
                          auVar14._8_8_ = dStack_310;
                          auVar14._0_8_ = local_318;
                          auVar52 = minpd(auVar41,auVar14);
                          auVar45._8_8_ = auVar9._8_8_ * auVar55._8_8_;
                          auVar45._0_8_ = dVar48;
                          auVar9._8_8_ = lStack_320;
                          auVar9._0_8_ = local_328;
                          auVar46 = minpd(auVar45,auVar9);
                          auVar42._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
                          auVar42._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
                          iVar19 = movmskpd((int)lVar23,auVar42);
                          auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
                          auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
                          uVar18 = movmskpd(iVar21,auVar47);
                          if ((uVar18 & 0x3fffffff) == 0 && iVar19 == 0) {
                            dVar31 = dVar31 * local_318;
                            dVar37 = dVar37 * dStack_310;
                            dVar54 = dVar54 * local_328;
                            dVar48 = dVar37 * local_3a8 - (double)local_3d8._0_8_ * dVar31;
                            dVar12 = dVar54 * dStack_3a0 - (double)local_3d8._8_8_ * dVar37;
                            dVar43 = dVar31 * local_308 - local_3c8 * dVar54;
                            dVar12 = dVar12 + dVar12;
                            dVar43 = dVar43 + dVar43;
                            dVar48 = dVar48 + dVar48;
                            dVar13 = (dVar48 * dStack_3a0 - (double)local_3d8._8_8_ * dVar43) +
                                     local_3b8 * dVar12 + dVar31 + local_3e8;
                            dVar31 = (dVar12 * local_308 - dVar48 * local_3c8) +
                                     dStack_3b0 * dVar43 + dVar37 + dStack_3e0;
                            dVar54 = (dVar43 * local_3a8 - (double)local_3d8._0_8_ * dVar12) +
                                     local_3b8 * dVar48 + dVar54 + local_3f8;
                          }
                          else {
                            dVar56 = dVar58 + dVar58;
                            dVar60 = auVar40._0_8_;
                            dVar61 = auVar40._8_8_;
                            dVar50 = dVar60 + dVar60;
                            dVar49 = dVar57 * (dVar57 + dVar57);
                            dVar39 = (dVar57 + dVar57) * dVar61;
                            dStack_230 = (dVar50 * dVar58 - dVar39) * dVar48;
                            dVar38 = local_318 * dVar12;
                            dVar11 = dStack_310 * dVar13;
                            local_278 = (1.0 - (dVar60 * dVar50 + dVar58 * dVar56)) * dVar12;
                            dStack_270 = (dVar56 * dVar57 + dVar50 * dVar61) * dVar12;
                            local_238 = (dVar57 * dVar50 + dVar56 * dVar61) * dVar48;
                            local_268 = (dVar57 * dVar50 - dVar56 * dVar61) * dVar12;
                            uStack_260 = 0;
                            local_258._8_8_ = (1.0 - (dVar60 * dVar50 + dVar49)) * dVar13;
                            local_258._0_8_ = (dVar56 * dVar57 - dVar50 * dVar61) * dVar13;
                            local_248._8_8_ = 0;
                            local_248._0_8_ = (dVar50 * dVar58 + dVar39) * dVar13;
                            local_228 = (1.0 - (dVar49 + dVar58 * dVar56)) * dVar48;
                            uStack_220 = 0;
                            local_208._8_4_ = 0;
                            local_208._0_8_ = dVar54;
                            local_208._12_4_ = 0x3ff00000;
                            local_1f8 = local_378;
                            plStack_1f0 = plStack_370;
                            local_1e8 = local_368;
                            uStack_1e0 = (undefined4)uStack_360;
                            uStack_1dc = (undefined4)((ulonglong)uStack_360 >> 0x20);
                            local_1d8 = local_338;
                            dStack_1d0 = dStack_330;
                            local_1c8 = local_388;
                            uStack_1c0 = uStack_380;
                            local_1b8 = local_348;
                            local_1a8 = local_358;
                            uStack_1a0 = uStack_350;
                            local_198 = local_3e8;
                            dStack_190 = dStack_3e0;
                            local_188 = local_398;
                            uStack_180 = uStack_390;
                            local_218 = dVar31;
                            dStack_210 = dVar37;
                            FUN_1447fea8d(&local_178);
                            FUN_144a1c686(&local_178,0x3e45798ee0000000);
                            auVar36._8_8_ = -(ulonglong)(0.0 <= dVar11);
                            auVar36._0_8_ = -(ulonglong)(0.0 <= dVar38);
                            auVar52 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar36);
                            uVar30 = -(ulonglong)(0.0 <= dVar48 * dVar43);
                            dVar54 = (double)(~uVar30 & 0xbff0000000000000 |
                                             uVar30 & 0x3ff0000000000000);
                            dVar48 = auVar52._0_8_;
                            local_168 = (longlong *)((double)local_168 * dVar48);
                            uStack_170 = (longlong *)((double)uStack_170 * dVar48);
                            local_178 = (longlong *)((double)local_178 * dVar48);
                            dVar48 = auVar52._8_8_;
                            local_148 = local_148 * dVar48;
                            local_150 = local_150 * dVar48;
                            local_158 = dVar48 * local_158;
                            local_128 = local_128 * dVar54;
                            local_130 = local_130 * dVar54;
                            local_138 = dVar54 * local_138;
                            FUN_14481fd10(&local_298,&local_178);
                            dVar13 = local_118;
                            dVar31 = dStack_110;
                            dVar54 = local_108;
                          }
                          iVar21 = local_464;
                          lVar27 = local_448[2];
                          fVar59 = *(float *)(lVar27 + 8 + lVar25);
                          fVar4 = *(float *)(lVar27 + 4 + lVar25);
                          fVar5 = *(float *)(lVar27 + lVar25);
                          lVar27 = local_430[2];
                          fVar6 = *(float *)(lVar27 + 8 + lVar25);
                          fVar7 = *(float *)(lVar27 + 4 + lVar25);
                          fVar8 = *(float *)(lVar27 + lVar25);
                          iVar19 = (int)param_1[0x5e];
                          *(uint *)(param_1 + 0x5e) = iVar19 + 1U;
                          if (*(uint *)((longlong)param_1 + 0x2f4) < iVar19 + 1U) {
                            FUN_1498b5038(local_440,iVar19);
                          }
                          lVar27 = *local_440;
                          lVar23 = (longlong)iVar19 * 0x70;
                          *(double *)(lVar27 + lVar23) = dVar13;
                          *(double *)(lVar27 + 8 + lVar23) = dVar31;
                          *(double *)(lVar27 + 0x10 + lVar23) = dVar54;
                          *(double *)(lVar27 + 0x18 + lVar23) = (double)fVar5;
                          *(double *)(lVar27 + 0x20 + lVar23) = (double)fVar4;
                          *(double *)(lVar27 + 0x28 + lVar23) = (double)fVar59;
                          *(double *)(lVar27 + 0x30 + lVar23) = (double)fVar8;
                          *(double *)(lVar27 + 0x38 + lVar23) = (double)fVar7;
                          *(double *)(lVar27 + 0x40 + lVar23) = (double)fVar6;
                          *(undefined8 *)(lVar27 + 0x48 + lVar23) = 0x3ff0000000000000;
                          *(undefined8 *)(lVar27 + 0x50 + lVar23) = 0x412e848000000000;
                          *(undefined8 *)(lVar27 + 0x58 + lVar23) = 0x4059000000000000;
                          *(undefined8 *)(lVar27 + 0x60 + lVar23) = 0x4059000000000000;
                          *(undefined4 *)(lVar27 + 0x68 + lVar23) = 0;
                          iVar19 = *(int *)(local_460 + 0x148);
                          lVar23 = local_460;
                          plVar20 = local_448;
                          lVar28 = local_450;
                          fVar59 = local_434;
                        }
                        uVar26 = uVar26 + 1;
                        lVar25 = lVar25 + 0xc;
                      } while ((longlong)uVar26 < (longlong)iVar19);
                    }
                  }
                }
                plVar20 = local_428;
                if (local_428 != (longlong *)0x0) {
                  LOCK();
                  plVar29 = local_428 + 1;
                  *(int *)plVar29 = (int)*plVar29 + -1;
                  UNLOCK();
                  if ((int)*plVar29 == 0) {
                    (**(code **)*local_428)(local_428);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar20 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar20 + 0x10))(plVar20);
                    }
                  }
                }
              }
            }
            else {
              lVar27 = *(longlong *)(lVar27 + 0x18);
              if (((uint)((ulonglong)lVar27 >> 0x10) & 0xffff) < DAT_14c87eb08 + 1U) {
                plVar20 = param_1 + 0x3a;
                local_1f8 = (longlong *)&DAT_100000000;
                local_1e8 = 2.12199579047121e-314;
                uStack_1e0 = 0;
                plStack_1f0 = plVar20;
                if ((int)param_1[0x3d] == 0) {
                  iVar19 = 0;
                }
                else {
                  FUN_1449c0562(&local_1f8);
                  iVar19 = (int)param_1[0x3d];
                }
                plVar29 = param_1 + 0x38;
                auVar46._8_4_ = uStack_1e0;
                auVar46._0_8_ = local_1e8;
                auVar46._12_4_ = uStack_1dc;
                uStack_160 = SUB84(local_1e8,0);
                iStack_15c = (int)((ulonglong)local_1e8 >> 0x20);
                local_158 = auVar46._8_8_;
                uStack_170 = local_1f8;
                local_168 = plStack_1f0;
                local_458 = param_1;
                local_178 = plVar29;
                if ((iStack_15c != iVar19) || (iVar21 = local_464, plStack_1f0 != plVar20)) {
                  do {
                    lVar23 = *(longlong *)(*local_178 + (longlong)iStack_15c * 0x10);
                    if ((lVar23 != 0) &&
                       (param_1 = local_458, iVar21 = local_464,
                       *(longlong *)(lVar23 + 0x18) == lVar27)) goto LAB_1498a7316;
                    uStack_160 = uStack_160 & ~uStack_170._4_4_;
                    FUN_1449c0562(&uStack_170);
                    param_1 = local_458;
                    iVar21 = local_464;
                  } while (local_178 != plVar29 || (local_168 != plVar20 || iStack_15c != iVar19));
                }
              }
            }
          }
          FUN_140113f3a(plVar16);
        }
      }
      local_2b8._0_4_ = local_2b8._0_4_ & ~local_2c8._4_4_;
      FUN_1449c0562(&local_2c8);
      iVar19 = local_2b8._4_4_;
      auVar52 = local_2b8;
    } while (local_2d0 != plVar2 || (plStack_2c0 != plVar3 || local_2b8._4_4_ != iVar21));
  }
  lVar27 = local_2a8;
  lVar23 = (longlong)(int)uStack_2a0;
  if (lVar23 != 0) {
    lVar28 = 0;
    do {
      FUN_1498a93b2(plVar2,*(undefined8 *)(lVar27 + lVar28));
      lVar28 = lVar28 + 8;
    } while (lVar23 * 8 != lVar28);
  }
  if (local_2a8 != 0) {
    FUN_1400020a8(local_2a8);
  }
  if ((local_f0 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498a7796 FUN_1498a7796 body=639 status=ok
// SIG undefined FUN_1498a7796(void)

void FUN_1498a7796(longlong *param_1)

{
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1498a7a16 FUN_1498a7a16 body=319 status=ok
// SIG undefined FUN_1498a7a16(void)

ulonglong FUN_1498a7a16(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  PSRWLOCK SRWLock;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  SRWLock = (PSRWLOCK)0x0;
  if (DAT_14c992a90 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 0x280);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockShared(SRWLock);
  }
  if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x2e0;
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x2e8);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x2f0) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      uVar7 = 0;
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar6 * 0x18);
        if (*puVar1 == param_2) {
          puVar8 = puVar1 + 1;
          if ((puVar8 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) || (*puVar8 == 0))
          goto LAB_1498a7a55;
          lVar5 = FUN_140f5398e();
          uVar2 = *puVar8;
          if (uVar2 == 0) goto LAB_1498a7a55;
          uVar7 = 0;
          if ((lVar5 != 0) && (lVar3 = *(longlong *)(uVar2 + 0x10), lVar3 != 0)) {
            if (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38)) goto LAB_1498a7a55;
            uVar7 = 0;
            if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                lVar5 + 0x30) {
              uVar7 = uVar2;
            }
          }
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
      goto LAB_1498a7a57;
    }
  }
LAB_1498a7a55:
  uVar7 = 0;
LAB_1498a7a57:
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return uVar7;
}



// FUNCTION 1498a7b56 FUN_1498a7b56 body=71 status=ok
// SIG undefined FUN_1498a7b56(void)

void FUN_1498a7b56(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1498b36f6();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1498b378a();
      return;
    }
  }
  return;
}



// FUNCTION 1498a7b9e FUN_1498a7b9e body=109 status=ok
// SIG undefined FUN_1498a7b9e(void)

void FUN_1498a7b9e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1498b36f6(param_1,iVar1);
    }
    FUN_1498b3836((longlong)iVar1 * 0xe8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1498b378a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1498a7c5c FUN_1498a7c5c body=46 status=ok
// SIG undefined FUN_1498a7c5c(void)

undefined4 FUN_1498a7c5c(void)

{
  uint uVar1;
  
  uVar1 = rand();
  return CONCAT31((int3)((uVar1 & 0x7fff) >> 8),(float)(uVar1 & 0x7fff) / 32767.0 < 0.5);
}



// FUNCTION 1498a7c8a FUN_1498a7c8a body=477 status=ok
// SIG undefined FUN_1498a7c8a(void)

void FUN_1498a7c8a(longlong *param_1,double *param_2,double *param_3,int param_4,int param_5,
                  int param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  uint local_b0;
  int local_ac;
  uint *local_a8;
  int *local_a0;
  undefined1 local_94 [4];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = *param_3;
  local_ac = 0;
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    do {
      lVar7 = *param_1;
      lVar9 = (longlong)local_ac * 0xe8;
      dVar4 = *(double *)(lVar7 + lVar9);
      if ((*param_2 <= dVar4) && (dVar4 <= param_2[3])) {
        dVar5 = *(double *)(lVar7 + 8 + lVar9);
        if ((param_2[1] <= dVar5) && (dVar5 <= param_2[4])) {
          dVar6 = *(double *)(lVar7 + 0x10 + lVar9);
          if (((param_2[2] <= dVar6) && (dVar6 <= param_2[5])) &&
             (local_b0 = (int)(longlong)((dVar6 - param_2[2]) * (1.0 / dVar1)) * param_5 * param_4 +
                         (int)(longlong)((dVar5 - param_2[1]) * (1.0 / dVar2)) * param_4 +
                         (int)(longlong)((dVar4 - *param_2) * (1.0 / dVar3)),
             local_b0 < (uint)(param_6 * param_5 * param_4))) {
            local_a8 = &local_b0;
            local_a0 = &local_ac;
            FUN_1498b3f12(param_7,local_94,&local_a8);
            iVar8 = (int)param_1[1];
          }
        }
      }
      local_ac = local_ac + 1;
    } while (local_ac < iVar8);
  }
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498a7e68 FUN_1498a7e68 body=672 status=ok
// SIG undefined FUN_1498a7e68(void)

void FUN_1498a7e68(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14480809c(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_146b7f620(&local_98,uVar4);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar2)) {
      local_50 = iVar2;
      FUN_1449809d4();
    }
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar5 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        uVar4 = *(uint *)(lVar1 + lVar5 * 0x10);
        puVar3 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar3 = local_60;
        }
        for (iVar2 = *(int *)(puVar3 + (ulonglong)(local_50 - 1U & uVar4) * 4); iVar2 != -1;
            iVar2 = *(int *)(local_98 + (longlong)iVar2 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar2 * 0xc) == uVar4) goto LAB_1498a7ff1;
        }
      }
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447808da(param_2,iVar2);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar1 + lVar5 * 0x10);
      FUN_144980568(&local_98,&local_b8,(longlong)iStack_c4 * 0x10 + *local_e0,0);
LAB_1498a7ff1:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a810a FUN_1498a810a body=186 status=ok
// SIG undefined FUN_1498a810a(void)

void FUN_1498a810a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if ((int)param_1[9] != 0) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 = iVar4, iVar3 != -1) {
      lVar5 = *param_1;
      iVar4 = *(int *)(lVar5 + 8 + (longlong)iVar3 * 0x10);
      if (*(uint *)(lVar5 + (longlong)iVar3 * 0x10) == param_2) {
        do {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_3,iVar1);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) =
               *(undefined4 *)((longlong)iVar3 * 0x10 + lVar5 + 4);
          do {
            iVar3 = iVar4;
            if (iVar3 == -1) {
              return;
            }
            lVar5 = *param_1;
            iVar4 = *(int *)(lVar5 + 8 + (longlong)iVar3 * 0x10);
          } while (*(uint *)(lVar5 + (longlong)iVar3 * 0x10) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1498a81c4 FUN_1498a81c4 body=71 status=ok
// SIG undefined FUN_1498a81c4(void)

void FUN_1498a81c4(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1498b41b2();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1498b47e6();
      return;
    }
  }
  return;
}



// FUNCTION 1498a820c FUN_1498a820c body=109 status=ok
// SIG undefined FUN_1498a820c(void)

void FUN_1498a820c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1498b41b2(param_1,iVar1);
    }
    FUN_1498b4892((longlong)iVar1 * 0x110 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1498b47e6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1498a8296 FUN_1498a8296 body=46 status=ok
// SIG undefined FUN_1498a8296(void)

undefined4 FUN_1498a8296(void)

{
  uint uVar1;
  
  uVar1 = rand();
  return CONCAT31((int3)((uVar1 & 0x7fff) >> 8),(float)(uVar1 & 0x7fff) / 32767.0 < 0.5);
}



// FUNCTION 1498a82c4 FUN_1498a82c4 body=477 status=ok
// SIG undefined FUN_1498a82c4(void)

void FUN_1498a82c4(longlong *param_1,double *param_2,double *param_3,int param_4,int param_5,
                  int param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  uint local_b0;
  int local_ac;
  uint *local_a8;
  int *local_a0;
  undefined1 local_94 [4];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = *param_3;
  local_ac = 0;
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    do {
      lVar7 = *param_1;
      lVar9 = (longlong)local_ac * 0x110;
      dVar4 = *(double *)(lVar7 + lVar9);
      if ((*param_2 <= dVar4) && (dVar4 <= param_2[3])) {
        dVar5 = *(double *)(lVar7 + 8 + lVar9);
        if ((param_2[1] <= dVar5) && (dVar5 <= param_2[4])) {
          dVar6 = *(double *)(lVar7 + 0x10 + lVar9);
          if (((param_2[2] <= dVar6) && (dVar6 <= param_2[5])) &&
             (local_b0 = (int)(longlong)((dVar6 - param_2[2]) * (1.0 / dVar1)) * param_5 * param_4 +
                         (int)(longlong)((dVar5 - param_2[1]) * (1.0 / dVar2)) * param_4 +
                         (int)(longlong)((dVar4 - *param_2) * (1.0 / dVar3)),
             local_b0 < (uint)(param_6 * param_5 * param_4))) {
            local_a8 = &local_b0;
            local_a0 = &local_ac;
            FUN_1498b3f12(param_7,local_94,&local_a8);
            iVar8 = (int)param_1[1];
          }
        }
      }
      local_ac = local_ac + 1;
    } while (local_ac < iVar8);
  }
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498a84a2 FUN_1498a84a2 body=3855 status=ok
// SIG undefined FUN_1498a84a2(void)

int FUN_1498a84a2(longlong param_1,longlong param_2,double *param_3,longlong *param_4,float param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  code *pcVar23;
  int iVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 uVar48;
  undefined4 uVar49;
  double local_1e8;
  
  dVar31 = (double)CONCAT44(unaff_XMM14_Db,unaff_XMM14_Da);
  dVar11 = (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
  iVar14 = 0;
  if ((float)(*(double *)(*(longlong *)(param_2 + 8) + 0x1f8) - (double)param_5) <=
      *(float *)(param_1 + 0x288)) {
    dVar34 = *(double *)(param_1 + 0x98);
    uVar25 = SUB84(dVar34,0);
    uVar30 = (undefined4)((ulonglong)dVar34 >> 0x20);
    iVar21 = (int)dVar34;
    dVar37 = *(double *)(param_1 + 0xa0);
    if (dVar34 <= dVar37) {
      uVar25 = SUB84(dVar37,0);
      uVar30 = (undefined4)((ulonglong)dVar37 >> 0x20);
    }
    iVar24 = (int)(double)CONCAT44(uVar30,uVar25) - iVar21;
    if (iVar24 < 0) {
      iVar24 = 0;
    }
    else {
      uVar13 = rand();
      iVar14 = (int)((float)(iVar24 + 1) * ((float)(uVar13 & 0x7fff) / 32767.0));
      if (iVar14 < iVar24) {
        iVar24 = iVar14;
      }
    }
    iVar14 = iVar24 + iVar21;
    if (iVar14 != 0 && SCARRY4(iVar24,iVar21) == iVar14 < 0) {
      pcVar23 = rand_exref;
      iVar21 = iVar14;
      do {
        uVar13 = (*pcVar23)();
        fVar26 = *(float *)(param_1 + 0xa8);
        if (1.0 <= fVar26) {
          fVar26 = 1.0;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        if ((float)(uVar13 & 0x7fff) / 32767.0 <= fVar26) {
          uVar13 = (*pcVar23)();
          fVar26 = (float)(uVar13 & 0x7fff) / 32767.0;
          iVar24 = (int)(fVar26 + fVar26);
          if (0 < iVar24) {
            iVar24 = 1;
          }
          fVar26 = *(float *)(&DAT_14bee7e80 + (longlong)iVar24 * 4);
          dVar34 = *(double *)(param_1 + 0x218);
          uVar25 = SUB84(dVar34,0);
          uVar30 = (undefined4)((ulonglong)dVar34 >> 0x20);
          dVar37 = *(double *)(param_1 + 0x220);
          uVar13 = (*pcVar23)();
          uVar15 = (*pcVar23)();
          fVar27 = (float)(uVar15 & 0x7fff) / 32767.0;
          iVar24 = (int)(fVar27 + fVar27);
          if (0 < iVar24) {
            iVar24 = 1;
          }
          fVar27 = *(float *)(&DAT_14bee7e80 + (longlong)iVar24 * 4);
          dVar36 = *(double *)(param_1 + 0x218);
          uVar48 = SUB84(dVar36,0);
          uVar49 = (undefined4)((ulonglong)dVar36 >> 0x20);
          dVar38 = *(double *)(param_1 + 0x220);
          uVar15 = (*pcVar23)();
          uVar16 = (*pcVar23)();
          fVar28 = (float)(uVar16 & 0x7fff) / 32767.0;
          iVar24 = (int)(fVar28 + fVar28);
          if (0 < iVar24) {
            iVar24 = 1;
          }
          fVar28 = *(float *)(&DAT_14bee7e80 + (longlong)iVar24 * 4);
          dVar39 = *(double *)(param_1 + 0x218);
          uVar44 = SUB84(dVar39,0);
          uVar45 = (undefined4)((ulonglong)dVar39 >> 0x20);
          dVar35 = *(double *)(param_1 + 0x220);
          uVar16 = (*pcVar23)();
          dVar3 = *(double *)(param_1 + 0x248);
          uVar40 = SUB84(dVar3,0);
          uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar33 = *(double *)(param_1 + 0x260);
          uVar17 = (*pcVar23)();
          dVar4 = *(double *)(param_1 + 0x250);
          dVar5 = *(double *)(param_1 + 0x268);
          uVar18 = (*pcVar23)();
          dVar6 = *(double *)(param_1 + 600);
          dVar7 = *(double *)(param_1 + 0x270);
          uVar19 = (*pcVar23)();
          if (*(char *)(param_1 + 0x22c) == '\x01') {
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar12 = (double)(fVar29 + fVar29 + -1.0);
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar32 = (double)(fVar29 + fVar29 + -1.0);
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar8 = (double)(fVar29 + fVar29 + -1.0);
            dVar31 = dVar12 * dVar12 + dVar8 * dVar8 + dVar32 * dVar32;
            if (9.99999993922529e-09 < dVar31) {
              dVar31 = 1.0 / SQRT(dVar31);
              dVar8 = dVar8 * dVar31;
              dVar32 = dVar32 * dVar31;
              dVar12 = dVar12 * dVar31;
            }
            dVar9 = *(double *)(param_1 + 0x230);
            uVar41 = SUB84(dVar9,0);
            uVar43 = (undefined4)((ulonglong)dVar9 >> 0x20);
            dVar31 = *(double *)(param_1 + 0x238);
            if (dVar9 <= dVar31) {
              uVar41 = SUB84(dVar31,0);
              uVar43 = (undefined4)((ulonglong)dVar31 >> 0x20);
            }
            uVar20 = rand();
            dVar9 = (double)((float)(uVar20 & 0x7fff) / 32767.0) *
                    ((double)CONCAT44(uVar43,uVar41) - dVar9) + dVar9;
            uVar20 = rand();
            dVar11 = *(double *)
                      (&DAT_14bee5b00 + (ulonglong)((float)(uVar20 & 0x7fff) / 32767.0 < 0.2) * 8);
            dVar31 = dVar9 * dVar8 * dVar11;
            local_1e8 = dVar32 * dVar9 * dVar11;
            dVar11 = dVar12 * dVar9 * dVar11;
          }
          else if (*(char *)(param_1 + 0x22c) == '\0') {
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar11 = (double)(fVar29 + fVar29 + -1.0);
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar32 = (double)(fVar29 + fVar29 + -1.0);
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar12 = (double)(fVar29 + fVar29 + -1.0);
            dVar31 = dVar11 * dVar11 + dVar12 * dVar12 + dVar32 * dVar32;
            if (9.99999993922529e-09 < dVar31) {
              dVar31 = 1.0 / SQRT(dVar31);
              dVar12 = dVar12 * dVar31;
              dVar32 = dVar32 * dVar31;
              dVar11 = dVar11 * dVar31;
            }
            dVar31 = *(double *)(param_1 + 0x230);
            uVar41 = SUB84(dVar31,0);
            uVar43 = (undefined4)((ulonglong)dVar31 >> 0x20);
            dVar8 = *(double *)(param_1 + 0x238);
            if (dVar31 <= dVar8) {
              uVar41 = SUB84(dVar8,0);
              uVar43 = (undefined4)((ulonglong)dVar8 >> 0x20);
            }
            uVar20 = rand();
            dVar31 = (double)((float)(uVar20 & 0x7fff) / 32767.0) *
                     ((double)CONCAT44(uVar43,uVar41) - dVar31) + dVar31;
            dVar11 = dVar11 * dVar31;
            local_1e8 = dVar32 * dVar31;
            dVar31 = dVar31 * dVar12;
          }
          dVar32 = dVar34;
          if (dVar34 <= dVar37) {
            dVar32 = dVar37;
          }
          if (dVar37 <= dVar34) {
            uVar25 = SUB84(dVar37,0);
            uVar30 = (undefined4)((ulonglong)dVar37 >> 0x20);
          }
          dVar34 = dVar36;
          if (dVar36 <= dVar38) {
            dVar34 = dVar38;
          }
          if (dVar38 <= dVar36) {
            uVar48 = SUB84(dVar38,0);
            uVar49 = (undefined4)((ulonglong)dVar38 >> 0x20);
          }
          dVar37 = dVar39;
          if (dVar39 <= dVar35) {
            dVar37 = dVar35;
          }
          if (dVar35 <= dVar39) {
            uVar44 = SUB84(dVar35,0);
            uVar45 = (undefined4)((ulonglong)dVar35 >> 0x20);
          }
          dVar36 = dVar3;
          if (dVar3 <= dVar33) {
            dVar36 = dVar33;
          }
          if (dVar33 <= dVar3) {
            uVar40 = SUB84(dVar33,0);
            uVar42 = (undefined4)((ulonglong)dVar33 >> 0x20);
          }
          dVar38 = dVar4;
          if (dVar4 <= dVar5) {
            dVar38 = dVar5;
          }
          uVar41 = SUB84(dVar4,0);
          uVar43 = (int)((ulonglong)dVar4 >> 0x20);
          if (dVar5 <= dVar4) {
            uVar41 = SUB84(dVar5,0);
            uVar43 = (int)((ulonglong)dVar5 >> 0x20);
          }
          dVar39 = dVar6;
          if (dVar6 <= dVar7) {
            dVar39 = dVar7;
          }
          uVar46 = SUB84(dVar6,0);
          uVar47 = (int)((ulonglong)dVar6 >> 0x20);
          if (dVar7 <= dVar6) {
            uVar46 = SUB84(dVar7,0);
            uVar47 = (int)((ulonglong)dVar7 >> 0x20);
          }
          dVar35 = (double)*(float *)(param_1 + 0x228);
          dVar39 = param_3[5] * dVar35 + dVar11 +
                   (double)((float)(uVar19 & 0x7fff) / 32767.0) *
                   (dVar39 - (double)CONCAT44(uVar47,uVar46)) + (double)CONCAT44(uVar47,uVar46);
          dVar3 = param_3[4] * dVar35 + local_1e8 +
                  (double)((float)(uVar18 & 0x7fff) / 32767.0) *
                  (dVar38 - (double)CONCAT44(uVar43,uVar41)) + (double)CONCAT44(uVar43,uVar41);
          dVar38 = dVar35 * param_3[3] + dVar31 +
                   (double)((float)(uVar17 & 0x7fff) / 32767.0) *
                   (dVar36 - (double)CONCAT44(uVar42,uVar40)) + (double)CONCAT44(uVar42,uVar40);
          dVar36 = *(double *)(param_1 + 0x278);
          if ((dVar36 < 0.0) ||
             (0.0 < *(double *)(param_1 + 0x280) || *(double *)(param_1 + 0x280) == 0.0)) {
            if ((0.0 <= dVar36) || (dVar35 = *(double *)(param_1 + 0x280), dVar35 < 0.0)) {
              if ((0.0 <= dVar36) && (dVar35 = *(double *)(param_1 + 0x280), 0.0 <= dVar35)) {
                dVar33 = dVar39 * dVar39 + dVar38 * dVar38 + dVar3 * dVar3;
                if (dVar33 < dVar36 * dVar36) goto joined_r0x0001498a9366;
                if (dVar35 * dVar35 < dVar33) goto joined_r0x0001498a9392;
              }
            }
            else {
              dVar33 = dVar39 * dVar39 + dVar38 * dVar38 + dVar3 * dVar3;
              if (dVar35 * dVar35 < dVar33) {
joined_r0x0001498a9392:
                if (9.99999993922529e-09 < dVar33) {
                  dVar36 = 1.0 / SQRT(dVar33);
                  dVar38 = dVar38 * dVar36;
                  dVar3 = dVar3 * dVar36;
                  dVar39 = dVar39 * dVar36;
                }
                dVar38 = dVar38 * dVar35;
                dVar3 = dVar3 * dVar35;
                dVar39 = dVar39 * dVar35;
              }
            }
          }
          else {
            dVar33 = dVar39 * dVar39 + dVar38 * dVar38 + dVar3 * dVar3;
            if (dVar33 < dVar36 * dVar36) {
joined_r0x0001498a9366:
              if (9.99999993922529e-09 < dVar33) {
                dVar35 = 1.0 / SQRT(dVar33);
                dVar38 = dVar38 * dVar35;
                dVar3 = dVar3 * dVar35;
                dVar39 = dVar39 * dVar35;
              }
              dVar38 = dVar38 * dVar36;
              dVar3 = dVar3 * dVar36;
              dVar39 = dVar39 * dVar36;
            }
          }
          dVar36 = param_3[2];
          dVar35 = param_3[1];
          dVar33 = *param_3;
          iVar24 = (int)param_4[1];
          lVar22 = (longlong)iVar24;
          *(uint *)(param_4 + 1) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar24 + 1U) {
            FUN_1403e3958(param_4,iVar24);
          }
          lVar10 = *param_4;
          *(double *)(lVar10 + lVar22 * 0x18) =
               (double)(float)(((double)((float)(uVar13 & 0x7fff) / 32767.0) *
                                (dVar32 - (double)CONCAT44(uVar30,uVar25)) +
                               (double)CONCAT44(uVar30,uVar25)) * (double)fVar26) + dVar33;
          *(double *)(lVar10 + 8 + lVar22 * 0x18) =
               (double)(float)(((double)((float)(uVar15 & 0x7fff) / 32767.0) *
                                (dVar34 - (double)CONCAT44(uVar49,uVar48)) +
                               (double)CONCAT44(uVar49,uVar48)) * (double)fVar27) + dVar35;
          *(double *)(lVar10 + 0x10 + lVar22 * 0x18) =
               (double)(float)(((double)((float)(uVar16 & 0x7fff) / 32767.0) *
                                (dVar37 - (double)CONCAT44(uVar45,uVar44)) +
                               (double)CONCAT44(uVar45,uVar44)) * (double)fVar28) + dVar36;
          iVar24 = (int)param_4[3];
          lVar22 = (longlong)iVar24;
          *(uint *)(param_4 + 3) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x1c) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 2,iVar24);
          }
          lVar10 = param_4[2];
          *(double *)(lVar10 + lVar22 * 0x18) = dVar38;
          *(double *)(lVar10 + 8 + lVar22 * 0x18) = dVar3;
          *(double *)(lVar10 + 0x10 + lVar22 * 0x18) = dVar39;
          iVar24 = (int)param_4[0xb];
          *(uint *)(param_4 + 0xb) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x5c) < iVar24 + 1U) {
            FUN_1446f48e2(param_4 + 10,iVar24);
          }
          *(undefined4 *)(param_4[10] + (longlong)iVar24 * 4) = param_6;
          iVar24 = (int)param_4[0x17];
          *(uint *)(param_4 + 0x17) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xbc) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x16,iVar24);
          }
          lVar22 = param_4[0x16];
          *(double *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = param_3[2];
          uVar25 = *(undefined4 *)((longlong)param_3 + 4);
          uVar30 = *(undefined4 *)(param_3 + 1);
          uVar48 = *(undefined4 *)((longlong)param_3 + 0xc);
          puVar1 = (undefined4 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar1 = *(undefined4 *)param_3;
          puVar1[1] = uVar25;
          puVar1[2] = uVar30;
          puVar1[3] = uVar48;
          iVar24 = (int)param_4[0x1d];
          *(uint *)(param_4 + 0x1d) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xec) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x1c,iVar24);
          }
          lVar22 = param_4[0x1c];
          *(double *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = param_3[5];
          uVar25 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar30 = *(undefined4 *)(param_3 + 4);
          uVar48 = *(undefined4 *)((longlong)param_3 + 0x24);
          puVar1 = (undefined4 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar1 = *(undefined4 *)(param_3 + 3);
          puVar1[1] = uVar25;
          puVar1[2] = uVar30;
          puVar1[3] = uVar48;
          iVar24 = (int)param_4[0x21];
          *(uint *)(param_4 + 0x21) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x10c) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x20,iVar24);
          }
          lVar22 = param_4[0x20];
          *(double *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = param_3[8];
          uVar25 = *(undefined4 *)((longlong)param_3 + 0x34);
          uVar30 = *(undefined4 *)(param_3 + 7);
          uVar48 = *(undefined4 *)((longlong)param_3 + 0x3c);
          puVar1 = (undefined4 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar1 = *(undefined4 *)(param_3 + 6);
          puVar1[1] = uVar25;
          puVar1[2] = uVar30;
          puVar1[3] = uVar48;
          dVar34 = param_3[9];
          iVar24 = (int)param_4[0x25];
          *(uint *)(param_4 + 0x25) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 300) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 0x24,iVar24);
          }
          *(float *)(param_4[0x24] + (longlong)iVar24 * 4) = (float)dVar34;
          iVar24 = (int)param_4[0x29];
          *(uint *)(param_4 + 0x29) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x14c) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 0x28,iVar24);
          }
          *(float *)(param_4[0x28] + (longlong)iVar24 * 4) = param_5;
          dVar34 = param_3[0xb];
          iVar24 = (int)param_4[5];
          *(uint *)(param_4 + 5) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x2c) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 4,iVar24);
          }
          *(float *)(param_4[4] + (longlong)iVar24 * 4) = (float)dVar34;
          dVar34 = param_3[0xc];
          iVar24 = (int)param_4[7];
          *(uint *)(param_4 + 7) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x3c) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 6,iVar24);
          }
          *(float *)(param_4[6] + (longlong)iVar24 * 4) = (float)dVar34;
          dVar34 = param_3[10];
          iVar24 = (int)param_4[9];
          *(uint *)(param_4 + 9) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x4c) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 8,iVar24);
          }
          *(float *)(param_4[8] + (longlong)iVar24 * 4) = (float)dVar34;
          dVar34 = param_3[0x1e];
          dVar37 = param_3[0x1b];
          dVar36 = param_3[0x1d];
          dVar38 = param_3[0x1a];
          dVar39 = param_3[0x1c];
          dVar35 = param_3[0x19];
          iVar24 = (int)param_4[0x31];
          lVar22 = (longlong)iVar24;
          *(uint *)(param_4 + 0x31) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x18c) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x30,iVar24);
          }
          lVar10 = param_4[0x30];
          *(double *)(lVar10 + lVar22 * 0x18) = dVar39 - dVar35;
          *(double *)(lVar10 + 8 + lVar22 * 0x18) = dVar36 - dVar38;
          *(double *)(lVar10 + 0x10 + lVar22 * 0x18) = dVar34 - dVar37;
          iVar24 = (int)param_4[0x19];
          *(uint *)(param_4 + 0x19) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xcc) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x18,iVar24);
          }
          lVar22 = param_4[0x18];
          puVar2 = (undefined8 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = 0;
          iVar24 = (int)param_4[0x1b];
          *(uint *)(param_4 + 0x1b) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xdc) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x1a,iVar24);
          }
          lVar22 = param_4[0x1a];
          puVar2 = (undefined8 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = 0;
          iVar24 = (int)param_4[0x1f];
          *(uint *)(param_4 + 0x1f) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xfc) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x1e,iVar24);
          }
          lVar22 = param_4[0x1e];
          puVar2 = (undefined8 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = 0;
          iVar24 = (int)param_4[0x23];
          *(uint *)(param_4 + 0x23) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x11c) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x22,iVar24);
          }
          lVar22 = param_4[0x22];
          puVar2 = (undefined8 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = 0;
          iVar24 = (int)param_4[0x27];
          *(uint *)(param_4 + 0x27) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x13c) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 0x26,iVar24);
          }
          *(undefined4 *)(param_4[0x26] + (longlong)iVar24 * 4) = 0;
          pcVar23 = rand_exref;
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
  }
  return iVar14;
}



// FUNCTION 1498a93b2 FUN_1498a93b2 body=254 status=ok
// SIG undefined FUN_1498a93b2(void)

void FUN_1498a93b2(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar3 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar7 = *param_1;
      lVar4 = lVar4 * 0x10;
      local_40 = *(undefined8 *)(lVar7 + lVar4);
      local_48 = param_2;
      cVar2 = FUN_1498b45f8();
      if (cVar2 == '\0') {
        lVar4 = lVar7 + lVar4;
        do {
          lVar7 = lVar4;
          lVar4 = (longlong)*(int *)(lVar7 + 8);
          if (lVar4 == -1) goto LAB_1498a940b;
          lVar1 = *param_1;
          lVar4 = lVar4 * 0x10;
          local_40 = *(undefined8 *)(lVar1 + lVar4);
          local_48 = param_2;
          cVar2 = FUN_1498b45f8(&local_40,&local_48);
          lVar4 = lVar1 + lVar4;
        } while (cVar2 == '\0');
        puVar5 = (undefined4 *)(lVar7 + 8);
      }
      else {
        puVar5 = (undefined4 *)((longlong)plVar3 + uVar6 * 4);
      }
      FUN_1498b50c8(param_1,*puVar5);
    }
  }
LAB_1498a940b:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498a94b2 FUN_1498a94b2 body=71 status=ok
// SIG undefined FUN_1498a94b2(void)

void FUN_1498a94b2(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1498b5038();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1498b5122();
      return;
    }
  }
  return;
}



// FUNCTION 1498a94fa FUN_1498a94fa body=106 status=ok
// SIG undefined FUN_1498a94fa(void)

void FUN_1498a94fa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1498b5038(param_1,iVar1);
    }
    FUN_1498b51c8((longlong)iVar1 * 0x70 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1498b5122(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1498a9582 FUN_1498a9582 body=46 status=ok
// SIG undefined FUN_1498a9582(void)

undefined4 FUN_1498a9582(void)

{
  uint uVar1;
  
  uVar1 = rand();
  return CONCAT31((int3)((uVar1 & 0x7fff) >> 8),(float)(uVar1 & 0x7fff) / 32767.0 < 0.5);
}



// FUNCTION 1498a95b0 FUN_1498a95b0 body=3670 status=ok
// SIG undefined FUN_1498a95b0(void)

int FUN_1498a95b0(longlong param_1,longlong param_2,double *param_3,longlong *param_4,float param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  code *pcVar23;
  int iVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 uVar48;
  undefined4 uVar49;
  double local_1e0;
  
  dVar31 = (double)CONCAT44(unaff_XMM14_Db,unaff_XMM14_Da);
  dVar11 = (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
  iVar14 = 0;
  if ((float)(*(double *)(*(longlong *)(param_2 + 8) + 0x1f8) - (double)param_5) <=
      *(float *)(param_1 + 0x288)) {
    dVar34 = *(double *)(param_1 + 0x98);
    uVar25 = SUB84(dVar34,0);
    uVar30 = (undefined4)((ulonglong)dVar34 >> 0x20);
    iVar21 = (int)dVar34;
    dVar37 = *(double *)(param_1 + 0xa0);
    if (dVar34 <= dVar37) {
      uVar25 = SUB84(dVar37,0);
      uVar30 = (undefined4)((ulonglong)dVar37 >> 0x20);
    }
    iVar24 = (int)(double)CONCAT44(uVar30,uVar25) - iVar21;
    if (iVar24 < 0) {
      iVar24 = 0;
    }
    else {
      uVar13 = rand();
      iVar14 = (int)((float)(iVar24 + 1) * ((float)(uVar13 & 0x7fff) / 32767.0));
      if (iVar14 < iVar24) {
        iVar24 = iVar14;
      }
    }
    iVar14 = iVar24 + iVar21;
    if (iVar14 != 0 && SCARRY4(iVar24,iVar21) == iVar14 < 0) {
      pcVar23 = rand_exref;
      iVar21 = iVar14;
      do {
        uVar13 = (*pcVar23)();
        fVar26 = *(float *)(param_1 + 0xa8);
        if (1.0 <= fVar26) {
          fVar26 = 1.0;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        if ((float)(uVar13 & 0x7fff) / 32767.0 <= fVar26) {
          uVar13 = (*pcVar23)();
          fVar26 = (float)(uVar13 & 0x7fff) / 32767.0;
          iVar24 = (int)(fVar26 + fVar26);
          if (0 < iVar24) {
            iVar24 = 1;
          }
          fVar26 = *(float *)(&DAT_14bee7e80 + (longlong)iVar24 * 4);
          dVar34 = *(double *)(param_1 + 0x218);
          uVar25 = SUB84(dVar34,0);
          uVar30 = (undefined4)((ulonglong)dVar34 >> 0x20);
          dVar37 = *(double *)(param_1 + 0x220);
          uVar13 = (*pcVar23)();
          uVar15 = (*pcVar23)();
          fVar27 = (float)(uVar15 & 0x7fff) / 32767.0;
          iVar24 = (int)(fVar27 + fVar27);
          if (0 < iVar24) {
            iVar24 = 1;
          }
          fVar27 = *(float *)(&DAT_14bee7e80 + (longlong)iVar24 * 4);
          dVar36 = *(double *)(param_1 + 0x218);
          uVar48 = SUB84(dVar36,0);
          uVar49 = (undefined4)((ulonglong)dVar36 >> 0x20);
          dVar38 = *(double *)(param_1 + 0x220);
          uVar15 = (*pcVar23)();
          uVar16 = (*pcVar23)();
          fVar28 = (float)(uVar16 & 0x7fff) / 32767.0;
          iVar24 = (int)(fVar28 + fVar28);
          if (0 < iVar24) {
            iVar24 = 1;
          }
          fVar28 = *(float *)(&DAT_14bee7e80 + (longlong)iVar24 * 4);
          dVar39 = *(double *)(param_1 + 0x218);
          uVar44 = SUB84(dVar39,0);
          uVar45 = (undefined4)((ulonglong)dVar39 >> 0x20);
          dVar35 = *(double *)(param_1 + 0x220);
          uVar16 = (*pcVar23)();
          dVar3 = *(double *)(param_1 + 0x248);
          uVar40 = SUB84(dVar3,0);
          uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar33 = *(double *)(param_1 + 0x260);
          uVar17 = (*pcVar23)();
          dVar4 = *(double *)(param_1 + 0x250);
          dVar5 = *(double *)(param_1 + 0x268);
          uVar18 = (*pcVar23)();
          dVar6 = *(double *)(param_1 + 600);
          dVar7 = *(double *)(param_1 + 0x270);
          uVar19 = (*pcVar23)();
          if (*(char *)(param_1 + 0x22c) == '\x01') {
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar12 = (double)(fVar29 + fVar29 + -1.0);
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar32 = (double)(fVar29 + fVar29 + -1.0);
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar8 = (double)(fVar29 + fVar29 + -1.0);
            dVar31 = dVar12 * dVar12 + dVar8 * dVar8 + dVar32 * dVar32;
            if (9.99999993922529e-09 < dVar31) {
              dVar31 = 1.0 / SQRT(dVar31);
              dVar8 = dVar8 * dVar31;
              dVar32 = dVar32 * dVar31;
              dVar12 = dVar12 * dVar31;
            }
            dVar9 = *(double *)(param_1 + 0x230);
            uVar41 = SUB84(dVar9,0);
            uVar43 = (undefined4)((ulonglong)dVar9 >> 0x20);
            dVar31 = *(double *)(param_1 + 0x238);
            if (dVar9 <= dVar31) {
              uVar41 = SUB84(dVar31,0);
              uVar43 = (undefined4)((ulonglong)dVar31 >> 0x20);
            }
            uVar20 = rand();
            dVar9 = (double)((float)(uVar20 & 0x7fff) / 32767.0) *
                    ((double)CONCAT44(uVar43,uVar41) - dVar9) + dVar9;
            uVar20 = rand();
            dVar11 = *(double *)
                      (&DAT_14bee5b00 + (ulonglong)((float)(uVar20 & 0x7fff) / 32767.0 < 0.2) * 8);
            dVar31 = dVar9 * dVar8 * dVar11;
            local_1e0 = dVar32 * dVar9 * dVar11;
            dVar11 = dVar12 * dVar9 * dVar11;
          }
          else if (*(char *)(param_1 + 0x22c) == '\0') {
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar11 = (double)(fVar29 + fVar29 + -1.0);
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar32 = (double)(fVar29 + fVar29 + -1.0);
            uVar20 = rand();
            fVar29 = (float)(uVar20 & 0x7fff) / 32767.0;
            dVar12 = (double)(fVar29 + fVar29 + -1.0);
            dVar31 = dVar11 * dVar11 + dVar12 * dVar12 + dVar32 * dVar32;
            if (9.99999993922529e-09 < dVar31) {
              dVar31 = 1.0 / SQRT(dVar31);
              dVar12 = dVar12 * dVar31;
              dVar32 = dVar32 * dVar31;
              dVar11 = dVar11 * dVar31;
            }
            dVar31 = *(double *)(param_1 + 0x230);
            uVar41 = SUB84(dVar31,0);
            uVar43 = (undefined4)((ulonglong)dVar31 >> 0x20);
            dVar8 = *(double *)(param_1 + 0x238);
            if (dVar31 <= dVar8) {
              uVar41 = SUB84(dVar8,0);
              uVar43 = (undefined4)((ulonglong)dVar8 >> 0x20);
            }
            uVar20 = rand();
            dVar31 = (double)((float)(uVar20 & 0x7fff) / 32767.0) *
                     ((double)CONCAT44(uVar43,uVar41) - dVar31) + dVar31;
            dVar11 = dVar11 * dVar31;
            local_1e0 = dVar32 * dVar31;
            dVar31 = dVar31 * dVar12;
          }
          dVar32 = dVar34;
          if (dVar34 <= dVar37) {
            dVar32 = dVar37;
          }
          if (dVar37 <= dVar34) {
            uVar25 = SUB84(dVar37,0);
            uVar30 = (undefined4)((ulonglong)dVar37 >> 0x20);
          }
          dVar34 = dVar36;
          if (dVar36 <= dVar38) {
            dVar34 = dVar38;
          }
          if (dVar38 <= dVar36) {
            uVar48 = SUB84(dVar38,0);
            uVar49 = (undefined4)((ulonglong)dVar38 >> 0x20);
          }
          dVar37 = dVar39;
          if (dVar39 <= dVar35) {
            dVar37 = dVar35;
          }
          if (dVar35 <= dVar39) {
            uVar44 = SUB84(dVar35,0);
            uVar45 = (undefined4)((ulonglong)dVar35 >> 0x20);
          }
          dVar36 = dVar3;
          if (dVar3 <= dVar33) {
            dVar36 = dVar33;
          }
          if (dVar33 <= dVar3) {
            uVar40 = SUB84(dVar33,0);
            uVar42 = (undefined4)((ulonglong)dVar33 >> 0x20);
          }
          dVar38 = dVar4;
          if (dVar4 <= dVar5) {
            dVar38 = dVar5;
          }
          uVar41 = SUB84(dVar4,0);
          uVar43 = (int)((ulonglong)dVar4 >> 0x20);
          if (dVar5 <= dVar4) {
            uVar41 = SUB84(dVar5,0);
            uVar43 = (int)((ulonglong)dVar5 >> 0x20);
          }
          dVar39 = dVar6;
          if (dVar6 <= dVar7) {
            dVar39 = dVar7;
          }
          uVar46 = SUB84(dVar6,0);
          uVar47 = (int)((ulonglong)dVar6 >> 0x20);
          if (dVar7 <= dVar6) {
            uVar46 = SUB84(dVar7,0);
            uVar47 = (int)((ulonglong)dVar7 >> 0x20);
          }
          dVar35 = (double)*(float *)(param_1 + 0x228);
          dVar39 = param_3[5] * dVar35 + dVar11 +
                   (double)((float)(uVar19 & 0x7fff) / 32767.0) *
                   (dVar39 - (double)CONCAT44(uVar47,uVar46)) + (double)CONCAT44(uVar47,uVar46);
          dVar3 = param_3[4] * dVar35 + local_1e0 +
                  (double)((float)(uVar18 & 0x7fff) / 32767.0) *
                  (dVar38 - (double)CONCAT44(uVar43,uVar41)) + (double)CONCAT44(uVar43,uVar41);
          dVar38 = dVar35 * param_3[3] + dVar31 +
                   (double)((float)(uVar17 & 0x7fff) / 32767.0) *
                   (dVar36 - (double)CONCAT44(uVar42,uVar40)) + (double)CONCAT44(uVar42,uVar40);
          dVar36 = *(double *)(param_1 + 0x278);
          if ((dVar36 < 0.0) ||
             (0.0 < *(double *)(param_1 + 0x280) || *(double *)(param_1 + 0x280) == 0.0)) {
            if ((0.0 <= dVar36) || (dVar35 = *(double *)(param_1 + 0x280), dVar35 < 0.0)) {
              if ((0.0 <= dVar36) && (dVar35 = *(double *)(param_1 + 0x280), 0.0 <= dVar35)) {
                dVar33 = dVar39 * dVar39 + dVar38 * dVar38 + dVar3 * dVar3;
                if (dVar33 < dVar36 * dVar36) goto joined_r0x0001498aa3bb;
                if (dVar35 * dVar35 < dVar33) goto joined_r0x0001498aa3e7;
              }
            }
            else {
              dVar33 = dVar39 * dVar39 + dVar38 * dVar38 + dVar3 * dVar3;
              if (dVar35 * dVar35 < dVar33) {
joined_r0x0001498aa3e7:
                if (9.99999993922529e-09 < dVar33) {
                  dVar36 = 1.0 / SQRT(dVar33);
                  dVar38 = dVar38 * dVar36;
                  dVar3 = dVar3 * dVar36;
                  dVar39 = dVar39 * dVar36;
                }
                dVar38 = dVar38 * dVar35;
                dVar3 = dVar3 * dVar35;
                dVar39 = dVar39 * dVar35;
              }
            }
          }
          else {
            dVar33 = dVar39 * dVar39 + dVar38 * dVar38 + dVar3 * dVar3;
            if (dVar33 < dVar36 * dVar36) {
joined_r0x0001498aa3bb:
              if (9.99999993922529e-09 < dVar33) {
                dVar35 = 1.0 / SQRT(dVar33);
                dVar38 = dVar38 * dVar35;
                dVar3 = dVar3 * dVar35;
                dVar39 = dVar39 * dVar35;
              }
              dVar38 = dVar38 * dVar36;
              dVar3 = dVar3 * dVar36;
              dVar39 = dVar39 * dVar36;
            }
          }
          dVar36 = param_3[2];
          dVar35 = param_3[1];
          dVar33 = *param_3;
          iVar24 = (int)param_4[1];
          lVar22 = (longlong)iVar24;
          *(uint *)(param_4 + 1) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar24 + 1U) {
            FUN_1403e3958(param_4,iVar24);
          }
          lVar10 = *param_4;
          *(double *)(lVar10 + lVar22 * 0x18) =
               (double)(float)(((double)((float)(uVar13 & 0x7fff) / 32767.0) *
                                (dVar32 - (double)CONCAT44(uVar30,uVar25)) +
                               (double)CONCAT44(uVar30,uVar25)) * (double)fVar26) + dVar33;
          *(double *)(lVar10 + 8 + lVar22 * 0x18) =
               (double)(float)(((double)((float)(uVar15 & 0x7fff) / 32767.0) *
                                (dVar34 - (double)CONCAT44(uVar49,uVar48)) +
                               (double)CONCAT44(uVar49,uVar48)) * (double)fVar27) + dVar35;
          *(double *)(lVar10 + 0x10 + lVar22 * 0x18) =
               (double)(float)(((double)((float)(uVar16 & 0x7fff) / 32767.0) *
                                (dVar37 - (double)CONCAT44(uVar45,uVar44)) +
                               (double)CONCAT44(uVar45,uVar44)) * (double)fVar28) + dVar36;
          iVar24 = (int)param_4[3];
          lVar22 = (longlong)iVar24;
          *(uint *)(param_4 + 3) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x1c) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 2,iVar24);
          }
          lVar10 = param_4[2];
          *(double *)(lVar10 + lVar22 * 0x18) = dVar38;
          *(double *)(lVar10 + 8 + lVar22 * 0x18) = dVar3;
          *(double *)(lVar10 + 0x10 + lVar22 * 0x18) = dVar39;
          iVar24 = (int)param_4[0xb];
          *(uint *)(param_4 + 0xb) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x5c) < iVar24 + 1U) {
            FUN_1446f48e2(param_4 + 10,iVar24);
          }
          *(undefined4 *)(param_4[10] + (longlong)iVar24 * 4) = param_6;
          iVar24 = (int)param_4[0x17];
          *(uint *)(param_4 + 0x17) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xbc) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x16,iVar24);
          }
          lVar22 = param_4[0x16];
          *(double *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = param_3[2];
          uVar25 = *(undefined4 *)((longlong)param_3 + 4);
          uVar30 = *(undefined4 *)(param_3 + 1);
          uVar48 = *(undefined4 *)((longlong)param_3 + 0xc);
          puVar1 = (undefined4 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar1 = *(undefined4 *)param_3;
          puVar1[1] = uVar25;
          puVar1[2] = uVar30;
          puVar1[3] = uVar48;
          iVar24 = (int)param_4[0x1d];
          *(uint *)(param_4 + 0x1d) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xec) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x1c,iVar24);
          }
          lVar22 = param_4[0x1c];
          *(double *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = param_3[5];
          uVar25 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar30 = *(undefined4 *)(param_3 + 4);
          uVar48 = *(undefined4 *)((longlong)param_3 + 0x24);
          puVar1 = (undefined4 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar1 = *(undefined4 *)(param_3 + 3);
          puVar1[1] = uVar25;
          puVar1[2] = uVar30;
          puVar1[3] = uVar48;
          iVar24 = (int)param_4[0x21];
          *(uint *)(param_4 + 0x21) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x10c) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x20,iVar24);
          }
          lVar22 = param_4[0x20];
          *(double *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = param_3[8];
          uVar25 = *(undefined4 *)((longlong)param_3 + 0x34);
          uVar30 = *(undefined4 *)(param_3 + 7);
          uVar48 = *(undefined4 *)((longlong)param_3 + 0x3c);
          puVar1 = (undefined4 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar1 = *(undefined4 *)(param_3 + 6);
          puVar1[1] = uVar25;
          puVar1[2] = uVar30;
          puVar1[3] = uVar48;
          dVar34 = param_3[9];
          iVar24 = (int)param_4[0x25];
          *(uint *)(param_4 + 0x25) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 300) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 0x24,iVar24);
          }
          *(float *)(param_4[0x24] + (longlong)iVar24 * 4) = (float)dVar34;
          iVar24 = (int)param_4[0x29];
          *(uint *)(param_4 + 0x29) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x14c) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 0x28,iVar24);
          }
          *(float *)(param_4[0x28] + (longlong)iVar24 * 4) = param_5;
          dVar34 = param_3[0xb];
          iVar24 = (int)param_4[5];
          *(uint *)(param_4 + 5) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x2c) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 4,iVar24);
          }
          *(float *)(param_4[4] + (longlong)iVar24 * 4) = (float)dVar34;
          dVar34 = param_3[0xc];
          iVar24 = (int)param_4[7];
          *(uint *)(param_4 + 7) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x3c) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 6,iVar24);
          }
          *(float *)(param_4[6] + (longlong)iVar24 * 4) = (float)dVar34;
          dVar34 = param_3[10];
          iVar24 = (int)param_4[9];
          *(uint *)(param_4 + 9) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x4c) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 8,iVar24);
          }
          *(float *)(param_4[8] + (longlong)iVar24 * 4) = (float)dVar34;
          iVar24 = (int)param_4[0x19];
          *(uint *)(param_4 + 0x19) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xcc) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x18,iVar24);
          }
          lVar22 = param_4[0x18];
          puVar2 = (undefined8 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = 0;
          iVar24 = (int)param_4[0x1b];
          *(uint *)(param_4 + 0x1b) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xdc) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x1a,iVar24);
          }
          lVar22 = param_4[0x1a];
          puVar2 = (undefined8 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = 0;
          iVar24 = (int)param_4[0x1f];
          *(uint *)(param_4 + 0x1f) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0xfc) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x1e,iVar24);
          }
          lVar22 = param_4[0x1e];
          puVar2 = (undefined8 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = 0;
          iVar24 = (int)param_4[0x23];
          *(uint *)(param_4 + 0x23) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x11c) < iVar24 + 1U) {
            FUN_1403e3958(param_4 + 0x22,iVar24);
          }
          lVar22 = param_4[0x22];
          puVar2 = (undefined8 *)(lVar22 + (longlong)iVar24 * 0x18);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar24 * 0x18) = 0;
          iVar24 = (int)param_4[0x27];
          *(uint *)(param_4 + 0x27) = iVar24 + 1U;
          if (*(uint *)((longlong)param_4 + 0x13c) < iVar24 + 1U) {
            FUN_14475e4ac(param_4 + 0x26,iVar24);
          }
          *(undefined4 *)(param_4[0x26] + (longlong)iVar24 * 4) = 0;
          pcVar23 = rand_exref;
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
  }
  return iVar14;
}



// FUNCTION 1498aa406 FUN_1498aa406 body=2750 status=ok
// SIG undefined FUN_1498aa406(void)

void FUN_1498aa406(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_1f8 [32];
  wchar_t *local_1d8;
  wchar_t *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
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
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar1 = param_2[9];
  if (*(int *)(lVar1 + 0x20) != *(int *)(lVar1 + 0x4c)) {
    lVar2 = *(longlong *)(param_2[2] + 0x10);
    lVar6 = lVar1 + 0x50;
    if (*(longlong *)(lVar1 + 0x58) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0x58);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar1 + 0x60) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(lVar1 + 0x18) + (longlong)iVar5 * 0x270;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar5 * 0x270) == lVar2)
        goto LAB_1498aa47a;
        iVar5 = *(int *)(lVar6 + 0x268);
      } while (iVar5 != -1);
    }
  }
  lVar6 = 0;
LAB_1498aa47a:
  uVar7 = *(int *)(param_2 + 10) + 0xfU & 0xfffffff0;
  FUN_145aa8826();
  puVar8 = (undefined8 *)((ulonglong)uVar7 + param_2[7]);
  *(uint *)(param_2 + 10) = DAT_14cc30e44 + uVar7;
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) < 1)) {
    cVar3 = FUN_144b34a28(param_2,puVar8);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      *puVar8 = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 1);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[1] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0xd);
      puVar8[2] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 3);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0xd);
      puVar8[3] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 4);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0xd);
      puVar8[4] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 5);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0x1d);
      puVar8[5] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 6);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0xd);
      puVar8[6] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 7);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0xd);
      puVar8[7] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 8);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0xd);
      puVar8[8] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 9);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0x1d);
      puVar8[9] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 10);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[10] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0xb);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0xb] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0xc);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0xc] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0xd);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0xd] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0xe);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0xe] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0xf);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0xf] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0x10);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0x10] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0x11);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0x11] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0x12);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0xd);
      puVar8[0x12] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0x13);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0xd);
      puVar8[0x13] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0x14);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,0xd);
      puVar8[0x14] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0x15);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0x15] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0x16);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0x16] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0x17);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0x17] = uVar4;
    }
    cVar3 = FUN_144b34a28(param_2,puVar8 + 0x18);
    if (cVar3 != '\0') {
      uVar4 = FUN_1481c8850(param_2[1],*param_2,1);
      puVar8[0x18] = uVar4;
    }
    *(undefined4 *)(puVar8 + 0x19) = 0;
    uVar9 = 0;
  }
  else {
    local_40 = *(undefined8 *)(lVar6 + 8);
    local_1d8 = L"ChaosGPUBuffer_Position";
    local_38 = *(int *)(lVar6 + 0x10);
    FUN_1498a488c(param_2,puVar8,lVar6 + 0x1a0);
    local_50 = *(undefined8 *)(lVar6 + 0x18);
    local_48 = *(undefined4 *)(lVar6 + 0x20);
    local_1d8 = L"ChaosGPUBuffer_Velocity";
    FUN_1498a488c(param_2,puVar8 + 1,lVar6 + 0x1a8);
    local_54 = 0;
    local_68 = *(undefined8 *)(lVar6 + 0x28);
    local_60 = *(undefined4 *)(lVar6 + 0x30);
    local_1d0 = L"ChaosGPUBuffer_ExtentMin";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498aaec5(param_2,puVar8 + 2,lVar6 + 0x1b0);
    local_54 = 0;
    local_78 = *(undefined8 *)(lVar6 + 0x38);
    local_70 = *(undefined4 *)(lVar6 + 0x40);
    local_1d0 = L"ChaosGPUBuffer_ExtentMax";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498aaec5(param_2,puVar8 + 3,lVar6 + 0x1b8);
    local_54 = 0;
    local_88 = *(undefined8 *)(lVar6 + 0x48);
    local_80 = *(undefined4 *)(lVar6 + 0x50);
    local_1d0 = L"ChaosGPUBuffer_Volume";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498aaec5(param_2,puVar8 + 4,lVar6 + 0x1c0);
    local_54 = 0;
    local_98 = *(undefined8 *)(lVar6 + 0x58);
    local_90 = *(undefined4 *)(lVar6 + 0x60);
    local_1d0 = L"ChaosGPUBuffer_SolverID";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498ab01e(param_2,puVar8 + 5,lVar6 + 0x1c8);
    local_54 = 0;
    local_a8 = *(undefined8 *)(lVar6 + 0x68);
    local_a0 = *(undefined4 *)(lVar6 + 0x70);
    local_1d0 = L"ChaosGPUBuffer_Density";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498aaec5(param_2,puVar8 + 6,lVar6 + 0x1d0);
    local_54 = 0;
    local_b8 = *(undefined8 *)(lVar6 + 0x78);
    local_b0 = *(undefined4 *)(lVar6 + 0x80);
    local_1d0 = L"ChaosGPUBuffer_Friction";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498aaec5(param_2,puVar8 + 7,lVar6 + 0x1d8);
    local_54 = 0;
    local_c8 = *(undefined8 *)(lVar6 + 0x88);
    local_c0 = *(undefined4 *)(lVar6 + 0x90);
    local_1d0 = L"ChaosGPUBuffer_Restitution";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498aaec5(param_2,puVar8 + 8,lVar6 + 0x1e0);
    local_54 = 0;
    local_d8 = *(undefined8 *)(lVar6 + 0x98);
    local_d0 = *(undefined4 *)(lVar6 + 0xa0);
    local_1d0 = L"ChaosGPUBuffer_SurfaceType";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498ab01e(param_2,puVar8 + 9,lVar6 + 0x1e8);
    local_e8 = *(undefined8 *)(lVar6 + 0xa8);
    local_e0 = *(undefined4 *)(lVar6 + 0xb0);
    FUN_1498ab177(param_2,puVar8 + 10,lVar6 + 0x1f0);
    local_f8 = *(undefined8 *)(lVar6 + 0xb8);
    local_f0 = *(undefined4 *)(lVar6 + 0xc0);
    local_1d8 = L"ChaosGPUBuffer_IncomingLocation";
    FUN_1498a488c(param_2,puVar8 + 0xb,lVar6 + 0x1f8);
    local_108 = *(undefined8 *)(lVar6 + 200);
    local_100 = *(undefined4 *)(lVar6 + 0xd0);
    local_1d8 = L"ChaosGPUBuffer_IncomingAccumulatedImpulse";
    FUN_1498a488c(param_2,puVar8 + 0xc,lVar6 + 0x200);
    local_118 = *(undefined8 *)(lVar6 + 0xd8);
    local_110 = *(undefined4 *)(lVar6 + 0xe0);
    local_1d8 = L"ChaosGPUBuffer_IncomingNormal";
    FUN_1498a488c(param_2,puVar8 + 0xd,lVar6 + 0x208);
    local_128 = *(undefined8 *)(lVar6 + 0xe8);
    local_120 = *(undefined4 *)(lVar6 + 0xf0);
    local_1d8 = L"ChaosGPUBuffer_IncomingVelocity1";
    FUN_1498a488c(param_2,puVar8 + 0xe,lVar6 + 0x210);
    local_138 = *(undefined8 *)(lVar6 + 0xf8);
    local_130 = *(undefined4 *)(lVar6 + 0x100);
    local_1d8 = L"ChaosGPUBuffer_IncomingVelocity2";
    FUN_1498a488c(param_2,puVar8 + 0xf,lVar6 + 0x218);
    local_148 = *(undefined8 *)(lVar6 + 0x108);
    local_140 = *(undefined4 *)(lVar6 + 0x110);
    local_1d8 = L"ChaosGPUBuffer_IncomingAngualrVelocity1";
    FUN_1498a488c(param_2,puVar8 + 0x10,lVar6 + 0x220);
    local_158 = *(undefined8 *)(lVar6 + 0x118);
    local_150 = *(undefined4 *)(lVar6 + 0x120);
    local_1d8 = L"ChaosGPUBuffer_IncomingAngualrVelocity2";
    FUN_1498a488c(param_2,puVar8 + 0x11,lVar6 + 0x228);
    local_54 = 0;
    local_168 = *(undefined8 *)(lVar6 + 0x128);
    local_160 = *(undefined4 *)(lVar6 + 0x130);
    local_1d0 = L"ChaosGPUBuffer_IncomingMass1";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498aaec5(param_2,puVar8 + 0x12,lVar6 + 0x230);
    local_54 = 0;
    local_178 = *(undefined8 *)(lVar6 + 0x138);
    local_170 = *(undefined4 *)(lVar6 + 0x140);
    local_1d0 = L"ChaosGPUBuffer_IncomingMass2";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498aaec5(param_2,puVar8 + 0x13,lVar6 + 0x238);
    local_54 = 0;
    local_188 = *(undefined8 *)(lVar6 + 0x148);
    local_180 = *(undefined4 *)(lVar6 + 0x150);
    local_1d0 = L"ChaosGPUBuffer_IncomingTime";
    local_1d8 = (wchar_t *)&local_54;
    FUN_1498aaec5(param_2,puVar8 + 0x14,lVar6 + 0x240);
    local_198 = *(undefined8 *)(lVar6 + 0x158);
    local_190 = *(undefined4 *)(lVar6 + 0x160);
    local_1d8 = L"ChaosGPUBuffer_TransformTranslation";
    FUN_1498a488c(param_2,puVar8 + 0x15,lVar6 + 0x248);
    local_1a8 = *(undefined8 *)(lVar6 + 0x168);
    local_1a0 = *(undefined4 *)(lVar6 + 0x170);
    FUN_1498ab2ce(param_2,puVar8 + 0x16,lVar6 + 0x250);
    local_1b8 = *(undefined8 *)(lVar6 + 0x178);
    local_1b0 = *(undefined4 *)(lVar6 + 0x180);
    local_1d8 = L"ChaosGPUBuffer_TransformScale";
    FUN_1498a488c(param_2,puVar8 + 0x17,lVar6 + 600);
    local_1c8 = *(undefined8 *)(lVar6 + 0x188);
    local_1c0 = *(undefined4 *)(lVar6 + 400);
    local_1d8 = L"ChaosGPUBuffer_TransformBounds";
    FUN_1498a488c(param_2,puVar8 + 0x18,lVar6 + 0x260);
    *(undefined4 *)(puVar8 + 0x19) = *(undefined4 *)(lVar6 + 0x19c);
    uVar9 = *(undefined4 *)(lVar6 + 0x198);
  }
  *(undefined4 *)((longlong)puVar8 + 0xcc) = uVar9;
  if ((local_30 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498aaec5 FUN_1498aaec5 body=344 status=ok
// SIG undefined FUN_1498aaec5(void)

void FUN_1498aaec5(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  int local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_144b34a28();
  if (cVar1 != '\0') {
    lVar4 = *param_3;
    if (lVar4 == 0) {
      uVar2 = *(uint *)(param_4 + 1);
      if (uVar2 == 0) {
        *param_4 = param_5;
        *(undefined4 *)(param_4 + 1) = 1;
        uVar2 = 1;
      }
      lVar4 = *param_1;
      local_88 = &local_49;
      local_49 = 0;
      local_58 = param_6;
      uVar5 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar5 = DAT_14ca84e48;
      }
      local_78 = uVar5 + (uVar5 == 0);
      uVar5 = DAT_14ca84e48;
      if (uVar2 < DAT_14ca84e48) {
        uVar5 = uVar2;
      }
      local_68 = 0;
      local_74 = CONCAT44(0x4109,uVar5 + (uVar5 == 0));
      lVar3 = FUN_144738de6(lVar4 + 0x188,lVar4 + 0x70,&local_58,&local_78);
      local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_1447759b4(lVar4,lVar3,*param_4,(longlong)*(int *)(param_4 + 1) << 2);
      local_78 = CONCAT31(local_78._1_3_,0xd);
      local_74 = 0xffffffff00000000;
      local_68 = 0;
      local_60 = lVar3;
      lVar4 = FUN_14475683e(lVar4 + 0x198,lVar4 + 0x70,lVar3 + 8,&local_78);
      *param_3 = lVar4;
    }
    *param_2 = lVar4;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ab01e FUN_1498ab01e body=344 status=ok
// SIG undefined FUN_1498ab01e(void)

void FUN_1498ab01e(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  int local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_144b34a28();
  if (cVar1 != '\0') {
    lVar4 = *param_3;
    if (lVar4 == 0) {
      uVar2 = *(uint *)(param_4 + 1);
      if (uVar2 == 0) {
        *param_4 = param_5;
        *(undefined4 *)(param_4 + 1) = 1;
        uVar2 = 1;
      }
      lVar4 = *param_1;
      local_88 = &local_49;
      local_49 = 0;
      local_58 = param_6;
      uVar5 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar5 = DAT_14ca84e48;
      }
      local_78 = uVar5 + (uVar5 == 0);
      uVar5 = DAT_14ca84e48;
      if (uVar2 < DAT_14ca84e48) {
        uVar5 = uVar2;
      }
      local_68 = 0;
      local_74 = CONCAT44(0x4109,uVar5 + (uVar5 == 0));
      lVar3 = FUN_144738de6(lVar4 + 0x188,lVar4 + 0x70,&local_58,&local_78);
      local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_1447759b4(lVar4,lVar3,*param_4,(longlong)*(int *)(param_4 + 1) << 2);
      local_78 = CONCAT31(local_78._1_3_,0x1d);
      local_74 = 0xffffffff00000000;
      local_68 = 0;
      local_60 = lVar3;
      lVar4 = FUN_14475683e(lVar4 + 0x198,lVar4 + 0x70,lVar3 + 8,&local_78);
      *param_3 = lVar4;
    }
    *param_2 = lVar4;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ab177 FUN_1498ab177 body=342 status=ok
// SIG undefined FUN_1498ab177(void)

void FUN_1498ab177(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  int local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_144b34a28();
  if (cVar1 != '\0') {
    lVar4 = *param_3;
    if (lVar4 == 0) {
      uVar2 = *(uint *)(param_4 + 1);
      if (uVar2 == 0) {
        *param_4 = &DAT_149e1e308;
        *(undefined4 *)(param_4 + 1) = 1;
        uVar2 = 1;
      }
      lVar4 = *param_1;
      local_88 = &local_49;
      local_49 = 0;
      local_58 = L"ChaosGPUBuffer_Color";
      uVar5 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        uVar5 = DAT_14ca84e48;
      }
      local_78 = uVar5 + (uVar5 == 0);
      uVar5 = DAT_14ca84e48;
      if (uVar2 < DAT_14ca84e48) {
        uVar5 = uVar2;
      }
      local_68 = 0;
      local_74 = CONCAT44(0x4109,uVar5 + (uVar5 == 0));
      lVar3 = FUN_144738de6(lVar4 + 0x188,lVar4 + 0x70,&local_58,&local_78);
      local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_1447759b4(lVar4,lVar3,*param_4,(longlong)*(int *)(param_4 + 1) << 4);
      local_78 = CONCAT31(local_78._1_3_,1);
      local_74 = 0xffffffff00000000;
      local_68 = 0;
      local_60 = lVar3;
      lVar4 = FUN_14475683e(lVar4 + 0x198,lVar4 + 0x70,lVar3 + 8,&local_78);
      *param_3 = lVar4;
    }
    *param_2 = lVar4;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ab2ce FUN_1498ab2ce body=342 status=ok
// SIG undefined FUN_1498ab2ce(void)

void FUN_1498ab2ce(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  int local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_144b34a28();
  if (cVar1 != '\0') {
    lVar4 = *param_3;
    if (lVar4 == 0) {
      uVar2 = *(uint *)(param_4 + 1);
      if (uVar2 == 0) {
        *param_4 = 0x14c846340;
        *(undefined4 *)(param_4 + 1) = 1;
        uVar2 = 1;
      }
      lVar4 = *param_1;
      local_88 = &local_49;
      local_49 = 0;
      local_58 = L"ChaosGPUBuffer_TransformRotation";
      uVar5 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        uVar5 = DAT_14ca84e48;
      }
      local_78 = uVar5 + (uVar5 == 0);
      uVar5 = DAT_14ca84e48;
      if (uVar2 < DAT_14ca84e48) {
        uVar5 = uVar2;
      }
      local_68 = 0;
      local_74 = CONCAT44(0x4109,uVar5 + (uVar5 == 0));
      lVar3 = FUN_144738de6(lVar4 + 0x188,lVar4 + 0x70,&local_58,&local_78);
      local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_1447759b4(lVar4,lVar3,*param_4,(longlong)*(int *)(param_4 + 1) << 4);
      local_78 = CONCAT31(local_78._1_3_,1);
      local_74 = 0xffffffff00000000;
      local_68 = 0;
      local_60 = lVar3;
      lVar4 = FUN_14475683e(lVar4 + 0x198,lVar4 + 0x70,lVar3 + 8,&local_78);
      *param_3 = lVar4;
    }
    *param_2 = lVar4;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ab432 FUN_1498ab432 body=349 status=ok
// SIG undefined FUN_1498ab432(void)

void FUN_1498ab432(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_140661c88(param_1 + 0x10,param_2,L"FNDIGeometryCollectionBuffer",0x10,
                  *(int *)(param_1 + 0xa0) * 3,1,1,0);
    if (*(int *)(param_1 + 0xa0) != 0) {
      FUN_140661c88(param_1 + 0x28,param_2,L"FNDIGeometryCollectionBuffer",0x10,
                    *(int *)(param_1 + 0xa0) * 3,1,1,0);
      if (*(int *)(param_1 + 0xa0) != 0) {
        FUN_140661c88(param_1 + 0x40,param_2,L"FNDIGeometryCollectionBuffer",0x10,
                      *(int *)(param_1 + 0xa0) * 3,1,1,0);
        if (*(int *)(param_1 + 0xa0) != 0) {
          FUN_140661c88(param_1 + 0x58,param_2,L"FNDIGeometryCollectionBuffer",0x10,
                        *(int *)(param_1 + 0xa0) * 3,1,1,0);
          if (*(int *)(param_1 + 0xa0) != 0) {
            FUN_140661c88(param_1 + 0x70,param_2,L"FNDIGeometryCollectionBuffer",0x10,
                          *(int *)(param_1 + 0xa0),1,1,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1498ab590 FUN_1498ab590 body=61 status=ok
// SIG undefined FUN_1498ab590(void)

void FUN_1498ab590(longlong param_1)

{
  FUN_14011fb0c(param_1 + 0x10);
  FUN_14011fb0c(param_1 + 0x28);
  FUN_14011fb0c(param_1 + 0x40);
  FUN_14011fb0c(param_1 + 0x58);
  FUN_14011fb0c(param_1 + 0x70);
  return;
}



// FUNCTION 1498ab5ce FUN_1498ab5ce body=1427 status=ok
// SIG undefined FUN_1498ab5ce(void)

void FUN_1498ab5ce(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c8 [24];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (param_3 != 0 && param_2 != 0) {
    lVar9 = FUN_1498abbb0(param_1 + 0x9c);
    if (lVar9 == 0) {
      puVar10 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      *(undefined4 *)(puVar10 + 0xe) = 100;
      FUN_1498abbf8(puVar10,100);
      *(undefined8 **)(param_1 + 0x90) = puVar10;
      FUN_1498abbf8(puVar10,1);
      puVar10 = (undefined8 *)FUN_14001cc68(0xa8);
      memset(puVar10,0,0xa8);
      FUN_144a7f8ec(puVar10);
      *puVar10 = &PTR_FUN_14beea000;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *(undefined4 *)(puVar10 + 4) = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      *(undefined4 *)(puVar10 + 7) = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      *(undefined4 *)(puVar10 + 10) = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      *(undefined4 *)(puVar10 + 0xd) = 0;
      puVar10[0xe] = 0;
      puVar10[0xf] = 0;
      *(undefined4 *)(puVar10 + 0x10) = 0;
      puVar10[0x11] = 0;
      puVar10[0x12] = 0;
      puVar10[0x13] = 0;
      *(undefined8 **)(param_1 + 0x88) = puVar10;
      *(undefined4 *)(puVar10 + 0x14) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_118);
    }
    lVar5 = *(longlong *)(lVar9 + 0x218);
    local_f8 = *(longlong **)(lVar9 + 0x220);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)(lVar5 + 0x3c0);
    iVar8 = (**(code **)(*(longlong *)(lVar5 + 0x3c0) + 0x60))(plVar3);
    iVar14 = 0;
    if (0 < iVar8) {
      lVar9 = 0;
      iVar14 = 0;
      do {
        if ((*(char *)(param_2 + 0x98) != '\0') ||
           (lVar11 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x3b0) + lVar9 * 4) * 0x50,
           *(int *)(*(longlong *)(lVar5 + 0x140) + 8 + lVar11) ==
           *(int *)(*(longlong *)(lVar5 + 0x140) + 0x34 + lVar11))) {
          iVar14 = iVar14 + 1;
        }
        lVar9 = lVar9 + 1;
        iVar8 = (**(code **)(*plVar3 + 0x60))(plVar3);
      } while (lVar9 < iVar8);
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x78,0x10);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    *(undefined4 *)(puVar10 + 0xe) = 100;
    FUN_1498abbf8(puVar10,100);
    *(undefined8 **)(param_1 + 0x90) = puVar10;
    FUN_1498abbf8(puVar10,iVar14);
    puVar10 = (undefined8 *)FUN_14001cc68(0xa8);
    memset(puVar10,0,0xa8);
    FUN_144a7f8ec(puVar10);
    *puVar10 = &PTR_FUN_14beea000;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    *(undefined4 *)(puVar10 + 7) = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    *(undefined4 *)(puVar10 + 0xd) = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    *(undefined4 *)(puVar10 + 0x10) = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    *(undefined8 **)(param_1 + 0x88) = puVar10;
    *(int *)(puVar10 + 0x14) = iVar14;
    FUN_140308182(puVar10,0);
    cVar7 = FUN_144729dda(param_1 + 0xa4);
    if (cVar7 == '\0') {
      local_f0 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      fVar18 = 0.0;
      local_e8 = 0.0;
      local_e0 = 0.0;
    }
    else {
      lVar9 = FUN_14479d2ce(param_1 + 0xa4);
      local_e0 = *(double *)(lVar9 + 0x170) - *(double *)(lVar9 + 0x188);
      local_e8 = *(double *)(lVar9 + 0x168) - *(double *)(lVar9 + 0x180);
      local_f0 = *(double *)(lVar9 + 0x160) - *(double *)(lVar9 + 0x178);
      dVar15 = ((*(double *)(lVar9 + 0x170) + *(double *)(lVar9 + 0x188)) - local_e0) * 0.5;
      dVar16 = ((*(double *)(lVar9 + 0x168) + *(double *)(lVar9 + 0x180)) - local_e8) * 0.5;
      dVar17 = ((*(double *)(lVar9 + 0x160) + *(double *)(lVar9 + 0x178)) - local_f0) * 0.5;
      local_e0 = local_e0 + dVar15;
      local_e8 = local_e8 + dVar16;
      local_f0 = local_f0 + dVar17;
      fVar18 = (float)dVar15;
      fVar20 = (float)dVar16;
      fVar19 = (float)dVar17;
    }
    iVar14 = 0;
    FUN_144b384f0(param_3,local_c8,0);
    FUN_1481f8bca(local_c8,&local_d4);
    *(undefined4 *)(param_1 + 0x78) = local_cc;
    *(undefined8 *)(param_1 + 0x70) = local_d4;
    *(float *)(param_1 + 0x7c) = fVar19;
    *(float *)(param_1 + 0x80) = fVar20;
    *(float *)(param_1 + 0x84) = fVar18;
    iVar8 = (**(code **)(*plVar3 + 0x60))(plVar3);
    if (0 < iVar8) {
      lVar11 = 10;
      lVar9 = 0;
      do {
        if ((*(char *)(param_2 + 0x98) != '\0') ||
           (lVar12 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x3b0) + lVar9 * 4) * 0x50,
           *(int *)(*(longlong *)(lVar5 + 0x140) + 8 + lVar12) ==
           *(int *)(*(longlong *)(lVar5 + 0x140) + 0x34 + lVar12))) {
          lVar12 = *(longlong *)(lVar5 + 0x3d0);
          dVar15 = *(double *)(lVar12 + -8 + lVar11 * 4);
          dVar16 = *(double *)(lVar12 + lVar11 * 4);
          dVar17 = *(double *)(lVar12 + -0x18 + lVar11 * 4);
          dVar4 = *(double *)(lVar12 + -0x20 + lVar11 * 4);
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x40);
          lVar13 = (longlong)iVar14 * 0x10;
          *(float *)(lVar6 + lVar13) =
               (float)(*(double *)(lVar12 + -0x10 + lVar11 * 4) -
                      *(double *)(lVar12 + -0x28 + lVar11 * 4));
          *(float *)(lVar6 + 4 + lVar13) = (float)(dVar15 - dVar4);
          *(float *)(lVar6 + 8 + lVar13) = (float)(dVar16 - dVar17);
          *(undefined4 *)(lVar6 + 0xc + lVar13) = 0;
          iVar14 = iVar14 + 1;
        }
        lVar9 = lVar9 + 1;
        iVar8 = (**(code **)(*plVar3 + 0x60))(plVar3);
        lVar11 = lVar11 + 0xe;
      } while (lVar9 < iVar8);
    }
    plVar3 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_f8)(local_f8);
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
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498abbb0 FUN_1498abbb0 body=71 status=ok
// SIG undefined FUN_1498abbb0(void)

undefined8 FUN_1498abbb0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_144729dda();
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1);
    return uVar2;
  }
  cVar1 = FUN_144729dda(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_14479d2ce(param_1 + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x660);
  }
  return uVar2;
}



// FUNCTION 1498abbf8 FUN_1498abbf8 body=310 status=ok
// SIG undefined FUN_1498abbf8(void)

void FUN_1498abbf8(longlong param_1,int param_2)

{
  undefined1 auStack_b8 [32];
  ulonglong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(int *)(param_1 + 0x70) = param_2;
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_146bff226(param_1,local_98,param_2 * 3);
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_146bff226(param_1 + 0x10,local_98,*(int *)(param_1 + 0x70) * 3);
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_146bff226(param_1 + 0x20,local_98,*(int *)(param_1 + 0x70) * 3);
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_146bff226(param_1 + 0x30,local_98,*(int *)(param_1 + 0x70) * 3);
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_146bff226(param_1 + 0x40,local_98,*(undefined4 *)(param_1 + 0x70));
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_146bff40c(param_1 + 0x50,local_98,1);
  local_98[0] = local_98[0] & 0xffffffff00000000;
  FUN_146f37e98(param_1 + 0x60,local_98,*(undefined4 *)(param_1 + 0x70));
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498abd30 FUN_1498abd30 body=5521 status=ok
// SIG undefined FUN_1498abd30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498abd30(undefined4 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  double dVar8;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  void *pvVar20;
  undefined8 uVar21;
  char cVar22;
  int iVar23;
  undefined4 uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  undefined4 *puVar30;
  double *pdVar31;
  int iVar32;
  longlong lVar33;
  ulonglong uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [12];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar48;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar50;
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  undefined1 auVar59 [12];
  double dVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar58;
  double dVar65;
  undefined1 auVar63 [16];
  double dVar66;
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  double dVar72;
  float fVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  float fVar80;
  float fVar81;
  undefined4 uVar82;
  float fVar83;
  undefined4 uVar84;
  float fVar85;
  double dVar86;
  float fVar87;
  double dVar88;
  double dVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar95 [16];
  double dVar96;
  undefined1 auStack_3a8 [32];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  longlong *local_360;
  undefined4 *local_358;
  ulonglong local_350;
  double local_348;
  double dStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined1 local_2b0 [24];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  void *local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  double dVar9;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (param_2 == 0) goto LAB_1498abdbd;
  *param_1 = 0;
  puVar30 = param_1 + 0x27;
  lVar25 = FUN_1498abbb0(puVar30);
  uVar84 = DAT_14c8464b8._4_4_;
  uVar82 = (undefined4)DAT_14c8464b8;
  uVar79 = DAT_14c8464b0._4_4_;
  uVar78 = (undefined4)DAT_14c8464b0;
  dVar35 = DAT_14c8464a8;
  dVar57 = DAT_14c8464a0;
  if (lVar25 == 0) goto LAB_1498abdbd;
  local_178 = DAT_14c846480;
  uStack_170 = DAT_14c846488;
  local_168 = DAT_14c846490;
  uStack_160 = DAT_14c846498;
  local_1f8 = DAT_14c8464c0;
  dStack_1f0 = DAT_14c8464c8;
  local_1e8 = DAT_14c8464d0;
  uStack_1e0 = uRam000000014c8464d8;
  puVar3 = param_1 + 0x29;
  cVar22 = FUN_144729dda(puVar3);
  if (cVar22 != '\0') {
    lVar26 = FUN_14479d2ce(puVar3);
    local_178 = *(void **)(lVar26 + 0x240);
    uStack_170 = *(double *)(lVar26 + 0x248);
    local_168 = *(double *)(lVar26 + 0x250);
    uStack_160 = *(undefined8 *)(lVar26 + 600);
    dVar57 = *(double *)(lVar26 + 0x260);
    dVar35 = *(double *)(lVar26 + 0x268);
    uVar78 = *(undefined4 *)(lVar26 + 0x270);
    uVar79 = *(undefined4 *)(lVar26 + 0x274);
    uVar82 = *(undefined4 *)(lVar26 + 0x278);
    uVar84 = *(undefined4 *)(lVar26 + 0x27c);
    local_1e8 = *(double *)(lVar26 + 0x290);
    uStack_1e0 = *(undefined8 *)(lVar26 + 0x298);
    local_1f8 = *(double *)(lVar26 + 0x280);
    dStack_1f0 = *(double *)(lVar26 + 0x288);
  }
  local_388._0_8_ = puVar3;
  fVar92 = *(float *)(param_3 + 0x14);
  auVar51._0_8_ = (double)*(float *)(param_3 + 0xc) * -65536.0 + dVar57;
  auVar51._8_8_ = (double)*(float *)(param_3 + 0x10) * -65536.0 + dVar35;
  auVar40._8_8_ = uStack_160;
  auVar40._0_8_ = local_168;
  *(undefined1 (*) [16])(param_1 + 8) = auVar40;
  *(void **)(param_1 + 4) = local_178;
  *(double *)(param_1 + 6) = uStack_170;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar51;
  *(double *)(param_1 + 0x10) = (double)fVar92 * -65536.0 + (double)CONCAT44(uVar79,uVar78);
  *(double *)(param_1 + 0x12) = (double)CONCAT44(uVar84,uVar82) + 0.0;
  auVar53._8_8_ = uStack_1e0;
  auVar53._0_8_ = local_1e8;
  *(double *)(param_1 + 0x14) = local_1f8;
  *(double *)(param_1 + 0x16) = dStack_1f0;
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar53;
  lVar26 = *(longlong *)(lVar25 + 0x218);
  local_360 = *(longlong **)(lVar25 + 0x220);
  if (local_360 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_360 + 1) = (int)local_360[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)(lVar26 + 0x3c0);
  iVar23 = (**(code **)(*(longlong *)(lVar26 + 0x3c0) + 0x60))(plVar4);
  iVar32 = 0;
  if (0 < iVar23) {
    lVar25 = 0;
    iVar32 = 0;
    do {
      if ((*(char *)(param_2 + 0x98) != '\0') ||
         (lVar27 = (longlong)*(int *)(*(longlong *)(lVar26 + 0x3b0) + lVar25 * 4) * 0x50,
         *(int *)(*(longlong *)(lVar26 + 0x140) + 8 + lVar27) ==
         *(int *)(*(longlong *)(lVar26 + 0x140) + 0x34 + lVar27))) {
        iVar32 = iVar32 + 1;
      }
      lVar25 = lVar25 + 1;
      iVar23 = (**(code **)(*plVar4 + 0x60))(plVar4);
    } while (lVar25 < iVar23);
  }
  local_358 = puVar30;
  if (iVar32 == *(int *)(*(longlong *)(param_1 + 0x24) + 0x48)) {
    FUN_1498ad2c2(puVar30,&local_178);
    pvVar20 = local_178;
    iVar23 = (int)uStack_170;
    lVar25 = *(longlong *)(param_1 + 0x24);
    if (((int)uStack_170 != *(int *)(lVar25 + 0x58)) ||
       (iVar32 = memcmp(local_178,*(void **)(lVar25 + 0x50),(longlong)(int)uStack_170 * 0x60),
       iVar32 != 0)) {
      if ((void **)(lVar25 + 0x50) != &local_178) {
        if (*(longlong *)(lVar25 + 0x50) != 0) {
          FUN_1400020a8();
          iVar23 = (int)uStack_170;
        }
        *(void **)(lVar25 + 0x50) = local_178;
        local_178 = (void *)0x0;
        *(int *)(lVar25 + 0x58) = iVar23;
        *(undefined4 *)(lVar25 + 0x5c) = uStack_170._4_4_;
        uStack_170 = 0.0;
      }
      *(undefined1 *)((longlong)param_1 + 0x99) = 1;
      pvVar20 = local_178;
    }
joined_r0x0001498ad2aa:
    if (pvVar20 != (void *)0x0) {
      FUN_1400020a8(pvVar20);
    }
  }
  else {
    FUN_1498ab5ce(param_1,param_2,param_3);
    *(undefined1 *)((longlong)param_1 + 0x99) = 1;
    FUN_1498ad2c2(puVar30,&local_178);
    lVar25 = *(longlong *)(param_1 + 0x24);
    pvVar20 = local_178;
    if ((void **)(lVar25 + 0x50) == &local_178) goto joined_r0x0001498ad2aa;
    if (*(longlong *)(lVar25 + 0x50) != 0) {
      FUN_1400020a8();
    }
    *(void **)(lVar25 + 0x50) = local_178;
    local_178 = (void *)0x0;
    *(int *)(lVar25 + 0x58) = (int)uStack_170;
    *(undefined4 *)(lVar25 + 0x5c) = uStack_170._4_4_;
  }
  uVar18 = local_388._0_8_;
  cVar22 = FUN_144729dda(local_388._0_8_);
  if (cVar22 == '\0') {
    local_2c8 = 0.0;
    fVar93 = 0.0;
    fVar94 = 0.0;
    fVar92 = 0.0;
    local_2c0 = 0.0;
    local_2b8 = 0.0;
  }
  else {
    lVar25 = FUN_14479d2ce(uVar18);
    local_2b8 = *(double *)(lVar25 + 0x170) - *(double *)(lVar25 + 0x188);
    local_2c0 = *(double *)(lVar25 + 0x168) - *(double *)(lVar25 + 0x180);
    local_2c8 = *(double *)(lVar25 + 0x160) - *(double *)(lVar25 + 0x178);
    dVar35 = ((*(double *)(lVar25 + 0x170) + *(double *)(lVar25 + 0x188)) - local_2b8) * 0.5;
    dVar66 = ((*(double *)(lVar25 + 0x168) + *(double *)(lVar25 + 0x180)) - local_2c0) * 0.5;
    dVar57 = ((*(double *)(lVar25 + 0x160) + *(double *)(lVar25 + 0x178)) - local_2c8) * 0.5;
    local_2b8 = local_2b8 + dVar35;
    local_2c0 = local_2c0 + dVar66;
    local_2c8 = local_2c8 + dVar57;
    fVar92 = (float)dVar35;
    fVar94 = (float)dVar66;
    fVar93 = (float)dVar57;
  }
  uVar34 = 0;
  FUN_144b384f0(param_3,local_2b0,0);
  FUN_1481f8bca(local_2b0,&local_178);
  param_1[0x1e] = (int)uStack_170;
  *(void **)(param_1 + 0x1c) = local_178;
  param_1[0x1f] = fVar93;
  param_1[0x20] = fVar94;
  param_1[0x21] = fVar92;
  iVar23 = (**(code **)(*plVar4 + 0x60))(plVar4);
  if (0 < iVar23) {
    lVar25 = 10;
    uVar78 = 0;
    uVar79 = 0x3ff00000;
    uVar82 = 0;
    uVar84 = 0x3ff00000;
    local_348 = 0.0;
    dStack_340 = 1.0;
    lVar27 = 0;
    do {
      iVar23 = *(int *)(*(longlong *)(lVar26 + 0x3b0) + lVar27 * 4);
      if ((*(char *)(param_2 + 0x98) != '\0') ||
         (lVar28 = (longlong)iVar23 * 0x50,
         *(int *)(*(longlong *)(lVar26 + 0x140) + 8 + lVar28) ==
         *(int *)(*(longlong *)(lVar26 + 0x140) + 0x34 + lVar28))) {
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x24) + 0x60) + (longlong)(int)uVar34 * 4) =
             iVar23;
        lVar33 = (longlong)((int)uVar34 * 3) * 0x10;
        puVar5 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x24) + 0x20) + lVar33);
        uVar18 = puVar5[1];
        puVar6 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x24) + 0x30) + lVar33);
        *puVar6 = *puVar5;
        puVar6[1] = uVar18;
        puVar5 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x24) + 0x20) + 0x10 + lVar33)
        ;
        uVar18 = puVar5[1];
        puVar6 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x24) + 0x30) + 0x10 + lVar33)
        ;
        *puVar6 = *puVar5;
        puVar6[1] = uVar18;
        puVar5 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x24) + 0x20) + 0x20 + lVar33)
        ;
        uVar18 = puVar5[1];
        puVar6 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x24) + 0x30) + 0x20 + lVar33)
        ;
        *puVar6 = *puVar5;
        puVar6[1] = uVar18;
        puVar5 = (undefined8 *)(**(longlong **)(param_1 + 0x24) + lVar33);
        uVar18 = puVar5[1];
        puVar6 = (undefined8 *)((*(longlong **)(param_1 + 0x24))[2] + lVar33);
        *puVar6 = *puVar5;
        puVar6[1] = uVar18;
        puVar5 = (undefined8 *)(**(longlong **)(param_1 + 0x24) + 0x10 + lVar33);
        uVar18 = puVar5[1];
        puVar6 = (undefined8 *)((*(longlong **)(param_1 + 0x24))[2] + 0x10 + lVar33);
        *puVar6 = *puVar5;
        puVar6[1] = uVar18;
        puVar5 = (undefined8 *)(**(longlong **)(param_1 + 0x24) + 0x20 + lVar33);
        uVar18 = puVar5[1];
        puVar6 = (undefined8 *)((*(longlong **)(param_1 + 0x24))[2] + 0x20 + lVar33);
        *puVar6 = *puVar5;
        puVar6[1] = uVar18;
        lVar28 = *(longlong *)(lVar26 + 0x3d0);
        dVar49 = (*(double *)(lVar28 + -0x18 + lVar25 * 4) + *(double *)(lVar28 + lVar25 * 4)) * 0.5
        ;
        dVar36 = (*(double *)(lVar28 + -0x20 + lVar25 * 4) + *(double *)(lVar28 + -8 + lVar25 * 4))
                 * 0.5;
        dVar37 = (*(double *)(lVar28 + -0x28 + lVar25 * 4) +
                 *(double *)(lVar28 + -0x10 + lVar25 * 4)) * 0.5;
        puVar30 = local_358;
        local_350 = uVar34;
        uVar24 = FUN_1498ad36a(local_358,&local_328);
        auVar53 = local_2e8;
        dVar57 = local_2e8._0_8_;
        dVar66 = local_2e8._8_8_;
        dVar35 = local_2d8._0_8_;
        dVar15 = local_2d8._8_8_;
        auVar39._4_4_ = uVar79;
        auVar39._0_4_ = uVar78;
        auVar39._12_4_ = uVar84;
        auVar39._8_4_ = uVar82;
        auVar40 = minpd(auVar39,local_2e8);
        auVar51 = minpd(ZEXT816(0x3ff0000000000000),local_2d8);
        auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
        auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
        iVar23 = movmskpd(uVar24,auVar41);
        auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
        auVar52._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
        uVar29 = movmskpd((int)puVar30,auVar52);
        local_388 = local_2e8;
        local_338 = 0;
        uStack_330 = 0x3ff0000000000000;
        if ((uVar29 & 0x3fffffff) == 0 && iVar23 == 0) {
          local_378 = dStack_310 * local_348;
          dStack_370 = dStack_310 * dStack_340;
          dVar37 = dVar37 * dVar57;
          dVar36 = dVar36 * dVar66;
          dVar49 = dVar49 * dVar35;
          dVar72 = dVar15 * 0.0;
          dVar57 = dVar36 * local_328 - dVar37 * dStack_320;
          dVar56 = dVar49 * dStack_320 - dVar36 * local_318;
          dVar64 = dVar37 * local_318 - dVar49 * local_328;
          dVar66 = dVar72 * dStack_310 - dVar72 * dStack_310;
          dVar56 = dVar56 + dVar56;
          dVar64 = dVar64 + dVar64;
          dVar57 = dVar57 + dVar57;
          dVar66 = dVar66 + dVar66;
          dVar67 = local_318 * 0.0 * -1.0 +
                   dStack_320 * local_348 + local_328 * 1.0 * 1.0 + dStack_310 * 0.0;
          dVar48 = local_318 * 0.0 * 1.0 +
                   dStack_320 * dStack_340 + local_328 * 0.0 * -1.0 + dStack_310 * 0.0;
          auVar68._0_8_ =
               local_318 * 1.0 * 1.0 + ((local_328 * 0.0 * 1.0 + local_378) - dStack_320 * 0.0);
          auVar68._8_8_ =
               local_318 * 0.0 * -1.0 + ((local_328 * 0.0 * -1.0 + dStack_370) - dStack_320 * 0.0);
          uVar78 = 0;
          uVar79 = 0x3ff00000;
          uVar82 = 0;
          uVar84 = 0x3ff00000;
          dVar37 = (dVar57 * dStack_320 - local_318 * dVar64) + dStack_310 * dVar56 + dVar37 +
                   local_308;
          dVar36 = (dVar56 * local_318 - dVar57 * local_328) + dStack_310 * dVar64 + dVar36 +
                   dStack_300;
          dVar57 = (dVar64 * local_328 - dStack_320 * dVar56) + dStack_310 * dVar57 + dVar49 +
                   local_2f8;
          dVar66 = (dVar66 * dStack_310 - dVar66 * dStack_310) + dStack_310 * dVar66 + dVar72 +
                   dStack_2f0;
          uVar24 = 0;
        }
        else {
          dVar48 = dStack_320 + dStack_320;
          dVar56 = local_318 + local_318;
          dVar67 = local_328 * (local_328 + local_328);
          local_1f8 = ((double)CONCAT44(uVar79,uVar78) - (local_318 * dVar56 + dStack_320 * dVar48))
                      * dVar57;
          dVar64 = (local_328 + local_328) * dStack_310;
          dStack_1b0 = (dVar56 * dStack_320 - dVar64) * dVar35;
          local_1b8 = (dVar48 * dStack_310 + local_328 * dVar56) * dVar35;
          dStack_1f0 = (dVar48 * local_328 + dVar56 * dStack_310) * dVar57;
          local_1c8 = (dVar56 * dStack_320 + dVar64) * dVar66;
          local_1e8 = (local_328 * dVar56 - dVar48 * dStack_310) * dVar57;
          uStack_1e0 = 0;
          local_1d8._8_8_ =
               ((double)CONCAT44(uVar84,uVar82) - (local_318 * dVar56 + dVar67)) * dVar66;
          local_1d8._0_8_ = (dVar48 * local_328 - dVar56 * dStack_310) * dVar66;
          uStack_1c0 = 0;
          local_1a8 = (1.0 - (dVar67 + dStack_320 * dVar48)) * dVar35;
          uStack_1a0 = 0;
          local_198 = local_308;
          dStack_190 = dStack_300;
          local_188 = local_2f8;
          uStack_180 = 0x3ff0000000000000;
          local_278 = 1.0;
          dStack_270 = 0.0;
          local_268 = 0.0;
          uStack_260 = 0;
          local_258 = 0.0;
          dStack_250 = 1.0;
          local_238 = 0.0;
          dStack_230 = 0.0;
          local_248 = 0.0;
          uStack_240 = 0;
          local_228 = 1.0;
          uStack_220 = 0;
          local_218._8_4_ = SUB84(dVar36,0);
          local_218._0_8_ = dVar37;
          local_218._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          local_208._8_8_ = 0x3ff0000000000000;
          local_208._0_8_ = dVar49;
          FUN_1447fea8d(&local_178,&local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar42._8_8_ = -(ulonglong)(0.0 <= dVar66);
          auVar42._0_8_ = -(ulonglong)(0.0 <= dVar57);
          auVar14._4_4_ = uVar79;
          auVar14._0_4_ = uVar78;
          auVar14._8_4_ = uVar82;
          auVar14._12_4_ = uVar84;
          auVar40 = blendvpd(_DAT_149936790,auVar14,auVar42);
          uVar34 = -(ulonglong)(0.0 <= dVar35 * 1.0);
          dVar57 = (double)(~uVar34 & 0xbff0000000000000 | uVar34 & 0x3ff0000000000000);
          dVar66 = auVar40._0_8_;
          local_168 = local_168 * dVar66;
          uStack_170 = uStack_170 * dVar66;
          local_178 = (void *)((double)local_178 * dVar66);
          dVar66 = auVar40._8_8_;
          local_148 = local_148 * dVar66;
          local_150 = local_150 * dVar66;
          local_158 = dVar66 * local_158;
          local_128 = local_128 * dVar57;
          local_130 = local_130 * dVar57;
          local_138 = dVar57 * local_138;
          pdVar31 = &local_298;
          iVar23 = FUN_14481fd10(pdVar31,&local_178);
          uVar24 = SUB84(pdVar31,0);
          dVar57 = local_288 * local_288 + local_298 * local_298;
          dVar66 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar60._0_8_ = dVar57 + dVar66;
          auVar60._8_8_ = dVar57 + dVar66;
          auVar43._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_);
          auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
          auVar40 = sqrtpd(auVar60,auVar60);
          auVar73._4_4_ = uVar79;
          auVar73._0_4_ = uVar78;
          auVar73._12_4_ = uVar84;
          auVar73._8_4_ = uVar82;
          auVar40 = divpd(auVar73,auVar40);
          auVar74._0_8_ = auVar40._0_8_ * local_288;
          auVar74._8_8_ = auVar40._8_8_ * dStack_280;
          dVar67 = (double)((ulonglong)(local_298 * auVar40._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_));
          dVar48 = (double)((ulonglong)(dStack_290 * auVar40._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_));
          auVar68 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar74,auVar43);
          dVar66 = 0.0;
          dVar57 = local_108;
          dVar37 = local_118;
          dVar36 = dStack_110;
        }
        auVar39 = _DAT_149934d80;
        dVar35 = dVar35 * 1.0;
        dVar15 = dVar15 * 0.0;
        auVar40 = *(undefined1 (*) [16])(param_1 + 0x14);
        dVar49 = auVar40._0_8_;
        dVar64 = auVar40._8_8_;
        auVar51 = *(undefined1 (*) [16])(param_1 + 0x18);
        dVar56 = auVar51._0_8_;
        auVar53 = minpd(auVar53,auVar40);
        auVar61._8_8_ = dVar15;
        auVar61._0_8_ = dVar35;
        auVar40 = minpd(auVar61,auVar51);
        auVar54._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
        auVar54._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
        iVar23 = movmskpd(iVar23,auVar54);
        auVar62._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
        auVar62._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
        uVar29 = movmskpd(uVar24,auVar62);
        dVar72 = auVar68._0_8_;
        dVar71 = auVar68._8_8_;
        uVar18 = local_388._0_8_;
        uVar21 = local_388._8_8_;
        if ((uVar29 & 0x3fffffff) == 0 && iVar23 == 0) {
          dVar89 = *(double *)(param_1 + 4);
          dVar96 = *(double *)(param_1 + 6);
          dVar16 = *(double *)(param_1 + 8);
          dVar17 = *(double *)(param_1 + 10);
          dVar12 = *(double *)(param_1 + 10);
          dVar11 = *(double *)(param_1 + 10);
          dVar50 = *(double *)(param_1 + 4);
          dVar13 = *(double *)(param_1 + 4);
          dVar8 = *(double *)(param_1 + 6);
          dVar9 = *(double *)(param_1 + 6);
          dVar88 = *(double *)(param_1 + 8);
          dVar86 = *(double *)(param_1 + 8);
          dVar58 = dVar48 * dVar88 * -1.0 + dVar72 * dVar8 + dVar71 * dVar50 * 1.0 + dVar67 * dVar12
          ;
          dVar65 = dVar67 * dVar86 * 1.0 + dVar71 * dVar9 + dVar72 * dVar13 * -1.0 + dVar48 * dVar11
          ;
          auVar95._0_8_ =
               dVar71 * dVar88 * 1.0 + ((dVar50 * dVar48 * 1.0 + dVar72 * dVar12) - dVar67 * dVar8);
          auVar95._8_8_ =
               dVar72 * dVar86 * -1.0 +
               ((dVar13 * dVar67 * -1.0 + dVar71 * dVar11) - dVar48 * dVar9);
          dVar37 = dVar37 * dVar49;
          dVar36 = dVar36 * dVar64;
          dVar57 = dVar57 * dVar56;
          dVar66 = dVar66 * auVar51._8_8_;
          dVar67 = dVar36 * dVar89 - dVar37 * dVar96;
          dVar71 = dVar57 * dVar96 - dVar36 * dVar16;
          dVar72 = dVar37 * dVar16 - dVar57 * dVar89;
          dVar48 = dVar66 * dVar17 - dVar66 * dVar17;
          dVar71 = dVar71 + dVar71;
          dVar72 = dVar72 + dVar72;
          dVar67 = dVar67 + dVar67;
          dVar48 = dVar48 + dVar48;
          uVar78 = 0;
          uVar79 = 0x3ff00000;
          uVar82 = 0;
          uVar84 = 0x3ff00000;
          dVar37 = (dVar67 * dVar96 - dVar16 * dVar72) + dVar12 * dVar71 + dVar37 +
                   *(double *)(param_1 + 0xc);
          dVar36 = (dVar71 * dVar16 - dVar67 * dVar89) + dVar11 * dVar72 + dVar36 +
                   *(double *)(param_1 + 0xe);
          dVar57 = (dVar72 * dVar89 - dVar96 * dVar71) + dVar12 * dVar67 + dVar57 +
                   *(double *)(param_1 + 0x10);
          dVar66 = (dVar48 * dVar17 - dVar48 * dVar17) + dVar11 * dVar48 + dVar66 +
                   *(double *)(param_1 + 0x12);
        }
        else {
          dVar8 = *(double *)(param_1 + 4);
          dVar9 = *(double *)(param_1 + 6);
          dVar13 = *(double *)(param_1 + 8);
          dVar88 = dVar9 + dVar9;
          dVar11 = dVar13 + dVar13;
          dVar96 = dVar8 * (dVar8 + dVar8);
          local_1a8 = (1.0 - (dVar96 + dVar9 * dVar88)) * dVar56;
          dVar66 = *(double *)(param_1 + 10);
          dVar12 = dVar11 * dVar66;
          dVar50 = (dVar8 + dVar8) * *(double *)(param_1 + 10);
          dVar66 = dVar88 * dVar66;
          local_1b8 = (dVar66 + *(double *)(param_1 + 4) * dVar11) * dVar56;
          dStack_1b0 = (dVar11 * dVar9 - dVar50) * dVar56;
          dVar86 = (double)local_388._0_8_ * dVar49;
          dVar89 = (double)local_388._8_8_ * dVar64;
          local_1f8 = ((double)CONCAT44(uVar79,uVar78) - (dVar13 * dVar11 + dVar9 * dVar88)) *
                      dVar49;
          dVar13 = ((double)CONCAT44(uVar84,uVar82) - (dVar13 * dVar11 + dVar96)) * dVar64;
          dStack_1f0 = (dVar88 * dVar8 + dVar12) * dVar49;
          local_1c8 = (dVar11 * dVar9 + dVar50) * dVar64;
          local_1e8 = (*(double *)(param_1 + 4) * dVar11 - dVar66) * dVar49;
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar13,0);
          local_1d8._0_8_ = (dVar88 * dVar8 - dVar12) * dVar64;
          local_1d8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = *(double *)(param_1 + 0xc);
          dStack_190 = *(double *)(param_1 + 0xe);
          local_188 = *(double *)(param_1 + 0x10);
          uStack_180 = 0x3ff0000000000000;
          dVar66 = dVar48 + dVar48;
          dVar11 = dVar72 + dVar72;
          dVar50 = dVar67 * (dVar67 + dVar67);
          local_228 = (1.0 - (dVar50 + dVar48 * dVar66)) * dVar35;
          dVar12 = (dVar67 + dVar67) * dVar71;
          local_238 = (dVar67 * dVar11 + dVar66 * dVar71) * dVar35;
          local_258 = (dVar66 * dVar67 - dVar11 * dVar71) * (double)local_388._8_8_;
          dStack_230 = (dVar11 * dVar48 - dVar12) * dVar35;
          local_278 = (1.0 - (dVar72 * dVar11 + dVar48 * dVar66)) * (double)local_388._0_8_;
          dStack_250 = (1.0 - (dVar72 * dVar11 + dVar50)) * (double)local_388._8_8_;
          dStack_270 = (dVar66 * dVar67 + dVar11 * dVar71) * (double)local_388._0_8_;
          local_248 = (dVar11 * dVar48 + dVar12) * (double)local_388._8_8_;
          local_268 = (dVar67 * dVar11 - dVar66 * dVar71) * (double)local_388._0_8_;
          uStack_260 = 0;
          uStack_240 = 0;
          uVar78 = (undefined4)DAT_149934d80;
          uVar79 = DAT_149934d80._4_4_;
          uVar82 = DAT_149934d80._8_4_;
          uVar84 = DAT_149934d80._12_4_;
          auVar19._8_8_ = uStack_330;
          auVar19._0_8_ = local_338;
          uStack_220 = 0;
          local_218._8_8_ = dVar36;
          local_218._0_8_ = dVar37;
          local_208._8_4_ = 0;
          local_208._0_8_ = dVar57;
          local_208._12_4_ = 0x3ff00000;
          local_378 = dVar86;
          dStack_370 = dVar89;
          FUN_1447fea8d(&local_178,&local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar44._8_8_ = -(ulonglong)(0.0 <= dVar89);
          auVar44._0_8_ = -(ulonglong)(0.0 <= dVar86);
          auVar53 = blendvpd(_DAT_149936790,auVar39,auVar44);
          uVar34 = -(ulonglong)(0.0 <= dVar35 * dVar56);
          dVar57 = (double)(~uVar34 & 0xbff0000000000000 | uVar34 & 0x3ff0000000000000);
          dVar66 = auVar53._0_8_;
          local_168 = local_168 * dVar66;
          uStack_170 = uStack_170 * dVar66;
          local_178 = (void *)((double)local_178 * dVar66);
          dVar66 = auVar53._8_8_;
          local_148 = local_148 * dVar66;
          local_150 = local_150 * dVar66;
          local_158 = dVar66 * local_158;
          local_128 = local_128 * dVar57;
          local_130 = local_130 * dVar57;
          local_138 = dVar57 * local_138;
          FUN_14481fd10(&local_298,&local_178);
          dVar57 = local_288 * local_288 + local_298 * local_298;
          dVar66 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar69._0_8_ = dVar57 + dVar66;
          auVar69._8_8_ = dVar57 + dVar66;
          auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_);
          auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_);
          auVar53 = sqrtpd(auVar69,auVar69);
          auVar53 = divpd(auVar39,auVar53);
          auVar75._0_8_ = auVar53._0_8_ * local_288;
          auVar75._8_8_ = auVar53._8_8_ * dStack_280;
          dVar58 = (double)((ulonglong)(local_298 * auVar53._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_));
          dVar65 = (double)((ulonglong)(dStack_290 * auVar53._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_));
          auVar95 = blendvpd(auVar19,auVar75,auVar45);
          dVar66 = 0.0;
          dVar57 = local_108;
          dVar37 = local_118;
          dVar36 = dStack_110;
        }
        fVar93 = (float)(dVar35 * dVar56);
        fVar94 = (float)(dVar15 * auVar51._8_8_);
        auVar46._12_4_ = fVar94;
        auVar46._8_4_ = fVar93;
        auVar46._0_4_ = (float)((double)uVar18 * dVar49);
        auVar46._4_4_ = (float)((double)uVar21 * dVar64);
        fVar85 = (float)auVar95._0_8_;
        fVar87 = (float)auVar95._8_8_;
        fVar90 = (float)dVar58;
        fVar91 = (float)dVar65;
        fVar80 = fVar91 + fVar91;
        fVar83 = fVar85 + fVar85;
        fVar92 = fVar90 * (fVar90 + fVar90);
        fVar81 = (fVar90 + fVar90) * fVar87;
        lVar28 = **(longlong **)(param_1 + 0x24);
        pfVar7 = (float *)(lVar28 + lVar33);
        *pfVar7 = (1.0 - (fVar85 * fVar83 + fVar91 * fVar80)) * auVar46._0_4_;
        pfVar7[1] = (fVar80 * fVar90 - fVar83 * fVar87) * auVar46._4_4_;
        pfVar7[2] = (fVar83 * fVar90 + fVar80 * fVar87) * fVar93;
        pfVar7[3] = (float)dVar37;
        pfVar7 = (float *)(lVar28 + 0x10 + lVar33);
        *pfVar7 = (fVar80 * fVar90 + fVar83 * fVar87) * auVar46._0_4_;
        pfVar7[1] = (1.0 - (fVar85 * fVar83 + fVar92)) * auVar46._4_4_;
        pfVar7[2] = (fVar83 * fVar91 - fVar81) * fVar93;
        pfVar7[3] = (float)dVar36;
        pfVar7 = (float *)(lVar28 + 0x20 + lVar33);
        *pfVar7 = (fVar83 * fVar90 - fVar80 * fVar87) * auVar46._0_4_;
        pfVar7[1] = (fVar83 * fVar91 + fVar81) * auVar46._4_4_;
        pfVar7[2] = (1.0 - (fVar91 * fVar80 + fVar92)) * fVar93;
        pfVar7[3] = (float)dVar57;
        auVar10._4_4_ = -(uint)(DAT_1499314c0._4_4_ < ABS(auVar46._4_4_));
        auVar10._0_4_ = -(uint)((float)DAT_1499314c0 < ABS(auVar46._0_4_));
        auVar10._8_4_ = -(uint)(DAT_1499314c0._8_4_ < ABS(fVar93));
        auVar10._12_4_ = -(uint)(DAT_1499314c0._12_4_ < ABS(fVar94));
        iVar23 = movmskps((int)lVar28,auVar10);
        fVar92 = _DAT_14c846060;
        fVar93 = fRam000000014c846064;
        fVar94 = fRam000000014c846068;
        fVar80 = fRam000000014c84606c;
        auVar38 = _DAT_14c846080;
        auVar59 = _DAT_14c846070;
        if (iVar23 != 0) {
          auVar40 = divps(_DAT_149e1ef10,auVar46);
          auVar53 = insertps(auVar46,0x3f800000,0x30);
          auVar47._0_4_ = -(uint)((float)DAT_1499314c0 < ABS(auVar53._0_4_)) & auVar40._0_4_;
          auVar47._4_4_ = -(uint)(DAT_1499314c0._4_4_ < ABS(auVar53._4_4_)) & auVar40._4_4_;
          auVar47._8_4_ = -(uint)(DAT_1499314c0._8_4_ < ABS(auVar53._8_4_)) & auVar40._8_4_;
          auVar47._12_4_ = -(uint)(DAT_1499314c0._12_4_ < ABS(auVar53._12_4_)) & auVar40._12_4_;
          auVar53 = blendps(auVar47,ZEXT816(0),8);
          fVar92 = fVar90 * -1.0;
          fVar93 = fVar91 * -1.0;
          fVar94 = fVar85 * -1.0;
          fVar80 = fVar87 * 1.0;
          fVar81 = (float)dVar37 * auVar53._0_4_;
          fVar83 = (float)dVar36 * auVar53._4_4_;
          fVar85 = (float)dVar57 * auVar53._8_4_;
          fVar87 = (float)dVar66 * auVar53._12_4_;
          fVar90 = fVar83 * fVar92 - fVar93 * fVar81;
          fVar91 = fVar85 * fVar93 - fVar94 * fVar83;
          fVar76 = fVar81 * fVar94 - fVar92 * fVar85;
          fVar77 = fVar87 * fVar80 - fVar80 * fVar87;
          fVar90 = fVar90 + fVar90;
          fVar91 = fVar91 + fVar91;
          fVar76 = fVar76 + fVar76;
          fVar77 = fVar77 + fVar77;
          auVar63._0_4_ = 0.0 - ((fVar90 * fVar93 - fVar76 * fVar94) + fVar80 * fVar91 + fVar81);
          auVar63._4_4_ = 0.0 - ((fVar91 * fVar94 - fVar90 * fVar92) + fVar80 * fVar76 + fVar83);
          auVar63._8_4_ = 0.0 - ((fVar76 * fVar92 - fVar91 * fVar93) + fVar80 * fVar90 + fVar85);
          auVar63._12_4_ = 0.0 - ((fVar77 * fVar80 - fVar77 * fVar80) + fVar80 * fVar77 + fVar87);
          auVar40 = blendps(auVar63,ZEXT816(0),8);
          auVar38 = auVar53._0_12_;
          auVar59 = auVar40._0_12_;
        }
        fVar90 = fVar93 + fVar93;
        fVar76 = fVar94 + fVar94;
        fVar87 = fVar92 * (fVar92 + fVar92);
        fVar81 = auVar38._0_4_;
        fVar83 = auVar38._4_4_;
        fVar85 = auVar38._8_4_;
        fVar91 = (fVar92 + fVar92) * fVar80;
        auVar55._0_4_ = (fVar90 * fVar92 + fVar76 * fVar80) * fVar81;
        lVar28 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x20);
        auVar70._4_4_ = (fVar76 * fVar93 + fVar91) * fVar83;
        auVar70._0_4_ = (fVar76 * fVar92 - fVar90 * fVar80) * fVar81;
        auVar70._8_4_ = (1.0 - (fVar93 * fVar90 + fVar87)) * fVar85;
        auVar70._12_4_ = auVar59._8_4_;
        auVar55._4_4_ = (1.0 - (fVar94 * fVar76 + fVar87)) * fVar83;
        auVar55._8_4_ = (fVar76 * fVar93 - fVar91) * fVar85;
        auVar55._12_4_ = auVar59._4_4_;
        pfVar7 = (float *)(lVar28 + lVar33);
        *pfVar7 = (1.0 - (fVar94 * fVar76 + fVar93 * fVar90)) * fVar81;
        pfVar7[1] = (fVar90 * fVar92 - fVar76 * fVar80) * fVar83;
        pfVar7[2] = (fVar76 * fVar92 + fVar90 * fVar80) * fVar85;
        pfVar7[3] = auVar59._0_4_;
        *(undefined1 (*) [16])(lVar28 + 0x10 + lVar33) = auVar55;
        *(undefined1 (*) [16])(lVar28 + 0x20 + lVar33) = auVar70;
        uVar34 = (ulonglong)((int)local_350 + 1);
      }
      lVar27 = lVar27 + 1;
      iVar23 = (**(code **)(*plVar4 + 0x60))(plVar4);
      lVar25 = lVar25 + 0xe;
    } while (lVar27 < iVar23);
  }
  plVar4 = local_360;
  if (local_360 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_360 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_360)(local_360);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1498abdbd:
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498ad2c2 FUN_1498ad2c2 body=167 status=ok
// SIG undefined FUN_1498ad2c2(void)

undefined8 * FUN_1498ad2c2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  cVar5 = FUN_144729dda(param_1 + 8);
  if (cVar5 == '\0') {
    cVar5 = FUN_144729dda(param_1);
    *param_2 = 0;
    param_2[1] = 0;
    if (cVar5 != '\0') {
      lVar7 = FUN_14479d2ce(param_1);
      lVar3 = *(longlong *)(lVar7 + 0x218);
      plVar4 = *(longlong **)(lVar7 + 0x220);
      if (plVar4 != (longlong *)0x0) {
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
      FUN_146eb7819(lVar3 + 0xb0,lVar3 + 0x110,param_2);
    }
  }
  else {
    uVar6 = FUN_14479d2ce(param_1 + 8);
    FUN_14749f19a(uVar6,param_2,0);
  }
  return param_2;
}



// FUNCTION 1498ad36a FUN_1498ad36a body=190 status=ok
// SIG undefined FUN_1498ad36a(void)

double * FUN_1498ad36a(longlong param_1,double *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  char cVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  
  cVar11 = FUN_144729dda(param_1 + 8);
  if (cVar11 != '\0') {
    uVar12 = FUN_14479d2ce(param_1 + 8);
    plVar13 = (longlong *)FUN_1474a5e18(uVar12);
    if ((-1 < (int)param_3) && ((int)param_3 < (int)plVar13[1])) {
      lVar4 = *plVar13;
      lVar14 = (ulonglong)param_3 * 0x30;
      uVar12 = *(undefined8 *)(lVar4 + 0x20 + lVar14);
      dVar9 = (double)(float)uVar12;
      dVar10 = (double)(float)((ulonglong)uVar12 >> 0x20);
      uVar12 = *(undefined8 *)(lVar4 + 0x28 + lVar14);
      dVar6 = (double)(float)uVar12;
      dVar7 = (double)(float)((ulonglong)uVar12 >> 0x20);
      uVar12 = *(undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar1 = *(undefined8 *)(lVar4 + 0x18 + lVar14);
      uVar2 = *(undefined8 *)(lVar4 + lVar14);
      uVar3 = *(undefined8 *)(lVar4 + 8 + lVar14);
      *param_2 = (double)(float)uVar2;
      param_2[1] = (double)(float)((ulonglong)uVar2 >> 0x20);
      param_2[2] = (double)(float)uVar3;
      param_2[3] = (double)(float)((ulonglong)uVar3 >> 0x20);
      param_2[4] = (double)(float)uVar12;
      param_2[5] = (double)(float)((ulonglong)uVar12 >> 0x20);
      param_2[6] = (double)(float)uVar1;
      param_2[7] = (double)(float)((ulonglong)uVar1 >> 0x20);
      goto LAB_1498ad415;
    }
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  dVar6 = 1.0;
  dVar7 = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  dVar9 = 1.0;
  dVar10 = 1.0;
LAB_1498ad415:
  auVar8._8_4_ = SUB84(dVar10,0);
  auVar8._0_8_ = dVar9;
  auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar8;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar5;
  return param_2;
}



// FUNCTION 1498ad428 FUN_1498ad428 body=131 status=ok
// SIG undefined FUN_1498ad428(void)

void FUN_1498ad428(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined4 *)
           FUN_1498c0372(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  *(undefined8 *)(puVar1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(puVar1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *puVar1 = *param_2;
  puVar3 = (undefined8 *)(param_2 + 4);
  puVar4 = (undefined8 *)(puVar1 + 4);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1[0x1e] = param_2[0x1e];
  *(undefined8 *)(puVar1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(puVar1 + 0x1f) = *(undefined8 *)(param_2 + 0x1f);
  puVar1[0x21] = param_2[0x21];
  return;
}



// FUNCTION 1498ad4ac FUN_1498ad4ac body=613 status=ok
// SIG undefined FUN_1498ad4ac(void)

void FUN_1498ad4ac(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar6 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0xd0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0xd0) == lVar3) {
          if ((((lVar6 + 0x10U & 0xffffffffffffffef) == 0) || (*(longlong *)(lVar6 + 0x98) == 0)) ||
             ((*(byte *)param_2[4] & 1) == 0)) break;
          FUN_1498ad712(*(undefined8 *)(lVar6 + 0xa0),*(longlong *)(lVar6 + 0x98) + 0x10);
          FUN_1498ad712(*(longlong *)(lVar6 + 0xa0) + 0x10,*(longlong *)(lVar6 + 0x98) + 0x28);
          FUN_1498ad712(*(longlong *)(lVar6 + 0xa0) + 0x20,*(longlong *)(lVar6 + 0x98) + 0x40);
          FUN_1498ad712(*(longlong *)(lVar6 + 0xa0) + 0x30,*(longlong *)(lVar6 + 0x98) + 0x58);
          FUN_1498ad712(*(longlong *)(lVar6 + 0xa0) + 0x40,*(longlong *)(lVar6 + 0x98) + 0x70);
          uVar1 = *param_2;
          lVar3 = *(longlong *)(lVar6 + 0x98);
          iVar5 = *(int *)(lVar3 + 0x98);
          lVar7 = lVar3;
          if (iVar5 == 0) {
            if (*(longlong *)(lVar3 + 0x88) != 0) break;
            FUN_1401211f6(lVar3 + 0x90,0xc,1);
            iVar5 = *(int *)(lVar3 + 0x98);
            if (iVar5 == 0) break;
            lVar7 = *(longlong *)(lVar6 + 0x98);
          }
          local_48 = 0;
          local_50 = 0x10119;
          local_58 = 4;
          local_54 = iVar5 + 0xfU >> 2 & 0xfffffffc;
          FUN_1447f2a09(uVar1,lVar7 + 0x88,&local_58,L"NiagaraGeometryCollection");
          uVar2 = *(undefined8 *)(lVar3 + 0x90);
          uVar4 = FUN_144735dd8(uVar1,*(longlong *)(lVar6 + 0x98) + 0x88,0);
          local_68 = 0;
          FUN_1447759b4(uVar1,uVar4,uVar2,iVar5);
          *(undefined4 *)(lVar3 + 0x98) = 0;
          if (*(int *)(lVar3 + 0x9c) != 0) {
            FUN_144893a1c(lVar3 + 0x90,0);
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0xc0);
      } while (iVar5 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498ad712 FUN_1498ad712 body=268 status=ok
// SIG undefined FUN_1498ad712(void)

void FUN_1498ad712(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  void *_Dst;
  uint uVar3;
  
  cVar2 = DAT_14ca85169;
  if ((*(int *)(param_1 + 1) == 0) || (lVar1 = *param_2, lVar1 == 0)) {
    return;
  }
  uVar3 = *(int *)(param_1 + 1) << 4;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
  }
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,lVar1,0,uVar3,1)
  ;
  if (cVar2 == '\0') {
    FUN_14002049c(&DAT_14ca85100,0);
  }
  memcpy(_Dst,(void *)*param_1,(ulonglong)uVar3);
  lVar1 = *param_2;
  if (DAT_14ca85169 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001498ad7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar1);
    return;
  }
  FUN_14002049c(&DAT_14ca85100,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar1);
  FUN_14002049c(&DAT_14ca85100,0);
  return;
}



// FUNCTION 1498ad81e FUN_1498ad81e body=141 status=ok
// SIG undefined FUN_1498ad81e(void)

undefined8 FUN_1498ad81e(undefined8 param_1,void *param_2,undefined8 param_3)

{
  memset(param_2,0,0xb0);
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0x3ff00000;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined2 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  FUN_1498ad8ac(param_1,param_3,param_2);
  FUN_1498ab5ce(param_2,param_1,param_3);
  return 1;
}



// FUNCTION 1498ad8ac FUN_1498ad8ac body=334 status=ok
// SIG undefined FUN_1498ad8ac(void)

void FUN_1498ad8ac(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  uint local_78 [2];
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60 [2];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0xffffffff;
  local_70 = 0;
  uStack_68 = 0;
  local_60[0] = FUN_144830b78(local_60,&DAT_14cb42160);
  local_58 = 0;
  uStack_50 = 0;
  FUN_1404e5848(local_78,param_2 + 0x1e8,param_1 + 0x78);
  if ((((ulonglong)local_78[0] == 0xffffffff) || ((int)local_78[0] < 0)) ||
     (*(int *)(local_70 + 0x48) <= (int)local_78[0])) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(local_70 + 0x40) + (ulonglong)local_78[0] * 8);
  }
  *(undefined8 *)(param_3 + 0x9c) = 0;
  *(undefined8 *)(param_3 + 0xa4) = 0;
  param_3 = param_3 + 0x9c;
  switch(*(undefined1 *)(param_1 + 0x38)) {
  case 1:
    FUN_1498adb12(param_1,param_3);
    break;
  case 2:
    FUN_1498adbc4(param_2,param_3);
    break;
  case 4:
    FUN_1498adcf0(uVar2,param_3);
    break;
  default:
    cVar1 = FUN_1498adb12(param_1,param_3);
    if (((cVar1 != '\0') || (cVar1 = FUN_1498adcf0(uVar2,param_3), cVar1 != '\0')) ||
       (cVar1 = FUN_1498adbc4(param_2,param_3), cVar1 != '\0')) break;
  case 3:
    FUN_1498adc7c(param_1,param_3);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498ada08 FUN_1498ada08 body=73 status=ok
// SIG undefined FUN_1498ada08(void)

undefined8 FUN_1498ada08(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_1498ad8ac(param_1,param_3,param_2);
  if (((param_2 != 0) && (param_3 != 0)) && (*(longlong *)(param_2 + 0x88) != 0)) {
    FUN_1498abd30(param_2,param_1,param_3);
  }
  return 0;
}



// FUNCTION 1498ada52 FUN_1498ada52 body=192 status=ok
// SIG undefined FUN_1498ada52(void)

undefined4 FUN_1498ada52(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar4 = FUN_1414db5a0();
  if ((char)uVar4 != '\0') {
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (DAT_14c950c29 == '\x01') {
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar5 = *(longlong *)(param_1 + 0x40);
      }
    }
    *(longlong *)(param_2 + 0x40) = lVar5;
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    FUN_144a787a6(param_2 + 0x60,param_1 + 0x60);
    lVar5 = *(longlong *)(param_1 + 0x70);
    if (DAT_14c950c29 == '\x01') {
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar5 = *(longlong *)(param_1 + 0x70);
      }
    }
    *(longlong *)(param_2 + 0x70) = lVar5;
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x80);
    FUN_1447a122a(param_2 + 0x88,param_1 + 0x88);
    *(undefined1 *)(param_2 + 0x98) = *(undefined1 *)(param_1 + 0x98);
  }
  return uVar4;
}



// FUNCTION 1498adb12 FUN_1498adb12 body=177 status=ok
// SIG undefined FUN_1498adb12(void)

undefined8 FUN_1498adb12(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x70);
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
    lVar2 = FUN_1498add9c(param_1 + 0x48);
    if (lVar2 != 0) {
      lVar2 = FUN_1498add9c(param_1 + 0x48);
      FUN_14485c47a(param_2 + 8,*(undefined8 *)(lVar2 + 0x390));
    }
    uVar1 = 0;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
    }
    local_28 = 0;
    FUN_14485c47a(&local_28,lVar2);
    *(undefined8 *)(param_2 + 8) = local_28;
    uVar1 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498adbc4 FUN_1498adbc4 body=183 status=ok
// SIG undefined FUN_1498adbc4(void)

ulonglong FUN_1498adbc4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  param_1 = param_1 + 0x48;
  lVar3 = FUN_14479d2ce(param_1);
  lVar6 = lVar3;
  if (lVar3 == 0) {
    bVar2 = 0;
  }
  else {
    do {
      lVar4 = FUN_140f5398e();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) goto LAB_1498adc3f;
      plVar1 = (longlong *)(lVar6 + 0x120);
      lVar6 = *plVar1;
    } while (*plVar1 != 0);
    uVar5 = FUN_140f5398e();
    lVar6 = FUN_144a78ede(lVar3,uVar5);
    if ((lVar6 == 0) || ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0)) {
      param_1 = FUN_14348b10e(lVar3);
      bVar2 = FUN_1498ade62(param_1,param_2);
    }
    else {
LAB_1498adc3f:
      param_1 = param_2 + 8;
      FUN_14485c47a(param_1,lVar6);
      bVar2 = 1;
    }
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar3 != 0 & bVar2) & 0xffffffff;
}



// FUNCTION 1498adc7c FUN_1498adc7c body=114 status=ok
// SIG undefined FUN_1498adc7c(void)

void FUN_1498adc7c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_28 = 0;
  FUN_14485c47a(&local_28,lVar1);
  *param_2 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498adcf0 FUN_1498adcf0 body=171 status=ok
// SIG undefined FUN_1498adcf0(void)

ulonglong FUN_1498adcf0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  
  if (param_1 == 0) {
LAB_1498adcfc:
    uVar4 = 0;
  }
  else {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (lVar3 = param_1,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
       != lVar2 + 0x30)) {
      lVar3 = 0;
    }
    cVar1 = FUN_1498ade62(lVar3,param_2);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (cVar1 != '\0') goto LAB_1498adcfe;
    lVar2 = FUN_140f5398e();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) {
      lVar2 = FUN_1411a1912();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_1498adcfc;
    }
    else {
      param_2 = param_2 + 8;
    }
    FUN_14485c47a(param_2,param_1);
  }
LAB_1498adcfe:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1498add9c FUN_1498add9c body=197 status=ok
// SIG undefined FUN_1498add9c(void)

longlong FUN_1498add9c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14124776e();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1498ade62 FUN_1498ade62 body=407 status=ok
// SIG undefined FUN_1498ade62(void)

undefined8 FUN_1498ade62(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    lVar4 = FUN_14124776e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      lVar4 = *(longlong *)(param_1 + 0x390);
LAB_1498adfe2:
      FUN_14485c47a(param_2 + 8,lVar4);
      uVar6 = 1;
      goto LAB_1498adf2e;
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar2 = param_1 + 0x250;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar2;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar7 = *(int *)(param_1 + 0x268);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar6 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar3 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar7) || (local_68 = uVar6, uStack_50 != lVar2)) {
      do {
        local_68 = uVar6;
        lVar4 = *(longlong *)(*local_80 + (longlong)iVar3 * 0x10);
        if (lVar4 != 0) {
          lVar5 = FUN_140f5398e();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
             ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) goto LAB_1498adfe2;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar3 = local_68._4_4_;
        uVar6 = local_68;
      } while ((CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar7) ||
               local_80 != plVar1);
    }
  }
  uVar6 = 0;
LAB_1498adf2e:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1498adffa FUN_1498adffa body=94 status=ok
// SIG undefined FUN_1498adffa(void)

undefined8 FUN_1498adffa(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x98) == '\x01')) {
    cVar1 = FUN_144729dda(param_2 + 0xa4);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_2 + 0xa4);
      FUN_1474a1ca4(uVar2,*(longlong *)(param_2 + 0x90) + 0x50,*(byte *)(param_1 + 0x98) ^ 1);
    }
  }
  return 0;
}



// FUNCTION 1498ae058 FUN_1498ae058 body=170 status=ok
// SIG undefined FUN_1498ae058(void)

undefined4 FUN_1498ae058(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
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
      if (((*(longlong *)(param_2 + 0x70) == lVar1) &&
          (*(longlong *)(param_1 + 0x78) == *(longlong *)(param_2 + 0x78))) &&
         (*(int *)(param_1 + 0x80) == *(int *)(param_2 + 0x80))) {
        return CONCAT31((int3)((uint)*(int *)(param_1 + 0x80) >> 8),
                        *(char *)(param_2 + 0x98) == *(char *)(param_1 + 0x98));
      }
    }
  }
  return 0;
}



// FUNCTION 1498ae102 FUN_1498ae102 body=709 status=ok
// SIG undefined FUN_1498ae102(void)

void FUN_1498ae102(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cc30d78) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar4 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    uVar2 = FUN_144a3f946();
    puVar4[2] = uVar2;
    *puVar4 = &PTR_FUN_14beebbc0;
    puVar4[3] = 0;
    FUN_14485c47a(puVar4 + 3,param_1);
    pcVar3 = FUN_1498ae446;
LAB_1498ae198:
    puVar4[4] = pcVar3;
  }
  else {
    if (lVar1 == DAT_14cc30d80) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar4 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14ad81180;
      uVar2 = FUN_144a3f946();
      puVar4[2] = uVar2;
      *puVar4 = &PTR_FUN_14beebbc0;
      puVar4[3] = 0;
      FUN_14485c47a(puVar4 + 3,param_1);
      pcVar3 = FUN_1498ae4ec;
      goto LAB_1498ae198;
    }
    if (lVar1 == DAT_14cc30d88) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar4 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14ad81180;
      uVar2 = FUN_144a3f946();
      puVar4[2] = uVar2;
      *puVar4 = &PTR_FUN_14beebbc0;
      puVar4[3] = 0;
      FUN_14485c47a(puVar4 + 3,param_1);
      pcVar3 = FUN_1498ae798;
      goto LAB_1498ae198;
    }
    if (lVar1 == DAT_14cc30d90) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar4 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14ad81180;
      uVar2 = FUN_144a3f946();
      puVar4[2] = uVar2;
      *puVar4 = &PTR_FUN_14beebbc0;
      puVar4[3] = 0;
      FUN_14485c47a(puVar4 + 3,param_1);
      pcVar3 = FUN_1498aec42;
      goto LAB_1498ae198;
    }
    if (lVar1 == DAT_14cc30d98) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar4 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14ad81180;
      uVar2 = FUN_144a3f946();
      puVar4[2] = uVar2;
      *puVar4 = &PTR_FUN_14beebbc0;
      puVar4[3] = 0;
      FUN_14485c47a(puVar4 + 3,param_1);
      pcVar3 = FUN_1498af12a;
      goto LAB_1498ae198;
    }
    if (lVar1 != DAT_14cc30da0) goto LAB_1498ae1af;
    FUN_1498ae3c8(&local_40,param_1);
  }
  FUN_144a450dc(param_4,&local_40);
  FUN_1449db362(&local_40);
LAB_1498ae1af:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ae3c8 FUN_1498ae3c8 body=125 status=ok
// SIG undefined FUN_1498ae3c8(void)

longlong * FUN_1498ae3c8(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beebbc0;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = FUN_1498affd0;
  return param_1;
}



// FUNCTION 1498ae446 FUN_1498ae446 body=164 status=ok
// SIG undefined FUN_1498ae446(void)

void FUN_1498ae446(undefined8 param_1,char *param_2)

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
  FUN_1498b02e2(local_20);
  FUN_144a76cd4(&local_30,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(*(longlong *)(local_18 + 0x90) + 0x70);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
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



// FUNCTION 1498ae4ec FUN_1498ae4ec body=683 status=ok
// SIG undefined FUN_1498ae4ec(void)

void FUN_1498ae4ec(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
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
  undefined8 uStack_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1498b02e2(local_20);
  local_38 = (int *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a98d08(&local_38,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_78,param_2);
  piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar10 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar10) {
    iVar9 = 0;
    do {
      fVar14 = DAT_14c846338;
      fVar15 = DAT_14c846330._4_4_;
      piVar10 = local_38 + local_28;
      lVar11 = (longlong)*local_38;
      if ((lVar11 < 0) ||
         (lVar7 = *(longlong *)(local_18 + 0x90), *(int *)(lVar7 + 0x68) <= *local_38)) {
LAB_1498ae69f:
        *local_68 = (float)DAT_14c846330;
        *local_58 = fVar15;
        *local_48 = fVar14;
        fVar14 = DAT_14c846338;
        fVar15 = DAT_14c846330._4_4_;
        *local_98 = (float)DAT_14c846330;
      }
      else {
        iVar6 = *(int *)(*(longlong *)(lVar7 + 0x60) + lVar11 * 4);
        if (((longlong)iVar6 < 0) || (*(int *)(lVar7 + 0x58) <= iVar6)) goto LAB_1498ae69f;
        lVar8 = *(longlong *)(lVar7 + 0x50);
        lVar13 = (longlong)iVar6 * 0x60;
        dVar4 = *(double *)(lVar8 + 0x30 + lVar13);
        dVar5 = *(double *)(lVar8 + 0x28 + lVar13);
        lVar7 = *(longlong *)(lVar7 + 0x40);
        lVar11 = lVar11 * 0x10;
        fVar3 = *(float *)(lVar7 + lVar11);
        fVar15 = *(float *)(lVar7 + 4 + lVar11);
        fVar14 = *(float *)(lVar7 + 8 + lVar11);
        *local_68 = (float)*(double *)(lVar8 + 0x20 + lVar13);
        *local_58 = (float)dVar5;
        *local_48 = (float)dVar4;
        *local_98 = fVar3;
      }
      local_48 = local_48 + local_40;
      local_58 = local_58 + local_50;
      local_68 = local_68 + local_60;
      local_98 = local_98 + local_90;
      pfVar1 = local_88 + local_80;
      *local_88 = fVar15;
      pfVar2 = local_78 + local_70;
      *local_78 = fVar14;
      iVar9 = iVar9 + 1;
      piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar12 = (int *)(param_2 + 0x3c);
      }
      local_88 = pfVar1;
      local_78 = pfVar2;
      local_38 = piVar10;
    } while (iVar9 < *piVar12);
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ae798 FUN_1498ae798 body=1193 status=ok
// SIG undefined FUN_1498ae798(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498ae798(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  int iVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_118 [32];
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1498b02e2(local_40);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  auVar11 = _DAT_149934d80;
  piVar13 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar13 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar12 = 0;
    do {
      fVar18 = DAT_14c846338;
      fVar17 = DAT_14c846330._4_4_;
      piVar13 = local_58 + local_48;
      iVar7 = *local_58;
      if (((longlong)iVar7 < 0) ||
         (lVar8 = *(longlong *)(local_38 + 0x90), *(int *)(lVar8 + 0x68) <= iVar7)) {
LAB_1498aea99:
        *local_88 = (float)DAT_14c846330;
        *local_78 = fVar17;
        *local_68 = fVar18;
        fVar19 = DAT_14c84634c;
        fVar18 = DAT_14c846348;
        fVar17 = DAT_14c846344;
        *local_c8 = DAT_14c84633c._4_4_;
        *local_b8 = fVar17;
        *local_a8 = fVar18;
        *local_98 = fVar19;
        fVar17 = DAT_14c846358;
        fVar18 = DAT_14c846350._4_4_;
        fVar19 = (float)DAT_14c846350;
      }
      else {
        iVar7 = *(int *)(*(longlong *)(lVar8 + 0x60) + (longlong)iVar7 * 4);
        if (((longlong)iVar7 < 0) || (*(int *)(lVar8 + 0x58) <= iVar7)) goto LAB_1498aea99;
        lVar8 = *(longlong *)(lVar8 + 0x50);
        lVar15 = (longlong)iVar7 * 0x60;
        dVar5 = *(double *)(lVar8 + 0x30 + lVar15);
        dVar6 = *(double *)(lVar8 + 0x28 + lVar15);
        *local_88 = (float)*(double *)(lVar8 + 0x20 + lVar15);
        *local_78 = (float)dVar6;
        *local_68 = (float)dVar5;
        dVar5 = *(double *)(lVar8 + lVar15);
        dVar6 = ((double *)(lVar8 + lVar15))[1];
        pdVar4 = (double *)(lVar8 + 0x10 + lVar15);
        dVar9 = *pdVar4;
        dVar10 = pdVar4[1];
        dVar20 = dVar9 * dVar9 + dVar5 * dVar5;
        dVar23 = dVar10 * dVar10 + dVar6 * dVar6;
        auVar21._0_8_ = dVar20 + dVar23;
        auVar21._8_8_ = dVar20 + dVar23;
        uVar16 = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
        auVar22 = sqrtpd(auVar21,auVar21);
        auVar24 = divpd(auVar11,auVar22);
        auVar25._0_8_ = auVar24._0_8_ * dVar9;
        auVar25._8_8_ = auVar24._8_8_ * dVar10;
        auVar22._8_4_ = (int)uVar16;
        auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
        auVar22._12_4_ = (int)(uVar16 >> 0x20);
        auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar22);
        *local_c8 = (float)(double)((ulonglong)(dVar5 * auVar24._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
        *local_b8 = (float)(double)((ulonglong)(dVar6 * auVar24._8_8_) & uVar16);
        *local_a8 = (float)auVar22._0_8_;
        *local_98 = (float)auVar22._8_8_;
        fVar17 = (float)*(double *)(lVar8 + 0x50 + lVar15);
        fVar18 = (float)*(double *)(lVar8 + 0x48 + lVar15);
        fVar19 = (float)*(double *)(lVar8 + 0x40 + lVar15);
      }
      local_68 = local_68 + local_60;
      local_78 = local_78 + local_70;
      local_88 = local_88 + local_80;
      local_98 = local_98 + local_90;
      local_a8 = local_a8 + local_a0;
      local_b8 = local_b8 + local_b0;
      local_c8 = local_c8 + local_c0;
      pfVar1 = local_f8 + local_f0;
      *local_f8 = fVar19;
      pfVar2 = local_e8 + local_e0;
      *local_e8 = fVar18;
      pfVar3 = local_d8 + local_d0;
      *local_d8 = fVar17;
      iVar12 = iVar12 + 1;
      piVar14 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar14 = (int *)(param_2 + 0x3c);
      }
      local_f8 = pfVar1;
      local_e8 = pfVar2;
      local_d8 = pfVar3;
      local_58 = piVar13;
    } while (iVar12 < *piVar14);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498aec42 FUN_1498aec42 body=1255 status=ok
// SIG undefined FUN_1498aec42(void)

void FUN_1498aec42(undefined8 param_1,byte *param_2)

{
  int *piVar1;
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
  undefined1 (*pauVar12) [16];
  double *pdVar13;
  double *pdVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  byte bVar36;
  longlong lVar37;
  int iVar38;
  byte *pbVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  double dVar46;
  undefined1 auStack_1d8 [40];
  float *local_1b0 [2];
  int local_1a0;
  float *local_198;
  int local_188;
  float *local_180;
  int local_170;
  float *local_168;
  undefined8 uStack_160;
  int local_158;
  float *local_150;
  undefined8 uStack_148;
  int local_140;
  float *local_138;
  undefined8 uStack_130;
  int local_128;
  float *local_120;
  undefined8 uStack_118;
  int local_110;
  float *local_100 [2];
  int local_f0;
  float *local_e8;
  int local_d8;
  float *local_d0;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined1 local_a0 [8];
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_1498b02e2(local_a0);
  iVar38 = 0;
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_2);
  FUN_1448a432c(local_100,param_2);
  local_158 = 0;
  local_168 = (float *)0x0;
  uStack_160 = 0;
  FUN_144a98dce(&local_168,param_2);
  local_140 = 0;
  local_150 = (float *)0x0;
  uStack_148 = 0;
  FUN_144a98dce(&local_150,param_2);
  local_128 = 0;
  local_138 = (float *)0x0;
  uStack_130 = 0;
  FUN_144a98dce(&local_138,param_2);
  local_110 = 0;
  local_120 = (float *)0x0;
  uStack_118 = 0;
  FUN_144a98dce(&local_120,param_2);
  FUN_1448a432c(local_1b0,param_2);
  bVar36 = *param_2;
  lVar37 = *(longlong *)(param_2 + 0x80);
  pbVar39 = (byte *)(lVar37 + 0x40);
  if (bVar36 != 0) {
    pbVar39 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar39) {
    do {
      piVar1 = local_b8 + local_a8;
      iVar40 = *local_b8;
      pfVar2 = local_d0 + local_c0;
      pfVar3 = local_e8 + local_d8;
      fVar15 = *local_d0;
      pfVar4 = local_100[0] + local_f0;
      dVar46 = (double)*local_e8;
      fVar16 = *local_100[0];
      pfVar5 = local_120 + local_110;
      pfVar6 = local_138 + local_128;
      dVar25 = (double)*local_120;
      pfVar7 = local_150 + local_140;
      dVar21 = (double)*local_138;
      pfVar8 = local_168 + local_158;
      dVar28 = (double)*local_150;
      dVar23 = (double)*local_168;
      pfVar9 = local_180 + local_170;
      pfVar10 = local_198 + local_188;
      fVar17 = *local_180;
      pfVar11 = local_1b0[0] + local_1a0;
      dVar34 = (double)*local_198;
      if ((-1 < (longlong)iVar40) &&
         (lVar45 = *(longlong *)(local_98 + 0x90), iVar40 < *(int *)(lVar45 + 0x68))) {
        iVar40 = *(int *)(*(longlong *)(lVar45 + 0x60) + (longlong)iVar40 * 4);
        if ((-1 < (longlong)iVar40) && (iVar40 < *(int *)(lVar45 + 0x58))) {
          fVar18 = *local_1b0[0];
          lVar45 = *(longlong *)(lVar45 + 0x50);
          lVar43 = (longlong)iVar40 * 0x60;
          pauVar12 = (undefined1 (*) [16])(lVar45 + lVar43);
          pdVar13 = (double *)(lVar45 + 0x20 + lVar43);
          pdVar14 = (double *)(lVar45 + 0x30 + lVar43);
          lVar44 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar13[1] - dVar46));
          auVar30._8_4_ = (int)lVar44;
          auVar30._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar13 - (double)fVar16));
          auVar30._12_4_ = (int)((ulonglong)lVar44 >> 0x20);
          iVar40 = movmskpd((int)lVar45,auVar30);
          lVar45 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar14[1] - 0.0));
          auVar26._8_4_ = (int)lVar45;
          auVar26._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar14 - (double)fVar15));
          auVar26._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
          uVar41 = movmskpd((int)lVar43,auVar26);
          if ((uVar41 & 0x3fffffff) == 0 && iVar40 == 0) {
            lVar45 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(*pauVar12 + 8) - dVar28));
            auVar35._8_4_ = (int)lVar45;
            auVar35._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)*pauVar12 - dVar23))
            ;
            auVar35._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
            uVar41 = movmskpd(iVar40,auVar35);
            lVar45 = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*(double *)(pauVar12[1] + 8) - dVar25));
            auVar31._8_4_ = (int)lVar45;
            auVar31._0_8_ =
                 -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)pauVar12[1] - dVar21));
            auVar31._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
            iVar40 = movmskpd(0,auVar31);
            uVar42 = iVar40 << 2 | uVar41;
            if (uVar42 != 0) {
              lVar45 = -(ulonglong)
                        (9.999999747378752e-05 < ABS(*(double *)(*pauVar12 + 8) + dVar28));
              auVar32._8_4_ = (int)lVar45;
              auVar32._0_8_ =
                   -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)*pauVar12 + dVar23));
              auVar32._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
              uVar41 = movmskpd(uVar41,auVar32);
              lVar45 = -(ulonglong)
                        (9.999999747378752e-05 < ABS(*(double *)(pauVar12[1] + 8) + dVar25));
              auVar29._8_4_ = (int)lVar45;
              auVar29._0_8_ =
                   -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)pauVar12[1] + dVar21));
              auVar29._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
              uVar42 = movmskpd(uVar42,auVar29);
              if ((uVar42 & 0x3fffffff) != 0 || uVar41 != 0) goto LAB_1498aef8d;
            }
            lVar45 = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*(double *)(pauVar12[4] + 8) - dVar34));
            auVar33._8_4_ = (int)lVar45;
            auVar33._0_8_ =
                 -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)pauVar12[4] - (double)fVar18));
            auVar33._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
            iVar40 = movmskpd(uVar41,auVar33);
            lVar45 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(pauVar12[5] + 8) - 0.0));
            auVar27._8_4_ = (int)lVar45;
            auVar27._0_8_ =
                 -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)pauVar12[5] - (double)fVar17));
            auVar27._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
            uVar41 = movmskpd(0,auVar27);
            if ((uVar41 & 0x3fffffff) == 0 && iVar40 == 0) goto LAB_1498aefc8;
          }
LAB_1498aef8d:
          auVar22._8_4_ = SUB84(dVar28,0);
          auVar22._0_8_ = dVar23;
          auVar22._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
          *pauVar12 = auVar22;
          auVar20._8_4_ = SUB84(dVar25,0);
          auVar20._0_8_ = dVar21;
          auVar20._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
          pauVar12[1] = auVar20;
          auVar19._8_4_ = SUB84(dVar46,0);
          auVar19._0_8_ = (double)fVar16;
          auVar19._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
          pauVar12[2] = auVar19;
          *(double *)pauVar12[3] = (double)fVar15;
          *(undefined8 *)(pauVar12[3] + 8) = 0;
          auVar24._8_4_ = SUB84(dVar34,0);
          auVar24._0_8_ = (double)fVar18;
          auVar24._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          pauVar12[4] = auVar24;
          *(double *)pauVar12[5] = (double)fVar17;
          *(undefined8 *)(pauVar12[5] + 8) = 0;
          *(undefined1 *)(local_98 + 0x98) = 1;
          bVar36 = *param_2;
          lVar37 = *(longlong *)(param_2 + 0x80);
        }
      }
LAB_1498aefc8:
      iVar38 = iVar38 + 1;
      pbVar39 = (byte *)(lVar37 + 0x40);
      if ((bVar36 & 1) != 0) {
        pbVar39 = param_2 + 0x3c;
      }
      local_1b0[0] = pfVar11;
      local_198 = pfVar10;
      local_180 = pfVar9;
      local_168 = pfVar8;
      local_150 = pfVar7;
      local_138 = pfVar6;
      local_120 = pfVar5;
      local_100[0] = pfVar4;
      local_e8 = pfVar3;
      local_d0 = pfVar2;
      local_b8 = piVar1;
    } while (iVar38 < *(int *)pbVar39);
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498af12a FUN_1498af12a body=3748 status=ok
// SIG undefined FUN_1498af12a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498af12a(undefined8 param_1,char *param_2)

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
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float *pfVar20;
  longlong lVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  uint uVar26;
  char *pcVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar42;
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auVar41 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auStack_518 [32];
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  double local_4a8;
  double dStack_4a0;
  undefined1 local_498 [16];
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  undefined8 uStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  undefined8 uStack_410;
  double local_408;
  undefined8 uStack_400;
  double local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  float *local_3c0 [2];
  int local_3b0;
  float *local_3a8;
  int local_398;
  float *local_390;
  int local_380;
  float *local_378;
  undefined8 uStack_370;
  int local_368;
  float *local_360;
  undefined8 uStack_358;
  int local_350;
  float *local_348;
  undefined8 uStack_340;
  int local_338;
  float *local_330;
  undefined8 uStack_328;
  int local_320;
  float *local_310 [2];
  int local_300;
  float *local_2f8;
  int local_2e8;
  float *local_2e0;
  int local_2d0;
  int *local_2c8;
  undefined8 uStack_2c0;
  int local_2b8;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_518;
  FUN_1498b02e2(local_2a8);
  local_2b8 = 0;
  local_2c8 = (int *)0x0;
  uStack_2c0 = 0;
  FUN_144a98d08(&local_2c8,param_2);
  FUN_1405f76c0(local_310,param_2);
  local_368 = 0;
  local_378 = (float *)0x0;
  uStack_370 = 0;
  FUN_144a98dce(&local_378,param_2);
  local_350 = 0;
  local_360 = (float *)0x0;
  uStack_358 = 0;
  FUN_144a98dce(&local_360,param_2);
  local_338 = 0;
  local_348 = (float *)0x0;
  uStack_340 = 0;
  FUN_144a98dce(&local_348,param_2);
  local_320 = 0;
  local_330 = (float *)0x0;
  uStack_328 = 0;
  FUN_144a98dce(&local_330,param_2);
  uVar22 = SUB84(local_3c0,0);
  pcVar27 = param_2;
  FUN_1448a432c();
  auVar69 = *(undefined1 (*) [16])(local_2a0 + 0x50);
  auVar38 = *(undefined1 (*) [16])(local_2a0 + 0x60);
  auVar46._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar69._8_8_));
  auVar46._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar69._0_8_));
  iVar23 = movmskpd(uVar22,auVar46);
  auVar56._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar38._8_8_));
  auVar56._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar38._0_8_));
  uVar26 = movmskpd((int)pcVar27,auVar56);
  if ((uVar26 & 0x3fffffff) == 0 && iVar23 == 0) {
    local_4b8._8_8_ = DAT_14c846488;
    local_4b8._0_8_ = DAT_14c846480;
    local_4c8._8_8_ = DAT_14c846498;
    local_4c8._0_8_ = DAT_14c846490;
    local_4a8 = DAT_14c8464a0;
    dStack_4a0 = DAT_14c8464a8;
    dStack_4d0 = DAT_14c8464b8;
    local_4d8 = DAT_14c8464b0;
    local_4f8 = DAT_14c8464c0;
    dStack_4f0 = DAT_14c8464c8;
    dStack_4e0 = dRam000000014c8464d8;
    local_4e8 = DAT_14c8464d0;
  }
  else {
    auVar56 = divpd(_DAT_149934d80,auVar69);
    auVar46 = divpd(ZEXT816(0x3ff0000000000000),auVar38);
    local_4f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar69._0_8_)) & auVar56._0_8_);
    dStack_4f0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar69._8_8_)) & auVar56._8_8_);
    local_4e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar38._0_8_)) & auVar46._0_8_);
    dVar35 = *(double *)(local_2a0 + 0x20) * -1.0;
    dVar17 = *(double *)(local_2a0 + 0x28) * 1.0;
    dVar50 = -*(double *)(local_2a0 + 0x10);
    dVar34 = -*(double *)(local_2a0 + 0x18);
    dVar49 = *(double *)(local_2a0 + 0x30) * local_4f8;
    dVar54 = *(double *)(local_2a0 + 0x38) * dStack_4f0;
    dStack_4e0 = 0.0;
    dVar55 = *(double *)(local_2a0 + 0x40) * local_4e8;
    dVar44 = dVar54 * dVar50 - dVar34 * dVar49;
    dVar47 = dVar55 * dVar34 - dVar35 * dVar54;
    dVar48 = dVar49 * dVar35 - dVar50 * dVar55;
    dVar47 = dVar47 + dVar47;
    dVar48 = dVar48 + dVar48;
    dVar44 = dVar44 + dVar44;
    local_4b8._8_4_ = SUB84(*(double *)(local_2a0 + 0x18),0);
    local_4b8._0_8_ = dVar50;
    local_4b8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    local_4c8._8_4_ = SUB84(dVar17,0);
    local_4c8._0_8_ = dVar35;
    local_4c8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    local_4a8 = 0.0 - ((dVar44 * dVar34 - dVar48 * dVar35) + dVar17 * dVar47 + dVar49);
    dStack_4a0 = 0.0 - (dVar44 * *(double *)(local_2a0 + 0x10) + dVar35 * dVar47 +
                       dVar17 * dVar48 + dVar54);
    local_4d8 = 0.0 - (dVar17 * dVar44 + dVar55 + (dVar48 * dVar50 - dVar47 * dVar34));
    dStack_4d0 = 0.0;
  }
  piVar25 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar25 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar25) {
    dVar34 = (double)local_4b8._8_8_ + (double)local_4b8._8_8_;
    local_478 = local_4c8._0_8_;
    dStack_480 = local_4c8._8_8_;
    dVar35 = local_478 + local_478;
    dVar50 = (double)local_4b8._0_8_ * ((double)local_4b8._0_8_ + (double)local_4b8._0_8_);
    local_428 = (1.0 - (local_478 * dVar35 + (double)local_4b8._8_8_ * dVar34)) * local_4f8;
    dVar48 = (1.0 - (local_478 * dVar35 + dVar50)) * dStack_4f0;
    local_408 = (1.0 - (dVar50 + (double)local_4b8._8_8_ * dVar34)) * local_4e8;
    local_448 = (double)local_4b8._0_8_;
    dStack_440 = (double)local_4b8._0_8_;
    dVar50 = ((double)local_4b8._0_8_ + (double)local_4b8._0_8_) * dStack_480;
    dStack_420 = (dVar34 * (double)local_4b8._0_8_ + dVar35 * dStack_480) * local_4f8;
    local_3f8 = (dVar35 * (double)local_4b8._8_8_ + dVar50) * dStack_4f0;
    dVar50 = (dVar35 * (double)local_4b8._8_8_ - dVar50) * local_4e8;
    local_418 = ((double)local_4b8._0_8_ * dVar35 - dVar34 * dStack_480) * local_4f8;
    uStack_400 = 0;
    uStack_410 = 0;
    uStack_3f0 = 0;
    local_3d8._8_4_ = SUB84(dVar48,0);
    local_3d8._0_8_ = (dVar34 * (double)local_4b8._0_8_ - dVar35 * dStack_480) * dStack_4f0;
    local_3d8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    local_3e8._8_4_ = SUB84(dVar50,0);
    local_3e8._0_8_ = (dVar34 * dStack_480 + (double)local_4b8._0_8_ * dVar35) * local_4e8;
    local_3e8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    local_438 = local_4d8;
    uStack_430 = 0x3ff0000000000000;
    local_468 = (double)local_4b8._8_8_;
    dStack_460 = (double)local_4b8._8_8_;
    local_488 = (double)local_4b8._0_8_;
    local_498._8_4_ = local_4c8._0_4_;
    local_498._0_8_ = local_4b8._8_8_;
    local_498._12_4_ = local_4c8._4_4_;
    iVar23 = 0;
    lVar21 = local_2a0;
    dStack_470 = local_478;
    local_458 = dStack_480;
    dStack_450 = dStack_480;
    do {
      dVar34 = dStack_4e0;
      dVar44 = local_4e8;
      dVar17 = dStack_4f0;
      dVar35 = local_4f8;
      auVar69 = _DAT_149934d80;
      piVar25 = local_2c8 + local_2b8;
      iVar24 = *local_2c8;
      pfVar1 = local_2e0 + local_2d0;
      pfVar2 = local_2f8 + local_2e8;
      fVar13 = *local_2e0;
      pfVar3 = local_310[0] + local_300;
      dVar48 = (double)*local_2f8;
      fVar14 = *local_310[0];
      pfVar4 = local_330 + local_320;
      pfVar5 = local_348 + local_338;
      dVar49 = (double)*local_330;
      pfVar6 = local_360 + local_350;
      dVar55 = (double)*local_348;
      pfVar7 = local_378 + local_368;
      dVar54 = (double)*local_360;
      dVar47 = (double)*local_378;
      pfVar8 = local_390 + local_380;
      pfVar9 = local_3a8 + local_398;
      dVar63 = (double)*local_390;
      pfVar20 = local_3c0[0] + local_3b0;
      dVar50 = (double)*local_3a8;
      local_3a8 = pfVar9;
      local_390 = pfVar8;
      local_378 = pfVar7;
      local_360 = pfVar6;
      local_348 = pfVar5;
      local_330 = pfVar4;
      local_310[0] = pfVar3;
      local_2f8 = pfVar2;
      local_2e0 = pfVar1;
      local_2c8 = piVar25;
      if ((-1 < (longlong)iVar24) &&
         (lVar31 = *(longlong *)(lVar21 + 0x90), iVar24 < *(int *)(lVar31 + 0x68))) {
        iVar15 = *(int *)(*(longlong *)(lVar31 + 0x60) + (longlong)iVar24 * 4);
        if ((-1 < (longlong)iVar15) && (iVar15 < *(int *)(lVar31 + 0x58))) {
          dVar51 = (double)*local_3c0[0];
          auVar57._8_8_ = 0;
          auVar57._0_8_ = dVar63;
          auVar37._8_4_ = SUB84(dVar50,0);
          auVar37._0_8_ = dVar51;
          auVar37._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
          auVar38._8_8_ = dStack_4f0;
          auVar38._0_8_ = local_4f8;
          auVar38 = minpd(auVar37,auVar38);
          auVar19._8_8_ = dStack_4e0;
          auVar19._0_8_ = local_4e8;
          auVar46 = minpd(auVar57,auVar19);
          auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
          auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
          iVar24 = movmskpd(iVar24,auVar39);
          auVar65._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
          auVar65._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
          uVar26 = movmskpd((int)local_3c0[0],auVar65);
          local_3c0[0] = pfVar20;
          if ((uVar26 & 0x3fffffff) == 0 && iVar24 == 0) {
            dVar45 = dVar54 * local_478 * -1.0 +
                     local_448 * dVar49 * 1.0 + local_458 * dVar47 + local_468 * dVar55;
            dVar36 = dVar47 * dStack_470 * 1.0 +
                     dStack_440 * dVar55 * -1.0 + dStack_450 * dVar54 + dStack_460 * dVar49;
            auVar69._0_8_ =
                 dVar49 * local_478 * 1.0 +
                 ((local_448 * dVar54 * 1.0 + local_458 * dVar55) - local_468 * dVar47);
            auVar69._8_8_ =
                 dVar55 * dStack_470 * -1.0 +
                 ((dStack_440 * dVar47 * -1.0 + dStack_450 * dVar49) - dStack_460 * dVar54);
            dVar47 = (double)fVar14 * local_4f8;
            dVar48 = dVar48 * dStack_4f0;
            dVar42 = (double)fVar13 * local_4e8;
            dVar64 = dStack_4e0 * 0.0;
            dVar49 = dVar48 * (double)local_4b8._0_8_ - (double)local_498._0_8_ * dVar47;
            dVar54 = dVar42 * (double)local_4b8._8_8_ - (double)local_498._8_8_ * dVar48;
            dVar55 = dVar47 * local_4c8._0_8_ - local_488 * dVar42;
            dVar43 = dVar64 * local_4c8._8_8_ - dStack_480 * dVar64;
            dVar54 = dVar54 + dVar54;
            dVar55 = dVar55 + dVar55;
            dVar49 = dVar49 + dVar49;
            dVar43 = dVar43 + dVar43;
            dVar47 = (dVar49 * (double)local_4b8._8_8_ - (double)local_498._8_8_ * dVar55) +
                     local_458 * dVar54 + dVar47 + local_4a8;
            dVar48 = (dVar54 * local_4c8._0_8_ - dVar49 * local_488) + dStack_450 * dVar55 + dVar48
                     + dStack_4a0;
            dVar49 = (dVar55 * (double)local_4b8._0_8_ - (double)local_498._0_8_ * dVar54) +
                     local_458 * dVar49 + dVar42 + local_4d8;
            dVar54 = (dVar43 * local_4c8._8_8_ - dVar43 * dStack_480) + dStack_450 * dVar43 + dVar64
                     + dStack_4d0;
          }
          else {
            dVar43 = local_4e8 * dVar63;
            auVar66._8_4_ = SUB84(dVar54,0);
            auVar66._0_8_ = dVar47;
            auVar66._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
            dVar67 = auVar66._8_8_ + dVar54;
            dVar36 = dVar55 + dVar55;
            dVar45 = dVar47 * (dVar47 + dVar47);
            local_228 = (1.0 - (dVar45 + dVar54 * dVar67)) * dVar63;
            dVar42 = (dVar47 + dVar47) * dVar49;
            local_238 = (dVar47 * dVar36 + dVar67 * dVar49) * dVar63;
            auVar62._8_4_ = SUB84(dVar63,0);
            auVar62._0_8_ = dVar50;
            auVar62._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
            dStack_230 = (dVar36 * dVar54 - dVar42) * auVar62._8_8_;
            dVar64 = local_4f8 * dVar51;
            dVar68 = dStack_4f0 * dVar50;
            local_278 = ((double)DAT_149934d80 - (dVar55 * dVar36 + dVar54 * dVar67)) * dVar51;
            dVar55 = (DAT_149934d80._8_8_ - (dVar55 * dVar36 + dVar45)) * dVar50;
            dStack_270 = (dVar67 * dVar47 + dVar36 * dVar49) * dVar51;
            local_248 = (dVar36 * dVar54 + dVar42) * dVar50;
            local_268 = (dVar47 * dVar36 - dVar67 * dVar49) * dVar51;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar55,0);
            local_258._0_8_ = (dVar67 * dVar47 - dVar36 * dVar49) * dVar50;
            local_258._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
            uStack_240 = 0;
            uStack_220 = 0;
            local_218._8_4_ = SUB84(dVar48,0);
            local_218._0_8_ = (double)fVar14;
            local_218._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
            uStack_200 = 0x3ff0000000000000;
            local_1f8 = local_428;
            dStack_1f0 = dStack_420;
            local_1e8 = local_418;
            uStack_1e0 = uStack_410;
            local_1d8 = local_3d8._0_8_;
            uStack_1d0 = local_3d8._8_8_;
            local_1c8 = local_3f8;
            uStack_1c0 = uStack_3f0;
            local_1b8 = local_3e8._0_8_;
            uStack_1b0 = local_3e8._8_8_;
            local_1a8 = local_408;
            uStack_1a0 = uStack_400;
            local_198 = local_4a8;
            dStack_190 = dStack_4a0;
            local_188 = local_438;
            uStack_180 = uStack_430;
            local_208 = (double)fVar13;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar32._8_8_ = -(ulonglong)(0.0 <= dVar68);
            auVar32._0_8_ = -(ulonglong)(0.0 <= dVar64);
            auVar38 = blendvpd(_DAT_149936790,auVar69,auVar32);
            uVar30 = -(ulonglong)(0.0 <= dVar43);
            dVar48 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
            dVar47 = auVar38._0_8_;
            local_168 = local_168 * dVar47;
            local_170 = local_170 * dVar47;
            local_178 = local_178 * dVar47;
            dVar47 = auVar38._8_8_;
            local_148 = local_148 * dVar47;
            local_150 = local_150 * dVar47;
            local_158 = dVar47 * local_158;
            local_128 = local_128 * dVar48;
            local_130 = local_130 * dVar48;
            local_138 = dVar48 * local_138;
            FUN_14481fd10(&local_298,&local_178);
            dVar48 = local_288 * local_288 + local_298 * local_298;
            dVar47 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar52._0_8_ = dVar48 + dVar47;
            auVar52._8_8_ = dVar48 + dVar47;
            auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
            auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
            auVar38 = sqrtpd(auVar52,auVar52);
            auVar69 = divpd(auVar69,auVar38);
            auVar70._0_8_ = auVar69._0_8_ * local_288;
            auVar70._8_8_ = auVar69._8_8_ * dStack_280;
            dVar45 = (double)((ulonglong)(local_298 * auVar69._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_));
            dVar36 = (double)((ulonglong)(dStack_290 * auVar69._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_));
            auVar69 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar70,auVar33);
            dVar54 = 0.0;
            lVar21 = local_2a0;
            dVar47 = local_118;
            dVar48 = dStack_110;
            dVar49 = local_108;
          }
          dVar34 = dVar34 * 0.0;
          lVar31 = *(longlong *)(*(longlong *)(lVar21 + 0x90) + 0x50);
          lVar29 = (longlong)iVar15 * 0x60;
          pdVar10 = (double *)(lVar31 + lVar29);
          pdVar11 = (double *)(lVar31 + 0x20 + lVar29);
          pdVar12 = (double *)(lVar31 + 0x30 + lVar29);
          auVar58._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar48 - pdVar11[1]));
          auVar58._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar47 - *pdVar11));
          iVar24 = movmskpd((int)lVar31,auVar58);
          auVar40._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar54 - pdVar12[1]));
          auVar40._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar49 - *pdVar12));
          uVar26 = movmskpd((int)lVar29,auVar40);
          pfVar20 = local_3c0[0];
          if ((uVar26 & 0x3fffffff) == 0 && iVar24 == 0) {
            lVar31 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar36 - pdVar10[1]));
            auVar16._8_4_ = (int)lVar31;
            auVar16._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar45 - *pdVar10));
            auVar16._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
            uVar26 = movmskpd(iVar24,auVar16);
            auVar59._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar69._8_8_ - pdVar10[3]));
            auVar59._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar69._0_8_ - pdVar10[2]));
            iVar24 = movmskpd(0,auVar59);
            uVar28 = iVar24 << 2 | uVar26;
            if (uVar28 != 0) {
              auVar60._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar10[1] + dVar36));
              auVar60._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar10 + dVar45));
              uVar26 = movmskpd(uVar26,auVar60);
              auVar53._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar10[3] + auVar69._8_8_));
              auVar53._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar10[2] + auVar69._0_8_));
              uVar28 = movmskpd(uVar28,auVar53);
              if ((uVar28 & 0x3fffffff) != 0 || uVar26 != 0) goto LAB_1498afc08;
            }
            auVar61._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar17 * dVar50 - pdVar10[9]));
            auVar61._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar35 * dVar51 - pdVar10[8]));
            iVar24 = movmskpd(uVar26,auVar61);
            auVar41._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar34 - pdVar10[0xb]));
            auVar41._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar44 * dVar63 - pdVar10[10]))
            ;
            uVar26 = movmskpd(0,auVar41);
            if ((uVar26 & 0x3fffffff) == 0 && iVar24 == 0) goto LAB_1498afc36;
          }
LAB_1498afc08:
          *pdVar10 = dVar45;
          pdVar10[1] = dVar36;
          *(undefined1 (*) [16])(pdVar10 + 2) = auVar69;
          pdVar10[4] = dVar47;
          pdVar10[5] = dVar48;
          pdVar10[6] = dVar49;
          pdVar10[7] = dVar54;
          pdVar10[8] = dVar35 * dVar51;
          pdVar10[9] = dVar17 * dVar50;
          auVar18._8_4_ = SUB84(dVar34,0);
          auVar18._0_8_ = dVar44 * dVar63;
          auVar18._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          *(undefined1 (*) [16])(pdVar10 + 10) = auVar18;
          *(undefined1 *)(local_2a0 + 0x98) = 1;
          lVar21 = local_2a0;
        }
      }
LAB_1498afc36:
      local_3c0[0] = pfVar20;
      iVar23 = iVar23 + 1;
      piVar25 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar25 = (int *)(param_2 + 0x3c);
      }
    } while (iVar23 < *piVar25);
  }
  if ((local_f0 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498affd0 FUN_1498affd0 body=784 status=ok
// SIG undefined FUN_1498affd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498affd0(undefined8 param_1,char *param_2)

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
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  int *piVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_138 [40];
  float *local_110;
  int local_108;
  float *local_100;
  int local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  float *local_b0;
  int local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1498b02e2(local_70);
  FUN_144a76c20(&local_a0,param_2);
  FUN_144a76c20(&local_90,param_2);
  FUN_144a76c20(&local_80,param_2);
  FUN_144a76c20(&local_e0,param_2);
  FUN_144a76c20(&local_d0,param_2);
  FUN_144a76c20(&local_c0,param_2);
  FUN_144a76c20(&local_b0,param_2);
  FUN_144a76c20(&local_110,param_2);
  FUN_144a76c20(&local_100,param_2);
  FUN_144a76c20(&local_f0,param_2);
  dVar16 = *(double *)(local_68 + 0x10);
  dVar17 = *(double *)(local_68 + 0x18);
  dVar11 = *(double *)(local_68 + 0x20);
  dVar15 = *(double *)(local_68 + 0x28);
  dVar21 = dVar11 * dVar11 + dVar16 * dVar16;
  dVar24 = dVar15 * dVar15 + dVar17 * dVar17;
  auVar22._0_8_ = dVar21 + dVar24;
  auVar22._8_8_ = dVar21 + dVar24;
  uVar20 = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
  auVar23 = sqrtpd(auVar22,auVar22);
  auVar25 = divpd(_DAT_149934d80,auVar23);
  dVar15 = dVar15 * auVar25._8_8_;
  auVar23._8_4_ = (int)uVar20;
  auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
  auVar23._12_4_ = (int)(uVar20 >> 0x20);
  auVar14._8_4_ = SUB84(dVar15,0);
  auVar14._0_8_ = dVar11 * auVar25._0_8_;
  auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar14,auVar23);
  piVar19 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar19 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar19) {
    dVar15 = *(double *)(local_68 + 0x40);
    dVar11 = *(double *)(local_68 + 0x38);
    dVar21 = *(double *)(local_68 + 0x30);
    dVar24 = *(double *)(local_68 + 0x60);
    dVar12 = *(double *)(local_68 + 0x58);
    dVar13 = *(double *)(local_68 + 0x50);
    iVar18 = 0;
    do {
      pfVar1 = local_a0 + local_98;
      *local_a0 = (float)dVar21;
      pfVar2 = local_90 + local_88;
      *local_90 = (float)dVar11;
      pfVar3 = local_80 + local_78;
      *local_80 = (float)dVar15;
      pfVar4 = local_e0 + local_d8;
      *local_e0 = (float)(double)(-(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_) &
                                 (ulonglong)(dVar16 * auVar25._0_8_));
      pfVar5 = local_d0 + local_c8;
      *local_d0 = (float)(double)(uVar20 & (ulonglong)(dVar17 * auVar25._8_8_));
      pfVar6 = local_c0 + local_b8;
      *local_c0 = (float)auVar23._0_8_;
      pfVar7 = local_b0 + local_a8;
      *local_b0 = (float)auVar23._8_8_;
      pfVar8 = local_110 + local_108;
      *local_110 = (float)dVar13;
      pfVar9 = local_100 + local_f8;
      *local_100 = (float)dVar12;
      pfVar10 = local_f0 + local_e8;
      *local_f0 = (float)dVar24;
      iVar18 = iVar18 + 1;
      piVar19 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar19 = (int *)(param_2 + 0x3c);
      }
      local_110 = pfVar8;
      local_100 = pfVar9;
      local_f0 = pfVar10;
      local_e0 = pfVar4;
      local_d0 = pfVar5;
      local_c0 = pfVar6;
      local_b0 = pfVar7;
      local_a0 = pfVar1;
      local_90 = pfVar2;
      local_80 = pfVar3;
    } while (iVar18 < *piVar19);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b02e2 FUN_1498b02e2 body=148 status=ok
// SIG undefined FUN_1498b02e2(void)

void FUN_1498b02e2(int *param_1,char *param_2)

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



// FUNCTION 1498b0398 FUN_1498b0398 body=772 status=ok
// SIG undefined FUN_1498b0398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498b0398(undefined8 param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar14;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong uVar13;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = param_2[9];
  if (*(int *)(lVar8 + 0x18) != *(int *)(lVar8 + 0x44)) {
    lVar9 = *(longlong *)(param_2[2] + 0x10);
    lVar14 = lVar8 + 0x48;
    if (*(longlong *)(lVar8 + 0x50) != 0) {
      lVar14 = *(longlong *)(lVar8 + 0x50);
    }
    iVar11 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(lVar8 + 0x58) - 1U &
                               (int)lVar9 + (int)((ulonglong)lVar9 >> 0x20) * 0x17) * 4);
    if (iVar11 != -1) {
      do {
        lVar14 = *(longlong *)(lVar8 + 0x10) + (longlong)iVar11 * 0xd0;
        if (*(longlong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar11 * 0xd0) == lVar9)
        goto LAB_1498b0406;
        iVar11 = *(int *)(lVar14 + 0xc0);
      } while (iVar11 != -1);
    }
  }
  lVar14 = 0;
LAB_1498b0406:
  uVar12 = (int)param_2[10] + 0xfU & 0xfffffff0;
  uVar13 = (ulonglong)uVar12;
  FUN_1498c0dc0();
  *(uint *)(param_2 + 10) = uVar12 + _DAT_14cc30ed4;
  lVar8 = param_2[7];
  fVar1 = *(float *)(lVar14 + 0x88);
  fVar2 = *(float *)(lVar14 + 0x94);
  fVar3 = *(float *)(lVar14 + 0x84);
  fVar4 = *(float *)(lVar14 + 0x90);
  *(float *)(lVar8 + uVar13) = *(float *)(lVar14 + 0x80) - *(float *)(lVar14 + 0x8c);
  *(float *)(lVar8 + 4 + uVar13) = fVar3 - fVar4;
  *(float *)(lVar8 + 8 + uVar13) = fVar1 - fVar2;
  fVar1 = *(float *)(lVar14 + 0x88);
  fVar2 = *(float *)(lVar14 + 0x94);
  fVar3 = *(float *)(lVar14 + 0x84);
  fVar4 = *(float *)(lVar14 + 0x90);
  *(float *)(lVar8 + 0x10 + uVar13) = *(float *)(lVar14 + 0x80) + *(float *)(lVar14 + 0x8c);
  *(float *)(lVar8 + 0x14 + uVar13) = fVar3 + fVar4;
  *(float *)(lVar8 + 0x18 + uVar13) = fVar1 + fVar2;
  *(undefined4 *)(lVar8 + 0x1c + uVar13) = *(undefined4 *)(*(longlong *)(lVar14 + 0x98) + 0xa0);
  dVar5 = *(double *)(lVar14 + 0x50);
  dVar6 = *(double *)(lVar14 + 0x48);
  *(float *)(lVar8 + 0x20 + uVar13) = (float)*(double *)(lVar14 + 0x40);
  *(float *)(lVar8 + 0x24 + uVar13) = (float)dVar6;
  *(float *)(lVar8 + 0x28 + uVar13) = (float)dVar5;
  dVar5 = *(double *)(lVar14 + 0x38);
  dVar6 = *(double *)(lVar14 + 0x30);
  dVar7 = *(double *)(lVar14 + 0x28);
  *(float *)(lVar8 + 0x30 + uVar13) = (float)*(double *)(lVar14 + 0x20);
  *(float *)(lVar8 + 0x34 + uVar13) = (float)dVar7;
  *(float *)(lVar8 + 0x38 + uVar13) = (float)dVar6;
  *(float *)(lVar8 + 0x3c + uVar13) = (float)dVar5;
  dVar5 = *(double *)(lVar14 + 0x70);
  dVar6 = *(double *)(lVar14 + 0x68);
  *(float *)(lVar8 + 0x40 + uVar13) = (float)*(double *)(lVar14 + 0x60);
  *(float *)(lVar8 + 0x44 + uVar13) = (float)dVar6;
  *(float *)(lVar8 + 0x48 + uVar13) = (float)dVar5;
  lVar9 = *(longlong *)(*(longlong *)(lVar14 + 0x98) + 0x18);
  if (lVar9 == 0) {
    lVar9 = FUN_144b3695c();
  }
  *(longlong *)(lVar8 + 0x50 + uVar13) = lVar9;
  lVar9 = *(longlong *)(*(longlong *)(lVar14 + 0x98) + 0x30);
  if (lVar9 == 0) {
    lVar9 = FUN_144b3695c();
  }
  *(longlong *)(lVar8 + 0x58 + uVar13) = lVar9;
  lVar9 = *(longlong *)(*(longlong *)(lVar14 + 0x98) + 0x48);
  if (lVar9 == 0) {
    lVar9 = FUN_144b3695c();
  }
  *(longlong *)(lVar8 + 0x60 + uVar13) = lVar9;
  lVar9 = *(longlong *)(*(longlong *)(lVar14 + 0x98) + 0x60);
  if (lVar9 == 0) {
    lVar9 = FUN_144b3695c();
  }
  *(longlong *)(lVar8 + 0x68 + uVar13) = lVar9;
  lVar9 = *(longlong *)(*(longlong *)(lVar14 + 0x98) + 0x78);
  if (lVar9 == 0) {
    lVar9 = FUN_144b3695c();
  }
  *(longlong *)(lVar8 + 0x70 + uVar13) = lVar9;
  if (*(longlong *)(*(longlong *)(lVar14 + 0x98) + 0x88) != 0) {
    lVar9 = *param_2;
    local_30 = FUN_144735dd8(lVar9,*(longlong *)(lVar14 + 0x98) + 0x88,0);
    local_48[0] = 0;
    local_44 = 0xffffffff00000000;
    local_38 = 0;
    if ((*(byte *)(local_30 + 0x68) & 0x80) != 0) {
      local_48[0] = 0x1c;
    }
    uVar10 = FUN_14475683e(lVar9 + 0x198,lVar9 + 0x70,local_30 + 8,local_48);
    *(undefined8 *)(lVar8 + 0x78 + uVar13) = uVar10;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b069e FUN_1498b069e body=546 status=ok
// SIG undefined FUN_1498b069e(void)

void FUN_1498b069e(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

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
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (param_2 != (undefined4 *)0x0 && param_3 != (undefined4 *)0x0) {
    *(undefined8 *)(param_2 + 0x22) = *(undefined8 *)(param_3 + 0x22);
    puVar12 = (undefined8 *)FUN_14001cc68(0x78,0x10);
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    *(undefined4 *)(puVar12 + 0xe) = 100;
    FUN_1498abbf8(puVar12,100);
    *(undefined8 **)(param_2 + 0x24) = puVar12;
    FUN_1498b08c0(puVar12,*(undefined8 *)(param_3 + 0x24));
    *param_2 = *param_3;
    *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(param_3 + 0x1c);
    param_2[0x1e] = param_3[0x1e];
    *(undefined8 *)(param_2 + 0x1f) = *(undefined8 *)(param_3 + 0x1f);
    param_2[0x21] = param_3[0x21];
    puVar12 = (undefined8 *)(param_3 + 4);
    puVar15 = (undefined8 *)(param_2 + 4);
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar15 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
    }
    if (*(char *)((longlong)param_3 + 0x99) == '\x01') {
      *(undefined1 *)((longlong)param_3 + 0x99) = 0;
      FUN_140393c76(*(longlong *)(param_2 + 0x22) + 0x90,
                    *(int *)(*(longlong *)(param_2 + 0x24) + 0x68) * 0x28);
      lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 0x24) + 0x68);
      if (lVar13 != 0) {
        lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x24) + 0x60);
        pfVar14 = *(float **)(*(longlong *)(param_2 + 0x22) + 0x90);
        lVar16 = 0;
        do {
          lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x24) + 0x50);
          lVar17 = (longlong)*(int *)(lVar10 + lVar16) * 0x60;
          dVar1 = *(double *)(lVar11 + 0x30 + lVar17);
          dVar2 = *(double *)(lVar11 + 0x28 + lVar17);
          dVar3 = *(double *)(lVar11 + 0x18 + lVar17);
          dVar4 = *(double *)(lVar11 + 0x10 + lVar17);
          dVar5 = *(double *)(lVar11 + 8 + lVar17);
          dVar6 = *(double *)(lVar11 + lVar17);
          dVar7 = *(double *)(lVar11 + 0x50 + lVar17);
          dVar8 = *(double *)(lVar11 + 0x48 + lVar17);
          dVar9 = *(double *)(lVar11 + 0x40 + lVar17);
          *pfVar14 = (float)*(double *)(lVar11 + 0x20 + lVar17);
          pfVar14[1] = (float)dVar2;
          pfVar14[2] = (float)dVar1;
          pfVar14[3] = (float)dVar6;
          pfVar14[4] = (float)dVar5;
          pfVar14[5] = (float)dVar4;
          pfVar14[6] = (float)dVar3;
          pfVar14[7] = (float)dVar9;
          pfVar14[8] = (float)dVar8;
          pfVar14[9] = (float)dVar7;
          pfVar14 = pfVar14 + 10;
          lVar16 = lVar16 + 4;
        } while (lVar13 * 4 != lVar16);
      }
    }
  }
  return;
}



// FUNCTION 1498b08c0 FUN_1498b08c0 body=121 status=ok
// SIG undefined FUN_1498b08c0(void)

void FUN_1498b08c0(longlong param_1,longlong param_2)

{
  FUN_1498abbf8(param_1,*(undefined4 *)(param_2 + 0x70));
  FUN_146bff298(param_1,param_2);
  FUN_146bff298(param_1 + 0x10,param_2 + 0x10);
  FUN_146bff298(param_1 + 0x20,param_2 + 0x20);
  FUN_146bff298(param_1 + 0x30,param_2 + 0x30);
  FUN_146bff298(param_1 + 0x40,param_2 + 0x40);
  FUN_144756208(param_1 + 0x50,param_2 + 0x50);
  FUN_1447bdc4c(param_1 + 0x60,param_2 + 0x60);
  return;
}



// FUNCTION 1498b093e FUN_1498b093e body=65 status=ok
// SIG undefined FUN_1498b093e(void)

void FUN_1498b093e(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1408bc7be(param_1[1],*(undefined4 *)(param_1 + 2));
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
    return;
  }
  FUN_146eee2a6(param_1 + 1,0);
  return;
}



// FUNCTION 1498b0980 FUN_1498b0980 body=154 status=ok
// SIG undefined FUN_1498b0980(void)

void FUN_1498b0980(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1498b093e();
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    *(float *)(param_1 + 3) = (float)*(double *)(lVar1 + 0x6d0);
    if (((*(longlong *)(lVar1 + 0x288) != 0) &&
        (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x288) + 0x368), plVar2 != (longlong *)0x0))
       && (lVar1 = *plVar2, lVar1 != 0)) {
      *param_1 = lVar1;
    }
  }
  FUN_144b384f0(param_2,&local_38,0);
  param_1[6] = local_28;
  *(undefined4 *)(param_1 + 4) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_34;
  *(undefined4 *)(param_1 + 5) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b0a1c FUN_1498b0a1c body=76 status=ok
// SIG undefined FUN_1498b0a1c(void)

void FUN_1498b0a1c(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           FUN_1498c1606(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  if (((param_2 != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) && (*param_2 != 0)) {
    *plVar1 = *param_2;
    *(int *)(plVar1 + 1) = (int)param_2[1];
  }
  return;
}



// FUNCTION 1498b0a68 FUN_1498b0a68 body=144 status=ok
// SIG undefined FUN_1498b0a68(void)

undefined8 FUN_1498b0a68(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  FUN_144b38f62(param_2 + 4);
  if (param_3 != 0) {
    FUN_1498b0980(param_2,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b0afa FUN_1498b0afa body=96 status=ok
// SIG undefined FUN_1498b0afa(void)

undefined8 FUN_1498b0afa(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_3 != 0 && param_2 != 0) && (lVar1 = *(longlong *)(param_3 + 0x30), lVar1 != 0)) {
    *(float *)(param_2 + 0x18) = (float)*(double *)(lVar1 + 0x6d0);
    if ((*(longlong *)(lVar1 + 0x288) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x288) + 0x368), lVar1 != 0)) {
      FUN_14748d4c2(param_2 + 8,lVar1 + 0xf0);
    }
  }
  return 0;
}



// FUNCTION 1498b0b66 FUN_1498b0b66 body=234 status=ok
// SIG undefined FUN_1498b0b66(void)

void FUN_1498b0b66(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == DAT_14cc30dc0) {
    FUN_1498b0c50(param_1,param_4);
  }
  else if (lVar1 == DAT_14cc30dc8) {
    FUN_1498b0cf6(param_1,param_4);
  }
  else if (lVar1 == DAT_14cc30dd0) {
    FUN_1498b0d9c(param_1,param_4);
  }
  lVar1 = *param_2;
  if (lVar1 == DAT_14cc30dd8) {
    FUN_1498b0c50(param_1,param_4);
    return;
  }
  if (lVar1 == DAT_14cc30de0) {
    FUN_1498b0cf6(param_1,param_4);
    return;
  }
  if (lVar1 != DAT_14cc30de8) {
    if (lVar1 == DAT_14cc30df0) {
      FUN_1498b0e42(param_1,param_4);
      return;
    }
    if (lVar1 != DAT_14cc30df8) {
      return;
    }
    FUN_1498b0ee8(param_1,param_4);
    return;
  }
  FUN_1498b0d9c(param_1,param_4);
  return;
}



// FUNCTION 1498b0c50 FUN_1498b0c50 body=165 status=ok
// SIG undefined FUN_1498b0c50(void)

void FUN_1498b0c50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea150;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b0cf6 FUN_1498b0cf6 body=165 status=ok
// SIG undefined FUN_1498b0cf6(void)

void FUN_1498b0cf6(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea1c0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b0d9c FUN_1498b0d9c body=165 status=ok
// SIG undefined FUN_1498b0d9c(void)

void FUN_1498b0d9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea230;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b0e42 FUN_1498b0e42 body=165 status=ok
// SIG undefined FUN_1498b0e42(void)

void FUN_1498b0e42(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea2a0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b0ee8 FUN_1498b0ee8 body=165 status=ok
// SIG undefined FUN_1498b0ee8(void)

void FUN_1498b0ee8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea310;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b0f8e FUN_1498b0f8e body=272 status=ok
// SIG undefined FUN_1498b0f8e(void)

void FUN_1498b0f8e(char *param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  undefined1 auStack_78 [32];
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  float *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498b10a0(local_28,param_1);
  FUN_144a76c20(&local_38,param_1);
  FUN_144a76c20(&local_48,param_1);
  FUN_144a76c20(&local_58,param_1);
  fVar3 = 1.0;
  if ((local_20 != (longlong *)0x0) && (*local_20 != 0)) {
    fVar3 = (float)*(int *)(*local_20 + 0xe08);
  }
  piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar2 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar2) {
    iVar1 = 0;
    do {
      *local_38 = fVar3;
      *local_48 = fVar3;
      *local_58 = fVar3;
      local_38 = local_38 + local_30;
      local_48 = local_48 + local_40;
      local_58 = local_58 + local_50;
      iVar1 = iVar1 + 1;
      piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar2 = (int *)(param_1 + 0x3c);
      }
    } while (iVar1 < *piVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b10a0 FUN_1498b10a0 body=148 status=ok
// SIG undefined FUN_1498b10a0(void)

void FUN_1498b10a0(int *param_1,char *param_2)

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



// FUNCTION 1498b1134 FUN_1498b1134 body=543 status=ok
// SIG undefined FUN_1498b1134(void)

void FUN_1498b1134(char *param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_c8 [40];
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1498b10a0(local_40,param_1);
  FUN_144a76c20(&local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_a0,param_1);
  fVar4 = 0.0;
  if (local_38 == (longlong *)0x0) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar10 = 0.0;
  }
  else {
    lVar1 = *local_38;
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar10 = 0.0;
    if (lVar1 != 0) {
      dVar9 = (double)*(float *)(lVar1 + 0xdf8);
      fVar4 = (float)(*(double *)(lVar1 + 0xdf0) - dVar9);
      fVar5 = (float)(*(double *)(lVar1 + 0xde8) - dVar9);
      fVar6 = (float)(*(double *)(lVar1 + 0xde0) - dVar9);
      fVar10 = (float)(*(double *)(lVar1 + 0xde0) + dVar9);
      fVar8 = (float)(*(double *)(lVar1 + 0xde8) + dVar9);
      fVar7 = (float)(*(double *)(lVar1 + 0xdf0) + dVar9);
    }
  }
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      *local_50 = fVar6;
      *local_60 = fVar5;
      *local_70 = fVar4;
      *local_80 = fVar10;
      *local_90 = fVar8;
      *local_a0 = fVar7;
      local_60 = local_60 + local_58;
      local_70 = local_70 + local_68;
      local_50 = local_50 + local_48;
      local_80 = local_80 + local_78;
      local_90 = local_90 + local_88;
      local_a0 = local_a0 + local_98;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
    } while (iVar2 < *piVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b1354 FUN_1498b1354 body=1289 status=ok
// SIG undefined FUN_1498b1354(void)

void FUN_1498b1354(char *param_1)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  undefined1 auStack_348 [32];
  longlong *local_328;
  longlong local_318 [2];
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  float *local_2f8;
  int local_2f0;
  float *local_2e8;
  int local_2e0;
  float *local_2d8;
  int local_2d0;
  longlong local_2c8 [2];
  int local_2b8;
  undefined4 *local_2b0 [2];
  int local_2a0;
  undefined4 *local_298;
  int local_288;
  undefined4 *local_280;
  int local_270;
  undefined1 local_268 [8];
  longlong local_260;
  longlong local_258 [10];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  longlong local_160 [2];
  longlong local_150;
  int local_148;
  undefined1 local_e0 [128];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  FUN_1498b10a0(local_268,param_1);
  FUN_1405f76c0(local_2b0,param_1);
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  local_2b8 = 0;
  FUN_1498c1c38(local_2c8,param_1);
  FUN_144a76c20(&local_2f8,param_1);
  FUN_144a76c20(&local_2e8,param_1);
  FUN_144a76c20(&local_2d8);
  if (local_260 == 0) {
    piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar17 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar17) {
      iVar12 = 0;
      do {
        fVar10 = DAT_14c846338;
        fVar9 = DAT_14c846330._4_4_;
        pfVar2 = local_2f8 + local_2f0;
        *local_2f8 = (float)DAT_14c846330;
        pfVar3 = local_2e8 + local_2e0;
        *local_2e8 = fVar9;
        pfVar4 = local_2d8 + local_2d0;
        *local_2d8 = fVar10;
        iVar12 = iVar12 + 1;
        piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar17 = (int *)(param_1 + 0x3c);
        }
        local_2f8 = pfVar2;
        local_2e8 = pfVar3;
        local_2d8 = pfVar4;
      } while (iVar12 < *piVar17);
    }
  }
  else {
    memset(local_160,0,0x100);
    puVar1 = (uint *)(param_1 + 0x3c);
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar11 = puVar1;
    }
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    FUN_1447a8a24(local_160,&local_208,*puVar11);
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar11 = puVar1;
    }
    uVar13 = (ulonglong)*puVar11;
    lVar14 = 8;
    if (0 < (int)*puVar11) {
      lVar15 = (longlong)local_2b8;
      piVar17 = (int *)(local_2c8[0] + lVar15 * -4);
      lVar16 = 0;
      lVar14 = 0;
      do {
        local_2fc = *local_280;
        local_300 = *local_298;
        local_304 = *local_2b0[0];
        local_2b0[0] = local_2b0[0] + local_2a0;
        local_298 = local_298 + local_288;
        local_280 = local_280 + local_270;
        FUN_144b38fb2(local_260 + 0x20,&local_208,&local_304);
        *(undefined8 *)(local_160[0] + 0x10 + lVar16) = local_1f8;
        puVar5 = (undefined4 *)(local_160[0] + lVar16);
        *puVar5 = (undefined4)local_208;
        puVar5[1] = local_208._4_4_;
        puVar5[2] = (undefined4)uStack_200;
        puVar5[3] = uStack_200._4_4_;
        lVar14 = lVar14 + 1;
        puVar11 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          puVar11 = puVar1;
        }
        uVar13 = (ulonglong)(int)*puVar11;
        piVar17 = piVar17 + lVar15;
        lVar16 = lVar16 + 0x18;
      } while (lVar14 < (longlong)uVar13);
      lVar14 = (longlong)*piVar17;
    }
    FUN_1406ea1ca(&local_150,uVar13,1);
    if (0 < local_148) {
      lVar15 = 0;
      do {
        *(int *)(local_150 + 4 + lVar15 * 8) = (int)lVar15;
        *(int *)(local_150 + lVar15 * 8) = (int)lVar15;
        lVar15 = lVar15 + 1;
      } while (lVar15 < local_148);
    }
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar11 = puVar1;
    }
    FUN_1447a8a24(local_e0,&DAT_14c8464e0,*puVar11);
    local_318[0] = 0;
    local_318[1] = 0;
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar11 = puVar1;
    }
    FUN_1447a8a24(local_318,&DAT_14c8464e0,*puVar11);
    local_258[4] = 0;
    local_258[7] = 0;
    local_258[8] = 0;
    local_258[9] = 0;
    local_258[2] = 0;
    local_258[3] = 0;
    local_258[0] = 0;
    local_258[1] = 0;
    local_258[5] = 0x8000000000;
    local_258[6] = 0xffffffff;
    FUN_1407225a4(&local_208,local_160,local_258,(double)*(float *)(local_260 + 0x18));
    local_258[9] = local_258[9] & 0xffffffff00000000;
    if (local_258[8] != 0) {
      FUN_1400020a8();
    }
    FUN_1401712c0(local_258);
    FUN_147c9022d(local_258,0);
    uVar8 = *(undefined4 *)(local_258[0] + lVar14 * 4);
    if (local_258[0] != 0) {
      FUN_1400020a8();
    }
    local_328 = local_318;
    thunk_FUN_14364af3c(local_260 + 8,uVar8,&local_208,local_e0);
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar11 = puVar1;
    }
    if (0 < (int)*puVar11) {
      lVar14 = 0x10;
      lVar15 = 0;
      do {
        dVar6 = *(double *)(local_318[0] + lVar14);
        dVar7 = *(double *)(local_318[0] + -8 + lVar14);
        pfVar2 = local_2f8 + local_2f0;
        *local_2f8 = (float)*(double *)(local_318[0] + -0x10 + lVar14);
        pfVar3 = local_2e8 + local_2e0;
        *local_2e8 = (float)dVar7;
        pfVar4 = local_2d8 + local_2d0;
        *local_2d8 = (float)dVar6;
        lVar15 = lVar15 + 1;
        puVar11 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          puVar11 = puVar1;
        }
        lVar14 = lVar14 + 0x18;
        local_2f8 = pfVar2;
        local_2e8 = pfVar3;
        local_2d8 = pfVar4;
      } while (lVar15 < (int)*puVar11);
    }
    FUN_1402a0358(&local_208);
    if (local_318[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1408bc892(local_160);
  }
  if ((local_60 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b185e FUN_1498b185e body=1102 status=ok
// SIG undefined FUN_1498b185e(void)

void FUN_1498b185e(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_328 [32];
  longlong *local_308;
  longlong local_2f8 [2];
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 *local_2d8;
  int local_2d0;
  longlong local_2c8 [2];
  int local_2b8;
  undefined4 *local_2b0 [2];
  int local_2a0;
  undefined4 *local_298;
  int local_288;
  undefined4 *local_280;
  int local_270;
  undefined1 local_268 [8];
  longlong local_260;
  longlong local_258 [10];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  longlong local_160 [2];
  longlong local_150;
  int local_148;
  undefined1 local_a0 [64];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_1498b10a0(local_268,param_1);
  FUN_1405f76c0(local_2b0,param_1);
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  local_2b8 = 0;
  FUN_1498c1cfa(local_2c8,param_1);
  FUN_144a76cd4(&local_2d8);
  if (local_260 == 0) {
    piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar10 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar10) {
      iVar5 = 0;
      do {
        puVar2 = local_2d8 + local_2d0;
        *local_2d8 = 0;
        iVar5 = iVar5 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        local_2d8 = puVar2;
      } while (iVar5 < *piVar10);
    }
  }
  else {
    memset(local_160,0,0x100);
    puVar1 = (uint *)(param_1 + 0x3c);
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar4 = puVar1;
    }
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    FUN_1447a8a24(local_160,&local_208,*puVar4);
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar4 = puVar1;
    }
    uVar6 = (ulonglong)*puVar4;
    lVar7 = 5;
    if (0 < (int)*puVar4) {
      lVar8 = (longlong)local_2b8;
      piVar10 = (int *)(local_2c8[0] + lVar8 * -4);
      lVar9 = 0;
      lVar7 = 0;
      do {
        local_2dc = *local_280;
        local_2e0 = *local_298;
        local_2e4 = *local_2b0[0];
        local_2b0[0] = local_2b0[0] + local_2a0;
        local_298 = local_298 + local_288;
        local_280 = local_280 + local_270;
        FUN_144b38fb2(local_260 + 0x20,&local_208,&local_2e4);
        *(undefined8 *)(local_160[0] + 0x10 + lVar9) = local_1f8;
        puVar2 = (undefined4 *)(local_160[0] + lVar9);
        *puVar2 = (undefined4)local_208;
        puVar2[1] = local_208._4_4_;
        puVar2[2] = (undefined4)uStack_200;
        puVar2[3] = uStack_200._4_4_;
        lVar7 = lVar7 + 1;
        puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          puVar4 = puVar1;
        }
        uVar6 = (ulonglong)(int)*puVar4;
        piVar10 = piVar10 + lVar8;
        lVar9 = lVar9 + 0x18;
      } while (lVar7 < (longlong)uVar6);
      lVar7 = (longlong)*piVar10;
    }
    FUN_1406ea1ca(&local_150,uVar6,1);
    if (0 < local_148) {
      lVar8 = 0;
      do {
        *(int *)(local_150 + 4 + lVar8 * 8) = (int)lVar8;
        *(int *)(local_150 + lVar8 * 8) = (int)lVar8;
        lVar8 = lVar8 + 1;
      } while (lVar8 < local_148);
    }
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar4 = puVar1;
    }
    local_208 = local_208 & 0xffffffff00000000;
    FUN_1448156a8(local_a0,&local_208,*puVar4);
    local_2f8[0] = 0;
    local_2f8[1] = 0;
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar4 = puVar1;
    }
    local_208 = local_208 & 0xffffffff00000000;
    FUN_1448156a8(local_2f8,&local_208,*puVar4);
    local_258[4] = 0;
    local_258[7] = 0;
    local_258[8] = 0;
    local_258[9] = 0;
    local_258[2] = 0;
    local_258[3] = 0;
    local_258[0] = 0;
    local_258[1] = 0;
    local_258[5] = 0x8000000000;
    local_258[6] = 0xffffffff;
    FUN_1407225a4(&local_208,local_160,local_258,(double)*(float *)(local_260 + 0x18));
    local_258[9] = local_258[9] & 0xffffffff00000000;
    if (local_258[8] != 0) {
      FUN_1400020a8();
    }
    FUN_1401712c0(local_258);
    FUN_147c9022d(local_258,2);
    uVar3 = *(undefined4 *)(local_258[0] + lVar7 * 4);
    if (local_258[0] != 0) {
      FUN_1400020a8();
    }
    local_308 = local_2f8;
    thunk_FUN_14364b2c3(local_260 + 8,uVar3,&local_208,local_a0);
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar4 = puVar1;
    }
    if (0 < (int)*puVar4) {
      lVar7 = 0;
      do {
        puVar2 = local_2d8 + local_2d0;
        *local_2d8 = *(undefined4 *)(local_2f8[0] + lVar7 * 4);
        lVar7 = lVar7 + 1;
        puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          puVar4 = puVar1;
        }
        local_2d8 = puVar2;
      } while (lVar7 < (int)*puVar4);
    }
    FUN_1402a0358(&local_208);
    if (local_2f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1408bc892(local_160);
  }
  if ((local_60 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b1cae FUN_1498b1cae body=1106 status=ok
// SIG undefined FUN_1498b1cae(void)

void FUN_1498b1cae(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_328 [32];
  longlong *local_308;
  longlong local_2f8 [2];
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 *local_2d8;
  int local_2d0;
  longlong local_2c8 [2];
  int local_2b8;
  undefined4 *local_2b0 [2];
  int local_2a0;
  undefined4 *local_298;
  int local_288;
  undefined4 *local_280;
  int local_270;
  undefined1 local_268 [8];
  longlong local_260;
  longlong local_258 [10];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  longlong local_160 [2];
  longlong local_150;
  int local_148;
  undefined1 local_c0 [96];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_1498b10a0(local_268,param_1);
  FUN_1405f76c0(local_2b0,param_1);
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  local_2b8 = 0;
  FUN_1498c1dbc(local_2c8,param_1);
  FUN_144a76c20(&local_2d8);
  if (local_260 == 0) {
    piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar10 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar10) {
      iVar5 = 0;
      do {
        puVar2 = local_2d8 + local_2d0;
        *local_2d8 = 0;
        iVar5 = iVar5 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        local_2d8 = puVar2;
      } while (iVar5 < *piVar10);
    }
  }
  else {
    memset(local_160,0,0x100);
    puVar1 = (uint *)(param_1 + 0x3c);
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar4 = puVar1;
    }
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    FUN_1447a8a24(local_160,&local_208,*puVar4);
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar4 = puVar1;
    }
    uVar6 = (ulonglong)*puVar4;
    lVar7 = 6;
    if (0 < (int)*puVar4) {
      lVar8 = (longlong)local_2b8;
      piVar10 = (int *)(local_2c8[0] + lVar8 * -4);
      lVar9 = 0;
      lVar7 = 0;
      do {
        local_2dc = *local_280;
        local_2e0 = *local_298;
        local_2e4 = *local_2b0[0];
        local_2b0[0] = local_2b0[0] + local_2a0;
        local_298 = local_298 + local_288;
        local_280 = local_280 + local_270;
        FUN_144b38fb2(local_260 + 0x20,&local_208,&local_2e4);
        *(undefined8 *)(local_160[0] + 0x10 + lVar9) = local_1f8;
        puVar2 = (undefined4 *)(local_160[0] + lVar9);
        *puVar2 = (undefined4)local_208;
        puVar2[1] = local_208._4_4_;
        puVar2[2] = (undefined4)uStack_200;
        puVar2[3] = uStack_200._4_4_;
        lVar7 = lVar7 + 1;
        puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          puVar4 = puVar1;
        }
        uVar6 = (ulonglong)(int)*puVar4;
        piVar10 = piVar10 + lVar8;
        lVar9 = lVar9 + 0x18;
      } while (lVar7 < (longlong)uVar6);
      lVar7 = (longlong)*piVar10;
    }
    FUN_1406ea1ca(&local_150,uVar6,1);
    if (0 < local_148) {
      lVar8 = 0;
      do {
        *(int *)(local_150 + 4 + lVar8 * 8) = (int)lVar8;
        *(int *)(local_150 + lVar8 * 8) = (int)lVar8;
        lVar8 = lVar8 + 1;
      } while (lVar8 < local_148);
    }
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar4 = puVar1;
    }
    local_208 = local_208 & 0xffffffff00000000;
    FUN_1448158c6(local_c0,&local_208,*puVar4);
    local_2f8[0] = 0;
    local_2f8[1] = 0;
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar4 = puVar1;
    }
    local_208 = local_208 & 0xffffffff00000000;
    FUN_1448158c6(local_2f8,&local_208,*puVar4);
    local_258[4] = 0;
    local_258[7] = 0;
    local_258[8] = 0;
    local_258[9] = 0;
    local_258[2] = 0;
    local_258[3] = 0;
    local_258[0] = 0;
    local_258[1] = 0;
    local_258[5] = 0x8000000000;
    local_258[6] = 0xffffffff;
    FUN_1407225a4(&local_208,local_160,local_258,(double)*(float *)(local_260 + 0x18));
    local_258[9] = local_258[9] & 0xffffffff00000000;
    if (local_258[8] != 0) {
      FUN_1400020a8();
    }
    FUN_1401712c0(local_258);
    FUN_147c9022d(local_258,1);
    uVar3 = *(undefined4 *)(local_258[0] + lVar7 * 4);
    if (local_258[0] != 0) {
      FUN_1400020a8();
    }
    local_308 = local_2f8;
    thunk_FUN_14364b13d(local_260 + 8,uVar3,&local_208,local_c0);
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      puVar4 = puVar1;
    }
    if (0 < (int)*puVar4) {
      lVar7 = 0;
      do {
        puVar2 = local_2d8 + local_2d0;
        *local_2d8 = *(undefined4 *)(local_2f8[0] + lVar7 * 4);
        lVar7 = lVar7 + 1;
        puVar4 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          puVar4 = puVar1;
        }
        local_2d8 = puVar2;
      } while (lVar7 < (int)*puVar4);
    }
    FUN_1402a0358(&local_208);
    if (local_2f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1408bc892(local_160);
  }
  if ((local_60 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b2102 FUN_1498b2102 body=63 status=ok
// SIG undefined FUN_1498b2102(void)

void FUN_1498b2102(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)*param_2;
  }
  FUN_1498c1e7e(param_2[3],puVar1);
  FUN_1498c26d6();
  FUN_14096837e(param_2,&DAT_14cc30fa8);
  return;
}



// FUNCTION 1498b2142 FUN_1498b2142 body=929 status=ok
// SIG undefined FUN_1498b2142(void)

void FUN_1498b2142(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar11 = lVar4 + 0x48;
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar11 = *(longlong *)(lVar4 + 0x50);
    }
    iVar8 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(lVar4 + 0x58) - 1U &
                              (int)lVar9 + (int)((ulonglong)lVar9 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      do {
        lVar11 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar8 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar8 * 0x20) == lVar9)
        goto LAB_1498b21b6;
        iVar8 = *(int *)(lVar11 + 0x18);
      } while (iVar8 != -1);
    }
  }
  lVar11 = 0;
LAB_1498b21b6:
  uVar14 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_1498c1f18();
  *(uint *)(param_2 + 0x50) = DAT_14cc30f5c + uVar14;
  lVar4 = *(longlong *)(param_2 + 0x38);
  puVar1 = (uint *)((ulonglong)uVar14 + lVar4);
  FUN_1498c26d6();
  uVar6 = FUN_144b34ab6(param_2);
  lVar9 = *(longlong *)(param_2 + 0x38);
  uVar10 = (ulonglong)uVar6;
  if ((lVar11 == 0) || (lVar5 = *(longlong *)(lVar11 + 8), lVar5 == 0)) {
    uVar7 = FUN_144b36954();
    *(undefined8 *)(lVar9 + uVar10) = uVar7;
    uVar7 = FUN_144b36964();
    *(undefined8 *)(lVar9 + 8 + uVar10) = uVar7;
    uVar7 = FUN_144b36964();
    *(undefined8 *)(lVar9 + 0x10 + uVar10) = uVar7;
    *(undefined4 *)(lVar9 + 0x18 + uVar10) = 0;
    *puVar1 = 0;
    uVar7 = FUN_144b36954();
    *(undefined8 *)(puVar1 + 0x84) = uVar7;
    *(undefined8 *)(puVar1 + 0x88) = DAT_14c846330;
    puVar1[0x8a] = DAT_14c846338;
    puVar1[0x8b] = 0x3f800000;
    puVar1[0x8c] = 2;
    *(undefined1 **)(puVar1 + 0x8d) = &DAT_100000001;
    memset(puVar1 + 4,0,0x200);
    memset(puVar1 + 0x8f,0,0x204);
  }
  else {
    *(undefined8 *)(lVar9 + uVar10) = *(undefined8 *)(lVar5 + 0x50);
    *(undefined8 *)(lVar9 + 8 + uVar10) = *(undefined8 *)(lVar5 + 0x80);
    *(undefined8 *)(lVar9 + 0x10 + uVar10) = *(undefined8 *)(lVar5 + 0xb0);
    *(undefined4 *)(lVar9 + 0x18 + uVar10) = *(undefined4 *)(lVar11 + 0x10);
    FUN_147c9022d(&local_58,0);
    FUN_147c9022d(&local_68,1);
    FUN_147c9022d(&local_78);
    lVar4 = (ulonglong)uVar14 + lVar4;
    lVar9 = 0;
    lVar11 = 0;
    do {
      uVar12 = 0;
      if (lVar11 < (int)local_50) {
        uVar12 = *(undefined4 *)(local_58 + lVar9);
      }
      *(undefined4 *)(lVar4 + 0x10 + lVar9 * 4) = uVar12;
      uVar13 = 0;
      uVar12 = 0;
      if (lVar11 < local_60) {
        uVar12 = *(undefined4 *)(local_68 + lVar9);
      }
      *(undefined4 *)(lVar4 + 0x14 + lVar9 * 4) = uVar12;
      if (lVar11 < local_70) {
        uVar13 = *(undefined4 *)(local_78 + lVar9);
      }
      *(undefined4 *)(lVar4 + 0x18 + lVar9 * 4) = uVar13;
      *(undefined4 *)(lVar4 + 0x1c + lVar9 * 4) = 0;
      *(undefined4 *)(lVar4 + 0x240 + lVar9 * 4) = *(undefined4 *)(lVar5 + 0x1e0 + lVar9 * 4);
      *(undefined4 *)(lVar4 + 0x244 + lVar9 * 4) = *(undefined4 *)(lVar5 + 0x3e0 + lVar9 * 4);
      *(undefined4 *)(lVar4 + 0x248 + lVar9 * 4) = *(undefined4 *)(lVar5 + 0x5e0 + lVar9 * 4);
      *(undefined4 *)(lVar4 + 0x24c + lVar9 * 4) = 0;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 4;
    } while (lVar9 != 0x80);
    *puVar1 = (uint)*(byte *)(lVar5 + 0x1064);
    if (*(char *)(lVar5 + 0x1064) == '\0') {
      uVar7 = FUN_144b36954();
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
    }
    *(undefined8 *)(puVar1 + 0x84) = uVar7;
    dVar2 = *(double *)(lVar5 + 0xdf0);
    dVar3 = *(double *)(lVar5 + 0xde8);
    puVar1[0x88] = (uint)(float)*(double *)(lVar5 + 0xde0);
    puVar1[0x89] = (uint)(float)dVar3;
    puVar1[0x8a] = (uint)(float)dVar2;
    puVar1[0x8b] = *(uint *)(lVar5 + 0xdf8);
    puVar1[0x8c] = *(uint *)(lVar5 + 0xe08);
    puVar1[0x8d] = *(uint *)(lVar5 + 0xe04);
    puVar1[0x8e] = *(uint *)(lVar5 + 0xe00);
    puVar1[0x8f] = *(uint *)(lVar5 + 0x1c0);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_144b34a0e(param_2,&local_58);
  puVar1[0x112] = local_50;
  *(longlong *)(puVar1 + 0x110) = local_58;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b261e FUN_1498b261e body=39 status=ok
// SIG undefined FUN_1498b261e(void)

undefined8 FUN_1498b261e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1498b266e FUN_1498b266e body=59 status=ok
// SIG undefined FUN_1498b266e(void)

undefined8 FUN_1498b266e(longlong *param_1)

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



// FUNCTION 1498b2710 FUN_1498b2710 body=38 status=ok
// SIG undefined FUN_1498b2710(void)

undefined8 FUN_1498b2710(undefined8 param_1,int param_2)

{
  FUN_1498b2756();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b2736 FUN_1498b2736 body=32 status=ok
// SIG undefined FUN_1498b2736(void)

undefined8 FUN_1498b2736(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FNDIGeometryCollectionBuffer");
  return param_2;
}



// FUNCTION 1498b2756 FUN_1498b2756 body=121 status=ok
// SIG undefined FUN_1498b2756(void)

void FUN_1498b2756(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14beea000;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0x11];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140038ae8(param_1 + 0xe);
  FUN_140038ae8(param_1 + 0xb);
  FUN_140038ae8(param_1 + 8);
  FUN_140038ae8(param_1 + 5);
  FUN_140038ae8(param_1 + 2);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1498b27dc FUN_1498b27dc body=29 status=ok
// SIG undefined FUN_1498b27dc(void)

undefined8 FUN_1498b27dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b280e FUN_1498b280e body=93 status=ok
// SIG undefined FUN_1498b280e(void)

void FUN_1498b280e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b286c FUN_1498b286c body=93 status=ok
// SIG undefined FUN_1498b286c(void)

void FUN_1498b286c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b28ca FUN_1498b28ca body=126 status=ok
// SIG undefined FUN_1498b28ca(void)

void FUN_1498b28ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beea150;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b2939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b2950 FUN_1498b2950 body=19 status=ok
// SIG undefined FUN_1498b2950(void)

undefined1 FUN_1498b2950(undefined8 param_1,undefined8 param_2)

{
  FUN_1498b1354(param_2);
  return 1;
}



// FUNCTION 1498b2964 FUN_1498b2964 body=29 status=ok
// SIG undefined FUN_1498b2964(void)

undefined8 FUN_1498b2964(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b2996 FUN_1498b2996 body=93 status=ok
// SIG undefined FUN_1498b2996(void)

void FUN_1498b2996(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b29f4 FUN_1498b29f4 body=93 status=ok
// SIG undefined FUN_1498b29f4(void)

void FUN_1498b29f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b2a52 FUN_1498b2a52 body=126 status=ok
// SIG undefined FUN_1498b2a52(void)

void FUN_1498b2a52(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beea1c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b2ac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b2ad8 FUN_1498b2ad8 body=19 status=ok
// SIG undefined FUN_1498b2ad8(void)

undefined1 FUN_1498b2ad8(undefined8 param_1,undefined8 param_2)

{
  FUN_1498b1cae(param_2);
  return 1;
}



// FUNCTION 1498b2aec FUN_1498b2aec body=29 status=ok
// SIG undefined FUN_1498b2aec(void)

undefined8 FUN_1498b2aec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b2b1e FUN_1498b2b1e body=93 status=ok
// SIG undefined FUN_1498b2b1e(void)

void FUN_1498b2b1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b2b7c FUN_1498b2b7c body=93 status=ok
// SIG undefined FUN_1498b2b7c(void)

void FUN_1498b2b7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b2bda FUN_1498b2bda body=126 status=ok
// SIG undefined FUN_1498b2bda(void)

void FUN_1498b2bda(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beea230;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b2c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


