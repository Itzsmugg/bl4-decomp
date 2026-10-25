// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1400daf10 FUN_1400daf10 body=194 status=ok
// SIG undefined FUN_1400daf10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400daf10(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  longlong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x40);
  *(longlong *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  uVar1 = *(uint *)(param_2 + 0xcc);
  if (uVar1 != 1) {
    if (uVar1 == 4) {
      if (*(int *)(param_5 + 4) == 1) goto LAB_1400daf4e;
      uVar1 = _DAT_00000004 & 0xfffffffe;
    }
    local_30 = 0;
    local_28 = param_3;
    if (uVar1 == 2) {
      local_28 = 0;
    }
    uVar2 = FUN_1400db056(param_2);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
  }
LAB_1400daf4e:
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x72) = param_4;
  FUN_1400dafd4(param_1,0);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400dafd4 FUN_1400dafd4 body=129 status=ok
// SIG undefined FUN_1400dafd4(void)

void FUN_1400dafd4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(lVar1 + 0xcc) == 1) {
    local_48 = *(int *)(lVar1 + 0x58);
    uStack_44 = *(undefined4 *)(lVar1 + 0x5c);
    uStack_40 = *(undefined4 *)(lVar1 + 0x60);
    uStack_3c = *(undefined4 *)(lVar1 + 100);
    local_38 = *(undefined4 *)(lVar1 + 0x68);
    uStack_34 = *(undefined4 *)(lVar1 + 0x6c);
    uStack_30 = *(undefined4 *)(lVar1 + 0x70);
    uStack_2c = *(undefined4 *)(lVar1 + 0x74);
    local_28 = *(undefined4 *)(lVar1 + 0x78);
    uStack_24 = *(undefined4 *)(lVar1 + 0x7c);
    uStack_20 = *(undefined4 *)(lVar1 + 0x80);
    uStack_1c = *(undefined4 *)(lVar1 + 0x84);
    local_18 = *(uint *)(lVar1 + 0x88);
    uStack_14 = *(undefined4 *)(lVar1 + 0x8c);
    uStack_10 = *(undefined4 *)(lVar1 + 0x90);
    uStack_c = *(undefined4 *)(lVar1 + 0x94);
    if (local_48 == 1) {
      local_18 = local_18 & 0xffffffdf;
    }
    FUN_140387612(*(undefined8 *)(lVar1 + 0x10),local_58,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400db056 FUN_1400db056 body=147 status=ok
// SIG undefined FUN_1400db056(void)

undefined8 FUN_1400db056(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0xd8) == 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                      (*(longlong **)(param_1 + 0x20),0,param_2,param_1 + 0x48);
    if (iVar1 < 0) {
      local_30 = &local_28;
      local_28 = 0;
      uStack_20 = 0;
      local_38 = 0;
      FUN_145763094(iVar1,"Resource->Map(0, ReadRange, &ResourceBaseAddress)",
                    ".\\Runtime/D3D12RHI/Private\\D3D12Resources.h",0x119);
    }
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *(undefined8 *)(param_1 + 0x48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400db0ea FUN_1400db0ea body=134 status=ok
// SIG undefined FUN_1400db0ea(void)

void FUN_1400db0ea(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1[0x17] != 0) {
    puVar2 = (ulonglong *)(**(code **)(*param_1 + 8))();
    uVar1 = *puVar2;
    if ((((uVar1 & 0x880000) == 0) && (*(char *)((longlong)param_1 + 0x11a) == '\0')) &&
       (param_1[0x22] != 0)) {
      uVar4 = (ulonglong)DAT_14ca773a8 << 3 | 0x130;
      if ((uVar1 & 0x10000000) != 0) {
        uVar4 = 0x130;
      }
      uVar3 = 0x138;
      if ((uVar1 & 0x8000020007) == 0) {
        uVar3 = uVar4;
      }
      LOCK();
      *(ulonglong *)(&DAT_14ca84d88 + uVar3) =
           *(longlong *)(&DAT_14ca84d88 + uVar3) + (param_1[0x22] + 0x3ffU >> 10);
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1400db170 FUN_1400db170 body=154 status=ok
// SIG undefined FUN_1400db170(void)

void FUN_1400db170(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1400db20c(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar2 = param_1;
    }
    memset((void *)((longlong)iVar1 * 0x10 + lVar2),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_147383478(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1473834e2(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400db20c FUN_1400db20c body=269 status=ok
// SIG undefined FUN_1400db20c(void)

void FUN_1400db20c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar4 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x1c) < 2) {
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
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]];
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 4)) {
        uVar4 = uVar3 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar4;
    FUN_1400db31a(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1400db31a FUN_1400db31a body=133 status=ok
// SIG undefined FUN_1400db31a(void)

void FUN_1400db31a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 1400db3a0 FUN_1400db3a0 body=507 status=ok
// SIG undefined FUN_1400db3a0(void)

void FUN_1400db3a0(longlong param_1,undefined4 *param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 == 0) {
    uVar11 = 0;
  }
  else {
    lVar9 = param_4 + 0x180;
    if (*(longlong *)(param_4 + 400) != 0) {
      lVar9 = *(longlong *)(param_4 + 400);
    }
    uVar11 = *(undefined8 *)(lVar9 + (longlong)param_3 * 0x10);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  plVar8 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a3502c0;
  FUN_1456cd742(plVar8 + 2,uVar3,uVar11);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_1 + 400);
  if (*(longlong *)(param_1 + 400) == 0) {
    lVar9 = param_1 + 0x180;
  }
  lVar10 = (longlong)param_3 * 0x10;
  *(longlong **)(lVar9 + lVar10) = plVar8 + 2;
  plVar4 = *(longlong **)(lVar9 + 8 + lVar10);
  if (plVar8 == plVar4) {
    if (plVar8 == (longlong *)0x0) goto LAB_1400db466;
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  else {
    *(longlong **)(lVar9 + lVar10 + 8) = plVar8;
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
    if (plVar8 == (longlong *)0x0) goto LAB_1400db466;
  }
  LOCK();
  plVar4 = plVar8 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_1400db466:
  lVar9 = param_1 + 0x180;
  if (*(longlong *)(param_1 + 400) != 0) {
    lVar9 = *(longlong *)(param_1 + 400);
  }
  lVar9 = *(longlong *)(lVar9 + lVar10);
  local_60 = param_1 + 0x60;
  local_58 = param_1 + 0xa8;
  local_50 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(param_2 + 4);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(lVar9 + 0x58) = *param_2;
  *(undefined4 *)(lVar9 + 0x5c) = uVar5;
  *(undefined4 *)(lVar9 + 0x60) = uVar6;
  *(undefined4 *)(lVar9 + 100) = uVar7;
  FUN_1400db59c(&local_48,param_2);
  *(undefined8 *)(lVar9 + 0x2c) = local_48;
  FUN_1447f03f2(lVar9,&local_60,0x10);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400db59c FUN_1400db59c body=377 status=ok
// SIG undefined FUN_1400db59c(void)

void FUN_1400db59c(uint *param_1,uint *param_2)

{
  ushort uVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  uVar4 = *param_2;
  uVar3 = (ulonglong)uVar4;
  if (uVar3 < 0x30) {
    if ((0x580000UL >> (uVar3 & 0x3f) & 1) == 0) {
      if ((0xb00000000000U >> (uVar3 & 0x3f) & 1) == 0) goto LAB_1400db5d2;
      bVar2 = uVar4 == 0x2f;
    }
    else {
      bVar2 = uVar4 == 0x16;
    }
LAB_1400db5df:
    bVar5 = bVar2;
    if ((int)uVar4 < 0x2d) {
      if ((uVar4 == 0x14) || (uVar4 == 0x16)) {
        uVar4 = 0x13;
      }
      else if (uVar4 == 0x28) {
        uVar4 = 0x27;
      }
    }
    else if ((uVar4 == 0x2d) || (uVar4 == 0x2f)) {
      uVar4 = 0x2c;
    }
    else if (uVar4 == 0x37) {
      uVar4 = 0x35;
    }
  }
  else {
LAB_1400db5d2:
    bVar5 = false;
    bVar2 = false;
    if (1 < uVar4 - 0x67) goto LAB_1400db5df;
  }
  *(ushort *)(param_1 + 1) =
       ((ushort)(uVar4 == 0x13 || uVar4 == 0x2c) - (ushort)bVar5) * 0x100 + (ushort)bVar5 + 0x100;
  if (param_2[1] == 4) {
    *(ushort *)((longlong)param_1 + 6) = (byte)param_2[2] | 0x100;
    *(ushort *)(param_1 + 1) = (byte)param_2[3] | 0x100;
    goto LAB_1400db66b;
  }
  switch(param_2[1]) {
  case 0:
    param_1[0] = 0;
    param_1[1] = 0;
    return;
  default:
    goto switchD_1400db687_caseD_1;
  case 5:
    *(ushort *)((longlong)param_1 + 6) = (byte)param_2[2] | 0x100;
    *(ushort *)(param_1 + 1) = (byte)param_2[5] | 0x100;
    uVar1 = (ushort)param_2[3];
    uVar4 = param_2[4];
    goto LAB_1400db6bc;
  case 6:
    *(undefined2 *)((longlong)param_1 + 6) = 0x100;
    break;
  case 7:
    *(undefined2 *)((longlong)param_1 + 6) = 0x100;
    uVar1 = (ushort)param_2[2];
    uVar4 = param_2[3];
LAB_1400db6bc:
    *param_1 = uVar4 << 0x10 | (uint)uVar1;
    return;
  case 8:
    *(ushort *)((longlong)param_1 + 6) = (byte)param_2[2] | 0x100;
  }
LAB_1400db66b:
  *param_1 = 0x10000;
switchD_1400db687_caseD_1:
  return;
}



// FUNCTION 1400db716 FUN_1400db716 body=571 status=ok
// SIG undefined FUN_1400db716(void)

void FUN_1400db716(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar12 = (ulonglong *)(**(code **)(*param_1 + 8))();
  if (param_3 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(param_3 + 0x168);
  }
  uVar3 = *puVar12;
  lVar4 = param_1[0xd];
  plVar13 = (longlong *)FUN_14001cc68(0xa8,0x10);
  plVar13[1] = (longlong)&DAT_100000001;
  *plVar13 = (longlong)&PTR_FUN_14a34c510;
  FUN_1447f3900(plVar13 + 2,lVar4,0,uVar14);
  plVar13[2] = (longlong)&PTR_LAB_14a34db50;
  plVar13[0x12] = 0;
  *(undefined4 *)(plVar13 + 0x13) = 0;
  *(undefined1 *)((longlong)plVar13 + 0x9c) = 0;
  plVar13[0x14] = 0;
  if (plVar13 == (longlong *)0x0) {
    param_1[0x2d] = 0x10;
    plVar15 = (longlong *)param_1[0x2e];
    if (plVar15 == (longlong *)0x0) goto LAB_1400db804;
    param_1[0x2e] = 0;
LAB_1400db904:
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    if (plVar13 == (longlong *)0x0) goto LAB_1400db804;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    param_1[0x2d] = (longlong)(plVar13 + 2);
    plVar15 = (longlong *)param_1[0x2e];
    if (plVar13 == plVar15) {
      LOCK();
      plVar15 = plVar13 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    else {
      param_1[0x2e] = (longlong)plVar13;
      if (plVar15 != (longlong *)0x0) goto LAB_1400db904;
    }
  }
  LOCK();
  plVar15 = plVar13 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar2 = (int *)((longlong)plVar13 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_1400db804:
  lVar4 = param_1[0x2d];
  local_68 = param_1 + 0xc;
  local_60 = param_1 + 0x15;
  local_58 = param_1[0x17];
  FUN_1400db952(lVar4,&local_68,param_2,(uint)(uVar3 >> 0x1d) & 1);
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(param_2 + 8);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  *(undefined4 *)(lVar4 + 0x68) = param_2[4];
  *(undefined4 *)(lVar4 + 0x6c) = uVar9;
  *(undefined4 *)(lVar4 + 0x70) = uVar10;
  *(undefined4 *)(lVar4 + 0x74) = uVar11;
  *(undefined4 *)(lVar4 + 0x58) = uVar5;
  *(undefined4 *)(lVar4 + 0x5c) = uVar6;
  *(undefined4 *)(lVar4 + 0x60) = uVar7;
  *(undefined4 *)(lVar4 + 100) = uVar8;
  FUN_1447f3744(&local_50,param_2);
  *(undefined8 *)(lVar4 + 0x2c) = local_50;
  FUN_1447f03f2(lVar4,&local_68,0);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400db952 FUN_1400db952 body=143 status=ok
// SIG undefined FUN_1400db952(void)

void FUN_1400db952(longlong param_1,longlong param_2,uint *param_3,undefined1 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8c) = param_4;
  if (param_3[1] != 1) {
    if (param_3[1] != 0xb) {
      return;
    }
    *(longlong *)(param_1 + 0x80) =
         *(longlong *)(param_3 + 4) - *(longlong *)(*(longlong *)(param_2 + 8) + 0x58);
    *(undefined4 *)(param_1 + 0x88) = 1;
    return;
  }
  uVar1 = *param_3;
  if ((longlong)(int)uVar1 == 0) {
    puVar2 = param_3 + 7;
  }
  else {
    uVar3 = 0;
    if (0x73 < uVar1) goto LAB_1400db999;
    puVar2 = (uint *)(&DAT_14a3504d8 + (longlong)(int)uVar1 * 4);
  }
  uVar3 = *puVar2;
LAB_1400db999:
  *(uint *)(param_1 + 0x88) = uVar3;
  *(ulonglong *)(param_1 + 0x80) =
       (ulonglong)uVar3 * *(longlong *)(param_3 + 4) -
       *(longlong *)(*(longlong *)(param_2 + 8) + 0x60);
  return;
}



// FUNCTION 1400db9e2 FUN_1400db9e2 body=190 status=ok
// SIG undefined FUN_1400db9e2(void)

int * FUN_1400db9e2(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1[7] == 0) {
    param_2[0] = -1;
    param_2[1] = 0xff;
  }
  else {
    FUN_147125078(param_1[7],param_2);
    if ((*param_2 == -1) || ((char)param_2[1] == -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      lVar5 = param_1[7];
      iVar1 = *(int *)(lVar5 + 0x10);
      iVar3 = iVar1 * 2;
      FUN_147124f04(lVar5,param_2,iVar3,*(undefined1 *)(lVar5 + 0x40));
      lVar5 = (longlong)DAT_14c760da4;
      if (lVar5 != 0) {
        lVar2 = *param_1;
        lVar4 = 0;
        do {
          FUN_14736b436(*(undefined8 *)(*(longlong *)(lVar2 + 2000 + lVar4) + 0x6c0),iVar1,iVar3);
          lVar4 = lVar4 + 8;
        } while (lVar5 * 8 != lVar4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    }
  }
  return param_2;
}



// FUNCTION 1400dbaa0 FUN_1400dbaa0 body=60 status=ok
// SIG undefined FUN_1400dbaa0(void)

void FUN_1400dbaa0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400dbac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2,param_2);
  return;
}



// FUNCTION 1400dbadc FUN_1400dbadc body=95 status=ok
// SIG undefined FUN_1400dbadc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1400dbadc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c842648) {
    FUN_144b3d300(&DAT_14c842648);
    if (DAT_14c842648 == -1) {
      _DAT_14c842638 = 0;
      _Init_thread_footer(&DAT_14c842648);
    }
  }
  return &DAT_14c842638;
}



// FUNCTION 1400dbb3c FUN_1400dbb3c body=90 status=ok
// SIG undefined FUN_1400dbb3c(void)

void FUN_1400dbb3c(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_1400dbb96(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_1469531c8(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14481578e(param_1,0);
  return;
}



// FUNCTION 1400dbb96 FUN_1400dbb96 body=58 status=ok
// SIG undefined FUN_1400dbb96(void)

void FUN_1400dbb96(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x34);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (*(longlong *)(pcVar1 + -0x34) != 0) {
        FUN_1400020a8();
      }
      pcVar1 = pcVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400dbbd0 FUN_1400dbbd0 body=64 status=ok
// SIG undefined FUN_1400dbbd0(void)

longlong FUN_1400dbbd0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 200) + 0x128);
  FUN_14003fbd6();
  lVar2 = (**(code **)(*(longlong *)(&DAT_14caea080)[bVar1] + 0x2f0))();
  if (lVar2 == param_1) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1400dbc10 FUN_1400dbc10 body=74 status=ok
// SIG undefined FUN_1400dbc10(void)

void FUN_1400dbc10(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1400dbc5a(param_1,*(undefined4 *)(param_1 + 0x4008),*(undefined4 *)(param_1 + 0x400c))
  ;
  if (iVar1 == *(int *)(param_1 + 0x400c)) {
    return;
  }
  *(int *)(param_1 + 0x400c) = iVar1;
  FUN_146ef8fc2(param_1,*(undefined4 *)(param_1 + 0x4008),iVar1,0x80);
  return;
}



// FUNCTION 1400dbc5a FUN_1400dbc5a body=108 status=ok
// SIG undefined FUN_1400dbc5a(void)

ulonglong FUN_1400dbc5a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x80;
  if (0x80 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x1ffffffffffff80U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,0);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 1400dbcc6 FUN_1400dbcc6 body=582 status=ok
// SIG undefined FUN_1400dbcc6(void)

void FUN_1400dbcc6(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_c8 [40];
  undefined8 local_a0 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar1 = iVar8;
joined_r0x0001400dbd0d:
    do {
      iVar5 = iVar1 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar1 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (*(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) <
            *(float *)(param_1 + (longlong)iVar6 * 0x10 + 0xe) ||
            *(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) ==
            *(float *)(param_1 + (longlong)iVar6 * 0x10 + 0xe))) {
          iVar5 = iVar6;
        }
        if (*(float *)(param_1 + (longlong)iVar1 * 0x10 + 0xe) <=
            *(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) &&
            *(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) !=
            *(float *)(param_1 + (longlong)iVar1 * 0x10 + 0xe)) {
          puVar3 = param_1 + (longlong)iVar1 * 0x10;
          puVar4 = local_a0;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (longlong)iVar5 * 0x10;
          puVar4 = param_1 + (longlong)iVar1 * 0x10;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_a0;
          puVar4 = param_1 + (longlong)iVar5 * 0x10;
          for (lVar2 = 0x10; iVar1 = iVar5, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          goto joined_r0x0001400dbd0d;
        }
      }
      bVar9 = iVar8 != 0;
      iVar8 = iVar8 + -1;
      iVar1 = iVar8;
    } while (bVar9);
    if (1 < (int)param_2) {
      puVar3 = param_1;
      puVar4 = local_a0;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1 + ((ulonglong)param_2 - 1) * 0x10;
      puVar4 = param_1;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_a0;
      puVar4 = param_1 + ((ulonglong)param_2 - 1) * 0x10;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar1 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar1 = iVar1 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar1 < (longlong)uVar7) &&
               (*(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) <
                *(float *)(param_1 + (longlong)iVar1 * 0x10 + 0xe) ||
                *(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) ==
                *(float *)(param_1 + (longlong)iVar1 * 0x10 + 0xe))) {
              iVar6 = iVar1;
            }
            if (*(float *)(param_1 + (longlong)iVar6 * 0x10 + 0xe) <
                *(float *)(param_1 + (longlong)iVar8 * 0x10 + 0xe) ||
                *(float *)(param_1 + (longlong)iVar6 * 0x10 + 0xe) ==
                *(float *)(param_1 + (longlong)iVar8 * 0x10 + 0xe)) break;
            puVar3 = param_1 + (longlong)iVar8 * 0x10;
            puVar4 = local_a0;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = param_1 + (longlong)iVar6 * 0x10;
            puVar4 = param_1 + (longlong)iVar8 * 0x10;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = local_a0;
            puVar4 = param_1 + (longlong)iVar6 * 0x10;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            iVar1 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar8 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar7);
          puVar3 = param_1;
          puVar4 = local_a0;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (uVar7 - 1) * 0x10;
          puVar4 = param_1;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_a0;
          puVar4 = param_1 + (uVar7 - 1) * 0x10;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          bVar9 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400dbf0e FUN_1400dbf0e body=55 status=ok
// SIG undefined FUN_1400dbf0e(void)

void FUN_1400dbf0e(longlong *param_1)

{
  FUN_1400dbf46(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400dbf46 FUN_1400dbf46 body=127 status=ok
// SIG undefined FUN_1400dbf46(void)

void FUN_1400dbf46(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
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



// FUNCTION 1400dbfc6 FUN_1400dbfc6 body=228 status=ok
// SIG undefined FUN_1400dbfc6(void)

longlong FUN_1400dbfc6(void)

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
  if (DAT_14caa8af0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147489db9;
    local_40 = FUN_14632a4f0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ChaosSolverEngine",L"ChaosNotifyHandlerInterface",&DAT_14caa8af0,
                  &DAT_147489db8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8af0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400dc0ac FUN_1400dc0ac body=1685 status=ok
// SIG undefined FUN_1400dc0ac(void)

void FUN_1400dc0ac(longlong *param_1,longlong param_2,uint *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_438 [32];
  undefined4 *local_418;
  undefined4 *local_410;
  undefined8 *local_408;
  longlong *local_400;
  undefined1 *local_3f8;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  longlong local_3d8;
  undefined4 local_3c8 [46];
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  ulonglong local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong local_2b8;
  undefined4 local_2a8 [46];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  ulonglong local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  undefined1 local_9b;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_438;
  puVar10 = (undefined8 *)*param_4;
  uVar12 = 0;
  memset(local_148,0,0x100);
  local_78 = 0xffffffff;
  local_144 = 0x3f800000;
  local_128 = puVar10[2];
  local_138 = *puVar10;
  uStack_130 = puVar10[1];
  local_108 = puVar10[3];
  uStack_100 = puVar10[4];
  local_f8 = puVar10[5];
  local_a8 = *(undefined4 *)(puVar10 + 6);
  lVar11 = puVar10[8];
  local_120 = local_138;
  uStack_118 = uStack_130;
  local_110 = local_128;
  local_f0 = local_108;
  uStack_e8 = uStack_100;
  local_e0 = local_f8;
  if ((lVar11 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar11);
LAB_1400dc18c:
    uVar7 = *(uint *)(lVar11 + 0xc);
    uVar12 = (ulonglong)uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar11 + 0x10);
      bVar13 = uVar3 == 0;
      if (bVar13) {
        *(uint *)(lVar11 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar13) {
        uVar3 = uVar7;
      }
      uVar4 = (ulonglong)uVar3;
    }
  }
  else {
    uVar4 = 0;
    if (lVar11 != 0) goto LAB_1400dc18c;
  }
  local_98 = uVar12 | uVar4 << 0x20;
  local_70 = *(ulonglong *)(param_3 + 2);
  local_a4 = *(undefined4 *)(param_2 + 0x10);
  local_a0 = param_3[4];
  uStack_58 = *(undefined8 *)(param_3 + 5);
  local_50 = *(undefined8 *)(param_2 + 0x14);
  local_9b = 1;
  if (param_3[1] == 0) {
LAB_1400dc5b4:
    uVar9 = 0;
  }
  else {
    uVar7 = *param_3;
    uVar9 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar10 + 2) != param_3[1] || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))))
      goto LAB_1400dc5b4;
      uVar9 = *puVar10;
    }
  }
  if (local_70 >> 0x20 == 0) {
LAB_1400dc5bc:
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = (uint)local_70;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8)));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != (int)(local_70 >> 0x20) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1400dc5bc;
      uVar8 = *puVar10;
    }
  }
  FUN_14488643a(&local_90,uVar9,uVar8);
  local_158 = param_4[4];
  local_168 = param_4[2];
  lStack_160 = param_4[3];
  local_178 = local_f8;
  local_188 = local_108;
  uStack_180 = uStack_100;
  local_198 = local_128;
  local_1a8 = (undefined4)local_138;
  uStack_1a4 = local_138._4_4_;
  uStack_1a0 = (undefined4)uStack_130;
  uStack_19c = uStack_130._4_4_;
  if (*(int *)(param_2 + 0xc) == 0) {
LAB_1400dc5c4:
    uVar5 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 8);
    uVar5 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)(param_2 + 0xc) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1400dc5c4;
      uVar5 = *puVar10;
    }
  }
  local_400 = &local_168;
  local_408 = &local_188;
  local_410 = &local_1a8;
  local_418 = (undefined4 *)CONCAT71(local_418._1_7_,1);
  local_3f8 = local_148;
  (**(code **)(*param_1 + 0x380))(param_1,uVar5,uVar9,uVar8);
  if (*(char *)((longlong)param_1 + 0x20d) == '\x01') {
    memcpy(local_2a8,local_148,0xb8);
    local_1f0 = local_90;
    local_1e8 = local_88;
    uStack_1e0 = uStack_80;
    local_1d8 = local_78;
    local_1d4 = local_74;
    local_1b0 = local_50;
    local_1c0 = local_60;
    uStack_1bc = uStack_5c;
    uStack_1b8 = (undefined4)uStack_58;
    uStack_1b4 = uStack_58._4_4_;
    local_1d0 = local_70;
    uStack_1c8 = uStack_68;
    local_2b8 = param_4[4];
    local_2c8 = (undefined4)param_4[2];
    uStack_2c4 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_2c0 = (undefined4)param_4[3];
    uStack_2bc = *(undefined4 *)((longlong)param_4 + 0x1c);
    if (param_3[1] == 0) {
LAB_1400dc70b:
      uVar9 = 0;
    }
    else {
      uVar7 = *param_3;
      uVar9 = 0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar10 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar10 + 2) != param_3[1] || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))))
        goto LAB_1400dc70b;
        uVar9 = *puVar10;
      }
    }
    local_418 = local_2a8;
    FUN_14067d40e((longlong)param_1 + 0x20d,param_1,uVar9,&local_2c8);
  }
  iVar2 = DAT_14c9647dc;
  lVar11 = DAT_14c9647c8;
  if (((((*(int *)(param_2 + 0xc) == 0) || (uVar7 = *(uint *)(param_2 + 8), (int)uVar7 < 0)) ||
       (DAT_14c9647dc <= (int)uVar7)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_2 + 0xc))))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
      ((lVar1 = *plVar6, lVar1 == 0 || (*(char *)(lVar1 + 0x598) != '\x01')))))) goto LAB_1400dc43e;
  memcpy(local_3c8,local_148,0xb8);
  local_310 = local_90;
  local_308 = local_88;
  uStack_300 = uStack_80;
  local_2f8 = local_78;
  local_2f4 = local_74;
  local_2d0 = local_50;
  local_2e0 = local_60;
  uStack_2dc = uStack_5c;
  uStack_2d8 = (undefined4)uStack_58;
  uStack_2d4 = uStack_58._4_4_;
  local_2f0 = local_70;
  uStack_2e8 = uStack_68;
  local_3d8 = param_4[4];
  local_3e8 = (undefined4)param_4[2];
  uStack_3e4 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_3e0 = (undefined4)param_4[3];
  uStack_3dc = *(undefined4 *)((longlong)param_4 + 0x1c);
  if (param_3[3] == 0) {
LAB_1400dc6fb:
    uVar9 = 0;
  }
  else {
    uVar7 = param_3[2];
    uVar9 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < iVar2)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(lVar11 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar10 + 2) != param_3[3] || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))))
      goto LAB_1400dc6fb;
      uVar9 = *puVar10;
    }
  }
  if (param_3[1] == 0) {
LAB_1400dc703:
    uVar8 = 0;
  }
  else {
    uVar7 = *param_3;
    uVar8 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < iVar2)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(lVar11 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar10 + 2) != param_3[1] || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))))
      goto LAB_1400dc703;
      uVar8 = *puVar10;
    }
  }
  local_418 = &local_3e8;
  local_410 = local_3c8;
  FUN_1400dcae8(lVar1 + 0x598,lVar1,uVar8,uVar9);
LAB_1400dc43e:
  if ((local_48 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400dc742 FUN_1400dc742 body=231 status=ok
// SIG undefined FUN_1400dc742(void)

void FUN_1400dc742(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  void *param_9)

{
  undefined8 uVar1;
  undefined1 auStack_1b8 [40];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_130 = param_8[2];
  local_140 = *param_8;
  uStack_138 = param_8[1];
  local_158 = *param_7;
  uStack_150 = param_7[1];
  local_148 = param_7[2];
  local_160 = param_6[2];
  local_170 = *param_6;
  uStack_168 = param_6[1];
  local_178 = param_5;
  local_190 = param_2;
  local_188 = param_3;
  local_180 = param_4;
  memcpy(local_128,param_9,0x100);
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ba0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_190);
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400dc82a FUN_1400dc82a body=674 status=ok
// SIG undefined FUN_1400dc82a(void)

void FUN_1400dc82a(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  bVar3 = DAT_14c872b88;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(byte *)(param_2 + 0xb1) & 4) == 0) && (*(int *)(param_2 + 0x68) == 0)) goto LAB_1400dc95a;
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) &&
     ((lVar5 = *(longlong *)(param_1 + 0x20), lVar5 != 0 && (-1 < (short)*(undefined4 *)(lVar5 + 8))
      ))) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) != 0) goto LAB_1400dc94a;
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_38;
      local_38 = (code *)&LAB_14355090c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147b8e16d;
      local_60 = (code *)&LAB_140810a38;
      local_68 = L"Engine";
      local_70 = 0x800000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar5 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1468c5283;
      local_60 = FUN_142809da0;
      local_68 = L"Engine";
      local_70 = 0x400000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_1400dc94a;
    iVar2 = *(int *)(lVar5 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         (lVar6 = lVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
         lVar5 + 0x30)) {
        lVar6 = 0;
      }
    } while ((lVar6 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
    if ((lVar6 == 0) || (lVar5 = *(longlong *)(lVar6 + 0xc0), lVar5 == 0)) goto LAB_1400dc94a;
    if ((*(char *)(lVar5 + 0x154) < '\0') && (*(longlong *)(lVar5 + 0x30) != 0)) {
      if (*(int *)(*(longlong *)(lVar5 + 0x30) + 0xa8) == 0 && (bVar3 & 1) == 0) goto LAB_1400dc94a;
    }
    else if (bVar3 == 0) goto LAB_1400dc94a;
  }
  else {
LAB_1400dc94a:
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) goto LAB_1400dc95a;
  }
  if (DAT_14c950c28 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
LAB_1400dc95a:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400dcae8 FUN_1400dcae8 body=211 status=ok
// SIG undefined FUN_1400dcae8(void)

void FUN_1400dcae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,void *param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1400dcbbc(param_1,&local_168);
  if (local_168 != 0) {
    local_130 = param_5[2];
    local_140 = *param_5;
    uStack_138 = param_5[1];
    local_158 = param_2;
    local_150 = param_3;
    local_148 = param_4;
    memcpy(local_128,param_6,0x100);
    FUN_1447cd2ec(local_168,&local_158);
  }
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_160 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar2 = (int *)((longlong)local_160 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_160 + 0x10))(local_160);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400dcbbc FUN_1400dcbbc body=250 status=ok
// SIG undefined FUN_1400dcbbc(void)

undefined8 * FUN_1400dcbbc(char *param_1,undefined8 *param_2)

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
  if (*param_1 != '\x01') goto LAB_1400dcc3f;
  FUN_1400dccb8(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x598,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1400dcc3f;
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
joined_r0x0001400dcc7b:
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
        goto joined_r0x0001400dcc7b;
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
LAB_1400dcc3f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400dccb8 FUN_1400dccb8 body=120 status=ok
// SIG undefined FUN_1400dccb8(void)

undefined8 * FUN_1400dccb8(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9fac) {
    FUN_144b3d300(&DAT_14cac9fac);
    if (DAT_14cac9fac == -1) {
      FUN_1446ddc76(&DAT_14cac9fa4,"OnComponentHit",1);
      _Init_thread_footer(&DAT_14cac9fac);
    }
  }
  *param_2 = DAT_14cac9fa4;
  return param_2;
}



// FUNCTION 1400dcd30 FUN_1400dcd30 body=55 status=ok
// SIG undefined FUN_1400dcd30(void)

void FUN_1400dcd30(longlong *param_1)

{
  FUN_1400dcd68(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400dcd68 FUN_1400dcd68 body=121 status=ok
// SIG undefined FUN_1400dcd68(void)

void FUN_1400dcd68(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1400dcde2 FUN_1400dcde2 body=153 status=ok
// SIG undefined FUN_1400dcde2(void)

undefined2 * FUN_1400dcde2(undefined2 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0x101;
  *(bool *)(param_1 + 1) = *(int *)(DAT_14ca71180 + 4) != 0;
  *(bool *)((longlong)param_1 + 3) = *(int *)(DAT_14ca711c8 + 4) != 0;
  *(bool *)(param_1 + 2) = *(int *)(DAT_14ca71228 + 4) != 0;
  *(bool *)((longlong)param_1 + 5) = *(int *)(DAT_14ca71198 + 4) != 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(DAT_14ca711b0 + 4);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(DAT_14ca711f8 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(DAT_14ca71210 + 4);
  uVar1 = FUN_1400dce7b();
  *(undefined4 *)(param_1 + 10) = uVar1;
  uVar1 = FUN_1400dcfb6();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_1400dcee4();
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  uVar1 = FUN_1400dcf4d();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return param_1;
}



// FUNCTION 1400dce7b FUN_1400dce7b body=105 status=ok
// SIG undefined FUN_1400dce7b(void)

undefined4 FUN_1400dce7b(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14cb0fdc8;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  return *(undefined4 *)(lVar2 + uVar5 * 4);
}



// FUNCTION 1400dcee4 FUN_1400dcee4 body=105 status=ok
// SIG undefined FUN_1400dcee4(void)

undefined4 FUN_1400dcee4(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14cb0fdf8;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  return *(undefined4 *)(lVar2 + uVar5 * 4);
}



// FUNCTION 1400dcf4d FUN_1400dcf4d body=105 status=ok
// SIG undefined FUN_1400dcf4d(void)

undefined4 FUN_1400dcf4d(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14cb0fe58;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  return *(undefined4 *)(lVar2 + uVar5 * 4);
}



// FUNCTION 1400dcfb6 FUN_1400dcfb6 body=115 status=ok
// SIG undefined FUN_1400dcfb6(void)

uint FUN_1400dcfb6(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  
  lVar4 = DAT_14cb0fde0;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar7 = 1;
  }
  uVar2 = *(uint *)(lVar4 + uVar7 * 4);
  uVar3 = 0x7fffffff;
  if (uVar2 < 0x7fffffff) {
    uVar3 = uVar2;
  }
  return uVar3;
}



// FUNCTION 1400dd02a FUN_1400dd02a body=26 status=ok
// SIG undefined FUN_1400dd02a(void)

void FUN_1400dd02a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400dd044(param_1,*(undefined4 *)(param_1 + 8),param_2,0x390);
    return;
  }
  return;
}



// FUNCTION 1400dd044 FUN_1400dd044 body=469 status=ok
// SIG undefined FUN_1400dd044(void)

void FUN_1400dd044(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
LAB_1400dd174:
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
LAB_1400dd1b1:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400dd0ae;
LAB_1400dd0a3:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400dd0ae:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xff99) goto code_r0x0001400dd0db;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x68,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x68;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400dd131:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400dd1b1;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400dd174;
code_r0x0001400dd0db:
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
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400dd131;
    }
  }
  goto LAB_1400dd0a3;
}



// FUNCTION 1400dd219 FUN_1400dd219 body=3089 status=ok
// SIG undefined FUN_1400dd219(void)

undefined8
FUN_1400dd219(longlong param_1,longlong *param_2,longlong param_3,uint param_4,undefined4 param_5,
             uint *param_6)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_178 [32];
  char local_158;
  undefined1 local_143;
  char local_142;
  undefined1 local_141;
  longlong *local_140;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined1 *local_104;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  char local_f5;
  undefined1 local_f4;
  undefined1 local_f3;
  wchar_t *pwStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  char cStack_b4;
  byte bStack_b3;
  undefined2 uStack_b2;
  longlong *local_b0;
  ulonglong local_a8;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined1 *local_84;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  char local_75;
  undefined2 local_74;
  int local_70;
  wchar_t *pwStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  bStack_b3 = (byte)param_4;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar13 = param_5;
  if ((char)param_5 == '\v') {
    uVar13 = 0xd;
  }
  if ((char)param_5 == '\x14') {
    uVar13 = 0xd;
  }
  if ((char)uVar13 == '\f') {
    uVar13 = 0xd;
  }
  uStack_c4 = *param_6;
  uStack_c0 = param_6[1];
  uStack_bc = param_6[2];
  local_b8 = param_6[3];
  cStack_b4 = (char)uVar13;
  local_a8 = CONCAT44(uVar13,param_4) & 0xff000000ff;
  local_a0 = uStack_c4;
  uStack_9c = uStack_c0;
  uStack_98 = uStack_bc;
  uStack_94 = local_b8;
  uVar10 = 0;
  lVar17 = 0;
  do {
    uVar10 = ((uint)(*(int *)((longlong)&local_a8 + lVar17) * -0x3361d2af) >> 0x11 |
             *(int *)((longlong)&local_a8 + lVar17) * 0x16a88000) * 0x1b873593 ^ uVar10;
    uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    lVar17 = lVar17 + 4;
  } while (lVar17 != 0x18);
  uVar10 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
  uVar11 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  uVar10 = *(uint *)(*(longlong *)(param_3 + 0x10) +
                    (ulonglong)(*(uint *)(param_3 + 4) & uVar11) * 4);
  local_140 = param_2;
  local_138 = param_1;
  if (uVar10 != 0xffffffff) {
    lVar17 = *param_2;
    do {
      lVar12 = (longlong)(int)uVar10 * 0x20;
      if (*(char *)(lVar17 + 0x14 + lVar12) == cStack_b4) {
        lVar2 = lVar17 + lVar12;
        if ((((*(byte *)(lVar2 + 0x15) == bStack_b3) && (*(uint *)(lVar2 + 4) == uStack_c4)) &&
            (*(uint *)(lVar2 + 8) == uStack_c0)) &&
           ((*(uint *)(lVar2 + 0xc) == uStack_bc && (*(uint *)(lVar2 + 0x10) == local_b8)))) {
          if (*(longlong *)(lVar17 + 0x18 + lVar12) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_178);
          }
          break;
        }
      }
      uVar10 = *(uint *)(*(longlong *)(param_3 + 0x18) + (ulonglong)uVar10 * 4);
    } while (uVar10 != 0xffffffff);
  }
  local_b0 = (longlong *)0x0;
  local_c8 = uVar11;
  if (bStack_b3 < 5) {
    switch(param_4 & 0xff) {
    case 0:
      local_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uStack_58 = 0;
      local_50 = 0;
      local_76 = 0;
      local_a8 = 8;
      local_74 = 0xff00;
      local_84 = &DAT_100000001;
      local_7c = 0x10001;
      local_78 = 0x101;
      local_a0 = 1;
      local_88 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      local_90 = 0;
      pwStack_68 = L"DefaultTexture2D";
      local_60 = 0;
      local_70 = 0x70;
      local_75 = cStack_b4;
      (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_128,&DAT_14ca85100,&local_a8);
      FUN_1430c2baf(local_128,param_6);
      FUN_1447ec05f(&local_b0,local_128,L"DefaultTexture2D");
      uVar9 = local_128;
      plVar15 = local_140;
      if (local_128 != 0) {
        LOCK();
        puVar1 = (uint *)(local_128 + 8);
        uVar10 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar10 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_128 + 8);
          LOCK();
          uVar10 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar10 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_128 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = uVar9;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar18 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar18) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar18 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar18) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
      break;
    case 1:
      local_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uStack_58 = 0;
      local_50 = 0;
      local_76 = 1;
      local_a8 = 8;
      local_74 = 0xff00;
      local_84 = &DAT_100000001;
      local_7c = 0x10001;
      local_78 = 0x101;
      local_a0 = 1;
      local_88 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      local_90 = 0;
      pwStack_68 = L"DefaultTexture2DArray";
      local_60 = 0;
      local_70 = 0x70;
      local_75 = cStack_b4;
      (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_128,&DAT_14ca85100,&local_a8);
      FUN_1430c2cb1(local_128,param_6);
      FUN_1447ec05f(&local_b0,local_128,L"DefaultTexture2DArray");
      uVar9 = local_128;
      plVar15 = local_140;
      if (local_128 != 0) {
        LOCK();
        puVar1 = (uint *)(local_128 + 8);
        uVar10 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar10 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_128 + 8);
          LOCK();
          uVar10 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar10 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_128 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = uVar9;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar18 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar18) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar18 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar18) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
      break;
    case 2:
      local_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uStack_58 = 0;
      local_50 = 0;
      local_76 = 2;
      local_a8 = 8;
      local_74 = 0xff00;
      local_84 = &DAT_100000001;
      local_7c = 0x10001;
      local_78 = 0x101;
      local_a0 = 1;
      local_88 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      local_90 = 0;
      pwStack_68 = L"DefaultTexture3D";
      local_60 = 0;
      local_70 = 0x70;
      local_75 = cStack_b4;
      (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_128,&DAT_14ca85100,&local_a8);
      FUN_1430c2d96(*(undefined8 *)(local_138 + 0x18),local_128,param_6);
      FUN_1447ec05f(&local_b0,local_128,L"DefaultTexture3D");
      uVar9 = local_128;
      plVar15 = local_140;
      if (local_128 != 0) {
        LOCK();
        puVar1 = (uint *)(local_128 + 8);
        uVar10 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar10 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_128 + 8);
          LOCK();
          uVar10 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar10 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_128 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = uVar9;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar18 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar18) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar18 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar18) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
      break;
    case 3:
      FUN_145c221da(&local_a8,L"DefaultTextureCube",1);
      local_141 = local_76;
      local_f6 = local_76;
      local_128 = 8;
      local_142 = local_75;
      local_f5 = local_75;
      local_143 = (undefined1)local_74;
      local_f4 = (undefined1)local_74;
      local_104 = local_84;
      local_fc = (undefined2)local_7c;
      local_fa = local_7c._2_2_;
      local_f8 = (undefined1)local_78;
      local_f7 = local_78._1_1_;
      local_120 = CONCAT44(uStack_9c,local_a0);
      uStack_118 = CONCAT44(uStack_94,uStack_98);
      local_110 = local_90;
      local_108 = local_88;
      local_f3 = local_74._1_1_;
      local_10c = local_8c;
      pwStack_e8 = pwStack_68;
      local_e0 = (undefined4)local_60;
      uStack_dc = local_60._4_4_;
      uStack_d8 = (undefined4)uStack_58;
      uStack_d4 = uStack_58._4_4_;
      local_d0 = local_50;
      if (local_70 == 0) {
        puVar14 = &local_a8;
        local_70 = 0x70;
        lVar17 = *DAT_14ca83900;
      }
      else {
        lVar17 = *DAT_14ca83900;
        puVar14 = &local_128;
      }
      local_a8 = 8;
      (**(code **)(lVar17 + 0x1a0))(DAT_14ca83900,&local_130,&DAT_14ca85100,puVar14);
      plVar15 = local_140;
      FUN_1430c2f47(local_130,param_6);
      FUN_1447ec05f(&local_b0,local_130,pwStack_e8);
      if (local_130 != 0) {
        LOCK();
        puVar1 = (uint *)(local_130 + 8);
        uVar10 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar10 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_130 + 8);
          LOCK();
          uVar10 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar10 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_130 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = local_130;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar18 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar18) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar18 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar18) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
      break;
    case 4:
      local_158 = cStack_b4;
      FUN_146310496(&local_a8,L"DefaultTextureCubeArray",1,
                    CONCAT62((uint6)(ushort)((uint)uVar13 >> 0x10),1));
      local_141 = local_76;
      local_f6 = local_76;
      local_128 = 8;
      local_142 = local_75;
      local_f5 = local_75;
      local_143 = (undefined1)local_74;
      local_f4 = (undefined1)local_74;
      local_104 = local_84;
      local_fc = (undefined2)local_7c;
      local_fa = local_7c._2_2_;
      local_f8 = (undefined1)local_78;
      local_f7 = local_78._1_1_;
      local_120 = CONCAT44(uStack_9c,local_a0);
      uStack_118 = CONCAT44(uStack_94,uStack_98);
      local_110 = local_90;
      local_108 = local_88;
      local_f3 = local_74._1_1_;
      local_10c = local_8c;
      pwStack_e8 = pwStack_68;
      local_e0 = (undefined4)local_60;
      uStack_dc = local_60._4_4_;
      uStack_d8 = (undefined4)uStack_58;
      uStack_d4 = uStack_58._4_4_;
      local_d0 = local_50;
      if (local_70 == 0) {
        puVar14 = &local_a8;
        local_70 = 0x70;
        lVar17 = *DAT_14ca83900;
      }
      else {
        lVar17 = *DAT_14ca83900;
        puVar14 = &local_128;
      }
      local_a8 = 8;
      (**(code **)(lVar17 + 0x1a0))(DAT_14ca83900,&local_130,&DAT_14ca85100,puVar14);
      plVar15 = local_140;
      FUN_1430c2f47(local_130,param_6);
      FUN_1447ec05f(&local_b0,local_130,pwStack_e8);
      if (local_130 != 0) {
        LOCK();
        puVar1 = (uint *)(local_130 + 8);
        uVar10 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar10 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_130 + 8);
          LOCK();
          uVar10 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar10 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_130 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = local_130;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar18 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar18) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar18 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar18) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
    }
    uVar10 = *(uint *)(plVar15 + 1);
    uVar16 = uVar10 + 1;
    *(uint *)(plVar15 + 1) = uVar16;
    if (*(uint *)((longlong)plVar15 + 0xc) < uVar16) {
      FUN_146310578(plVar15,uVar10);
    }
    lVar17 = *plVar15;
    lVar12 = (longlong)(int)uVar10 * 0x20;
    *(ulonglong *)(lVar17 + 0x10 + lVar12) =
         CONCAT26(uStack_b2,CONCAT15(bStack_b3,CONCAT14(cStack_b4,local_b8)));
    puVar1 = (uint *)(lVar17 + lVar12);
    *puVar1 = local_c8;
    puVar1[1] = uStack_c4;
    puVar1[2] = uStack_c0;
    puVar1[3] = uStack_bc;
    *(longlong **)(lVar17 + 0x18 + lVar12) = local_b0;
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x30))();
    }
    if (*(uint *)(param_3 + 8) <= uVar10) {
      uVar9 = (ulonglong)(uVar10 + (uVar16 == 0)) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar4 = 1 << ((byte)lVar17 & 0x1f);
      uVar16 = 0x20;
      if (0x20 < uVar4) {
        uVar16 = uVar4;
      }
      FUN_1404b04e2(param_3,uVar16);
    }
    uVar9 = (ulonglong)(uVar11 & *(uint *)(param_3 + 4));
    *(undefined4 *)(*(longlong *)(param_3 + 0x18) + (ulonglong)uVar10 * 4) =
         *(undefined4 *)(*(longlong *)(param_3 + 0x10) + uVar9 * 4);
    *(uint *)(*(longlong *)(param_3 + 0x10) + uVar9 * 4) = uVar10;
    uVar5 = FUN_14473c272(local_138,&local_b0,2);
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x38))();
    }
  }
  else {
    uVar5 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1400dde4e FUN_1400dde4e body=112 status=ok
// SIG undefined FUN_1400dde4e(void)

void FUN_1400dde4e(undefined8 *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_149f5e060;
  uVar2 = param_2 * 8 + 1;
  *(uint *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    uVar2 = *(uint *)(param_1 + 1);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_149f5e0a0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(byte *)((longlong)param_1 + 0x71) = *(byte *)((longlong)param_1 + 0x71) & 0xf8 | 3;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(uint *)(param_1 + 1) = uVar2 | 4;
  return;
}



// FUNCTION 1400ddebe FUN_1400ddebe body=260 status=ok
// SIG undefined FUN_1400ddebe(void)

undefined8 * FUN_1400ddebe(undefined8 *param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined8 *)*param_3;
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = param_2 * 8 + 2;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[2] = 0;
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    *param_1 = &PTR_FUN_149f5e060;
    *(int *)(param_1 + 1) = param_2 * 8 + 2;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[2] = puVar2;
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    uVar3 = *(uint *)(param_1 + 1);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_149f5e0a0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(byte *)((longlong)param_1 + 0x71) = *(byte *)((longlong)param_1 + 0x71) & 0xf8 | 3;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(uint *)(param_1 + 1) = uVar3 | 4;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f5e080;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar2 = (undefined8 *)*param_3;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}



// FUNCTION 1400ddfc2 FUN_1400ddfc2 body=105 status=ok
// SIG undefined FUN_1400ddfc2(void)

ulonglong FUN_1400ddfc2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_1400de000;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_1400de000:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1400de02c FUN_1400de02c body=136 status=ok
// SIG undefined FUN_1400de02c(void)

void FUN_1400de02c(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1400de0b4 FUN_1400de0b4 body=792 status=ok
// SIG undefined FUN_1400de0b4(void)

undefined4 *
FUN_1400de0b4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)FUN_1447262c2(param_4);
  if (plVar1 == (longlong *)0x0) {
LAB_1400de110:
    plVar1 = (longlong *)FUN_1447262c2(param_4);
    uVar5 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1400de18d;
    if (DAT_14cb5c920 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_14868f36b;
      local_60 = FUN_1464d7452;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogActor",&DAT_14cb5c920,&DAT_14868f36a);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb5c920);
    if (plVar1 == (longlong *)0x0) goto LAB_1400de18d;
    if (DAT_14cb5c920 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_14868f36b;
      local_60 = FUN_1464d7452;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogActor",&DAT_14cb5c920,&DAT_14868f36a);
    }
    plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb5c920);
    if (((plVar1 == plVar2) || (plVar2 == (longlong *)0x0)) ||
       (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2), plVar2 == (longlong *)0x0))
    goto LAB_1400de18d;
  }
  else {
    if (DAT_14cb5cdc8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148692775;
      local_60 = FUN_1464d923a;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSpeaker",&DAT_14cb5cdc8,&DAT_148692774);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb5cdc8);
    if (plVar1 == (longlong *)0x0) goto LAB_1400de110;
    uVar4 = FUN_1447f7908();
    plVar2 = (longlong *)FUN_144718840(plVar1,uVar4);
    if ((plVar1 == plVar2) || (plVar2 == (longlong *)0x0)) goto LAB_1400de110;
  }
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(lVar3 + 500);
  }
LAB_1400de18d:
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar5;
  *(undefined1 *)(param_2 + 8) = 3;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1400de3ce FUN_1400de3ce body=366 status=ok
// SIG undefined FUN_1400de3ce(void)

ulonglong FUN_1400de3ce(longlong param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x98));
  cVar1 = FUN_1400de53c(param_1,param_3);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar4 = param_2[1];
    uVar3 = uVar4 >> 0xd ^ *param_2 - uVar4;
    uVar6 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
    uVar7 = uVar6 >> 0xd ^ (uVar4 - uVar3) - uVar6;
    uVar4 = uVar7 >> 0xc ^ (uVar3 - uVar6) - uVar7;
    uVar8 = uVar4 << 0x10 ^ (uVar6 - uVar7) - uVar4;
    uVar3 = uVar8 >> 5 ^ (uVar7 - uVar4) - uVar8;
    uVar6 = uVar3 >> 3 ^ (uVar4 - uVar8) - uVar3;
    uVar4 = uVar6 << 10 ^ (uVar8 - uVar3) - uVar6;
    uVar4 = uVar4 >> 0xf ^ uVar3 - (uVar6 + uVar4);
    uVar3 = uVar4 >> 0xd ^ param_2[2] - uVar4;
    uVar6 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
    uVar4 = uVar6 >> 0xd ^ (uVar4 - uVar3) - uVar6;
    uVar3 = uVar4 >> 0xc ^ (uVar3 - uVar6) - uVar4;
    uVar6 = uVar3 << 0x10 ^ (uVar6 - uVar4) - uVar3;
    uVar7 = uVar6 >> 5 ^ (uVar4 - uVar3) - uVar6;
    uVar4 = uVar7 >> 3 ^ (uVar3 - uVar6) - uVar7;
    uVar3 = uVar4 << 10 ^ (uVar6 - uVar7) - uVar4;
    iVar2 = FUN_1400de744(param_1 + 0x48,uVar3 >> 0xf ^ uVar7 - (uVar4 + uVar3),param_2);
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),iVar2 != -1);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x98));
  return uVar5 & 0xffffffff;
}



// FUNCTION 1400de53c FUN_1400de53c body=520 status=ok
// SIG undefined FUN_1400de53c(void)

undefined8 FUN_1400de53c(double *param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong uVar13;
  undefined4 extraout_var;
  ulonglong uVar14;
  
  dVar2 = *param_1;
  if (((((-DAT_14cb1cda8 < dVar2) && (dVar2 < DAT_14cb1cda8)) && (-DAT_14cb1cdb0 < param_1[1])) &&
      (((param_1[1] < DAT_14cb1cdb0 && (-DAT_14cb1cdb8 < param_1[2])) &&
       ((param_1[2] < DAT_14cb1cdb8 &&
        ((iVar10 = _finite(dVar2), iVar10 != 0 && (iVar10 = _finite(param_1[1]), iVar10 != 0))))))))
     && (iVar10 = _finite(param_1[2]), iVar10 != 0)) {
    dVar2 = *param_2;
    if (dVar2 <= -DAT_14cb1cda8) {
      return 0;
    }
    if (DAT_14cb1cda8 <= dVar2) {
      return 0;
    }
    if (param_2[1] <= -DAT_14cb1cdb0) {
      return 0;
    }
    if (DAT_14cb1cdb0 <= param_2[1]) {
      return 0;
    }
    if (param_2[2] <= -DAT_14cb1cdb8) {
      return 0;
    }
    if (DAT_14cb1cdb8 <= param_2[2]) {
      return 0;
    }
    iVar10 = _finite(dVar2);
    if (((iVar10 != 0) && (iVar10 = _finite(param_2[1]), iVar10 != 0)) &&
       (iVar10 = _finite(param_2[2]), lVar9 = DAT_14cb1ce38, iVar10 != 0)) {
      dVar2 = *param_2;
      dVar3 = param_2[1];
      dVar4 = *param_1;
      dVar5 = param_1[1];
      dVar6 = param_2[2];
      dVar7 = param_1[2];
      uVar8 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      uVar13 = (ulonglong)uVar8;
      if (((uVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar8 == 2)) {
        uVar14 = 0;
      }
      else if (uVar8 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        uVar13 = CONCAT44(extraout_var,DVar12);
        uVar14 = (ulonglong)(DVar11 != DVar12);
      }
      else {
        uVar14 = 1;
      }
      fVar1 = *(float *)(lVar9 + uVar14 * 4);
      return CONCAT71((int7)(uVar13 >> 8),
                      (float)((dVar6 - dVar7) * (dVar6 - dVar7) +
                             (dVar3 - dVar5) * (dVar3 - dVar5) + (dVar2 - dVar4) * (dVar2 - dVar4))
                      < fVar1 * fVar1);
    }
  }
  return 0;
}



// FUNCTION 1400de744 FUN_1400de744 body=105 status=ok
// SIG undefined FUN_1400de744(void)

int FUN_1400de744(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if (((*(int *)(lVar3 + lVar5 * 0x14) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x14, *(int *)(lVar1 + 4) == param_3[1])) &&
           (*(int *)(lVar1 + 8) == param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0xc + lVar5 * 0x14);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1400de7ae FUN_1400de7ae body=71 status=ok
// SIG undefined FUN_1400de7ae(void)

void FUN_1400de7ae(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1400de7f6();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0001400de7e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,param_3,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 1400de7f6 FUN_1400de7f6 body=57 status=ok
// SIG undefined FUN_1400de7f6(void)

void FUN_1400de7f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a348 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a348 = FUN_140002ddd(FUN_14184b08f,uVar1,L"GbxBodyNodeState");
  }
  return;
}



// FUNCTION 1400de82f FUN_1400de82f body=132 status=ok
// SIG undefined FUN_1400de82f(void)

bool FUN_1400de82f(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x270))();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf1e74) {
    FUN_144b3d300(&DAT_14caf1e74);
    if (DAT_14caf1e74 == -1) {
      DAT_14caf1e71 = FUN_14473b0f0();
      _Init_thread_footer(&DAT_14caf1e74);
    }
  }
  if (DAT_14caf1e71 == '\x01') {
    bVar2 = iVar1 == 2 || iVar1 == 7;
  }
  else {
    bVar2 = iVar1 == 2;
  }
  return bVar2;
}



// FUNCTION 1400de8b4 FUN_1400de8b4 body=86 status=ok
// SIG undefined FUN_1400de8b4(void)

undefined8 FUN_1400de8b4(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x18 + (ulonglong)uVar3 * 8);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    *(uint *)(param_1 + 0x14) = uVar3;
    uVar4 = (**(code **)(*DAT_14ca83900 + 0xf8))
                      (DAT_14ca83900,&DAT_14ca85100,lVar2,*(undefined8 *)(param_1 + 8),0,param_2);
  }
  return uVar4;
}



// FUNCTION 1400de90a FUN_1400de90a body=299 status=ok
// SIG undefined FUN_1400de90a(void)

undefined8
FUN_1400de90a(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_4 + 0x18))(param_4);
    if ((cVar1 != '\0') && ((int)param_4[2] == 0)) goto LAB_1400de96c;
  }
  local_48 = 0;
  local_40 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_48,5);
LAB_1400de96c:
  if (DAT_14ca84d98 == '\x01') {
    local_58 = param_6;
    (**(code **)(*DAT_14ca83900 + 0xe8))(DAT_14ca83900,param_3,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  bVar2 = 1;
  if (DAT_14c842750 == '\x01') {
    bVar2 = FUN_1431eb928();
    bVar2 = bVar2 ^ 1 | param_2 == 0;
  }
  local_58 = param_6;
  uVar3 = (**(code **)(*DAT_14ca83900 + 0xe8))(DAT_14ca83900,param_3,param_4,param_5);
  if (bVar2 == 0) {
    LOCK();
    DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
    UNLOCK();
    if (DAT_14ca84aa8 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400dea38 FUN_1400dea38 body=28 status=ok
// SIG undefined FUN_1400dea38(void)

void FUN_1400dea38(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0x20) {
    *(undefined4 *)(param_1 + 0xc) = 0x20;
    FUN_1400dea54(param_1,*(undefined4 *)(param_1 + 8),0x20);
    return;
  }
  return;
}



// FUNCTION 1400dea54 FUN_1400dea54 body=229 status=ok
// SIG undefined FUN_1400dea54(void)

void FUN_1400dea54(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x20);
    }
    _Src = (void *)*param_1;
    uVar4 = param_3 * 0x20;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < (int)uVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)(int)uVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,uVar4 | (uint)(0xf < (int)uVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 5);
      return;
    }
  }
  return;
}



// FUNCTION 1400deb3a FUN_1400deb3a body=40 status=ok
// SIG undefined FUN_1400deb3a(void)

undefined8 FUN_1400deb3a(undefined8 param_1,int param_2)

{
  FUN_1400deb62();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400deb62 FUN_1400deb62 body=179 status=ok
// SIG undefined FUN_1400deb62(void)

void FUN_1400deb62(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149e6b8b0;
  plVar2 = (longlong *)param_1[10];
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[3];
    (**(code **)(*plVar2 + 8))(plVar2,1);
    plVar2 = plVar1;
  }
  param_1[10] = 0;
  plVar2 = (longlong *)param_1[0x14];
  if (plVar2 != (longlong *)0x0) {
    FUN_1403a7699(*plVar2,(int)plVar2[1]);
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
    param_1[0x14] = 0;
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1400dec16 FUN_1400dec16 body=29 status=ok
// SIG undefined FUN_1400dec16(void)

undefined8 FUN_1400dec16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400dec34 FUN_1400dec34 body=29 status=ok
// SIG undefined FUN_1400dec34(void)

undefined8 FUN_1400dec34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400dec52 FUN_1400dec52 body=29 status=ok
// SIG undefined FUN_1400dec52(void)

undefined8 FUN_1400dec52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400dec70 FUN_1400dec70 body=1584 status=ok
// SIG undefined FUN_1400dec70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400dec70(longlong param_1,undefined4 param_2,int param_3,int *param_4,ulonglong param_5,
                  uint param_6,int param_7,int param_8,undefined8 *param_9,undefined8 param_10,
                  longlong param_11)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  ulonglong local_d8;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  ulonglong local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  int local_a4;
  undefined8 uStack_a0;
  uint uStack_98;
  uint local_94;
  undefined8 local_90;
  int local_88;
  int iStack_84;
  ulonglong uStack_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  uint local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_14488df26(param_11);
  if (param_5 == 0) goto LAB_1400df1c5;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (*(ulonglong *)(param_1 + -0x68) < param_5 || (char)((param_4[0xc] & 0x20U) >> 5) != '\0') {
LAB_1400dede5:
    local_90 = 0;
    local_94 = *(uint *)(param_1 + 0x14);
    if (DAT_14ca81480 != 0) {
      local_94 = 1;
    }
    uStack_98 = 1;
    if (DAT_14ca81480 == 0) {
      uStack_98 = *(uint *)(param_1 + 0x10);
    }
    uStack_a0 = 0;
    local_88 = *param_4;
    iStack_84 = param_4[1];
    local_78 = param_4[4];
    iStack_74 = param_4[5];
    iStack_70 = param_4[6];
    iStack_6c = param_4[7];
    local_68 = param_4[8];
    iStack_64 = param_4[9];
    iStack_60 = param_4[10];
    iStack_5c = param_4[0xb];
    local_58 = param_4[0xc];
    iStack_54 = param_4[0xd];
    iStack_50 = param_4[0xe];
    iStack_4c = param_4[0xf];
    uStack_80 = 0;
    local_a4 = param_3;
    if ((*(char *)(lVar5 + 0x6a8) == '\x01') && (*param_4 != 1)) {
      local_d8 = 0x10000;
      if (0x10000 < param_5) {
        local_d8 = param_5;
      }
      uStack_cc = 0;
      uStack_c8 = 0;
      local_c0 = (ulonglong)local_94;
      lStack_b8 = (ulonglong)(1 < (uint)param_4[9]) << 0x16;
      uVar8 = (uint)*(byte *)(lVar5 + 0xc6) << 0xc;
      if ((local_58 & 0x20) != 0) {
        uVar8 = uVar8 | 1;
      }
      local_b0 = (ulonglong)uVar8;
      local_e0 = 0;
      local_d0 = param_3;
      uStack_c4 = uStack_98;
      iVar9 = (**(code **)(**(longlong **)(lVar5 + 8) + 0xe0))
                        (*(longlong **)(lVar5 + 8),&local_d8,&DAT_14a349268);
      if (iVar9 < 0) {
        local_150 = &local_f8;
        local_f8 = 0;
        uStack_f0 = 0;
        local_158 = 0;
        FUN_145763094(iVar9,"Adapter->GetD3DDevice()->CreateHeap(&HeapDesc, IID_PPV_ARGS(&Heap))",
                      ".\\Runtime/D3D12RHI/Private/D3D12PoolAllocator.cpp",0x1b6);
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x88,0x10);
      uVar3 = *(undefined4 *)(param_1 + 0x78);
      uVar4 = *(undefined4 *)(param_1 + 0x14);
      puVar6 = *(undefined4 **)(param_1 + 8);
      *puVar10 = &PTR_FUN_149e002e8;
      piVar1 = (int *)(puVar10 + 1);
      *(undefined4 *)(puVar10 + 1) = 0;
      puVar10[2] = puVar6;
      *(undefined4 *)(puVar10 + 3) = *puVar6;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar4;
      *puVar10 = &PTR_FUN_14a34ce88;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined1 *)(puVar10 + 6) = 1;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      *(undefined4 *)((longlong)puVar10 + 0x7c) = uVar3;
      *(undefined2 *)(puVar10 + 0x10) = 0x100;
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_158 = local_158 & 0xffffffffffffff00;
      FUN_141033122(puVar10,local_e0,param_10,0);
      if ((param_3 == 1) || ((param_3 == 4 && ((int)uStack_a0 == 1)))) {
        FUN_1405e2cd8(puVar10,local_d8);
      }
      local_130 = param_10;
      local_138 = &local_90;
      local_140 = param_9;
      local_148 = CONCAT44(local_148._4_4_,param_8);
      local_150 = (undefined8 *)CONCAT44(local_150._4_4_,param_7);
      local_158 = CONCAT44(local_158._4_4_,param_8);
      local_128 = 1;
      iVar9 = FUN_1400f3752(lVar5,&local_88,puVar10,0);
      if (iVar9 < 0) {
        local_150 = &local_108;
        local_108 = 0;
        uStack_100 = 0;
        local_158 = 0;
        FUN_145763094(iVar9,
                      "Adapter->CreatePlacedResource(Desc, BackingHeap, 0, InCreateState, InResourceStateMode, InCreateState, InClearValue, &NewResource, InName)"
                      ,".\\Runtime/D3D12RHI/Private/D3D12PoolAllocator.cpp",0x1c1);
      }
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
    }
    else {
      iVar9 = 0x7fffffff;
      if (param_7 != 0) {
        iVar9 = param_8;
      }
      local_130 = param_10;
      local_138 = &local_90;
      local_140 = param_9;
      local_150 = (undefined8 *)CONCAT44(local_150._4_4_,param_7);
      local_158 = CONCAT44(local_158._4_4_,param_8);
      local_148 = CONCAT44(local_148._4_4_,iVar9);
      local_128 = 0;
      iVar9 = FUN_140a6e850(lVar5,&local_88,*(uint *)(param_1 + 0x10),&local_a4);
      if (iVar9 < 0) {
        local_150 = &local_118;
        local_118 = 0;
        uStack_110 = 0;
        local_158 = 0;
        FUN_145763094(iVar9,
                      "Adapter->CreateCommittedResource(Desc, GetGPUMask(), HeapProps, InCreateState, InResourceStateMode, DefaultState, InClearValue, &NewResource, InName, false)"
                      ,".\\Runtime/D3D12RHI/Private/D3D12PoolAllocator.cpp",0x1c7);
      }
    }
    local_158 = 0;
    FUN_1400daf10(param_11,local_90,param_5,0);
  }
  else {
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar12 = (ulonglong)*(uint *)(param_1 + -0x70);
      if ((*(uint *)(param_1 + -0x70) < param_6) || (uVar12 < *(ulonglong *)(param_4 + 2)))
      goto LAB_1400dede5;
    }
    else {
      uVar12 = (ulonglong)param_6;
    }
    plVar2 = (longlong *)(param_1 + -0x80);
    cVar7 = ((param_4[0xc] & 3U) == 0) * '\x02' + '\x02';
    if (*param_4 == 1) {
      cVar7 = '\x01';
    }
    local_158 = param_11 + 0x20U;
    local_11c = param_2;
    FUN_142b780ea(plVar2,param_5 & 0xffffffff,uVar12,cVar7);
    *(undefined2 *)(param_11 + 0x70) = 0x202;
    *(longlong **)(param_11 + 0x18) = plVar2;
    *(ulonglong *)(param_11 + 0x68) = param_5;
    *(longlong *)(param_11 + 0x48) = param_11;
    if (*(int *)(param_1 + 0x38) == 1) {
      lVar11 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)(param_1 + -0x30) + (longlong)*(short *)(param_11 + 0x2c) * 8) + 200
                );
      uVar12 = (ulonglong)*(uint *)(param_11 + 0x28);
      *(ulonglong *)(param_11 + 0x60) = uVar12;
      *(undefined8 *)(param_11 + 0x58) = *(undefined8 *)(lVar11 + 0x40);
      *(longlong *)(param_11 + 0x10) = lVar11;
      *(ulonglong *)(param_11 + 0x58) = *(longlong *)(lVar11 + 0x40) + uVar12;
      if ((*(int *)(param_1 + 0x18) != 1) &&
         ((*(int *)(param_1 + 0x18) != 4 || (_DAT_00000004 != 1)))) {
        *(ulonglong *)(param_11 + 0x50) = uVar12 + *(longlong *)(lVar11 + 0x48);
      }
    }
    else {
      local_88 = *param_4;
      iStack_84 = param_4[1];
      local_78 = param_4[4];
      iStack_74 = param_4[5];
      iStack_70 = param_4[6];
      iStack_6c = param_4[7];
      local_68 = param_4[8];
      iStack_64 = param_4[9];
      iStack_60 = param_4[10];
      iStack_5c = param_4[0xb];
      local_58 = param_4[0xc];
      iStack_54 = param_4[0xd];
      iStack_50 = param_4[0xe];
      iStack_4c = param_4[0xf];
      local_148 = param_10;
      local_150 = param_9;
      local_158 = CONCAT44(local_158._4_4_,param_7);
      uStack_80 = uVar12;
      lVar11 = (**(code **)(*plVar2 + 0x20))(plVar2,param_11 + 0x20U,&local_88,param_8);
      *(undefined8 *)(param_11 + 0x58) = *(undefined8 *)(lVar11 + 0x40);
      *(longlong *)(param_11 + 0x10) = lVar11;
      *(undefined8 *)(param_11 + 0x58) = *(undefined8 *)(lVar11 + 0x40);
    }
    (**(code **)(*plVar2 + 0x28))(plVar2,param_11,0);
    param_2 = local_11c;
  }
  if ((param_8 == 0x400000) && (*(char *)(param_11 + 0x71) != '\x02')) {
    lVar11 = *(longlong *)(*(longlong *)(param_11 + 0x10) + 0x30);
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(param_11 + 0x10);
    }
    FUN_141032dd0(lVar5,*(undefined8 *)(lVar11 + 0x20),0xa0010000,param_2);
  }
LAB_1400df1c5:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400df2a2 FUN_1400df2a2 body=12 status=ok
// SIG undefined FUN_1400df2a2(void)

void FUN_1400df2a2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001400df2ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1400df2ae FUN_1400df2ae body=31 status=ok
// SIG undefined FUN_1400df2ae(void)

undefined8 FUN_1400df2ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400df2ce FUN_1400df2ce body=100 status=ok
// SIG undefined FUN_1400df2ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400df2ce(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca09618);
  lVar2 = DAT_14ca09620;
  lVar3 = (ulonglong)(param_1 & 0x3fffffff) * 0xa8;
  LOCK();
  piVar1 = (int *)(DAT_14ca09620 + 0xa0 + lVar3);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*(int *)(lVar2 + 0xa0 + lVar3) == 0) {
    LOCK();
    _DAT_14ca09698 = _DAT_14ca09698 + -1;
    UNLOCK();
    FUN_1400dffa4(&DAT_14ca09620,(ulonglong)(param_1 & 0x3fffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001400df314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca09618);
  return;
}



// FUNCTION 1400df332 FUN_1400df332 body=642 status=ok
// SIG undefined FUN_1400df332(void)

void FUN_1400df332(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  uint *puVar5;
  ushort uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x74) & 8) != 0) {
    lVar19 = 0;
    bVar9 = true;
    do {
      bVar12 = bVar9;
      lVar8 = *(longlong *)(param_1 + 0x148);
      lVar18 = lVar19 * 0x10;
      plVar1 = (longlong *)(param_1 + 0x50 + lVar18);
      if (0 < *(int *)(param_1 + 0x58 + lVar18)) {
        lVar2 = lVar8 + lVar19 * 0x130;
        lVar17 = 0;
        do {
          lVar15 = *plVar1;
          if ((bVar12) && ((*(byte *)(param_1 + 0x171) & 0x20) != 0)) {
            uVar6 = *(ushort *)(lVar15 + 4 + lVar17 * 8);
            bVar9 = *(int *)(lVar2 + 0x2b08) <= (int)(uint)uVar6;
            piVar3 = (int *)(*(longlong *)(lVar2 + 0x2b30 + (ulonglong)bVar9 * 0x10) +
                            (ulonglong)((-(uint)bVar9 ^ (uint)uVar6) & 0xffff) * 4);
            *piVar3 = *piVar3 + -1;
          }
          lVar16 = *(longlong *)(lVar2 + 0x2b50);
          lVar15 = (longlong)*(int *)(lVar15 + lVar17 * 8) * 0x98;
          piVar3 = (int *)(lVar16 + 0x90 + lVar15);
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            uVar6 = *(ushort *)(lVar16 + lVar15 + 0x94);
            uVar13 = (uint)uVar6;
            uVar7 = *(uint *)(lVar2 + 0x2b08);
            uVar14 = (uint)uVar6;
            uVar11 = uVar13 ^ 0xffff;
            if (uVar7 != uVar14 && (int)uVar13 <= (int)uVar7) {
              uVar11 = uVar14;
            }
            lVar16 = (ulonglong)(uVar7 == uVar14 || (int)uVar7 < (int)uVar13) * 0x20;
            lVar15 = *(longlong *)(lVar2 + 0x2b00 + lVar16);
            lVar16 = lVar2 + 0x2af0 + lVar16;
            if (lVar15 != 0) {
              lVar16 = lVar15;
            }
            bVar10 = (byte)uVar11 & 0x1f;
            puVar5 = (uint *)(lVar16 + (ulonglong)(uVar11 >> 5) * 4);
            *puVar5 = *puVar5 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
            FUN_1407531a6((longlong *)(lVar2 + 0x2b50));
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)plVar1[1]);
      }
      lVar2 = lVar8 + lVar19 * 0xd0;
      plVar4 = (longlong *)(param_1 + 0x70 + lVar18);
      if (0 < *(int *)(param_1 + 0x78 + lVar18)) {
        lVar17 = 0;
        do {
          lVar15 = *(longlong *)(lVar2 + 0x2d90);
          lVar16 = (longlong)*(int *)(*plVar4 + lVar17 * 8) * 0x60;
          piVar3 = (int *)(lVar15 + 0x58 + lVar16);
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            uVar6 = *(ushort *)(lVar15 + lVar16 + 0x5c);
            if ((int)(uint)uVar6 < *(int *)(lVar2 + 0x2d88)) {
              lVar15 = *(longlong *)(lVar2 + 0x2d80);
              if (*(longlong *)(lVar2 + 0x2d80) == 0) {
                lVar15 = lVar2 + 0x2d70;
              }
              bVar10 = (byte)uVar6 & 0x1f;
              puVar5 = (uint *)(lVar15 + (ulonglong)(uVar6 >> 5) * 4);
              *puVar5 = *puVar5 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
            }
            FUN_14023c8b2((longlong *)(lVar2 + 0x2d90));
            *(undefined1 *)(lVar2 + 0x2e18) = 1;
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)plVar4[1]);
      }
      *(undefined1 *)(lVar2 + 0x2d50) = 1;
      FUN_144b14b04(lVar8 + lVar19 * 0x210 + 0x2ef0,param_1);
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) < 0) {
        FUN_1472aef4c(plVar1,0);
      }
      *(undefined4 *)(plVar4 + 1) = 0;
      if (*(int *)((longlong)plVar4 + 0xc) < 0) {
        FUN_1472aefac(plVar4,0);
      }
      *(undefined4 *)(param_1 + 0x98 + lVar18) = 0;
      if (*(int *)(param_1 + 0x9c + lVar18) < 0) {
        FUN_144ab4ae4(lVar18 + param_1 + 0x90,0);
      }
      lVar19 = 1;
      bVar9 = false;
    } while (bVar12);
    *(byte *)(param_1 + 0x171) = *(byte *)(param_1 + 0x171) & 0xdf;
  }
  return;
}



// FUNCTION 1400df5b4 FUN_1400df5b4 body=97 status=ok
// SIG undefined FUN_1400df5b4(void)

void FUN_1400df5b4(longlong param_1)

{
  longlong lVar1;
  
  FUN_1400df616(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x148) + 0x4cd8,
                *(undefined4 *)(param_1 + 0xf8),1);
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar1 = param_1;
  }
  FUN_1446fc26f(lVar1,*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400df616 FUN_1400df616 body=143 status=ok
// SIG undefined FUN_1400df616(void)

void FUN_1400df616(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_3 != 0) {
    lVar3 = *param_1;
    lVar1 = lVar3 + (longlong)param_2 * 8;
    lVar8 = 0;
    do {
      iVar7 = (int)lVar8;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar3 + (longlong)(int)param_1[6] * 8) = param_2 + iVar7;
      }
      *(undefined4 *)(lVar1 + lVar8 * 8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar8 * 8) = uVar5;
      iVar6 = param_2 + iVar7;
      *(int *)(param_1 + 6) = iVar6;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar9 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      iVar7 = param_2 + iVar7 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      bVar4 = (byte)iVar6 & 0x1f;
      puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      lVar8 = lVar8 + 1;
    } while (param_3 != (int)lVar8);
  }
  return;
}



// FUNCTION 1400df6a6 FUN_1400df6a6 body=307 status=ok
// SIG undefined FUN_1400df6a6(void)

void FUN_1400df6a6(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  lVar5 = DAT_14ca1c5d0;
  lVar10 = *(longlong *)(param_2 + 0x20);
  if ((lVar10 != 0) && (uVar1 = *(uint *)(lVar10 + 0x24), uVar1 < *(uint *)(param_1 + 1))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar7 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar6 ^ 1);
    }
    if (*(int *)(lVar5 + uVar7 * 4) < 1) {
      lVar10 = (longlong)(int)uVar1 * 0x38;
      puVar9 = (undefined8 *)(*param_1 + lVar10);
      uVar3 = *(undefined8 *)(*param_1 + 8 + lVar10);
      puVar8 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar8 = 0;
      puVar8[1] = uVar3;
      if (puVar8 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_1[4];
        param_1[4] = (longlong)puVar8;
        *puVar4 = puVar8;
      }
    }
    else {
      *(undefined4 *)(lVar10 + 0x24) = 0xffffffff;
      *(int *)(lVar10 + 0x28) = (int)param_1[8];
      iVar2 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
        FUN_147282c60(param_1 + 2,iVar2);
      }
      *(longlong *)(param_1[2] + (longlong)iVar2 * 8) = lVar10;
      puVar9 = (undefined8 *)((longlong)(int)uVar1 * 0x38 + *param_1);
    }
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[6] = 0;
    puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar9 = 0;
    *(uint *)(puVar9 + 1) = uVar1;
    if (puVar9 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_1[6];
      param_1[6] = (longlong)puVar9;
      *puVar8 = puVar9;
    }
  }
  return;
}



// FUNCTION 1400df7da FUN_1400df7da body=1133 status=ok
// SIG undefined FUN_1400df7da(void)

bool FUN_1400df7da(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 *local_a0;
  longlong *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar16 = (longlong)param_2;
  uVar2 = *(uint *)(param_1[2] + lVar16 * 4);
  uVar15 = *(uint *)(param_1 + 0xe);
  uVar12 = uVar15 & uVar2;
  plVar9 = param_1 + 8;
  plVar7 = (longlong *)param_1[9];
  if ((longlong *)param_1[9] == (longlong *)0x0) {
    plVar7 = plVar9;
  }
  do {
    iVar3 = *(int *)((longlong)plVar7 + (longlong)(int)uVar12 * 4);
    if (iVar3 == param_2) {
      FUN_1447f872e(param_1 + 4,param_2);
      *(undefined4 *)(param_1[2] + lVar16 * 4) = 0x80000000;
      lVar1 = *param_1 + lVar16 * 0x128;
      if (*(longlong *)(*param_1 + 0xd0 + lVar16 * 0x128) != 0) {
        FUN_1400020a8();
      }
      if ((0x50 < *(ushort *)(lVar1 + 0x72)) && (*(longlong *)(lVar1 + 0x20) != 0)) {
        FUN_1400020a8();
      }
      *(undefined2 *)(lVar1 + 0x72) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FUN_1400020a8();
      }
      plVar7 = param_1 + 0xb;
      plVar8 = (longlong *)param_1[0xc];
      if ((longlong *)param_1[0xc] == (longlong *)0x0) {
        plVar8 = plVar7;
      }
      *(undefined4 *)((longlong)plVar8 + (longlong)(int)uVar12 * 4) = 0x80000000;
      uVar2 = *(uint *)(param_1 + 0xe);
      if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 0x14) <
          (ulonglong)(uVar2 * 3)) {
        local_88 = (undefined4 *)param_1[9];
        if (local_88 == (undefined4 *)0x0) {
          local_60[0] = (undefined4)*plVar9;
        }
        param_1[9] = 0;
        local_50 = (undefined4)param_1[10];
        local_4c = *(undefined4 *)((longlong)param_1 + 0x54);
        param_1[10] = 0x100000000;
        local_90 = (undefined4 *)param_1[0xc];
        if (local_90 == (undefined4 *)0x0) {
          local_78[0] = (undefined4)*plVar7;
        }
        param_1[0xc] = 0;
        local_68 = (undefined4)param_1[0xd];
        local_64 = *(undefined4 *)((longlong)param_1 + 0x6c);
        param_1[0xd] = 0x100000000;
        *(uint *)(param_1 + 0xe) = uVar2 >> 1;
        *(undefined4 *)((longlong)param_1 + 0x74) = 0;
        local_70 = local_90;
        local_58 = local_88;
        if ((int)((uVar2 >> 1) + 1) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(0x80000000);
        }
        if (uVar2 < 2) {
          iVar10 = 0;
          uVar15 = 1;
          iVar5 = 1;
        }
        else {
          FUN_14475fe8c(plVar9);
          iVar10 = (int)param_1[10];
          iVar5 = *(int *)((longlong)param_1 + 0x54);
          uVar15 = (int)param_1[0xe] + 1;
        }
        *(uint *)(param_1 + 10) = iVar10 + uVar15;
        if ((uint)(iVar5 - iVar10) < uVar15) {
          FUN_146f3c7b6(plVar9);
          uVar15 = (int)param_1[0xe] + 1;
        }
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar15);
        }
        iVar10 = *(int *)((longlong)param_1 + 0x6c);
        local_98 = plVar9;
        if (iVar10 < (int)uVar15) {
          FUN_14476002c(plVar7,uVar15);
          iVar10 = *(int *)((longlong)param_1 + 0x6c);
          uVar15 = (int)param_1[0xe] + 1;
        }
        iVar5 = (int)param_1[0xd];
        *(uint *)(param_1 + 0xd) = iVar5 + uVar15;
        if ((uint)(iVar10 - iVar5) < uVar15) {
          FUN_147138312(plVar7,iVar5);
        }
        plVar9 = (longlong *)param_1[0xc];
        if ((longlong *)param_1[0xc] == (longlong *)0x0) {
          plVar9 = plVar7;
        }
        FUN_14471858a((undefined4 *)((longlong)plVar9 + (longlong)iVar5 * 4));
        local_a0 = local_78;
        if (local_90 != (undefined4 *)0x0) {
          local_a0 = local_90;
        }
        local_80 = local_60;
        if (local_88 != (undefined4 *)0x0) {
          local_80 = local_88;
        }
        iVar10 = 0;
        do {
          uVar15 = local_a0[iVar10];
          if (!SBORROW4(0,uVar15)) {
            local_ac = local_80[iVar10];
            uVar12 = *(uint *)(param_1 + 0xe);
            uVar14 = uVar12 & uVar15;
            plVar9 = (longlong *)param_1[0xc];
            plVar8 = plVar9;
            if (plVar9 == (longlong *)0x0) {
              plVar8 = plVar7;
            }
            lVar16 = (longlong)(int)uVar14;
            uVar6 = *(uint *)((longlong)plVar8 + lVar16 * 4);
            if (!SBORROW4(0,uVar6)) {
              puVar17 = (uint *)((longlong)plVar8 + lVar16 * 4);
              uVar13 = uVar14 - uVar6 & uVar12;
              uVar11 = 0;
              do {
                if (uVar13 < uVar11) {
                  if (*(uint *)((longlong)param_1 + 0x74) < uVar11) {
                    *(uint *)((longlong)param_1 + 0x74) = uVar11;
                    uVar6 = *puVar17;
                  }
                  plVar9 = (longlong *)param_1[9];
                  if ((longlong *)param_1[9] == (longlong *)0x0) {
                    plVar9 = local_98;
                  }
                  uVar4 = *(undefined4 *)((longlong)plVar9 + lVar16 * 4);
                  *(undefined4 *)((longlong)plVar9 + lVar16 * 4) = local_ac;
                  plVar9 = (longlong *)param_1[0xc];
                  if ((longlong *)param_1[0xc] == (longlong *)0x0) {
                    plVar9 = plVar7;
                  }
                  *(uint *)((longlong)plVar9 + lVar16 * 4) = uVar15;
                  uVar12 = *(uint *)(param_1 + 0xe);
                  plVar9 = (longlong *)param_1[0xc];
                  uVar11 = uVar13;
                  local_ac = uVar4;
                  uVar15 = uVar6;
                }
                uVar11 = uVar11 + 1;
                uVar14 = uVar14 + 1 & uVar12;
                plVar8 = plVar9;
                if (plVar9 == (longlong *)0x0) {
                  plVar8 = plVar7;
                }
                lVar16 = (longlong)(int)uVar14;
                puVar17 = (uint *)((longlong)plVar8 + lVar16 * 4);
                uVar6 = *puVar17;
                uVar13 = uVar14 - uVar6 & uVar12;
              } while (!SBORROW4(0,uVar6));
              if (*(uint *)((longlong)param_1 + 0x74) < uVar11) {
                *(uint *)((longlong)param_1 + 0x74) = uVar11;
              }
            }
            plVar9 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar9 = local_98;
            }
            *(undefined4 *)((longlong)plVar9 + lVar16 * 4) = local_ac;
            plVar9 = (longlong *)param_1[0xc];
            if ((longlong *)param_1[0xc] == (longlong *)0x0) {
              plVar9 = plVar7;
            }
            *(uint *)((longlong)plVar9 + lVar16 * 4) = uVar15;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != uVar2 + 1 + (uint)(uVar2 == 0xffffffff));
        local_a8 = plVar7;
        if (local_90 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
      }
      break;
    }
    uVar12 = uVar12 + 1 & uVar15;
  } while (uVar12 != (*(int *)((longlong)param_1 + 0x74) + uVar2 + 1 & uVar15));
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3 == param_2;
}



// FUNCTION 1400dfc48 FUN_1400dfc48 body=118 status=ok
// SIG undefined FUN_1400dfc48(void)

int FUN_1400dfc48(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1400e0406(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(lVar2 + lVar3 * 8 + 8),(void *)(lVar2 + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  *(undefined8 *)(lVar2 + lVar3 * 8) = *param_2;
  return param_3;
}



// FUNCTION 1400dfcbe FUN_1400dfcbe body=208 status=ok
// SIG undefined FUN_1400dfcbe(void)

void FUN_1400dfcbe(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = (longlong)param_2 * 0x100;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0xffffffffffffffU) * 0x10]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x100,8);
  }
  return;
}



// FUNCTION 1400dfd8e FUN_1400dfd8e body=323 status=ok
// SIG undefined FUN_1400dfd8e(void)

void FUN_1400dfd8e(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400dfdfb;
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
LAB_1400dfdfb:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 1400dfed2 FUN_1400dfed2 body=209 status=ok
// SIG undefined FUN_1400dfed2(void)

void FUN_1400dfed2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 1400dffa4 FUN_1400dffa4 body=1121 status=ok
// SIG undefined FUN_1400dffa4(void)

bool FUN_1400dffa4(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_d8 [36];
  undefined4 local_b4;
  longlong *local_b0;
  longlong *local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  longlong *local_88;
  undefined4 *local_80;
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar11 = (longlong)param_2;
  uVar2 = *(uint *)(param_1[2] + lVar11 * 4);
  uVar17 = *(uint *)(param_1 + 0xe);
  uVar14 = uVar17 & uVar2;
  plVar9 = param_1 + 8;
  plVar7 = (longlong *)param_1[9];
  if ((longlong *)param_1[9] == (longlong *)0x0) {
    plVar7 = plVar9;
  }
  do {
    iVar3 = *(int *)((longlong)plVar7 + (longlong)(int)uVar14 * 4);
    if (iVar3 == param_2) {
      FUN_1447f872e(param_1 + 4,param_2);
      *(undefined4 *)(param_1[2] + lVar11 * 4) = 0x80000000;
      lVar1 = *param_1 + lVar11 * 0xa8;
      if (*(longlong *)(*param_1 + 0x48 + lVar11 * 0xa8) != 0) {
        FUN_140021284();
      }
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FUN_140021284();
      }
      if (*(longlong *)(lVar1 + 0x38) != 0) {
        FUN_140021284();
      }
      if (*(longlong *)(lVar1 + 0x30) != 0) {
        FUN_140021284();
      }
      plVar7 = param_1 + 0xb;
      plVar8 = (longlong *)param_1[0xc];
      if ((longlong *)param_1[0xc] == (longlong *)0x0) {
        plVar8 = plVar7;
      }
      *(undefined4 *)((longlong)plVar8 + (longlong)(int)uVar14 * 4) = 0x80000000;
      uVar2 = *(uint *)(param_1 + 0xe);
      if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 0x14) <
          (ulonglong)(uVar2 * 3)) {
        local_90 = (undefined4 *)param_1[9];
        if (local_90 == (undefined4 *)0x0) {
          local_60[0] = (undefined4)*plVar9;
        }
        param_1[9] = 0;
        local_50 = (undefined4)param_1[10];
        local_4c = *(undefined4 *)((longlong)param_1 + 0x54);
        param_1[10] = 0x100000000;
        local_98 = (undefined4 *)param_1[0xc];
        if (local_98 == (undefined4 *)0x0) {
          local_78[0] = (undefined4)*plVar7;
        }
        param_1[0xc] = 0;
        local_68 = (undefined4)param_1[0xd];
        local_64 = *(undefined4 *)((longlong)param_1 + 0x6c);
        param_1[0xd] = 0x100000000;
        *(uint *)(param_1 + 0xe) = uVar2 >> 1;
        *(undefined4 *)((longlong)param_1 + 0x74) = 0;
        local_70 = local_98;
        local_58 = local_90;
        if ((int)((uVar2 >> 1) + 1) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(0x80000000);
        }
        if (uVar2 < 2) {
          iVar10 = 0;
          uVar17 = 1;
          iVar5 = 1;
        }
        else {
          FUN_14475fe8c(plVar9);
          iVar10 = (int)param_1[10];
          iVar5 = *(int *)((longlong)param_1 + 0x54);
          uVar17 = (int)param_1[0xe] + 1;
        }
        *(uint *)(param_1 + 10) = iVar10 + uVar17;
        if ((uint)(iVar5 - iVar10) < uVar17) {
          FUN_146f3c7b6(plVar9);
          uVar17 = (int)param_1[0xe] + 1;
        }
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar17);
        }
        iVar10 = *(int *)((longlong)param_1 + 0x6c);
        local_a8 = plVar9;
        if (iVar10 < (int)uVar17) {
          FUN_14476002c(plVar7,uVar17);
          iVar10 = *(int *)((longlong)param_1 + 0x6c);
          uVar17 = (int)param_1[0xe] + 1;
        }
        iVar5 = (int)param_1[0xd];
        *(uint *)(param_1 + 0xd) = iVar5 + uVar17;
        if ((uint)(iVar10 - iVar5) < uVar17) {
          FUN_147138312(plVar7,iVar5);
        }
        plVar9 = (longlong *)param_1[0xc];
        if ((longlong *)param_1[0xc] == (longlong *)0x0) {
          plVar9 = plVar7;
        }
        FUN_14471858a((undefined4 *)((longlong)plVar9 + (longlong)iVar5 * 4));
        local_a0 = local_78;
        if (local_98 != (undefined4 *)0x0) {
          local_a0 = local_98;
        }
        local_80 = local_60;
        if (local_90 != (undefined4 *)0x0) {
          local_80 = local_90;
        }
        iVar10 = 0;
        do {
          uVar17 = local_a0[iVar10];
          if (!SBORROW4(0,uVar17)) {
            local_b4 = local_80[iVar10];
            uVar14 = *(uint *)(param_1 + 0xe);
            uVar16 = uVar14 & uVar17;
            local_88 = (longlong *)param_1[0xc];
            plVar9 = local_88;
            if (local_88 == (longlong *)0x0) {
              plVar9 = plVar7;
            }
            lVar11 = (longlong)(int)uVar16;
            uVar13 = *(uint *)((longlong)plVar9 + lVar11 * 4);
            if (!SBORROW4(0,uVar13)) {
              puVar12 = (uint *)((longlong)plVar9 + lVar11 * 4);
              uVar15 = uVar16 - uVar13 & uVar14;
              uVar6 = 0;
              do {
                if (uVar15 < uVar6) {
                  if (*(uint *)((longlong)param_1 + 0x74) < uVar6) {
                    *(uint *)((longlong)param_1 + 0x74) = uVar6;
                    uVar13 = *puVar12;
                  }
                  plVar9 = (longlong *)param_1[9];
                  if ((longlong *)param_1[9] == (longlong *)0x0) {
                    plVar9 = local_a8;
                  }
                  uVar4 = *(undefined4 *)((longlong)plVar9 + lVar11 * 4);
                  *(undefined4 *)((longlong)plVar9 + lVar11 * 4) = local_b4;
                  plVar9 = (longlong *)param_1[0xc];
                  if ((longlong *)param_1[0xc] == (longlong *)0x0) {
                    plVar9 = plVar7;
                  }
                  *(uint *)((longlong)plVar9 + lVar11 * 4) = uVar17;
                  uVar14 = *(uint *)(param_1 + 0xe);
                  local_88 = (longlong *)param_1[0xc];
                  uVar6 = uVar15;
                  local_b4 = uVar4;
                  uVar17 = uVar13;
                }
                uVar6 = uVar6 + 1;
                uVar16 = uVar16 + 1 & uVar14;
                plVar9 = local_88;
                if (local_88 == (longlong *)0x0) {
                  plVar9 = plVar7;
                }
                lVar11 = (longlong)(int)uVar16;
                puVar12 = (uint *)((longlong)plVar9 + lVar11 * 4);
                uVar13 = *puVar12;
                uVar15 = uVar16 - uVar13 & uVar14;
              } while (!SBORROW4(0,uVar13));
              if (*(uint *)((longlong)param_1 + 0x74) < uVar6) {
                *(uint *)((longlong)param_1 + 0x74) = uVar6;
              }
            }
            plVar9 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar9 = local_a8;
            }
            *(undefined4 *)((longlong)plVar9 + lVar11 * 4) = local_b4;
            plVar9 = (longlong *)param_1[0xc];
            if ((longlong *)param_1[0xc] == (longlong *)0x0) {
              plVar9 = plVar7;
            }
            *(uint *)((longlong)plVar9 + lVar11 * 4) = uVar17;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != uVar2 + 1 + (uint)(uVar2 == 0xffffffff));
        local_b0 = plVar7;
        if (local_98 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (local_90 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
      }
      break;
    }
    uVar14 = uVar14 + 1 & uVar17;
  } while (uVar14 != (*(int *)((longlong)param_1 + 0x74) + uVar2 + 1 & uVar17));
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3 == param_2;
}



// FUNCTION 1400e0406 FUN_1400e0406 body=360 status=ok
// SIG undefined FUN_1400e0406(void)

void FUN_1400e0406(longlong param_1,int param_2)

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
  if (uVar2 < 2) {
    uVar7 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400e0494;
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
LAB_1400e0494:
    uVar7 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar5 >> 3)) {
      uVar7 = uVar5 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x14) = (int)uVar7;
  FUN_1400e056e(param_1,param_2,uVar7,8);
  return;
}



// FUNCTION 1400e056e FUN_1400e056e body=132 status=ok
// SIG undefined FUN_1400e056e(void)

void FUN_1400e056e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 1400e05f2 FUN_1400e05f2 body=350 status=ok
// SIG undefined FUN_1400e05f2(void)

char FUN_1400e05f2(uint param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar3 = DAT_14c9d2468;
  if (DAT_14c9d7010 < 1) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar1 = *(int *)(lVar2 + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar9 = 0;
    }
    else if (iVar1 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    lVar4 = DAT_14c9d2468;
    uVar8 = DAT_14c760354;
    if ((*(int *)(lVar3 + uVar9 * 4) != 1) &&
       (uVar8 = DAT_14c76034c, 3 < (int)(&DAT_14ca814b8)[((ulonglong)param_1 & 0xffff) * 0xf])) {
      iVar1 = *(int *)(lVar2 + 0xc60);
      if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
        uVar9 = 0;
      }
      else if (iVar1 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar9 = 1;
      }
      uVar8 = DAT_14c76034c;
      if (*(int *)(lVar4 + uVar9 * 4) == 2) {
        return '\x01';
      }
    }
    cVar5 = '\x01';
    if ((1 < (int)uVar8) && (cVar5 = '\x02', uVar8 != 2)) {
      cVar5 = (4 < uVar8) * '\x04' + '\x04';
    }
  }
  else if (DAT_14c760360 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\b';
    if (8 < (int)DAT_14c760360) {
      cVar5 = (0x10 < DAT_14c760360) * '\x10' + '\x10';
    }
  }
  return cVar5;
}



// FUNCTION 1400e0750 FUN_1400e0750 body=352 status=ok
// SIG undefined FUN_1400e0750(void)

undefined1 *
FUN_1400e0750(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (((longlong)*(int *)(param_4 + 0x28) == 0) ||
     (lVar5 = FUN_140a495b0(DAT_14c9a3da0 + (longlong)*(int *)(param_4 + 0x28) * 0x10 + -0x10),
     lVar5 == 0)) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    cVar3 = FUN_1447f8eee(param_4);
    if (cVar3 == '\0') {
      iVar1 = *(int *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x38) = iVar1 + 1U;
      if (*(uint *)(param_2 + 0x3c) < iVar1 + 1U) {
        FUN_1400832a0(param_2,iVar1);
      }
      puVar4 = *(undefined1 **)(param_2 + 0x30);
      if (*(undefined1 **)(param_2 + 0x30) == (undefined1 *)0x0) {
        puVar4 = param_2;
      }
      puVar4[(longlong)iVar1 * 0x30] = 0;
      FUN_1447f8f6a(puVar4 + (longlong)iVar1 * 0x30,param_4);
      FUN_1447f8ea6(puVar4 + (longlong)iVar1 * 0x30 + 0x28,param_4 + 0x28);
    }
    return param_2;
  }
  if (((*(int *)(lVar5 + 0xc) != 0) &&
      (((uVar2 = *(uint *)(lVar5 + 8), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
       (plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0)))) &&
     (((int)plVar6[2] == *(int *)(lVar5 + 0xc) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
    lVar5 = *plVar6;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (lVar5 == 0) {
      return param_2;
    }
    *(undefined4 *)(param_2 + 0x38) = 1;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_1456bb102(param_2);
    return param_2;
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  return param_2;
}



// FUNCTION 1400e08b0 FUN_1400e08b0 body=93 status=ok
// SIG undefined FUN_1400e08b0(void)

undefined8 * FUN_1400e08b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1448176ff(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1400e093a(param_1,iVar1);
      FUN_1400e090d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1400e090d FUN_1400e090d body=45 status=ok
// SIG undefined FUN_1400e090d(void)

void FUN_1400e090d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1400e093a FUN_1400e093a body=228 status=ok
// SIG undefined FUN_1400e093a(void)

void FUN_1400e093a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1400e0a1e FUN_1400e0a1e body=636 status=ok
// SIG undefined FUN_1400e0a1e(void)

void FUN_1400e0a1e(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int *_Memory;
  uint *puVar8;
  ulonglong _Size;
  int *piVar9;
  void *_Dst;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
LAB_1400e0bb3:
    if (_Src == (void *)0x0) goto LAB_1400e0c1f;
  }
  else {
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_1400e0afb;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_14274dd49);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_140217a48(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_1400e0afb:
      _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)((longlong)_Dst + _Size);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)((longlong)_Dst + _Size);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_1400e0b75;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_1400e0b75:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
    if (uVar6 == 0 || _Src == (void *)0x0) goto LAB_1400e0bb3;
    if (uVar6 < _Size) {
      _Size = uVar6;
    }
    memcpy(_Dst,_Src,_Size);
  }
  piVar9 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar9 = *piVar9 + -1;
  UNLOCK();
  if (*piVar9 == 0) {
    _Memory = piVar9;
    if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_14274dd49);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar3 + 0x310);
      *(int **)(lVar3 + 0x310) = piVar9;
      if (_Memory == (int *)0x0) goto LAB_1400e0c1f;
    }
    _aligned_free(_Memory);
  }
LAB_1400e0c1f:
  *param_1 = _Dst;
  return;
}



// FUNCTION 1400e0c9c FUN_1400e0c9c body=135 status=ok
// SIG undefined FUN_1400e0c9c(void)

longlong FUN_1400e0c9c(longlong param_1,int param_2)

{
  FUN_1447f9122(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_14480c2ea(param_1 + 0x10,0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0x80 < *(uint *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 0x80;
    FUN_1401f5dc4(param_1 + 0x20,0);
  }
  FUN_1400200e4(param_1 + 0x30);
  FUN_1400e0d24(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400e0d24 FUN_1400e0d24 body=99 status=ok
// SIG undefined FUN_1400e0d24(void)

void FUN_1400e0d24(longlong *param_1)

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



// FUNCTION 1400e0d88 FUN_1400e0d88 body=45 status=ok
// SIG undefined FUN_1400e0d88(void)

longlong FUN_1400e0d88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1400e0db6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400e0db6 FUN_1400e0db6 body=445 status=ok
// SIG undefined FUN_1400e0db6(void)

void FUN_1400e0db6(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  double dVar4;
  byte bVar5;
  undefined1 auStack_e8 [32];
  double local_c8;
  undefined1 local_c0 [16];
  byte *local_b0;
  undefined1 local_a1;
  undefined1 *local_a0;
  byte **local_98;
  LARGE_INTEGER local_90;
  undefined1 *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  QueryPerformanceCounter(&local_90);
  bVar5 = *(byte *)(param_1 + 0x10);
  if ((bVar5 & 1) == 0) {
    pbVar1 = (byte *)(param_1 + 0x10);
    dVar4 = (double)local_90.QuadPart * DAT_14c83f420 + 16777216.0 + INFINITY;
    do {
      if ((dVar4 < INFINITY) &&
         (QueryPerformanceCounter(&local_90),
         dVar4 <= (double)local_90.QuadPart * DAT_14c83f420 + 16777216.0)) break;
      if ((bVar5 & 2) == 0) {
        LOCK();
        bVar2 = *pbVar1;
        if (bVar5 == bVar2) {
          *pbVar1 = 2;
        }
        UNLOCK();
        if (bVar5 == bVar2) goto LAB_1400e0ef6;
      }
      else {
LAB_1400e0ef6:
        local_88 = &local_a1;
        local_90.QuadPart = (LONGLONG)&DAT_142743e10;
        local_98 = &local_b0;
        local_a0 = &LAB_142743e12;
        local_c8 = dVar4;
        local_b0 = pbVar1;
        FUN_1456d3e9c(local_c0,pbVar1,&local_a0,&local_90);
      }
      bVar5 = *pbVar1;
    } while ((bVar5 & 1) == 0);
  }
  if ((*(longlong *)(param_1 + 0x38) == 0) &&
     (puVar3 = *(undefined8 **)(param_1 + 8), (*(byte *)((longlong)puVar3 + 0x19) & 1) != 0)) {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined2 *)(puVar3 + 3) = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1400e0f74(param_1 + 0x30);
  FUN_1400e0fde(param_1);
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400e0f74 FUN_1400e0f74 body=105 status=ok
// SIG undefined FUN_1400e0f74(void)

void FUN_1400e0f74(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e064f0;
  if ((*(char *)((longlong)param_1 + 0x51) != '\x01') ||
     ((*(char *)((longlong)param_1 + 0x54) == '\0' && (param_1[1] != 0)))) {
    FUN_140033559("Runtime\\Core\\Public\\Async/AsyncFileHandle.h",0x4e,
                  L"IAsyncReadRequests must not be deleted until they are completed.");
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x0001400e0fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1400e0fde FUN_1400e0fde body=279 status=ok
// SIG undefined FUN_1400e0fde(void)

void FUN_1400e0fde(undefined8 *param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [16];
  byte *local_78;
  undefined1 local_69;
  undefined1 *local_68;
  byte **local_60;
  undefined *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_LAB_149e69080;
  bVar5 = *(byte *)(param_1 + 2);
  if ((bVar5 & 1) == 0) {
    pbVar2 = (byte *)(param_1 + 2);
    do {
      if ((bVar5 & 2) == 0) {
        LOCK();
        bVar3 = *pbVar2;
        if (bVar5 == bVar3) {
          *pbVar2 = 2;
        }
        UNLOCK();
        if (bVar5 == bVar3) goto LAB_1400e10a4;
      }
      else {
LAB_1400e10a4:
        local_58 = &DAT_142743e10;
        local_68 = &LAB_142743e12;
        local_98 = 0x7ff0000000000000;
        local_78 = pbVar2;
        local_60 = &local_78;
        local_50 = &local_69;
        FUN_1456d3e9c(local_88,pbVar2,&local_68,&local_58);
      }
      bVar5 = *pbVar2;
    } while ((bVar5 & 1) == 0);
  }
  FUN_1447ef07c(param_1 + 3);
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar4);
      FUN_1400020a8(lVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400e10f6 FUN_1400e10f6 body=121 status=ok
// SIG undefined FUN_1400e10f6(void)

void FUN_1400e10f6(longlong *param_1)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [136];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400e134e();
  local_20 = 0x1100000000;
  (**(code **)(*param_1 + 0xc0))(param_1,local_a8);
  FUN_1447f9616(param_1,local_a8,0);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e1170 FUN_1400e1170 body=94 status=ok
// SIG undefined FUN_1400e1170(void)

void FUN_1400e1170(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar1 = DAT_14c760db4;
  }
  FUN_1448d2f52(uVar1,0,*(undefined8 *)(param_1 + 0x178),param_2,param_1 + 0x10,param_1 + 400);
  FUN_1447f936a(param_1,0,param_2,0x10,0xff);
  return;
}



// FUNCTION 1400e11ce FUN_1400e11ce body=94 status=ok
// SIG undefined FUN_1400e11ce(void)

int FUN_1400e11ce(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_1400e122c();
  if (iVar3 == -1) {
    iVar3 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
      FUN_1400e177c(param_1,iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar4 = param_1;
    }
    uVar2 = param_2[1];
    puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
  }
  return iVar3;
}



// FUNCTION 1400e122c FUN_1400e122c body=98 status=ok
// SIG undefined FUN_1400e122c(void)

int FUN_1400e122c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = 0;
    iVar3 = 0;
    do {
      if ((((*(longlong *)(lVar1 + lVar2) == *param_2) &&
           (*(short *)(lVar1 + 0xc + lVar2) == *(short *)((longlong)param_2 + 0xc))) &&
          (*(int *)(lVar1 + 8 + lVar2) == (int)param_2[1])) &&
         (*(char *)(lVar1 + 0xe + lVar2) == *(char *)((longlong)param_2 + 0xe))) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x38) * 0x10 != lVar2);
  }
  return -1;
}



// FUNCTION 1400e128e FUN_1400e128e body=94 status=ok
// SIG undefined FUN_1400e128e(void)

int FUN_1400e128e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_1400e12ec();
  if (iVar3 == -1) {
    iVar3 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
      FUN_1400e1880(param_1,iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar4 = param_1;
    }
    uVar2 = param_2[1];
    puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
  }
  return iVar3;
}



// FUNCTION 1400e12ec FUN_1400e12ec body=98 status=ok
// SIG undefined FUN_1400e12ec(void)

int FUN_1400e12ec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar2 = 0;
    iVar3 = 0;
    do {
      if ((((*(longlong *)(lVar1 + lVar2) == *param_2) &&
           (*(short *)(lVar1 + 0xc + lVar2) == *(short *)((longlong)param_2 + 0xc))) &&
          (*(int *)(lVar1 + 8 + lVar2) == (int)param_2[1])) &&
         (*(char *)(lVar1 + 0xe + lVar2) == *(char *)((longlong)param_2 + 0xe))) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x28) * 0x10 != lVar2);
  }
  return -1;
}



// FUNCTION 1400e134e FUN_1400e134e body=1068 status=ok
// SIG undefined FUN_1400e134e(void)

void FUN_1400e134e(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)((longlong)param_1 + 0x19c) == '\0') {
    lVar5 = (**(code **)(*param_1 + 0x68))(param_1);
    plVar7 = param_1 + 0x30;
    if (lVar5 == 0) {
      FUN_143518032();
      local_30 = 1;
      local_38 = 2;
      (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,0,DAT_14cae13b0);
      if (plVar7 != &local_28) {
        lVar5 = *plVar7;
        *plVar7 = local_28;
        local_28 = 0;
        if (lVar5 == 0) goto LAB_1400e1374;
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar5 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar5 + 0xd);
            plVar4 = (longlong *)FUN_14001cc68(0x10,8);
            plVar4[1] = lVar5;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar4 = (longlong)plVar7;
                LOCK();
                bVar8 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar4;
                if (bVar8) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar8);
            }
            else {
              do {
                *plVar4 = (longlong)plVar6;
                LOCK();
                bVar8 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar4;
                if (bVar8) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar8);
            }
          }
        }
      }
      lVar5 = local_28;
      if (local_28 != 0) {
        LOCK();
        puVar1 = (uint *)(local_28 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_28 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_28 + 0xd);
            plVar4 = (longlong *)FUN_14001cc68(0x10,8);
            plVar4[1] = lVar5;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar4 = (longlong)plVar7;
                LOCK();
                bVar8 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar4;
                if (bVar8) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar8);
            }
            else {
              do {
                *plVar4 = (longlong)plVar6;
                LOCK();
                bVar8 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar4;
                if (bVar8) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar8);
            }
          }
        }
      }
    }
    else {
      FUN_1402159ac();
      local_30 = 1;
      local_38 = 2;
      (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,0,DAT_14cae1448);
      if (plVar7 != &local_28) {
        lVar5 = *plVar7;
        *plVar7 = local_28;
        local_28 = 0;
        if (lVar5 == 0) goto LAB_1400e1374;
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar5 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar5 + 0xd);
            plVar4 = (longlong *)FUN_14001cc68(0x10,8);
            plVar4[1] = lVar5;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar4 = (longlong)plVar7;
                LOCK();
                bVar8 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar4;
                if (bVar8) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar8);
            }
            else {
              do {
                *plVar4 = (longlong)plVar6;
                LOCK();
                bVar8 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar4;
                if (bVar8) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar8);
            }
          }
        }
      }
      lVar5 = local_28;
      if (local_28 != 0) {
        LOCK();
        puVar1 = (uint *)(local_28 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_28 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_28 + 0xd);
            plVar4 = (longlong *)FUN_14001cc68(0x10,8);
            plVar4[1] = lVar5;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar4 = (longlong)plVar7;
                LOCK();
                bVar8 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar4;
                if (bVar8) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar8);
            }
            else {
              do {
                *plVar4 = (longlong)plVar6;
                LOCK();
                bVar8 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar4;
                if (bVar8) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar8);
            }
          }
        }
      }
    }
  }
LAB_1400e1374:
  FUN_1417c9ed8(&local_28,DAT_14cae0e80);
  lVar5 = param_1[0x31];
  param_1[0x31] = local_28;
  local_28 = 0;
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar5;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar4;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar4;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
    lVar5 = local_28;
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar5;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar4;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar4;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400e177c FUN_1400e177c body=260 status=ok
// SIG undefined FUN_1400e177c(void)

void FUN_1400e177c(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x38);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 4) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 3;
    _Src = *(void **)((longlong)param_1 + 0x30);
joined_r0x0001400e1846:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    uVar2 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar1;
    if (3 < *(uint *)((longlong)param_1 + 0x3c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0x7fffffff;
      uVar2 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x30);
    }
    else {
      *(uint *)((longlong)param_1 + 0x3c) = uVar2;
      _Src = *(void **)((longlong)param_1 + 0x30);
      if (uVar2 < 4) goto joined_r0x0001400e1846;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x30,0,uVar2,0x10);
      memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,uVar2,0x10);
  return;
}



// FUNCTION 1400e1880 FUN_1400e1880 body=277 status=ok
// SIG undefined FUN_1400e1880(void)

void FUN_1400e1880(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x28);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar1 < 3) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 2;
    _Src = *(void **)((longlong)param_1 + 0x20);
joined_r0x0001400e1958:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    uVar2 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x2c) < 3) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0x7fffffff;
      uVar2 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x20);
    }
    else {
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      _Src = *(void **)((longlong)param_1 + 0x20);
      if (uVar2 < 3) goto joined_r0x0001400e1958;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x20,0,uVar2,0x10);
      memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,uVar2,0x10);
  return;
}



// FUNCTION 1400e1996 FUN_1400e1996 body=320 status=ok
// SIG undefined FUN_1400e1996(void)

undefined8 * FUN_1400e1996(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 8))();
  puVar2 = &DAT_14c846480;
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      puVar2 = &DAT_14c846480;
      if (*(longlong *)(lVar1 + 0x1c8) != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1c8) + 0x240);
      }
    }
  }
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e1ad8 FUN_1400e1ad8 body=208 status=ok
// SIG undefined FUN_1400e1ad8(void)

void FUN_1400e1ad8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x3c8;
  lVar1 = *(longlong *)(param_1 + 0x440);
  if (*(longlong *)(param_1 + 0x440) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(param_1 + 0x448) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x448) * 0x28;
    lVar1 = lVar1 + 0x18;
    do {
      if (((*(longlong *)(lVar1 + -0x10) == 0) || (*(longlong *)(lVar1 + -8) == 0)) ||
         (*(int *)(*(longlong *)(lVar1 + -8) + 8) < 1)) {
        FUN_140356f00(param_1,*(undefined1 *)(lVar1 + -0x18),*(undefined1 *)(lVar1 + -0x17));
      }
      else {
        FUN_14123f11a(param_1,*(undefined1 *)(lVar1 + -0x18),lVar1 + -0x10,lVar1);
      }
      lVar1 = lVar1 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  if (*(int *)(param_1 + 0x44c) < 0) {
    FUN_147f5b552(lVar2);
    return;
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x440);
  }
  FUN_1400e1ba8(lVar2,*(undefined4 *)(param_1 + 0x448));
  *(undefined4 *)(param_1 + 0x448) = 0;
  return;
}



// FUNCTION 1400e1ba8 FUN_1400e1ba8 body=65 status=ok
// SIG undefined FUN_1400e1ba8(void)

void FUN_1400e1ba8(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_1449db362(param_1);
      plVar2 = *(longlong **)(param_1 + -8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400e1bea FUN_1400e1bea body=87 status=ok
// SIG undefined FUN_1400e1bea(void)

void FUN_1400e1bea(undefined8 param_1,longlong *param_2)

{
  FUN_1400e1c41(param_2[4],(int)param_2[5]);
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1400e1c6c(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400e1c41 FUN_1400e1c41 body=43 status=ok
// SIG undefined FUN_1400e1c41(void)

void FUN_1400e1c41(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1400e1c6c FUN_1400e1c6c body=75 status=ok
// SIG undefined FUN_1400e1c6c(void)

void FUN_1400e1c6c(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x30);
    do {
      FUN_1400e1cb7(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400e1cb7 FUN_1400e1cb7 body=1 status=ok
// SIG undefined FUN_1400e1cb7(void)

void FUN_1400e1cb7(void)

{
  return;
}



// FUNCTION 1400e1cb8 FUN_1400e1cb8 body=254 status=ok
// SIG undefined FUN_1400e1cb8(void)

longlong FUN_1400e1cb8(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_4 + 0x28) != 0) {
    lVar3 = (longlong)*(int *)(param_4 + 0x28) * 0x10;
    lVar6 = (longlong)*(int *)(DAT_14c9a3da0 + -8 + lVar3);
    if (lVar6 != 0) {
      lVar3 = *(longlong *)(DAT_14c9a3da0 + -0x10 + lVar3);
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar3 + lVar5);
        uVar4 = FUN_1400e1e90();
        cVar2 = FUN_1448093f4(plVar1,uVar4);
        if ((cVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
        }
        lVar5 = lVar5 + 0x10;
      } while (lVar6 * 0x10 != lVar5);
    }
  }
  FUN_1400e1dbc(param_1,local_68);
  if (local_50 == '\0') {
    *(undefined2 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  else {
    FUN_144874210(param_2,local_68,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1400e1dbc FUN_1400e1dbc body=210 status=ok
// SIG undefined FUN_1400e1dbc(void)

undefined4 *
FUN_1400e1dbc(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_3a;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  local_50 = 0;
  local_88 = &local_58;
  local_58 = 0;
  (**(code **)(*param_1 + 0x90))(param_1,param_4,&local_48,&local_50);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = local_58;
  local_88 = (undefined8 *)local_50;
  FUN_1401097ec(param_1 + 2,&local_3a,&local_78,local_48);
  if (local_39 == '\0') {
    *(undefined8 *)(param_2 + 4) = local_68;
    *param_2 = (undefined4)local_78;
    param_2[1] = local_78._4_4_;
    param_2[2] = (undefined4)uStack_70;
    param_2[3] = uStack_70._4_4_;
  }
  *(bool *)(param_2 + 6) = local_39 == '\0';
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e1e90 FUN_1400e1e90 body=57 status=ok
// SIG undefined FUN_1400e1e90(void)

void FUN_1400e1e90(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5d38 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5d38 = FUN_140002ddd(FUN_1462b061f,uVar1,L"GbxContextParam_CustomPropertyResolver");
  }
  return;
}



// FUNCTION 1400e1eca FUN_1400e1eca body=453 status=ok
// SIG undefined FUN_1400e1eca(void)

void FUN_1400e1eca(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x18);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400e1fe8:
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
LAB_1400e2025:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x18;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400e1f23;
LAB_1400e1f18:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400e1f23:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xaa7) goto code_r0x0001400e1f4f;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 6 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400e1fa5:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400e2025;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400e1fe8;
code_r0x0001400e1f4f:
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
      goto LAB_1400e1fa5;
    }
  }
  goto LAB_1400e1f18;
}



// FUNCTION 1400e2090 FUN_1400e2090 body=172 status=ok
// SIG undefined FUN_1400e2090(void)

longlong * FUN_1400e2090(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x318))) {
    lVar5 = (ulonglong)param_3 * 0x10;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + lVar5);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + lVar5);
    if (plVar4 == (longlong *)0x0) {
      if (lVar3 != 0) {
        *param_2 = lVar3;
        param_2[1] = 0;
        return param_2;
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar3 != 0) {
        *param_2 = lVar3;
        param_2[1] = (longlong)plVar4;
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      if (lVar3 != 0) {
        return param_2;
      }
    }
  }
  FUN_141370954(param_1,param_2,(ulonglong)param_3,0);
  return param_2;
}



// FUNCTION 1400e213c FUN_1400e213c body=176 status=ok
// SIG undefined FUN_1400e213c(void)

undefined1 * FUN_1400e213c(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  FUN_1400e223c(param_1 + 8,param_2 + 8);
  param_1[0x138] = param_2[0x138];
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_2 + 0x140) = 0;
    plVar2 = *(longlong **)(param_2 + 0x148);
    plVar3 = *(longlong **)(param_1 + 0x148);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x148) = 0;
      *(longlong **)(param_1 + 0x148) = plVar2;
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
  FUN_1400e21ec(param_1 + 0x150,param_2 + 0x150);
  return param_1;
}



// FUNCTION 1400e21ec FUN_1400e21ec body=80 status=ok
// SIG undefined FUN_1400e21ec(void)

longlong * FUN_1400e21ec(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1447fa2ac(*param_1,(int)param_1[1]);
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



// FUNCTION 1400e223c FUN_1400e223c body=168 status=ok
// SIG undefined FUN_1400e223c(void)

void * FUN_1400e223c(void *param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_1 != param_2) {
    pvVar1 = *(void **)((longlong)param_1 + 0x120);
    if (*(void **)((longlong)param_1 + 0x120) == (void *)0x0) {
      pvVar1 = param_1;
    }
    FUN_1447157bd(pvVar1,*(undefined4 *)((longlong)param_1 + 0x128));
    if (*(longlong *)((longlong)param_2 + 0x120) == 0) {
      memmove(param_1,param_2,0x120);
    }
    if (*(longlong *)((longlong)param_1 + 0x120) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
    *(undefined8 *)((longlong)param_2 + 0x120) = 0;
    *(undefined4 *)((longlong)param_1 + 0x128) = *(undefined4 *)((longlong)param_2 + 0x128);
    *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
    *(undefined8 *)((longlong)param_2 + 0x128) = 0x400000000;
  }
  return param_1;
}



// FUNCTION 1400e22e4 FUN_1400e22e4 body=29 status=ok
// SIG undefined FUN_1400e22e4(void)

undefined8 FUN_1400e22e4(longlong param_1,undefined8 param_2)

{
  FUN_1400e2302(param_1 + 0x8f8);
  return param_2;
}



// FUNCTION 1400e2302 FUN_1400e2302 body=159 status=ok
// SIG undefined FUN_1400e2302(void)

undefined8 FUN_1400e2302(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x588))(param_3,local_48,local_60);
    FUN_144a76660(local_60,local_78);
    FUN_14096607e(param_1,param_2,local_48,local_78);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_1400e23a4(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e23a4 FUN_1400e23a4 body=307 status=ok
// SIG undefined FUN_1400e23a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400e23a4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (0 < (int)param_1[0x44]) {
    puVar4 = param_1 + 0x2e;
    if (*(uint **)(param_1 + 0x42) != (uint *)0x0) {
      puVar4 = *(uint **)(param_1 + 0x42);
    }
    if ((((puVar4[1] != 0) && (uVar1 = *puVar4, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
       && (((plVar5 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar5 != (longlong *)0x0 && (*(uint *)(plVar5 + 2) == puVar4[1])) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
            ((plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0 &&
             (*(longlong *)(puVar4 + 2) != 0)))))))) {
      (**(code **)(*plVar5 + 0x4b0))(plVar5,param_2);
      return param_2;
    }
  }
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (*plVar5 == 0)))) {
    param_2[2] = DAT_14cb24420;
    uVar6 = _DAT_14cb24410;
    uVar7 = uRam000000014cb24414;
    uVar8 = _DAT_14cb24418;
    uVar9 = uRam000000014cb2441c;
  }
  else {
    lVar2 = *(longlong *)(*plVar5 + 0x1c8);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x268);
      *param_2 = *(undefined8 *)(lVar2 + 0x260);
      param_2[1] = uVar3;
      param_2[2] = *(undefined8 *)(lVar2 + 0x270);
      return param_2;
    }
    param_2[2] = DAT_14c8464f0;
    uVar6 = (undefined4)DAT_14c8464e0;
    uVar7 = DAT_14c8464e0._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar9 = DAT_14c8464e8._4_4_;
  }
  *(undefined4 *)param_2 = uVar6;
  *(undefined4 *)((longlong)param_2 + 4) = uVar7;
  *(undefined4 *)(param_2 + 1) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar9;
  return param_2;
}



// FUNCTION 1400e24f4 FUN_1400e24f4 body=5573 status=ok
// SIG undefined FUN_1400e24f4(void)

/* WARNING: Removing unreachable block (ram,0x0001400e3791) */

void FUN_1400e24f4(undefined8 *param_1,float param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined7 uVar18;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined1 *puVar19;
  undefined8 **ppuVar20;
  undefined1 *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *plVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auStack_2e8 [32];
  float local_2c8;
  int local_2c0;
  undefined1 local_2b8;
  uint local_2a4;
  undefined8 *local_2a0;
  int local_294;
  longlong *local_290;
  longlong *local_288;
  undefined4 local_27c;
  longlong local_278;
  longlong local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong local_258;
  longlong local_250;
  undefined8 *local_248;
  longlong local_240;
  undefined8 *local_238 [4];
  undefined8 **local_218;
  ulonglong local_210;
  DWORD local_208;
  LONG LStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  char cStack_1d4;
  undefined1 local_1d0 [32];
  undefined1 *local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [32];
  undefined1 *local_178;
  int local_170;
  LARGE_INTEGER local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined5 uStack_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  int local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined1 local_f8 [32];
  undefined1 *local_d8;
  int local_d0;
  undefined4 local_cc;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((((*(int *)(param_1 + 10) == 0) && (*(int *)(param_1 + 0x10) == 0)) ||
      ((*(byte *)(param_1 + 6) & 1) == 0)) || ((0.0 < DAT_14cb43908 && (param_2 <= DAT_14cb43908))))
  goto LAB_1400e2e04;
  local_294 = DAT_14cb3a5f8;
  local_268 = param_3;
  if (DAT_14cb3a5f8 != 0) {
    uVar17 = FUN_14811173e();
    if (param_1 != (undefined8 *)0x0) {
      FUN_1481f6aa2(param_1);
    }
    FUN_148121460(uVar17);
  }
  FUN_14012d1c4(param_1);
  local_250 = (longlong)*(int *)(param_1 + 0x10);
  local_270 = -1;
  local_27c = (undefined4)CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 0x10) >> 8),1);
  if (((param_1[5] == 0) || (DAT_14caf6068 < 1)) ||
     (((DAT_14c7616fc & 1) == 0 ||
      (local_290 = (longlong *)FUN_14005c7aa(), local_290 == (longlong *)0x0)))) {
    local_290 = (longlong *)0x0;
  }
  else {
    QueryPerformanceCounter(&local_168);
    local_270 = CONCAT44(local_168.s.HighPart,local_168.s.LowPart);
    local_27c = 0;
  }
  puVar4 = (undefined8 *)param_1[0xa7];
  if (puVar4 != (undefined8 *)0x0) {
    param_1[0xa7] = 0;
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)();
    }
  }
  puVar4 = (undefined8 *)param_1[0xa8];
  if (puVar4 != (undefined8 *)0x0) {
    param_1[0xa8] = 0;
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)();
    }
  }
  lVar13 = param_1[2];
  if ((*(char *)((longlong)param_1 + 0x534) == '\x01') && (*(char *)(lVar13 + 0x44a) == '\0')) {
    if (*(float *)(param_1 + 0xa6) <= param_2) {
      param_2 = *(float *)(param_1 + 0xa6);
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x56c) = param_2;
    *(float *)(param_1 + 0xaf) = param_2 / *(float *)(param_1 + 0xad);
  }
  if ((*(byte *)(lVar13 + 0x50) & 1) == 0) {
    local_2a4 = 0;
  }
  else {
    uVar23 = CONCAT71((int7)((ulonglong)lVar13 >> 8),*(undefined1 *)(lVar13 + 0x4a0)) &
             0xffffffffffffff08;
    local_2a4 = (uint)CONCAT71((int7)(uVar23 >> 8),(byte)uVar23 >> 3);
  }
  plVar25 = param_1 + 0xf;
  local_2a0 = (undefined8 *)CONCAT44(local_2a0._4_4_,*(undefined4 *)(param_1 + 6));
  lVar13 = FUN_1400bd118(param_1[5]);
  iVar9 = *(int *)(param_1 + 0x10);
  local_288 = plVar25;
  local_258 = lVar13;
  if (0 < iVar9) {
    local_248 = param_1 + 0xa4;
    local_2a4 = local_2a4 ^ 1;
    iVar10 = 0;
    local_278 = lVar13;
    do {
      lVar28 = (longlong)iVar10;
      lVar5 = *(longlong *)(*plVar25 + lVar28 * 8);
      if (((ulonglong)local_2a0 & 8) == 0) {
        iVar9 = FUN_143ac6210(lVar5);
        if (iVar9 == *(int *)(param_1 + 4)) goto LAB_1400e2907;
        if (iVar9 <= *(int *)(param_1 + 4)) {
          iVar9 = *(int *)(param_1 + 0xa5);
          uVar11 = iVar9 + 1;
          *(uint *)(param_1 + 0xa5) = uVar11;
          if (*(uint *)((longlong)param_1 + 0x52c) < uVar11) {
            FUN_140337254(local_248);
          }
          *(longlong *)(param_1[0xa4] + (longlong)iVar9 * 8) = lVar5;
          lVar27 = FUN_1400bd118(param_1[5]);
          if (lVar27 != 0) {
            if ((longlong)*(int *)(lVar27 + 0x3f8) != 0) {
              plVar29 = *(longlong **)(lVar27 + 0x3f0);
              lVar14 = (longlong)*(int *)(lVar27 + 0x3f8) << 4;
              do {
                if ((undefined8 *)*plVar29 == param_1) {
                  if (plVar29 != (longlong *)0x0) goto LAB_1400e2907;
                  break;
                }
                plVar29 = plVar29 + 2;
                lVar14 = lVar14 + -0x10;
              } while (lVar14 != 0);
            }
            plVar29 = (longlong *)param_1[1];
            bVar6 = true;
            if (plVar29 == (longlong *)0x0) {
LAB_1400e2ae3:
              plVar29 = (longlong *)0x0;
              uVar17 = 0;
            }
            else {
              iVar9 = (int)plVar29[1];
              do {
                if (iVar9 == 0) goto LAB_1400e2ae3;
                LOCK();
                iVar8 = (int)plVar29[1];
                bVar30 = iVar9 == iVar8;
                if (bVar30) {
                  *(int *)(plVar29 + 1) = iVar9 + 1;
                  iVar8 = iVar9;
                }
                iVar9 = iVar8;
                UNLOCK();
              } while (!bVar30);
              uVar17 = *param_1;
              bVar6 = false;
            }
            iVar9 = *(int *)(lVar27 + 0x3f8);
            *(uint *)(lVar27 + 0x3f8) = iVar9 + 1U;
            if (*(uint *)(lVar27 + 0x3fc) < iVar9 + 1U) {
              local_260 = uVar17;
              FUN_1401b1f42((longlong *)(lVar27 + 0x3f0),iVar9);
              uVar17 = local_260;
            }
            lVar13 = local_278;
            plVar25 = local_288;
            lVar27 = *(longlong *)(lVar27 + 0x3f0);
            *(undefined8 *)(lVar27 + (longlong)iVar9 * 0x10) = uVar17;
            *(longlong **)(lVar27 + 8 + (longlong)iVar9 * 0x10) = plVar29;
            if (!bVar6) {
              LOCK();
              *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar29 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar29)(plVar29);
                LOCK();
                piVar2 = (int *)((longlong)plVar29 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar29 + 0x10))(plVar29);
                }
              }
            }
          }
          goto LAB_1400e2907;
        }
        FUN_143ad0ca6(lVar13,&local_168,iVar9,param_1[2]);
        uVar17 = CONCAT44(local_168.s.HighPart,local_168.s.LowPart);
        plVar29 = (longlong *)CONCAT44(uStack_15c,uStack_160);
        if (plVar29 == (longlong *)0x0) {
          FUN_14032de7e(uVar17);
        }
        else {
          LOCK();
          *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
          UNLOCK();
          plVar25 = (longlong *)CONCAT44(uStack_15c,uStack_160);
          if (plVar25 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar25 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar25)(plVar25);
              LOCK();
              piVar2 = (int *)((longlong)plVar25 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar25 + 0x10))(plVar25);
              }
            }
          }
          FUN_14032de7e(uVar17);
          plVar25 = local_288;
          LOCK();
          plVar1 = plVar29 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar29)(plVar29);
            LOCK();
            piVar2 = (int *)((longlong)plVar29 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
        }
      }
      else {
LAB_1400e2907:
        FUN_143ac7ac0(lVar5,param_2);
        if (iVar10 < 0 || (char)local_2a4 != '\0') {
          if (iVar10 < 0) goto LAB_1400e2a98;
        }
        else if ((((((iVar10 < *(int *)(param_1 + 0x10)) &&
                    (*(longlong *)(*plVar25 + lVar28 * 8) == lVar5)) &&
                   (*(int *)(lVar5 + 0x4c) != 0)) &&
                  ((uVar11 = *(uint *)(lVar5 + 0x48), -1 < (int)uVar11 &&
                   ((int)uVar11 < DAT_14c9647dc)))) &&
                 (plVar29 = (longlong *)
                            ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                 plVar29 != (longlong *)0x0)) &&
                ((((int)plVar29[2] == *(int *)(lVar5 + 0x4c) &&
                  ((*(uint *)(plVar29 + 1) & 0x10200000) == 0)) &&
                 ((lVar27 = *plVar29, lVar27 != 0 &&
                  (((*(int *)(lVar5 + 0x868) == 0 && (*(int *)(lVar5 + 0x86c) == 0)) &&
                   (0.0 < DAT_14c761690)))))))) {
          dVar34 = *(double *)(lVar27 + 0x270) * 1.52587890625e-05 + 0.5;
          dVar36 = *(double *)(lVar27 + 0x268) * 1.52587890625e-05 + 0.5;
          dVar38 = *(double *)(lVar27 + 0x260) * 1.52587890625e-05 + 0.5;
          auVar35._0_4_ = (float)dVar34;
          auVar35._4_4_ = (int)((ulonglong)dVar34 >> 0x20);
          auVar35._8_8_ = 0;
          auVar37._0_4_ = (float)dVar36;
          auVar37._4_4_ = (int)((ulonglong)dVar36 >> 0x20);
          auVar37._8_8_ = 0;
          auVar39._0_4_ = (float)dVar38;
          auVar39._4_4_ = (int)((ulonglong)dVar38 >> 0x20);
          auVar39._8_8_ = 0;
          auVar39 = blendps(auVar39,ZEXT816(0),0xe);
          auVar39 = roundps(auVar39,auVar39,1);
          auVar37 = blendps(auVar37,ZEXT816(0),0xe);
          auVar37 = roundps(auVar37,auVar37,1);
          auVar35 = blendps(auVar35,ZEXT816(0),0xe);
          auVar35 = roundps(auVar35,auVar35,1);
          fVar31 = ABS(*(float *)(lVar5 + 0x14) - auVar35._0_4_);
          fVar33 = ABS(*(float *)(lVar5 + 0x10) - auVar37._0_4_);
          fVar32 = ABS(*(float *)(lVar5 + 0xc) - auVar39._0_4_);
          if (fVar32 <= fVar33) {
            fVar32 = fVar33;
          }
          if (fVar32 <= fVar31) {
            fVar32 = fVar31;
          }
          if (DAT_14c761690 <= fVar32) {
            FUN_14090ddfa(lVar5);
          }
        }
        if (iVar10 < *(int *)(param_1 + 0x10)) {
          iVar10 = iVar10 + (uint)(*(longlong *)(*plVar25 + lVar28 * 8) == lVar5);
        }
      }
LAB_1400e2a98:
      iVar9 = *(int *)(param_1 + 0x10);
    } while (iVar10 < iVar9);
  }
  if ((int *)param_1[0x9e] != (int *)0x0) {
    *(int *)param_1[0x9e] = iVar9;
  }
  if ((int *)param_1[0x9f] != (int *)0x0) {
    *(int *)param_1[0x9f] = iVar9;
  }
  if ((undefined4 *)param_1[0xa0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa0] = DAT_14c762924;
  }
  if ((undefined4 *)param_1[0xa1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa1] = DAT_14c762924;
  }
  if ((undefined4 *)param_1[0xa2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa2] = DAT_14c762928;
  }
  if ((undefined4 *)param_1[0xa3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa3] = DAT_14c762928;
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 10)) {
    iVar9 = *(int *)(param_1 + 10) + *(int *)(param_1 + 0x10);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((iVar9 <= *(int *)((longlong)param_1 + 0x84)) ||
       (FUN_140802f38(plVar25), iVar9 = 0, 0 < *(int *)(param_1 + 10))) {
      iVar9 = 0;
      do {
        lVar5 = *(longlong *)param_1[9];
        if (((*(byte *)(param_1 + 6) & 8) == 0) &&
           (iVar10 = FUN_143ac6210(lVar5), iVar10 != *(int *)(param_1 + 4))) {
          FUN_143ad0ca6(lVar13,&local_168,iVar10,param_1[2]);
          uVar17 = CONCAT44(local_168.s.HighPart,local_168.s.LowPart);
          plVar29 = (longlong *)CONCAT44(uStack_15c,uStack_160);
          if (plVar29 == (longlong *)0x0) {
            FUN_14032de7e(uVar17,lVar5);
            plVar25 = local_288;
          }
          else {
            LOCK();
            *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
            UNLOCK();
            plVar25 = (longlong *)CONCAT44(uStack_15c,uStack_160);
            if (plVar25 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar25 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar25)(plVar25);
                LOCK();
                piVar2 = (int *)((longlong)plVar25 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                }
              }
            }
            FUN_14032de7e(uVar17,lVar5);
            LOCK();
            plVar1 = plVar29 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            plVar25 = local_288;
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar29)(plVar29);
              plVar25 = local_288;
              LOCK();
              piVar2 = (int *)((longlong)plVar29 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar29 + 0x10))(plVar29);
              }
            }
          }
        }
        else {
          FUN_143ac7ac0(lVar5,param_2);
          if (*(int *)(param_1 + 10) < 1) break;
          if (*(longlong *)param_1[9] == lVar5) {
            if ((*(byte *)(param_1 + 6) & 2) == 0) {
              FUN_14032eef2(param_1,lVar5);
            }
            FUN_144962840(param_1,lVar5,4);
            iVar9 = iVar9 + 1;
          }
        }
      } while (0 < *(int *)(param_1 + 10));
    }
  }
  local_2b8 = *local_268 != 0;
  local_2c8 = param_2;
  local_2c0 = iVar9;
  FUN_143ac92da(&local_208,param_1,plVar25,param_1 + 0x13);
  if (cStack_1d4 != '\x01') {
    lVar13 = param_1[2];
    if (*(longlong *)(lVar13 + 0x4d0) != 0) {
      puVar4 = *(undefined8 **)(lVar13 + 0x4d0);
      if ((*(byte *)(*(longlong *)(lVar13 + 0x4d0) + 0xa0) & 1) == 0) {
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
          UNLOCK();
          FUN_140082318(puVar4);
          FUN_140056f94(param_1,&local_208);
          iVar9 = local_294;
          LOCK();
          piVar2 = (int *)(puVar4 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          goto LAB_1400e2d84;
        }
      }
      else if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar13 + 0x4d0) = 0;
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    FUN_140056f94(param_1,&local_208);
    iVar9 = local_294;
    goto LAB_1400e2d84;
  }
  local_218 = (undefined8 **)0x0;
  local_210 = 0x400000000;
  lVar5 = param_1[2];
  uVar18 = (undefined7)((ulonglong)lVar5 >> 8);
  local_278 = lVar13;
  if (*(longlong *)(lVar5 + 0x4d0) == 0) {
LAB_1400e2ea6:
    local_2a4 = (uint)CONCAT71(uVar18,1);
  }
  else {
    puVar4 = *(undefined8 **)(lVar5 + 0x4d0);
    if ((*(byte *)(*(longlong *)(lVar5 + 0x4d0) + 0xa0) & 1) == 0) {
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
        local_210 = 0x400000001;
        local_218 = (undefined8 **)0x0;
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
        local_2a4 = 0;
        local_2a0 = puVar4;
        local_238[0] = puVar4;
        goto LAB_1400e2eb5;
      }
      goto LAB_1400e2ea6;
    }
    if (puVar4 == (undefined8 *)0x0) goto LAB_1400e2ea6;
    *(undefined8 *)(lVar5 + 0x4d0) = 0;
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_1400e2ea6;
    local_2a4 = (uint)CONCAT71(uVar18,1);
    (**(code **)*puVar4)(puVar4,1);
  }
  local_2a0 = (undefined8 *)0x0;
LAB_1400e2eb5:
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar16 = (uint *)*puVar4;
  if (puVar16 != (uint *)0x0) goto LAB_1400e2f5c;
  do {
    uVar11 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar11 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar11 | 1;
      __tlregdtor(&LAB_143acaafd);
    }
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar15 = *(undefined4 **)(lVar13 + 0x310);
    *(undefined8 *)(lVar13 + 0x310) = 0;
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar15 = 0xffffffff;
    *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
    puVar15[0x12] = 0;
    *puVar4 = puVar15;
    FUN_140217a48(puVar4);
    puVar16 = (uint *)*puVar4;
LAB_1400e2f5c:
    uVar23 = *(longlong *)(puVar16 + 0x10) + 7;
    uVar11 = puVar16[0x12];
    while( true ) {
      puVar24 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
      if (puVar24 + 0x2b <= puVar16 + 0x4000) {
        *(undefined8 **)(puVar16 + 0x10) = puVar24 + 0x2b;
        puVar16[0x12] = uVar11 + 1;
        FUN_1447247dc(puVar24,local_238);
        iVar9 = local_1a8;
        *puVar24 = &PTR_FUN_14ae26cc0;
        local_168.s.LowPart = local_208;
        local_168.s.HighPart = LStack_204;
        uStack_160 = uStack_200;
        uStack_15c = uStack_1fc;
        local_158 = local_1f8;
        uStack_154 = uStack_1f4;
        uStack_150 = uStack_1f0;
        uStack_14c = uStack_1ec;
        local_148 = local_1e8;
        uStack_144 = uStack_1e4;
        uStack_140 = uStack_1e0;
        uStack_138 = CONCAT14(cStack_1d4,uStack_1d8);
        uStack_13c = uStack_1dc;
        local_110 = (undefined1 *)0x0;
        local_108 = local_1a8;
        if (local_1a8 == 0) {
          local_104 = 4;
        }
        else {
          puVar19 = local_1d0;
          if (local_1b0 != (undefined1 *)0x0) {
            puVar19 = local_1b0;
          }
          FUN_144727e94(local_130,local_1a8,0);
          puVar21 = local_110;
          if (local_110 == (undefined1 *)0x0) {
            puVar21 = local_130;
          }
          FUN_144727e6e(puVar21,puVar19,iVar9);
        }
        local_100 = local_1a0;
        local_d8 = (undefined1 *)0x0;
        local_d0 = local_170;
        if ((longlong)local_170 == 0) {
          local_cc = 4;
        }
        else {
          puVar19 = local_198;
          if (local_178 != (undefined1 *)0x0) {
            puVar19 = local_178;
          }
          FUN_144b38ea8(local_f8,local_170);
          puVar21 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar21 = local_f8;
          }
          memcpy(puVar21,puVar19,(longlong)local_170 << 3);
        }
        iVar9 = local_108;
        *(ulonglong *)((longlong)puVar24 + 0xdd) = CONCAT53(uStack_138,uStack_13c._1_3_);
        *(undefined4 *)(puVar24 + 0x1a) = local_148;
        *(undefined4 *)((longlong)puVar24 + 0xd4) = uStack_144;
        *(undefined4 *)(puVar24 + 0x1b) = uStack_140;
        *(undefined4 *)((longlong)puVar24 + 0xdc) = uStack_13c;
        *(undefined4 *)(puVar24 + 0x18) = local_158;
        *(undefined4 *)((longlong)puVar24 + 0xc4) = uStack_154;
        *(undefined4 *)(puVar24 + 0x19) = uStack_150;
        *(undefined4 *)((longlong)puVar24 + 0xcc) = uStack_14c;
        *(DWORD *)(puVar24 + 0x16) = local_168.s.LowPart;
        *(LONG *)((longlong)puVar24 + 0xb4) = local_168.s.HighPart;
        *(undefined4 *)(puVar24 + 0x17) = uStack_160;
        *(undefined4 *)((longlong)puVar24 + 0xbc) = uStack_15c;
        puVar24[0x21] = 0;
        *(int *)(puVar24 + 0x22) = local_108;
        if (local_108 == 0) {
          *(undefined4 *)((longlong)puVar24 + 0x114) = 4;
        }
        else {
          puVar19 = local_130;
          if (local_110 != (undefined1 *)0x0) {
            puVar19 = local_110;
          }
          FUN_144727e94(puVar24 + 0x1d,local_108,0);
          puVar26 = (undefined8 *)puVar24[0x21];
          if ((undefined8 *)puVar24[0x21] == (undefined8 *)0x0) {
            puVar26 = puVar24 + 0x1d;
          }
          FUN_144727e6e(puVar26,puVar19,iVar9);
        }
        puVar24[0x23] = local_100;
        puVar24[0x28] = 0;
        lVar13 = (longlong)local_d0;
        *(int *)(puVar24 + 0x29) = local_d0;
        if (lVar13 == 0) {
          *(undefined4 *)((longlong)puVar24 + 0x14c) = 4;
        }
        else {
          puVar19 = local_f8;
          if (local_d8 != (undefined1 *)0x0) {
            puVar19 = local_d8;
          }
          FUN_144b38ea8(puVar24 + 0x24,local_d0);
          puVar26 = (undefined8 *)puVar24[0x28];
          if ((undefined8 *)puVar24[0x28] == (undefined8 *)0x0) {
            puVar26 = puVar24 + 0x24;
          }
          memcpy(puVar26,puVar19,lVar13 << 3);
        }
        puVar24[0x2a] = 0;
        if (((int)DAT_14c7629d4 < 0) ||
           ((uVar11 = DAT_14c7629d4, DAT_14caf6060 < 1 && (DAT_14caf6064 < 1)))) {
          uVar11 = DAT_14cb435a0;
        }
        uVar12 = 3;
        if ((int)uVar11 < 3) {
          uVar12 = uVar11;
        }
        uVar11 = 0;
        if (0 < (int)uVar12) {
          uVar11 = uVar12;
        }
        uVar23 = (ulonglong)uVar11;
        uVar11 = (&DAT_14cb43480)[uVar23 * 0x10];
        if (((uVar11 == 0x400) && (DAT_14c7585d8 == 0)) ||
           ((uVar11 == 0x800 && (DAT_14c7585dc == 0)))) {
          uVar11 = *(uint *)(&DAT_14cb43488 + uVar23 * 0x40);
        }
        else {
          uVar11 = uVar11 | (&DAT_14cb43484)[uVar23 * 0x10];
        }
        *(uint *)(puVar24 + 0x15) = uVar11 | 0xff;
        puVar16 = (uint *)*puVar4;
        if (puVar16 != (uint *)0x0) goto LAB_1400e3339;
        goto LAB_1400e32b9;
      }
      *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
      LOCK();
      uVar12 = *puVar16;
      *puVar16 = *puVar16 + uVar11 + 1;
      UNLOCK();
      if ((uVar12 ^ uVar11) != 0xffffffff) break;
      puVar16 = (uint *)*puVar4;
      *puVar16 = 0xffffffff;
      *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
      puVar16[0x12] = 0;
      *puVar4 = puVar16;
      uVar23 = (longlong)puVar16 + 0x5f;
      uVar11 = 0;
    }
  } while( true );
LAB_1400e32b9:
  uVar11 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar11 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar11 | 1;
    __tlregdtor(&LAB_143acaafd);
  }
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar15 = *(undefined4 **)(lVar13 + 0x310);
  *(undefined8 *)(lVar13 + 0x310) = 0;
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar15 = 0xffffffff;
  *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
  puVar15[0x12] = 0;
  *puVar4 = puVar15;
  FUN_140217a48(puVar4);
  puVar16 = (uint *)*puVar4;
LAB_1400e3339:
  puVar26 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar22 = (uint *)(puVar26 + 0x1b);
  uVar11 = puVar16[0x12];
  if (puVar22 <= puVar16 + 0x4000) goto LAB_1400e38ef;
  while( true ) {
    *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
    LOCK();
    uVar12 = *puVar16;
    *puVar16 = *puVar16 + uVar11 + 1;
    UNLOCK();
    if ((uVar12 ^ uVar11) != 0xffffffff) break;
    puVar16 = (uint *)*puVar4;
    *puVar16 = 0xffffffff;
    *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
    puVar16[0x12] = 0;
    *puVar4 = puVar16;
    puVar26 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
    puVar22 = (uint *)(puVar26 + 0x1b);
    uVar11 = 0;
    if (puVar22 <= puVar16 + 0x4000) {
      uVar11 = 1;
      goto LAB_1400e33bb;
    }
  }
  goto LAB_1400e32b9;
LAB_1400e38ef:
  uVar11 = uVar11 + 1;
LAB_1400e33bb:
  *(uint **)(puVar16 + 0x10) = puVar22;
  puVar16[0x12] = uVar11;
  FUN_1447247dc(puVar26,0);
  *puVar26 = &PTR_FUN_14ae26cd0;
  puVar26[0x19] = 0;
  puVar26[0x1a] = 0x400000000;
  puVar24[0x23] = puVar26 + 0x15;
  if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
  }
  puVar26[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar26[9] = puVar26;
  puVar26[10] = puVar26;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar5 = *(longlong *)(lVar13 + 0x2b8);
  if (lVar5 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(lVar5 + 0x30);
  }
  puVar26[0xf] = uVar17;
  puVar26[0x10] = 0xe80000527800b400;
  *(undefined4 *)((longlong)puVar26 + 0x1c) = 3;
  puVar24[0x2a] = puVar26;
  if (puVar26 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)param_1[0xa8];
  param_1[0xa8] = puVar26;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (local_d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  puVar19 = local_110;
  if (local_110 == (undefined1 *)0x0) {
    puVar19 = local_130;
  }
  FUN_144717c65(puVar19,local_108);
  if (local_110 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar11 = *(uint *)(puVar24 + 0x15);
  if (((ulonglong)uVar11 & 0xff) == 0xff) {
    uVar12 = uVar11 >> 10 & 3;
    iVar9 = 0;
    if ((uVar11 >> 9 & 1) == 0 || uVar12 < 2) {
      uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
    }
    else {
      uVar23 = 2;
    }
  }
  else {
    iVar9 = (uVar11 >> 7 & 2 | uVar11 >> 9 & 1) +
            *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar11 & 0xff) * 4);
    uVar23 = 5;
  }
  if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
  }
  lVar5 = local_278;
  puVar24[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar24[9] = puVar24;
  puVar24[10] = puVar24;
  lVar13 = *(longlong *)(lVar13 + 0x2b8);
  if (lVar13 == 0) {
    uVar7 = 1;
    if ((char)uVar23 != '\x06') {
      uVar7 = uVar23;
    }
    uVar23 = uVar7;
    uVar17 = 0;
  }
  else {
    if ((char)uVar23 == '\x06') {
      uVar23 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
    }
    uVar17 = *(undefined8 *)(lVar13 + 0x30);
  }
  puVar24[0xf] = uVar17;
  puVar24[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
  *(int *)((longlong)puVar24 + 0x1c) = iVar9;
  if (puVar24 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)param_1[0xa7];
  param_1[0xa7] = puVar24;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  lVar13 = (longlong)(int)((longlong *)CONCAT44(uStack_1ec,uStack_1f0))[1];
  if (lVar13 != 0) {
    lVar28 = *(longlong *)CONCAT44(uStack_1ec,uStack_1f0);
    lVar27 = 0;
    do {
      lVar14 = *(longlong *)(lVar28 + lVar27);
      puVar4 = (undefined8 *)param_1[0xa7];
      puVar26 = *(undefined8 **)(lVar14 + 0x7a0);
      if (puVar26 != puVar4) {
        *(undefined8 **)(lVar14 + 0x7a0) = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
          UNLOCK();
        }
        if (puVar26 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar26 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      lVar27 = lVar27 + 8;
    } while (lVar13 * 8 != lVar27);
  }
  local_168.s.LowPart._0_1_ = 1;
  FUN_1447439e4(puVar24);
  puVar4 = local_2a0;
  cVar3 = (char)local_2a4;
  if ((((*(byte *)(param_1 + 6) & 8) == 0) && (DAT_14cb43930 == '\0')) &&
     ((*(uint *)(param_1[2] + 0x4f8) & 8) != 0)) {
    if (((*(uint *)(param_1[2] + 0x4f8) & 4) == 0) || (DAT_14cb43948 == 0)) {
      if ((longlong)*(int *)(lVar5 + 0x3f8) != 0) {
        puVar24 = *(undefined8 **)(lVar5 + 0x3f0);
        lVar13 = (longlong)*(int *)(lVar5 + 0x3f8) << 4;
        do {
          if ((undefined8 *)*puVar24 == param_1) {
            if (puVar24 != (undefined8 *)0x0) goto LAB_1400e370d;
            break;
          }
          puVar24 = puVar24 + 2;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
      }
      plVar25 = (longlong *)param_1[1];
      bVar6 = true;
      if (plVar25 == (longlong *)0x0) {
        plVar25 = (longlong *)0x0;
        uVar17 = 0;
      }
      else {
        iVar9 = (int)plVar25[1];
        uVar17 = 0;
        do {
          if (iVar9 == 0) {
            plVar25 = (longlong *)0x0;
            goto LAB_1400e3851;
          }
          LOCK();
          iVar10 = (int)plVar25[1];
          bVar30 = iVar9 == iVar10;
          if (bVar30) {
            *(int *)(plVar25 + 1) = iVar9 + 1;
            iVar10 = iVar9;
          }
          iVar9 = iVar10;
          UNLOCK();
        } while (!bVar30);
        uVar17 = *param_1;
        bVar6 = false;
      }
LAB_1400e3851:
      plVar29 = (longlong *)(local_258 + 0x3f0);
      iVar9 = *(int *)(lVar5 + 0x3f8);
      *(uint *)(lVar5 + 0x3f8) = iVar9 + 1U;
      if (*(uint *)(lVar5 + 0x3fc) < iVar9 + 1U) {
        FUN_1401b1f42(plVar29,iVar9);
      }
      lVar13 = *plVar29;
      *(undefined8 *)(lVar13 + (longlong)iVar9 * 0x10) = uVar17;
      *(longlong **)(lVar13 + 8 + (longlong)iVar9 * 0x10) = plVar25;
      if (!bVar6) {
        LOCK();
        *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
        UNLOCK();
        LOCK();
        plVar29 = plVar25 + 1;
        *(int *)plVar29 = (int)*plVar29 + -1;
        UNLOCK();
        if ((int)*plVar29 == 0) {
          (**(code **)*plVar25)(plVar25);
          LOCK();
          piVar2 = (int *)((longlong)plVar25 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
          }
        }
      }
    }
    else {
      FUN_1481fbaa4(lVar5,param_1);
    }
  }
  else {
    lVar13 = *local_268;
    local_240 = param_1[0xa8];
    if (local_240 != 0) {
      LOCK();
      *(int *)(local_240 + 8) = *(int *)(local_240 + 8) + 1;
      UNLOCK();
    }
    FUN_14002c244(lVar13,&local_240);
  }
LAB_1400e370d:
  if (cVar3 == '\0') {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  ppuVar20 = local_238;
  if (local_218 != (undefined8 **)0x0) {
    ppuVar20 = local_218;
  }
  FUN_144717c65(ppuVar20,local_210 & 0xffffffff);
  iVar9 = local_294;
  if (local_218 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
LAB_1400e2d84:
  if (local_178 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  puVar19 = local_1b0;
  if (local_1b0 == (undefined1 *)0x0) {
    puVar19 = local_1d0;
  }
  FUN_144717c65(puVar19,local_1a8);
  if (local_1b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_270 != -1) {
    QueryPerformanceCounter(&local_168);
    if ((char)local_27c == '\0') {
      local_290[1] = local_290[1] + (CONCAT44(local_168.s.HighPart,local_168.s.LowPart) - local_270)
      ;
      *local_290 = *local_290 + local_250;
    }
  }
  if (iVar9 != 0) {
    uVar17 = FUN_14811173e();
    FUN_1481117c2(uVar17);
  }
LAB_1400e2e04:
  if ((local_c0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e3aba FUN_1400e3aba body=71 status=ok
// SIG undefined FUN_1400e3aba(void)

void FUN_1400e3aba(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_1400e3b02(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 4) < 2) {
    FUN_140c04244();
    return;
  }
  FUN_14012344a();
  return;
}



// FUNCTION 1400e3b02 FUN_1400e3b02 body=254 status=ok
// SIG undefined FUN_1400e3b02(void)

undefined8 FUN_1400e3b02(longlong *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  
  cVar2 = (**(code **)(*param_1 + 0x300))();
  if (cVar2 == '\0') {
    uVar1 = param_2[1];
    lVar3 = FUN_1400e3c00(param_1,param_2,1);
    if (1 < (int)uVar1) {
      lVar3 = FUN_14013f0dc(param_1,lVar3,param_2,1);
    }
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x58) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001400e3b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x310))
                        (param_1,*(undefined8 *)(*(longlong *)(lVar3 + 0x58) + 8),lVar3,
                         *(code **)(*param_1 + 0x310));
      return uVar4;
    }
  }
  else {
    if ((int)param_1[0xb] == 1) {
      return *(undefined8 *)param_1[10];
    }
    if ((int)param_1[0xd] != *(int *)((longlong)param_1 + 0x94)) {
      plVar5 = param_1 + 0x13;
      if ((longlong *)param_1[0x14] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x14];
      }
      iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x15] - 1U & *param_2) * 4);
      if (iVar6 != -1) {
        while (lVar3 = param_1[0xc] + (longlong)iVar6 * 0x38,
              *(uint *)(param_1[0xc] + (longlong)iVar6 * 0x38) != *param_2) {
          iVar6 = *(int *)(lVar3 + 0x30);
          if (iVar6 == -1) {
            return 0;
          }
        }
        if (lVar3 == 0) {
          return 0;
        }
        if ((byte *)(lVar3 + 0x28) == (byte *)0x0) {
          return 0;
        }
        return *(undefined8 *)(param_1[10] + (ulonglong)*(byte *)(lVar3 + 0x28) * 8);
      }
    }
  }
  return 0;
}



// FUNCTION 1400e3c00 FUN_1400e3c00 body=592 status=ok
// SIG undefined FUN_1400e3c00(void)

undefined8 FUN_1400e3c00(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [44];
  uint local_5c;
  ulonglong local_58;
  uint local_50;
  int local_4c;
  uint local_48;
  ulonglong local_44;
  uint *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1447a97f4(&local_50);
  iVar1 = *(int *)(param_1 + 0x338);
  if ((longlong)iVar1 == -1) {
    if (((local_50 != 0) && (local_4c != 0)) && (local_50 != DAT_14c948000)) {
      puVar3 = &DAT_14c948028;
      local_5c = local_50;
      goto LAB_1400e3c64;
    }
LAB_1400e3e01:
    puVar3 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    local_5c = (uint)DAT_14c948618;
  }
  else {
    if (((local_50 == 0) || (local_4c == 0)) || (local_50 == DAT_14c948000)) goto LAB_1400e3e01;
    puVar7 = &local_48;
    if (0 < local_2c) {
      puVar7 = local_38;
    }
    if (1 < local_4c) {
      puVar7 = local_38;
    }
    if (local_4c == 1 && 0 < iVar1) {
      puVar10 = &local_44;
      if (0 < local_2c) {
        puVar10 = (ulonglong *)(local_38 + 1);
      }
      bVar12 = *(int *)(param_1 + 0x33c) == 1;
      puVar5 = (uint *)&DAT_14c948618;
      if (bVar12) {
        puVar5 = puVar7;
      }
      local_5c = *puVar5;
      puVar3 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      if (bVar12) {
        puVar3 = puVar10;
      }
    }
    else {
      if (local_4c <= iVar1) goto LAB_1400e3e01;
      local_5c = puVar7[(longlong)iVar1 * 3];
      puVar3 = (ulonglong *)(puVar7 + (longlong)iVar1 * 3 + 1);
    }
  }
LAB_1400e3c64:
  local_58 = *puVar3;
  uVar2 = local_5c;
  if (local_58 >> 0x20 != 0) {
    uVar6 = (uint)(local_58 >> 0x20);
    uVar2 = uVar6 >> 0xd ^ local_5c - uVar6;
    uVar8 = uVar2 << 8 ^ (-0x61c88647 - uVar2) - uVar6;
    uVar9 = uVar8 >> 0xd ^ (uVar6 - uVar2) - uVar8;
    uVar6 = uVar9 >> 0xc ^ (uVar2 - uVar8) - uVar9;
    uVar2 = uVar6 << 0x10 ^ (uVar8 - uVar9) - uVar6;
    uVar8 = uVar2 >> 5 ^ (uVar9 - uVar6) - uVar2;
    uVar6 = uVar8 >> 3 ^ (uVar6 - uVar2) - uVar8;
    uVar2 = uVar6 << 10 ^ (uVar2 - uVar8) - uVar6;
    uVar2 = uVar2 >> 0xf ^ uVar8 - (uVar6 + uVar2);
  }
  iVar1 = FUN_1447fa34e((longlong *)(param_1 + 0x2e8),uVar2,&local_5c);
  if (iVar1 == -1) {
    if (local_38 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar11 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x2e8);
    if (local_38 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (lVar11 != 0) {
      uVar4 = *(undefined8 *)(lVar11 + 0x10);
      if (param_3 != '\0') {
        uVar4 = FUN_1400e3e52(param_1,uVar4);
      }
      goto LAB_1400e3cce;
    }
  }
  uVar4 = 0;
LAB_1400e3cce:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1400e3e52 FUN_1400e3e52 body=480 status=ok
// SIG undefined FUN_1400e3e52(void)

longlong FUN_1400e3e52(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [44];
  undefined4 local_7c [2];
  int local_74;
  longlong local_70 [4];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x60);
    if (lVar6 != 0) {
      local_50 = (longlong *)0x0;
      local_48 = 0x400000001;
      local_70[0] = param_2;
      do {
        lVar5 = *(longlong *)(lVar6 + 8);
        if (((lVar5 != 0) && (*(int *)(lVar5 + 0x168) <= *(int *)(lVar6 + 0x10))) &&
           ((*(byte *)(lVar5 + 0x160) & 4) == 0)) {
          FUN_144a62e5c(local_7c,lVar6 + 0x18,*(undefined4 *)(param_1 + 0x338),
                        *(undefined4 *)(param_1 + 0x33c));
          if (local_74 != 0) {
            FUN_144a78877(local_7c[0],local_74);
          }
          iVar2 = FUN_1447fa34e((longlong *)(param_1 + 0x2e8));
          uVar1 = local_48;
          if (iVar2 != -1) {
            lVar6 = *(longlong *)(param_1 + 0x2e8);
            if (lVar6 + (longlong)iVar2 * 0x20 != 0) {
              plVar3 = (longlong *)((longlong)iVar2 * 0x20 + lVar6 + 0x10);
              param_2 = 0;
              if (plVar3 == (longlong *)0x0) break;
              param_2 = *plVar3;
              if (param_2 != 0) {
                if (*(longlong *)(param_2 + 0x60) != 0) {
                  plVar3 = local_50;
                  if (local_50 == (longlong *)0x0) {
                    plVar3 = local_70;
                  }
                  lVar6 = (longlong)(int)local_48;
                  if (lVar6 != 0) {
                    lVar5 = 0;
                    do {
                      if (*(longlong *)((longlong)plVar3 + lVar5) == param_2) goto LAB_1400e4015;
                      lVar5 = lVar5 + 8;
                    } while (lVar6 * 8 - lVar5 != 0);
                  }
                  uVar4 = (int)local_48 + 1;
                  local_48 = CONCAT44(local_48._4_4_,uVar4);
                  if (local_48._4_4_ < uVar4) {
                    FUN_14709f7c4(local_70,uVar1 & 0xffffffff);
                  }
                  plVar3 = local_70;
                  if (local_50 != (longlong *)0x0) {
                    plVar3 = local_50;
                  }
                  plVar3[lVar6] = param_2;
                  lVar6 = *(longlong *)(param_2 + 0x60);
                  goto LAB_1400e3fa2;
                }
                break;
              }
            }
          }
LAB_1400e4015:
          param_2 = 0;
          break;
        }
        lVar6 = *(longlong *)(lVar6 + 0x40);
LAB_1400e3fa2:
      } while (lVar6 != 0);
      if (local_50 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e4034 FUN_1400e4034 body=32 status=ok
// SIG undefined FUN_1400e4034(void)

char FUN_1400e4034(void)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1400e4054();
  if (lVar2 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x02' - (*(short *)(lVar2 + 0xe) == 0);
  }
  return cVar1;
}



// FUNCTION 1400e4054 FUN_1400e4054 body=207 status=ok
// SIG undefined FUN_1400e4054(void)

uint * FUN_1400e4054(longlong param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((longlong)*param_2 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x60) + (longlong)*param_2 * 0x70;
    puVar1 = *(uint **)(lVar3 + 0x60);
    if (*(uint **)(lVar3 + 0x60) == (uint *)0x0) {
      puVar1 = (uint *)(lVar3 + 0x10);
    }
    if ((longlong)*(int *)(lVar3 + 0x68) != 0) {
      lVar3 = (longlong)*(int *)(lVar3 + 0x68) * 0x14;
      do {
        if ((*puVar1 == param_2[1]) && (puVar1[1] == param_2[2])) {
          return puVar1;
        }
        puVar1 = puVar1 + 5;
        lVar3 = lVar3 + -0x14;
      } while (lVar3 != 0);
    }
    return (uint *)0x0;
  }
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar3 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd8);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & (param_2[2] ^ param_2[1]))
                              * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x98) + (longlong)(int)uVar4 * 0x24);
        if ((*puVar1 == param_2[1]) &&
           (*(uint *)(*(longlong *)(param_1 + 0x98) + 4 + (longlong)(int)uVar4 * 0x24) == param_2[2]
           )) goto LAB_1400e4108;
        uVar4 = puVar1[7];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar1 = (uint *)0x0;
LAB_1400e4108:
  puVar2 = puVar1 + 2;
  if (puVar1 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  return puVar2;
}



// FUNCTION 1400e4124 FUN_1400e4124 body=50 status=ok
// SIG undefined FUN_1400e4124(void)

bool FUN_1400e4124(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((int)param_1[1] == (int)param_2[1]) {
    iVar1 = (**(code **)(*param_1 + 0x38))();
    iVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    bVar3 = iVar1 == iVar2;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 1400e4168 FUN_1400e4168 body=272 status=ok
// SIG undefined FUN_1400e4168(void)

void FUN_1400e4168(longlong param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  PSRWLOCK SRWLock;
  bool bVar7;
  undefined1 auStack_58 [32];
  PSRWLOCK local_38;
  char local_30;
  byte local_2f;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  SRWLock = (PSRWLOCK)(*(longlong *)(param_1 + 0x10) + 0x90);
  AcquireSRWLockShared(SRWLock);
  lVar4 = *(longlong *)(param_1 + 0x10);
  bVar3 = *(byte *)(lVar4 + 0xac);
  if (((param_2 | ~bVar3) & 1) == 0) {
    uVar6 = *(uint *)(lVar4 + 0x98);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar4 + 0x98);
      bVar7 = uVar6 == uVar1;
      if (bVar7) {
        *(uint *)(lVar4 + 0x98) = uVar6 | 1;
        uVar1 = uVar6;
      }
      uVar6 = uVar1;
      UNLOCK();
    } while (!bVar7);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x9c);
    if ((uVar1 & 1) != 0) {
      puVar5 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x9c);
      LOCK();
      uVar2 = *puVar5;
      if (uVar1 == uVar2) {
        *puVar5 = uVar1 + 1;
      }
      UNLOCK();
      if (uVar1 == uVar2) {
        FUN_1447458da(puVar5,0xffffffff);
      }
    }
    FUN_1468166bc(*(longlong *)(param_1 + 0x10) + 0x98,uVar6 & 0xfffffffe);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((bVar3 & 1) == 0) {
    FUN_1405043e4(&local_38,*(undefined8 *)(param_1 + 0x10));
    if (local_2f == 1) {
      FUN_14050447c(*(undefined8 *)(param_1 + 0x10));
    }
    if ((local_2f & 1) != 0) {
      *(undefined4 *)&local_38[0x14].Ptr = 0xffffffff;
    }
    if (local_30 == '\x01') {
      ReleaseSRWLockExclusive(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400e427a FUN_1400e427a body=410 status=ok
// SIG undefined FUN_1400e427a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e427a(char param_1)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  BOOL BVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_98 [32];
  longlong local_70 [2];
  tagMSG local_60;
  ulonglong local_30;
  
  uVar2 = DAT_14c8688d0;
  cVar1 = DAT_14c867d25;
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  if (DAT_14c867d25 == '\0') {
    DAT_14c867d25 = '\x01';
  }
  if (param_1 == '\0') {
    DAT_14c8688d0 = 1;
    PeekMessageW(&local_60,(HWND)0x0,0,0,0x400000);
    DAT_14c8688d0 = uVar2;
  }
  else {
    DAT_14c8688d0 = 0;
    BVar4 = PeekMessageW(&local_60,(HWND)0x0,0,0,1);
    if (BVar4 != 0) {
      do {
        TranslateMessage(&local_60);
        DispatchMessageW(&local_60);
        BVar4 = PeekMessageW(&local_60,(HWND)0x0,0,0,1);
      } while (BVar4 != 0);
    }
    cVar3 = '\x01';
    if ((DAT_14c866ff0 == '\0') && (DAT_14c846570 != (code *)0x0)) {
      cVar3 = (*DAT_14c846570)();
    }
    if (DAT_14c96795c != cVar3) {
      pwVar5 = L"false";
      if (cVar3 != '\0') {
        pwVar5 = L"true";
      }
      FUN_140056680(&local_60,pwVar5);
      FUN_140056680(local_70,L"Platform.AppHasFocus");
      FUN_14152eab6(local_70,&local_60);
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60.hwnd != (HWND)0x0) {
        FUN_1400020a8();
      }
    }
    DAT_14c96795c = cVar3;
    if (cVar3 == '\0') {
      _DAT_14c75908c = FUN_1417071f2();
    }
    else {
      _DAT_14c75908c = 0x3f800000;
    }
    FUN_140215850();
  }
  if (cVar1 == '\0') {
    DAT_14c867d25 = '\0';
  }
  if ((local_30 ^ (ulonglong)auStackY_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e4416 FUN_1400e4416 body=1560 status=ok
// SIG undefined FUN_1400e4416(void)

void FUN_1400e4416(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  uint *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = 0;
  uStack_90 = 0;
  lVar7 = param_2[1];
  if ((longlong)(int)lVar7 == 0) goto LAB_1400e464a;
  lVar4 = *param_2;
  lVar20 = 0;
  local_b8 = param_1;
  do {
    uVar21 = uStack_90;
    lVar5 = *(longlong *)(lVar4 + lVar20);
    lVar6 = *(longlong *)(lVar5 + 0x3b8);
    if (lVar6 != 0) {
      uVar15 = *(undefined8 *)(lVar6 + 0x218);
      uVar9 = *(uint *)(lVar5 + 0x3d4);
      if (((int)uVar9 < 0) && (*(longlong *)(lVar5 + 0x3d8) != 0)) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x3d8) + 4);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar9 = *(uint *)(lVar5 + 0x3d4);
      }
      *(undefined8 *)(lVar5 + 0x3d8) = 0;
      *(undefined8 *)(lVar5 + 0x5a8) = 0;
      *(undefined8 *)(lVar5 + 0x3b8) = 0;
      *(uint *)(lVar5 + 0x3d4) = uVar9 & 0x7fffffff;
      lVar18 = (longlong)(int)uStack_90;
      uVar9 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
      if (uStack_90._4_4_ < uVar9) {
        FUN_144ab5df2(&local_98,uVar21 & 0xffffffff);
      }
      *(undefined8 *)(local_98 + lVar18 * 0x18) = uVar15;
      *(longlong *)(local_98 + 8 + lVar18 * 0x18) = lVar6;
      *(longlong *)(local_98 + 0x10 + lVar18 * 0x18) = lVar5 + 0x3cc;
    }
    uVar21 = uStack_90;
    lVar20 = lVar20 + 8;
  } while ((longlong)(int)lVar7 * 8 != lVar20);
  if ((int)uStack_90 == 0) goto LAB_1400e464a;
  local_b0 = local_b8;
  local_a8 = local_98;
  local_98 = 0;
  uStack_90 = 0;
  uStack_a0 = uVar21;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar7 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_1400e455c;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_1400e4561;
      goto LAB_1400e4592;
    }
LAB_1400e4561:
    FUN_1472d4ef2(&local_b0,&DAT_14ca85100);
  }
  else {
LAB_1400e455c:
    if (iVar10 == 0x10) goto LAB_1400e4561;
LAB_1400e4592:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar7 + 0xc60), iVar10 == 2))
      goto LAB_1400e4561;
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_1400e4561;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar2;
      if (puVar14 != (uint *)0x0) goto LAB_1400e4722;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_142fb49ae);
        }
        lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar7 + 0x310);
        *(undefined8 *)(lVar7 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar2 = puVar13;
        FUN_140217a48(puVar2);
        puVar14 = (uint *)*puVar2;
LAB_1400e4722:
        puVar19 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar17 = (uint *)(puVar19 + 0x18);
        uVar9 = puVar14[0x12];
        if (puVar17 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar3 = *puVar14;
          *puVar14 = *puVar14 + uVar9 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar9) != 0xffffffff) break;
          puVar14 = (uint *)*puVar2;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          puVar19 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar19 + 0x18);
          uVar9 = 0;
          if (puVar17 <= puVar14 + 0x4000) {
            uVar9 = 1;
            goto LAB_1400e47a2;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1400e47a2:
      *(uint **)(puVar14 + 0x10) = puVar17;
      puVar14[0x12] = uVar9;
      iVar10 = 0;
      FUN_1447247dc(puVar19,0);
      *puVar19 = &PTR_FUN_14a2e83f0;
      puVar19[0x15] = local_b0;
      puVar19[0x16] = local_a8;
      local_a8 = 0;
      *(undefined4 *)(puVar19 + 0x17) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar19 + 0xbc) = uStack_a0._4_4_;
      uStack_a0 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar9 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar9 < 2) {
          uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
        }
        else {
          uVar21 = 2;
        }
      }
      else {
        iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar21 = 5;
      }
      if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
      }
      puVar19[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar19[9] = puVar19;
      puVar19[10] = puVar19;
      lVar7 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar7 == 0) {
        uVar8 = 1;
        if ((char)uVar21 != '\x06') {
          uVar8 = uVar21;
        }
        uVar21 = uVar8;
        uVar15 = 0;
      }
      else {
        if ((char)uVar21 == '\x06') {
          uVar21 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
        }
        uVar15 = *(undefined8 *)(lVar7 + 0x30);
      }
      puVar19[0xf] = uVar15;
      puVar19[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar19 + 0x1c) = iVar10;
      if (puVar19 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar19);
        LOCK();
        piVar1 = (int *)(puVar19 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar19)(puVar19,1);
        }
      }
    }
    else {
      local_c8 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14a2e83a0;
      local_60 = local_b0;
      local_58 = local_a8;
      uStack_50 = uStack_a0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_88[0] = FUN_144ab6004;
      FUN_14005a792(&DAT_14ca9a440,L"FRemovePrimitiveCommand",&DAT_14ca44c5c);
      if (local_88[0] != (code *)0x0) {
        pppuVar16 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar16 = &local_68;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  FUN_1400628fc(&local_a8);
LAB_1400e464a:
  FUN_1400628fc(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e4a30 FUN_1400e4a30 body=86 status=ok
// SIG undefined FUN_1400e4a30(void)

void FUN_1400e4a30(longlong *param_1,undefined8 param_2,uint param_3)

{
  short sVar1;
  
  sVar1 = (short)param_1[4];
  if (sVar1 < 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
    sVar1 = (short)param_1[4];
  }
  while ((int)(param_3 & 0xff) <= (int)sVar1) {
    (**(code **)(*param_1 + 0x20))(param_1);
    sVar1 = (short)param_1[4];
  }
                    /* WARNING: Could not recover jumptable at 0x0001400e4a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return;
}



// FUNCTION 1400e4a86 FUN_1400e4a86 body=101 status=ok
// SIG undefined FUN_1400e4a86(void)

void FUN_1400e4a86(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x128);
  if ((longlong)iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + -8 + (longlong)iVar2 * 8);
    *(int *)(param_1 + 0x128) = iVar2 + -1;
    FUN_1400e4aec(param_1 + 0x120);
  }
  *(undefined8 *)(param_1 + 0x138) = uVar3;
  sVar1 = *(short *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x24 + (longlong)sVar1 * 0xc) = 0;
  *(undefined8 *)(param_1 + 0x28 + (longlong)sVar1 * 0xc) = 0;
  *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + -1;
  return;
}



// FUNCTION 1400e4aec FUN_1400e4aec body=137 status=ok
// SIG undefined FUN_1400e4aec(void)

void FUN_1400e4aec(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1400e4b76 FUN_1400e4b76 body=101 status=ok
// SIG undefined FUN_1400e4b76(void)

void FUN_1400e4b76(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x138);
  if ((longlong)iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + -8 + (longlong)iVar2 * 8);
    *(int *)(param_1 + 0x138) = iVar2 + -1;
    FUN_1400e4bdc(param_1 + 0x130);
  }
  *(undefined8 *)(param_1 + 0x128) = uVar3;
  sVar1 = *(short *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x24 + (longlong)sVar1 * 0xc) = 0;
  *(undefined8 *)(param_1 + 0x28 + (longlong)sVar1 * 0xc) = 0;
  *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + -1;
  return;
}



// FUNCTION 1400e4bdc FUN_1400e4bdc body=137 status=ok
// SIG undefined FUN_1400e4bdc(void)

void FUN_1400e4bdc(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1400e4c66 FUN_1400e4c66 body=67 status=ok
// SIG undefined FUN_1400e4c66(void)

void FUN_1400e4c66(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) != 0) {
    FUN_148849a00(param_1 + 0x120);
  }
  *(undefined2 *)(param_1 + 0x20) = 0xffff;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  return;
}



// FUNCTION 1400e4caa FUN_1400e4caa body=224 status=ok
// SIG undefined FUN_1400e4caa(void)

void FUN_1400e4caa(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *plVar1 = 0;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400e4d8c(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),1);
    if (plVar1 != &local_20) {
      lVar4 = *plVar1;
      *plVar1 = local_20;
      local_20 = 0;
      if (lVar4 == 0) goto LAB_1400e4d0d;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_20 != 0) {
      LOCK();
      puVar2 = (uint *)(local_20 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
LAB_1400e4d0d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e4d8c FUN_1400e4d8c body=245 status=ok
// SIG undefined FUN_1400e4d8c(void)

longlong * FUN_1400e4d8c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_144a8f66a();
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_30,param_2,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_30;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1400e4e82 FUN_1400e4e82 body=427 status=ok
// SIG undefined FUN_1400e4e82(void)

double * FUN_1400e4e82(double *param_1,double *param_2,float *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_2[2] + param_2[5]) * 0.5 * (double)param_3[2];
  dVar2 = (param_2[1] + param_2[4]) * 0.5 * (double)param_3[1];
  dVar5 = (*param_2 + param_2[3]) * 0.5 * (double)*param_3;
  dVar3 = (param_2[5] - param_2[2]) * 0.5 * (double)param_3[2] * (double)param_4[2];
  dVar4 = (param_2[4] - param_2[1]) * 0.5 * (double)param_3[1] * (double)param_4[1];
  dVar6 = (param_2[3] - *param_2) * 0.5 * (double)*param_3 * (double)*param_4;
  *param_1 = dVar5 - dVar6;
  param_1[1] = dVar2 - dVar4;
  param_1[2] = dVar1 - dVar3;
  param_1[3] = dVar5 + dVar6;
  param_1[4] = dVar2 + dVar4;
  param_1[5] = dVar1 + dVar3;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 1400e502e FUN_1400e502e body=21 status=ok
// SIG undefined FUN_1400e502e(void)

undefined8 FUN_1400e502e(undefined8 *param_1,ushort *param_2)

{
  LOCK();
  if (*(byte *)*param_1 == 3) {
    *(byte *)*param_1 = (byte)(*param_2 >> 7) & 2;
  }
  UNLOCK();
  return 0;
}



// FUNCTION 1400e5044 FUN_1400e5044 body=418 status=ok
// SIG undefined FUN_1400e5044(void)

longlong * FUN_1400e5044(ulonglong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint *_Dst;
  uint *puVar7;
  bool bVar8;
  
  while( true ) {
    _Dst = DAT_14c82b988;
    if (DAT_14c82b988 == (uint *)0x0) {
      _Dst = _aligned_malloc(0x108,8);
      memset(_Dst,0,0x108);
      *_Dst = 0x20;
      puVar7 = (uint *)0x0;
      LOCK();
      bVar8 = DAT_14c82b988 != (uint *)0x0;
      puVar4 = _Dst;
      if (bVar8) {
        puVar7 = DAT_14c82b988;
        puVar4 = DAT_14c82b988;
      }
      DAT_14c82b988 = puVar4;
      UNLOCK();
      if (bVar8) {
        _aligned_free(_Dst);
        _Dst = puVar7;
      }
    }
    uVar3 = ((param_1 >> 0x20) * -0x5087ae1f62d043d7 + param_1 * -0x34efebe6d34d3a04 +
             0x5b12db9242bd7ce7 >> 0x20) % (ulonglong)*_Dst;
    plVar5 = *(longlong **)(_Dst + uVar3 * 2 + 2);
    if (*(longlong **)(_Dst + uVar3 * 2 + 2) == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_1400c0d5e(0x40,0x40);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      plVar6 = *(longlong **)(_Dst + uVar3 * 2 + 2);
      bVar8 = plVar6 == (longlong *)0x0;
      if (bVar8) {
        *(longlong **)(_Dst + uVar3 * 2 + 2) = plVar5;
        plVar6 = (longlong *)0x0;
      }
      UNLOCK();
      if (!bVar8) {
        FUN_1467ab492(plVar5);
        plVar5 = plVar6;
      }
    }
    LOCK();
    lVar1 = *plVar5;
    if (lVar1 == 0) {
      *plVar5 = 1;
    }
    UNLOCK();
    if (lVar1 != 0) {
      FUN_1400c0ca8(plVar5);
    }
    if (*(char *)(param_2 + 1) == '\x01') {
      puVar2 = (ulonglong *)*param_2;
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((char)(((uint)uVar3 & 2) >> 1) == '\0' && 3 < uVar3) {
        FUN_1400c0e08();
      }
    }
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 1;
    if (_Dst == DAT_14c82b988) break;
    *(undefined1 *)(param_2 + 1) = 0;
    puVar2 = (ulonglong *)*param_2;
    LOCK();
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((char)(((uint)uVar3 & 2) >> 1) == '\0' && 3 < uVar3) {
      FUN_1400c0e08();
    }
  }
  return plVar5;
}



// FUNCTION 1400e51e6 FUN_1400e51e6 body=302 status=ok
// SIG undefined FUN_1400e51e6(void)

undefined4 *
FUN_1400e51e6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400e53ae(param_1,local_58);
  *local_50 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_50 + 2) = 0;
  local_50[4] = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1400e5316(param_1,param_3,local_50,local_58);
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
      local_50[5] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_50[4] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_1400e567a(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e5316 FUN_1400e5316 body=151 status=ok
// SIG undefined FUN_1400e5316(void)

void FUN_1400e5316(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148122258(iVar2,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = piVar1[4];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1400e533a;
    }
  }
  uVar6 = 0;
LAB_1400e533a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1400e53ae FUN_1400e53ae body=715 status=ok
// SIG undefined FUN_1400e53ae(void)

int * FUN_1400e53ae(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1400e5570;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1400e5570:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1400e567a FUN_1400e567a body=637 status=ok
// SIG undefined FUN_1400e567a(void)

void FUN_1400e567a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1400e56dd;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1400e56dd:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x18);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1400e58f8 FUN_1400e58f8 body=114 status=ok
// SIG undefined FUN_1400e58f8(void)

void FUN_1400e58f8(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  undefined8 local_48;
  code *local_40;
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400e596c();
  local_38 = local_50;
  local_40 = FUN_143653020;
  local_50[0] = param_2;
  local_48 = param_3;
  FUN_1400e5a42(param_1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e596c FUN_1400e596c body=139 status=ok
// SIG undefined FUN_1400e596c(void)

void FUN_1400e596c(longlong param_1)

{
  FUN_1400e59f7(*(undefined8 *)(param_1 + 0x2e18),*(undefined4 *)(param_1 + 0x2e20));
  *(undefined4 *)(param_1 + 0x2e20) = 0;
  if (*(int *)(param_1 + 0x2e24) != 0) {
    FUN_1400e5bc0(param_1 + 0x2e18,0);
  }
  *(undefined4 *)(param_1 + 0x2e30) = 0;
  if (*(int *)(param_1 + 0x2e34) != 0) {
    FUN_14482f6fa(param_1 + 0x2e28,0);
  }
  *(undefined4 *)(&DAT_00002e40 + param_1) = 0;
  if (*(int *)(param_1 + 0x2e44) == 0) {
    return;
  }
  FUN_1400e5b60(param_1 + 0x2e38,0);
  return;
}



// FUNCTION 1400e59f7 FUN_1400e59f7 body=74 status=ok
// SIG undefined FUN_1400e59f7(void)

void FUN_1400e59f7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x8b0);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x11] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x118;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400e5a42 FUN_1400e5a42 body=204 status=ok
// SIG undefined FUN_1400e5a42(void)

void FUN_1400e5a42(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  iVar1 = *(int *)(param_1 + 0x2d88);
  uVar2 = *(undefined8 *)(param_1 + 0x2d80);
  local_38 = iVar1;
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1400e5c30(&local_40,iVar1,0);
    FUN_1400e5b0f(local_40,uVar2,iVar1);
    if (0 < local_38) {
      lVar4 = 0;
      do {
        local_30 = *(undefined8 *)(local_40 + lVar4 * 8);
        cVar3 = (*(code *)*param_2)(param_2[1],&local_30);
        if (cVar3 == '\0') break;
        lVar4 = lVar4 + 1;
      } while (lVar4 < local_38);
    }
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e5b0f FUN_1400e5b0f body=80 status=ok
// SIG undefined FUN_1400e5b0f(void)

void FUN_1400e5b0f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1400e5b60 FUN_1400e5b60 body=96 status=ok
// SIG undefined FUN_1400e5b60(void)

void FUN_1400e5b60(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 1400e5bc0 FUN_1400e5bc0 body=112 status=ok
// SIG undefined FUN_1400e5bc0(void)

void FUN_1400e5bc0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x8c0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x8c0)) {
      uVar2 = uVar1 / 0x8c0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x8c0,0x10);
  }
  return;
}



// FUNCTION 1400e5c30 FUN_1400e5c30 body=317 status=ok
// SIG undefined FUN_1400e5c30(void)

void FUN_1400e5c30(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400e5c9e;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1400e5c9e:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1400e5d6e FUN_1400e5d6e body=89 status=ok
// SIG undefined FUN_1400e5d6e(void)

longlong FUN_1400e5d6e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  plVar3 = (longlong *)
           FUN_1400e5dc8(param_1 + 0xa8,
                         ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4),param_2);
  *plVar3 = *plVar3 + param_3;
  return param_1;
}



// FUNCTION 1400e5dc8 FUN_1400e5dc8 body=189 status=ok
// SIG undefined FUN_1400e5dc8(void)

longlong * FUN_1400e5dc8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1400e5e5d;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1400e5e86(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1400e5e5d:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1400e5e86 FUN_1400e5e86 body=304 status=ok
// SIG undefined FUN_1400e5e86(void)

undefined4 *
FUN_1400e5e86(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  FUN_1400e6050(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  *(undefined4 *)(local_50 + 2) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1400e5fb8(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 2) =
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
      FUN_1448426b2(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e5fb8 FUN_1400e5fb8 body=152 status=ok
// SIG undefined FUN_1400e5fb8(void)

void FUN_1400e5fb8(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_146821590((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1400e6021;
    }
  }
  uVar5 = 0;
LAB_1400e6021:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1400e6050 FUN_1400e6050 body=706 status=ok
// SIG undefined FUN_1400e6050(void)

int * FUN_1400e6050(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1400e6209;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1400e6209:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1400e6312 FUN_1400e6312 body=759 status=ok
// SIG undefined FUN_1400e6312(void)

void FUN_1400e6312(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  
  if (*(int *)(param_1 + 0x3e0) < *(int *)(param_1 + 0x3e4)) {
    bVar19 = *(char *)(*(longlong *)(*param_2 + 0x188) + (longlong)(int)param_2[1]) == '\0';
  }
  else {
    bVar19 = false;
  }
  piVar11 = (int *)FUN_1447fdeae(param_1,param_1 + 0x298,param_2,0xffffffff);
  uVar4 = *(uint *)(param_1 + 0x3e0);
  piVar11[0x65] = uVar4;
  uVar15 = uVar4 & 0x3fffffff | 0x80000000;
  if ((bVar19) && (iVar10 = piVar11[1], 0 < iVar10)) {
    iVar14 = *piVar11;
    iVar18 = (int)(uVar4 * 4) >> 2;
    iVar16 = -1;
    do {
      if (iVar14 < 1) {
        iVar14 = piVar11[6];
      }
      iVar5 = *(int *)(*(longlong *)(piVar11 + 4) + -4 + (longlong)iVar14 * 8);
      iVar17 = iVar5 * 4 >> 2;
      if ((iVar17 < iVar18) || ((-1 < iVar5 && (iVar17 == iVar18)))) break;
      iVar14 = iVar14 + -1;
      iVar10 = iVar10 + -1;
      iVar16 = iVar14;
    } while (iVar10 != 0);
    if (iVar16 == -1) goto LAB_1400e637a;
  }
  else {
LAB_1400e637a:
    puVar12 = (undefined8 *)FUN_1400e660a(piVar11,uVar15,param_1 + 0x18);
    if (puVar12 != (undefined8 *)0x0) {
      lVar9 = param_2[1];
      lVar13 = *(longlong *)(*param_2 + 0x28);
      puVar12[2] = *(undefined8 *)(lVar13 + 0x10 + (longlong)(int)lVar9 * 0x18);
      puVar1 = (undefined8 *)(lVar13 + (longlong)(int)lVar9 * 0x18);
      uVar8 = puVar1[1];
      *puVar12 = *puVar1;
      puVar12[1] = uVar8;
      puVar2 = (undefined4 *)(*(longlong *)(*param_2 + 0x48) + (longlong)(int)param_2[1] * 0x10);
      uVar3 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      *(undefined4 *)(puVar12 + 4) = *puVar2;
      *(undefined4 *)((longlong)puVar12 + 0x24) = uVar3;
      *(undefined4 *)(puVar12 + 5) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar7;
    }
  }
  if ((bVar19) && (iVar10 = piVar11[0x11], 0 < iVar10)) {
    iVar14 = piVar11[0x10];
    iVar18 = (int)(uVar4 * 4) >> 2;
    iVar16 = -1;
    do {
      if (iVar14 < 1) {
        iVar14 = piVar11[0x16];
      }
      iVar5 = *(int *)(*(longlong *)(piVar11 + 0x14) + -4 + (longlong)iVar14 * 8);
      iVar17 = iVar5 * 4 >> 2;
      if ((iVar17 < iVar18) || ((-1 < iVar5 && (iVar17 == iVar18)))) break;
      iVar14 = iVar14 + -1;
      iVar10 = iVar10 + -1;
      iVar16 = iVar14;
    } while (iVar10 != 0);
    if (iVar16 != -1) goto LAB_1400e6429;
  }
  puVar12 = (undefined8 *)FUN_1400e6806(piVar11 + 0x10,uVar15,param_1 + 0x18);
  if (puVar12 != (undefined8 *)0x0) {
    uVar3 = *(undefined4 *)(*(longlong *)(*param_2 + 0x560) + 8 + (longlong)(int)param_2[1] * 0xc);
    *puVar12 = *(undefined8 *)(*(longlong *)(*param_2 + 0x560) + (longlong)(int)param_2[1] * 0xc);
    *(undefined4 *)(puVar12 + 1) = uVar3;
    uVar3 = *(undefined4 *)(*(longlong *)(*param_2 + 0x578) + 8 + (longlong)(int)param_2[1] * 0xc);
    *(undefined8 *)((longlong)puVar12 + 0xc) =
         *(undefined8 *)(*(longlong *)(*param_2 + 0x578) + (longlong)(int)param_2[1] * 0xc);
    *(undefined4 *)((longlong)puVar12 + 0x14) = uVar3;
  }
LAB_1400e6429:
  if ((bVar19) && (iVar10 = piVar11[0x21], 0 < iVar10)) {
    iVar14 = piVar11[0x20];
    iVar18 = (int)(uVar4 << 2) >> 2;
    iVar16 = -1;
    do {
      if (iVar14 < 1) {
        iVar14 = piVar11[0x26];
      }
      lVar13 = (longlong)iVar14;
      iVar14 = iVar14 + -1;
      iVar5 = *(int *)(*(longlong *)(piVar11 + 0x24) + -4 + lVar13 * 8);
      iVar17 = iVar5 * 4 >> 2;
    } while (((iVar18 <= iVar17) && (iVar5 < 0 || iVar17 != iVar18)) &&
            (iVar10 = iVar10 + -1, iVar16 = iVar14, iVar10 != 0));
    if (iVar16 != -1) {
      return;
    }
  }
  lVar13 = FUN_1400e6706(piVar11 + 0x20,uVar15,param_1 + 0x18);
  if (lVar13 != 0) {
    FUN_1400e690a(lVar13,param_2);
    *(undefined1 *)(lVar13 + 0x1c) =
         *(undefined1 *)(*(longlong *)(*param_2 + 0x2c0) + 0xc + (longlong)(int)param_2[1] * 0x10);
  }
  return;
}



// FUNCTION 1400e660a FUN_1400e660a body=251 status=ok
// SIG undefined FUN_1400e660a(void)

longlong FUN_1400e660a(int *param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *param_1;
  if (param_1[1] != 0) {
    iVar3 = iVar2;
    if (iVar2 == 0) {
      iVar3 = param_1[6];
    }
    if (*(int *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar3 * 8) == param_2) {
      lVar4 = 0;
      goto LAB_1400e668f;
    }
  }
  plVar1 = (longlong *)(param_1 + 4);
  if (iVar2 < param_1[6]) {
    lVar4 = *plVar1;
    *(int *)(lVar4 + 4 + (longlong)iVar2 * 8) = param_2;
    lVar4 = (longlong)*(int *)(lVar4 + (longlong)iVar2 * 8) * 0x30 + *param_3;
  }
  else {
    lVar4 = FUN_1403ee73e(param_3,&local_3c);
    iVar2 = param_1[6];
    param_1[6] = iVar2 + 1U;
    if ((uint)param_1[7] < iVar2 + 1U) {
      FUN_1400e6b38(plVar1,iVar2);
    }
    *(ulonglong *)(*plVar1 + (longlong)iVar2 * 8) = CONCAT44(param_2,local_3c);
  }
  iVar2 = param_1[2];
  iVar3 = 0;
  if (*param_1 + 1 != iVar2) {
    iVar3 = *param_1 + 1;
  }
  *param_1 = iVar3;
  iVar3 = param_1[1] + 1;
  if (iVar2 <= param_1[1] + 1) {
    iVar3 = iVar2;
  }
  param_1[1] = iVar3;
LAB_1400e668f:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e6706 FUN_1400e6706 body=255 status=ok
// SIG undefined FUN_1400e6706(void)

longlong FUN_1400e6706(int *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *param_1;
  if (param_1[1] != 0) {
    iVar3 = iVar2;
    if (iVar2 == 0) {
      iVar3 = param_1[6];
    }
    if (*(int *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar3 * 8) == param_2) {
      lVar4 = 0;
      goto LAB_1400e6788;
    }
  }
  plVar1 = (longlong *)(param_1 + 4);
  if (iVar2 < param_1[6]) {
    lVar4 = *plVar1;
    *(int *)(lVar4 + 4 + (longlong)iVar2 * 8) = param_2;
    lVar4 = (longlong)*(int *)(lVar4 + (longlong)iVar2 * 8) * 0x2c + *(longlong *)(param_3 + 0x60);
  }
  else {
    lVar4 = FUN_1400e6a40(param_3 + 0x60,&local_3c);
    iVar2 = param_1[6];
    param_1[6] = iVar2 + 1U;
    if ((uint)param_1[7] < iVar2 + 1U) {
      FUN_1400e6b38(plVar1,iVar2);
    }
    *(ulonglong *)(*plVar1 + (longlong)iVar2 * 8) = CONCAT44(param_2,local_3c);
  }
  iVar2 = param_1[2];
  iVar3 = 0;
  if (*param_1 + 1 != iVar2) {
    iVar3 = *param_1 + 1;
  }
  *param_1 = iVar3;
  iVar3 = param_1[1] + 1;
  if (iVar2 <= param_1[1] + 1) {
    iVar3 = iVar2;
  }
  param_1[1] = iVar3;
LAB_1400e6788:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e6806 FUN_1400e6806 body=259 status=ok
// SIG undefined FUN_1400e6806(void)

longlong FUN_1400e6806(int *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *param_1;
  if (param_1[1] != 0) {
    iVar3 = iVar2;
    if (iVar2 == 0) {
      iVar3 = param_1[6];
    }
    if (*(int *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar3 * 8) == param_2) {
      lVar4 = 0;
      goto LAB_1400e688c;
    }
  }
  plVar1 = (longlong *)(param_1 + 4);
  if (iVar2 < param_1[6]) {
    lVar4 = *plVar1;
    *(int *)(lVar4 + 4 + (longlong)iVar2 * 8) = param_2;
    lVar4 = (longlong)*(int *)(lVar4 + (longlong)iVar2 * 8) * 0x18 + *(longlong *)(param_3 + 0x20);
  }
  else {
    lVar4 = FUN_1400e6ab8(param_3 + 0x20,&local_3c);
    iVar2 = param_1[6];
    param_1[6] = iVar2 + 1U;
    if ((uint)param_1[7] < iVar2 + 1U) {
      FUN_1400e6b38(plVar1,iVar2);
    }
    *(ulonglong *)(*plVar1 + (longlong)iVar2 * 8) = CONCAT44(param_2,local_3c);
  }
  iVar2 = param_1[2];
  iVar3 = 0;
  if (*param_1 + 1 != iVar2) {
    iVar3 = *param_1 + 1;
  }
  *param_1 = iVar3;
  iVar3 = param_1[1] + 1;
  if (iVar2 <= param_1[1] + 1) {
    iVar3 = iVar2;
  }
  param_1[1] = iVar3;
LAB_1400e688c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e690a FUN_1400e690a body=310 status=ok
// SIG undefined FUN_1400e690a(void)

void FUN_1400e690a(float *param_1,longlong *param_2)

{
  *param_1 = (float)*(double *)(*(longlong *)(*param_2 + 0x410) + (longlong)(int)param_2[1] * 8);
  param_1[1] = (float)*(double *)(*(longlong *)(*param_2 + 0x428) + (longlong)(int)param_2[1] * 8);
  param_1[2] = (float)*(double *)(*(longlong *)(*param_2 + 0x440) + (longlong)(int)param_2[1] * 8);
  param_1[3] = (float)*(double *)(*(longlong *)(*param_2 + 0x458) + (longlong)(int)param_2[1] * 8);
  param_1[4] = *(float *)(*(longlong *)(*param_2 + 0x470) + (longlong)(int)param_2[1] * 4);
  param_1[5] = *(float *)(*(longlong *)(*param_2 + 0x488) + (longlong)(int)param_2[1] * 4);
  *(undefined1 *)(param_1 + 7) =
       *(undefined1 *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10);
  param_1[6] = *(float *)(*(longlong *)(*param_2 + 0x2c0) + (longlong)(int)param_2[1] * 0x10);
  *(undefined1 *)((longlong)param_1 + 0x1e) =
       *(undefined1 *)(*(longlong *)(*param_2 + 0x4b8) + (longlong)(int)param_2[1]);
  param_1[8] = *(float *)(*(longlong *)(*param_2 + 0x2c0) + 4 + (longlong)(int)param_2[1] * 0x10);
  *(undefined2 *)(param_1 + 9) =
       *(undefined2 *)(*(longlong *)(*param_2 + 0x2c0) + 8 + (longlong)(int)param_2[1] * 0x10);
  *(undefined1 *)((longlong)param_1 + 0x29) =
       *(undefined1 *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + (longlong)(int)param_2[1] * 0x10);
  return;
}



// FUNCTION 1400e6a40 FUN_1400e6a40 body=120 status=ok
// SIG undefined FUN_1400e6a40(void)

longlong FUN_1400e6a40(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[3];
  if ((longlong)iVar1 == 0) {
    iVar2 = (int)param_1[1];
    lVar3 = (longlong)iVar2;
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar2) {
      FUN_1403334a8(param_1,iVar2);
    }
    FUN_140331db7(lVar3 * 0x2c + *param_1,1);
  }
  else {
    iVar2 = *(int *)(param_1[2] + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 3) = iVar1 + -1;
    FUN_14479f406(param_1 + 2);
    lVar3 = (longlong)iVar2;
  }
  *param_2 = iVar2;
  return lVar3 * 0x2c + *param_1;
}



// FUNCTION 1400e6ab8 FUN_1400e6ab8 body=128 status=ok
// SIG undefined FUN_1400e6ab8(void)

longlong FUN_1400e6ab8(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[3];
  if ((longlong)iVar1 == 0) {
    iVar2 = (int)param_1[1];
    lVar3 = (longlong)iVar2;
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar2) {
      FUN_140333332(param_1,iVar2);
    }
    FUN_140331c9b(lVar3 * 0x18 + *param_1,1);
  }
  else {
    iVar2 = *(int *)(param_1[2] + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 3) = iVar1 + -1;
    FUN_14479f406(param_1 + 2);
    lVar3 = (longlong)iVar2;
  }
  *param_2 = iVar2;
  return lVar3 * 0x18 + *param_1;
}



// FUNCTION 1400e6b38 FUN_1400e6b38 body=353 status=ok
// SIG undefined FUN_1400e6b38(void)

void FUN_1400e6b38(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400e6bbd;
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
LAB_1400e6bbd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1400e6c9a FUN_1400e6c9a body=172 status=ok
// SIG undefined FUN_1400e6c9a(void)

void FUN_1400e6c9a(longlong param_1,undefined4 param_2,longlong *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined4 *)(param_1 + 0x94);
  (**(code **)(*param_3 + 0x28))(param_3,local_58);
  uVar2 = (**(code **)(*param_3 + 0x1a8))(param_3);
  local_78 = local_58;
  FUN_1400e6d48(local_68,uVar1,uVar2,param_4 + 0x120);
  FUN_1400e731a(param_1,param_2,local_68,param_4);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e6d48 FUN_1400e6d48 body=280 status=ok
// SIG undefined FUN_1400e6d48(void)

void FUN_1400e6d48(int *param_1,float param_2,float param_3,undefined8 *param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *param_4;
  *(undefined8 *)param_1 = uVar1;
  uVar2 = param_4[1];
  fVar6 = (float)((int)uVar2 - (int)uVar1);
  *(undefined8 *)(param_1 + 2) = uVar2;
  iVar4 = (int)((ulonglong)uVar1 >> 0x20);
  fVar8 = (float)((int)((ulonglong)uVar2 >> 0x20) - iVar4);
  param_2 = param_2 / (param_3 / ((float)*param_5 / (float)param_5[1]));
  fVar7 = param_2 - fVar6 / fVar8;
  if (0.01 < ABS(fVar7)) {
    if (0.0 < fVar7) {
      iVar3 = (int)ROUND(fVar6 / param_2 + fVar6 / param_2 + 0.5) >> 1;
      iVar5 = 1;
      if (1 < iVar3) {
        iVar5 = iVar3;
      }
      fVar6 = (fVar8 - (float)iVar5) * 0.5;
      iVar4 = ((int)ROUND(fVar6 + fVar6 + 0.5) >> 1) + iVar4;
      param_1[1] = iVar4;
      param_1[3] = iVar4 + iVar5;
      return;
    }
    iVar5 = (int)ROUND(param_2 * fVar8 + param_2 * fVar8 + 0.5) >> 1;
    iVar4 = 1;
    if (1 < iVar5) {
      iVar4 = iVar5;
    }
    fVar6 = (fVar6 - (float)iVar4) * 0.5;
    iVar5 = ((int)ROUND(fVar6 + fVar6 + 0.5) >> 1) + (int)uVar1;
    *param_1 = iVar5;
    param_1[2] = iVar5 + iVar4;
  }
  return;
}



// FUNCTION 1400e6e60 FUN_1400e6e60 body=237 status=ok
// SIG undefined FUN_1400e6e60(void)

undefined8 * FUN_1400e6e60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0x42b40000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x42b4000042b40000;
  param_1[0xe] = 0x3f80000042b40000;
  *(undefined4 *)(param_1 + 0xf) = 0x44000000;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x4a000000;
  *(undefined4 *)(param_1 + 0x12) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3faaaaab;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffe0 | 0x10;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  FUN_144894d4c(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x13e) = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x140] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x141) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x142] = DAT_14c8464e0;
  param_1[0x143] = uVar1;
  param_1[0x144] = DAT_14c8464f0;
  return param_1;
}



// FUNCTION 1400e6f4e FUN_1400e6f4e body=157 status=ok
// SIG undefined FUN_1400e6f4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e6f4e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae9ae8) {
    FUN_144b3d300(&DAT_14cae9ae8);
    if (DAT_14cae9ae8 == -1) {
      DAT_14cae99f0 = 0;
      DAT_14cae99f8 = 0;
      DAT_14cae99d0 = 0;
      _DAT_14cae99d8 = 0;
      _DAT_14cae99fc = 0xffffffff00000080;
      DAT_14cae9a04 = 0;
      DAT_14cae9a10 = 0;
      DAT_14cae9a18 = 0;
      FUN_1456ce218();
      atexit((_func_5014 *)&LAB_1435692ec);
      _Init_thread_footer(&DAT_14cae9ae8);
      return;
    }
  }
  return;
}



// FUNCTION 1400e6fec FUN_1400e6fec body=812 status=ok
// SIG undefined FUN_1400e6fec(void)

void FUN_1400e6fec(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb529e4) && (FUN_144b3d300(&DAT_14cb529e4), DAT_14cb529e4 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14cb529e0 = FUN_14054d46e(&DAT_14c846b20,L"slforcetagging");
    _Init_thread_footer(&DAT_14cb529e4);
  }
  lVar9 = DAT_14cb52978;
  if (DAT_14cb529e0 == '\0') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar11 = 0;
    }
    else if (iVar1 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      uVar11 = (ulonglong)(DVar7 != DVar8);
    }
    else {
      uVar11 = 1;
    }
    cVar5 = *(char *)(lVar9 + uVar11);
  }
  else {
    cVar5 = '\x01';
  }
  if (((param_2 != 0) && (cVar5 != '\0')) &&
     ((lVar9 = *(longlong *)(param_2 + 0x3d0), lVar9 != 0 ||
      (lVar9 = *(longlong *)(param_2 + 0x7a0), lVar9 != 0)))) {
    lVar3 = *(longlong *)(lVar9 + 0x1c8);
    lVar10 = (param_3 % 3) * 0x1e0;
    lVar9 = param_1 + lVar10;
    *(ulonglong *)(lVar9 + 0x100) = param_3;
    FUN_1473548c6(param_1 + lVar10 + 0x108);
    lVar10 = *(longlong *)(lVar3 + 0xb0);
    if (lVar10 == 0) {
      lVar10 = FUN_1448abda6(lVar3);
    }
    *(longlong *)(lVar9 + 0x1d8) = lVar10;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb52cf0) && (FUN_144b3d300(&DAT_14cb52cf0), DAT_14cb52cf0 == -1)) {
      local_48 = "CameraPen";
      local_40 = 9;
      local_3c = 0;
      uVar6 = FUN_14001a6c0(&local_48,1);
      DAT_14cb52ce8 = (ulonglong)uVar6;
      _Init_thread_footer(&DAT_14cb52cf0);
    }
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(ulonglong *)(lVar9 + 0x158) = DAT_14cb52ce8;
    *(undefined8 *)(lVar9 + 0x160) = uVar4;
    *(undefined2 *)(lVar9 + 0x168) = 0x100;
    *(undefined4 *)(lVar9 + 0x16a) = 0;
    *(undefined1 *)(lVar9 + 0x16e) = 0;
    *(undefined2 *)(lVar9 + 0x16f) = 0x101;
    *(undefined4 *)(lVar9 + 0x174) = 0;
    *(undefined1 *)(lVar9 + 0x178) = 0;
    *(undefined4 *)(lVar9 + 0x17c) = 0;
    *(undefined2 *)(lVar9 + 0x180) = 0x101;
    if (*(longlong *)(lVar9 + 0x1a8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar9 + 0x1a8) = 0;
    *(undefined8 *)(lVar9 + 0x1b0) = 0x800000000;
    *(undefined4 *)(lVar9 + 0x1b8) = uVar2;
    if (*(longlong *)(lVar9 + 0x1c8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar9 + 0x1c8) = 0;
    *(undefined8 *)(lVar9 + 0x1d0) = 0x400000001;
    FUN_1485f690a(param_1,param_3,lVar3,lVar9 + 0x158);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400e731a FUN_1400e731a body=1930 status=ok
// SIG undefined FUN_1400e731a(void)

void FUN_1400e731a(longlong param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  char cVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined8 *puVar12;
  uint uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  float local_13c;
  float local_138 [34];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar1 = *(char *)(param_1 + 0xa4);
  if (cVar1 == '\x01') {
    FUN_14799295e(param_1,param_4);
  }
  lVar8 = DAT_14cacf478;
  if ((*(byte *)(param_1 + 0xa0) & 4) != 0) {
    *(undefined8 *)(param_4 + 0x288) = *param_3;
    *(undefined8 *)(param_4 + 0x290) = param_3[1];
    if ((cVar1 == '\x01') && (*(char *)(param_1 + 0x84) == '\x01')) {
      local_148 = *(undefined1 *)(param_1 + 0x85);
      FUN_147cef852(param_4,param_1 + 0x88,param_1 + 0x8c,*(float *)(param_1 + 0x78) * 0.5);
    }
    if ((undefined8 *)(param_4 + 0x1e0) != &DAT_14c846400) {
      puVar10 = &DAT_14c846400;
      puVar12 = (undefined8 *)(param_4 + 0x1e0);
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      *(undefined1 *)(param_4 + 0x260) = 1;
    }
    FUN_1403f8f3e(param_1,local_138);
    pfVar11 = local_138;
    puVar10 = (undefined8 *)(param_4 + 0xa0);
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *(undefined8 *)pfVar11;
      pfVar11 = pfVar11 + 2;
      puVar10 = puVar10 + 1;
    }
    goto LAB_1400e78af;
  }
  iVar4 = *(int *)(param_4 + 0x128) - *(int *)(param_4 + 0x120);
  iVar7 = *(int *)(param_4 + 300) - *(int *)(param_4 + 0x124);
  if (*(char *)(param_1 + 0x9c) == '\0') {
    param_2 = param_2 & 0xff;
  }
  else {
    param_2 = *(uint *)(param_1 + 0x98);
  }
  fVar14 = 0.001;
  if (0.001 <= *(float *)(param_1 + 0x68)) {
    fVar14 = *(float *)(param_1 + 0x68);
  }
  if ((param_2 & 0xff) == 1 || (param_2 & 0xff) == 2 && iVar7 < iVar4) {
    fVar20 = (float)iVar4 / (float)iVar7;
    fVar19 = 1.0;
    if (cVar1 != '\x01') goto LAB_1400e770e;
LAB_1400e7500:
    fVar14 = *(float *)(param_1 + 0x78) * 0.5;
    fVar19 = fVar14 / fVar19;
    fVar14 = fVar14 / fVar20;
    local_138[0] = *(float *)(param_1 + 0x8c);
    local_13c = *(float *)(param_1 + 0x88);
    local_148 = *(undefined1 *)(param_1 + 0x85);
    FUN_147cef852(param_4,&local_13c,local_138,fVar19);
    dVar15 = (double)(1.0 / (local_138[0] - local_13c));
    dVar16 = 1.0 / (double)fVar14;
    if ((fVar14 == 0.0) && (!NAN(fVar14))) {
      dVar16 = 1.0;
    }
    dVar3 = (double)local_13c * dVar15 + 1.0;
    dVar15 = -dVar15;
    dVar17 = 1.0 / (double)fVar19;
    if ((fVar19 == 0.0) && (!NAN(fVar19))) {
      dVar17 = 1.0;
    }
    *(double *)(param_4 + 0xa0) = dVar17;
    *(undefined8 *)(param_4 + 0xa8) = 0;
    *(undefined8 *)(param_4 + 0xb0) = 0;
    *(undefined8 *)(param_4 + 0xb8) = 0;
    *(undefined8 *)(param_4 + 0xc0) = 0;
    *(double *)(param_4 + 200) = dVar16;
    *(undefined8 *)(param_4 + 0xd0) = 0;
    *(undefined8 *)(param_4 + 0xd8) = 0;
    *(undefined8 *)(param_4 + 0xe0) = 0;
    *(undefined8 *)(param_4 + 0xe8) = 0;
    *(double *)(param_4 + 0xf0) = dVar15;
    *(undefined8 *)(param_4 + 0xf8) = 0;
    *(undefined8 *)(param_4 + 0x100) = 0;
    *(undefined8 *)(param_4 + 0x108) = 0;
    *(double *)(param_4 + 0x110) = dVar3;
    *(undefined8 *)(param_4 + 0x118) = 0x3ff0000000000000;
    *(double *)(param_4 + 0x1e0) = dVar17;
    *(undefined8 *)(param_4 + 0x1e8) = 0;
    *(undefined8 *)(param_4 + 0x1f0) = 0;
    *(undefined8 *)(param_4 + 0x1f8) = 0;
    *(undefined8 *)(param_4 + 0x200) = 0;
    *(double *)(param_4 + 0x208) = dVar16;
    *(undefined8 *)(param_4 + 0x220) = 0;
    *(undefined8 *)(param_4 + 0x228) = 0;
    *(undefined8 *)(param_4 + 0x210) = 0;
    *(undefined8 *)(param_4 + 0x218) = 0;
    *(double *)(param_4 + 0x230) = dVar15;
    *(undefined8 *)(param_4 + 0x248) = 0;
    *(undefined8 *)(param_4 + 0x238) = 0;
    *(undefined8 *)(param_4 + 0x240) = 0;
    *(double *)(param_4 + 0x250) = dVar3;
    *(undefined8 *)(param_4 + 600) = 0x3ff0000000000000;
  }
  else {
    fVar19 = (float)iVar7 / (float)iVar4;
    if (cVar1 == '\x01') {
      fVar20 = 1.0;
      goto LAB_1400e7500;
    }
    fVar20 = 1.0;
    if ((*(float *)(param_1 + 0x94) != 0.0) || (NAN(*(float *)(param_1 + 0x94)))) {
      iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if ((iVar4 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar4 == 2)))) {
        uVar9 = 0;
      }
      else if (iVar4 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar9 = 1;
      }
      if (*(char *)(lVar8 + uVar9) != '\0') goto LAB_1400e770e;
      fVar20 = 0.001;
      if (0.001 <= *(float *)(param_1 + 0x30)) {
        fVar20 = *(float *)(param_1 + 0x30);
      }
      fVar20 = tanf(fVar20 * 0.5 * 0.017453292);
      fVar18 = atanf(fVar20 / *(float *)(param_1 + 0x94));
      dVar16 = 1.0;
    }
    else {
LAB_1400e770e:
      fVar18 = 0.001;
      if (0.001 <= *(float *)(param_1 + 0x30)) {
        fVar18 = *(float *)(param_1 + 0x30);
      }
      fVar18 = (fVar18 * 3.1415927) / 360.0;
      dVar16 = (double)fVar20;
    }
    uVar13 = -(uint)(0.0 < *(float *)(param_1 + 0x90));
    fVar20 = (float)(~uVar13 & DAT_14c75b140 | (uint)*(float *)(param_1 + 0x90) & uVar13);
    dVar15 = (double)fVar20;
    dVar3 = dVar15;
    if (NAN(fVar20)) {
      dVar3 = (-dVar15 * dVar15) / (dVar15 - dVar15);
    }
    dVar17 = 0.0;
    if (NAN(fVar20)) {
      dVar17 = dVar15 / (dVar15 - dVar15);
    }
    dVar15 = tan((double)fVar18);
    dVar2 = tan((double)fVar18);
    *(double *)(param_4 + 0xa0) = (double)fVar19 / dVar2;
    *(undefined8 *)(param_4 + 0xa8) = 0;
    *(undefined8 *)(param_4 + 0xb0) = 0;
    *(undefined8 *)(param_4 + 0xb8) = 0;
    *(undefined8 *)(param_4 + 0xc0) = 0;
    *(double *)(param_4 + 200) = dVar16 / dVar15;
    *(undefined8 *)(param_4 + 0xd0) = 0;
    *(undefined8 *)(param_4 + 0xd8) = 0;
    *(undefined8 *)(param_4 + 0xe0) = 0;
    *(undefined8 *)(param_4 + 0xe8) = 0;
    *(double *)(param_4 + 0xf0) = dVar17;
    *(undefined8 *)(param_4 + 0xf8) = 0x3ff0000000000000;
    *(undefined8 *)(param_4 + 0x100) = 0;
    *(undefined8 *)(param_4 + 0x108) = 0;
    *(double *)(param_4 + 0x110) = dVar3;
    *(undefined8 *)(param_4 + 0x118) = 0;
    dVar2 = (double)((fVar14 * 3.1415927) / 360.0);
    dVar15 = tan(dVar2);
    dVar2 = tan(dVar2);
    *(double *)(param_4 + 0x1e0) = (double)fVar19 / dVar2;
    *(undefined8 *)(param_4 + 0x1e8) = 0;
    *(undefined8 *)(param_4 + 0x1f0) = 0;
    *(undefined8 *)(param_4 + 0x1f8) = 0;
    *(undefined8 *)(param_4 + 0x200) = 0;
    *(double *)(param_4 + 0x208) = dVar16 / dVar15;
    *(undefined8 *)(param_4 + 0x210) = 0;
    *(undefined8 *)(param_4 + 0x218) = 0;
    *(undefined8 *)(param_4 + 0x220) = 0;
    *(undefined8 *)(param_4 + 0x228) = 0;
    *(double *)(param_4 + 0x230) = dVar17;
    *(undefined8 *)(param_4 + 0x238) = 0x3ff0000000000000;
    *(undefined8 *)(param_4 + 0x240) = 0;
    *(undefined8 *)(param_4 + 0x248) = 0;
    *(double *)(param_4 + 0x250) = dVar3;
    *(undefined8 *)(param_4 + 600) = 0;
  }
  *(undefined1 *)(param_4 + 0x260) = 1;
LAB_1400e78af:
  dVar16 = *(double *)(param_1 + 0x970);
  dVar15 = *(double *)(param_1 + 0x978);
  if ((((dVar16 != 0.0) || (NAN(dVar16))) || (dVar15 != 0.0)) || (NAN(dVar15))) {
    fVar19 = (float)(dVar16 + -1.0);
    fVar14 = (float)(dVar15 + -1.0);
    lVar8 = (ulonglong)(cVar1 == '\x01') * 0x20;
    *(double *)(lVar8 + 0xe0 + param_4) =
         (double)((fVar19 + 2.0 + fVar19) / (fVar19 - (fVar19 + 2.0)));
    *(double *)(lVar8 + 0xe8 + param_4) =
         (double)((fVar14 + 2.0 + fVar14) / (fVar14 - (fVar14 + 2.0)));
  }
  dVar16 = *(double *)(param_1 + 0x980);
  dVar15 = *(double *)(param_1 + 0x988);
  if ((((dVar16 != 0.0) || (NAN(dVar16))) || ((dVar15 != 0.0 || (NAN(dVar15))))) &&
     (*(char *)(param_4 + 0x260) == '\x01')) {
    fVar19 = (float)(dVar16 + -1.0);
    fVar14 = (float)(dVar15 + -1.0);
    *(double *)(param_4 + 0x220) = (double)((fVar19 + 2.0 + fVar19) / (fVar19 - (fVar19 + 2.0)));
    *(double *)(param_4 + 0x228) = (double)((fVar14 + 2.0 + fVar14) / (fVar14 - (fVar14 + 2.0)));
  }
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400e7aa6 FUN_1400e7aa6 body=640 status=ok
// SIG undefined FUN_1400e7aa6(void)

undefined8 *
FUN_1400e7aa6(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4,char param_5)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_8a8 [32];
  uint local_888;
  int iStack_884;
  uint uStack_880;
  int iStack_87c;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined1 *local_868;
  char local_860;
  undefined2 local_858 [1035];
  undefined1 local_42 [10];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  if (param_4 == '\0') {
    local_878 = local_858;
    local_860 = '\0';
    local_868 = local_42;
    uStack_870 = local_878;
    thunk_FUN_140007958(param_3,&local_878);
    *uStack_870 = 0;
    puVar2 = local_878;
    uVar7 = FUN_1446f8646();
    lVar8 = FUN_140277b32(uVar7,0,puVar2,0);
    if (lVar8 != 0) {
      if (param_5 == '\0') {
LAB_1400e7ce2:
        FUN_146857ca8(param_2,lVar8,0,0);
      }
      else {
        cVar3 = FUN_1427b4e5e(lVar8);
        if (cVar3 == '\0') goto LAB_1400e7ce2;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 6) = 0xffffffff;
        param_2[0xc] = 0;
        param_2[0xd] = 0x200000000;
        *(undefined8 *)((longlong)param_2 + 0x34) = 0;
        *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
        *(undefined8 *)((longlong)param_2 + 0x44) = 0;
        *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
        *(undefined4 *)((longlong)param_2 + 0x54) = 0;
      }
      if (local_860 == '\x01') {
        FUN_1400020a8(local_878);
      }
      goto LAB_1400e7bcd;
    }
    if (local_860 == '\x01') {
      FUN_1400020a8(local_878);
    }
  }
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  FUN_1400e7e08(&local_888,param_3);
  local_878 = (undefined2 *)CONCAT44(iStack_884,local_888);
  uStack_870 = (undefined2 *)CONCAT44(iStack_87c,uStack_880);
  uVar1 = (uint)((ulonglong)uStack_870 >> 0x10);
  uVar4 = (uint)((ulonglong)local_878 >> 0x10);
  uVar4 = (local_888 << 0x10 | local_888 & 0xffff) + iStack_884 + (uVar4 << 0x13 | uVar4 & 0xffff) +
          ((local_888 & 0xffff) >> 4);
  iVar5 = FUN_1447fff98((longlong *)(param_1 + 8),
                        (uVar4 >> 2) +
                        (uStack_880 << 0x10 | uStack_880 & 0xffff) + iStack_87c +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + ((uStack_880 & 0xffff) >> 4) +
                        uVar4 * 0x40 + 0x9e3779b9 ^ uVar4);
  if (((iVar5 == -1) ||
      (plVar6 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 8)),
      plVar6 == (longlong *)0x0)) || (*plVar6 == 0)) {
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    param_2[0xc] = 0;
    param_2[0xd] = 0x200000000;
    *(undefined8 *)((longlong)param_2 + 0x34) = 0;
    *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x44) = 0;
    *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
    *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  }
  else {
    FUN_1400e7d28(param_2);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
LAB_1400e7bcd:
  if ((local_38 ^ (ulonglong)auStack_8a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e7d28 FUN_1400e7d28 body=223 status=ok
// SIG undefined FUN_1400e7d28(void)

undefined4 * FUN_1400e7d28(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
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
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined4 *_Src;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  uVar12 = param_2[8];
  uVar13 = param_2[9];
  uVar14 = param_2[10];
  uVar15 = param_2[0xb];
  uVar16 = param_2[0xd];
  uVar17 = param_2[0xe];
  uVar18 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar16;
  param_1[0xe] = uVar17;
  param_1[0xf] = uVar18;
  param_1[8] = uVar12;
  param_1[9] = uVar13;
  param_1[10] = uVar14;
  param_1[0xb] = uVar15;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[6] = uVar10;
  param_1[7] = uVar11;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar2;
  if ((uVar2 & 1) == 0) {
    if (uVar2 == 0) goto LAB_1400e7d7a;
    piVar19 = (int *)(uVar2 + 0x10);
  }
  else {
    piVar19 = (int *)(*(longlong *)(&DAT_14c927ae8 + (ulonglong)((uint)uVar2 & 0xfffc) * 2) + 0xc0);
  }
  LOCK();
  *piVar19 = *piVar19 + 1;
  UNLOCK();
LAB_1400e7d7a:
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  lVar3 = *(longlong *)(param_2 + 0x14);
  *(longlong *)(param_1 + 0x14) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = param_2[0x1a];
  puVar20 = *(undefined4 **)(param_2 + 0x18);
  param_1[0x1a] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1b] = 2;
  }
  else {
    _Src = param_2 + 0x16;
    if (puVar20 != (undefined4 *)0x0) {
      _Src = puVar20;
    }
    FUN_140204e64(param_1 + 0x16,iVar1,0);
    puVar20 = *(undefined4 **)(param_1 + 0x18);
    if (*(undefined4 **)(param_1 + 0x18) == (undefined4 *)0x0) {
      puVar20 = param_1 + 0x16;
    }
    memcpy(puVar20,_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1400e7e08 FUN_1400e7e08 body=275 status=ok
// SIG undefined FUN_1400e7e08(void)

undefined8 * FUN_1400e7e08(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_8b8 [32];
  undefined1 *local_898;
  undefined4 local_890;
  undefined8 local_888;
  undefined4 local_880;
  undefined8 local_878;
  undefined4 local_870;
  undefined8 local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  undefined1 *local_850;
  char local_848;
  undefined1 local_840 [2070];
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    if (*(int *)(param_2 + 3) < 2) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
    }
    else {
      local_860 = local_840;
      local_848 = '\0';
      local_850 = local_2a;
      local_858 = local_860;
      thunk_FUN_140007958(param_2,&local_860);
      local_898 = local_860;
      local_890 = (undefined4)((ulonglong)((longlong)local_858 - (longlong)local_860) >> 1);
      FUN_146857a7c(&local_888);
      FUN_1446f82e2(&local_868,local_880,local_888,0);
      *param_1 = local_868;
      FUN_1446f82e2(&local_868,local_870,local_878,1);
      param_1[1] = local_868;
      if (local_848 == '\x01') {
        FUN_1400020a8(local_860);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_8b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e7f1c FUN_1400e7f1c body=81 status=ok
// SIG undefined FUN_1400e7f1c(void)

longlong FUN_1400e7f1c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1400e7f6e();
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    plVar2 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
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
  return param_1;
}



// FUNCTION 1400e7f6e FUN_1400e7f6e body=80 status=ok
// SIG undefined FUN_1400e7f6e(void)

longlong * FUN_1400e7f6e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1447de57f(*param_1,(int)param_1[1]);
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



// FUNCTION 1400e7fbe FUN_1400e7fbe body=20 status=ok
// SIG undefined FUN_1400e7fbe(void)

void FUN_1400e7fbe(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400e7fd2(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 1400e7fd2 FUN_1400e7fd2 body=229 status=ok
// SIG undefined FUN_1400e7fd2(void)

void FUN_1400e7fd2(undefined8 *param_1,int param_2,int param_3)

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
      FUN_1456bd9fc(param_3,8);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 8;
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
      memcpy(_Dst,_Src,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 1400e80b8 FUN_1400e80b8 body=160 status=ok
// SIG undefined FUN_1400e80b8(void)

undefined8 FUN_1400e80b8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  longlong *plVar3;
  
  FUN_1400e8158();
  if (((((*(int *)((longlong)param_1 + 0x524) != 0) &&
        (uVar1 = *(uint *)(param_1 + 0xa4), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)((longlong)param_1 + 0x524))))) &&
     (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
      ((*plVar3 != 0 && (bVar2 = *(char *)(*plVar3 + 0x1640) - 2, bVar2 < 3)))))) {
    (**(code **)(*param_1 + 0x638 + (ulonglong)bVar2 * 8))(param_1,param_3,param_4,param_2);
  }
  return param_2;
}



// FUNCTION 1400e8158 FUN_1400e8158 body=455 status=ok
// SIG undefined FUN_1400e8158(void)

double * FUN_1400e8158(longlong param_1,double *param_2,double *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar6;
  
  FUN_1400e8320();
  fVar5 = *(float *)(param_1 + 0x350);
  if (((fVar5 != 0.0) || (NAN(fVar5))) &&
     (*(int *)(param_1 + 0x4d0) < *(int *)(param_1 + 0x364) || *(int *)(param_1 + 0x364) == 0)) {
    dVar6 = *param_3;
    dVar1 = param_3[1];
    dVar2 = param_3[2];
    dVar7 = dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1;
    dVar3 = dVar6;
    dVar4 = dVar1;
    dVar8 = dVar2;
    if (0.0 < fVar5) {
      if (((dVar7 != 1.0) || (NAN(dVar7))) &&
         (dVar3 = DAT_14c8464e0, dVar4 = DAT_14c8464e8, dVar8 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar7)) {
        dVar8 = 1.0 / SQRT(dVar7);
        dVar3 = dVar6 * dVar8;
        dVar4 = dVar1 * dVar8;
        dVar8 = dVar2 * dVar8;
      }
    }
    else {
      fVar9 = *(float *)(param_1 + 0x354);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      param_4 = -((float)SQRT(dVar7) - fVar9) / param_4;
      if (((dVar7 != 1.0) || (NAN(dVar7))) &&
         (dVar3 = DAT_14c8464e0, dVar4 = DAT_14c8464e8, dVar8 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar7)) {
        dVar8 = 1.0 / SQRT(dVar7);
        dVar3 = dVar6 * dVar8;
        dVar4 = dVar1 * dVar8;
        dVar8 = dVar2 * dVar8;
      }
      if (fVar5 <= param_4) {
        fVar5 = param_4;
      }
    }
    dVar6 = (double)fVar5;
    *param_2 = dVar3 * dVar6 + *param_2;
    param_2[1] = dVar4 * dVar6 + param_2[1];
    param_2[2] = dVar8 * dVar6 + param_2[2];
  }
  return param_2;
}



// FUNCTION 1400e8320 FUN_1400e8320 body=305 status=ok
// SIG undefined FUN_1400e8320(void)

double * FUN_1400e8320(longlong *param_1,double *param_2,undefined8 param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[2] = DAT_14c8464f0;
  uVar8 = DAT_14c8464e8._4_4_;
  uVar7 = (undefined4)DAT_14c8464e8;
  uVar6 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar6;
  *(undefined4 *)(param_2 + 1) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
  fVar10 = (float)(**(code **)(*param_1 + 0x478))();
  dVar1 = (double)param_1[0x43];
  dVar2 = *param_2;
  *param_2 = dVar1 + dVar2;
  dVar3 = (double)param_1[0x44];
  dVar4 = param_2[1];
  param_2[1] = dVar3 + dVar4;
  dVar5 = (double)fVar10 + param_2[2] + (double)param_1[0x45];
  param_2[2] = dVar5;
  if ((char)param_1[0x30] < '\0') {
    cVar9 = FUN_144729dda((longlong)param_1 + 0x1e4);
    if (cVar9 != '\0') {
      (**(code **)(*param_1 + 0x5f8))(param_1,&local_88,param_3,param_4);
      *param_2 = dVar1 + dVar2 + local_88;
      param_2[1] = dVar3 + dVar4 + local_80;
      param_2[2] = dVar5 + local_78;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e8452 FUN_1400e8452 body=45 status=ok
// SIG undefined FUN_1400e8452(void)

undefined8 FUN_1400e8452(longlong param_1)

{
  float fVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  
  fVar1 = 0.0;
  uVar3 = 0;
  if ((*(float *)(param_1 + 0x1a8) != 0.0) || (NAN(*(float *)(param_1 + 0x1a8)))) {
    uVar2 = FUN_144800006();
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    fVar1 = (float)uVar2 * *(float *)(param_1 + 0x1a8);
  }
  return CONCAT44(uVar3,fVar1);
}



// FUNCTION 1400e8480 FUN_1400e8480 body=469 status=ok
// SIG undefined FUN_1400e8480(void)

void FUN_1400e8480(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
LAB_1400e85b0:
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
LAB_1400e85ed:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400e84ea;
LAB_1400e84df:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400e84ea:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001400e8517;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400e856d:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400e85ed;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400e85b0;
code_r0x0001400e8517:
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
      goto LAB_1400e856d;
    }
  }
  goto LAB_1400e84df;
}



// FUNCTION 1400e8656 FUN_1400e8656 body=620 status=ok
// SIG undefined FUN_1400e8656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e8656(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar7 = (uint *)*puVar1;
  if (puVar7 != (uint *)0x0) goto LAB_1400e8693;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar7 = (uint *)*puVar1;
LAB_1400e8693:
    plVar10 = (longlong *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar8 = puVar7[0x12];
    if (plVar10 + 0x21 <= puVar7 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar2 = *puVar7;
      *puVar7 = *puVar7 + uVar8 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar8) != 0xffffffff) break;
      puVar7 = (uint *)*puVar1;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar1 = puVar7;
      plVar10 = (longlong *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
      uVar8 = 0;
      if (plVar10 + 0x21 <= puVar7 + 0x4000) {
        uVar8 = 1;
        goto LAB_1400e870f;
      }
    }
  }
  uVar8 = uVar8 + 1;
LAB_1400e870f:
  *(longlong **)(puVar7 + 0x10) = plVar10 + 0x22;
  puVar7[0x12] = uVar8;
  *(int *)(plVar10 + -1) = ((int)plVar10 + -8) - (int)puVar7;
  *(undefined4 *)((longlong)plVar10 + -4) = 0x108;
  lVar4 = *(longlong *)(param_1 + 0x20);
  *plVar10 = lVar4;
  lVar5 = *(longlong *)(lVar4 + 0x18);
  plVar10[1] = lVar5;
  lVar9 = *(longlong *)(lVar4 + 0x20);
  plVar10[2] = lVar9;
  plVar10[3] = lVar4 + 0x30;
  plVar10[4] = lVar9 + 600;
  plVar10[5] = lVar9 + 0x298;
  plVar10[6] = lVar9 + 0x2158;
  plVar10[7] = 0;
  plVar10[8] = *(longlong *)(lVar4 + 0x10);
  plVar10[9] = param_1 + 0x40;
  lVar6 = *(longlong *)(lVar5 + 0x1050);
  plVar10[10] = *(longlong *)(lVar5 + 0x1048);
  plVar10[0xb] = lVar6;
  plVar10[0xc] = *(longlong *)(lVar5 + 0x1058);
  *(undefined4 *)(plVar10 + 0xd) = *(undefined4 *)(lVar9 + 0x4c8);
  *(undefined4 *)((longlong)plVar10 + 0x6c) = *(undefined4 *)(DAT_14cb0d2b0 + 0xd8c);
  *(float *)(plVar10 + 0xe) = (float)*(double *)(*(longlong *)(lVar5 + 8) + 0x88);
  *(float *)((longlong)plVar10 + 0x74) = DAT_14ca4b4f0 * DAT_14ca4b4f0;
  *(bool *)(plVar10 + 0xf) = *(int *)(lVar9 + 0x2a0) != -1;
  *(bool *)((longlong)plVar10 + 0x79) =
       (0 < DAT_14c7609dc && 0 < _DAT_14c7609e0) && 0.0 < DAT_14ca4b4c0;
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x48);
  lVar9 = *(longlong *)(lVar4 + 8) + 0x40;
  if (lVar5 != 0) {
    lVar9 = lVar5;
  }
  *(undefined4 *)(plVar10 + 0x10) = *(undefined4 *)(lVar9 + (longlong)*(int *)(lVar4 + 0x28) * 4);
  *(undefined8 *)((longlong)plVar10 + 0x84) = 0;
  *(undefined8 *)((longlong)plVar10 + 0x8c) = 0;
  *(undefined8 *)((longlong)plVar10 + 0x94) = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  *(undefined4 *)(plVar10 + 0x16) = 0;
  plVar10[0x17] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  *(undefined8 *)((longlong)plVar10 + 0xf1) = 0;
  *(undefined8 *)((longlong)plVar10 + 0xf9) = 0;
  iVar3 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar3 + 1U;
  if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
    FUN_140186552((longlong *)(param_1 + 0x58),iVar3);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 8) = plVar10;
  return;
}



// FUNCTION 1400e88c2 FUN_1400e88c2 body=78 status=ok
// SIG undefined FUN_1400e88c2(void)

undefined8 FUN_1400e88c2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    UNLOCK();
    cVar2 = FUN_1456bb142(lVar1 + 0x88,param_1);
    if (cVar2 != '\0') {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      FUN_1456bb1d4(param_1 + 0x28,lVar1);
      return 1;
    }
    LOCK();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    UNLOCK();
  }
  return 0;
}



// FUNCTION 1400e8910 FUN_1400e8910 body=307 status=ok
// SIG undefined FUN_1400e8910(void)

longlong * FUN_1400e8910(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong *lpTlsValue;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar2 = lpTlsValue[1];
    }
    else {
      lVar2 = *lpTlsValue;
      if (lVar2 != 0) {
        uVar1 = FUN_14493c560();
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
        }
        *(longlong *)(lVar3 + 8) = lVar2;
        FUN_144a8fde6(&DAT_14c896180,uVar1);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar2 = 0;
    }
    *param_1 = lVar2;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 1400e8a44 FUN_1400e8a44 body=36 status=ok
// SIG undefined FUN_1400e8a44(void)

bool FUN_1400e8a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_1400e8a68(param_3);
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(lVar1 + 0x73eb) == '\x01';
  }
  return bVar2;
}



// FUNCTION 1400e8a68 FUN_1400e8a68 body=269 status=ok
// SIG undefined FUN_1400e8a68(void)

longlong FUN_1400e8a68(void)

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
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) goto LAB_1400e8ab5;
  }
  lVar1 = 0;
LAB_1400e8ab5:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e8b76 FUN_1400e8b76 body=458 status=ok
// SIG undefined FUN_1400e8b76(void)

void FUN_1400e8b76(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  uVar3 = 0;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    puVar5 = puVar4 + (longlong)*(int *)(param_1 + 0x30) * 2;
    do {
      local_50 = *puVar4;
      plVar2 = (longlong *)puVar4[1];
      local_48 = plVar2;
      if (plVar2 == (longlong *)0x0) {
        FUN_1456ce2de(param_1 + 0x18,&local_50);
      }
      else {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        FUN_1456ce2de(param_1 + 0x18,&local_50);
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
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar5);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    puVar4 = *(undefined8 **)(param_1 + 0x28);
  }
  FUN_1448018bf(puVar4,uVar3);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1456ce336(param_1 + 0x28);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  uVar3 = 0;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    puVar5 = puVar4 + (longlong)*(int *)(param_1 + 0x40) * 2;
    do {
      local_50 = *puVar4;
      plVar2 = (longlong *)puVar4[1];
      local_48 = plVar2;
      if (plVar2 == (longlong *)0x0) {
        FUN_1477fcfe0(param_1 + 0x18,&local_50);
      }
      else {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        FUN_1477fcfe0(param_1 + 0x18,&local_50);
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
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar5);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    puVar4 = *(undefined8 **)(param_1 + 0x38);
  }
  FUN_1448018bf(puVar4,uVar3);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1456ce336(param_1 + 0x38);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001400e8c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 1400e8d41 FUN_1400e8d41 body=872 status=ok
// SIG undefined FUN_1400e8d41(void)

void FUN_1400e8d41(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 **local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != param_3) {
    puVar1 = (ulonglong *)(param_1 + 0x70);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar5 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
      FUN_140023dd8(puVar1,0x50);
      puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar3 = puVar5 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar3;
    *puVar5 = &PTR_FUN_14a2894d0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    iVar2 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0xac);
    }
    puVar5[2] = param_2;
    puVar5[3] = uVar4;
    *(undefined4 *)(puVar5 + 4) = 0x80;
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 0xac);
    }
    puVar5[5] = param_3;
    puVar5[6] = uVar4;
    *(undefined4 *)(puVar5 + 7) = 0x2000;
    local_a8 = *param_4;
    uStack_a4 = param_4[1];
    uStack_a0 = param_4[2];
    uStack_9c = param_4[3];
    local_98 = param_4[4];
    uStack_94 = param_4[5];
    uStack_90 = param_4[6];
    uStack_8c = param_4[7];
    uStack_88 = param_4[8];
    uStack_84 = param_4[9];
    uStack_80 = param_4[10];
    local_7c = param_4[0xb];
    uStack_78 = param_4[0xc];
    uStack_74 = param_4[0xd];
    uStack_70 = param_4[0xe];
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca08490) {
      FUN_144b3d300(&DAT_14ca08490);
      if (DAT_14ca08490 == -1) {
        FUN_145df5b24(&local_60);
        local_b0 = 0;
        local_c0 = 0;
        local_e0 = "Unknown";
        local_f0 = 0;
        uStack_e8 = 0;
        local_f8 = L"FCopyTextureParameters";
        local_b8 = 0;
        local_d0 = 0x30;
        local_d8 = 0xf0;
        local_c8 = &local_60;
        FUN_140b49562(&DAT_14ca08410,0,1);
        if (local_60 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_14321c095);
        _Init_thread_footer(&DAT_14ca08490);
      }
    }
    FUN_140069376(param_1);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar6 + 0x41;
    if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
      FUN_140023dd8(puVar1,0x210);
      puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar6 + 0x41;
    }
    *puVar1 = (ulonglong)puVar3;
    local_58 = DAT_14ca08458;
    if (DAT_14ca08458 != 0) {
      LOCK();
      *(int *)(DAT_14ca08458 + 8) = *(int *)(DAT_14ca08458 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14ca08410;
    local_f8 = (wchar_t *)CONCAT71(local_f8._1_7_,2);
    local_60 = puVar5 + 2;
    FUN_140068f1a(puVar6);
    *puVar6 = &PTR_FUN_14a38bd10;
    puVar6[0x37] = param_2;
    puVar6[0x38] = param_3;
    puVar6[0x39] = CONCAT44(uStack_a4,local_a8);
    puVar6[0x3a] = CONCAT44(uStack_9c,uStack_a0);
    *(undefined4 *)(puVar6 + 0x3b) = local_98;
    *(undefined4 *)((longlong)puVar6 + 0x1dc) = uStack_94;
    *(undefined4 *)(puVar6 + 0x3c) = uStack_90;
    *(undefined4 *)((longlong)puVar6 + 0x1e4) = uStack_8c;
    *(undefined4 *)(puVar6 + 0x3d) = uStack_88;
    *(undefined4 *)((longlong)puVar6 + 0x1ec) = uStack_84;
    *(undefined4 *)(puVar6 + 0x3e) = uStack_80;
    *(undefined4 *)((longlong)puVar6 + 500) = local_7c;
    *(undefined4 *)((longlong)puVar6 + 500) = local_7c;
    *(undefined4 *)(puVar6 + 0x3f) = uStack_78;
    *(undefined4 *)((longlong)puVar6 + 0x1fc) = uStack_74;
    *(undefined4 *)(puVar6 + 0x40) = uStack_70;
    iVar2 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar6;
    *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400e90aa FUN_1400e90aa body=231 status=ok
// SIG undefined FUN_1400e90aa(void)

longlong FUN_1400e90aa(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
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
  
  FUN_1400e92ba();
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  uVar2 = *(undefined4 *)(param_2 + 200);
  uVar3 = *(undefined4 *)(param_2 + 0xcc);
  uVar4 = *(undefined4 *)(param_2 + 0xd0);
  uVar5 = *(undefined4 *)(param_2 + 0xd4);
  uVar6 = *(undefined4 *)(param_2 + 0xd8);
  uVar7 = *(undefined4 *)(param_2 + 0xdc);
  uVar8 = *(undefined4 *)(param_2 + 0xe0);
  uVar9 = *(undefined4 *)(param_2 + 0xe4);
  uVar10 = *(undefined4 *)(param_2 + 0xeb);
  uVar11 = *(undefined4 *)(param_2 + 0xef);
  uVar12 = *(undefined4 *)(param_2 + 0xf3);
  *(undefined4 *)(param_1 + 0xe7) = *(undefined4 *)(param_2 + 0xe7);
  *(undefined4 *)(param_1 + 0xeb) = uVar10;
  *(undefined4 *)(param_1 + 0xef) = uVar11;
  *(undefined4 *)(param_1 + 0xf3) = uVar12;
  *(undefined4 *)(param_1 + 0xd8) = uVar6;
  *(undefined4 *)(param_1 + 0xdc) = uVar7;
  *(undefined4 *)(param_1 + 0xe0) = uVar8;
  *(undefined4 *)(param_1 + 0xe4) = uVar9;
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  *(undefined4 *)(param_1 + 0xd0) = uVar4;
  *(undefined4 *)(param_1 + 0xd4) = uVar5;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x100);
    _Src = *(void **)(param_2 + 0xf8);
    *(int *)(param_1 + 0x100) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x104) == 0) {
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
    else {
      FUN_1400e97e8((undefined8 *)(param_1 + 0xf8),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0xf8),_Src,(longlong)iVar1 << 3);
      }
    }
  }
  FUN_1400e9262(param_1 + 0x108,param_2 + 0x108);
  FUN_1400e9192(param_1 + 0x118,param_2 + 0x118);
  return param_1;
}



// FUNCTION 1400e9192 FUN_1400e9192 body=106 status=ok
// SIG undefined FUN_1400e9192(void)

void * FUN_1400e9192(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x18);
    *(int *)((longlong)param_1 + 0x18) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 4;
    }
    else {
      FUN_1400e91fc(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x10);
        if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1400e91fc FUN_1400e91fc body=101 status=ok
// SIG undefined FUN_1400e91fc(void)

void FUN_1400e91fc(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 4, 4 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_146f01ff8(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x1c) = param_3;
  return;
}



// FUNCTION 1400e9262 FUN_1400e9262 body=88 status=ok
// SIG undefined FUN_1400e9262(void)

undefined8 * FUN_1400e9262(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1468f8d30(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1400e92ba FUN_1400e92ba body=151 status=ok
// SIG undefined FUN_1400e92ba(void)

longlong FUN_1400e92ba(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  FUN_1400e9352();
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x98);
    _Src = *(void **)(param_2 + 0x90);
    *(int *)(param_1 + 0x98) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x9c) == 0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    else {
      FUN_1447a127e((undefined8 *)(param_1 + 0x90),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x90),_Src,(longlong)iVar1);
      }
    }
  }
  *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_2 + 0xb0);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  return param_1;
}



// FUNCTION 1400e9352 FUN_1400e9352 body=254 status=ok
// SIG undefined FUN_1400e9352(void)

longlong * FUN_1400e9352(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  void *_Src;
  undefined8 *puVar4;
  
  param_1[1] = (longlong)(param_1 + 2);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1400e9532();
  (**(code **)(*param_1 + 0x90))
            (param_1,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x70));
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xdf;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x80);
  puVar2 = *(undefined8 **)(param_2 + 0x58);
  plVar3 = (longlong *)param_1[0xb];
  if (puVar2 == (undefined8 *)0x0) {
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar3);
      param_1[0xb] = 0;
    }
  }
  else if (plVar3 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar4 = 0;
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    *(int *)(puVar4 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    }
    else {
      FUN_1401254a2(puVar4,iVar1,0);
      memcpy((void *)*puVar4,_Src,(longlong)iVar1 * 0x28);
    }
    param_1[0xb] = (longlong)puVar4;
  }
  else {
    FUN_140670b3c(plVar3,puVar2);
  }
  return param_1;
}



// FUNCTION 1400e9450 FUN_1400e9450 body=226 status=ok
// SIG undefined FUN_1400e9450(void)

void FUN_1400e9450(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 0x48) < 1)) {
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar1);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (lVar1 == 0) {
      lVar1 = FUN_14001cc68(0x58,0x10);
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(undefined8 *)(lVar1 + 0x48) = 0x800000000;
      *(undefined4 *)(lVar1 + 0x50) = 0;
      *(longlong *)(param_1 + 0x78) = lVar1;
    }
    FUN_14682863c(lVar1,param_2);
    *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  }
  if (param_3 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
    if ((lVar1 == 0) || ((longlong)*(int *)(lVar1 + 0x48) < 1)) {
      param_3 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x40);
      if (*(longlong *)(lVar1 + 0x40) == 0) {
        lVar2 = lVar1;
      }
      param_3 = *(longlong *)(lVar2 + -8 + (longlong)*(int *)(lVar1 + 0x48) * 8);
    }
  }
  *(longlong *)(param_1 + 0x70) = param_3;
  return;
}



// FUNCTION 1400e9532 FUN_1400e9532 body=693 status=ok
// SIG undefined FUN_1400e9532(void)

void FUN_1400e9532(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  bVar2 = *(byte *)(param_2 + 0x28) & 1;
  bVar1 = *(byte *)(param_1 + 0x28);
  *(byte *)(param_1 + 0x28) = bVar1 & 0xfe | bVar2;
  bVar3 = *(byte *)(param_2 + 0x28) & 2;
  *(byte *)(param_1 + 0x28) = bVar1 & 0xfc | bVar2 | bVar3;
  bVar4 = *(byte *)(param_2 + 0x28) & 4;
  *(byte *)(param_1 + 0x28) = bVar1 & 0xf8 | bVar2 | bVar3 | bVar4;
  bVar5 = *(byte *)(param_2 + 0x28) & 8;
  *(byte *)(param_1 + 0x28) = bVar1 & 0xf0 | bVar2 | bVar3 | bVar4 | bVar5;
  bVar6 = *(byte *)(param_2 + 0x28) & 0x10;
  *(byte *)(param_1 + 0x28) = bVar1 & 0xe0 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6;
  bVar7 = *(byte *)(param_2 + 0x28) & 0x20;
  *(byte *)(param_1 + 0x28) = bVar1 & 0xc0 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6 | bVar7;
  bVar8 = *(byte *)(param_2 + 0x28) & 0x40;
  *(byte *)(param_1 + 0x28) = bVar1 & 0x80 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8;
  *(byte *)(param_1 + 0x28) =
       bVar2 | bVar3 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8 | *(byte *)(param_2 + 0x28) & 0x80;
  bVar3 = *(byte *)(param_2 + 0x29) & 1;
  bVar1 = *(byte *)(param_1 + 0x29);
  *(byte *)(param_1 + 0x29) = bVar1 & 0xfe | bVar3;
  bVar4 = *(byte *)(param_2 + 0x29) & 2;
  *(byte *)(param_1 + 0x29) = bVar1 & 0xfc | bVar3 | bVar4;
  bVar5 = *(byte *)(param_2 + 0x29) & 4;
  *(byte *)(param_1 + 0x29) = bVar1 & 0xf8 | bVar3 | bVar4 | bVar5;
  bVar6 = *(byte *)(param_2 + 0x29) & 0x40;
  *(byte *)(param_1 + 0x29) = bVar1 & 0xb8 | bVar3 | bVar4 | bVar5 | bVar6;
  bVar7 = *(byte *)(param_2 + 0x29) & 0x80;
  *(byte *)(param_1 + 0x29) = bVar1 & 0x38 | bVar3 | bVar4 | bVar5 | bVar6 | bVar7;
  bVar8 = *(byte *)(param_2 + 0x2a) & 1;
  bVar2 = *(byte *)(param_1 + 0x2a);
  *(byte *)(param_1 + 0x2a) = bVar2 & 0xfe | bVar8;
  bVar9 = *(byte *)(param_2 + 0x2a) & 2;
  *(byte *)(param_1 + 0x2a) = bVar2 & 0xfc | bVar8 | bVar9;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  bVar10 = *(byte *)(param_2 + 0x2a) & 4;
  *(byte *)(param_1 + 0x2a) = bVar2 & 0xf8 | bVar8 | bVar9 | bVar10;
  bVar11 = *(byte *)(param_2 + 0x2a) & 8;
  *(byte *)(param_1 + 0x2a) = bVar2 & 0xf0 | bVar8 | bVar9 | bVar10 | bVar11;
  bVar12 = *(byte *)(param_2 + 0x2a) & 0x10;
  *(byte *)(param_1 + 0x2a) = bVar2 & 0xe0 | bVar8 | bVar9 | bVar10 | bVar11 | bVar12;
  bVar13 = *(byte *)(param_2 + 0x2a) & 0x20;
  *(byte *)(param_1 + 0x2a) = bVar2 & 0xc0 | bVar8 | bVar9 | bVar10 | bVar11 | bVar12 | bVar13;
  bVar14 = *(byte *)(param_2 + 0x2a) & 0x40;
  *(byte *)(param_1 + 0x2a) =
       bVar2 & 0x80 | bVar8 | bVar9 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14;
  *(byte *)(param_1 + 0x2a) =
       bVar8 | bVar9 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14 | *(byte *)(param_2 + 0x2a) & 0x80
  ;
  bVar8 = *(byte *)(param_2 + 0x2b) & 1;
  bVar2 = *(byte *)(param_1 + 0x2b);
  *(byte *)(param_1 + 0x2b) = bVar2 & 0xfe | bVar8;
  bVar9 = *(byte *)(param_2 + 0x2b) & 2;
  *(byte *)(param_1 + 0x2b) = bVar2 & 0xfc | bVar8 | bVar9;
  bVar10 = *(byte *)(param_2 + 0x2b) & 4;
  *(byte *)(param_1 + 0x2b) = bVar2 & 0xf8 | bVar8 | bVar9 | bVar10;
  bVar11 = *(byte *)(param_2 + 0x2b) & 8;
  *(byte *)(param_1 + 0x2b) = bVar2 & 0xf0 | bVar8 | bVar9 | bVar10 | bVar11;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  bVar12 = *(byte *)(param_2 + 0x2b) & 0x10;
  *(byte *)(param_1 + 0x2b) = bVar2 & 0xe0 | bVar8 | bVar9 | bVar10 | bVar11 | bVar12;
  bVar13 = *(byte *)(param_2 + 0x29) & 0x10;
  *(byte *)(param_1 + 0x29) = bVar1 & 0x28 | bVar3 | bVar4 | bVar5 | bVar6 | bVar7 | bVar13;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  bVar14 = *(byte *)(param_2 + 0x2b) & 0x20;
  *(byte *)(param_1 + 0x2b) = bVar2 & 0xc0 | bVar8 | bVar9 | bVar10 | bVar11 | bVar12 | bVar14;
  bVar15 = *(byte *)(param_2 + 0x2b) & 0x40;
  *(byte *)(param_1 + 0x2b) =
       bVar2 & 0x80 | bVar8 | bVar9 | bVar10 | bVar11 | bVar12 | bVar14 | bVar15;
  *(byte *)(param_1 + 0x2b) =
       bVar8 | bVar9 | bVar10 | bVar11 | bVar12 | bVar14 | bVar15 | *(byte *)(param_2 + 0x2b) & 0x80
  ;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  bVar8 = *(byte *)(param_2 + 0x2c) & 1;
  bVar2 = *(byte *)(param_1 + 0x2c);
  *(byte *)(param_1 + 0x2c) = bVar2 & 0xfe | bVar8;
  *(byte *)(param_1 + 0x2c) = bVar2 & 0xfc | bVar8 | *(byte *)(param_2 + 0x2c) & 2;
  bVar2 = *(byte *)(param_2 + 0x29) & 0x20;
  *(byte *)(param_1 + 0x29) = bVar1 & 8 | bVar3 | bVar4 | bVar5 | bVar6 | bVar7 | bVar13 | bVar2;
  *(byte *)(param_1 + 0x29) =
       bVar3 | bVar4 | bVar5 | bVar6 | bVar7 | bVar13 | bVar2 | *(byte *)(param_2 + 0x29) & 8;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  return;
}



// FUNCTION 1400e97e8 FUN_1400e97e8 body=317 status=ok
// SIG undefined FUN_1400e97e8(void)

void FUN_1400e97e8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  if (param_2 != 0) {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400e9865;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1400e9865:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1400e9926 FUN_1400e9926 body=59 status=ok
// SIG undefined FUN_1400e9926(void)

void FUN_1400e9926(undefined8 param_1,undefined8 param_2)

{
  FUN_144802206();
  FUN_144803e4a(param_1);
  if (DAT_14cb71f68 == '\x01') {
    FUN_1448019d0(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1400e9962 FUN_1400e9962 body=93 status=ok
// SIG undefined FUN_1400e9962(void)

undefined8 * FUN_1400e9962(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144801c4e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1400e9a5a(param_1,iVar1);
      FUN_144801d5e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1400e99c0 FUN_1400e99c0 body=153 status=ok
// SIG undefined FUN_1400e99c0(void)

void FUN_1400e99c0(longlong param_1,undefined4 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar5 = dVar1 * dVar1 + dVar2 * dVar2;
  if ((dVar5 != 1.0) || (NAN(dVar5))) {
    dVar3 = DAT_14c8464e0;
    dVar4 = DAT_14c8464e8;
    uVar6 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar5) {
      dVar3 = dVar1 * (1.0 / SQRT(dVar5));
      dVar4 = dVar2 * (1.0 / SQRT(dVar5));
      uVar6 = 0;
    }
  }
  else {
    dVar3 = dVar1;
    dVar4 = dVar2;
    uVar6 = -(ulonglong)(param_3[2] == 0.0) & (ulonglong)param_3[2];
  }
  *(double *)(param_1 + 0x28) = dVar3;
  *(double *)(param_1 + 0x30) = dVar4;
  *(ulonglong *)(param_1 + 0x38) = uVar6;
  return;
}



// FUNCTION 1400e9a5a FUN_1400e9a5a body=335 status=ok
// SIG undefined FUN_1400e9a5a(void)

void FUN_1400e9a5a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400e9ac8;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1400e9ac8:
    iVar5 = (int)(uVar4 / 0x58);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x58,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1400e9bba FUN_1400e9bba body=1362 status=ok
// SIG undefined FUN_1400e9bba(void)

void FUN_1400e9bba(longlong param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  ushort uVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0x148) = lVar7;
  plVar9 = *(longlong **)(lVar7 + 0xae8);
  if (plVar9 != (longlong *)0x0) {
    lVar7 = plVar9[4];
    if (lVar7 != 0) {
      if (DAT_14cad2858 == 0) {
        local_50 = &local_38;
        local_38 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146395584;
        local_58 = &LAB_147a0ba80;
        local_60 = &LAB_14575ccce;
        local_68 = L"Engine";
        local_70 = 0x40000000000;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar7 = *(longlong *)(lVar7 + 0x10);
      if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
          == DAT_14cad2858 + 0x30)) {
        if (DAT_14c86a9f8 == '\x01') {
          iVar1 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          if (iVar1 != 2) {
            if (iVar1 == 1) {
              DVar5 = FUN_140ad26c0();
              DVar6 = GetCurrentThreadId();
              if (DVar5 == DVar6) goto LAB_1400ea0a7;
            }
            goto LAB_1400e9c63;
          }
        }
LAB_1400ea0a7:
        FUN_14036294a(plVar9[4],1,1);
      }
    }
LAB_1400e9c63:
    lVar7 = plVar9[0x7c];
    if (lVar7 == 0) {
      lVar7 = (**(code **)(*plVar9 + 0x350))(plVar9);
      plVar9[0x7c] = lVar7;
    }
    *(longlong *)(param_1 + 0x150) = lVar7;
    *(byte *)(param_1 + 0x7e1) =
         *(byte *)(param_1 + 0x7e1) & 0xef | *(byte *)(param_2 + 0x31) >> 2 & 0x10;
    lVar7 = *(longlong *)(param_1 + 0x148);
  }
  lVar10 = *(longlong *)(lVar7 + 0x658);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(lVar7 + 0x660);
    if ((DAT_14c950c29 == 1) && (lVar10 != 0)) goto LAB_1400e9f81;
    if (lVar10 != 0) goto LAB_1400e9cb7;
LAB_1400e9df7:
    lVar7 = 0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_1400e9f81:
      FUN_1456cec3c(lVar10);
    }
LAB_1400e9cb7:
    if (DAT_14cb06da8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464003b0;
      local_58 = &LAB_147d17bdf;
      local_60 = &LAB_1417edf22;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_1400e9df7;
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x148) + 0x658);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x148) + 0x660);
      if ((DAT_14c950c29 & plVar9 != (longlong *)0x0) != 0) goto LAB_1400e9f98;
      if (plVar9 != (longlong *)0x0) goto LAB_1400e9d0e;
LAB_1400e9e20:
      plVar9 = (longlong *)0x0;
    }
    else {
      if (DAT_14c950c29 != 0) {
LAB_1400e9f98:
        FUN_1456cec3c(plVar9);
        if (DAT_14cb06da8 == 0) {
          local_50 = &local_38;
          local_38 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1464003b0;
          local_58 = &LAB_147d17bdf;
          local_60 = &LAB_1417edf22;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
      }
LAB_1400e9d0e:
      if ((*(int *)(plVar9[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
          DAT_14cb06da8 + 0x30)) goto LAB_1400e9e20;
    }
    if (*(code **)(*plVar9 + 0x3f8) == (code *)&LAB_1447eebca) {
      lVar7 = plVar9[0x1e];
    }
    else {
      lVar7 = (**(code **)(*plVar9 + 0x3f8))(plVar9);
    }
  }
  *(longlong *)(param_1 + 0x140) = lVar7;
  lVar7 = *(longlong *)(param_1 + 0x148);
  pcVar2 = *(char **)(lVar7 + 0x9c0);
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  lVar10 = DAT_14cad29d8;
  if (pcVar2 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    if ((*(byte *)(lVar7 + 0x8a0) & 8) != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar8 = 0;
      }
      else {
        bVar3 = FUN_144a61b4f();
        uVar8 = (ulonglong)(bVar3 ^ 1);
      }
      if (0 < *(int *)(lVar10 + uVar8 * 4)) {
        uVar4 = (short)*(undefined4 *)(pcVar2 + 4) - 1;
        *(ushort *)(param_1 + 0x6b8) = uVar4;
        if (1 < *(int *)(pcVar2 + 8) || *pcVar2 == '\x01') {
          *(short *)(param_1 + 0x6ba) = (short)*(int *)(pcVar2 + 8) + -1;
        }
        goto LAB_1400e9d97;
      }
      lVar7 = *(longlong *)(param_1 + 0x148);
    }
    if ((*(byte *)(lVar7 + 0x8a1) & 0x20) == 0) {
      uVar4 = *(ushort *)(param_1 + 0x6b8);
    }
    else {
      uVar4 = (ushort)*(byte *)(lVar7 + 0x89d);
      *(ushort *)(param_1 + 0x6ba) = uVar4;
      *(ushort *)(param_1 + 0x6b8) = uVar4;
    }
  }
LAB_1400e9d97:
  *(ushort *)(param_1 + 0x5ea) = uVar4;
  *(undefined2 *)(param_1 + 0x5fa) = *(undefined2 *)(param_1 + 0x6ba);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ea10e FUN_1400ea10e body=269 status=ok
// SIG undefined FUN_1400ea10e(void)

void FUN_1400ea10e(longlong param_1,int param_2)

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



// FUNCTION 1400ea21c FUN_1400ea21c body=26 status=ok
// SIG undefined FUN_1400ea21c(void)

void FUN_1400ea21c(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_1f();
  FUN_1400ea236(param_1);
  return;
}



// FUNCTION 1400ea236 FUN_1400ea236 body=61 status=ok
// SIG undefined FUN_1400ea236(void)

void FUN_1400ea236(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x340))();
  if ((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) {
    FUN_1400ea27c(lVar1);
    FUN_1400020a8(lVar1);
    *plVar2 = 0;
  }
  return;
}



// FUNCTION 1400ea27c FUN_1400ea27c body=112 status=ok
// SIG undefined FUN_1400ea27c(void)

void FUN_1400ea27c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 != 0) {
    FUN_1400ea3a6(lVar2);
    FUN_1400020a8(lVar2);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  FUN_1400ea2ec(param_1 + 0x18);
  return;
}



// FUNCTION 1400ea2ec FUN_1400ea2ec body=60 status=ok
// SIG undefined FUN_1400ea2ec(void)

void FUN_1400ea2ec(longlong *param_1)

{
  FUN_1400ea328();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400ea328 FUN_1400ea328 body=70 status=ok
// SIG undefined FUN_1400ea328(void)

void FUN_1400ea328(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1400ea36e(lVar2 + 0x20,lVar2 + 0x20);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 1400ea36e FUN_1400ea36e body=55 status=ok
// SIG undefined FUN_1400ea36e(void)

void FUN_1400ea36e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((*(byte *)(param_2 + 0x17) & 0x40) != 0) {
    if (lVar1 == 0) goto LAB_1400ea388;
    FUN_1468886fa(lVar1);
  }
  FUN_1400020a8(lVar1);
LAB_1400ea388:
  *param_1 = 0;
  return;
}



// FUNCTION 1400ea3a6 FUN_1400ea3a6 body=218 status=ok
// SIG undefined FUN_1400ea3a6(void)

void FUN_1400ea3a6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400ea480(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400ea4bd(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1400ea480 FUN_1400ea480 body=61 status=ok
// SIG undefined FUN_1400ea480(void)

void FUN_1400ea480(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400ea4bd FUN_1400ea4bd body=48 status=ok
// SIG undefined FUN_1400ea4bd(void)

void FUN_1400ea4bd(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_1400ea36e(param_1,param_1);
      param_1 = param_1 + 0x90;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400ea4fa FUN_1400ea4fa body=131 status=ok
// SIG undefined FUN_1400ea4fa(void)

longlong * FUN_1400ea4fa(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar14 = 0;
    lVar13 = 0;
    do {
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1400ea57e(param_2,iVar4);
        lVar13 = *param_2;
      }
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      uVar10 = puVar1[4];
      uVar11 = puVar1[5];
      uVar12 = puVar1[6];
      puVar2 = (undefined4 *)(lVar13 + 0xc + (longlong)iVar4 * 0x1c);
      *puVar2 = puVar1[3];
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      puVar1 = (undefined4 *)(lVar13 + (longlong)iVar4 * 0x1c);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar14 = lVar14 + 0x368;
    } while ((longlong)iVar3 * 0x368 - lVar14 != 0);
  }
  return param_2;
}



// FUNCTION 1400ea57e FUN_1400ea57e body=378 status=ok
// SIG undefined FUN_1400ea57e(void)

void FUN_1400ea57e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
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
    lVar5 = (longlong)(int)uVar3;
  }
  else {
    lVar5 = (longlong)(int)uVar2 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar4 = lVar5 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
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
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400ea60b;
            lVar5 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_1400ea60b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar4 / 0x1c)) {
    uVar7 = uVar4 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c,4);
  return;
}



// FUNCTION 1400ea704 FUN_1400ea704 body=397 status=ok
// SIG undefined FUN_1400ea704(void)

longlong * FUN_1400ea704(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1400ea892();
  *param_1 = (longlong)&PTR_FUN_14a88f240;
  param_1[5] = (longlong)&PTR_FUN_14a88fd40;
  param_1[6] = (longlong)&PTR_FUN_14a88fd80;
  param_1[0x55] = (longlong)&PTR_FUN_14a88fdd0;
  param_1[0x56] = (longlong)&PTR_FUN_14a88fe50;
  param_1[0x57] = (longlong)&PTR_FUN_14a88fe60;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  *(undefined4 *)(param_1 + 0xce) = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd9) & 0xf0;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0x41000000;
  *(undefined4 *)(param_1 + 0xda) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0x3f800000;
  param_1[0xdc] = (longlong)&PTR_FUN_14a899030;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  FUN_1400ea934(param_1,DAT_14cad0f00,1);
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0x2000000000;
  *(undefined4 *)(param_1 + 0xd0) = 0x40;
  *(byte *)((longlong)param_1 + 0x675) = *(byte *)((longlong)param_1 + 0x675) & 0x9b | 0x20;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x2e9) = 1;
  *(byte *)((longlong)param_1 + 0x676) = *(byte *)((longlong)param_1 + 0x676) | 6;
  *(byte *)((longlong)param_1 + 0x66c) = *(byte *)((longlong)param_1 + 0x66c) & 0x88 | 0x30;
  *(byte *)((longlong)param_1 + 0x674) = *(byte *)((longlong)param_1 + 0x674) & 0x30 | 0x84;
  *(undefined4 *)(param_1 + 0xd3) = 0x3dcccccd;
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 0x10;
  *(undefined4 *)(param_1 + 0xdf) = 0x3f800000;
  return param_1;
}



// FUNCTION 1400ea892 FUN_1400ea892 body=161 status=ok
// SIG undefined FUN_1400ea892(void)

undefined8 * FUN_1400ea892(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14a853bb0;
  param_1[5] = &PTR_FUN_14a854630;
  param_1[6] = &PTR_LAB_14a854670;
  param_1[0x55] = &PTR_FUN_14a8546c0;
  param_1[0x56] = &PTR_FUN_14a854740;
  param_1[0x57] = &PTR_FUN_14a854750;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(byte *)((longlong)param_1 + 0x2d6) = *(byte *)((longlong)param_1 + 0x2d6) | 2;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) | 0x10;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 0x80;
  *(byte *)((longlong)param_1 + 0x63c) = *(byte *)((longlong)param_1 + 0x63c) & 0xfc | 2;
  return param_1;
}



// FUNCTION 1400ea934 FUN_1400ea934 body=1008 status=ok
// SIG undefined FUN_1400ea934(void)

void FUN_1400ea934(longlong *param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  DWORD DVar3;
  char cVar4;
  byte bVar5;
  DWORD dwTlsIndex;
  DWORD DVar6;
  LPVOID lpTlsValue;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  longlong local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar9 = DAT_14c75ec34 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar9) {
      DVar6 = DAT_14c75ec34;
      DVar3 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar3;
    UNLOCK();
    if (bVar9) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar6;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if (*(longlong **)((longlong)lpTlsValue + 0x30) == param_1) {
    *(longlong *)((longlong)param_1 + 0x454) = param_2;
    param_1[0x96] = 0;
    *(byte *)((longlong)param_1 + 0x44d) = *(byte *)((longlong)param_1 + 0x44d) | 0x40;
    goto LAB_1400eab3c;
  }
  FUN_1406900ec(param_1 + 0x82,&local_48);
  if (local_48 == param_2) goto LAB_1400eab3c;
  if (((((*(int *)((longlong)param_1 + 0x554) == 0) ||
        (uVar2 = *(uint *)(param_1 + 0xaa), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)((longlong)param_1 + 0x554))))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
      (plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0)))) {
LAB_1400eaa3d:
    plVar7 = param_1;
LAB_1400eaa40:
    cVar8 = *(char *)((longlong)plVar7 + 0x427);
  }
  else {
    if ((plVar7[0x15] == 0) || ((*(byte *)(plVar7[0x15] + 0x65) & 1) != 0)) {
      if (DAT_14cad2858 == 0) {
        local_60 = &local_40;
        local_40 = FUN_144a7958c;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_146395584;
        local_68 = &LAB_147a0ba80;
        local_70 = &LAB_14575ccce;
        local_78 = L"Engine";
        local_80 = 0x40000000000;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
          DAT_14cad2858 + 0x30)) goto LAB_1400eaa3d;
      goto LAB_1400eaa40;
    }
    cVar8 = '\0';
  }
  FUN_140078ec2(param_1 + 0x82,param_2);
  if ((((*(int *)((longlong)param_1 + 0x554) == 0) ||
       (uVar2 = *(uint *)(param_1 + 0xaa), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)((longlong)param_1 + 0x554))) ||
      (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
       (plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0)))))) {
LAB_1400eaae5:
    plVar7 = param_1;
LAB_1400eaae8:
    cVar4 = *(char *)((longlong)plVar7 + 0x427);
  }
  else {
    if ((plVar7[0x15] == 0) || ((*(byte *)(plVar7[0x15] + 0x65) & 1) != 0)) {
      if (DAT_14cad2858 == 0) {
        local_60 = &local_40;
        local_40 = FUN_144a7958c;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_146395584;
        local_68 = &LAB_147a0ba80;
        local_70 = &LAB_14575ccce;
        local_78 = L"Engine";
        local_80 = 0x40000000000;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
          DAT_14cad2858 + 0x30)) goto LAB_1400eaae5;
      goto LAB_1400eaae8;
    }
    cVar4 = '\0';
  }
  if ((cVar8 != cVar4) &&
     (bVar1 = *(byte *)((longlong)param_1 + 0x9c), bVar5 = (**(code **)(*param_1 + 0x358))(param_1),
     (bVar1 & 8) >> 3 != bVar5)) {
    FUN_1406cc378(param_1);
  }
  (**(code **)(*param_1 + 0x950))(param_1,param_3);
LAB_1400eab3c:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400ead26 FUN_1400ead26 body=809 status=ok
// SIG undefined FUN_1400ead26(void)

undefined8 * FUN_1400ead26(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  FUN_144805d84();
  *param_1 = &PTR_FUN_14a73f970;
  param_1[5] = &PTR_FUN_14a73ff50;
  param_1[6] = &PTR_LAB_14a73ff90;
  *(undefined2 *)((longlong)param_1 + 0x1fd) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 2;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3ff00000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x3ff00000;
  param_1[0x52] = 0x3ff0000000000000;
  param_1[0x53] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 2;
  uVar1 = param_1[7];
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(0,param_1,uVar1,7);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x80;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  param_1[0x39] = 0x3ff0000000000000;
  param_1[0x3a] = 0x3ff0000000000000;
  param_1[0x3b] = 0x3ff0000000000000;
  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) | 0x20;
  uVar1 = param_1[7];
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0xb);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x800;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xf7;
  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xbf | (param_1[0x24] != 0) << 6;
  uVar1 = param_1[7];
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0xc);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x1000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return param_1;
}



// FUNCTION 1400eb05c FUN_1400eb05c body=143 status=ok
// SIG undefined FUN_1400eb05c(void)

undefined4 FUN_1400eb05c(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar1 = (uint *)(param_1 + 4);
  DVar3 = GetCurrentThreadId();
  uVar5 = *(uint *)(param_1 + 4);
  if ((uVar5 & 1) == 0) {
    LOCK();
    uVar2 = *puVar1;
    bVar6 = uVar5 == uVar2;
    if (bVar6) {
      *puVar1 = uVar5 | 1;
      uVar2 = uVar5;
    }
    uVar5 = uVar2;
    UNLOCK();
    if (bVar6) {
      *(DWORD *)(param_1 + 8) = DVar3;
      goto LAB_1400eb08c;
    }
  }
  if (*(DWORD *)(param_1 + 8) == DVar3) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar5);
  }
LAB_1400eb08c:
  uVar4 = FUN_14480611a(param_1 + 0xa0,param_2);
  uVar5 = *(uint *)(param_1 + 4);
  if (uVar5 < 4) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (uVar5 < 2) {
      LOCK();
      uVar2 = *puVar1;
      if (uVar5 == uVar2) {
        *puVar1 = 0;
      }
      UNLOCK();
      if (uVar5 == uVar2) {
        return uVar4;
      }
    }
    FUN_140d366d2(puVar1);
  }
  else {
    LOCK();
    *puVar1 = *puVar1 - 4;
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 1400eb0ec FUN_1400eb0ec body=217 status=ok
// SIG undefined FUN_1400eb0ec(void)

void FUN_1400eb0ec(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar7 != -1) {
      lVar2 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x20;
        lVar1 = lVar2 + lVar8;
        if (*(ulonglong *)(lVar2 + lVar8) == param_2) {
          iVar6 = *(int *)((longlong)plVar4 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
          if (iVar6 == iVar7) {
            piVar5 = (int *)((longlong)plVar4 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
          }
          else {
            do {
              piVar5 = (int *)((longlong)iVar6 * 0x20 + lVar2 + 0x18);
              iVar6 = *piVar5;
            } while (iVar6 != iVar7);
          }
          *piVar5 = *(int *)(lVar1 + 0x18);
          if (*(longlong *)(*param_1 + 8 + lVar8) != 0) {
            FUN_1400020a8();
          }
          FUN_1400eb1c6(param_1,iVar7,1);
          return;
        }
        iVar7 = *(int *)(lVar1 + 0x18);
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 1400eb1c6 FUN_1400eb1c6 body=136 status=ok
// SIG undefined FUN_1400eb1c6(void)

void FUN_1400eb1c6(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1400eb24e FUN_1400eb24e body=151 status=ok
// SIG undefined FUN_1400eb24e(void)

void FUN_1400eb24e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x90)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x90,0x10);
      uVar3 = uVar3 / 0x90;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x90,0x10);
    }
  }
  return;
}



// FUNCTION 1400eb2e6 FUN_1400eb2e6 body=118 status=ok
// SIG undefined FUN_1400eb2e6(void)

void FUN_1400eb2e6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_14001cc68(0x13c10,0x10);
  FUN_144806294(uVar4,param_4);
  plVar1 = (longlong *)(param_3 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_144928a2e(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar4;
  lVar3 = *(longlong *)*plVar1;
  *(undefined4 *)(lVar3 + 0x30f8) = *(undefined4 *)(lVar3 + 0x4d8);
  *(undefined4 *)(lVar3 + 0x30fc) = *(undefined4 *)(lVar3 + 0x4dc);
  *(undefined4 *)(lVar3 + 0x3100) = *(undefined4 *)(lVar3 + 0x4e0);
  *(undefined4 *)(lVar3 + 0x3104) = *(undefined4 *)(lVar3 + 0x4e4);
  FUN_1400eb35c(lVar3,0);
  return;
}



// FUNCTION 1400eb35c FUN_1400eb35c body=506 status=ok
// SIG undefined FUN_1400eb35c(void)

void FUN_1400eb35c(longlong param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  double *pdVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_a0;
  double local_98 [6];
  undefined1 local_68;
  double local_60 [6];
  undefined1 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  local_30 = 0;
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
  if (plVar8 != (longlong *)0x0) {
    lVar12 = (**(code **)(*plVar8 + 0x3e0))();
    if (((lVar12 != 0) && (*(longlong *)(param_1 + 0x12020) == 0)) &&
       (*(int *)(lVar12 + 0x4d18) != 0)) {
      memcpy((void *)(param_1 + 0x12020),*(void **)(lVar12 + 0x4d10),0x4a8);
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x3110);
  if (lVar12 == 0) {
    lVar12 = FUN_14001cc68(0x1960,0x10);
    FUN_1448e6882(lVar12);
    lVar9 = *(longlong *)(param_1 + 0x3110);
    *(longlong *)(param_1 + 0x3110) = lVar12;
    if (lVar9 != 0) {
      FUN_1400020a8();
      lVar12 = *(longlong *)(param_1 + 0x3110);
    }
  }
  local_a8 = 2;
  local_a0 = lVar12;
  FUN_1401ee8d8(param_1,param_1 + 0x500,param_1 + 0x125d0,local_98);
  if (param_2 != 0) {
    *(int *)(*(longlong *)(param_1 + 0x3110) + 0xb70) = param_2;
  }
  FUN_1400eb558(param_1,*(undefined8 *)(param_1 + 0x3110));
  iVar13 = 0x800;
  if (DAT_14c760a70 < 0x800) {
    iVar13 = DAT_14c760a70;
  }
  iVar11 = 4;
  if (4 < iVar13) {
    iVar11 = iVar13;
  }
  lVar12 = 0;
  pdVar15 = local_98;
  bVar10 = true;
  do {
    bVar14 = bVar10;
    lVar9 = lVar12 * 0x18;
    *(double *)(param_1 + 0x12538 + lVar9) = pdVar15[2];
    dVar2 = pdVar15[1];
    pdVar1 = (double *)(param_1 + 0x12528 + lVar9);
    *pdVar1 = *pdVar15;
    pdVar1[1] = dVar2;
    dVar2 = pdVar15[3];
    dVar3 = *pdVar15;
    *(float *)(param_1 + 0x12558 + lVar12 * 4) = (float)((dVar2 - dVar3) / (double)iVar11);
    dVar4 = pdVar15[4];
    dVar5 = pdVar15[5];
    dVar6 = pdVar15[2];
    dVar7 = pdVar15[1];
    *(double *)(param_1 + 0x12560 + lVar9) = dVar2 - dVar3;
    *(double *)(param_1 + 0x12568 + lVar9) = dVar4 - dVar7;
    *(double *)(param_1 + 0x12570 + lVar9) = dVar5 - dVar6;
    lVar12 = 1;
    pdVar15 = local_60;
    bVar10 = false;
  } while (bVar14);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400eb558 FUN_1400eb558 body=527 status=ok
// SIG undefined FUN_1400eb558(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1400eb558(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_2288 [40];
  longlong local_2260;
  longlong local_2258 [1094];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2288;
  FUN_1401ee234(local_2258,param_2,1,1);
  plVar7 = (longlong *)(param_1 + 0x18);
  if (plVar7 == local_2258) {
LAB_1400eb64b:
    if (local_2258[0] != 0) {
      LOCK();
      puVar1 = (uint *)(local_2258[0] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    lVar6 = *plVar7;
    *plVar7 = local_2258[0];
    local_2258[0] = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar6;
          plVar7 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar8 = plVar5 != DAT_14ca843c8;
              plVar7 = plVar4;
              if (bVar8) {
                plVar5 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
      goto LAB_1400eb64b;
    }
  }
  if ((&DAT_000023f6)[param_1] == '\x01') {
    FUN_147cef0c6(local_2258);
    FUN_142fe36c2(local_2258,param_2,0);
    lVar6 = FUN_144b28782(param_1);
    if (lVar6 != 0) {
      param_2 = *(undefined8 *)(lVar6 + 0x3110);
    }
    FUN_142fe36c2(local_2258,param_2,1);
    FUN_142bc2384(&local_2260,local_2258,1,1);
    plVar7 = (longlong *)(param_1 + 0x30e0);
    if (plVar7 != &local_2260) {
      lVar6 = *plVar7;
      *plVar7 = local_2260;
      local_2260 = 0;
      if (lVar6 == 0) goto LAB_1400eb5cd;
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_2260 != 0) {
      LOCK();
      puVar1 = (uint *)(local_2260 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
LAB_1400eb5cd:
  if ((local_28 ^ (ulonglong)auStack_2288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400eb768 FUN_1400eb768 body=147 status=ok
// SIG undefined FUN_1400eb768(void)

void FUN_1400eb768(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    plVar4 = (longlong *)*param_1;
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        lVar3 = 0x3ef0;
        do {
          FUN_144ab2e4c(lVar1 + lVar3);
          lVar3 = lVar3 + -0x98;
        } while (lVar3 != -0x98);
        FUN_1400020a8(lVar1);
      }
      plVar4 = plVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1447ab16c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1400eb7fc FUN_1400eb7fc body=2648 status=ok
// SIG undefined FUN_1400eb7fc(void)

void FUN_1400eb7fc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  bool bVar18;
  undefined1 auStack_608 [32];
  undefined1 local_5e8 [88];
  undefined4 local_590;
  undefined8 local_58c;
  undefined8 uStack_584;
  undefined8 local_57c;
  undefined8 uStack_574;
  undefined8 local_56c;
  undefined8 uStack_564;
  undefined8 local_55c;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined5 uStack_510;
  undefined3 uStack_50b;
  undefined5 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468 [4];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 local_298 [192];
  longlong local_1d8;
  undefined8 local_1c8;
  undefined1 local_1b8 [256];
  longlong local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_608;
  *(undefined8 *)(param_1 + 0x30f8) = 0;
  *(undefined8 *)(param_1 + 0x3100) = 0;
  lVar13 = *(longlong *)(param_1 + 0x3110);
  *(undefined8 *)(param_1 + 0x3110) = 0;
  if (lVar13 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x23fe) = 0;
  *(undefined2 *)(param_1 + 0x125b8) = 0;
  *(undefined4 *)(param_1 + 0x125b4) = 0;
  *(undefined4 *)(param_1 + 0x13690) = 0;
  *(undefined8 *)(param_1 + 0x13698) = 0;
  *(undefined1 *)(param_1 + 0x23d9) = 1;
  *(uint *)(param_1 + 0x125b0) = (*(uint *)(param_1 + 0x125b0) & 0xfffe0e00) + 1;
  *(undefined8 *)(param_1 + 0x11fa0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x11fa8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x11fb0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x11fb8) = 0;
  *(undefined8 *)(param_1 + 0x11fc0) = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x11fc8) = DAT_14c846338;
  *(undefined4 *)(param_1 + 0x11fcc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x11fd0) = 0;
  *(undefined8 *)(param_1 + 0x11fd8) = 0;
  *(undefined8 *)(param_1 + 0x12010) = DAT_14c84635c;
  *(undefined4 *)(param_1 + 0x11ff0) = 0;
  *(undefined8 *)(param_1 + 0x124d0) = 0;
  uVar8 = DAT_14c8464e8._4_4_;
  uVar7 = (undefined4)DAT_14c8464e8;
  uVar6 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x124d8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x124dc) = uVar6;
  *(undefined4 *)(param_1 + 0x124e0) = uVar7;
  *(undefined4 *)(param_1 + 0x124e4) = uVar8;
  *(undefined8 *)(param_1 + 0x124e8) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x11ff8) = 0x4cbebc2000000000;
  *(undefined8 *)(param_1 + 0x12000) = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x12008) = DAT_14c846338;
  *(undefined4 *)(param_1 + 0x1200c) = 0;
  *(undefined1 *)(param_1 + 0x12018) = 0;
  *(undefined4 *)(param_1 + 0x1201c) = 0;
  plVar4 = *(longlong **)(param_1 + 0x13720);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x13720) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x13728);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x13728) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x13730);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x13730) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x124f0) = 0;
  *(undefined8 *)(param_1 + 0x124f4) = 0;
  memset((void *)(param_1 + 0x12500),0,0x90);
  *(undefined8 *)(param_1 + 0x13740) = 0;
  *(undefined8 *)(param_1 + 0x13748) = 0;
  lVar13 = DAT_14ca46270;
  uVar2 = *(uint *)(*(longlong *)(param_1 + 8) + 0x10);
  uVar14 = 1;
  if (1 < (int)uVar2) {
    uVar14 = uVar2;
  }
  iVar15 = *(int *)(param_1 + 0x3090);
  iVar16 = 10;
  if (iVar15 < 3) {
    iVar16 = (int)(4 / (ulonglong)uVar14);
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar5 + 0xc60);
  if (iVar3 == 0x40000002) {
    uVar12 = 0;
  }
  else {
    bVar18 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar3 != 2)) {
      if (iVar3 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        bVar18 = DVar10 == DVar11;
        iVar15 = *(int *)(param_1 + 0x3090);
      }
      else {
        bVar18 = false;
      }
    }
    uVar12 = (ulonglong)(bVar18 ^ 1);
  }
  iVar3 = *(int *)(lVar13 + uVar12 * 4);
  if (iVar3 < iVar16) {
    iVar16 = iVar3;
  }
  if (iVar16 < 1) {
    iVar16 = 0;
  }
  *(int *)(param_1 + 0x4f8) = iVar16;
  *(undefined8 *)(param_1 + 0x13818) =
       *(undefined8 *)
        (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar15 * 2) * 8);
  *(undefined8 *)(param_1 + 0x3108) = *(undefined8 *)(param_1 + 0x10);
  uVar9 = FUN_1448072cd();
  (&DAT_00001de6)[param_1] = uVar9;
  uVar9 = FUN_1400ec2b9(*(undefined4 *)(param_1 + 0x3090));
  *(undefined1 *)(param_1 + 0x13820) = uVar9;
  *(undefined1 *)(param_1 + 0x13821) = 0;
  *(undefined4 *)(param_1 + 0x36cc) = 0;
  *(byte *)(param_1 + 0x125b1) = *(byte *)(param_1 + 0x125b1) & 0xf1;
  *(undefined4 *)(param_1 + 0x13824) = 0x46fc0000;
  *(undefined8 *)(param_1 + 0x13700) = 0;
  *(undefined4 *)(param_1 + 0x13708) = 0;
  *(undefined8 *)(param_1 + 0x12590) = 0;
  *(undefined8 *)(param_1 + 0x12598) = 1;
  uVar8 = DAT_14c8463f8._4_4_;
  uVar7 = (undefined4)DAT_14c8463f8;
  uVar6 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x125a0) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 0x125a4) = uVar6;
  *(undefined4 *)(param_1 + 0x125a8) = uVar7;
  *(undefined4 *)(param_1 + 0x125ac) = uVar8;
  *(undefined4 *)(param_1 + 0x13694) = 0x3f800000;
  if ((DAT_14c86a9f8 == '\x01') && (iVar15 = *(int *)(lVar5 + 0xc60), iVar15 != 2)) {
    if (iVar15 == 1) {
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_1400ec1ed;
    }
    uVar9 = 0;
  }
  else {
LAB_1400ec1ed:
    lVar13 = FUN_140032b16(0);
    lVar13 = *(longlong *)(lVar13 + 0x78);
    *(uint *)(param_1 + 0x13bf8) = (uint)*(byte *)(*(longlong *)(lVar13 + 0x28) + 1);
    *(uint *)(param_1 + 0x13bfc) = (uint)*(byte *)(*(longlong *)(lVar13 + 0x28) + 0x8fd);
    *(undefined4 *)(param_1 + 0x13c00) = *(undefined4 *)(*(longlong *)(lVar13 + 0x28) + 0x58);
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 0x13c04) = uVar9;
  lVar13 = *(longlong *)(param_1 + 0x13850);
  if (lVar13 != 0) {
    *(undefined8 *)(param_1 + 0x13850) = 0;
    LOCK();
    puVar1 = (uint *)(lVar13 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar13 = *(longlong *)(param_1 + 0x31c8);
  if (lVar13 != 0) {
    *(undefined8 *)(param_1 + 0x31c8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar13 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar13 = *(longlong *)(param_1 + 0x31d0);
  if (lVar13 != 0) {
    *(undefined8 *)(param_1 + 0x31d0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar13 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  memset((void *)(param_1 + 0x3268),0,0xf0);
  uVar9 = *(undefined1 *)(param_1 + 0x11830);
  memset((void *)(param_1 + 0x11828),0,0xb0);
  *(undefined1 *)(param_1 + 0x11830) = uVar9;
  memset(local_5e8,0,0x590);
  local_590 = 8;
  local_500 = 0;
  uStack_4f8 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_4e0 = 0;
  uStack_4d8 = 0;
  local_4d0 = 0;
  uStack_4c8 = 0;
  local_4c0 = 0;
  uStack_4b8 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_4a0 = 0;
  uStack_498 = 0;
  local_58c = 0;
  uStack_584 = 0;
  local_57c = 0;
  uStack_574 = 0;
  local_56c = 0;
  uStack_564 = 0;
  local_55c = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  uStack_510 = 0;
  uStack_50b = 0;
  uStack_508 = 0;
  local_468[0] = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_368 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_1c8 = 0x600000000;
  local_a8 = CONCAT44(8,(undefined4)local_a8);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  memcpy((undefined1 *)(param_1 + 0x11a00),local_5e8,0x168);
  uVar9 = 0;
  if ((undefined8 *)(param_1 + 0x11b70) != &local_478) {
    FUN_144807254(*(undefined8 *)(param_1 + 0x11b70),*(undefined4 *)(param_1 + 0x11b78));
    lVar13 = *(longlong *)(param_1 + 0x11b70);
    if (lVar13 != 0) {
      piVar17 = (int *)((lVar13 + -8) - (ulonglong)*(uint *)(lVar13 + -8));
      LOCK();
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (*piVar17 == 0) {
        if (*(longlong *)(piVar17 + 0x10) - (longlong)piVar17 == 0x10000) {
          lVar13 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar13 = FUN_145bdc178();
          }
          FUN_140028df4(lVar13,piVar17);
        }
        else {
          FUN_144705e74(piVar17);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x11b70) = local_478;
    local_478 = 0;
    *(undefined4 *)(param_1 + 0x11b78) = (undefined4)uStack_470;
    *(undefined4 *)(param_1 + 0x11b7c) = uStack_470._4_4_;
    uStack_470 = 0;
    uVar9 = local_2b8;
  }
  memcpy((void *)(param_1 + 0x11b80),local_468,0x170);
  *(undefined4 *)(param_1 + 0x11cf0) = (undefined4)uStack_2f8;
  *(undefined4 *)(param_1 + 0x11cf4) = uStack_2f8._4_4_;
  *(undefined4 *)(param_1 + 0x11cf8) = (undefined4)local_2f0;
  *(undefined4 *)(param_1 + 0x11cfc) = local_2f0._4_4_;
  *(undefined4 *)(param_1 + 0x11d00) = (undefined4)uStack_2e8;
  *(undefined4 *)(param_1 + 0x11d04) = uStack_2e8._4_4_;
  *(undefined4 *)(param_1 + 0x11d08) = (undefined4)local_2e0;
  *(undefined4 *)(param_1 + 0x11d0c) = local_2e0._4_4_;
  *(undefined4 *)(param_1 + 0x11d10) = (undefined4)uStack_2d8;
  *(undefined4 *)(param_1 + 0x11d14) = uStack_2d8._4_4_;
  *(undefined4 *)(param_1 + 0x11d18) = (undefined4)local_2d0;
  *(undefined4 *)(param_1 + 0x11d1c) = local_2d0._4_4_;
  *(undefined8 *)(param_1 + 0x11d20) = uStack_2c8;
  *(undefined1 *)(param_1 + 0x11d30) = uVar9;
  if ((undefined8 *)(param_1 + 0x11d38) != &local_2b0) {
    FUN_144807229(*(undefined8 *)(param_1 + 0x11d38),*(undefined4 *)(param_1 + 0x11d40));
    if (*(longlong *)(param_1 + 0x11d38) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x11d38) = local_2b0;
    local_2b0 = 0;
    *(undefined4 *)(param_1 + 0x11d40) = (undefined4)uStack_2a8;
    *(undefined4 *)(param_1 + 0x11d44) = uStack_2a8._4_4_;
    uStack_2a8 = 0;
  }
  lVar13 = local_1d8;
  if ((undefined1 *)(param_1 + 0x11d50) != local_298) {
    if (local_1d8 == 0) {
      memcpy((undefined1 *)(param_1 + 0x11d50),local_298,0xc0);
    }
    if (*(longlong *)(param_1 + 0x11e10) != 0) {
      FUN_1400020a8();
      lVar13 = local_1d8;
    }
    *(longlong *)(param_1 + 0x11e10) = lVar13;
    local_1d8 = 0;
    *(undefined4 *)(param_1 + 0x11e20) = (undefined4)local_1c8;
    *(undefined4 *)(param_1 + 0x11e24) = local_1c8._4_4_;
    local_1c8 = 0x600000000;
  }
  lVar13 = local_b8;
  if ((undefined1 *)(param_1 + 0x11e30) != local_1b8) {
    if (local_b8 == 0) {
      memcpy((undefined1 *)(param_1 + 0x11e30),local_1b8,0x100);
    }
    if (*(longlong *)(param_1 + 0x11f30) != 0) {
      FUN_1400020a8();
      lVar13 = local_b8;
    }
    *(longlong *)(param_1 + 0x11f30) = lVar13;
    local_b8 = 0;
    *(undefined4 *)(param_1 + 0x11f40) = (undefined4)local_a8;
    *(undefined4 *)(param_1 + 0x11f44) = local_a8._4_4_;
    local_a8 = 0x800000000;
  }
  *(undefined8 *)(param_1 + 0x11f50) = local_98;
  *(undefined4 *)(param_1 + 0x11f60) = local_88;
  if ((undefined1 *)(param_1 + 0x11a00) != local_5e8) {
    if (*(longlong *)(param_1 + 0x11f68) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x11f68) = local_80;
    local_80 = 0;
    *(undefined4 *)(param_1 + 0x11f70) = (undefined4)uStack_78;
    *(undefined4 *)(param_1 + 0x11f74) = uStack_78._4_4_;
    uStack_78 = 0;
  }
  if ((undefined8 *)(param_1 + 0x11f78) != &local_70) {
    FUN_144807285(*(undefined8 *)(param_1 + 0x11f78));
    if (*(longlong *)(param_1 + 0x11f78) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x11f78) = local_70;
    local_70 = 0;
    *(undefined4 *)(param_1 + 0x11f80) = (undefined4)uStack_68;
    *(undefined4 *)(param_1 + 0x11f84) = uStack_68._4_4_;
    uStack_68 = 0;
  }
  FUN_144807176(local_5e8);
  memset((void *)(param_1 + 0x118e0),0,0x9c);
  *(undefined4 *)(param_1 + 0x1197c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x11980) = 0;
  *(undefined8 *)(param_1 + 0x11988) = 0;
  *(undefined8 *)(param_1 + 0x11990) = 0;
  *(undefined8 *)(param_1 + 0x11998) = 0;
  *(undefined8 *)(param_1 + 0x119a0) = 0;
  *(undefined8 *)(param_1 + 0x119a8) = 0;
  *(undefined8 *)(param_1 + 0x119b0) = 0;
  *(undefined8 *)(param_1 + 0x119b8) = 0;
  *(undefined8 *)(param_1 + 0x119c0) = 0;
  *(undefined8 *)(param_1 + 0x119c8) = 0;
  *(undefined8 *)(param_1 + 0x119d0) = 0;
  *(undefined8 *)(param_1 + 0x119d8) = 0;
  *(undefined8 *)(param_1 + 0x119e0) = 0;
  *(undefined8 *)(param_1 + 0x119e8) = 0;
  *(undefined8 *)(param_1 + 0x119f0) = 0;
  *(undefined4 *)(param_1 + 0x13b84) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x13ad8) = 0;
  memset((void *)(param_1 + 0x12020),0,0x4a8);
  if ((local_50 ^ (ulonglong)auStack_608) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ec256 FUN_1400ec256 body=99 status=ok
// SIG undefined FUN_1400ec256(void)

void FUN_1400ec256(longlong *param_1)

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



// FUNCTION 1400ec2b9 FUN_1400ec2b9 body=121 status=ok
// SIG undefined FUN_1400ec2b9(void)

undefined8 FUN_1400ec2b9(int param_1)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca27de8;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),2 < param_1 && *(int *)(lVar2 + uVar6 * 4) != 0);
}



// FUNCTION 1400ec332 FUN_1400ec332 body=180 status=ok
// SIG undefined FUN_1400ec332(void)

void FUN_1400ec332(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  
  param_1[0x14] = param_3;
  param_1[0x15] = 0;
  lVar3 = (**(code **)(*param_1 + 8))();
  do {
    *(byte *)(lVar3 + 0x29) = *(byte *)(lVar3 + 0x29) & 0xfd;
    lVar3 = *(longlong *)(lVar3 + 0x88);
  } while (lVar3 != 0);
  FUN_140090594(param_1,param_2);
  plVar1 = param_1 + 0x12;
  FUN_1400ec3e6(plVar1,param_4 + 7U >> 3 & 0xffffffff);
  lVar3 = param_1[0x13];
  uVar2 = (uint)(param_3 + 7U >> 3);
  *(uint *)(param_1 + 0x13) = (int)lVar3 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0x9c) - (int)lVar3) < uVar2) {
    FUN_1447403be(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001400ec3d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x178))(param_2,*plVar1,param_3);
  return;
}



// FUNCTION 1400ec3e6 FUN_1400ec3e6 body=42 status=ok
// SIG undefined FUN_1400ec3e6(void)

void FUN_1400ec3e6(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_144893a1c();
    return;
  }
  return;
}



// FUNCTION 1400ec412 FUN_1400ec412 body=102 status=ok
// SIG undefined FUN_1400ec412(void)

void FUN_1400ec412(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_40;
  int local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_5;
  uStack_40 = param_6;
  FUN_1400ec4d6();
  FUN_1400ec47a(param_1,local_2c);
  if (local_2c[0] == 0) {
    *param_4 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ec47a FUN_1400ec47a body=92 status=ok
// SIG undefined FUN_1400ec47a(void)

undefined8 * FUN_1400ec47a(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x220))();
  if (lVar1 == 0) {
    if (param_1[0x12] != 0) {
      FUN_140083ea4(param_1[0x12],param_2,0);
      return param_2;
    }
    *(undefined4 *)(param_2 + 1) = DAT_14cae70c0;
    uVar2 = DAT_14cae70b8;
  }
  else {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1400ec4d6 FUN_1400ec4d6 body=238 status=ok
// SIG undefined FUN_1400ec4d6(void)

void FUN_1400ec4d6(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_3 = 1;
  *param_4 = 0;
  *param_5 = 1;
  *param_6 = 1;
  if (*(int *)(param_1 + 0x2a8) < 1) {
    *param_4 = 1;
    *param_5 = 0;
    *param_6 = 0;
  }
  else {
    lVar1 = 0;
    lVar2 = 0;
    do {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + lVar1) + 8))
                (*(longlong *)(param_1 + 0x2a0) + lVar1,&local_4c,param_2);
      if ((local_4c == 0) || (*param_4 = 1, local_4c == 1)) {
        *param_3 = 0;
LAB_1400ec567:
        *param_6 = 0;
      }
      else {
        *param_5 = 0;
        if ((local_4c == 2) || (*param_3 = 0, local_4c != 3)) goto LAB_1400ec567;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x80;
    } while (lVar2 < *(int *)(param_1 + 0x2a8));
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400ec5c6 FUN_1400ec5c6 body=45 status=ok
// SIG undefined FUN_1400ec5c6(void)

int * FUN_1400ec5c6(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_144807416(param_1,param_3,param_1 + 0x68);
  iVar2 = 2;
  if (iVar1 != 4) {
    iVar2 = iVar1;
  }
  *param_2 = iVar2;
  return param_2;
}



// FUNCTION 1400ec5f4 FUN_1400ec5f4 body=21 status=ok
// SIG undefined FUN_1400ec5f4(void)

undefined8 FUN_1400ec5f4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1400ec60a FUN_1400ec60a body=168 status=ok
// SIG undefined FUN_1400ec60a(void)

void FUN_1400ec60a(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  
  FUN_1400ec6b2();
  if (*(longlong **)(param_1 + 0x148) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x78))();
    if (cVar2 != '\0') {
      FUN_143e919d6(*(undefined8 *)(param_1 + 0x148));
    }
  }
  if (*(int *)(param_1 + 0x154) != 0) {
    puVar5 = (uint *)(param_1 + 0x150);
    uVar1 = *puVar5;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar4 != 0) &&
         ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x154) &&
          ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
        uVar3 = FUN_14479d2ce(puVar5);
        cVar2 = FUN_140432338(uVar3);
        if (cVar2 != '\0') {
          uVar3 = FUN_14479d2ce(puVar5);
          FUN_143e91a78(uVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1400ec6b2 FUN_1400ec6b2 body=513 status=ok
// SIG undefined FUN_1400ec6b2(void)

void FUN_1400ec6b2(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  LARGE_INTEGER *local_60;
  code *local_58;
  code *local_50;
  LARGE_INTEGER local_48;
  undefined8 uStack_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)(param_1 + 0x178);
  if (lVar4 == 0) goto LAB_1400ec744;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(lVar4 + 0x1c);
    if (2 < iVar1) {
      bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar3 < 3) {
        local_48.QuadPart = 0x20100000001;
        uStack_40 = 0x30100000101;
        local_38 = DAT_14c7585c8;
        local_34 = DAT_14c7585c8 | 0x200;
        local_30 = DAT_14c7585c8 | 0x100;
        local_2c = DAT_14c7585c8 | 0x300;
        local_28 = 0;
        uStack_24 = 0x200;
        uStack_20 = 0x100;
        uStack_1c = 0x300;
        if (*(byte *)((longlong)&local_48 + (ulonglong)(iVar1 - 3) * 4) == bVar3)
        goto LAB_1400ec8a7;
      }
    }
    QueryPerformanceCounter(&local_48);
    uStack_40 = 0xffffffffffffffff;
    FUN_140056092(lVar4,&local_48);
  }
  else {
LAB_1400ec8a7:
    FUN_140082318(lVar4);
  }
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_60 = &local_48;
    local_48.QuadPart = (LONGLONG)FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1489c8acb;
    local_70 = &LAB_146027b0e;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000006;
    local_90 = 8;
    local_98 = 0x128;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar2 = DAT_14cb907b8;
  lVar4 = DAT_14cb907b8[0x22];
  if (lVar4 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    lVar4 = plVar2[0x22];
  }
  if (*(char *)(lVar4 + 0x73) == '\x01') {
    FUN_1489cc00a(&local_48);
    if ((code *)local_48.QuadPart != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1400ec744:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ec8c0 FUN_1400ec8c0 body=247 status=ok
// SIG undefined FUN_1400ec8c0(void)

bool FUN_1400ec8c0(longlong *param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  
  bVar5 = *(byte *)((longlong)param_1 + 0x62c) & 4;
  bVar1 = (bool)(*(char *)((longlong)param_1 + 0x9e) < '\0' & bVar5 >> 2);
  if ((bVar5 == 0) && (*(char *)((longlong)param_1 + 0x9e) < '\0')) {
    if (*(code **)(param_1[0x55] + 0x58) == (code *)&LAB_1457ba96c) {
      uVar2 = (uint)*(byte *)((longlong)param_1 + 0x2e9);
    }
    else {
      uVar2 = (**(code **)(param_1[0x55] + 0x58))(param_1 + 0x55);
    }
    bVar1 = true;
    if ((int)uVar2 < 2) {
      lVar3 = *param_1;
      if (*(code **)(lVar3 + 0x558) == (code *)&LAB_1448a8146) {
        plVar4 = param_1 + 0x8f;
      }
      else {
        plVar4 = (longlong *)(**(code **)(lVar3 + 0x558))(param_1);
        lVar3 = *param_1;
      }
      if (*(code **)(lVar3 + 0x570) == (code *)&LAB_1448a814e) {
        if ((param_1[0x15] != 0) && ((*(byte *)(param_1[0x15] + 0x65) & 1) == 0)) {
          return false;
        }
        uVar2 = (uint)*(byte *)((longlong)param_1 + 0x427);
      }
      else {
        uVar2 = (**(code **)(lVar3 + 0x570))(param_1);
      }
      bVar1 = false;
      if (((uVar2 < 6) && ((0x2aU >> (uVar2 & 0x1f) & 1) != 0)) &&
         (bVar1 = true, *(char *)((longlong)plVar4 + 2) != '\x02')) {
        bVar1 = *(char *)((longlong)plVar4 + 6) == '\x02';
      }
    }
  }
  return bVar1;
}



// FUNCTION 1400ec9b8 FUN_1400ec9b8 body=40 status=ok
// SIG undefined FUN_1400ec9b8(void)

undefined1 FUN_1400ec9b8(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xe48))();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = *(undefined1 *)((longlong)param_1 + 0x669);
  }
  return uVar2;
}



// FUNCTION 1400ec9ea FUN_1400ec9ea body=41 status=ok
// SIG undefined FUN_1400ec9ea(void)

void FUN_1400ec9ea(longlong param_1,undefined8 param_2)

{
  FUN_1400eca14();
  FUN_1400ecb48(param_1 + 0x3d0,param_2);
  return;
}



// FUNCTION 1400eca14 FUN_1400eca14 body=137 status=ok
// SIG undefined FUN_1400eca14(void)

void FUN_1400eca14(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    FUN_1400eca9e(param_1 + 0x380);
    plVar1 = (longlong *)FUN_14005b71c(param_2);
    if (plVar1 != (longlong *)0x0) {
      local_28 = *(undefined8 *)(*(longlong *)(*plVar1 + 0x260) + (longlong)(int)plVar1[1] * 8);
      local_20 = &local_28;
      FUN_1400ecbf0(param_1 + 0x430);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400eca9e FUN_1400eca9e body=169 status=ok
// SIG undefined FUN_1400eca9e(void)

undefined8 FUN_1400eca9e(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x150) == param_2) {
          FUN_14091bfc4(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x150 + *param_1 + 0x140);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1400ecb48 FUN_1400ecb48 body=168 status=ok
// SIG undefined FUN_1400ecb48(void)

undefined8 FUN_1400ecb48(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x160) == param_2) {
          FUN_147ca4bd8(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x160 + *param_1 + 0x158);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1400ecbf0 FUN_1400ecbf0 body=373 status=ok
// SIG undefined FUN_1400ecbf0(void)

int FUN_1400ecbf0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = *(int *)(param_1 + 1);
  lVar4 = (longlong)iVar1;
  iVar5 = 0;
  if (lVar4 != 0) {
    piVar2 = (int *)*param_1;
    iVar5 = 0;
    if (*piVar2 == *(int *)*param_2) {
      bVar10 = piVar2[1] == ((int *)*param_2)[1];
    }
    else {
      bVar10 = false;
    }
    iVar9 = 0;
    do {
      iVar7 = iVar9;
      if (iVar9 + 1 < iVar1) {
        do {
          lVar8 = (longlong)iVar7 + 2;
          bVar3 = true;
          lVar6 = -1;
          do {
            if (piVar2[lVar8 * 2 + -2] == *(int *)*param_2) {
              if ((bool)(piVar2[lVar8 * 2 + -1] == ((int *)*param_2)[1] ^ bVar10)) {
                iVar9 = iVar7 - (int)lVar6;
                break;
              }
            }
            else if (bVar10) {
              if (!bVar3) goto LAB_1400eccdc;
              iVar7 = iVar7 - (int)lVar6;
              goto LAB_1400eccf6;
            }
            bVar3 = lVar8 < lVar4;
            lVar6 = lVar6 + -1;
            lVar8 = lVar8 + 1;
            iVar9 = iVar1;
          } while (iVar7 - lVar4 != lVar6);
          if (!bVar10) break;
          iVar7 = iVar9;
          if (!bVar3) goto LAB_1400eccdc;
LAB_1400eccf6:
          bVar10 = false;
          bVar3 = false;
          iVar9 = iVar7 + 1;
        } while (iVar7 + 1 < iVar1);
      }
      else {
        if (bVar10) break;
        bVar3 = false;
        iVar9 = iVar9 + 1;
      }
      if (iVar5 != iVar7) {
        memmove(piVar2 + (longlong)iVar5 * 2,piVar2 + (longlong)iVar7 * 2,
                (longlong)(iVar9 - iVar7) << 3);
      }
      iVar5 = iVar5 + (iVar9 - iVar7);
      bVar10 = true;
    } while (bVar3);
LAB_1400eccdc:
    *(int *)(param_1 + 1) = iVar5;
    iVar5 = iVar1 - iVar5;
  }
  return iVar5;
}



// FUNCTION 1400ecd66 FUN_1400ecd66 body=48 status=ok
// SIG undefined FUN_1400ecd66(void)

void FUN_1400ecd66(longlong *param_1)

{
  FUN_1400ecd98();
  (**(code **)(*param_1 + 0x670))(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0001400ecd8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x678))(param_1);
  return;
}



// FUNCTION 1400ecd98 FUN_1400ecd98 body=136 status=ok
// SIG undefined FUN_1400ecd98(void)

void FUN_1400ecd98(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x4fc);
  FUN_140255aed(param_1[0x9e],(int)param_1[0x9f]);
  *(undefined4 *)(param_1 + 0x9f) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x4fc) != 0)) {
    FUN_1488ca408(param_1 + 0x9e,0);
  }
  if (param_1[0x7e] != 0) {
    uVar2 = (**(code **)(*param_1 + 0x660))(param_1);
    FUN_140255853(param_1 + 0x7e,uVar2,0,param_1 + 0x9e);
    return;
  }
  return;
}



// FUNCTION 1400ece20 FUN_1400ece20 body=3 status=ok
// SIG undefined FUN_1400ece20(void)

undefined8 FUN_1400ece20(void)

{
  return 0;
}



// FUNCTION 1400ece2a FUN_1400ece2a body=131 status=ok
// SIG undefined FUN_1400ece2a(void)

void FUN_1400ece2a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c65c56(param_1 + 0x3f0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x18))(local_28,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400eceae FUN_1400eceae body=143 status=ok
// SIG undefined FUN_1400eceae(void)

void FUN_1400eceae(longlong *param_1,ulonglong param_2)

{
  FUN_1400ecf3e();
  if ((param_2 & 2) != 0) {
    if (0 < (int)param_1[0x117]) {
      FUN_14078b280(param_1 + 0xaf,param_1,param_1 + 0x116);
      *(undefined4 *)(param_1 + 0x117) = 0;
      if (*(int *)((longlong)param_1 + 0x8bc) != 0) {
        FUN_140b520ec(param_1 + 0x116,0);
      }
    }
    if (((char)param_1[0x103] == '\x01') && (*(char *)((longlong)param_1 + 0x819) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x819) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001400ecf02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x6b0))(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1400ecf3e FUN_1400ecf3e body=136 status=ok
// SIG undefined FUN_1400ecf3e(void)

void FUN_1400ecf3e(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((longlong)*(int *)(param_1 + 0x4f8) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x4f0);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x4f8) * 2;
    do {
      plVar2 = (longlong *)*puVar5;
      plVar3 = (longlong *)puVar5[1];
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2);
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
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  return;
}



// FUNCTION 1400ecfc6 FUN_1400ecfc6 body=219 status=ok
// SIG undefined FUN_1400ecfc6(void)

void FUN_1400ecfc6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = *param_3;
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4))) {
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xb0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 0x28);
        if (*plVar3 == lVar1) {
          if (((ulonglong)(plVar3 + 1) & 0xfffffffffffffff7) != 0) {
            *param_2 = plVar3[1];
            plVar3 = plVar3 + 2;
            goto LAB_1400ecfdc;
          }
          break;
        }
        iVar6 = (int)plVar3[4];
      } while (iVar6 != -1);
    }
  }
  *param_2 = *(longlong *)(param_1 + 0x58);
  plVar3 = (longlong *)(param_1 + 0x60);
LAB_1400ecfdc:
  *(int *)(param_2 + 1) = (int)*plVar3;
  param_2[2] = 0;
  return;
}


