// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e45812 FUN_140e45812 body=55 status=ok
// SIG undefined FUN_140e45812(void)

void FUN_140e45812(longlong *param_1)

{
  FUN_140e4584a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e4584a FUN_140e4584a body=123 status=ok
// SIG undefined FUN_140e4584a(void)

void FUN_140e4584a(longlong param_1,int param_2)

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



// FUNCTION 140e458c6 FUN_140e458c6 body=127 status=ok
// SIG undefined FUN_140e458c6(void)

void FUN_140e458c6(longlong param_1)

{
  undefined1 auStack_468 [40];
  undefined1 local_440 [1064];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_468;
  FUN_140e45c26(local_440,param_1);
  FUN_1457b7582(local_440);
  FUN_140e45946(local_440);
  FUN_140e45b7c(param_1);
  *(byte *)(param_1 + 0x248) = *(byte *)(param_1 + 0x248) | 4;
  FUN_1447f69b6(param_1 + 0x208);
  if ((local_18 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e45946 FUN_140e45946 body=106 status=ok
// SIG undefined FUN_140e45946(void)

void FUN_140e45946(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b42ad60;
  FUN_1457b75a4();
  FUN_140e459b0(param_1 + 0x65);
  FUN_140e459ee(param_1 + 0x45);
  FUN_140e45a2c(param_1 + 0x1b);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e459b0 FUN_140e459b0 body=61 status=ok
// SIG undefined FUN_140e459b0(void)

void FUN_140e459b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar1 = param_1;
  }
  FUN_140e45ab4(lVar1,*(undefined4 *)(param_1 + 0xf8));
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e459ee FUN_140e459ee body=61 status=ok
// SIG undefined FUN_140e459ee(void)

void FUN_140e459ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar1 = param_1;
  }
  FUN_140e45b18(lVar1,*(undefined4 *)(param_1 + 0xf8));
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e45a2c FUN_140e45a2c body=61 status=ok
// SIG undefined FUN_140e45a2c(void)

void FUN_140e45a2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar1 = param_1;
  }
  FUN_140e45a69(lVar1,*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e45a69 FUN_140e45a69 body=75 status=ok
// SIG undefined FUN_140e45a69(void)

void FUN_140e45a69(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e45ab4 FUN_140e45ab4 body=100 status=ok
// SIG undefined FUN_140e45ab4(void)

void FUN_140e45ab4(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      if ((int)plVar2[1] == 0) {
LAB_140e45ad4:
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
          goto LAB_140e45ad4;
        }
      }
      plVar2 = plVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e45b18 FUN_140e45b18 body=100 status=ok
// SIG undefined FUN_140e45b18(void)

void FUN_140e45b18(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      if ((int)plVar2[1] == 0) {
LAB_140e45b31:
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
          goto LAB_140e45b31;
        }
      }
      plVar2 = plVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e45b7c FUN_140e45b7c body=170 status=ok
// SIG undefined FUN_140e45b7c(void)

void FUN_140e45b7c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
    if (lVar2 != 0) {
      FUN_14120aebe(lVar2,param_1);
      if ((((*(byte *)(param_1 + 0x248) & 1) == 0) && (*(longlong *)(param_1 + 0xa8) != 0)) &&
         (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xd0) != '\0')) {
        FUN_143e34104(param_1);
      }
      FUN_140898514(param_1 + 0x28,1);
      iVar1 = *(int *)(param_1 + 0xa0);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x98);
        lVar3 = 0;
        do {
          FUN_1412b449c(*(undefined8 *)(lVar2 + lVar3));
          lVar3 = lVar3 + 8;
        } while ((longlong)iVar1 * 8 != lVar3);
      }
      *(byte *)(param_1 + 0x248) = *(byte *)(param_1 + 0x248) | 2;
    }
  }
  return;
}



// FUNCTION 140e45c26 FUN_140e45c26 body=194 status=ok
// SIG undefined FUN_140e45c26(void)

undefined8 * FUN_140e45c26(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  
  *param_1 = &PTR_FUN_14b42ad60;
  param_1[1] = param_2;
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(*(longlong *)(param_2 + 0xa8) + 0xd0) != '\0';
  }
  bVar1 = *(byte *)(param_1 + 2);
  *(byte *)(param_1 + 2) = bVar1 & 0xfe | bVar2;
  *(byte *)(param_1 + 2) = (bVar1 & 0xf4 | bVar2 | *(char *)(param_2 + 0x248) * '\x02' & 2U) ^ 2;
  param_1[0x17] = 0;
  param_1[0x18] = 0xa00000000;
  param_1[0x43] = 0;
  param_1[0x44] = 0xa00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[99] = 0;
  param_1[100] = 0xa00000000;
  param_1[0x83] = 0;
  param_1[0x84] = 0xa00000000;
  if ((*(longlong *)(param_2 + 0x88) != 0) && (*(longlong **)(param_2 + 0x90) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_2 + 0x90) + 8))();
  }
  return param_1;
}



// FUNCTION 140e45ce8 FUN_140e45ce8 body=672 status=ok
// SIG undefined FUN_140e45ce8(void)

ulonglong FUN_140e45ce8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_138 [40];
  longlong local_110 [12];
  longlong local_b0;
  undefined2 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  int local_84;
  undefined2 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [32];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar4 = (longlong *)(param_1 + 0x50);
  lVar3 = *(longlong *)(param_1 + 0x58);
  if ((lVar3 == 0) || (0xfffffffd < *(int *)(param_1 + 0x60) - 1U)) {
    cVar1 = (**(code **)(*plVar4 + 8))(plVar4);
    if (cVar1 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x58);
      if (lVar3 != 0) goto LAB_140e45d28;
      goto LAB_140e45d95;
    }
  }
  else {
LAB_140e45d28:
    if (*(int *)(param_1 + 0x60) - 1U < 0xfffffffe) {
      local_110[0] = lVar3;
      lVar3 = FUN_14005effc();
      if (lVar3 == 0) {
        lVar3 = FUN_1457b760c(plVar4);
        if ((lVar3 != 0) && (cVar1 = FUN_1457b768a(*param_2,lVar3), cVar1 == '\0'))
        goto LAB_140e45d4e;
      }
      else if (lVar3 != param_2[1]) {
LAB_140e45d4e:
        uVar8 = 0;
        goto LAB_140e45d50;
      }
    }
LAB_140e45d95:
    cVar1 = (**(code **)(*plVar4 + 8))(plVar4);
    if (cVar1 != '\0') {
      param_1 = param_1 + 0x70;
      FUN_140e45f8a(local_110,param_1);
      plVar4 = (longlong *)FUN_14097d9d4(local_110[0]);
      if ((longlong)(int)plVar4[1] != 0) {
        lVar3 = (longlong)(int)plVar4[1] * 0xe8;
        param_1 = *plVar4 + 0x20;
        do {
          lVar5 = FUN_140c7c082(param_1 + -0x18);
          lVar6 = lVar5 + 0x30;
          if (lVar5 == 0) {
            lVar6 = param_1;
          }
          cVar1 = FUN_1405d595e(param_3,lVar6);
          if (cVar1 == '\0') {
            uVar8 = 0;
            goto LAB_140e45e30;
          }
          param_1 = param_1 + 0xe8;
          lVar3 = lVar3 + -0xe8;
        } while (lVar3 != 0);
      }
      puVar7 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar7 = local_60;
      }
      uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      if ((longlong)local_38 != 0) {
        lVar3 = 0;
        do {
          lVar6 = *(longlong *)(puVar7 + lVar3);
          lVar5 = FUN_140c7c082(lVar6 + 8);
          lVar6 = lVar6 + 0x20;
          if (lVar5 != 0) {
            lVar6 = lVar5 + 0x30;
          }
          uVar2 = FUN_1405d595e(param_3,lVar6);
          uVar8 = (ulonglong)uVar2;
        } while (((char)uVar2 != '\0') &&
                (bVar9 = (longlong)local_38 * 8 + -8 != lVar3, lVar3 = lVar3 + 8, bVar9));
      }
LAB_140e45e30:
      FUN_140060f6a(local_60);
      local_80 = &DAT_14a171d50;
      local_68 = 0;
      if (local_64 != 0) {
        FUN_140115c12(&local_70,0);
      }
      local_78 = 0;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      local_a0 = &DAT_14a171d50;
      local_88 = 0;
      if (local_84 != 0) {
        FUN_140115c12(&local_90,0);
      }
      local_98 = 0;
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      goto LAB_140e45d50;
    }
  }
  uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_140e45d50:
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140e45f8a FUN_140e45f8a body=161 status=ok
// SIG undefined FUN_140e45f8a(void)

undefined8 * FUN_140e45f8a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0x800000000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_140265f12();
  param_1[0xf] = &DAT_14cb83310;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = &PTR_FUN_14b1828b0;
  FUN_140265f12();
  param_1[0x13] = &DAT_14cb83310;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = &PTR_FUN_14b1828b0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x400000000;
  FUN_140e4602c(param_1);
  return param_1;
}



// FUNCTION 140e4602c FUN_140e4602c body=542 status=ok
// SIG undefined FUN_140e4602c(void)

void FUN_140e4602c(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  
  lVar3 = FUN_140831778();
  plVar4 = (longlong *)FUN_14097d9d4(*param_1);
  if ((longlong)(int)plVar4[1] == 0) {
    return;
  }
  plVar11 = (longlong *)*plVar4;
  plVar4 = plVar11 + (longlong)(int)plVar4[1] * 0x1d;
LAB_140e46084:
  lVar10 = *plVar11;
  puVar5 = param_1 + 1;
  if (((lVar10 == DAT_14cb82348) || (puVar5 = param_1 + 2, lVar10 == DAT_14cb82350)) ||
     (puVar5 = param_1 + 3, lVar10 == DAT_14cb82358)) goto LAB_140e460b9;
  cVar2 = FUN_140e4624a(plVar11);
  if (cVar2 != '\0') {
    if (*(int *)(lVar3 + 0x108) != *(int *)(lVar3 + 0x134)) {
      lVar10 = *plVar11;
      uVar1 = (uint)((ulonglong)lVar10 >> 0x10);
      uVar8 = (uint)lVar10 & 0xffff;
      lVar6 = *(longlong *)(lVar3 + 0x140);
      if (*(longlong *)(lVar3 + 0x140) == 0) {
        lVar6 = lVar3 + 0x138;
      }
      iVar9 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(lVar3 + 0x148) - 1U &
                               (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar8) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          lVar6 = *(longlong *)(lVar3 + 0x100) + (longlong)iVar9 * 0x68;
          if (*(longlong *)(*(longlong *)(lVar3 + 0x100) + (longlong)iVar9 * 0x68) == lVar10) {
            if ((((lVar6 + 8U & 0xfffffffffffffff7) != 0) && (*(longlong *)(lVar6 + 0x40) != 0)) &&
               ((longlong)*(int *)(lVar6 + 0x50) != 0)) {
              lVar10 = 0;
              goto LAB_140e461a9;
            }
            break;
          }
          iVar9 = *(int *)(lVar6 + 0x60);
        } while (iVar9 != -1);
      }
    }
    goto LAB_140e46162;
  }
  goto LAB_140e460bc;
  while (lVar10 = lVar10 + 8, (longlong)*(int *)(lVar6 + 0x50) * 8 != lVar10) {
LAB_140e461a9:
    if (*(longlong *)(*(longlong *)(lVar6 + 0x48) + lVar10) != 0) {
      lVar10 = FUN_140c7c082(plVar11 + 1);
      plVar7 = plVar11 + 4;
      if (lVar10 != 0) {
        plVar7 = (longlong *)(lVar10 + 0x30);
      }
      if ((plVar7[1] == 0) || ((longlong)(int)plVar7[3] == 0)) goto LAB_140e4620c;
      lVar10 = 0;
      goto LAB_140e461f8;
    }
  }
  goto LAB_140e46162;
  while (lVar10 = lVar10 + 8, (longlong)(int)plVar7[3] * 8 != lVar10) {
LAB_140e461f8:
    if (*(longlong *)(plVar7[2] + lVar10) != 0) goto LAB_140e46162;
  }
LAB_140e4620c:
  FUN_1405dc634(param_1 + 0xe,lVar6 + 0x38);
LAB_140e46162:
  iVar9 = *(int *)(param_1 + 0xd);
  *(uint *)(param_1 + 0xd) = iVar9 + 1U;
  if (*(uint *)((longlong)param_1 + 0x6c) < iVar9 + 1U) {
    FUN_1488d28b2(param_1 + 4,(longlong)iVar9);
  }
  puVar5 = (undefined8 *)param_1[0xc];
  if ((undefined8 *)param_1[0xc] == (undefined8 *)0x0) {
    puVar5 = param_1 + 4;
  }
  puVar5 = puVar5 + iVar9;
LAB_140e460b9:
  *puVar5 = plVar11;
LAB_140e460bc:
  plVar11 = plVar11 + 0x1d;
  if (plVar11 == plVar4) {
    return;
  }
  goto LAB_140e46084;
}



// FUNCTION 140e4624a FUN_140e4624a body=196 status=ok
// SIG undefined FUN_140e4624a(void)

undefined1 FUN_140e4624a(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = FUN_140831778();
  if (*(int *)(lVar3 + 0x108) != *(int *)(lVar3 + 0x134)) {
    lVar1 = *param_1;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = lVar3 + 0x138;
    if (*(longlong *)(lVar3 + 0x140) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x140);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar3 + 0x148) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      while (lVar4 = *(longlong *)(lVar3 + 0x100) + (longlong)iVar6 * 0x68,
            *(longlong *)(*(longlong *)(lVar3 + 0x100) + (longlong)iVar6 * 0x68) != lVar1) {
        iVar6 = *(int *)(lVar4 + 0x60);
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (lVar4 == 0) {
        return 0;
      }
      if (lVar4 == -8) {
        return 0;
      }
      return *(undefined1 *)(lVar4 + 0x58);
    }
  }
  return 0;
}



// FUNCTION 140e4630e FUN_140e4630e body=48 status=ok
// SIG undefined FUN_140e4630e(void)

void FUN_140e4630e(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  FUN_140e4633e(param_1,param_2);
  return;
}



// FUNCTION 140e4633e FUN_140e4633e body=512 status=ok
// SIG undefined FUN_140e4633e(void)

void FUN_140e4633e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  
  FUN_1448284b2();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  if ((int)param_2[8] < 0x1c4) {
    iVar12 = (int)param_1[0xc5];
    if (*(char *)((longlong)param_1 + 0x695) == '\x01') {
      lVar6 = param_1[0xc4];
      lVar11 = ((longlong)iVar12 + -1) * 0x58;
      pdVar2 = (double *)(lVar6 + 8 + lVar11);
      if ((*(double *)(lVar6 + 8) == *pdVar2) && (!NAN(*(double *)(lVar6 + 8)) && !NAN(*pdVar2))) {
        lVar11 = lVar11 + lVar6;
        pdVar2 = (double *)(lVar11 + 0x10);
        if ((*(double *)(lVar6 + 0x10) == *pdVar2) &&
           (!NAN(*(double *)(lVar6 + 0x10)) && !NAN(*pdVar2))) {
          pdVar2 = (double *)(lVar11 + 0x18);
          if ((*(double *)(lVar6 + 0x18) == *pdVar2) &&
             (!NAN(*(double *)(lVar6 + 0x18)) && !NAN(*pdVar2))) {
            iVar12 = (int)((longlong)iVar12 + -1);
            *(int *)(param_1 + 0xc5) = iVar12;
          }
        }
      }
    }
    FUN_147a276fa(param_1 + 199,iVar12);
    plVar1 = param_1 + 0xca;
    FUN_147a276ce(plVar1,iVar12);
    if (0 < iVar12) {
      do {
        iVar5 = (int)param_1[200];
        *(uint *)(param_1 + 200) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x644) < iVar5 + 1U) {
          FUN_147501e1a(param_1 + 199,iVar5);
        }
        lVar6 = param_1[199];
        lVar11 = (longlong)iVar5 * 0x80;
        *(undefined4 *)(lVar6 + lVar11) = 0;
        uVar7 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
        puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar11);
        *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
        puVar3[1] = uVar7;
        uVar7 = DAT_14c8463d8;
        puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar11);
        *puVar3 = DAT_14c8463d0;
        puVar3[1] = uVar7;
        uVar7 = DAT_14c8463d8;
        puVar3 = (undefined8 *)(lVar6 + 0x30 + lVar11);
        *puVar3 = DAT_14c8463d0;
        puVar3[1] = uVar7;
        uVar7 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
        puVar3 = (undefined8 *)(lVar6 + 0x40 + lVar11);
        *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
        puVar3[1] = uVar7;
        uVar7 = DAT_14c8463d8;
        puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar11);
        *puVar3 = DAT_14c8463d0;
        puVar3[1] = uVar7;
        uVar10 = DAT_14c8463e8._4_4_;
        uVar9 = (undefined4)DAT_14c8463e8;
        uVar8 = DAT_14c8463e0._4_4_;
        puVar4 = (undefined4 *)(lVar6 + 0x60 + lVar11);
        *puVar4 = (undefined4)DAT_14c8463e0;
        puVar4[1] = uVar8;
        puVar4[2] = uVar9;
        puVar4[3] = uVar10;
        *(undefined1 *)(lVar6 + 0x70 + lVar11) = 1;
        iVar5 = (int)param_1[0xcb];
        *(uint *)(param_1 + 0xcb) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x65c) < iVar5 + 1U) {
          FUN_140924c58(plVar1,iVar5);
        }
        lVar6 = *plVar1;
        lVar11 = (longlong)iVar5 * 0x58;
        *(undefined4 *)(lVar6 + lVar11) = 0;
        *(undefined8 *)(lVar6 + 8 + lVar11) = 0x3ff0000000000000;
        *(undefined8 *)(lVar6 + 0x10 + lVar11) = 0x3ff0000000000000;
        *(undefined8 *)(lVar6 + 0x18 + lVar11) = 0x3ff0000000000000;
        uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar11);
        *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        puVar3[1] = uVar7;
        *(undefined8 *)(lVar6 + 0x30 + lVar11) = DAT_14c8464f0;
        uVar10 = DAT_14c8464e8._4_4_;
        uVar9 = (undefined4)DAT_14c8464e8;
        uVar8 = DAT_14c8464e0._4_4_;
        puVar4 = (undefined4 *)(lVar6 + 0x38 + lVar11);
        *puVar4 = (undefined4)DAT_14c8464e0;
        puVar4[1] = uVar8;
        puVar4[2] = uVar9;
        puVar4[3] = uVar10;
        *(undefined8 *)(lVar6 + 0x48 + lVar11) = DAT_14c8464f0;
        *(undefined1 *)(lVar6 + 0x50 + lVar11) = 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x000140e46537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa38))(param_1);
    return;
  }
  return;
}



// FUNCTION 140e46544 FUN_140e46544 body=57 status=ok
// SIG undefined FUN_140e46544(void)

void FUN_140e46544(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ad08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ad08 = FUN_140002ddd(FUN_1464ccc9b,uVar1,L"GbxBrainAspect_MaxChildActors");
  }
  return;
}



// FUNCTION 140e4657e FUN_140e4657e body=40 status=ok
// SIG undefined FUN_140e4657e(void)

undefined8 FUN_140e4657e(undefined8 param_1,int param_2)

{
  FUN_140e465a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e465a6 FUN_140e465a6 body=185 status=ok
// SIG undefined FUN_140e465a6(void)

void FUN_140e465a6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2c2840;
  param_1[5] = &PTR_FUN_14b2c3240;
  param_1[6] = &PTR_LAB_14b2c3280;
  param_1[0x55] = &PTR_FUN_14b2c32d0;
  param_1[0x56] = &PTR_FUN_14b2c3350;
  param_1[0x57] = &PTR_FUN_14b2c3360;
  if (param_1[0xcc] != 0) {
    FUN_1400020a8();
  }
  FUN_1447cd778(param_1[0xca],*(undefined4 *)(param_1 + 0xcb));
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140e4666e FUN_140e4666e body=31 status=ok
// SIG undefined FUN_140e4666e(void)

undefined8 FUN_140e4666e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e4668e FUN_140e4668e body=12 status=ok
// SIG undefined FUN_140e4668e(void)

void FUN_140e4668e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140e46697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140e4669a FUN_140e4669a body=31 status=ok
// SIG undefined FUN_140e4669a(void)

undefined8 FUN_140e4669a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e466c8 FUN_140e466c8 body=158 status=ok
// SIG undefined FUN_140e466c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e466c8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b80d9f0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 140e46776 FUN_140e46776 body=535 status=ok
// SIG undefined FUN_140e46776(void)

void FUN_140e46776(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_f8 [40];
  float local_d0;
  undefined4 uStack_cc;
  ushort local_b8;
  byte local_b0;
  char local_a8 [16];
  longlong *local_98;
  undefined4 local_80 [2];
  char local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar8 = false;
  local_a8[0] = '\0';
  local_80[0] = 0;
  FUN_1456bb102(local_a8,param_3);
  local_78 = '\0';
  local_50[0] = 0;
  if (param_3 != 0) {
    bVar8 = *(char *)(param_3 + 0x178) == '\x03';
  }
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_2;
    lVar7 = 0;
    do {
      cVar2 = *(char *)(lVar3 + 0x15 + lVar7);
      if ((cVar2 == '\x01') || ((cVar2 == '\x02' && (bVar8)))) {
        local_d0 = *(float *)(lVar3 + 0xc + lVar7);
        auVar9 = ZEXT416((uint)local_d0);
        cVar2 = *(char *)(lVar3 + 0x14 + lVar7);
        if (cVar2 == '\x02') {
LAB_140e4697c:
          auVar9 = roundps(auVar9,ZEXT416(auVar9._0_4_),1);
          local_d0 = auVar9._0_4_;
        }
        else if (cVar2 == '\x03') {
          auVar9 = roundps(auVar9,ZEXT416((uint)local_d0),2);
          local_d0 = auVar9._0_4_;
        }
        else if (cVar2 == '\x01') {
          auVar9 = ZEXT416((uint)(local_d0 + 0.5));
          goto LAB_140e4697c;
        }
        local_b8 = 4;
        local_b0 = 3;
        FUN_140e4698e(*(undefined8 *)(lVar3 + lVar7),local_a8,&local_d0);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pfVar6 = &local_d0;
          if (0x18 < local_b8) {
            pfVar6 = (float *)CONCAT44(uStack_cc,local_d0);
          }
          (*pcVar4)(pfVar6);
        }
        if (0x18 < local_b8) {
          FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
        }
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)(int)lVar5 * 0x18 != lVar7);
  }
  FUN_1448173f8(local_50);
  if (local_78 != '\0') {
    if (local_78 == '\x01') {
      local_70 = 0;
    }
    else if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    local_78 = '\0';
  }
  FUN_1448173f8(local_80);
  if ((local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e4698e FUN_140e4698e body=327 status=ok
// SIG undefined FUN_140e4698e(void)

ulonglong FUN_140e4698e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [48];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x30);
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != (longlong *)0x0) {
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
    }
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),plVar3 != (longlong *)0x0);
    if (plVar3 != (longlong *)0x0) {
      FUN_1400606f6(local_88,param_1,param_2);
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_88;
      }
      if ((longlong)local_50 == 0) {
        local_50 = 0;
      }
      else {
        lVar5 = (longlong)local_50 * 0x30;
        do {
          (**(code **)(*plVar3 + 0x50))(plVar3,param_1,puVar7,param_3);
          puVar7 = puVar7 + 0x30;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
      }
      puVar7 = local_88;
      if (local_58 != (undefined1 *)0x0) {
        puVar7 = local_58;
      }
      FUN_1446fdf58(puVar7,local_50);
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
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
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140e46ad6 FUN_140e46ad6 body=2417 status=ok
// SIG undefined FUN_140e46ad6(void)

ulonglong FUN_140e46ad6(longlong *param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  code *pcVar1;
  void *_Src;
  float *pfVar2;
  char cVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  float *pfVar8;
  undefined *puVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  undefined8 *puVar12;
  byte bVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  float *local_88;
  float *local_80;
  char local_70;
  float local_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar3 = (**(code **)(*param_1 + 0x10))();
  if (((cVar3 != '\0') && (FUN_1400e1dbc(param_1,&local_88), local_70 == '\x01')) &&
     (local_80 != (float *)0x0)) {
    (**(code **)(*param_1 + 0x98))(param_1,&local_88);
    pfVar8 = local_88;
    if (local_88 != (float *)0x0) {
      puVar9 = *(undefined **)(local_88 + 2);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
      {
        local_98 = FUN_1446ddbd2();
        local_90 = FUN_1403a682c;
        local_a0 = 0;
        local_a8 = 0x108001;
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
      pfVar2 = local_88;
      if (DAT_14c952a10 == 0) {
        bVar14 = puVar9 != (undefined *)0x0;
        if (puVar9 != &DAT_14c952a08 && bVar14) {
          do {
            puVar9 = *(undefined **)(puVar9 + 0x30);
            bVar14 = puVar9 != (undefined *)0x0;
            if (puVar9 == &DAT_14c952a08) break;
          } while (puVar9 != (undefined *)0x0);
        }
        if (bVar14) goto LAB_140e46ba0;
LAB_140e46d43:
        if (local_88 == (float *)0x0) goto LAB_140e46de1;
        puVar9 = *(undefined **)(local_88 + 2);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951cc8) &&
           (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
          local_98 = FUN_1446ddbd2();
          local_90 = FUN_1468d96f0;
          local_a0 = 0;
          local_a8 = 0x4008001;
          FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000);
          atexit(FUN_14281144d);
          _Init_thread_footer(&DAT_14c951cc8);
        }
        if (DAT_14c951c80 == 0) {
          bVar14 = puVar9 != (undefined *)0x0;
          if (puVar9 != &DAT_14c951c78 && bVar14) {
            do {
              puVar9 = *(undefined **)(puVar9 + 0x30);
              bVar14 = puVar9 != (undefined *)0x0;
              if (puVar9 == &DAT_14c951c78) break;
            } while (puVar9 != (undefined *)0x0);
          }
          if (!bVar14) goto LAB_140e46d94;
        }
        else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951c80) == 0) {
LAB_140e46d94:
          if (local_88 != (float *)0x0) {
            puVar9 = *(undefined **)(local_88 + 2);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1))
            {
              local_98 = FUN_1446ddbd2();
              local_90 = FUN_140dafe7a;
              local_a0 = 0;
              local_a8 = 0xc001;
              FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000);
              atexit(FUN_142829758);
              _Init_thread_footer(&DAT_14c963e88);
            }
            if (DAT_14c963e40 == 0) {
              bVar14 = puVar9 != (undefined *)0x0;
              if (puVar9 != &DAT_14c963e38 && bVar14) {
                do {
                  puVar9 = *(undefined **)(puVar9 + 0x30);
                  bVar14 = puVar9 != (undefined *)0x0;
                  if (puVar9 == &DAT_14c963e38) break;
                } while (puVar9 != (undefined *)0x0);
              }
              if (bVar14) goto LAB_140e471de;
            }
            else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c963e40) != 0) {
LAB_140e471de:
              FUN_1461dc38e(param_4,&local_68);
              pfVar8 = local_80;
              if (local_80 != &local_68) {
                _Src = (void *)CONCAT44(uStack_64,local_68);
                local_80[2] = fStack_60;
                if (fStack_60 == 0.0 && local_80[3] == 0.0) {
                  local_80[3] = 0.0;
                }
                else {
                  FUN_1446dd670(local_80,fStack_60);
                  if (fStack_60 != 0.0) {
                    memcpy(*(void **)pfVar8,_Src,(longlong)(int)fStack_60 * 2);
                  }
                }
              }
              if (CONCAT44(uStack_64,local_68) != 0) {
                FUN_1400020a8();
              }
            }
          }
          goto LAB_140e46de1;
        }
        lVar5 = *(longlong *)(pfVar2 + 0x1c);
        if ((((lVar5 == 0) || (lVar7 = FUN_144a6c4d8(), lVar7 == 0)) ||
            (*(int *)(lVar5 + 0x38) < *(int *)(lVar7 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
            lVar7 + 0x30)) {
          uVar6 = FUN_14070d842(param_4);
        }
        else {
          uVar6 = FUN_14030a32e(param_4);
        }
        FUN_14281147a(pfVar2,local_80,uVar6);
      }
      else {
        if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) == 0) goto LAB_140e46d43;
LAB_140e46ba0:
        lVar5 = FUN_140168d6e();
        uVar11 = (undefined7)((ulonglong)param_4 >> 8);
        if (*(longlong *)(pfVar8 + 0x1c) == lVar5) {
          if (*(char *)(param_4 + 8) == '\x03') {
            fVar4 = *param_4;
          }
          else {
            pfVar8 = &local_68;
            FUN_1400b56fe(pfVar8,param_4,3);
            fVar4 = 0.0;
            if (local_48 != 0) {
              fVar4 = local_68;
            }
            pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
            if (pcVar1 != (code *)0x0) {
              if (0x18 < local_50) {
                pfVar8 = (float *)CONCAT44(uStack_64,local_68);
              }
              (*pcVar1)(pfVar8);
            }
            if (0x18 < local_50) {
              FUN_1400020a8(CONCAT44(uStack_64,local_68));
            }
          }
          local_80[2] = fVar4;
          uVar10 = CONCAT71(uVar11,1);
          FUN_14020a6cc(local_80,1);
          goto LAB_140e46bd0;
        }
        lVar5 = FUN_140168da8();
        if (*(longlong *)(pfVar8 + 0x1c) == lVar5) {
          fVar4 = (float)FUN_1405d5f74(param_4);
          local_80[2] = fVar4;
          uVar10 = CONCAT71(uVar11,1);
          FUN_140841e14(local_80,1);
          goto LAB_140e46bd0;
        }
        lVar5 = FUN_14068e11a();
        if (*(longlong *)(pfVar8 + 0x1c) == lVar5) {
          FUN_144a7b7fe(param_4,&local_68);
LAB_140e4741e:
          *(undefined8 *)(local_80 + 4) = local_58;
          *(ulonglong *)local_80 = CONCAT44(uStack_64,local_68);
          *(ulonglong *)(local_80 + 2) = CONCAT44(uStack_5c,fStack_60);
        }
        else {
          lVar5 = FUN_14016b782();
          if (*(longlong *)(pfVar8 + 0x1c) == lVar5) {
            FUN_142b38d56(param_4,&local_68);
            goto LAB_140e4741e;
          }
          lVar5 = FUN_1403f613c();
          if (*(longlong *)(pfVar8 + 0x1c) != lVar5) goto LAB_140e46ebe;
          FUN_140b013e6(param_4,&local_68);
          *(ulonglong *)local_80 = CONCAT44(uStack_64,local_68);
        }
      }
LAB_140e472ad:
      uVar10 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      goto LAB_140e46bd0;
    }
LAB_140e46de1:
    if (*(char *)(param_4 + 8) == '\x03') {
      fVar4 = *param_4;
    }
    else {
      pfVar8 = &local_68;
      FUN_1400b56fe(pfVar8,param_4,3);
      fVar4 = 0.0;
      if (local_48 != 0) {
        fVar4 = local_68;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_50) {
          pfVar8 = (float *)CONCAT44(uStack_64,local_68);
        }
        (*pcVar1)(pfVar8);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(CONCAT44(uStack_64,local_68));
      }
    }
    param_4 = local_88;
    if (local_88 != (float *)0x0) {
      puVar9 = *(undefined **)(local_88 + 2);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
      {
        local_98 = FUN_1446ddbd2();
        local_90 = FUN_1468e0f50;
        local_a0 = 0;
        local_a8 = 0x1008001;
        FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000);
        atexit(FUN_142816f26);
        _Init_thread_footer(&DAT_14c952108);
      }
      pfVar8 = local_88;
      if (DAT_14c9520c0 == 0) {
        bVar14 = puVar9 != (undefined *)0x0;
        if (puVar9 != &DAT_14c9520b8 && bVar14) {
          do {
            puVar9 = *(undefined **)(puVar9 + 0x30);
            bVar14 = puVar9 != (undefined *)0x0;
            if (puVar9 == &DAT_14c9520b8) break;
          } while (puVar9 != (undefined *)0x0);
        }
        if (bVar14) goto LAB_140e47283;
      }
      else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c9520c0) != 0) {
LAB_140e47283:
        cVar3 = (**(code **)(*(longlong *)param_4 + 0x1e0))(param_4);
        if (cVar3 == '\0') {
          (**(code **)(*(longlong *)param_4 + 0x1f8))(param_4,local_80,(longlong)fVar4);
        }
        else {
          (**(code **)(*(longlong *)param_4 + 0x208))(param_4,local_80,(double)fVar4);
        }
        goto LAB_140e472ad;
      }
      if (local_88 != (float *)0x0) {
        puVar12 = *(undefined8 **)(local_88 + 2);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d20) &&
           (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
          local_98 = FUN_1446ddbd2();
          local_90 = FUN_14067a048;
          local_a0 = 0;
          local_a8 = 0x28001;
          FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000);
          atexit(FUN_142811fe5);
          _Init_thread_footer(&DAT_14c951d20);
        }
        if (DAT_14c951cd8 == 0) {
          bVar14 = puVar12 != (undefined8 *)0x0;
          if (puVar12 != &DAT_14c951cd0 && bVar14) {
            do {
              puVar12 = (undefined8 *)puVar12[6];
              bVar14 = puVar12 != (undefined8 *)0x0;
              if (puVar12 == &DAT_14c951cd0) break;
            } while (puVar12 != (undefined8 *)0x0);
          }
          if (!bVar14) goto LAB_140e472ed;
        }
        else if ((puVar12[3] & DAT_14c951cd8) == 0) {
LAB_140e472ed:
          if (local_88 != (float *)0x0) {
            lVar5 = *(longlong *)(local_88 + 2);
            lVar7 = FUN_144a7add4();
            if (*(ulonglong *)(lVar7 + 8) == 0) {
              bVar14 = lVar5 != 0;
              if (lVar5 != lVar7 && bVar14) {
                do {
                  lVar5 = *(longlong *)(lVar5 + 0x30);
                  bVar14 = lVar5 != 0;
                  if (lVar5 == lVar7) break;
                } while (lVar5 != 0);
              }
              if (bVar14) goto LAB_140e47372;
            }
            else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_140e47372:
              cVar3 = FUN_1427e11e8(*(longlong *)(local_88 + 0x1e),(longlong)fVar4);
              if (cVar3 != '\0') {
                (**(code **)(**(longlong **)(local_88 + 0x1c) + 0x1f8))
                          (*(longlong **)(local_88 + 0x1c),local_80,(longlong)fVar4);
              }
            }
          }
          goto LAB_140e46ebe;
        }
        if ((fVar4 != 0.0) || (NAN(fVar4))) {
          bVar13 = *(byte *)((longlong)pfVar8 + 0x72);
        }
        else {
          bVar13 = 0;
        }
        *(byte *)((longlong)local_80 + (ulonglong)*(byte *)((longlong)pfVar8 + 0x71)) =
             *(byte *)((longlong)local_80 + (ulonglong)*(byte *)((longlong)pfVar8 + 0x71)) &
             ~*(byte *)((longlong)pfVar8 + 0x73) | bVar13;
      }
    }
  }
LAB_140e46ebe:
  uVar10 = 0;
LAB_140e46bd0:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 140e47448 FUN_140e47448 body=724 status=ok
// SIG undefined FUN_140e47448(void)

undefined8 FUN_140e47448(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58 [2];
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1401285f0(local_58,param_1 + 8,param_2);
  if (local_58[0] != 0) {
    bVar1 = *(byte *)(param_1 + 0x48);
    if ((bVar1 != 0) && (bVar2 = *(byte *)(param_4 + 0x20), bVar2 != bVar1)) {
      uVar8 = (uint)bVar2 * 0x120;
      if ((*(code **)(&DAT_14c9a8560 + uVar8) == (code *)0x0) ||
         (cVar4 = (**(code **)(&DAT_14c9a8560 + uVar8))(bVar1), cVar4 == '\0')) {
        pcVar3 = *(code **)((longlong)&DAT_14c9a8568 + (ulonglong)((uint)bVar1 * 0x120));
        if (((pcVar3 == (code *)0x0) || (cVar4 = (*pcVar3)((uint)bVar2), cVar4 == '\0')) &&
           ((((&DAT_14c9a8514)[uVar8] & 0x20) == 0 ||
            ((((&DAT_14c9a8514)[(uint)bVar1 * 0x120] & 0x20) != 0 ||
             ((*(code **)(&DAT_14c9a8588 + uVar8) != (code *)0x0 &&
              (cVar4 = (**(code **)(&DAT_14c9a8588 + uVar8))(bVar1), cVar4 == '\0'))))))))
        goto LAB_140e474ed;
      }
    }
    plVar5 = (longlong *)FUN_1447262c2(param_3);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14c9a4e08 == 0) {
        local_70 = &local_48;
        local_48 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_1427b09ee;
        local_78 = &LAB_1470c76a3;
        local_80 = FUN_1462ab034;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10004001;
        local_a0 = 8;
        local_a8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14c9a4e08);
      if (plVar5 != (longlong *)0x0) {
        if (DAT_14c9a4e08 == 0) {
          local_70 = &local_48;
          local_48 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_1427b09ee;
          local_78 = &LAB_1470c76a3;
          local_80 = FUN_1462ab034;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10004001;
          local_a0 = 8;
          local_a8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
        }
        plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14c9a4e08);
        uVar7 = 0;
        if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
          uVar7 = (**(code **)(*plVar6 + 0x28))();
          FUN_140af060e(uVar7,local_58,param_4);
          uVar7 = 1;
        }
        goto LAB_140e474ef;
      }
    }
  }
LAB_140e474ed:
  uVar7 = 0;
LAB_140e474ef:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 140e4771e FUN_140e4771e body=57 status=ok
// SIG undefined FUN_140e4771e(void)

void FUN_140e4771e(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_144909502();
  if (iVar1 != -1) {
                    /* WARNING: Could not recover jumptable at 0x000140e4774c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb88))(param_1,iVar1,param_3,*(code **)(*param_1 + 0xb88));
    return;
  }
  return;
}



// FUNCTION 140e47758 FUN_140e47758 body=1094 status=ok
// SIG undefined FUN_140e47758(void)

void FUN_140e47758(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((((*(int *)(param_1 + 0x66c) == 0) || (uVar1 = *(uint *)(param_1 + 0x668), (int)uVar1 < 0))
        || (DAT_14c9647dc <= (int)uVar1)) ||
       ((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0 ||
        (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x66c))))) ||
      ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)) &&
     (lVar4 = (longlong)*(int *)(param_1 + 0x714) * 0x10 + param_1,
     param_2 < *(int *)(lVar4 + 0x880))) {
    *(undefined1 *)(*(longlong *)(lVar4 + 0x878) + (longlong)param_2) = 2;
    FUN_14102729c(param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0x658);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar4 != 0) != 0) goto LAB_140e47b61;
    if (lVar4 == 0) goto LAB_140e4799a;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140e47b61:
    FUN_1456cec3c(lVar4);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_30;
    local_30 = FUN_1449e2820;
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
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_140e4799a;
  if (*(int *)(param_1 + 0x66c) == 0) {
LAB_140e4788d:
    bVar6 = false;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x668);
    bVar6 = false;
    if ((-1 < (int)uVar1) && (bVar6 = false, (int)uVar1 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x66c))) goto LAB_140e4788d;
      bVar6 = (*(uint *)(lVar4 + 8) & 0x10200000) == 0;
    }
  }
  if ((param_2 < 0) || (bVar6)) goto LAB_140e4799a;
  plVar5 = *(longlong **)(param_1 + 0x658);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_140e47b6e;
    if (plVar5 != (longlong *)0x0) goto LAB_140e479e1;
    iVar3 = 0;
  }
  else {
    if (DAT_14c950c29 != 0) {
LAB_140e47b6e:
      FUN_1456cec3c(plVar5);
      plVar5 = *(longlong **)(param_1 + 0x658);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = *(longlong **)(param_1 + 0x660);
LAB_140e479e1:
        bVar2 = DAT_14c950c29 & plVar5 != (longlong *)0x0;
      }
      else {
        bVar2 = DAT_14c950c29 & 1;
      }
      if (bVar2 != 0) {
        FUN_1456cec3c(plVar5);
      }
    }
    lVar4 = (**(code **)(*plVar5 + 0x310))(plVar5);
    iVar3 = *(int *)(lVar4 + 0x28);
  }
  if ((iVar3 <= param_2) ||
     (*(byte *)(param_1 + 0xc71) = *(byte *)(param_1 + 0xc71) & 0xdf, param_3 == 0))
  goto LAB_140e4799a;
  plVar5 = *(longlong **)(param_1 + 0x658);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_140e47b94;
    if (plVar5 != (longlong *)0x0) goto LAB_140e478ff;
LAB_140e47a1d:
    plVar5 = (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_140e47b94:
      FUN_1456cec3c(plVar5);
    }
LAB_140e478ff:
    if (DAT_14cb06da8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
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
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) goto LAB_140e47a1d;
  }
  (**(code **)(*plVar5 + 0x310))(plVar5);
  if (param_3 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
LAB_140e4799a:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e47bb6 FUN_140e47bb6 body=239 status=ok
// SIG undefined FUN_140e47bb6(void)

void FUN_140e47bb6(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  longlong lVar4;
  
  FUN_140e47ca6(param_1 + 0x120);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0x60d));
  uVar2 = *(undefined1 *)(param_1 + 0x60c);
  lVar4 = 0;
  do {
    lVar1 = param_1 + 600 + lVar4;
    (**(code **)(*(longlong *)(param_1 + 600 + lVar4) + 0x178))
              (lVar1,*(undefined8 *)(param_1 + 0x604));
    (**(code **)(*(longlong *)(param_1 + 600 + lVar4) + 0x180))(lVar1,uVar2);
    (**(code **)(*(longlong *)(param_1 + 600 + lVar4) + 0x188))(lVar1,uVar3 & 0xffffffff);
    lVar4 = lVar4 + 0xa0;
  } while (lVar4 != 0x1e0);
  lVar4 = 0;
  do {
    lVar1 = param_1 + 0x438 + lVar4;
    (**(code **)(*(longlong *)(param_1 + 0x438 + lVar4) + 0x178))
              (lVar1,*(undefined8 *)(param_1 + 0x604));
    (**(code **)(*(longlong *)(param_1 + 0x438 + lVar4) + 0x180))(lVar1,uVar2);
    (**(code **)(*(longlong *)(param_1 + 0x438 + lVar4) + 0x188))(lVar1,uVar3 & 0xffffffff);
    lVar4 = lVar4 + 0x98;
  } while (lVar4 != 0x1c8);
  return;
}



// FUNCTION 140e47ca6 FUN_140e47ca6 body=161 status=ok
// SIG undefined FUN_140e47ca6(void)

void FUN_140e47ca6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 300) < 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    FUN_14791bb40(param_1 + 0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  FUN_140aeed2c((longlong *)(param_1 + 0x20),6,1);
  lVar1 = param_1 + 0x138;
  lVar2 = 0;
  do {
    *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) = lVar1;
    lVar2 = lVar2 + 0x10;
    lVar1 = lVar1 + 0xa0;
  } while (lVar2 != 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) = param_1 + 0x318;
  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x40) = param_1 + 0x3b0;
  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x50) = param_1 + 0x448;
  return;
}



// FUNCTION 140e47d48 FUN_140e47d48 body=261 status=ok
// SIG undefined FUN_140e47d48(void)

undefined8 * FUN_140e47d48(undefined8 *param_1)

{
  FUN_140e47e4e();
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0xffffffff7fffffff;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x3ff00000;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x3ff0000000000000;
  param_1[0x67] = 0x3ff0000000000000;
  param_1[0x68] = 0x3ff0000000000000;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *param_1 = &PTR_FUN_14b6d6940;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0xffffffff7fffffff;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0x3ff00000;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0x3ff0000000000000;
  param_1[0x89] = 0x3ff0000000000000;
  param_1[0x8a] = 0x3ff0000000000000;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0xffffffff7fffffff;
  param_1[0x90] = 0;
  *(undefined4 *)((longlong)param_1 + 0x487) = 0;
  return param_1;
}



// FUNCTION 140e47e4e FUN_140e47e4e body=698 status=ok
// SIG undefined FUN_140e47e4e(void)

void FUN_140e47e4e(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  *param_1 = &PTR_FUN_14b3ebd00;
  param_1[2] = 0;
  param_1[3] = 0xffffffff7fffffff;
  param_1[4] = 0;
  param_1[5] = 0xffffffff7fffffff;
  param_1[6] = 0x3f8ccccd3f733333;
  *(undefined1 *)(param_1 + 10) = 1;
  dVar1 = DAT_14c8462e8 * DAT_14c8462e8 +
          DAT_14c8462d8 * DAT_14c8462d8 + DAT_14c8462e0 * DAT_14c8462e0;
  if (((dVar1 != 1.0) ||
      (dVar4 = DAT_14c8462e0, dVar5 = DAT_14c8462e8, dVar2 = DAT_14c8462d8, NAN(dVar1))) &&
     (dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464f0, dVar2 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar1)) {
    dVar2 = 1.0 / SQRT(dVar1);
    dVar5 = DAT_14c8462e8 * dVar2;
    dVar4 = DAT_14c8462e0 * dVar2;
    dVar2 = DAT_14c8462d8 * dVar2;
  }
  param_1[7] = dVar2;
  param_1[8] = dVar4;
  param_1[9] = dVar5;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff7fffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0x3ff0000000000000;
  param_1[0x1a] = 0x3ff0000000000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  dVar1 = DAT_14c8464e8;
  param_1[0x1e] = DAT_14c8464e0;
  param_1[0x1f] = dVar1;
  param_1[0x20] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x21) = 3;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x22) = 3;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff7fffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3ff0000000000000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0x3ff0000000000000;
  param_1[0x32] = 0x3ff0000000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x36] = 0xc059000000000000;
  param_1[0x37] = 0xc059000000000000;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0x3f8000003f7851ec;
  *(byte *)((longlong)param_1 + 0x1dc) = *(byte *)((longlong)param_1 + 0x1dc) & 0xf0 | 3;
  param_1[0x3c] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x3d) = 3;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff7fffffff;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0x3ff0000000000000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0x3ff0000000000000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  param_1[0x52] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  param_1[0x50] = DAT_14c8464e0;
  param_1[0x51] = dVar1;
  uVar3 = DAT_14c8463e8;
  param_1[0x56] = DAT_14c8463e0;
  param_1[0x57] = uVar3;
  uVar3 = DAT_14c8463d8;
  param_1[0x54] = DAT_14c8463d0;
  param_1[0x55] = uVar3;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  return;
}



// FUNCTION 140e48108 FUN_140e48108 body=1140 status=ok
// SIG undefined FUN_140e48108(void)

void FUN_140e48108(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_1e8 [40];
  undefined8 *local_1c0;
  undefined1 *local_1b8;
  longlong *local_1b0;
  undefined8 *local_1a8;
  undefined1 *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_178 [2];
  undefined1 local_168;
  undefined8 local_164;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined8 uStack_137;
  longlong local_128;
  longlong lStack_120;
  ulonglong local_118;
  longlong lStack_110;
  ulonglong local_108;
  longlong lStack_100;
  ulonglong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  longlong local_d8 [2];
  undefined1 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined8 uStack_97;
  longlong local_88;
  longlong lStack_80;
  ulonglong local_78;
  longlong lStack_70;
  ulonglong local_68;
  longlong lStack_60;
  ulonglong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((*(float *)(param_1 + 0x28) <= 1e-05) || (0.99999 <= *(float *)(param_1 + 0x28))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1e8);
  }
  local_d8[0] = *param_2;
  local_d8[1] = 0;
  local_c8 = 1;
  local_c4 = 0xffffffffffffffff;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_98 = 0;
  uStack_97 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  local_40 = (undefined1)param_2[0x13];
  lVar2 = *(longlong *)(local_d8[0] + 0x6a0);
  uVar1 = *(uint *)(lVar2 + 8);
  local_a8 = lVar2;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  iVar4 = 0;
  iVar3 = 0;
  if (uVar1 != 0) {
    FUN_144717690(&local_b8,uVar1);
    iVar4 = (int)uStack_b0;
    iVar3 = uStack_b0._4_4_;
  }
  uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar4 + uVar1);
  if ((uint)(iVar3 - iVar4) < uVar1) {
    FUN_1406600da(&local_b8);
  }
  local_88 = lVar2 + 0xb0;
  local_c4 = *(undefined8 *)((longlong)param_2 + 0x14);
  local_178[0] = *param_2;
  local_178[1] = 0;
  local_168 = 1;
  local_164 = 0xffffffffffffffff;
  local_158 = 0;
  uStack_150 = 0;
  uStack_140 = 0;
  uStack_13f = 0;
  uStack_138 = 0;
  uStack_137 = 0;
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_108 = 0;
  lStack_100 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  local_e8 = 0;
  local_e0 = (undefined1)param_2[0x13];
  lVar2 = *(longlong *)(local_178[0] + 0x6a0);
  uVar1 = *(uint *)(lVar2 + 8);
  local_148 = lVar2;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  iVar4 = 0;
  iVar3 = 0;
  if (uVar1 != 0) {
    FUN_144717690(&local_158,uVar1);
    iVar4 = (int)uStack_150;
    iVar3 = uStack_150._4_4_;
  }
  uStack_150 = CONCAT44(uStack_150._4_4_,iVar4 + uVar1);
  if ((uint)(iVar3 - iVar4) < uVar1) {
    FUN_1406600da(&local_158);
  }
  local_128 = lVar2 + 0xb0;
  local_164 = *(undefined8 *)((longlong)param_2 + 0x14);
  FUN_140e48598(local_d8,param_1 + 0x30);
  FUN_140e48598(local_178,param_1 + 0x40);
  local_190 = param_2 + 4;
  local_188 = param_2 + 7;
  local_180 = param_2 + 0xb;
  local_1a0 = &uStack_a0;
  local_198 = &lStack_80;
  local_1b8 = &uStack_140;
  local_1b0 = &lStack_120;
  local_1c0 = &local_158;
  local_1a8 = &local_b8;
  FUN_14078e408(&local_1a8,&local_1c0,1.0 - *(float *)(param_1 + 0x28));
  if (lStack_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_144716785(lStack_100,local_f8 & 0xffffffff);
  if (lStack_100 != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(lStack_110,local_108 & 0xffffffff);
  if (lStack_110 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(lStack_120,local_118 & 0xffffffff);
  if (lStack_120 != 0) {
    FUN_1400020a8();
  }
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  FUN_144716785(lStack_60,local_58 & 0xffffffff);
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(lStack_70,local_68 & 0xffffffff);
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(lStack_80,local_78 & 0xffffffff);
  if (lStack_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e48598 FUN_140e48598 body=260 status=ok
// SIG undefined FUN_140e48598(void)

void FUN_140e48598(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  
  FUN_1448859f0((longlong *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  lVar6 = *param_2;
  if ((((lVar6 == 0) || (plVar3 = *(longlong **)(lVar6 + 0x88), plVar3 == (longlong *)0x0)) ||
      (iVar5 = (int)plVar3[1], iVar5 != *(int *)(lVar6 + 0x80))) ||
     (plVar4 = *(longlong **)(param_1 + 0x30), (int)plVar4[1] != *(int *)(param_1 + 0x28))) {
    return;
  }
  if (0 < iVar5) {
    uVar7 = 0;
    uVar10 = 0;
    do {
      iVar11 = (int)(uVar10 & 0xffff);
      if ((int)plVar4[1] <= iVar11) break;
      uVar1 = *(ushort *)(*plVar4 + (uVar10 & 0xffff) * 2);
      uVar2 = *(ushort *)(*plVar3 + (uVar7 & 0xffff) * 2);
      if (uVar2 == uVar1) {
        puVar8 = (undefined8 *)
                 ((ulonglong)(uint)((int)(uVar7 & 0xffff) * 0x60) + *(longlong *)(*param_2 + 0x78));
        puVar9 = (undefined8 *)((ulonglong)(uint)(iVar11 * 0x60) + *(longlong *)(param_1 + 0x20));
        for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar10 = (ulonglong)((int)uVar10 + 1);
        iVar5 = (int)plVar3[1];
      }
      else if (uVar2 < uVar1) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
      }
      else {
        uVar10 = (ulonglong)((int)uVar10 + 1);
      }
    } while ((int)((uint)uVar7 & 0xffff) < iVar5);
    lVar6 = *param_2;
  }
  FUN_140e4869c(param_1 + 0x38,lVar6 + 0x98);
  FUN_140e486fa(param_1 + 0x58,*param_2 + 0xb8);
  return;
}



// FUNCTION 140e4869c FUN_140e4869c body=93 status=ok
// SIG undefined FUN_140e4869c(void)

void FUN_140e4869c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14471726c(param_1,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
    }
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return;
}



// FUNCTION 140e486fa FUN_140e486fa body=733 status=ok
// SIG undefined FUN_140e486fa(void)

void FUN_140e486fa(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != param_2) {
    FUN_144716758(param_1[2],*(undefined4 *)(param_1 + 3));
    iVar2 = *(int *)(param_2 + 3);
    uVar5 = param_2[2];
    *(int *)(param_1 + 3) = iVar2;
    if (iVar2 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1474d487e(param_1 + 2,iVar2);
      FUN_1474d48e0(param_1[2],uVar5,iVar2);
    }
    FUN_144716727(*param_1,*(undefined4 *)(param_1 + 1));
    iVar2 = *(int *)(param_2 + 1);
    uVar5 = *param_2;
    *(int *)(param_1 + 1) = iVar2;
    if (iVar2 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145741460(param_1,iVar2);
      FUN_1457414c2(*param_1,uVar5,iVar2);
    }
    iVar2 = *(int *)(param_2 + 7);
    _Src = (void *)param_2[6];
    *(int *)(param_1 + 7) = iVar2;
    if (iVar2 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      FUN_1474d4b9c(param_1 + 6,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)param_1[6],_Src,(longlong)iVar2 << 3);
      }
    }
  }
  iVar2 = *(int *)(param_2 + 5);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  plVar1 = param_1 + 4;
  FUN_144716785(param_1[4],*(undefined4 *)(param_1 + 5));
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != iVar2) {
    FUN_14791f9e0(plVar1,iVar2);
  }
  iVar2 = *(int *)(param_1 + 7);
  if (0 < (longlong)iVar2) {
    local_98 = 0;
    do {
      plVar7 = (longlong *)(local_98 * 0x10 + param_2[4]);
      iVar3 = *(int *)(param_1 + 5);
      *(uint *)(param_1 + 5) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar3 + 1U) {
        FUN_14791fa40(plVar1,iVar3);
      }
      local_90 = (longlong *)*plVar1;
      local_90[(longlong)iVar3 * 2] = 0;
      (local_90 + (longlong)iVar3 * 2)[1] = 0;
      local_68 = *(undefined8 *)(param_1[6] + local_98 * 8);
      local_88 = (longlong)(int)plVar7[1];
      if (local_88 != 0) {
        local_90 = local_90 + (longlong)iVar3 * 2;
        local_80 = *plVar7;
        local_88 = local_88 << 4;
        lVar8 = 0;
        do {
          uVar5 = FUN_14479d2ce(&local_68);
          FUN_14791f98e(&local_78,uVar5);
          iVar3 = (int)local_90[1];
          *(uint *)(local_90 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)local_90 + 0xc) < iVar3 + 1U) {
            FUN_14791fac6(local_90,iVar3);
          }
          lVar4 = *local_90;
          lVar6 = (longlong)iVar3 * 0x10;
          *(undefined8 *)(lVar4 + lVar6) = 0;
          *(undefined8 *)(lVar4 + lVar6) = local_78;
          local_78 = 0;
          *(undefined4 *)(lVar4 + 8 + lVar6) = local_70;
          *(undefined4 *)(lVar4 + 0xc + lVar6) = local_6c;
          uVar5 = FUN_14479d2ce(&local_68);
          FUN_1449b16b6(uVar5,*(undefined8 *)(lVar4 + lVar6),*(undefined8 *)(local_80 + lVar8),1);
          lVar8 = lVar8 + 0x10;
        } while (local_88 != lVar8);
      }
      local_98 = local_98 + 1;
    } while (local_98 != iVar2);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e489d8 FUN_140e489d8 body=128 status=ok
// SIG undefined FUN_140e489d8(void)

undefined8 FUN_140e489d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_14087acb9(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
      iVar1 = *(int *)(param_3 + 0x10);
      uVar2 = *(undefined8 *)(param_3 + 8);
      *(int *)(param_2 + 0x10) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0x14) == 0) {
        *(undefined4 *)(param_2 + 0x14) = 0;
      }
      else {
        FUN_140e48a94((undefined8 *)(param_2 + 8),iVar1);
        FUN_140e48a58(*(undefined8 *)(param_2 + 8),uVar2,iVar1);
      }
    }
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 140e48a58 FUN_140e48a58 body=60 status=ok
// SIG undefined FUN_140e48a58(void)

void FUN_140e48a58(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140e48b7c(param_1,param_2);
    param_1 = param_1 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return;
}



// FUNCTION 140e48a94 FUN_140e48a94 body=232 status=ok
// SIG undefined FUN_140e48a94(void)

void FUN_140e48a94(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0xe0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0xe0,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e48b7c FUN_140e48b7c body=522 status=ok
// SIG undefined FUN_140e48b7c(void)

undefined8 * FUN_140e48b7c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_14b7f2890;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0x18));
  uVar6 = FUN_14477b664(uVar6);
  param_1[3] = uVar6;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0x30));
  uVar6 = FUN_14477b664(uVar6);
  param_1[6] = uVar6;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0x48));
  uVar6 = FUN_14477b664(uVar6);
  param_1[9] = uVar6;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  _Src = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],_Src,(longlong)iVar1 * 2);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0x88));
  uVar6 = FUN_14477b664(uVar6);
  param_1[0x11] = uVar6;
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  plVar2 = *(longlong **)(param_2 + 0x98);
  param_1[0x13] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  plVar2 = *(longlong **)(param_2 + 0xa8);
  param_1[0x15] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  plVar2 = *(longlong **)(param_2 + 0xb8);
  param_1[0x17] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  plVar2 = *(longlong **)(param_2 + 200);
  param_1[0x19] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  return param_1;
}



// FUNCTION 140e48d86 FUN_140e48d86 body=102 status=ok
// SIG undefined FUN_140e48d86(void)

undefined8 * FUN_140e48d86(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14ac3d170;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  return param_1;
}



// FUNCTION 140e48dec FUN_140e48dec body=267 status=ok
// SIG undefined FUN_140e48dec(void)

undefined8 FUN_140e48dec(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_140e48ef1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e48ef1;
    }
    FUN_1400841de(param_1 + 0x18,&local_30);
  }
  else {
LAB_140e48ef1:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e48ea7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140e48ea7;
    }
  }
  uVar6 = 0;
LAB_140e48ea7:
  if (local_30 != 0) {
    FUN_140113f3a(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e48f06 FUN_140e48f06 body=100 status=ok
// SIG undefined FUN_140e48f06(void)

void FUN_140e48f06(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1[0x23] != 0) && ((*(byte *)(param_1[0x23] + 0x100) & 1) != 0)) {
    lVar1 = FUN_1447210f0(param_2);
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar1 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000140e48f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[0x23] + 0x2a8))((longlong *)param_1[0x23],param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140e48f6a FUN_140e48f6a body=40 status=ok
// SIG undefined FUN_140e48f6a(void)

undefined8 FUN_140e48f6a(undefined8 param_1,int param_2)

{
  FUN_140e48f92();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e48f92 FUN_140e48f92 body=212 status=ok
// SIG undefined FUN_140e48f92(void)

void FUN_140e48f92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14add1fb0;
  param_1[7] = &PTR_FUN_14add23f0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_144727cd0(param_1 + 0xe,0);
  }
  param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x9c)) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 140e49066 FUN_140e49066 body=111 status=ok
// SIG undefined FUN_140e49066(void)

ulonglong FUN_140e49066(longlong param_1,undefined8 param_2)

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
LAB_140e490b8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140e490b8;
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
                (lVar4 + *(int *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 8),
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



// FUNCTION 140e490e6 FUN_140e490e6 body=225 status=ok
// SIG undefined FUN_140e490e6(void)

void FUN_140e490e6(longlong *param_1,void *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140e491c8();
  if ((*(byte *)(param_1 + 0xaa) & 0x10) == 0) {
    *(undefined1 *)((longlong)param_1 + 0x343d) = 1;
    (**(code **)(*param_1 + 0x938))(param_1,&local_38);
    if ((param_1[0x664] != local_38) || ((int)param_1[0x665] != local_30)) {
      param_1[0x664] = local_38;
      *(int *)(param_1 + 0x665) = local_30;
      param_1[0x666] = 0;
    }
    (**(code **)(*param_1 + 0x328))(param_1,&local_38);
    *(float *)(param_1 + 0x687) = -(float)local_28;
    memcpy(param_1 + 0x667,param_2,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e491c8 FUN_140e491c8 body=163 status=ok
// SIG undefined FUN_140e491c8(void)

void FUN_140e491c8(longlong *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_148 [40];
  undefined1 local_120 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memcpy(local_120,param_2,0x100);
  uVar1 = FUN_14477b072(param_1,DAT_14cacf728);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_120);
  memcpy(local_120,param_2,0x100);
  FUN_1447cd2ec(param_1 + 0xb1,local_120);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4926c FUN_140e4926c body=3798 status=ok
// SIG undefined FUN_140e4926c(void)

ulonglong FUN_140e4926c(longlong param_1)

{
  void **ppvVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  void **ppvVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined8 uVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  byte bVar27;
  longlong *plVar28;
  undefined8 *puVar29;
  size_t _Size;
  longlong lVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  undefined4 *puVar33;
  longlong *plVar34;
  longlong *plVar35;
  int iVar36;
  ulonglong uVar37;
  longlong *plVar38;
  uint uVar39;
  int iVar40;
  ulonglong uVar41;
  longlong *plVar42;
  byte bVar43;
  longlong *plVar44;
  longlong *plVar45;
  bool bVar46;
  float fVar47;
  undefined1 auStack_4c8 [32];
  longlong local_4a8;
  void **local_4a0;
  longlong *local_498;
  longlong local_490;
  longlong *local_488;
  undefined8 local_480;
  void *local_478;
  undefined8 uStack_470;
  void *local_468;
  ulonglong uStack_460;
  longlong local_458;
  ulonglong uStack_450;
  code *local_448;
  undefined8 local_438;
  undefined **local_428;
  longlong *local_420;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3dc;
  undefined4 local_3d4;
  longlong local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  longlong local_378;
  undefined4 local_370;
  longlong local_368;
  longlong lStack_360;
  undefined4 local_358 [4];
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  longlong local_328;
  undefined4 local_320;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  FUN_140e4a7b6(param_1 + 0x218);
  iVar19 = *(int *)(param_1 + 0xc0);
  uVar41 = 0;
  if (iVar19 == 0) goto LAB_140e49ff8;
  local_398 = 0;
  local_390 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_38c = 0xffffffff00000080;
  local_384 = 0;
  local_378 = 0;
  local_370 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3dc = 0xffffffff00000080;
  local_3d4 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  iVar21 = iVar19 * 4;
  local_458 = 0;
  uStack_450 = 0;
  local_4a8 = param_1;
  if (iVar19 < 0) {
LAB_140e4a047:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar21);
  }
  local_490 = param_1 + 0x218;
  FUN_140e4a934(&local_458);
  lVar23 = local_4a8;
  local_438 = 0;
  local_428 = &PTR_LAB_14bb90490;
  local_448 = FUN_1444ab31a;
  local_420 = &local_458;
  FUN_140e4abf2();
  local_368 = local_458;
  iVar19 = (int)uStack_450;
  uVar41 = (ulonglong)(int)uStack_450;
  if (1 < (longlong)uVar41) {
    iVar21 = *(int *)(lVar23 + 0xc0);
    memset(local_358,0,0x2f0);
    lStack_360 = uVar41 * 0x20 + local_368 + -0x20;
    fVar47 = logf((float)iVar19);
    local_358[0] = (int)(longlong)(fVar47 + fVar47);
    iVar19 = iVar21 * 3;
    iVar13 = iVar21 * 0x18;
    plVar32 = &local_368;
    do {
      plVar35 = (longlong *)*plVar32;
      plVar22 = (longlong *)plVar32[1];
      iVar36 = (int)((ulonglong)((longlong)plVar22 - (longlong)plVar35) >> 5);
      uVar39 = iVar36 + 1;
      local_4a0 = (void **)CONCAT44(local_4a0._4_4_,(int)plVar32[2]);
      plVar28 = plVar35;
      plVar44 = plVar22;
      if ((int)plVar32[2] != 0) {
LAB_140e4942e:
        plVar38 = plVar28;
        if (8 < (int)uVar39) {
          uVar41 = (ulonglong)(uVar39 >> 1);
          lVar23 = plVar35[uVar41 * 4];
          lVar30 = (plVar35 + uVar41 * 4)[1];
          lVar3 = plVar35[uVar41 * 4 + 2];
          lVar20 = (plVar35 + uVar41 * 4 + 2)[1];
          lVar5 = *plVar35;
          lVar6 = plVar35[1];
          lVar7 = plVar35[3];
          plVar35[uVar41 * 4 + 2] = plVar35[2];
          (plVar35 + uVar41 * 4 + 2)[1] = lVar7;
          plVar35[uVar41 * 4] = lVar5;
          (plVar35 + uVar41 * 4)[1] = lVar6;
          plVar35[2] = lVar3;
          plVar35[3] = lVar20;
          *plVar35 = lVar23;
          plVar35[1] = lVar30;
          plVar42 = plVar44 + 4;
          plVar34 = plVar35;
          do {
            plVar11 = plVar34 + 4;
            plVar45 = plVar34 + 4;
            do {
              plVar28 = plVar45;
              plVar34 = plVar11;
              if (plVar44 < plVar34) break;
              plVar11 = plVar34 + 4;
              plVar45 = plVar28 + 4;
            } while (*(int *)((longlong)plVar34 + 0xc) * iVar21 +
                     (uint)*(byte *)((longlong)plVar34 + 4) * iVar19 +
                     (int)plVar34[1] * iVar13 + (int)*plVar34 <=
                     *(int *)((longlong)plVar35 + 0xc) * iVar21 +
                     (uint)*(byte *)((longlong)plVar35 + 4) * iVar19 +
                     (int)plVar35[1] * iVar13 + (int)*plVar35);
            plVar11 = plVar42 + -8;
            do {
              plVar45 = plVar42;
              plVar26 = plVar11;
              plVar42 = plVar45 + -4;
              if (plVar42 <= plVar35) break;
              plVar11 = plVar26 + -4;
            } while (*(int *)((longlong)plVar35 + 0xc) * iVar21 +
                     (uint)*(byte *)((longlong)plVar35 + 4) * iVar19 +
                     (int)plVar35[1] * iVar13 + (int)*plVar35 <=
                     *(int *)((longlong)plVar45 + -0x14) * iVar21 +
                     (uint)*(byte *)((longlong)plVar45 + -0x1c) * iVar19 +
                     (int)plVar45[-3] * iVar13 + (int)*plVar42);
            if (plVar42 < plVar34) goto LAB_140e495aa;
            lVar23 = *plVar34;
            lVar30 = plVar34[1];
            lVar3 = plVar34[2];
            lVar20 = plVar34[3];
            lVar5 = *plVar42;
            lVar6 = plVar45[-3];
            lVar7 = plVar45[-1];
            plVar34[2] = plVar45[-2];
            plVar34[3] = lVar7;
            *plVar34 = lVar5;
            plVar34[1] = lVar6;
            plVar45[-2] = lVar3;
            plVar45[-1] = lVar20;
            *plVar42 = lVar23;
            plVar45[-3] = lVar30;
          } while( true );
        }
        if (plVar35 < plVar44) {
          do {
            plVar22 = plVar35;
            if (plVar35 + 4 <= plVar44) {
              plVar28 = plVar35 + 4;
              iVar36 = (int)*plVar35;
              do {
                plVar38 = plVar28;
                iVar40 = (int)*plVar28;
                if (*(int *)((longlong)plVar28 + 0xc) * iVar21 +
                    (uint)*(byte *)((longlong)plVar28 + 4) * iVar19 +
                    (int)plVar28[1] * iVar13 + (int)*plVar28 <=
                    *(int *)((longlong)plVar22 + 0xc) * iVar21 +
                    (uint)*(byte *)((longlong)plVar22 + 4) * iVar19 +
                    (int)plVar22[1] * iVar13 + iVar36) {
                  plVar38 = plVar22;
                  iVar40 = iVar36;
                }
                plVar22 = plVar38;
                plVar28 = plVar28 + 4;
                iVar36 = iVar40;
              } while (plVar28 <= plVar44);
            }
            local_68 = (void *)*plVar22;
            uStack_60 = plVar22[1];
            local_58 = (void *)plVar22[2];
            uStack_50 = plVar22[3];
            pvVar4 = local_68;
            uVar41 = uStack_60;
            lVar23 = *plVar44;
            lVar30 = plVar44[1];
            lVar3 = plVar44[3];
            plVar22[2] = plVar44[2];
            plVar22[3] = lVar3;
            *plVar22 = lVar23;
            plVar22[1] = lVar30;
            local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (uint)(uStack_60 >> 0x20);
            plVar44[2] = (longlong)local_58;
            plVar44[3] = uStack_50;
            *(int *)plVar44 = (int)local_68;
            *(int *)((longlong)plVar44 + 4) = local_68._4_4_;
            *(int *)(plVar44 + 1) = (int)uStack_60;
            *(uint *)((longlong)plVar44 + 0xc) = uStack_60._4_4_;
            plVar44 = plVar44 + -4;
            local_68 = pvVar4;
            uStack_60 = uVar41;
          } while (plVar35 < plVar44);
        }
        goto LAB_140e4975a;
      }
LAB_140e49777:
      if (uVar39 != 0) {
        iVar36 = (iVar36 - (iVar36 + -1 >> 0x1f)) + -1 >> 1;
        iVar40 = iVar36;
joined_r0x000140e49799:
        do {
          iVar25 = iVar36 * 2 + 1;
          if (iVar25 < (int)uVar39) {
            iVar24 = iVar36 * 2 + 2;
            if (iVar24 < (int)uVar39) {
              lVar23 = (longlong)iVar24;
              lVar30 = (longlong)iVar25;
              if (*(int *)((longlong)plVar35 + lVar30 * 0x20 + 0xc) * iVar21 +
                  (uint)*(byte *)((longlong)plVar35 + lVar30 * 0x20 + 4) * iVar19 +
                  (int)plVar35[lVar30 * 4 + 1] * iVar13 + (int)plVar35[lVar30 * 4] <=
                  *(int *)((longlong)plVar35 + lVar23 * 0x20 + 0xc) * iVar21 +
                  (uint)*(byte *)((longlong)plVar35 + lVar23 * 0x20 + 4) * iVar19 +
                  (int)plVar35[lVar23 * 4 + 1] * iVar13 + (int)plVar35[lVar23 * 4]) {
                iVar25 = iVar24;
              }
            }
            lVar30 = (longlong)iVar36;
            lVar23 = (longlong)iVar25;
            if (*(int *)((longlong)plVar35 + lVar30 * 0x20 + 0xc) * iVar21 +
                (uint)*(byte *)((longlong)plVar35 + lVar30 * 0x20 + 4) * iVar19 +
                (int)plVar35[lVar30 * 4 + 1] * iVar13 + (int)plVar35[lVar30 * 4] <
                *(int *)((longlong)plVar35 + lVar23 * 0x20 + 0xc) * iVar21 +
                (uint)*(byte *)((longlong)plVar35 + lVar23 * 0x20 + 4) * iVar19 +
                (int)plVar35[lVar23 * 4 + 1] * iVar13 + (int)plVar35[lVar23 * 4]) {
              plVar22 = plVar35 + lVar30 * 4;
              plVar44 = plVar35 + lVar23 * 4;
              local_68 = (void *)*plVar22;
              uStack_60 = plVar22[1];
              local_58 = (void *)plVar22[2];
              uStack_50 = plVar22[3];
              pvVar4 = local_68;
              uVar41 = uStack_60;
              lVar23 = *plVar44;
              lVar30 = plVar44[1];
              lVar3 = plVar44[3];
              plVar22[2] = plVar44[2];
              plVar22[3] = lVar3;
              *plVar22 = lVar23;
              plVar22[1] = lVar30;
              local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (uint)(uStack_60 >> 0x20);
              plVar44[2] = (longlong)local_58;
              plVar44[3] = uStack_50;
              *(int *)plVar44 = (int)local_68;
              *(int *)((longlong)plVar44 + 4) = local_68._4_4_;
              *(int *)(plVar44 + 1) = (int)uStack_60;
              *(uint *)((longlong)plVar44 + 0xc) = uStack_60._4_4_;
              iVar36 = iVar25;
              local_68 = pvVar4;
              uStack_60 = uVar41;
              goto joined_r0x000140e49799;
            }
          }
          bVar46 = iVar40 != 0;
          iVar36 = iVar40 + -1;
          iVar40 = iVar36;
        } while (bVar46);
        if (1 < (int)uVar39) {
          uVar37 = (ulonglong)uVar39 - 1;
          local_68 = (void *)*plVar35;
          uStack_60 = plVar35[1];
          local_58 = (void *)plVar35[2];
          uStack_50 = plVar35[3];
          pvVar4 = local_68;
          uVar41 = uStack_60;
          lVar23 = plVar35[uVar37 * 4];
          lVar30 = (plVar35 + uVar37 * 4)[1];
          lVar3 = (plVar35 + uVar37 * 4 + 2)[1];
          plVar35[2] = plVar35[uVar37 * 4 + 2];
          plVar35[3] = lVar3;
          *plVar35 = lVar23;
          plVar35[1] = lVar30;
          local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (uint)(uStack_60 >> 0x20);
          plVar35[uVar37 * 4 + 2] = (longlong)local_58;
          (plVar35 + uVar37 * 4 + 2)[1] = uStack_50;
          plVar44 = plVar35 + uVar37 * 4;
          *(int *)plVar44 = (int)local_68;
          *(int *)((longlong)plVar44 + 4) = local_68._4_4_;
          *(int *)(plVar44 + 1) = (int)uStack_60;
          *(uint *)((longlong)plVar44 + 0xc) = uStack_60._4_4_;
          local_68 = pvVar4;
          uStack_60 = uVar41;
          if (uVar39 != 2) {
            do {
              iVar36 = 0;
              iVar25 = 1;
              iVar40 = 0;
              do {
                lVar23 = (longlong)(iVar36 + 2);
                iVar24 = iVar25;
                if ((lVar23 < (longlong)uVar37) &&
                   (lVar30 = (longlong)iVar25,
                   *(int *)((longlong)plVar35 + lVar30 * 0x20 + 0xc) * iVar21 +
                   (uint)*(byte *)((longlong)plVar35 + lVar30 * 0x20 + 4) * iVar19 +
                   (int)plVar35[lVar30 * 4 + 1] * iVar13 + (int)plVar35[lVar30 * 4] <=
                   *(int *)((longlong)plVar35 + lVar23 * 0x20 + 0xc) * iVar21 +
                   (uint)*(byte *)((longlong)plVar35 + lVar23 * 0x20 + 4) * iVar19 +
                   (int)plVar35[lVar23 * 4 + 1] * iVar13 + (int)plVar35[lVar23 * 4])) {
                  iVar24 = iVar36 + 2;
                }
                lVar23 = (longlong)iVar40;
                lVar30 = (longlong)iVar24;
                if (*(int *)((longlong)plVar35 + lVar30 * 0x20 + 0xc) * iVar21 +
                    (uint)*(byte *)((longlong)plVar35 + lVar30 * 0x20 + 4) * iVar19 +
                    (int)plVar35[lVar30 * 4 + 1] * iVar13 + (int)plVar35[lVar30 * 4] <=
                    *(int *)((longlong)plVar35 + lVar23 * 0x20 + 0xc) * iVar21 +
                    (uint)*(byte *)((longlong)plVar35 + lVar23 * 0x20 + 4) * iVar19 +
                    (int)plVar35[lVar23 * 4 + 1] * iVar13 + (int)plVar35[lVar23 * 4]) break;
                plVar44 = plVar35 + lVar23 * 4;
                plVar22 = plVar35 + lVar30 * 4;
                lVar23 = *plVar44;
                lVar30 = plVar44[1];
                lVar3 = plVar44[2];
                lVar20 = plVar44[3];
                lVar5 = *plVar22;
                lVar6 = plVar22[1];
                lVar7 = plVar22[3];
                plVar44[2] = plVar22[2];
                plVar44[3] = lVar7;
                *plVar44 = lVar5;
                plVar44[1] = lVar6;
                plVar22[2] = lVar3;
                plVar22[3] = lVar20;
                *plVar22 = lVar23;
                plVar22[1] = lVar30;
                iVar36 = iVar24 * 2;
                iVar25 = iVar24 * 2 + 1;
                iVar40 = iVar24;
              } while ((longlong)iVar25 < (longlong)uVar37);
              uVar41 = uVar37 - 1;
              local_68 = (void *)*plVar35;
              uStack_60 = plVar35[1];
              local_58 = (void *)plVar35[2];
              uStack_50 = plVar35[3];
              pvVar4 = local_68;
              uVar10 = uStack_60;
              lVar23 = plVar35[uVar41 * 4];
              lVar30 = (plVar35 + uVar41 * 4)[1];
              lVar3 = (plVar35 + uVar41 * 4 + 2)[1];
              plVar35[2] = plVar35[uVar41 * 4 + 2];
              plVar35[3] = lVar3;
              *plVar35 = lVar23;
              plVar35[1] = lVar30;
              local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (uint)(uStack_60 >> 0x20);
              plVar35[uVar41 * 4 + 2] = (longlong)local_58;
              (plVar35 + uVar41 * 4 + 2)[1] = uStack_50;
              plVar44 = plVar35 + uVar41 * 4;
              *(int *)plVar44 = (int)local_68;
              *(int *)((longlong)plVar44 + 4) = local_68._4_4_;
              *(int *)(plVar44 + 1) = (int)uStack_60;
              *(uint *)((longlong)plVar44 + 0xc) = uStack_60._4_4_;
              bVar46 = 2 < uVar37;
              uVar37 = uVar41;
              local_68 = pvVar4;
              uStack_60 = uVar10;
            } while (bVar46);
          }
        }
      }
LAB_140e4975a:
      plVar32 = plVar32 + -3;
    } while (&local_368 <= plVar32);
    uVar41 = uStack_450 & 0xffffffff;
  }
  local_348 = 0;
  local_340 = 0;
  local_368 = 0;
  lStack_360 = 0;
  local_33c = 0xffffffff00000080;
  local_334 = 0;
  local_328 = 0;
  local_320 = 0;
  if ((int)uVar41 < 1) {
LAB_140e4a06d:
    FUN_1457b78f6(local_490,&local_368);
LAB_140e4a07f:
    uVar41 = 0;
  }
  else {
    bVar46 = true;
    bVar8 = true;
    lVar23 = 8;
    uVar37 = 0;
    bVar12 = 0;
    do {
      bVar43 = bVar12;
      uVar39 = **(uint **)(local_458 + 8 + lVar23);
      local_4a0 = (void **)CONCAT71(local_4a0._1_7_,uVar37 != uVar39);
      uVar2 = **(uint **)(local_458 + 0x10 + lVar23);
      if ((uVar2 & uVar39) != 0xffffffff) {
        if (uVar39 != uVar2) {
          bVar46 = false;
        }
        bVar8 = bVar46;
        if (bVar46) {
          local_68 = (void *)0xffffffff7fffffff;
          puVar15 = (uint *)FUN_140e4a144(&local_368,*(undefined4 *)(local_458 + lVar23),
                                          local_458 + lVar23,&local_68);
          uVar18 = *puVar15;
          if ((int)uVar39 < (int)*puVar15) {
            uVar18 = uVar39;
          }
          *puVar15 = uVar18;
          uVar18 = puVar15[1];
          if ((int)puVar15[1] <= (int)uVar39) {
            uVar18 = uVar39;
          }
          puVar15[1] = uVar18;
          uVar41 = uStack_450 & 0xffffffff;
        }
      }
      bVar27 = ((ulonglong)uVar2 != 0xffffffff && uVar37 != uVar2) |
               (ulonglong)uVar39 != 0xffffffff & (byte)local_4a0;
      uVar37 = uVar37 + 1;
      lVar23 = lVar23 + 0x20;
      bVar12 = bVar43 | bVar27;
    } while ((longlong)uVar37 < (longlong)(int)uVar41);
    if (bVar43 == 0 && bVar27 == 0) {
      if (bVar8) goto LAB_140e4a06d;
      goto LAB_140e4a07f;
    }
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    ppvVar1 = (void **)(local_4a8 + 0x1d8);
    local_468 = (void *)0x0;
    uStack_460 = 0;
    local_478 = (void *)0x0;
    uStack_470 = 0;
    iVar19 = *(int *)(local_4a8 + 0x1e0);
    iVar13 = iVar19 - *(int *)(local_4a8 + 0x1f0);
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar13);
    }
    iVar21 = iVar19;
    if (iVar13 != 0) {
      FUN_14475e67c(&local_478,iVar13);
      iVar21 = *(int *)(local_4a8 + 0x1e0);
      iVar19 = *(int *)(local_4a8 + 0x1f0);
    }
    iVar21 = iVar21 - iVar19;
    if (iVar21 < 0) goto LAB_140e4a047;
    if ((int)uStack_470._4_4_ < iVar21) {
      FUN_14475e67c(&local_478);
    }
    uVar16 = FUN_140e4a7b6(&local_368);
    uVar14 = (undefined4)CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
    local_4a0 = ppvVar1;
    if ((int)uStack_450 < 1) {
      local_498 = (longlong *)CONCAT44(local_498._4_4_,uVar14);
    }
    else {
      local_498 = (longlong *)CONCAT44(local_498._4_4_,uVar14);
      lVar30 = 0;
      lVar23 = 0;
      do {
        uVar41 = uStack_60;
        iVar19 = **(int **)(local_458 + 0x10 + lVar30);
        iVar21 = **(int **)(local_458 + 0x18 + lVar30);
        iVar13 = -1;
        iVar36 = -1;
        if ((longlong)iVar19 != -1) {
          lVar3 = *(longlong *)(local_4a8 + 0x1b8);
          iVar36 = (int)uStack_60;
          uVar39 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar39);
          if (uStack_60._4_4_ < uVar39) {
            FUN_144a2c682(&local_68,uVar41 & 0xffffffff);
          }
          puVar29 = (undefined8 *)((longlong)iVar19 * 0x60 + lVar3);
          puVar31 = (undefined8 *)((longlong)iVar36 * 0x60 + (longlong)local_68);
          for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar31 = *puVar29;
            puVar29 = puVar29 + 1;
            puVar31 = puVar31 + 1;
          }
          **(int **)(local_458 + 0x10 + lVar30) = iVar36;
        }
        uVar41 = uStack_470;
        if (iVar21 != -1) {
          pvVar4 = *local_4a0;
          iVar13 = (int)uStack_470;
          uVar39 = (int)uStack_470 + 1;
          uStack_470 = CONCAT44(uStack_470._4_4_,uVar39);
          if (uStack_470._4_4_ < uVar39) {
            FUN_1401c3474(&local_478,uVar41 & 0xffffffff);
          }
          *(undefined1 *)((longlong)local_478 + (longlong)iVar13) =
               *(undefined1 *)((longlong)pvVar4 + (longlong)iVar21);
          **(int **)(local_458 + 0x18 + lVar30) = iVar13;
        }
        if ((iVar19 != -1) || (iVar21 == 0)) {
          if (iVar36 == iVar13) {
            local_480 = 0xffffffff7fffffff;
            puVar33 = (undefined4 *)(local_458 + lVar30 + 8);
            piVar17 = (int *)FUN_140e4a144(&local_368,*puVar33,puVar33,&local_480);
            iVar19 = *piVar17;
            if (iVar36 < *piVar17) {
              iVar19 = iVar36;
            }
            *piVar17 = iVar19;
            if (iVar36 < piVar17[1]) {
              iVar36 = piVar17[1];
            }
            piVar17[1] = iVar36;
          }
          else {
            local_498 = (longlong *)((ulonglong)local_498 & 0xffffffff00000000);
          }
        }
        lVar23 = lVar23 + 1;
        lVar30 = lVar30 + 0x20;
      } while (lVar23 < (int)uStack_450);
    }
    pvVar4 = local_68;
    puVar29 = (undefined8 *)(local_4a8 + 0x1b8);
    if (puVar29 != &local_68) {
      iVar19 = (int)uStack_60;
      lVar23 = (longlong)(int)uStack_60;
      *(int *)(local_4a8 + 0x1c0) = (int)uStack_60;
      if ((int)uStack_60 == 0 && *(int *)(local_4a8 + 0x1c4) == 0) {
        *(undefined4 *)(local_4a8 + 0x1c4) = 0;
      }
      else {
        FUN_144756262(puVar29,uStack_60 & 0xffffffff);
        if (iVar19 != 0) {
          memcpy((void *)*puVar29,pvVar4,lVar23 * 0x60);
        }
      }
    }
    pvVar4 = local_58;
    ppvVar9 = local_4a0;
    ppvVar1 = (void **)(local_4a8 + 0x1c8);
    if (ppvVar1 != &local_58) {
      iVar19 = (int)uStack_50;
      lVar23 = (longlong)(int)uStack_50;
      *(int *)(local_4a8 + 0x1d0) = (int)uStack_50;
      if ((int)uStack_50 == 0 && *(int *)(local_4a8 + 0x1d4) == 0) {
        *(undefined4 *)(local_4a8 + 0x1d4) = 0;
      }
      else {
        FUN_144a06ca8(ppvVar1,uStack_50 & 0xffffffff);
        if (iVar19 != 0) {
          memcpy(*ppvVar1,pvVar4,lVar23 << 2);
        }
      }
    }
    pvVar4 = local_478;
    if (ppvVar9 != &local_478) {
      iVar19 = (int)uStack_470;
      _Size = (size_t)(int)uStack_470;
      *(int *)(local_4a8 + 0x1e0) = (int)uStack_470;
      if ((int)uStack_470 == 0 && *(int *)(local_4a8 + 0x1e4) == 0) {
        *(undefined4 *)(local_4a8 + 0x1e4) = 0;
      }
      else {
        FUN_1447cd5fa(ppvVar9,uStack_470 & 0xffffffff);
        if (iVar19 != 0) {
          memcpy(*ppvVar9,pvVar4,_Size);
        }
      }
    }
    pvVar4 = local_468;
    ppvVar1 = (void **)(local_4a8 + 0x1e8);
    if (ppvVar1 != &local_468) {
      iVar19 = (int)uStack_460;
      lVar23 = (longlong)(int)uStack_460;
      *(int *)(local_4a8 + 0x1f0) = (int)uStack_460;
      if ((int)uStack_460 == 0 && *(int *)(local_4a8 + 500) == 0) {
        *(undefined4 *)(local_4a8 + 500) = 0;
      }
      else {
        FUN_144a06ca8(ppvVar1,uStack_460 & 0xffffffff);
        if (iVar19 != 0) {
          memcpy(*ppvVar1,pvVar4,lVar23 << 2);
        }
      }
    }
    FUN_140e4aa06(local_4a8);
    if (((ulonglong)local_498 & 1) == 0) {
      FUN_140e4a7b6(local_490);
    }
    else {
      FUN_1457b78f6(local_490,&local_368);
    }
    if (local_468 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_478 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar41 = CONCAT71((int7)((ulonglong)ppvVar1 >> 8),1);
  }
  local_320 = 0;
  if (local_328 != 0) {
    FUN_1400020a8();
  }
  FUN_140e4a704(&local_368);
  if (local_458 != 0) {
    FUN_1400020a8();
  }
  local_3c0 = 0;
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1457b77d6(&local_408);
  local_370 = 0;
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  FUN_1457b780c(&local_3b8);
LAB_140e49ff8:
  if ((local_48 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar41 & 0xffffffff;
LAB_140e495aa:
  local_68 = (void *)*plVar35;
  uStack_60 = plVar35[1];
  local_58 = (void *)plVar35[2];
  uStack_50 = plVar35[3];
  pvVar4 = local_68;
  uVar41 = uStack_60;
  lVar23 = *plVar42;
  lVar30 = plVar45[-3];
  lVar3 = plVar45[-1];
  plVar35[2] = plVar45[-2];
  plVar35[3] = lVar3;
  *plVar35 = lVar23;
  plVar35[1] = lVar30;
  local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (uint)(uStack_60 >> 0x20);
  plVar45[-2] = (longlong)local_58;
  plVar45[-1] = uStack_50;
  *(int *)plVar42 = (int)local_68;
  *(int *)((longlong)plVar45 + -0x1c) = local_68._4_4_;
  *(int *)(plVar45 + -3) = (int)uStack_60;
  *(uint *)((longlong)plVar45 + -0x14) = uStack_60._4_4_;
  iVar40 = (int)local_4a0 + -1;
  local_4a0 = (void **)CONCAT44(local_4a0._4_4_,iVar40);
  plVar45 = plVar45 + -8;
  local_498 = plVar32;
  local_488 = plVar38;
  local_68 = pvVar4;
  uStack_60 = uVar41;
  if ((longlong)plVar26 - (longlong)plVar38 < (longlong)plVar22 - (longlong)plVar28) {
    if (plVar34 < plVar44) {
      *plVar32 = (longlong)plVar34;
      plVar32[1] = (longlong)plVar44;
      *(int *)(plVar32 + 2) = iVar40;
      plVar32 = plVar32 + 3;
    }
    plVar22 = plVar26;
    plVar28 = plVar35;
    if (plVar42 <= plVar35 + 4) goto LAB_140e4975a;
  }
  else {
    if (plVar35 + 4 < plVar42) {
      *plVar32 = (longlong)plVar35;
      plVar32[1] = (longlong)plVar45;
      *(int *)(plVar32 + 2) = iVar40;
      plVar32 = plVar32 + 3;
    }
    plVar22 = plVar44;
    plVar35 = plVar34;
    plVar45 = plVar44;
    if (plVar44 <= plVar34) goto LAB_140e4975a;
  }
  iVar36 = (int)((ulonglong)((longlong)plVar22 - (longlong)plVar28) >> 5);
  uVar39 = iVar36 + 1;
  plVar44 = plVar45;
  if (iVar40 == 0) goto LAB_140e49777;
  goto LAB_140e4942e;
}



// FUNCTION 140e4a144 FUN_140e4a144 body=1471 status=ok
// SIG undefined FUN_140e4a144(void)

int * FUN_140e4a144(longlong *param_1,uint param_2,int *param_3,undefined8 *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  
  iVar18 = (int)param_1[1];
  iVar20 = *(int *)((longlong)param_1 + 0x34);
  if (iVar18 != iVar20) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if (*piVar1 == *param_3) {
          if (piVar1 != (int *)0x0) goto LAB_140e4a1a4;
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  if (iVar20 == 0) {
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_140171ad2(param_1,iVar18);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar5 = iVar20 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar7 = param_1 + 2;
    iVar10 = iVar20 + 1;
    iVar14 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar14 = iVar20;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar20;
        }
        else {
          uVar13 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar13) {
              uVar12 = uVar13;
            }
          }
          else {
            uVar12 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar12 << 2,0);
          iVar5 = (int)(uVar8 >> 2);
          iVar10 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar7,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar7;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar20 & 0x1f;
    puVar3 = (uint *)((longlong)plVar7 + (longlong)(iVar14 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar6 = (longlong)iVar18;
    iVar5 = *(int *)(*param_1 + 4 + lVar6 * 0x14);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar20 + -1;
    if (iVar20 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x14) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(param_1 + 2);
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = puVar3;
  }
  iVar20 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar20 = iVar18;
  }
  puVar11[iVar20 >> 5] = puVar11[iVar20 >> 5] | 1 << ((byte)iVar18 & 0x1f);
  uVar13 = 1;
  piVar1 = (int *)(*param_1 + lVar6 * 0x14);
  iVar20 = *param_3;
  *piVar1 = iVar20;
  *(undefined8 *)(piVar1 + 1) = *param_4;
  piVar1[3] = -1;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar12) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if (*piVar2 == iVar20) {
          uVar4 = *(undefined8 *)piVar1;
          piVar2[2] = piVar1[2];
          *(undefined8 *)piVar2 = uVar4;
          FUN_14920e1f6(param_1,iVar18);
          goto LAB_140e4a333;
        }
        iVar5 = piVar2[3];
      } while (iVar5 != -1);
    }
  }
  if (3 < uVar12) {
    uVar8 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar13 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    piVar1[4] = param_2;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    piVar1[3] = *(int *)((longlong)plVar7 +
                        ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar18;
    goto LAB_140e4a333;
  }
  *(uint *)(param_1 + 9) = uVar13;
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
    uVar13 = *(uint *)(param_1 + 9);
  }
  plVar16 = param_1 + 7;
  if (uVar13 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
LAB_140e4a389:
    uVar12 = 0;
    do {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar16;
      }
      *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4) =
           0xffffffff;
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar12);
  }
  else {
    if (uVar13 == 0) goto LAB_140e4a333;
    FUN_1446efa72(plVar7,0,uVar13,4);
    if (0 < (int)uVar13) goto LAB_140e4a389;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar8 = 0;
    uVar17 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar3;
    }
    uVar13 = *puVar11;
    if (uVar13 == 0) {
      iVar5 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar5 = iVar20 + -1;
      }
      uVar8 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar8;
      }
      iVar10 = 0;
      do {
        if (uVar17 == uVar8) goto LAB_140e4a333;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar11[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar8 = 0;
      iVar10 = 0;
    }
    uVar17 = (ulonglong)(-uVar13 & uVar13);
    uVar21 = uVar17 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar5) {
      iVar5 = iVar20;
    }
  }
  if (iVar5 < iVar20) {
    uVar13 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar19 = (longlong)iVar5;
      uVar21 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar19 * 0x14);
      iVar20 = (int)uVar21;
      *(int *)(lVar6 + 0x10 + lVar19 * 0x14) = iVar20;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar16;
      }
      *(undefined4 *)(lVar6 + 0xc + lVar19 * 0x14) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar16;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar13 = ~(uint)uVar17 & uVar13;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar3;
      }
      iVar20 = (int)param_1[5];
      iVar5 = (int)uVar8;
      lVar6 = (longlong)iVar5;
      uVar12 = puVar11[lVar6] & uVar13;
      if (uVar12 == 0) {
        iVar14 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar14 = iVar20 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar5) {
          iVar15 = iVar5;
        }
        if (iVar14 <= iVar5) break;
        lVar19 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar12 = puVar11[lVar6 + lVar19 + 1];
          if (uVar12 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar15 - lVar6 == lVar19) goto LAB_140e4a333;
        }
        uVar8 = (ulonglong)(iVar5 + (int)lVar19 + 1);
        uVar13 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar12 & uVar12);
      uVar21 = uVar17 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar20);
  }
LAB_140e4a333:
  piVar1 = (int *)(*param_1 + (longlong)iVar18 * 0x14);
LAB_140e4a1a4:
  return piVar1 + 1;
}



// FUNCTION 140e4a704 FUN_140e4a704 body=55 status=ok
// SIG undefined FUN_140e4a704(void)

void FUN_140e4a704(longlong *param_1)

{
  FUN_140e4a73c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e4a73c FUN_140e4a73c body=121 status=ok
// SIG undefined FUN_140e4a73c(void)

void FUN_140e4a73c(longlong param_1,int param_2)

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



// FUNCTION 140e4a7b6 FUN_140e4a7b6 body=380 status=ok
// SIG undefined FUN_140e4a7b6(void)

void FUN_140e4a7b6(longlong *param_1)

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
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
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
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e4a934 FUN_140e4a934 body=210 status=ok
// SIG undefined FUN_140e4a934(void)

void FUN_140e4a934(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 140e4aa06 FUN_140e4aa06 body=221 status=ok
// SIG undefined FUN_140e4aa06(void)

void FUN_140e4aa06(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      local_50 = *(undefined8 *)(param_1 + 0x1f8);
      local_48 = *(undefined4 *)(param_1 + 0x200);
      local_60 = *(undefined8 *)(param_1 + 0x1d8);
      local_58 = *(undefined4 *)(param_1 + 0x1e0);
      local_70 = *(undefined8 *)(param_1 + 0x1b8);
      local_68 = *(undefined4 *)(param_1 + 0x1c0);
      (**(code **)(*plVar3 + 0x48))(plVar3,&local_70,&local_60,&local_50);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_140e4a7b6(param_1 + 0x218);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4aae4 FUN_140e4aae4 body=45 status=ok
// SIG undefined FUN_140e4aae4(void)

void FUN_140e4aae4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e4ab72(param_1 + 0x48);
  FUN_140e4ab12(param_1 + 0x88,param_3);
  return;
}



// FUNCTION 140e4ab12 FUN_140e4ab12 body=96 status=ok
// SIG undefined FUN_140e4ab12(void)

void FUN_140e4ab12(int *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[4];
  iVar2 = (int)param_2[1];
  if ((-1 < (longlong)iVar1) && (iVar1 < iVar2)) {
    *(longlong *)(param_1 + 6) = (longlong)iVar1 + *param_2;
    iVar2 = (int)param_2[1];
  }
  iVar1 = *param_1;
  if ((-1 < (longlong)iVar1) && (iVar1 < iVar2)) {
    *(longlong *)(param_1 + 2) = (longlong)iVar1 + *param_2;
    iVar2 = (int)param_2[1];
  }
  iVar1 = param_1[0xc];
  if ((-1 < (longlong)iVar1) && (iVar1 < iVar2)) {
    *(longlong *)(param_1 + 0xe) = (longlong)iVar1 + *param_2;
    iVar2 = (int)param_2[1];
  }
  iVar1 = param_1[8];
  if ((-1 < (longlong)iVar1) && (iVar1 < iVar2)) {
    *(longlong *)(param_1 + 10) = (longlong)iVar1 + *param_2;
  }
  return;
}



// FUNCTION 140e4ab72 FUN_140e4ab72 body=128 status=ok
// SIG undefined FUN_140e4ab72(void)

void FUN_140e4ab72(int *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = (int)param_2[1];
  if ((-1 < (longlong)iVar1) && (iVar1 < iVar2)) {
    *(longlong *)(param_1 + 2) = (longlong)iVar1 * 0x60 + *param_2;
    iVar2 = (int)param_2[1];
  }
  iVar1 = param_1[4];
  if ((-1 < (longlong)iVar1) && (iVar1 < iVar2)) {
    *(longlong *)(param_1 + 6) = (longlong)iVar1 * 0x60 + *param_2;
    iVar2 = (int)param_2[1];
  }
  iVar1 = param_1[8];
  if ((-1 < (longlong)iVar1) && (iVar1 < iVar2)) {
    *(longlong *)(param_1 + 10) = (longlong)iVar1 * 0x60 + *param_2;
    iVar2 = (int)param_2[1];
  }
  iVar1 = param_1[0xc];
  if ((-1 < (longlong)iVar1) && (iVar1 < iVar2)) {
    *(longlong *)(param_1 + 0xe) = (longlong)iVar1 * 0x60 + *param_2;
  }
  return;
}



// FUNCTION 140e4abf2 FUN_140e4abf2 body=1751 status=ok
// SIG undefined FUN_140e4abf2(void)

void FUN_140e4abf2(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = (longlong)*(int *)(param_1 + 0xc0);
  local_a0 = param_2;
  if (local_80 != 0) {
    local_70 = *(longlong *)(param_1 + 0xb8);
    local_88 = param_2 + 4;
    local_80 = local_80 << 3;
    lVar8 = 0;
    do {
      plVar4 = local_88;
      plVar6 = local_a0;
      lVar2 = *(longlong *)(local_70 + lVar8);
      if ((lVar2 != 0) &&
         ((bVar1 = *(byte *)(lVar2 + 0x10), bVar1 - 1 < 2 ||
          (((bVar1 < 0x21 && ((0x100010010U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) != 0)) ||
           (bVar1 == 0x80)))))) {
        local_90 = lVar2 + 0x88;
        local_50 = lVar2 + 0xb8;
        local_98 = lVar2 + 0x48;
        local_58 = lVar2 + 0x68;
        local_5c = 0;
        local_60 = 0;
        pcVar3 = (code *)*local_a0;
        plVar7 = (longlong *)local_a0[2];
        if ((longlong *)local_a0[2] == (longlong *)0x0) {
          plVar7 = local_88;
        }
        local_78 = lVar8;
        local_68 = lVar2;
        uVar5 = (**(code **)(*plVar7 + 8))();
        local_b8 = &local_58;
        local_b0 = &local_50;
        (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
        local_58 = lVar2 + 0x78;
        local_5c = 0;
        local_60 = 2;
        pcVar3 = (code *)*plVar6;
        plVar7 = (longlong *)plVar6[2];
        if ((longlong *)plVar6[2] == (longlong *)0x0) {
          plVar7 = plVar4;
        }
        local_68 = lVar2;
        local_50 = lVar2 + 0xa8;
        uVar5 = (**(code **)(*plVar7 + 8))();
        local_b8 = &local_58;
        local_b0 = &local_50;
        (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
        local_50 = lVar2 + 0x98;
        local_58 = local_98;
        local_5c = 0;
        local_60 = 1;
        pcVar3 = (code *)*plVar6;
        plVar7 = (longlong *)plVar6[2];
        if ((longlong *)plVar6[2] == (longlong *)0x0) {
          plVar7 = plVar4;
        }
        local_68 = lVar2;
        uVar5 = (**(code **)(*plVar7 + 8))();
        local_b0 = &local_50;
        local_b8 = &local_58;
        (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
        local_58 = lVar2 + 0x58;
        local_50 = local_90;
        local_5c = 0;
        local_60 = 3;
        pcVar3 = (code *)*plVar6;
        plVar7 = (longlong *)plVar6[2];
        if ((longlong *)plVar6[2] == (longlong *)0x0) {
          plVar7 = plVar4;
        }
        local_68 = lVar2;
        uVar5 = (**(code **)(*plVar7 + 8))();
        local_b0 = &local_50;
        local_b8 = &local_58;
        (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
        plVar4 = local_88;
        plVar6 = local_a0;
        lVar8 = local_78;
        if (*(char *)(lVar2 + 0x10) == '\x04') {
          local_90 = lVar2 + 0x440;
          local_50 = lVar2 + 0x470;
          local_98 = lVar2 + 0x400;
          local_58 = lVar2 + 0x420;
          local_5c = 1;
          local_60 = 0;
          pcVar3 = (code *)*local_a0;
          plVar7 = (longlong *)local_a0[2];
          if ((longlong *)local_a0[2] == (longlong *)0x0) {
            plVar7 = local_88;
          }
          local_68 = lVar2;
          uVar5 = (**(code **)(*plVar7 + 8))();
          local_b0 = &local_50;
          local_b8 = &local_58;
          (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
          local_58 = lVar2 + 0x430;
          local_5c = 1;
          local_60 = 2;
          pcVar3 = (code *)*plVar6;
          plVar7 = (longlong *)plVar6[2];
          if ((longlong *)plVar6[2] == (longlong *)0x0) {
            plVar7 = plVar4;
          }
          local_68 = lVar2;
          local_50 = lVar2 + 0x460;
          uVar5 = (**(code **)(*plVar7 + 8))();
          local_b8 = &local_58;
          local_b0 = &local_50;
          (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
          local_50 = lVar2 + 0x450;
          local_58 = local_98;
          local_5c = 1;
          local_60 = 1;
          pcVar3 = (code *)*plVar6;
          plVar7 = (longlong *)plVar6[2];
          if ((longlong *)plVar6[2] == (longlong *)0x0) {
            plVar7 = plVar4;
          }
          local_68 = lVar2;
          uVar5 = (**(code **)(*plVar7 + 8))();
          local_b8 = &local_58;
          local_b0 = &local_50;
          (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
          local_58 = lVar2 + 0x410;
          local_50 = local_90;
          local_5c = 1;
          local_60 = 3;
          pcVar3 = (code *)*plVar6;
          plVar7 = (longlong *)plVar6[2];
          if ((longlong *)plVar6[2] == (longlong *)0x0) {
            plVar7 = plVar4;
          }
          local_68 = lVar2;
          uVar5 = (**(code **)(*plVar7 + 8))();
          local_b8 = &local_58;
          local_b0 = &local_50;
          (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
          local_90 = lVar2 + 0x4c0;
          local_50 = lVar2 + 0x4f0;
          local_98 = lVar2 + 0x480;
          local_58 = lVar2 + 0x4a0;
          local_5c = 2;
          local_60 = 0;
          pcVar3 = (code *)*plVar6;
          plVar7 = (longlong *)plVar6[2];
          if ((longlong *)plVar6[2] == (longlong *)0x0) {
            plVar7 = plVar4;
          }
          local_68 = lVar2;
          uVar5 = (**(code **)(*plVar7 + 8))();
          local_b0 = &local_50;
          local_b8 = &local_58;
          (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
          local_58 = lVar2 + 0x4b0;
          local_5c = 2;
          local_60 = 2;
          pcVar3 = (code *)*plVar6;
          plVar7 = (longlong *)plVar6[2];
          if ((longlong *)plVar6[2] == (longlong *)0x0) {
            plVar7 = plVar4;
          }
          local_68 = lVar2;
          local_50 = lVar2 + 0x4e0;
          uVar5 = (**(code **)(*plVar7 + 8))();
          local_b0 = &local_50;
          local_b8 = &local_58;
          (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
          local_50 = lVar2 + 0x4d0;
          local_58 = local_98;
          local_5c = 2;
          local_60 = 1;
          pcVar3 = (code *)*plVar6;
          plVar7 = (longlong *)plVar6[2];
          if ((longlong *)plVar6[2] == (longlong *)0x0) {
            plVar7 = plVar4;
          }
          local_68 = lVar2;
          uVar5 = (**(code **)(*plVar7 + 8))();
          local_b0 = &local_50;
          local_b8 = &local_58;
          (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
          local_58 = lVar2 + 0x490;
          local_50 = local_90;
          local_5c = 2;
          local_60 = 3;
          pcVar3 = (code *)*plVar6;
          plVar7 = (longlong *)plVar6[2];
          if ((longlong *)plVar6[2] == (longlong *)0x0) {
            plVar7 = plVar4;
          }
          local_68 = lVar2;
          uVar5 = (**(code **)(*plVar7 + 8))();
          local_b0 = &local_50;
          local_b8 = &local_58;
          (*pcVar3)(uVar5,&local_68,&local_60,&local_5c);
          lVar8 = local_78;
        }
      }
      lVar8 = lVar8 + 8;
    } while (local_80 != lVar8);
  }
  if (*local_a0 != 0) {
    plVar6 = local_a0 + 4;
    if ((longlong *)local_a0[2] != (longlong *)0x0) {
      plVar6 = (longlong *)local_a0[2];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e4b2ca FUN_140e4b2ca body=266 status=ok
// SIG undefined FUN_140e4b2ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e4b2ca(undefined4 *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c87e460) {
    FUN_144b3d300(&DAT_14c87e460);
    if (DAT_14c87e460 == -1) {
      InitializeSRWLock((PSRWLOCK)&DAT_14c87d788);
      DAT_14c87e3a0 = 0;
      _DAT_14c87e3a8 = 0x4000000000;
      DAT_14c87d790 = 0;
      _DAT_14c87d798 = 0;
      DAT_14c87e3b8 = 0;
      _DAT_14c87e3c0 = 0x4000000000;
      uRam000000014c87e3c8 = 0xffffffff;
      DAT_14c87e450 = 0;
      _DAT_14c87e458 = 0;
      atexit((_func_5014 *)&LAB_142790ecc);
      _Init_thread_footer(&DAT_14c87e460);
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c87d788);
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_140e4b3d6(&DAT_14c87d788);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c87d788);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4b3d6 FUN_140e4b3d6 body=151 status=ok
// SIG undefined FUN_140e4b3d6(void)

void FUN_140e4b3d6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_140e4b56c(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar3 = FUN_140e4b46e(param_1 + 8,param_2);
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x14 + (longlong)(int)uVar3 * 0x28);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0x10);
      iVar4 = ~uVar3 + iVar2;
      if (iVar4 != 0) {
        iVar5 = 1;
        if (iVar4 < 1) {
          iVar5 = iVar4;
        }
        memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar3 * 0x28),
                (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar5) * 0x28),
                (longlong)iVar5 * 0x28);
        iVar2 = *(int *)(param_1 + 0x10);
      }
      *(int *)(param_1 + 0x10) = iVar2 + -1;
      FUN_140e4b4d4(param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 140e4b46e FUN_140e4b46e body=101 status=ok
// SIG undefined FUN_140e4b46e(void)

int FUN_140e4b46e(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    uVar3 = 0;
    do {
      if ((((*(int *)(lVar2 + uVar3) == *param_2) && (*(int *)(lVar2 + 4 + uVar3) == param_2[1])) &&
          (*(int *)(lVar2 + 8 + uVar3) == param_2[2])) &&
         (*(int *)(lVar2 + 0xc + uVar3) == param_2[3])) {
        return (int)(uVar3 >> 3) * -0x33333333;
      }
      lVar1 = lVar2 + uVar3;
      uVar3 = uVar3 + 0x28;
    } while (lVar1 + 0x28 != lVar2 + (longlong)(int)param_1[1] * 0x28);
  }
  return -1;
}



// FUNCTION 140e4b4d4 FUN_140e4b4d4 body=151 status=ok
// SIG undefined FUN_140e4b4d4(void)

void FUN_140e4b4d4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x28)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x28,8);
      uVar3 = uVar3 / 0x28;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x28,8);
    }
  }
  return;
}



// FUNCTION 140e4b56c FUN_140e4b56c body=197 status=ok
// SIG undefined FUN_140e4b56c(void)

undefined8 FUN_140e4b56c(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xc08) != *(int *)(param_1 + 0xc2c)) {
    iVar1 = FUN_1447addd0(param_2,0x10);
    lVar2 = param_1 + 0xc30;
    if (*(longlong *)(param_1 + 0xcb0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xcb0);
    }
    iVar1 = *(int *)(lVar2 + ((longlong)iVar1 & (longlong)*(int *)(param_1 + 0xcb8) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xc00);
      if (*(longlong *)(param_1 + 0xc00) == 0) {
        lVar2 = param_1;
      }
      do {
        lVar3 = (longlong)iVar1 * 0x30;
        if ((((*(int *)(lVar2 + lVar3) == *param_2) && (*(int *)(lVar2 + 4 + lVar3) == param_2[1]))
            && (*(int *)(lVar2 + 8 + lVar3) == param_2[2])) &&
           (*(int *)(lVar2 + 0xc + lVar3) == param_2[3])) {
          FUN_14682887e(param_1);
          return 1;
        }
        iVar1 = *(int *)(lVar3 + lVar2 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140e4b638 FUN_140e4b638 body=57 status=ok
// SIG undefined FUN_140e4b638(void)

void FUN_140e4b638(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb230b8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb230b8 = FUN_140002ddd(FUN_14643caf5,uVar1,L"GpsTestSettings_CoverTrace");
  }
  return;
}



// FUNCTION 140e4b678 FUN_140e4b678 body=135 status=ok
// SIG undefined FUN_140e4b678(void)

undefined8 FUN_140e4b678(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  
  if (*(char *)(param_1 + 0x148) == '\x01') {
    iVar1 = FUN_14087fa96(param_1);
    if (iVar1 == 0) goto LAB_140e4b6a8;
    *(undefined1 *)(param_1 + 0x148) = 0;
  }
  else if (*(char *)(param_1 + 0x149) != '\0') goto LAB_140e4b6a8;
  FUN_145ac7fa0(param_1);
LAB_140e4b6a8:
  uVar3 = 0;
  if (*(char *)(param_1 + 0x149) == '\x01') {
    if (*(char *)(param_1 + 0x42) != '\x01') {
      lVar2 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
      if (lVar2 == 0) {
        dVar4 = 0.0;
      }
      else {
        dVar4 = *(double *)(lVar2 + 0x6d0);
      }
      if (dVar4 - *(double *)(param_1 + 0x140) < 1.0) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140e4b700 FUN_140e4b700 body=765 status=ok
// SIG undefined FUN_140e4b700(void)

void FUN_140e4b700(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8 [2];
  longlong local_d8;
  longlong *local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined4 local_98;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_1 + 0x2608) = 0;
  lVar3 = *(longlong *)(param_1 + 0x2650);
  if (lVar3 == 0) {
    local_c8 = (uint)*(undefined8 *)(param_1 + 0x2640);
    uStack_c4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2640) >> 0x20);
    lVar3 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2650) = lVar3;
    if (lVar3 == 0) goto LAB_140e4b76d;
  }
  FUN_140e4b9fe(lVar3 + 0x38,&local_d8);
  if ((((local_d8 != 0) && (*(char *)(local_d8 + 0x2a) == '\x01')) &&
      (lVar3 = FUN_141563480(local_d8 + 0x30), lVar3 != 0)) &&
     ((lVar4 = FUN_1447210f0(param_1), lVar4 != 0 && (*(longlong *)(lVar4 + 0x1f0) != 0)))) {
    lVar5 = FUN_145725aea(*(longlong *)(lVar4 + 0x1f0),1);
    if (lVar5 != 0) {
      lVar6 = FUN_1449f3324();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        lVar4 = FUN_140149a73(lVar4,0);
        if ((lVar4 != 0) &&
           (plVar7 = (longlong *)FUN_140ed30b4(lVar4,lVar5), plVar7 != (longlong *)0x0)) {
          local_c8 = local_c8 & 0xffffff00;
          uStack_c4 = 0;
          uStack_c0 = 0;
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          uStack_ac = 0;
          local_a4 = 0;
          local_98 = 0xc69c4000;
          local_48 = 0;
          local_40 = 0;
          local_38 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_50 = 0;
          local_37 = 1;
          local_35 = 0;
          local_34 = 0;
          local_f8 = &LAB_148e16994;
          local_f0 = 0;
          FUN_148e168e6(local_e8,param_1);
          FUN_144a450dc((longlong)&uStack_ac + 4,local_e8);
          FUN_1449db362(local_e8);
          (**(code **)(*plVar7 + 0x28))(plVar7,local_e8,lVar3 + 0x90,&local_c8);
          *(undefined8 *)(param_1 + 0x2600) = local_e8[0];
          FUN_140f35564(param_1);
          FUN_1409838b8(&local_c8);
        }
        goto LAB_140e4b759;
      }
    }
    local_c8 = 0x40e4b700;
    uStack_c4 = 1;
    uStack_c0 = 0;
    FUN_148e16838(local_e8,param_1);
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar8 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar8;
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    FUN_14487d8d8(&local_c8,local_e8);
    uStack_88 = CONCAT71(uStack_88._1_7_,1);
    local_100 = 0xbf800000;
    local_108 = 0;
    FUN_1406f3fee(uVar2,param_1 + 0x2608,&local_c8,0x3f800000);
    (*(code *)(&PTR_LAB_14a1c87a0)[uStack_88 & 0xff])(&local_c8);
    FUN_1449db362(local_e8);
  }
LAB_140e4b759:
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_d0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
LAB_140e4b76d:
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e4b9fe FUN_140e4b9fe body=83 status=ok
// SIG undefined FUN_140e4b9fe(void)

longlong * FUN_140e4b9fe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140e4ba52();
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



// FUNCTION 140e4ba52 FUN_140e4ba52 body=57 status=ok
// SIG undefined FUN_140e4ba52(void)

void FUN_140e4ba52(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabed8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabed8 = FUN_140002ddd(FUN_1465df8dd,uVar1,L"OakLevelStationData");
  }
  return;
}



// FUNCTION 140e4ba9a FUN_140e4ba9a body=73 status=ok
// SIG undefined FUN_140e4ba9a(void)

undefined8 * FUN_140e4ba9a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b366bf0;
  FUN_14029b636(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e4bae4 FUN_140e4bae4 body=154 status=ok
// SIG undefined FUN_140e4bae4(void)

longlong FUN_140e4bae4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140e4bb39;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140e4bb39:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140e4bb7e(param_1,param_2);
  return param_1;
}



// FUNCTION 140e4bb7e FUN_140e4bb7e body=242 status=ok
// SIG undefined FUN_140e4bb7e(void)

undefined8 * FUN_140e4bb7e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140039cd6(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140eb2a54(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x158);
    }
  }
  return param_1;
}



// FUNCTION 140e4bc70 FUN_140e4bc70 body=240 status=ok
// SIG undefined FUN_140e4bc70(void)

void FUN_140e4bc70(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else if (param_2 < 0x21) {
    iVar4 = 0x20;
  }
  else {
    uVar2 = (longlong)(int)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)(int)param_2 & 0xfffffffffffffff]
                          ];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0x20c)) {
    *(int *)(param_1 + 0x20c) = iVar4;
    FUN_140e4bd60(param_1,*(undefined4 *)(param_1 + 0x208));
    return;
  }
  return;
}



// FUNCTION 140e4bd60 FUN_140e4bd60 body=141 status=ok
// SIG undefined FUN_140e4bd60(void)

void FUN_140e4bd60(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x10);
  return;
}



// FUNCTION 140e4bdee FUN_140e4bdee body=105 status=ok
// SIG undefined FUN_140e4bdee(void)

void FUN_140e4bdee(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140e4bea4();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140e4be58(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4be58 FUN_140e4be58 body=76 status=ok
// SIG undefined FUN_140e4be58(void)

void FUN_140e4be58(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140e4bea4();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140e4be95;
    }
  }
  lVar2 = 0;
LAB_140e4be95:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140e4bea4 FUN_140e4bea4 body=228 status=ok
// SIG undefined FUN_140e4bea4(void)

longlong FUN_140e4bea4(void)

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
  if (DAT_14cb98c40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_148ac9cfd;
    local_40 = FUN_14658a80d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GbxDecorator",L"GbxDecoratorWithFactsSubsystem",&DAT_14cb98c40,
                  &DAT_148ac9cfc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb98c40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4bf8a FUN_140e4bf8a body=45 status=ok
// SIG undefined FUN_140e4bf8a(void)

undefined8 FUN_140e4bf8a(undefined8 param_1,int param_2)

{
  FUN_140e4bfb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 140e4bfb8 FUN_140e4bfb8 body=329 status=ok
// SIG undefined FUN_140e4bfb8(void)

void FUN_140e4bfb8(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d16d0;
  FUN_1403d8100(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x1b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x14;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x18) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x17)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x17)) {
    FUN_1400020a8(*plVar1);
  }
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



// FUNCTION 140e4c110 FUN_140e4c110 body=72 status=ok
// SIG undefined FUN_140e4c110(void)

undefined8 * FUN_140e4c110(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b747cf0;
  if (param_1[0x1a7] != 0) {
    FUN_1400020a8();
  }
  FUN_1413fe536(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e4c158 FUN_140e4c158 body=81 status=ok
// SIG undefined FUN_140e4c158(void)

void FUN_140e4c158(longlong param_1)

{
  float fVar1;
  
  FUN_140e4c1aa();
  if ((*(char *)(param_1 + 0x50) == '\x02') && (0.0 <= *(float *)(param_1 + 0x2c0))) {
    fVar1 = (float)FUN_141236616(param_1);
    if (*(float *)(param_1 + 0x2c0) <= fVar1 && fVar1 != *(float *)(param_1 + 0x2c0)) {
      *(undefined4 *)(param_1 + 0x2c0) = 0xbf800000;
      FUN_145bef4ca(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140e4c1aa FUN_140e4c1aa body=48 status=ok
// SIG undefined FUN_140e4c1aa(void)

void FUN_140e4c1aa(longlong *param_1)

{
  char cVar1;
  
  FUN_1414894c6();
  cVar1 = (**(code **)(*param_1 + 0xe0))(param_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 140e4c1da FUN_140e4c1da body=2513 status=ok
// SIG undefined FUN_140e4c1da(void)

void FUN_140e4c1da(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong local_88;
  undefined8 *local_80;
  code *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1400ef488();
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar1 = lVar3 + 0x240;
  local_88 = param_1 + 0x530;
  *(undefined4 *)(param_1 + 0x538) = 0;
  if (*(int *)(param_1 + 0x53c) < 0) {
    FUN_1447a8aa0(local_88,0);
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  uVar8 = FUN_140e4cbdc(lVar4 + 0x68,lVar1,lVar4 + 0x80);
  *(undefined4 *)(param_1 + 0x544) = uVar8;
  local_78 = *(code **)(lVar4 + 0x58);
  plVar10 = (longlong *)FUN_14030a1e6(lVar4 + 0x40,lVar1,&local_78);
  if (plVar10 != (longlong *)0x0) {
    if (DAT_14cb22468 == 0) {
      local_78 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_1427b09ee;
      local_a8 = &LAB_147f2c44f;
      local_b0 = FUN_146438a21;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10004001;
      local_d0 = 8;
      local_d8 = 0x28;
      local_a0 = &local_78;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
    }
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,DAT_14cb22468);
    if (plVar10 != (longlong *)0x0) {
      if (DAT_14cb22468 == 0) {
        local_78 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_1427b09ee;
        local_a8 = &LAB_147f2c44f;
        local_b0 = FUN_146438a21;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x10004001;
        local_d0 = 8;
        local_d8 = 0x28;
        local_a0 = &local_78;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
      }
      plVar11 = (longlong *)FUN_144718840(plVar10,DAT_14cb22468);
      if ((plVar10 != plVar11) && (plVar11 != (longlong *)0x0)) {
        lVar12 = (**(code **)(*plVar11 + 0x10))(plVar11);
        if (lVar12 != 0) {
          if (*(char *)(lVar4 + 0xe8) == '\x01') {
LAB_140e4cbc0:
            uVar6 = 0;
LAB_140e4c31b:
            *(undefined1 *)(param_1 + 0x458) = uVar6;
          }
          else {
            uVar6 = 1;
            if (*(char *)(lVar4 + 0xe8) != '\x02') goto LAB_140e4c31b;
            *(undefined1 *)(param_1 + 0x458) = 1;
            lVar15 = FUN_144a8069e(lVar3);
            if (lVar15 != 0) {
              lVar13 = FUN_144a7cacc();
              if (((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) &&
                 (lVar15 = *(longlong *)(lVar15 + 0x430), lVar15 != 0)) {
                cVar7 = (**(code **)(*(longlong *)(lVar15 + 0x178) + 0xf0))(lVar15 + 0x178);
                if (cVar7 != '\0') goto LAB_140e4cbc0;
              }
            }
          }
          fVar20 = (float)FUN_140309e34(lVar4 + 0x88,lVar1,lVar4 + 0xa0);
          dVar25 = (double)(float)(~-(uint)(0.0 < fVar20) & 0x43fa0000 |
                                  (uint)fVar20 & -(uint)(0.0 < fVar20));
          *(double *)(param_1 + 0x418) = dVar25;
          *(double *)(param_1 + 0x420) = dVar25;
          *(double *)(param_1 + 0x428) = dVar25;
          lVar12 = FUN_14040c778(lVar12,*(undefined1 *)(lVar4 + 0x60));
          *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(lVar12 + 8);
          *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(lVar12 + 0x10);
          if (param_1 + 0x460 != lVar12) {
            iVar9 = *(int *)(lVar12 + 0x20);
            pvVar5 = *(void **)(lVar12 + 0x18);
            *(int *)(param_1 + 0x480) = iVar9;
            if (iVar9 == 0 && *(int *)(param_1 + 0x484) == 0) {
              *(undefined4 *)(param_1 + 0x484) = 0;
            }
            else {
              local_80 = (undefined8 *)(param_1 + 0x478);
              FUN_1447bda9e(local_80,iVar9);
              if (iVar9 != 0) {
                memcpy((void *)*local_80,pvVar5,(longlong)iVar9 << 2);
              }
            }
          }
          FUN_140186fe6(param_1 + 0x488,lVar12 + 0x28);
          *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(lVar12 + 0x40);
          *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(lVar12 + 0x48);
          if (param_1 + 0x460 != lVar12) {
            iVar9 = *(int *)(lVar12 + 0x58);
            pvVar5 = *(void **)(lVar12 + 0x50);
            *(int *)(param_1 + 0x4b8) = iVar9;
            if (iVar9 == 0 && *(int *)(param_1 + 0x4bc) == 0) {
              *(undefined4 *)(param_1 + 0x4bc) = 0;
            }
            else {
              FUN_1447bda9e((undefined8 *)(param_1 + 0x4b0),iVar9);
              if (iVar9 != 0) {
                memcpy(*(void **)(param_1 + 0x4b0),pvVar5,(longlong)iVar9 << 2);
              }
            }
          }
          FUN_140186fe6(param_1 + 0x4c0,lVar12 + 0x60);
          puVar18 = (undefined8 *)(lVar12 + 0x70);
          puVar19 = (undefined8 *)(param_1 + 0x4d0);
          for (lVar15 = 0xb; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar19 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar19 = puVar19 + 1;
          }
          *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(lVar12 + 200);
          if (((((*(float *)(param_1 + 0x524) == 3.4028235e+38) &&
                (!NAN(*(float *)(param_1 + 0x524)))) &&
               ((*(int *)(lVar3 + 0x4c) != 0 &&
                ((uVar17 = *(uint *)(lVar3 + 0x48), -1 < (int)uVar17 &&
                 ((int)uVar17 < DAT_14c9647dc)))))) &&
              (plVar10 = (longlong *)
                         ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
              plVar10 != (longlong *)0x0)) &&
             ((((int)plVar10[2] == *(int *)(lVar3 + 0x4c) &&
               ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar10, lVar3 != 0)))) {
            if (DAT_14cac9ca8 == 0) {
              local_78 = FUN_141030f22;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_14081d0ea;
              local_a0 = &local_78;
              local_a8 = &LAB_1478c0a72;
              local_b0 = (code *)&LAB_1417b2375;
              local_b8 = L"Engine";
              local_c0 = 0x1000000000;
              local_c8 = 0x10000004;
              local_d0 = 8;
              local_d8 = 0x390;
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            }
            if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
              if (*(longlong *)(lVar3 + 0x1c8) == 0) {
                uVar8 = (undefined4)DAT_14c8464f0;
                uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              }
              else {
                uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x1c8) + 0x270);
                uVar8 = (undefined4)uVar2;
                uVar22 = (undefined4)((ulonglong)uVar2 >> 0x20);
              }
              *(ulonglong *)(param_1 + 0x518) = CONCAT44(uVar22,uVar8);
            }
          }
          fVar20 = (float)FUN_140309e34(lVar4 + 0xa8,lVar1,lVar4 + 0xc0);
          fVar21 = (float)FUN_140309e34(lVar4 + 200,lVar1,lVar4 + 0xe0);
          if ((*(char *)(param_1 + 0x528) == '\0') && (*(char *)(param_1 + 0x500) != '\0')) {
            dVar23 = *(double *)(param_1 + 0x4f8) - *(double *)(param_1 + 0x4e0);
            dVar24 = *(double *)(param_1 + 0x4f0) - *(double *)(param_1 + 0x4d8);
            dVar25 = *(double *)(param_1 + 0x4e8) - *(double *)(param_1 + 0x4d0);
            *(double *)(param_1 + 0x430) = dVar25;
            *(double *)(param_1 + 0x438) = dVar24;
            *(double *)(param_1 + 0x440) = dVar23;
            dVar26 = (double)(fVar20 + fVar20);
            if (dVar26 < dVar25) {
              *(double *)(param_1 + 0x418) = (dVar25 / dVar26) * *(double *)(param_1 + 0x418);
            }
            if (dVar26 < dVar24) {
              *(double *)(param_1 + 0x420) = (dVar24 / dVar26) * *(double *)(param_1 + 0x420);
            }
            if ((*(float *)(param_1 + 0x524) == 3.4028235e+38) &&
               (!NAN(*(float *)(param_1 + 0x524)))) {
              dVar23 = (double)(fVar21 + fVar21);
              *(double *)(param_1 + 0x440) = dVar23;
            }
          }
          else {
            dVar24 = (double)(fVar20 + fVar20);
            *(double *)(param_1 + 0x430) = dVar24;
            *(double *)(param_1 + 0x438) = dVar24;
            dVar23 = (double)(fVar21 + fVar21);
            *(double *)(param_1 + 0x440) = dVar23;
            dVar25 = dVar24;
          }
          dVar25 = dVar25 / *(double *)(param_1 + 0x418);
          iVar9 = (int)((ulonglong)(longlong)ROUND(dVar25 + dVar25 + 0.5) >> 1);
          *(int *)(param_1 + 0x44c) = iVar9;
          dVar24 = dVar24 / *(double *)(param_1 + 0x420);
          iVar16 = (int)((ulonglong)(longlong)ROUND(dVar24 + dVar24 + 0.5) >> 1);
          *(int *)(param_1 + 0x450) = iVar16;
          iVar14 = 1;
          if (*(char *)(param_1 + 0x458) == '\0') {
            dVar23 = dVar23 / *(double *)(param_1 + 0x428);
            iVar14 = (int)((ulonglong)(longlong)ROUND(dVar23 + dVar23 + 0.5) >> 1);
          }
          *(int *)(param_1 + 0x454) = iVar14;
          uVar17 = iVar16 * iVar9 * iVar14;
          *(uint *)(param_1 + 0x448) = uVar17;
          if ((int)uVar17 < 0x10) {
            fVar20 = 16.0;
LAB_140e4c5d6:
            fVar20 = powf(fVar20 / (float)(int)uVar17,0.33333334);
            dVar25 = (double)fVar20;
            dVar23 = *(double *)(param_1 + 0x440) / ((double)*(int *)(param_1 + 0x454) * dVar25);
            dVar24 = *(double *)(param_1 + 0x438) / ((double)*(int *)(param_1 + 0x450) * dVar25);
            dVar25 = *(double *)(param_1 + 0x430) / ((double)*(int *)(param_1 + 0x44c) * dVar25);
            *(double *)(param_1 + 0x418) = dVar25;
            *(double *)(param_1 + 0x420) = dVar24;
            *(double *)(param_1 + 0x428) = dVar23;
            dVar25 = *(double *)(param_1 + 0x430) / dVar25;
            iVar9 = (int)((ulonglong)(longlong)ROUND(dVar25 + dVar25 + 0.5) >> 1);
            *(int *)(param_1 + 0x44c) = iVar9;
            dVar24 = *(double *)(param_1 + 0x438) / dVar24;
            iVar16 = (int)((ulonglong)(longlong)ROUND(dVar24 + dVar24 + 0.5) >> 1);
            *(int *)(param_1 + 0x450) = iVar16;
            iVar14 = 1;
            if (*(char *)(param_1 + 0x458) == '\0') {
              dVar23 = *(double *)(param_1 + 0x440) / dVar23;
              iVar14 = (int)((ulonglong)(longlong)ROUND(dVar23 + dVar23 + 0.5) >> 1);
            }
            *(int *)(param_1 + 0x454) = iVar14;
            uVar17 = iVar16 * iVar9 * iVar14;
            *(uint *)(param_1 + 0x448) = uVar17;
            if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(uVar17);
            }
          }
          else if (0x80 < uVar17) {
            fVar20 = 128.0;
            goto LAB_140e4c5d6;
          }
          if (*(int *)(param_1 + 0x53c) < (int)uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
          }
          goto LAB_140e4c6e1;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x440) = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x430) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x438) = uVar2;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x418) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x420) = uVar2;
  *(undefined8 *)(param_1 + 0x428) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0x458) = 0;
LAB_140e4c6e1:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4cbdc FUN_140e4cbdc body=139 status=ok
// SIG undefined FUN_140e4cbdc(void)

undefined4 FUN_140e4cbdc(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 0xac) != -1) {
    uVar1 = *param_3;
    goto LAB_140e4cc10;
  }
  if (*(char *)(param_1 + 0x10) == '\x02') {
    cVar2 = FUN_147f5ada6(param_2,*(undefined8 *)(param_1 + 8),&local_1c);
LAB_140e4cc62:
    puVar3 = &local_1c;
    if (cVar2 == '\0') goto LAB_140e4cc0b;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      cVar2 = FUN_147f5abee(param_2,*(undefined8 *)(param_1 + 8),&local_1c);
      goto LAB_140e4cc62;
    }
LAB_140e4cc0b:
    puVar3 = param_3;
  }
  uVar1 = *puVar3;
LAB_140e4cc10:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140e4cc68 FUN_140e4cc68 body=197 status=ok
// SIG undefined FUN_140e4cc68(void)

longlong FUN_140e4cc68(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_140e4cd10;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140e4cd2e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_140e4cd10:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 140e4cd2e FUN_140e4cd2e body=298 status=ok
// SIG undefined FUN_140e4cd2e(void)

undefined4 *
FUN_140e4cd2e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
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
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140e4cfce(param_1,local_58);
  FUN_140e4ce5a(param_4,local_50);
  *(undefined4 *)(local_50 + 0x58) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140e4cefa(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x58) =
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
      FUN_140e4d1bc(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4ce5a FUN_140e4ce5a body=158 status=ok
// SIG undefined FUN_140e4ce5a(void)

undefined8 * FUN_140e4ce5a(undefined8 *param_1,undefined8 *param_2)

{
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
  *param_2 = *(undefined8 *)*param_1;
  FUN_14041f7b6(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4cefa FUN_140e4cefa body=212 status=ok
// SIG undefined FUN_140e4cefa(void)

void FUN_140e4cefa(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_14041fb7c((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147bce89c(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_140e4cf71;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_140e4cf71:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140e4cfce FUN_140e4cfce body=493 status=ok
// SIG undefined FUN_140e4cfce(void)

int * FUN_140e4cfce(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14488f93c(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x60);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x60) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 140e4d1bc FUN_140e4d1bc body=598 status=ok
// SIG undefined FUN_140e4d1bc(void)

void FUN_140e4d1bc(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x60;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x5c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x58 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_140e4d3c9;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_140e4d3c9:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4d414 FUN_140e4d414 body=102 status=ok
// SIG undefined FUN_140e4d414(void)

void FUN_140e4d414(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1408f40f8();
  lVar2 = 0x8c8;
  do {
    iVar1 = *(int *)(param_1 + 0xc + lVar2);
    FUN_140adf6d2(*(undefined8 *)(param_1 + lVar2),*(undefined4 *)(param_1 + 8 + lVar2));
    *(undefined4 *)(param_1 + 8 + lVar2) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + lVar2 + 0xc) != 0)) {
      FUN_148a1ca46(param_1 + lVar2,0);
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x908);
  FUN_140e4d47a(param_1,param_2);
  return;
}



// FUNCTION 140e4d47a FUN_140e4d47a body=691 status=ok
// SIG undefined FUN_140e4d47a(void)

void FUN_140e4d47a(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  param_1[0x9e] = 0;
  puVar2 = (undefined8 *)param_1[0x8d];
  if (puVar2 == (undefined8 *)0x0) goto LAB_140e4d4bf;
  if ((*(char *)(puVar2 + 1) == '\x01') && (DAT_14cb259f8 != 0)) {
    FUN_140993502(puVar2);
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2 = (undefined8 *)param_1[0x8d];
    if (puVar2 != (undefined8 *)0x0) goto LAB_140e4d4a7;
  }
  else {
LAB_140e4d4a7:
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[0x8d] = 0;
LAB_140e4d4bf:
  if ((char)param_1[0x8c] == '\x01') {
    (**(code **)(*param_1 + 0xa8))(param_1);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x3ec);
  FUN_140adf6d2(param_1[0x7c],(int)param_1[0x7d]);
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x3ec) != 0)) {
    FUN_148a1ca46(param_1 + 0x7c,0);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x3fc);
  FUN_140adf6d2(param_1[0x7e],(int)param_1[0x7f]);
  *(undefined4 *)(param_1 + 0x7f) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x3fc) != 0)) {
    FUN_148a1ca46(param_1 + 0x7e,0);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x40c);
  FUN_140adf6d2(param_1[0x80],(int)param_1[0x81]);
  *(undefined4 *)(param_1 + 0x81) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x40c) != 0)) {
    FUN_148a1ca46(param_1 + 0x80,0);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x41c);
  FUN_140adf6d2(param_1[0x82],(int)param_1[0x83]);
  *(undefined4 *)(param_1 + 0x83) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x41c) != 0)) {
    FUN_148a1ca46(param_1 + 0x82,0);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x42c);
  FUN_140adf6d2(param_1[0x84],(int)param_1[0x85]);
  *(undefined4 *)(param_1 + 0x85) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x42c) != 0)) {
    FUN_148a1ca46(param_1 + 0x84,0);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x43c);
  FUN_140adf6d2(param_1[0x86],(int)param_1[0x87]);
  *(undefined4 *)(param_1 + 0x87) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x43c) != 0)) {
    FUN_148a1ca46(param_1 + 0x86,0);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x45c);
  FUN_140adf6d2(param_1[0x8a],(int)param_1[0x8b]);
  *(undefined4 *)(param_1 + 0x8b) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x45c) != 0)) {
    FUN_148a1ca46(param_1 + 0x8a,0);
  }
  FUN_140b4cc3e(param_1,0);
  FUN_1408f578a(param_1,param_2);
  return;
}



// FUNCTION 140e4d72e FUN_140e4d72e body=95 status=ok
// SIG undefined FUN_140e4d72e(void)

undefined8 * FUN_140e4d72e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14b4a9a10;
  lVar3 = 0x1a8;
  do {
    plVar2 = *(longlong **)((longlong)param_1 + lVar3);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    lVar3 = lVar3 + -0x30;
  } while (lVar3 != 0x28);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e4d78e FUN_140e4d78e body=279 status=ok
// SIG undefined FUN_140e4d78e(void)

undefined8 FUN_140e4d78e(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_140e4d89f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e4d89f;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140e4d89f:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e4d84c;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140e4d84c;
    }
  }
  uVar6 = 0;
LAB_140e4d84c:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4d8e8 FUN_140e4d8e8 body=1108 status=ok
// SIG undefined FUN_140e4d8e8(void)

void FUN_140e4d8e8(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_4 == '\0') {
    local_70 = *param_2;
  }
  else {
    FUN_148a00610(param_1 + 0x4e0,&local_70);
  }
  lVar9 = *(longlong *)(param_1 + 0x378);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x108) != *(int *)(lVar9 + 0x134))) {
    uVar5 = (uint)((ulonglong)local_70 >> 0x10);
    uVar14 = (uint)local_70 & 0xffff;
    lVar11 = lVar9 + 0x138;
    if (*(longlong *)(lVar9 + 0x140) != 0) {
      lVar11 = *(longlong *)(lVar9 + 0x140);
    }
    iVar12 = *(int *)(lVar11 + (ulonglong)
                               (*(int *)(lVar9 + 0x148) - 1U &
                               (int)((ulonglong)local_70 >> 0x20) +
                               ((uint)local_70 << 0x10 | uVar14) + (uVar5 << 0x13 | uVar5 & 0xffff)
                               + (uVar14 >> 4)) * 4);
    if (iVar12 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(lVar9 + 0x100) + (longlong)iVar12 * 0x28);
        if (*plVar2 == local_70) {
          if ((plVar2 == (longlong *)0x0) || (plVar13 = plVar2 + 1, plVar13 == (longlong *)0x0))
          break;
          lVar9 = plVar2[2];
          if (lVar9 == 0) {
            uVar8 = FUN_145d84a5c();
            lVar9 = FUN_14477b664(uVar8);
            plVar2[2] = lVar9;
          }
          lVar11 = plVar2[1];
          if (plVar2[3] == 0) {
            if ((lVar9 == 0) || (lVar11 == 0)) break;
            plVar3 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
              plVar2[3] = 0;
              break;
            }
            uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar9 = FUN_144aff482(uVar8,plVar13);
            plVar2[3] = lVar9;
            if (lVar9 == 0) break;
            lVar11 = *plVar13;
          }
          uVar8 = *(undefined8 *)(param_1 + 0x40);
          plVar3 = *(longlong **)(param_1 + 0x48);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          lVar9 = plVar2[2];
          local_78 = lVar11;
          if (lVar9 == 0) {
            uVar10 = FUN_145d84a5c();
            lVar9 = FUN_14477b664(uVar10);
            plVar2[2] = lVar9;
          }
          lVar11 = plVar2[3];
          if (((lVar11 == 0) && (lVar11 = 0, lVar9 != 0)) && (*plVar13 != 0)) {
            plVar4 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
              lVar11 = 0;
            }
            else {
              uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar11 = FUN_144aff482(uVar10,plVar13);
            }
            plVar2[3] = lVar11;
          }
          FUN_140647e22(uVar8,lVar11 + 0x30);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar3 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          uVar8 = *(undefined8 *)(param_1 + 0x40);
          plVar13 = *(longlong **)(param_1 + 0x48);
          if (plVar13 == (longlong *)0x0) {
            FUN_140e4dd3e(uVar8,&local_68);
            *(undefined8 *)(param_1 + 0x4f0) = local_68;
          }
          else {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            FUN_140e4dd3e(uVar8,&local_68);
            *(undefined8 *)(param_1 + 0x4f0) = local_68;
            LOCK();
            plVar3 = plVar13 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          local_a0 = (longlong *)plVar2[1];
          uVar8 = FUN_14477b664(plVar2[2]);
          local_98 = FUN_14477b664(uVar8);
          local_90 = (longlong *)plVar2[3];
          FUN_140e4e738(param_1 + 0x4e0,&local_78,&local_a0);
          plVar2 = param_3 + 2;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          local_50 = 0;
          iVar12 = 0;
          local_60 = plVar2;
          if ((int)param_3[5] != 0) {
            FUN_1449c0562(&local_68);
            iVar12 = (int)param_3[5];
          }
          local_88 = local_58;
          uVar8 = local_88;
          local_80 = local_50;
          local_7c = local_4c;
          local_98 = local_68;
          local_90 = local_60;
          local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          iVar7 = local_88._4_4_;
          local_a0 = param_3;
          if ((local_88._4_4_ != iVar12) || (local_88 = uVar8, local_60 != plVar2)) {
            do {
              do {
                local_88 = uVar8;
                lVar9 = *local_a0 + (longlong)iVar7 * 0x14;
                FUN_14573e1ce(param_1,lVar9,*(undefined4 *)(lVar9 + 8));
                local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
                FUN_1449c0562(&local_98);
                iVar7 = local_88._4_4_;
                uVar8 = local_88;
              } while (local_88._4_4_ != iVar12);
            } while ((local_90 != plVar2) || (local_a0 != param_3));
          }
          break;
        }
        iVar12 = (int)plVar2[4];
      } while (iVar12 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e4dd3e FUN_140e4dd3e body=217 status=ok
// SIG undefined FUN_140e4dd3e(void)

uint * FUN_140e4dd3e(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x20);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar4);
    param_2[1] = 0;
  }
  else {
    param_2[1] = 0;
    if (lVar4 == 0) {
      *param_2 = 0;
      uVar2 = 0;
      goto LAB_140e4dda3;
    }
  }
  uVar2 = *(uint *)(lVar4 + 0xc);
  *param_2 = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  uVar2 = *(uint *)(lVar4 + 0x10);
  if (*(uint *)(lVar4 + 0x10) == 0) {
    LOCK();
    iVar1 = DAT_14c964868 + 1;
    UNLOCK();
    uVar3 = DAT_14c964868 + 1;
    bVar5 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
    if (bVar5) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar3);
    }
    LOCK();
    uVar2 = *(uint *)(lVar4 + 0x10);
    bVar5 = uVar2 == 0;
    if (bVar5) {
      *(uint *)(lVar4 + 0x10) = uVar3;
      uVar2 = 0;
    }
    UNLOCK();
    if (bVar5) {
      uVar2 = uVar3;
    }
  }
LAB_140e4dda3:
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 140e4de18 FUN_140e4de18 body=2189 status=ok
// SIG undefined FUN_140e4de18(void)

void FUN_140e4de18(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  void *_Dst;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  uint *puVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 auStack_128 [32];
  ulonglong **local_108;
  uint *local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong *local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    iVar23 = *(int *)(param_1 + 0x4e8);
    if ((longlong)iVar23 != 0) {
      plVar17 = (longlong *)(param_2 + 8);
      plVar10 = (longlong *)(param_1 + 0x4e0);
      lVar18 = *(longlong *)(param_1 + 0x4e0);
      puVar2 = (uint *)(param_1 + 0x4f0);
      lVar16 = 0;
      do {
        lVar11 = *(longlong *)(lVar18 + 0x10 + lVar16);
        if (lVar11 == 0) {
          uVar8 = FUN_145d84a5c();
          lVar11 = FUN_14477b664(uVar8);
          *(longlong *)(lVar18 + 0x10 + lVar16) = lVar11;
        }
        lVar20 = *(longlong *)(lVar18 + 0x18 + lVar16);
        if (lVar20 != 0) {
LAB_140e4df40:
          if ((((*(int *)(param_1 + 0x4f4) == 0) || (uVar14 = *puVar2, (int)uVar14 < 0)) ||
              (DAT_14c9647dc <= (int)uVar14)) ||
             (((lVar11 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar11 == 0
               || (*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0x4f4))) ||
              (((*(uint *)(lVar11 + 8) & 0x10200000) != 0 ||
               (*(longlong *)(lVar18 + lVar16) != *plVar17)))))) goto LAB_140e4df8c;
          puVar19 = (uint *)(lVar16 + 8 + lVar18);
          if (*(longlong *)(puVar19 + 2) == 0) {
            uVar8 = FUN_145d84a5c();
            lVar11 = FUN_14477b664(uVar8);
            *(longlong *)(lVar18 + 0x10 + lVar16) = lVar11;
            lVar20 = *(longlong *)(lVar18 + 0x18 + lVar16);
            if (((lVar20 == 0) && (lVar20 = 0, lVar11 != 0)) &&
               (*(longlong *)(lVar18 + 8 + lVar16) != 0)) {
              plVar12 = *(longlong **)(lVar11 + 0xb8);
              if ((plVar12 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar4 == '\0')) {
                lVar20 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar12 + 0x110))(plVar12);
                lVar20 = FUN_144aff482(uVar8,puVar19);
              }
              *(longlong *)(lVar18 + 0x18 + lVar16) = lVar20;
            }
          }
          puVar1 = (ulonglong *)(lVar20 + 0x50);
          lVar11 = lVar20 + 0x60;
          local_d8 = 0x100000000;
          local_c8 = 0xffffffff;
          local_c0 = 0;
          iVar23 = 0;
          local_f0 = plVar10;
          local_d0 = lVar11;
          if (*(int *)(lVar20 + 0x78) != 0) {
            local_f8 = puVar19;
            FUN_1449c0562(&local_d8);
            iVar23 = *(int *)(lVar20 + 0x78);
            puVar19 = local_f8;
          }
          local_a0 = local_c8;
          uVar8 = local_a0;
          uStack_98 = CONCAT44(local_bc,local_c0);
          local_b0 = local_d8;
          lStack_a8 = local_d0;
          local_a0._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
          iVar13 = local_a0._4_4_;
          local_b8 = puVar1;
          if ((local_a0._4_4_ != iVar23) || (local_a0 = uVar8, local_d0 != lVar11)) {
            do {
              do {
                local_a0 = uVar8;
                local_e0 = CONCAT44(local_e0._4_4_,iVar23);
                local_e8 = *local_b8;
                local_f8 = puVar19;
                uVar8 = FUN_14479d2ce(puVar2);
                FUN_14016d8b0(uVar8,*(undefined8 *)(local_e8 + (longlong)iVar13 * 0x38),0);
                local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
                FUN_1449c0562(&local_b0);
                puVar19 = local_f8;
                iVar13 = local_a0._4_4_;
                iVar23 = (int)local_e0;
                uVar8 = local_a0;
              } while (local_a0._4_4_ != (int)local_e0);
            } while ((lStack_a8 != lVar11) || (local_b8 != puVar1));
          }
          plVar10 = local_f0;
          lVar11 = *(longlong *)(lVar18 + 0x10 + lVar16);
          if (lVar11 == 0) {
            uVar8 = FUN_145d84a5c();
            lVar11 = FUN_14477b664(uVar8);
            *(longlong *)(lVar18 + 0x10 + lVar16) = lVar11;
          }
          lVar20 = *(longlong *)(lVar18 + 0x18 + lVar16);
          if (lVar20 == 0) {
            if (lVar11 == 0) {
              lVar20 = 0;
            }
            else {
              lVar20 = 0;
              if (*(longlong *)(lVar18 + 8 + lVar16) != 0) {
                plVar12 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar12 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar4 == '\0')) {
                  lVar20 = 0;
                }
                else {
                  uVar8 = (**(code **)(*plVar12 + 0x110))(plVar12);
                  lVar20 = FUN_144aff482(uVar8,puVar19);
                }
                *(longlong *)(lVar18 + 0x18 + lVar16) = lVar20;
              }
            }
          }
          local_f8 = (uint *)(lVar20 + 0xb0);
          uVar14 = *(uint *)(lVar20 + 200);
          if (uVar14 == 0) {
            uVar22 = 1;
            uVar15 = 0;
            uVar5 = 0;
            iVar23 = 0;
LAB_140e4e0ec:
            if (uVar5 != uVar14) {
              uVar21 = 0xffffffff;
              local_e8 = (ulonglong)uVar14;
              local_e0 = lVar20;
              do {
                if ((*(int *)(param_1 + 0x4f4) == 0) || (uVar14 = *puVar2, (int)uVar14 < 0)) {
LAB_140e4e3bf:
                  uVar8 = 0;
                }
                else {
                  uVar8 = 0;
                  if ((int)uVar14 < DAT_14c9647dc) {
                    puVar9 = (undefined8 *)
                             ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
                    if (((puVar9 == (undefined8 *)0x0) ||
                        (*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x4f4))) ||
                       ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_140e4e3bf;
                    uVar8 = *puVar9;
                  }
                }
                local_d8 = *(undefined8 *)
                            ((longlong)(int)uVar5 * 0xc0 + *(longlong *)(local_e0 + 0xa0));
                local_d0 = CONCAT71(local_d0._1_7_,2);
                local_d0 = CONCAT44(0xffffffff,(undefined4)local_d0);
                local_b8 = (ulonglong *)((ulonglong)local_b8 & 0xffffffffffffff00);
                local_70 = 0;
                uStack_68 = 0;
                local_80 = 0;
                uStack_78 = 0;
                local_90 = 0;
                uStack_88 = 0;
                local_a0 = 0;
                uStack_98 = 0;
                local_b0 = 0;
                lStack_a8 = 0;
                local_108 = &local_b8;
                FUN_140042bb4(uVar8,&local_d8,0,0);
                uVar21 = uVar21 & ~(uint)uVar22;
                puVar19 = *(uint **)(local_e0 + 0xc0);
                if (*(uint **)(local_e0 + 0xc0) == (uint *)0x0) {
                  puVar19 = local_f8;
                }
                uVar14 = *(uint *)(local_e0 + 200);
                iVar13 = (int)uVar15;
                lVar18 = (longlong)iVar13;
                uVar5 = puVar19[lVar18] & uVar21;
                if (uVar5 == 0) {
                  iVar6 = uVar14 + 0x1e;
                  if (-1 < (int)(uVar14 - 1)) {
                    iVar6 = uVar14 - 1;
                  }
                  iVar6 = iVar6 >> 5;
                  iVar23 = iVar23 + 0x20;
                  iVar7 = iVar6;
                  if (iVar6 < iVar13) {
                    iVar7 = iVar13;
                  }
                  if (iVar13 < iVar6) {
                    lVar11 = 0;
                    do {
                      uVar5 = puVar19[lVar18 + lVar11 + 1];
                      if (uVar5 != 0) {
                        uVar15 = (ulonglong)(iVar13 + (int)lVar11 + 1);
                        uVar21 = 0xffffffff;
                        goto LAB_140e4e241;
                      }
                      iVar23 = iVar23 + 0x20;
                      lVar11 = lVar11 + 1;
                    } while (iVar7 - lVar18 != lVar11);
                    uVar21 = 0xffffffff;
                    lVar18 = (longlong)iVar7;
                  }
                  uVar15 = lVar18 + 1U & 0xffffffff;
                  uVar5 = uVar14;
                }
                else {
LAB_140e4e241:
                  uVar22 = (ulonglong)(-uVar5 & uVar5);
                  uVar3 = uVar22 * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar3 != 0) {
                    for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  uVar5 = (iVar23 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                  if ((int)uVar14 <= (int)uVar5) {
                    uVar5 = uVar14;
                  }
                }
                plVar10 = local_f0;
              } while (uVar5 != (uint)local_e8);
            }
          }
          else {
            puVar19 = *(uint **)(lVar20 + 0xc0);
            if (*(uint **)(lVar20 + 0xc0) == (uint *)0x0) {
              puVar19 = local_f8;
            }
            uVar5 = *puVar19;
            if (uVar5 != 0) {
              uVar15 = 0;
              iVar23 = 0;
LAB_140e4e0c5:
              uVar22 = (ulonglong)(-uVar5 & uVar5);
              uVar3 = uVar22 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              uVar5 = (iVar23 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if ((int)uVar14 <= (int)uVar5) {
                uVar5 = uVar14;
              }
              goto LAB_140e4e0ec;
            }
            iVar23 = uVar14 + 0x1e;
            if (-1 < (int)(uVar14 - 1)) {
              iVar23 = uVar14 - 1;
            }
            uVar15 = 0;
            uVar22 = (ulonglong)(uint)(iVar23 >> 5);
            if (iVar23 >> 5 < 1) {
              uVar22 = uVar15;
            }
            iVar23 = 0;
            while (uVar22 != uVar15) {
              iVar23 = iVar23 + 0x20;
              uVar5 = puVar19[uVar15 + 1];
              uVar15 = uVar15 + 1;
              if (uVar5 != 0) goto LAB_140e4e0c5;
            }
          }
          if (((((*(int *)(param_1 + 0x4fc) == 0) ||
                (uVar14 = *(uint *)(param_1 + 0x4f8), (int)uVar14 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar14 ||
                ((plVar12 = (longlong *)
                            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
                 plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0x4fc)))))))
              || ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) || (lVar18 = *plVar12, lVar18 == 0))
          goto LAB_140e4dec8;
          uVar14 = (int)(lVar16 >> 3) * -0x11111111;
          if ((int)uVar14 < 0) goto LAB_140e4dea8;
          iVar23 = *(int *)(param_1 + 0x4e8);
          if ((int)uVar14 < iVar23) {
            lVar16 = *plVar10;
            lVar11 = (ulonglong)(uVar14 & 0x7fffffff) * 0x78;
            _Dst = (void *)(lVar16 + lVar11);
            *(undefined4 *)(lVar16 + 0x68 + lVar11) = 0;
            if (*(longlong *)(lVar16 + 0x60 + lVar11) != 0) {
              FUN_1400020a8();
            }
            FUN_14064e7da((longlong)_Dst + 0x20);
            iVar23 = *(int *)(param_1 + 0x4e8);
            if (~uVar14 + iVar23 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 0x78),(longlong)(int)(~uVar14 + iVar23) * 0x78)
              ;
              iVar23 = *(int *)(param_1 + 0x4e8);
            }
            *(int *)(param_1 + 0x4e8) = iVar23 + -1;
            FUN_140e4e6a6(plVar10);
            puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
            *puVar9 = &PTR_FUN_14b477720;
            puVar9[1] = *plVar17;
            FUN_14039144e(lVar18,puVar9);
            FUN_141165eb6(param_1 + 0x520,plVar17);
            goto LAB_140e4dea8;
          }
          goto LAB_140e4deae;
        }
        if ((lVar11 != 0) && (*(longlong *)(lVar18 + 8 + lVar16) != 0)) {
          plVar12 = *(longlong **)(lVar11 + 0xb8);
          local_f0 = plVar10;
          if ((plVar12 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar4 == '\0')) {
            *(undefined8 *)(lVar18 + 0x18 + lVar16) = 0;
            plVar10 = local_f0;
          }
          else {
            local_f8 = (uint *)(lVar18 + 8 + lVar16);
            uVar8 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar20 = FUN_144aff482(uVar8,local_f8);
            *(longlong *)(lVar18 + 0x18 + lVar16) = lVar20;
            plVar10 = local_f0;
            if (lVar20 != 0) goto LAB_140e4df40;
          }
        }
LAB_140e4df8c:
        lVar16 = lVar16 + 0x78;
      } while ((longlong)iVar23 * 0x78 - lVar16 != 0);
    }
    if (((((*(int *)(param_1 + 0x4fc) != 0) &&
          (uVar14 = *(uint *)(param_1 + 0x4f8), -1 < (int)uVar14)) && ((int)uVar14 < DAT_14c9647dc))
        && ((plVar10 = (longlong *)
                       ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
            plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x4fc))))) &&
       (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))) {
LAB_140e4dea8:
      iVar23 = *(int *)(param_1 + 0x4e8);
LAB_140e4deae:
      if (iVar23 == 0) {
        *(undefined1 *)(param_1 + 0x500) = 0;
        FUN_1447f69b6(param_1 + 0x568);
      }
    }
  }
LAB_140e4dec8:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e4e6a6 FUN_140e4e6a6 body=145 status=ok
// SIG undefined FUN_140e4e6a6(void)

void FUN_140e4e6a6(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x78)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x78,8);
      uVar3 = uVar3 / 0x78;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x78,8);
    }
  }
  return;
}



// FUNCTION 140e4e738 FUN_140e4e738 body=2694 status=ok
// SIG undefined FUN_140e4e738(void)

void FUN_140e4e738(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1d8 [40];
  uint *local_1b0;
  longlong *local_1a8;
  ulonglong local_1a0;
  uint *local_198;
  longlong *local_190;
  undefined **local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined2 local_114;
  void *local_110;
  int local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong lStack_c8;
  uint *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((((*(int *)((longlong)param_1 + 0x14) == 0) ||
       (uVar19 = *(uint *)(param_1 + 2), (int)uVar19 < 0)) || (DAT_14c9647dc <= (int)uVar19)) ||
     (((lVar17 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8), lVar17 == 0 ||
       (*(int *)(lVar17 + 0x10) != *(int *)((longlong)param_1 + 0x14))) ||
      ((*(uint *)(lVar17 + 8) & 0x10200000) != 0)))) goto LAB_140e4ef79;
  lVar17 = param_3[1];
  if (lVar17 == 0) {
    uVar8 = FUN_145d84a5c();
    lVar17 = FUN_14477b664(uVar8);
    param_3[1] = lVar17;
  }
  if (param_3[2] == 0) {
    if ((lVar17 == 0) || (*param_3 == 0)) goto LAB_140e4ef79;
    plVar7 = *(longlong **)(lVar17 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
      param_3[2] = 0;
      goto LAB_140e4ef79;
    }
    uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar17 = FUN_144aff482(uVar8,param_3);
    param_3[2] = lVar17;
    if (lVar17 == 0) goto LAB_140e4ef79;
  }
  if ((longlong)(int)param_1[1] != 0) {
    plVar7 = (longlong *)*param_1;
    lVar17 = (longlong)(int)param_1[1] * 0x78;
    do {
      if (*plVar7 == *param_2) {
        if (plVar7 != (longlong *)0x0) {
          *(undefined4 *)((longlong)plVar7 + 0x74) = 0;
          goto LAB_140e4ef79;
        }
        break;
      }
      plVar7 = plVar7 + 0xf;
      lVar17 = lVar17 + -0x78;
    } while (lVar17 != 0);
  }
  FUN_1446f470e(&local_d8,&DAT_149dfb77a,1);
  local_98 = 0;
  local_90 = 0;
  local_d0 = 0;
  lStack_c8 = 0;
  local_c0 = (uint *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  lVar17 = param_3[1];
  if (lVar17 == 0) {
    uVar8 = FUN_145d84a5c();
    lVar17 = FUN_14477b664(uVar8);
    param_3[1] = lVar17;
  }
  if (((param_3[2] == 0) && (lVar17 != 0)) && (*param_3 != 0)) {
    plVar7 = *(longlong **)(lVar17 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
      lVar17 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
      lVar17 = FUN_144aff482(uVar8,param_3);
    }
    param_3[2] = lVar17;
  }
  FUN_140d188f2(&uStack_b8);
  if (local_d0 != *param_3) {
    local_c0 = (uint *)0x0;
  }
  if (lStack_c8 != param_3[1]) {
    local_c0 = (uint *)0x0;
  }
  local_d0 = *param_3;
  uVar8 = FUN_14477b664();
  lStack_c8 = FUN_14477b664(uVar8);
  puVar9 = (uint *)param_3[2];
  local_d8 = *param_2;
  lVar17 = param_3[1];
  local_c0 = puVar9;
  if (lVar17 == 0) {
    uVar8 = FUN_145d84a5c();
    lVar17 = FUN_14477b664(uVar8);
    param_3[1] = lVar17;
    puVar9 = (uint *)param_3[2];
  }
  if (puVar9 == (uint *)0x0) {
    param_3[2] = 0;
    puVar9 = (uint *)0x0;
    if ((lVar17 != 0) && (*param_3 != 0)) {
      plVar7 = *(longlong **)(lVar17 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
        puVar9 = (uint *)0x0;
      }
      else {
        uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
        puVar9 = (uint *)FUN_144aff482(uVar8);
      }
      param_3[2] = (longlong)puVar9;
    }
  }
  uVar19 = puVar9[0x32];
  local_1a8 = param_1;
  local_190 = param_3;
  if (uVar19 == 0) {
    uVar25 = 1;
    uVar24 = 0;
    iVar20 = 0;
    uVar5 = 0;
  }
  else {
    puVar10 = *(uint **)(puVar9 + 0x30);
    if (*(uint **)(puVar9 + 0x30) == (uint *)0x0) {
      puVar10 = puVar9 + 0x2c;
    }
    uVar5 = *puVar10;
    if (uVar5 == 0) {
      iVar20 = uVar19 + 0x1e;
      if (-1 < (int)(uVar19 - 1)) {
        iVar20 = uVar19 - 1;
      }
      uVar24 = 0;
      uVar25 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar25 = uVar24;
      }
      iVar20 = 0;
      do {
        if (uVar25 == uVar24) goto LAB_140e4eaae;
        iVar20 = iVar20 + 0x20;
        uVar5 = puVar10[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar24 = 0;
      iVar20 = 0;
    }
    uVar25 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar25 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar5 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar19 <= (int)uVar5) {
      uVar5 = uVar19;
    }
  }
  if (uVar5 != uVar19) {
    uVar26 = 0xffffffff;
    local_1b0 = puVar9;
    local_1a0 = (ulonglong)uVar19;
    local_198 = puVar9 + 0x2c;
    do {
      lVar11 = *(longlong *)(local_1b0 + 0x28);
      lVar17 = (longlong)(int)uVar5 * 0xc0;
      local_188 = &PTR_FUN_14b00bdf8;
      local_158 = 0;
      local_150 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_14c = 0xffffffff00000080;
      local_144 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_114 = *(undefined2 *)(lVar11 + 0x7c + lVar17);
      local_118 = *(undefined4 *)(lVar11 + 0x78 + lVar17);
      local_180 = &DAT_14a176f00;
      local_110 = (void *)0x0;
      local_108 = *(int *)(lVar11 + 0x88 + lVar17);
      lVar22 = (longlong)local_108;
      pvVar3 = *(void **)(lVar11 + 0x80 + lVar17);
      if (lVar22 == 0) {
        local_104 = 0;
      }
      else {
        FUN_140501c24(&local_110,local_108,0);
        memcpy(local_110,pvVar3,lVar22 * 0x1c);
      }
      lVar17 = lVar17 + lVar11;
      local_100 = *(undefined8 *)(lVar17 + 0x90);
      local_f8 = *(undefined4 *)(lVar17 + 0x98);
      uStack_f4 = *(undefined4 *)(lVar17 + 0x9c);
      uStack_f0 = *(undefined4 *)(lVar17 + 0xa0);
      uStack_ec = *(undefined4 *)(lVar17 + 0xa4);
      local_e8 = (void *)0x0;
      local_e0 = *(int *)(lVar17 + 0xb0);
      lVar11 = (longlong)local_e0;
      pvVar3 = *(void **)(lVar17 + 0xa8);
      if (lVar11 == 0) {
        local_dc = 0;
      }
      else {
        FUN_1446dd670(&local_e8,local_e0,0);
        memcpy(local_e8,pvVar3,lVar11 * 2);
      }
      puVar9 = local_198;
      lVar17 = FUN_1447e736e(&local_100);
      ppuVar12 = &local_180;
      if (lVar17 != 0) {
        lVar17 = FUN_1447e736e(&local_100);
        ppuVar12 = (undefined **)(lVar17 + 0x30);
      }
      if ((longlong)*(int *)(ppuVar12 + 0xf) == 0) {
        fVar27 = 0.0;
      }
      else {
        fVar27 = *(float *)(ppuVar12[0xe] + (longlong)*(int *)(ppuVar12 + 0xf) * 0x1c + -0x18);
      }
      fVar28 = (float)local_68;
      if ((float)local_68 <= fVar27) {
        fVar28 = fVar27;
      }
      local_68 = CONCAT44(local_68._4_4_,fVar28);
      FUN_14051f4c4(&local_188);
      uVar26 = uVar26 & ~(uint)uVar25;
      puVar10 = *(uint **)(local_1b0 + 0x30);
      if (*(uint **)(local_1b0 + 0x30) == (uint *)0x0) {
        puVar10 = puVar9;
      }
      uVar19 = local_1b0[0x32];
      iVar6 = (int)uVar24;
      lVar17 = (longlong)iVar6;
      uVar5 = puVar10[lVar17] & uVar26;
      if (uVar5 == 0) {
        iVar21 = uVar19 + 0x1e;
        if (-1 < (int)(uVar19 - 1)) {
          iVar21 = uVar19 - 1;
        }
        iVar21 = iVar21 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar14 = iVar21;
        if (iVar21 < iVar6) {
          iVar14 = iVar6;
        }
        if (iVar6 < iVar21) {
          lVar11 = 0;
          do {
            uVar5 = puVar10[lVar17 + lVar11 + 1];
            if (uVar5 != 0) {
              uVar24 = (ulonglong)(iVar6 + (int)lVar11 + 1);
              uVar26 = 0xffffffff;
              goto LAB_140e4ee04;
            }
            iVar20 = iVar20 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar14 - lVar17 != lVar11);
          uVar26 = 0xffffffff;
          iVar6 = iVar14;
        }
        uVar24 = (ulonglong)(iVar6 + 1);
        uVar5 = uVar19;
      }
      else {
LAB_140e4ee04:
        uVar25 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar25 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar5 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar19 <= (int)uVar5) {
          uVar5 = uVar19;
        }
      }
    } while (uVar5 != (uint)local_1a0);
  }
LAB_140e4eaae:
  plVar7 = local_190;
  lVar17 = local_190[1];
  if (lVar17 == 0) {
    uVar8 = FUN_145d84a5c();
    lVar17 = FUN_14477b664(uVar8);
    plVar7[1] = lVar17;
  }
  plVar18 = local_1a8;
  lVar11 = plVar7[2];
  if (((lVar11 == 0) && (lVar11 = 0, lVar17 != 0)) && (*plVar7 != 0)) {
    plVar2 = *(longlong **)(lVar17 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
      lVar11 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar11 = FUN_144aff482(uVar8,plVar7);
    }
    plVar7[2] = lVar11;
  }
  iVar20 = *(int *)(lVar11 + 0x78);
  if (iVar20 == 0) {
    uVar25 = 1;
    uVar24 = 0;
    iVar21 = 0;
    iVar6 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar11 + 0x70);
    if (*(uint **)(lVar11 + 0x70) == (uint *)0x0) {
      puVar9 = (uint *)(lVar11 + 0x60);
    }
    uVar19 = *puVar9;
    if (uVar19 == 0) {
      iVar6 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar6 = iVar20 + -1;
      }
      uVar24 = 0;
      uVar25 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar25 = uVar24;
      }
      iVar21 = 0;
      do {
        if (uVar25 == uVar24) goto LAB_140e4ee99;
        iVar21 = iVar21 + 0x20;
        uVar19 = puVar9[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar24 = 0;
      iVar21 = 0;
    }
    uVar25 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = uVar25 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar6 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar6) {
      iVar6 = iVar20;
    }
  }
  if (iVar6 != iVar20) {
    uVar19 = 0xffffffff;
    local_1b0 = (uint *)(lVar11 + 0x60);
    do {
      lVar17 = *(longlong *)(lVar11 + 0x50);
      if ((*(int *)((longlong)plVar18 + 0x14) == 0) ||
         (uVar5 = *(uint *)(plVar18 + 2), (int)uVar5 < 0)) {
LAB_140e4f105:
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          puVar23 = (undefined8 *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if (((puVar23 == (undefined8 *)0x0) ||
              (*(int *)(puVar23 + 2) != *(int *)((longlong)plVar18 + 0x14))) ||
             ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)) goto LAB_140e4f105;
          uVar8 = *puVar23;
        }
      }
      uVar13 = FUN_140832a06(lVar17 + (longlong)iVar6 * 0x38 + 8);
      FUN_14016d8b0(uVar8,*(undefined8 *)(lVar17 + (longlong)iVar6 * 0x38),uVar13);
      uVar19 = uVar19 & ~(uint)uVar25;
      puVar9 = *(uint **)(lVar11 + 0x70);
      if (*(uint **)(lVar11 + 0x70) == (uint *)0x0) {
        puVar9 = local_1b0;
      }
      iVar14 = *(int *)(lVar11 + 0x78);
      iVar6 = (int)uVar24;
      lVar17 = (longlong)iVar6;
      uVar5 = puVar9[lVar17] & uVar19;
      if (uVar5 == 0) {
        iVar15 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar15 = iVar14 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar6) {
          iVar16 = iVar6;
        }
        if (iVar6 < iVar15) {
          lVar22 = 0;
          do {
            uVar5 = puVar9[lVar17 + lVar22 + 1];
            if (uVar5 != 0) {
              uVar24 = (ulonglong)(iVar6 + (int)lVar22 + 1);
              uVar19 = 0xffffffff;
              goto LAB_140e4f0c8;
            }
            iVar21 = iVar21 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar16 - lVar17 != lVar22);
          uVar19 = 0xffffffff;
          iVar6 = iVar16;
        }
        uVar24 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar14;
      }
      else {
LAB_140e4f0c8:
        uVar25 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar25 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar6 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar6) {
          iVar6 = iVar14;
        }
      }
      plVar18 = local_1a8;
    } while (iVar6 != iVar20);
  }
LAB_140e4ee99:
  iVar20 = (int)plVar18[1];
  *(uint *)(plVar18 + 1) = iVar20 + 1U;
  if (*(uint *)((longlong)plVar18 + 0xc) < iVar20 + 1U) {
    FUN_14656f178(plVar18,iVar20);
  }
  plVar7 = (longlong *)(*plVar18 + (longlong)iVar20 * 0x78);
  *plVar7 = local_d8;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[1] = local_d0;
  uVar8 = FUN_14477b664(lStack_c8);
  lVar17 = FUN_14477b664(uVar8);
  plVar7[2] = lVar17;
  plVar7[3] = (longlong)local_c0;
  plVar7[8] = 0;
  *(undefined4 *)(plVar7 + 9) = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  *(undefined8 *)((longlong)plVar7 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar7 + 0x54) = 0;
  plVar7[0xc] = 0;
  *(undefined4 *)(plVar7 + 0xd) = 0;
  FUN_140d188f2(plVar7 + 4,&uStack_b8);
  plVar7[0xe] = local_68;
  *(undefined1 *)(plVar18 + 4) = 1;
  FUN_143eb22ba(plVar18,0);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(&uStack_b8);
LAB_140e4ef79:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e4f1ca FUN_140e4f1ca body=186 status=ok
// SIG undefined FUN_140e4f1ca(void)

void FUN_140e4f1ca(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_140e4f26c;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140e4f26c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140e4f284 FUN_140e4f284 body=86 status=ok
// SIG undefined FUN_140e4f284(void)

void FUN_140e4f284(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_140659abc(param_1 + 8,lVar2,uVar1);
    FUN_140e4f2da(param_1 + 0x22,lVar2,uVar1);
    FUN_140659bfa(param_1 + 0x28,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 140e4f2da FUN_140e4f2da body=149 status=ok
// SIG undefined FUN_140e4f2da(void)

void FUN_140e4f2da(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_140e4f30d;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_140e4f30d:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(char *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       (char)param_1[1];
  if (*(char *)((longlong)param_1 + 3) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 3) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140e4f35e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140e4f370 FUN_140e4f370 body=1356 status=ok
// SIG undefined FUN_140e4f370(void)

void FUN_140e4f370(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined8 uStack_180;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined1 local_140 [48];
  longlong local_110;
  undefined8 local_108;
  undefined **local_100;
  undefined *local_f8;
  longlong local_f0;
  ulonglong uStack_e8;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [48];
  longlong local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined *local_78;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(int *)(param_2 + 0x510) == 0) {
    lVar4 = *(longlong *)(param_2 + 0x28);
    lVar1 = *(longlong *)(param_2 + 0x50);
    puVar7 = (undefined1 *)(param_2 + 0x58);
    local_d8 = 0;
    local_d0 = 0x3002;
    local_c8 = 0;
    local_90 = 0;
    local_88 = 0x200000000;
    FUN_1405c5fa2();
    local_78 = &DAT_14cb769e8;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = &PTR_FUN_14b0394b0;
    if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar4);
    }
    local_e0 = lVar4;
    if (local_c0 != puVar7) {
      puVar6 = *(undefined1 **)(param_2 + 0x88);
      if (*(undefined1 **)(param_2 + 0x88) == (undefined1 *)0x0) {
        puVar6 = puVar7;
      }
      FUN_1400709d4(local_c0,puVar6,*(undefined4 *)(param_2 + 0x90),2);
    }
    if (lVar1 == 0) {
      lVar5 = 0;
    }
    else {
      puVar8 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)(lVar1 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar5 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar5);
        DAT_14c947fe0 = lVar5;
      }
      FUN_140045924(DAT_14c947fe0,&local_168,puVar8,1);
      lVar5 = local_168;
    }
    if (local_d8 != lVar5) {
      local_c8 = 0;
    }
    local_d8 = lVar5;
    (*(code *)local_80[4])(&local_80,0);
    local_78 = *(undefined **)(param_2 + 0xa0);
    FUN_1406022fe(&local_70,param_2 + 0xa8);
    FUN_14095dc64(param_1 + 0x1d0,param_2);
    FUN_140e4f8bd(param_1 + 0x1c0,&local_e0);
    local_188 = (longlong *)0x0;
    uStack_180 = 0;
    FUN_14095e510(param_2,&local_188);
    if (0 < (int)uStack_180) {
      local_158 = 0;
      local_150 = 0x3002;
      local_148 = 0;
      local_110 = 0;
      local_108 = 0x200000000;
      FUN_1405c5fa2();
      local_f8 = &DAT_14cb769e8;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = &PTR_FUN_14b0394b0;
      local_168 = *(longlong *)(param_1 + 0x250);
      if (local_168 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(local_168);
      }
      if ((lVar4 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(lVar4);
      }
      local_160 = lVar4;
      if (local_140 != puVar7) {
        if (*(undefined1 **)(param_2 + 0x88) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(param_2 + 0x88);
        }
        FUN_1400709d4(local_140,puVar7,*(undefined4 *)(param_2 + 0x90),2);
      }
      if (lVar1 == 0) {
        local_170 = 0;
      }
      else {
        puVar8 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
          puVar8 = *(undefined4 **)(lVar1 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar4 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar4);
          DAT_14c947fe0 = lVar4;
        }
        FUN_140045924(DAT_14c947fe0,&local_170,puVar8,1);
      }
      if (local_158 != local_170) {
        local_148 = 0;
      }
      local_158 = local_170;
      (*(code *)local_100[4])(&local_100,0);
      local_f8 = *(undefined **)(param_2 + 0xa0);
      FUN_1406022fe(&local_f0,param_2 + 0xa8);
      if ((longlong)(int)uStack_180 != 0) {
        plVar9 = local_188 + (longlong)(int)uStack_180 * 2;
        plVar10 = local_188;
        do {
          lVar4 = *plVar10;
          if ((lVar4 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar4);
          }
          if ((lVar4 != 0) && (plVar2 = (longlong *)plVar10[1], plVar2 != (longlong *)0x0)) {
            lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
            FUN_140e4fa8c(lVar4 + 0xb0,&local_168);
            lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
            FUN_14095dc64(lVar4 + 0x68,param_2);
          }
          plVar10 = plVar10 + 2;
        } while (plVar10 != plVar9);
      }
      local_100 = (undefined **)&DAT_14a171d50;
      uVar3 = uStack_e8 >> 0x20;
      uStack_e8 = uStack_e8 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        FUN_140115c12(&local_f0,0);
      }
      local_f8 = (undefined *)0x0;
      if (local_f0 != 0) {
        FUN_1400020a8();
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_188 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_80 = (undefined **)&DAT_14a171d50;
    uVar3 = uStack_68 >> 0x20;
    uStack_68 = uStack_68 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      FUN_140115c12(&local_70,0);
    }
    local_78 = (undefined *)0x0;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4f8bd FUN_140e4f8bd body=462 status=ok
// SIG undefined FUN_140e4f8bd(void)

void FUN_140e4f8bd(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined1 local_90 [48];
  longlong local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined *local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  local_a0 = 0x3002;
  local_98 = 0;
  local_60 = 0;
  local_58 = 0x200000000;
  FUN_1405c5fa2();
  local_48 = &DAT_14cb769e8;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = &PTR_FUN_14b0394b0;
  local_b0 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_b0 == 0) {
      local_b0 = 0;
    }
    else {
      FUN_1456cec3c();
      local_b0 = *param_2;
    }
  }
  if (param_2[1] != 0 || (int)param_2[2] != 0x3002) {
    local_98 = 0;
    local_a8 = param_2[1];
    local_a0 = (int)param_2[2];
  }
  ppuVar3 = &PTR_FUN_14b0394b0;
  if (&local_b0 != param_2) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[10] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[10];
    }
    FUN_1400709d4(local_90,plVar2,(int)param_2[0xb],2);
    ppuVar3 = local_50;
  }
  (*(code *)ppuVar3[4])(&local_50,0);
  local_48 = (undefined *)param_2[0xd];
  FUN_1406022fe(&local_40,param_2 + 0xe);
  FUN_1447cd2ec(param_1,&local_b0);
  local_50 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_38 >> 0x20;
  uStack_38 = uStack_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_40,0);
  }
  local_48 = (undefined *)0x0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4fa8c FUN_140e4fa8c body=518 status=ok
// SIG undefined FUN_140e4fa8c(void)

void FUN_140e4fa8c(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined1 local_90 [48];
  longlong local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined *local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  local_a0 = 0x3002;
  local_98 = 0;
  local_60 = 0;
  local_58 = 0x200000000;
  FUN_1405c5fa2();
  local_48 = &DAT_14cb769e8;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = &PTR_FUN_14b0394b0;
  local_b8 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (local_b8 == 0) {
      local_b8 = 0;
    }
    else {
      FUN_1456cec3c();
      local_b8 = *param_2;
    }
  }
  local_b0 = param_2[1];
  if ((DAT_14c950c29 & 1) != 0) {
    if (local_b0 == 0) {
      local_b0 = 0;
    }
    else {
      FUN_1456cec3c();
      local_b0 = param_2[1];
    }
  }
  if (param_2[2] != 0 || (int)param_2[3] != 0x3002) {
    local_98 = 0;
    local_a8 = param_2[2];
    local_a0 = (int)param_2[3];
  }
  ppuVar3 = &PTR_FUN_14b0394b0;
  if (&local_b8 != param_2) {
    plVar2 = param_2 + 5;
    if ((longlong *)param_2[0xb] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[0xb];
    }
    FUN_1400709d4(local_90,plVar2,(int)param_2[0xc],2);
    ppuVar3 = local_50;
  }
  (*(code *)ppuVar3[4])(&local_50,0);
  local_48 = (undefined *)param_2[0xe];
  FUN_1406022fe(&local_40,param_2 + 0xf);
  FUN_1447cd2ec(param_1,&local_b8);
  local_50 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_38 >> 0x20;
  uStack_38 = uStack_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_40,0);
  }
  local_48 = (undefined *)0x0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e4fca2 FUN_140e4fca2 body=157 status=ok
// SIG undefined FUN_140e4fca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e4fca2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
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



// FUNCTION 140e4fd40 FUN_140e4fd40 body=112 status=ok
// SIG undefined FUN_140e4fd40(void)

void FUN_140e4fd40(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(uint *)(param_1 + 1) >> 0x12 & 1) == 0) && ((int)param_1[0x1a2] == 0)) {
    uVar2 = (**(code **)(*param_1 + 0x848))(param_1);
    iVar1 = (int)param_1[0x1a2];
    *(uint *)(param_1 + 0x1a2) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xd14) < iVar1 + 1U) {
      FUN_140e4fdb0(param_1 + 0x1a1,iVar1);
    }
    *(undefined8 *)(param_1[0x1a1] + (longlong)iVar1 * 8) = uVar2;
  }
  FUN_140e4ff12(param_1);
  return;
}



// FUNCTION 140e4fdb0 FUN_140e4fdb0 body=353 status=ok
// SIG undefined FUN_140e4fdb0(void)

void FUN_140e4fdb0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e4fe35;
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
LAB_140e4fe35:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140e4ff12 FUN_140e4ff12 body=408 status=ok
// SIG undefined FUN_140e4ff12(void)

void FUN_140e4ff12(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  longlong local_48;
  undefined8 uStack_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 2;
    FUN_1406ca06e(param_1);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140b36638(param_1,&local_48,0);
  lVar2 = local_48;
  lVar3 = (longlong)(int)uStack_40;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar4);
      if (plVar1 != (longlong *)0x0) {
        if (DAT_14cac6e60 == 0) {
          local_60 = &local_30;
          local_30 = FUN_144a7958c;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_142b47bc4;
          local_68 = &LAB_1478989f1;
          local_70 = &LAB_146391124;
          local_78 = L"Engine";
          local_80 = 0x10000000000;
          local_88 = 0x10000005;
          local_90 = 0x10;
          local_98 = 0x620;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        if (((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
             DAT_14cac6e60 + 0x30)) && ((*(byte *)((longlong)plVar1 + 0x2d3) & 8) != 0)) {
          *(byte *)((longlong)plVar1 + 0x2d3) = *(byte *)((longlong)plVar1 + 0x2d3) & 0xf7;
          (**(code **)(*plVar1 + 0x958))(plVar1);
        }
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e500ac FUN_140e500ac body=486 status=ok
// SIG undefined FUN_140e500ac(void)

void FUN_140e500ac(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  float local_80;
  ulonglong local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong uStack_50;
  double local_48;
  ulonglong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(longlong **)(param_1 + 0x7d8) != (longlong *)0x0) &&
      (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x2e8))(), lVar4 != 0)) &&
     (iVar1 = *(int *)(lVar4 + 0xe8), (longlong)iVar1 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0xe0);
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar6);
      if (lVar2 != 0) {
        lVar5 = FUN_140e50756();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (*(char *)(lVar2 + 0x69) == '\0')) {
          FUN_147585bd0(lVar2,&local_48);
          uVar3 = (uint)((ulonglong)local_48 >> 0x20);
          if ((((local_40 & 0x7fffffffffffffff) != 0) || (0x1ffe < uVar3 >> 0x13)) ||
             ((local_48 != 1.0 || (NAN(local_48))))) {
            iVar1 = *(int *)(param_2 + 3);
            if (iVar1 == 0 && uVar3 >> 0x13 < 0x1fff) {
              if (3.4028234663852886e+38 <= local_48) {
                local_48 = 3.4028234663852886e+38;
              }
              if (local_48 <= -3.4028234663852886e+38) {
                local_48 = -3.4028234663852886e+38;
              }
              local_80 = (float)local_48;
              local_7c = local_40;
              local_88 = *(undefined4 *)(param_2 + 1);
              local_90 = *param_2;
              FUN_14755aae5(&local_74);
              local_60 = local_6c;
              local_68 = local_74;
              local_58 = 0;
              uStack_50 = 0;
              *(undefined4 *)(param_2 + 1) = local_6c;
              *param_2 = local_74;
              FUN_1400a241c(param_2 + 2,&local_58);
              FUN_1447bda9c(local_58,uStack_50 & 0xffffffff);
              if (local_58 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              *(uint *)(param_2 + 3) = iVar1 + 1U;
              if (*(uint *)((longlong)param_2 + 0x1c) < iVar1 + 1U) {
                FUN_140407554(param_2 + 2);
              }
              FUN_14755ac28((longlong)iVar1 * 0x18 + param_2[2],&local_48);
            }
          }
          break;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e50294 FUN_140e50294 body=893 status=ok
// SIG undefined FUN_140e50294(void)

undefined8 * FUN_140e50294(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  int local_90;
  int local_8c;
  longlong local_88;
  code *local_80 [2];
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(longlong **)(param_1 + 0x7d8) != (longlong *)0x0) {
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x2e8))();
    if ((lVar8 != 0) && (uVar4 = *(undefined8 *)(param_1 + 0x98), ((uint)uVar4 & 0xff) != 2)) {
      local_88 = *(longlong *)(lVar8 + 0x118);
      lVar9 = FUN_14073751e();
      if (DAT_14c951858 == 0) {
        local_b0 = local_80;
        local_80[0] = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_1468c5283;
        local_c0 = FUN_142809da0;
        local_c8 = L"Engine";
        local_d0 = 0x400000000;
        local_d8 = 0x10000000;
        local_e0 = 8;
        local_e8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      if (lVar10 == 0) {
        lVar11 = 0;
      }
      else {
        do {
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
             (lVar11 = lVar10,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) {
            lVar11 = 0;
          }
        } while ((lVar11 == 0) && (lVar10 = *(longlong *)(lVar10 + 0x20), lVar10 != 0));
      }
      lVar9 = *(longlong *)(lVar11 + 0x118);
      FUN_140e50618(local_80,param_1 + 0x100,lVar8);
      dVar5 = *(double *)(param_1 + 0x110);
      local_8c = *(int *)(param_1 + 0x100);
      iVar2 = *(int *)(param_1 + 0x108);
      local_90 = *(int *)(param_1 + 0x10c);
      cVar1 = *(char *)(param_1 + 0x104);
      iVar13 = *(int *)(lVar8 + 0x10c);
      iVar3 = *(int *)(lVar8 + 0x114);
      *param_2 = 0x3f800000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      local_68 = -(int)((ulonglong)uVar4 >> 0x20);
      local_6c = 0x3f800000;
      local_64 = 0;
      FUN_14040737a(param_2);
      local_58 = dVar5;
      FUN_140407280(param_2,0);
      if (local_88 != lVar9) {
        uVar12 = (int)((ulonglong)lVar9 >> 0x20) * (int)local_88;
        uVar7 = (int)((ulonglong)local_88 >> 0x20) * (int)lVar9;
        local_58 = (double)((ulonglong)(uVar7 & 0xffffff | uVar7 >> 8 & 0x800000) |
                            (ulonglong)(uVar12 & 0xffffff | uVar12 >> 8 & 0x800000) << 0x18 |
                           0xfffa000000000000);
        FUN_140407280(param_2,0);
      }
      iVar13 = iVar13 + local_8c;
      iVar6 = 0;
      if (cVar1 != '\0') {
        iVar6 = local_90;
      }
      uVar12 = iVar3 - (iVar2 + iVar13);
      uVar7 = 0;
      if (((uint)((ulonglong)dVar5 >> 0x33) < 0x1fff) && (uVar7 = 0, dVar5 < 0.0)) {
        uVar7 = uVar12;
      }
      local_58 = (double)CONCAT44(iVar6 + iVar13 + uVar7,0x3f800000);
      local_50 = 0;
      FUN_14040737a(param_2);
      if (cVar1 != '\0') {
        local_60 = (ulonglong)uVar12 | 0xfffb000000000000;
        FUN_140407280(param_2,-iVar13);
      }
      if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  *param_2 = 0x3f800000;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 140e50618 FUN_140e50618 body=318 status=ok
// SIG undefined FUN_140e50618(void)

ulonglong * FUN_140e50618(ulonglong *param_1,int *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  uVar1 = *(ulonglong *)(param_3 + 0x108);
  uVar2 = *(ulonglong *)(param_3 + 0x110);
  if (((char)uVar1 == '\x02') || (((uint)uVar2 & 0xff) == 2)) {
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  else {
    lVar4 = *(longlong *)(param_3 + 0x118);
    lVar5 = *(longlong *)(param_3 + 0x120);
    if (lVar5 == lVar4) {
      lVar4 = 1;
    }
    else {
      lVar6 = (lVar5 >> 0x20) * (longlong)(int)lVar4;
      lVar4 = (longlong)(int)lVar5 * (lVar4 >> 0x20);
      auVar9._0_8_ = (double)((ulonglong)(double)lVar6 & 0x8000000000000000) / (double)lVar4 +
                     ((double)lVar6 / (double)lVar4 - (double)(lVar6 / lVar4));
      auVar9._8_8_ = 0;
      auVar9 = roundpd(auVar9,auVar9,1);
      lVar5 = (longlong)auVar9._0_8_ + lVar6 / lVar4;
      if (0x7ffffffe < lVar5) {
        lVar5 = 0x7fffffff;
      }
      lVar4 = -0x80000000;
      if (-0x80000000 < lVar5) {
        lVar4 = lVar5;
      }
    }
    uVar8 = (int)(uVar1 >> 0x20) + *param_2;
    uVar7 = (int)(uVar2 >> 0x20) - param_2[2];
    uVar3 = (int)lVar4 + uVar8;
    if ((int)uVar7 < (int)uVar3) {
      uVar7 = uVar3;
    }
    *param_1 = uVar1 & 0xffffffff | (ulonglong)uVar8 << 0x20;
    param_1[1] = uVar2 & 0xffffffff | (ulonglong)uVar7 << 0x20;
  }
  return param_1;
}



// FUNCTION 140e50756 FUN_140e50756 body=228 status=ok
// SIG undefined FUN_140e50756(void)

longlong FUN_140e50756(void)

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
  if (DAT_14cab2120 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633a98e;
    local_38 = &LAB_147523245;
    local_40 = &LAB_145aa57db;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneTimeWarpTrack",&DAT_14cab2120,&DAT_147523244);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2120;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5083c FUN_140e5083c body=76 status=ok
// SIG undefined FUN_140e5083c(void)

undefined8 FUN_140e5083c(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140e50888(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140e5087d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140e50888 FUN_140e50888 body=191 status=ok
// SIG undefined FUN_140e50888(void)

longlong FUN_140e50888(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140e50948();
  lVar3 = *param_1;
  if (DAT_14cb6fee0 != DAT_14cb6ff0c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb6ff10;
    if (DAT_14cb6ff18 != (undefined *)0x0) {
      puVar7 = DAT_14cb6ff18;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb6ff20 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb6fed8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb6fed0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140e50948 FUN_140e50948 body=152 status=ok
// SIG undefined FUN_140e50948(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e50948(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6ff28) {
    FUN_144b3d300(&DAT_14cb6ff28);
    if (DAT_14cb6ff28 == -1) {
      DAT_14cb6fef8 = 0;
      DAT_14cb6ff00 = 0;
      DAT_14cb6fed8 = 0;
      _DAT_14cb6fee0 = 0;
      _DAT_14cb6ff04 = 0xffffffff00000080;
      DAT_14cb6ff0c = 0;
      DAT_14cb6ff18 = 0;
      DAT_14cb6ff20 = 0;
      atexit(FUN_143c8cee7);
      _Init_thread_footer(&DAT_14cb6ff28);
      return;
    }
  }
  return;
}



// FUNCTION 140e509ee FUN_140e509ee body=64 status=ok
// SIG undefined FUN_140e509ee(void)

undefined8 * FUN_140e509ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e50a2e FUN_140e50a2e body=412 status=ok
// SIG undefined FUN_140e50a2e(void)

undefined8 FUN_140e50a2e(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((*(int *)(param_1 + 0xc) == 0) || (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)(param_1 + 0xc))))) ||
     ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) {
LAB_140e50ac0:
    if (((*(int *)(param_2 + 0x10) == 0) || (iVar2 = *(int *)(param_2 + 0x14), iVar2 == 0)) ||
       (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
      local_18 = DAT_14c948620;
      local_20 = DAT_14c948618;
LAB_140e50b95:
      local_28 = DAT_14c948620;
      local_30 = DAT_14c948618;
    }
    else {
      lVar3 = param_2 + 0x18;
      if (0 < *(int *)(param_2 + 0x34)) {
        lVar3 = *(longlong *)(param_2 + 0x28);
      }
      if (1 < iVar2) {
        lVar3 = *(longlong *)(param_2 + 0x28);
      }
      if ((iVar2 == 1) || (iVar2 < 3)) {
        local_18 = DAT_14c948620;
        local_20 = DAT_14c948618;
      }
      else {
        local_18 = *(undefined4 *)(lVar3 + 0x20);
        local_20 = *(undefined8 *)(lVar3 + 0x18);
      }
      if ((iVar2 == 1) || (iVar2 < 2)) goto LAB_140e50b95;
      local_28 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0x14);
      local_30 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xc);
    }
    lVar3 = FUN_140e50bcb(param_1 + 0x28,&local_30,&local_20);
    if (lVar3 != 0) {
      uVar4 = FUN_140e50c68(lVar3 + 8,param_3);
      goto LAB_140e50b62;
    }
  }
  else {
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar5;
    }
    else {
      lVar3 = 0;
    }
    if (((*(longlong *)(lVar3 + 0x30) == 0) ||
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360), lVar3 == 0)) ||
       (*(char *)(lVar3 + 0x152) != '\x05')) goto LAB_140e50ac0;
  }
  uVar4 = 0;
LAB_140e50b62:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e50bcb FUN_140e50bcb body=157 status=ok
// SIG undefined FUN_140e50bcb(void)

longlong FUN_140e50bcb(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2[2] == 0) {
    uVar2 = *param_2;
  }
  else {
    uVar2 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar1 = FUN_140987788(param_1,uVar2,param_2);
  lVar3 = 0;
  lVar4 = (longlong)iVar1 * 0x68 + *param_1;
  if (iVar1 == -1) {
    lVar4 = lVar3;
  }
  if (lVar4 != 0) {
    if (param_3[2] != 0) {
      FUN_144a78877(*param_3,param_3[2]);
    }
    iVar1 = FUN_1409877e8();
    if (iVar1 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar1 * 0x38 + *(longlong *)(lVar4 + 0x10);
    }
    lVar3 = lVar4 + 0x10;
    if (lVar4 == 0) {
      lVar3 = 0;
    }
  }
  return lVar3;
}



// FUNCTION 140e50c68 FUN_140e50c68 body=244 status=ok
// SIG undefined FUN_140e50c68(void)

byte FUN_140e50c68(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar8 < 1) {
    bVar6 = 0;
  }
  else {
    lVar7 = uVar8 * 0x10 + -8;
    bVar6 = 0;
    do {
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + lVar7) == 0) ||
         (plVar2 = *(longlong **)(lVar1 + -8 + lVar7), plVar2 == (longlong *)0x0)) {
        lVar5 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
        lVar5 = local_50;
      }
      if (((lVar5 == param_2) || (*(int *)(lVar1 + lVar7) == 0)) ||
         (plVar2 = *(longlong **)(lVar1 + -8 + lVar7), plVar2 == (longlong *)0x0)) {
LAB_140e50cfc:
        FUN_140e50de8(param_1,(int)uVar8 + -1);
        FUN_140e50d5e(param_1);
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x30))();
        if (cVar4 == '\0') goto LAB_140e50cfc;
      }
      bVar6 = bVar6 | lVar5 == param_2;
      lVar7 = lVar7 + -0x10;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e50d5e FUN_140e50d5e body=137 status=ok
// SIG undefined FUN_140e50d5e(void)

void FUN_140e50d5e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 140e50de8 FUN_140e50de8 body=159 status=ok
// SIG undefined FUN_140e50de8(void)

void FUN_140e50de8(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (longlong *)(lVar1 + (longlong)(int)param_2 * 0x10);
  if (*(int *)(lVar1 + 8 + (longlong)(int)param_2 * 0x10) != 0) {
    puVar2 = (undefined8 *)*_Dst;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140e50e12;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(_Dst,0,0,0x10);
    *(undefined4 *)(_Dst + 1) = 0;
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
LAB_140e50e12:
  iVar3 = (int)param_1[1];
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar3 - iVar4) * 0x10),(longlong)iVar4 << 4);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 140e50e88 FUN_140e50e88 body=193 status=ok
// SIG undefined FUN_140e50e88(void)

void FUN_140e50e88(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [28];
  char local_54;
  undefined8 local_48;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14b431a00;
  if (param_1[6] != 0) {
    cVar1 = FUN_140e50f4a();
    if (cVar1 != '\0') {
      FUN_1405f0e9c(local_78,param_1[6],5);
      if (local_54 == '\0') {
        do {
          FUN_140331450(local_48,4);
          FUN_14059e512(local_78);
        } while (local_54 == '\0');
      }
      if (local_20 == '\x01') {
        FUN_14024445c(local_70);
      }
      FUN_1405f0e42(param_1[6],0);
    }
  }
  FUN_1457b7d70(param_1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e50f4a FUN_140e50f4a body=33 status=ok
// SIG undefined FUN_140e50f4a(void)

undefined8 FUN_140e50f4a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(byte *)(param_1 + 0x155) & 1) == 0) || (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 == 0)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0xa8) != 0);
  }
  return uVar2;
}



// FUNCTION 140e50f6c FUN_140e50f6c body=345 status=ok
// SIG undefined FUN_140e50f6c(void)

void FUN_140e50f6c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb0d2b0 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_14051bf56(*(longlong *)(param_1 + 0x30),local_38);
    cVar2 = FUN_140e510c6(local_38);
    if (cVar2 != '\0') {
      FUN_1433ff8e6(local_30,*(undefined8 *)(param_1 + 0x30),0);
    }
    FUN_14051bf10(local_38);
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar4 * 8);
      if ((*(char *)(param_1 + 0x40) == '\x01') && (plVar1 != (longlong *)0x0)) {
        lVar3 = FUN_14081cebe();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          (**(code **)(*plVar1 + 0xa18))(plVar1,0);
        }
      }
      FUN_1401bf202(plVar1);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1457b7e90(param_1 + 0x20,0);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if ((lVar4 != 0) && (DAT_14cb0d2b0 != (longlong *)0x0)) {
    FUN_140e511ae(lVar4,1,1,0);
    (**(code **)(*DAT_14cb0d2b0 + 0x518))(DAT_14cb0d2b0,lVar4);
    FUN_1457b7e3c(lVar4);
    FUN_140e510d0(DAT_14cb0d2b0,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e510c6 FUN_140e510c6 body=9 status=ok
// SIG undefined FUN_140e510c6(void)

bool FUN_140e510c6(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}



// FUNCTION 140e510d0 FUN_140e510d0 body=51 status=ok
// SIG undefined FUN_140e510d0(void)

void FUN_140e510d0(longlong *param_1,byte param_2)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x388))(param_1,0);
  *(float *)(param_1 + 0x1e4) = fVar1 + 1.0;
  *(byte *)((longlong)param_1 + 0xf24) = *(byte *)((longlong)param_1 + 0xf24) | param_2;
  return;
}



// FUNCTION 140e51104 FUN_140e51104 body=169 status=ok
// SIG undefined FUN_140e51104(void)

float FUN_140e51104(void)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [72];
  ulonglong local_60;
  ulonglong local_20;
  
  fVar1 = DAT_14c761e20;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar2 = fVar1;
  if (0.0 < DAT_14cb0ced0) {
    FUN_1405d59a9(local_a8);
    DAT_14cb0d28c = (float)(local_60 >> 0x14) <= DAT_14cb0ced0;
    if (((bool)DAT_14cb0d28c) && (fVar2 = DAT_14c761e28, fVar1 <= DAT_14c761e28)) {
      fVar2 = fVar1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar2;
}



// FUNCTION 140e511ae FUN_140e511ae body=203 status=ok
// SIG undefined FUN_140e511ae(void)

void FUN_140e511ae(longlong param_1)

{
  DAT_14cb103d8 = DAT_14cb103d8 + 1;
  FUN_1437894b2();
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) & 0xbf;
  FUN_140cbebe8(param_1 + 0x950,0);
  if ((*(byte **)(param_1 + 0x970) != (byte *)0x0) && ((**(byte **)(param_1 + 0x970) & 1) != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0c040) {
      FUN_144b3d300(&DAT_14cb0c040);
      if (DAT_14cb0c040 == -1) {
        FUN_145e17f72(&DAT_14cb0bff0);
        atexit(FUN_14374ca90);
        _Init_thread_footer(&DAT_14cb0c040);
      }
    }
    FUN_1402eb48e(*(undefined8 *)(*(longlong *)(param_1 + 0x970) + 0x28),param_1 + 0x950);
    **(byte **)(param_1 + 0x970) = **(byte **)(param_1 + 0x970) & 0xfe;
  }
  return;
}



// FUNCTION 140e5127a FUN_140e5127a body=107 status=ok
// SIG undefined FUN_140e5127a(void)

void FUN_140e5127a(longlong param_1,uint param_2)

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
LAB_140e512c9:
      FUN_140105186(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140906920(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140e512c9;
  FUN_140e512e6(param_1);
  FUN_140105186(param_1,param_2);
  return;
}



// FUNCTION 140e512e6 FUN_140e512e6 body=335 status=ok
// SIG undefined FUN_140e512e6(void)

void FUN_140e512e6(longlong *param_1)

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



// FUNCTION 140e5143e FUN_140e5143e body=700 status=ok
// SIG undefined FUN_140e5143e(void)

undefined8 * FUN_140e5143e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140e516fa();
  *param_1 = &PTR_FUN_14b8f04e0;
  param_1[0x72] = &PTR_FUN_14b8f0e70;
  param_1[0x73] = &PTR_FUN_14b8f0ef0;
  param_1[0x74] = &PTR_FUN_14b8f0f60;
  param_1[0x75] = &PTR_FUN_14b8f0f88;
  param_1[0x76] = &PTR_FUN_14b8f0fa0;
  param_1[0xa4] = &PTR_FUN_14b8f0fd0;
  param_1[0xa5] = &PTR_FUN_14b8f1020;
  param_1[0xa6] = &PTR_FUN_14b8f1050;
  param_1[0xa7] = &PTR_FUN_14b8f1080;
  param_1[0xa8] = &PTR_FUN_14b8f1098;
  param_1[0x118] = &PTR_FUN_14b8f10b0;
  param_1[0x119] = &PTR_FUN_14b8f11a0;
  param_1[0x11a] = &PTR_FUN_14b8f11d0;
  param_1[0x11b] = &PTR_FUN_14b8f11f0;
  param_1[0x11c] = &PTR_FUN_14b8f1210;
  param_1[0x11d] = &PTR_FUN_14b8f1280;
  param_1[0x1bb] = &PTR_FUN_14b8f12a0;
  param_1[0x1bc] = &PTR_FUN_14b8f12d0;
  param_1[0x1bd] = &PTR_FUN_14b8f1300;
  param_1[0x1be] = &PTR_FUN_14b8f1320;
  param_1[0x1bf] = &PTR_FUN_14b8f1390;
  param_1[0x1c0] = &PTR_FUN_14b8f13d0;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  *(undefined1 *)(param_1 + 0x1c5) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0xe37) = 0;
  param_1[0x1c6] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xebc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xea4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xecc) = 0xbf80000000000000;
  *(undefined1 *)((longlong)param_1 + 0xed4) = 0;
  FUN_140c4ac3c(param_1 + 0x1db);
  param_1[0x1e5] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1e6] = DAT_14c8464e0;
  param_1[0x1e7] = uVar1;
  param_1[0x1e8] = DAT_14c8464f0;
  param_1[0x1eb] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x1e9] = DAT_14c8464f8;
  param_1[0x1ea] = uVar1;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x205) = 2;
  *(undefined4 *)((longlong)param_1 + 0x103c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x102c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1034) = 0;
  *(undefined4 *)(param_1 + 0x208) = 2;
  *(undefined4 *)((longlong)param_1 + 0x1064) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1054) = 0;
  *(undefined8 *)((longlong)param_1 + 0x105c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1044) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe74) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe64) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe54) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe44) = 0;
  return param_1;
}



// FUNCTION 140e516fa FUN_140e516fa body=1267 status=ok
// SIG undefined FUN_140e516fa(void)

undefined8 * FUN_140e516fa(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_14007ca06();
  FUN_140e51bee(param_1);
  *param_1 = &PTR_FUN_14b492ba0;
  param_1[0x72] = &PTR_FUN_14b493510;
  param_1[0x73] = &PTR_FUN_14b493590;
  param_1[0x74] = &PTR_FUN_14b493600;
  param_1[0x75] = &PTR_FUN_14b493628;
  param_1[0x76] = &PTR_FUN_14b493640;
  param_1[0xa4] = &PTR_FUN_14b493670;
  param_1[0xa5] = &PTR_FUN_14b4936c0;
  param_1[0xa6] = &PTR_FUN_14b4936f0;
  param_1[0xa7] = &PTR_FUN_14b493720;
  param_1[0xa8] = &PTR_FUN_14b493738;
  param_1[0x118] = &PTR_FUN_14b493750;
  param_1[0x119] = &PTR_FUN_14b493840;
  param_1[0x11a] = &PTR_FUN_14b493870;
  param_1[0x11b] = &PTR_FUN_14b493890;
  param_1[0x11c] = &PTR_FUN_14b4938b0;
  param_1[0x11d] = &PTR_FUN_14b493920;
  param_1[0x11e] = 0;
  param_1[0x128] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 0x129) = 2;
  *(undefined8 *)((longlong)param_1 + 0x96c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x974) = 0;
  *(undefined8 *)((longlong)param_1 + 0x95c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x964) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x954) = 0;
  *(undefined8 *)((longlong)param_1 + 0x97c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x9f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x994) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x984) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98c) = 0;
  *(undefined4 *)(param_1 + 0x13f) = 2;
  memset((void *)((longlong)param_1 + 0x9fc),0,0x114);
  *(undefined4 *)(param_1 + 0x162) = 2;
  *(undefined8 *)((longlong)param_1 + 0xb14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb44) = 0;
  *(undefined2 *)(param_1 + 0x169) = 6;
  *(undefined1 *)((longlong)param_1 + 0xb4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x16a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb91) = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbac) = 0;
  param_1[0x176] = 0;
  *(undefined2 *)(param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb64) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb6c) = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xba1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc3) = 1;
  *(undefined2 *)(param_1 + 0x17c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbe3) = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0x400000000;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbdb) = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x184] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x185] = uVar1;
  param_1[0x186] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x187) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xc3c) = uVar2;
  *(undefined4 *)(param_1 + 0x188) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc44) = uVar4;
  param_1[0x189] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x18a) = 0;
  param_1[0x18b] = &PTR_FUN_14b039460;
  param_1[0x18c] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  *(undefined4 *)(param_1 + 0x18d) = 0;
  FUN_14020a6cc(param_1 + 0x18c,1);
  param_1[0x19e] = 0;
  *(undefined1 *)(param_1 + 0x19f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcfc) = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  *(undefined2 *)(param_1 + 0x1a5) = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  *(undefined4 *)(param_1 + 0x19d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd2a) = 1;
  *(undefined1 *)((longlong)param_1 + 0xd34) = 0xff;
  param_1[0x1a7] = 0;
  *(undefined1 *)((longlong)param_1 + 0xd44) = 0xff;
  param_1[0x1a9] = 0;
  param_1[0x1b5] = 0;
  *(undefined4 *)(param_1 + 0x1b6) = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdbc) = 0;
  param_1[0x1b9] = 0;
  *(undefined4 *)(param_1 + 0x1ba) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 0x88;
  FUN_1403121a6(param_1,0);
  *(undefined4 *)(param_1 + 0x34) = 0x40400000;
  FUN_1405e4918(param_1,0x3f800000);
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x179) = 2;
  *(undefined4 *)(param_1 + 0x16e) = 0x3ea8f5c3;
  FUN_14020a6cc(param_1 + 0x16d,1);
  *(undefined4 *)((longlong)param_1 + 0xb9c) = 0x3ea8f5c3;
  FUN_14020a6cc((longlong)param_1 + 0xb94,1);
  *(undefined8 *)((longlong)param_1 + 0xbb4) = 0x3ea8f5c33f800000;
  FUN_14020a6cc((longlong)param_1 + 0xbac,1);
  *(undefined4 *)((longlong)param_1 + 0xbbc) = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 0xc54) = 0x3e4ccccd;
  param_1[0x1ac] = DAT_14cb95120;
  *(undefined1 *)((longlong)param_1 + 0xd2a) = 1;
  *(byte *)(param_1 + 0x1aa) = *(byte *)(param_1 + 0x1aa) & 0xbe;
  *(undefined4 *)(param_1 + 0x19d) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0x19c,1);
  *(undefined1 *)(param_1 + 0x172) = 0;
  *(byte *)((longlong)param_1 + 0xbaa) = *(byte *)((longlong)param_1 + 0xbaa) & 0xfc;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xf7;
  *(undefined4 *)(param_1 + 0x11f) = 0;
  return param_1;
}



// FUNCTION 140e51bee FUN_140e51bee body=422 status=ok
// SIG undefined FUN_140e51bee(void)

undefined8 * FUN_140e51bee(undefined8 *param_1)

{
  FUN_140e307ac();
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 2;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xae] = 2;
  *param_1 = &PTR_FUN_14b2f61c0;
  param_1[0x72] = &PTR_FUN_14b2f6890;
  param_1[0x73] = &PTR_FUN_14b2f6910;
  param_1[0x74] = &PTR_FUN_14b2f6980;
  param_1[0x75] = &PTR_FUN_14b2f69a8;
  param_1[0x76] = &PTR_FUN_14b2f69c0;
  param_1[0xa4] = &PTR_FUN_14b2f69f0;
  param_1[0xa5] = &PTR_FUN_14b2f6a40;
  param_1[0xa6] = &PTR_FUN_14b2f6a70;
  param_1[0xa7] = &PTR_FUN_14b2f6aa0;
  param_1[0xa8] = &PTR_FUN_14b2f6ab8;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5db) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  FUN_140e51d94(param_1 + 0xbf);
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined4 *)((longlong)param_1 + 0x817) = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 2;
  *(undefined8 *)((longlong)param_1 + 0x894) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8a4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8bc) = 0;
  return param_1;
}



// FUNCTION 140e51d94 FUN_140e51d94 body=334 status=ok
// SIG undefined FUN_140e51d94(void)

void FUN_140e51d94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b24d5f8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
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
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 2;
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x35] = &PTR_FUN_14b24d600;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 2;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(byte *)((longlong)param_1 + 0x20c) = *(byte *)((longlong)param_1 + 0x20c) & 0xfc;
  return;
}



// FUNCTION 140e51f8e FUN_140e51f8e body=76 status=ok
// SIG undefined FUN_140e51f8e(void)

undefined8 FUN_140e51f8e(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140e51fda(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140e51fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140e51fda FUN_140e51fda body=181 status=ok
// SIG undefined FUN_140e51fda(void)

longlong FUN_140e51fda(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  
  plVar3 = (longlong *)FUN_140e52090();
  lVar1 = *param_1;
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    plVar6 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar3[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar3[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*plVar3 + (longlong)iVar5 * 0x18);
        if (*plVar6 == lVar1) {
          if (plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) {
            return plVar6[1];
          }
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  lVar4 = DAT_14cb7eab0;
  if (lVar1 != 0) {
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 140e52090 FUN_140e52090 body=157 status=ok
// SIG undefined FUN_140e52090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e52090(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7eb08) {
    FUN_144b3d300(&DAT_14cb7eb08);
    if (DAT_14cb7eb08 == -1) {
      DAT_14cb7ead8 = 0;
      DAT_14cb7eae0 = 0;
      DAT_14cb7eab8 = 0;
      _DAT_14cb7eac0 = 0;
      _DAT_14cb7eae4 = 0xffffffff00000080;
      DAT_14cb7eaec = 0;
      DAT_14cb7eaf8 = 0;
      DAT_14cb7eb00 = 0;
      atexit(FUN_143d638db);
      _Init_thread_footer(&DAT_14cb7eb08);
    }
  }
  return &DAT_14cb7eab8;
}



// FUNCTION 140e5212e FUN_140e5212e body=9 status=ok
// SIG undefined FUN_140e5212e(void)

void FUN_140e5212e(longlong param_1)

{
  FUN_140e52138(param_1 + 0x10);
  return;
}



// FUNCTION 140e52138 FUN_140e52138 body=82 status=ok
// SIG undefined FUN_140e52138(void)

void FUN_140e52138(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41ff10;
  FUN_140e5218a();
  FUN_140368c45(param_1[5],*(undefined4 *)(param_1 + 6));
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
                    /* WARNING: Could not recover jumptable at 0x000140e52186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140e5218a FUN_140e5218a body=137 status=ok
// SIG undefined FUN_140e5218a(void)

void FUN_140e5218a(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (DAT_14c9a66c8 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x28);
    uVar2 = 0;
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar3 = (longlong)*(int *)(param_1 + 0x30) << 4;
      do {
        if ((longlong *)*plVar4 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar4 + 0x20))();
        }
        FUN_14053d96a(plVar4);
        plVar4 = plVar4 + 2;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      plVar4 = *(longlong **)(param_1 + 0x28);
    }
    iVar1 = *(int *)(param_1 + 0x34);
    FUN_140368c45(plVar4,uVar2);
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x34) != 0)) {
      FUN_14053e466(param_1 + 0x28,0);
      return;
    }
  }
  return;
}



// FUNCTION 140e52214 FUN_140e52214 body=7178 status=ok
// SIG undefined FUN_140e52214(void)

uint * FUN_140e52214(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  int iVar21;
  ulonglong *puVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  uint *puVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  uint *local_230;
  longlong *local_228;
  uint *local_220;
  uint local_214;
  ulonglong local_210;
  longlong *local_208;
  uint *local_200;
  uint *local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  uint local_1d0;
  int local_1cc;
  uint *local_1c8;
  longlong *local_1c0;
  uint local_1b8;
  uint local_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  uint *local_190;
  uint *local_188;
  undefined1 local_17c [4];
  undefined4 local_178 [8];
  undefined4 *local_158;
  undefined8 local_150;
  uint local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [16];
  uint *local_128;
  undefined8 local_120;
  uint *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  uint local_f8 [8];
  uint *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  plVar18 = param_3 + 0x22;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_140e52d6d:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
  }
  if (DAT_14cbaec08 == 0) {
    uVar6 = FUN_14064613c();
    DAT_14cbaec08 = FUN_140002ddd(FUN_1465ecdaf,uVar6,L"OakSpecializationComponent_VHETargetItem");
  }
  lVar28 = DAT_14cbaec08;
  local_1b0 = DAT_14cbaec08;
  local_1a8 = plVar18;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_140e53e40();
  local_228 = param_2;
  local_208 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar28;
    if ((undefined8 *)param_2[0xf] != (undefined8 *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar9 = (uint *)(param_3 + 0xd);
      iVar23 = (int)param_3[0x10];
      if (iVar23 == 0) {
        uVar31 = 1;
        uVar33 = 0;
        iVar26 = 0;
        iVar30 = 0;
      }
      else {
        puVar7 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar7 = puVar9;
        }
        uVar25 = *puVar7;
        if (uVar25 == 0) {
          iVar30 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar30 = iVar23 + -1;
          }
          uVar33 = 0;
          uVar31 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar31 = uVar33;
          }
          iVar30 = 0;
          do {
            if (uVar31 == uVar33) goto LAB_140e5251f;
            iVar30 = iVar30 + 0x20;
            uVar25 = puVar7[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar25 == 0);
        }
        else {
          uVar33 = 0;
          iVar30 = 0;
        }
        uVar31 = (ulonglong)(-uVar25 & uVar25);
        uVar1 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar26 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar23 <= iVar26) {
          iVar26 = iVar23;
        }
      }
      if (iVar26 == iVar23) {
LAB_140e5251f:
        local_230 = (uint *)0x0;
        puVar7 = local_230;
      }
      else {
        uVar25 = 0xffffffff;
        local_230 = (uint *)0x0;
        iVar21 = iVar23;
        do {
          lVar28 = param_3[0xb];
          lVar24 = (longlong)iVar26 * 200;
          if (*(int *)(lVar28 + 0x60 + lVar24) != *(int *)(lVar28 + 0x8c + lVar24)) {
            lVar34 = lVar28 + lVar24;
            lVar29 = lVar34 + 0x90;
            if (*(longlong *)(lVar34 + 0x98) != 0) {
              lVar29 = *(longlong *)(lVar34 + 0x98);
            }
            iVar26 = *(int *)(lVar29 + (ulonglong)
                                       (*(int *)(lVar34 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar26 != -1) {
              local_228 = (longlong *)CONCAT44(local_228._4_4_,iVar30);
              plVar18 = (longlong *)(lVar24 + lVar28 + 0x58);
              lVar28 = *plVar18;
              do {
                if (*(undefined ***)(lVar28 + (longlong)iVar26 * 0x10) == local_108) {
                  lVar34 = lVar34 + 8;
                  FUN_140326250(plVar18,&local_108);
                  FUN_140325a06(lVar34,&local_148,&local_108,0);
                  iVar21 = (int)param_3[0x10];
                  local_230 = (uint *)CONCAT71((int7)((ulonglong)lVar34 >> 8),1);
                  break;
                }
                iVar26 = *(int *)((longlong)iVar26 * 0x10 + lVar28 + 8);
              } while (iVar26 != -1);
              iVar30 = (int)local_228;
            }
          }
          uVar25 = uVar25 & ~(uint)uVar31;
          puVar7 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar7 = puVar9;
          }
          iVar26 = (int)uVar33;
          lVar28 = (longlong)iVar26;
          uVar20 = puVar7[lVar28] & uVar25;
          if (uVar20 == 0) {
            iVar14 = iVar21 + 0x1e;
            if (-1 < iVar21 + -1) {
              iVar14 = iVar21 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar30 = iVar30 + 0x20;
            iVar15 = iVar14;
            if (iVar14 < iVar26) {
              iVar15 = iVar26;
            }
            if (iVar26 < iVar14) {
              lVar24 = 0;
              do {
                uVar20 = puVar7[lVar28 + lVar24 + 1];
                if (uVar20 != 0) {
                  uVar33 = (ulonglong)(iVar26 + (int)lVar24 + 1);
                  uVar25 = 0xffffffff;
                  goto LAB_140e52d06;
                }
                iVar30 = iVar30 + 0x20;
                lVar24 = lVar24 + 1;
              } while (iVar15 - lVar28 != lVar24);
              uVar25 = 0xffffffff;
              iVar26 = iVar15;
            }
            uVar33 = (ulonglong)(iVar26 + 1);
            param_3 = local_208;
            iVar26 = iVar21;
          }
          else {
LAB_140e52d06:
            uVar31 = (ulonglong)(-uVar20 & uVar20);
            uVar1 = uVar31 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            iVar26 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
            if (iVar21 <= iVar26) {
              iVar26 = iVar21;
            }
          }
          puVar7 = local_230;
        } while (iVar26 != iVar23);
      }
      goto LAB_140e5244b;
    }
    local_1e0 = plVar18;
    if ((char)param_2[9] == '\x01') {
      local_128 = (uint *)0x0;
      local_120 = 0x800000000;
      puVar9 = (uint *)(param_3 + 0xd);
      iVar23 = (int)param_3[0x10];
      if (iVar23 == 0) {
        uVar33 = 1;
        uVar31 = 0;
        iVar30 = 0;
        uVar25 = 0;
      }
      else {
        puVar7 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar7 = puVar9;
        }
        uVar20 = *puVar7;
        if (uVar20 == 0) {
          iVar30 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar30 = iVar23 + -1;
          }
          uVar31 = 0;
          uVar33 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar33 = uVar31;
          }
          uVar25 = 0;
          do {
            if (uVar33 == uVar31) goto LAB_140e53ddd;
            uVar25 = uVar25 + 0x20;
            uVar20 = puVar7[uVar31 + 1];
            uVar31 = uVar31 + 1;
          } while (uVar20 == 0);
        }
        else {
          uVar31 = 0;
          uVar25 = 0;
        }
        uVar33 = (ulonglong)(-uVar20 & uVar20);
        uVar1 = uVar33 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar30 = (uVar25 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar23 <= iVar30) {
          iVar30 = iVar23;
        }
      }
      if (iVar30 < iVar23) {
        local_1f8 = (uint *)(param_3 + 0xb);
        local_1c0 = param_3 + 7;
        uVar20 = 0xffffffff;
        local_1c8 = puVar9;
LAB_140e52620:
        local_1cc = iVar30;
        local_220 = (uint *)CONCAT44(local_220._4_4_,uVar20);
        puVar7 = (uint *)(*(longlong *)local_1f8 + (longlong)local_1cc * 200);
        puVar27 = puVar7 + 2;
        uVar20 = *puVar7;
        if (((puVar7[4] != puVar7[0xf]) || (puVar7[0x18] != puVar7[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar18 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar18 = local_1c0;
          }
          iVar23 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_3[9] - 1U & uVar20) * 4);
          if (iVar23 != -1) {
            do {
              lVar28 = *param_3 + (longlong)iVar23 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar23 * 0x10) == uVar20) {
                if ((lVar28 != 0) && (lVar28 != -4)) {
                  uVar16 = puVar7[0xc];
                  local_1f0 = uVar31;
                  local_214 = uVar25;
                  local_210 = uVar33;
                  local_1d0 = uVar20;
                  if (uVar16 == 0) {
                    uVar31 = 1;
                    uVar33 = 0;
                    uVar25 = 0;
                    iVar23 = 0;
                    goto LAB_140e5275f;
                  }
                  puVar17 = *(uint **)(puVar7 + 10);
                  if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
                    puVar17 = puVar7 + 6;
                  }
                  uVar25 = *puVar17;
                  if (uVar25 != 0) {
                    uVar33 = 0;
                    iVar23 = 0;
                    goto LAB_140e52737;
                  }
                  iVar23 = uVar16 + 0x1e;
                  if (-1 < (int)(uVar16 - 1)) {
                    iVar23 = uVar16 - 1;
                  }
                  uVar33 = 0;
                  uVar31 = (ulonglong)(uint)(iVar23 >> 5);
                  if (iVar23 >> 5 < 1) {
                    uVar31 = uVar33;
                  }
                  iVar23 = 0;
                  goto LAB_140e5271e;
                }
                break;
              }
              iVar23 = *(int *)(lVar28 + 8);
            } while (iVar23 != -1);
          }
        }
        goto LAB_140e526a5;
      }
LAB_140e53ddd:
      puVar9 = local_128;
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)local_228 + 0x4b) = 1;
      }
    }
    else {
      bVar2 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar2 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar2 | 1, (bVar2 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar2 | 5;
        goto LAB_140e52d6d;
      }
      plVar18 = (longlong *)*param_2;
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)param_2[1];
        local_d8 = (uint *)0x0;
        local_d0 = 0x800000000;
        cVar5 = FUN_140e54d82(&local_1b0);
        if (cVar5 == '\0') {
LAB_140e5390c:
          if (local_d8 != (uint *)0x0) {
            FUN_1400020a8();
          }
LAB_140e5391e:
          puVar7 = (uint *)0x0;
          goto LAB_140e5244b;
        }
        iVar23 = 0;
        local_128 = (uint *)0x0;
        local_120 = 0x800000000;
        local_158 = (undefined4 *)0x0;
        local_150 = 0x800000000;
        if (0 < local_100) {
          plVar12 = param_3 + 7;
          local_1e8 = param_3 + 0xb;
          do {
            plVar8 = local_1e0;
            local_1b4 = 0;
            puVar32 = (ulonglong *)plVar18[1];
            puVar9 = (uint *)*puVar32 + 1;
            if ((uint *)puVar32[1] < puVar9) {
              if ((*(byte *)((longlong)plVar18 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar18 + 0x170))(plVar18,&local_1b4,4);
              }
              else {
                FUN_14572512c(plVar18,&local_1b4);
              }
            }
            else {
              local_1b4 = *(uint *)*puVar32;
              *puVar32 = (ulonglong)puVar9;
            }
            uVar31 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar19 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar19 = plVar12;
              }
              iVar30 = *(int *)((longlong)plVar19 +
                               (ulonglong)((int)param_3[9] - 1U & local_1b4) * 4);
              if (iVar30 != -1) {
                do {
                  lVar28 = *param_3 + (longlong)iVar30 * 0x10;
                  if (*(uint *)(*param_3 + (longlong)iVar30 * 0x10) == local_1b4) {
                    if ((lVar28 != 0) && ((uint *)(lVar28 + 4) != (uint *)0x0)) {
                      local_1b8 = *(uint *)(lVar28 + 4);
                      puVar9 = (uint *)((longlong)(int)local_1b8 * 0x20 + *plVar8);
                      lVar28 = (longlong)(int)local_120;
                      uVar25 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar25);
                      if (local_120._4_4_ < uVar25) {
                        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
                      }
                      puVar7 = local_128;
                      if (local_128 == (uint *)0x0) {
                        puVar7 = &local_148;
                      }
                      puVar7[lVar28] = local_1b8;
                      goto LAB_140e5305b;
                    }
                    break;
                  }
                  iVar30 = *(int *)(lVar28 + 8);
                } while (iVar30 != -1);
              }
            }
            local_1b8 = 0;
            puVar9 = (uint *)FUN_1457b7fea(plVar8);
            *puVar9 = local_1b4;
            local_1b8 = (int)param_3[0x23] - 1;
            local_190 = &local_1b4;
            local_188 = &local_1b8;
            FUN_140263e2a(param_3,local_17c,&local_190);
            uVar31 = local_150;
            lVar28 = (longlong)(int)local_150;
            uVar25 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar25);
            if (local_150._4_4_ < uVar25) {
              FUN_1400cc390(local_178,uVar31 & 0xffffffff);
            }
            puVar10 = local_158;
            if (local_158 == (undefined4 *)0x0) {
              puVar10 = local_178;
            }
            puVar10[lVar28] = local_1b8;
LAB_140e5305b:
            plVar8 = local_228;
            puVar9[2] = (uint)local_108;
            puVar9[1] = puVar9[1] + 1;
            lVar28 = local_228[4];
            FUN_144958770(lVar28 + 0x30,0);
            FUN_144958770(lVar28 + 0x80,0);
            *(undefined1 *)(lVar28 + 0x28) = 1;
            puVar7 = (uint *)plVar18[0x15];
            plVar8[7] = local_1d8;
            plVar8[6] = (longlong)puVar9;
            local_190 = puVar7;
            (**(code **)(*(longlong *)plVar8[8] + 8))((longlong *)plVar8[8],plVar8);
            if ((*(byte *)((longlong)plVar18 + 0x29) & 2) == 0) {
              lVar28 = plVar8[4];
              if ((*(int *)(lVar28 + 0x38) == *(int *)(lVar28 + 100)) &&
                 (*(int *)(lVar28 + 0x88) == *(int *)(lVar28 + 0xb4))) {
                FUN_1456fd588(local_1e8,local_1b4);
                plVar8 = local_228;
              }
              else {
                local_200 = (uint *)(lVar28 + 0x30);
                puVar9 = (uint *)FUN_1456fd5f6(local_1e8,local_1b4);
                local_230 = puVar9;
                if (puVar9[2] - puVar9[0xd] == *(int *)(lVar28 + 0x38) - *(int *)(lVar28 + 100)) {
                  local_220 = puVar9 + 4;
                  uVar25 = puVar9[10];
                  if (uVar25 == 0) {
                    uVar33 = 1;
                    uVar31 = 0;
                    uVar20 = 0;
                    iVar30 = 0;
                  }
                  else {
                    puVar27 = *(uint **)(puVar9 + 8);
                    if (*(uint **)(puVar9 + 8) == (uint *)0x0) {
                      puVar27 = local_220;
                    }
                    uVar20 = *puVar27;
                    if (uVar20 == 0) {
                      iVar30 = uVar25 + 0x1e;
                      if (-1 < (int)(uVar25 - 1)) {
                        iVar30 = uVar25 - 1;
                      }
                      uVar31 = 0;
                      uVar33 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar33 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar33 == uVar31) goto LAB_140e5326b;
                        iVar30 = iVar30 + 0x20;
                        uVar20 = puVar27[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar20 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar33 = (ulonglong)(-uVar20 & uVar20);
                    uVar1 = uVar33 * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    uVar20 = (iVar30 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    if ((int)uVar25 <= (int)uVar20) {
                      uVar20 = uVar25;
                    }
                  }
                  if (uVar20 != uVar25) {
                    if (*(uint **)(puVar9 + 8) != (uint *)0x0) {
                      local_220 = *(uint **)(puVar9 + 8);
                    }
                    iVar26 = uVar25 + 0x1e;
                    if (-1 < (int)(uVar25 - 1)) {
                      iVar26 = uVar25 - 1;
                    }
                    if (*(int *)(lVar28 + 0x38) == *(int *)(lVar28 + 100)) goto LAB_140e53253;
                    iVar26 = iVar26 >> 5;
                    local_1f0 = lVar28 + 0x68;
                    if (*(ulonglong *)(lVar28 + 0x70) != 0) {
                      local_1f0 = *(ulonglong *)(lVar28 + 0x70);
                    }
                    local_214 = *(int *)(lVar28 + 0x78) - 1;
                    local_1f8 = local_220 + 1;
                    local_210 = CONCAT44(local_210._4_4_,0xffffffff);
                    do {
                      lVar24 = *(longlong *)(*(longlong *)puVar9 + (longlong)(int)uVar20 * 0x10);
                      iVar21 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar24 + (int)((ulonglong)lVar24 >> 0x20) * 0x17 &
                                       local_214) * 4);
                      if (iVar21 == -1) goto LAB_140e53253;
                      while (*(longlong *)(*(longlong *)local_200 + (longlong)iVar21 * 0x10) !=
                             lVar24) {
                        iVar21 = *(int *)((longlong)iVar21 * 0x10 + *(longlong *)local_200 + 8);
                        if (iVar21 == -1) goto LAB_140e53253;
                      }
                      uVar16 = (uint)local_210 & ~(uint)uVar33;
                      iVar21 = (int)uVar31;
                      lVar24 = (longlong)iVar21;
                      uVar20 = local_220[lVar24] & uVar16;
                      if (uVar20 == 0) {
                        iVar14 = iVar26;
                        if (iVar26 < iVar21) {
                          iVar14 = iVar21;
                        }
                        if (iVar26 <= iVar21) break;
                        lVar34 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar20 = local_1f8[lVar24 + lVar34];
                          if (uVar20 != 0) break;
                          lVar34 = lVar34 + 1;
                          if (iVar14 - lVar24 == lVar34) goto LAB_140e5326b;
                        }
                        uVar31 = (ulonglong)(iVar21 + (int)lVar34 + 1);
                        local_210 = CONCAT44(local_210._4_4_,0xffffffff);
                      }
                      else {
                        local_210 = CONCAT44(local_210._4_4_,uVar16);
                      }
                      uVar33 = (ulonglong)(-uVar20 & uVar20);
                      uVar1 = uVar33 * 2 + 1;
                      lVar24 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                        }
                      }
                      uVar20 = (iVar30 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar20 < (int)uVar25);
                  }
                }
                else {
LAB_140e53253:
                  FUN_140492002(puVar9,local_200);
                  *(undefined1 *)((longlong)local_228 + 0x4c) = 1;
                }
LAB_140e5326b:
                local_200 = (uint *)(lVar28 + 0x80);
                if (local_230[0x16] - local_230[0x21] ==
                    *(int *)(lVar28 + 0x88) - *(int *)(lVar28 + 0xb4)) {
                  local_220 = puVar9 + 0x18;
                  uVar25 = local_230[0x1e];
                  if (uVar25 == 0) {
                    uVar33 = 1;
                    uVar31 = 0;
                    uVar20 = 0;
                    iVar30 = 0;
                  }
                  else {
                    puVar27 = *(uint **)(local_230 + 0x1c);
                    if (*(uint **)(local_230 + 0x1c) == (uint *)0x0) {
                      puVar27 = local_220;
                    }
                    uVar20 = *puVar27;
                    if (uVar20 == 0) {
                      iVar30 = uVar25 + 0x1e;
                      if (-1 < (int)(uVar25 - 1)) {
                        iVar30 = uVar25 - 1;
                      }
                      uVar31 = 0;
                      uVar33 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar33 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar33 == uVar31) goto LAB_140e5337a;
                        iVar30 = iVar30 + 0x20;
                        uVar20 = puVar27[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar20 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar33 = (ulonglong)(-uVar20 & uVar20);
                    uVar1 = uVar33 * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    uVar20 = (iVar30 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    if ((int)uVar25 <= (int)uVar20) {
                      uVar20 = uVar25;
                    }
                  }
                  if (uVar20 != uVar25) {
                    if (*(uint **)(local_230 + 0x1c) != (uint *)0x0) {
                      local_220 = *(uint **)(local_230 + 0x1c);
                    }
                    iVar26 = uVar25 + 0x1e;
                    if (-1 < (int)(uVar25 - 1)) {
                      iVar26 = uVar25 - 1;
                    }
                    if (*(int *)(lVar28 + 0x88) == *(int *)(lVar28 + 0xb4)) goto LAB_140e53363;
                    iVar26 = iVar26 >> 5;
                    local_1f0 = lVar28 + 0xb8;
                    if (*(ulonglong *)(lVar28 + 0xc0) != 0) {
                      local_1f0 = *(ulonglong *)(lVar28 + 0xc0);
                    }
                    local_214 = *(int *)(lVar28 + 200) - 1;
                    local_1f8 = local_220 + 1;
                    local_210 = CONCAT44(local_210._4_4_,0xffffffff);
                    do {
                      lVar24 = *(longlong *)
                                (*(longlong *)(local_230 + 0x14) + (longlong)(int)uVar20 * 0x10);
                      iVar21 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar24 + (int)((ulonglong)lVar24 >> 0x20) * 0x17 &
                                       local_214) * 4);
                      if (iVar21 == -1) goto LAB_140e53363;
                      while (*(longlong *)(*(longlong *)local_200 + (longlong)iVar21 * 0x10) !=
                             lVar24) {
                        iVar21 = *(int *)((longlong)iVar21 * 0x10 + *(longlong *)local_200 + 8);
                        if (iVar21 == -1) goto LAB_140e53363;
                      }
                      uVar16 = (uint)local_210 & ~(uint)uVar33;
                      iVar21 = (int)uVar31;
                      lVar24 = (longlong)iVar21;
                      uVar20 = local_220[lVar24] & uVar16;
                      if (uVar20 == 0) {
                        iVar14 = iVar26;
                        if (iVar26 < iVar21) {
                          iVar14 = iVar21;
                        }
                        if (iVar26 <= iVar21) break;
                        lVar34 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar20 = local_1f8[lVar24 + lVar34];
                          if (uVar20 != 0) break;
                          lVar34 = lVar34 + 1;
                          if (iVar14 - lVar24 == lVar34) goto LAB_140e5337a;
                        }
                        uVar31 = (ulonglong)(iVar21 + (int)lVar34 + 1);
                        local_210 = CONCAT44(local_210._4_4_,0xffffffff);
                      }
                      else {
                        local_210 = CONCAT44(local_210._4_4_,uVar16);
                      }
                      uVar33 = (ulonglong)(-uVar20 & uVar20);
                      uVar1 = uVar33 * 2 + 1;
                      lVar24 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                        }
                      }
                      uVar20 = (iVar30 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar20 < (int)uVar25);
                  }
                }
                else {
LAB_140e53363:
                  FUN_140492002(puVar9 + 0x14,local_200);
                  *(undefined1 *)((longlong)local_228 + 0x4c) = 1;
                }
LAB_140e5337a:
                puVar27 = local_230;
                local_230[0x2a] = 0;
                if (local_230[0x2b] != 0) {
                  FUN_144893a1c(puVar9 + 0x28,0);
                }
                puVar27[0x2c] = (int)plVar18[0x15] - (int)puVar7;
                FUN_14049209c(&local_190,plVar18,puVar9 + 0x28);
                plVar8 = local_228;
                if (*(int *)(lVar28 + 0x38) != *(int *)(lVar28 + 100)) {
                  *(undefined1 *)((longlong)local_228 + 0x4b) = 1;
                }
              }
            }
            lVar28 = plVar8[4];
            FUN_144958770(lVar28 + 0x30,0);
            FUN_144958770(lVar28 + 0x80,0);
            *(undefined1 *)(lVar28 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar18 + 0x29) & 2) != 0) {
              if (local_158 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (uint *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_140e5390c;
            }
            iVar23 = iVar23 + 1;
            param_3 = local_208;
            param_2 = local_198;
          } while (iVar23 < local_100);
        }
        plVar18 = local_1a8;
        if (((char)param_2[10] == '\0') && (iVar23 = (int)local_1a8[1], 0 < iVar23)) {
          uVar31 = 0;
          do {
            uVar33 = local_d0;
            iVar30 = *(int *)(*plVar18 + 8 + uVar31 * 0x20);
            if ((iVar30 < (int)(uint)local_108) && (local_108._4_4_ < iVar30)) {
              puVar9 = local_d8;
              if (local_d8 == (uint *)0x0) {
                puVar9 = local_f8;
              }
              lVar28 = (longlong)(int)local_d0;
              if (lVar28 != 0) {
                lVar24 = 0;
                do {
                  if (uVar31 == *(uint *)((longlong)puVar9 + lVar24)) goto LAB_140e539e5;
                  lVar24 = lVar24 + 4;
                } while (lVar28 * 4 - lVar24 != 0);
              }
              uVar25 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar25);
              if (local_d0._4_4_ < uVar25) {
                FUN_1400cc390(local_f8,uVar33 & 0xffffffff);
              }
              puVar9 = local_d8;
              if (local_d8 == (uint *)0x0) {
                puVar9 = local_f8;
              }
              puVar9[lVar28] = (uint)uVar31;
              iVar23 = (int)plVar18[1];
            }
LAB_140e539e5:
            uVar31 = uVar31 + 1;
          } while ((longlong)uVar31 < (longlong)iVar23);
        }
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar12 = local_1a0;
        plVar18 = local_1a8;
        puVar9 = local_d8;
        if (local_d8 == (uint *)0x0) {
          puVar9 = local_f8;
        }
        if ((int)local_d0 != 0) {
          local_208 = local_208 + 0xb;
          lVar28 = (longlong)(int)local_d0;
          lVar24 = 0;
          do {
            iVar23 = *(int *)((longlong)puVar9 + lVar24);
            if ((-1 < (longlong)iVar23) && (iVar23 < (int)plVar18[1])) {
              lVar34 = (longlong)iVar23 * 0x20;
              iVar23 = FUN_1456fd588(local_208,*(undefined4 *)(*plVar18 + lVar34));
              if (0 < iVar23) {
                *(undefined1 *)((longlong)param_2 + 0x4c) = 1;
              }
              if (plVar12[0x24] != 0) {
                FUN_1457b808a(plVar12[0x24],1,*(undefined8 *)(*plVar18 + 0x10 + lVar34));
              }
            }
            lVar24 = lVar24 + 4;
          } while (lVar28 * 4 != lVar24);
        }
        plVar12 = local_1a0;
        plVar18 = local_1a8;
        puVar10 = local_158;
        if (local_158 == (undefined4 *)0x0) {
          puVar10 = local_178;
        }
        lVar28 = (longlong)(int)local_150;
        if (lVar28 != 0) {
          lVar24 = 0;
          do {
            if (plVar12[0x24] != 0) {
              FUN_1457b808a(plVar12[0x24],0,
                            *(undefined8 *)
                             (*plVar18 + 0x10 +
                             (longlong)*(int *)((longlong)puVar10 + lVar24) * 0x20));
            }
            lVar24 = lVar24 + 4;
          } while (lVar28 * 4 != lVar24);
        }
        plVar12 = local_1a0;
        plVar18 = local_1a8;
        puVar9 = local_128;
        if (local_128 == (uint *)0x0) {
          puVar9 = &local_148;
        }
        lVar28 = (longlong)(int)local_120;
        if (lVar28 != 0) {
          lVar24 = 0;
          do {
            if (plVar12[0x24] != 0) {
              lVar34 = (longlong)*(int *)((longlong)puVar9 + lVar24) * 0x20;
              FUN_1457b8026(plVar12[0x24],lVar34,*(undefined8 *)(*plVar18 + 0x10 + lVar34),
                            *(undefined4 *)(*plVar18 + 0x18 + lVar34));
            }
            lVar24 = lVar24 + 4;
          } while (lVar28 * 4 != lVar24);
        }
        if (0 < (int)local_d0) {
          puVar9 = local_d8;
          if (local_d8 == (uint *)0x0) {
            puVar9 = local_f8;
          }
          FUN_144958a06(puVar9);
          plVar18 = local_1a8;
          if (0 < (longlong)(int)local_d0) {
            uVar31 = (longlong)(int)local_d0 + 1;
            do {
              puVar9 = local_d8;
              if (local_d8 == (uint *)0x0) {
                puVar9 = local_f8;
              }
              uVar25 = puVar9[uVar31 - 2];
              if ((-1 < (longlong)(int)uVar25) && (iVar23 = (int)plVar18[1], (int)uVar25 < iVar23))
              {
                iVar30 = ~uVar25 + iVar23;
                if (iVar30 != 0) {
                  if (0 < iVar30) {
                    iVar30 = 1;
                  }
                  memmove((void *)((longlong)(int)uVar25 * 0x20 + *plVar18),
                          (void *)((ulonglong)(uint)(iVar23 - iVar30) * 0x20 + *plVar18),
                          (longlong)iVar30 << 5);
                  iVar23 = (int)plVar18[1];
                }
                *(int *)(plVar18 + 1) = iVar23 + -1;
              }
              uVar31 = uVar31 - 1;
            } while (1 < uVar31);
          }
          FUN_14010afec(local_1a0,0);
        }
        if (local_158 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        puVar9 = local_d8;
        if (local_128 != (uint *)0x0) {
          FUN_1400020a8();
          puVar9 = local_d8;
        }
        goto LAB_140e53df4;
      }
      lVar28 = param_2[3];
      if (lVar28 == 0) {
        local_230 = (uint *)CONCAT44(local_230._4_4_,0xffffffff);
        lVar28 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar28 + 0x70);
        cVar5 = FUN_140e54a96(&local_1b0,uVar3);
        if (cVar5 == '\0') goto LAB_140e5391e;
        local_230 = (uint *)CONCAT44(local_230._4_4_,uVar3);
        lVar28 = lVar28 + 0x20;
      }
      puVar11 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = &PTR_FUN_14ab190a0;
      puVar11[8] = 0;
      *(undefined4 *)(puVar11 + 9) = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(undefined8 *)((longlong)puVar11 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar11 + 0x54) = 0;
      puVar11[0xc] = 0;
      *(undefined4 *)(puVar11 + 0xd) = 0;
      *(undefined4 *)(puVar11 + 0xe) = 0xffffffff;
      puVar13 = (undefined8 *)param_2[2];
      plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar12[1] = (longlong)&DAT_100000001;
      *plVar12 = (longlong)&PTR_FUN_14ab190c0;
      plVar12[2] = (longlong)puVar11;
      if (puVar11 == (undefined8 *)0x0) {
LAB_140e536cc:
        *puVar13 = puVar11;
        plVar8 = (longlong *)puVar13[1];
        if (plVar12 == plVar8) {
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar12 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar4 = (int *)((longlong)plVar12 + 0xc);
              *piVar4 = *piVar4 + -1;
              iVar23 = *piVar4;
              UNLOCK();
              plVar8 = plVar12;
              goto joined_r0x000140e53708;
            }
          }
        }
        else {
          puVar13[1] = plVar12;
          if (plVar8 != (longlong *)0x0) goto LAB_140e53724;
        }
      }
      else {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          puVar11[1] = puVar11;
          if ((longlong *)puVar11[2] != plVar12) {
            LOCK();
            *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
            UNLOCK();
            plVar8 = (longlong *)puVar11[2];
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar4 = (int *)((longlong)plVar8 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar8 + 0x10))();
              }
            }
            puVar11[2] = plVar12;
          }
          LOCK();
          plVar8 = plVar12 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar4 = (int *)((longlong)plVar12 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
          goto LAB_140e536cc;
        }
        puVar11[1] = puVar11;
        *puVar13 = puVar11;
        plVar8 = (longlong *)puVar13[1];
        if (plVar8 != (longlong *)0x0) {
          puVar13[1] = 0;
LAB_140e53724:
          LOCK();
          plVar12 = plVar8 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar4 = (int *)((longlong)plVar8 + 0xc);
            *piVar4 = *piVar4 + -1;
            iVar23 = *piVar4;
            UNLOCK();
joined_r0x000140e53708:
            if (iVar23 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      plVar12 = local_228;
      local_148 = *(uint *)((longlong)param_3 + 0x54);
      *(uint *)(puVar11 + 0xe) = local_148;
      local_144 = local_230._0_4_;
      local_140 = 0;
      local_118 = (uint *)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_228 + 0x4e) == '\x01') {
        FUN_140e547bc(&local_1b0,puVar11 + 4,&local_108);
      }
      else {
        local_238 = local_138;
        FUN_140e55056(&local_1b0,puVar11 + 4,lVar28,&local_108);
        *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      local_140 = (int)local_c0;
      FUN_140e548a4(&local_1b0);
      if (0 < (int)local_c0) {
        lVar28 = 0;
        do {
          puVar13 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar13 = &local_108;
          }
          iVar23 = *(int *)(puVar13 + lVar28);
          lVar24 = *local_1e0;
          local_178[0] = *(undefined4 *)((longlong)puVar13 + lVar28 * 8 + 4);
          puVar32 = (ulonglong *)plVar18[1];
          puVar10 = (undefined4 *)*puVar32 + 1;
          if ((undefined4 *)puVar32[1] < puVar10) {
            if ((*(byte *)((longlong)plVar18 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar18 + 0x170))(plVar18,local_178,4);
            }
            else {
              FUN_14572512c(plVar18,local_178);
            }
          }
          else {
            local_178[0] = *(undefined4 *)*puVar32;
            *puVar32 = (ulonglong)puVar10;
          }
          plVar12[7] = local_1d8;
          plVar12[6] = (longlong)iVar23 * 0x20 + lVar24;
          (**(code **)(*(longlong *)plVar12[8] + 8))((longlong *)plVar12[8],plVar12);
          lVar28 = lVar28 + 1;
        } while ((int)lVar28 < (int)local_c0);
      }
      puVar9 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        puVar9 = local_118;
      }
    }
LAB_140e53df4:
    if (puVar9 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar23 = (int)param_3[0x10];
    if (iVar23 == 0) {
      uVar31 = 1;
      iVar26 = 0;
      iVar30 = 0;
      uVar33 = 0;
    }
    else {
      puVar9 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar9 = (uint *)(param_3 + 0xd);
      }
      uVar25 = *puVar9;
      if (uVar25 == 0) {
        iVar30 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar30 = iVar23 + -1;
        }
        uVar33 = 0;
        uVar31 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar31 = uVar33;
        }
        iVar26 = 0;
        do {
          if (uVar31 == uVar33) goto LAB_140e52449;
          iVar26 = iVar26 + 0x20;
          uVar25 = puVar9[uVar33 + 1];
          uVar33 = uVar33 + 1;
        } while (uVar25 == 0);
      }
      else {
        iVar26 = 0;
        uVar33 = 0;
      }
      uVar31 = (ulonglong)(-uVar25 & uVar25);
      uVar1 = uVar31 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar30 = (iVar26 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar30) {
        iVar30 = iVar23;
      }
    }
    puVar7 = (uint *)0x1;
    if (iVar30 == iVar23) goto LAB_140e5244b;
    uVar25 = 0xffffffff;
    local_230 = (uint *)(param_3 + 0xd);
    do {
      lVar28 = local_208[0xb];
      lVar24 = (longlong)iVar30 * 200;
      FUN_1403257c8(param_2[0xd],lVar24 + lVar28 + 8);
      FUN_1403257c8(param_2[0xd],lVar24 + lVar28 + 0x58);
      piVar4 = (int *)param_2[0xe];
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(lVar28 + lVar24 + 0xb0);
      }
      uVar25 = uVar25 & ~(uint)uVar31;
      puVar9 = (uint *)local_208[0xf];
      if ((uint *)local_208[0xf] == (uint *)0x0) {
        puVar9 = local_230;
      }
      iVar21 = (int)local_208[0x10];
      iVar30 = (int)uVar33;
      lVar28 = (longlong)iVar30;
      uVar20 = puVar9[lVar28] & uVar25;
      if (uVar20 == 0) {
        iVar14 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar14 = iVar21 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar26 = iVar26 + 0x20;
        iVar15 = iVar14;
        if (iVar14 < iVar30) {
          iVar15 = iVar30;
        }
        if (iVar30 < iVar14) {
          lVar24 = 0;
          do {
            uVar20 = puVar9[lVar28 + lVar24 + 1];
            if (uVar20 != 0) {
              uVar33 = (ulonglong)(iVar30 + (int)lVar24 + 1);
              uVar25 = 0xffffffff;
              goto LAB_140e52414;
            }
            iVar26 = iVar26 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar15 - lVar28 != lVar24);
          uVar25 = 0xffffffff;
          iVar30 = iVar15;
        }
        uVar33 = (ulonglong)(iVar30 + 1);
        iVar30 = iVar21;
      }
      else {
LAB_140e52414:
        uVar31 = (ulonglong)(-uVar20 & uVar20);
        uVar1 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar30 = (iVar26 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar30) {
          iVar30 = iVar21;
        }
      }
    } while (iVar30 != iVar23);
  }
LAB_140e52449:
  puVar7 = (uint *)0x1;
LAB_140e5244b:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
  while( true ) {
    iVar23 = iVar23 + 0x20;
    uVar25 = puVar17[uVar33 + 1];
    uVar33 = uVar33 + 1;
    if (uVar25 != 0) break;
LAB_140e5271e:
    if (uVar31 == uVar33) goto LAB_140e52a36;
  }
LAB_140e52737:
  uVar31 = (ulonglong)(-uVar25 & uVar25);
  uVar1 = uVar31 * 2 + 1;
  lVar28 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  uVar25 = (iVar23 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
  if ((int)uVar16 <= (int)uVar25) {
    uVar25 = uVar16;
  }
LAB_140e5275f:
  if ((int)uVar25 < (int)uVar16) {
    local_200 = puVar7 + 0x16;
    uVar20 = 0xffffffff;
    local_1e8 = (longlong *)((ulonglong)local_1e8 & 0xffffffff00000000);
    local_230 = puVar27;
    do {
      plVar18 = local_228;
      puVar32 = (ulonglong *)((longlong)(int)uVar25 * 0x10 + *(longlong *)puVar27);
      cVar5 = (**(code **)(*(longlong *)local_228[4] + 0x330))((longlong *)local_228[4],puVar32,0);
      if (cVar5 == '\0') {
        puVar22 = puVar32;
        lVar28 = (**(code **)(*(longlong *)plVar18[4] + 800))((longlong *)plVar18[4],puVar32);
        puVar27 = local_230;
        if (lVar28 != 0) {
          local_1e8 = (longlong *)
                      CONCAT44(local_1e8._4_4_,(int)CONCAT71((int7)((ulonglong)puVar22 >> 8),1));
          if ((*puVar32 & 1) == 0 && *puVar32 != 0) {
            FUN_140325a06(local_200,&local_108,puVar32,0);
          }
          goto LAB_140e527b3;
        }
      }
      else {
LAB_140e527b3:
        puVar27 = local_230;
        FUN_140646052(local_230,uVar25);
      }
      plVar18 = local_228;
      uVar20 = uVar20 & ~(uint)uVar31;
      puVar9 = *(uint **)(puVar27 + 8);
      if (*(uint **)(puVar27 + 8) == (uint *)0x0) {
        puVar9 = puVar7 + 6;
      }
      uVar16 = puVar27[10];
      iVar30 = (int)uVar33;
      lVar28 = (longlong)iVar30;
      uVar25 = puVar9[lVar28] & uVar20;
      if (uVar25 == 0) {
        iVar26 = uVar16 + 0x1e;
        if (-1 < (int)(uVar16 - 1)) {
          iVar26 = uVar16 - 1;
        }
        iVar26 = iVar26 >> 5;
        iVar21 = iVar26;
        if (iVar26 < iVar30) {
          iVar21 = iVar30;
        }
        if (iVar26 <= iVar30) break;
        lVar24 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar25 = puVar9[lVar28 + lVar24 + 1];
          if (uVar25 != 0) break;
          lVar24 = lVar24 + 1;
          if (iVar21 - lVar28 == lVar24) goto LAB_140e528b2;
        }
        uVar33 = (ulonglong)(iVar30 + (int)lVar24 + 1);
        uVar20 = 0xffffffff;
      }
      uVar31 = (ulonglong)(-uVar25 & uVar25);
      uVar1 = uVar31 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar25 = (iVar23 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    } while ((int)uVar25 < (int)uVar16);
LAB_140e528b2:
    puVar9 = local_1c8;
    if (((ulonglong)local_1e8 & 1) != 0) {
      *(undefined1 *)((longlong)local_228 + 0x49) = 1;
      if (*(char *)((longlong)local_228 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_228[0xb] + 0x210))();
        *(undefined1 *)((longlong)plVar18 + 0x4a) = 1;
        puVar27 = local_230;
      }
      uVar31 = local_120;
      plVar12 = local_208;
      if ((int)local_208[1] != *(int *)((longlong)local_208 + 0x34)) {
        plVar8 = (longlong *)local_208[8];
        if ((longlong *)local_208[8] == (longlong *)0x0) {
          plVar8 = local_1c0;
        }
        iVar23 = *(int *)((longlong)plVar8 + (ulonglong)((int)local_208[9] - 1U & local_1d0) * 4);
        if (iVar23 != -1) {
          do {
            lVar28 = *local_208 + (longlong)iVar23 * 0x10;
            if (*(uint *)(*local_208 + (longlong)iVar23 * 0x10) == local_1d0) goto LAB_140e52900;
            iVar23 = *(int *)(lVar28 + 8);
          } while (iVar23 != -1);
        }
      }
      lVar28 = 0;
LAB_140e52900:
      uVar25 = *(uint *)(lVar28 + 4);
      lVar28 = *local_1e0;
      lVar24 = (longlong)(int)local_120;
      uVar20 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar20);
      if (local_120._4_4_ < uVar20) {
        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
        puVar27 = local_230;
      }
      puVar9 = local_128;
      if (local_128 == (uint *)0x0) {
        puVar9 = &local_148;
      }
      puVar9[lVar24] = uVar25;
      FUN_1448fcc30(&local_108,plVar18[4],*(undefined8 *)(puVar27 + 0x28),
                    (longlong)(int)puVar27[0x2c]);
      plVar18[7] = local_1d8;
      plVar18[6] = (longlong)(int)uVar25 * 0x20 + lVar28;
      plVar18[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)plVar18[8] + 8))((longlong *)plVar18[8],plVar18);
      if (plVar12[0x24] != 0) {
        FUN_1457b8026();
      }
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      puVar9 = local_1c8;
      local_108 = &PTR_FUN_149e37220;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar18 = local_b0;
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar18);
      }
      lVar28 = local_90;
      puVar27 = local_230;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar28);
        puVar27 = local_230;
      }
    }
  }
LAB_140e52a36:
  uVar20 = (uint)local_210;
  param_3 = local_208;
  uVar31 = local_1f0;
  uVar25 = local_214;
  if ((puVar27[2] == puVar27[0xd]) && (uVar33 = local_210, puVar27[0x16] == puVar27[0x21])) {
LAB_140e526a5:
    uVar20 = (uint)uVar33;
    FUN_1456fd4bc(local_1f8,local_1cc);
  }
  uVar20 = (uint)local_220 & ~uVar20;
  puVar7 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar7 = puVar9;
  }
  iVar23 = (int)param_3[0x10];
  iVar30 = (int)uVar31;
  lVar28 = (longlong)iVar30;
  uVar16 = puVar7[lVar28] & uVar20;
  if (uVar16 == 0) {
    iVar26 = iVar23 + 0x1e;
    if (-1 < iVar23 + -1) {
      iVar26 = iVar23 + -1;
    }
    iVar26 = iVar26 >> 5;
    iVar21 = iVar26;
    if (iVar26 < iVar30) {
      iVar21 = iVar30;
    }
    if (iVar26 <= iVar30) goto LAB_140e53ddd;
    lVar24 = 0;
    while( true ) {
      uVar25 = uVar25 + 0x20;
      uVar16 = puVar7[lVar28 + lVar24 + 1];
      if (uVar16 != 0) break;
      lVar24 = lVar24 + 1;
      if (iVar21 - lVar28 == lVar24) goto LAB_140e53ddd;
    }
    uVar31 = (ulonglong)(iVar30 + (int)lVar24 + 1);
    uVar20 = 0xffffffff;
  }
  uVar33 = (ulonglong)(-uVar16 & uVar16);
  uVar1 = uVar33 * 2 + 1;
  lVar28 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  iVar30 = (uVar25 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
  if (iVar23 <= iVar30) goto LAB_140e53ddd;
  goto LAB_140e52620;
}



// FUNCTION 140e53e40 FUN_140e53e40 body=225 status=ok
// SIG undefined FUN_140e53e40(void)

void FUN_140e53e40(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x20) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x20;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e547bc FUN_140e547bc body=231 status=ok
// SIG undefined FUN_140e547bc(void)

void FUN_140e547bc(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e548a4 FUN_140e548a4 body=496 status=ok
// SIG undefined FUN_140e548a4(void)

void FUN_140e548a4(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e54a96 FUN_140e54a96 body=748 status=ok
// SIG undefined FUN_140e54a96(void)

bool FUN_140e54a96(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar6 + 0x54);
  if (iVar3 != param_2) goto LAB_140e54d6e;
  iVar11 = *(int *)(lVar6 + 0x104);
  iVar10 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar11 != iVar10 || iVar11 == -1) || (iVar10 = iVar11, *(int *)(lVar6 + 0x108) == -1)) {
    *(int *)(lVar6 + 0x104) = iVar10;
    lVar6 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar6 == 0) {
      iVar11 = 0;
    }
    else {
      lVar12 = 0;
      iVar11 = 0;
      do {
        iVar11 = iVar11 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x20;
      } while (lVar6 * 0x20 != lVar12);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar11;
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar6 + 0x18);
  if (lVar12 != 0) {
    plVar8 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar8 == (longlong *)0x0) {
LAB_140e54c88:
      uVar9 = 0;
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar11 = (int)plVar8[1];
      do {
        if (iVar11 == 0) goto LAB_140e54c88;
        LOCK();
        iVar10 = (int)plVar8[1];
        bVar14 = iVar11 == iVar10;
        if (bVar14) {
          *(int *)(plVar8 + 1) = iVar11 + 1;
          iVar10 = iVar11;
        }
        iVar11 = iVar10;
        UNLOCK();
      } while (!bVar14);
      uVar9 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar9;
    plVar13 = (longlong *)puVar4[1];
    if (plVar8 == plVar13) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar11 = *piVar2;
          UNLOCK();
          plVar13 = plVar8;
          goto joined_r0x000140e54cd7;
        }
      }
    }
    else {
      puVar4[1] = plVar8;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar11 = *piVar2;
          UNLOCK();
joined_r0x000140e54cd7:
          if (iVar11 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    goto LAB_140e54d6e;
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = &PTR_FUN_14ab190a0;
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 9) = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar7 + 0x54) = 0;
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xd) = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar6 + 0x10);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ab190c0;
  plVar8[2] = (longlong)puVar7;
  if (puVar7 == (undefined8 *)0x0) {
LAB_140e54c61:
    *puVar4 = puVar7;
    plVar13 = (longlong *)puVar4[1];
    if (plVar8 == plVar13) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar11 = *piVar2;
          UNLOCK();
          plVar13 = plVar8;
          goto joined_r0x000140e54d26;
        }
      }
    }
    else {
      puVar4[1] = plVar8;
      if (plVar13 != (longlong *)0x0) goto LAB_140e54d45;
    }
  }
  else {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      puVar7[1] = puVar7;
      if ((longlong *)puVar7[2] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar7[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar7[2] = plVar8;
      }
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_140e54c61;
    }
    puVar7[1] = puVar7;
    *puVar4 = puVar7;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_140e54d45:
      LOCK();
      plVar8 = plVar13 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar11 = *piVar2;
        UNLOCK();
joined_r0x000140e54d26:
        if (iVar11 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar7 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_140e54d6e:
  return iVar3 != param_2;
}



// FUNCTION 140e54d82 FUN_140e54d82 body=723 status=ok
// SIG undefined FUN_140e54d82(void)

undefined8 FUN_140e54d82(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_140e54fe3;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_140e54fe3:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140e55056 FUN_140e55056 body=1066 status=ok
// SIG undefined FUN_140e55056(void)

void FUN_140e55056(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 8);
  iVar3 = (int)plVar2[1];
  iVar11 = 0;
  iVar9 = 0;
  if ((longlong)iVar3 != 0) {
    lVar13 = 0;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + (uint)(byte)(*(int *)(*plVar2 + lVar13) != -1 |
                                  *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar13 = lVar13 + 0x20;
    } while ((longlong)iVar3 << 5 != lVar13);
  }
  if (param_3 != (longlong *)0x0) {
    iVar11 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar11 = iVar11 - iVar9;
  local_80 = param_2;
  if (0 < iVar3) {
    local_78 = param_3 + 7;
    lVar13 = 0;
    do {
      iVar3 = *(int *)(*plVar2 + lVar13 * 0x20);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar3 != -1)) {
        puVar15 = (uint *)(*plVar2 + lVar13 * 0x20);
        if (iVar3 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar15);
        }
        local_60 = puVar15;
        local_58 = puVar15 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar12 = *puVar15;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar2 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar2 = local_78;
          }
          iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_3[9] - 1U & uVar12) * 4);
          if (iVar3 != -1) {
            do {
              lVar10 = *param_3 + (longlong)iVar3 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar3 * 0x10) == uVar12) {
                if ((uint *)(lVar10 + 4) != (uint *)0x0 && lVar10 != 0) {
                  if (*(uint *)(lVar10 + 4) != puVar15[1]) {
                    iVar3 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar3 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
                      FUN_14593fc44(param_4,iVar3);
                    }
                    lVar10 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar10 = param_4;
                    }
                    *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) =
                         ((ulonglong)uVar12 << 0x20) + lVar13;
                  }
                  goto LAB_140e551cc;
                }
                break;
              }
              iVar3 = *(int *)(lVar10 + 8);
            } while (iVar3 != -1);
          }
        }
        iVar3 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar3 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
          FUN_14593fc44(param_4,iVar3);
        }
        lVar10 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar10 = param_4;
        }
        *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) = ((ulonglong)uVar12 << 0x20) + lVar13;
        iVar11 = iVar11 + 1;
      }
LAB_140e551cc:
      lVar13 = lVar13 + 1;
      plVar2 = *(longlong **)(param_1 + 8);
    } while (lVar13 < (int)plVar2[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar11)) {
    puVar15 = (uint *)(param_3 + 2);
    iVar3 = (int)param_3[5];
    if (iVar3 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar8 = puVar15;
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_140e5544f;
          iVar9 = iVar9 + 0x20;
          uVar12 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 < iVar3) {
      local_68 = local_80 + 7;
      uVar12 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar13 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar5 = *(uint *)(lVar13 + (longlong)iVar4 * 0x10);
          plVar2 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar2 = local_68;
          }
          iVar6 = *(int *)((longlong)plVar2 + (ulonglong)((int)local_80[9] - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar6 * 0x10) == uVar5) goto LAB_140e553ba;
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + *local_80 + 8);
            } while (iVar6 != -1);
          }
        }
        iVar3 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar3 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar9);
          FUN_1400cc390(param_5,iVar3);
          param_3 = local_70;
          iVar9 = (int)local_78;
        }
        lVar10 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar10 = param_5;
        }
        *(undefined4 *)(lVar10 + (longlong)iVar3 * 4) =
             *(undefined4 *)(lVar13 + (longlong)iVar4 * 0x10);
        if (iVar11 < 2) break;
        iVar11 = iVar11 + -1;
        iVar3 = (int)param_3[5];
LAB_140e553ba:
        uVar12 = uVar12 & ~(uint)uVar16;
        puVar8 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar8 = puVar15;
        }
        iVar4 = (int)uVar14;
        lVar13 = (longlong)iVar4;
        uVar5 = puVar8[lVar13] & uVar12;
        if (uVar5 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar5 = puVar8[lVar13 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar13 == lVar10) goto LAB_140e5544f;
          }
          uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar3);
    }
  }
LAB_140e5544f:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e55482 FUN_140e55482 body=21 status=ok
// SIG undefined FUN_140e55482(void)

undefined8 FUN_140e55482(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140e55498 FUN_140e55498 body=950 status=ok
// SIG undefined FUN_140e55498(void)

int FUN_140e55498(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined ***pppuVar15;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  longlong local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined1 *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar10 = FUN_14118da1c();
      bVar4 = FUN_14054d46e(uVar10,L"nothreading");
      DAT_14c83f0f8 = bVar4 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 0) {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      goto LAB_140e55599;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  lVar12 = DAT_14c9ac250;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar2 + 0xc60);
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
    uVar14 = 0;
  }
  else if (iVar6 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar14 = 1;
  }
  iVar6 = *(int *)(lVar12 + uVar14 * 4);
  if (iVar6 == -1) {
    iVar6 = FUN_140e55850();
  }
  if ((longlong *)param_1[9] == (longlong *)0x0) {
LAB_140e5574e:
    iVar7 = (**(code **)(*DAT_14c844288 + 0x28))();
    if (iVar6 == iVar7) {
      *(undefined1 *)(param_1 + 8) = 0;
      param_1[9] = (longlong)DAT_14c844288;
    }
    else if ((DAT_14c8442c0 == (longlong *)0x0) ||
            (iVar7 = (**(code **)(*DAT_14c8442c0 + 0x28))(), iVar7 < iVar6)) {
      *(undefined1 *)(param_1 + 8) = 1;
      puVar13 = (undefined8 *)FUN_145fecdc0();
      param_1[9] = (longlong)puVar13;
      local_98 = L"UnknownThreadPool";
      (**(code **)*puVar13)(puVar13,iVar6,0x1400,0);
    }
    else {
      *(undefined1 *)(param_1 + 8) = 1;
      lVar12 = FUN_14001cc68(0x170,0x10);
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14a1e95d0;
      local_50 = &LAB_147129cf6;
      local_78 = &LAB_142b7b672;
      FUN_1457b820e(lVar12,DAT_14c8442c0,iVar6);
      param_1[9] = lVar12;
    }
  }
  else {
    iVar7 = (**(code **)(*(longlong *)param_1[9] + 0x28))();
    if (iVar6 != iVar7) {
      local_78 = (undefined1 *)0x0;
      local_68 = (undefined ***)0x0;
      (**(code **)(*param_1 + 0x10))(param_1,&local_88);
      lVar12 = local_88;
      if (local_88 != 0) {
        do {
          do {
            lVar11 = lVar12;
            lVar12 = 0;
          } while (lVar11 == 0);
          plVar3 = *(longlong **)(lVar11 + 0x70);
          cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
          lVar12 = local_88;
        } while (cVar5 == '\0');
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
          }
        }
      }
      if (local_78 != (undefined1 *)0x0) {
        pppuVar15 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar15 = &local_58;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      if ((char)param_1[8] == '\x01') {
        (**(code **)(*(longlong *)param_1[9] + 0x10))();
        plVar3 = (longlong *)param_1[9];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,1);
        }
      }
      param_1[9] = 0;
      goto LAB_140e5574e;
    }
    if (param_1[9] == 0) goto LAB_140e5574e;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
LAB_140e55599:
  lVar12 = DAT_14c9ac268;
  iVar6 = *(int *)(lVar2 + 0xc60);
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
    uVar14 = 0;
  }
  else if (iVar6 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar14 = 1;
  }
  iVar6 = *(int *)(lVar12 + uVar14 * 4);
  if (iVar6 == -1) {
    if ((longlong *)param_1[9] == (longlong *)0x0) {
      iVar6 = 0x10;
    }
    else {
      iVar6 = (**(code **)(*(longlong *)param_1[9] + 0x28))();
      iVar6 = iVar6 << 2;
    }
  }
  LOCK();
  iVar7 = *(int *)((longlong)param_1 + 0xc);
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  UNLOCK();
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 140e55850 FUN_140e55850 body=225 status=ok
// SIG undefined FUN_140e55850(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_140e55850(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  char *local_e0;
  char local_d1;
  undefined1 local_d0 [4];
  int local_cc;
  undefined1 local_c5;
  int local_c4;
  int local_c0 [2];
  undefined1 local_b8 [136];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14c8c2718 < 1) {
    memset(local_b8,0,0x82);
    local_c0[1] = 0;
    local_c0[0] = 0;
    local_c4 = 0;
    FUN_140e55932(local_b8,local_c0 + 1,local_c0,&local_c4);
    iVar2 = local_c0[0];
    iVar1 = local_c4;
    local_e0 = &local_d1;
    local_e8 = local_d0;
    FUN_1457b80ec(local_c0[0],local_c4,&local_c5,&local_cc);
    DAT_14c8c2718 = iVar2;
    if (local_d1 != '\0') {
      DAT_14c8c2718 = iVar1;
    }
    if ((0 < local_cc) && (local_cc <= DAT_14c8c2718)) {
      DAT_14c8c2718 = local_cc;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14c8c2718;
}



// FUNCTION 140e55932 FUN_140e55932 body=376 status=ok
// SIG undefined FUN_140e55932(void)

void FUN_140e55932(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  LOGICAL_PROCESSOR_RELATIONSHIP LVar2;
  BOOL BVar3;
  DWORD DVar4;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX p_Var5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_68 [44];
  DWORD local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  local_3c = 0;
  BVar3 = GetLogicalProcessorInformationEx
                    (RelationAll,(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0,&local_3c);
  if (BVar3 == 0) {
    DVar4 = GetLastError();
    if (DVar4 == 0x7a) {
      Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)FUN_14001cc68(local_3c,0);
      BVar3 = GetLogicalProcessorInformationEx(RelationAll,Buffer,&local_3c);
      if ((BVar3 != 0) &&
         (Buffer != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0 && (ulonglong)local_3c != 0)) {
        p_Var5 = Buffer;
        do {
          LVar2 = p_Var5->Relationship;
          if (LVar2 == RelationGroup) {
            uVar1 = (p_Var5->u).Cache.LineSize;
            uVar7 = uVar1;
            if (0xf < uVar1) {
              uVar7 = 0x10;
            }
            *(ushort *)(param_1 + 0x80) = uVar7;
            if (uVar1 != 0) {
              puVar6 = (undefined8 *)((longlong)&p_Var5->u + 0x40);
              uVar9 = 0;
              do {
                *(undefined8 *)(param_1 + uVar9 * 8) = *puVar6;
                uVar9 = uVar9 + 1;
                puVar6 = puVar6 + 6;
              } while (uVar9 < *(ushort *)(param_1 + 0x80));
            }
          }
          else if (LVar2 == RelationNumaNode) {
            *param_2 = *param_2 + 1;
          }
          else if (LVar2 == RelationProcessorCore) {
            *param_3 = *param_3 + 1;
            uVar1 = (p_Var5->u).Processor.GroupCount;
            if (uVar1 != 0) {
              iVar8 = *param_4;
              lVar10 = 0;
              do {
                iVar8 = iVar8 + (int)POPCOUNT(*(undefined8 *)((longlong)&p_Var5->u + lVar10 + 0x18))
                ;
                lVar10 = lVar10 + 0x10;
              } while ((ulonglong)uVar1 * 0x10 != lVar10);
              *param_4 = iVar8;
            }
          }
          p_Var5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
                   ((longlong)&p_Var5->Relationship + (ulonglong)p_Var5->Size);
        } while ((p_Var5 < (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
                           ((longlong)&Buffer->Relationship + (ulonglong)local_3c)) &&
                (p_Var5 != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0));
      }
      FUN_1400020a8(Buffer);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e55aac FUN_140e55aac body=40 status=ok
// SIG undefined FUN_140e55aac(void)

undefined8 FUN_140e55aac(undefined8 param_1,int param_2)

{
  FUN_140e55ad4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e55ad4 FUN_140e55ad4 body=281 status=ok
// SIG undefined FUN_140e55ad4(void)

void FUN_140e55ad4(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3c6b0;
  plVar1 = param_1 + 0x19;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x11;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14)) {
    FUN_1400020a8(*plVar1);
  }
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



// FUNCTION 140e55bee FUN_140e55bee body=25 status=ok
// SIG undefined FUN_140e55bee(void)

char FUN_140e55bee(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  return (cVar1 != '\x02') * '\x02';
}



// FUNCTION 140e55c08 FUN_140e55c08 body=2721 status=ok
// SIG undefined FUN_140e55c08(void)

ulonglong FUN_140e55c08(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  void *pvVar5;
  byte bVar6;
  bool bVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 ****ppppuVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  size_t sVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  void *local_d0;
  int local_c8;
  undefined4 local_bc;
  code *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  int local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_bc = 0;
  lVar20 = *(longlong *)(param_1 + 0x40);
  local_b0 = param_1;
  if (lVar20 == 0) {
    lVar23 = 0;
    local_b0 = 0;
LAB_140e5630f:
    local_a8 = (longlong *)0x0;
    bVar7 = true;
  }
  else {
    if (*(int *)(lVar20 + 0x4c) == 0) {
LAB_140e56185:
      lVar23 = 0;
    }
    else {
      uVar11 = *(uint *)(lVar20 + 0x48);
      lVar23 = 0;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        plVar19 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
        if ((plVar19 == (longlong *)0x0) ||
           (((int)plVar19[2] != *(int *)(lVar20 + 0x4c) ||
            ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))) goto LAB_140e56185;
        lVar23 = *plVar19;
      }
    }
    plVar19 = *(longlong **)(lVar20 + 0x118);
    if (plVar19 == (longlong *)0x0) goto LAB_140e5630f;
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar19 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
    LOCK();
    *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
    UNLOCK();
    bVar7 = false;
    local_a8 = plVar19;
  }
  plVar19 = local_a8;
  local_b8 = (code *)CONCAT71(local_b8._1_7_,3);
  local_90 = 0;
  local_a0._0_4_ = 0;
  if (lVar23 == 0) {
    iVar10 = 0;
    uVar11 = (uint)local_a0;
  }
  else {
    uVar11 = *(uint *)(lVar23 + 0xc);
    local_a0 = (ulonglong)uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar10 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar18 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar18);
      }
      LOCK();
      iVar10 = *(int *)(lVar20 + 0x10);
      bVar24 = iVar10 == 0;
      if (bVar24) {
        *(int *)(lVar20 + 0x10) = iVar18;
        iVar10 = 0;
      }
      UNLOCK();
      uVar11 = (uint)local_a0;
      if (bVar24) {
        iVar10 = iVar18;
      }
    }
  }
  local_a0._0_4_ = uVar11;
  local_a0 = CONCAT44(iVar10,(uint)local_a0);
  local_98 = 2;
  if (local_90 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_90 + -1,1);
    local_90 = 0;
  }
  if (!bVar7) {
    LOCK();
    piVar1 = (int *)((longlong)plVar19 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  FUN_1447c3578(lVar3 + 0xd8,local_88,&local_b8);
  cVar9 = FUN_140a1daa8(local_88,&local_bc);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar15 = local_88;
    if (0x18 < local_70) {
      ppppuVar15 = (undefined8 ****)local_88[0];
    }
    (*pcVar4)(ppppuVar15);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  lVar20 = DAT_14c9a3da0;
  if ((longlong)local_90 != 0) {
    lVar16 = (longlong)local_90 + -1;
    lVar23 = lVar16 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar23),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar23));
    if (*(longlong *)(lVar20 + lVar23) != 0) {
      FUN_1400020a8();
    }
    lVar20 = DAT_14c9a3da0;
    iVar10 = (int)lVar16;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
    }
    *(undefined4 *)(lVar20 + lVar23) = 0xffffffff;
    iVar18 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar18 = DAT_14c9a3dd0;
    }
    *(int *)(lVar20 + 4 + lVar23) = iVar18;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar14 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar14 = DAT_14c9a3dc0;
    }
    iVar18 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar18 = iVar10;
    }
    bVar6 = (byte)lVar16 & 0x1f;
    DAT_14c9a3dd0 = iVar10;
    *(uint *)(puVar14 + (longlong)(iVar18 >> 5) * 4) =
         *(uint *)(puVar14 + (longlong)(iVar18 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_90 = 0;
  }
  if (((char)local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if ((cVar9 != '\0') && (plVar19 = (longlong *)FUN_140343d7a(param_1), plVar19 != (longlong *)0x0))
  {
    if (DAT_14cb22240 == 0) {
      local_b8 = FUN_1449e2820;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_1464376fa;
      local_108 = &LAB_147f28935;
      local_110 = FUN_146437c39;
      local_118 = L"Engine";
      local_120 = 0;
      local_128 = 0x10004001;
      local_130 = 8;
      local_138 = 0x28;
      local_100 = &local_b8;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar19 = (longlong *)(**(code **)(*plVar19 + 0x288))(plVar19,DAT_14cb22240);
    if (plVar19 != (longlong *)0x0) {
      if (DAT_14cb22240 == 0) {
        local_b8 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_1464376fa;
        local_108 = &LAB_147f28935;
        local_110 = FUN_146437c39;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10004001;
        local_130 = 8;
        local_138 = 0x28;
        local_100 = &local_b8;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      plVar12 = (longlong *)FUN_144718840(plVar19,DAT_14cb22240);
      if (plVar12 != (longlong *)0x0 && plVar19 != plVar12) {
        lVar20 = *(longlong *)(param_1 + 0x40);
        if (lVar20 == 0) {
          lVar23 = 0;
          param_1 = 0;
LAB_140e565ed:
          local_a8 = (longlong *)0x0;
          bVar7 = true;
          local_b0 = param_1;
        }
        else {
          if (*(int *)(lVar20 + 0x4c) == 0) {
LAB_140e56304:
            lVar23 = 0;
          }
          else {
            uVar11 = *(uint *)(lVar20 + 0x48);
            lVar23 = 0;
            if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
              plVar19 = (longlong *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
              if ((plVar19 == (longlong *)0x0) ||
                 (((int)plVar19[2] != *(int *)(lVar20 + 0x4c) ||
                  ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))) goto LAB_140e56304;
              lVar23 = *plVar19;
            }
          }
          plVar19 = *(longlong **)(lVar20 + 0x118);
          if (plVar19 == (longlong *)0x0) goto LAB_140e565ed;
          LOCK();
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar19 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
          LOCK();
          *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
          UNLOCK();
          bVar7 = false;
          local_b0 = param_1;
          local_a8 = plVar19;
        }
        plVar19 = local_a8;
        local_b8 = (code *)CONCAT71(local_b8._1_7_,3);
        local_90 = 0;
        local_a0._0_4_ = 0;
        if (lVar23 == 0) {
          iVar10 = 0;
          uVar11 = (uint)local_a0;
        }
        else {
          uVar11 = *(uint *)(lVar23 + 0xc);
          local_a0 = (ulonglong)uVar11;
          if ((int)uVar11 < DAT_14c9647dc) {
            lVar20 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
          }
          else {
            lVar20 = 0;
          }
          iVar10 = *(int *)(lVar20 + 0x10);
          if (*(int *)(lVar20 + 0x10) == 0) {
            LOCK();
            iVar10 = DAT_14c964868 + 1;
            UNLOCK();
            iVar18 = DAT_14c964868 + 1;
            bVar24 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar24) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar18);
            }
            LOCK();
            iVar10 = *(int *)(lVar20 + 0x10);
            bVar24 = iVar10 == 0;
            if (bVar24) {
              *(int *)(lVar20 + 0x10) = iVar18;
              iVar10 = 0;
            }
            UNLOCK();
            uVar11 = (uint)local_a0;
            if (bVar24) {
              iVar10 = iVar18;
            }
          }
        }
        local_a0._0_4_ = uVar11;
        local_a0 = CONCAT44(iVar10,(uint)local_a0);
        local_98 = 2;
        if (local_90 != 0) {
          FUN_1417398fc(&DAT_14c9a3da0,local_90 + -1,1);
          local_90 = 0;
        }
        if (!bVar7) {
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
        FUN_1447c3578(lVar3 + 0x88,local_88,&local_b8);
        lVar20 = FUN_14030a32e(local_88);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar15 = local_88;
          if (0x18 < local_70) {
            ppppuVar15 = (undefined8 ****)local_88[0];
          }
          (*pcVar4)(ppppuVar15);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(local_88[0]);
        }
        lVar23 = DAT_14c9a3da0;
        if ((longlong)local_90 != 0) {
          lVar16 = (longlong)local_90 + -1;
          lVar22 = lVar16 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
          if (*(longlong *)(lVar23 + lVar22) != 0) {
            FUN_1400020a8();
          }
          lVar23 = DAT_14c9a3da0;
          iVar10 = (int)lVar16;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
          }
          *(undefined4 *)(lVar23 + lVar22) = 0xffffffff;
          iVar18 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar18 = DAT_14c9a3dd0;
          }
          *(int *)(lVar23 + 4 + lVar22) = iVar18;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar14 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar14 = DAT_14c9a3dc0;
          }
          iVar18 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar18 = iVar10;
          }
          bVar6 = (byte)lVar16 & 0x1f;
          DAT_14c9a3dd0 = iVar10;
          *(uint *)(puVar14 + (longlong)(iVar18 >> 5) * 4) =
               *(uint *)(puVar14 + (longlong)(iVar18 >> 5) * 4) &
               (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          local_90 = 0;
        }
        if (((char)local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a8 + 0x10))();
          }
        }
        if ((lVar20 != 0) || (*(char *)(lVar3 + 0x80) == '\0')) {
          uVar13 = (**(code **)(*plVar12 + 0x28))(plVar12);
          uVar8 = local_bc;
          if (*(char *)(lVar3 + 0x80) == '\x01') {
            local_d0 = (void *)0x0;
            local_c8 = *(int *)(lVar3 + 0xd0);
            sVar21 = (size_t)local_c8;
            pvVar5 = *(void **)(lVar3 + 200);
            if (sVar21 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = 0;
              FUN_14180b6da(&local_d0,local_c8,0);
              memcpy(local_d0,pvVar5,sVar21);
              pvVar5 = local_d0;
              lVar23 = (longlong)local_c8;
              if (lVar23 != 0) {
                lVar16 = 0;
                do {
                  if ((*(byte *)((longlong)pvVar5 + lVar16) < 7) &&
                     (cVar9 = FUN_1408a20f6(uVar13,*(byte *)((longlong)pvVar5 + lVar16),lVar20,uVar8
                                           ), cVar9 != '\0')) {
                    uVar17 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
                    goto LAB_140e56287;
                  }
                  lVar16 = lVar16 + 1;
                } while (lVar23 != lVar16);
                uVar17 = 0;
              }
LAB_140e56287:
              if (local_d0 != (void *)0x0) {
                FUN_1400020a8(local_d0);
              }
            }
          }
          else {
            local_e0 = (void *)0x0;
            local_d8 = *(int *)(lVar3 + 0xd0);
            sVar21 = (size_t)local_d8;
            pvVar5 = *(void **)(lVar3 + 200);
            if (sVar21 == 0) {
              local_d4 = 0;
            }
            else {
              FUN_14180b6da(&local_e0,local_d8,0);
              memcpy(local_e0,pvVar5,sVar21);
            }
            uVar11 = FUN_147f4c364(uVar13,&local_e0,uVar8);
            uVar17 = (ulonglong)uVar11;
          }
          uVar17 = CONCAT71((int7)(uVar17 >> 8),((byte)uVar17 ^ *(byte *)(lVar3 + 0xc0)) * '\x02');
          goto LAB_140e5606d;
        }
      }
    }
  }
  uVar17 = 0;
LAB_140e5606d:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 140e566aa FUN_140e566aa body=132 status=ok
// SIG undefined FUN_140e566aa(void)

longlong * FUN_140e566aa(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x188,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b712790;
  FUN_140e5672e(plVar3 + 2,param_1);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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



// FUNCTION 140e5672e FUN_140e5672e body=286 status=ok
// SIG undefined FUN_140e5672e(void)

void FUN_140e5672e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14b42fa70;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  uVar1 = DAT_14c8462c8;
  param_1[0xc] = DAT_14c8462c0;
  param_1[0xd] = uVar1;
  param_1[0xe] = DAT_14c8462d0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x10] = DAT_14c8464e0;
  param_1[0x11] = uVar1;
  param_1[0x12] = DAT_14c8464f0;
  uVar1 = DAT_14c8462c8;
  param_1[0x13] = DAT_14c8462c0;
  param_1[0x14] = uVar1;
  param_1[0x15] = DAT_14c8462d0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xca) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = param_2;
  *param_1 = &PTR_FUN_14b7127e0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10b) = 0;
  param_1[0x22] = param_2;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  return;
}



// FUNCTION 140e5684c FUN_140e5684c body=288 status=ok
// SIG undefined FUN_140e5684c(void)

undefined8 FUN_140e5684c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140e56965;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e56965;
    }
    FUN_1400841de(param_1 + 0x18,&local_40);
  }
  else {
LAB_140e56965:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e56917;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140e56917;
    }
  }
  uVar6 = 0;
LAB_140e56917:
  if (local_40 != 0) {
    FUN_140113f3a(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5696e FUN_140e5696e body=55 status=ok
// SIG undefined FUN_140e5696e(void)

void FUN_140e5696e(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(char *)(param_2 + 0x152) == '\x04')) {
    return;
  }
  FUN_140e569a6(param_1 + 0x30);
  FUN_140e56b90(param_1 + 0x80);
  return;
}



// FUNCTION 140e569a6 FUN_140e569a6 body=380 status=ok
// SIG undefined FUN_140e569a6(void)

void FUN_140e569a6(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_140e56b36(param_1);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_147512110(param_1);
  return;
}



// FUNCTION 140e56b36 FUN_140e56b36 body=90 status=ok
// SIG undefined FUN_140e56b36(void)

void FUN_140e56b36(longlong param_1)

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



// FUNCTION 140e56b90 FUN_140e56b90 body=380 status=ok
// SIG undefined FUN_140e56b90(void)

void FUN_140e56b90(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_140e56d20(param_1);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1475122ac(param_1);
  return;
}



// FUNCTION 140e56d20 FUN_140e56d20 body=378 status=ok
// SIG undefined FUN_140e56d20(void)

void FUN_140e56d20(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
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
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e56eac FUN_140e56eac body=41 status=ok
// SIG undefined FUN_140e56eac(void)

void FUN_140e56eac(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 140e56edc FUN_140e56edc body=57 status=ok
// SIG undefined FUN_140e56edc(void)

void FUN_140e56edc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcd08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcd08 = FUN_140002ddd(FUN_14660c788,uVar1,L"OakVehicleAudioProvider");
  }
  return;
}



// FUNCTION 140e56f16 FUN_140e56f16 body=772 status=ok
// SIG undefined FUN_140e56f16(void)

longlong FUN_140e56f16(longlong param_1,double param_2,double param_3,double param_4,double param_5,
                      double param_6,double param_7,int param_8,int param_9,int param_10,
                      undefined1 param_11,undefined1 param_12,undefined1 param_13,uint param_14,
                      undefined4 param_15)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = (param_7 - param_6) / (double)param_10;
  FUN_144a72bee(dVar5,param_8,param_9,param_10,(param_3 - param_2) / (double)param_8,
                (param_5 - param_4) / (double)param_9,dVar5);
  lVar1 = FUN_14001cc68(0x100,0x10);
  *(longlong *)(param_1 + 0x50) = lVar1;
  *(longlong *)(param_1 + 0x58) = lVar1;
  *(longlong *)(param_1 + 0x60) = lVar1 + 0x100;
  *(undefined4 *)(param_1 + 0x68) = 0x20;
  *(double *)(param_1 + 0x70) = param_2;
  *(double *)(param_1 + 0x78) = param_3;
  *(double *)(param_1 + 0x80) = param_4;
  *(double *)(param_1 + 0x88) = param_5;
  *(double *)(param_1 + 0x90) = param_6;
  *(double *)(param_1 + 0x98) = param_7;
  *(undefined1 *)(param_1 + 0xa0) = param_11;
  *(undefined1 *)(param_1 + 0xa1) = param_12;
  *(undefined1 *)(param_1 + 0xa2) = param_13;
  lVar4 = (longlong)*(int *)(param_1 + 0x10);
  lVar1 = lVar4 * 8 + (ulonglong)(lVar4 * 8 == 0);
  lVar3 = lVar4 * 4 + (ulonglong)(lVar4 * 4 == 0);
  if (lVar4 < 0) {
    lVar1 = -1;
    lVar3 = -1;
  }
  uVar2 = FUN_14001cc68(lVar1,0x10);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  uVar2 = FUN_14001cc68(lVar1,0x10);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar2 = FUN_14001cc68(lVar3,0x10);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_14001cc68(lVar3,0x10);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined4 *)(param_1 + 200) = param_15;
  if (0 < lVar4) {
    lVar1 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + lVar1 * 4) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x10));
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar1 = 0;
      do {
        *(uint *)(*(longlong *)(param_1 + 0xc0) + lVar1 * 4) = param_14;
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x10));
      if (0 < *(int *)(param_1 + 0x10)) {
        lVar1 = -1;
        if (-1 < (int)param_14) {
          lVar1 = (ulonglong)param_14 * 4 + (ulonglong)((ulonglong)param_14 == 0);
        }
        lVar3 = 0;
        do {
          uVar2 = FUN_14001cc68(lVar1,0x10);
          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + lVar3 * 8) = uVar2;
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(param_1 + 0x10));
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar1 = 0;
          do {
            lVar3 = (longlong)*(int *)(param_1 + 200) * (longlong)(int)param_14;
            lVar4 = lVar3 * 8;
            lVar4 = lVar4 + (ulonglong)(lVar4 == 0);
            if ((int)lVar3 < 0) {
              lVar4 = -1;
            }
            uVar2 = FUN_14001cc68(lVar4,0x10);
            *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + lVar1 * 8) = uVar2;
            lVar1 = lVar1 + 1;
          } while (lVar1 < *(int *)(param_1 + 0x10));
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 140e5721a FUN_140e5721a body=3042 status=ok
// SIG undefined FUN_140e5721a(void)

void FUN_140e5721a(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  uint *local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined8 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar20 = *(longlong *)(param_1 + 0x110);
  if (lVar20 == 0) {
    uVar10 = FUN_140e2014e();
    lVar20 = FUN_14477b664(uVar10);
    *(longlong *)(param_1 + 0x110) = lVar20;
  }
  local_a8 = (longlong *)(param_1 + 0x108);
  local_a0 = *(uint **)(param_1 + 0x118);
  local_98 = param_2;
  if (local_a0 == (uint *)0x0) {
    if (lVar20 == 0) {
      local_a0 = (uint *)0x0;
    }
    else {
      local_a0 = (uint *)0x0;
      if (*local_a8 != 0) {
        plVar4 = *(longlong **)(lVar20 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
          local_a0 = (uint *)0x0;
        }
        else {
          uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
          local_a0 = (uint *)FUN_144aff482(uVar10,local_a8);
        }
        *(uint **)(param_1 + 0x118) = local_a0;
      }
    }
  }
  iVar13 = local_a0[0x1c] - local_a0[0x27];
  if (-1 < iVar13) {
    lVar20 = param_1 + 0x138;
    FUN_140e9644c(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x140) = 0;
    if (*(int *)(param_1 + 0x144) != iVar13) {
      FUN_140e593bc(lVar20,iVar13);
    }
    puVar19 = local_a0 + 0x1e;
    uVar3 = local_a0[0x24];
    local_80 = lVar20;
    if (uVar3 == 0) {
      uVar15 = 1;
      uVar22 = 0;
      uVar14 = 0;
      iVar13 = 0;
    }
    else {
      puVar8 = *(uint **)(local_a0 + 0x22);
      if (*(uint **)(local_a0 + 0x22) == (uint *)0x0) {
        puVar8 = puVar19;
      }
      uVar14 = *puVar8;
      if (uVar14 == 0) {
        iVar13 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar13 = uVar3 - 1;
        }
        uVar22 = 0;
        uVar15 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar15 = uVar22;
        }
        iVar13 = 0;
        do {
          if (uVar15 == uVar22) goto LAB_140e57515;
          iVar13 = iVar13 + 0x20;
          uVar14 = puVar8[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar22 = 0;
        iVar13 = 0;
      }
      uVar15 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar15 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar14 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if ((int)uVar3 <= (int)uVar14) {
        uVar14 = uVar3;
      }
    }
    if (uVar14 != uVar3) {
      uVar12 = 0xffffffff;
      puVar8 = local_a0;
      local_90 = (ulonglong)uVar3;
      do {
        lVar20 = *(longlong *)(puVar8 + 0x1a);
        iVar18 = *(int *)(param_1 + 0x140);
        *(uint *)(param_1 + 0x140) = iVar18 + 1U;
        if (*(uint *)(param_1 + 0x144) < iVar18 + 1U) {
          local_88 = puVar19;
          FUN_14893b29a(local_80,iVar18);
          puVar19 = local_88;
          puVar8 = local_a0;
        }
        lVar21 = *(longlong *)(param_1 + 0x138);
        lVar16 = (longlong)iVar18 * 0xa8;
        lVar17 = lVar21 + lVar16;
        *(undefined8 *)(lVar21 + lVar16) = 0;
        ((undefined8 *)(lVar21 + lVar16))[1] = 0;
        *(undefined4 *)(lVar21 + 0x10 + lVar16) = 2;
        puVar2 = (undefined8 *)(lVar21 + 0x14 + lVar16);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar21 + 0x24 + lVar16) = 0x200000000;
        puVar2 = (undefined8 *)(lVar21 + 0x2c + lVar16);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(lVar21 + 0x3c + lVar16) = 0;
        *(undefined8 *)(lVar21 + 0x40 + lVar16) = 2;
        *(undefined8 *)(lVar21 + 0x48 + lVar16) =
             *(undefined8 *)(lVar20 + (longlong)(int)uVar14 * 0x90);
        *(longlong *)(lVar21 + 0x50 + lVar16) = (longlong)(int)uVar14 * 0x90 + lVar20 + 8;
        *(undefined8 *)(lVar21 + 0x58 + lVar16) = 0;
        if (param_1 == 0) {
          iVar18 = 0;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0xc);
          *(uint *)(lVar17 + 0x58) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar20 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar20 = 0;
          }
          iVar18 = *(int *)(lVar20 + 0x10);
          if (*(int *)(lVar20 + 0x10) == 0) {
            LOCK();
            iVar18 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar23 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar18;
            if (bVar23) {
              local_88 = puVar19;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
              puVar19 = local_88;
              puVar8 = local_a0;
            }
            LOCK();
            iVar18 = *(int *)(lVar20 + 0x10);
            bVar23 = iVar18 == 0;
            if (bVar23) {
              *(int *)(lVar20 + 0x10) = iVar6;
              iVar18 = 0;
            }
            UNLOCK();
            if (bVar23) {
              iVar18 = iVar6;
            }
          }
        }
        *(int *)(lVar17 + 0x5c) = iVar18;
        *(undefined8 *)(lVar17 + 0x60) = 0;
        *(undefined8 *)(lVar17 + 0x68) = 0;
        *(undefined8 *)(lVar17 + 0x70) = 0;
        *(undefined8 *)(lVar17 + 0x78) = 0;
        *(undefined8 *)(lVar17 + 0x80) = 0;
        *(undefined8 *)(lVar17 + 0x88) = 0;
        *(undefined2 *)(lVar17 + 0x90) = 0;
        *(undefined8 *)(lVar17 + 0x94) = 0;
        *(undefined8 *)(lVar17 + 0x9c) = 0;
        uVar12 = uVar12 & ~(uint)uVar15;
        puVar11 = *(uint **)(puVar8 + 0x22);
        if (*(uint **)(puVar8 + 0x22) == (uint *)0x0) {
          puVar11 = puVar19;
        }
        uVar3 = puVar8[0x24];
        iVar18 = (int)uVar22;
        lVar20 = (longlong)iVar18;
        uVar14 = puVar11[lVar20] & uVar12;
        if (uVar14 == 0) {
          iVar6 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar6 = uVar3 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar18) {
            iVar7 = iVar18;
          }
          if (iVar18 < iVar6) {
            lVar17 = 0;
            do {
              uVar14 = puVar11[lVar20 + lVar17 + 1];
              if (uVar14 != 0) {
                uVar22 = (ulonglong)(iVar18 + (int)lVar17 + 1);
                uVar12 = 0xffffffff;
                goto LAB_140e574da;
              }
              iVar13 = iVar13 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar7 - lVar20 != lVar17);
            uVar12 = 0xffffffff;
            iVar18 = iVar7;
          }
          uVar22 = (ulonglong)(iVar18 + 1);
          puVar8 = local_a0;
          uVar14 = uVar3;
        }
        else {
LAB_140e574da:
          uVar15 = (ulonglong)(-uVar14 & uVar14);
          uVar1 = uVar15 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uVar14 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar14) {
            uVar14 = uVar3;
          }
        }
      } while (uVar14 != (uint)local_90);
    }
LAB_140e57515:
    lVar20 = *(longlong *)(param_1 + 0x110);
    if (lVar20 == 0) {
      uVar10 = FUN_140e2014e();
      lVar20 = FUN_14477b664(uVar10);
      *(longlong *)(param_1 + 0x110) = lVar20;
    }
    lVar17 = *(longlong *)(param_1 + 0x118);
    if (lVar17 == 0) {
      if (lVar20 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        if (*local_a8 != 0) {
          plVar4 = *(longlong **)(lVar20 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
            lVar17 = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar17 = FUN_144aff482(uVar10,local_a8);
          }
          *(longlong *)(param_1 + 0x118) = lVar17;
        }
      }
    }
    iVar13 = *(int *)(lVar17 + 0xc0) - *(int *)(lVar17 + 0xec);
    local_80 = lVar17;
    if (-1 < iVar13) {
      lVar20 = param_1 + 0x148;
      FUN_140e96423(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
      *(undefined4 *)(param_1 + 0x150) = 0;
      if (*(int *)(param_1 + 0x154) != iVar13) {
        FUN_140e5950c(lVar20,iVar13);
      }
      puVar19 = (uint *)(local_80 + 200);
      uVar3 = *(uint *)(local_80 + 0xe0);
      local_88 = (uint *)lVar20;
      if (uVar3 == 0) {
        uVar22 = 1;
        uVar15 = 0;
        uVar14 = 0;
        iVar13 = 0;
      }
      else {
        puVar8 = *(uint **)(local_80 + 0xd8);
        if (*(uint **)(local_80 + 0xd8) == (uint *)0x0) {
          puVar8 = puVar19;
        }
        uVar14 = *puVar8;
        if (uVar14 == 0) {
          iVar13 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar13 = uVar3 - 1;
          }
          uVar15 = 0;
          uVar22 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar22 = uVar15;
          }
          iVar13 = 0;
          do {
            if (uVar22 == uVar15) goto LAB_140e57783;
            iVar13 = iVar13 + 0x20;
            uVar14 = puVar8[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar15 = 0;
          iVar13 = 0;
        }
        uVar22 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar22 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar14 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar14) {
          uVar14 = uVar3;
        }
      }
      if (uVar14 != uVar3) {
        uVar12 = 0xffffffff;
        lVar20 = local_80;
        local_a0 = puVar19;
        local_90 = (ulonglong)uVar3;
        do {
          lVar17 = *(longlong *)(lVar20 + 0xb8);
          iVar18 = *(int *)(param_1 + 0x150);
          *(uint *)(param_1 + 0x150) = iVar18 + 1U;
          if (*(uint *)(param_1 + 0x154) < iVar18 + 1U) {
            FUN_14893b32e(local_88,iVar18);
            puVar19 = local_a0;
            lVar20 = local_80;
          }
          lVar21 = *(longlong *)(param_1 + 0x148);
          lVar16 = (longlong)iVar18 * 0x88;
          *(undefined8 *)(lVar21 + lVar16) = 0;
          ((undefined8 *)(lVar21 + lVar16))[1] = 0;
          *(undefined4 *)(lVar21 + 0x10 + lVar16) = 2;
          puVar2 = (undefined8 *)(lVar21 + 0x14 + lVar16);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar21 + 0x24 + lVar16) = 0x200000000;
          puVar2 = (undefined8 *)(lVar21 + 0x2c + lVar16);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined4 *)(lVar21 + 0x3c + lVar16) = 0;
          *(undefined8 *)(lVar21 + 0x40 + lVar16) = 2;
          *(undefined8 *)(lVar21 + 0x48 + lVar16) =
               *(undefined8 *)(lVar17 + (longlong)(int)uVar14 * 0x120);
          *(longlong *)(lVar21 + 0x50 + lVar16) = (longlong)(int)uVar14 * 0x120 + lVar17 + 8;
          *(longlong *)(lVar21 + 0x58 + lVar16) = param_1;
          uVar12 = uVar12 & ~(uint)uVar22;
          puVar2 = (undefined8 *)(lVar21 + 0x60 + lVar16);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar21 + 0x70 + lVar16);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined1 *)(lVar21 + 0x80 + lVar16) = 0;
          puVar8 = *(uint **)(lVar20 + 0xd8);
          if (*(uint **)(lVar20 + 0xd8) == (uint *)0x0) {
            puVar8 = puVar19;
          }
          uVar3 = *(uint *)(lVar20 + 0xe0);
          iVar18 = (int)uVar15;
          lVar17 = (longlong)iVar18;
          uVar14 = puVar8[lVar17] & uVar12;
          if (uVar14 == 0) {
            iVar6 = uVar3 + 0x1e;
            if (-1 < (int)(uVar3 - 1)) {
              iVar6 = uVar3 - 1;
            }
            iVar6 = iVar6 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar18) {
              iVar7 = iVar18;
            }
            puVar19 = local_a0;
            if (iVar18 < iVar6) {
              lVar21 = 0;
              do {
                uVar14 = puVar8[lVar17 + lVar21 + 1];
                if (uVar14 != 0) {
                  uVar15 = (ulonglong)(iVar18 + (int)lVar21 + 1);
                  uVar12 = 0xffffffff;
                  goto LAB_140e5774f;
                }
                iVar13 = iVar13 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar7 - lVar17 != lVar21);
              uVar12 = 0xffffffff;
              iVar18 = iVar7;
            }
            uVar15 = (ulonglong)(iVar18 + 1);
            lVar20 = local_80;
            uVar14 = uVar3;
          }
          else {
LAB_140e5774f:
            uVar22 = (ulonglong)(-uVar14 & uVar14);
            uVar1 = uVar22 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar14 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if ((int)uVar3 <= (int)uVar14) {
              uVar14 = uVar3;
            }
          }
        } while (uVar14 != (uint)local_90);
      }
LAB_140e57783:
      lVar20 = *(longlong *)(param_1 + 0x110);
      if (lVar20 == 0) {
        uVar10 = FUN_140e2014e();
        lVar20 = FUN_14477b664(uVar10);
        *(longlong *)(param_1 + 0x110) = lVar20;
      }
      lVar17 = *(longlong *)(param_1 + 0x118);
      if (((lVar17 == 0) && (lVar17 = 0, lVar20 != 0)) && (*local_a8 != 0)) {
        plVar4 = *(longlong **)(lVar20 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
          lVar17 = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar17 = FUN_144aff482(uVar10,local_a8);
        }
        *(longlong *)(param_1 + 0x118) = lVar17;
      }
      uVar10 = local_98;
      FUN_140e59660(param_1,lVar17 + 0x38,local_98);
      lVar20 = *(longlong *)(param_1 + 0x110);
      if (lVar20 == 0) {
        uVar9 = FUN_140e2014e();
        lVar20 = FUN_14477b664(uVar9);
        *(longlong *)(param_1 + 0x110) = lVar20;
      }
      lVar17 = *(longlong *)(param_1 + 0x118);
      if (((lVar17 == 0) && (lVar17 = 0, uVar10 = local_98, lVar20 != 0)) && (*local_a8 != 0)) {
        plVar4 = *(longlong **)(lVar20 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
          lVar17 = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar17 = FUN_144aff482(uVar10,local_a8);
        }
        *(longlong *)(param_1 + 0x118) = lVar17;
        uVar10 = local_98;
      }
      FUN_140e591ea(param_1,lVar17 + 0x50,uVar10);
      if ((longlong)*(int *)(param_1 + 0x150) != 0) {
        lVar20 = *(longlong *)(param_1 + 0x148);
        lVar17 = (longlong)*(int *)(param_1 + 0x150) * 0x88 + lVar20;
        do {
          local_70 = (undefined8 *)0x0;
          local_68 = 0;
          FUN_1446efa72(&local_70,0,3,0x10);
          puVar2 = local_70;
          local_68 = 3;
          *local_70 = &PTR_LAB_14b420b80;
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 1;
          lVar21 = DAT_14c758608 + 1;
          if (lVar16 == 0) {
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 2;
            lVar21 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar21;
          local_70[2] = lVar16;
          *local_70 = &PTR_FUN_14b4210f0;
          local_70[3] = 0;
          if (param_1 == 0) {
            iVar13 = 0;
          }
          else {
            uVar3 = *(uint *)(param_1 + 0xc);
            *(uint *)(local_70 + 3) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar21 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar21 = 0;
            }
            iVar13 = *(int *)(lVar21 + 0x10);
            if (*(int *)(lVar21 + 0x10) == 0) {
              LOCK();
              iVar13 = DAT_14c964868 + 1;
              UNLOCK();
              iVar18 = DAT_14c964868 + 1;
              bVar23 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar13;
              if (bVar23) {
                local_90 = CONCAT44(local_90._4_4_,iVar18);
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar18);
                iVar18 = (int)local_90;
              }
              LOCK();
              iVar13 = *(int *)(lVar21 + 0x10);
              bVar23 = iVar13 == 0;
              if (bVar23) {
                *(int *)(lVar21 + 0x10) = iVar18;
                iVar13 = 0;
              }
              UNLOCK();
              if (bVar23) {
                iVar13 = iVar18;
              }
            }
          }
          *(int *)((longlong)puVar2 + 0x1c) = iVar13;
          puVar2[4] = FUN_140d117de;
          FUN_140ca47fa(lVar20,local_78,&local_70);
          uVar10 = local_98;
          if (local_68 == 0) {
LAB_140e578eb:
            if (local_70 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_70 != (undefined8 *)0x0) {
            (**(code **)*local_70)(local_70,0);
            FUN_1446efa72(&local_70,0,0,0x10);
            local_68 = 0;
            goto LAB_140e578eb;
          }
          FUN_140e58eb0(lVar20);
          FUN_140e57dfe(lVar20,*(longlong *)(lVar20 + 0x50) + 0x18,uVar10);
          lVar20 = lVar20 + 0x88;
        } while (lVar20 != lVar17);
      }
      if ((longlong)*(int *)(param_1 + 0x140) != 0) {
        lVar20 = *(longlong *)(param_1 + 0x138);
        lVar17 = (longlong)*(int *)(param_1 + 0x140) * 0xa8;
        do {
          FUN_140e57fc0(param_1,lVar20,uVar10,0);
          lVar20 = lVar20 + 0xa8;
          lVar17 = lVar17 + -0xa8;
        } while (lVar17 != 0);
      }
      if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar13);
}



// FUNCTION 140e57dfe FUN_140e57dfe body=449 status=ok
// SIG undefined FUN_140e57dfe(void)

void FUN_140e57dfe(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    FUN_140e58d02(*param_2,&local_38,param_3,*(undefined8 *)(param_1 + 0x58));
    plVar2 = local_30;
    plVar1 = (longlong *)(param_1 + 0x70);
    if (plVar1 != &local_38) {
      *(longlong *)(param_1 + 0x70) = local_38;
      local_38 = 0;
      plVar4 = *(longlong **)(param_1 + 0x78);
      if (local_30 != plVar4) {
        local_30 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x78) = plVar2;
        if (plVar4 != (longlong *)0x0) {
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
      }
    }
    plVar2 = local_30;
    lVar5 = *plVar1;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (lVar5 != 0) {
      lVar5 = *plVar1;
      if (*(int *)(lVar5 + 0x20) != 3) {
        FUN_1446efa72((longlong *)(lVar5 + 0x18),0,3,0x10);
        *(undefined4 *)(lVar5 + 0x20) = 3;
      }
      puVar6 = *(undefined8 **)(lVar5 + 0x18);
      *puVar6 = &PTR_LAB_14b420820;
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
      puVar6[2] = lVar8;
      *puVar6 = &PTR_FUN_14b4213b0;
      puVar6[3] = param_1;
      puVar6[4] = FUN_140d11a88;
    }
  }
  if ((*(longlong *)(param_1 + 0x58) != 0) && (cVar7 = FUN_140e58abc(), cVar7 != '\0')) {
    if (*(longlong *)(param_1 + 0x70) == 0) {
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
    else {
      cVar7 = *(char *)(*(longlong *)(param_1 + 0x70) + 0x30);
      *(char *)(param_1 + 0x80) = cVar7;
      if (cVar7 == '\0') goto LAB_140e57f37;
    }
    FUN_140d10e20(param_1,param_1);
  }
LAB_140e57f37:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e57fc0 FUN_140e57fc0 body=2317 status=ok
// SIG undefined FUN_140e57fc0(void)

void FUN_140e57fc0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined8 **ppuVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)0x0;
  local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = param_3;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar11 = local_58;
  local_50._0_4_ = 3;
  *local_58 = &PTR_LAB_14b420dd0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = &PTR_FUN_14b421160;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(lVar9 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar8 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar8;
  puVar11[4] = FUN_140d11172;
  FUN_140e588ce(param_2,local_60,&local_58);
  if ((int)local_50 == 0) {
LAB_140e580ca:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_140e580ca;
  }
  local_58 = (undefined8 *)0x0;
  local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar11 = local_58;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,3);
  *local_58 = &PTR_LAB_14b420dd0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = &PTR_FUN_14b421160;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(lVar9 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar8 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar8;
  puVar11[4] = FUN_140d115a0;
  FUN_140e588ce(param_2 + 0x18,local_60,&local_58);
  if ((int)local_50 == 0) {
LAB_140e581ae:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
    goto LAB_140e581ae;
  }
  if (param_4 == 1) goto LAB_140e58426;
  local_58 = (undefined8 *)0x0;
  local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar11 = local_58;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,3);
  *local_58 = &PTR_LAB_14b420dd0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = &PTR_FUN_14b421160;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(lVar9 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar8 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar8;
  puVar11[4] = FUN_140d11562;
  FUN_140e588ce(param_2 + 0x30,local_60,&local_58);
  if ((int)local_50 == 0) {
LAB_140e582a1:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
    goto LAB_140e582a1;
  }
  plVar13 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x18);
  if (plVar13 == (longlong *)0x0) goto LAB_140e58426;
  iVar8 = *(int *)(param_2 + 0x5c);
  if (iVar8 == 0) {
LAB_140e586e3:
    lVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x58);
    lVar9 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != iVar8 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_140e586e3;
      lVar9 = *plVar7;
    }
  }
  if (*(char *)(lVar9 + 0x181) < '\0') {
    if (*(undefined8 **)(param_2 + 0x60) != (undefined8 *)0x0) goto LAB_140e58426;
    if (iVar8 == 0) {
LAB_140e58778:
      uVar10 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x58);
      uVar10 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar11 == (undefined8 *)0x0) ||
           ((*(int *)(puVar11 + 2) != iVar8 || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0))))
        goto LAB_140e58778;
        uVar10 = *puVar11;
      }
    }
    (**(code **)(*plVar13 + 0x20))(plVar13,&local_58,uVar10);
    plVar7 = local_50;
    if (local_58 != (undefined8 *)0x0) {
      local_58[3] = param_2;
      local_58[4] = plVar13;
    }
    if ((undefined8 **)(param_2 + 0x60) != &local_58) {
      *(undefined8 **)(param_2 + 0x60) = local_58;
      local_58 = (undefined8 *)0x0;
      plVar13 = *(longlong **)(param_2 + 0x68);
      if (local_50 != plVar13) {
        local_50 = (longlong *)0x0;
        *(longlong **)(param_2 + 0x68) = plVar7;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar13 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
    }
    plVar13 = local_50;
    if (local_50 == (longlong *)0x0) goto LAB_140e58426;
  }
  else {
    *(undefined8 *)(param_2 + 0x60) = 0;
    plVar13 = *(longlong **)(param_2 + 0x68);
    if (plVar13 == (longlong *)0x0) goto LAB_140e58426;
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  LOCK();
  plVar7 = plVar13 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_140e58426:
  lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x30);
  if (lVar9 != 0) {
    if (*(int *)(param_2 + 0x5c) == 0) {
      uVar10 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x58);
      uVar10 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar11 == (undefined8 *)0x0) ||
           ((*(int *)(puVar11 + 2) != *(int *)(param_2 + 0x5c) ||
            ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) {
          uVar10 = 0;
        }
        else {
          uVar10 = *puVar11;
        }
      }
    }
    FUN_140e58d02(lVar9,&local_58,local_68,uVar10);
    plVar13 = local_50;
    ppuVar2 = (undefined8 **)(param_2 + 0x70);
    if (ppuVar2 != &local_58) {
      *(undefined8 **)(param_2 + 0x70) = local_58;
      local_58 = (undefined8 *)0x0;
      plVar7 = *(longlong **)(param_2 + 0x78);
      if (local_50 != plVar7) {
        local_50 = (longlong *)0x0;
        *(longlong **)(param_2 + 0x78) = plVar13;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar7 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
      }
    }
    plVar13 = local_50;
    puVar11 = *ppuVar2;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      puVar11 = *ppuVar2;
      if (*(int *)(puVar11 + 4) != 3) {
        FUN_1446efa72(puVar11 + 3,0,3,0x10);
        *(undefined4 *)(puVar11 + 4) = 3;
      }
      puVar11 = (undefined8 *)puVar11[3];
      *puVar11 = &PTR_LAB_14b420820;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      puVar11[2] = lVar6;
      *puVar11 = &PTR_FUN_14b421420;
      puVar11[3] = param_2;
      puVar11[4] = FUN_140d10c1e;
    }
  }
  if (((((*(int *)(param_2 + 0x5c) != 0) && (uVar3 = *(uint *)(param_2 + 0x58), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((puVar11 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == *(int *)(param_2 + 0x5c))))) &&
     ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
      uVar10 = *puVar11;
    }
    else {
      uVar10 = 0;
    }
    cVar4 = FUN_140e58abc(uVar10);
    if ((cVar4 != '\0') &&
       (uVar5 = FUN_140e58bde(param_2), *(char *)(param_2 + 0x90) != (char)uVar5)) {
      FUN_140d10c4a(param_2,uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e588ce FUN_140e588ce body=370 status=ok
// SIG undefined FUN_140e588ce(void)

undefined8 * FUN_140e588ce(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e58abc FUN_140e58abc body=288 status=ok
// SIG undefined FUN_140e58abc(void)

undefined8 FUN_140e58abc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      uVar2 = CONCAT71((int7)((ulonglong)(DAT_14cac9ca8 + 0x30) >> 8),
                       *(char *)(lVar1 + 0x178) == '\x03');
      goto LAB_140e58b19;
    }
  }
  uVar2 = 0;
LAB_140e58b19:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e58bde FUN_140e58bde body=291 status=ok
// SIG undefined FUN_140e58bde(void)

byte FUN_140e58bde(longlong param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (((((iVar1 != 0) && (uVar2 = *(uint *)(param_1 + 0x58), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))) &&
     ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar7 = *plVar6;
    }
    else {
      lVar7 = 0;
    }
    if (*(char *)(lVar7 + 0x168) != '\x01') {
      return 0;
    }
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x70) + 0x30) != '\x01')) {
    return 0;
  }
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x58);
    bVar3 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e58cac;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == iVar1 && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar5 = *puVar4;
      }
      else {
        uVar5 = 0;
      }
      bVar3 = FUN_140a30ba2(uVar5);
      goto LAB_140e58cac;
    }
  }
  bVar3 = 0;
LAB_140e58cac:
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar7 = 0;
    do {
      if (bVar3 == *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + lVar7) + 0x80)) {
        return bVar3;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 - lVar7 != 0);
  }
  return bVar3 ^ 1 | iVar1 == 0;
}



// FUNCTION 140e58d02 FUN_140e58d02 body=429 status=ok
// SIG undefined FUN_140e58d02(void)

longlong * FUN_140e58d02(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  undefined8 local_68;
  undefined2 *local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x18))();
  if (*param_2 == 0) {
    local_60 = (undefined2 *)((ulonglong)local_60 & 0xffffffffffffff00);
    local_38[0] = 0;
    FUN_1456bb102(&local_60,*(undefined8 *)(param_3 + 0xa8));
    (**(code **)(*param_1 + 0x10))(param_1,&local_80,&local_60);
    puVar2 = local_80;
    if (local_78 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_70,L"Unable to create unlock condition %s.",puVar2);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1448173f8(local_38);
    if (((char)local_60 == '\x03') && (local_50 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    if (param_4 != 0) {
      puVar2 = local_70;
      if ((int)local_68 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_1410a6380(param_4,&local_80);
      puVar3 = &DAT_149dfb77a;
      if (local_78 != 0) {
        puVar3 = local_80;
      }
      FUN_140002266(&local_60,L"Progress graph \'%s\': %s.",puVar3,puVar2);
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_68 = uStack_58;
      local_70 = local_60;
      local_60 = (undefined2 *)0x0;
      uStack_58 = 0;
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8(local_70);
    }
  }
  else {
    *(longlong **)(*param_2 + 0x28) = param_1;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e58eb0 FUN_140e58eb0 body=824 status=ok
// SIG undefined FUN_140e58eb0(void)

void FUN_140e58eb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong *local_68;
  undefined1 local_60 [8];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x10);
  if (lVar4 != 0) {
    puVar9 = *(ulonglong **)(*(longlong *)(param_1 + 0x50) + 8);
    puVar10 = puVar9 + lVar4;
    local_70 = (longlong *)(param_1 + 0x60);
    local_68 = puVar10;
    do {
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x140);
      if (lVar4 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x138);
        lVar7 = 0;
        do {
          puVar3 = *(ulonglong **)(lVar2 + 0x50 + lVar7);
          if (puVar3 == (ulonglong *)0x0) {
            uVar8 = 0;
            uVar5 = 0;
          }
          else {
            uVar8 = *puVar3;
            uVar5 = uVar8 & 0xffffffff;
            uVar8 = uVar8 & 0xffffffff00000000;
          }
          if ((*puVar9 == *(ulonglong *)(lVar2 + 0x48 + lVar7)) ||
             (((uVar5 | uVar8) != 0 && (*puVar9 == (uVar5 | uVar8))))) {
            if (lVar2 + lVar7 == 0) break;
            iVar1 = *(int *)(param_1 + 0x68);
            *(uint *)(param_1 + 0x68) = iVar1 + 1U;
            if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
              FUN_1418a4236(local_70,iVar1);
            }
            *(longlong *)(*local_70 + (longlong)iVar1 * 8) = lVar2 + lVar7;
            iVar1 = *(int *)(lVar2 + 0x88 + lVar7);
            *(uint *)(lVar2 + 0x88 + lVar7) = iVar1 + 1U;
            if (*(uint *)(lVar2 + 0x8c + lVar7) < iVar1 + 1U) {
              FUN_1418a4398(lVar2 + lVar7 + 0x80,iVar1);
            }
            *(longlong *)(*(longlong *)(lVar2 + 0x80 + lVar7) + (longlong)iVar1 * 8) = param_1;
            local_58 = (undefined8 *)0x0;
            local_50 = 0;
            FUN_1446efa72(&local_58,0,3,0x10);
            local_50 = 3;
            *local_58 = &PTR_LAB_14b420dd0;
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 1;
            lVar4 = DAT_14c758608 + 1;
            if (lVar6 == 0) {
              LOCK();
              UNLOCK();
              lVar6 = DAT_14c758608 + 2;
              lVar4 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar4;
            local_58[2] = lVar6;
            *local_58 = &PTR_FUN_14b421340;
            local_58[3] = param_1;
            local_58[4] = &LAB_140d10e14;
            FUN_140e588ce(lVar2 + lVar7 + 0x18,local_60,&local_58);
            puVar10 = local_68;
            if (local_50 == 0) {
LAB_140e590a3:
              if (local_58 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_58 != (undefined8 *)0x0) {
              (**(code **)*local_58)(local_58,0);
              FUN_1446efa72(&local_58,0,0,0x10);
              local_50 = 0;
              goto LAB_140e590a3;
            }
            local_58 = (undefined8 *)0x0;
            local_50 = 0;
            FUN_1446efa72(&local_58,0,3,0x10);
            local_50 = 3;
            *local_58 = &PTR_LAB_14b420dd0;
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 1;
            lVar4 = DAT_14c758608 + 1;
            if (lVar6 == 0) {
              LOCK();
              UNLOCK();
              lVar6 = DAT_14c758608 + 2;
              lVar4 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar4;
            local_58[2] = lVar6;
            *local_58 = &PTR_FUN_14b421340;
            local_58[3] = param_1;
            local_58[4] = &LAB_140d10e08;
            FUN_140e588ce(lVar2 + lVar7 + 0x30,local_60);
            if (local_50 != 0) {
              if (local_58 == (undefined8 *)0x0) break;
              (**(code **)*local_58)(local_58,0);
              FUN_1446efa72(&local_58,0,0,0x10);
              local_50 = 0;
            }
            if (local_58 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            break;
          }
          lVar7 = lVar7 + 0xa8;
        } while (lVar4 * 0xa8 - lVar7 != 0);
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e591ea FUN_140e591ea body=465 status=ok
// SIG undefined FUN_140e591ea(void)

void FUN_140e591ea(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    FUN_140e58d02(*param_2,&local_38,param_3,param_1);
    plVar2 = local_30;
    plVar3 = (longlong *)(param_1 + 0x170);
    if (plVar3 != &local_38) {
      *(longlong *)(param_1 + 0x170) = local_38;
      local_38 = 0;
      plVar4 = *(longlong **)(param_1 + 0x178);
      if (local_30 != plVar4) {
        local_30 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x178) = plVar2;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
    plVar2 = local_30;
    lVar5 = *plVar3;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (lVar5 != 0) {
      lVar5 = *plVar3;
      if (*(int *)(lVar5 + 0x20) != 3) {
        FUN_1446efa72((longlong *)(lVar5 + 0x18),0,3,0x10);
        *(undefined4 *)(lVar5 + 0x20) = 3;
      }
      puVar6 = *(undefined8 **)(lVar5 + 0x18);
      *puVar6 = &PTR_LAB_14b420820;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      puVar6[2] = lVar9;
      *puVar6 = &PTR_FUN_14b421080;
      puVar6[3] = 0;
      FUN_14485c47a(puVar6 + 3,param_1);
      puVar6[4] = FUN_14579c108;
    }
  }
  cVar7 = FUN_140e58abc(param_1);
  if (cVar7 != '\0') {
    uVar8 = 1;
    if (*(longlong *)(param_1 + 0x170) != 0) {
      uVar8 = *(undefined1 *)(*(longlong *)(param_1 + 0x170) + 0x30);
    }
    *(undefined1 *)(param_1 + 0x180) = uVar8;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e593bc FUN_140e593bc body=336 status=ok
// SIG undefined FUN_140e593bc(void)

void FUN_140e593bc(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0xa8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar4 + 0xf;
        if (param_2 < 0xc3) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140e59428;
              lVar1 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar5 & 0xfffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140e59428:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4 >> 3;
    iVar6 = SUB164(auVar3 * ZEXT816(0xc30c30c30c30c31),8);
    iVar8 = 0x7fffffff;
    if ((int)param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar8,0xa8,8);
  }
  return;
}



// FUNCTION 140e5950c FUN_140e5950c body=340 status=ok
// SIG undefined FUN_140e5950c(void)

void FUN_140e5950c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x88;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xf1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xfffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140e5957c;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xfffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140e5957c:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x88)) {
      uVar3 = uVar4 / 0x88 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x88,8);
  }
  return;
}



// FUNCTION 140e59660 FUN_140e59660 body=588 status=ok
// SIG undefined FUN_140e59660(void)

void FUN_140e59660(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    FUN_140e58d02(*param_2,&local_38,param_3,param_1);
    plVar1 = local_30;
    plVar3 = (longlong *)(param_1 + 0x158);
    if (plVar3 != &local_38) {
      *(longlong *)(param_1 + 0x158) = local_38;
      local_38 = 0;
      plVar5 = *(longlong **)(param_1 + 0x160);
      if (local_30 != plVar5) {
        local_30 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x160) = plVar1;
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
      }
    }
    plVar1 = local_30;
    lVar12 = *plVar3;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (lVar12 != 0) {
      lVar12 = *plVar3;
      if (*(int *)(lVar12 + 0x20) != 3) {
        FUN_1446efa72((longlong *)(lVar12 + 0x18),0,3,0x10);
        *(undefined4 *)(lVar12 + 0x20) = 3;
      }
      puVar6 = *(undefined8 **)(lVar12 + 0x18);
      *puVar6 = &PTR_LAB_14b420820;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      puVar6[2] = lVar10;
      *puVar6 = &PTR_FUN_14b421080;
      puVar6[3] = 0;
      if (param_1 == 0) {
        iVar9 = 0;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0xc);
        *(uint *)(puVar6 + 3) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar9 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar9 = *(int *)(lVar12 + 0x10);
          bVar13 = iVar9 == 0;
          if (bVar13) {
            *(int *)(lVar12 + 0x10) = iVar11;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar9 = iVar11;
          }
        }
      }
      *(int *)((longlong)puVar6 + 0x1c) = iVar9;
      puVar6[4] = FUN_140d11b28;
    }
  }
  cVar7 = FUN_140e58abc(param_1);
  if (cVar7 != '\0') {
    if (*(longlong *)(param_1 + 0x158) == 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = *(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0x30);
    }
    *(undefined1 *)(param_1 + 0x168) = uVar8;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e598b8 FUN_140e598b8 body=617 status=ok
// SIG undefined FUN_140e598b8(void)

undefined4
FUN_140e598b8(undefined4 *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  longlong local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = *(longlong *)(param_1 + 2);
  if (DAT_14caf64b8 == 0) {
    local_60 = &local_40;
    local_40 = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_142b4754c;
    local_68 = &LAB_147c45ce0;
    local_70 = &LAB_1463f1ff4;
    local_78 = &DAT_149e063b2;
    local_80 = 0x4000000000;
    local_88 = 0x10000004;
    local_90 = 8;
    local_98 = CONCAT44(local_98._4_4_,0x428);
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  local_98 = 0;
  uVar4 = (**(code **)(*param_3 + 0x2a8))(param_3,param_2,DAT_14caf64b8,&local_48);
  lVar3 = local_48;
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  *(longlong *)(param_1 + 2) = lVar3;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,1);
  }
  else {
    *(undefined1 *)(param_1 + 1) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 5),1);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 5) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 6),1);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 6) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  *param_4 = 1;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e59b30 FUN_140e59b30 body=40 status=ok
// SIG undefined FUN_140e59b30(void)

undefined8 FUN_140e59b30(undefined8 param_1,int param_2)

{
  FUN_140e59b58();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e59b58 FUN_140e59b58 body=83 status=ok
// SIG undefined FUN_140e59b58(void)

void FUN_140e59b58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b687a88;
  FUN_1408a47eb(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e59bac FUN_140e59bac body=570 status=ok
// SIG undefined FUN_140e59bac(void)

void FUN_140e59bac(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x749] != 0) {
    FUN_140e59de8(param_1[0x749],param_1[0x73b]);
  }
  lVar6 = *param_2;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    local_68 = param_1 + 0x72d;
    local_50 = param_1[0x749];
    local_48 = param_1[0x74a];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    local_60 = param_3;
    FUN_140e5a166(lVar6,param_1[0x73b],&local_50,param_1 + 0x5e0);
    lVar6 = *param_2;
  }
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x74a];
  param_1[0x749] = lVar6;
  param_1[0x74a] = lVar3;
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
    lVar6 = param_1[0x749];
  }
  if (lVar6 != 0) {
    if (*(longlong *)(lVar6 + 0x10) != 0) {
      puVar5 = *(undefined4 **)(*(longlong *)(lVar6 + 0x10) + 8);
      puVar7 = &DAT_14c9485f0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar7 = puVar5;
      }
      if (DAT_14c947fe0 == 0) {
        lVar6 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar6);
        DAT_14c947fe0 = lVar6;
      }
      FUN_140045924(DAT_14c947fe0,&local_58,puVar7,1);
      lVar6 = local_58;
      goto LAB_140e59ce2;
    }
    local_58 = 0;
  }
  lVar6 = 0;
LAB_140e59ce2:
  if ((param_1[0x746] != lVar6) || ((int)param_1[0x747] != 0x7201)) {
    param_1[0x746] = lVar6;
    *(undefined4 *)(param_1 + 0x747) = 0x7201;
    param_1[0x748] = 0;
  }
  *(byte *)((longlong)param_1 + 0x2ef4) = *(byte *)((longlong)param_1 + 0x2ef4) & 0xbf;
  if (((param_1[0x749] != 0) && (lVar6 = *(longlong *)(param_1[0x749] + 0x10), lVar6 != 0)) &&
     ((*(byte *)(lVar6 + 0x1d) & 2) != 0)) {
    (**(code **)(*param_1 + 0x6a0))(param_1,0);
  }
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e59de8 FUN_140e59de8 body=253 status=ok
// SIG undefined FUN_140e59de8(void)

void FUN_140e59de8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined4 *)(param_1 + 0xa74) = 0;
  *(undefined1 *)(param_1 + 0xa78) = 0;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      plVar2 = (longlong *)*puVar5;
      plVar3 = (longlong *)puVar5[1];
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
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
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x38) * 2;
    do {
      plVar2 = (longlong *)*puVar5;
      plVar3 = (longlong *)puVar5[1];
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
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



// FUNCTION 140e59f44 FUN_140e59f44 body=363 status=ok
// SIG undefined FUN_140e59f44(void)

void FUN_140e59f44(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    FUN_140e5a0b0(lVar3);
    *(undefined8 *)(lVar3 + 0xa80) = 0;
    plVar4 = *(longlong **)(lVar3 + 0xa88);
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(lVar3 + 0xa88) = 0;
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      plVar4 = *(longlong **)(lVar3 + 0xa88);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    if (*(char *)(lVar3 + 0xa30) == '\x01') {
      *(undefined1 *)(lVar3 + 0xa30) = 0;
    }
    if (*(longlong *)(lVar3 + 0x9a0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar3 + 0x918) != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(lVar3 + 0xdc) == '\x01') {
      *(undefined1 *)(lVar3 + 0xdc) = 0;
    }
    FUN_140e5a11d(*(undefined8 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x38));
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      FUN_1400020a8();
    }
    FUN_140e5a11d(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x28));
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FUN_1400020a8();
    }
    plVar4 = *(longlong **)(lVar3 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 140e5a0b0 FUN_140e5a0b0 body=109 status=ok
// SIG undefined FUN_140e5a0b0(void)

void FUN_140e5a0b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  FUN_140e5a11d(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_14880dd76(param_1 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  FUN_140e5a11d(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    FUN_14880dd76(param_1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 140e5a11d FUN_140e5a11d body=73 status=ok
// SIG undefined FUN_140e5a11d(void)

void FUN_140e5a11d(longlong param_1,int param_2)

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



// FUNCTION 140e5a166 FUN_140e5a166 body=861 status=ok
// SIG undefined FUN_140e5a166(void)

void FUN_140e5a166(longlong param_1,longlong param_2,undefined8 *param_3,double *param_4,
                  undefined8 param_5,float param_6)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double *pdVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  byte local_60;
  float *local_58;
  undefined8 local_50;
  longlong *local_48;
  float local_3c;
  ulonglong local_38;
  
  local_3c = param_6;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x1c);
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    plVar10 = *(longlong **)(param_1 + 0xa80);
    if (plVar10 == (longlong *)0x0) goto LAB_140e5a1d1;
    local_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar10 = *(longlong **)(param_1 + 0xa80);
    if (plVar10 == (longlong *)0x0) goto LAB_140e5a1d1;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_48 = plVar4;
  }
  local_60 = (bVar2 & 4) >> 2;
  local_58 = &local_3c;
  local_68 = param_5;
  local_50 = uVar3;
  (**(code **)(*plVar10 + 0x18))(param_6,param_2,&local_50,param_4);
LAB_140e5a1d1:
  fVar13 = local_3c;
  if (local_3c < 0.0) {
    fVar13 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x18);
  }
  *(float *)(param_1 + 0xa70) = fVar13;
  *(float *)(param_1 + 0xa74) = fVar13;
  *(bool *)(param_1 + 0xa78) = 0.0 < fVar13;
  if (0.0 < fVar13) {
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0xe0);
    if (lVar5 == 0) {
      dVar15 = *param_4;
      dVar16 = param_4[1];
      dVar14 = param_4[2];
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x1c8);
      if (lVar5 == 0) {
        pdVar9 = (double *)&DAT_14c8464e0;
        dVar14 = DAT_14c8464f0;
      }
      else {
        pdVar9 = (double *)(lVar5 + 0x260);
        dVar14 = *(double *)(lVar5 + 0x270);
      }
      dVar14 = param_4[2] - dVar14;
      dVar16 = param_4[1] - pdVar9[1];
      dVar15 = *param_4 - *pdVar9;
    }
    *(double *)(param_1 + 0x40) = dVar15;
    *(double *)(param_1 + 0x48) = dVar16;
    *(double *)(param_1 + 0x50) = dVar14;
    dVar15 = param_4[4];
    *(double *)(param_1 + 0x58) = param_4[3];
    *(double *)(param_1 + 0x60) = dVar15;
    *(double *)(param_1 + 0x68) = param_4[5];
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_4 + 6);
    dVar15 = param_4[0x12f];
    *(double *)(param_1 + 0x9b0) = param_4[0x12e];
    *(double *)(param_1 + 0x9b8) = dVar15;
    uVar6 = *(undefined4 *)((longlong)param_4 + 0x984);
    uVar7 = *(undefined4 *)(param_4 + 0x131);
    uVar8 = *(undefined4 *)((longlong)param_4 + 0x98c);
    *(undefined4 *)(param_1 + 0x9c0) = *(undefined4 *)(param_4 + 0x130);
    *(undefined4 *)(param_1 + 0x9c4) = uVar6;
    *(undefined4 *)(param_1 + 0x9c8) = uVar7;
    *(undefined4 *)(param_1 + 0x9cc) = uVar8;
    *(byte *)(param_2 + 0x14c) = *(byte *)(param_2 + 0x14c) | 2;
    *(undefined1 *)(param_1 + 0xa90) = 0;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x1c) & 0x20) != 0) {
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x20);
    puVar12 = puVar11 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      plVar4 = (longlong *)*puVar11;
      plVar10 = (longlong *)puVar11[1];
      if (plVar10 == (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
        LOCK();
        plVar4 = plVar10 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar12);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x30);
    puVar12 = puVar11 + (longlong)*(int *)(param_1 + 0x38) * 2;
    do {
      plVar4 = (longlong *)*puVar11;
      plVar10 = (longlong *)puVar11[1];
      if (plVar10 == (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
        LOCK();
        plVar4 = plVar10 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar12);
  }
  puVar11 = (undefined8 *)param_3[1];
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar11 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar11)(puVar11);
      LOCK();
      piVar1 = (int *)((longlong)puVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5a4f2 FUN_140e5a4f2 body=205 status=ok
// SIG undefined FUN_140e5a4f2(void)

void FUN_140e5a4f2(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x90c) = 0;
  if (0.0 < *(float *)(param_2 + 0x1cc)) {
    *(undefined4 *)(param_1 + 0x90c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_2 + 0x1cc);
    *(undefined1 *)(param_1 + 0x909) = *(undefined1 *)(param_2 + 0x1d0);
    *(undefined1 *)(param_1 + 0x90a) = *(undefined1 *)(param_2 + 0x1d1);
    FUN_14477b16e(param_1 + 0x920,param_2 + 0x1e0);
    *(byte *)(param_1 + 0x93a) = *(byte *)(param_1 + 0x93a) & 0xf7;
    FUN_1406a8366(param_2,&DAT_14cb746b0,param_2 + 0x1e0,0x3f800000);
    *(undefined4 *)(param_2 + 0x1cc) = 0;
  }
  *(uint *)(param_1 + 0x11e0) = ~-(uint)(0.0 < *(float *)(param_1 + 0x8e0)) & 0x3f800000;
  return;
}



// FUNCTION 140e5a5c0 FUN_140e5a5c0 body=363 status=ok
// SIG undefined FUN_140e5a5c0(void)

undefined4 FUN_140e5a5c0(longlong param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong **local_60;
  undefined4 local_54;
  longlong *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  SRWLock = (PSRWLOCK)(param_1 + 0x160);
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar3 = *param_2;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    lVar5 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x1b0) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar7 * 0x14);
        if (*plVar1 == lVar3) {
          ReleaseSRWLockShared(SRWLock);
          if (plVar1 == (longlong *)0x0) goto LAB_140e5a6bf;
          uVar2 = (undefined4)plVar1[1];
          goto LAB_140e5a69a;
        }
        iVar7 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar7 != -1);
    }
  }
  ReleaseSRWLockShared(SRWLock);
LAB_140e5a6bf:
  local_54 = 1;
  local_60 = &local_50;
  local_68 = &LAB_142b2cb54;
  local_50 = param_2;
  local_48 = &local_54;
  FUN_140e5a72c(param_1);
  AcquireSRWLockExclusive(SRWLock);
  local_50 = param_2;
  local_48 = &local_54;
  FUN_140e5aa76((longlong *)(param_1 + 0x168),local_3c,&local_50,0);
  ReleaseSRWLockExclusive(SRWLock);
  uVar2 = local_54;
LAB_140e5a69a:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5a72c FUN_140e5a72c body=385 status=ok
// SIG undefined FUN_140e5a72c(void)

void FUN_140e5a72c(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e5a8ae();
  lVar3 = DAT_14c9a3710;
  lVar8 = (longlong)DAT_14c9a3718;
  if (lVar8 != 0) {
    lVar10 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar10) != 0) {
        cVar4 = (*(code *)*param_2)(param_2[1],*(longlong *)(lVar3 + lVar10) + 0x3c);
        if (cVar4 == '\0') goto LAB_140e5a88b;
      }
      lVar10 = lVar10 + 8;
    } while (lVar8 * 8 != lVar10);
  }
  pcVar1 = *(char **)(param_1 + 0x3c);
  local_40 = pcVar1;
  FUN_140e5a918();
  uVar2 = (uint)((ulonglong)pcVar1 >> 0x10);
  uVar7 = (uint)pcVar1 & 0xffff;
  plVar5 = (longlong *)
           FUN_140e5a9b0(((uint)pcVar1 << 0x10 | uVar7) + (int)((ulonglong)pcVar1 >> 0x20) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4),&local_40);
  lVar3 = plVar5[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar8 = *plVar5;
    lVar10 = 0;
    do {
      if (*(longlong *)(lVar8 + lVar10) != 0) {
        cVar4 = (*(code *)*param_2)(param_2[1]);
        if (cVar4 == '\0') goto LAB_140e5a88b;
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar10);
  }
  local_40 = "Global";
  local_38 = 6;
  local_34 = 0;
  uVar6 = FUN_14001a6c0(&local_40,1);
  local_40 = (char *)(uVar6 & 0xffffffff);
  FUN_140e5a918();
  uVar2 = (uint)(uVar6 >> 0x10);
  uVar7 = (uint)uVar6 & 0xffff;
  plVar5 = (longlong *)
           FUN_140e5a9b0(((uint)uVar6 << 0x10 | uVar7) + (uVar7 >> 4) +
                         (uVar2 << 0x13 | uVar2 & 0xffff),&local_40);
  if ((longlong)(int)plVar5[1] != 0) {
    plVar9 = (longlong *)*plVar5;
    plVar5 = plVar9 + (int)plVar5[1];
    do {
      if (*plVar9 != 0) {
        cVar4 = (*(code *)*param_2)(param_2[1]);
        if (cVar4 == '\0') break;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar5);
  }
LAB_140e5a88b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5a8ae FUN_140e5a8ae body=106 status=ok
// SIG undefined FUN_140e5a8ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e5a8ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3720) {
    FUN_144b3d300(&DAT_14c9a3720);
    if (DAT_14c9a3720 == -1) {
      DAT_14c9a3710 = 0;
      _DAT_14c9a3718 = 0;
      atexit((_func_5014 *)&LAB_142b2bb6d);
      _Init_thread_footer(&DAT_14c9a3720);
    }
  }
  return &DAT_14c9a3710;
}



// FUNCTION 140e5a918 FUN_140e5a918 body=152 status=ok
// SIG undefined FUN_140e5a918(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e5a918(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3978) {
    FUN_144b3d300(&DAT_14c9a3978);
    if (DAT_14c9a3978 == -1) {
      DAT_14c9a3948 = 0;
      DAT_14c9a3950 = 0;
      DAT_14c9a3928 = 0;
      _DAT_14c9a3930 = 0;
      _DAT_14c9a3954 = 0xffffffff00000080;
      DAT_14c9a395c = 0;
      DAT_14c9a3968 = 0;
      DAT_14c9a3970 = 0;
      atexit(FUN_142b2bfb5);
      _Init_thread_footer(&DAT_14c9a3978);
      return;
    }
  }
  return;
}



// FUNCTION 140e5a9b0 FUN_140e5a9b0 body=196 status=ok
// SIG undefined FUN_140e5a9b0(void)

longlong FUN_140e5a9b0(uint param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c9a3930 != DAT_14c9a395c) {
    puVar3 = &DAT_14c9a3960;
    if (DAT_14c9a3968 != (undefined *)0x0) {
      puVar3 = DAT_14c9a3968;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14c9a3970 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = DAT_14c9a3928 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(DAT_14c9a3928 + (longlong)iVar1 * 0x20) == *param_2) {
          if (lVar2 != 0) goto LAB_140e5aa58;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_20 = param_2;
  FUN_140e5b092(&local_14,param_1);
  lVar2 = (longlong)local_14 * 0x20 + DAT_14c9a3928;
LAB_140e5aa58:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 140e5aa76 FUN_140e5aa76 body=1564 status=ok
// SIG undefined FUN_140e5aa76(void)

int * FUN_140e5aa76(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  uint *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_140171ad2(param_1,iVar16);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar4 = iVar20 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar19 = iVar20 + 1;
    iVar12 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar12 = iVar20;
    }
    if (iVar12 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar19;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar19 = 0x80;
          iVar4 = iVar20;
        }
        else {
          uVar22 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar22) {
              uVar5 = uVar22;
            }
          }
          else {
            uVar5 = (uVar22 * 3 >> 3) + uVar22 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar5 << 2,0);
          iVar4 = (int)(uVar11 >> 2);
          iVar19 = -0x20;
          if ((int)uVar22 <= iVar4) {
            iVar19 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar19;
        FUN_1446efbd8(plVar14,iVar4);
        iVar19 = (int)param_1[5] + 1;
      }
      iVar4 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar4 = iVar19;
      }
      *(int *)(param_1 + 5) = iVar19;
      if (iVar19 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar14;
        }
        bVar8 = -(char)(iVar19 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar6 = (longlong)iVar16;
    iVar20 = *(int *)(*param_1 + 4 + lVar6 * 0x14);
    *(int *)(param_1 + 6) = iVar20;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x14) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = puVar1;
  }
  iVar20 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar20 = iVar16;
  }
  puVar9[iVar20 >> 5] = puVar9[iVar20 >> 5] | 1 << ((byte)iVar16 & 0x1f);
  plVar14 = (longlong *)(*param_1 + lVar6 * 0x14);
  puVar2 = (undefined4 *)param_3[1];
  lVar6 = *(longlong *)*param_3;
  *plVar14 = lVar6;
  *(undefined4 *)(plVar14 + 1) = *puVar2;
  *(undefined4 *)((longlong)plVar14 + 0xc) = 0xffffffff;
  uVar22 = (uint)((ulonglong)lVar6 >> 0x10);
  uVar5 = (uint)lVar6 & 0xffff;
  uVar22 = ((uint)lVar6 << 0x10 | uVar5) + (int)((ulonglong)lVar6 >> 0x20) +
           (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar5 >> 4);
  cVar7 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar22) * 4);
    if (iVar20 == -1) {
      cVar7 = '\0';
    }
    else {
      do {
        plVar10 = (longlong *)(*param_1 + (longlong)iVar20 * 0x14);
        if (*plVar10 == lVar6) {
          lVar6 = *plVar14;
          *(int *)(plVar10 + 1) = (int)plVar14[1];
          *plVar10 = lVar6;
          FUN_1470b027c(param_1,iVar16);
          cVar7 = '\x01';
          iVar16 = iVar20;
          break;
        }
        iVar20 = *(int *)((longlong)plVar10 + 0xc);
        cVar7 = '\0';
      } while (iVar20 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar7;
  }
  if (cVar7 != '\0') goto LAB_140e5ac6f;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar5 < 4) {
    uVar17 = 1;
  }
  else {
    uVar11 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar5 < 1) || ((int)uVar17 <= (int)param_1[9])) {
    uVar22 = (int)param_1[9] - 1U & uVar22;
    *(uint *)(plVar14 + 2) = uVar22;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)((longlong)plVar14 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar22) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar22) * 4) =
         iVar16;
    goto LAB_140e5ac6f;
  }
  *(uint *)(param_1 + 9) = uVar17;
  plVar14 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar14,0,0,4);
    uVar17 = *(uint *)(param_1 + 9);
  }
  plVar10 = param_1 + 7;
  if (uVar17 == 1) {
    if (*plVar14 != 0) {
      FUN_1446efa72(plVar14,0,0,4);
    }
LAB_140e5ad13:
    uVar22 = 0;
    do {
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar10;
      }
      *(undefined4 *)((longlong)plVar14 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar22) * 4) =
           0xffffffff;
      uVar22 = uVar22 + 1;
    } while (uVar17 != uVar22);
  }
  else {
    if (uVar17 == 0) goto LAB_140e5ac6f;
    FUN_1446efa72(plVar14,0,uVar17,4);
    if (0 < (int)uVar17) goto LAB_140e5ad13;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar11 = 0;
    uVar15 = 1;
    iVar19 = 0;
    iVar4 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar22 = *puVar9;
    if (uVar22 == 0) {
      iVar4 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar4 = iVar20 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar4 = 0;
      do {
        if (uVar15 == uVar11) goto LAB_140e5ac6f;
        iVar4 = iVar4 + 0x20;
        uVar22 = puVar9[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar11 = 0;
      iVar4 = 0;
    }
    uVar15 = (ulonglong)(-uVar22 & uVar22);
    uVar21 = uVar15 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar19 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar19) {
      iVar19 = iVar20;
    }
  }
  if (iVar19 < iVar20) {
    uVar22 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar18 = (longlong)iVar19;
      uVar3 = *(undefined8 *)(lVar6 + lVar18 * 0x14);
      uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar17 = (uint)uVar3 & 0xffff;
      uVar21 = (longlong)
               (int)(((uint)uVar3 << 0x10 | uVar17) + (int)((ulonglong)uVar3 >> 0x20) +
                     (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar17 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar20 = (int)uVar21;
      *(int *)(lVar6 + 0x10 + lVar18 * 0x14) = iVar20;
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar10;
      }
      *(undefined4 *)(lVar6 + 0xc + lVar18 * 0x14) =
           *(undefined4 *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar10;
      }
      *(int *)((longlong)plVar14 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar19
      ;
      uVar22 = ~(uint)uVar15 & uVar22;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar19 = (int)uVar11;
      lVar6 = (longlong)iVar19;
      uVar5 = puVar9[lVar6] & uVar22;
      if (uVar5 == 0) {
        iVar12 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar12 = iVar20 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar19) {
          iVar13 = iVar19;
        }
        if (iVar12 <= iVar19) break;
        lVar18 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar5 = puVar9[lVar6 + lVar18 + 1];
          if (uVar5 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar13 - lVar6 == lVar18) goto LAB_140e5ac6f;
        }
        uVar11 = (ulonglong)(iVar19 + (int)lVar18 + 1);
        uVar22 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar5 & uVar5);
      uVar21 = uVar15 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar19 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar20);
  }
LAB_140e5ac6f:
  *param_2 = iVar16;
  return param_2;
}



// FUNCTION 140e5b092 FUN_140e5b092 body=885 status=ok
// SIG undefined FUN_140e5b092(void)

int * FUN_140e5b092(int *param_1,uint param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined *puVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  
  iVar20 = DAT_14c9a3958;
  iVar11 = DAT_14c9a3930;
  if (DAT_14c9a395c == 0) {
    iVar20 = DAT_14c9a3930 + 1;
    bVar21 = DAT_14c9a3934 == DAT_14c9a3930;
    DAT_14c9a3930 = iVar20;
    if (bVar21) {
      FUN_1447711aa(&DAT_14c9a3928,iVar11);
    }
    iVar20 = DAT_14c9a3950;
    if (DAT_14c9a3950 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = DAT_14c9a3950 + 0x1e;
      if (-1 < DAT_14c9a3950 + -1) {
        iVar10 = DAT_14c9a3950 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    iVar16 = DAT_14c9a3950 + 1;
    iVar19 = DAT_14c9a3950 + 0x1f;
    if (-1 < DAT_14c9a3950) {
      iVar19 = DAT_14c9a3950;
    }
    if (iVar19 >> 5 != iVar10) {
      if (DAT_14c9a3954 <= DAT_14c9a3950) {
        if (DAT_14c9a3950 + 0x20U < 0xa0) {
          DAT_14c9a3954 = 0x80;
        }
        else {
          uVar17 = DAT_14c9a3950 + 0x20U >> 5;
          if (DAT_14c9a3954 + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar17) {
              uVar15 = uVar17;
            }
          }
          else {
            uVar15 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar15 << 2,0);
          iVar10 = (int)(uVar12 >> 2);
          DAT_14c9a3954 = -0x20;
          if ((int)uVar17 <= iVar10) {
            DAT_14c9a3954 = iVar10 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14c9a3938,DAT_14c9a3950);
        iVar16 = DAT_14c9a3950 + 1;
      }
      iVar10 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar10 = iVar16;
      }
      if (iVar16 % 0x20 != 0) {
        puVar13 = &DAT_14c9a3938;
        if (DAT_14c9a3948 != (undefined *)0x0) {
          puVar13 = DAT_14c9a3948;
        }
        bVar14 = -(char)(iVar16 % 0x20);
        DAT_14c9a3950 = iVar16;
        *(uint *)(puVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)(puVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
        iVar16 = DAT_14c9a3950;
      }
    }
    DAT_14c9a3950 = iVar16;
    lVar18 = (longlong)iVar11;
    puVar13 = &DAT_14c9a3938;
    if (DAT_14c9a3948 != (undefined *)0x0) {
      puVar13 = DAT_14c9a3948;
    }
    bVar14 = (byte)iVar20 & 0x1f;
    *(uint *)(puVar13 + (longlong)(iVar19 >> 5) * 4) =
         *(uint *)(puVar13 + (longlong)(iVar19 >> 5) * 4) &
         (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
    iVar20 = iVar11;
  }
  else {
    lVar18 = (longlong)DAT_14c9a3958;
    DAT_14c9a3958 = *(int *)(DAT_14c9a3928 + 4 + lVar18 * 0x20);
    DAT_14c9a395c = DAT_14c9a395c + -1;
    if (DAT_14c9a395c != 0) {
      *(undefined4 *)(DAT_14c9a3928 + (longlong)DAT_14c9a3958 * 0x20) = 0xffffffff;
    }
  }
  iVar11 = 1;
  puVar13 = &DAT_14c9a3938;
  if (DAT_14c9a3948 != (undefined *)0x0) {
    puVar13 = DAT_14c9a3948;
  }
  iVar10 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar10 = iVar20;
  }
  *(uint *)(puVar13 + (longlong)(iVar10 >> 5) * 4) =
       *(uint *)(puVar13 + (longlong)(iVar10 >> 5) * 4) | 1 << ((byte)iVar20 & 0x1f);
  lVar9 = DAT_14c9a3928;
  lVar18 = lVar18 * 0x20;
  puVar1 = (undefined4 *)(DAT_14c9a3928 + lVar18);
  lVar4 = *(longlong *)*param_3;
  *(longlong *)(DAT_14c9a3928 + lVar18) = lVar4;
  puVar3 = (undefined8 *)(lVar9 + 8 + lVar18);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(lVar9 + 0x18 + lVar18) = 0xffffffff;
  uVar17 = DAT_14c9a3930 - DAT_14c9a395c;
  if ((uVar17 != 0) && (uVar17 != 1)) {
    puVar13 = &DAT_14c9a3960;
    if (DAT_14c9a3968 != (undefined *)0x0) {
      puVar13 = DAT_14c9a3968;
    }
    iVar10 = *(int *)(puVar13 + (ulonglong)(DAT_14c9a3970 - 1U & param_2) * 4);
    while (iVar10 != -1) {
      puVar2 = (undefined4 *)(DAT_14c9a3928 + (longlong)iVar10 * 0x20);
      if (*(longlong *)(DAT_14c9a3928 + (longlong)iVar10 * 0x20) == lVar4) {
        if (*(longlong *)(puVar2 + 2) != 0) {
          FUN_1400020a8();
        }
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        FUN_1470b031e(iVar20);
        goto LAB_140e5b27f;
      }
      iVar10 = puVar2[6];
    }
  }
  if (3 < uVar17) {
    uVar12 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
    lVar18 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar18 & 0x1f);
  }
  if (((int)uVar17 < 1) || (iVar11 <= DAT_14c9a3970)) {
    param_2 = DAT_14c9a3970 - 1U & param_2;
    puVar1[7] = param_2;
    puVar13 = DAT_14c9a3968;
    if (DAT_14c9a3968 == (undefined *)0x0) {
      puVar13 = &DAT_14c9a3960;
    }
    puVar1[6] = *(undefined4 *)
                 (puVar13 + ((longlong)DAT_14c9a3970 - 1U & (longlong)(int)param_2) * 4);
    puVar13 = DAT_14c9a3968;
    if (DAT_14c9a3968 == (undefined *)0x0) {
      puVar13 = &DAT_14c9a3960;
    }
    *(int *)(puVar13 + ((longlong)DAT_14c9a3970 - 1U & (longlong)(int)param_2) * 4) = iVar20;
  }
  else {
    DAT_14c9a3970 = iVar11;
    FUN_140e5b408();
  }
LAB_140e5b27f:
  *param_1 = iVar20;
  return param_1;
}



// FUNCTION 140e5b408 FUN_140e5b408 body=631 status=ok
// SIG undefined FUN_140e5b408(void)

void FUN_140e5b408(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a3968 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a3968,0,0,4);
  }
  uVar5 = DAT_14c9a3970;
  if (DAT_14c9a3970 != 0) {
    FUN_144a1cbf0(&DAT_14c9a3960,0,DAT_14c9a3970,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        puVar7 = DAT_14c9a3968;
        if (DAT_14c9a3968 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a3960;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c9a3970 + 0x7fffffff & uVar3) * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14c9a3938;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14c9a3950 == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar9 = local_48;
    if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
      do {
        lVar13 = DAT_14c9a3928;
        lVar12 = (longlong)iVar6 * 0x20;
        uVar1 = *(undefined8 *)(DAT_14c9a3928 + lVar12);
        uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
        uVar14 = (uint)uVar1 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar1 << 0x10 | uVar14) + (int)((ulonglong)uVar1 >> 0x20) +
                       (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) &
                 (longlong)(int)DAT_14c9a3970 - 1U;
        iVar10 = (int)uVar11;
        *(int *)(DAT_14c9a3928 + 0x1c + lVar12) = iVar10;
        puVar7 = DAT_14c9a3968;
        if (DAT_14c9a3968 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a3960;
        }
        *(undefined4 *)(lVar13 + 0x18 + lVar12) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14c9a3970 - 1U & uVar11) * 4);
        puVar7 = DAT_14c9a3968;
        if (DAT_14c9a3968 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a3960;
        }
        *(int *)(puVar7 + ((longlong)iVar10 & (longlong)(int)DAT_14c9a3970 - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        puVar7 = *(undefined **)(local_58 + 0x10);
        if (*(undefined **)(local_58 + 0x10) == (undefined *)0x0) {
          puVar7 = local_58;
        }
        iVar10 = *(int *)(local_58 + 0x18);
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)(puVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar6 = iVar10 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)(puVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_140e5b638;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar11 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar10);
    }
  }
LAB_140e5b638:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5b680 FUN_140e5b680 body=1658 status=ok
// SIG undefined FUN_140e5b680(void)

void FUN_140e5b680(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint *puVar15;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  uint local_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar4 = *(longlong **)(param_2 + 2);
  if ((((plVar4 == (longlong *)0x0) || (param_2[1] == 0)) || (uVar2 = *param_2, (int)uVar2 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar2 ||
       (lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar12 == 0)) ||
      ((*(uint *)(lVar12 + 0x10) != param_2[1] ||
       (((*(uint *)(lVar12 + 8) & 0x10200000) != 0 ||
        (lVar12 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar12 == 0)))))))) goto LAB_140e5b6ed;
  lVar10 = *(longlong *)(lVar12 + 0x148);
  local_68 = lVar10;
  uVar8 = FUN_14477b664(*(undefined8 *)(lVar12 + 0x150));
  uStack_60 = FUN_14477b664(uVar8);
  lVar9 = *(longlong *)(lVar12 + 0x158);
  local_58 = lVar9;
  if (uStack_60 == 0) {
    uVar8 = FUN_14043db3a();
    uStack_60 = FUN_14477b664(uVar8);
  }
  if (lVar9 == 0) {
    local_58 = 0;
    if ((((lVar10 != 0) && (uStack_60 != 0)) &&
        (plVar11 = *(longlong **)(uStack_60 + 0xb8), plVar11 != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar6 != '\0')) {
      uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
      local_58 = FUN_144aff482(uVar8,&local_68);
      if (local_58 != 0) goto LAB_140e5b77e;
    }
  }
  else {
LAB_140e5b77e:
    lVar10 = *(longlong *)(lVar12 + 0x148);
    local_b8 = lVar10;
    uVar8 = FUN_14477b664(*(undefined8 *)(lVar12 + 0x150));
    uStack_b0 = FUN_14477b664(uVar8);
    lVar9 = *(longlong *)(lVar12 + 0x158);
    local_a8 = lVar9;
    if (uStack_b0 == 0) {
      uVar8 = FUN_14043db3a();
      uStack_b0 = FUN_14477b664(uVar8);
    }
    if (lVar9 == 0) {
      local_a8 = 0;
      lVar9 = 0;
      if ((lVar10 != 0) && (uStack_b0 != 0)) {
        plVar11 = *(longlong **)(uStack_b0 + 0xb8);
        if ((plVar11 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar6 == '\0')) {
          lVar9 = 0;
          local_a8 = lVar9;
        }
        else {
          uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
          lVar9 = FUN_144aff482(uVar8,&local_b8);
          local_a8 = lVar9;
        }
      }
    }
    if ((*(char *)(lVar9 + 0x19) == '\x01') &&
       ((lVar10 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar10 == 0 ||
        (*(int *)(lVar10 + 0x18c) != 2)))) {
      lVar10 = *(longlong *)(lVar12 + 0x148);
      uVar8 = FUN_14477b664(*(undefined8 *)(lVar12 + 0x150));
      FUN_14477b664(uVar8);
      local_b8 = lVar10;
      FUN_1446dcdd4(&local_68,&local_b8);
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar11 = param_1 + 7;
        if ((longlong *)param_1[8] != (longlong *)0x0) {
          plVar11 = (longlong *)param_1[8];
        }
        iVar7 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & (uint)local_68) * 4)
        ;
        if (iVar7 != -1) {
          do {
            lVar10 = *param_1 + (longlong)iVar7 * 0x50;
            if (*(uint *)(*param_1 + (longlong)iVar7 * 0x50) == (uint)local_68) {
              if (lVar10 != 0) {
                puVar15 = (uint *)(lVar10 + 0x28);
                goto LAB_140e5baa0;
              }
              break;
            }
            iVar7 = *(int *)(lVar10 + 0x48);
          } while (iVar7 != -1);
        }
      }
      if ((((*(int *)((longlong)param_1 + 0x1ac) == 0) ||
           (uVar2 = *(uint *)(param_1 + 0x35), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
         (((puVar13 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           puVar13 == (undefined8 *)0x0 ||
           (*(int *)(puVar13 + 2) != *(int *)((longlong)param_1 + 0x1ac))) ||
          ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) {
LAB_140e5bb5b:
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_78 = &local_68;
        local_70 = &local_b8;
        FUN_14163a858(param_1,&local_90);
        lVar12 = *param_1;
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        puVar15 = (uint *)(lVar12 + (longlong)(int)local_90 * 0x50 + 0x28);
      }
      else {
        if ((*(uint *)(puVar13 + 1) & 0x10200000) == 0) {
          uVar8 = *puVar13;
        }
        else {
          uVar8 = 0;
        }
        iVar7 = FUN_14490d72a(uVar8);
        if (2 < iVar7) goto LAB_140e5bb5b;
        local_b8 = *(longlong *)(lVar12 + 0x148);
        uVar8 = FUN_14477b664(*(undefined8 *)(lVar12 + 0x150));
        uStack_b0 = FUN_14477b664(uVar8);
        local_a8 = *(longlong *)(lVar12 + 0x158);
        FUN_1457ea37e(param_1,&local_90,&local_b8);
        if ((CONCAT44(uStack_84,uStack_88) == 0) || (iStack_8c == 0)) {
LAB_140e5bcbb:
          puVar15 = (uint *)0x0;
        }
        else {
          puVar15 = (uint *)0x0;
          if ((-1 < (int)local_90) && ((int)local_90 < DAT_14c9647dc)) {
            lVar12 = (ulonglong)((local_90 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_90 >> 0x10) * 8);
            if (((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != iStack_8c)) ||
               ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)) goto LAB_140e5bcbb;
            local_a8 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_78 = &local_68;
            local_70 = &local_b8;
            FUN_14163a858(param_1,&local_7c);
            lVar12 = *param_1 + (longlong)local_7c * 0x50;
            puVar15 = (uint *)(lVar12 + 0x28);
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            *(ulonglong *)puVar15 = CONCAT44(iStack_8c,local_90);
            *(ulonglong *)(lVar12 + 0x30) = CONCAT44(uStack_84,uStack_88);
            *puVar15 = local_90;
            *(int *)(lVar12 + 0x2c) = iStack_8c;
            *(undefined4 *)(lVar12 + 0x30) = uStack_88;
            *(undefined4 *)(lVar12 + 0x34) = uStack_84;
          }
        }
      }
      if (puVar15 != (uint *)0x0) {
LAB_140e5baa0:
        FUN_1407abeca(&local_b8,plVar4);
        uVar2 = puVar15[6];
        puVar15[6] = uVar2 + 1;
        if (puVar15[7] < uVar2 + 1) {
          FUN_14188da48(puVar15 + 4,uVar2);
        }
        puVar1 = (undefined4 *)(*(longlong *)(puVar15 + 4) + (longlong)(int)uVar2 * 0x10);
        *puVar1 = (undefined4)local_b8;
        puVar1[1] = local_b8._4_4_;
        puVar1[2] = (undefined4)uStack_b0;
        puVar1[3] = uStack_b0._4_4_;
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      goto LAB_140e5b6ed;
    }
  }
  plVar11 = param_1 + 0xc;
  if (((int)param_1[0xd] != 0) && (0 < (int)param_1[0xd])) {
    iVar7 = -1;
    lVar9 = 8;
    lVar10 = 0;
    do {
      lVar14 = *plVar11;
      plVar5 = *(longlong **)(lVar14 + lVar9);
      if (((plVar5 != (longlong *)0x0) && (iVar3 = *(int *)(lVar14 + -4 + lVar9), iVar3 != 0)) &&
         ((uVar2 = *(uint *)(lVar14 + -8 + lVar9), -1 < (int)uVar2 &&
          (((((int)uVar2 < DAT_14c9647dc &&
             (lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar14 != 0))
            && (*(int *)(lVar14 + 0x10) == iVar3)) && ((*(uint *)(lVar14 + 8) & 0x10200000) == 0))))
         )) {
        if (plVar5 == plVar4) goto LAB_140e5b6ed;
        lVar14 = (**(code **)(*plVar5 + 0x10))();
        if (((iVar7 == -1) && (lVar14 != 0)) &&
           ((*(int *)(lVar14 + 0x18c) == 3 || (iVar7 = -1, *(char *)(lVar14 + 400) == '\x01')))) {
          iVar7 = (int)lVar10;
        }
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar10 < (int)param_1[0xd]);
    if ((iVar7 != -1 && (*(byte *)(lVar12 + 400) & 1) == 0) && *(int *)(lVar12 + 0x18c) != 3) {
      FUN_1407abeca(&local_68,plVar4);
      iVar3 = (int)param_1[0xd];
      *(uint *)(param_1 + 0xd) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x6c) < iVar3 + 1U) {
        FUN_14188da48(plVar11,iVar3);
      }
      lVar12 = (longlong)iVar7 * 0x10;
      memmove((void *)(*plVar11 + lVar12 + 0x10),(void *)(*plVar11 + lVar12),
              (ulonglong)(uint)(iVar3 - iVar7) << 4);
      puVar1 = (undefined4 *)(*plVar11 + lVar12);
      *puVar1 = (uint)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = (undefined4)uStack_60;
      puVar1[3] = uStack_60._4_4_;
      goto LAB_140e5b6ed;
    }
  }
  FUN_1407abeca(&local_68,plVar4);
  iVar7 = (int)param_1[0xd];
  *(uint *)(param_1 + 0xd) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0x6c) < iVar7 + 1U) {
    FUN_14188da48(plVar11,iVar7);
  }
  puVar1 = (undefined4 *)(*plVar11 + (longlong)iVar7 * 0x10);
  *puVar1 = (uint)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
LAB_140e5b6ed:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e5bcfc FUN_140e5bcfc body=323 status=ok
// SIG undefined FUN_140e5bcfc(void)

undefined8
FUN_140e5bcfc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140e5be38;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e5be38;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_140e5be38:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e5bde2;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_48 = param_5;
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140e5bde2;
    }
  }
  uVar6 = 0;
LAB_140e5bde2:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5be40 FUN_140e5be40 body=94 status=ok
// SIG undefined FUN_140e5be40(void)

void FUN_140e5be40(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_141356c7a(param_1 + 0x30);
  if ((param_3 != 0) && (lVar1 == param_2)) {
    FUN_1442af3ec(param_1,param_2,param_3,1);
    FUN_140e444f8(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 140e5be9e FUN_140e5be9e body=79 status=ok
// SIG undefined FUN_140e5be9e(void)

void FUN_140e5be9e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_141356c7a(param_1 + 0x30);
  if ((param_3 != 0) && (lVar1 == param_2)) {
    FUN_1442af3ec(param_1,param_2,param_3,1);
    FUN_140de831e(param_1,param_3);
    return;
  }
  return;
}



// FUNCTION 140e5bef4 FUN_140e5bef4 body=57 status=ok
// SIG undefined FUN_140e5bef4(void)

void FUN_140e5bef4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55930 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55930 = FUN_140002ddd(FUN_1464b3e46,uVar1,L"CameraModeBehavior_LimitPitch");
  }
  return;
}



// FUNCTION 140e5bf3e FUN_140e5bf3e body=41 status=ok
// SIG undefined FUN_140e5bf3e(void)

void FUN_140e5bf3e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 140e5bf68 FUN_140e5bf68 body=57 status=ok
// SIG undefined FUN_140e5bf68(void)

void FUN_140e5bf68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a560 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a560 = FUN_140002ddd(FUN_1465265d8,uVar1,L"InventorySkillsAspect");
  }
  return;
}



// FUNCTION 140e5bfa2 FUN_140e5bfa2 body=28 status=ok
// SIG undefined FUN_140e5bfa2(void)

void FUN_140e5bfa2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong lStack_40;
  longlong *plStack_38;
  undefined2 uStack_30;
  ulonglong uStack_28;
  
  *(byte *)(param_1 + 0x20c) = *(byte *)(param_1 + 0x20c) & 0xfe;
  if ((*(longlong *)(param_1 + 0x20) == 0) ||
     (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 == (longlong *)0x0)) {
    return;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (**(code **)(*plVar2 + 8))();
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1447210f0(lVar5);
  }
  FUN_140cfc686(&lStack_40,uVar6);
  if (plStack_38 != (longlong *)0x0) {
    iVar4 = (int)plStack_38[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plStack_38[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plStack_38 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = plStack_38;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)plStack_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_38 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (lStack_40 != 0) {
        FUN_140cfc4c2(&lStack_40,plVar2);
        uStack_30 = 0;
        FUN_140e5c0b0(lStack_40 + 0xc58,&lStack_40);
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((uStack_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e5bfbe FUN_140e5bfbe body=241 status=ok
// SIG undefined FUN_140e5bfbe(void)

void FUN_140e5bfbe(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (**(code **)(*param_1 + 8))();
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1447210f0(lVar5);
  }
  FUN_140cfc686(&local_40,uVar6);
  if (local_38 != (longlong *)0x0) {
    iVar4 = (int)local_38[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_38 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_38;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_40 != 0) {
        FUN_140cfc4c2(&local_40,param_1);
        local_30 = 0;
        FUN_140e5c0b0(local_40 + 0xc58,&local_40);
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e5c0b0 FUN_140e5c0b0 body=132 status=ok
// SIG undefined FUN_140e5c0b0(void)

int FUN_140e5c0b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *param_1;
  iVar2 = (int)param_1[1];
  lVar7 = (longlong)iVar2;
  if (lVar7 != 0) {
    uVar5 = 0;
    do {
      if (*(longlong *)(lVar6 + 8 + uVar5) == param_2[1]) {
        iVar4 = (int)(uVar5 >> 3) * -0x55555555;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      uVar5 = uVar5 + 0x18;
    } while (lVar7 * 0x18 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1457b8616(param_1,iVar2);
    lVar6 = *param_1;
  }
  *(undefined8 *)(lVar6 + 0x10 + lVar7 * 0x18) = param_2[2];
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(lVar6 + lVar7 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return iVar2;
}



// FUNCTION 140e5c26c FUN_140e5c26c body=139 status=ok
// SIG undefined FUN_140e5c26c(void)

void FUN_140e5c26c(longlong *param_1)

{
  FUN_14005d520();
  (**(code **)(*param_1 + 0xd8))(param_1);
  *(undefined2 *)(param_1 + 0x139) = 0x100;
  *(undefined2 *)(param_1 + 0x144) = 1;
  FUN_140e5c2f8(param_1 + 0x12f);
  FUN_140e5c2f8(param_1 + 0x13a);
  param_1[0x148] = DAT_14caaadf8;
  FUN_140e5c370(param_1);
  *(undefined4 *)(param_1 + 0xbd) = 0xffff;
  param_1[0xbc] = -1;
  if ((char)param_1[0x186] == '\x01') {
    *(undefined1 *)(param_1 + 0x186) = 0;
  }
  return;
}



// FUNCTION 140e5c2f8 FUN_140e5c2f8 body=119 status=ok
// SIG undefined FUN_140e5c2f8(void)

void FUN_140e5c2f8(longlong param_1)

{
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_14179bb54(param_1 + 0x18,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x44) < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_14482f6fa(param_1 + 0x38,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_14482f6fa(param_1 + 0x28,0);
  return;
}



// FUNCTION 140e5c370 FUN_140e5c370 body=1625 status=ok
// SIG undefined FUN_140e5c370(void)

void FUN_140e5c370(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_b8 [40];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0xac0);
  puVar2 = (uint *)(param_1 + 0xad0);
  iVar14 = *(int *)(param_1 + 0xae8);
  if (iVar14 == 0) {
    uVar16 = 1;
    uVar18 = 0;
    iVar9 = 0;
    iVar13 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0xae0);
    if (*(uint **)(param_1 + 0xae0) == (uint *)0x0) {
      puVar8 = puVar2;
    }
    uVar17 = *puVar8;
    if (uVar17 == 0) {
      iVar9 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar9 = iVar14 + -1;
      }
      uVar18 = 0;
      uVar16 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar16 = uVar18;
      }
      iVar13 = 0;
      do {
        if (uVar16 == uVar18) {
          iVar6 = 1;
          goto LAB_140e5c4e8;
        }
        iVar13 = iVar13 + 0x20;
        uVar17 = puVar8[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar18 = 0;
      iVar13 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar3 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar9) {
      iVar9 = iVar14;
    }
  }
  iVar6 = iVar14;
  if (iVar9 != iVar14) {
    uVar17 = 0xffffffff;
    do {
      puVar4 = *(undefined8 **)(*plVar1 + 8 + (longlong)iVar9 * 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
        iVar6 = *(int *)(param_1 + 0xae8);
      }
      uVar17 = uVar17 & ~(uint)uVar16;
      puVar8 = *(uint **)(param_1 + 0xae0);
      if (*(uint **)(param_1 + 0xae0) == (uint *)0x0) {
        puVar8 = puVar2;
      }
      iVar9 = (int)uVar18;
      lVar15 = (longlong)iVar9;
      uVar10 = puVar8[lVar15] & uVar17;
      if (uVar10 == 0) {
        iVar11 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar11 = iVar6 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar9 < iVar11) {
          lVar7 = 0;
          do {
            uVar10 = puVar8[lVar15 + lVar7 + 1];
            if (uVar10 != 0) {
              uVar18 = (ulonglong)(iVar9 + (int)lVar7 + 1);
              uVar17 = 0xffffffff;
              goto LAB_140e5c4bc;
            }
            iVar13 = iVar13 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar12 - lVar15 != lVar7);
          uVar17 = 0xffffffff;
          lVar15 = (longlong)iVar12;
        }
        uVar18 = lVar15 + 1U & 0xffffffff;
        iVar9 = iVar6;
      }
      else {
LAB_140e5c4bc:
        uVar16 = (ulonglong)(-uVar10 & uVar10);
        uVar3 = uVar16 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar9) {
          iVar9 = iVar6;
        }
      }
    } while (iVar9 != iVar14);
  }
LAB_140e5c4e8:
  iVar14 = *(int *)(param_1 + 0xb08);
  if (iVar14 < 2) {
    lVar15 = param_1 + 0xaf8;
    if (*(longlong *)(param_1 + 0xb00) != 0) {
      lVar15 = *(longlong *)(param_1 + 0xb00);
    }
    iVar9 = iVar14 + 3;
    if (-1 < iVar14) {
      iVar9 = iVar14;
    }
    if (*(int *)(param_1 + 0xac8) - *(int *)(param_1 + 0xaf4) < iVar9 >> 2) {
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = puVar2;
      if (iVar6 == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar14 = *(int *)(param_1 + 0xae8);
      }
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar5 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar9 = local_78._4_4_;
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar14) || (local_78 = local_58, uStack_60 != puVar2)) {
        do {
          local_78 = uVar5;
          *(undefined4 *)
           (lVar15 + (longlong)*(int *)(*local_90 + 0x14 + (longlong)iVar9 * 0x18) * 4) = 0xffffffff
          ;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar9 = local_78._4_4_;
          uVar5 = local_78;
        } while (local_90 != plVar1 ||
                 ((uint *)CONCAT44(uStack_7c,uStack_80) != puVar2 || local_78._4_4_ != iVar14));
      }
    }
    else if (iVar14 == 1) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar15 + lVar7 * 4) = 0xffffffff;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0xb08));
    }
    FUN_140e5c9ca(plVar1,0);
  }
  else {
    FUN_140e5c9ca(plVar1,0);
    *(undefined4 *)(param_1 + 0xb08) = 1;
    FUN_14073a4c2();
  }
  plVar1 = (longlong *)(param_1 + 0xb10);
  puVar2 = (uint *)(param_1 + 0xb20);
  iVar14 = *(int *)(param_1 + 0xb38);
  if (iVar14 == 0) {
    uVar16 = 1;
    uVar18 = 0;
    iVar9 = 0;
    iVar13 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0xb30);
    if (*(uint **)(param_1 + 0xb30) == (uint *)0x0) {
      puVar8 = puVar2;
    }
    uVar17 = *puVar8;
    if (uVar17 == 0) {
      iVar9 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar9 = iVar14 + -1;
      }
      uVar18 = 0;
      uVar16 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar16 = uVar18;
      }
      iVar13 = 0;
      do {
        if (uVar16 == uVar18) {
          iVar6 = 1;
          goto LAB_140e5c6b6;
        }
        iVar13 = iVar13 + 0x20;
        uVar17 = puVar8[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar18 = 0;
      iVar13 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar3 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar9) {
      iVar9 = iVar14;
    }
  }
  iVar6 = iVar14;
  if (iVar9 != iVar14) {
    uVar17 = 0xffffffff;
    do {
      puVar4 = *(undefined8 **)(*plVar1 + 8 + (longlong)iVar9 * 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
        iVar6 = *(int *)(param_1 + 0xb38);
      }
      uVar17 = uVar17 & ~(uint)uVar16;
      puVar8 = *(uint **)(param_1 + 0xb30);
      if (*(uint **)(param_1 + 0xb30) == (uint *)0x0) {
        puVar8 = puVar2;
      }
      iVar9 = (int)uVar18;
      lVar15 = (longlong)iVar9;
      uVar10 = puVar8[lVar15] & uVar17;
      if (uVar10 == 0) {
        iVar11 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar11 = iVar6 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar9 < iVar11) {
          lVar7 = 0;
          do {
            uVar10 = puVar8[lVar15 + lVar7 + 1];
            if (uVar10 != 0) {
              uVar18 = (ulonglong)(iVar9 + (int)lVar7 + 1);
              uVar17 = 0xffffffff;
              goto LAB_140e5c689;
            }
            iVar13 = iVar13 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar12 - lVar15 != lVar7);
          uVar17 = 0xffffffff;
          lVar15 = (longlong)iVar12;
        }
        uVar18 = lVar15 + 1U & 0xffffffff;
        iVar9 = iVar6;
      }
      else {
LAB_140e5c689:
        uVar16 = (ulonglong)(-uVar10 & uVar10);
        uVar3 = uVar16 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar9) {
          iVar9 = iVar6;
        }
      }
    } while (iVar9 != iVar14);
  }
LAB_140e5c6b6:
  iVar14 = *(int *)(param_1 + 0xb58);
  if (iVar14 < 2) {
    lVar15 = param_1 + 0xb48;
    if (*(longlong *)(param_1 + 0xb50) != 0) {
      lVar15 = *(longlong *)(param_1 + 0xb50);
    }
    iVar9 = iVar14 + 3;
    if (-1 < iVar14) {
      iVar9 = iVar14;
    }
    if (*(int *)(param_1 + 0xb18) - *(int *)(param_1 + 0xb44) < iVar9 >> 2) {
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = puVar2;
      if (iVar6 == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar14 = *(int *)(param_1 + 0xb38);
      }
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar5 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar9 = local_78._4_4_;
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar14) || (local_78 = local_58, uStack_60 != puVar2)) {
        do {
          local_78 = uVar5;
          *(undefined4 *)
           (lVar15 + (longlong)*(int *)(*local_90 + 0x14 + (longlong)iVar9 * 0x18) * 4) = 0xffffffff
          ;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar9 = local_78._4_4_;
          uVar5 = local_78;
        } while (local_90 != plVar1 ||
                 ((uint *)CONCAT44(uStack_7c,uStack_80) != puVar2 || local_78._4_4_ != iVar14));
      }
    }
    else if (iVar14 == 1) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar15 + lVar7 * 4) = 0xffffffff;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0xb58));
    }
    FUN_140e5ca44(plVar1,0);
  }
  else {
    FUN_140e5ca44(plVar1,0);
    *(undefined4 *)(param_1 + 0xb58) = 1;
    FUN_14073a740(plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e5c9ca FUN_140e5c9ca body=121 status=ok
// SIG undefined FUN_140e5c9ca(void)

void FUN_140e5c9ca(longlong param_1,int param_2)

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



// FUNCTION 140e5ca44 FUN_140e5ca44 body=121 status=ok
// SIG undefined FUN_140e5ca44(void)

void FUN_140e5ca44(longlong param_1,int param_2)

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



// FUNCTION 140e5cabe FUN_140e5cabe body=57 status=ok
// SIG undefined FUN_140e5cabe(void)

undefined8 * FUN_140e5cabe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a43e440;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e5cb0c FUN_140e5cb0c body=341 status=ok
// SIG undefined FUN_140e5cb0c(void)

ulonglong FUN_140e5cb0c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong unaff_RBX;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_140e5cc23:
    uVar7 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x30);
    uVar7 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140e5cc23;
      uVar7 = *puVar8;
    }
  }
  FUN_140630e34(&local_48,uVar7);
  if (plStack_40 != (longlong *)0x0) {
    iVar5 = (int)plStack_40[1];
    do {
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plStack_40[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plStack_40 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar9 = plStack_40;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_40 + 0x10))();
    }
    lVar3 = local_48;
    if (plVar9 != (longlong *)0x0) {
      bVar10 = local_48 != 0;
      if (bVar10) {
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        uVar6 = FUN_140e5cc62(lVar3,param_2,&local_48);
        unaff_RBX = (ulonglong)uVar6;
        FUN_1405d7ab2(local_48,(ulonglong)plStack_40 & 0xffffffff);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      goto LAB_140e5cbfc;
    }
  }
  bVar10 = false;
LAB_140e5cbfc:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(unaff_RBX >> 8),(byte)unaff_RBX & bVar10) & 0xffffffff;
}



// FUNCTION 140e5cc62 FUN_140e5cc62 body=1202 status=ok
// SIG undefined FUN_140e5cc62(void)

undefined8 FUN_140e5cc62(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  int *piVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_128 [39];
  char local_101;
  undefined8 local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  char local_e0 [16];
  int local_d0 [6];
  longlong local_b8;
  char local_a8 [40];
  longlong local_80;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = 1;
  local_100 = param_3;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar9 = (int *)*param_2;
    piVar1 = piVar9 + (longlong)*(int *)(param_2 + 1) * 0x12;
    local_f8 = (longlong *)(param_1 + 0x148);
    local_f0 = param_1 + 0xe0;
    local_e8 = param_1;
    do {
      FUN_14096c63a(piVar9 + 4,local_a8);
      if (local_a8[0] == '\x01') {
        if ((*piVar9 == DAT_14cb86240) && (piVar9[2] == DAT_14cb86244._4_4_)) {
          FUN_140f12b10(local_100,local_a8);
        }
        else {
          FUN_140c258c2(local_a8,local_e0);
          cVar3 = FUN_1401144ce(local_e0);
          if (cVar3 == '\0') goto LAB_140e5d0bc;
          local_101 = DAT_14cb8625c._4_4_ == piVar9[2] && *piVar9 == DAT_14cb86258;
          iVar4 = local_d0[0];
          if (local_e0[0] == '\x01') {
            FUN_1447a97f4(&local_70,local_d0);
            if (0 < local_6c) {
              lVar13 = 0;
              uVar14 = 0;
              iVar4 = local_6c;
              iVar7 = DAT_14c948000;
              do {
                bVar15 = local_70 != 0;
                bVar16 = local_70 != iVar7;
                piVar10 = (int *)&DAT_14c948618;
                piVar12 = &DAT_14c948620;
                if (bVar16 && bVar15) {
                  puVar11 = local_68;
                  if (0 < local_4c) {
                    puVar11 = local_58;
                  }
                  if (1 < iVar4) {
                    puVar11 = local_58;
                  }
                  piVar12 = (int *)(puVar11 + lVar13 + 8);
                  piVar10 = (int *)(puVar11 + lVar13);
                }
                if ((*piVar10 == DAT_14cb7beb0) && (*piVar12 == DAT_14cb7beb8)) {
LAB_140e5cf20:
                  FUN_1402b5374(&local_70,uVar14 & 0xffffffff,0);
                  iVar4 = local_6c;
                  iVar7 = DAT_14c948000;
                }
                else {
                  piVar10 = (int *)&DAT_14c948618;
                  piVar12 = &DAT_14c948620;
                  if (bVar16 && bVar15) {
                    puVar11 = local_68;
                    if (0 < local_4c) {
                      puVar11 = local_58;
                    }
                    if (1 < iVar4) {
                      puVar11 = local_58;
                    }
                    piVar12 = (int *)(puVar11 + lVar13 + 8);
                    piVar10 = (int *)(puVar11 + lVar13);
                  }
                  if ((*piVar10 == DAT_14cb7bec8) && (*piVar12 == DAT_14cb7bed0))
                  goto LAB_140e5cf20;
                  piVar10 = &DAT_14c948620;
                  piVar12 = (int *)&DAT_14c948618;
                  if (bVar16 && bVar15) {
                    puVar11 = local_68;
                    if (0 < local_4c) {
                      puVar11 = local_58;
                    }
                    if (1 < iVar4) {
                      puVar11 = local_58;
                    }
                    piVar10 = (int *)(puVar11 + lVar13 + 8);
                    piVar12 = (int *)(puVar11 + lVar13);
                  }
                  if ((*piVar12 == DAT_14cb7bee0) && (*piVar10 == DAT_14cb7bee8))
                  goto LAB_140e5cf20;
                  piVar10 = &DAT_14c948620;
                  piVar12 = (int *)&DAT_14c948618;
                  if (bVar16 && bVar15) {
                    puVar11 = local_68;
                    if (0 < local_4c) {
                      puVar11 = local_58;
                    }
                    if (1 < iVar4) {
                      puVar11 = local_58;
                    }
                    piVar10 = (int *)(puVar11 + lVar13 + 8);
                    piVar12 = (int *)(puVar11 + lVar13);
                  }
                  if ((*piVar12 == DAT_14cb7bef8) && (*piVar10 == DAT_14cb7bf00))
                  goto LAB_140e5cf20;
                  piVar10 = &DAT_14c948620;
                  piVar12 = (int *)&DAT_14c948618;
                  if (bVar16 && bVar15) {
                    puVar11 = local_68;
                    if (0 < local_4c) {
                      puVar11 = local_58;
                    }
                    if (1 < iVar4) {
                      puVar11 = local_58;
                    }
                    piVar10 = (int *)(puVar11 + lVar13 + 8);
                    piVar12 = (int *)(puVar11 + lVar13);
                  }
                  if ((*piVar12 == DAT_14cb7bf10) && (*piVar10 == DAT_14cb7bf18))
                  goto LAB_140e5cf20;
                }
                uVar14 = uVar14 + 1;
                lVar13 = lVar13 + 0xc;
              } while ((longlong)uVar14 < (longlong)iVar4);
            }
            iVar4 = local_70;
            param_1 = local_e8;
            if (local_58 != (undefined1 *)0x0) {
              FUN_1400020a8();
              param_1 = local_e8;
            }
          }
          iVar4 = FUN_1402b3efe(local_f8,iVar4,local_e0);
          if ((iVar4 != -1) &&
             (lVar13 = *local_f8 + (longlong)iVar4 * 0x48, puVar6 = (uint *)(lVar13 + 0x38),
             puVar6 != (uint *)0x0 && lVar13 != 0)) {
            uVar2 = *puVar6;
            if ((-1 < (longlong)(int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x80))) {
              if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
                lVar13 = *(longlong *)(param_1 + 0xe8);
                if (*(longlong *)(param_1 + 0xe8) == 0) {
                  lVar13 = local_f0;
                }
                iVar4 = *(int *)(lVar13 + (ulonglong)
                                          (*(int *)(param_1 + 0xf0) + 0x7fffffffU & uVar2) * 4);
                if (iVar4 != -1) {
                  while (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar4 * 0xc) != uVar2)
                  {
                    iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar4 * 0xc + 4);
                    if (iVar4 == -1) goto LAB_140e5d0bc;
                  }
                  pcVar8 = local_a8;
                  if (local_101 == '\0') {
                    pcVar8 = (char *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar2 * 0x280 +
                                     8);
                  }
                  FUN_140f12b10(local_100,pcVar8);
                  goto LAB_140e5d088;
                }
              }
LAB_140e5d0bc:
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              if (local_80 != 0) {
                FUN_1400020a8();
              }
              uVar5 = 0;
              goto LAB_140e5d0d9;
            }
          }
LAB_140e5d088:
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      piVar9 = piVar9 + 0x12;
    } while (piVar9 != piVar1);
    uVar5 = 1;
  }
LAB_140e5d0d9:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140e5d116 FUN_140e5d116 body=136 status=ok
// SIG undefined FUN_140e5d116(void)

void FUN_140e5d116(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  byte *param_5)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = FUN_140e5d19e(param_1,param_3);
  if ((bVar1 & 1) == 0) {
    if (((bVar1 & 2) != 0) && ((*param_5 & 1) == 0)) {
      if (*(int *)(param_3 + 0x18) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_3 + 0x10);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_3,param_4);
    }
    if ((3 < bVar1) && ((*param_5 & 2) == 0)) {
      FUN_140e5d282(param_1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 140e5d19e FUN_140e5d19e body=228 status=ok
// SIG undefined FUN_140e5d19e(void)

ulonglong FUN_140e5d19e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar4;
  char cVar5;
  uint7 uVar3;
  
  cVar5 = *(char *)(param_2 + 8);
  uVar3 = (uint7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,2);
  if (((cVar5 == '\0') || (*(longlong *)(param_1 + 0xa8) == 0)) ||
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xd0) == '\0')) goto LAB_140e5d1ae;
  if ((*(byte *)(param_1 + 0x248) & 1) == 0) {
    if ((longlong)*(int *)(param_1 + 0x228) != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x220) + 8 + lVar4) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x220) + lVar4) != 0)) goto LAB_140e5d211;
        lVar4 = lVar4 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x228) * 0x10 != lVar4);
    }
    if ((*(int *)(param_1 + 0x240) == 0) || (*(longlong **)(param_1 + 0x238) == (longlong *)0x0))
    goto LAB_140e5d1ae;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x30))();
    if (cVar5 == '\0') goto LAB_140e5d1ae;
    cVar5 = *(char *)(param_2 + 8);
LAB_140e5d211:
    if (cVar5 != '\x02') {
      if (cVar5 == '\x01') {
        uVar2 = CONCAT71(uVar3,6);
      }
      goto LAB_140e5d1ae;
    }
    if ((*(int *)(param_1 + 0x240) == 0) || (*(longlong **)(param_1 + 0x238) == (longlong *)0x0))
    goto LAB_140e5d1ae;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x30))();
    cVar5 = (char)uVar1;
    uVar3 = (uint7)(uint3)((uint)uVar1 >> 8);
  }
  else {
    cVar5 = cVar5 == '\x03';
  }
  uVar2 = CONCAT71(uVar3,cVar5 * '\x02' + '\x02');
LAB_140e5d1ae:
  return uVar2 & 0xffffffff;
}



// FUNCTION 140e5d282 FUN_140e5d282 body=207 status=ok
// SIG undefined FUN_140e5d282(void)

void FUN_140e5d282(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(byte *)(param_3 + 8) - 2 < 2) {
    local_14 = *(undefined4 *)(param_3 + 0x24);
    local_18 = *(undefined4 *)(param_2 + 0x48);
    local_10 = param_4;
    if ((*(int *)(param_1 + 0x240) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x238), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,&local_18);
    }
  }
  else if ((*(byte *)(param_3 + 8) == 1) && ((longlong)*(int *)(param_1 + 0x228) != 0)) {
    lVar2 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x220) + 8 + lVar2) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x220) + lVar2) != 0)) {
        local_14 = *(undefined4 *)(param_3 + 0x24);
        local_18 = *(undefined4 *)(param_2 + 0x48);
        local_10 = param_4;
        FUN_1457b86b2(param_1 + 0x220);
        break;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x228) * 0x10 != lVar2);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e5d352 FUN_140e5d352 body=11 status=ok
// SIG undefined FUN_140e5d352(void)

void FUN_140e5d352(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140e5d35e(param_1,param_2,1,param_3);
  return;
}



// FUNCTION 140e5d35e FUN_140e5d35e body=794 status=ok
// SIG undefined FUN_140e5d35e(void)

void FUN_140e5d35e(longlong param_1,longlong *param_2,char param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  code *local_d8 [2];
  undefined8 *local_c8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((param_1 != 0) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) &&
      ((lVar5 = FUN_140ccfc10(), param_3 == '\0' ||
       (lVar6 = FUN_1401f6e4a(lVar5 + 0xf70), lVar6 != 0)))) &&
     (lVar5 = FUN_1401f6e4a(lVar5 + 0xf88), lVar5 != 0)) {
    uVar1 = *(uint *)(param_1 + 0xc);
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
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar5 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar8;
      }
    }
    uVar2 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar8 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
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
      iVar8 = *(int *)(lVar4 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar4 + 0x10) = iVar9;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar9;
      }
    }
    if (param_2 == (longlong *)0x0) {
      fVar17 = 0.0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar11 = 0;
      uVar12 = 0;
    }
    else {
      lVar4 = param_2[0x39];
      if (lVar4 == 0) {
        puVar7 = &DAT_14c8464e0;
        uVar11 = (undefined4)DAT_14c8464f0;
        uVar12 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar11 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
        uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
        puVar7 = (undefined8 *)(lVar4 + 0x260);
      }
      uVar13 = *(undefined4 *)puVar7;
      uVar14 = *(undefined4 *)((longlong)puVar7 + 4);
      uVar15 = *(undefined4 *)(puVar7 + 1);
      uVar16 = *(undefined4 *)((longlong)puVar7 + 0xc);
      (**(code **)(*param_2 + 0x328))(param_2,&local_f0);
      fVar17 = (float)SQRT(local_e0 * local_e0 + local_f0 * local_f0 + local_e8 * local_e8);
    }
    local_d8[0] = (code *)0x0;
    local_c8 = (undefined8 *)FUN_14001cc68(0x40,8);
    *local_c8 = &PTR_LAB_14b3f70c0;
    local_c8[1] = CONCAT44(iVar3,uVar1);
    local_c8[2] = CONCAT44(iVar8,uVar2);
    *(char *)(local_c8 + 3) = param_3;
    *(undefined4 *)((longlong)local_c8 + 0x1c) = param_4;
    *(undefined4 *)(local_c8 + 4) = uVar13;
    *(undefined4 *)((longlong)local_c8 + 0x24) = uVar14;
    *(undefined4 *)(local_c8 + 5) = uVar15;
    *(undefined4 *)((longlong)local_c8 + 0x2c) = uVar16;
    local_c8[6] = CONCAT44(uVar12,uVar11);
    *(float *)(local_c8 + 7) = fVar17;
    if (local_c8 + 1 != (undefined8 *)0x0) {
      local_d8[0] = FUN_143d0ad94;
    }
    FUN_1407461b0(0x4ff,local_d8);
  }
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e5d67a FUN_140e5d67a body=162 status=ok
// SIG undefined FUN_140e5d67a(void)

void FUN_140e5d67a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x50;
  FUN_140e5d71c(lVar1);
  if (*(char *)(param_1 + 0x48) != '\x03') {
    return;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0xa0);
  iVar3 = FUN_140e5d7c8();
  iVar2 = *(int *)(lVar4 + 0x68);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x60);
    lVar5 = 0;
    do {
      if (*(int *)(lVar4 + lVar5) == iVar3) {
        lVar4 = lVar4 + lVar5;
        goto LAB_140e5d6df;
      }
      lVar5 = lVar5 + 0xc0;
    } while ((longlong)iVar2 * 0xc0 != lVar5);
    if (0 < iVar2) {
LAB_140e5d6df:
      if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x58))) {
        FUN_1406b3508(lVar1,lVar4 + 0x48);
      }
    }
  }
  FUN_1406b3508(lVar1,*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xa0) + 0x100);
  return;
}



// FUNCTION 140e5d71c FUN_140e5d71c body=171 status=ok
// SIG undefined FUN_140e5d71c(void)

void FUN_140e5d71c(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined **local_48;
  longlong local_40;
  ulonglong uStack_38;
  longlong local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &PTR_FUN_14b00be10;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1409c5236(param_1 + 8);
  FUN_1409c5286(param_1 + 0x18,&local_30);
  local_48 = &PTR_FUN_14b00be10;
  FUN_14487da0a(local_30,uStack_28 & 0xffffffff);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(local_40,uStack_38 & 0xffffffff);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5d7c8 FUN_140e5d7c8 body=210 status=ok
// SIG undefined FUN_140e5d7c8(void)

uint FUN_140e5d7c8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_88 [40];
  char local_60 [4];
  longlong local_5c;
  uint local_54;
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = '\0';
  local_5c = 0;
  local_54 = 0;
  plVar2 = (longlong *)FUN_140672052(*(undefined8 *)(param_1 + 8));
  FUN_140e5d89c(param_1,local_50);
  if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2), lVar3 != 0)) {
    FUN_14039fc7b(local_50,local_60,lVar3,0);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] == '\x03') {
    bVar4 = local_5c == 0;
  }
  else {
    uVar1 = local_54;
    if (local_60[0] == '\x02') goto LAB_140e5d859;
    if (local_60[0] != '\x01') {
      uVar1 = 0;
      goto LAB_140e5d859;
    }
    bVar4 = local_54 == 0;
  }
  uVar1 = (uint)!bVar4;
LAB_140e5d859:
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140e5d89c FUN_140e5d89c body=229 status=ok
// SIG undefined FUN_140e5d89c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140e5d89c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144928b90(param_2,10);
  *(undefined1 *)(param_2 + 1) = 1;
  FUN_143df58dc(param_1,local_34);
  lVar2 = param_2 + 0x10;
  FUN_144928d62(lVar2,1,local_34);
  lVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  if (lVar1 == 0) {
    local_40 = 0;
    local_38 = 0;
  }
  else {
    local_38 = *(undefined4 *)(lVar1 + 0x98);
    local_40 = *(undefined8 *)(lVar1 + 0x90);
  }
  FUN_144928d62(lVar2,2,&local_40);
  local_48 = DAT_14cb88854._4_4_;
  local_50 = _DAT_14cb88850;
  FUN_144928d62(lVar2,4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5d992 FUN_140e5d992 body=44 status=ok
// SIG undefined FUN_140e5d992(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e5d992(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7053c = _DAT_14cb7053c + -1;
  *param_1 = DAT_14cb70530;
  DAT_14cb70530 = param_1;
  return;
}



// FUNCTION 140e5d9be FUN_140e5d9be body=80 status=ok
// SIG undefined FUN_140e5d9be(void)

void FUN_140e5d9be(void)

{
  int in_stack_00000038;
  
  if (in_stack_00000038 == 2) {
    FUN_140048f60();
  }
  else if (in_stack_00000038 == 0) {
    FUN_140e5da0e();
  }
  else if (in_stack_00000038 == 1) {
    FUN_143154acd();
    return;
  }
  return;
}



// FUNCTION 140e5da0e FUN_140e5da0e body=1237 status=ok
// SIG undefined FUN_140e5da0e(void)

void FUN_140e5da0e(ulonglong *param_1,undefined8 param_2,int param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *_Src;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar20;
  uint uVar21;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  int local_64;
  undefined2 *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar15 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_70 = param_2;
  uVar13 = FUN_1415e10d0();
  uVar14 = 0;
  FUN_1448e935e(uVar15,&local_58,uVar13,0);
  FUN_1415e10d0();
  lVar10 = local_58;
  if (local_58 != 0) {
    uVar14 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar14 == 0) {
      uVar14 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar15 = FUN_140029432(param_1,uVar14,0);
  param_1[0x37] = uVar14;
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 3;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x20);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 3;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar15;
  lVar17 = FUN_144821ef4(param_1);
  FUN_141788ec8(lVar17,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar17,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar17,lVar10 + 0xec,&local_58,0);
  puVar20 = (undefined2 *)(lVar10 + 0xf8);
  FUN_144a86a8e(lVar17,puVar20,local_70);
  iVar11 = *(int *)(lVar17 + 0x30) + *(int *)(lVar17 + 0x20);
  iVar12 = iVar11 + *(int *)(lVar17 + 0x40);
  local_70 = uVar14;
  if (iVar12 != 0 && SCARRY4(iVar11,*(int *)(lVar17 + 0x40)) == iVar12 < 0) {
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 0xb;
    local_64 = param_4;
    local_60 = puVar20;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x60);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar16 + 0xb;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar16;
    param_1[6] = (ulonglong)(puVar16 + 1);
    uVar15 = *(undefined8 *)(lVar17 + 0x38);
    uVar4 = *(undefined4 *)(lVar17 + 0x40);
    uVar13 = *(undefined8 *)(lVar17 + 0x28);
    uVar5 = *(undefined4 *)(lVar17 + 0x30);
    uVar8 = *(undefined8 *)(lVar17 + 0x18);
    uVar6 = *(undefined4 *)(lVar17 + 0x20);
    uVar9 = *(undefined8 *)(lVar17 + 8);
    uVar7 = *(undefined4 *)(lVar17 + 0x10);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a1e7fa8;
    puVar16[2] = local_70;
    puVar16[3] = uVar9;
    *(undefined4 *)(puVar16 + 4) = uVar7;
    puVar16[5] = uVar8;
    *(undefined4 *)(puVar16 + 6) = uVar6;
    puVar16[7] = uVar13;
    *(undefined4 *)(puVar16 + 8) = uVar5;
    puVar16[9] = uVar15;
    *(undefined4 *)(puVar16 + 10) = uVar4;
    *(undefined8 *)(lVar17 + 8) = 0;
    *(undefined4 *)(lVar17 + 0x10) = 0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    *(undefined4 *)(lVar17 + 0x20) = 0;
    *(undefined8 *)(lVar17 + 0x28) = 0;
    *(undefined4 *)(lVar17 + 0x30) = 0;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined4 *)(lVar17 + 0x40) = 0;
    puVar20 = local_60;
    param_4 = local_64;
  }
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 4;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x28);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 4;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar16 + 2) = param_3 + 7U >> 3;
  *(uint *)((longlong)puVar16 + 0x14) = param_4 + 7U >> 3;
  *(uint *)(puVar16 + 3) = param_5;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar21 = (uint)param_1[0x13];
    if (0 < (int)uVar21) {
      uVar21 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar21 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar10 + 0xfa) != '\0') && (*(char *)(lVar10 + 0xfb) != '\x06')) {
      uVar3 = *puVar20;
      *(uint *)(param_1 + 0x13) = uVar21 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar21 + 1) {
        FUN_1447477d8(puVar2,uVar21);
      }
      uVar14 = param_1[0x12];
      *(undefined2 *)(uVar14 + (longlong)(int)uVar21 * 4) = uVar3;
      *(undefined1 *)(uVar14 + 2 + (longlong)(int)uVar21 * 4) = 1;
      uVar21 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar21) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar16 + 5;
        if ((undefined8 *)param_1[1] < puVar18) {
          FUN_140023dd8(param_1,0x30);
          puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar16 + 5;
        }
        *param_1 = (ulonglong)puVar18;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar16;
        param_1[6] = (ulonglong)(puVar16 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar19 = (void *)((ulonglong)uVar21 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar21 * 4;
        if ((void *)param_1[1] < pvVar19) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar19 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar19;
        memcpy(_Dst,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_70;
        puVar16[3] = _Dst;
        *(uint *)(puVar16 + 4) = uVar21;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5dee4 FUN_140e5dee4 body=40 status=ok
// SIG undefined FUN_140e5dee4(void)

undefined8 FUN_140e5dee4(undefined8 param_1,int param_2)

{
  FUN_140e5df0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e5df0c FUN_140e5df0c body=383 status=ok
// SIG undefined FUN_140e5df0c(void)

void FUN_140e5df0c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b196e40;
  param_1[5] = &PTR_LAB_14b197160;
  param_1[6] = &PTR_FUN_14b197270;
  param_1[0x42] = &PTR_FUN_14b197290;
  param_1[0x94] = &PTR_LAB_14b1972c0;
  param_1[0xb7] = &PTR_FUN_14b1972e0;
  param_1[0x110] = &PTR_FUN_14b1972f8;
  param_1[0x111] = &PTR_LAB_14b197308;
  plVar2 = (longlong *)param_1[0x142];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140e5e0b3(param_1[0x13e],*(undefined4 *)(param_1 + 0x13f));
  if (param_1[0x13e] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c48c4(param_1 + 0x12e);
  FUN_140890760(param_1[300],*(undefined4 *)(param_1 + 0x12d));
  if (param_1[300] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c48c4(param_1 + 0x11d);
  FUN_140e5e08b(param_1[0x11b],*(undefined4 *)(param_1 + 0x11c));
  if (param_1[0x11b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x118],*(undefined4 *)(param_1 + 0x119));
  if (param_1[0x118] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x112],*(undefined4 *)(param_1 + 0x113));
  if (param_1[0x112] != 0) {
    FUN_1400020a8();
  }
  FUN_140a07062(param_1);
  return;
}



// FUNCTION 140e5e08b FUN_140e5e08b body=40 status=ok
// SIG undefined FUN_140e5e08b(void)

void FUN_140e5e08b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457b8754(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 140e5e0b3 FUN_140e5e0b3 body=69 status=ok
// SIG undefined FUN_140e5e0b3(void)

void FUN_140e5e0b3(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x28);
    bVar1 = DAT_14cb26569;
    do {
      if ((*plVar2 != 0) && ((bVar1 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(*plVar2 + 0x50));
        bVar1 = DAT_14cb26569;
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e5e102 FUN_140e5e102 body=1227 status=ok
// SIG undefined FUN_140e5e102(void)

void FUN_140e5e102(longlong param_1,byte *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  PSRWLOCK SRWLock;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  undefined1 auStack_a8 [40];
  undefined4 *local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 *local_70;
  uint local_68;
  undefined4 local_64;
  undefined4 *local_60;
  uint local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  char *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140aceb4a(local_50);
  if (*param_2 == 1) {
    iVar15 = *(int *)(param_2 + 0x30);
    uVar14 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8);
    iVar15 = *(int *)(param_2 + 0x44) * uVar14;
    bVar10 = 1;
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar19 = uVar6 & 0x7fff;
    uVar14 = (uint)(uVar6 >> 0xf);
    lVar9 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar6 < 0) {
      lVar11 = (ulonglong)(uVar19 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70);
    }
    else {
      iVar15 = **(int **)(lVar9 + 0x20);
      lVar11 = 0;
      if (iVar15 <= (int)uVar19) {
        do {
          uVar19 = uVar19 - iVar15;
          iVar15 = (*(int **)(lVar9 + 0x20))[lVar11 + 1];
          lVar11 = lVar11 + 1;
        } while (iVar15 <= (int)uVar19);
      }
      lVar11 = (longlong)(int)uVar19 + *(longlong *)(*(longlong *)(lVar9 + 0x18) + lVar11 * 8);
    }
    iVar15 = *(int *)(lVar9 + 0x4c) * uVar14;
    bVar10 = *param_2;
  }
  if ((bVar10 & 1) == 0) {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar19 = uVar6 & 0x7fff;
    if (uVar19 == 0x7fff) {
      local_80 = &local_74;
      local_78 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_2 + 0x80);
      local_78 = 1;
      local_80 = (undefined4 *)
                 ((ulonglong)(uVar19 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70) +
                 (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  else {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_78 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_80 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  if (*param_2 == 1) {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_68 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_70 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar19 = uVar6 & 0x7fff;
    if (uVar19 == 0x7fff) {
      local_70 = &local_64;
      local_68 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_2 + 0x80);
      local_68 = 1;
      local_70 = (undefined4 *)
                 ((ulonglong)(uVar19 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70) +
                 (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_58 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_60 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar19 = uVar6 & 0x7fff;
    if (uVar19 == 0x7fff) {
      local_60 = &local_54;
      local_58 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_2 + 0x80);
      local_58 = 1;
      local_60 = (undefined4 *)
                 ((ulonglong)(uVar19 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70) +
                 (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (local_48 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_48 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_48 == '\x01') {
      plVar18 = (longlong *)(local_48 + 0x10);
      goto LAB_140e5e300;
    }
  }
  plVar18 = (longlong *)(lVar9 + 0x50);
LAB_140e5e300:
  if ((int)plVar18[1] < 1) {
    pbVar12 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != 0) {
      pbVar12 = param_2 + 0x3c;
    }
    if (0 < *(int *)pbVar12) {
      iVar15 = 0;
      do {
        puVar1 = local_80 + (int)local_78;
        *local_80 = (undefined4)DAT_14c846330;
        puVar2 = local_70 + (int)local_68;
        *local_70 = DAT_14c846330._4_4_;
        puVar3 = local_60 + (int)local_58;
        *local_60 = DAT_14c846338;
        iVar15 = iVar15 + 1;
        pbVar12 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != 0) {
          pbVar12 = param_2 + 0x3c;
        }
        local_80 = puVar1;
        local_70 = puVar2;
        local_60 = puVar3;
      } while (iVar15 < *(int *)pbVar12);
    }
  }
  else {
    pbVar12 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != 0) {
      pbVar12 = param_2 + 0x3c;
    }
    if (0 < *(int *)pbVar12) {
      puVar13 = (uint *)(lVar11 + (longlong)iVar15 * 4);
      uVar19 = (int)plVar18[1] - 1;
      iVar15 = 0;
      do {
        uVar16 = *puVar13;
        if ((int)uVar19 <= (int)*puVar13) {
          uVar16 = uVar19;
        }
        if ((int)uVar16 < 1) {
          uVar16 = 0;
        }
        uVar17 = (ulonglong)uVar16;
        lVar11 = *plVar18;
        uVar4 = *(undefined4 *)(lVar11 + 4 + uVar17 * 0xc);
        uVar5 = *(undefined4 *)(lVar11 + 8 + uVar17 * 0xc);
        puVar1 = local_80 + (int)local_78;
        *local_80 = *(undefined4 *)(lVar11 + uVar17 * 0xc);
        puVar2 = local_70 + (int)local_68;
        *local_70 = uVar4;
        puVar3 = local_60 + (int)local_58;
        *local_60 = uVar5;
        iVar15 = iVar15 + 1;
        pbVar12 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != 0) {
          pbVar12 = param_2 + 0x3c;
        }
        puVar13 = (uint *)((longlong)puVar13 + (ulonglong)(uVar14 << 2));
        local_80 = puVar1;
        local_70 = puVar2;
        local_60 = puVar3;
      } while (iVar15 < *(int *)pbVar12);
    }
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e5e5ce FUN_140e5e5ce body=88 status=ok
// SIG undefined FUN_140e5e5ce(void)

void FUN_140e5e5ce(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a0f7b0();
  FUN_140e5e628(*(undefined8 *)(param_1 + 0x30));
  local_28 = 0x19c0376d;
  uStack_24 = 0x205c499e;
  uStack_20 = 0x8f12cb81;
  uStack_1c = 0x6d6ca5f8;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5e628 FUN_140e5e628 body=865 status=ok
// SIG undefined FUN_140e5e628(void)

void FUN_140e5e628(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  byte bVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  undefined *local_88;
  undefined8 ***local_80;
  undefined1 local_74 [4];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1 + 200;
  FUN_140e5ea14(lVar1);
  *(undefined1 *)(param_1 + 0x330) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb2414c) && (FUN_144b3d300(&DAT_14cb2414c), DAT_14cb2414c == -1)) {
    FUN_1446f470e(&DAT_14cb24144,L"Owner",1);
    _Init_thread_footer(&DAT_14cb2414c);
  }
  local_58 = (ushort)DAT_14c9a8cf0;
  if (local_58 < 0x19) {
    ppppuVar6 = local_70;
  }
  else {
    ppppuVar6 = (undefined8 ****)FUN_14001cc68(DAT_14c9a8cf0 & 0xffff);
    local_70[0] = ppppuVar6;
  }
  lVar8 = param_1 + 0x178;
  if (DAT_14c9a8d88 == (code *)0x0) {
    memset(ppppuVar6,0,(longlong)(int)DAT_14c9a8cf0);
  }
  else {
    (*DAT_14c9a8d88)();
  }
  local_50 = 7;
  local_88 = &DAT_14cb24144;
  local_80 = local_70;
  FUN_140881f5a(lVar8,local_90,&local_88,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar6 = local_70;
    if (0x18 < local_58) {
      ppppuVar6 = (undefined8 ****)local_70[0];
    }
    (*pcVar3)(ppppuVar6);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar2 != 0) {
    lVar10 = *(longlong *)(param_1 + 0xb8);
    lVar9 = 0;
    do {
      plVar4 = *(longlong **)(lVar10 + lVar9);
      if (plVar4 != (longlong *)0x0) {
        local_a0 = lVar8;
        local_98 = lVar10;
        bVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4);
        uVar7 = (ulonglong)((uint)bVar5 * 0x120);
        local_58 = (ushort)*(uint *)((longlong)&DAT_14c9a8510 + uVar7);
        ppppuVar6 = local_70;
        if (0x18 < local_58) {
          ppppuVar6 = (undefined8 ****)
                      FUN_14001cc68(*(uint *)((longlong)&DAT_14c9a8510 + uVar7) & 0xffff,0);
          local_70[0] = ppppuVar6;
        }
        if (*(code **)((longlong)&DAT_14c9a85a8 + uVar7) == (code *)0x0) {
          memset(ppppuVar6,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85a8 + uVar7))();
        }
        local_50 = bVar5;
        (**(code **)(*plVar4 + 0x2a0))(plVar4,local_90);
        lVar8 = local_a0;
        local_80 = local_70;
        local_88 = local_90;
        FUN_140e5edc4(local_a0,local_74,&local_88,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar6 = (undefined8 ****)local_70[0];
          if (local_58 < 0x19) {
            ppppuVar6 = local_70;
          }
          (*pcVar3)(ppppuVar6);
          lVar8 = local_a0;
        }
        lVar10 = local_98;
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
          lVar10 = local_98;
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x28);
    lVar10 = 0;
    do {
      plVar4 = *(longlong **)(lVar8 + lVar10);
      (**(code **)(*plVar4 + 0x88))(plVar4,lVar1);
      *(undefined1 *)(param_1 + 0x330) = 1;
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
  }
  FUN_140e5eb92(lVar1);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e5e98a FUN_140e5e98a body=137 status=ok
// SIG undefined FUN_140e5e98a(void)

void FUN_140e5e98a(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x120,param_2);
  FUN_140aa1618(param_1 + 0x140,param_2);
  FUN_140aa1618(param_1 + 0x160,param_2);
  FUN_140aa1618(param_1 + 0x188,param_2);
  FUN_140aa1618(param_1 + 0x1a8,param_2);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_140aa1618(param_1 + 0xb0,param_2);
    return;
  }
  return;
}



// FUNCTION 140e5ea14 FUN_140e5ea14 body=178 status=ok
// SIG undefined FUN_140e5ea14(void)

void FUN_140e5ea14(longlong param_1)

{
  if (*(int *)(param_1 + 0xac) != -1) {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0xffffffff00000000;
  }
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14063b348(param_1);
    FUN_14063b48e(param_1);
  }
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    FUN_145903832(param_1 + 0xb0);
    FUN_1470f3f4a(param_1 + 0xb0);
  }
  FUN_140e5eac6(param_1 + 0x130);
  FUN_140e5eac6(param_1 + 0x198);
  FUN_140e5eac6(param_1 + 0x200);
  return;
}



// FUNCTION 140e5eac6 FUN_140e5eac6 body=66 status=ok
// SIG undefined FUN_140e5eac6(void)

void FUN_140e5eac6(longlong param_1)

{
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x4c)) {
    FUN_142b4a810();
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) < 0) {
      FUN_142b32846(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 140e5eb08 FUN_140e5eb08 body=137 status=ok
// SIG undefined FUN_140e5eb08(void)

undefined8 FUN_140e5eb08(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    local_50 = *(undefined8 *)(param_1 + 0x28);
    FUN_1446dcdd4(local_48);
    lVar2 = FUN_1448fdc6e(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x38) = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0;
      goto LAB_140e5eb2f;
    }
  }
  uVar1 = FUN_140103674(lVar2);
LAB_140e5eb2f:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5eb92 FUN_140e5eb92 body=562 status=ok
// SIG undefined FUN_140e5eb92(void)

void FUN_140e5eb92(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = *(int *)(param_1 + 0xd8);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar7 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0xd0);
    if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0xc0);
    }
    uVar10 = *puVar6;
    if (uVar10 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 < iVar2) {
    uVar10 = 0xffffffff;
    do {
      if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x24c)) {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar7 * 0x38);
        uVar3 = (uint)((ulonglong)lVar12 >> 0x10);
        uVar11 = (uint)lVar12 & 0xffff;
        lVar8 = *(longlong *)(param_1 + 600);
        if (*(longlong *)(param_1 + 600) == 0) {
          lVar8 = param_1 + 0x250;
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(param_1 + 0x260) - 1U &
                                 (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar11)
                                 + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar7 != -1) {
          lVar8 = *(longlong *)(param_1 + 0x220);
          if (*(longlong *)(param_1 + 0x220) == 0) {
            lVar8 = param_1 + 0x200;
          }
          do {
            if (*(longlong *)(lVar8 + (longlong)iVar7 * 0x10) == lVar12) goto LAB_140e5ed13;
            iVar7 = *(int *)((longlong)iVar7 * 0x10 + lVar8 + 8);
          } while (iVar7 != -1);
        }
      }
      FUN_1470f415c(param_1 + 0xb0);
      iVar2 = *(int *)(param_1 + 0xd8);
LAB_140e5ed13:
      uVar10 = uVar10 & ~(uint)uVar13;
      puVar6 = *(uint **)(param_1 + 0xd0);
      if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0xc0);
      }
      iVar7 = (int)uVar14;
      lVar12 = (longlong)iVar7;
      uVar3 = puVar6[lVar12] & uVar10;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar7) {
          iVar5 = iVar7;
        }
        if (iVar4 <= iVar7) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar6[lVar12 + lVar8 + 1];
          if (uVar3 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar5 - lVar12 == lVar8) {
            return;
          }
        }
        uVar14 = (ulonglong)(iVar7 + (int)lVar8 + 1);
        uVar10 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
  return;
}



// FUNCTION 140e5edc4 FUN_140e5edc4 body=363 status=ok
// SIG undefined FUN_140e5edc4(void)

undefined4 *
FUN_140e5edc4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14040cfbc(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_1408820c2(local_40 + 1,0,uVar1);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_14040c306(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x34) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140882160(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5ef36 FUN_140e5ef36 body=57 status=ok
// SIG undefined FUN_140e5ef36(void)

void FUN_140e5ef36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb218f8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb218f8 = FUN_140002ddd(FUN_1464345cf,uVar1,L"GbxBrainAspect_StopMoving");
  }
  return;
}



// FUNCTION 140e5ef70 FUN_140e5ef70 body=40 status=ok
// SIG undefined FUN_140e5ef70(void)

undefined8 FUN_140e5ef70(undefined8 param_1,int param_2)

{
  FUN_140e5ef98();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e5ef98 FUN_140e5ef98 body=88 status=ok
// SIG undefined FUN_140e5ef98(void)

void FUN_140e5ef98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a625b80;
  param_1[5] = &PTR_FUN_14a626160;
  param_1[6] = &PTR_LAB_14a6261a0;
  FUN_144760e21(param_1[0x5b],*(undefined4 *)(param_1 + 0x5c));
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 140e5eff0 FUN_140e5eff0 body=79 status=ok
// SIG undefined FUN_140e5eff0(void)

undefined8 * FUN_140e5eff0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140e5f0b0(param_1,iVar1);
      FUN_140e5f03f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140e5f03f FUN_140e5f03f body=112 status=ok
// SIG undefined FUN_140e5f03f(void)

void FUN_140e5f03f(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e5f0b0 FUN_140e5f0b0 body=336 status=ok
// SIG undefined FUN_140e5f0b0(void)

void FUN_140e5f0b0(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e5f122;
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
LAB_140e5f122:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e5f200 FUN_140e5f200 body=44 status=ok
// SIG undefined FUN_140e5f200(void)

undefined8 FUN_140e5f200(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (lVar1 = FUN_140e5f22c(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}


