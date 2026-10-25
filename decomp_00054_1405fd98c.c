// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1405fd98c FUN_1405fd98c body=646 status=ok
// SIG undefined FUN_1405fd98c(void)

void FUN_1405fd98c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,char param_6,longlong *param_7)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  undefined8 local_98 [7];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_1[1] == 0) || (param_1[2] == 0)) goto LAB_1405fda6d;
  if (param_6 != '\x01' || param_5 != (longlong *)0x0) goto LAB_1405fda02;
  if ((*param_1 == 0) || (lVar5 = FUN_1447210f0(), lVar5 == 0)) {
    plVar9 = (longlong *)0x0;
LAB_1405fdbeb:
    plVar7 = (longlong *)FUN_1405473b6();
    if (plVar7 != (longlong *)0x0) {
LAB_1405fda10:
      (**(code **)(*plVar7 + 0x128))(plVar7,param_1);
      (**(code **)(*plVar7 + 0x138))(plVar7,param_4,param_3);
      plVar8 = (longlong *)0x0;
      if (param_1[1] != 0) {
        plVar8 = (longlong *)param_1[2];
      }
      (**(code **)(*plVar8 + 0x88))(plVar8,param_2,plVar7,param_3);
      pcVar2 = (code *)*param_7;
      if (pcVar2 != (code *)0x0) {
        plVar8 = param_7 + 4;
        if ((longlong *)param_7[2] != (longlong *)0x0) {
          plVar8 = (longlong *)param_7[2];
        }
        local_b8 = param_1;
        uVar6 = (**(code **)(*plVar8 + 8))();
        (*pcVar2)(uVar6,plVar7,&local_b8);
      }
      if (param_5 == (longlong *)0x0) {
        FUN_14025a2c6(plVar7);
      }
    }
    if (plVar9 == (longlong *)0x0) goto LAB_1405fda6d;
  }
  else {
    FUN_1405fd34a(&local_b8,lVar5);
    if (local_b0 == (longlong *)0x0) {
LAB_1405fda02:
      plVar9 = (longlong *)0x0;
LAB_1405fda04:
      plVar7 = param_5;
      if (param_5 == (longlong *)0x0) goto LAB_1405fdbeb;
      goto LAB_1405fda10;
    }
    iVar4 = (int)local_b0[1];
    do {
      if (iVar4 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_b0[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(local_b0 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar9 = local_b0;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
    plVar7 = local_b8;
    if (plVar9 == (longlong *)0x0) goto LAB_1405fda02;
    if (local_b8 == (longlong *)0x0) goto LAB_1405fda04;
    local_a8[0] = *param_7;
    local_98[0] = 0;
    if (local_a8[0] != 0) {
      plVar8 = param_7 + 4;
      if ((longlong *)param_7[2] != (longlong *)0x0) {
        plVar8 = (longlong *)param_7[2];
      }
      (**(code **)*plVar8)(plVar8,local_98);
    }
    local_c0 = local_a8;
    local_c8 = (undefined1)param_4;
    FUN_1405ff136(plVar7,param_1,param_2,param_3);
  }
  LOCK();
  plVar7 = plVar9 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_1405fda6d:
  if (*param_7 != 0) {
    plVar9 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405fdc14 FUN_1405fdc14 body=130 status=ok
// SIG undefined FUN_1405fdc14(void)

void FUN_1405fdc14(longlong param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *(undefined1 *)(param_1 + 0x4d8) = param_2;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = *(undefined4 *)((longlong)param_3 + 0xe);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x12);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x16);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x1a);
  *(undefined4 *)(param_1 + 0x4e0) = *param_3;
  *(undefined4 *)(param_1 + 0x4e4) = uVar4;
  *(undefined4 *)(param_1 + 0x4e8) = uVar5;
  *(undefined4 *)(param_1 + 0x4ec) = uVar6;
  *(undefined4 *)(param_1 + 0x4ee) = uVar7;
  *(undefined4 *)(param_1 + 0x4f2) = uVar8;
  *(undefined4 *)(param_1 + 0x4f6) = uVar9;
  *(undefined4 *)(param_1 + 0x4fa) = uVar10;
  puVar1 = (undefined8 *)(param_1 + 0x500);
  if (puVar1 != (undefined8 *)(param_3 + 8)) {
    iVar2 = param_3[10];
    uVar3 = *(undefined8 *)(param_3 + 8);
    *(int *)(param_1 + 0x508) = iVar2;
    if (iVar2 != 0 || *(int *)(param_1 + 0x50c) != 0) {
      FUN_144723f1e(puVar1,iVar2,*(int *)(param_1 + 0x50c));
      FUN_144723ff3(*puVar1,uVar3,iVar2);
      return;
    }
    *(undefined4 *)(param_1 + 0x50c) = 0;
  }
  return;
}



// FUNCTION 1405fdc96 FUN_1405fdc96 body=566 status=ok
// SIG undefined FUN_1405fdc96(void)

void FUN_1405fdc96(longlong param_1,int param_2)

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
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 0x310);
  iVar2 = *(int *)(param_1 + 800);
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x318);
    if (*(uint **)(param_1 + 0x318) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
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
        if (uVar8 == uVar13) goto LAB_1405fdccf;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(param_1 + 0x300);
      if (*(longlong *)(param_1 + 0x300) == 0) {
        lVar12 = param_1;
      }
      if (*(longlong *)(lVar12 + 0x48 + (longlong)iVar6 * 0x60) != 0) {
        FUN_1400020a8();
        iVar2 = *(int *)(param_1 + 800);
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = *(uint **)(param_1 + 0x318);
      if (*(uint **)(param_1 + 0x318) == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
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
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1405fdccf;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1405fdccf:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (*(int *)(param_1 + 0x30c) != param_2) {
    FUN_1405fe928(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x328) = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 800) = 0;
  if (((int)uVar11 <= *(int *)(param_1 + 0x324)) && (*(int *)(param_1 + 0x324) < 0x21)) {
    return;
  }
  uVar3 = 0x20;
  if (0x20 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)(param_1 + 0x324) = uVar3;
  FUN_14008f53c(puVar1,0);
  return;
}



// FUNCTION 1405fdecc FUN_1405fdecc body=318 status=ok
// SIG undefined FUN_1405fdecc(void)

void FUN_1405fdecc(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0xb2a) & 0x10) == 0) == (bool)param_2) {
    bVar5 = *(byte *)(param_1 + 0xb2a) & 0xef;
    *(byte *)(param_1 + 0xb2a) = param_2 << 4 | bVar5;
    puVar3 = *(undefined8 **)(param_1 + 0x980);
    if (puVar3 == (undefined8 *)0x0) {
LAB_1405fdfd5:
      *(byte *)(param_1 + 0xb2a) = bVar5;
    }
    else {
      iVar6 = *(int *)(puVar3 + 1);
      do {
        if (iVar6 == 0) {
          bVar5 = *(byte *)(param_1 + 0xb2a) & 0xef;
          goto LAB_1405fdfd5;
        }
        LOCK();
        iVar2 = *(int *)(puVar3 + 1);
        bVar10 = iVar6 == iVar2;
        if (bVar10) {
          *(int *)(puVar3 + 1) = iVar6 + 1;
          iVar2 = iVar6;
        }
        iVar6 = iVar2;
        UNLOCK();
      } while (!bVar10);
      lVar4 = *(longlong *)(param_1 + 0x978);
      if (lVar4 == 0) {
        *(byte *)(param_1 + 0xb2a) = *(byte *)(param_1 + 0xb2a) & 0xef;
      }
      else {
        local_20 = param_1;
        if (param_2 == '\0') {
          iVar6 = *(int *)(lVar4 + 0xf0);
          if ((longlong)iVar6 != 0) {
            lVar9 = (longlong)iVar6 * 8;
            lVar8 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xe8) + lVar8 * 8) == param_1) {
                uVar7 = (uint)lVar8;
                if ((-1 < (int)uVar7) && ((int)uVar7 < iVar6)) {
                  *(undefined8 *)(*(longlong *)(lVar4 + 0xe8) + (ulonglong)(uVar7 & 0x7fffffff) * 8)
                       = 0;
                }
                break;
              }
              lVar8 = lVar8 + 1;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
        }
        else {
          FUN_1405fe01c(lVar4 + 0xe8,&local_20);
        }
        FUN_1405fa972(lVar4);
      }
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3);
        LOCK();
        piVar1 = (int *)((longlong)puVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405fe01c FUN_1405fe01c body=105 status=ok
// SIG undefined FUN_1405fe01c(void)

void FUN_1405fe01c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1405ff466(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1405fe086 FUN_1405fe086 body=815 status=ok
// SIG undefined FUN_1405fe086(void)

longlong FUN_1405fe086(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                      longlong param_5,void *param_6,undefined8 *param_7,undefined8 *param_8,
                      double *param_9,undefined8 param_10,undefined8 *param_11)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char local_b0 [16];
  longlong *local_a0;
  longlong local_98;
  undefined4 local_88 [2];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = 0;
  FUN_14082cf0e(param_1,param_3,param_2,0);
  local_b8 = *param_4;
  FUN_1446dcdd4(local_b0);
  if (DAT_14cb77da0 != 0) {
    uVar8 = FUN_144837462(DAT_14cb77da0,local_b0);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (param_1 + 0x48 != param_5) {
    lVar9 = *(longlong *)(param_5 + 0x30);
    if (*(longlong *)(param_5 + 0x30) == 0) {
      lVar9 = param_5;
    }
    FUN_1400709d4(param_1 + 0x48,lVar9,*(undefined4 *)(param_5 + 0x38),
                  *(undefined4 *)(param_1 + 0x84));
  }
  (**(code **)(*(longlong *)(param_1 + 0x88) + 0x20))(param_1 + 0x88,0);
  *(undefined8 *)(param_1 + 0x90) = param_11[1];
  FUN_1406022fe(param_1 + 0x98,param_11 + 2);
  memcpy((void *)(param_1 + 0xa8),param_6,0x100);
  *(undefined8 *)(param_1 + 0x1f8) = param_7[2];
  uVar8 = param_7[1];
  *(undefined8 *)(param_1 + 0x1e8) = *param_7;
  *(undefined8 *)(param_1 + 0x1f0) = uVar8;
  *(undefined8 *)(param_1 + 0x210) = param_8[2];
  uVar8 = param_8[1];
  *(undefined8 *)(param_1 + 0x200) = *param_8;
  *(undefined8 *)(param_1 + 0x208) = uVar8;
  dVar2 = *param_9;
  dVar3 = param_9[1];
  dVar4 = param_9[2];
  dVar11 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
  if (((dVar11 != 1.0) || (dVar5 = dVar4, dVar6 = dVar3, dVar7 = dVar2, NAN(dVar11))) &&
     (dVar5 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar11)) {
    dVar11 = 1.0 / SQRT(dVar11);
    dVar5 = dVar4 * dVar11;
    dVar6 = dVar3 * dVar11;
    dVar7 = dVar2 * dVar11;
  }
  local_b0[0] = '\0';
  local_88[0] = 0;
  fVar10 = (float)FUN_140a8b8c6(param_10,local_b0);
  dVar2 = (double)fVar10;
  *(double *)(param_1 + 0x218) = dVar7 * dVar2;
  *(double *)(param_1 + 0x220) = dVar6 * dVar2;
  *(double *)(param_1 + 0x228) = dVar5 * dVar2;
  FUN_1448173f8(local_88);
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x224);
  if (*(longlong *)(param_5 + 0x30) != 0) {
    FUN_1400020a8();
  }
  *param_11 = &DAT_14a171d50;
  *(undefined4 *)(param_11 + 3) = 0;
  if (*(int *)((longlong)param_11 + 0x1c) != 0) {
    FUN_140115c12(param_11 + 2,0);
  }
  param_11[1] = 0;
  if (param_11[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405fe3b6 FUN_1405fe3b6 body=624 status=ok
// SIG undefined FUN_1405fe3b6(void)

void FUN_1405fe3b6(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5,undefined1 param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  undefined1 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
  if (lVar4 == 0) goto LAB_1405fe4b4;
  iVar3 = FUN_14490d72a(lVar4);
  lVar4 = *param_5;
  bVar8 = *(byte *)(param_2 + 0xa8) & 1;
  if (lVar4 == 0) {
    if (iVar3 == 3 && bVar8 == 0) goto LAB_1405fe4b4;
    lVar4 = 0;
  }
  else {
    if (*(char *)(lVar4 + 0x27a) == '\x01') {
      bVar8 = *(byte *)(lVar4 + 0x279);
    }
    if ((iVar3 == 3) && (bVar8 == 0)) goto LAB_1405fe4b4;
    if ((*(char *)(param_2 + 0x34) == '\x01') &&
       ((*(longlong *)(lVar4 + 0x10) == 0 &&
        (plVar6 = (longlong *)*param_3, plVar6 != (longlong *)0x0)))) {
      uVar5 = FUN_1403ec9c0();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
      if (plVar6 == (longlong *)0x0) {
LAB_1405fe58a:
        plVar6 = (longlong *)*param_3;
        if (plVar6 != (longlong *)0x0) {
          uVar5 = FUN_1406d192e();
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
          if (plVar6 != (longlong *)0x0) {
            uVar5 = FUN_1406d192e();
            plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
            if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
              lVar4 = 0x18;
              goto LAB_1405fe573;
            }
          }
        }
      }
      else {
        uVar5 = FUN_1403ec9c0();
        plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
        if ((plVar6 == plVar7) || (plVar7 == (longlong *)0x0)) goto LAB_1405fe58a;
        lVar4 = 0x30;
LAB_1405fe573:
        uVar5 = (**(code **)(*plVar7 + lVar4))(plVar7);
        *(undefined8 *)(*param_5 + 0x10) = uVar5;
      }
    }
    lVar4 = *param_5;
    if (((*(byte *)(lVar4 + 0x278) & 8) != 0) && (*param_3 != 0)) {
      *(undefined4 *)(lVar4 + 0x2c0) = *(undefined4 *)(*param_3 + 0x74);
      lVar4 = *param_5;
    }
  }
  if ((*(byte *)(param_2 + 0x1a8) & 8) == 0) {
    local_58 = param_5[1];
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    local_70 = CONCAT31(local_70._1_3_,param_6);
    local_78 = &local_60;
    local_68 = 0;
    local_60 = lVar4;
    FUN_1405fe68a(param_1,param_2,param_3,param_4);
  }
  else {
    local_48 = param_5[1];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    local_78 = &local_50;
    local_70 = 0xffffffff;
    local_50 = lVar4;
    FUN_140600e02(param_1,param_2,param_3,param_4);
  }
LAB_1405fe4b4:
  puVar2 = (undefined8 *)param_5[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fe68a FUN_1405fe68a body=191 status=ok
// SIG undefined FUN_1405fe68a(void)

void FUN_1405fe68a(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined1 in_stack_00000038;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *in_stack_00000028;
  local_20 = in_stack_00000028[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_30 = in_stack_00000038;
  local_38 = 0;
  local_40 = 0;
  local_50 = in_stack_00000030;
  local_58 = &local_28;
  local_48 = 0;
  FUN_140746eb6();
  puVar2 = (undefined8 *)in_stack_00000028[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fe75a FUN_1405fe75a body=461 status=ok
// SIG undefined FUN_1405fe75a(void)

void FUN_1405fe75a(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xa7c) = param_2;
  *(float *)(param_1 + 0xb3c) = (float)*(double *)(lVar2 + 0x6d0);
  switch(param_2) {
  case 0:
    lVar2 = *(longlong *)(param_1 + 0xb30);
    *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(lVar2 + 0x5c);
    fVar6 = *(float *)(lVar2 + 100 + (ulonglong)(*(byte *)(lVar2 + 0x5a) ^ 1) * 8);
    if (*(char *)(lVar2 + 0x59) == '\x01') {
      fVar6 = fVar6 * (*(float *)(param_1 + 0xa90) / *(float *)(lVar2 + 0x6c));
    }
    uVar5 = *(undefined4 *)(lVar2 + 0x60);
    goto LAB_1405fe916;
  case 1:
    lVar2 = *(longlong *)(param_1 + 0xb30);
    fVar6 = 0.0;
    if (0.0 < *(float *)(param_1 + 0xa8c)) {
      fVar4 = *(float *)(param_1 + 0xa8c) - (*(float *)(lVar2 + 0x5c) + *(float *)(lVar2 + 0x70));
      fVar6 = 0.1;
      if (0.1 <= fVar4) {
        fVar6 = fVar4;
      }
    }
    *(float *)(param_1 + 0xb40) = fVar6;
    fVar6 = *(float *)(param_1 + 0xa90);
    uVar5 = *(undefined4 *)(lVar2 + 0x68);
LAB_1405fe916:
    FUN_1405fb3bc(param_1,uVar5,fVar6,0);
    return;
  case 2:
    *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(*(longlong *)(param_1 + 0xb30) + 0x70);
    FUN_140dd17ea(param_1);
    if ((*(longlong **)(param_1 + 0xa38) != (longlong *)0x0) &&
       (**(longlong **)(param_1 + 0xa38) != -1)) {
      FUN_14033a7c0();
      return;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0xb40) = 0;
    lVar2 = *(longlong *)(param_1 + 0xb30);
    pfVar3 = (float *)(lVar2 + 0x6c);
    if (*(char *)(lVar2 + 0x5a) != '\0') {
      pfVar3 = (float *)(lVar2 + 0x78);
    }
    fVar6 = *pfVar3;
    if (*(char *)(lVar2 + 0x59) == '\x01') {
      fVar6 = fVar6 * (*(float *)(param_1 + 0xa90) / *(float *)(lVar2 + 0x6c));
    }
    FUN_1405fb3bc(param_1,*(undefined4 *)(lVar2 + 0x74),fVar6,0);
    plVar1 = *(longlong **)(param_1 + 0xa00);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x720))(plVar1,0);
    }
    plVar1 = *(longlong **)(param_1 + 0xa08);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001405fe8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x720))(plVar1,0);
      return;
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(*(longlong *)(param_1 + 0xb30) + 0x80);
  }
  return;
}



// FUNCTION 1405fe928 FUN_1405fe928 body=127 status=ok
// SIG undefined FUN_1405fe928(void)

void FUN_1405fe928(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 8, 8 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x60,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x30c)) {
    return;
  }
  *(int *)(param_1 + 0x30c) = (int)uVar2;
  FUN_1405fe9a8(param_1,*(undefined4 *)(param_1 + 0x308),uVar2,0x60);
  return;
}



// FUNCTION 1405fe9a8 FUN_1405fe9a8 body=149 status=ok
// SIG undefined FUN_1405fe9a8(void)

void FUN_1405fe9a8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x300);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x300,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x300),param_1,(longlong)param_2 * 0x60);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x300,param_2,param_3,param_4);
  return;
}



// FUNCTION 1405fea3e FUN_1405fea3e body=1784 status=ok
// SIG undefined FUN_1405fea3e(void)

void FUN_1405fea3e(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  void *_Src;
  void *_Dst;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  
  if (*(int *)(*param_1 + 0x48) == 8) {
    *(undefined1 *)param_1[1] = 1;
  }
  else {
    lVar15 = param_1[2];
    if ((((*(char *)(param_2 + 0x108) != '\x01') || (*(longlong *)(param_2 + 0x48) == 0)) ||
        (0xfffffffd < *(int *)(param_2 + 0x50) - 1U)) ||
       (param_2 = FUN_1488bbc76(lVar15,param_2 + 0x48), param_2 != 0)) {
      lVar14 = lVar15 + 0x200;
      if (*(int *)(lVar15 + 0x508) != *(int *)(lVar15 + 0x52c)) {
        uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        lVar19 = lVar15 + 0x530;
        if (*(longlong *)(lVar15 + 0x540) != 0) {
          lVar19 = *(longlong *)(lVar15 + 0x540);
        }
        iVar9 = *(int *)(lVar19 + (ulonglong)
                                  (*(int *)(lVar15 + 0x548) - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        if (iVar9 != -1) {
          lVar19 = *(longlong *)(lVar15 + 0x500);
          if (*(longlong *)(lVar15 + 0x500) == 0) {
            lVar19 = lVar14;
          }
          do {
            lVar12 = lVar19 + (longlong)iVar9 * 0x60;
            if (*(ulonglong *)(lVar19 + (longlong)iVar9 * 0x60) == param_2) {
              lVar19 = lVar12 + 8;
              if (lVar19 != 0 && lVar12 != 0) {
                uVar2 = *(uint *)(lVar12 + 0x50);
                if (3 < (ulonglong)uVar2) {
                  return;
                }
                *(uint *)(lVar12 + 0x50) = uVar2 + 1;
                if (*(uint *)(lVar12 + 0x54) <= uVar2) {
                  FUN_1488be96e(lVar19,uVar2);
                }
                if (*(longlong *)(lVar12 + 0x48) != 0) {
                  lVar19 = *(longlong *)(lVar12 + 0x48);
                }
                lVar12 = (ulonglong)uVar2 * 0x10;
                lVar15 = lVar19 + lVar12;
                lVar14 = *param_3;
                *(longlong *)(lVar19 + lVar12) = lVar14;
                goto LAB_1405fed66;
              }
              break;
            }
            iVar9 = *(int *)(lVar12 + 0x58);
          } while (iVar9 != -1);
        }
      }
      lVar19 = *param_1;
      iVar9 = *(int *)(lVar19 + 0x48);
      *(uint *)(lVar19 + 0x48) = iVar9 + 1U;
      if (*(uint *)(lVar19 + 0x4c) < iVar9 + 1U) {
        FUN_14572d1ac(lVar19,iVar9);
      }
      lVar12 = *(longlong *)(lVar19 + 0x40);
      if (*(longlong *)(lVar19 + 0x40) == 0) {
        lVar12 = lVar19;
      }
      *(ulonglong *)(lVar12 + (longlong)iVar9 * 8) = param_2;
      if (*(int *)(lVar15 + 0x52c) == 0) {
        iVar9 = *(int *)(lVar15 + 0x508);
        *(int *)(lVar15 + 0x508) = iVar9 + 1;
        if (*(int *)(lVar15 + 0x50c) == iVar9) {
          FUN_14185c474(lVar14,iVar9);
        }
        iVar4 = *(int *)(lVar15 + 0x520);
        if (iVar4 == 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar3 = iVar4 + -1;
          }
          iVar3 = iVar3 >> 5;
        }
        lVar19 = lVar15 + 0x510;
        iVar10 = iVar4 + 1;
        iVar16 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar16 = iVar4;
        }
        if (iVar16 >> 5 == iVar3) {
          *(int *)(lVar15 + 0x520) = iVar10;
        }
        else {
          if (*(int *)(lVar15 + 0x524) <= iVar4) {
            iVar3 = iVar4;
            if (iVar4 + 0x20U < 0x40) {
              iVar10 = 0x20;
            }
            else {
              uVar2 = iVar4 + 0x20U >> 5;
              if (*(int *)(lVar15 + 0x524) + 0x1fU < 0x40) {
                uVar17 = 4;
                if (4 < uVar2) {
                  uVar17 = uVar2;
                }
              }
              else {
                uVar17 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
              }
              uVar7 = (ulonglong)(uVar17 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar5 = (uint)(uVar7 + 0xf);
                  if (uVar17 < 0x1ffd) {
                    uVar7 = (ulonglong)
                            (ushort)(&DAT_14c841d90)
                                    [0x32 - (byte)(&DAT_14c841e00)[uVar7 + 0xf >> 4]];
                  }
                  else {
                    uVar11 = (ulonglong)(uVar5 & 0xfffffff0);
                    if (uVar11 < 0x7ff1) {
                      bVar8 = (&DAT_14c841e00)[uVar5 >> 4];
                      uVar13 = 0x32;
                      if (0x32 < bVar8) {
                        uVar13 = (ulonglong)bVar8;
                      }
                      uVar18 = 0x32 - (ulonglong)bVar8;
                      do {
                        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar18 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar18 & 0xffffffff] & 0xf) == 0) goto LAB_1405fef5e;
                        lVar12 = uVar13 + 1 + uVar18;
                        uVar18 = uVar18 - 1;
                      } while (lVar12 != 0x33);
                    }
                    uVar7 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar7 = (ulonglong)DAT_14c841df8;
                    }
                    uVar7 = -uVar7 & (uVar11 + uVar7) - 1;
                  }
                }
                else {
                  uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
                  iVar3 = *(int *)(lVar15 + 0x520);
                }
              }
LAB_1405fef5e:
              iVar6 = (int)(uVar7 >> 2);
              iVar10 = -0x20;
              if ((int)uVar2 <= iVar6) {
                iVar10 = iVar6 << 5;
              }
            }
            *(int *)(lVar15 + 0x524) = iVar10;
            FUN_14008f53c(lVar19,iVar3);
            iVar10 = *(int *)(lVar15 + 0x520) + 1;
          }
          iVar3 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar3 = iVar10;
          }
          *(int *)(lVar15 + 0x520) = iVar10;
          if (iVar10 % 0x20 != 0) {
            lVar12 = *(longlong *)(lVar15 + 0x518);
            if (*(longlong *)(lVar15 + 0x518) == 0) {
              lVar12 = lVar19;
            }
            bVar8 = -(char)(iVar10 % 0x20);
            *(uint *)(lVar12 + (longlong)(iVar3 >> 5) * 4) =
                 (uint)(*(int *)(lVar12 + (longlong)(iVar3 >> 5) * 4) << (bVar8 & 0x1f)) >>
                 (bVar8 & 0x1f);
          }
        }
        lVar12 = (longlong)iVar9;
        if (*(longlong *)(lVar15 + 0x518) != 0) {
          lVar19 = *(longlong *)(lVar15 + 0x518);
        }
        bVar8 = (byte)iVar4 & 0x1f;
        puVar1 = (uint *)(lVar19 + (longlong)(iVar16 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      }
      else {
        lVar19 = *(longlong *)(lVar15 + 0x500);
        if (*(longlong *)(lVar15 + 0x500) == 0) {
          lVar19 = lVar14;
        }
        iVar9 = *(int *)(lVar15 + 0x528);
        lVar12 = (longlong)iVar9;
        iVar4 = *(int *)(lVar19 + 4 + lVar12 * 0x60);
        *(int *)(lVar15 + 0x528) = iVar4;
        iVar3 = *(int *)(lVar15 + 0x52c) + -1;
        *(int *)(lVar15 + 0x52c) = iVar3;
        if (iVar3 != 0) {
          *(undefined4 *)(lVar19 + (longlong)iVar4 * 0x60) = 0xffffffff;
        }
      }
      lVar19 = lVar15 + 0x510;
      if (*(longlong *)(lVar15 + 0x518) != 0) {
        lVar19 = *(longlong *)(lVar15 + 0x518);
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      puVar1 = (uint *)(lVar19 + (longlong)(iVar4 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
      lVar19 = *(longlong *)(lVar15 + 0x500);
      if (*(longlong *)(lVar15 + 0x500) == 0) {
        lVar19 = lVar14;
      }
      lVar12 = lVar12 * 0x60;
      _Src = (void *)(lVar19 + lVar12);
      *(ulonglong *)(lVar19 + lVar12) = param_2;
      *(undefined8 *)(lVar19 + 0x48 + lVar12) = 0;
      *(undefined8 *)(lVar19 + 0x50 + lVar12) = 0x400000000;
      *(undefined4 *)(lVar19 + 0x58 + lVar12) = 0xffffffff;
      uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar2 = uVar2 >> 0x10 ^ uVar2;
      uVar17 = *(int *)(lVar15 + 0x508) - *(int *)(lVar15 + 0x52c);
      if ((uVar17 != 1) && (*(int *)(lVar15 + 0x508) != *(int *)(lVar15 + 0x52c))) {
        lVar19 = lVar15 + 0x530;
        if (*(longlong *)(lVar15 + 0x540) != 0) {
          lVar19 = *(longlong *)(lVar15 + 0x540);
        }
        iVar4 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar15 + 0x548) - 1U & uVar2) * 4);
        if (iVar4 != -1) {
          lVar19 = *(longlong *)(lVar15 + 0x500);
          if (*(longlong *)(lVar15 + 0x500) == 0) {
            lVar19 = lVar14;
          }
          do {
            _Dst = (void *)(lVar19 + (longlong)iVar4 * 0x60);
            if (*(ulonglong *)(lVar19 + (longlong)iVar4 * 0x60) == param_2) {
              if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
                FUN_1400020a8();
              }
              memmove(_Dst,_Src,0x58);
              FUN_1488be9e4(lVar14,iVar9);
              iVar9 = iVar4;
              goto LAB_1405fed19;
            }
            iVar4 = *(int *)((longlong)_Dst + 0x58);
          } while (iVar4 != -1);
        }
      }
      uVar7 = (ulonglong)(((uVar17 >> 1) - 1) + (uint)(uVar17 >> 1 == 0)) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar19 & 0x1f);
      if ((uint)lVar19 < 2) {
        iVar4 = 4;
      }
      if (uVar17 < 4) {
        iVar4 = 4;
      }
      if (((int)uVar17 < 1) || (iVar4 <= *(int *)(lVar15 + 0x548))) {
        uVar2 = *(int *)(lVar15 + 0x548) - 1U & uVar2;
        *(uint *)((longlong)_Src + 0x5c) = uVar2;
        lVar19 = *(longlong *)(lVar15 + 0x540);
        if (*(longlong *)(lVar15 + 0x540) == 0) {
          lVar19 = lVar15 + 0x530;
        }
        *(undefined4 *)((longlong)_Src + 0x58) =
             *(undefined4 *)
              (lVar19 + ((longlong)*(int *)(lVar15 + 0x548) - 1U & (longlong)(int)uVar2) * 4);
        lVar19 = *(longlong *)(lVar15 + 0x540);
        if (*(longlong *)(lVar15 + 0x540) == 0) {
          lVar19 = lVar15 + 0x530;
        }
        *(int *)(lVar19 + ((longlong)*(int *)(lVar15 + 0x548) - 1U & (longlong)(int)uVar2) * 4) =
             iVar9;
      }
      else {
        *(int *)(lVar15 + 0x548) = iVar4;
        FUN_143d9478c(lVar14);
      }
LAB_1405fed19:
      if (*(longlong *)(lVar15 + 0x500) != 0) {
        lVar14 = *(longlong *)(lVar15 + 0x500);
      }
      lVar14 = lVar14 + (longlong)iVar9 * 0x60;
      iVar9 = *(int *)(lVar14 + 0x50);
      *(uint *)(lVar14 + 0x50) = iVar9 + 1U;
      if (*(uint *)(lVar14 + 0x54) < iVar9 + 1U) {
        FUN_1488be96e(lVar14 + 8,iVar9);
      }
      lVar19 = *(longlong *)(lVar14 + 0x48);
      if (*(longlong *)(lVar14 + 0x48) == 0) {
        lVar19 = lVar14 + 8;
      }
      lVar15 = lVar19 + (longlong)iVar9 * 0x10;
      lVar14 = *param_3;
      *(longlong *)(lVar19 + (longlong)iVar9 * 0x10) = lVar14;
LAB_1405fed66:
      if ((lVar14 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      *(longlong *)(lVar15 + 8) = param_3[1];
    }
  }
  return;
}



// FUNCTION 1405ff136 FUN_1405ff136 body=545 status=ok
// SIG undefined FUN_1405ff136(void)

void FUN_1405ff136(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined1 param_5,longlong *param_6)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  longlong local_b8 [2];
  undefined8 local_a8 [7];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar12 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
  if (lVar12 != 0) {
    plVar13 = (longlong *)(param_1 + 0x80);
    dVar2 = *(double *)(lVar12 + 0x6d0);
    iVar3 = *(int *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar3 + 1U) {
      FUN_140746806(plVar13,iVar3);
    }
    lVar14 = *plVar13;
    local_b8[0] = *param_6;
    local_a8[0] = 0;
    local_c0 = plVar13;
    if (local_b8[0] != 0) {
      plVar13 = param_6 + 4;
      if ((longlong *)param_6[2] != (longlong *)0x0) {
        plVar13 = (longlong *)param_6[2];
      }
      (**(code **)*plVar13)(plVar13,local_a8);
    }
    lVar1 = (longlong)iVar3 * 0x3a0 + lVar14;
    local_d0 = local_b8;
    local_c8 = 0x3e4ccccd;
    local_d8 = 1;
    FUN_1409f7e12(lVar1,param_2,param_3,(float)dVar2);
    uVar5 = *param_4;
    uVar6 = param_4[1];
    uVar7 = param_4[2];
    uVar8 = param_4[3];
    uVar9 = *(undefined4 *)((longlong)param_4 + 0x12);
    uVar10 = *(undefined4 *)((longlong)param_4 + 0x16);
    uVar11 = *(undefined4 *)((longlong)param_4 + 0x1a);
    lVar14 = (longlong)iVar3 * 0x3a0 + lVar14;
    puVar15 = (undefined8 *)(lVar14 + 0x330);
    *(undefined4 *)(lVar14 + 0x31e) = *(undefined4 *)((longlong)param_4 + 0xe);
    *(undefined4 *)(lVar14 + 0x322) = uVar9;
    *(undefined4 *)(lVar14 + 0x326) = uVar10;
    *(undefined4 *)(lVar14 + 0x32a) = uVar11;
    *(undefined4 *)(lVar14 + 0x310) = uVar5;
    *(undefined4 *)(lVar14 + 0x314) = uVar6;
    *(undefined4 *)(lVar14 + 0x318) = uVar7;
    *(undefined4 *)(lVar14 + 0x31c) = uVar8;
    if (puVar15 != (undefined8 *)(param_4 + 8)) {
      iVar3 = param_4[10];
      uVar4 = *(undefined8 *)(param_4 + 8);
      *(int *)(lVar1 + 0x338) = iVar3;
      if (iVar3 == 0 && *(int *)(lVar1 + 0x33c) == 0) {
        *(undefined4 *)(lVar1 + 0x33c) = 0;
      }
      else {
        FUN_144723f1e(puVar15,iVar3);
        FUN_144723ff3(*puVar15,uVar4,iVar3);
      }
    }
    *(undefined1 *)(lVar1 + 0x340) = param_5;
    if (*(float *)(lVar1 + 0x390) + *(float *)(lVar1 + 0x394) <= (float)*(double *)(lVar12 + 0x6d0))
    {
      FUN_140745f74(lVar1);
      FUN_140745ec4(local_c0,*(int *)(param_1 + 0x88) + -1,1);
    }
  }
  if (*param_6 != 0) {
    plVar13 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ff358 FUN_1405ff358 body=269 status=ok
// SIG undefined FUN_1405ff358(void)

void FUN_1405ff358(longlong param_1,int param_2)

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



// FUNCTION 1405ff466 FUN_1405ff466 body=353 status=ok
// SIG undefined FUN_1405ff466(void)

void FUN_1405ff466(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405ff4eb;
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
LAB_1405ff4eb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1405ff5c8 FUN_1405ff5c8 body=116 status=ok
// SIG undefined FUN_1405ff5c8(void)

void FUN_1405ff5c8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 1405ff63c FUN_1405ff63c body=130 status=ok
// SIG undefined FUN_1405ff63c(void)

void FUN_1405ff63c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x108) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x108) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x108 + 4) = uVar4;
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



// FUNCTION 1405ff6be FUN_1405ff6be body=2414 status=ok
// SIG undefined FUN_1405ff6be(void)

void FUN_1405ff6be(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  bool bVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_188 [32];
  code **local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  code *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  longlong *local_f8;
  longlong *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  float local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb81740) && (FUN_144b3d300(&DAT_14cb81740), DAT_14cb81740 == -1)) {
    FUN_1446f470e(&DAT_14cb81738,L"Interaction_HitLocation",1);
    _Init_thread_footer(&DAT_14cb81740);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb81750) && (FUN_144b3d300(&DAT_14cb81750), DAT_14cb81750 == -1)) {
    FUN_1446f470e(&DAT_14cb81748,L"Interaction_SpreadAmount",1);
    _Init_thread_footer(&DAT_14cb81750);
  }
  plVar2 = *(longlong **)(param_1 + 0x5e0);
  if (plVar2 == (longlong *)0x0) goto LAB_1405ffa20;
  iVar17 = (int)plVar2[1];
  do {
    if (iVar17 == 0) goto LAB_1405ffa20;
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar19 = iVar17 == iVar5;
    if (bVar19) {
      *(int *)(plVar2 + 1) = iVar17 + 1;
      iVar5 = iVar17;
    }
    iVar17 = iVar5;
    UNLOCK();
  } while (!bVar19);
  if (*(longlong *)(param_1 + 0x5d8) != 0) {
    uVar18 = (ulonglong)*(int *)(param_1 + 0xe8);
    if (0 < (longlong)uVar18) {
      do {
        uVar16 = uVar18 - 1;
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + -8 + uVar18 * 8);
        FUN_1405fbff8(&local_f8,lVar7);
        local_108 = lVar7;
        if (lVar7 == 0) {
          uVar6 = *(uint *)(param_1 + 0xe8);
          if (uVar18 != uVar6) {
            iVar17 = uVar6 - (int)uVar18;
            if (0 < iVar17) {
              iVar17 = 1;
            }
            memmove((void *)(*(longlong *)(param_1 + 0xe0) + uVar16 * 8),
                    (void *)(*(longlong *)(param_1 + 0xe0) + (longlong)(int)(uVar6 - iVar17) * 8),
                    (longlong)iVar17 << 3);
            uVar6 = *(uint *)(param_1 + 0xe8);
          }
          *(uint *)(param_1 + 0xe8) = uVar6 - 1;
        }
        else {
          iVar17 = 0;
          while( true ) {
            if (local_f8 == (longlong *)0x0) {
              iVar5 = (**(code **)(*local_f0 + 0x7b0))();
            }
            else {
              iVar5 = (**(code **)(*local_f8 + 0x5f8))();
            }
            if (iVar5 <= iVar17) break;
            if (local_f8 == (longlong *)0x0) {
              lVar7 = (**(code **)(*local_f0 + 0x610))(local_f0,iVar17);
            }
            else {
              lVar7 = (**(code **)(*local_f8 + 0x600))(local_f8,iVar17);
            }
            if (lVar7 != 0) {
              if (DAT_14caec470 == 0) {
                local_e8 = FUN_1417df956;
                local_120 = FUN_14081d0ea;
                local_128 = &LAB_1463eaa20;
                local_138 = &LAB_147bbd9ea;
                local_140 = FUN_1401cf6d7;
                local_148 = L"Engine";
                local_150 = 0;
                local_158 = 0x10000000;
                local_160 = 8;
                local_168 = (code **)CONCAT44(local_168._4_4_,0x330);
                local_130 = &local_e8;
                FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470);
              }
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                   (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
                lVar7 = FUN_14090ceee(lVar7,local_108,0);
                if (lVar7 == 0) goto LAB_1405ff9eb;
                if (local_f8 == (longlong *)0x0) {
                  (**(code **)(*local_f0 + 0x638))(local_f0,iVar17);
                }
                else {
                  (**(code **)(*local_f8 + 0x608))(local_f8,iVar17);
                }
              }
              lVar10 = *(longlong *)(param_1 + 0x80);
              lVar8 = *(longlong *)(param_1 + 0x5d0);
              local_100 = uVar16;
              if (*(longlong *)(param_1 + 0x88) == 0) {
                if (lVar8 != 0) {
                  if ((longlong)*(int *)(lVar8 + 0x58) == 0) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = *(longlong *)(lVar8 + 0x50);
                    local_110 = (longlong)*(int *)(lVar8 + 0x58) * 0x88;
                    do {
                      lVar8 = FUN_14060002e(lVar14);
                      if (lVar8 == lVar10) goto LAB_1405ffd68;
                      lVar14 = lVar14 + 0x88;
                      local_110 = local_110 + -0x88;
                    } while (local_110 != 0);
                    lVar14 = 0;
LAB_1405ffd68:
                    lVar8 = *(longlong *)(param_1 + 0x5d0);
                  }
                  lVar8 = FUN_14060002e(lVar8 + 0x20);
                  if (lVar8 == lVar10) {
                    lVar14 = *(longlong *)(param_1 + 0x5d0) + 0x60;
                  }
                  if (lVar14 != 0) {
                    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x5a8) + 0x1c8);
                    if (lVar10 == 0) {
                      pdVar9 = (double *)&DAT_14c8464e0;
                      dVar20 = DAT_14c8464f0;
                    }
                    else {
                      pdVar9 = (double *)(lVar10 + 0x260);
                      dVar20 = *(double *)(lVar10 + 0x270);
                    }
                    local_88 = (float)dVar20;
                    local_e8 = DAT_14cb81738;
                    local_e0 = CONCAT71(local_e0._1_7_,2);
                    local_e0 = CONCAT44(0xffffffff,(undefined4)local_e0);
                    local_90 = CONCAT44((float)pdVar9[1],(float)*pdVar9);
                    local_84 = 0x3f800000;
                    FUN_14016d7a8(lVar7,&local_e8);
                    lVar10 = *(longlong *)(param_1 + 0x80);
                    lVar8 = FUN_14060002e(*(longlong *)(param_1 + 0x5d0) + 0x20);
                    fVar21 = 0.0;
                    if (lVar10 != lVar8) {
                      fVar21 = *(float *)(param_1 + 0xf4);
                    }
                    goto LAB_1405ff975;
                  }
                }
              }
              else {
                lVar8 = FUN_14060002e(lVar8 + 0x20);
                fVar21 = *(float *)(param_1 + 0xb8);
                if (lVar10 != lVar8) {
                  fVar21 = 1.0 - fVar21;
                }
                local_88 = (float)*(double *)(param_1 + 0xb0);
                local_e8 = DAT_14cb81738;
                local_e0 = CONCAT71(local_e0._1_7_,2);
                local_e0 = CONCAT44(0xffffffff,(undefined4)local_e0);
                local_90 = CONCAT44((float)*(double *)(param_1 + 0xa8),
                                    (float)*(double *)(param_1 + 0xa0));
                local_84 = 0x3f800000;
                FUN_14016d7a8(lVar7,&local_e8);
                fVar21 = fVar21 * *(float *)(param_1 + 0xf4);
LAB_1405ff975:
                local_168 = &local_e8;
                local_90 = DAT_14cb81748;
                local_88 = (float)CONCAT31(local_88._1_3_,2);
                local_84 = 0xffffffff;
                local_e8 = (code *)((ulonglong)local_e8 & 0xffffffffffffff00);
                local_e0 = 0;
                uStack_d8 = 0;
                local_d0 = 0;
                uStack_c8 = 0;
                local_c0 = 0;
                uStack_b8 = 0;
                local_b0 = 0;
                uStack_a8 = 0;
                local_a0 = 0;
                uStack_98 = 0;
                FUN_140042bb4(lVar7,&local_90,fVar21);
                uVar16 = local_100;
              }
            }
LAB_1405ff9eb:
            iVar17 = iVar17 + 1;
          }
        }
        bVar19 = 1 < (longlong)uVar18;
        uVar18 = uVar16;
      } while (bVar19);
    }
    if ((*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) &&
       (**(longlong **)(param_1 + 0x1e0) != -1)) {
      lVar10 = FUN_140e40dfb();
      lVar7 = *(longlong *)(lVar10 + 0xf0);
      if (lVar7 == 0) {
        uVar11 = FUN_1407f787c();
        lVar7 = FUN_14477b664(uVar11);
        *(longlong *)(lVar10 + 0xf0) = lVar7;
      }
      plVar15 = (longlong *)(lVar10 + 0xe8);
      if (*(longlong *)(lVar10 + 0xf8) == 0) {
        if ((lVar7 != 0) && (*plVar15 != 0)) {
          plVar3 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
            *(undefined8 *)(lVar10 + 0xf8) = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar7 = FUN_144aff482(uVar11,plVar15);
            *(longlong *)(lVar10 + 0xf8) = lVar7;
            if (lVar7 != 0) goto LAB_1405ffdb3;
          }
        }
      }
      else {
LAB_1405ffdb3:
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar7 = *(longlong *)(param_1 + 0x5d0);
          fVar21 = 0.0;
          if (lVar7 != 0) {
            lVar8 = *(longlong *)(param_1 + 0x80);
            if ((longlong)*(int *)(lVar7 + 0x58) == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = *(longlong *)(lVar7 + 0x50);
              lVar7 = (longlong)*(int *)(lVar7 + 0x58) * 0x88;
              do {
                lVar13 = FUN_14060002e(lVar14);
                if (lVar13 == lVar8) goto LAB_1405fff3d;
                lVar14 = lVar14 + 0x88;
                lVar7 = lVar7 + -0x88;
              } while (lVar7 != 0);
              lVar14 = 0;
LAB_1405fff3d:
              lVar7 = *(longlong *)(param_1 + 0x5d0);
            }
            lVar7 = FUN_14060002e(lVar7 + 0x20);
            if (lVar7 == lVar8) {
              lVar14 = *(longlong *)(param_1 + 0x5d0) + 0x60;
            }
            if (lVar14 != 0) {
              lVar7 = *(longlong *)(param_1 + 0x80);
              lVar8 = lVar7;
              if (*(longlong *)(param_1 + 0x5d0) != 0) {
                lVar8 = FUN_14060002e(*(longlong *)(param_1 + 0x5d0) + 0x20);
              }
              fVar21 = 0.0;
              if (lVar7 != lVar8) {
                fVar21 = 1.0;
              }
            }
          }
        }
        else if ((*(longlong *)(param_1 + 0x5d0) == 0) ||
                (lVar7 = *(longlong *)(param_1 + 0x80),
                lVar8 = FUN_14060002e(*(longlong *)(param_1 + 0x5d0) + 0x20), lVar7 == lVar8)) {
          fVar21 = *(float *)(param_1 + 0xb8);
        }
        else {
          fVar21 = 1.0 - *(float *)(param_1 + 0xb8);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x1e0);
        lVar7 = *(longlong *)(lVar10 + 0xf0);
        if (lVar7 == 0) {
          uVar12 = FUN_1407f787c();
          lVar7 = FUN_14477b664(uVar12);
          *(longlong *)(lVar10 + 0xf0) = lVar7;
        }
        lVar8 = *(longlong *)(lVar10 + 0xf8);
        if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar15 != 0)) {
          plVar3 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
            lVar8 = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar8 = FUN_144aff482(uVar12,plVar15);
          }
          *(longlong *)(lVar10 + 0xf8) = lVar8;
        }
        local_168 = (code **)((ulonglong)local_168 & 0xffffffffffffff00);
        FUN_1447997cc(uVar11,lVar8,fVar21 * 100.0,0);
      }
    }
  }
  LOCK();
  plVar15 = plVar2 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_1405ffa20:
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14060002e FUN_14060002e body=138 status=ok
// SIG undefined FUN_14060002e(void)

longlong FUN_14060002e(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb818a8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144815d88(DAT_14cb818a8,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406000ba FUN_1406000ba body=2667 status=ok
// SIG undefined FUN_1406000ba(void)

ulonglong FUN_1406000ba(longlong *param_1,longlong param_2,longlong *param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 ***pppuVar8;
  int iVar9;
  longlong lVar10;
  double *pdVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 ****ppppuVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 *puVar21;
  longlong lVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_168 [32];
  undefined8 ***local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 ***local_110;
  code *local_108;
  code *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 ***local_e8;
  float local_dc;
  undefined8 ***local_d8;
  undefined8 ***local_d0;
  undefined8 ***local_c8;
  undefined8 local_c0;
  undefined8 ***local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 ***local_a0;
  undefined8 ***local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *param_1;
  local_f0 = (longlong *)(lVar3 + 0x88);
  lVar19 = *(longlong *)(lVar3 + 0x88);
  local_f8 = param_3;
  if (lVar19 == 0) {
LAB_140600364:
    ppppuVar15 = (undefined8 ****)0x0;
  }
  else {
    local_a0 = (undefined8 ***)((ulonglong)local_a0 & 0xffffffff00000000);
    local_b8 = *(undefined8 ****)(*(longlong *)(lVar3 + 0x5d0) + 0x20);
    local_b0 = 0x678bcdb;
    local_a8 = 0;
    if (param_2 == 0) {
      puVar17 = &DAT_14c9485f0;
    }
    else {
      puVar17 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
        puVar17 = *(undefined4 **)(param_2 + 8);
      }
    }
    if (DAT_14c947fe0 == 0) {
      lVar20 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar20);
      DAT_14c947fe0 = lVar20;
    }
    FUN_140045924(DAT_14c947fe0,&local_d8,puVar17,1);
    local_d0 = local_d8;
    local_c8 = (undefined8 ***)CONCAT44(local_c8._4_4_,0x678bcdb);
    local_c0 = 0;
    local_140 = CONCAT31(local_140._1_3_,param_4);
    local_148 = &local_a0;
    FUN_143d91514(lVar19,&local_98,&local_d0,&local_b8);
    ppppuVar15 = (undefined8 ****)local_98;
    if ((((undefined8 ****)local_98 == (undefined8 ****)0x0) || (0xfffffffd < (int)uStack_90 - 1U))
       || (*(longlong *)(param_1[1] + 0x10) == 0)) goto LAB_140600364;
    puVar17 = *(undefined4 **)(*(longlong *)(param_1[1] + 0x10) + 8);
    puVar21 = &DAT_14c9485f0;
    if (puVar17 != (undefined4 *)0x0) {
      puVar21 = puVar17;
    }
    if (DAT_14c947fe0 == 0) {
      lVar19 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar19);
      DAT_14c947fe0 = lVar19;
    }
    FUN_140045924(DAT_14c947fe0,&local_b8,puVar21,1);
    if (((undefined8 ****)local_b8 != ppppuVar15) ||
       (lVar19 = *(longlong *)(lVar3 + 0x5d0), lVar19 == 0)) goto LAB_140600364;
    lVar20 = *(longlong *)(param_1[1] + 0x10);
    if ((longlong)*(int *)(lVar19 + 0x58) == 0) {
      lVar22 = 0;
    }
    else {
      lVar22 = *(longlong *)(lVar19 + 0x50);
      lVar19 = (longlong)*(int *)(lVar19 + 0x58) * 0x88;
      do {
        lVar10 = FUN_14060002e(lVar22);
        if (lVar10 == lVar20) goto LAB_1406002a7;
        lVar22 = lVar22 + 0x88;
        lVar19 = lVar19 + -0x88;
      } while (lVar19 != 0);
      lVar22 = 0;
LAB_1406002a7:
      lVar19 = *(longlong *)(lVar3 + 0x5d0);
    }
    lVar19 = FUN_14060002e(lVar19 + 0x20);
    if (lVar19 == lVar20) {
      lVar22 = *(longlong *)(lVar3 + 0x5d0) + 0x60;
    }
    if (lVar22 == 0) goto LAB_140600364;
    fVar26 = *(float *)(lVar22 + 0x18 + (ulonglong)param_4 * 4) * local_a0._0_4_;
    if (fVar26 <= 0.0) {
LAB_140600338:
      *(undefined4 *)(lVar3 + 0xb8) = 0;
      *local_f0 = 0;
      local_f0[1] = 0;
      local_f0[2] = 0;
      *(undefined1 *)param_1[4] = 1;
      ppppuVar15 = (undefined8 ****)CONCAT71((int7)((ulonglong)ppppuVar15 >> 8),1);
      goto LAB_140600451;
    }
    *(float *)param_1[2] = -1.0 / fVar26;
    fVar26 = *(float *)param_1[3] * *(float *)param_1[2] + *(float *)(lVar3 + 0xb8);
    *(float *)(lVar3 + 0xb8) = fVar26;
    ppppuVar15 = (undefined8 ****)CONCAT71((int7)((ulonglong)ppppuVar15 >> 8),1);
    if (fVar26 <= 0.0) goto LAB_140600338;
  }
  lVar19 = *(longlong *)(param_1[1] + 0x10);
  if (lVar19 == 0) goto LAB_140600451;
  local_dc = 0.0;
  local_98 = *(undefined8 ****)(*(longlong *)(lVar3 + 0x5d0) + 0x20);
  uStack_90 = CONCAT44(uStack_90._4_4_,0x678bcdb);
  local_88 = 0;
  if (param_2 == 0) {
    local_e8 = (undefined8 ****)0x0;
  }
  else {
    puVar17 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar17 = *(undefined4 **)(param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar20 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar20);
      DAT_14c947fe0 = lVar20;
    }
    FUN_140045924(DAT_14c947fe0,&local_e8,puVar17,1);
  }
  local_c8 = (undefined8 ***)CONCAT44(local_c8._4_4_,0x678bcdb);
  local_c0 = 0;
  local_140 = CONCAT31(local_140._1_3_,param_4);
  local_148 = (undefined8 ***)&local_dc;
  local_d0 = local_e8;
  FUN_143d91514(lVar19,&local_b8,&local_d0,&local_98);
  pppuVar8 = local_b8;
  if (((undefined8 ****)local_b8 == (undefined8 ****)0x0) || (0xfffffffd < local_b0 - 1U))
  goto LAB_140600451;
  if (*(longlong *)(param_1[1] + 0x10) == 0) {
    piVar18 = &DAT_14c9485f0;
  }
  else {
    piVar4 = *(int **)(*(longlong *)(param_1[1] + 0x10) + 8);
    piVar18 = &DAT_14c9485f0;
    if (piVar4 != (int *)0x0) {
      piVar18 = piVar4;
    }
  }
  local_c8 = &local_98;
  local_a0 = local_b8;
  local_98 = (undefined8 ****)0x0;
  uStack_90 = 0;
  local_88 = local_88 & 0xffffffff00000000;
  local_80 = 0;
  uStack_78 = 0;
  local_d0 = &local_a0;
  FUN_1488bea82(&local_98);
  iVar1 = *piVar18;
  iVar9 = (int)local_98;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (iVar1 == iVar9) goto LAB_140600451;
  local_d0 = pppuVar8;
  FUN_1446dcdd4(&local_98);
  if (DAT_14cb818a8 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = FUN_144815d88(DAT_14cb818a8,&local_98);
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  lVar20 = *(longlong *)(lVar3 + 0x5d0);
  if (lVar20 == 0) goto LAB_140600451;
  if ((longlong)*(int *)(lVar20 + 0x58) == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = *(longlong *)(lVar20 + 0x50);
    lVar20 = (longlong)*(int *)(lVar20 + 0x58) * 0x88;
    do {
      lVar10 = FUN_14060002e(lVar22);
      if (lVar10 == lVar19) goto LAB_1406005ad;
      lVar22 = lVar22 + 0x88;
      lVar20 = lVar20 + -0x88;
    } while (lVar20 != 0);
    lVar22 = 0;
LAB_1406005ad:
    lVar20 = *(longlong *)(lVar3 + 0x5d0);
  }
  lVar20 = FUN_14060002e(lVar20 + 0x20);
  if (lVar20 == lVar19) {
    lVar22 = *(longlong *)(lVar3 + 0x5d0) + 0x60;
  }
  if (lVar22 == 0) goto LAB_140600451;
  lVar20 = *local_f0;
  if (lVar20 == 0) {
    *(longlong *)(lVar3 + 0x88) = lVar19;
    *(undefined4 *)(lVar3 + 0xb8) = 0;
    *(undefined1 *)param_1[4] = 1;
    lVar20 = *(longlong *)(lVar3 + 0x88);
  }
  if (lVar20 != lVar19) goto LAB_140600451;
  fVar26 = *(float *)(lVar22 + 0x18 + (ulonglong)param_4 * 4) * local_dc;
  if (fVar26 <= 0.0) {
    *(undefined4 *)(lVar3 + 0xb8) = 0x3f800000;
    fVar26 = 1.0;
  }
  else {
    *(float *)param_1[2] = 1.0 / fVar26;
    fVar26 = *(float *)param_1[3] * *(float *)param_1[2] + *(float *)(lVar3 + 0xb8);
    *(float *)(lVar3 + 0xb8) = fVar26;
  }
  if (*(longlong *)(lVar3 + 0x90) == 0) {
    bVar23 = false;
  }
  else {
    bVar23 = *(longlong *)(lVar3 + 0x98) != 0;
  }
  if ((local_f8 != (longlong *)0x0) && (!bVar23)) {
    plVar16 = (longlong *)local_f8[8];
    if ((longlong *)local_f8[8] == (longlong *)0x0) {
      plVar16 = local_f8;
    }
    if ((int)local_f8[9] != 0) {
      if (DAT_14c950c29 == '\x01') {
        if (*plVar16 != 0) {
          FUN_1456cec3c();
          goto LAB_140600706;
        }
        lVar20 = 0;
      }
      else {
LAB_140600706:
        lVar20 = *plVar16;
      }
      *(longlong *)(lVar3 + 0x90) = lVar20;
      *(longlong *)(lVar3 + 0x98) = plVar16[1];
      lVar22 = *(longlong *)(*(longlong *)(lVar3 + 0x5a8) + 0x1c8);
      if (lVar22 == 0) {
        pdVar11 = (double *)&DAT_14c8464e0;
        uVar27 = (undefined4)DAT_14c8464f0;
        uVar28 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar27 = (undefined4)*(undefined8 *)(lVar22 + 0x270);
        uVar28 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x270) >> 0x20);
        pdVar11 = (double *)(lVar22 + 0x260);
      }
      dVar5 = *pdVar11;
      dVar6 = pdVar11[1];
      if (lVar20 == 0) {
LAB_140600783:
        lVar20 = 0;
      }
      else {
        if (DAT_14cac9ca8 == 0) {
          local_98 = (undefined8 ***)FUN_141030f22;
          local_100 = FUN_14081d0ea;
          local_108 = FUN_14081d0ea;
          local_118 = &LAB_1478c0a72;
          local_120 = &LAB_1417b2375;
          local_128 = L"Engine";
          local_130 = 0x1000000000;
          local_138 = 0x10000004;
          local_140 = 8;
          local_148 = (undefined8 ***)CONCAT44(local_148._4_4_,0x390);
          local_110 = &local_98;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
        goto LAB_140600783;
      }
      lVar20 = *(longlong *)(lVar20 + 0x1c8);
      if (lVar20 == 0) {
        pdVar11 = (double *)&DAT_14c8464e0;
        uVar24 = (undefined4)DAT_14c8464f0;
        uVar25 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar24 = (undefined4)*(undefined8 *)(lVar20 + 0x270);
        uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + 0x270) >> 0x20);
        pdVar11 = (double *)(lVar20 + 0x260);
      }
      dVar7 = pdVar11[1];
      *(double *)(lVar3 + 0xa0) = (*pdVar11 - dVar5) * 0.5 + dVar5;
      *(double *)(lVar3 + 0xa8) = (dVar7 - dVar6) * 0.5 + dVar6;
      *(double *)(lVar3 + 0xb0) =
           ((double)CONCAT44(uVar25,uVar24) - (double)CONCAT44(uVar28,uVar27)) * 0.5 +
           (double)CONCAT44(uVar28,uVar27);
      *(undefined1 *)param_1[4] = 1;
      fVar26 = *(float *)(lVar3 + 0xb8);
    }
  }
  ppppuVar15 = (undefined8 ****)CONCAT71((int7)((ulonglong)ppppuVar15 >> 8),1);
  if (fVar26 < 1.0) goto LAB_140600451;
  *(undefined4 *)(lVar3 + 0xb8) = 0;
  *local_f0 = 0;
  local_f0[1] = 0;
  local_f0[2] = 0;
  *(undefined1 *)param_1[4] = 1;
  *(longlong *)(param_1[1] + 0x10) = lVar19;
  if (param_4 == 0) {
    *(undefined4 *)(param_1[1] + 0x18) = 0xbf800000;
    *(undefined8 *)(param_1[1] + 0x20) = 0;
    *(undefined4 *)(param_1[1] + 0x28) = 0;
    if (local_f8 != (longlong *)0x0) {
      plVar16 = (longlong *)local_f8[8];
      if ((longlong *)local_f8[8] == (longlong *)0x0) {
        plVar16 = local_f8;
      }
      lVar3 = local_f8[9];
      if ((longlong)(int)lVar3 != 0) {
        lVar19 = 0;
        do {
          if (*(longlong *)((longlong)plVar16 + lVar19) == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = *(longlong **)((longlong)plVar16 + lVar19 + 8);
          }
          lVar20 = (**(code **)(*plVar12 + 0x10))();
          if ((*(longlong *)(lVar20 + 0x60) != 0) &&
             ((lVar22 = param_1[1], *(longlong *)(lVar22 + 0x20) == 0 ||
              (*(float *)(lVar22 + 0x28) <= *(float *)(lVar20 + 0x68) &&
               *(float *)(lVar20 + 0x68) != *(float *)(lVar22 + 0x28))))) {
            *(longlong *)(lVar22 + 0x20) = *(longlong *)(lVar20 + 0x60);
            *(undefined4 *)(param_1[1] + 0x28) = *(undefined4 *)(lVar20 + 0x68);
          }
          lVar19 = lVar19 + 0x10;
        } while ((longlong)(int)lVar3 * 0x10 != lVar19);
      }
    }
    goto LAB_140600451;
  }
  fVar26 = -1.0;
  if (((lVar19 != 0) && (*(char *)(lVar19 + 0x18) != '\x02')) &&
     (lVar20 = *(longlong *)(lVar3 + 0x5d0), lVar20 != 0)) {
    if ((longlong)*(int *)(lVar20 + 0x58) == 0) {
      lVar22 = 0;
    }
    else {
      lVar22 = *(longlong *)(lVar20 + 0x50);
      lVar20 = (longlong)*(int *)(lVar20 + 0x58) * 0x88;
      do {
        lVar10 = FUN_14060002e(lVar22);
        if (lVar10 == lVar19) goto LAB_14060096e;
        lVar22 = lVar22 + 0x88;
        lVar20 = lVar20 + -0x88;
      } while (lVar20 != 0);
      lVar22 = 0;
    }
LAB_14060096e:
    lVar20 = FUN_14060002e();
    if (lVar20 == lVar19) {
      lVar22 = *(longlong *)(lVar3 + 0x5d0) + 0x60;
    }
    if ((lVar22 != 0) && (fVar26 = *(float *)(lVar22 + 0x20), fVar26 < 0.0)) {
      fVar26 = *(float *)(lVar19 + 0xd8);
    }
  }
  *(float *)(param_1[1] + 0x18) = fVar26;
  if (*(int *)(lVar3 + 0x1d8) == 0) {
LAB_140600a13:
    uVar13 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0x1d4);
    uVar13 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar14 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar14 == (undefined8 *)0x0) ||
         ((*(int *)(puVar14 + 2) != *(int *)(lVar3 + 0x1d8) ||
          ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) goto LAB_140600a13;
      uVar13 = *puVar14;
    }
  }
  *(undefined8 *)(param_1[1] + 0x20) = uVar13;
  *(undefined4 *)(param_1[1] + 0x28) = *(undefined4 *)(lVar3 + 0x1d0);
LAB_140600451:
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppppuVar15 & 0xffffffff;
}



// FUNCTION 140600b26 FUN_140600b26 body=116 status=ok
// SIG undefined FUN_140600b26(void)

void FUN_140600b26(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140600b9a FUN_140600b9a body=482 status=ok
// SIG undefined FUN_140600b9a(void)

void FUN_140600b9a(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  uint local_44;
  uint *local_40;
  uint local_38;
  int local_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  local_44 = 1;
  if (iVar2 == 0) {
    local_30 = 0;
    local_48 = 0;
    local_34 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar4 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar4;
      }
      local_48 = (int)uVar8 + 1;
      local_30 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_34 = iVar2;
        if (uVar8 == uVar4) goto LAB_140600bd0;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar5 == 0);
      local_48 = (int)uVar4;
      local_30 = iVar7;
    }
    else {
      local_30 = 0;
      local_48 = 0;
    }
    local_44 = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_44 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_34 = (local_30 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_34) {
      local_34 = iVar2;
    }
  }
LAB_140600bd0:
  local_38 = 0xffffffff;
  local_50 = param_1;
  local_40 = puVar1;
  if (local_34 < iVar2) {
    do {
      FUN_140fa73e4((longlong)local_34 * 0x108 + *local_50 + 8);
      local_38 = local_38 & ~local_44;
      FUN_1449c0562(&local_48);
    } while (local_34 < (int)local_40[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140600d8e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140600d8e FUN_140600d8e body=116 status=ok
// SIG undefined FUN_140600d8e(void)

void FUN_140600d8e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x108,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x108)) {
      uVar2 = uVar1 / 0x108 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x108,8);
  }
  return;
}



// FUNCTION 140600e02 FUN_140600e02 body=5306 status=ok
// SIG undefined FUN_140600e02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140600e02(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                 longlong *param_5,int param_6)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  undefined8 *puVar15;
  float *pfVar16;
  code **ppcVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  bool bVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  code *local_190;
  int *local_188;
  ulonglong local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  code **local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  code *local_120;
  longlong *plStack_118;
  longlong *local_110;
  undefined4 local_f8 [2];
  float local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ushort local_d8;
  byte local_d0;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ushort local_b0;
  byte local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  iVar23 = -1;
  if ((*(byte *)(param_2 + 0x1a8) & 8) == 0) goto LAB_140600ea6;
  lVar8 = (**(code **)(param_1[6] + 0x48))(param_1 + 6);
  if (lVar8 == 0 || *param_3 == 0) goto LAB_140600ea6;
  local_138 = param_4;
  if (((*(byte *)(param_2 + 0x1a8) & 0x10) == 0) && (0 < (longlong)(int)param_1[0xf])) {
    lVar18 = 0;
    do {
      lVar2 = *(longlong *)(param_1[0xe] + lVar18 * 8);
      if ((*(char *)(lVar2 + 6) == '\0') && (*(longlong *)(lVar2 + 0x40) == param_2)) {
        if ((*(int *)(lVar2 + 0x5c) == 0) || (uVar7 = *(uint *)(lVar2 + 0x58), (int)uVar7 < 0)) {
LAB_140600fcb:
          lVar20 = 0;
        }
        else {
          lVar20 = 0;
          if ((int)uVar7 < DAT_14c9647dc) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
            if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != *(int *)(lVar2 + 0x5c))) ||
               ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_140600fcb;
            lVar20 = *plVar9;
          }
        }
        if (*param_3 == lVar20) {
          FUN_14074668c(param_1,*(undefined8 *)(param_1[0xe] + lVar18 * 8));
          break;
        }
      }
      lVar18 = lVar18 + 1;
    } while ((int)param_1[0xf] != lVar18);
  }
  dVar1 = *(double *)(lVar8 + 0x6d0);
  piVar11 = DAT_14cb76740;
  if (DAT_14cb76740 == (int *)0x0) {
    piVar11 = (int *)FUN_140595974(0x1e00,0);
    lVar18 = 0x1f;
    piVar13 = piVar11;
    do {
      piVar12 = piVar13 + 0x3c;
      *(int **)piVar13 = piVar12;
      lVar18 = lVar18 + -1;
      piVar13 = piVar12;
    } while (lVar18 != 0);
    *(int **)piVar12 = DAT_14cb76740;
    _DAT_14cb76748 = _DAT_14cb76748 + 0x20;
  }
  DAT_14cb76740 = *(int **)piVar11;
  _DAT_14cb7674c = _DAT_14cb7674c + 1;
  *piVar11 = -1;
  *(undefined1 *)(piVar11 + 1) = 1;
  *(undefined4 *)((longlong)piVar11 + 5) = 0;
  *(undefined1 *)((longlong)piVar11 + 9) = 0;
  piVar11[3] = 0;
  piVar11[4] = 0;
  piVar11[5] = 0;
  piVar11[6] = 0;
  piVar11[6] = 0;
  piVar11[7] = 0;
  piVar11[8] = 0;
  piVar11[9] = 0;
  piVar11[10] = 0x3dcccccd;
  piVar11[0xb] = 0;
  piVar11[0xc] = 0x3f800000;
  piVar11[0x2e] = 0;
  piVar11[0x2f] = 0;
  piVar11[0x30] = 0;
  piVar11[0xd] = 0;
  piVar11[0xe] = 0;
  piVar11[0xf] = 0;
  piVar11[0x10] = 0;
  piVar11[0x11] = 0;
  piVar11[0x12] = 0;
  piVar11[0x13] = 0;
  piVar11[0x14] = 0;
  piVar11[0x15] = 0;
  piVar11[0x16] = 0;
  piVar11[0x17] = 0;
  piVar11[0x18] = 0;
  piVar11[0x19] = 0;
  piVar11[0x1a] = 0;
  piVar11[0x1b] = 0;
  piVar11[0x1c] = 0;
  piVar11[0x1d] = 0;
  piVar11[0x1e] = 0;
  piVar11[0x1f] = 0;
  piVar11[0x20] = 0;
  piVar11[0x21] = 0;
  piVar11[0x22] = 0;
  piVar11[0x23] = 0;
  piVar11[0x24] = 0;
  piVar11[0x25] = 0;
  piVar11[0x26] = 0;
  piVar11[0x27] = 0;
  piVar11[0x28] = 0;
  piVar11[0x29] = 0;
  piVar11[0x31] = 0x80;
  piVar11[0x32] = -1;
  piVar11[0x33] = 0;
  piVar11[0x36] = 0;
  piVar11[0x37] = 0;
  piVar11[0x38] = 0;
  piVar11[0x3a] = -1;
  *(longlong *)(piVar11 + 0x10) = param_2;
  iVar23 = (int)param_1[0xf];
  *(uint *)(param_1 + 0xf) = iVar23 + 1U;
  if (*(uint *)((longlong)param_1 + 0x7c) < iVar23 + 1U) {
    FUN_14654a840(param_1 + 0xe,iVar23);
  }
  *(int **)(param_1[0xe] + (longlong)iVar23 * 8) = piVar11;
  *(undefined1 *)(piVar11 + 1) = 1;
  *(bool *)((longlong)piVar11 + 7) = param_6 != -1;
  if (param_6 == -1) {
    iVar23 = *(int *)((longlong)param_1 + 0x44);
    *piVar11 = iVar23;
    iVar6 = 1;
    if (iVar23 < 0x7fff) {
      iVar6 = iVar23 + 1;
    }
    *(int *)((longlong)param_1 + 0x44) = iVar6;
  }
  else {
    *piVar11 = param_6;
  }
  if ((*(char *)(param_2 + 0x1a8) < '\0') && (lVar18 = *param_3, lVar18 != 0)) {
    if (DAT_14cb56270 == 0) {
      local_160 = &local_120;
      local_120 = FUN_1449e2820;
      local_150 = FUN_14081d0ea;
      local_158 = FUN_1427b09ee;
      local_168 = &LAB_148630fef;
      local_170 = FUN_1464b6a91;
      local_178 = L"Engine";
      local_180 = 0;
      local_188 = (int *)CONCAT44(local_188._4_4_,0x10004001);
      local_190 = (code *)CONCAT44(local_190._4_4_,8);
      local_198 = (longlong *)CONCAT44(local_198._4_4_,0x28);
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar9 = (longlong *)FUN_144718840(lVar18,DAT_14cb56270);
    if ((plVar9 != (longlong *)0x0) && (lVar18 = (**(code **)(*plVar9 + 0x20))(plVar9), lVar18 != 0)
       ) {
      local_148 = (code **)(lVar18 + 400);
      FUN_140457ffc(local_148,param_1);
      local_140 = param_1[2];
      lVar2 = param_1[3];
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
        UNLOCK();
      }
      local_120 = (code *)0x0;
      plStack_118 = (longlong *)((ulonglong)plStack_118 & 0xffffffff00000000);
      FUN_1446efa72(&local_120,0,3,0x10);
      plStack_118 = (longlong *)CONCAT44(plStack_118._4_4_,3);
      *(undefined ***)local_120 = &PTR_LAB_14b3e9ef0;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar20 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar20 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar20;
      *(longlong *)(local_120 + 0x10) = lVar14;
      *(undefined ***)local_120 = &PTR_FUN_14b3f6230;
      *(longlong *)(local_120 + 0x18) = local_140;
      *(longlong *)(local_120 + 0x20) = lVar2;
      iVar23 = 3;
      if (local_120 == (code *)0x0) {
LAB_140602176:
        if (iVar23 != 0) {
          if (local_120 == (code *)0x0) goto LAB_140601365;
          (*(code *)**(undefined8 **)local_120)(local_120,0);
          FUN_1446efa72(&local_120,0,0,0x10);
          goto LAB_140601349;
        }
      }
      else {
        cVar4 = (**(code **)(*(longlong *)local_120 + 0x30))();
        if (cVar4 == '\0') {
          iVar23 = (int)plStack_118;
          goto LAB_140602176;
        }
        if (*(int *)(lVar18 + 0x1a4) < 1) {
          iVar23 = *(int *)(lVar18 + 0x198);
          iVar6 = *(int *)(lVar18 + 0x1a0) + -1;
          *(int *)(lVar18 + 0x1a0) = iVar6;
          if (iVar6 <= iVar23) {
            iVar6 = iVar23;
            if (0 < iVar23) {
              iVar19 = 0;
              do {
                if (((*(int *)(*local_148 + (longlong)iVar19 * 0x10 + 8) == 0) ||
                    (plVar9 = *(longlong **)(*local_148 + (longlong)iVar19 * 0x10),
                    plVar9 == (longlong *)0x0)) ||
                   (cVar4 = (**(code **)(*plVar9 + 0x28))(), cVar4 != '\0')) {
                  FUN_14005b288(local_148,iVar19);
                  FUN_14005b248(local_148);
                }
                else {
                  iVar19 = iVar19 + 1;
                }
                iVar6 = *(int *)(lVar18 + 0x198);
              } while (iVar19 < iVar6);
            }
            iVar19 = 2;
            if (2 < iVar6 * 2) {
              iVar19 = iVar6 * 2;
            }
            *(int *)(lVar18 + 0x1a0) = iVar19;
            if ((iVar19 < iVar23) && (*(int *)(lVar18 + 0x19c) != iVar6)) {
              FUN_14045812c();
            }
          }
        }
        if (((int)plStack_118 != 0) && (local_120 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_120 + 0x38))(local_120,&local_c8);
        }
        ppcVar17 = local_148;
        iVar23 = *(int *)(lVar18 + 0x198);
        *(uint *)(lVar18 + 0x198) = iVar23 + 1U;
        if (*(uint *)(lVar18 + 0x19c) < iVar23 + 1U) {
          FUN_1447a71f6(local_148,iVar23);
        }
        pcVar10 = *ppcVar17;
        lVar18 = (longlong)iVar23 * 0x10;
        *(undefined8 *)(pcVar10 + lVar18) = 0;
        *(undefined4 *)(pcVar10 + lVar18 + 8) = 0;
        *(code **)(pcVar10 + lVar18) = local_120;
        local_120 = (code *)0x0;
        *(int *)(pcVar10 + lVar18 + 8) = (int)plStack_118;
LAB_140601349:
        plStack_118 = (longlong *)((ulonglong)plStack_118 & 0xffffffff00000000);
      }
      if (local_120 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140601365:
  pcVar10 = (code *)*param_5;
  lVar18 = param_5[1];
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  ppcVar17 = (code **)(piVar11 + 0x12);
  plVar9 = *(longlong **)(piVar11 + 0x14);
  *(code **)(piVar11 + 0x12) = pcVar10;
  *(longlong *)(piVar11 + 0x14) = lVar18;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar13 = (int *)((longlong)plVar9 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    pcVar10 = *ppcVar17;
  }
  if (pcVar10 == (code *)0x0) {
    FUN_1405fab15(&local_120);
    plVar9 = plStack_118;
    if (ppcVar17 != &local_120) {
      *(code **)(piVar11 + 0x12) = local_120;
      local_120 = (code *)0x0;
      plVar3 = *(longlong **)(piVar11 + 0x14);
      if (plStack_118 != plVar3) {
        plStack_118 = (longlong *)0x0;
        *(longlong **)(piVar11 + 0x14) = plVar9;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar3 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar13 = (int *)((longlong)plVar3 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
    }
    plVar9 = plStack_118;
    if (plStack_118 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_118 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_118)(plStack_118);
        LOCK();
        piVar13 = (int *)((longlong)plVar9 + 0xc);
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (*piVar13 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    pcVar10 = *ppcVar17;
  }
  pcVar10[0x278] = (code)((byte)pcVar10[0x278] | 2);
  local_148 = ppcVar17;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar18 = (ulonglong)((uint)*(ushort *)(param_2 + 0x1aa) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_120 = (code *)((ulonglong)local_120 & 0xffffffffffffff00);
  local_f8[0] = 0;
  FUN_1456bb102(&local_120,*param_3);
  pfVar21 = &local_f0;
  FUN_1448729ea(lVar18,pfVar21,&local_120);
  if (local_d0 == 3) {
    fVar24 = local_f0;
    bVar5 = 3;
  }
  else {
    pfVar16 = &local_c8;
    FUN_1400b56fe(pfVar16,&local_f0,3);
    fVar24 = local_c8;
    if (local_a8 == 0) {
      fVar24 = 5.0;
    }
    pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar10 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar16 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar10)(pfVar16);
    }
    bVar5 = local_d0;
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
      bVar5 = local_d0;
    }
  }
  pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
  if (pcVar10 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar21 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar10)(pfVar21);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  FUN_1448173f8(local_f8);
  if (((char)local_120 == '\x03') && (local_110 != (longlong *)0x0)) {
    LOCK();
    piVar13 = (int *)((longlong)local_110 + 0xc);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar18 = (ulonglong)((uint)*(ushort *)(param_2 + 0x1ac) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_120 = (code *)((ulonglong)local_120 & 0xffffffffffffff00);
  local_f8[0] = 0;
  FUN_1456bb102(&local_120,*param_3);
  pfVar21 = &local_f0;
  FUN_1448729ea(lVar18,pfVar21,&local_120);
  if (local_d0 == 3) {
    fVar26 = local_f0;
    bVar5 = 3;
  }
  else {
    pfVar16 = &local_c8;
    FUN_1400b56fe(pfVar16,&local_f0,3);
    fVar26 = local_c8;
    if (local_a8 == 0) {
      fVar26 = 0.1;
    }
    pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar10 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar16 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar10)(pfVar16);
    }
    bVar5 = local_d0;
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
      bVar5 = local_d0;
    }
  }
  pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
  if (pcVar10 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar21 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar10)(pfVar21);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  FUN_1448173f8(local_f8);
  if (((char)local_120 == '\x03') && (local_110 != (longlong *)0x0)) {
    LOCK();
    piVar13 = (int *)((longlong)local_110 + 0xc);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar18 = (ulonglong)((uint)*(ushort *)(param_2 + 0x1b0) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_120 = (code *)((ulonglong)local_120 & 0xffffffffffffff00);
  local_f8[0] = 0;
  FUN_1456bb102(&local_120,*param_3);
  pfVar21 = &local_f0;
  FUN_1448729ea(lVar18,pfVar21,&local_120);
  if (local_d0 == 3) {
    fVar27 = local_f0;
    bVar5 = 3;
  }
  else {
    pfVar16 = &local_c8;
    FUN_1400b56fe(pfVar16,&local_f0,3);
    fVar27 = 0.0;
    if (local_a8 != 0) {
      fVar27 = local_c8;
    }
    pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar10 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar16 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar10)(pfVar16);
    }
    bVar5 = local_d0;
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
      bVar5 = local_d0;
    }
  }
  pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
  if (pcVar10 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar21 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar10)(pfVar21);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  FUN_1448173f8(local_f8);
  if (((char)local_120 == '\x03') && (local_110 != (longlong *)0x0)) {
    LOCK();
    piVar13 = (int *)((longlong)local_110 + 0xc);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar18 = (ulonglong)((uint)*(ushort *)(param_2 + 0x1ae) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_120 = (code *)((ulonglong)local_120 & 0xffffffffffffff00);
  local_f8[0] = 0;
  FUN_1456bb102(&local_120,*param_3);
  pfVar21 = &local_f0;
  FUN_1448729ea(lVar18,pfVar21,&local_120);
  if (local_d0 == 3) {
    local_d0 = 3;
    fVar25 = local_f0;
  }
  else {
    pfVar16 = &local_c8;
    FUN_1400b56fe(pfVar16,&local_f0,3);
    fVar25 = 0.0;
    if (local_a8 != 0) {
      fVar25 = local_c8;
    }
    pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar10 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar16 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar10)(pfVar16);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
    }
  }
  pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d0 * 0x120));
  if (pcVar10 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar21 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar10)(pfVar21);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  FUN_1448173f8(local_f8);
  if (((char)local_120 == '\x03') && (local_110 != (longlong *)0x0)) {
    LOCK();
    piVar13 = (int *)((longlong)local_110 + 0xc);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  ppcVar17 = local_148;
  piVar11[3] = (int)((float)dVar1 + fVar25);
  piVar11[0xd] = (int)fVar25;
  pcVar10 = *local_148;
  if (pcVar10[0x26c] == (code)0x1) {
    fVar26 = *(float *)(pcVar10 + 0x268);
  }
  if (fVar26 <= 0.1) {
    fVar26 = 0.1;
  }
  piVar11[10] = (int)fVar26;
  piVar11[0xb] = (int)fVar27;
  if (pcVar10[0x264] == (code)0x1) {
    fVar24 = *(float *)(pcVar10 + 0x260);
  }
  piVar11[9] = (int)fVar24;
  FUN_143d08626(piVar11 + 0x16,param_3);
  if (local_138 == 0) {
    piVar11[0x1a] = 0;
    iVar23 = 0;
  }
  else {
    uVar7 = *(uint *)(local_138 + 0xc);
    piVar11[0x1a] = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar23 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar23 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar23;
      if (bVar22) {
        local_140 = CONCAT44(local_140._4_4_,iVar6);
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
        iVar6 = (int)local_140;
      }
      LOCK();
      iVar23 = *(int *)(lVar18 + 0x10);
      bVar22 = iVar23 == 0;
      if (bVar22) {
        *(int *)(lVar18 + 0x10) = iVar6;
        iVar23 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar23 = iVar6;
      }
    }
  }
  piVar11[0x1b] = iVar23;
  if ((*(byte *)(*(longlong *)(piVar11 + 0x12) + 0x278) & 8) == 0) {
    iVar23 = *(int *)(*(longlong *)(piVar11 + 0x12) + 0x2c0);
  }
  else if (*param_3 == 0) {
    iVar23 = 0x3f800000;
  }
  else {
    iVar23 = *(int *)(*param_3 + 0x74);
  }
  piVar11[0xc] = iVar23;
  if (0.0 < fVar25) {
    piVar11[6] = (int)-fVar25;
    piVar11[8] = (int)-fVar25;
  }
  if (param_3[1] == 0) {
    lVar18 = *param_3;
    if (lVar18 == 0) {
LAB_140601953:
      if (*(longlong *)(*param_3 + 0x1b0) != 0) {
        uVar7 = *(uint *)(*(longlong *)(*param_3 + 0x1b0) + 0xc);
        goto LAB_14060196a;
      }
      piVar11[0x18] = 0;
      iVar23 = 0;
    }
    else {
      if (DAT_14caf64b8 == 0) {
        local_120 = FUN_141030f22;
        local_150 = FUN_14081d0ea;
        local_158 = FUN_142b4754c;
        local_160 = &local_120;
        local_168 = &LAB_147c45ce0;
        local_170 = (code *)&LAB_1463f1ff4;
        local_178 = L"Game";
        local_180 = 0x4000000000;
        local_188 = (int *)CONCAT44(local_188._4_4_,0x10000004);
        local_190 = (code *)CONCAT44(local_190._4_4_,8);
        local_198 = (longlong *)CONCAT44(local_198._4_4_,0x428);
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30))
      goto LAB_140601953;
      uVar7 = *(uint *)(lVar18 + 0xc);
LAB_14060196a:
      piVar11[0x18] = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar18 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar18 = 0;
      }
      iVar23 = *(int *)(lVar18 + 0x10);
      if (*(int *)(lVar18 + 0x10) == 0) {
        LOCK();
        iVar23 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar23;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar23 = *(int *)(lVar18 + 0x10);
        bVar22 = iVar23 == 0;
        if (bVar22) {
          *(int *)(lVar18 + 0x10) = iVar6;
          iVar23 = 0;
        }
        UNLOCK();
        ppcVar17 = local_148;
        if (bVar22) {
          iVar23 = iVar6;
        }
      }
    }
    piVar11[0x19] = iVar23;
  }
  if ((*(byte *)(param_2 + 0x1a8) & 0x40) != 0) {
    local_190 = *ppcVar17;
    local_198 = param_3;
    FUN_14074c3a4(param_2,&local_120,&local_f0,&local_c8);
    pcVar10 = *ppcVar17;
    if (&local_120 != (code **)(pcVar10 + 0x1e0)) {
      *(longlong **)(pcVar10 + 0x1f0) = local_110;
      *(code **)(pcVar10 + 0x1e0) = local_120;
      *(longlong **)(pcVar10 + 0x1e8) = plStack_118;
      pcVar10[0x1f8] = (code)0x1;
      pcVar10 = *ppcVar17;
    }
    if (&local_f0 != (float *)(pcVar10 + 0x200)) {
      *(undefined8 *)(pcVar10 + 0x210) = local_e0;
      *(ulonglong *)(pcVar10 + 0x200) = CONCAT44(uStack_ec,local_f0);
      *(undefined8 *)(pcVar10 + 0x208) = uStack_e8;
      pcVar10[0x218] = (code)0x1;
      pcVar10 = *ppcVar17;
    }
    *(undefined8 *)(pcVar10 + 0x230) = local_b8;
    *(float *)(pcVar10 + 0x220) = local_c8;
    *(undefined4 *)(pcVar10 + 0x224) = uStack_c4;
    *(undefined4 *)(pcVar10 + 0x228) = uStack_c0;
    *(undefined4 *)(pcVar10 + 0x22c) = uStack_bc;
    pcVar10[0x238] = (code)0x1;
  }
  lVar18 = FUN_1411902e8(param_2);
  if (lVar18 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb767b0) && (FUN_144b3d300(&DAT_14cb767b0), DAT_14cb767b0 == -1)) {
      FUN_1446f470e(&DAT_14cb767a8,L"OnEffectTick",1);
      _Init_thread_footer(&DAT_14cb767b0);
    }
    lVar18 = FUN_14477b072(lVar18,DAT_14cb767a8);
    *(bool *)((longlong)piVar11 + 9) = 0 < *(int *)(lVar18 + 0x68);
  }
  (**(code **)(*param_1 + 0x18))(param_1,lVar8,piVar11);
  if (fVar25 <= 0.0) {
    local_130 = *(longlong *)(piVar11 + 0x12);
    local_128 = *(longlong *)(piVar11 + 0x14);
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    if (piVar11[0x19] == 0) {
LAB_140601e64:
      plVar9 = (longlong *)0x0;
    }
    else {
      uVar7 = piVar11[0x18];
      plVar9 = (longlong *)0x0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar15 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar15 == (undefined8 *)0x0) ||
           ((*(int *)(puVar15 + 2) != piVar11[0x19] || ((*(uint *)(puVar15 + 1) & 0x10200000) != 0))
           )) goto LAB_140601e64;
        plVar9 = (longlong *)*puVar15;
      }
    }
    if (((((piVar11[0x17] == 0) || (uVar7 = piVar11[0x16], (int)uVar7 < 0)) ||
         (DAT_14c9647dc <= (int)uVar7)) ||
        ((puVar15 = (undefined8 *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
         puVar15 == (undefined8 *)0x0 || (*(int *)(puVar15 + 2) != piVar11[0x17])))) ||
       ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) {
      local_120 = (code *)0x0;
    }
    else {
      local_120 = (code *)*puVar15;
      if (local_120 != (code *)0x0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c();
      }
    }
    lVar8 = local_138;
    plStack_118 = plVar9;
    if ((plVar9 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(plVar9);
    }
    local_170 = (code *)CONCAT71(local_170._1_7_,param_6 != -1);
    local_178 = (wchar_t *)((ulonglong)local_178 & 0xffffffffffffff00);
    local_180 = local_180 & 0xffffffffffffff00;
    local_190 = (code *)((ulonglong)local_190 & 0xffffffffffffff00);
    local_198 = &local_130;
    local_188 = piVar11;
    FUN_140746eb6(param_1,param_2,&local_120,lVar8);
  }
  iVar23 = *piVar11;
LAB_140600ea6:
  plVar9 = (longlong *)param_5[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar11 = (int *)((longlong)plVar9 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return iVar23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406022be FUN_1406022be body=63 status=ok
// SIG undefined FUN_1406022be(void)

undefined8 * FUN_1406022be(undefined8 *param_1,longlong param_2)

{
  *param_1 = &DAT_14a171d50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  return param_1;
}



// FUNCTION 1406022fe FUN_1406022fe body=88 status=ok
// SIG undefined FUN_1406022fe(void)

undefined8 * FUN_1406022fe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140602356(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140602356 FUN_140602356 body=317 status=ok
// SIG undefined FUN_140602356(void)

void FUN_140602356(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406023c4;
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
LAB_1406023c4:
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



// FUNCTION 14060249a FUN_14060249a body=57 status=ok
// SIG undefined FUN_14060249a(void)

void FUN_14060249a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69bc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69bc8 = FUN_140002ddd(FUN_146523243,uVar1,L"InventoryBodySettings");
  }
  return;
}



// FUNCTION 1406024d4 FUN_1406024d4 body=6307 status=ok
// SIG undefined FUN_1406024d4(void)

void FUN_1406024d4(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined ***pppuVar25;
  undefined8 *puVar26;
  void **ppvVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 auStack_128 [32];
  undefined ***local_108;
  undefined ***local_100;
  longlong local_f8;
  undefined ***local_f0;
  undefined ***local_e8;
  longlong local_e0;
  undefined ***local_d8;
  undefined4 *local_d0;
  undefined ***local_c8;
  longlong *local_c0;
  undefined ***local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  void *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  pdVar5 = *(double **)(param_1 + 8);
  lVar29 = *(longlong *)(param_1 + 0x10);
  lVar28 = *(longlong *)(lVar29 + 0x28);
  lVar23 = (longlong)*param_2 * 200;
  dVar3 = *(double *)(lVar28 + 0x90 + lVar23);
  if (dVar3 < pdVar5[3] || dVar3 == pdVar5[3]) {
    lVar19 = lVar28 + lVar23;
    if (*pdVar5 < *(double *)(lVar19 + 0xa8) || *pdVar5 == *(double *)(lVar19 + 0xa8)) {
      if (*(double *)(lVar19 + 0x98) < pdVar5[4] || *(double *)(lVar19 + 0x98) == pdVar5[4]) {
        if (pdVar5[1] < *(double *)(lVar19 + 0xb0) || pdVar5[1] == *(double *)(lVar19 + 0xb0)) {
          if (*(double *)(lVar19 + 0xa0) < pdVar5[5] || *(double *)(lVar19 + 0xa0) == pdVar5[5]) {
            if (pdVar5[2] < *(double *)(lVar19 + 0xb8) || pdVar5[2] == *(double *)(lVar19 + 0xb8)) {
              if (*(int *)(lVar28 + 0x84 + lVar23) != -1) {
                local_a8 = (undefined **)
                           CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar28 + 0x80 + lVar23));
                plVar24 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
                if (plVar24 != (longlong *)0x0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24,&local_a8);
                  local_a8 = (undefined **)
                             CONCAT44(local_a8._4_4_,
                                      *(undefined4 *)(*(longlong *)(lVar29 + 0x28) + 0x84 + lVar23))
                  ;
                  plVar24 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
                  if (plVar24 != (longlong *)0x0) {
                    (**(code **)(*plVar24 + 0x10))(plVar24,&local_a8);
                    goto LAB_140603d45;
                  }
                }
                    /* WARNING: Subroutine does not return */
                std::_Xbad_function_call();
              }
              plVar24 = *(longlong **)(param_1 + 0x18);
              puVar26 = (undefined8 *)plVar24[1];
              puVar1 = (undefined4 *)(*(longlong *)(*plVar24 + 0x28) + lVar23);
              local_a8 = *(undefined ***)plVar24[2];
              local_b0 = *(undefined8 *)(*(longlong *)(*plVar24 + 0x28) + 8 + lVar23);
              pcVar6 = (code *)*puVar26;
              plVar18 = puVar26 + 4;
              if ((longlong *)puVar26[2] != (longlong *)0x0) {
                plVar18 = (longlong *)puVar26[2];
              }
              uVar17 = (**(code **)(*plVar18 + 8))();
              local_e0 = (*pcVar6)(uVar17,&local_b0,&local_a8);
              if ((*(longlong *)(local_e0 + 0x508) == 0) || (*(longlong *)(local_e0 + 0x518) == 0))
              {
                uVar7 = *(ulonglong *)plVar24[2];
                if (uVar7 < *(ulonglong *)(puVar1 + 2)) {
                  *(undefined4 *)(local_e0 + 0x500) = 5;
                  *(ulonglong *)(local_e0 + 0x508) = uVar7;
                  uVar14 = puVar1[1];
                  uVar15 = puVar1[2];
                  uVar16 = puVar1[3];
                  *(undefined4 *)(local_e0 + 0x510) = *puVar1;
                  *(undefined4 *)(local_e0 + 0x514) = uVar14;
                  *(undefined4 *)(local_e0 + 0x518) = uVar15;
                  *(undefined4 *)(local_e0 + 0x51c) = uVar16;
                }
                else {
                  uVar14 = puVar1[1];
                  uVar15 = puVar1[2];
                  uVar16 = puVar1[3];
                  *(undefined4 *)(local_e0 + 0x500) = *puVar1;
                  *(undefined4 *)(local_e0 + 0x504) = uVar14;
                  *(undefined4 *)(local_e0 + 0x508) = uVar15;
                  *(undefined4 *)(local_e0 + 0x50c) = uVar16;
                  uVar17 = *(undefined8 *)plVar24[2];
                  *(undefined4 *)(local_e0 + 0x510) = 5;
                  *(undefined8 *)(local_e0 + 0x518) = uVar17;
                }
              }
              local_d0 = puVar1;
              local_c0 = plVar24;
              if ((longlong)(int)puVar1[10] != 0) {
                pppuVar22 = *(undefined ****)(puVar1 + 8);
                local_b8 = pppuVar22 + (longlong)(int)puVar1[10] * 0xb;
                do {
                  lVar29 = local_e0;
                  local_f0 = *(undefined ****)plVar24[2];
                  local_e8 = pppuVar22;
                  if (*(char *)(local_f0 + 0x4a) == '\x01') {
                    iVar4 = *(int *)(local_f0 + 0x43);
                    if ((longlong)iVar4 != 0) {
                      ppuVar8 = local_f0[0x42];
                      local_d8 = local_f0 + 0x26;
                      lVar28 = 0;
                      do {
                        local_a0 = *(undefined8 *)((longlong)ppuVar8 + lVar28 + 8);
                        local_a8 = &PTR_LAB_14a1e1978;
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar28 + 0x10);
                        ppvVar27 = &local_98;
                        for (lVar23 = 9; lVar23 != 0; lVar23 = lVar23 + -1) {
                          *ppvVar27 = (void *)*puVar26;
                          puVar26 = puVar26 + 1;
                          ppvVar27 = ppvVar27 + 1;
                        }
                        local_f8 = lVar29;
                        local_108 = (undefined ***)&DAT_14c846480;
                        local_100 = pppuVar22;
                        FUN_14044e2b0(local_f0,0,local_d8);
                        lVar28 = lVar28 + 0x58;
                      } while ((longlong)iVar4 * 0x58 - lVar28 != 0);
                    }
                    iVar4 = *(int *)(local_f0 + 0x45);
                    if ((longlong)iVar4 != 0) {
                      ppuVar8 = local_f0[0x44];
                      local_d8 = local_f0 + 0x26;
                      lVar28 = 0;
                      do {
                        local_a0 = *(undefined8 *)((longlong)ppuVar8 + lVar28 + 8);
                        local_100 = &local_a8;
                        local_a8 = &PTR_LAB_14a1e1948;
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar28 + 0x10);
                        local_98 = (void *)*puVar26;
                        iStack_90 = *(int *)(puVar26 + 1);
                        uStack_8c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar28 + 0x20);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar28 + 0x30);
                        local_78 = *puVar26;
                        uStack_70 = *(undefined4 *)(puVar26 + 1);
                        uStack_6c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar28 + 0x40);
                        local_68 = *puVar26;
                        uStack_60 = puVar26[1];
                        local_f8 = lVar29;
                        local_108 = local_d8;
                        FUN_1449ab00f(0,local_f0,&DAT_14c846480,pppuVar22);
                        lVar28 = lVar28 + 0x50;
                      } while ((longlong)iVar4 * 0x50 != lVar28);
                    }
                    iVar4 = *(int *)(local_f0 + 0x49);
                    if ((longlong)iVar4 != 0) {
                      ppuVar8 = local_f0[0x48];
                      pppuVar22 = local_f0 + 0x26;
                      lVar29 = 0;
                      do {
                        local_a0 = *(undefined8 *)((longlong)ppuVar8 + lVar29 + 8);
                        local_a8 = &PTR_LAB_14a1e1968;
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar29 + 0x10);
                        ppvVar27 = &local_98;
                        for (lVar28 = 9; lVar28 != 0; lVar28 = lVar28 + -1) {
                          *ppvVar27 = (void *)*puVar26;
                          puVar26 = puVar26 + 1;
                          ppvVar27 = ppvVar27 + 1;
                        }
                        local_f8 = local_e0;
                        local_100 = local_e8;
                        local_108 = (undefined ***)&DAT_14c846480;
                        FUN_147108f08(local_f0,0,pppuVar22,&local_a8);
                        lVar29 = lVar29 + 0x58;
                      } while ((longlong)iVar4 * 0x58 - lVar29 != 0);
                    }
                    lVar29 = local_e0;
                    pppuVar22 = local_e8;
                    if ((longlong)*(int *)(local_f0 + 0x41) != 0) {
                      ppuVar8 = local_f0[0x40];
                      local_d8 = local_f0 + 0x26;
                      local_c8 = (undefined ***)((longlong)*(int *)(local_f0 + 0x41) * 0x30);
                      pppuVar21 = (undefined ***)0x0;
                      do {
                        local_a0 = *(undefined8 *)((longlong)(ppuVar8 + 1) + (longlong)pppuVar21);
                        local_a8 = &PTR_LAB_14a1e1938;
                        puVar26 = (undefined8 *)((longlong)(ppuVar8 + 2) + (longlong)pppuVar21);
                        local_98 = (void *)*puVar26;
                        iStack_90 = *(int *)(puVar26 + 1);
                        uStack_8c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        local_88 = *(undefined8 *)((longlong)(ppuVar8 + 4) + (longlong)pppuVar21);
                        uStack_80 = ((undefined8 *)((longlong)(ppuVar8 + 4) + (longlong)pppuVar21))
                                    [1];
                        local_f8 = lVar29;
                        local_100 = pppuVar22;
                        local_108 = (undefined ***)&DAT_14c846480;
                        FUN_14044f75a(local_f0,0,local_d8);
                        pppuVar21 = pppuVar21 + 6;
                      } while (local_c8 != pppuVar21);
                    }
                    plVar24 = local_c0;
                    iVar4 = *(int *)(local_f0 + 0x47);
                    if ((longlong)iVar4 != 0) {
                      ppuVar8 = local_f0[0x46];
                      pppuVar22 = local_f0 + 0x26;
                      lVar29 = 0;
                      do {
                        local_a0 = *(undefined8 *)((longlong)ppuVar8 + lVar29 + 8);
                        local_a8 = &PTR_LAB_14a1e27b0;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = (longlong)*(int *)((longlong)ppuVar8 + lVar29 + 0x18);
                        lVar28 = SUB168(auVar9 * ZEXT816(0x18),0);
                        lVar28 = lVar28 + (ulonglong)(lVar28 == 0);
                        if (SUB168(auVar9 * ZEXT816(0x18),8) != 0) {
                          lVar28 = -1;
                        }
                        local_98 = (void *)FUN_14001cc68(lVar28,0x10);
                        iStack_90 = *(int *)((longlong)ppuVar8 + lVar29 + 0x18);
                        local_78 = *(undefined8 *)((longlong)ppuVar8 + lVar29 + 0x30);
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar29 + 0x20);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar29 + 0x40);
                        local_68 = *puVar26;
                        uStack_60 = puVar26[1];
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar29 + 0x50);
                        local_58 = *puVar26;
                        uStack_50 = puVar26[1];
                        memcpy(local_98,*(void **)((longlong)ppuVar8 + lVar29 + 0x10),
                               (longlong)iStack_90 * 0x18);
                        local_f8 = local_e0;
                        local_100 = local_e8;
                        local_108 = (undefined ***)&DAT_14c846480;
                        FUN_1404507a5(local_f0,0,pppuVar22,&local_a8);
                        local_a8 = &PTR_LAB_14a1e27b0;
                        if (local_98 != (void *)0x0) {
                          FUN_1400020a8();
                        }
                        lVar29 = lVar29 + 0x60;
                      } while ((longlong)iVar4 * 0x60 != lVar29);
                    }
                  }
                  pppuVar22 = local_e8 + 0xb;
                } while (pppuVar22 != local_b8);
              }
              if ((longlong)(int)local_d0[0x12] != 0) {
                pppuVar22 = *(undefined ****)(local_d0 + 0x10);
                pppuVar21 = pppuVar22 + (longlong)(int)local_d0[0x12] * 0xc;
                lVar29 = local_e0;
                local_d8 = pppuVar21;
                do {
                  lVar28 = *(longlong *)plVar24[2];
                  if (*(char *)(lVar28 + 0x250) == '\x01') {
                    if ((longlong)*(int *)(lVar28 + 0x218) != 0) {
                      lVar23 = *(longlong *)(lVar28 + 0x210);
                      local_f0 = (undefined ***)(lVar28 + 0x130);
                      local_e8 = (undefined ***)((longlong)*(int *)(lVar28 + 0x218) * 0x58);
                      pppuVar21 = (undefined ***)0x0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + (longlong)pppuVar21);
                        local_a8 = &PTR_LAB_14a1e1978;
                        puVar26 = (undefined8 *)(lVar23 + 0x10 + (longlong)pppuVar21);
                        ppvVar27 = &local_98;
                        for (lVar19 = 9; lVar19 != 0; lVar19 = lVar19 + -1) {
                          *ppvVar27 = (void *)*puVar26;
                          puVar26 = puVar26 + 1;
                          ppvVar27 = ppvVar27 + 1;
                        }
                        local_108 = local_f0;
                        local_100 = &local_a8;
                        local_f8 = lVar29;
                        FUN_1404507a5(0,lVar28,&DAT_14c846480);
                        pppuVar21 = pppuVar21 + 0xb;
                      } while (local_e8 != pppuVar21);
                    }
                    iVar4 = *(int *)(lVar28 + 0x228);
                    if ((longlong)iVar4 != 0) {
                      lVar23 = *(longlong *)(lVar28 + 0x220);
                      local_f0 = (undefined ***)(lVar28 + 0x130);
                      lVar19 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + lVar19);
                        local_a8 = &PTR_LAB_14a1e1948;
                        puVar26 = (undefined8 *)(lVar23 + 0x10 + lVar19);
                        local_98 = (void *)*puVar26;
                        iStack_90 = *(int *)(puVar26 + 1);
                        uStack_8c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)(lVar23 + 0x20 + lVar19);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        puVar26 = (undefined8 *)(lVar23 + 0x30 + lVar19);
                        local_78 = *puVar26;
                        uStack_70 = *(undefined4 *)(puVar26 + 1);
                        uStack_6c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)(lVar23 + 0x40 + lVar19);
                        local_68 = *puVar26;
                        uStack_60 = puVar26[1];
                        local_108 = local_f0;
                        local_100 = &local_a8;
                        local_f8 = lVar29;
                        FUN_1449a97f0(0,lVar28,&DAT_14c846480,pppuVar22);
                        lVar19 = lVar19 + 0x50;
                        lVar29 = local_e0;
                      } while ((longlong)iVar4 * 0x50 != lVar19);
                    }
                    iVar4 = *(int *)(lVar28 + 0x248);
                    local_e8 = pppuVar22;
                    if ((longlong)iVar4 != 0) {
                      lVar23 = *(longlong *)(lVar28 + 0x240);
                      lVar19 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + lVar19);
                        local_a8 = &PTR_LAB_14a1e1968;
                        puVar26 = (undefined8 *)(lVar23 + 0x10 + lVar19);
                        ppvVar27 = &local_98;
                        for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
                          *ppvVar27 = (void *)*puVar26;
                          puVar26 = puVar26 + 1;
                          ppvVar27 = ppvVar27 + 1;
                        }
                        local_100 = local_e8;
                        local_108 = (undefined ***)&DAT_14c846480;
                        local_f8 = lVar29;
                        FUN_14710b173(lVar28,0,lVar28 + 0x130,&local_a8);
                        lVar19 = lVar19 + 0x58;
                        lVar29 = local_e0;
                      } while ((longlong)iVar4 * 0x58 - lVar19 != 0);
                    }
                    pppuVar22 = local_e8;
                    iVar4 = *(int *)(lVar28 + 0x208);
                    if ((longlong)iVar4 != 0) {
                      lVar23 = *(longlong *)(lVar28 + 0x200);
                      local_f0 = (undefined ***)(lVar28 + 0x130);
                      lVar19 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + lVar19);
                        local_a8 = &PTR_LAB_14a1e1938;
                        puVar26 = (undefined8 *)(lVar23 + 0x10 + lVar19);
                        local_98 = (void *)*puVar26;
                        iStack_90 = *(int *)(puVar26 + 1);
                        uStack_8c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)(lVar23 + 0x20 + lVar19);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        local_108 = local_f0;
                        local_100 = &local_a8;
                        local_f8 = lVar29;
                        FUN_14044b170(0,lVar28,&DAT_14c846480,pppuVar22);
                        lVar19 = lVar19 + 0x30;
                        lVar29 = local_e0;
                      } while ((longlong)iVar4 * 0x30 != lVar19);
                    }
                    plVar24 = local_c0;
                    pppuVar21 = local_d8;
                    if ((longlong)*(int *)(lVar28 + 0x238) != 0) {
                      lVar23 = *(longlong *)(lVar28 + 0x230);
                      local_f0 = (undefined ***)(lVar28 + 0x130);
                      local_c8 = (undefined ***)((longlong)*(int *)(lVar28 + 0x238) * 0x60);
                      pppuVar25 = (undefined ***)0x0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + (longlong)pppuVar25);
                        local_a8 = &PTR_LAB_14a1e27b0;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = (longlong)*(int *)(lVar23 + 0x18 + (longlong)pppuVar25);
                        lVar19 = SUB168(auVar10 * ZEXT816(0x18),0);
                        lVar19 = lVar19 + (ulonglong)(lVar19 == 0);
                        if (SUB168(auVar10 * ZEXT816(0x18),8) != 0) {
                          lVar19 = -1;
                        }
                        local_98 = (void *)FUN_14001cc68(lVar19,0x10);
                        iStack_90 = *(int *)(lVar23 + 0x18 + (longlong)pppuVar25);
                        local_78 = *(undefined8 *)(lVar23 + 0x30 + (longlong)pppuVar25);
                        puVar26 = (undefined8 *)(lVar23 + 0x20 + (longlong)pppuVar25);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        puVar26 = (undefined8 *)(lVar23 + 0x40 + (longlong)pppuVar25);
                        local_68 = *puVar26;
                        uStack_60 = puVar26[1];
                        puVar26 = (undefined8 *)(lVar23 + 0x50 + (longlong)pppuVar25);
                        local_58 = *puVar26;
                        uStack_50 = puVar26[1];
                        memcpy(local_98,*(void **)(lVar23 + 0x10 + (longlong)pppuVar25),
                               (longlong)iStack_90 * 0x18);
                        pppuVar22 = local_e8;
                        local_100 = local_e8;
                        local_108 = (undefined ***)&DAT_14c846480;
                        local_f8 = lVar29;
                        FUN_1471066e5(lVar28,0,local_f0,&local_a8);
                        local_a8 = &PTR_LAB_14a1e27b0;
                        if (local_98 != (void *)0x0) {
                          FUN_1400020a8();
                        }
                        pppuVar25 = pppuVar25 + 0xc;
                        pppuVar21 = local_d8;
                        lVar29 = local_e0;
                      } while (local_c8 != pppuVar25);
                    }
                  }
                  pppuVar22 = pppuVar22 + 0xc;
                } while (pppuVar22 != pppuVar21);
              }
              if ((longlong)(int)local_d0[6] != 0) {
                pppuVar22 = *(undefined ****)(local_d0 + 4);
                local_c8 = pppuVar22 + (longlong)(int)local_d0[6] * 6;
                do {
                  lVar28 = local_e0;
                  lVar29 = *(longlong *)plVar24[2];
                  local_f0 = pppuVar22;
                  if (*(char *)(lVar29 + 0x250) == '\x01') {
                    if ((longlong)*(int *)(lVar29 + 0x218) != 0) {
                      lVar23 = *(longlong *)(lVar29 + 0x210);
                      local_e8 = (undefined ***)(lVar29 + 0x130);
                      local_d8 = (undefined ***)((longlong)*(int *)(lVar29 + 0x218) * 0x58);
                      pppuVar21 = (undefined ***)0x0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + (longlong)pppuVar21);
                        local_a8 = &PTR_LAB_14a1e1978;
                        puVar26 = (undefined8 *)(lVar23 + 0x10 + (longlong)pppuVar21);
                        ppvVar27 = &local_98;
                        for (lVar19 = 9; lVar19 != 0; lVar19 = lVar19 + -1) {
                          *ppvVar27 = (void *)*puVar26;
                          puVar26 = puVar26 + 1;
                          ppvVar27 = ppvVar27 + 1;
                        }
                        local_f8 = lVar28;
                        local_108 = local_e8;
                        local_100 = &local_a8;
                        FUN_14044f75a(0,lVar29);
                        pppuVar21 = pppuVar21 + 0xb;
                      } while (local_d8 != pppuVar21);
                    }
                    iVar4 = *(int *)(lVar29 + 0x228);
                    if ((longlong)iVar4 != 0) {
                      lVar23 = *(longlong *)(lVar29 + 0x220);
                      local_e8 = (undefined ***)(lVar29 + 0x130);
                      lVar19 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + lVar19);
                        local_a8 = &PTR_LAB_14a1e1948;
                        puVar26 = (undefined8 *)(lVar23 + 0x10 + lVar19);
                        local_98 = (void *)*puVar26;
                        iStack_90 = *(int *)(puVar26 + 1);
                        uStack_8c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)(lVar23 + 0x20 + lVar19);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        puVar26 = (undefined8 *)(lVar23 + 0x30 + lVar19);
                        local_78 = *puVar26;
                        uStack_70 = *(undefined4 *)(puVar26 + 1);
                        uStack_6c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar2 = (undefined8 *)(lVar23 + 0x40 + lVar19);
                        local_68 = *puVar2;
                        uStack_60 = puVar2[1];
                        local_f8 = lVar28;
                        local_108 = local_e8;
                        local_100 = &local_a8;
                        FUN_14044c9ac(0,lVar29,*(undefined4 *)puVar26,local_f0);
                        lVar19 = lVar19 + 0x50;
                        pppuVar22 = local_f0;
                      } while ((longlong)iVar4 * 0x50 != lVar19);
                    }
                    iVar4 = *(int *)(lVar29 + 0x248);
                    if ((longlong)iVar4 != 0) {
                      lVar23 = *(longlong *)(lVar29 + 0x240);
                      local_e8 = (undefined ***)(lVar29 + 0x130);
                      lVar19 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + lVar19);
                        local_a8 = &PTR_LAB_14a1e1968;
                        puVar26 = (undefined8 *)(lVar23 + 0x10 + lVar19);
                        ppvVar27 = &local_98;
                        for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
                          *ppvVar27 = (void *)*puVar26;
                          puVar26 = puVar26 + 1;
                          ppvVar27 = ppvVar27 + 1;
                        }
                        local_f8 = lVar28;
                        local_108 = (undefined ***)&DAT_14c846480;
                        local_100 = pppuVar22;
                        FUN_14710804c(lVar29,0,local_e8,&local_a8);
                        lVar19 = lVar19 + 0x58;
                        pppuVar22 = local_f0;
                      } while ((longlong)iVar4 * 0x58 - lVar19 != 0);
                    }
                    iVar4 = *(int *)(lVar29 + 0x208);
                    if ((longlong)iVar4 != 0) {
                      lVar23 = *(longlong *)(lVar29 + 0x200);
                      lVar19 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + lVar19);
                        local_a8 = &PTR_LAB_14a1e1938;
                        puVar26 = (undefined8 *)(lVar23 + 0x10 + lVar19);
                        local_98 = (void *)*puVar26;
                        iStack_90 = *(int *)(puVar26 + 1);
                        uStack_8c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)(lVar23 + 0x20 + lVar19);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        local_f8 = lVar28;
                        local_100 = local_f0;
                        local_108 = (undefined ***)&DAT_14c846480;
                        FUN_147105f1b(lVar29,0,lVar29 + 0x130,&local_a8);
                        lVar19 = lVar19 + 0x30;
                      } while ((longlong)iVar4 * 0x30 != lVar19);
                    }
                    plVar24 = local_c0;
                    iVar4 = *(int *)(lVar29 + 0x238);
                    if ((longlong)iVar4 != 0) {
                      lVar28 = *(longlong *)(lVar29 + 0x230);
                      lVar23 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar28 + 8 + lVar23);
                        local_a8 = &PTR_LAB_14a1e27b0;
                        auVar11._8_8_ = 0;
                        auVar11._0_8_ = (longlong)*(int *)(lVar28 + 0x18 + lVar23);
                        lVar19 = SUB168(auVar11 * ZEXT816(0x18),0);
                        lVar19 = lVar19 + (ulonglong)(lVar19 == 0);
                        if (SUB168(auVar11 * ZEXT816(0x18),8) != 0) {
                          lVar19 = -1;
                        }
                        local_98 = (void *)FUN_14001cc68(lVar19,0x10);
                        iStack_90 = *(int *)(lVar28 + 0x18 + lVar23);
                        local_78 = *(undefined8 *)(lVar28 + 0x30 + lVar23);
                        puVar26 = (undefined8 *)(lVar28 + 0x20 + lVar23);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        puVar26 = (undefined8 *)(lVar28 + 0x40 + lVar23);
                        local_68 = *puVar26;
                        uStack_60 = puVar26[1];
                        puVar26 = (undefined8 *)(lVar28 + 0x50 + lVar23);
                        local_58 = *puVar26;
                        uStack_50 = puVar26[1];
                        memcpy(local_98,*(void **)(lVar28 + 0x10 + lVar23),
                               (longlong)iStack_90 * 0x18);
                        local_f8 = local_e0;
                        local_100 = local_f0;
                        local_108 = (undefined ***)&DAT_14c846480;
                        FUN_14044b170(lVar29,0,lVar29 + 0x130,&local_a8);
                        local_a8 = &PTR_LAB_14a1e27b0;
                        if (local_98 != (void *)0x0) {
                          FUN_1400020a8();
                        }
                        lVar23 = lVar23 + 0x60;
                      } while ((longlong)iVar4 * 0x60 != lVar23);
                    }
                  }
                  pppuVar22 = local_f0 + 6;
                } while (pppuVar22 != local_c8);
              }
              if ((longlong)(int)local_d0[0xe] != 0) {
                pppuVar22 = *(undefined ****)(local_d0 + 0xc);
                local_c8 = pppuVar22 + (longlong)(int)local_d0[0xe] * 10;
                do {
                  lVar29 = local_e0;
                  local_f0 = *(undefined ****)plVar24[2];
                  if (*(char *)(local_f0 + 0x4a) == '\x01') {
                    if ((longlong)*(int *)(local_f0 + 0x43) != 0) {
                      ppuVar8 = local_f0[0x42];
                      local_e8 = local_f0 + 0x26;
                      local_d8 = (undefined ***)((longlong)*(int *)(local_f0 + 0x43) * 0x58);
                      pppuVar21 = (undefined ***)0x0;
                      do {
                        local_a0 = *(undefined8 *)((longlong)(ppuVar8 + 1) + (longlong)pppuVar21);
                        local_a8 = &PTR_LAB_14a1e1978;
                        puVar26 = (undefined8 *)((longlong)pppuVar21 + (longlong)(ppuVar8 + 2));
                        ppvVar27 = &local_98;
                        for (lVar28 = 9; lVar28 != 0; lVar28 = lVar28 + -1) {
                          *ppvVar27 = (void *)*puVar26;
                          puVar26 = puVar26 + 1;
                          ppvVar27 = ppvVar27 + 1;
                        }
                        local_f8 = lVar29;
                        local_108 = (undefined ***)&DAT_14c846480;
                        local_100 = pppuVar22;
                        FUN_1449ab00f(local_f0,0,local_e8,&local_a8);
                        pppuVar21 = pppuVar21 + 0xb;
                      } while (local_d8 != pppuVar21);
                    }
                    iVar4 = *(int *)(local_f0 + 0x45);
                    if ((longlong)iVar4 != 0) {
                      ppuVar8 = local_f0[0x44];
                      local_e8 = local_f0 + 0x26;
                      lVar28 = 0;
                      do {
                        local_a0 = *(undefined8 *)((longlong)ppuVar8 + lVar28 + 8);
                        local_a8 = &PTR_LAB_14a1e1948;
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar28 + 0x10);
                        local_98 = (void *)*puVar26;
                        iStack_90 = *(int *)(puVar26 + 1);
                        uStack_8c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar28 + 0x20);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar28 + 0x30);
                        local_78 = *puVar26;
                        uStack_70 = *(undefined4 *)(puVar26 + 1);
                        uStack_6c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar28 + 0x40);
                        local_68 = *puVar26;
                        uStack_60 = puVar26[1];
                        local_f8 = lVar29;
                        local_108 = (undefined ***)&DAT_14c846480;
                        local_100 = pppuVar22;
                        FUN_1404465dc(local_f0,0,local_e8,&local_a8);
                        lVar28 = lVar28 + 0x50;
                      } while ((longlong)iVar4 * 0x50 != lVar28);
                    }
                    iVar4 = *(int *)(local_f0 + 0x49);
                    if ((longlong)iVar4 != 0) {
                      ppuVar8 = local_f0[0x48];
                      pppuVar21 = local_f0 + 0x26;
                      lVar29 = 0;
                      do {
                        local_a0 = *(undefined8 *)((longlong)ppuVar8 + lVar29 + 8);
                        local_a8 = &PTR_LAB_14a1e1968;
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar29 + 0x10);
                        ppvVar27 = &local_98;
                        for (lVar28 = 9; lVar28 != 0; lVar28 = lVar28 + -1) {
                          *ppvVar27 = (void *)*puVar26;
                          puVar26 = puVar26 + 1;
                          ppvVar27 = ppvVar27 + 1;
                        }
                        local_f8 = local_e0;
                        local_108 = (undefined ***)&DAT_14c846480;
                        local_100 = pppuVar22;
                        FUN_14710a08d(local_f0,0,pppuVar21,&local_a8);
                        lVar29 = lVar29 + 0x58;
                      } while ((longlong)iVar4 * 0x58 - lVar29 != 0);
                    }
                    lVar29 = local_e0;
                    if ((longlong)*(int *)(local_f0 + 0x41) != 0) {
                      ppuVar8 = local_f0[0x40];
                      local_e8 = local_f0 + 0x26;
                      local_d8 = (undefined ***)((longlong)*(int *)(local_f0 + 0x41) * 0x30);
                      pppuVar21 = (undefined ***)0x0;
                      do {
                        local_a0 = *(undefined8 *)((longlong)(ppuVar8 + 1) + (longlong)pppuVar21);
                        local_a8 = &PTR_LAB_14a1e1938;
                        puVar26 = (undefined8 *)((longlong)(ppuVar8 + 2) + (longlong)pppuVar21);
                        local_98 = (void *)*puVar26;
                        iStack_90 = *(int *)(puVar26 + 1);
                        uStack_8c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        local_88 = *(undefined8 *)((longlong)(ppuVar8 + 4) + (longlong)pppuVar21);
                        uStack_80 = ((undefined8 *)((longlong)(ppuVar8 + 4) + (longlong)pppuVar21))
                                    [1];
                        local_f8 = lVar29;
                        local_108 = (undefined ***)&DAT_14c846480;
                        local_100 = pppuVar22;
                        FUN_14044c9ac(local_f0,0,local_e8,&local_a8);
                        pppuVar21 = pppuVar21 + 6;
                      } while (local_d8 != pppuVar21);
                    }
                    plVar24 = local_c0;
                    iVar4 = *(int *)(local_f0 + 0x47);
                    if ((longlong)iVar4 != 0) {
                      ppuVar8 = local_f0[0x46];
                      pppuVar21 = local_f0 + 0x26;
                      lVar29 = 0;
                      do {
                        local_a0 = *(undefined8 *)((longlong)ppuVar8 + lVar29 + 8);
                        local_a8 = &PTR_LAB_14a1e27b0;
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = (longlong)*(int *)((longlong)ppuVar8 + lVar29 + 0x18);
                        lVar28 = SUB168(auVar12 * ZEXT816(0x18),0);
                        lVar28 = lVar28 + (ulonglong)(lVar28 == 0);
                        if (SUB168(auVar12 * ZEXT816(0x18),8) != 0) {
                          lVar28 = -1;
                        }
                        local_98 = (void *)FUN_14001cc68(lVar28,0x10);
                        iStack_90 = *(int *)((longlong)ppuVar8 + lVar29 + 0x18);
                        local_78 = *(undefined8 *)((longlong)ppuVar8 + lVar29 + 0x30);
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar29 + 0x20);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar29 + 0x40);
                        local_68 = *puVar26;
                        uStack_60 = puVar26[1];
                        puVar26 = (undefined8 *)((longlong)ppuVar8 + lVar29 + 0x50);
                        local_58 = *puVar26;
                        uStack_50 = puVar26[1];
                        memcpy(local_98,*(void **)((longlong)ppuVar8 + lVar29 + 0x10),
                               (longlong)iStack_90 * 0x18);
                        local_f8 = local_e0;
                        local_108 = (undefined ***)&DAT_14c846480;
                        local_100 = pppuVar22;
                        FUN_1449a97f0(local_f0,0,pppuVar21,&local_a8);
                        local_a8 = &PTR_LAB_14a1e27b0;
                        if (local_98 != (void *)0x0) {
                          FUN_1400020a8();
                        }
                        lVar29 = lVar29 + 0x60;
                      } while ((longlong)iVar4 * 0x60 != lVar29);
                    }
                  }
                  pppuVar22 = pppuVar22 + 10;
                } while (pppuVar22 != local_c8);
              }
              if ((longlong)(int)local_d0[0x16] != 0) {
                pppuVar22 = *(undefined ****)(local_d0 + 0x14);
                pppuVar21 = pppuVar22 + (longlong)(int)local_d0[0x16] * 0xb;
                local_e8 = pppuVar21;
                do {
                  lVar29 = *(longlong *)plVar24[2];
                  if (*(char *)(lVar29 + 0x250) == '\x01') {
                    iVar4 = *(int *)(lVar29 + 0x218);
                    if ((longlong)iVar4 != 0) {
                      lVar28 = *(longlong *)(lVar29 + 0x210);
                      lVar23 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar28 + 8 + lVar23);
                        local_a8 = &PTR_LAB_14a1e1978;
                        puVar26 = (undefined8 *)(lVar28 + 0x10 + lVar23);
                        ppvVar27 = &local_98;
                        for (lVar19 = 9; lVar19 != 0; lVar19 = lVar19 + -1) {
                          *ppvVar27 = (void *)*puVar26;
                          puVar26 = puVar26 + 1;
                          ppvVar27 = ppvVar27 + 1;
                        }
                        local_f8 = local_e0;
                        local_100 = &local_a8;
                        local_108 = (undefined ***)(lVar29 + 0x130);
                        FUN_147108f08(0,lVar29,&DAT_14c846480,pppuVar22);
                        lVar23 = lVar23 + 0x58;
                      } while ((longlong)iVar4 * 0x58 - lVar23 != 0);
                    }
                    lVar28 = local_e0;
                    iVar4 = *(int *)(lVar29 + 0x228);
                    if ((longlong)iVar4 != 0) {
                      lVar23 = *(longlong *)(lVar29 + 0x220);
                      lVar19 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + lVar19);
                        local_a8 = &PTR_LAB_14a1e1948;
                        puVar26 = (undefined8 *)(lVar23 + 0x10 + lVar19);
                        local_98 = (void *)*puVar26;
                        iStack_90 = *(int *)(puVar26 + 1);
                        uStack_8c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)(lVar23 + 0x20 + lVar19);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        puVar26 = (undefined8 *)(lVar23 + 0x30 + lVar19);
                        local_78 = *puVar26;
                        uStack_70 = *(undefined4 *)(puVar26 + 1);
                        uStack_6c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)(lVar23 + 0x40 + lVar19);
                        local_68 = *puVar26;
                        uStack_60 = puVar26[1];
                        local_f8 = lVar28;
                        local_100 = &local_a8;
                        local_108 = (undefined ***)(lVar29 + 0x130);
                        FUN_14710a08d(0,lVar29,&DAT_14c846480,pppuVar22);
                        lVar19 = lVar19 + 0x50;
                      } while ((longlong)iVar4 * 0x50 != lVar19);
                    }
                    iVar4 = *(int *)(lVar29 + 0x248);
                    if ((longlong)iVar4 != 0) {
                      lVar28 = *(longlong *)(lVar29 + 0x240);
                      lVar23 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar28 + 8 + lVar23);
                        local_a8 = &PTR_LAB_14a1e1968;
                        puVar26 = (undefined8 *)(lVar23 + lVar28 + 0x10);
                        ppvVar27 = &local_98;
                        for (lVar19 = 9; lVar19 != 0; lVar19 = lVar19 + -1) {
                          *ppvVar27 = (void *)*puVar26;
                          puVar26 = puVar26 + 1;
                          ppvVar27 = ppvVar27 + 1;
                        }
                        local_f8 = local_e0;
                        local_108 = (undefined ***)&DAT_14c846480;
                        local_100 = pppuVar22;
                        FUN_14710cb72(lVar29,0,lVar29 + 0x130,&local_a8);
                        lVar23 = lVar23 + 0x58;
                      } while ((longlong)iVar4 * 0x58 - lVar23 != 0);
                    }
                    lVar28 = local_e0;
                    iVar4 = *(int *)(lVar29 + 0x208);
                    if ((longlong)iVar4 != 0) {
                      lVar23 = *(longlong *)(lVar29 + 0x200);
                      lVar19 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar23 + 8 + lVar19);
                        local_a8 = &PTR_LAB_14a1e1938;
                        puVar26 = (undefined8 *)(lVar23 + 0x10 + lVar19);
                        local_98 = (void *)*puVar26;
                        iStack_90 = *(int *)(puVar26 + 1);
                        uStack_8c = *(undefined4 *)((longlong)puVar26 + 0xc);
                        puVar26 = (undefined8 *)(lVar23 + 0x20 + lVar19);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        local_f8 = lVar28;
                        local_100 = &local_a8;
                        local_108 = (undefined ***)(lVar29 + 0x130);
                        FUN_14710804c(0,lVar29,&DAT_14c846480,pppuVar22);
                        lVar19 = lVar19 + 0x30;
                      } while ((longlong)iVar4 * 0x30 != lVar19);
                    }
                    plVar24 = local_c0;
                    pppuVar21 = local_e8;
                    iVar4 = *(int *)(lVar29 + 0x238);
                    if ((longlong)iVar4 != 0) {
                      lVar28 = *(longlong *)(lVar29 + 0x230);
                      local_f0 = (undefined ***)(lVar29 + 0x130);
                      lVar23 = 0;
                      do {
                        local_a0 = *(undefined8 *)(lVar28 + 8 + lVar23);
                        local_a8 = &PTR_LAB_14a1e27b0;
                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = (longlong)*(int *)(lVar28 + 0x18 + lVar23);
                        lVar19 = SUB168(auVar13 * ZEXT816(0x18),0);
                        lVar19 = lVar19 + (ulonglong)(lVar19 == 0);
                        if (SUB168(auVar13 * ZEXT816(0x18),8) != 0) {
                          lVar19 = -1;
                        }
                        local_98 = (void *)FUN_14001cc68(lVar19,0x10);
                        iStack_90 = *(int *)(lVar28 + 0x18 + lVar23);
                        local_78 = *(undefined8 *)(lVar28 + 0x30 + lVar23);
                        puVar26 = (undefined8 *)(lVar28 + 0x20 + lVar23);
                        local_88 = *puVar26;
                        uStack_80 = puVar26[1];
                        puVar26 = (undefined8 *)(lVar28 + 0x40 + lVar23);
                        local_68 = *puVar26;
                        uStack_60 = puVar26[1];
                        puVar26 = (undefined8 *)(lVar28 + 0x50 + lVar23);
                        local_58 = *puVar26;
                        uStack_50 = puVar26[1];
                        memcpy(local_98,*(void **)(lVar28 + 0x10 + lVar23),
                               (longlong)iStack_90 * 0x18);
                        local_f8 = local_e0;
                        local_100 = &local_a8;
                        local_108 = local_f0;
                        FUN_14710b173(0,lVar29,&DAT_14c846480,pppuVar22);
                        local_a8 = &PTR_LAB_14a1e27b0;
                        if (local_98 != (void *)0x0) {
                          FUN_1400020a8();
                        }
                        lVar23 = lVar23 + 0x60;
                      } while ((longlong)iVar4 * 0x60 != lVar23);
                    }
                  }
                  pppuVar22 = pppuVar22 + 0xb;
                } while (pppuVar22 != pppuVar21);
              }
              puVar1 = local_d0;
              lVar29 = local_e0;
              if ((longlong)(int)local_d0[0x1e] != 0) {
                lVar28 = *(longlong *)(local_d0 + 0x1c);
                lVar23 = (longlong)(int)local_d0[0x1e] * 0x98;
                do {
                  FUN_142b6cd3d(*(undefined8 *)plVar24[2],lVar28,lVar29);
                  lVar28 = lVar28 + 0x98;
                  lVar23 = lVar23 + -0x98;
                } while (lVar23 != 0);
              }
              lVar28 = (longlong)(int)puVar1[0x1a];
              if (lVar28 != 0) {
                lVar23 = *(longlong *)(puVar1 + 0x18);
                lVar28 = lVar28 * 0xb8;
                do {
                  FUN_142b6faf2(plVar24[3],lVar23,lVar29);
                  lVar23 = lVar23 + 0xb8;
                  lVar28 = lVar28 + -0xb8;
                } while (lVar28 != 0);
              }
            }
          }
        }
      }
    }
  }
LAB_140603d45:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140603d90 FUN_140603d90 body=140 status=ok
// SIG undefined FUN_140603d90(void)

void FUN_140603d90(longlong *param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  
  cVar2 = (char)param_1[99];
  if ((cVar2 == (char)param_1[0x23]) && (cVar2 != *(char *)((longlong)param_1 + 0x107))) {
    *(char *)((longlong)param_1 + 0x107) = cVar2;
    uVar3 = *(uint *)(param_1 + 0x20);
    if ((uVar3 & 1) != 0) {
      fVar1 = *(float *)((longlong)param_1 + 0x31c);
      lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((fVar1 != (float)*(double *)(lVar4 + 0x6d0)) ||
         (NAN(fVar1) || NAN((float)*(double *)(lVar4 + 0x6d0)))) {
                    /* WARNING: Could not recover jumptable at 0x000140603e19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2e8))(param_1,1);
        return;
      }
      uVar3 = *(uint *)(param_1 + 0x20);
    }
    *(uint *)(param_1 + 0x20) = uVar3 | 0x20;
  }
  return;
}



// FUNCTION 140603e22 FUN_140603e22 body=57 status=ok
// SIG undefined FUN_140603e22(void)

void FUN_140603e22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21c60 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21c60 = FUN_140002ddd(FUN_146435a90,uVar1,L"GbxBrainTask_Composite");
  }
  return;
}



// FUNCTION 140603e5c FUN_140603e5c body=353 status=ok
// SIG undefined FUN_140603e5c(void)

void FUN_140603e5c(longlong param_1)

{
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  uint uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  longlong local_f0;
  undefined4 local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_140a01d60();
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0xffffffff00000001;
  local_140 = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = local_e0 & 0xffffff00;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0xffffffff00000001;
  local_b0 = 0;
  local_a8 = (ulonglong)uStack_134 << 0x20;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_140604072(&local_a0,&local_130);
  local_50 = local_e0;
  uStack_4c = uStack_dc;
  uStack_48 = (undefined4)uStack_d8;
  uStack_44 = uStack_d8._4_4_;
  local_40 = CONCAT44(uStack_cc,local_d0);
  local_38 = 0;
  local_36 = 0;
  local_e8 = 0;
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_130);
  local_38 = 0x101;
  FUN_1406041fe(*(undefined8 *)(param_1 + 0x3a8),&local_c8);
  local_58 = 0;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_a0);
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140603fbe FUN_140603fbe body=55 status=ok
// SIG undefined FUN_140603fbe(void)

void FUN_140603fbe(longlong *param_1)

{
  FUN_140603ff6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140603ff6 FUN_140603ff6 body=123 status=ok
// SIG undefined FUN_140603ff6(void)

void FUN_140603ff6(longlong param_1,int param_2)

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



// FUNCTION 140604072 FUN_140604072 body=154 status=ok
// SIG undefined FUN_140604072(void)

longlong FUN_140604072(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_14060409e;
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
LAB_14060409e:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14060410c(param_1,param_2);
  return param_1;
}



// FUNCTION 14060410c FUN_14060410c body=241 status=ok
// SIG undefined FUN_14060410c(void)

undefined8 * FUN_14060410c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140603ff6(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
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
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 1406041fe FUN_1406041fe body=1127 status=ok
// SIG undefined FUN_1406041fe(void)

void FUN_1406041fe(longlong *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  wchar_t *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  code **local_220;
  code *local_218;
  code *local_210;
  undefined4 local_200 [2];
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  longlong local_180;
  undefined4 local_178;
  uint local_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  code *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  longlong local_f0;
  undefined4 local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  ushort local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [28];
  char local_9c;
  undefined8 local_90;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  (**(code **)(*param_1 + 0xb38))();
  lVar3 = param_1[0x15];
  if (lVar3 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_220 = &local_158;
      local_158 = FUN_141030f22;
      local_210 = FUN_14081d0ea;
      local_218 = FUN_142b4754c;
      local_228 = &LAB_1483e40eb;
      local_230 = &LAB_146486986;
      local_238 = L"Engine";
      local_240 = 0;
      local_248 = 0x10000005;
      local_250 = 8;
      local_258 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      cVar1 = *(char *)(param_2 + 0x90);
      cVar2 = *(char *)(param_2 + 0x92);
      cVar5 = (**(code **)(*param_1 + 0xa20))(param_1);
      if (cVar5 != '\0') {
        cVar5 = FUN_141119910(param_1);
        if (cVar1 == '\0' && cVar5 == '\0') {
          (**(code **)(*param_1 + 0xb40))(param_1,0);
        }
        else {
          param_1[0x210] = 0;
          (**(code **)(*param_1 + 0xb40))(param_1,0);
          if ((param_1[0x16] != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)) {
            lVar6 = FUN_1409ca864();
            if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar6);
            }
            local_1f8 = param_1[0x16];
            if (local_1f8 == 0) {
              local_1f8 = FUN_1448abda6(param_1);
            }
            local_200[0] = 5;
            local_1f0 = lVar6;
            if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar6);
            }
            FUN_145c7abce(local_c0,local_200);
            if (local_9c == '\0') {
              do {
                uVar4 = local_90;
                local_1e8 = 0;
                uStack_1e0 = 0;
                local_1d8 = 0xffffffff00000001;
                local_1d0 = 0;
                local_1c8 = 0;
                local_1a0 = 0;
                local_198 = 0;
                local_1c0 = 0;
                uStack_1b8 = 0;
                local_194 = 0xffffffff00000080;
                local_18c = 0;
                local_180 = 0;
                local_178 = 0;
                local_170 = local_170 & 0xffffff00;
                uStack_168 = 0;
                local_160 = 0;
                local_158 = (code *)0x0;
                uStack_150 = 0;
                uStack_14c = 0;
                local_148 = 0xffffffff00000001;
                local_140 = 0;
                local_138 = (ulonglong)uStack_1c4 << 0x20;
                local_110 = 0;
                local_108 = 0;
                local_130 = 0;
                uStack_128 = 0;
                local_104 = 0xffffffff00000080;
                local_fc = 0;
                local_f0 = 0;
                local_e8 = 0;
                FUN_140604072(&local_130,&local_1c0);
                local_d0 = CONCAT44(uStack_15c,local_160);
                local_e0 = local_170;
                uStack_dc = uStack_16c;
                uStack_d8 = (undefined4)uStack_168;
                uStack_d4 = uStack_168._4_4_;
                local_c8 = 0;
                local_178 = 0;
                if (local_180 != 0) {
                  FUN_1400020a8();
                }
                FUN_140603fbe(&local_1c0);
                local_c8 = local_c8 & 0xff00;
                FUN_141439dc0(uVar4,&local_158);
                local_e8 = 0;
                if (local_f0 != 0) {
                  FUN_1400020a8();
                }
                FUN_140603fbe(&local_130);
                FUN_145c7acc6(local_c0);
              } while (local_9c == '\0');
            }
            if ((local_68 & 1) != 0) {
              FUN_14024445c(local_b8);
            }
          }
          if (cVar2 != '\0') {
            FUN_1483e5d42(param_1,0);
          }
        }
        (**(code **)(*param_1 + 0xb40))(param_1,1);
        FUN_145733eba(param_1);
        FUN_1457ba7d2();
        if (cVar1 != '\0' || cVar5 != '\0') {
          plVar7 = DAT_14caca328;
          if (DAT_14caca330 == 0) {
            plVar7 = (longlong *)0x0;
          }
          (**(code **)(*plVar7 + 0x58))(plVar7,lVar3,1);
        }
        (**(code **)(*param_1 + 0xab8))(param_1,1);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140604666 FUN_140604666 body=68 status=ok
// SIG undefined FUN_140604666(void)

void FUN_140604666(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406046aa(puVar1);
  *puVar1 = &PTR_FUN_14b08e1b0;
  puVar1[5] = &PTR_FUN_14b08e4b0;
  puVar1[6] = &PTR_FUN_14b08e4e0;
  puVar1[0x14] = &PTR_FUN_14b08e510;
  return;
}



// FUNCTION 1406046aa FUN_1406046aa body=371 status=ok
// SIG undefined FUN_1406046aa(void)

undefined8 * FUN_1406046aa(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_14007ca06();
  FUN_14060481e(param_1,uVar2);
  *param_1 = &PTR_FUN_14b08d760;
  param_1[5] = &PTR_FUN_14b08da60;
  param_1[6] = &PTR_FUN_14b08da90;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x67) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  if (DAT_14cac9ca8 == 0) {
    local_40 = &local_20;
    local_20 = FUN_141030f22;
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
  lVar1 = DAT_14cac9ca8;
  if ((DAT_14cac9ca8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(DAT_14cac9ca8);
  }
  param_1[7] = lVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14060481e FUN_14060481e body=94 status=ok
// SIG undefined FUN_14060481e(void)

undefined8 * FUN_14060481e(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a1b92e0;
  return param_1;
}



// FUNCTION 14060487c FUN_14060487c body=10990 status=ok
// SIG undefined FUN_14060487c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14060487c(code *param_1,code *param_2,char *param_3,longlong param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  DWORD DVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  DWORD dwTlsIndex;
  DWORD DVar15;
  double *pdVar16;
  longlong lVar17;
  code *pcVar18;
  code *pcVar19;
  double *pdVar20;
  undefined4 uVar21;
  code **ppcVar22;
  uint *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  bool bVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  double dVar57;
  undefined8 uVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  undefined1 auStack_4c8 [32];
  code **local_4a8;
  uint local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  wchar_t *local_488;
  undefined1 *local_480;
  undefined1 *local_478;
  code **local_470;
  code *local_468;
  code *local_460;
  double *local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_418;
  undefined8 uStack_410;
  double local_3f8 [2];
  code *local_3e8 [2];
  double local_3d8 [4];
  double local_3b8 [4];
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  double local_358;
  double dStack_350;
  double local_348;
  undefined1 local_33c [4];
  longlong *local_338 [2];
  undefined8 local_328;
  longlong *local_320;
  longlong *local_318 [2];
  longlong *local_308 [2];
  longlong *local_2f8 [2];
  ulonglong local_2e8;
  undefined1 local_2e0 [8];
  longlong *local_2d8;
  undefined1 local_2cc [4];
  longlong *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  longlong *local_2b0;
  longlong *local_2a8 [2];
  longlong *local_298 [2];
  undefined1 local_288 [8];
  longlong *local_280;
  undefined8 local_278;
  longlong *local_270;
  longlong *local_268 [2];
  undefined1 local_258 [16];
  longlong *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  longlong *local_230;
  longlong *local_228;
  undefined8 uStack_220;
  longlong *local_218 [2];
  longlong *local_208;
  undefined8 uStack_200;
  undefined1 local_1f0 [16];
  undefined8 local_1e0;
  longlong *local_1d8;
  code **local_1d0;
  undefined8 *puStack_1c8;
  double local_1c0;
  code *local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  double dStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  code *local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined4 local_118;
  undefined1 local_108 [16];
  undefined4 local_f8 [4];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar15 = 0xffffffff;
    LOCK();
    bVar28 = DAT_14c75ec34 != 0xffffffff;
    DVar9 = dwTlsIndex;
    if (bVar28) {
      DVar15 = DAT_14c75ec34;
      DVar9 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar9;
    UNLOCK();
    if (bVar28) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar15;
    }
  }
  pdVar16 = TlsGetValue(dwTlsIndex);
  if (pdVar16 == (double *)0x0) {
    pdVar16 = (double *)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pdVar16);
    FUN_140fddf04(pdVar16);
    TlsSetValue(dwTlsIndex,pdVar16);
  }
  if ((int)*(uint *)(pdVar16 + 5) < 1) {
    if (param_2 != (code *)0x0) {
      if ((param_1 != (code *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(param_1);
      }
      uVar25 = 0xffffffff;
      lVar17 = 0;
      if ((longlong)(int)*(uint *)(param_2 + 0x140) != 0) {
        lVar6 = *(longlong *)(param_2 + 0x138);
        lVar17 = (longlong)(int)*(uint *)(param_2 + 0x140) << 3;
        uVar27 = 0;
        bVar11 = DAT_14c950c29;
        do {
          if ((param_1 != (code *)0x0) && ((bVar11 & 1) != 0)) {
            FUN_1456cec3c(param_1);
            bVar11 = DAT_14c950c29;
          }
          if (*(code **)(lVar6 + uVar27 * 8) == param_1) {
            uVar25 = uVar27 & 0xffffffff;
            break;
          }
          uVar27 = uVar27 + 1;
          lVar17 = lVar17 + -8;
        } while (lVar17 != 0);
      }
      iVar14 = (int)uVar25;
      if (*(code **)(param_1 + 0x120) == param_2) {
        bVar28 = *(longlong *)(param_1 + 0x128) == param_4;
        uVar27 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
        if (iVar14 != -1 && bVar28) goto LAB_140605341;
      }
      else {
        bVar28 = false;
      }
      if (param_2 == param_1) {
        local_138 = (code *)&DAT_14a492018;
        dStack_130 = (double)CONCAT35(dStack_130._5_3_,3);
        uVar13 = FUN_14001a6c0(&local_138,1);
        local_2c8 = (longlong *)(ulonglong)uVar13;
        FUN_14276766e(&local_138);
        local_228 = (longlong *)0x0;
        uStack_220 = 0;
        FUN_1401031ac(param_1,0,&local_228);
        FUN_140233b1a(local_218,&local_228);
        local_198 = (code *)0x14a869f18;
        uStack_190 = 0x13;
        FUN_1446e940c(local_338,&local_198);
        local_198 = (code *)0x14a8199e4;
        uStack_190 = 0xe;
        FUN_1446e940c(&local_2e8,&local_198);
        local_198 = (code *)0x14a869ea8;
        uStack_190 = 0x37;
        FUN_140208c1e(&local_248,&local_2e8,local_338,&local_198);
        FUN_14023409e(&local_238,&local_248,1);
        local_198 = (code *)CONCAT44(local_198._4_4_,4);
        FUN_14023423e(&local_188,local_218);
        puStack_1c8 = &local_178;
        local_1d0 = &local_198;
        FUN_14010d304(&local_1b8);
        local_1e0 = local_238;
        local_1d8 = local_230;
        if (local_230 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_230 + 1) = (int)local_230[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_208,&local_1e0,&local_1b8);
        FUN_14007f2db(local_1b8,(ulonglong)dStack_1b0 & 0xffffffff);
        if (local_1b8 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_188 != (longlong *)0x0) {
          (**(code **)(*local_188 + 0x10))();
        }
        if (local_230 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_230 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_230)(local_230);
            LOCK();
            piVar1 = (int *)((longlong)local_230 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_230 + 0x10))(local_230);
            }
          }
        }
        if (local_218[0] != (longlong *)0x0) {
          (**(code **)(*local_218[0] + 0x10))();
        }
        puVar26 = local_1f0;
LAB_1406052c3:
        FUN_1427679d4(&local_138,puVar26,&local_208);
        plVar7 = *(longlong **)(puVar26 + 8);
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
        if (local_208 != (longlong *)0x0) {
          (**(code **)(*local_208 + 0x10))();
        }
        if (local_248 != (longlong *)0x0) {
          (**(code **)(*local_248 + 0x10))();
        }
        if (local_228 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        ppcVar22 = &local_138;
      }
      else {
        lVar17 = *(longlong *)(param_1 + 0xa8);
        if (((lVar17 != 0) && (lVar17 == *(longlong *)(param_2 + 0xa8))) &&
           (*(code **)(lVar17 + 0x1c8) == param_1)) {
          local_138 = (code *)&DAT_14a492018;
          dStack_130 = (double)CONCAT35(dStack_130._5_3_,3);
          uVar13 = FUN_14001a6c0(&local_138,1);
          local_2c8 = (longlong *)(ulonglong)uVar13;
          FUN_14276766e(&local_138);
          local_228 = (longlong *)0x0;
          uStack_220 = 0;
          FUN_1401031ac(param_1,0,&local_228);
          FUN_140233b1a(local_268,&local_228);
          local_198 = (code *)0x14a86a006;
          uStack_190 = 0x17;
          FUN_1446e940c(local_338,&local_198);
          local_198 = (code *)0x14a8199e4;
          uStack_190 = 0xe;
          FUN_1446e940c(&local_2e8,&local_198);
          local_198 = (code *)0x14a869f40;
          uStack_190 = 0x62;
          FUN_140208c1e(&local_248,&local_2e8,local_338,&local_198);
          FUN_14023409e(&local_278,&local_248,1);
          local_198 = (code *)CONCAT44(local_198._4_4_,4);
          FUN_14023423e(&local_188,local_268);
          puStack_1c8 = &local_178;
          local_1d0 = &local_198;
          FUN_14010d304(&local_1b8);
          local_1e0 = local_278;
          local_1d8 = local_270;
          if (local_270 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_270 + 1) = (int)local_270[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_208,&local_1e0,&local_1b8);
          FUN_14007f2db(local_1b8,(ulonglong)dStack_1b0 & 0xffffffff);
          if (local_1b8 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_188 != (longlong *)0x0) {
            (**(code **)(*local_188 + 0x10))();
          }
          if (local_270 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_270 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_270)(local_270);
              LOCK();
              piVar1 = (int *)((longlong)local_270 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_270 + 0x10))(local_270);
              }
            }
          }
          if (local_268[0] != (longlong *)0x0) {
            (**(code **)(*local_268[0] + 0x10))();
          }
          puVar26 = local_258;
          goto LAB_1406052c3;
        }
        pcVar19 = param_2;
        if (param_1 == (code *)0x0) {
LAB_140605029:
          cVar10 = (**(code **)(*(longlong *)param_2 + 0x590))(param_2,param_1,param_4);
          uVar4 = local_1e0;
          if (cVar10 != '\0') {
            pcVar19 = param_2;
            if (((*(longlong *)(param_1 + 0xa8) != 0) &&
                ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
               ((param_1[0x1fb] != (code)0x0 || (param_2[0x1fb] == (code)0x0)))) {
              do {
                uVar13 = *(uint *)(pcVar19 + 8);
                pcVar18 = param_1;
                if ((uVar13 & 0x30) != 0) break;
                pcVar2 = pcVar19 + 0x20;
                pcVar19 = *(code **)pcVar2;
              } while (*(code **)pcVar2 != (code *)0x0);
              do {
                if (pcVar18 == (code *)0x0) goto LAB_14060509c;
                if ((*(uint *)(pcVar18 + 8) & 0x30) != 0) {
                  if ((uVar13 & 0x30) == 0) goto LAB_1406050a4;
                  goto LAB_140605819;
                }
                pcVar18 = *(code **)(pcVar18 + 0x20);
              } while( true );
            }
            local_208 = (longlong *)0x0;
            uStack_200 = 0;
            local_138 = (code *)&DAT_14a492018;
            dStack_130 = (double)CONCAT35(dStack_130._5_3_,3);
            uVar13 = FUN_14001a6c0(&local_138,1);
            local_2e8 = (ulonglong)uVar13;
            FUN_14276766e(&local_198);
            local_248 = (longlong *)0x0;
            uStack_240 = 0;
            FUN_1401031ac(param_1,0,&local_248);
            FUN_140233b1a(local_2f8,&local_248);
            FUN_140009b9a(local_308,&local_208);
            local_2c8 = (longlong *)0x0;
            uStack_2c0 = 0;
            FUN_1401031ac(param_2,0,&local_2c8);
            FUN_140233b1a(local_318,&local_2c8);
            local_138 = (code *)0x14a86a19a;
            dStack_130._0_4_ = 0x18;
            FUN_1446e940c(local_2cc,&local_138);
            local_138 = (code *)0x14a8199e4;
            dStack_130._0_4_ = 0xe;
            FUN_1446e940c(local_33c,&local_138);
            local_138 = (code *)0x14a86a0ea;
            dStack_130 = (double)CONCAT44(dStack_130._4_4_,0x57);
            FUN_140208c1e(local_338,local_33c,local_2cc,&local_138);
            FUN_14023409e(&local_328,local_338,1);
            local_138 = (code *)CONCAT44(local_138._4_4_,4);
            FUN_14023423e(&local_128,local_318);
            local_118 = 4;
            FUN_14023423e(local_108,local_308);
            local_f8[0] = 4;
            FUN_14023423e(local_e8,local_2f8);
            puStack_1c8 = &local_d8;
            local_1d0 = &local_138;
            FUN_14010d304(&local_1b8);
            local_1e0 = local_328;
            local_1d8 = local_320;
            if (local_320 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_320 + 1) = (int)local_320[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_228,&local_1e0,&local_1b8);
            FUN_14007f2db(local_1b8,(ulonglong)dStack_1b0 & 0xffffffff);
            if (local_1b8 != (code *)0x0) {
              FUN_1400020a8();
            }
            lVar17 = 0x50;
            do {
              if (*(longlong **)((longlong)&local_138 + lVar17) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_138 + lVar17) + 0x10))();
                *(undefined8 *)((longlong)&local_138 + lVar17) = 0;
                *(undefined4 *)((longlong)&dStack_130 + lVar17) = 0;
              }
              lVar17 = lVar17 + -0x20;
            } while (lVar17 != -0x10);
            if (local_320 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_320 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*local_320)(local_320);
                LOCK();
                piVar1 = (int *)((longlong)local_320 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_320 + 0x10))(local_320);
                }
              }
            }
            if (local_318[0] != (longlong *)0x0) {
              (**(code **)(*local_318[0] + 0x10))();
            }
            if (local_308[0] != (longlong *)0x0) {
              (**(code **)(*local_308[0] + 0x10))();
            }
            if (local_2f8[0] != (longlong *)0x0) {
              (**(code **)(*local_2f8[0] + 0x10))();
            }
            FUN_1427679d4(&local_198,local_2e0,&local_228);
            if (local_2d8 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_2d8 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*local_2d8)(local_2d8);
                LOCK();
                piVar1 = (int *)((longlong)local_2d8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_2d8 + 0x10))(local_2d8);
                }
              }
            }
            if (local_228 != (longlong *)0x0) {
              (**(code **)(*local_228 + 0x10))();
            }
            if (local_338[0] != (longlong *)0x0) {
              (**(code **)(*local_338[0] + 0x10))();
            }
            if (local_2c8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_248 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            FUN_1427678c0(&local_198);
            if (local_208 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          goto LAB_14060533e;
        }
        do {
          pcVar19 = *(code **)(pcVar19 + 0x120);
          if (pcVar19 == (code *)0x0) break;
        } while (pcVar19 != param_1);
        if (pcVar19 == (code *)0x0) goto LAB_140605029;
        local_138 = (code *)&DAT_14a492018;
        dStack_130 = (double)CONCAT35(dStack_130._5_3_,3);
        uVar13 = FUN_14001a6c0(&local_138,1);
        local_338[0] = (longlong *)(ulonglong)uVar13;
        FUN_14276766e(&local_198);
        local_228 = (longlong *)0x0;
        uStack_220 = 0;
        FUN_1401031ac(param_1,0,&local_228);
        FUN_140233b1a(local_298,&local_228);
        local_248 = (longlong *)0x0;
        uStack_240 = 0;
        FUN_1401031ac(param_2,0,&local_248);
        FUN_140233b1a(local_2a8,&local_248);
        local_138 = (code *)0x14a86a0c4;
        dStack_130._0_4_ = 0x12;
        FUN_1446e940c(&local_2e8,&local_138);
        local_138 = (code *)0x14a8199e4;
        dStack_130._0_4_ = 0xe;
        FUN_1446e940c(local_2cc,&local_138);
        local_138 = (code *)0x14a86a036;
        dStack_130 = (double)CONCAT44(dStack_130._4_4_,0x46);
        FUN_140208c1e(&local_2c8,local_2cc,&local_2e8,&local_138);
        FUN_14023409e(&local_2b8,&local_2c8,1);
        local_138 = (code *)CONCAT44(local_138._4_4_,4);
        FUN_14023423e(&local_128,local_2a8);
        local_118 = 4;
        FUN_14023423e(local_108,local_298);
        puStack_1c8 = (undefined8 *)local_f8;
        local_1d0 = &local_138;
        FUN_14010d304(&local_1b8);
        local_1e0 = local_2b8;
        local_1d8 = local_2b0;
        if (local_2b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2b0 + 1) = (int)local_2b0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_208,&local_1e0,&local_1b8);
        FUN_14007f2db(local_1b8,(ulonglong)dStack_1b0 & 0xffffffff);
        if (local_1b8 != (code *)0x0) {
          FUN_1400020a8();
        }
        lVar17 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_138 + lVar17) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_138 + lVar17) + 0x10))();
            *(undefined8 *)((longlong)&local_138 + lVar17) = 0;
            *(undefined4 *)((longlong)&dStack_130 + lVar17) = 0;
          }
          lVar17 = lVar17 + -0x20;
        } while (lVar17 != -0x10);
        if (local_2b0 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_2b0 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_2b0)(local_2b0);
            LOCK();
            piVar1 = (int *)((longlong)local_2b0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_2b0 + 0x10))(local_2b0);
            }
          }
        }
        if (local_2a8[0] != (longlong *)0x0) {
          (**(code **)(*local_2a8[0] + 0x10))();
        }
        if (local_298[0] != (longlong *)0x0) {
          (**(code **)(*local_298[0] + 0x10))();
        }
        FUN_1427679d4(&local_198,local_288,&local_208);
        if (local_280 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_280 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_280)(local_280);
            LOCK();
            piVar1 = (int *)((longlong)local_280 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_280 + 0x10))(local_280);
            }
          }
        }
        if (local_208 != (longlong *)0x0) {
          (**(code **)(*local_208 + 0x10))();
        }
        if (local_2c8 != (longlong *)0x0) {
          (**(code **)(*local_2c8 + 0x10))();
        }
        if (local_248 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_228 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        ppcVar22 = &local_198;
      }
      FUN_1427678c0(ppcVar22);
    }
LAB_14060533e:
    uVar27 = 0;
    goto LAB_140605341;
  }
  FUN_140486fc4(param_1,param_2,param_4);
  param_1[0x1f8] = (code)((byte)param_1[0x1f8] & 0x7f);
  uVar25 = *(ulonglong *)(param_1 + 0x38);
  if (uVar25 < 0xffffffff00000000) {
    pcVar19 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      pcVar19 = (code *)0x0;
    }
    (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar25,0xd);
  }
  else {
    uVar13 = (uint)uVar25;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      pcVar19 = (code *)&DAT_14c998070;
      if (DAT_14c998080 != (code *)0x0) {
        pcVar19 = DAT_14c998080;
      }
      if ((*(uint *)(pcVar19 + ((uint)(uVar25 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar23 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar23 = (uint *)(lVar17 + 8);
        }
        *puVar23 = *puVar23 | 0x2000;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  param_1[0x1f9] = (code)((byte)param_1[0x1f9] & 0xfe);
  uVar25 = *(ulonglong *)(param_1 + 0x38);
  if (uVar25 < 0xffffffff00000000) {
    pcVar19 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      pcVar19 = (code *)0x0;
    }
    (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar25,0xe);
  }
  else {
    uVar13 = (uint)uVar25;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      pcVar19 = (code *)&DAT_14c998070;
      if (DAT_14c998080 != (code *)0x0) {
        pcVar19 = DAT_14c998080;
      }
      if ((*(uint *)(pcVar19 + ((uint)(uVar25 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar23 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar23 = (uint *)(lVar17 + 8);
        }
        *puVar23 = *puVar23 | 0x4000;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  param_1[0x1f9] = (code)((byte)param_1[0x1f9] & 0xfd);
  uVar25 = *(ulonglong *)(param_1 + 0x38);
  if (0xfffffffeffffffff < uVar25) {
    uVar27 = CONCAT71((int7)((ulonglong)pdVar16 >> 8),1);
    uVar13 = (uint)uVar25;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      pcVar19 = (code *)&DAT_14c998070;
      if (DAT_14c998080 != (code *)0x0) {
        pcVar19 = DAT_14c998080;
      }
      if ((*(uint *)(pcVar19 + ((uint)(uVar25 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar23 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar23 = (uint *)(lVar17 + 8);
        }
        *puVar23 = *puVar23 | 0x8000;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
    goto LAB_140605341;
  }
  pcVar19 = DAT_14c9980d0;
  if (DAT_14c9980d8 == 0) {
    pcVar19 = (code *)0x0;
  }
  (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar25,0xf);
LAB_140606192:
  uVar27 = CONCAT71((int7)((ulonglong)pdVar16 >> 8),1);
LAB_140605341:
  if ((local_d0 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar27 & 0xffffffff;
LAB_14060509c:
  if ((uVar13 & 0x30) != 0) {
LAB_1406050a4:
    do {
      if ((*(uint *)(param_2 + 8) & 0x30) != 0) goto LAB_14060533e;
      param_2 = *(code **)(param_2 + 0x20);
      uVar27 = 0;
    } while (param_2 != (code *)0x0);
    goto LAB_140605341;
  }
LAB_140605819:
  cVar5 = param_1[0x1fa];
  param_1[0x1fa] = (code)((byte)cVar5 | 4);
  if ((DAT_14c76142c == 1) && (pcVar19 = param_2, ((byte)param_1[0x1f8] & 2) == 0)) {
    do {
      if (((byte)pcVar19[0x1f8] & 2) == 0) break;
      pcVar19[0x1f8] = (code)((byte)pcVar19[0x1f8] & 0xfd);
      pcVar18 = pcVar19 + 0x120;
      pcVar19 = *(code **)pcVar18;
    } while (*(code **)pcVar18 != (code *)0x0);
  }
  bVar11 = (byte)cVar5 & 4;
  local_1e0._4_4_ = SUB84(uVar4,4);
  local_1e0._0_4_ =
       CONCAT13(1,CONCAT12(param_3[2] != '\0',CONCAT11(param_3[1] != '\0',*param_3 != '\0')));
  local_458 = (double *)(param_2 + 0x138);
  if (((!bVar28) || ((((byte)param_1[0x9c] & 1) != 0 || *param_3 != '\0') || param_3[1] != '\0')) ||
     (iVar14 != -1 || param_3[2] != '\0')) {
    (**(code **)(*(longlong *)param_1 + 0x4a0))(param_1,&local_1e0);
  }
  param_1[0x1fa] = (code)((byte)param_1[0x1fa] & 0xfb | bVar11);
  if (param_1 != (code *)0x0) {
    if (DAT_14cac6e60 == 0) {
      local_470 = &local_138;
      local_138 = FUN_144a7958c;
      local_460 = FUN_14081d0ea;
      local_468 = FUN_142b47bc4;
      local_478 = &LAB_1478989f1;
      local_480 = &LAB_146391124;
      local_488 = L"Engine";
      local_490 = 0x10000000000;
      local_498 = 0x10000005;
      local_4a0 = 0x10;
      local_4a8 = (code **)CONCAT44(local_4a8._4_4_,0x620);
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if (((((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
         ((lVar17 = (**(code **)(*(longlong *)param_1 + 0x7b8))(param_1,0,1,0xffffffff), lVar17 != 0
          && (((*(byte *)(lVar17 + 8) & 1) != 0 && (param_3[3] == '\0')))))) &&
        ((lVar17 = *(longlong *)(param_1 + 0xb0), lVar17 != 0 ||
         (lVar17 = FUN_1448abda6(param_1), lVar17 != 0)))) &&
       ((((bVar12 = *(byte *)(lVar17 + 0x152), bVar12 == 1 ||
          ((bVar12 < 7 && ((0x68U >> (bVar12 & 0x1f) & 1) != 0)))) &&
         ((*(byte *)(lVar17 + 0x154) & 2) == 0)) &&
        ((bVar12 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x65) & 0x18, bVar12 == 0x10 ||
         (bVar12 == 8)))))) {
      param_1[0x1fa] = (code)((byte)param_1[0x1fa] | 4);
      (**(code **)(*(longlong *)param_1 + 0x4a0))(param_1,&local_1e0);
      param_1[0x1fa] = (code)((byte)param_1[0x1fa] & 0xfb | bVar11);
      if ((*param_3 != '\0') && ((param_3[1] != '\0' && (param_3[2] != '\0')))) goto LAB_14060533e;
      auVar43 = *(undefined1 (*) [16])(param_1 + 0x1b0);
      dVar41 = auVar43._0_8_;
      dVar45 = auVar43._8_8_;
      dVar29 = *(double *)(param_1 + 0x1c0);
      pdVar16 = *(double **)(param_1 + 0x230);
      if (pdVar16 == (double *)0x0) {
        pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
        dVar30 = DAT_14c8463d8;
        *pdVar16 = DAT_14c8463d0;
        pdVar16[1] = dVar30;
        dVar30 = DAT_14c8463e8;
        pdVar16[2] = DAT_14c8463e0;
        pdVar16[3] = dVar30;
        dVar30 = DAT_14c846500;
        pdVar16[4] = DAT_14c8464f8;
        pdVar16[5] = dVar30;
        pdVar16[6] = (double)DAT_14c846508;
        *(double **)(param_1 + 0x230) = pdVar16;
      }
      auVar46 = _DAT_1499387d0;
      if ((((pdVar16[4] != dVar41) || (NAN(pdVar16[4]) || NAN(dVar41))) || (pdVar16[5] != dVar45))
         || (NAN(pdVar16[5]) || NAN(dVar45))) {
LAB_1406062bb:
        auVar50._8_8_ = 0;
        auVar50._0_8_ = dVar29;
        dVar30 = (double)DAT_1499387d0;
        dVar31 = DAT_1499387d0._8_8_;
        auVar43 = divpd(auVar43,_DAT_1499387d0);
        auVar44 = divpd(auVar50,_DAT_1499387d0);
        auVar43 = roundpd(auVar43,auVar43,3);
        auVar44 = roundpd(auVar44,auVar44,3);
        auVar66._0_8_ = dVar41 - auVar43._0_8_ * dVar30;
        auVar66._8_8_ = dVar45 - auVar43._8_8_ * dVar31;
        auVar51._0_8_ = dVar29 - auVar44._0_8_ * dVar30;
        auVar51._8_8_ = 0.0 - auVar44._8_8_ * dVar31;
        auVar59._0_8_ = auVar66._0_8_ + dVar30;
        auVar59._8_8_ = auVar66._8_8_ + dVar31;
        auVar48._0_8_ = auVar51._0_8_ + dVar30;
        auVar48._8_8_ = auVar51._8_8_ + dVar31;
        auVar44._8_8_ = -(ulonglong)(0.0 <= auVar66._8_8_);
        auVar44._0_8_ = -(ulonglong)(0.0 <= auVar66._0_8_);
        auVar43 = blendvpd(auVar59,auVar66,auVar44);
        auVar60._8_8_ = -(ulonglong)(0.0 <= auVar51._8_8_);
        auVar60._0_8_ = -(ulonglong)(0.0 <= auVar51._0_8_);
        auVar44 = blendvpd(auVar48,auVar51,auVar60);
        auVar52._0_8_ = auVar43._0_8_ + -360.0;
        auVar52._8_8_ = auVar43._8_8_ + -360.0;
        auVar35._8_8_ = -(ulonglong)(180.0 < auVar43._8_8_);
        auVar35._0_8_ = -(ulonglong)(180.0 < auVar43._0_8_);
        auVar60 = blendvpd(auVar43,auVar52,auVar35);
        auVar36._8_8_ = -(ulonglong)(180.0 < auVar44._8_8_);
        auVar36._0_8_ = -(ulonglong)(180.0 < auVar44._0_8_);
        auVar43._8_8_ = auVar44._8_8_ + 0.0;
        auVar43._0_8_ = auVar44._0_8_ + -360.0;
        auVar43 = blendvpd(auVar44,auVar43,auVar36);
        *(undefined1 (*) [16])(pdVar16 + 4) = auVar60;
        dVar29 = auVar43._0_8_;
        pdVar16[6] = dVar29;
        auVar67._8_8_ = 0;
        auVar67._0_8_ = dVar29;
        auVar43 = divpd(auVar60,auVar46);
        auVar46 = divpd(auVar67,auVar46);
        auVar43 = roundpd(auVar43,auVar43,3);
        auVar46 = roundpd(auVar46,auVar46,3);
        dVar57 = (auVar60._0_8_ - auVar43._0_8_ * dVar30) * 0.008726646259971648;
        dVar63 = (auVar60._8_8_ - auVar43._8_8_ * dVar31) * 0.008726646259971648;
        dVar64 = (dVar29 - auVar46._0_8_ * dVar30) * 0.008726646259971648;
        dVar71 = (0.0 - auVar46._8_8_ * dVar31) * 0.008726646259971648;
        dVar29 = sin(dVar57);
        dVar41 = sin(dVar63);
        dVar45 = sin(dVar64);
        sin(dVar71);
        dVar30 = cos(dVar57);
        dVar31 = cos(dVar63);
        dVar57 = cos(dVar64);
        cos(dVar71);
        *pdVar16 = dVar29 * dVar41 * dVar57 - dVar30 * dVar31 * dVar45;
        pdVar16[1] = -(dVar29 * dVar31 * dVar57) - dVar30 * dVar41 * dVar45;
        pdVar16[2] = -(dVar31 * dVar29 * dVar45) + dVar41 * dVar30 * dVar57;
        pdVar16[3] = dVar41 * dVar29 * dVar45 + dVar31 * dVar30 * dVar57;
      }
      else if ((pdVar16[6] != dVar29) || (NAN(pdVar16[6]) || NAN(dVar29))) goto LAB_1406062bb;
      local_138 = (code *)*pdVar16;
      dStack_130 = pdVar16[1];
      local_128 = pdVar16[2];
      dStack_120 = pdVar16[3];
      local_4a8 = &local_138;
      local_4a0 = local_4a0 & 0xffffff00;
      pcVar18 = param_1;
      pcVar19 = (code *)FUN_140092404(param_1,param_2,param_4,0);
      uVar21 = SUB84(pcVar18,0);
      if (*param_3 == '\0') {
        uVar56 = *(undefined8 *)(param_1 + 0x260);
        uVar62 = *(undefined8 *)(param_1 + 0x268);
        uVar4 = *(undefined8 *)(param_1 + 0x270);
        uVar25 = *(ulonglong *)(param_1 + 0x38);
        pcVar19 = (code *)0x0;
        if (uVar25 < 0xffffffff00000000) {
          pcVar18 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            pcVar18 = (code *)0x0;
          }
          pcVar19 = (code *)(**(code **)(*(longlong *)pcVar18 + 0x58))(pcVar18,param_1,uVar25,5);
        }
        else {
          uVar13 = (uint)uVar25;
          if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
            pcVar18 = (code *)&DAT_14c998070;
            if (DAT_14c998080 != (code *)0x0) {
              pcVar18 = DAT_14c998080;
            }
            pcVar19 = (code *)(ulonglong)*(uint *)(pcVar18 + ((uint)(uVar25 >> 3) & 0xffffffc));
            if ((*(uint *)(pcVar18 + ((uint)(uVar25 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0
               ) {
              lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
              pcVar19 = (code *)(lVar17 + 8);
              pcVar18 = *(code **)(lVar17 + 0x18);
              if (*(code **)(lVar17 + 0x18) == (code *)0x0) {
                pcVar18 = pcVar19;
              }
              *(uint *)pcVar18 = *(uint *)pcVar18 | 0x20;
              *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
            }
          }
        }
        uVar21 = SUB84(pcVar18,0);
        *(undefined8 *)(param_1 + 0x198) = uVar56;
        *(undefined8 *)(param_1 + 0x1a0) = uVar62;
        *(undefined8 *)(param_1 + 0x1a8) = uVar4;
      }
      if (param_3[1] == '\0') {
        pcVar18 = *(code **)(param_1 + 0x240);
        dVar29 = *(double *)(param_1 + 0x248);
        dVar41 = *(double *)(param_1 + 0x250);
        dVar45 = *(double *)(param_1 + 600);
        pdVar16 = *(double **)(param_1 + 0x228);
        local_138 = pcVar18;
        dStack_130 = dVar29;
        local_128 = dVar41;
        dStack_120 = dVar45;
        if (pdVar16 == (double *)0x0) {
          uVar21 = 0x40;
          pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
          dVar30 = DAT_14c8463d8;
          *pdVar16 = DAT_14c8463d0;
          pdVar16[1] = dVar30;
          dVar30 = DAT_14c8463e8;
          pdVar16[2] = DAT_14c8463e0;
          pdVar16[3] = dVar30;
          dVar30 = DAT_14c846500;
          pdVar16[4] = DAT_14c8464f8;
          pdVar16[5] = dVar30;
          pcVar19 = DAT_14c846508;
          pdVar16[6] = (double)DAT_14c846508;
          *(double **)(param_1 + 0x228) = pdVar16;
        }
        auVar46._8_8_ = -(ulonglong)(dVar29 != pdVar16[1]);
        auVar46._0_8_ = -(ulonglong)((double)pcVar18 != *pdVar16);
        auVar68._8_8_ = -(ulonglong)(dVar45 != pdVar16[3]);
        auVar68._0_8_ = -(ulonglong)(dVar41 != pdVar16[2]);
        iVar14 = movmskpd((int)pcVar19,auVar46);
        uVar13 = movmskpd(uVar21,auVar68);
        if ((uVar13 & 0x3fffffff) != 0 || iVar14 != 0) {
          pdVar16[2] = local_128;
          pdVar16[3] = dStack_120;
          *pdVar16 = (double)local_138;
          pdVar16[1] = dStack_130;
          FUN_1448052ee(&local_138,&local_198);
          pdVar16[6] = (double)local_188;
          pdVar16[4] = (double)local_198;
          pdVar16[5] = (double)CONCAT44(uStack_18c,uStack_190);
        }
        local_348 = pdVar16[6];
        local_358 = pdVar16[4];
        dStack_350 = pdVar16[5];
        uVar25 = *(ulonglong *)(param_1 + 0x38);
        if (uVar25 < 0xffffffff00000000) {
          pcVar19 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            pcVar19 = (code *)0x0;
          }
          (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar25,6);
        }
        else {
          uVar13 = (uint)uVar25;
          if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
            pcVar19 = (code *)&DAT_14c998070;
            if (DAT_14c998080 != (code *)0x0) {
              pcVar19 = DAT_14c998080;
            }
            if ((*(uint *)(pcVar19 + ((uint)(uVar25 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0
               ) {
              lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
              puVar23 = *(uint **)(lVar17 + 0x18);
              if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
                puVar23 = (uint *)(lVar17 + 8);
              }
              *puVar23 = *puVar23 | 0x40;
              *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
            }
          }
        }
        *(double *)(param_1 + 0x1c0) = local_348;
        *(double *)(param_1 + 0x1b0) = local_358;
        *(double *)(param_1 + 0x1b8) = dStack_350;
      }
      if (param_3[2] == '\0') {
        local_378 = *(undefined8 *)(param_1 + 0x280);
        uStack_370 = *(undefined8 *)(param_1 + 0x288);
        local_368 = *(undefined8 *)(param_1 + 0x290);
        FUN_14084f00a(param_1);
      }
      if (((byte)param_1[0x9c] & 1) != 0) {
        if ((longlong)(int)*(uint *)(param_1 + 0x220) < 1) {
          if ((DAT_14c76142c != 1) || (((byte)param_1[0x1f8] & 2) == 0)) {
            uVar27 = 0;
            cVar10 = (**(code **)(*(longlong *)param_1 + 0x508))(param_1,0,1,0);
            param_1[0x1f8] = (code)((byte)param_1[0x1f8] & 0xfd | cVar10 * '\x02');
            goto LAB_140605341;
          }
        }
        else {
          lVar17 = *(longlong *)
                    (*(longlong *)(param_1 + 0x218) + -8 +
                    (longlong)(int)*(uint *)(param_1 + 0x220) * 8);
          *(byte *)(lVar17 + 0x608) = *(byte *)(lVar17 + 0x608) | 2;
          *(undefined4 *)(lVar17 + 0x10) = 3;
          *(undefined4 *)(lVar17 + 200) = 0xffffffff;
        }
      }
      goto LAB_14060533e;
    }
  }
  FUN_14082bc44(param_1 + 0x40,param_2,param_2 + 0x40);
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  *(code **)(param_1 + 0x120) = param_2;
  uVar27 = *(ulonglong *)(param_1 + 0x38);
  if (uVar27 < 0xffffffff00000000) {
    pcVar19 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      pcVar19 = (code *)0x0;
    }
    (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar27,2);
  }
  else {
    uVar13 = (uint)uVar27;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      pcVar19 = (code *)&DAT_14c998070;
      if (DAT_14c998080 != (code *)0x0) {
        pcVar19 = DAT_14c998080;
      }
      if ((*(uint *)(pcVar19 + ((uint)(uVar27 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar23 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar23 = (uint *)(lVar17 + 8);
        }
        *puVar23 = *puVar23 | 4;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  *(longlong *)(param_1 + 0x128) = param_4;
  uVar27 = *(ulonglong *)(param_1 + 0x38);
  if (uVar27 < 0xffffffff00000000) {
    pcVar19 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      pcVar19 = (code *)0x0;
    }
    (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar27,3);
  }
  else {
    uVar13 = (uint)uVar27;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      pcVar19 = (code *)&DAT_14c998070;
      if (DAT_14c998080 != (code *)0x0) {
        pcVar19 = DAT_14c998080;
      }
      if ((*(uint *)(pcVar19 + ((uint)(uVar27 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar23 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar23 = (uint *)(lVar17 + 8);
        }
        *puVar23 = *puVar23 | 8;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  param_1[0x1f8] = (code)((byte)param_1[0x1f8] & 0xbf | (*(longlong *)(param_1 + 0x120) != 0) << 6);
  uVar27 = *(ulonglong *)(param_1 + 0x38);
  if (uVar27 < 0xffffffff00000000) {
    pcVar19 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      pcVar19 = (code *)0x0;
    }
    (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar27,0xc);
  }
  else {
    uVar13 = (uint)uVar27;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      pcVar19 = (code *)&DAT_14c998070;
      if (DAT_14c998080 != (code *)0x0) {
        pcVar19 = DAT_14c998080;
      }
      if ((*(uint *)(pcVar19 + ((uint)(uVar27 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar23 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar23 = (uint *)(lVar17 + 8);
        }
        *puVar23 = *puVar23 | 0x1000;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  if (*param_3 == '\x02') {
    bVar11 = 0x80;
  }
  else {
    if (*param_3 == '\x01') {
      if ((*(double *)(param_1 + 0x198) == *(double *)(param_2 + 0x198)) &&
         (!NAN(*(double *)(param_1 + 0x198)) && !NAN(*(double *)(param_2 + 0x198)))) {
        if ((*(double *)(param_1 + 0x1a0) == *(double *)(param_2 + 0x1a0)) &&
           (!NAN(*(double *)(param_1 + 0x1a0)) && !NAN(*(double *)(param_2 + 0x1a0)))) {
          bVar11 = (*(double *)(param_1 + 0x1a8) == *(double *)(param_2 + 0x1a8)) << 7;
          goto LAB_140605a25;
        }
      }
    }
    bVar11 = 0;
  }
LAB_140605a25:
  param_1[0x1f8] = (code)((byte)param_1[0x1f8] & 0x7f | bVar11);
  uVar27 = *(ulonglong *)(param_1 + 0x38);
  if (uVar27 < 0xffffffff00000000) {
    pcVar19 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      pcVar19 = (code *)0x0;
    }
    (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar27,0xd);
  }
  else {
    uVar13 = (uint)uVar27;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      pcVar19 = (code *)&DAT_14c998070;
      if (DAT_14c998080 != (code *)0x0) {
        pcVar19 = DAT_14c998080;
      }
      if ((*(uint *)(pcVar19 + ((uint)(uVar27 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar23 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar23 = (uint *)(lVar17 + 8);
        }
        *puVar23 = *puVar23 | 0x2000;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  if (param_3[1] == '\x02') {
    bVar11 = 1;
  }
  else if (param_3[1] == '\x01') {
    bVar11 = 0;
    if ((*(double *)(param_1 + 0x1b0) == *(double *)(param_2 + 0x1b0)) &&
       (!NAN(*(double *)(param_1 + 0x1b0)) && !NAN(*(double *)(param_2 + 0x1b0)))) {
      if ((*(double *)(param_1 + 0x1b8) == *(double *)(param_2 + 0x1b8)) &&
         (!NAN(*(double *)(param_1 + 0x1b8)) && !NAN(*(double *)(param_2 + 0x1b8)))) {
        bVar11 = -(*(double *)(param_2 + 0x1c0) == *(double *)(param_1 + 0x1c0)) & 1;
      }
    }
  }
  else {
    bVar11 = 0;
  }
  param_1[0x1f9] = (code)((byte)param_1[0x1f9] & 0xfe | bVar11);
  uVar27 = *(ulonglong *)(param_1 + 0x38);
  if (uVar27 < 0xffffffff00000000) {
    pcVar19 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      pcVar19 = (code *)0x0;
    }
    (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar27,0xe);
  }
  else {
    uVar13 = (uint)uVar27;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      pcVar19 = (code *)&DAT_14c998070;
      if (DAT_14c998080 != (code *)0x0) {
        pcVar19 = DAT_14c998080;
      }
      if ((*(uint *)(pcVar19 + ((uint)(uVar27 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar23 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar23 = (uint *)(lVar17 + 8);
        }
        *puVar23 = *puVar23 | 0x4000;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  bVar11 = param_3[2];
  if (bVar11 != 2) {
    if (bVar11 == 1) {
      if ((*(double *)(param_1 + 0x1c8) == *(double *)(param_2 + 0x1c8)) &&
         (!NAN(*(double *)(param_1 + 0x1c8)) && !NAN(*(double *)(param_2 + 0x1c8)))) {
        if ((*(double *)(param_1 + 0x1d0) == *(double *)(param_2 + 0x1d0)) &&
           (!NAN(*(double *)(param_1 + 0x1d0)) && !NAN(*(double *)(param_2 + 0x1d0)))) {
          bVar11 = (*(double *)(param_1 + 0x1d8) == *(double *)(param_2 + 0x1d8)) * '\x02';
          goto LAB_140605b32;
        }
      }
    }
    bVar11 = 0;
  }
LAB_140605b32:
  param_1[0x1f9] = (code)((byte)param_1[0x1f9] & 0xfd | bVar11);
  uVar27 = *(ulonglong *)(param_1 + 0x38);
  if (uVar27 < 0xffffffff00000000) {
    pcVar19 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      pcVar19 = (code *)0x0;
    }
    (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar27,0xf);
  }
  else {
    uVar13 = (uint)uVar27;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      pcVar19 = (code *)&DAT_14c998070;
      if (DAT_14c998080 != (code *)0x0) {
        pcVar19 = DAT_14c998080;
      }
      if ((*(uint *)(pcVar19 + ((uint)(uVar27 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar23 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar23 = (uint *)(lVar17 + 8);
        }
        *puVar23 = *puVar23 | 0x8000;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  pdVar16 = local_458;
  (**(code **)(*(longlong *)param_1 + 0x518))();
  if ((iVar14 == -1) || (((byte)param_1[0x1fa] & 0x20) != 0)) {
    if ((param_1 != (code *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    uVar13 = *(uint *)(param_2 + 0x140);
    *(uint *)(param_2 + 0x140) = uVar13 + 1;
    if (*(uint *)(param_2 + 0x144) < uVar13 + 1) {
      FUN_140f41d82(pdVar16,uVar13);
    }
    *(code **)((longlong)*pdVar16 + (longlong)(int)uVar13 * 8) = param_1;
    if ((param_1 != (code *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
  }
  else {
    local_138 = param_1;
    if ((param_1 != (code *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(param_1);
    }
    FUN_147a0310c(pdVar16,&local_138,uVar25);
  }
  uVar25 = *(ulonglong *)(param_2 + 0x38);
  if (uVar25 < 0xffffffff00000000) {
    pcVar19 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      pcVar19 = (code *)0x0;
    }
    (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_2,uVar25,4);
  }
  else {
    uVar13 = (uint)uVar25;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      pcVar19 = (code *)&DAT_14c998070;
      if (DAT_14c998080 != (code *)0x0) {
        pcVar19 = DAT_14c998080;
      }
      if ((*(uint *)(pcVar19 + ((uint)(uVar25 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar23 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar23 = (uint *)(lVar17 + 8);
        }
        *puVar23 = *puVar23 | 0x10;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  FUN_1406555d4(param_1,param_2,1);
  if ((((char)param_2[0x9c] < '\0') &&
      ((*(longlong *)(param_2 + 0xa8) == 0 ||
       (*(char *)(*(longlong *)(param_2 + 0xa8) + 0x178) != '\x03')))) &&
     ((-1 < (char)param_1[0x9c] ||
      ((*(longlong *)(param_1 + 0xa8) != 0 &&
       (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')))))) {
    local_138 = param_1;
    if ((param_1 != (code *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(param_1);
    }
    FUN_141300552(param_2 + 0x148,&local_138);
  }
  (**(code **)(**(longlong **)(param_1 + 0x120) + 0x4a8))
            (*(longlong **)(param_1 + 0x120),&local_138,*(undefined8 *)(param_1 + 0x128),0);
  pcVar19 = param_1 + 0x240;
  FUN_1449437a2(pcVar19,&local_198,&local_138);
  uVar21 = SUB84(pcVar19,0);
  if (*param_3 == '\x02') {
    local_388 = DAT_14c8464f0;
    local_398 = DAT_14c8464e0;
    uStack_390 = DAT_14c8464e8;
    uVar25 = *(ulonglong *)(param_1 + 0x38);
    if (uVar25 < 0xffffffff00000000) {
      pcVar19 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        pcVar19 = (code *)0x0;
      }
      (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar25,5);
    }
    else {
      uVar13 = (uint)uVar25;
      if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
        pcVar19 = (code *)&DAT_14c998070;
        if (DAT_14c998080 != (code *)0x0) {
          pcVar19 = DAT_14c998080;
        }
        if ((*(uint *)(pcVar19 + ((uint)(uVar25 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
          lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
          pcVar19 = *(code **)(lVar17 + 0x18);
          if (*(code **)(lVar17 + 0x18) == (code *)0x0) {
            pcVar19 = (code *)(lVar17 + 8);
          }
          *(uint *)pcVar19 = *(uint *)pcVar19 | 0x20;
          *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
        }
      }
    }
    uVar21 = SUB84(pcVar19,0);
    *(undefined8 *)(param_1 + 0x1a8) = local_388;
    *(undefined8 *)(param_1 + 0x198) = local_398;
    *(undefined8 *)(param_1 + 0x1a0) = uStack_390;
  }
  else if (*param_3 == '\x01') {
    uVar25 = *(ulonglong *)(param_1 + 0x38);
    uVar4 = local_168;
    uVar56 = local_178;
    uVar62 = uStack_170;
    if (((byte)param_1[0x1f8] & 4) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x270);
      uVar56 = *(undefined8 *)(param_1 + 0x260);
      uVar62 = *(undefined8 *)(param_1 + 0x268);
    }
    if (uVar25 < 0xffffffff00000000) {
      pcVar19 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        pcVar19 = (code *)0x0;
      }
      (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar25,5);
    }
    else {
      uVar13 = (uint)uVar25;
      if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
        pcVar19 = (code *)&DAT_14c998070;
        if (DAT_14c998080 != (code *)0x0) {
          pcVar19 = DAT_14c998080;
        }
        if ((*(uint *)(pcVar19 + ((uint)(uVar25 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
          lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
          pcVar19 = *(code **)(lVar17 + 0x18);
          if (*(code **)(lVar17 + 0x18) == (code *)0x0) {
            pcVar19 = (code *)(lVar17 + 8);
          }
          *(uint *)pcVar19 = *(uint *)pcVar19 | 0x20;
          *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
        }
      }
    }
    uVar21 = SUB84(pcVar19,0);
    *(undefined8 *)(param_1 + 0x198) = uVar56;
    *(undefined8 *)(param_1 + 0x1a0) = uVar62;
    *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  }
  pcVar19 = local_198;
  if (param_3[1] == '\x02') {
    pdVar16 = local_3f8;
    local_3e8[0] = DAT_14c846508;
    dVar29 = DAT_14c8464f8;
    dVar41 = DAT_14c846500;
LAB_140605f26:
    *pdVar16 = dVar29;
    pdVar16[1] = dVar41;
    uVar25 = *(ulonglong *)(param_1 + 0x38);
    if (uVar25 < 0xffffffff00000000) {
      pcVar19 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        pcVar19 = (code *)0x0;
      }
      (**(code **)(*(longlong *)pcVar19 + 0x58))(pcVar19,param_1,uVar25,6);
    }
    else {
      uVar13 = (uint)uVar25;
      if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
        pcVar19 = (code *)&DAT_14c998070;
        if (DAT_14c998080 != (code *)0x0) {
          pcVar19 = DAT_14c998080;
        }
        if ((*(uint *)(pcVar19 + ((uint)(uVar25 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
          lVar17 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
          puVar23 = *(uint **)(lVar17 + 0x18);
          if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
            puVar23 = (uint *)(lVar17 + 8);
          }
          *puVar23 = *puVar23 | 0x40;
          *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
        }
      }
    }
    *(double *)(param_1 + 0x1c0) = pdVar16[2];
    dVar29 = pdVar16[1];
    *(double *)(param_1 + 0x1b0) = *pdVar16;
    *(double *)(param_1 + 0x1b8) = dVar29;
  }
  else if (param_3[1] == '\x01') {
    if (((byte)param_1[0x1f8] & 8) == 0) {
      dVar29 = (double)CONCAT44(uStack_18c,uStack_190);
      pdVar20 = *(double **)(param_1 + 0x230);
      pcVar18 = (code *)&DAT_00000001;
      if (pdVar20 == (double *)0x0) {
        uVar21 = 0x40;
        pdVar20 = (double *)FUN_14001cc68(0x40,0x10);
        dVar41 = DAT_14c8463d8;
        *pdVar20 = DAT_14c8463d0;
        pdVar20[1] = dVar41;
        dVar41 = DAT_14c8463e8;
        pdVar20[2] = DAT_14c8463e0;
        pdVar20[3] = dVar41;
        dVar41 = DAT_14c846500;
        pdVar20[4] = DAT_14c8464f8;
        pdVar20[5] = dVar41;
        pcVar18 = DAT_14c846508;
        pdVar20[6] = (double)DAT_14c846508;
        *(double **)(param_1 + 0x230) = pdVar20;
      }
      auVar32._8_8_ = -(ulonglong)(pdVar20[1] != dVar29);
      auVar32._0_8_ = -(ulonglong)(*pdVar20 != (double)pcVar19);
      iVar14 = movmskpd((int)pcVar18,auVar32);
      auVar33._8_8_ = -(ulonglong)(pdVar20[3] != dStack_180);
      auVar33._0_8_ = -(ulonglong)(pdVar20[2] != (double)local_188);
      uVar13 = movmskpd(uVar21,auVar33);
      if ((uVar13 & 0x3fffffff) != 0 || iVar14 != 0) {
        dVar41 = (double)local_188 * (double)local_188 + (double)pcVar19 * (double)pcVar19;
        dVar45 = dStack_180 * dStack_180 + dVar29 * dVar29;
        auVar42._0_8_ = dVar41 + dVar45;
        auVar42._8_8_ = dVar41 + dVar45;
        auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
        auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
        auVar43 = sqrtpd(auVar42,auVar42);
        auVar46 = divpd(_DAT_149934d80,auVar43);
        auVar47._0_8_ = auVar46._0_8_ * (double)local_188;
        auVar47._8_8_ = auVar46._8_8_ * dStack_180;
        auVar43 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar34);
        *pdVar20 = (double)((ulonglong)((double)pcVar19 * auVar46._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
        pdVar20[1] = (double)((ulonglong)(dVar29 * auVar46._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
        *(undefined1 (*) [16])(pdVar20 + 2) = auVar43;
        FUN_1448052ee(pdVar20,&local_1b8);
        pdVar20[6] = local_1a8;
        pdVar20[4] = (double)local_1b8;
        pdVar20[5] = dStack_1b0;
      }
      dVar29 = pdVar20[6];
      pdVar16 = local_3d8;
    }
    else {
      pcVar19 = *(code **)(param_1 + 0x240);
      dVar29 = *(double *)(param_1 + 0x248);
      dVar41 = *(double *)(param_1 + 0x250);
      dVar45 = *(double *)(param_1 + 600);
      pdVar20 = *(double **)(param_1 + 0x228);
      pcVar18 = (code *)&DAT_00000001;
      local_1b8 = pcVar19;
      dStack_1b0 = dVar29;
      local_1a8 = dVar41;
      dStack_1a0 = dVar45;
      if (pdVar20 == (double *)0x0) {
        uVar21 = 0x40;
        pdVar20 = (double *)FUN_14001cc68(0x40,0x10);
        dVar30 = DAT_14c8463d8;
        *pdVar20 = DAT_14c8463d0;
        pdVar20[1] = dVar30;
        dVar30 = DAT_14c8463e8;
        pdVar20[2] = DAT_14c8463e0;
        pdVar20[3] = dVar30;
        dVar30 = DAT_14c846500;
        pdVar20[4] = DAT_14c8464f8;
        pdVar20[5] = dVar30;
        pcVar18 = DAT_14c846508;
        pdVar20[6] = (double)DAT_14c846508;
        *(double **)(param_1 + 0x228) = pdVar20;
      }
      auVar58._8_8_ = -(ulonglong)(dVar29 != pdVar20[1]);
      auVar58._0_8_ = -(ulonglong)((double)pcVar19 != *pdVar20);
      auVar65._8_8_ = -(ulonglong)(dVar45 != pdVar20[3]);
      auVar65._0_8_ = -(ulonglong)(dVar41 != pdVar20[2]);
      iVar14 = movmskpd((int)pcVar18,auVar58);
      uVar13 = movmskpd(uVar21,auVar65);
      if ((uVar13 & 0x3fffffff) != 0 || iVar14 != 0) {
        pdVar20[2] = local_1a8;
        pdVar20[3] = dStack_1a0;
        *pdVar20 = (double)local_1b8;
        pdVar20[1] = dStack_1b0;
        FUN_1448052ee(&local_1b8,&local_1d0);
        pdVar20[6] = local_1c0;
        pdVar20[4] = (double)local_1d0;
        pdVar20[5] = (double)puStack_1c8;
      }
      dVar29 = pdVar20[6];
      pdVar16 = local_3b8;
    }
    pdVar16[2] = dVar29;
    dVar29 = pdVar20[4];
    dVar41 = pdVar20[5];
    goto LAB_140605f26;
  }
  if (param_3[2] == '\x02') {
    local_450 = 0x3ff0000000000000;
    local_448 = 0x3ff0000000000000;
    local_440 = 0x3ff0000000000000;
LAB_140605fd1:
    FUN_14084f00a(param_1);
  }
  else if (param_3[2] == '\x01') {
    if (((byte)param_1[0x1f8] & 0x10) == 0) {
      puVar24 = &local_438;
      local_438 = local_158;
      uStack_430 = uStack_150;
    }
    else {
      local_418 = *(undefined8 *)(param_1 + 0x280);
      uStack_410 = *(undefined8 *)(param_1 + 0x288);
      puVar24 = &local_418;
      local_148 = *(undefined8 *)(param_1 + 0x290);
    }
    puVar24[2] = local_148;
    goto LAB_140605fd1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x120) + 0x5a0))(*(longlong **)(param_1 + 0x120),param_1);
  auVar43 = *(undefined1 (*) [16])(param_1 + 0x1b0);
  dVar41 = auVar43._0_8_;
  dVar45 = auVar43._8_8_;
  dVar29 = *(double *)(param_1 + 0x1c0);
  pdVar20 = *(double **)(param_1 + 0x230);
  if (pdVar20 == (double *)0x0) {
    pdVar20 = (double *)FUN_14001cc68(0x40,0x10);
    dVar30 = DAT_14c8463d8;
    *pdVar20 = DAT_14c8463d0;
    pdVar20[1] = dVar30;
    dVar30 = DAT_14c8463e8;
    pdVar20[2] = DAT_14c8463e0;
    pdVar20[3] = dVar30;
    dVar30 = DAT_14c846500;
    pdVar20[4] = DAT_14c8464f8;
    pdVar20[5] = dVar30;
    pdVar20[6] = (double)DAT_14c846508;
    *(double **)(param_1 + 0x230) = pdVar20;
  }
  auVar46 = _DAT_1499387d0;
  if ((((pdVar20[4] != dVar41) || (NAN(pdVar20[4]) || NAN(dVar41))) || (pdVar20[5] != dVar45)) ||
     (((NAN(pdVar20[5]) || NAN(dVar45) || (pdVar20[6] != dVar29)) ||
      (NAN(pdVar20[6]) || NAN(dVar29))))) {
    auVar53._8_8_ = 0;
    auVar53._0_8_ = dVar29;
    dVar30 = (double)DAT_1499387d0;
    dVar31 = DAT_1499387d0._8_8_;
    auVar43 = divpd(auVar43,_DAT_1499387d0);
    auVar44 = divpd(auVar53,_DAT_1499387d0);
    auVar43 = roundpd(auVar43,auVar43,3);
    auVar44 = roundpd(auVar44,auVar44,3);
    auVar69._0_8_ = dVar41 - auVar43._0_8_ * dVar30;
    auVar69._8_8_ = dVar45 - auVar43._8_8_ * dVar31;
    auVar54._0_8_ = dVar29 - auVar44._0_8_ * dVar30;
    auVar54._8_8_ = 0.0 - auVar44._8_8_ * dVar31;
    auVar61._0_8_ = auVar69._0_8_ + dVar30;
    auVar61._8_8_ = auVar69._8_8_ + dVar31;
    auVar49._0_8_ = auVar54._0_8_ + dVar30;
    auVar49._8_8_ = auVar54._8_8_ + dVar31;
    auVar37._8_8_ = -(ulonglong)(0.0 <= auVar69._8_8_);
    auVar37._0_8_ = -(ulonglong)(0.0 <= auVar69._0_8_);
    auVar44 = blendvpd(auVar61,auVar69,auVar37);
    auVar38._8_8_ = -(ulonglong)(0.0 <= auVar54._8_8_);
    auVar38._0_8_ = -(ulonglong)(0.0 <= auVar54._0_8_);
    auVar43 = blendvpd(auVar49,auVar54,auVar38);
    auVar55._0_8_ = auVar44._0_8_ + -360.0;
    auVar55._8_8_ = auVar44._8_8_ + -360.0;
    auVar39._8_8_ = -(ulonglong)(180.0 < auVar44._8_8_);
    auVar39._0_8_ = -(ulonglong)(180.0 < auVar44._0_8_);
    auVar44 = blendvpd(auVar44,auVar55,auVar39);
    auVar40._8_8_ = -(ulonglong)(180.0 < auVar43._8_8_);
    auVar40._0_8_ = -(ulonglong)(180.0 < auVar43._0_8_);
    auVar8._8_8_ = auVar43._8_8_ + 0.0;
    auVar8._0_8_ = auVar43._0_8_ + -360.0;
    auVar43 = blendvpd(auVar43,auVar8,auVar40);
    *(undefined1 (*) [16])(pdVar20 + 4) = auVar44;
    dVar29 = auVar43._0_8_;
    pdVar20[6] = dVar29;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = dVar29;
    auVar43 = divpd(auVar44,auVar46);
    auVar46 = divpd(auVar70,auVar46);
    auVar43 = roundpd(auVar43,auVar43,3);
    auVar46 = roundpd(auVar46,auVar46,3);
    dVar57 = (auVar44._0_8_ - auVar43._0_8_ * dVar30) * 0.008726646259971648;
    dVar63 = (auVar44._8_8_ - auVar43._8_8_ * dVar31) * 0.008726646259971648;
    dVar64 = (dVar29 - auVar46._0_8_ * dVar30) * 0.008726646259971648;
    dVar71 = (0.0 - auVar46._8_8_ * dVar31) * 0.008726646259971648;
    dVar29 = sin(dVar57);
    dVar41 = sin(dVar63);
    dVar45 = sin(dVar64);
    sin(dVar71);
    dVar30 = cos(dVar57);
    dVar31 = cos(dVar63);
    dVar57 = cos(dVar64);
    cos(dVar71);
    *pdVar20 = dVar29 * dVar41 * dVar57 - dVar30 * dVar31 * dVar45;
    pdVar20[1] = -(dVar29 * dVar31 * dVar57) - dVar30 * dVar41 * dVar45;
    pdVar20[2] = -(dVar31 * dVar29 * dVar45) + dVar41 * dVar30 * dVar57;
    pdVar20[3] = dVar41 * dVar29 * dVar45 + dVar31 * dVar30 * dVar57;
  }
  local_1b8 = (code *)*pdVar20;
  dStack_1b0 = pdVar20[1];
  local_1a8 = pdVar20[2];
  dStack_1a0 = pdVar20[3];
  local_4a0 = CONCAT31(local_4a0._1_3_,1);
  local_4a8 = &local_1b8;
  FUN_140092404(param_1,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),0);
  if (param_3[3] == '\x01') {
    if (param_1 != (code *)0x0) {
      if (DAT_14cac6e60 == 0) {
        local_1b8 = FUN_144a7958c;
        local_460 = FUN_14081d0ea;
        local_468 = FUN_142b47bc4;
        local_478 = &LAB_1478989f1;
        local_480 = &LAB_146391124;
        local_488 = L"Engine";
        local_490 = 0x10000000000;
        local_498 = 0x10000005;
        local_4a0 = 0x10;
        local_4a8 = (code **)CONCAT44(local_4a8._4_4_,0x620);
        local_470 = &local_1b8;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if (((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
         (lVar17 = (**(code **)(*(longlong *)param_1 + 0x7b8))(param_1,0,1,0xffffffff), lVar17 != 0)
         ) {
        local_4a8 = (code **)((ulonglong)local_4a8 & 0xffffffffffffff00);
        FUN_143657a00(param_1,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),
                      param_3[3]);
      }
      goto LAB_140606101;
    }
  }
  else {
LAB_140606101:
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 0xa8);
    if ((plVar7 != (longlong *)0x0 && param_1 != (code *)0x0) &&
       ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
      (**(code **)(*plVar7 + 0x5a8))(plVar7,param_1);
    }
  }
  if (((byte)param_1[0x9c] & 1) != 0) {
    if ((longlong)(int)*(uint *)(param_1 + 0x220) < 1) {
      if ((DAT_14c76142c != 1) || (((byte)param_1[0x1f8] & 2) == 0)) {
        cVar10 = (**(code **)(*(longlong *)param_1 + 0x508))(param_1,0,1,0);
        param_1[0x1f8] = (code)((byte)param_1[0x1f8] & 0xfd | cVar10 * '\x02');
      }
    }
    else {
      lVar17 = *(longlong *)
                (*(longlong *)(param_1 + 0x218) + -8 + (longlong)(int)*(uint *)(param_1 + 0x220) * 8
                );
      *(byte *)(lVar17 + 0x608) = *(byte *)(lVar17 + 0x608) | 2;
      *(undefined4 *)(lVar17 + 0x10) = 3;
      *(undefined4 *)(lVar17 + 200) = 0xffffffff;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x520))(param_1);
  goto LAB_140606192;
}



// FUNCTION 1406074a2 FUN_1406074a2 body=187 status=ok
// SIG undefined FUN_1406074a2(void)

void FUN_1406074a2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140607545;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140607545:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14060755e FUN_14060755e body=311 status=ok
// SIG undefined FUN_14060755e(void)

void FUN_14060755e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 ****ppppuVar5;
  undefined1 auStack_88 [40];
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x40))(param_1,local_60);
  bVar1 = *(byte *)(param_2 + 4);
  if (bVar1 == local_40) {
    ppppuVar5 = (undefined8 ****)local_60[0];
    if (local_48 < 0x19) {
      ppppuVar5 = local_60;
    }
    _Buf1 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      _Buf1 = (undefined8 *)*param_2;
    }
    if (*(code **)(&DAT_14c9a85e0 + (uint)bVar1 * 0x120) == (code *)0x0) {
      iVar4 = memcmp(_Buf1,ppppuVar5,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
      cVar3 = iVar4 == 0;
      local_40 = bVar1;
    }
    else {
      cVar3 = (**(code **)(&DAT_14c9a85e0 + (uint)bVar1 * 0x120))();
    }
  }
  else {
    cVar3 = '\0';
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar5 = local_60;
    if (0x18 < local_48) {
      ppppuVar5 = (undefined8 ****)local_60[0];
    }
    (*pcVar2)(ppppuVar5);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140607696 FUN_140607696 body=28 status=ok
// SIG undefined FUN_140607696(void)

undefined1 FUN_140607696(void)

{
  undefined1 uVar1;
  undefined1 *in_R9;
  undefined8 in_stack_00000028;
  
  uVar1 = FUN_1406076b2(in_stack_00000028);
  *in_R9 = uVar1;
  return 1;
}



// FUNCTION 1406076b2 FUN_1406076b2 body=514 status=ok
// SIG undefined FUN_1406076b2(void)

bool FUN_1406076b2(double *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_98 [36];
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    (**(code **)(*param_2 + 0x180))(param_2,&local_74,0x10000);
    *param_1 = (double)(int)(local_74 - 0x8000) * 3.051850947599719e-05;
    (**(code **)(*param_2 + 0x180))(param_2,&local_74,0x10000);
    param_1[1] = (double)(int)(local_74 - 0x8000) * 3.051850947599719e-05;
    (**(code **)(*param_2 + 0x180))(param_2,&local_74,0x10000);
    param_1[2] = (double)(int)(local_74 - 0x8000) * 3.051850947599719e-05;
    bVar4 = true;
  }
  else {
    uVar2 = (int)((ulonglong)(longlong)ROUND(*param_1 * 32767.0 + *param_1 * 32767.0 + 0.5) >> 1) +
            0x8000;
    local_74 = 0;
    if (0 < (int)uVar2) {
      local_74 = uVar2;
    }
    if (0xfffe < (int)local_74) {
      local_74 = 0xffff;
    }
    (**(code **)(*param_2 + 0x180))(param_2,&local_74,0x10000);
    uVar3 = (int)((ulonglong)(longlong)ROUND(param_1[1] * 32767.0 + param_1[1] * 32767.0 + 0.5) >> 1
                 ) + 0x8000;
    local_74 = 0;
    if (0 < (int)uVar3) {
      local_74 = uVar3;
    }
    if (0xfffe < (int)local_74) {
      local_74 = 0xffff;
    }
    (**(code **)(*param_2 + 0x180))(param_2,&local_74,0x10000);
    uVar1 = (int)((ulonglong)(longlong)ROUND(param_1[2] * 32767.0 + param_1[2] * 32767.0 + 0.5) >> 1
                 ) + 0x8000;
    local_74 = 0;
    if (0 < (int)uVar1) {
      local_74 = uVar1;
    }
    if (0xfffe < (int)local_74) {
      local_74 = 0xffff;
    }
    (**(code **)(*param_2 + 0x180))(param_2,&local_74,0x10000);
    bVar4 = (uVar1 | uVar3 | uVar2) < 0x10000;
  }
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406078b6 FUN_1406078b6 body=32 status=ok
// SIG undefined FUN_1406078b6(void)

undefined8 * FUN_1406078b6(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14a486ab0;
  return param_1;
}



// FUNCTION 1406078d6 FUN_1406078d6 body=130 status=ok
// SIG undefined FUN_1406078d6(void)

undefined8 * FUN_1406078d6(undefined8 *param_1)

{
  FUN_1406ed660();
  *param_1 = &PTR_FUN_14a46d590;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xe0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x10) = 3;
  return param_1;
}



// FUNCTION 140607958 FUN_140607958 body=71 status=ok
// SIG undefined FUN_140607958(void)

undefined8 * FUN_140607958(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e70830;
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  param_1[0xe] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406079a0 FUN_1406079a0 body=29 status=ok
// SIG undefined FUN_1406079a0(void)

undefined8 FUN_1406079a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406079be FUN_1406079be body=29 status=ok
// SIG undefined FUN_1406079be(void)

undefined8 FUN_1406079be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406079dc FUN_1406079dc body=29 status=ok
// SIG undefined FUN_1406079dc(void)

undefined8 FUN_1406079dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140607a08 FUN_140607a08 body=1905 status=ok
// SIG undefined FUN_140607a08(void)

undefined8 FUN_140607a08(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  double dVar4;
  byte bVar6;
  __uint64 *p_Var7;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  __uint64 _Var16;
  void *pvVar17;
  char cVar18;
  uint uVar19;
  void *pvVar20;
  longlong lVar21;
  __uint64 *p_Var22;
  bool bVar23;
  undefined1 uVar24;
  __uint64 *p_Var25;
  longlong *plVar26;
  longlong lVar27;
  longlong *plVar28;
  ulonglong uVar29;
  ulonglong _Size;
  longlong lVar30;
  bool bVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined1 auStackY_178 [32];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  longlong *local_110;
  void *local_108;
  double local_100;
  ulonglong local_f0;
  double dVar5;
  
  uVar36 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStackY_178;
  if (DAT_14cb26560 != 0) {
    FUN_140396844();
  }
  if (0 < DAT_14cb25a08) {
    uVar29 = 0;
    bVar23 = false;
LAB_140607ab8:
    lVar27 = uVar29 * 0x30;
    do {
      lVar30 = DAT_14cb25a00;
      local_118 = *(ulonglong *)(DAT_14cb25a00 + 0x10 + lVar27);
      pfVar3 = (float *)(DAT_14cb25a00 + lVar27);
      local_128 = *pfVar3;
      fStack_124 = pfVar3[1];
      fStack_120 = pfVar3[2];
      fStack_11c = pfVar3[3];
      local_110 = *(longlong **)(DAT_14cb25a00 + 0x18 + lVar27);
      if (local_110 != (longlong *)0x0) {
        *(int *)(local_110 + 0x21) = (int)local_110[0x21] + 1;
      }
      local_108 = (void *)0x0;
      uVar19 = *(uint *)(lVar30 + lVar27 + 0x28);
      _Size = (ulonglong)(int)uVar19;
      pvVar20 = *(void **)(lVar30 + lVar27 + 0x20);
      local_100 = (double)CONCAT44(local_100._4_4_,uVar19);
      if (_Size == 0) {
        local_100 = (double)(ulonglong)uVar19;
      }
      else {
        FUN_141819f54(&local_108,uVar19);
        memcpy(local_108,pvVar20,_Size);
        param_3 = _Size;
      }
      pvVar20 = (void *)CONCAT44(fStack_124,local_128);
      bVar11 = true;
      if (((pvVar20 != (void *)0x0) &&
          (lVar30 = *(longlong *)((longlong)pvVar20 + 0x18), lVar30 != 0)) &&
         ((DAT_14cb26569 & 1) != 0)) {
        _Var16 = CONCAT44(fStack_11c,fStack_120);
        param_3 = CONCAT71((int7)(param_3 >> 8),_Var16 == 0xffffffffffffffff);
        if ((local_110 != (longlong *)0x0 && _Var16 != 0xffffffffffffffff) &&
           (DAT_14cb25ab0 == '\x01')) {
          uVar19 = *(uint *)(*(longlong *)(lVar30 + 0x50) + 8);
          param_3 = (ulonglong)uVar19;
          if (uVar19 == 5) {
LAB_140607c77:
            FUN_140396cf6(local_110,pvVar20);
          }
          else if (uVar19 == 3) {
            bVar11 = false;
          }
          else if (uVar19 == 2) {
            *(undefined1 *)((longlong)pvVar20 + 0x20) = 0;
            param_3 = local_118 & 0xffffffff;
            uVar19 = AK::SoundEngine::PostEvent
                               (*(uint *)(lVar30 + 0x38),_Var16,(uint)local_118,FUN_1438aa952,
                                pvVar20,0,(AkExternalSourceInfo *)0x0,0);
            pvVar17 = local_108;
            *(uint *)((longlong)pvVar20 + 8) = uVar19;
            if (uVar19 == 0) {
              pvVar20 = (void *)CONCAT44(fStack_124,local_128);
              goto LAB_140607c77;
            }
            lVar30 = (longlong)local_100._0_4_;
            if (lVar30 != 0) {
              lVar21 = 0;
              do {
                lVar15 = CONCAT44(fStack_124,local_128);
                if (lVar15 != 0) {
                  bVar6 = *(byte *)((longlong)pvVar17 + lVar21);
                  param_3 = 0;
                  AK::SoundEngine::ExecuteActionOnPlayingID((uint)bVar6,*(uint *)(lVar15 + 8),0,4);
                  *(byte *)(lVar15 + 0x22) = bVar6;
                }
                lVar21 = lVar21 + 1;
              } while (lVar30 != lVar21);
            }
            bVar31 = (longlong)local_100 < 0;
            local_100 = (double)((ulonglong)local_100 & 0xffffffff00000000);
            if (bVar31) {
              FUN_147f806e6(&local_108);
            }
          }
        }
      }
      if (local_108 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar28 = local_110;
      if (((local_110 != (longlong *)0x0) &&
          (*(int *)(local_110 + 0x21) = (int)local_110[0x21] + -1, (int)local_110[0x26] < 1)) &&
         (FUN_1400847bc(local_110 + 0x17,0), (int)plVar28[0x21] == 0)) {
        FUN_140087e46(plVar28);
        if (*plVar28 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_140607cbe;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40));
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30));
        }
      }
LAB_140607cbe:
      if (!bVar11) goto LAB_140607d39;
      FUN_14181a07e(uVar29 & 0xffffffff);
      bVar23 = true;
      if ((longlong)DAT_14cb25a08 <= (longlong)uVar29) goto LAB_140607d52;
    } while( true );
  }
LAB_140607d57:
  FUN_1438ab7ba();
  if ((DAT_14c866ff0 == '\0') && (DAT_14c846570 != (code *)0x0)) {
    cVar18 = (*DAT_14c846570)();
    if ((cVar18 != '\0' || *(char *)(param_1 + 0xd0) != '\0') || (*(char *)(param_1 + 0xd1) != '\0')
       ) {
      if ((*(char *)(param_1 + 0xd0) == '\0') ||
         ((cVar18 == '\0' && (*(char *)(param_1 + 0xd1) != '\x01')))) goto LAB_140607dca;
      goto LAB_140607db0;
    }
    uVar24 = 1;
    AK::SoundEngine::Suspend(true,true);
  }
  else {
    if (*(char *)(param_1 + 0xd0) == '\0') goto LAB_140607dca;
LAB_140607db0:
    uVar24 = 0;
    AK::SoundEngine::WakeupFromSuspend(0);
  }
  *(undefined1 *)(param_1 + 0xd0) = uVar24;
LAB_140607dca:
  AK::SoundEngine::RenderAudio(true);
  lVar27 = FUN_140ce13fe();
  if (lVar27 != 0) {
    FUN_1438aa432(lVar27);
  }
  lVar27 = (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x18);
  if (lVar27 != 0) {
    plVar28 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x10);
    plVar26 = plVar28 + lVar27 * 2;
    do {
      p_Var7 = (__uint64 *)*plVar28;
      plVar8 = (longlong *)plVar28[1];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if (p_Var7 != (__uint64 *)0x0) {
        p_Var22 = p_Var7 + 6;
        p_Var25 = p_Var7 + 0x12;
        for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
          *p_Var25 = *p_Var22;
          p_Var22 = p_Var22 + 1;
          p_Var25 = p_Var25 + 1;
        }
        if ((*p_Var7 != 0xffffffffffffffff) && (DAT_14cb25ab0 == '\x01')) {
          dVar12 = (double)p_Var7[0x12];
          dVar13 = (double)p_Var7[0x13];
          dVar14 = (double)p_Var7[0x14];
          dVar4 = (double)p_Var7[0x15];
          dVar5 = (double)p_Var7[0x15];
          dVar34 = dVar12 * 0.0 - dVar13 * 0.0;
          dVar35 = dVar13 * 1.0 - dVar14 * 0.0;
          dVar32 = dVar14 * 0.0 - dVar12 * 1.0;
          dVar35 = dVar35 + dVar35;
          dVar32 = dVar32 + dVar32;
          dVar34 = dVar34 + dVar34;
          dVar9 = dVar12 * 0.0 - dVar13 * 1.0;
          dVar10 = dVar13 * 0.0 - dVar14 * 0.0;
          dVar33 = dVar14 * 1.0 - dVar12 * 0.0;
          dVar10 = dVar10 + dVar10;
          dVar33 = dVar33 + dVar33;
          dVar9 = dVar9 + dVar9;
          fStack_124 = (float)(dVar9 * dVar4 + 0.0 + (dVar33 * dVar12 - dVar10 * dVar13));
          local_128 = -(float)((dVar9 * dVar13 - dVar33 * dVar14) + dVar4 * dVar10 + 1.0);
          fStack_120 = (float)((dVar14 * dVar10 - dVar12 * dVar9) + dVar5 * dVar33 + 0.0);
          fStack_11c = -(float)((dVar34 * dVar13 - dVar32 * dVar14) + dVar4 * dVar35 + 0.0);
          local_110 = (longlong *)(double)-(float)(double)p_Var7[0x16];
          local_108 = (void *)(double)(float)(double)p_Var7[0x18];
          local_100 = (double)(float)(double)p_Var7[0x17];
          uVar36 = 0;
          local_118 = CONCAT44((float)((dVar14 * dVar35 - dVar12 * dVar34) + dVar5 * dVar32 + 0.0),
                               (float)(dVar34 * dVar4 + 1.0 + (dVar32 * dVar12 - dVar35 * dVar13)));
          param_3 = CONCAT71((int7)(param_3 >> 8),3);
          AK::SoundEngine::SetPosition
                    (*p_Var7,(AkWorldTransform *)&local_128,(AkSetPositionFlags)param_3);
        }
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
      plVar28 = plVar28 + 2;
    } while (plVar28 != plVar26);
  }
  FUN_1400725c0(*(undefined8 *)(param_1 + 0x70));
  FUN_1438aa0ba(*(undefined8 *)(param_1 + 0x50),CONCAT44(uVar36,(int)param_2));
  if ((local_f0 ^ (ulonglong)auStackY_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
LAB_140607d39:
  uVar29 = uVar29 + 1;
  if ((longlong)DAT_14cb25a08 <= (longlong)uVar29) goto code_r0x000140607d4c;
  goto LAB_140607ab8;
code_r0x000140607d4c:
  if (bVar23) {
LAB_140607d52:
    FUN_141819ea8();
  }
  goto LAB_140607d57;
}



// FUNCTION 140608187 FUN_140608187 body=518 status=ok
// SIG undefined FUN_140608187(void)

undefined8 * FUN_140608187(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  
  if (DAT_14c760a14 == '\x01') {
    cVar3 = FUN_14006f626(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_1 * 2));
    if (cVar3 != '\0') {
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xea8);
      puVar5 = (uint *)*puVar1;
      if (puVar5 != (uint *)0x0) goto LAB_1406081fb;
      while( true ) {
        FUN_14472e504(puVar1);
        puVar5 = (uint *)*puVar1;
LAB_1406081fb:
        puVar8 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
        uVar7 = puVar5[0x12];
        if (puVar8 + 0x11 <= puVar5 + 0x4000) break;
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
          puVar8 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
          uVar7 = 0;
          if (puVar8 + 0x11 <= puVar5 + 0x4000) {
            uVar7 = 1;
            goto LAB_140608279;
          }
        }
      }
      uVar7 = uVar7 + 1;
LAB_140608279:
      *(undefined8 **)(puVar5 + 0x10) = puVar8 + 0x12;
      puVar5[0x12] = uVar7;
      *(int *)(puVar8 + -1) = ((int)puVar8 + -8) - (int)puVar5;
      *(undefined4 *)((longlong)puVar8 + -4) = 0x88;
      *(undefined4 *)(puVar8 + 1) =
           *(undefined4 *)(&DAT_14ca11f44 + (ulonglong)(2 < param_1) * 0xe8);
      *(undefined2 *)(puVar8 + 2) = 0x909;
      puVar8[3] = param_2;
      *(int *)(puVar8 + 4) = param_1;
      puVar8[5] = param_3;
      puVar8[6] = param_4;
      *(undefined1 *)(puVar8 + 7) = 0x3a;
      *puVar8 = &PTR_FUN_14a2fe4f0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      *(undefined4 *)(puVar8 + 10) = 0x11;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      *(undefined4 *)(puVar8 + 0xf) = 0;
      *(undefined4 *)(puVar8 + 0x10) = 8;
      *(undefined1 *)((longlong)puVar8 + 0x84) = 3;
      cVar4 = FUN_144adbdbb(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_1 * 2),param_1);
      uVar7 = *(uint *)(puVar8 + 0x10) & 1;
      cVar3 = '\x03';
      if (cVar4 != '\0') {
        cVar3 = (char)uVar7 + '\x01';
      }
      puVar9 = &DAT_14c9c0e90;
      if ((*(uint *)(puVar8 + 0x10) & 8) == 0) {
        puVar9 = &DAT_14ca19738;
      }
      *(char *)((longlong)puVar8 + 0x84) = cVar3;
      puVar6 = &DAT_14c9c0d88;
      if (uVar7 == 0) {
        puVar6 = puVar9;
      }
      puVar8[8] = DAT_14c9c4540;
      puVar8[9] = *(undefined8 *)(puVar6 + 0x10);
      *(undefined4 *)(puVar8 + 0xf) = 0;
      return puVar8;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14060838e FUN_14060838e body=1427 status=ok
// SIG undefined FUN_14060838e(void)

undefined8 FUN_14060838e(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar5 = *(longlong **)(*param_2 + 8);
  if ((int)plVar5[8] < 0x178) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    uVar7 = local_68 >> 0x20;
    local_68 = local_68 & 0xffffffff00000000;
    puVar6 = (ulonglong *)plVar5[1];
    puVar1 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_68);
      }
      else {
        FUN_14572512c(plVar5,&local_68);
      }
    }
    else {
      local_68 = CONCAT44((int)uVar7,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar1;
    }
    if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
      FUN_1406089a0(&local_58);
    }
    if (0 < (int)local_68) {
      lVar17 = 0;
      do {
        (**(code **)(**(longlong **)(*param_2 + 8) + 0x160))();
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)local_68);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_58 = (longlong *)CONCAT44(local_58._4_4_,(int)param_3[1]);
    puVar6 = (ulonglong *)plVar5[1];
    puVar1 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_58);
      }
      else {
        FUN_14572512c(plVar5,&local_58);
      }
    }
    else {
      local_58 = (longlong *)CONCAT44(local_58._4_4_,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar1;
    }
    if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
      FUN_140608a1c(param_3);
    }
    if (0 < (int)local_58) {
      lVar17 = 0;
      do {
        (**(code **)(**(longlong **)(*param_2 + 8) + 0x160))();
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)local_58);
    }
  }
  bVar3 = *(byte *)(plVar5 + 5);
  if ((bVar3 & 1) != 0) {
    if (((*(byte *)((longlong)plVar5 + 0x29) & 1) != 0) &&
       ((*(ushort *)((longlong)plVar5 + 0x35) & 0x4010) == 0)) {
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      lVar17 = DAT_14caa8580;
      local_58 = (longlong *)0x0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      if (0 < (int)param_3[1]) {
        lVar15 = 0;
        do {
          lVar16 = *(longlong *)(*param_3 + lVar15 * 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14caa8238) && (FUN_144b3d300(&DAT_14caa8238), DAT_14caa8238 == -1)) {
            FUN_1432721ec(&DAT_14caa81e8);
            atexit(FUN_143272a51);
            _Init_thread_footer(&DAT_14caa8238);
          }
          if (DAT_14caa81f0 != DAT_14caa821c) {
            uVar8 = (uint)((ulonglong)lVar16 >> 0x10);
            uVar11 = (uint)lVar16 & 0xffff;
            puVar10 = DAT_14caa8228;
            if (DAT_14caa8228 == (undefined *)0x0) {
              puVar10 = &DAT_14caa8220;
            }
            iVar4 = *(int *)(puVar10 +
                            (ulonglong)
                            (DAT_14caa8230 - 1U &
                            (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar11) +
                            (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar11 >> 4)) * 4);
            while (iVar4 != -1) {
              plVar2 = (longlong *)(DAT_14caa81e8 + (longlong)iVar4 * 0x18);
              if (*plVar2 == lVar16) {
                if (plVar2 != (longlong *)0x0) {
                  lVar13 = (longlong)(int)uStack_50;
                  uVar8 = (int)uStack_50 + 1;
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
                  if (uStack_50._4_4_ < uVar8) {
                    FUN_1446f84a2(&local_58);
                  }
                  local_58[lVar13] = lVar16;
                  if (plVar2[1] != 0) {
                    lVar16 = (longlong)(int)uStack_60;
                    uVar8 = (int)uStack_60 + 1;
                    uStack_60 = CONCAT44(uStack_60._4_4_,uVar8);
                    if (uStack_60._4_4_ < uVar8) {
                      FUN_14747e17a(&local_68);
                    }
                    *(longlong **)(local_68 + lVar16 * 8) = plVar2 + 1;
                  }
                }
                break;
              }
              iVar4 = (int)plVar2[2];
            }
          }
          lVar15 = lVar15 + 1;
        } while ((int)lVar15 < (int)param_3[1]);
        if ((longlong)(int)uStack_50 != 0) {
          plVar2 = local_58 + (int)uStack_50;
          plVar12 = local_58;
          do {
            iVar4 = (int)param_3[1];
            if ((longlong)iVar4 != 0) {
              lVar16 = *param_3;
              lVar15 = (longlong)iVar4 * 8;
              lVar13 = 0;
              lVar14 = 0;
              do {
                if (*(longlong *)(lVar16 + lVar13 * 8) == *plVar12) {
                  if ((uint)lVar13 != 0xffffffff) {
                    memmove((void *)(lVar16 + (lVar14 >> 0x20) * 8),
                            (void *)(lVar16 + (lVar14 >> 0x20) * 8 + 8),
                            (longlong)(int)(~(uint)lVar13 + iVar4) << 3);
                    *(int *)(param_3 + 1) = (int)param_3[1] + -1;
                    FUN_1401fa756(param_3);
                  }
                  break;
                }
                lVar14 = lVar14 + 0x100000000;
                lVar13 = lVar13 + 1;
                lVar15 = lVar15 + -8;
              } while (lVar15 != 0);
            }
            plVar12 = plVar12 + 1;
          } while (plVar12 != plVar2);
        }
      }
      lVar15 = (longlong)(int)uStack_60;
      if (lVar15 != 0) {
        lVar16 = 0;
        do {
          FUN_140608954(param_3);
          lVar16 = lVar16 + 8;
        } while (lVar15 * 8 != lVar16);
      }
      if (local_68 != 0) {
        FUN_1400020a8(local_68);
      }
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar17 + 0x28);
      EnterCriticalSection(lpCriticalSection);
      if ((longlong)*(int *)(lVar17 + 0x58) != 0) {
        lVar15 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar17 + 0x50) + 8 + lVar15) != 0) &&
             (*(longlong *)(*(longlong *)(lVar17 + 0x50) + lVar15) != 0)) {
            LeaveCriticalSection(lpCriticalSection);
            uVar8 = *(uint *)(param_3 + 1);
            if ((ulonglong)uVar8 != 0) {
              lVar17 = 0;
              do {
                FUN_1401d2d7a(lpCriticalSection,*param_3 + lVar17);
                lVar17 = lVar17 + 8;
              } while ((ulonglong)uVar8 << 3 != lVar17);
            }
            goto LAB_1406084ea;
          }
          lVar15 = lVar15 + 0x10;
        } while ((longlong)*(int *)(lVar17 + 0x58) * 0x10 != lVar15);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
LAB_1406084ea:
    FUN_1401fa756(param_3);
    bVar3 = *(byte *)(plVar5 + 5);
  }
  if (((bVar3 & 4) != 0) && ((longlong)(int)param_3[1] != 0)) {
    lVar17 = *param_3;
    lVar15 = (longlong)(int)param_3[1] << 3;
    do {
      if (DAT_14caa7e28 == (longlong *)0x0) {
        uVar9 = FUN_140608922();
        DAT_14caa7e28 = (longlong *)FUN_140002ddd(FUN_1417948e9,uVar9,L"GameplayTag");
      }
      local_58 = DAT_14caa7e28;
      if ((DAT_14caa7e28 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(DAT_14caa7e28);
      }
      (**(code **)(*plVar5 + 0x210))(plVar5,&local_58,lVar17);
      lVar17 = lVar17 + 8;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140608922 FUN_140608922 body=49 status=ok
// SIG undefined FUN_140608922(void)

longlong FUN_140608922(void)

{
  if (DAT_14caa7c70 == 0) {
    FUN_140f50038(&DAT_14caa7c70,&PTR_s__Script_GameplayTags_14a3d73d8);
  }
  return DAT_14caa7c70;
}



// FUNCTION 140608954 FUN_140608954 body=76 status=ok
// SIG undefined FUN_140608954(void)

void FUN_140608954(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_144976e62();
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1403a41cc(DAT_14caa8580,param_2,param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 1406089a0 FUN_1406089a0 body=123 status=ok
// SIG undefined FUN_1406089a0(void)

void FUN_1406089a0(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1446f84a2(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1406ce816(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140608a1c FUN_140608a1c body=110 status=ok
// SIG undefined FUN_140608a1c(void)

void FUN_140608a1c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1403de658(param_1,iVar1);
    }
    FUN_140608a8b((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_14572d304(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140608a8b FUN_140608a8b body=19 status=ok
// SIG undefined FUN_140608a8b(void)

void FUN_140608a8b(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 140608a9e FUN_140608a9e body=524 status=ok
// SIG undefined FUN_140608a9e(void)

void FUN_140608a9e(void)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined1 local_88 [40];
  undefined8 local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,2);
  lVar4 = 0;
  FUN_14626c8e8(local_88,1,L"UGameplayTagsManager::InitializeManager",0);
  local_c0 = 0;
  local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffffffffff00);
  DAT_14caa8580 = FUN_146327ed3(DAT_14c951640,0,0,0);
  uVar1 = *(uint *)(DAT_14caa8580 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  FUN_1447f71cc(lVar4,0x40000000);
  plVar2 = (longlong *)FUN_1413eaf12();
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
  }
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_c8 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,L"GameplayTags",L"+GameplayTagTableList",&local_98);
  uVar5 = (ulonglong)(int)uStack_90;
  if (0 < (longlong)uVar5) {
    puVar6 = local_98 + uVar5 * 2;
    puVar3 = local_98;
    do {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_60 = *puVar3;
      local_58 = *(int *)(puVar3 + 1) + -1;
      if (*(int *)(puVar3 + 1) == 0) {
        local_58 = 0;
      }
      FUN_14475bf92(&local_b8,&local_60);
      FUN_144a1f04a(lVar4 + 0x70,&local_b8);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar6);
    uVar5 = uStack_90 & 0xffffffff;
  }
  FUN_1447a1747(local_98,uVar5 & 0xffffffff);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_143272ae8(DAT_14caa8580,1);
  FUN_14327338a(DAT_14caa8580);
  FUN_146327fb0(&DAT_14c872cf8,&local_b8,DAT_14caa8580,FUN_1415b3a38);
  FUN_142791572(local_88);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140608cb6 FUN_140608cb6 body=378 status=ok
// SIG undefined FUN_140608cb6(void)

/* WARNING: Switch with 1 destination removed at 0x000140608d1e : 6 cases all go to same destination
    */

undefined8
FUN_140608cb6(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [47];
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = *(byte *)(param_1 + 8);
  (**(code **)(*param_2 + 0x178))(param_2,&local_29,3);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    switch(local_29) {
    case 0:
      goto switchD_140608d80_caseD_0;
    case 1:
      goto switchD_140608d80_caseD_1;
    case 2:
      goto switchD_140608d80_caseD_2;
    case 3:
    case 4:
    case 5:
      goto switchD_140608d80_caseD_3;
    default:
      goto switchD_140608d80_default;
    }
  }
  switch(local_29) {
  case 0:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 8) = 0;
switchD_140608d80_caseD_0:
    FUN_14480c34d(param_2,param_1);
    goto switchD_140608d80_default;
  case 1:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
switchD_140608d80_caseD_1:
    FUN_1401fb57a(param_2,param_1);
    goto switchD_140608d80_default;
  case 2:
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 8) = 2;
switchD_140608d80_caseD_2:
    FUN_140608e37(param_2,param_1);
    goto switchD_140608d80_default;
  case 3:
    *param_1 = 0;
    uVar3 = DAT_14c846500._4_4_;
    uVar2 = (undefined4)DAT_14c846500;
    uVar1 = DAT_14c8464f8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)DAT_14c8464f8;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    param_1[3] = DAT_14c846508;
    *(undefined1 *)(param_1 + 8) = 3;
    break;
  case 4:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 4;
    break;
  case 5:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 5;
    break;
  default:
    if (*(byte *)(param_1 + 8) < 6) {
      *(undefined1 *)(param_1 + 8) = 0xff;
    }
    goto switchD_140608d80_default;
  }
switchD_140608d80_caseD_3:
  (**(code **)(*param_2 + 0x120))(param_2,param_1);
switchD_140608d80_default:
  *param_4 = 1;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140608e37 FUN_140608e37 body=73 status=ok
// SIG undefined FUN_140608e37(void)

longlong * FUN_140608e37(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x120))();
  (**(code **)(*param_1 + 0x120))(param_1,param_2 + 0x18);
  FUN_140608e80(param_1,param_2 + 0x30);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    FUN_14070d956(param_2);
  }
  return param_1;
}



// FUNCTION 140608e80 FUN_140608e80 body=102 status=ok
// SIG undefined FUN_140608e80(void)

longlong * FUN_140608e80(longlong *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1[1];
  if ((char *)((undefined8 *)param_1[1])[1] < pcVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *pcVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  if ((byte)(*param_2 - 3U) < 2) {
    (**(code **)(*param_1 + 0x160))(param_1,param_2 + 4);
  }
  return param_1;
}



// FUNCTION 140608ef3 FUN_140608ef3 body=521 status=ok
// SIG undefined FUN_140608ef3(void)

undefined8 * FUN_140608ef3(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  cVar3 = FUN_144adbdbb(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_1 * 2),param_1);
  if (cVar3 == '\0') {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_140608f5d;
    while( true ) {
      FUN_14472e504(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_140608f5d:
      puVar9 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      uVar7 = puVar5[0x12];
      if (puVar9 + 0x11 <= puVar5 + 0x4000) break;
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
        puVar9 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        uVar7 = 0;
        if (puVar9 + 0x11 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_140608fdb;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_140608fdb:
    *(undefined8 **)(puVar5 + 0x10) = puVar9 + 0x12;
    puVar5[0x12] = uVar7;
    *(int *)(puVar9 + -1) = ((int)puVar9 + -8) - (int)puVar5;
    *(undefined4 *)((longlong)puVar9 + -4) = 0x88;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(&DAT_14ca11f40 + (ulonglong)(2 < param_1) * 0xe8);
    *(undefined2 *)(puVar9 + 2) = 0x808;
    puVar9[3] = param_2;
    *(int *)(puVar9 + 4) = param_1;
    puVar9[5] = param_3;
    puVar9[6] = param_4;
    *(undefined1 *)(puVar9 + 7) = 0x3a;
    *puVar9 = &PTR_FUN_14a2fe4f0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    *(undefined4 *)(puVar9 + 10) = 0x11;
    puVar9[0xb] = 0;
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    *(undefined4 *)(puVar9 + 0xf) = 0;
    *(undefined4 *)(puVar9 + 0x10) = 3;
    *(undefined1 *)((longlong)puVar9 + 0x84) = 3;
    cVar4 = FUN_144adbdbb(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_1 * 2),param_1);
    uVar7 = *(uint *)(puVar9 + 0x10) & 1;
    cVar3 = (char)uVar7 + '\x01';
    if (cVar4 == '\0') {
      cVar3 = '\x03';
    }
    puVar6 = &DAT_14c9c0e90;
    if ((*(uint *)(puVar9 + 0x10) & 8) == 0) {
      puVar6 = &DAT_14ca19738;
    }
    *(char *)((longlong)puVar9 + 0x84) = cVar3;
    puVar8 = &DAT_14c9c0d88;
    if (uVar7 == 0) {
      puVar8 = puVar6;
    }
    puVar9[8] = DAT_14c9c4540;
    puVar9[9] = *(undefined8 *)(puVar8 + 0x10);
    *(undefined4 *)(puVar9 + 0xf) = 0;
  }
  return puVar9;
}



// FUNCTION 140609112 FUN_140609112 body=508 status=ok
// SIG undefined FUN_140609112(void)

void FUN_140609112(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x30);
  FUN_140609408();
  if (lVar3 != 0) {
    bVar1 = *(byte *)(param_1 + 0x98);
    *(byte *)(param_1 + 0x98) = bVar1 | 0x10;
    if (*(char *)(lVar3 + 0x178) == '\x03' || (bVar1 & 1) != 0) {
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x60) + 0x14c);
      if (cVar2 == '\0') {
        if ((bVar1 & 2) == 0) {
          *(byte *)(param_1 + 0x98) = bVar1 | 0x12;
          local_38 = 0;
          uStack_30 = 0;
          FUN_1446f470e(&local_40,L"OnActivationTrigger",1);
          FUN_14485c47a(&local_38,param_1);
          local_50 = local_38;
          local_48 = local_40;
          FUN_140609310(lVar3,&local_50,*(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x14d));
          if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x14e) == '\x03') {
            FUN_1446f470e(&local_40,L"OnZoomingOut",1);
            FUN_14485c47a(&local_38,param_1);
            local_60 = local_38;
            local_58 = local_40;
            FUN_140609310(lVar3,&local_60,3);
          }
          FUN_1446f470e(&local_40,L"OnDeactivationTrigger",1);
          FUN_14485c47a(&local_38,param_1);
          local_70 = local_38;
          local_68 = local_40;
          FUN_140609310(lVar3,&local_70,0);
        }
      }
      else if ((cVar2 == '\x01') && (*(char *)(lVar3 + 0x178) == '\x03')) {
        if ((bVar1 & 0x20) != 0) {
          *(byte *)(param_1 + 0x98) = bVar1 & 0xdf | 0x10;
          FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x40),0);
        }
        FUN_14592b392(param_1);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x98);
    if ((((bVar1 & 0x20) != 0) && ((bVar1 & 0x10) != 0)) && (*(char *)(lVar3 + 0x178) != '\x03')) {
      *(byte *)(param_1 + 0x98) = bVar1 & 0xdf;
      FUN_14592b392(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140609310 FUN_140609310 body=247 status=ok
// SIG undefined FUN_140609310(void)

void FUN_140609310(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_3) {
  case 0:
    param_1 = param_1 + 0xa90;
    break;
  case 1:
    local_38 = *param_2;
    local_30 = param_2[1];
    FUN_1403350f6(param_1 + 0xa60);
    FUN_144a7b126(param_1 + 0xa60,&local_21,1);
  case 2:
    local_38 = *param_2;
    local_30 = param_2[1];
    FUN_1403350f6(param_1 + 0xa70);
    FUN_144a7b126(param_1 + 0xa70,&local_21,1);
  case 3:
    param_1 = param_1 + 0xa80;
    break;
  default:
    goto switchD_140609348_default;
  }
  local_38 = *param_2;
  local_30 = param_2[1];
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
switchD_140609348_default:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140609408 FUN_140609408 body=2145 status=ok
// SIG undefined FUN_140609408(void)

void FUN_140609408(longlong *param_1)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  char *pcVar12;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined8 *local_160;
  longlong local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  void *local_118;
  ulonglong uStack_110;
  ulonglong local_108 [3];
  int local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined5 uStack_d8;
  uint7 uStack_d3;
  undefined1 uStack_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  uint local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar7 = param_1[6];
  if ((lVar7 == 0) || (plVar6 = (longlong *)FUN_1401901a6(lVar7), plVar6 == (longlong *)0x0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = (**(code **)(*plVar6 + 0x6c8))(plVar6);
  }
  bVar2 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar2 & 0xfa | bVar5 | 4;
  local_150 = lVar7;
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x178) != '\x03')) {
    if (bVar5 != 0) {
      local_140 = *(undefined8 *)(param_1[0xc] + 0x30);
      FUN_1446dcdd4(&local_138);
      lVar7 = FUN_140609c84(&local_138);
      if (CONCAT44(uStack_11c,uStack_120) != 0) {
        FUN_1400020a8();
      }
      if ((lVar7 != 0) && (lVar11 = *(longlong *)(param_1[6] + 0x1b0), lVar11 != 0)) {
        uVar9 = FUN_1403c7982();
        plVar6 = (longlong *)FUN_144718840(lVar11,uVar9);
        if (plVar6 != (longlong *)0x0) {
          uVar9 = (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_1403c7952(uVar9,&local_138,lVar7,0);
          param_1[0x16] = CONCAT44(uStack_124,local_128);
          param_1[0x17] = CONCAT44(uStack_11c,uStack_120);
          *(undefined4 *)(param_1 + 0x14) = (undefined4)local_138;
          *(undefined4 *)((longlong)param_1 + 0xa4) = local_138._4_4_;
          *(undefined4 *)(param_1 + 0x15) = (undefined4)uStack_130;
          *(undefined4 *)((longlong)param_1 + 0xac) = uStack_130._4_4_;
        }
      }
    }
  }
  else {
    plVar6 = param_1 + 0x14;
    FUN_140609c6a(plVar6);
    local_140 = *(undefined8 *)(param_1[0xc] + 0x30);
    FUN_1446dcdd4(&local_138);
    lVar7 = FUN_140609c84(&local_138);
    if (CONCAT44(uStack_11c,uStack_120) != 0) {
      FUN_1400020a8();
    }
    if ((lVar7 != 0) && (lVar11 = *(longlong *)(param_1[6] + 0x1b0), lVar11 != 0)) {
      uVar9 = FUN_1403c7982();
      plVar8 = (longlong *)FUN_144718840(lVar11,uVar9);
      if (plVar8 != (longlong *)0x0) {
        uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_1403c7952(uVar9,&local_138,lVar7,0);
        *(undefined4 *)(param_1 + 0x16) = local_128;
        *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_124;
        *(undefined4 *)(param_1 + 0x17) = uStack_120;
        *(undefined4 *)((longlong)param_1 + 0xbc) = uStack_11c;
        *(undefined4 *)plVar6 = (undefined4)local_138;
        *(undefined4 *)((longlong)param_1 + 0xa4) = local_138._4_4_;
        *(undefined4 *)(param_1 + 0x15) = (undefined4)uStack_130;
        *(undefined4 *)((longlong)param_1 + 0xac) = uStack_130._4_4_;
        cVar4 = FUN_14486ea84(plVar6);
        if (cVar4 == '\0') {
          uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
          FUN_14036c7e6(uVar9,&local_138,lVar7,0);
          param_1[0x16] = CONCAT44(uStack_124,local_128);
          param_1[0x17] = CONCAT44(uStack_11c,uStack_120);
          *(undefined4 *)plVar6 = (undefined4)local_138;
          *(undefined4 *)((longlong)param_1 + 0xa4) = local_138._4_4_;
          *(undefined4 *)(param_1 + 0x15) = (undefined4)uStack_130;
          *(undefined4 *)((longlong)param_1 + 0xac) = uStack_130._4_4_;
        }
      }
    }
    if ((0 < *(int *)(param_1[0xc] + 0xf8)) && ((int)param_1[0x12] == 0)) {
      local_138 = local_138 & 0xffffffffffffff00;
      uStack_110 = uStack_110 & 0xffffffff00000000;
      FUN_1456bb102(&local_138,*(undefined8 *)(param_1[6] + 0x1b0));
      lVar7 = local_150;
      local_108[0] = local_108[0] & 0xffffffffffffff00;
      uStack_e0 = 0;
      FUN_1456bb102(local_108,local_150);
      local_160 = &local_140;
      local_168 = 0;
      FUN_140c3fc86(param_1[0xc] + 0xf0,param_1 + 0x11,lVar7,&local_138);
      FUN_144a5ac3a(local_108);
      FUN_144a5ac3a(&local_138);
    }
    cVar4 = FUN_1403ae288(plVar6);
    if (cVar4 != '\0') {
      fVar1 = *(float *)(param_1 + 0x18);
      uVar9 = FUN_14008e0ae(plVar6);
      if (0.0 < fVar1) {
        FUN_14572d39c(uVar9,(longlong)param_1 + 0xc4);
        uVar9 = FUN_14008e0ae(plVar6);
        lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_144a01782(uVar9,(float)(*(double *)(lVar7 + 0x6d0) - (double)*(float *)(param_1 + 0x18))
                     );
        *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
      }
      else {
        FUN_140609d94(uVar9);
      }
    }
  }
  if ((bVar2 & 4) == 0) {
    lVar7 = (longlong)*(int *)(param_1[0xc] + 0x168);
    if (lVar7 != 0) {
      pcVar12 = *(char **)(param_1[0xc] + 0x160);
      local_148 = (longlong *)(local_150 + 0x8c0);
      lVar7 = lVar7 * 0x58;
      do {
        local_118 = (void *)0x0;
        uStack_110 = 0;
        local_108[0] = 0;
        local_108[1] = 0;
        local_108[2] = 0;
        local_f0 = -0x3a2553c8;
        uStack_d8 = 0;
        _uStack_d3 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        local_c8 = 1;
        local_c4 = 0;
        local_a8 = DAT_14c8464f0;
        local_b8 = DAT_14c8464e0;
        uStack_b0 = DAT_14c8464e8;
        local_90 = DAT_14c846508;
        local_a0 = DAT_14c8464f8;
        uStack_98 = DAT_14c846500;
        local_88 = 0x3f800000;
        local_70 = DAT_14c8464f0;
        local_80 = DAT_14c8464e0;
        uStack_78 = DAT_14c8464e8;
        local_68 = 0x3f800000;
        local_c0 = 10;
        local_138 = DAT_14cbe79e8;
        uStack_130 = *(undefined8 *)(pcVar12 + 8);
        local_128 = *(undefined4 *)(pcVar12 + 0x10);
        uStack_124 = *(undefined4 *)(pcVar12 + 0x14);
        uStack_120 = *(undefined4 *)(pcVar12 + 0x18);
        uStack_11c = *(undefined4 *)(pcVar12 + 0x1c);
        if (pcVar12 != (char *)&local_138) {
          uVar3 = *(uint *)(pcVar12 + 0x28);
          _Src = *(void **)(pcVar12 + 0x20);
          uStack_110 = (ulonglong)uVar3;
          if ((longlong)(int)uVar3 != 0) {
            FUN_1446dd670(&local_118,uVar3,0);
            memcpy(local_118,_Src,(longlong)(int)uVar3 * 2);
          }
        }
        if ((local_108[2] != *(longlong *)(pcVar12 + 0x30)) ||
           (local_f0 != *(int *)(pcVar12 + 0x38))) {
          local_f0 = *(int *)(pcVar12 + 0x38);
          local_e8 = 0;
          local_108[2] = *(longlong *)(pcVar12 + 0x30);
        }
        FUN_14065c7a4(local_108,param_1[0xc] + 0x150);
        FUN_140609c9a(local_108,pcVar12 + 0x48);
        uStack_e0 = (undefined4)*(undefined8 *)(param_1[0xc] + 0x180);
        uStack_dc = (undefined4)((ulonglong)*(undefined8 *)(param_1[0xc] + 0x180) >> 0x20);
        uStack_d3 = (uint7)CONCAT13(*pcVar12,(undefined3)uStack_d3);
        _uStack_d3 = CONCAT17(2,uStack_d3);
        local_c0 = (uint)(*pcVar12 == '\x03') << 4 | 2;
        if ((local_150 != 0) &&
           ((CONCAT44(uStack_124,local_128) != 0 ||
            ((local_108[2] != 0 && (local_f0 - 1U < 0xfffffffe)))))) {
          (**(code **)(*local_148 + 0x18))(local_148,&local_138);
        }
        if (local_108[0] != 0) {
          FUN_1400020a8();
        }
        if (local_118 != (void *)0x0) {
          FUN_1400020a8();
        }
        pcVar12 = pcVar12 + 0x58;
        lVar7 = lVar7 + -0x58;
      } while (lVar7 != 0);
    }
    if ((*(longlong *)(param_1[6] + 0x1b0) != 0) && (cVar4 = FUN_1449ce97a(), cVar4 != '\0')) {
      lVar7 = (longlong)*(int *)(param_1[0xc] + 0x178);
      if (lVar7 != 0) {
        plVar6 = (longlong *)(local_150 + 0x8c0);
        lVar7 = lVar7 * 0x58;
        lVar11 = *(longlong *)(param_1[0xc] + 0x170) + 0x48;
        do {
          local_108[0] = 0;
          local_108[1] = 0;
          local_118 = (void *)0x0;
          uStack_110 = 0;
          local_108[2] = 0;
          local_f0 = -0x3a2553c8;
          uStack_d8 = 0;
          _uStack_d3 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          local_c8 = 1;
          local_c4 = 0;
          local_a8 = DAT_14c8464f0;
          local_b8 = DAT_14c8464e0;
          uStack_b0 = DAT_14c8464e8;
          local_90 = DAT_14c846508;
          local_a0 = DAT_14c8464f8;
          uStack_98 = DAT_14c846500;
          local_88 = 0x3f800000;
          local_70 = DAT_14c8464f0;
          local_80 = DAT_14c8464e0;
          uStack_78 = DAT_14c8464e8;
          local_68 = 0x3f800000;
          local_c0 = 10;
          local_138 = DAT_14cbe79e8;
          uStack_130 = *(undefined8 *)(lVar11 + -0x40);
          local_128 = *(undefined4 *)(lVar11 + -0x38);
          uStack_124 = *(undefined4 *)(lVar11 + -0x34);
          uStack_120 = *(undefined4 *)(lVar11 + -0x30);
          uStack_11c = *(undefined4 *)(lVar11 + -0x2c);
          FUN_144a787a6(&local_118,lVar11 + -0x28);
          if (local_108[2] == *(longlong *)(lVar11 + -0x18)) {
            iVar10 = *(int *)(lVar11 + -0x10);
            if (local_f0 != iVar10) goto LAB_140609c1a;
          }
          else {
            iVar10 = *(int *)(lVar11 + -0x10);
LAB_140609c1a:
            local_e8 = 0;
            local_108[2] = *(longlong *)(lVar11 + -0x18);
            local_f0 = iVar10;
          }
          FUN_14065c7a4(local_108,param_1[0xc] + 0x150);
          FUN_140609c9a(local_108,lVar11,1);
          uStack_e0 = (undefined4)*(undefined8 *)(param_1[0xc] + 0x188);
          uStack_dc = (undefined4)((ulonglong)*(undefined8 *)(param_1[0xc] + 0x188) >> 0x20);
          uStack_d3 = (uint7)CONCAT13(*(undefined1 *)(lVar11 + -0x48),(undefined3)uStack_d3);
          _uStack_d3 = CONCAT17(1,uStack_d3);
          local_c0 = 10;
          if ((local_150 != 0) &&
             ((CONCAT44(uStack_124,local_128) != 0 ||
              ((local_108[2] != 0 && (local_f0 - 1U < 0xfffffffe)))))) {
            (**(code **)(*plVar6 + 0x18))(plVar6,&local_138);
          }
          if (local_108[0] != 0) {
            FUN_1400020a8();
          }
          if (local_118 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar11 = lVar11 + 0x58;
          lVar7 = lVar7 + -0x58;
        } while (lVar7 != 0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140609c6a FUN_140609c6a body=26 status=ok
// SIG undefined FUN_140609c6a(void)

void FUN_140609c6a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0xff;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 140609c84 FUN_140609c84 body=22 status=ok
// SIG undefined FUN_140609c84(void)

undefined8 FUN_140609c84(int *param_1)

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
  
  plVar4 = DAT_14cb7d760;
  if (DAT_14cb7d760 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb7d760 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb7d760 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb7d760[0x3a] <= *(int *)((longlong)DAT_14cb7d760 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb7d760 + 0x300))(DAT_14cb7d760);
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



// FUNCTION 140609c9a FUN_140609c9a body=249 status=ok
// SIG undefined FUN_140609c9a(void)

void FUN_140609c9a(longlong *param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar20 = (longlong *)*param_2;
    plVar21 = plVar20 + (longlong)(int)param_2[1] * 0xb;
    uVar1 = *(uint *)(param_1 + 1);
    do {
      if (0 < (int)uVar1) {
        lVar17 = *param_1 + 0x40;
        uVar18 = 0;
        do {
          if (*(longlong *)(lVar17 + -0x40) == *plVar20) {
            iVar19 = (int)param_1[1];
            if (iVar19 <= (int)uVar18) goto LAB_140609cf8;
            if (param_3 != '\0') {
              lVar10 = *plVar20;
              uVar2 = *(undefined4 *)((longlong)plVar20 + 4);
              lVar11 = plVar20[1];
              uVar3 = *(undefined4 *)((longlong)plVar20 + 0xc);
              lVar12 = plVar20[2];
              uVar4 = *(undefined4 *)((longlong)plVar20 + 0x14);
              lVar13 = plVar20[3];
              uVar5 = *(undefined4 *)((longlong)plVar20 + 0x1c);
              lVar14 = plVar20[4];
              uVar6 = *(undefined4 *)((longlong)plVar20 + 0x24);
              lVar15 = plVar20[5];
              uVar7 = *(undefined4 *)((longlong)plVar20 + 0x2c);
              uVar8 = *(undefined4 *)((longlong)plVar20 + 0x34);
              lVar16 = plVar20[7];
              uVar9 = *(undefined4 *)((longlong)plVar20 + 0x3c);
              *(int *)(lVar17 + -0x10) = (int)plVar20[6];
              *(undefined4 *)(lVar17 + -0xc) = uVar8;
              *(int *)(lVar17 + -8) = (int)lVar16;
              *(undefined4 *)(lVar17 + -4) = uVar9;
              *(int *)(lVar17 + -0x20) = (int)lVar14;
              *(undefined4 *)(lVar17 + -0x1c) = uVar6;
              *(int *)(lVar17 + -0x18) = (int)lVar15;
              *(undefined4 *)(lVar17 + -0x14) = uVar7;
              *(int *)(lVar17 + -0x30) = (int)lVar12;
              *(undefined4 *)(lVar17 + -0x2c) = uVar4;
              *(int *)(lVar17 + -0x28) = (int)lVar13;
              *(undefined4 *)(lVar17 + -0x24) = uVar5;
              *(int *)(lVar17 + -0x40) = (int)lVar10;
              *(undefined4 *)(lVar17 + -0x3c) = uVar2;
              *(int *)(lVar17 + -0x38) = (int)lVar11;
              *(undefined4 *)(lVar17 + -0x34) = uVar3;
              FUN_14150acc4();
            }
            goto LAB_140609d48;
          }
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 0x58;
        } while (uVar1 != uVar18);
      }
      iVar19 = (int)param_1[1];
LAB_140609cf8:
      *(uint *)(param_1 + 1) = iVar19 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar19 + 1U) {
        FUN_1405bc420(param_1,iVar19);
      }
      lVar10 = *plVar20;
      uVar2 = *(undefined4 *)((longlong)plVar20 + 4);
      lVar11 = plVar20[1];
      uVar3 = *(undefined4 *)((longlong)plVar20 + 0xc);
      lVar12 = plVar20[2];
      uVar4 = *(undefined4 *)((longlong)plVar20 + 0x14);
      lVar13 = plVar20[3];
      uVar5 = *(undefined4 *)((longlong)plVar20 + 0x1c);
      lVar14 = plVar20[4];
      uVar6 = *(undefined4 *)((longlong)plVar20 + 0x24);
      lVar15 = plVar20[5];
      uVar7 = *(undefined4 *)((longlong)plVar20 + 0x2c);
      uVar8 = *(undefined4 *)((longlong)plVar20 + 0x34);
      lVar16 = plVar20[7];
      uVar9 = *(undefined4 *)((longlong)plVar20 + 0x3c);
      lVar17 = *param_1 + 0x40 + (longlong)iVar19 * 0x58;
      *(int *)(lVar17 + -0x10) = (int)plVar20[6];
      *(undefined4 *)(lVar17 + -0xc) = uVar8;
      *(int *)(lVar17 + -8) = (int)lVar16;
      *(undefined4 *)(lVar17 + -4) = uVar9;
      *(int *)(lVar17 + -0x20) = (int)lVar14;
      *(undefined4 *)(lVar17 + -0x1c) = uVar6;
      *(int *)(lVar17 + -0x18) = (int)lVar15;
      *(undefined4 *)(lVar17 + -0x14) = uVar7;
      *(int *)(lVar17 + -0x30) = (int)lVar12;
      *(undefined4 *)(lVar17 + -0x2c) = uVar4;
      *(int *)(lVar17 + -0x28) = (int)lVar13;
      *(undefined4 *)(lVar17 + -0x24) = uVar5;
      *(int *)(lVar17 + -0x40) = (int)lVar10;
      *(undefined4 *)(lVar17 + -0x3c) = uVar2;
      *(int *)(lVar17 + -0x38) = (int)lVar11;
      *(undefined4 *)(lVar17 + -0x34) = uVar3;
      FUN_144a76ff0();
LAB_140609d48:
      plVar20 = plVar20 + 0xb;
    } while (plVar20 != plVar21);
  }
  return;
}



// FUNCTION 140609d94 FUN_140609d94 body=85 status=ok
// SIG undefined FUN_140609d94(void)

void FUN_140609d94(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x133) == '\x01') {
    if (*(char *)(param_1 + 0x134) == '\x01') {
      FUN_14115e90a(param_1,0);
      return;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
    FUN_140609dea(param_1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),uVar1,1);
  }
  return;
}



// FUNCTION 140609dea FUN_140609dea body=1344 status=ok
// SIG undefined FUN_140609dea(void)

void FUN_140609dea(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  char param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auStack_c8 [32];
  int local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_141571a18(param_1);
  }
  uVar3 = FUN_143d4ee62(param_4);
  uVar4 = FUN_1403c7982();
  uVar3 = FUN_144718840(uVar3,uVar4);
  FUN_140c4b9d0(&local_90,uVar3);
  *(undefined8 *)(param_1 + 0xf0) = local_90;
  *(undefined8 *)(param_1 + 0xf8) = uStack_88;
  *(undefined2 *)(param_1 + 0x132) = 0x101;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  *(undefined1 *)(param_1 + 300) = 0;
  if (param_5 == '\0') {
    iVar2 = DAT_14c76391c + 1 + (uint)(DAT_14c76391c == -1);
    *(int *)(param_1 + 8) = DAT_14c76391c;
    DAT_14c76391c = iVar2;
  }
  if (param_3 == 0 || param_2 == 0) goto LAB_14060a098;
  *(longlong *)(param_1 + 0x18) = param_3;
  *(longlong *)(param_1 + 0x10) = param_2;
  FUN_14115e90a(param_1,0);
  lVar5 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(lVar5 + 0x88);
  if (*(char *)(lVar5 + 0x8c) == '\x01') {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x24);
  }
  if (*(char *)(lVar5 + 0x8d) == '\0') {
    fVar15 = *(float *)(param_1 + 0x24);
    fVar12 = *(float *)(param_1 + 0x30);
  }
  else {
    fVar15 = *(float *)(param_1 + 0x24);
    fVar12 = *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 200) = fVar12;
    if (fVar15 < fVar12) {
      *(undefined1 *)(param_1 + 0x12e) = 1;
    }
  }
  if (fVar15 <= fVar12) {
    local_9c = 0;
    if (*(int *)(param_1 + 0x2c) == 0) {
      fVar12 = *(float *)(param_1 + 0x34);
LAB_140609f54:
      iVar10 = 0;
      local_94 = fVar12;
    }
    else {
      FUN_1402a453c(&local_9c);
      iVar10 = local_9c;
      iVar2 = *(int *)(param_1 + 0x2c);
      lVar9 = (longlong)local_9c;
      lVar5 = DAT_14c9a3d60 + lVar9 * 0x88;
      lVar11 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar5 + -0x88,lVar11 + -0x88);
      if (iVar2 != iVar10) {
        FUN_1402a4744(lVar5 + -0x18,lVar11 + -0x18);
      }
      fVar12 = *(float *)(param_1 + 0x34);
      if (iVar10 == 0) goto LAB_140609f54;
      local_94 = fVar12;
      fVar12 = (float)FUN_14020a770(DAT_14c9a3d60 + lVar9 * 0x88 + -0x88,fVar12,0);
    }
    local_a8 = 0;
    local_98 = fVar12;
    if (*(int *)(param_1 + 0x20) == 0) {
      fVar14 = *(float *)(param_1 + 0x28);
LAB_140609f79:
      iVar8 = 0;
      local_a0 = fVar14;
    }
    else {
      FUN_1402a453c(&local_a8);
      iVar8 = local_a8;
      iVar2 = *(int *)(param_1 + 0x20);
      lVar9 = (longlong)local_a8;
      lVar5 = DAT_14c9a3d60 + lVar9 * 0x88;
      lVar11 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar5 + -0x88,lVar11 + -0x88);
      if (iVar2 != iVar8) {
        FUN_1402a4744(lVar5 + -0x18,lVar11 + -0x18);
      }
      fVar14 = *(float *)(param_1 + 0x28);
      if (iVar8 == 0) goto LAB_140609f79;
      local_a0 = fVar14;
      fVar14 = (float)FUN_14020a770(DAT_14c9a3d60 + lVar9 * 0x88 + -0x88,fVar14,0);
    }
    lVar5 = DAT_14c9a3d60;
    fVar15 = *(float *)(param_1 + 200);
    if (fVar12 <= *(float *)(param_1 + 200)) {
      fVar15 = fVar12;
    }
    local_a4 = fVar14;
    if (iVar8 != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        lVar11 = (longlong)(iVar8 + -1) * 0x88;
        lVar9 = DAT_14c9a3d60 + lVar11;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar11),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar11));
        if (*(longlong *)(lVar5 + 0x70 + lVar11) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar9 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar8 + -1,1);
      }
      local_a8 = 0;
    }
    lVar5 = DAT_14c9a3d60;
    if (fVar15 <= fVar14) {
      fVar15 = fVar14;
    }
    if (iVar10 != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        lVar11 = (longlong)(iVar10 + -1) * 0x88;
        lVar9 = DAT_14c9a3d60 + lVar11;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar11),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar11));
        if (*(longlong *)(lVar5 + 0x70 + lVar11) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar9 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar10 + -1,1);
      }
      local_9c = 0;
    }
  }
  *(float *)(param_1 + 200) = fVar15;
  fVar14 = 0.0;
  fVar12 = 0.0;
  if (0 < *(int *)(param_1 + 0x48)) {
    fVar12 = (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24)) /
             (float)*(int *)(param_1 + 0x48);
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
      auVar13 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),3);
      fVar12 = auVar13._0_4_;
    }
    fVar12 = (fVar15 - *(float *)(param_1 + 0x24)) / fVar12;
  }
  *(float *)(param_1 + 0x128) = fVar12;
  FUN_1405e2f1a(param_1,0);
  if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + 2) == *(int *)(param_1 + 0xf4))) &&
       ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
        plVar6 = (longlong *)*puVar7;
      }
      else {
        plVar6 = (longlong *)0x0;
      }
      lVar5 = (**(code **)(*plVar6 + 0x180))();
      if (lVar5 != 0) {
        fVar14 = (float)*(double *)(lVar5 + 0x6d0);
      }
    }
  }
  *(float *)(param_1 + 0x11c) = fVar14;
  FUN_1409d496c(param_1);
LAB_14060a098:
  *(undefined1 *)(param_1 + 0x132) = 0;
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14060a32c FUN_14060a32c body=716 status=ok
// SIG undefined FUN_14060a32c(void)

void FUN_14060a32c(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar8 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      plVar7 = (longlong *)*puVar8;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    lVar5 = (**(code **)(*plVar7 + 0x180))();
    if ((lVar5 != 0) && ((longlong)*(int *)(param_1 + 0x140) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x138) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x138) + lVar5) != 0)) {
          if (((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
               (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (puVar8 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               puVar8 != (undefined8 *)0x0)))) &&
             ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
              ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
              if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
                plVar7 = (longlong *)*puVar8;
              }
              else {
                plVar7 = (longlong *)0x0;
              }
              uVar6 = (**(code **)(*plVar7 + 0x180))();
            }
            else {
              uVar6 = 0;
            }
            FUN_14060a688(&local_78,uVar6);
            if (local_70 != (longlong *)0x0) {
              iVar4 = (int)local_70[1];
              goto LAB_14060a4bc;
            }
          }
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x140) * 0x10 != lVar5);
    }
  }
  goto LAB_14060a574;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar10 = iVar4 == iVar3;
    if (bVar10) {
      *(int *)(local_70 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
    plVar7 = local_70;
    if (bVar10) break;
LAB_14060a4bc:
    if (iVar4 == 0) {
      plVar7 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar5 = local_78;
  if (plVar7 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar6,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar9 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b4022a0;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4b55e;
      FUN_14060a5fa(lVar5);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_14060a574:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14060a5fa FUN_14060a5fa body=142 status=ok
// SIG undefined FUN_14060a5fa(void)

void FUN_14060a5fa(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_14060a7c0((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x40;
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar5) = lVar3;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0;
  if (lVar3 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)*plVar4)(plVar4,lVar2 + lVar5 + 0x10);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014060a67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 14060a688 FUN_14060a688 body=310 status=ok
// SIG undefined FUN_14060a688(void)

longlong * FUN_14060a688(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb7d690;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14060a7c0 FUN_14060a7c0 body=255 status=ok
// SIG undefined FUN_14060a7c0(void)

void FUN_14060a7c0(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14060a8c0 FUN_14060a8c0 body=3174 status=ok
// SIG undefined FUN_14060a8c0(void)

void FUN_14060a8c0(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_f8 [40];
  uint *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  code *local_b8;
  uint *local_b0;
  undefined8 local_a8;
  undefined **local_98;
  undefined8 local_90;
  longlong *local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x48) < 1) {
    if ((*(longlong *)(param_1 + 0x18) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) != '\x01')) {
      fVar18 = *(float *)(param_1 + 0x30);
    }
    else {
      auVar19 = roundps(ZEXT416(*(uint *)(param_1 + 0x30)),ZEXT416(*(uint *)(param_1 + 0x30)),3);
      fVar18 = auVar19._0_4_;
    }
  }
  else {
    fVar18 = (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24)) /
             (float)*(int *)(param_1 + 0x48);
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
      auVar19 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),3);
      fVar18 = auVar19._0_4_;
    }
  }
  if (1e-08 < ABS(fVar18)) {
    fVar3 = *(float *)(param_1 + 0x110);
    fVar18 = (*(float *)(param_1 + 200) - *(float *)(param_1 + 0x24)) / fVar18;
    *(float *)(param_1 + 0x128) = fVar18;
    if ((fVar18 != fVar3) || (NAN(fVar18) || NAN(fVar3))) {
      if (fVar3 <= fVar18) {
        iVar13 = (int)ROUND(fVar3 + fVar3 + -0.5) >> 1;
        iVar15 = -((int)ROUND(-0.5 - (fVar18 + fVar18)) >> 1);
        if (iVar13 < iVar15) {
          puVar14 = (uint *)(param_1 + 0xf0);
LAB_14060ad96:
          fVar18 = *(float *)(param_1 + 0x128);
          if ((0.0001 <= fVar18 - (float)iVar13) &&
             (*(float *)(param_1 + 0x110) - (float)iVar13 < 0.0001)) {
            if (((*(longlong *)(param_1 + 0xf8) != 0) &&
                (((*(int *)(param_1 + 0xf4) != 0 && (uVar7 = *puVar14, -1 < (int)uVar7)) &&
                 ((int)uVar7 < DAT_14c9647dc)))) &&
               (((puVar11 = (undefined8 *)
                            ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                 puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == *(int *)(param_1 + 0xf4))
                 ) && ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
                plVar10 = (longlong *)*puVar11;
              }
              else {
                plVar10 = (longlong *)0x0;
              }
              lVar8 = (**(code **)(*plVar10 + 0x180))();
              if ((lVar8 != 0) && ((longlong)*(int *)(param_1 + 0x1e8) != 0)) {
                lVar8 = 0;
                do {
                  if ((*(int *)(*(longlong *)(param_1 + 0x1e0) + 8 + lVar8) != 0) &&
                     (*(longlong *)(*(longlong *)(param_1 + 0x1e0) + lVar8) != 0)) {
                    if ((*(longlong *)(param_1 + 0xf8) != 0) &&
                       (cVar6 = FUN_144729dda(puVar14), cVar6 != '\0')) {
                      uVar9 = FUN_141238f08(param_1);
                      FUN_14060a688(&local_b8,uVar9);
                      if (local_b0 != (uint *)0x0) {
                        uVar7 = local_b0[2];
                        goto LAB_14060b30f;
                      }
                    }
                    break;
                  }
                  lVar8 = lVar8 + 0x10;
                } while ((longlong)*(int *)(param_1 + 0x1e8) * 0x10 != lVar8);
              }
            }
            goto LAB_14060ae49;
          }
          goto LAB_14060ae51;
        }
      }
      else {
        iVar13 = -((int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1);
        iVar15 = (int)ROUND(fVar18 + fVar18 + -0.5) >> 1;
        if (iVar15 <= iVar13) {
          puVar14 = (uint *)(param_1 + 0xf0);
LAB_14060a9fc:
          fVar18 = *(float *)(param_1 + 0x128);
          if ((fVar18 - (float)(iVar13 + 1) < 0.0001) &&
             (-0.0001 <= *(float *)(param_1 + 0x110) - (float)(iVar13 + 1))) {
            if (((*(longlong *)(param_1 + 0xf8) != 0) &&
                (((*(int *)(param_1 + 0xf4) != 0 &&
                  (uVar7 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar7)) &&
                 ((int)uVar7 < DAT_14c9647dc)))) &&
               (((puVar11 = (undefined8 *)
                            ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                 puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == *(int *)(param_1 + 0xf4))
                 ) && ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
                plVar10 = (longlong *)*puVar11;
              }
              else {
                plVar10 = (longlong *)0x0;
              }
              lVar8 = (**(code **)(*plVar10 + 0x180))();
              if ((lVar8 != 0) && ((longlong)*(int *)(param_1 + 0x218) != 0)) {
                lVar8 = 0;
                do {
                  if ((*(int *)(*(longlong *)(param_1 + 0x210) + 8 + lVar8) != 0) &&
                     (*(longlong *)(*(longlong *)(param_1 + 0x210) + lVar8) != 0)) {
                    if ((*(longlong *)(param_1 + 0xf8) != 0) &&
                       (cVar6 = FUN_144729dda(puVar14), cVar6 != '\0')) {
                      uVar9 = FUN_141238f08(param_1);
                      FUN_14060a688(&local_b8,uVar9);
                      local_d0 = local_b0;
                      if (local_b0 != (uint *)0x0) {
                        uVar7 = local_b0[2];
                        goto LAB_14060b2ad;
                      }
                    }
                    break;
                  }
                  lVar8 = lVar8 + 0x10;
                } while ((longlong)*(int *)(param_1 + 0x218) * 0x10 != lVar8);
              }
            }
            goto LAB_14060aae0;
          }
          goto LAB_14060aa2b;
        }
      }
    }
  }
LAB_14060a967:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    LOCK();
    uVar4 = local_b0[2];
    bVar17 = uVar7 == uVar4;
    if (bVar17) {
      local_b0[2] = uVar7 + 1;
      uVar4 = uVar7;
    }
    uVar7 = uVar4;
    UNLOCK();
    puVar16 = local_b0;
    if (bVar17) break;
LAB_14060b30f:
    if (uVar7 == 0) {
      puVar16 = (uint *)0x0;
      break;
    }
  }
  LOCK();
  puVar1 = local_b0 + 3;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (*puVar1 == 0) {
    (**(code **)(*(longlong *)local_b0 + 0x10))();
  }
  pcVar5 = local_b8;
  if (puVar16 != (uint *)0x0) {
    if (local_b8 != (code *)0x0) {
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar9,&local_c8,*(undefined4 *)(param_1 + 8));
      if (local_c0 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_c0 + 0xc) = *(int *)((longlong)local_c0 + 0xc) + 1;
        UNLOCK();
        plVar10 = local_c0;
      }
      local_a8 = 0;
      local_98 = &PTR_LAB_14b4021a0;
      local_90 = local_c8;
      local_88 = local_c0;
      local_b8 = FUN_143d4a800;
      local_80 = iVar13;
      FUN_14060a5fa(pcVar5);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    LOCK();
    puVar1 = puVar16 + 2;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      (*(code *)**(undefined8 **)puVar16)(puVar16);
      LOCK();
      puVar1 = puVar16 + 3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (*puVar1 == 0) {
        (**(code **)(*(longlong *)puVar16 + 0x10))(puVar16);
      }
    }
  }
LAB_14060ae49:
  fVar18 = *(float *)(param_1 + 0x128);
LAB_14060ae51:
  iVar12 = iVar13 + 1;
  if (((((-0.0001 <= fVar18 - (float)iVar12) &&
        (*(float *)(param_1 + 0x110) - (float)iVar12 < 0.0001)) &&
       (*(longlong *)(param_1 + 0xf8) != 0)) &&
      ((*(int *)(param_1 + 0xf4) != 0 && (uVar7 = *puVar14, -1 < (int)uVar7)))) &&
     ((((int)uVar7 < DAT_14c9647dc &&
       ((puVar11 = (undefined8 *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
        puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == *(int *)(param_1 + 0xf4))))) &&
      ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
      plVar10 = (longlong *)*puVar11;
    }
    else {
      plVar10 = (longlong *)0x0;
    }
    lVar8 = (**(code **)(*plVar10 + 0x180))();
    if ((lVar8 != 0) && ((longlong)*(int *)(param_1 + 0x200) != 0)) {
      lVar8 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x1f8) + 8 + lVar8) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar8) != 0)) {
          if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
              (uVar7 = *puVar14, -1 < (int)uVar7)) &&
             ((((int)uVar7 < DAT_14c9647dc &&
               (puVar11 = (undefined8 *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
               puVar11 != (undefined8 *)0x0)) &&
              ((*(int *)(puVar11 + 2) == *(int *)(param_1 + 0xf4) &&
               ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))))) {
            if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
              if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
                plVar10 = (longlong *)*puVar11;
              }
              else {
                plVar10 = (longlong *)0x0;
              }
              uVar9 = (**(code **)(*plVar10 + 0x180))();
            }
            else {
              uVar9 = 0;
            }
            local_d0 = puVar14;
            FUN_14060a688(&local_b8,uVar9);
            puVar14 = local_d0;
            if (local_b0 != (uint *)0x0) {
              uVar7 = local_b0[2];
              goto LAB_14060aff0;
            }
          }
          break;
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x200) * 0x10 != lVar8);
    }
  }
LAB_14060b0c4:
  iVar13 = iVar12;
  if (iVar12 == iVar15) goto LAB_14060a967;
  goto LAB_14060ad96;
  while( true ) {
    LOCK();
    uVar4 = local_b0[2];
    bVar17 = uVar7 == uVar4;
    if (bVar17) {
      local_b0[2] = uVar7 + 1;
      uVar4 = uVar7;
    }
    uVar7 = uVar4;
    UNLOCK();
    puVar16 = local_b0;
    if (bVar17) break;
LAB_14060aff0:
    if (uVar7 == 0) {
      puVar16 = (uint *)0x0;
      break;
    }
  }
  LOCK();
  puVar14 = local_b0 + 3;
  *puVar14 = *puVar14 - 1;
  UNLOCK();
  if (*puVar14 == 0) {
    (**(code **)(*(longlong *)local_b0 + 0x10))();
  }
  pcVar5 = local_b8;
  puVar14 = local_d0;
  if (puVar16 != (uint *)0x0) {
    if (local_b8 != (code *)0x0) {
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar9,&local_c8,*(undefined4 *)(param_1 + 8));
      if (local_c0 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_c0 + 0xc) = *(int *)((longlong)local_c0 + 0xc) + 1;
        UNLOCK();
        plVar10 = local_c0;
      }
      local_a8 = 0;
      local_98 = &PTR_LAB_14b4021c0;
      local_90 = local_c8;
      local_88 = local_c0;
      local_b8 = FUN_143d4a9b2;
      local_80 = iVar13;
      FUN_14060a5fa(pcVar5,&local_b8);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    puVar14 = local_d0;
    LOCK();
    puVar1 = puVar16 + 2;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      (*(code *)**(undefined8 **)puVar16)(puVar16);
      LOCK();
      puVar1 = puVar16 + 3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (*puVar1 == 0) {
        (**(code **)(*(longlong *)puVar16 + 0x10))(puVar16);
      }
    }
  }
  goto LAB_14060b0c4;
  while( true ) {
    LOCK();
    uVar4 = local_b0[2];
    bVar17 = uVar7 == uVar4;
    if (bVar17) {
      local_b0[2] = uVar7 + 1;
      uVar4 = uVar7;
    }
    uVar7 = uVar4;
    UNLOCK();
    if (bVar17) break;
LAB_14060b2ad:
    if (uVar7 == 0) {
      local_d0 = (uint *)0x0;
      break;
    }
  }
  LOCK();
  puVar16 = local_b0 + 3;
  *puVar16 = *puVar16 - 1;
  UNLOCK();
  if (*puVar16 == 0) {
    (**(code **)(*(longlong *)local_b0 + 0x10))();
  }
  pcVar5 = local_b8;
  if (local_d0 != (uint *)0x0) {
    if (local_b8 != (code *)0x0) {
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar9,&local_c8,*(undefined4 *)(param_1 + 8));
      if (local_c0 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_c0 + 0xc) = *(int *)((longlong)local_c0 + 0xc) + 1;
        UNLOCK();
        plVar10 = local_c0;
      }
      local_a8 = 0;
      local_98 = &PTR_LAB_14b4021e0;
      local_90 = local_c8;
      local_88 = local_c0;
      local_b8 = FUN_143d4ab64;
      local_80 = iVar13;
      FUN_14060a5fa(pcVar5);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    puVar1 = local_d0;
    LOCK();
    puVar16 = local_d0 + 2;
    *puVar16 = *puVar16 - 1;
    UNLOCK();
    if (*puVar16 == 0) {
      (*(code *)**(undefined8 **)local_d0)(local_d0);
      LOCK();
      puVar1 = puVar1 + 3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (*puVar1 == 0) {
        (**(code **)(*(longlong *)local_d0 + 0x10))();
      }
    }
  }
LAB_14060aae0:
  fVar18 = *(float *)(param_1 + 0x128);
LAB_14060aa2b:
  if ((((((fVar18 - (float)iVar13 < 0.0001) &&
         (0.0001 <= *(float *)(param_1 + 0x110) - (float)iVar13)) &&
        (*(longlong *)(param_1 + 0xf8) != 0)) &&
       ((*(int *)(param_1 + 0xf4) != 0 && (uVar7 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar7)))) &&
      ((int)uVar7 < DAT_14c9647dc)) &&
     (((puVar11 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == *(int *)(param_1 + 0xf4))) &&
      ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
      plVar10 = (longlong *)*puVar11;
    }
    else {
      plVar10 = (longlong *)0x0;
    }
    lVar8 = (**(code **)(*plVar10 + 0x180))();
    if ((lVar8 != 0) && ((longlong)*(int *)(param_1 + 0x1d0) != 0)) {
      lVar8 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x1c8) + 8 + lVar8) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x1c8) + lVar8) != 0)) {
          if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
              (uVar7 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar7)) &&
             ((((int)uVar7 < DAT_14c9647dc &&
               (puVar11 = (undefined8 *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
               puVar11 != (undefined8 *)0x0)) &&
              ((*(int *)(puVar11 + 2) == *(int *)(param_1 + 0xf4) &&
               ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))))) {
            if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
              if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
                plVar10 = (longlong *)*puVar11;
              }
              else {
                plVar10 = (longlong *)0x0;
              }
              uVar9 = (**(code **)(*plVar10 + 0x180))();
            }
            else {
              uVar9 = 0;
            }
            FUN_14060a688(&local_b8,uVar9);
            if (local_b0 != (uint *)0x0) {
              uVar7 = local_b0[2];
              goto LAB_14060ac61;
            }
          }
          break;
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x1d0) * 0x10 != lVar8);
    }
  }
LAB_14060aa50:
  bVar17 = iVar13 <= iVar15;
  iVar13 = iVar13 + -1;
  if (bVar17) goto LAB_14060a967;
  goto LAB_14060a9fc;
  while( true ) {
    LOCK();
    uVar4 = local_b0[2];
    bVar17 = uVar7 == uVar4;
    if (bVar17) {
      local_b0[2] = uVar7 + 1;
      uVar4 = uVar7;
    }
    uVar7 = uVar4;
    UNLOCK();
    puVar16 = local_b0;
    if (bVar17) break;
LAB_14060ac61:
    if (uVar7 == 0) {
      puVar16 = (uint *)0x0;
      break;
    }
  }
  LOCK();
  puVar1 = local_b0 + 3;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (*puVar1 == 0) {
    (**(code **)(*(longlong *)local_b0 + 0x10))();
  }
  pcVar5 = local_b8;
  if (puVar16 != (uint *)0x0) {
    local_d0 = puVar14;
    if (local_b8 != (code *)0x0) {
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar9,&local_c8,*(undefined4 *)(param_1 + 8));
      if (local_c0 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_c0 + 0xc) = *(int *)((longlong)local_c0 + 0xc) + 1;
        UNLOCK();
        plVar10 = local_c0;
      }
      local_a8 = 0;
      local_98 = &PTR_LAB_14b402180;
      local_90 = local_c8;
      local_88 = local_c0;
      local_b8 = FUN_143d4a5a0;
      local_80 = iVar13;
      FUN_14060a5fa(pcVar5,&local_b8);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    puVar14 = local_d0;
    LOCK();
    puVar1 = puVar16 + 2;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      (*(code *)**(undefined8 **)puVar16)(puVar16);
      LOCK();
      puVar1 = puVar16 + 3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (*puVar1 == 0) {
        (**(code **)(*(longlong *)puVar16 + 0x10))(puVar16);
      }
    }
  }
  goto LAB_14060aa50;
}



// FUNCTION 14060b528 FUN_14060b528 body=676 status=ok
// SIG undefined FUN_14060b528(void)

void FUN_14060b528(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar8 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      plVar7 = (longlong *)*puVar8;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    lVar5 = (**(code **)(*plVar7 + 0x180))();
    if ((lVar5 != 0) && ((longlong)*(int *)(param_1 + 0x170) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x168) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x168) + lVar5) != 0)) {
          if (((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
               (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (puVar8 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               puVar8 != (undefined8 *)0x0)))) &&
             ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
              ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
              if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
                plVar7 = (longlong *)*puVar8;
              }
              else {
                plVar7 = (longlong *)0x0;
              }
              uVar6 = (**(code **)(*plVar7 + 0x180))();
            }
            else {
              uVar6 = 0;
            }
            FUN_14060a688(&local_78,uVar6);
            if (local_70 != (longlong *)0x0) {
              iVar4 = (int)local_70[1];
              goto LAB_14060b6a6;
            }
          }
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x170) * 0x10 != lVar5);
    }
  }
  goto LAB_14060b5be;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar10 = iVar4 == iVar3;
    if (bVar10) {
      *(int *)(local_70 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
    plVar7 = local_70;
    if (bVar10) break;
LAB_14060b6a6:
    if (iVar4 == 0) {
      plVar7 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar5 = local_78;
  if (plVar7 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar6,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar9 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b402100;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d49f00;
      FUN_14060a5fa(lVar5);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_14060b5be:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14060b7ce FUN_14060b7ce body=676 status=ok
// SIG undefined FUN_14060b7ce(void)

void FUN_14060b7ce(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar8 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      plVar7 = (longlong *)*puVar8;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    lVar5 = (**(code **)(*plVar7 + 0x180))();
    if ((lVar5 != 0) && ((longlong)*(int *)(param_1 + 0x158) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x150) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x150) + lVar5) != 0)) {
          if (((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
               (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (puVar8 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               puVar8 != (undefined8 *)0x0)))) &&
             ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
              ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
              if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
                plVar7 = (longlong *)*puVar8;
              }
              else {
                plVar7 = (longlong *)0x0;
              }
              uVar6 = (**(code **)(*plVar7 + 0x180))();
            }
            else {
              uVar6 = 0;
            }
            FUN_14060a688(&local_78,uVar6);
            if (local_70 != (longlong *)0x0) {
              iVar4 = (int)local_70[1];
              goto LAB_14060b94c;
            }
          }
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x158) * 0x10 != lVar5);
    }
  }
  goto LAB_14060b864;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar10 = iVar4 == iVar3;
    if (bVar10) {
      *(int *)(local_70 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
    plVar7 = local_70;
    if (bVar10) break;
LAB_14060b94c:
    if (iVar4 == 0) {
      plVar7 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar5 = local_78;
  if (plVar7 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar6,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar9 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b4022e0;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4b97e;
      FUN_14060a5fa(lVar5);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_14060b864:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14060ba74 FUN_14060ba74 body=97 status=ok
// SIG undefined FUN_14060ba74(void)

void FUN_14060ba74(longlong param_1)

{
  float fVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x10) + 0x8e) == '\x01')) {
    fVar1 = *(float *)(param_1 + 200);
    if (fVar1 < *(float *)(param_1 + 0x104)) {
      if (fVar1 <= *(float *)(param_1 + 0x100)) {
        fVar1 = *(float *)(param_1 + 0x24);
        *(float *)(param_1 + 200) = fVar1;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 200) = fVar1;
      if (*(float *)(param_1 + 0x24) <= fVar1 && fVar1 != *(float *)(param_1 + 0x24)) {
        *(undefined1 *)(param_1 + 0x12e) = 1;
      }
    }
    FUN_1405e2f1a(fVar1,1);
    return;
  }
  return;
}



// FUNCTION 14060bad6 FUN_14060bad6 body=67 status=ok
// SIG undefined FUN_14060bad6(void)

void FUN_14060bad6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_1 + 0x120))(param_1,*(undefined8 *)(*param_2 + 0x6a0));
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014060bb0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14060bb33 FUN_14060bb33 body=520 status=ok
// SIG undefined FUN_14060bb33(void)

void FUN_14060bb33(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  
  iVar13 = 0x22;
  if (2 < (int)param_1) {
    cVar6 = FUN_1447be618(*(undefined2 *)(&DAT_14ca85070 + (ulonglong)param_1 * 2));
    lVar4 = DAT_14ca43398;
    if (cVar6 != '\0') {
      iVar13 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar13 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar13 == 2)) {
        uVar10 = 0;
      }
      else if (iVar13 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar7 != DVar8);
      }
      else {
        uVar10 = 1;
      }
      iVar13 = (*(int *)(lVar4 + uVar10 * 4) == 0) + 0x22;
    }
  }
  uVar5 = DAT_14ca5e750;
  uVar3 = DAT_14c9c4540;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar11 = (uint *)*puVar1;
  if (puVar11 != (uint *)0x0) goto LAB_14060bc09;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar11 = (uint *)*puVar1;
LAB_14060bc09:
    puVar9 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar12 = puVar11[0x12];
    if (puVar9 + 0x10 <= puVar11 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
      LOCK();
      uVar2 = *puVar11;
      *puVar11 = *puVar11 + uVar12 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar12) != 0xffffffff) break;
      puVar11 = (uint *)*puVar1;
      *puVar11 = 0xffffffff;
      *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar1 = puVar11;
      puVar9 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
      uVar12 = 0;
      if (puVar9 + 0x10 <= puVar11 + 0x4000) {
        uVar12 = 1;
        goto LAB_14060bc85;
      }
    }
  }
  uVar12 = uVar12 + 1;
LAB_14060bc85:
  *(undefined8 **)(puVar11 + 0x10) = puVar9 + 0x11;
  puVar11[0x12] = uVar12;
  *(int *)(puVar9 + -1) = ((int)puVar9 + -8) - (int)puVar11;
  *(undefined4 *)((longlong)puVar9 + -4) = 0x80;
  *(undefined4 *)(puVar9 + 1) =
       *(undefined4 *)(&DAT_14ca11f38 + (ulonglong)(2 < (int)param_1) * 0xe8);
  *(undefined2 *)(puVar9 + 2) = 0x606;
  puVar9[3] = param_2;
  *(uint *)(puVar9 + 4) = param_1;
  puVar9[5] = param_3;
  puVar9[6] = param_4;
  *(undefined1 *)(puVar9 + 7) = 0x3a;
  *puVar9 = &PTR_FUN_14a30b430;
  puVar9[8] = uVar3;
  puVar9[9] = uVar5;
  *(int *)(puVar9 + 10) = iVar13;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  *(undefined4 *)(puVar9 + 0xf) = 1;
  return;
}



// FUNCTION 14060bd5a FUN_14060bd5a body=226 status=ok
// SIG undefined FUN_14060bd5a(void)

void FUN_14060bd5a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14060be3c(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14060be3c FUN_14060be3c body=1324 status=ok
// SIG undefined FUN_14060be3c(void)

void FUN_14060be3c(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14060c388 FUN_14060c388 body=64 status=ok
// SIG undefined FUN_14060c388(void)

void FUN_14060c388(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x59) == '\x01') && ((longlong)*(int *)(param_1 + 0x50) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar1 = (longlong)*(int *)(param_1 + 0x50) * 0x70;
    do {
      FUN_14060c3c8(param_2,lVar2);
      lVar2 = lVar2 + 0x70;
      lVar1 = lVar1 + -0x70;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14060c3c8 FUN_14060c3c8 body=157 status=ok
// SIG undefined FUN_14060c3c8(void)

void FUN_14060c3c8(longlong *param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if (*param_2 != '\0') {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_14060c466(param_1,iVar2);
    }
    lVar3 = *param_1;
    puVar1 = (undefined8 *)(lVar3 + 0x40 + (longlong)iVar2 * 0x70);
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    puVar1[-4] = 0;
    puVar1[-3] = 0;
    puVar1[-6] = 0;
    puVar1[-5] = 0;
    puVar1[-8] = 0;
    puVar1[-7] = 0;
    puVar1[-8] = *(undefined8 *)param_2;
    *(undefined4 *)(puVar1 + -7) = *(undefined4 *)(param_2 + 8);
    FUN_1447715ec(lVar3 + (longlong)iVar2 * 0x70 + 0x10,param_2 + 0x10);
    *(char *)(puVar1 + -1) = param_2[0x38];
    FUN_140427366(param_2 + 0x40,puVar1);
    return;
  }
  return;
}



// FUNCTION 14060c466 FUN_14060c466 body=271 status=ok
// SIG undefined FUN_14060c466(void)

void FUN_14060c466(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14060c590 FUN_14060c590 body=83 status=ok
// SIG undefined FUN_14060c590(void)

void FUN_14060c590(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x78))(param_1 + 0x28);
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 != 0)) &&
     ((lVar1 = *(longlong *)(lVar1 + 0x3f0), lVar1 != 0 && (*(int *)(lVar1 + 0x48) == 2)))) {
    FUN_14060c5e4(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14060c5e4 FUN_14060c5e4 body=187 status=ok
// SIG undefined FUN_14060c5e4(void)

void FUN_14060c5e4(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    lVar4 = FUN_14475ec7e();
  }
  bVar1 = *(byte *)(lVar4 + 0x152);
  if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
    return;
  }
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(longlong *)(param_1 + 0x40) != 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar4 + 0x2b0);
    }
    cVar2 = (**(code **)(*plVar5 + 0x658))();
    if (cVar2 != '\0') {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (lVar4 == 0) {
        lVar4 = FUN_14475ec7e(param_1);
      }
      uVar3 = FUN_1448a6d9c(lVar4);
      FUN_14060c6a0(uVar3,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014060c668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x2e0))(*(longlong **)(param_1 + 0xe0),param_2);
  return;
}



// FUNCTION 14060c6a0 FUN_14060c6a0 body=76 status=ok
// SIG undefined FUN_14060c6a0(void)

void FUN_14060c6a0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  if (*(char *)(param_2 + 0xb8) == '\0') {
    puVar3 = (undefined1 *)FUN_14017c366();
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 1;
      iVar1 = *(int *)(puVar3 + 0x10);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(puVar3 + 8);
        lVar4 = 0;
        do {
          FUN_140455b10(*(undefined8 *)(lVar2 + lVar4),0);
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar1 * 8 != lVar4);
      }
    }
  }
  return;
}



// FUNCTION 14060c6ec FUN_14060c6ec body=3825 status=ok
// SIG undefined FUN_14060c6ec(void)

undefined8
FUN_14060c6ec(longlong param_1,longlong *param_2,longlong param_3,uint param_4,undefined4 param_5,
             uint param_6)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  ulonglong *local_1a0;
  undefined8 local_198;
  char local_182;
  undefined1 local_181;
  longlong local_180;
  longlong *local_178;
  undefined4 local_16c;
  longlong *local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 *local_134;
  undefined2 local_12c;
  undefined2 local_12a;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  char local_125;
  undefined1 local_124;
  undefined1 local_123;
  wchar_t *pwStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  uint local_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  undefined4 local_e8;
  char cStack_e4;
  char cStack_e3;
  undefined2 uStack_e2;
  longlong *local_e0;
  undefined8 local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 local_bc;
  undefined1 *local_b4;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  char local_a5;
  undefined2 local_a4;
  int local_a0;
  wchar_t *pwStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong local_78 [3];
  ulonglong local_60;
  
  uVar3 = param_6;
  cStack_e3 = (char)param_4;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar15 = param_5;
  if ((char)param_5 == '\v') {
    uVar15 = 0xd;
  }
  if ((char)param_5 == '\x14') {
    uVar15 = 0xd;
  }
  if ((char)uVar15 == '\f') {
    uVar15 = 0xd;
  }
  cStack_e4 = (char)uVar15;
  local_d8 = CONCAT44(uVar15,param_4) & 0xff000000ff;
  uStack_d0 = param_6;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uVar11 = 0;
  lVar14 = 0;
  do {
    uVar11 = ((uint)(*(int *)((longlong)&local_d8 + lVar14) * -0x3361d2af) >> 0x11 |
             *(int *)((longlong)&local_d8 + lVar14) * 0x16a88000) * 0x1b873593 ^ uVar11;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
    lVar14 = lVar14 + 4;
  } while (lVar14 != 0x18);
  uVar11 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
  uVar12 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  uVar11 = *(uint *)(*(longlong *)(param_3 + 0x10) +
                    (ulonglong)(*(uint *)(param_3 + 4) & uVar12) * 4);
  if (uVar11 != 0xffffffff) {
    lVar14 = *param_2;
    do {
      lVar17 = (longlong)(int)uVar11 * 0x20;
      if (*(char *)(lVar14 + 0x14 + lVar17) == cStack_e4) {
        lVar1 = lVar14 + lVar17;
        if ((((*(char *)(lVar1 + 0x15) == cStack_e3) && (*(uint *)(lVar1 + 4) == param_6)) &&
            (*(int *)(lVar1 + 8) == 0)) &&
           ((*(int *)(lVar1 + 0xc) == 0 && (*(int *)(lVar1 + 0x10) == 0)))) {
          if (*(longlong *)(lVar14 + 0x18 + lVar17) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1d8);
          }
          break;
        }
      }
      uVar11 = *(uint *)(*(longlong *)(param_3 + 0x18) + (ulonglong)uVar11 * 4);
    } while (uVar11 != 0xffffffff);
  }
  uVar9 = 0;
  local_e0 = (longlong *)0x0;
  uStack_f4 = param_6;
  uStack_f0 = 0;
  local_e8 = 0;
  local_f8 = uVar12;
  switch(param_4 & 0xff) {
  case 0:
    uStack_88 = 0;
    local_80 = 0;
    local_a6 = 0;
    local_d8 = 8;
    local_a4 = 0xff00;
    local_b4 = &DAT_100000001;
    local_ac = 0x10001;
    local_a8 = 0x101;
    uStack_d0 = 1;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    local_bc = (ulonglong)(uint)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    pwStack_98 = L"DefaultTexture2D";
    local_90 = 0;
    local_a0 = 0x70;
    local_180 = param_1;
    local_a5 = cStack_e4;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_168,&DAT_14ca85100,&local_d8);
    plVar10 = local_168;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_78[0] = local_78[0] & 0xffffffff00000000;
    lVar14 = (**(code **)(*local_168 + 8))(local_168);
    local_158 = CONCAT44(uVar3,uVar3);
    uStack_150 = CONCAT44(uVar3,uVar3);
    FUN_147328662(&local_158,*(undefined1 *)(lVar14 + 0x33),&local_d8,local_78);
    local_198 = 0;
    local_1a0 = (ulonglong *)CONCAT71(local_1a0._1_7_,1);
    local_1a8 = (undefined8 *)((ulonglong)local_1a8 & 0xffffffffffffff00);
    local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,1);
    local_1b0 = &local_158;
    pvVar6 = (void *)(**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,plVar10,0);
    memcpy(pvVar6,&local_d8,local_78[0] & 0xffffffff);
    local_1b0 = (undefined8 *)CONCAT71(local_1b0._1_7_,1);
    local_1b8 = (undefined8 *)((ulonglong)local_1b8 & 0xffffffffffffff00);
    (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,plVar10,0);
    FUN_1447ec05f(&local_e0,local_168,L"DefaultTexture2D");
    plVar10 = local_168;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_168 + 1);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_168 + 1);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)((longlong)local_168 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = (longlong)plVar10;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar18) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar18 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar18) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
    break;
  case 1:
    uStack_88 = 0;
    local_80 = 0;
    local_a6 = 1;
    local_d8 = 8;
    local_a4 = 0xff00;
    local_b4 = &DAT_100000001;
    local_ac = 0x10001;
    local_a8 = 0x101;
    uStack_d0 = 1;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    local_bc = (ulonglong)(uint)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    pwStack_98 = L"DefaultTexture2DArray";
    local_90 = 0;
    local_a0 = 0x70;
    local_180 = param_1;
    local_a5 = cStack_e4;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_168,&DAT_14ca85100,&local_d8);
    plVar10 = local_168;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_78[0] = local_78[0] & 0xffffffff00000000;
    lVar14 = (**(code **)(*local_168 + 8))(local_168);
    local_158 = CONCAT44(uVar3,uVar3);
    uStack_150 = CONCAT44(uVar3,uVar3);
    FUN_147328662(&local_158,*(undefined1 *)(lVar14 + 0x33),&local_d8,local_78);
    local_1a0 = (ulonglong *)((ulonglong)local_1a0 & 0xffffffffffffff00);
    local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,1);
    local_1b8._0_4_ = 0;
    local_1a8 = &local_158;
    pvVar6 = (void *)(**(code **)(*DAT_14ca83900 + 0x440))(DAT_14ca83900,&DAT_14ca85100,plVar10,0);
    memcpy(pvVar6,&local_d8,local_78[0] & 0xffffffff);
    local_1b0 = (undefined8 *)((ulonglong)local_1b0 & 0xffffffffffffff00);
    local_1b8 = (undefined8 *)((ulonglong)local_1b8._4_4_ << 0x20);
    (**(code **)(*DAT_14ca83900 + 0x448))(DAT_14ca83900,&DAT_14ca85100,plVar10,0);
    FUN_1447ec05f(&local_e0,local_168,L"DefaultTexture2DArray");
    plVar10 = local_168;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_168 + 1);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_168 + 1);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)((longlong)local_168 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = (longlong)plVar10;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar18) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar18 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar18) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
    break;
  case 2:
    uStack_88 = 0;
    local_80 = 0;
    local_a6 = 2;
    local_d8 = 8;
    local_a4 = 0xff00;
    local_b4 = &DAT_100000001;
    local_ac = 0x10001;
    local_a8 = 0x101;
    uStack_d0 = 1;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    local_bc = (ulonglong)(uint)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    pwStack_98 = L"DefaultTexture3D";
    local_90 = 0;
    local_a0 = 0x70;
    local_180 = param_1;
    local_a5 = cStack_e4;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_178,&DAT_14ca85100,&local_d8);
    plVar10 = local_178;
    lVar14 = *(longlong *)(param_1 + 0x18);
    local_78[0] = 0;
    local_78[1] = 0;
    local_16c = 0;
    lVar17 = (**(code **)(*local_178 + 8))(local_178);
    local_d8 = CONCAT44(uVar3,uVar3);
    uStack_d0 = uVar3;
    uStack_cc = uVar3;
    FUN_147328662(&local_d8,*(undefined1 *)(lVar17 + 0x33),local_78,&local_16c);
    uVar15 = local_16c;
    uStack_148 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_140 = &DAT_100000001;
    local_138 = 1;
    local_1a0 = local_78;
    if (*(char *)(lVar14 + 0x69) == '\0') {
      FUN_14002049c(lVar14,1);
      local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,uVar15);
      local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,uVar15);
      local_1b8 = &local_158;
      (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,lVar14,plVar10,0);
      FUN_14002049c(lVar14,0);
    }
    else {
      local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,local_16c);
      local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,local_16c);
      local_1b8 = &local_158;
      (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,lVar14,plVar10,0);
    }
    local_d8 = 0xffffffffffffffff;
    uStack_d0 = 0xffffffff;
    uStack_c8 = SUB84(plVar10,0);
    uStack_c4 = (undefined4)((ulonglong)plVar10 >> 0x20);
    uStack_c0 = CONCAT31(uStack_c0._1_3_,1);
    local_bc = 0x7000000000;
    local_b4 = (undefined1 *)((ulonglong)local_b4 & 0xffffffff00000000);
    local_a8 = local_a8 & 0xff00;
    local_160 = 1;
    local_168 = &local_d8;
    FUN_144760590(lVar14,&local_168,0);
    FUN_1447ec05f(&local_e0,local_178,L"DefaultTexture3D");
    if (local_178 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_178 + 1);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_178 + 1);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)((longlong)local_178 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = (longlong)local_178;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar18) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar18 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar18) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
    break;
  case 3:
    local_180 = param_1;
    FUN_145c221da(&local_d8,L"DefaultTextureCube",1);
    local_181 = local_a6;
    local_126 = local_a6;
    local_158 = 8;
    local_182 = local_a5;
    local_125 = local_a5;
    local_124 = (undefined1)local_a4;
    local_134 = local_b4;
    local_12c = (undefined2)local_ac;
    local_12a = local_ac._2_2_;
    local_128 = (undefined1)local_a8;
    local_127 = local_a8._1_1_;
    uStack_150 = CONCAT44(uStack_cc,uStack_d0);
    uStack_148 = CONCAT44(uStack_c4,uStack_c8);
    local_138 = local_bc._4_4_;
    local_123 = local_a4._1_1_;
    local_140 = (undefined1 *)CONCAT44((undefined4)local_bc,uStack_c0);
    pwStack_118 = pwStack_98;
    local_110 = (undefined4)local_90;
    uStack_10c = local_90._4_4_;
    uStack_108 = (undefined4)uStack_88;
    uStack_104 = uStack_88._4_4_;
    local_100 = local_80;
    if (local_a0 == 0) {
      puVar16 = &local_d8;
      local_a0 = 0x70;
      lVar14 = *DAT_14ca83900;
    }
    else {
      lVar14 = *DAT_14ca83900;
      puVar16 = &local_158;
    }
    local_d8 = 8;
    (**(code **)(lVar14 + 0x1a0))(DAT_14ca83900,&local_168,&DAT_14ca85100,puVar16);
    FUN_1430c2a9f(local_168,&param_6);
    FUN_1447ec05f(&local_e0,local_168,pwStack_118);
    plVar10 = local_168;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_168 + 1);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_168 + 1);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)((longlong)local_168 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = (longlong)plVar10;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar18) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar18 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar18) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
    break;
  case 4:
    local_1b8 = (undefined8 *)CONCAT71(local_1b8._1_7_,cStack_e4);
    local_180 = param_1;
    FUN_146310496(&local_d8,L"DefaultTextureCubeArray",1,
                  CONCAT62((uint6)(ushort)((uint)uVar15 >> 0x10),1));
    local_181 = local_a6;
    local_126 = local_a6;
    local_158 = 8;
    local_182 = local_a5;
    local_125 = local_a5;
    local_124 = (undefined1)local_a4;
    local_134 = local_b4;
    local_12c = (undefined2)local_ac;
    local_12a = local_ac._2_2_;
    local_128 = (undefined1)local_a8;
    local_127 = local_a8._1_1_;
    uStack_150 = CONCAT44(uStack_cc,uStack_d0);
    uStack_148 = CONCAT44(uStack_c4,uStack_c8);
    local_138 = local_bc._4_4_;
    local_123 = local_a4._1_1_;
    local_140 = (undefined1 *)CONCAT44((undefined4)local_bc,uStack_c0);
    pwStack_118 = pwStack_98;
    local_110 = (undefined4)local_90;
    uStack_10c = local_90._4_4_;
    uStack_108 = (undefined4)uStack_88;
    uStack_104 = uStack_88._4_4_;
    local_100 = local_80;
    if (local_a0 == 0) {
      puVar16 = &local_d8;
      local_a0 = 0x70;
      lVar14 = *DAT_14ca83900;
    }
    else {
      lVar14 = *DAT_14ca83900;
      puVar16 = &local_158;
    }
    local_d8 = 8;
    (**(code **)(lVar14 + 0x1a0))(DAT_14ca83900,&local_168,&DAT_14ca85100,puVar16);
    FUN_1430c2a9f(local_168,&param_6);
    FUN_1447ec05f(&local_e0,local_168,pwStack_118);
    plVar10 = local_168;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_168 + 1);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_168 + 1);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)((longlong)local_168 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = (longlong)plVar10;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar18) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar18 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar18) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
    break;
  default:
    goto switchD_14060c8e1_default;
  }
  uVar3 = *(uint *)(param_2 + 1);
  uVar11 = uVar3 + 1;
  *(uint *)(param_2 + 1) = uVar11;
  if (*(uint *)((longlong)param_2 + 0xc) < uVar11) {
    FUN_146310578(param_2,uVar3);
  }
  lVar14 = *param_2;
  lVar17 = (longlong)(int)uVar3 * 0x20;
  *(ulonglong *)(lVar14 + 0x10 + lVar17) =
       CONCAT26(uStack_e2,CONCAT15(cStack_e3,CONCAT14(cStack_e4,local_e8)));
  puVar2 = (uint *)(lVar14 + lVar17);
  *puVar2 = local_f8;
  puVar2[1] = uStack_f4;
  puVar2[2] = (uint)uStack_f0;
  puVar2[3] = uStack_f0._4_4_;
  *(longlong **)(lVar14 + 0x18 + lVar17) = local_e0;
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x30))();
  }
  if (*(uint *)(param_3 + 8) <= uVar3) {
    uVar13 = (ulonglong)(uVar3 + (uVar11 == 0)) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar5 = 1 << ((byte)lVar14 & 0x1f);
    uVar11 = 0x20;
    if (0x20 < uVar5) {
      uVar11 = uVar5;
    }
    FUN_1404b04e2(param_3,uVar11);
  }
  uVar13 = (ulonglong)(uVar12 & *(uint *)(param_3 + 4));
  *(undefined4 *)(*(longlong *)(param_3 + 0x18) + (ulonglong)uVar3 * 4) =
       *(undefined4 *)(*(longlong *)(param_3 + 0x10) + uVar13 * 4);
  *(uint *)(*(longlong *)(param_3 + 0x10) + uVar13 * 4) = uVar3;
  uVar9 = FUN_14473c272(local_180,&local_e0,2);
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x38))();
  }
switchD_14060c8e1_default:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14060d608 FUN_14060d608 body=107 status=ok
// SIG undefined FUN_14060d608(void)

void FUN_14060d608(undefined1 *param_1,longlong param_2,byte param_3,int param_4)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((param_2 != 0) && (param_4 != -1)) {
    *param_1 = 1;
    lVar1 = 0;
    do {
      *(ulonglong *)(param_1 + lVar1 * 8 + 8) =
           (ulonglong)
           (uint)((param_4 + (int)lVar1) * *(int *)(param_2 + (ulonglong)(param_3 ^ 1) * 8 + 0x128))
           + *(longlong *)(param_2 + ((ulonglong)(param_3 ^ 1) << 5 | 0x18));
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x120);
  }
  return;
}



// FUNCTION 14060d674 FUN_14060d674 body=165 status=ok
// SIG undefined FUN_14060d674(void)

void FUN_14060d674(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 200),1);
  }
  FUN_14060d71a(param_1 + 0xb0,*(undefined8 *)(param_1 + 200));
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 200));
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  return;
}



// FUNCTION 14060d71a FUN_14060d71a body=3421 status=ok
// SIG undefined FUN_14060d71a(void)

void FUN_14060d71a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  undefined1 uVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  undefined1 auStack_e68 [32];
  int *local_e48;
  undefined1 *local_e40;
  longlong *local_e30;
  undefined8 local_e28;
  longlong local_e20;
  longlong *local_e18;
  undefined8 *local_e10;
  undefined4 local_e08;
  undefined4 uStack_e04;
  undefined1 local_df9;
  int local_df8;
  undefined1 local_df4 [7];
  undefined1 local_ded;
  int local_dec;
  undefined8 *local_de8;
  int local_de0;
  undefined1 local_ddc;
  longlong local_cf8;
  undefined8 local_cf0;
  longlong local_ce8;
  longlong *local_cb8;
  undefined8 local_cb0;
  int local_ca8;
  int local_ca0;
  int local_c9c;
  uint *local_c98;
  undefined1 local_c90 [8];
  undefined1 local_c88 [8];
  uint local_c80;
  undefined1 local_c78 [3072];
  undefined1 *local_78;
  uint local_70;
  uint local_6c;
  longlong local_68 [2];
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e68;
  lVar15 = *param_1;
  if (*(longlong *)(lVar15 + 0x10) != 0) {
    FUN_14323cc1e(*(longlong *)(lVar15 + 0x10),param_2);
    lVar15 = *param_1;
  }
  if (*(longlong *)(lVar15 + 0x18) != 0) {
    FUN_14323cc1e(*(longlong *)(lVar15 + 0x18),param_2);
    lVar15 = *param_1;
  }
  if (*(longlong *)(lVar15 + 0x20) != 0) {
    FUN_14323cc1e(*(longlong *)(lVar15 + 0x20),param_2);
    lVar15 = *param_1;
  }
  if (*(longlong *)(lVar15 + 0x28) != 0) {
    FUN_14323cc1e(*(longlong *)(lVar15 + 0x28),param_2);
    lVar15 = *param_1;
  }
  local_e28 = param_2;
  FUN_1401915b0(&local_ca0,*(undefined1 *)((longlong)param_1 + 0x11),*(undefined4 *)(lVar15 + 0x30))
  ;
  FUN_140149c1a(local_68,*(undefined4 *)(*param_1 + 0x30));
  plVar10 = (longlong *)*param_1;
  local_e30 = param_1;
  if (0 < (int)plVar10[6]) {
    lVar15 = 0;
    uVar16 = 0;
    uVar24 = 0;
    do {
      lVar20 = *plVar10 + lVar15 * 0x28;
      *(ulonglong *)(local_68[0] + lVar15 * 8) = uVar16 | (ulonglong)uVar24 << 0x20;
      iVar17 = *(int *)(lVar20 + 8);
      if (0 < iVar17) {
        iVar26 = 0;
        do {
          uVar13 = local_70;
          iVar7 = ~local_58 + local_c9c;
          if (iVar7 < 1) {
LAB_14060d827:
            param_1 = local_e30;
            local_58 = 0;
            local_c98 = (uint *)FUN_140191654(local_c90);
            *local_c98 = local_70;
          }
          else {
            iVar21 = iVar17 - iVar26;
            if (iVar7 < iVar17 - iVar26) {
              iVar21 = iVar7;
            }
            lVar22 = (longlong)(int)local_70;
            local_70 = local_70 + 1;
            if (local_6c < local_70) {
              FUN_147178b5a(local_c78,uVar13);
            }
            puVar9 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar9 = local_c78;
            }
            *(int *)(puVar9 + lVar22 * 0xc) = (int)lVar15;
            *(int *)(puVar9 + lVar22 * 0xc + 4) = iVar26;
            *(int *)(puVar9 + lVar22 * 0xc + 8) = iVar21;
            local_c98[1] = local_c98[1] + 1;
            iVar26 = iVar26 + iVar21;
            local_58 = local_58 + iVar21 + 1;
            if ((local_c9c <= (int)local_58) ||
               (param_1 = local_e30, local_ca0 <= (int)local_c98[1])) goto LAB_14060d827;
          }
        } while (iVar26 < iVar17);
        iVar17 = *(int *)(lVar20 + 8);
      }
      uVar16 = (ulonglong)(uint)((int)uVar16 + iVar17);
      uVar24 = uVar24 + *(int *)(lVar20 + 0xc);
      lVar15 = lVar15 + 1;
      plVar10 = (longlong *)*param_1;
    } while (lVar15 < (int)plVar10[6]);
  }
  plVar10 = (longlong *)plVar10[2];
  iVar17 = *(int *)(param_1[1] + 0x18);
  memcpy((void *)((ulonglong)*(uint *)(plVar10 + 2) * 4 + *plVar10),*(void **)(param_1[1] + 0x10),
         (longlong)iVar17 << 2);
  plVar19 = local_e30;
  *(int *)(plVar10 + 2) = (int)plVar10[2] + iVar17;
  cVar6 = *(char *)((longlong)local_e30 + 0x11);
  local_e20 = *local_e30;
  local_e18 = (longlong *)local_e30[1];
  uVar24 = *(uint *)(local_e20 + 0x30);
  uVar16 = (ulonglong)uVar24;
  local_cf8 = 0;
  local_cf0 = (int *)((ulonglong)local_cf0._4_4_ << 0x20);
  if (uVar16 != 0) {
    cVar5 = FUN_1447e0190();
    uVar13 = 0;
    if ((((1 < (int)uVar24) && (cVar6 != '\0')) && (cVar5 != '\0')) &&
       (uVar13 = DAT_14c8335d8, (int)uVar24 <= (int)DAT_14c8335d8)) {
      uVar13 = uVar24;
    }
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar17 = (*(undefined **)(lVar15 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar15 + 0x2c8) == 0) +
             uVar13;
    if (DAT_14c8c27ac < 1) {
      memset(&local_de8,0,0x82);
      local_e08 = 0;
      local_e10 = (undefined8 *)((ulonglong)local_e10 & 0xffffffff00000000);
      local_dec = 0;
      FUN_140e55932(&local_de8,&local_e08,&local_e10,&local_dec);
      iVar26 = local_dec;
      local_e40 = &local_df9;
      local_e48 = &local_df8;
      FUN_1457b80ec((ulonglong)local_e10 & 0xffffffff,local_dec,&local_ded,local_df4);
      plVar19 = local_e30;
      DAT_14c8c27ac = iVar26;
      if ((0 < local_df8) && (local_df8 <= iVar26)) {
        DAT_14c8c27ac = local_df8;
      }
    }
    iVar26 = DAT_14c8c27ac;
    if (iVar17 < DAT_14c8c27ac) {
      iVar26 = iVar17;
    }
    iVar17 = 1;
    if (iVar26 < 2) {
      iVar26 = 1;
    }
    iVar7 = (int)local_cf0;
    if (iVar26 < (int)local_cf0) {
      iVar7 = iVar26;
    }
    if ((int)local_cf0 == 0) {
      iVar7 = iVar26;
    }
    if (iVar7 < 2) {
      if (0 < (int)uVar24) {
        piVar1 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        uVar25 = 0;
        do {
          iVar17 = *piVar1;
          if (iVar17 == 1) {
            FUN_140ad26c0();
            GetCurrentThreadId();
            iVar17 = *piVar1;
          }
          if ((iVar17 == 0x60000000) || (iVar17 == 0)) {
            *piVar1 = 0x40000010;
          }
          lVar15 = *local_e18;
          iVar26 = *(int *)(local_e18[2] + uVar25 * 4);
          lVar20 = -1;
          if (((longlong)iVar26 != -1) && (iVar26 < *(int *)(lVar15 + 0x3538))) {
            lVar20 = (longlong)*(int *)(*(longlong *)(lVar15 + 0x3530) + (longlong)iVar26 * 4);
          }
          FUN_1447869b2(*(undefined8 *)(*(longlong *)(lVar15 + 0x3358) + lVar20 * 8),
                        *(longlong *)(*(longlong *)(local_e20 + 0x10) + 8) +
                        (ulonglong)
                        (uint)(*(int *)(*(longlong *)(local_e20 + 0x10) + 0x18) * (int)uVar25));
          if ((iVar17 == 0x60000000) || (iVar17 == 0)) {
            *piVar1 = iVar17;
          }
          uVar25 = uVar25 + 1;
        } while (uVar16 != uVar25);
      }
    }
    else {
      iVar26 = iVar7 * 6;
      iVar21 = -6;
      do {
        if (iVar26 <= (int)uVar24) {
          iVar17 = (int)(uVar24 + iVar26 + -1) / iVar26;
          uVar16 = (longlong)(int)(iVar17 + (uVar24 - 1)) / (longlong)iVar17;
          iVar8 = (int)uVar16;
          uVar16 = uVar16 & 0xffffffff;
          if (iVar7 <= iVar8) break;
        }
        iVar8 = (int)uVar16;
        iVar26 = iVar26 - iVar7;
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0);
      lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar23 = 6;
      if ((*(byte *)(lVar15 + 0xc60) & 0x37) != 0) {
        uVar23 = 0;
      }
      FUN_144a85b52(&local_e08,1);
      puVar2 = (undefined8 *)(lVar15 + 0x308);
      puVar12 = (uint *)*puVar2;
      if (puVar12 != (uint *)0x0) goto LAB_14060dc1a;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        FUN_140217a48(puVar2);
        puVar12 = (uint *)*puVar2;
LAB_14060dc1a:
        puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0x3fU & 0xffffffffffffffc0);
        puVar14 = (uint *)(puVar18 + 0x10);
        uVar13 = puVar12[0x12];
        if (puVar14 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar3 = *puVar12;
          *puVar12 = *puVar12 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar12 = (uint *)*puVar2;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          puVar18 = (undefined8 *)((longlong)puVar12 + 0x97U & 0xffffffffffffffc0);
          puVar14 = (uint *)(puVar18 + 0x10);
          uVar13 = 0;
          if (puVar14 <= puVar12 + 0x4000) {
            uVar13 = 1;
            goto LAB_14060dc9f;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_14060dc9f:
      *(uint **)(puVar12 + 0x10) = puVar14;
      puVar12[0x12] = uVar13;
      *puVar18 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar18 + 1) = 0;
      *puVar18 = &PTR_FUN_14a222420;
      puVar18[3] = L"GPUScene Upload Primitives Task";
      *(undefined4 *)(puVar18 + 4) = 0;
      *(undefined4 *)(puVar18 + 5) = 0;
      *(uint *)((longlong)puVar18 + 0x2c) = uVar24;
      *(int *)(puVar18 + 6) = iVar17;
      *(int *)((longlong)puVar18 + 0x34) = iVar8;
      puVar18[7] = &local_cf8;
      puVar18[8] = &local_e20;
      puVar18[9] = &local_e08;
      *(undefined1 *)(puVar18 + 10) = uVar23;
      puVar18[0xb] = 0;
      puVar18[0xc] = 0;
      *(int *)((longlong)puVar18 + 0x24) = iVar8;
      FUN_147178c86(puVar18 + 0xb,iVar7 + -1);
      if (puVar18 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
      }
      local_e10 = puVar18;
      FUN_147178bbe(&local_e10);
      local_ddc = 0;
      local_de8 = puVar18;
      local_de0 = iVar7 + -1;
      cVar6 = FUN_142c4ffe8(&local_de8,1);
      if (cVar6 == '\0') {
        (**(code **)(*(longlong *)CONCAT44(uStack_e04,local_e08) + 0x20))
                  ((longlong *)CONCAT44(uStack_e04,local_e08),0xffffffff,0);
      }
      FUN_147178c3e(&local_de8);
      FUN_144a75412(&local_e08);
    }
  }
  lVar15 = *plVar19;
  if ((0 < *(int *)(lVar15 + 0x38)) && (uVar16 = (ulonglong)local_c80, local_c80 != 0)) {
    cVar6 = *(char *)((longlong)plVar19 + 0x11);
    local_ce8 = plVar19[1];
    local_e20 = 0;
    local_e18 = (longlong *)((ulonglong)local_e18 & 0xffffffff00000000);
    local_cf0 = &local_ca0;
    local_cf8 = lVar15;
    cVar5 = FUN_1447e0190();
    uVar24 = 0;
    if ((1 < (int)local_c80) &&
       (((uVar24 = 0, cVar6 != '\0' && (cVar5 != '\0')) &&
        (uVar24 = DAT_14c8335d8, (int)local_c80 <= (int)DAT_14c8335d8)))) {
      uVar24 = local_c80;
    }
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar17 = (*(undefined **)(lVar15 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar15 + 0x2c8) == 0) +
             uVar24;
    if (DAT_14c8c27ac < 1) {
      memset(&local_de8,0,0x82);
      local_e08 = 0;
      local_e10 = (undefined8 *)((ulonglong)local_e10 & 0xffffffff00000000);
      local_dec = 0;
      FUN_140e55932(&local_de8,&local_e08,&local_e10,&local_dec);
      iVar26 = local_dec;
      local_e40 = &local_df9;
      local_e48 = &local_df8;
      FUN_1457b80ec((ulonglong)local_e10 & 0xffffffff,local_dec,&local_ded,local_df4);
      plVar19 = local_e30;
      DAT_14c8c27ac = iVar26;
      if ((0 < local_df8) && (local_df8 <= iVar26)) {
        DAT_14c8c27ac = local_df8;
      }
    }
    iVar26 = DAT_14c8c27ac;
    if (iVar17 < DAT_14c8c27ac) {
      iVar26 = iVar17;
    }
    iVar17 = 1;
    if (iVar26 < 2) {
      if (0 < (int)local_c80) {
        uVar24 = 0;
        do {
          FUN_144aab1b0(&local_cf8,uVar24);
          uVar24 = uVar24 + 1;
        } while (local_c80 != uVar24);
      }
    }
    else {
      iVar7 = iVar26 * 6;
      iVar21 = -6;
      do {
        if (iVar7 <= (int)local_c80) {
          iVar17 = (int)(local_c80 + iVar7 + -1) / iVar7;
          uVar16 = (longlong)(int)(iVar17 + (local_c80 - 1)) / (longlong)iVar17;
          iVar8 = (int)uVar16;
          uVar16 = uVar16 & 0xffffffff;
          if (iVar26 <= iVar8) break;
        }
        iVar8 = (int)uVar16;
        iVar7 = iVar7 - iVar26;
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0);
      lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar23 = 6;
      if ((*(byte *)(lVar15 + 0xc60) & 0x37) != 0) {
        uVar23 = 0;
      }
      FUN_144a85b52(&local_e08,1);
      puVar2 = (undefined8 *)(lVar15 + 0x308);
      puVar12 = (uint *)*puVar2;
      if (puVar12 != (uint *)0x0) goto LAB_14060e17e;
      while( true ) {
        uVar24 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar24 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar24 | 1;
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        FUN_140217a48(puVar2);
        puVar12 = (uint *)*puVar2;
LAB_14060e17e:
        puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0x3fU & 0xffffffffffffffc0);
        puVar14 = (uint *)(puVar18 + 0x10);
        uVar24 = puVar12[0x12];
        if (puVar14 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar13 = *puVar12;
          *puVar12 = *puVar12 + uVar24 + 1;
          UNLOCK();
          if ((uVar13 ^ uVar24) != 0xffffffff) break;
          puVar12 = (uint *)*puVar2;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          puVar18 = (undefined8 *)((longlong)puVar12 + 0x97U & 0xffffffffffffffc0);
          puVar14 = (uint *)(puVar18 + 0x10);
          uVar24 = 0;
          if (puVar14 <= puVar12 + 0x4000) {
            uVar24 = 1;
            goto LAB_14060e203;
          }
        }
      }
      uVar24 = uVar24 + 1;
LAB_14060e203:
      *(uint **)(puVar12 + 0x10) = puVar14;
      puVar12[0x12] = uVar24;
      *puVar18 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar18 + 1) = 0;
      *puVar18 = &PTR_FUN_14a2224a8;
      puVar18[3] = L"GPUScene Upload Instances Task";
      *(undefined4 *)(puVar18 + 4) = 0;
      *(undefined4 *)(puVar18 + 5) = 0;
      *(uint *)((longlong)puVar18 + 0x2c) = local_c80;
      *(int *)(puVar18 + 6) = iVar17;
      *(int *)((longlong)puVar18 + 0x34) = iVar8;
      puVar18[7] = &local_e20;
      puVar18[8] = &local_cf8;
      puVar18[9] = &local_e08;
      *(undefined1 *)(puVar18 + 10) = uVar23;
      puVar18[0xb] = 0;
      puVar18[0xc] = 0;
      *(int *)((longlong)puVar18 + 0x24) = iVar8;
      FUN_147179292(puVar18 + 0xb,iVar26 + -1);
      if (puVar18 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
      }
      local_e10 = puVar18;
      FUN_1471791ca(&local_e10);
      local_ddc = 0;
      local_de8 = puVar18;
      local_de0 = iVar26 + -1;
      cVar6 = FUN_142c50a58(&local_de8,1);
      if (cVar6 == '\0') {
        (**(code **)(*(longlong *)CONCAT44(uStack_e04,local_e08) + 0x20))
                  ((longlong *)CONCAT44(uStack_e04,local_e08),0xffffffff,0);
      }
      FUN_14717924a(&local_de8);
      FUN_144a75412(&local_e08);
    }
    lVar15 = *plVar19;
  }
  if ((*(longlong *)(lVar15 + 0x28) != 0) && (0 < *(int *)(lVar15 + 0x30))) {
    lVar20 = 0;
    do {
      local_cb8 = (longlong *)0x0;
      local_cb0 = 0x800000000;
      local_ca8 = 0;
      iVar17 = *(int *)(((longlong *)plVar19[1])[2] + lVar20 * 4);
      if (((longlong)iVar17 != -1) &&
         (lVar15 = *(longlong *)plVar19[1], iVar17 < *(int *)(lVar15 + 0x3538))) {
        iVar17 = *(int *)(*(longlong *)(lVar15 + 0x3530) + (longlong)iVar17 * 4);
        if ((-1 < (longlong)iVar17) && (iVar17 < *(int *)(lVar15 + 0x3360))) {
          plVar10 = *(longlong **)(*(longlong *)(lVar15 + 0x3358) + (longlong)iVar17 * 8);
          (**(code **)(*plVar10 + 0x1d8))(plVar10,&local_cf8);
          local_ca8 = *(int *)(plVar10[0x43] + 0x214);
          if (0 < (int)local_cb0) {
            lVar15 = 0;
            do {
              plVar10 = local_cb8;
              if (local_cb8 == (longlong *)0x0) {
                plVar10 = &local_cf8;
              }
              FUN_147b9d1b2(&local_de8,plVar10[lVar15],*(undefined4 *)((longlong)plVar19 + 0x14));
              plVar10 = *(longlong **)(*plVar19 + 0x28);
              *(int *)(*plVar10 + (ulonglong)*(uint *)(plVar10 + 2) * 4) = local_ca8 + (int)lVar15;
              lVar22 = plVar10[2];
              *(int *)(plVar10 + 2) = (int)lVar22 + 1;
              memcpy((void *)((ulonglong)(*(uint *)(plVar10 + 3) * (int)lVar22) + plVar10[1]),
                     &local_de8,(ulonglong)*(uint *)(plVar10 + 3));
              lVar15 = lVar15 + 1;
            } while (lVar15 < (int)local_cb0);
          }
        }
      }
      if (local_cb8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar20 = lVar20 + 1;
      lVar15 = *plVar19;
    } while (lVar20 < *(int *)(lVar15 + 0x30));
  }
  uVar4 = local_e28;
  if (*(longlong *)(lVar15 + 0x10) != 0) {
    FUN_14323ccf6(*(longlong *)(lVar15 + 0x10),local_e28);
    lVar15 = *plVar19;
  }
  if (*(longlong *)(lVar15 + 0x18) != 0) {
    FUN_14323ccf6(*(longlong *)(lVar15 + 0x18),uVar4);
    lVar15 = *plVar19;
  }
  if (*(longlong *)(lVar15 + 0x20) != 0) {
    FUN_14323ccf6(*(longlong *)(lVar15 + 0x20),uVar4);
    lVar15 = *plVar19;
  }
  if (*(longlong *)(lVar15 + 0x28) != 0) {
    FUN_14323ccf6(*(longlong *)(lVar15 + 0x28),uVar4);
  }
  FUN_142c513ee(local_68);
  FUN_142c51452(&local_78);
  FUN_142c514b6(local_c88);
  if ((local_48 ^ (ulonglong)auStack_e68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14060e478 FUN_14060e478 body=279 status=ok
// SIG undefined FUN_14060e478(void)

undefined8 FUN_14060e478(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14060e589;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14060e589;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14060e589:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14060e536;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_14060e536;
    }
  }
  uVar6 = 0;
LAB_14060e536:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14060e596 FUN_14060e596 body=692 status=ok
// SIG undefined FUN_14060e596(void)

void FUN_14060e596(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  code *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar4 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  lVar1 = FUN_14060e84c();
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_d0 = &local_90;
      local_90 = FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_1459f2e4c;
      local_d8 = &LAB_148c39de3;
      local_e0 = &LAB_1457a9eb2;
      local_e8 = &DAT_149e063b2;
      local_f0 = 0;
      local_f8 = 0x10000004;
      local_100 = 0x10;
      local_108 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      plVar2 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x958) + 0x10))(lVar1 + 0x958);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
        if (((lVar3 != 0) && (plVar2 = *(longlong **)(lVar3 + 0x140), plVar2 != (longlong *)0x0)) &&
           (*(char *)(param_1 + 0x58) != '\0')) {
          (**(code **)(*plVar2 + 0x48))(plVar2,lVar1,&local_a8);
          (**(code **)(*plVar2 + 0x68))(plVar2,&local_88);
          (**(code **)(*plVar2 + 0x58))(plVar2,&local_b8);
          FUN_144a0355a(param_1,&local_88,&local_a8,&local_b8);
          uVar4 = uStack_b0 & 0xffffffff;
          lVar1 = local_b8;
          goto LAB_14060e6ee;
        }
      }
    }
  }
  FUN_144a0355a(param_1,&local_88,&local_a8,&local_b8);
  lVar1 = 0;
LAB_14060e6ee:
  FUN_140be4274(lVar1,uVar4);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140be4274(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_14060e8b4(&local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14060e84c FUN_14060e84c body=104 status=ok
// SIG undefined FUN_14060e84c(void)

undefined8 FUN_14060e84c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((((lVar2 != 0) && (*(longlong **)(lVar2 + 0x138) != (longlong *)0x0)) &&
      (*(int *)(lVar2 + 0x134) != 0)) &&
     ((uVar1 = *(uint *)(lVar2 + 0x130), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar4 != 0) &&
       ((*(int *)(lVar4 + 0x10) == *(int *)(lVar2 + 0x134) &&
        ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00014060e8ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x138) + 0x10))();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14060e8b4 FUN_14060e8b4 body=55 status=ok
// SIG undefined FUN_14060e8b4(void)

void FUN_14060e8b4(longlong *param_1)

{
  FUN_14060e8ec(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14060e8ec FUN_14060e8ec body=521 status=ok
// SIG undefined FUN_14060e8ec(void)

void FUN_14060e8ec(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_14060ea39;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar6 * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar6 = (int)uVar15;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar10[lVar13] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar13 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar13 == lVar11) goto LAB_14060ea39;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_14060ea39:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar7 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar7 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar7;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14060eaf6 FUN_14060eaf6 body=193 status=ok
// SIG undefined FUN_14060eaf6(void)

undefined8 FUN_14060eaf6(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [44];
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[1] < 1) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)&DAT_14c948618;
    if ((*param_1 != 0) && (*param_1 != DAT_14c948000)) {
      if ((param_1[1] == 1) && (param_1[9] < 1)) {
        piVar2 = param_1 + 2;
      }
      else {
        piVar2 = *(int **)(param_1 + 6);
      }
    }
    local_4c = *piVar2;
    iVar1 = piVar2[2];
    local_44 = 0;
    if (local_4c == 0) {
      local_44 = iVar1;
    }
    local_48 = piVar2[1];
    if (iVar1 < 1) {
      local_44 = iVar1;
    }
    FUN_1448075d0(local_40);
    uVar3 = FUN_14060ebb8(local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14060ebb8 FUN_14060ebb8 body=449 status=ok
// SIG undefined FUN_14060ebb8(void)

longlong * FUN_14060ebb8(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  int local_20;
  ulonglong local_18;
  
  plVar8 = DAT_14cb86da8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb86da8 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb86da8 + 0x300))(DAT_14cb86da8);
    if (cVar1 == '\0') {
      lVar4 = FUN_1400e3c00(plVar8,param_1,1);
      if ((lVar4 != 0) && (plVar8 = *(longlong **)(lVar4 + 0x30), plVar8 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar8 + 8))(plVar8);
        lVar5 = FUN_14060ed7a();
        if ((lVar5 != 0) &&
           ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)))) {
          plVar6 = (longlong *)0x0;
          if ((char)plVar8[0xb] != '\0') {
            plVar6 = plVar8;
          }
          goto LAB_14060ecd7;
        }
      }
    }
    else {
      if ((((*param_1 == 0) || (iVar2 = param_1[1], iVar2 == 0)) || (*param_1 == DAT_14c948000)) ||
         (iVar2 < 1)) {
        local_20 = DAT_14c948620;
        local_28 = DAT_14c948618;
      }
      else {
        puVar7 = (ulonglong *)(param_1 + 2);
        if (0 < param_1[9]) {
          puVar7 = *(ulonglong **)(param_1 + 6);
        }
        if (iVar2 != 1) {
          puVar7 = *(ulonglong **)(param_1 + 6);
        }
        local_20 = (int)puVar7[1];
        local_28 = *puVar7;
      }
      plVar8 = plVar8 + 0x3f;
      uVar9 = local_28 & 0xffffffff;
      if (local_20 != 0) {
        uVar3 = FUN_144a78877(uVar9,local_20);
        uVar9 = (ulonglong)uVar3;
      }
      iVar2 = FUN_1448467de(plVar8,uVar9,&local_28);
      if (iVar2 != -1) {
        lVar4 = *plVar8;
        plVar6 = (longlong *)0x0;
        if ((lVar4 + (longlong)iVar2 * 0x70 == 0) ||
           (plVar8 = (longlong *)(lVar4 + (longlong)iVar2 * 0x70 + 0x10), plVar8 == (longlong *)0x0)
           ) goto LAB_14060ecd7;
        plVar8 = (longlong *)*plVar8;
        if (plVar8 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar8 + 8))(plVar8);
          lVar5 = FUN_14060ed7a();
          if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
            plVar6 = (longlong *)0x0;
            if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                lVar5 + 0x30) {
              plVar6 = plVar8;
            }
            goto LAB_14060ecd7;
          }
        }
      }
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14060ecd7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 14060ed7a FUN_14060ed7a body=57 status=ok
// SIG undefined FUN_14060ed7a(void)

void FUN_14060ed7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6beb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6beb8 = FUN_140002ddd(FUN_14185e553,uVar1,L"MissionDef");
  }
  return;
}



// FUNCTION 14060edb4 FUN_14060edb4 body=57 status=ok
// SIG undefined FUN_14060edb4(void)

void FUN_14060edb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd418 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd418 = FUN_140002ddd(FUN_14660e9d7,uVar1,L"OakWaypointRuntimeParams");
  }
  return;
}



// FUNCTION 14060edee FUN_14060edee body=110 status=ok
// SIG undefined FUN_14060edee(void)

void FUN_14060edee(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (((*(int *)(lVar3 + 0x30) != 0) && (iVar1 = *(int *)(lVar3 + 0x34), iVar1 != 0)) &&
       (*(int *)(lVar3 + 0x30) != DAT_14c948000)) {
      if ((iVar1 < 2) && (*(int *)(lVar3 + 0x54) < 1)) {
        lVar3 = lVar3 + 0x38;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x48);
      }
      if ((iVar1 != 1) && (1 < iVar1)) {
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x14);
        uVar2 = *(undefined8 *)(lVar3 + 0xc);
        goto LAB_14060ee40;
      }
    }
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar2 = DAT_14c948618;
  }
LAB_14060ee40:
  *param_2 = uVar2;
  return;
}



// FUNCTION 14060ee5c FUN_14060ee5c body=276 status=ok
// SIG undefined FUN_14060ee5c(void)

ulonglong FUN_14060ee5c(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auStack_88 [44];
  undefined1 local_5c [12];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  undefined7 uVar7;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if ((longlong *)*param_1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x20))();
    if ((uVar2 & 2) == 0) {
      cVar1 = (**(code **)(*(longlong *)*param_1 + 0x48))();
      if (cVar1 == '\0') {
        (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,local_5c);
        FUN_1448075d0(local_50,local_5c);
        plVar3 = (longlong *)FUN_14060eaf6(local_50);
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        if (plVar3 != (longlong *)0x0) {
          cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
          if (cVar1 != '\0') {
            plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x30))();
            if (plVar3 != (longlong *)0x0) {
              lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
              lVar5 = FUN_14060edb4();
              if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                  == lVar5 + 0x30)) {
                uVar6 = CONCAT71(uVar7,(*(byte *)((longlong)plVar3 + 0xd) & 2) == 0 &&
                                       (int)plVar3[6] == 0);
              }
            }
            goto LAB_14060ef44;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_14060ef44:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14060ef72 FUN_14060ef72 body=12 status=ok
// SIG undefined FUN_14060ef72(void)

void FUN_14060ef72(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014060ef7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14060ef7e FUN_14060ef7e body=31 status=ok
// SIG undefined FUN_14060ef7e(void)

undefined8 FUN_14060ef7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14060ef9e FUN_14060ef9e body=269 status=ok
// SIG undefined FUN_14060ef9e(void)

void FUN_14060ef9e(longlong param_1,int param_2)

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



// FUNCTION 14060f0ba FUN_14060f0ba body=31 status=ok
// SIG undefined FUN_14060f0ba(void)

undefined8 FUN_14060f0ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14060f0da FUN_14060f0da body=92 status=ok
// SIG undefined FUN_14060f0da(void)

undefined8 * FUN_14060f0da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b318620;
  *(undefined4 *)(param_1 + 0xde) = 0;
  if (param_1[0xdd] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f136(param_1 + 0xd5);
  FUN_14060f31a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14060f136 FUN_14060f136 body=55 status=ok
// SIG undefined FUN_14060f136(void)

void FUN_14060f136(longlong *param_1)

{
  FUN_14060f16e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14060f16e FUN_14060f16e body=426 status=ok
// SIG undefined FUN_14060f16e(void)

void FUN_14060f16e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_14572d5bc(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14060f31a FUN_14060f31a body=501 status=ok
// SIG undefined FUN_14060f31a(void)

void FUN_14060f31a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b14c820;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0xcb);
  param_1[0xb9] = 0;
  param_1[0xba] = 0xffffffffffffffff;
  if ((param_1[0xb8] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xb8] + 0x50));
  }
  *(undefined4 *)(param_1 + 0xab) = 0;
  if (param_1[0xaa] != 0) {
    FUN_1400020a8();
  }
  FUN_14060ff50(param_1 + 0xa2);
  *(undefined4 *)(param_1 + 0xa1) = 0;
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f5ae(param_1 + 0x98);
  FUN_14060f50f(param_1[0x96],*(undefined4 *)(param_1 + 0x97));
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f50f(param_1[0x94],*(undefined4 *)(param_1 + 0x95));
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f5e6(param_1 + 0x71);
  FUN_14060f567(param_1[0x6f],*(undefined4 *)(param_1 + 0x70));
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f50f(param_1[0x6c],*(undefined4 *)(param_1 + 0x6d));
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f61e(param_1 + 0x62);
  FUN_14060fc84(param_1);
  return;
}



// FUNCTION 14060f50f FUN_14060f50f body=88 status=ok
// SIG undefined FUN_14060f50f(void)

void FUN_14060f50f(longlong param_1,int param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x70);
    bVar1 = DAT_14cb26569;
    do {
      puVar2[-1] = 0;
      *puVar2 = 0xffffffffffffffff;
      if ((puVar2[-2] != 0) && ((bVar1 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(puVar2[-2] + 0x50));
        bVar1 = DAT_14cb26569;
      }
      puVar2 = puVar2 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14060f567 FUN_14060f567 body=71 status=ok
// SIG undefined FUN_14060f567(void)

void FUN_14060f567(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x68);
    bVar1 = DAT_14cb26569;
    do {
      if ((*plVar2 != 0) && ((bVar1 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(*plVar2 + 0x50));
        bVar1 = DAT_14cb26569;
      }
      plVar2 = plVar2 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14060f5ae FUN_14060f5ae body=55 status=ok
// SIG undefined FUN_14060f5ae(void)

void FUN_14060f5ae(longlong *param_1)

{
  FUN_14060f656(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14060f5e6 FUN_14060f5e6 body=55 status=ok
// SIG undefined FUN_14060f5e6(void)

void FUN_14060f5e6(longlong *param_1)

{
  FUN_14060f84a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14060f61e FUN_14060f61e body=55 status=ok
// SIG undefined FUN_14060f61e(void)

void FUN_14060f61e(longlong *param_1)

{
  FUN_14060fa72(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14060f656 FUN_14060f656 body=498 status=ok
// SIG undefined FUN_14060f656(void)

void FUN_14060f656(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar5 = (int)local_60[3];
  iVar7 = local_58._4_4_;
  iVar14 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_14060f6d1;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_14060f6d1:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar11) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar6 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14060f84a FUN_14060f84a body=551 status=ok
// SIG undefined FUN_14060f84a(void)

void FUN_14060f84a(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar10 = *puVar7;
    if (uVar10 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_14060f87f;
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar10 = 0xffffffff;
    do {
      lVar12 = *param_1;
      lVar11 = (longlong)iVar6 * 0x20;
      FUN_14060f567(*(undefined8 *)(lVar12 + 8 + lVar11),*(undefined4 *)(lVar12 + 0x10 + lVar11));
      if (*(longlong *)(lVar12 + 8 + lVar11) != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar10;
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
        lVar11 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar7[lVar12 + lVar11 + 1];
          if (uVar3 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar5 - lVar12 == lVar11) goto LAB_14060f87f;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14060f87f:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar10 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar10 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar10) {
    uVar3 = uVar10;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14060fa72 FUN_14060fa72 body=530 status=ok
// SIG undefined FUN_14060fa72(void)

void FUN_14060fa72(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar12 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar12 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar12 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar15) goto LAB_14060faa5;
        iVar12 = iVar12 + 0x20;
        uVar13 = puVar9[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar13 & uVar13);
    uVar10 = uVar16 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
  }
  if (iVar8 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)iVar8 * 0x18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      uVar13 = uVar13 & ~(uint)uVar16;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar8 = (int)uVar15;
      lVar14 = (longlong)iVar8;
      uVar5 = puVar9[lVar14] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar9[lVar14 + lVar11 + 1];
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar7 - lVar14 == lVar11) goto LAB_14060faa5;
        }
        uVar15 = (ulonglong)(iVar8 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar10 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
  }
LAB_14060faa5:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar5 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14060fc84 FUN_14060fc84 body=673 status=ok
// SIG undefined FUN_14060fc84(void)

void FUN_14060fc84(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14acb15d0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_14060ff88(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_140610070(param_1 + 0x46);
  FUN_14060ff25(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_14060ff50(param_1 + 0x36);
  FUN_14060ffbf(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_14060ffbf(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_1406100a8(param_1 + 0x28);
  FUN_1406100df(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_14060ffbf(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x22];
  if (plVar2 == (longlong *)0x0) goto LAB_14060fe44;
  *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + -1;
  if ((int)plVar2[0x26] < 1) {
    FUN_1400847bc(plVar2 + 0x17,0);
    if ((int)plVar2[0x21] == 0) {
      FUN_140087e46(plVar2);
      if (*plVar2 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14060fe39;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
      }
    }
  }
LAB_14060fe39:
  param_1[0x22] = 0;
LAB_14060fe44:
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014060ff21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14060ff25 FUN_14060ff25 body=43 status=ok
// SIG undefined FUN_14060ff25(void)

void FUN_14060ff25(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14061077e(param_1);
    param_1 = param_1 + 0x100;
  }
  return;
}



// FUNCTION 14060ff50 FUN_14060ff50 body=55 status=ok
// SIG undefined FUN_14060ff50(void)

void FUN_14060ff50(longlong *param_1)

{
  FUN_1406101a0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14060ff88 FUN_14060ff88 body=55 status=ok
// SIG undefined FUN_14060ff88(void)

void FUN_14060ff88(longlong *param_1)

{
  FUN_140610124(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14060ffbf FUN_14060ffbf body=177 status=ok
// SIG undefined FUN_14060ffbf(void)

void FUN_14060ffbf(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0xb0);
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
        if ((int)plVar1[0x26] < 1) {
          FUN_1400847bc(plVar1 + 0x17,0);
          if ((int)plVar1[0x21] == 0) {
            FUN_140087e46(plVar1);
            if (*plVar1 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_140610004;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40));
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30));
            }
          }
        }
LAB_140610004:
        *plVar2 = 0;
      }
      if (plVar2[-3] != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140610070 FUN_140610070 body=55 status=ok
// SIG undefined FUN_140610070(void)

void FUN_140610070(longlong *param_1)

{
  FUN_14061058e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406100a8 FUN_1406100a8 body=55 status=ok
// SIG undefined FUN_1406100a8(void)

void FUN_1406100a8(longlong *param_1)

{
  FUN_1406103b4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406100df FUN_1406100df body=69 status=ok
// SIG undefined FUN_1406100df(void)

void FUN_1406100df(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    bVar1 = DAT_14cb26569;
    do {
      if ((*plVar2 != 0) && ((bVar1 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(*plVar2 + 0x50));
        bVar1 = DAT_14cb26569;
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140610124 FUN_140610124 body=123 status=ok
// SIG undefined FUN_140610124(void)

void FUN_140610124(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 1406101a0 FUN_1406101a0 body=530 status=ok
// SIG undefined FUN_1406101a0(void)

void FUN_1406101a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = puVar1;
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar9 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar9 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar9 == uVar14) goto LAB_14061029d;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar8 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 < iVar2) {
    uVar13 = 0xffffffff;
    bVar3 = DAT_14cb26569;
    do {
      lVar12 = *(longlong *)(*param_1 + 8 + (longlong)iVar8 * 0x18);
      if ((lVar12 != 0) && ((bVar3 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(lVar12 + 0x50));
        iVar2 = (int)param_1[5];
        bVar3 = DAT_14cb26569;
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = puVar1;
      }
      iVar8 = (int)uVar14;
      lVar12 = (longlong)iVar8;
      uVar5 = puVar4[lVar12] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar11 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar4[lVar12 + lVar11 + 1];
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar7 - lVar12 == lVar11) goto LAB_14061029d;
        }
        uVar14 = (ulonglong)(iVar8 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar5 & uVar5);
      uVar9 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar2);
  }
LAB_14061029d:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar5 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1406103b4 FUN_1406103b4 body=472 status=ok
// SIG undefined FUN_1406103b4(void)

void FUN_1406103b4(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  local_4c = 1;
  if (iVar2 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_50 = (int)uVar8 + 1;
      local_38 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_3c = iVar2;
        if (uVar8 == uVar9) goto LAB_1406103ee;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
      local_50 = (int)uVar9;
      local_38 = iVar7;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_4c * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_3c) {
      local_3c = iVar2;
    }
  }
LAB_1406103ee:
  local_40 = 0xffffffff;
  local_58 = param_1;
  local_48 = puVar1;
  if (local_3c < iVar2) {
    do {
      FUN_141818dd8((longlong)local_3c * 0x40 + *local_58 + 0x10);
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar4 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    FUN_1446efbd8(puVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14061058e FUN_14061058e body=493 status=ok
// SIG undefined FUN_14061058e(void)

void FUN_14061058e(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  local_4c = 1;
  if (iVar3 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar7 = *puVar8;
    if (uVar7 == 0) {
      iVar9 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar9 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar10 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar10 = uVar11;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar9 = 0;
      do {
        local_3c = iVar3;
        if (uVar10 == uVar11) goto LAB_1406105c8;
        iVar9 = iVar9 + 0x20;
        uVar7 = puVar8[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar11;
      local_38 = iVar9;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar5 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_3c) {
      local_3c = iVar3;
    }
  }
LAB_1406105c8:
  local_40 = 0xffffffff;
  local_58 = param_1;
  local_48 = puVar1;
  if (local_3c < iVar3) {
    do {
      plVar4 = *(longlong **)(*local_58 + 0x10 + (longlong)local_3c * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar7 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar7) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar7) {
      uVar6 = uVar7;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(puVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14061077e FUN_14061077e body=582 status=ok
// SIG undefined FUN_14061077e(void)

void FUN_14061077e(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_1406109c4(param_1 + 0xa8);
  lVar5 = DAT_14c9a3da0;
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0xa0) + -1;
    lVar8 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar5 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar5 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  cVar2 = *(char *)(param_1 + 0x78);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    else if ((cVar2 == '\x03') &&
            (plVar3 = *(longlong **)(param_1 + 0x88), plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  lVar5 = DAT_14c9a3da0;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0x70) + -1;
    lVar8 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar5 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar5 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  cVar2 = *(char *)(param_1 + 0x48);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else if ((cVar2 == '\x03') &&
            (plVar3 = *(longlong **)(param_1 + 0x58), plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1406109c4 FUN_1406109c4 body=54 status=ok
// SIG undefined FUN_1406109c4(void)

void FUN_1406109c4(longlong *param_1)

{
  FUN_1438a2218(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140610a12 FUN_140610a12 body=31 status=ok
// SIG undefined FUN_140610a12(void)

undefined8 FUN_140610a12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140610a32 FUN_140610a32 body=79 status=ok
// SIG undefined FUN_140610a32(void)

void FUN_140610a32(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  FUN_140610c94();
  cVar1 = (**(code **)(*param_1 + 0x600))(param_1);
  if (cVar1 != '\0') {
    FUN_140610a82(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140610a82 FUN_140610a82 body=529 status=ok
// SIG undefined FUN_140610a82(void)

void FUN_140610a82(longlong param_1,float param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = *(longlong **)(param_1 + 0x1f0);
  if (((char)plVar7[0x2f] != '\x03') || ((char)plVar7[0xd] != '\x02')) goto LAB_140610af4;
  cVar5 = (**(code **)(*plVar7 + 0x700))();
  if (cVar5 != '\0') goto LAB_140610af4;
  lVar6 = *(longlong *)(param_1 + 0x818);
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x30))(param_1 + 0x1e8);
  }
  if ((*(float *)(lVar6 + 0xd0) <= 0.0) || (param_2 < *(float *)(lVar6 + 0xd0))) goto LAB_140610af4;
  local_90 = *(undefined4 *)(lVar6 + 0xd4);
  local_78 = *(undefined8 *)(lVar6 + 0xe8);
  uStack_88 = *(undefined4 *)(lVar6 + 0xd8);
  uStack_84 = *(undefined4 *)(lVar6 + 0xdc);
  uStack_50 = *(undefined4 *)(lVar6 + 0xe0);
  uStack_4c = *(undefined4 *)(lVar6 + 0xe4);
  uStack_80 = *(undefined8 *)(lVar6 + 0xe0);
  local_58 = uStack_88;
  uStack_54 = uStack_84;
  local_48 = local_78;
  if ((*(int *)(lVar6 + 0xf4) == 0) ||
     ((uVar1 = *(uint *)(lVar6 + 0xf0), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)))) {
LAB_140610c4c:
    local_68 = 0;
    local_8c = uStack_5c;
    lVar8 = 0;
  }
  else {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar7 == (longlong *)0x0) ||
       (((int)plVar7[2] != *(int *)(lVar6 + 0xf4) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
    goto LAB_140610c4c;
    lVar8 = *plVar7;
    if (lVar8 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar8);
    }
    local_68 = 0;
    local_8c = uStack_5c;
    uStack_88 = local_58;
    uStack_84 = uStack_54;
    uStack_80 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_48;
    if ((lVar8 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar8);
    }
  }
  local_70 = lVar8;
  FUN_140836610(param_1 + 0x1f08);
  FUN_14571cbb6(param_1 + 0x1f08);
  *(undefined8 *)(lVar6 + 0xd0) = 0xffffffffbf800000;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(lVar6 + 0xd8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(lVar6 + 0xdc) = uVar2;
  *(undefined4 *)(lVar6 + 0xe0) = uVar3;
  *(undefined4 *)(lVar6 + 0xe4) = uVar4;
  *(undefined8 *)(lVar6 + 0xe8) = DAT_14c8464f0;
  *(undefined8 *)(lVar6 + 0xf0) = 0;
LAB_140610af4:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140610c94 FUN_140610c94 body=996 status=ok
// SIG undefined FUN_140610c94(void)

void FUN_140610c94(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  double dVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_6f8 [32];
  undefined8 *local_6d8;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  longlong local_638;
  longlong local_260;
  longlong local_50;
  byte local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  cVar3 = (**(code **)(*param_1 + 0x600))();
  if (cVar3 == '\0') goto LAB_140610fa7;
  (**(code **)(*param_1 + 0xa50))(param_1,param_4);
  (**(code **)(*(longlong *)param_1[0x3e] + 0x898))((longlong *)param_1[0x3e],param_3);
  (**(code **)(*param_1 + 0x958))(param_1,&local_648,param_5);
  param_1[0x73] = local_638;
  *(undefined4 *)(param_1 + 0x71) = (undefined4)local_648;
  *(undefined4 *)((longlong)param_1 + 0x38c) = local_648._4_4_;
  *(undefined4 *)(param_1 + 0x72) = uStack_640;
  *(undefined4 *)((longlong)param_1 + 0x394) = uStack_63c;
  fVar8 = (float)(**(code **)(*param_1 + 0x710))(param_1);
  dVar10 = DAT_14c8464e8;
  dVar11 = DAT_14c8464f0;
  dVar1 = DAT_14c8464e0;
  if (0.0001 <= fVar8) {
    dVar12 = (double)fVar8;
    dVar1 = (double)param_1[0x71];
    dVar10 = (double)param_1[0x72];
    dVar11 = (double)param_1[0x73];
    dVar13 = dVar11 * dVar11 + dVar1 * dVar1 + dVar10 * dVar10;
    if (dVar12 * dVar12 < dVar13) {
      dVar12 = (1.0 / SQRT(dVar13)) * dVar12;
      dVar10 = dVar10 * dVar12;
      dVar11 = dVar11 * dVar12;
      dVar1 = dVar1 * dVar12;
    }
  }
  param_1[0x71] = (longlong)dVar1;
  param_1[0x72] = (longlong)dVar10;
  param_1[0x73] = (longlong)dVar11;
  uVar9 = (**(code **)(*param_1 + 0x5c0))(param_1);
  *(undefined4 *)(param_1 + 0x86) = uVar9;
  lVar5 = param_1[0x22];
  local_668 = *(undefined8 *)(lVar5 + 0x260);
  uStack_660 = *(undefined8 *)(lVar5 + 0x268);
  local_658 = *(undefined8 *)(lVar5 + 0x270);
  local_688 = *(undefined8 *)(lVar5 + 0x240);
  uStack_680 = *(undefined8 *)(lVar5 + 0x248);
  local_678 = *(undefined4 *)(lVar5 + 0x250);
  uStack_674 = *(undefined4 *)(lVar5 + 0x254);
  uStack_670 = *(undefined4 *)(lVar5 + 600);
  uStack_66c = *(undefined4 *)(lVar5 + 0x25c);
  plVar2 = *(longlong **)(param_1[0x3e] + 0x428);
  if (plVar2 == (longlong *)0x0) goto LAB_140610e71;
  lVar5 = *plVar2;
  pcVar7 = *(code **)(lVar5 + 0xba8);
  if (pcVar7 == FUN_144b222b6) {
    if (*(code **)(lVar5 + 3000) == (code *)&LAB_147a0c89e) {
      if ((plVar2[0x15d] == 0) || (*(char *)(plVar2[0x15d] + 0x30) != '\x02')) {
LAB_140610e5a:
        pcVar7 = *(code **)(lVar5 + 0xbb0);
        if (pcVar7 != (code *)&LAB_1400ba9be) goto LAB_14061103d;
      }
    }
    else {
      cVar3 = (**(code **)(lVar5 + 3000))(plVar2);
      if (cVar3 == '\0') {
        lVar5 = *plVar2;
        goto LAB_140610e5a;
      }
    }
  }
  else {
LAB_14061103d:
    (*pcVar7)(plVar2);
  }
LAB_140610e71:
  if ((DAT_14cad0aa0 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1[0x3e] + 0x428);
  }
  FUN_1402ed838(&local_648,uVar6,1,1);
  (**(code **)(*param_1 + 0x9c8))(param_1,param_3);
  cVar3 = (**(code **)(*param_1 + 0x600))(param_1);
  if (((((cVar3 != '\0') && (param_1[0x3e] != 0)) && (param_1[0x22] != 0)) &&
      ((DAT_14c7613a0 != 0 && (*(char *)(param_1[0x3e] + 0x68) == '\x02')))) &&
     ((param_1[0x15] != 0 && (iVar4 = FUN_14487fd02(), iVar4 == 2)))) {
    lVar5 = param_1[0x22];
    local_6a8 = *(undefined8 *)(lVar5 + 0x240);
    uStack_6a0 = *(undefined8 *)(lVar5 + 0x248);
    local_6d8 = &local_6a8;
    local_698 = *(undefined8 *)(lVar5 + 0x250);
    uStack_690 = *(undefined8 *)(lVar5 + 600);
    local_6c8 = *(undefined8 *)(lVar5 + 0x260);
    uStack_6c0 = *(undefined8 *)(lVar5 + 0x268);
    local_6b8 = *(undefined8 *)(lVar5 + 0x270);
    (**(code **)(param_1[0x3d] + 0x20))(param_1 + 0x3d,&local_668,&local_688);
  }
  if ((((local_40 & 1) != 0) && (local_648 != 0)) && ((*(uint *)(local_648 + 8) >> 0x1e & 1) == 0))
  {
    FUN_140248a4c(local_648,&local_648);
  }
  local_648 = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_260 != 0) {
    FUN_1400020a8();
  }
LAB_140610fa7:
  if ((local_30 ^ (ulonglong)auStack_6f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14061107a FUN_14061107a body=312 status=ok
// SIG undefined FUN_14061107a(void)

double * FUN_14061107a(longlong param_1,double *param_2,double *param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  
  if (1e-08 < ABS((-*(double *)(param_1 + 0x230) * *param_3 -
                  param_3[1] * *(double *)(param_1 + 0x238)) -
                  param_3[2] * *(double *)(param_1 + 0x240))) {
    plVar1 = (longlong *)(param_1 + 0x178);
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xe0))(plVar1);
    if (cVar6 == '\0') {
      cVar6 = (**(code **)(*plVar1 + 0xd8))(plVar1);
      if (cVar6 == '\0') goto LAB_1406110e4;
    }
    dVar2 = *(double *)(param_1 + 0x238);
    dVar3 = *(double *)(param_1 + 0x240);
    dVar4 = param_3[1];
    dVar5 = param_3[2];
    dVar7 = (-*(double *)(param_1 + 0x230) * *param_3 - dVar4 * dVar2) - dVar5 * dVar3;
    *param_2 = dVar7 * *(double *)(param_1 + 0x230) + *param_3;
    param_2[1] = dVar2 * dVar7 + dVar4;
    param_2[2] = dVar3 * dVar7 + dVar5;
  }
  else {
LAB_1406110e4:
    param_2[2] = param_3[2];
    dVar2 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = dVar2;
  }
  return param_2;
}



// FUNCTION 1406111b2 FUN_1406111b2 body=15 status=ok
// SIG undefined FUN_1406111b2(void)

undefined4 FUN_1406111b2(longlong *param_1,float param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *pwStack_c8;
  int iStack_c0;
  undefined1 auStack_b8 [128];
  longlong lStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  ulonglong uStack_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(lVar1 + 1) & 2) == 0) {
    FUN_1406112c4(&pwStack_c8,(double)param_2,1);
    _Str = pwStack_c8;
    if (iStack_c0 == 0) {
      _Str = L"";
    }
    lStack_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      uStack_30 = 0;
      uStack_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1449b853c(auStack_b8,_Str,sVar3 & 0xffffffff,1);
    }
    uVar2 = FUN_140126aca(lVar1,uStack_30);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
    if (pwStack_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((uStack_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1406111c2 FUN_1406111c2 body=256 status=ok
// SIG undefined FUN_1406111c2(void)

undefined4 FUN_1406111c2(longlong param_1,float param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  int local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
    FUN_1406112c4(&local_c8,(double)param_2,1);
    _Str = local_c8;
    if (local_c0 == 0) {
      _Str = L"";
    }
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar2 = wcslen(_Str);
      FUN_1449b853c(local_b8,_Str,sVar2 & 0xffffffff,1);
    }
    uVar1 = FUN_140126aca(param_1,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1406112c4 FUN_1406112c4 body=388 status=ok
// SIG undefined FUN_1406112c4(void)

longlong * FUN_1406112c4(longlong *param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  void *_Dst;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  FUN_1427462c0(&local_38);
  FUN_140002266(param_1,&DAT_149e02016,local_38);
  cVar4 = FUN_1405b43cc(param_1);
  if (cVar4 != '\0') {
    iVar5 = (int)param_1[1];
    uVar6 = iVar5 - 1;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    if ((int)uVar6 < 1) {
      uVar9 = 0xffffffff;
      uVar11 = 0xffffffff;
    }
    else {
      uVar8 = (ulonglong)uVar6;
      uVar11 = 0xffffffff;
      uVar3 = uVar6;
      do {
        uVar8 = uVar8 - 1;
        sVar1 = *(short *)(*param_1 + (uVar8 & 0xffffffff) * 2);
        if (sVar1 == 0x2e) {
          uVar9 = uVar3 - 1;
          if ((int)uVar11 < (int)uVar9) {
            uVar11 = uVar9;
          }
          break;
        }
        uVar9 = 0xffffffff;
        uVar10 = 0xffffffff;
        if (sVar1 != 0x30) {
          uVar10 = uVar3;
        }
        if (uVar11 == 0xffffffff) {
          uVar11 = uVar10;
        }
        bVar2 = 1 < (int)uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar2);
    }
    uVar6 = uVar6 - uVar11;
    if (0 < (int)uVar6) {
      iVar7 = iVar5 - (uVar6 + uVar11);
      if (iVar7 != 0) {
        _Dst = (void *)((longlong)(int)uVar11 * 2 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar6 * 2),(longlong)iVar7 * 2);
        iVar5 = (int)param_1[1];
      }
      iVar5 = iVar5 - uVar6;
      *(int *)(param_1 + 1) = iVar5;
    }
    if (0 < param_3) {
      if (uVar11 == uVar9) {
        FUN_140002184(param_1,0x2e);
        iVar5 = (int)param_1[1];
      }
      iVar7 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar7 = 0;
      }
      iVar5 = param_3 + uVar9 + 1;
      iVar7 = iVar5 - iVar7;
      if (0 < iVar7) {
        if ((0 < iVar5) && (*(int *)((longlong)param_1 + 0xc) <= iVar5)) {
          FUN_1446f8c06(param_1,param_3 + uVar9 + 2);
        }
        do {
          FUN_140002184(param_1,0x30);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061144a FUN_14061144a body=154 status=ok
// SIG undefined FUN_14061144a(void)

void FUN_14061144a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab5bb70;
  param_1[0x72] = &PTR_FUN_14ab5c1b0;
  param_1[0x73] = &PTR_FUN_14ab5c1d0;
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_140222560(param_1);
  return;
}



// FUNCTION 1406114e4 FUN_1406114e4 body=15 status=ok
// SIG undefined FUN_1406114e4(void)

undefined4 FUN_1406114e4(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *pwStack_c8;
  int iStack_c0;
  undefined1 auStack_b8 [128];
  longlong lStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  ulonglong uStack_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(lVar1 + 1) & 2) == 0) {
    FUN_140002266(&pwStack_c8,&DAT_149e061aa,param_2);
    _Str = pwStack_c8;
    if (iStack_c0 == 0) {
      _Str = L"";
    }
    lStack_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      uStack_30 = 0;
      uStack_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1449b853c(auStack_b8,_Str,sVar3 & 0xffffffff,1);
    }
    uVar2 = FUN_140126aca(lVar1,uStack_30);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
    if (pwStack_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((uStack_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1406114f4 FUN_1406114f4 body=256 status=ok
// SIG undefined FUN_1406114f4(void)

undefined4 FUN_1406114f4(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  int local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
    FUN_140002266(&local_c8,&DAT_149e061aa,param_2);
    _Str = local_c8;
    if (local_c0 == 0) {
      _Str = L"";
    }
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar2 = wcslen(_Str);
      FUN_1449b853c(local_b8,_Str,sVar2 & 0xffffffff,1);
    }
    uVar1 = FUN_140126aca(param_1,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1406115f6 FUN_1406115f6 body=384 status=ok
// SIG undefined FUN_1406115f6(void)

undefined8 * FUN_1406115f6(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) || (*(int *)(param_1 + 0xc) == 0)) {
LAB_14061174c:
    puVar3 = &DAT_14c846480;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  uVar1 = *(uint *)(param_1 + 8);
  if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14061174c;
  lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (((lVar5 == 0) || (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0xc))) ||
     ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) goto LAB_14061174c;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  lVar5 = FUN_14061177a(param_1);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x9c);
  }
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  local_38 = *(undefined8 *)(lVar5 + 1000);
  local_48 = *(undefined4 *)(lVar5 + 0x3d8);
  uStack_44 = *(undefined4 *)(lVar5 + 0x3dc);
  uStack_40 = *(undefined4 *)(lVar5 + 0x3e0);
  uStack_3c = *(undefined4 *)(lVar5 + 0x3e4);
  if (*(int *)(lVar5 + 0x3f4) != 0) {
    uVar1 = *(uint *)(lVar5 + 0x3f0);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140611710;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(lVar5 + 0x3f4) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar3;
      goto LAB_140611710;
    }
  }
  uVar6 = 0;
LAB_140611710:
  local_58 = &local_48;
  FUN_140611910(param_2,uVar2,uVar6,uVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061177a FUN_14061177a body=406 status=ok
// SIG undefined FUN_14061177a(void)

longlong FUN_14061177a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      lVar4 = *(longlong *)(lVar5 + 0x10);
      if (lVar4 == 0) {
        uVar6 = FUN_14050c9fe();
        lVar4 = FUN_14477b664(uVar6);
        *(longlong *)(lVar5 + 0x10) = lVar4;
      }
      plVar8 = (longlong *)(lVar5 + 8);
      lVar7 = *(longlong *)(lVar5 + 0x18);
      if (lVar7 != 0) {
LAB_140611888:
        if (lVar4 != 0) {
          return lVar7;
        }
        uVar6 = FUN_14050c9fe();
        lVar4 = FUN_14477b664(uVar6);
        *(longlong *)(lVar5 + 0x10) = lVar4;
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          return *(longlong *)(lVar5 + 0x18);
        }
        if (lVar4 == 0) {
          return 0;
        }
        if (*plVar8 != 0) {
          plVar2 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar4 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar4 = FUN_144aff482(uVar6,plVar8);
          }
          *(longlong *)(lVar5 + 0x18) = lVar4;
          return lVar4;
        }
        return 0;
      }
      if ((*plVar8 != 0) && (lVar4 != 0)) {
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(lVar5 + 0x18) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar7 = FUN_144aff482(uVar6,plVar8);
          *(longlong *)(lVar5 + 0x18) = lVar7;
          if (lVar7 != 0) {
            lVar4 = *(longlong *)(lVar5 + 0x10);
            goto LAB_140611888;
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000140611815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 140611910 FUN_140611910 body=347 status=ok
// SIG undefined FUN_140611910(void)

undefined8 *
FUN_140611910(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,double *param_5
             )

{
  double dVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    param_2 = param_3;
  }
  if (param_2 == 0) {
    puVar10 = &DAT_14c846480;
    puVar11 = param_1;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  else {
    puVar10 = &DAT_14c846480;
    if (*(longlong *)(param_2 + 0x1c8) != 0) {
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x1c8) + 0x240);
    }
    puVar11 = param_1;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    if (param_4 != 0) {
      local_48 = 0;
      uStack_40 = 0;
      FUN_140611a6c(param_2,&local_48,0);
      lVar9 = local_48;
      lVar12 = (longlong)(int)uStack_40;
      if (lVar12 != 0) {
        lVar13 = 0;
        do {
          plVar2 = *(longlong **)(lVar9 + lVar13);
          if ((plVar2 != (longlong *)0x0) &&
             (cVar8 = (**(code **)(*plVar2 + 0x4c8))(plVar2,param_4), cVar8 != '\0')) {
            plVar2 = *(longlong **)(lVar9 + lVar13);
            (**(code **)(*plVar2 + 0x4a8))(plVar2,param_1,param_4,0);
            break;
          }
          lVar13 = lVar13 + 8;
        } while (lVar12 * 8 != lVar13);
      }
      if (local_48 != 0) {
        FUN_1400020a8(local_48);
      }
    }
  }
  dVar1 = param_5[2];
  auVar3._8_4_ = SUB84(param_5[1] + (double)param_1[5],0);
  auVar3._0_8_ = *param_5 + (double)param_1[4];
  auVar3._12_4_ = (int)((ulonglong)(param_5[1] + (double)param_1[5]) >> 0x20);
  *(undefined1 (*) [16])(param_1 + 4) = auVar3;
  param_1[6] = dVar1 + (double)param_1[6];
  param_1[7] = (double)param_1[7] + 0.0;
  uVar7 = DAT_14c846520;
  uVar6 = DAT_14c846518._4_4_;
  uVar5 = (undefined4)DAT_14c846518;
  uVar4 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 8) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 9) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
  param_1[10] = uVar7;
  param_1[0xb] = 0;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140611a6c FUN_140611a6c body=336 status=ok
// SIG undefined FUN_140611a6c(void)

void FUN_140611a6c(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_140732c36(param_2,0);
  }
  if (DAT_14cac7648 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_143242436;
    local_58 = &LAB_14789ef1f;
    local_60 = &LAB_1417b008f;
    local_68 = L"Engine";
    local_70 = 0x8000000000;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_30 = DAT_14cac7648;
  if ((DAT_14cac7648 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140611bbe(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140611bbe FUN_140611bbe body=719 status=ok
// SIG undefined FUN_140611bbe(void)

void FUN_140611bbe(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_140611d47:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_140611c29:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1487c991e(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1487c96b6(param_1,&local_40,param_4);
      }
      goto LAB_140611c67;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_140611d47;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140611c29;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_140611e8e(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1487c9a54(param_1,&local_50,param_4);
  }
LAB_140611c67:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140611e8e FUN_140611e8e body=944 status=ok
// SIG undefined FUN_140611e8e(void)

void FUN_140611e8e(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  uint *local_68;
  longlong *local_60;
  ulonglong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar8 = (uint *)(param_1 + 0x250);
  uVar2 = *(uint *)(param_1 + 0x268);
  if (uVar2 == 0) {
    uVar6 = 1;
    uVar12 = 0;
    uVar3 = 0;
    iVar5 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar4 = puVar8;
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar5 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar5 = uVar2 - 1;
      }
      uVar12 = 0;
      uVar6 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar6 = uVar12;
      }
      iVar5 = 0;
      do {
        if (uVar6 == uVar12) goto LAB_1406120f5;
        iVar5 = iVar5 + 0x20;
        uVar3 = puVar4[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar12 = 0;
      iVar5 = 0;
    }
    uVar6 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar6 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar3 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != uVar2) {
    uVar14 = 0xffffffff;
    local_68 = puVar8;
    local_60 = param_2;
    local_58 = (ulonglong)uVar2;
    do {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar3 * 0x10);
      if (lVar7 != 0) {
        lVar13 = *param_2;
        if ((lVar13 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar13);
          param_2 = local_60;
          puVar8 = local_68;
LAB_140611fa4:
          if (DAT_14cad00c8 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1479b7a0c;
            local_90 = &LAB_1463b464e;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000005;
            local_b0 = 8;
            local_b8 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            param_2 = local_60;
            puVar8 = local_68;
            if (DAT_14cad00c8 == 0) goto LAB_1406121d5;
          }
          if (*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1406121d5;
          if (*(longlong *)
               (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar13 = 0;
          }
        }
        else {
          if (lVar13 != 0) goto LAB_140611fa4;
LAB_1406121d5:
          lVar13 = 0;
        }
        if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
          iVar11 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar11 + 1U) {
            FUN_140612240(param_3,iVar11);
            param_2 = local_60;
            puVar8 = local_68;
          }
          *(longlong *)(*param_3 + (longlong)iVar11 * 8) = lVar7;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar6;
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = puVar8;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar11 = (int)uVar12;
      lVar7 = (longlong)iVar11;
      uVar3 = puVar4[lVar7] & uVar14;
      if (uVar3 == 0) {
        iVar9 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar9 = uVar2 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar5 = iVar5 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar11) {
          iVar10 = iVar11;
        }
        puVar8 = local_68;
        if (iVar11 < iVar9) {
          lVar13 = 0;
          do {
            uVar3 = puVar4[lVar7 + lVar13 + 1];
            if (uVar3 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_14061209a;
            }
            iVar5 = iVar5 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar10 - lVar7 != lVar13);
          uVar14 = 0xffffffff;
          iVar11 = iVar10;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        param_2 = local_60;
        uVar3 = uVar2;
      }
      else {
LAB_14061209a:
        uVar6 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar6 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar3 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
    } while (uVar3 != (uint)local_58);
  }
LAB_1406120f5:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140612240 FUN_140612240 body=346 status=ok
// SIG undefined FUN_140612240(void)

void FUN_140612240(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406122d2;
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
LAB_1406122d2:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14061239c FUN_14061239c body=467 status=ok
// SIG undefined FUN_14061239c(void)

void FUN_14061239c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x428);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x428) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x420);
  if (*(longlong *)(param_1 + 0x430) == 0) {
    if ((*plVar1 != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x430) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x430) = lVar5;
        if (lVar5 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x428);
          goto LAB_1406124b7;
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 == 0) {
      uVar4 = FUN_14050c9fe();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x18) = lVar5;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x10));
      }
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      return;
    }
    return;
  }
LAB_1406124b7:
  if (lVar5 != 0) {
    return;
  }
  uVar4 = FUN_14050c9fe();
  lVar5 = FUN_14477b664(uVar4);
  *(longlong *)(param_1 + 0x428) = lVar5;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*plVar1 != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      uVar4 = FUN_144aff482(uVar4,plVar1);
    }
    *(undefined8 *)(param_1 + 0x430) = uVar4;
    return;
  }
  return;
}



// FUNCTION 140612570 FUN_140612570 body=286 status=ok
// SIG undefined FUN_140612570(void)

undefined8 FUN_140612570(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_140612688;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140612688;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140612688:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140612635;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140612635;
    }
  }
  uVar6 = 0;
LAB_140612635:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140612690 FUN_140612690 body=385 status=ok
// SIG undefined FUN_140612690(void)

void FUN_140612690(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (((lVar5 != 0) || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) &&
     ((*(byte *)(lVar5 + 0x155) & 0x20) == 0)) {
    FUN_14061285c(&local_30);
    if (local_28 != (longlong *)0x0) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_28;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_30 == 0) {
          FUN_14052f7ec(param_1);
        }
        else {
          lVar5 = FUN_140612812(local_30);
          if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x155) & 0x20) == 0)) &&
             (*(longlong *)(param_1 + 0xf98) == 0)) {
            plVar2 = (longlong *)(param_1 + 0xf88);
            *(longlong *)(param_1 + 4000) = local_30 + 0x788;
            *(longlong *)(param_1 + 0xf98) = param_1;
            lVar5 = *(longlong *)(local_30 + 0x788);
            while( true ) {
              *(longlong *)(param_1 + 0xf88) = lVar5;
              LOCK();
              lVar6 = **(longlong **)(param_1 + 4000);
              bVar8 = lVar5 == lVar6;
              if (bVar8) {
                **(longlong **)(param_1 + 4000) = (longlong)plVar2;
                lVar6 = lVar5;
              }
              UNLOCK();
              if (bVar8) break;
              *(longlong *)(param_1 + 0xf88) = lVar6;
              lVar5 = **(longlong **)(param_1 + 4000);
            }
            if (*plVar2 != 0) {
              *(longlong **)(*plVar2 + 8) = plVar2;
            }
          }
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
        goto LAB_140612789;
      }
    }
    FUN_14052f7ec(param_1);
  }
LAB_140612789:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140612812 FUN_140612812 body=73 status=ok
// SIG undefined FUN_140612812(void)

undefined8 FUN_140612812(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0xc)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 14061285c FUN_14061285c body=116 status=ok
// SIG undefined FUN_14061285c(void)

undefined8 * FUN_14061285c(undefined8 *param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406128d2(&local_28);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406128d2 FUN_1406128d2 body=331 status=ok
// SIG undefined FUN_1406128d2(void)

longlong * FUN_1406128d2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  uVar3 = DAT_14cb1ae68;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14005915a(DAT_14c9a7d10,&local_38,uVar3,param_2);
  plVar4 = local_30;
  if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
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
  *param_1 = local_38;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140612a20 FUN_140612a20 body=134 status=ok
// SIG undefined FUN_140612a20(void)

void FUN_140612a20(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1bb130;
  param_1[0x72] = &PTR_FUN_14a1bb7e0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_140612aa6(param_1 + 0xbc);
  plVar3 = (longlong *)param_1[0xb9];
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
  FUN_140612ade(param_1);
  return;
}



// FUNCTION 140612aa6 FUN_140612aa6 body=55 status=ok
// SIG undefined FUN_140612aa6(void)

void FUN_140612aa6(longlong *param_1)

{
  FUN_140612b68(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140612ade FUN_140612ade body=138 status=ok
// SIG undefined FUN_140612ade(void)

void FUN_140612ade(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a778730;
  param_1[0x72] = &PTR_FUN_14a778de0;
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xad] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140612b68 FUN_140612b68 body=384 status=ok
// SIG undefined FUN_140612b68(void)

void FUN_140612b68(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
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
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 140612cf4 FUN_140612cf4 body=140 status=ok
// SIG undefined FUN_140612cf4(void)

undefined8 * FUN_140612cf4(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a74c0d0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 140612d80 FUN_140612d80 body=12 status=ok
// SIG undefined FUN_140612d80(void)

void FUN_140612d80(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140612d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140612d8c FUN_140612d8c body=31 status=ok
// SIG undefined FUN_140612d8c(void)

undefined8 FUN_140612d8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140612dac FUN_140612dac body=249 status=ok
// SIG undefined FUN_140612dac(void)

undefined4
FUN_140612dac(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_60 [12];
  byte local_54;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 != 0) {
    local_70 = param_7;
    local_78 = param_6;
    FUN_140612eb6(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_48 = 0;
  local_50 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_60);
  if ((local_54 & 2) == 0) {
    local_50 = 0;
    local_48 = 0xffffffff;
  }
  local_70 = param_7;
  local_78 = param_6;
  uVar1 = FUN_140612eb6(param_3,param_2,&local_50,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_60);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140612eb6 FUN_140612eb6 body=143 status=ok
// SIG undefined FUN_140612eb6(void)

undefined8
FUN_140612eb6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4dd0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4dd0 = FUN_140002ddd(FUN_14173b99c,uVar1,L"GbxBlackboardEntryRef");
  }
  (**(code **)(**(longlong **)(DAT_14c9a4dd0 + 0x70) + 0xf0))
            (*(longlong **)(DAT_14c9a4dd0 + 0x70),param_2,param_1,0,param_3,param_4,param_5,param_6)
  ;
  return 1;
}



// FUNCTION 140612f46 FUN_140612f46 body=341 status=ok
// SIG undefined FUN_140612f46(void)

longlong FUN_140612f46(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] != 0) && (uVar3 = *param_1, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
      && ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 != (longlong *)0x0 && (*(uint *)(plVar5 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
    return *plVar5;
  }
  if (*(longlong *)(param_1 + 2) == 0) {
LAB_140613010:
    lVar7 = 0;
  }
  else {
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        goto LAB_140613010;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    lVar7 = 0;
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
      lVar7 = lVar4;
    }
  }
  return lVar7;
}



// FUNCTION 1406130a2 FUN_1406130a2 body=57 status=ok
// SIG undefined FUN_1406130a2(void)

void FUN_1406130a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b310 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b310 = FUN_140002ddd(FUN_14185d883,uVar1,L"LightProjectileSpawnData");
  }
  return;
}



// FUNCTION 1406130e4 FUN_1406130e4 body=275 status=ok
// SIG undefined FUN_1406130e4(void)

undefined8 * FUN_1406130e4(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  undefined *local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b392a10;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = param_1 + 0xc;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  local_50 = &DAT_14a171d50;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &DAT_14cb70058;
  uVar2 = FUN_144a05bde(&DAT_14cb70c78,&local_50);
  *(undefined2 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_144a05bde(&DAT_14cb70c78,&local_50);
  *(undefined2 *)((longlong)param_1 + 0xc2) = uVar2;
  local_50 = &DAT_14a171d50;
  uVar1 = uStack_38 >> 0x20;
  uStack_38 = uStack_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_40,0);
  }
  local_48 = (undefined *)0x0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406131f8 FUN_1406131f8 body=255 status=ok
// SIG undefined FUN_1406131f8(void)

void FUN_1406131f8(longlong param_1,int param_2)

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



// FUNCTION 1406132f8 FUN_1406132f8 body=517 status=ok
// SIG undefined FUN_1406132f8(void)

void FUN_1406132f8(longlong param_1)

{
  void *pvVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (lVar5 != 0) {
    pvVar1 = (void *)(param_1 + 0x4c8);
    iVar4 = *(int *)(lVar5 + 0x358);
    *(int *)(param_1 + 0x4e0) = iVar4;
    uVar12 = iVar4 + 0x1f;
    if (0x1f < uVar12) {
      uVar14 = uVar12 >> 5;
      if (*(int *)(param_1 + 0x4e4) + 0x1fU >> 5 < uVar14) {
        FUN_14499171c(pvVar1,0,uVar14,4);
        *(uint *)(param_1 + 0x4e4) = uVar12 & 0xffffffe0;
      }
      pvVar11 = *(void **)(param_1 + 0x4d8);
      if (*(void **)(param_1 + 0x4d8) == (void *)0x0) {
        pvVar11 = pvVar1;
      }
      if (uVar12 < 0x120) {
        uVar14 = uVar12 >> 3 & 0x3c;
      }
      else {
        uVar14 = uVar14 << 2;
      }
      memset(pvVar11,0,(ulonglong)uVar14);
      iVar4 = *(int *)(param_1 + 0x4e0);
      iVar8 = iVar4 + 0x1f;
      if (-1 < iVar4) {
        iVar8 = iVar4;
      }
      if (iVar4 % 0x20 != 0) {
        pvVar11 = *(void **)(param_1 + 0x4d8);
        if (*(void **)(param_1 + 0x4d8) == (void *)0x0) {
          pvVar11 = pvVar1;
        }
        bVar7 = -(char)(iVar4 % 0x20);
        *(uint *)((longlong)pvVar11 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar11 + (longlong)(iVar8 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    if (0 < *(int *)(lVar5 + 0x358)) {
      uVar13 = 0;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x350) + uVar13 * 8);
        if (lVar9 != 0) {
          iVar4 = *(int *)(lVar9 + 0x18);
          if (((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0x78))) &&
             (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar4 * 8),
             plVar6 != (longlong *)0x0)) {
            lVar9 = (**(code **)(*plVar6 + 8))(plVar6);
            lVar10 = FUN_1406134fe();
            if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                == lVar10 + 0x30)) {
              if (*(char *)((longlong)plVar6 + 0x51) == '\x01') {
                *(undefined1 *)((longlong)plVar6 + 0x51) = 0;
              }
              (**(code **)(*plVar6 + 0xa0))(plVar6);
              if (*(char *)((longlong)plVar6 + 0x51) == '\x01') {
                bVar7 = *(byte *)(plVar6 + 10);
              }
              else {
                bVar3 = *(byte *)(plVar6[9] + 0x38);
                bVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
                bVar7 = bVar7 ^ bVar3;
                *(byte *)(plVar6 + 10) = bVar7;
                *(undefined1 *)((longlong)plVar6 + 0x51) = 1;
              }
              if ((bVar7 & 1) != 0) {
                pvVar11 = *(void **)(param_1 + 0x4d8);
                if (*(void **)(param_1 + 0x4d8) == (void *)0x0) {
                  pvVar11 = pvVar1;
                }
                puVar2 = (uint *)((longlong)pvVar11 + (uVar13 >> 5 & 0x7ffffff) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)uVar13 & 0x1f);
              }
            }
          }
        }
        uVar13 = uVar13 + 1;
      } while ((longlong)uVar13 < (longlong)*(int *)(lVar5 + 0x358));
    }
  }
  return;
}



// FUNCTION 1406134fe FUN_1406134fe body=57 status=ok
// SIG undefined FUN_1406134fe(void)

void FUN_1406134fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb225c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb225c0 = FUN_140002ddd(FUN_14643900c,uVar1,L"GpsCondition");
  }
  return;
}



// FUNCTION 140613538 FUN_140613538 body=70 status=ok
// SIG undefined FUN_140613538(void)

byte FUN_140613538(longlong param_1)

{
  byte bVar1;
  undefined1 auStack_38 [39];
  byte local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  bVar1 = FUN_140613580(param_1 + 0x58,&local_11);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar1 & local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140613580 FUN_140613580 body=179 status=ok
// SIG undefined FUN_140613580(void)

ulonglong FUN_140613580(int *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  int *piVar4;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((char)param_1[8] == '\x01') {
    *(bool *)param_2 = *param_1 != 0;
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    piVar4 = &local_48;
    FUN_1400b56fe(piVar4,param_1,1);
    uVar2 = CONCAT71(uVar3,local_28 != 0);
    if (local_28 != 0) {
      *(bool *)param_2 = local_48 != 0;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        piVar4 = (int *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(piVar4);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140613634 FUN_140613634 body=754 status=ok
// SIG undefined FUN_140613634(void)

void FUN_140613634(longlong param_1)

{
  longlong *_Dst;
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  undefined1 auStack_a8 [40];
  char local_80 [16];
  longlong *local_70;
  int local_58;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar13 = *(longlong *)(param_1 + 0x40);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0x4c) != 0)) {
    uVar2 = *(uint *)(lVar13 + 0x48);
    uVar9 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1406136be;
    puVar10 = (undefined8 *)
              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((puVar10 != (undefined8 *)0x0) && (*(int *)(puVar10 + 2) == *(int *)(lVar13 + 0x4c))) &&
       ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)) {
      uVar9 = *puVar10;
      goto LAB_1406136be;
    }
  }
  uVar9 = 0;
LAB_1406136be:
  local_80[0] = '\0';
  local_58 = 0;
  FUN_1456bb102(local_80,uVar9);
  FUN_1447c3578(lVar3 + 0x40,local_50,local_80);
  _Dst = (longlong *)(param_1 + 0x58);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x78) * 0x120));
  if (pcVar4 != (code *)0x0) {
    plVar8 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x70)) {
      plVar8 = (longlong *)*_Dst;
    }
    (*pcVar4)(plVar8);
  }
  if (0x18 < *(ushort *)(param_1 + 0x70)) {
    FUN_1400020a8(*_Dst);
  }
  *(ushort *)(param_1 + 0x70) = local_38;
  if (local_38 < 0x19) {
    uVar6 = (ulonglong)((uint)local_30 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar6) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar6) == (code *)0x0) {
        memcpy(_Dst,local_50,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar6));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar6))(_Dst,local_50);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar6))(_Dst,local_50);
    }
  }
  else {
    *_Dst = (longlong)local_50[0];
    local_50[0] = (undefined8 ****)0x0;
    local_38 = 0;
  }
  *(byte *)(param_1 + 0x78) = local_30;
  local_30 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar15 = local_50;
    if (0x18 < local_38) {
      ppppuVar15 = (undefined8 ****)local_50[0];
    }
    (*DAT_14c9a85d0)(ppppuVar15);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  lVar3 = DAT_14c9a3da0;
  if ((longlong)local_58 != 0) {
    lVar13 = (longlong)local_58 + -1;
    lVar14 = lVar13 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
    if (*(longlong *)(lVar3 + lVar14) != 0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14c9a3da0;
    iVar12 = (int)lVar13;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
    }
    *(undefined4 *)(lVar3 + lVar14) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar3 + 4 + lVar14) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar7 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar7 = iVar12;
    }
    bVar5 = (byte)lVar13 & 0x1f;
    DAT_14c9a3dd0 = iVar12;
    *(uint *)(puVar11 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_58 = 0;
  }
  if ((local_80[0] == '\x03') && (local_70 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140613928 FUN_140613928 body=1630 status=ok
// SIG undefined FUN_140613928(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140613928(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar8;
  double dVar10;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  double local_178;
  double local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  ulonglong local_d0;
  double dVar7;
  double dVar9;
  double dVar11;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((((*(char *)(param_3 + 0xec) == '\x01') && (*(char *)(param_1 + 0x360) == '\x01')) &&
      (lVar12 = *(longlong *)(param_2 + 0x20), lVar12 != 0)) &&
     ((*(longlong *)(lVar12 + 0xa8) != 0 &&
      (lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0xa8) + 0x1c8), lVar13 != 0)))) {
    dVar1 = *(double *)(lVar12 + 0x1c8);
    uVar2 = *(undefined8 *)(lVar12 + 0x1d0);
    dVar3 = *(double *)(lVar12 + 0x1d8);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = dVar3;
    dVar4 = *(double *)(lVar12 + 0x198);
    dVar5 = *(double *)(lVar12 + 0x1a0);
    dVar15 = *(double *)(lVar12 + 0x1a8);
    auVar18 = *(undefined1 (*) [16])(lVar12 + 0x1b0);
    dVar25 = auVar18._0_8_;
    dVar27 = auVar18._8_8_;
    dVar32 = *(double *)(lVar12 + 0x1c0);
    pdVar14 = *(double **)(lVar12 + 0x230);
    if (pdVar14 == (double *)0x0) {
      pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
      dVar30 = DAT_14c8463d8;
      *pdVar14 = DAT_14c8463d0;
      pdVar14[1] = dVar30;
      dVar30 = DAT_14c8463e8;
      pdVar14[2] = DAT_14c8463e0;
      pdVar14[3] = dVar30;
      dVar30 = DAT_14c846500;
      pdVar14[4] = DAT_14c8464f8;
      pdVar14[5] = dVar30;
      pdVar14[6] = DAT_14c846508;
      *(double **)(lVar12 + 0x230) = pdVar14;
    }
    auVar20 = _DAT_1499387d0;
    if (((pdVar14[4] != dVar25) || (NAN(pdVar14[4]) || NAN(dVar25))) ||
       ((pdVar14[5] != dVar27 ||
        (((NAN(pdVar14[5]) || NAN(dVar27) || (pdVar14[6] != dVar32)) ||
         (NAN(pdVar14[6]) || NAN(dVar32))))))) {
      auVar22._8_8_ = 0;
      auVar22._0_8_ = dVar32;
      dVar30 = (double)DAT_1499387d0;
      dVar16 = DAT_1499387d0._8_8_;
      auVar18 = divpd(auVar18,_DAT_1499387d0);
      auVar19 = divpd(auVar22,_DAT_1499387d0);
      auVar18 = roundpd(auVar18,auVar18,3);
      auVar19 = roundpd(auVar19,auVar19,3);
      auVar33._0_8_ = dVar25 - auVar18._0_8_ * dVar30;
      auVar33._8_8_ = dVar27 - auVar18._8_8_ * dVar16;
      auVar23._0_8_ = dVar32 - auVar19._0_8_ * dVar30;
      auVar23._8_8_ = 0.0 - auVar19._8_8_ * dVar16;
      auVar28._0_8_ = auVar33._0_8_ + dVar30;
      auVar28._8_8_ = auVar33._8_8_ + dVar16;
      auVar21._0_8_ = auVar23._0_8_ + dVar30;
      auVar21._8_8_ = auVar23._8_8_ + dVar16;
      auVar18._8_8_ = -(ulonglong)(0.0 <= auVar33._8_8_);
      auVar18._0_8_ = -(ulonglong)(0.0 <= auVar33._0_8_);
      auVar29 = blendvpd(auVar28,auVar33,auVar18);
      auVar19._8_8_ = -(ulonglong)(0.0 <= auVar23._8_8_);
      auVar19._0_8_ = -(ulonglong)(0.0 <= auVar23._0_8_);
      auVar18 = blendvpd(auVar21,auVar23,auVar19);
      auVar24._0_8_ = auVar29._0_8_ + -360.0;
      auVar24._8_8_ = auVar29._8_8_ + -360.0;
      auVar26._0_8_ = auVar18._0_8_ + -360.0;
      auVar26._8_8_ = auVar18._8_8_ + 0.0;
      auVar17._8_8_ = -(ulonglong)(180.0 < auVar29._8_8_);
      auVar17._0_8_ = -(ulonglong)(180.0 < auVar29._0_8_);
      auVar19 = blendvpd(auVar29,auVar24,auVar17);
      auVar29._8_8_ = -(ulonglong)(180.0 < auVar18._8_8_);
      auVar29._0_8_ = -(ulonglong)(180.0 < auVar18._0_8_);
      auVar18 = blendvpd(auVar18,auVar26,auVar29);
      *(undefined1 (*) [16])(pdVar14 + 4) = auVar19;
      dVar32 = auVar18._0_8_;
      pdVar14[6] = dVar32;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = dVar32;
      auVar18 = divpd(auVar19,auVar20);
      auVar20 = divpd(auVar34,auVar20);
      auVar18 = roundpd(auVar18,auVar18,3);
      auVar20 = roundpd(auVar20,auVar20,3);
      dVar27 = (auVar19._0_8_ - auVar18._0_8_ * dVar30) * 0.008726646259971648;
      dVar31 = (auVar19._8_8_ - auVar18._8_8_ * dVar16) * 0.008726646259971648;
      dVar32 = (dVar32 - auVar20._0_8_ * dVar30) * 0.008726646259971648;
      dVar30 = (0.0 - auVar20._8_8_ * dVar16) * 0.008726646259971648;
      local_168 = sin(dVar27);
      dVar25 = sin(dVar31);
      uStack_150 = 0;
      local_158 = uVar2;
      local_178 = sin(dVar32);
      uStack_140 = 0;
      local_148 = dVar15;
      sin(dVar30);
      dVar15 = cos(dVar27);
      dVar16 = cos(dVar31);
      dVar31 = cos(dVar32);
      cos(dVar30);
      dVar27 = -(dVar16 * local_168 * local_178) + dVar25 * dVar15 * dVar31;
      dVar30 = dVar25 * local_168 * local_178 + dVar16 * dVar15 * dVar31;
      dVar32 = local_168 * dVar25 * dVar31 - dVar15 * dVar16 * local_178;
      dVar25 = -(local_168 * dVar16 * dVar31) - dVar15 * dVar25 * local_178;
      *pdVar14 = dVar32;
      pdVar14[1] = dVar25;
      pdVar14[2] = dVar27;
      pdVar14[3] = dVar30;
      uVar36 = (undefined4)local_158;
      uVar37 = local_158._4_4_;
      dVar15 = local_148;
    }
    else {
      dVar32 = *pdVar14;
      dVar25 = pdVar14[1];
      dVar27 = pdVar14[2];
      dVar30 = pdVar14[3];
      uVar36 = (int)uVar2;
      uVar37 = (int)((ulonglong)uVar2 >> 0x20);
    }
    auVar20._8_4_ = uVar36;
    auVar20._0_8_ = dVar1;
    auVar20._12_4_ = uVar37;
    auVar18 = divpd(_DAT_149934d80,auVar20);
    auVar35 = divpd(ZEXT816(0x3ff0000000000000),auVar35);
    dVar27 = dVar27 * -1.0;
    dVar30 = dVar30 * 1.0;
    dVar31 = *(double *)(param_1 + 0x318);
    dVar16 = *(double *)(param_1 + 0x318);
    dVar6 = *(double *)(param_1 + 0x300);
    dVar7 = *(double *)(param_1 + 0x300);
    dVar8 = *(double *)(param_1 + 0x308);
    dVar9 = *(double *)(param_1 + 0x308);
    dVar10 = *(double *)(param_1 + 0x310);
    dVar11 = *(double *)(param_1 + 0x310);
    local_138 = (dVar27 * dVar8 + (dVar30 * dVar6 * 1.0 - dVar31 * dVar32)) - dVar25 * dVar10 * -1.0
    ;
    dStack_130 = (dVar30 * dVar9 + (dVar27 * dVar7 * -1.0 - dVar16 * dVar25)) -
                 dVar32 * dVar11 * 1.0;
    local_128 = dVar30 * dVar10 * 1.0 + dVar32 * dVar8 + (dVar27 * dVar31 - dVar6 * dVar25 * 1.0);
    dStack_120 = dVar27 * dVar11 * -1.0 + dVar25 * dVar9 + (dVar30 * dVar16 - dVar7 * dVar32 * -1.0)
    ;
    dVar25 = dVar4 * local_128 - local_138 * dVar15;
    dVar27 = dVar5 * local_138 - dVar4 * dStack_130;
    dVar30 = dVar15 * dStack_130 - dVar5 * local_128;
    dVar30 = dVar30 + dVar30;
    dVar25 = dVar25 + dVar25;
    dVar27 = dVar27 + dVar27;
    dVar1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) & auVar18._0_8_) *
            *(double *)(param_1 + 0x340);
    dVar32 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar37,uVar36))) &
                     auVar18._8_8_) * *(double *)(param_1 + 0x348);
    local_e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar3)) & auVar35._0_8_) *
               *(double *)(param_1 + 0x350);
    dStack_e0 = *(double *)(param_1 + 0x358) * 0.0;
    local_118 = *(double *)(param_1 + 800) -
                ((dVar27 * dStack_130 - dVar25 * local_128) + dStack_120 * dVar30 + dVar4) * dVar1;
    dStack_110 = *(double *)(param_1 + 0x328) -
                 ((local_128 * dVar30 - dVar27 * local_138) + dStack_120 * dVar25 + dVar5) * dVar32;
    local_108 = *(double *)(param_1 + 0x330) -
                (dStack_120 * dVar27 + dVar15 + (dVar25 * local_138 - dVar30 * dStack_130)) *
                local_e8;
    local_f8._8_4_ = SUB84(dVar32,0);
    local_f8._0_8_ = dVar1;
    local_f8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    uStack_100 = 0;
    local_188 = 0;
    FUN_140613f88(lVar13,&local_138,0,0);
  }
  if ((local_d0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140613f88 FUN_140613f88 body=496 status=ok
// SIG undefined FUN_140613f88(void)

void FUN_140613f88(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar2 = (longlong *)param_1[0x24];
  local_148 = param_4;
  if (plVar2 == (longlong *)0x0) {
    local_d8 = *param_2;
    uStack_d0 = param_2[1];
    local_c8 = param_2[2];
    uStack_c0 = param_2[3];
    local_138 = param_2[4];
    uStack_130 = param_2[5];
    local_128 = param_2[6];
    local_140 = param_5;
    FUN_144927ad4(param_1,&local_138,&local_d8,param_3);
    local_d8 = param_2[8];
    uStack_d0 = param_2[9];
    local_c8 = param_2[10];
    lVar3 = *param_1;
    puVar4 = &local_d8;
  }
  else {
    (**(code **)(*plVar2 + 0x4a8))(plVar2,&local_d8,param_1[0x25],0);
    FUN_1449437a2(param_2,&local_138,&local_d8);
    bVar1 = *(byte *)(param_1 + 0x3f);
    if ((bVar1 & 4) != 0) {
      local_118 = param_2[4];
      uStack_110 = param_2[5];
      local_108 = param_2[6];
      uStack_100 = param_2[7];
    }
    if ((bVar1 & 8) != 0) {
      local_138 = *param_2;
      uStack_130 = param_2[1];
      local_128 = param_2[2];
      uStack_120 = param_2[3];
    }
    if ((bVar1 & 0x10) != 0) {
      local_f8 = param_2[8];
      uStack_f0 = param_2[9];
      local_e8 = param_2[10];
      uStack_e0 = param_2[0xb];
    }
    local_58 = local_138;
    uStack_50 = uStack_130;
    local_48 = local_128;
    uStack_40 = (undefined4)uStack_120;
    uStack_3c = uStack_120._4_4_;
    local_78 = (undefined4)local_118;
    uStack_74 = local_118._4_4_;
    uStack_70 = (undefined4)uStack_110;
    uStack_6c = uStack_110._4_4_;
    local_68 = local_108;
    local_140 = param_5;
    FUN_144927ad4(param_1,&local_78,&local_58,param_3);
    local_58 = local_f8;
    uStack_50 = uStack_f0;
    local_48 = local_e8;
    lVar3 = *param_1;
    puVar4 = &local_58;
  }
  (**(code **)(lVar3 + 0x478))(param_1,puVar4);
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061417a FUN_14061417a body=681 status=ok
// SIG undefined FUN_14061417a(void)

void FUN_14061417a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  code *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(*param_2 + 8);
  lVar1 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
  (**(code **)(**(longlong **)(*param_2 + 8) + 0x120))(*(longlong **)(*param_2 + 8),param_3);
  if ((((*(byte *)(lVar3 + 0x28) & 1) == 0) && ((*(byte *)(lVar3 + 0x2b) & 4) == 0)) ||
     (lVar2 = (**(code **)(*param_1 + 0x210))(param_1,param_3), lVar1 == lVar2)) goto LAB_140614268;
  if ((((*(byte *)(lVar3 + 0x28) & 1) != 0) && (lVar2 != 0)) && ((*(byte *)(lVar3 + 0x2b) & 2) == 0)
     ) {
    if (DAT_14c9512c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = FUN_1468be0cd;
      local_80 = (code *)&LAB_145d7be2f;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 0xf8;
      FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderExportObject",&DAT_14c9512c8,
                    &DAT_1468be114);
    }
    lVar3 = *(longlong *)(lVar2 + 0x10);
    iVar4 = *(int *)(lVar3 + 0x38);
    if ((iVar4 < *(int *)(DAT_14c9512c8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c9512c8 + 0x38) * 8) !=
        DAT_14c9512c8 + 0x30)) {
      if (DAT_14c9512b0 == 0) {
        local_70 = &local_38;
        local_38 = FUN_140631fbe;
        local_60 = (code *)&LAB_145834656;
        local_68 = (code *)&LAB_146272d4c;
        local_78 = (code *)&LAB_1468be089;
        local_80 = FUN_14609ba58;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x410;
        FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,&DAT_1468be08e
                     );
        lVar3 = *(longlong *)(lVar2 + 0x10);
        iVar4 = *(int *)(lVar3 + 0x38);
      }
      if ((iVar4 < *(int *)(DAT_14c9512b0 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c9512b0 + 0x38) * 8)
          != DAT_14c9512b0 + 0x30)) goto LAB_14061424d;
      lVar2 = lVar2 + 0x250;
      puVar5 = &local_48;
    }
    else {
      lVar2 = lVar2 + 0x28;
      puVar5 = &local_40;
    }
    *puVar5 = param_1;
    FUN_1468bdcba(lVar2,puVar5,param_3);
  }
LAB_14061424d:
  local_50 = 0;
  (**(code **)(*param_1 + 0x230))(param_1,param_3);
LAB_140614268:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14061446c FUN_14061446c body=1427 status=ok
// SIG undefined FUN_14061446c(void)

void FUN_14061446c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  LPVOID pvVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  code *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  code *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78 [2];
  code *local_68;
  undefined8 uStack_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x218))(param_1,&local_50,param_2);
  if (local_50 == 0) goto LAB_140614763;
  plVar2 = *(longlong **)(local_50 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    local_68 = (code *)0x0;
    uStack_60 = 0;
    FUN_1401031ac(local_50,0,&local_68);
    local_c0 = (code *)&DAT_149dfb77a;
    if ((int)uStack_60 != 0) {
      local_c0 = local_68;
    }
    FUN_14689af94(param_1,local_78,0);
    local_c8 = param_2;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/PropertyBaseObject.cpp",0x30c,
                  L"Object without class referenced by %s, object: 0x%016llx %s");
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar8 = param_1[0xe];
  if ((lVar8 == 0) ||
     ((*(int *)(lVar8 + 0x38) <= (int)plVar2[7] &&
      (*(longlong *)(plVar2[6] + (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30))))
  goto LAB_140614763;
  lVar7 = (**(code **)(*plVar2 + 0x358))(plVar2);
  lVar8 = param_1[0xe];
  if (lVar8 != 0) {
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30)) goto LAB_140614763;
    if ((*(byte *)(lVar8 + 0xd5) & 0x40) != 0) {
      if (DAT_14c950d78 == 0) {
        local_90 = &local_68;
        local_68 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = (code *)&LAB_1468b50ee;
        local_a0 = FUN_1427f23a3;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10004001;
        local_c0 = (code *)CONCAT44(local_c0._4_4_,8);
        local_c8 = CONCAT44(local_c8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78);
      }
      if ((plVar2 != (longlong *)0x0) && (DAT_14c950d78 != lVar8)) {
        plVar11 = plVar2;
        do {
          if (0 < (longlong)(int)plVar11[0x3c]) {
            lVar7 = 0;
            do {
              lVar3 = *(longlong *)(plVar11[0x3b] + lVar7);
              if (((lVar3 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                  == lVar8 + 0x30)) goto LAB_140614763;
              lVar7 = lVar7 + 0x10;
            } while ((longlong)(int)plVar11[0x3c] * 0x10 != lVar7);
          }
          plVar11 = (longlong *)plVar11[8];
        } while (plVar11 != (longlong *)0x0);
      }
    }
    if ((param_1[0xe] != 0) &&
       ((int)(*(uint *)((longlong)plVar2 + 0xd4) ^ *(uint *)(param_1[0xe] + 0xd4)) < 0))
    goto LAB_140614763;
  }
  lVar8 = FUN_1403a6ca6(param_1);
  if ((lVar8 == 0) || ((*(byte *)(lVar8 + 0x2d2) & 0x10) != 0)) {
    if (DAT_14c9512c8 == 0) {
      local_90 = &local_68;
      local_68 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = FUN_1468be0cd;
      local_a0 = (code *)&LAB_145d7be2f;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000000;
      local_c0 = (code *)CONCAT44(local_c0._4_4_,8);
      local_c8 = CONCAT44(local_c8._4_4_,0xf8);
      FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderExportObject",&DAT_14c9512c8,
                    &DAT_1468be114);
      if (DAT_14c9512c8 != 0) goto LAB_1406145e1;
    }
    else {
LAB_1406145e1:
      if ((*(int *)(DAT_14c9512c8 + 0x38) <= (int)plVar2[7]) &&
         (*(longlong *)(plVar2[6] + (longlong)*(int *)(DAT_14c9512c8 + 0x38) * 8) ==
          DAT_14c9512c8 + 0x30)) goto LAB_140614763;
    }
    if (DAT_14c9512b0 == 0) {
      local_90 = &local_68;
      local_68 = FUN_140631fbe;
      local_80 = (code *)&LAB_145834656;
      local_88 = (code *)&LAB_146272d4c;
      local_98 = (code *)&LAB_1468be089;
      local_a0 = FUN_14609ba58;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000000;
      local_c0 = (code *)CONCAT44(local_c0._4_4_,8);
      local_c8 = CONCAT44(local_c8._4_4_,0x410);
      FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,&DAT_1468be08e);
      if (DAT_14c9512b0 == 0) goto LAB_140614629;
    }
    if ((*(int *)(DAT_14c9512b0 + 0x38) <= (int)plVar2[7]) &&
       (*(longlong *)(plVar2[6] + (longlong)*(int *)(DAT_14c9512b0 + 0x38) * 8) ==
        DAT_14c9512b0 + 0x30)) goto LAB_140614763;
  }
LAB_140614629:
  DVar5 = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar5 = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar13 = DAT_14c75ec34 != 0xffffffff;
    DVar4 = DVar5;
    if (bVar13) {
      DVar6 = DAT_14c75ec34;
      DVar4 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar4;
    UNLOCK();
    if (bVar13) {
      TlsFree(DVar5);
      DVar5 = DVar6;
    }
  }
  pvVar9 = TlsGetValue(DVar5);
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar9);
    FUN_140fddf04(pvVar9);
    TlsSetValue(DVar5,pvVar9);
  }
  lVar8 = DAT_14c951c70;
  if ((*(byte *)((longlong)param_1 + 0x39) & 0x10) == 0) {
LAB_140614751:
    uVar10 = 0;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar12 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar12 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar12 = 1;
    }
    if (*(uint *)(lVar8 + uVar12 * 4) < 2) goto LAB_140614751;
    uVar10 = FUN_1468da2e4(param_1,*param_3);
  }
  (**(code **)(*param_1 + 0x1f0))(param_1,param_2,uVar10);
LAB_140614763:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140614a00 FUN_140614a00 body=14793 status=ok
// SIG undefined FUN_140614a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140614a00(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  ulonglong *puVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  char cVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  uint *puVar19;
  double *pdVar20;
  undefined8 *puVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  double *pdVar26;
  int iVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined8 *puVar30;
  undefined8 **ppuVar31;
  undefined8 **ppuVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint *puVar35;
  undefined4 uVar36;
  code *pcVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar64;
  double dVar71;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar73;
  undefined1 auVar72 [16];
  double dVar74;
  undefined1 auVar75 [16];
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  undefined1 auVar82 [16];
  double dVar85;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar89;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar90 [16];
  double dVar91;
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auStack_508 [32];
  undefined4 local_4e8;
  undefined1 *local_4e0;
  uint local_4cc;
  undefined8 *local_4c8;
  longlong local_4c0;
  undefined8 **local_4b8;
  double dStack_4b0;
  undefined8 **local_4a8;
  double dStack_4a0;
  longlong local_498;
  uint *local_490;
  undefined1 local_488 [16];
  double local_478;
  undefined8 **local_470;
  undefined8 **local_468;
  double dStack_460;
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined8 uStack_440;
  ulonglong local_430;
  undefined8 **local_428;
  double dStack_420;
  uint *local_418;
  undefined8 uStack_410;
  double local_408;
  double dStack_400;
  longlong local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  undefined8 uStack_3e0;
  double local_3d8 [4];
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  longlong *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 uStack_360;
  undefined1 local_358 [104];
  longlong local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  longlong local_2c8;
  ulonglong uStack_2c0;
  uint local_2b8 [4];
  uint *local_2a8;
  uint local_2a0;
  uint local_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  longlong local_288;
  undefined4 local_280;
  undefined8 *local_278;
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
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 **local_198;
  double dStack_190;
  undefined8 **local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  local_4c0 = param_3;
  local_498 = param_2;
  FUN_140757a08(local_358,*(undefined8 *)(param_1 + 0x828));
  local_448 = *(double *)(param_1 + 0xe0);
  uStack_440 = *(undefined8 *)(param_1 + 0xe8);
  local_478 = *(double *)(param_1 + 0xf0);
  local_430 = FUN_14061a004(*(undefined8 *)(param_1 + 0x58),DAT_14c997508,DAT_14c9974a8);
  local_470 = (undefined8 **)
              FUN_1401466c8(*(undefined8 *)(param_1 + 0x58),DAT_14c997500,DAT_14c9974a8);
  ppuVar32 = DAT_14c9974a8;
  lVar16 = FUN_140619ac2(*(undefined8 *)(param_1 + 0x58),DAT_14c997518);
  uVar17 = 0;
  local_368 = (undefined8 *)0x0;
  uStack_360 = 0;
  local_4cc = CONCAT31(local_4cc._1_3_,param_4);
  if (((param_4 == '\0') && (DAT_14c75f3d5 == '\0')) && (DAT_14c75f3d4 == '\0')) {
    uVar12 = *(uint *)(param_1 + 0x304);
    if ((uint)(*(int *)(param_1 + 0x458) - *(int *)(param_1 + 0x484)) < uVar12) {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar12);
      }
      FUN_146eede8a(param_1 + 0x450,uVar12);
      iVar27 = 1;
      if (3 < uVar12) {
        uVar12 = (uVar12 | 1) + 0xe;
        iVar27 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> iVar27 == 0; iVar27 = iVar27 + -1) {
          }
        }
        iVar27 = 1 << ((byte)iVar27 & 0x1f);
      }
      param_4 = (char)local_4cc;
      if ((*(int *)(param_1 + 0x498) == 0) ||
         (uVar17 = extraout_XMM0_Qb, *(int *)(param_1 + 0x498) < iVar27)) {
        *(int *)(param_1 + 0x498) = iVar27;
        FUN_140619d68(param_1 + 0x450);
        uVar17 = extraout_XMM0_Qb_00;
      }
    }
  }
  uVar18 = (ulonglong)*(uint *)(param_1 + 0x304);
  if (0 < (int)*(uint *)(param_1 + 0x304)) {
    local_4b8 = (undefined8 **)(param_1 + 0x450);
    auVar5._4_8_ = uVar17;
    auVar5._0_4_ = local_448._4_4_;
    auVar51._0_8_ = auVar5._0_8_ << 0x20;
    auVar51._8_4_ = (undefined4)uStack_440;
    auVar51._12_4_ = uStack_440._4_4_;
    local_408 = auVar51._8_8_;
    local_490 = (uint *)(param_1 + 0x488);
    lVar39 = 0;
    pcVar37 = AcquireSRWLockExclusive_exref;
    dStack_400 = local_408;
    local_3f8 = lVar16;
    do {
      uVar12 = *(uint *)(*(longlong *)(param_1 + 0x400) + lVar39 * 4);
      puVar21 = (undefined8 *)(ulonglong)uVar12;
      local_4a8 = (undefined8 **)(longlong)(int)uVar12;
      uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x440) + lVar39 * 8);
      local_4c8 = puVar21;
      if (param_4 == '\0') {
        uVar13 = *(uint *)(param_1 + 0x180);
        pcVar37 = AcquireSRWLockExclusive_exref;
        param_4 = (char)local_4cc;
        if (uVar12 != uVar13) {
          if ((DAT_14c75f3d5 == '\0') && (DAT_14c75f3d4 == '\0')) goto LAB_140614c13;
LAB_140617e10:
          puVar21 = local_4c8;
          if ((uint)local_4c8 != uVar13) goto LAB_1406153e8;
        }
LAB_1406153db:
        if (DAT_14c75f3d4 == '\x01') {
LAB_1406153e8:
          plVar28 = *(longlong **)(*(longlong *)(local_498 + 0x10) + (longlong)local_4a8 * 8);
          if (plVar28 == (longlong *)0x0) {
            local_378 = (longlong *)0x0;
LAB_140615ebe:
            FUN_1406188f0(uVar18,&local_378);
          }
          else {
            LOCK();
            *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
            UNLOCK();
            if (((9.999999747378752e-05 < ABS(local_448 - DAT_14c846510)) ||
                (9.999999747378752e-05 < ABS(local_408 - DAT_14c846518))) ||
               (9.999999747378752e-05 < ABS(local_478 - DAT_14c846520))) {
              plVar1 = plVar28 + 1;
              local_178._8_8_ = uStack_440;
              local_178._0_8_ = local_448;
              local_168 = local_478;
              ppuVar32 = (undefined8 **)local_178;
              (**(code **)(*plVar28 + 0x30))(plVar28,local_1f8);
              uVar17 = local_1f8._0_8_;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = local_1f8._8_8_;
              local_1f8 = auVar8 << 0x40;
              LOCK();
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if (((int)*plVar1 == 0) && (*(int *)((longlong)plVar28 + 0xc) == 0)) {
                (**(code **)*plVar28)(plVar28,1);
              }
              puVar21 = local_4c8;
              if ((undefined8 *)local_1f8._0_8_ != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(local_1f8._0_8_ + 8);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((*piVar2 == 0) && (*(int *)(local_1f8._0_8_ + 0xc) == 0)) {
                  (*(code *)**(undefined8 **)local_1f8._0_8_)(local_1f8._0_8_,1);
                }
              }
              local_378 = (longlong *)uVar17;
              plVar28 = local_378;
              if ((longlong *)uVar17 == (longlong *)0x0) goto LAB_140615ebe;
            }
            local_378 = plVar28;
            plVar1 = local_378;
            LOCK();
            *(int *)(local_378 + 1) = (int)local_378[1] + 1;
            UNLOCK();
            FUN_1406188f0(uVar18,&local_378);
            LOCK();
            plVar28 = plVar1 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              if (*(int *)((longlong)plVar1 + 0xc) == 0) {
                (**(code **)*plVar1)(plVar1,1);
              }
              puVar21 = local_4c8;
              pcVar37 = AcquireSRWLockExclusive_exref;
              param_4 = (char)local_4cc;
            }
          }
        }
        iVar27 = *(int *)(param_1 + 0x180);
        if (param_4 != '\0') goto LAB_14061549c;
        if ((int)puVar21 == iVar27) {
          puVar21 = *(undefined8 **)(uVar18 + 0x50);
          puVar30 = *(undefined8 **)(*(longlong *)(local_498 + 0x10) + (longlong)local_4a8 * 8);
          if (puVar30 != puVar21) {
            *(undefined8 **)(*(longlong *)(local_498 + 0x10) + (longlong)local_4a8 * 8) = puVar21;
            if (puVar21 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
              UNLOCK();
            }
            ppuVar32 = local_4a8;
            if (puVar30 != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(puVar30 + 1);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((*piVar2 == 0) && (*(int *)((longlong)puVar30 + 0xc) == 0)) {
                (**(code **)*puVar30)(puVar30,1);
              }
            }
          }
        }
        puVar21 = local_4c8;
        pcVar37 = AcquireSRWLockExclusive_exref;
        param_4 = (char)local_4cc;
        if ((int)local_4c8 == *(int *)(param_1 + 0x180)) goto LAB_1406154a1;
LAB_1406154ae:
        if (local_2f0 != 0) {
          lVar16 = local_2f0 + 0x10;
          if (*(longlong *)(local_2f0 + 0x20) != 0) {
            lVar16 = *(longlong *)(local_2f0 + 0x20);
          }
          uVar12 = (uint)local_4c8;
          uVar13 = uVar12 + 0x1f;
          if (-1 < (int)uVar12) {
            uVar13 = uVar12;
          }
          if ((*(uint *)(lVar16 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
            *(undefined1 *)(uVar18 + 0x1ac) = 2;
          }
        }
        lVar16 = *(longlong *)(uVar18 + 0x10);
        *(undefined2 *)(uVar18 + 0x5c) = 8;
        *(byte *)(uVar18 + 0x94) = *(byte *)(uVar18 + 0x94) | 0x10;
        if ((lVar16 != 0) && (lVar25 = *(longlong *)(lVar16 + 8), lVar25 != 0)) {
          if (DAT_14c992a90 == '\x01') {
            (*pcVar37)((PSRWLOCK)(lVar25 + 0x128));
            if (*(int *)(lVar16 + 0x18) == -1) {
              lVar29 = *(longlong *)(lVar25 + 0x98);
              uVar12 = *(uint *)(lVar16 + 0x1c);
              piVar2 = (int *)(lVar29 + 0x160 + (ulonglong)uVar12 * 4);
              *piVar2 = *piVar2 + 1;
              *(int *)(lVar29 + 0x194) = *(int *)(lVar29 + 0x194) + 1;
              lVar29 = lVar29 + (ulonglong)uVar12 * 0x10;
              iVar27 = *(int *)(lVar29 + 0x1a0);
              *(int *)(lVar16 + 0x18) = iVar27;
              *(uint *)(lVar29 + 0x1a0) = iVar27 + 1U;
              if (*(uint *)(lVar29 + 0x1a4) < iVar27 + 1U) {
                FUN_140431d5c((longlong *)(lVar29 + 0x198),iVar27);
              }
              lVar29 = *(longlong *)(lVar29 + 0x198);
              lVar38 = (longlong)iVar27 * 0x20;
              *(longlong *)(lVar29 + lVar38) = lVar16;
              *(undefined4 *)(lVar29 + 8 + lVar38) = 0;
              puVar21 = (undefined8 *)(lVar29 + 0x10 + lVar38);
              *puVar21 = 0;
              puVar21[1] = 0;
              param_4 = (char)local_4cc;
            }
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar25 + 0x128));
          }
          else {
            FUN_144aa3818(*(longlong *)(lVar25 + 0x98) + 0x160,lVar16);
          }
        }
        lVar16 = *(longlong *)(uVar18 + 0x10);
        if (DAT_14c75f288 == 1) {
          *(byte *)(uVar18 + 0x94) = *(byte *)(uVar18 + 0x94) | 0x10;
          *(undefined2 *)(uVar18 + 0x5c) = 8;
          if ((lVar16 != 0) && (lVar25 = *(longlong *)(lVar16 + 8), lVar25 != 0)) {
            if (DAT_14c992a90 == '\x01') {
              (*pcVar37)((PSRWLOCK)(lVar25 + 0x128));
              if (*(int *)(lVar16 + 0x18) == -1) {
                lVar29 = *(longlong *)(lVar25 + 0x98);
                uVar12 = *(uint *)(lVar16 + 0x1c);
                piVar2 = (int *)(lVar29 + 0x160 + (ulonglong)uVar12 * 4);
                *piVar2 = *piVar2 + 1;
                *(int *)(lVar29 + 0x194) = *(int *)(lVar29 + 0x194) + 1;
                lVar29 = lVar29 + (ulonglong)uVar12 * 0x10;
                iVar27 = *(int *)(lVar29 + 0x1a0);
                *(int *)(lVar16 + 0x18) = iVar27;
                *(uint *)(lVar29 + 0x1a0) = iVar27 + 1U;
                if (*(uint *)(lVar29 + 0x1a4) < iVar27 + 1U) {
                  FUN_140431d5c((longlong *)(lVar29 + 0x198),iVar27);
                }
                lVar29 = *(longlong *)(lVar29 + 0x198);
                lVar38 = (longlong)iVar27 * 0x20;
                *(longlong *)(lVar29 + lVar38) = lVar16;
                *(undefined4 *)(lVar29 + 8 + lVar38) = 0;
                puVar21 = (undefined8 *)(lVar29 + 0x10 + lVar38);
                *puVar21 = 0;
                puVar21[1] = 0;
                param_4 = (char)local_4cc;
              }
              ReleaseSRWLockExclusive((PSRWLOCK)(lVar25 + 0x128));
            }
            else {
              FUN_144aa3818(*(longlong *)(lVar25 + 0x98) + 0x160,lVar16);
            }
          }
        }
        else {
          *(byte *)(uVar18 + 0x94) = *(byte *)(uVar18 + 0x94) | 0x10;
          *(undefined2 *)(uVar18 + 0x5c) = 0;
          if ((lVar16 != 0) && (*(longlong *)(lVar16 + 8) != 0)) {
            FUN_144a78688(*(longlong *)(lVar16 + 8) + 0x70,lVar16);
          }
        }
        puVar21 = local_4c8;
        if (*(int *)(param_1 + 0x1e4) < 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (ushort)(*(int *)(param_1 + 0x1e4) <=
                           *(int *)(*(longlong *)(local_3f8 + 0x10) + (longlong)local_4a8 * 4)) << 2
          ;
          ppuVar32 = local_4a8;
        }
        lVar16 = *(longlong *)(uVar18 + 0x10);
        *(ushort *)(uVar18 + 0x1b4) = uVar11 | *(ushort *)(uVar18 + 0x1b4) & 0xfffb;
        *(byte *)(uVar18 + 0x94) = *(byte *)(uVar18 + 0x94) | 8;
        if ((lVar16 != 0) && (lVar25 = *(longlong *)(lVar16 + 8), lVar25 != 0)) {
          if (DAT_14c992a90 == '\x01') {
            (*pcVar37)((PSRWLOCK)(lVar25 + 0x128));
            if (*(int *)(lVar16 + 0x18) == -1) {
              lVar29 = *(longlong *)(lVar25 + 0x98);
              uVar12 = *(uint *)(lVar16 + 0x1c);
              piVar2 = (int *)(lVar29 + 0x160 + (ulonglong)uVar12 * 4);
              *piVar2 = *piVar2 + 1;
              *(int *)(lVar29 + 0x194) = *(int *)(lVar29 + 0x194) + 1;
              lVar29 = lVar29 + (ulonglong)uVar12 * 0x10;
              iVar27 = *(int *)(lVar29 + 0x1a0);
              *(int *)(lVar16 + 0x18) = iVar27;
              *(uint *)(lVar29 + 0x1a0) = iVar27 + 1U;
              if (*(uint *)(lVar29 + 0x1a4) < iVar27 + 1U) {
                FUN_140431d5c((longlong *)(lVar29 + 0x198),iVar27);
              }
              lVar29 = *(longlong *)(lVar29 + 0x198);
              lVar38 = (longlong)iVar27 * 0x20;
              *(longlong *)(lVar29 + lVar38) = lVar16;
              *(undefined4 *)(lVar29 + 8 + lVar38) = 0;
              puVar21 = (undefined8 *)(lVar29 + 0x10 + lVar38);
              *puVar21 = 0;
              puVar21[1] = 0;
              puVar21 = local_4c8;
            }
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar25 + 0x128));
          }
          else {
            FUN_144aa3818(*(longlong *)(lVar25 + 0x98) + 0x160,lVar16);
          }
        }
      }
      else {
        iVar27 = (int)local_178;
        (**(code **)(**(longlong **)(*(longlong *)(local_4c0 + 0x2c8) + 0x708) + 8))();
        *(undefined4 *)(*(longlong *)(param_1 + 0x3f0) + lVar39 * 4) = local_178._0_4_;
        uVar13 = *(uint *)(param_1 + 0x180);
        if ((uVar12 == uVar13) || ((DAT_14c75f3d5 != '\0' || (DAT_14c75f3d4 != '\0')))) {
LAB_140614c13:
          local_178._0_4_ = 0x10000;
          uVar17 = FUN_14001cc68(0x1d0,0x10);
          FUN_14061844e(uVar17,local_178);
          puVar21 = *(undefined8 **)(*(longlong *)(param_1 + 0x440) + lVar39 * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x440) + lVar39 * 8) = uVar17;
          if (puVar21 != (undefined8 *)0x0) {
            (**(code **)*puVar21)(puVar21,1);
          }
          ppuVar32 = local_4b8;
          uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x440) + lVar39 * 8);
          uVar12 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          uVar12 = uVar12 >> 0x10 ^ uVar12;
          if (*(int *)(param_1 + 0x458) != *(int *)(param_1 + 0x484)) {
            puVar19 = *(uint **)(param_1 + 0x490);
            if (*(uint **)(param_1 + 0x490) == (uint *)0x0) {
              puVar19 = local_490;
            }
            uVar13 = puVar19[*(int *)(param_1 + 0x498) - 1U & uVar12];
            if (uVar13 != 0xffffffff) {
              do {
                puVar6 = *local_4b8 + (longlong)(int)uVar13 * 3;
                if (*puVar6 == uVar18) {
                  if (puVar6 != (ulonglong *)0x0) {
                    uVar36 = SUB84(local_4c8,0);
                    goto LAB_140614dd4;
                  }
                  break;
                }
                uVar13 = (uint)puVar6[2];
              } while (uVar13 != 0xffffffff);
            }
          }
          FUN_140618b84(local_4b8,local_178);
          uVar17 = local_178._8_8_;
          *(ulonglong *)local_178._8_8_ = uVar18;
          *(ulonglong *)(local_178._8_8_ + 8) = 0xffffffffffffffff;
          *(undefined4 *)(local_178._8_8_ + 0x10) = 0xffffffff;
          uVar9 = local_178._0_4_;
          cVar10 = FUN_1406183cc(ppuVar32,uVar12,local_178._8_8_,local_178);
          uVar36 = SUB84(local_4c8,0);
          if (cVar10 == '\0') {
            uVar13 = *(int *)(param_1 + 0x458) - *(int *)(param_1 + 0x484);
            if (uVar13 < 4) {
              iVar27 = 1;
            }
            else {
              uVar24 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
              lVar16 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar27 = 1 << ((byte)lVar16 & 0x1f);
            }
            if (((int)uVar13 < 1) || (iVar27 <= *(int *)(param_1 + 0x498))) {
              uVar12 = *(int *)(param_1 + 0x498) - 1U & uVar12;
              *(uint *)(uVar17 + 0x14) = uVar12;
              puVar19 = *(uint **)(param_1 + 0x490);
              if (*(uint **)(param_1 + 0x490) == (uint *)0x0) {
                puVar19 = local_490;
              }
              *(uint *)(uVar17 + 0x10) =
                   puVar19[(longlong)*(int *)(param_1 + 0x498) - 1U & (longlong)(int)uVar12];
              puVar19 = *(uint **)(param_1 + 0x490);
              if (*(uint **)(param_1 + 0x490) == (uint *)0x0) {
                puVar19 = local_490;
              }
              puVar19[(longlong)*(int *)(param_1 + 0x498) - 1U & (longlong)(int)uVar12] = uVar9;
            }
            else {
              *(int *)(param_1 + 0x498) = iVar27;
              FUN_140619d68(local_4b8);
            }
          }
          puVar6 = *local_4b8 + (longlong)(int)uVar9 * 3;
LAB_140614dd4:
          *(undefined4 *)(puVar6 + 1) = uVar36;
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x440) + lVar39 * 8);
          *(undefined4 *)(lVar16 + 0x58) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x3f0) + lVar39 * 4);
          *(byte *)(lVar16 + 0x94) = *(byte *)(lVar16 + 0x94) | 0x10;
          pcVar37 = AcquireSRWLockExclusive_exref;
          param_4 = (char)local_4cc;
          if ((*(longlong *)(lVar16 + 0x10) != 0) &&
             (lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + 8), lVar16 != 0)) {
            FUN_144a78688(lVar16 + 0x70);
          }
          auVar49 = _DAT_149934d80;
          auVar51 = *(undefined1 (*) [16])(param_1 + 0xe0);
          local_458 = *(undefined1 (*) [16])(param_1 + 0xf0);
          dVar46 = *(double *)(param_1 + 0xe8) * auVar51._0_8_ *
                   *(double *)*(undefined1 (*) [16])(param_1 + 0xf0);
          local_418 = (uint *)CONCAT44((int)((ulonglong)dVar46 >> 0x20),
                                       (float)dVar46 * *(float *)(param_1 + 0x1bc) *
                                       *(float *)(*(longlong *)(local_430 + 0x10) +
                                                 (longlong)local_4a8 * 4));
          lVar16 = *(longlong *)(param_1 + 0x828);
          pdVar20 = (double *)(local_470[2] + (longlong)local_4a8 * 0xc);
          uStack_410 = 0;
          if (*(char *)(lVar16 + 0x118) == '\0') {
            ppuVar32 = (undefined8 **)&DAT_000000c0;
            plVar28 = (longlong *)(*(longlong *)(lVar16 + 0xb8) + 0xc0);
          }
          else {
            plVar28 = (longlong *)(lVar16 + 0x108);
            ppuVar32 = local_470;
          }
          lVar16 = *plVar28;
          lVar25 = (longlong)local_4a8 * 0x30;
          uVar17 = *(undefined8 *)(lVar16 + 0x20 + lVar25);
          auVar82._0_8_ = (double)(float)uVar17;
          auVar82._8_8_ = (double)(float)((ulonglong)uVar17 >> 0x20);
          uVar17 = *(undefined8 *)(lVar16 + 0x28 + lVar25);
          auVar93._0_8_ = (double)(float)uVar17;
          auVar93._8_8_ = (double)(float)((ulonglong)uVar17 >> 0x20);
          uVar17 = *(undefined8 *)(lVar16 + 0x10 + lVar25);
          local_428 = (undefined8 **)(double)(float)uVar17;
          dStack_420 = (double)(float)((ulonglong)uVar17 >> 0x20);
          uVar17 = *(undefined8 *)(lVar16 + 0x18 + lVar25);
          local_468 = (undefined8 **)(double)(float)uVar17;
          dStack_460 = (double)(float)((ulonglong)uVar17 >> 0x20);
          dVar46 = (double)(float)*(undefined8 *)(lVar16 + lVar25);
          dVar89 = (double)(float)((ulonglong)*(undefined8 *)(lVar16 + lVar25) >> 0x20);
          uVar17 = *(undefined8 *)(lVar16 + 8 + lVar25);
          dVar64 = (double)(float)uVar17;
          dVar71 = (double)(float)((ulonglong)uVar17 >> 0x20);
          local_488 = *(undefined1 (*) [16])(pdVar20 + 8);
          auVar87 = *(undefined1 (*) [16])(pdVar20 + 10);
          auVar48 = minpd(local_488,auVar82);
          auVar54 = minpd(auVar87,auVar93);
          auVar67._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar67._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          iVar27 = movmskpd((int)lVar25,auVar67);
          auVar48._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
          auVar48._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
          uVar12 = movmskpd((int)lVar16,auVar48);
          if ((uVar12 & 0x3fffffff) == 0 && iVar27 == 0) {
            dVar53 = *pdVar20;
            dVar76 = pdVar20[1];
            dVar78 = pdVar20[2];
            dVar91 = pdVar20[3];
            dVar59 = dVar76 * dVar64 * -1.0 +
                     dVar78 * dVar89 + dVar46 * dVar91 * 1.0 + dVar71 * dVar53;
            dVar63 = dVar53 * dVar64 * 1.0 +
                     dVar91 * dVar89 + dVar46 * dVar78 * -1.0 + dVar71 * dVar76;
            auVar90._0_8_ =
                 dVar91 * dVar64 * 1.0 +
                 ((dVar46 * dVar76 * 1.0 + dVar71 * dVar78) - dVar89 * dVar53);
            auVar90._8_8_ =
                 dVar78 * dVar64 * -1.0 +
                 ((dVar46 * dVar53 * -1.0 + dVar71 * dVar91) - dVar89 * dVar76);
            dVar47 = pdVar20[4] * auVar82._0_8_;
            dVar52 = pdVar20[5] * auVar82._8_8_;
            dVar53 = pdVar20[6] * auVar93._0_8_;
            dVar76 = dVar52 * dVar46 - dVar89 * dVar47;
            dVar78 = dVar53 * dVar89 - dVar64 * dVar52;
            dVar91 = dVar47 * dVar64 - dVar46 * dVar53;
            dVar78 = dVar78 + dVar78;
            dVar91 = dVar91 + dVar91;
            dVar76 = dVar76 + dVar76;
            auVar75._0_8_ = (double)local_488._0_8_ * auVar82._0_8_;
            auVar75._8_8_ = (double)local_488._8_8_ * auVar82._8_8_;
            dVar53 = (dVar91 * dVar46 - dVar89 * dVar78) + dVar71 * dVar76 + dVar53 +
                     (double)local_468;
            dVar89 = (dVar76 * dVar89 - dVar64 * dVar91) + dVar71 * dVar78 + dVar47 +
                     (double)local_428;
            dVar46 = (dVar78 * dVar64 - dVar76 * dVar46) + dVar71 * dVar91 + dVar52 + dStack_420;
          }
          else {
            dVar76 = dVar89 + dVar89;
            dVar78 = dVar64 + dVar64;
            dVar63 = (dVar46 + dVar46) * dVar46;
            dVar91 = (dVar46 + dVar46) * dVar71;
            dVar53 = (double)local_488._0_8_ * auVar82._0_8_;
            dVar59 = (double)local_488._8_8_ * auVar82._8_8_;
            local_1c8 = (dVar78 * dVar89 + dVar91) * auVar82._8_8_;
            ppuVar32 = (undefined8 **)local_1f8;
            local_1f8._8_8_ = (dVar76 * dVar46 + dVar78 * dVar71) * auVar82._0_8_;
            local_1f8._0_8_ =
                 ((double)DAT_149934d80 - (dVar64 * dVar78 + dVar76 * dVar89)) * auVar82._0_8_;
            local_1e8._8_8_ = 0;
            local_1e8._0_8_ = (dVar46 * dVar78 - dVar76 * dVar71) * auVar82._0_8_;
            local_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar64 * dVar78 + dVar63)) * auVar82._8_8_;
            local_1d8._0_8_ = (dVar76 * dVar46 - dVar78 * dVar71) * auVar82._8_8_;
            dStack_1c0 = 0.0;
            local_1b8._8_8_ = (dVar78 * dVar89 - dVar91) * auVar93._0_8_;
            local_1b8._0_8_ = (dVar46 * dVar78 + dVar76 * dVar71) * auVar93._0_8_;
            local_1a8._8_8_ = 0;
            local_1a8._0_8_ = (1.0 - (dVar63 + dVar76 * dVar89)) * auVar93._0_8_;
            uStack_180 = 0x3ff0000000000000;
            dVar89 = *pdVar20;
            dVar64 = pdVar20[1];
            dVar71 = pdVar20[2];
            local_268 = pdVar20[8];
            dVar63 = pdVar20[9];
            dStack_230 = pdVar20[10];
            dVar47 = dVar64 + dVar64;
            dVar76 = dVar71 + dVar71;
            dVar52 = dVar89 * (dVar89 + dVar89);
            local_278 = (undefined8 *)
                        (((double)DAT_149934d80 - (dVar71 * dVar76 + dVar64 * dVar47)) * local_268);
            local_228 = (1.0 - (dVar52 + dVar64 * dVar47)) * dStack_230;
            dVar46 = pdVar20[3];
            dVar78 = dVar76 * dVar46;
            dVar91 = (dVar89 + dVar89) * pdVar20[3];
            dVar46 = dVar47 * dVar46;
            dStack_270 = (dVar47 * dVar89 + dVar78) * local_268;
            local_248 = (dVar76 * dVar64 + dVar91) * dVar63;
            local_238 = (dVar46 + *pdVar20 * dVar76) * dStack_230;
            local_268 = (*pdVar20 * dVar76 - dVar46) * local_268;
            dStack_230 = (dVar76 * dVar64 - dVar91) * dStack_230;
            auVar75._8_8_ = dVar59;
            auVar75._0_8_ = dVar53;
            uStack_260 = 0;
            local_258._8_8_ = (DAT_149934d80._8_8_ - (dVar71 * dVar76 + dVar52)) * dVar63;
            local_258._0_8_ = (dVar47 * dVar89 - dVar78) * dVar63;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = *(undefined1 (*) [16])(pdVar20 + 4);
            local_208 = pdVar20[6];
            uStack_200 = 0x3ff0000000000000;
            local_198 = local_428;
            dStack_190 = dStack_420;
            local_188 = local_468;
            FUN_1447fea8d(local_178);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar54._8_8_ = -(ulonglong)(0.0 <= dVar59);
            auVar54._0_8_ = -(ulonglong)(0.0 <= dVar53);
            auVar51 = blendvpd(_DAT_149936790,auVar49,auVar54);
            uVar24 = -(ulonglong)(0.0 <= auVar87._0_8_ * auVar93._0_8_);
            dVar46 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
            dVar89 = auVar51._0_8_;
            local_168 = local_168 * dVar89;
            local_178._8_8_ = (double)local_178._8_8_ * dVar89;
            local_178._0_8_ = (double)local_178._0_8_ * dVar89;
            dVar89 = auVar51._8_8_;
            local_158._8_8_ = (double)local_158._8_8_ * dVar89;
            local_158._0_8_ = dVar89 * (double)local_158._0_8_;
            local_148._0_8_ = (double)local_148._0_8_ * dVar89;
            local_138._8_8_ = (double)local_138._8_8_ * dVar46;
            local_138._0_8_ = dVar46 * (double)local_138._0_8_;
            local_128._0_8_ = (double)local_128._0_8_ * dVar46;
            pdVar26 = local_3d8;
            pdVar20 = (double *)FUN_14481fd10(pdVar26,local_178);
            iVar27 = (int)pdVar26;
            dVar46 = local_3d8[2] * local_3d8[2] + local_3d8[0] * local_3d8[0];
            dVar89 = local_3d8[3] * local_3d8[3] + local_3d8[1] * local_3d8[1];
            auVar57._0_8_ = dVar46 + dVar89;
            auVar57._8_8_ = dVar46 + dVar89;
            auVar43._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
            auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
            auVar51 = sqrtpd(auVar57,auVar57);
            auVar51 = divpd(auVar49,auVar51);
            auVar49._0_8_ = auVar51._0_8_ * local_3d8[2];
            auVar49._8_8_ = auVar51._8_8_ * local_3d8[3];
            auVar90 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar43);
            dVar59 = (double)((ulonglong)(local_3d8[0] * auVar51._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_));
            dVar63 = (double)((ulonglong)(local_3d8[1] * auVar51._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_));
            auVar51 = *(undefined1 (*) [16])(param_1 + 0xe0);
            local_458 = *(undefined1 (*) [16])(param_1 + 0xf0);
            dVar53 = local_108;
            dVar89 = local_118;
            dVar46 = dStack_110;
          }
          dVar71 = auVar87._0_8_ * auVar93._0_8_;
          auVar49 = minpd(auVar75,auVar51);
          auVar65._8_8_ = auVar87._8_8_ * auVar93._8_8_;
          auVar65._0_8_ = dVar71;
          dVar64 = local_458._0_8_;
          auVar48 = minpd(auVar65,local_458);
          auVar87._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
          auVar87._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
          iVar14 = movmskpd((int)pdVar20,auVar87);
          auVar66._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar66._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          uVar12 = movmskpd(iVar27,auVar66);
          dVar91 = auVar90._0_8_;
          dVar47 = auVar90._8_8_;
          dVar76 = auVar51._0_8_;
          dVar78 = auVar51._8_8_;
          if ((uVar12 & 0x3fffffff) == 0 && iVar14 == 0) {
            dVar77 = *(double *)(param_1 + 0xb8);
            dVar79 = *(double *)(param_1 + 0xb8);
            dVar3 = *(double *)(param_1 + 0xa0);
            dVar73 = *(double *)(param_1 + 0xa0);
            dVar74 = *(double *)(param_1 + 0xa8);
            dVar80 = *(double *)(param_1 + 0xa8);
            dVar92 = SUB168(*(undefined1 (*) [16])(param_1 + 0xa0),0);
            dVar4 = SUB168(*(undefined1 (*) [16])(param_1 + 0xa0),8);
            dVar7 = *(double *)(param_1 + 0xb0);
            dVar85 = *(double *)(param_1 + 0xb0);
            dVar81 = *(double *)(param_1 + 0xb0);
            dVar71 = dVar63 * dVar85 * -1.0 +
                     dVar91 * dVar74 + dVar47 * dVar3 * 1.0 + dVar59 * dVar77;
            dVar52 = dVar59 * dVar81 * 1.0 +
                     dVar47 * dVar80 + dVar91 * dVar73 * -1.0 + dVar63 * dVar79;
            auVar72._0_8_ =
                 dVar47 * dVar85 * 1.0 +
                 ((dVar3 * dVar63 * 1.0 + dVar91 * dVar77) - dVar59 * dVar74);
            auVar72._8_8_ =
                 dVar91 * dVar81 * -1.0 +
                 ((dVar73 * dVar59 * -1.0 + dVar47 * dVar79) - dVar63 * dVar80);
            dVar89 = dVar89 * dVar76;
            dVar46 = dVar46 * dVar78;
            dVar53 = dVar53 * dVar64;
            dVar59 = dVar46 * dVar92 - dVar89 * dVar4;
            dVar63 = dVar53 * dVar4 - dVar46 * dVar7;
            dVar76 = dVar89 * dVar7 - dVar53 * dVar92;
            dVar63 = dVar63 + dVar63;
            dVar76 = dVar76 + dVar76;
            dVar59 = dVar59 + dVar59;
            dVar64 = (dVar76 * dVar92 - dVar4 * dVar63) + dVar77 * dVar59 + dVar53 +
                     *(double *)(param_1 + 0xd0);
            dVar89 = (dVar59 * dVar4 - dVar7 * dVar76) + dVar77 * dVar63 + dVar89 +
                     *(double *)(param_1 + 0xc0);
            dVar46 = (dVar63 * dVar7 - dVar59 * dVar92) + dVar79 * dVar76 + dVar46 +
                     *(double *)(param_1 + 200);
          }
          else {
            dVar77 = *(double *)(param_1 + 0xa0);
            dVar79 = *(double *)(param_1 + 0xa8);
            dVar3 = *(double *)(param_1 + 0xb0);
            dVar73 = dVar79 + dVar79;
            dVar80 = dVar3 + dVar3;
            dVar74 = dVar77 * (dVar77 + dVar77);
            dVar92 = *(double *)(param_1 + 0xa0) * dVar80;
            dVar52 = *(double *)(param_1 + 0xb8);
            dVar81 = dVar80 * dVar52;
            dVar85 = (dVar77 + dVar77) * *(double *)(param_1 + 0xb8);
            dVar52 = dVar73 * dVar52;
            local_488._0_8_ = auVar75._0_8_;
            local_488._8_8_ = auVar75._8_8_;
            local_468 = (undefined8 **)((double)local_488._0_8_ * dVar76);
            dStack_460 = (double)local_488._8_8_ * dVar78;
            local_1c8 = (dVar80 * dVar79 + dVar85) * dVar78;
            local_1f8._8_8_ = (dVar73 * dVar77 + dVar81) * dVar76;
            local_1f8._0_8_ = (1.0 - (dVar3 * dVar80 + dVar79 * dVar73)) * dVar76;
            local_1e8._8_8_ = 0;
            local_1e8._0_8_ = (dVar92 - dVar52) * dVar76;
            local_1d8._8_8_ = (1.0 - (dVar3 * dVar80 + dVar74)) * dVar78;
            local_1d8._0_8_ = (dVar73 * dVar77 - dVar81) * dVar78;
            dStack_1c0 = 0.0;
            local_1b8._8_8_ = (dVar80 * dVar79 - dVar85) * dVar64;
            local_1b8._0_8_ = (dVar52 + dVar92) * dVar64;
            local_1a8._8_8_ = 0;
            local_1a8._0_8_ = (1.0 - (dVar74 + dVar79 * dVar73)) * dVar64;
            local_198 = *(undefined8 ***)(param_1 + 0xc0);
            dStack_190 = *(double *)(param_1 + 200);
            local_188 = *(undefined8 ***)(param_1 + 0xd0);
            uStack_180 = 0x3ff0000000000000;
            dVar76 = dVar63 + dVar63;
            dVar78 = dVar91 + dVar91;
            dVar64 = dVar59 * (dVar59 + dVar59);
            dVar52 = (dVar59 + dVar59) * dVar47;
            dStack_230 = (dVar78 * dVar63 - dVar52) * dVar71;
            local_278 = (undefined8 *)
                        ((1.0 - (dVar91 * dVar78 + dVar63 * dVar76)) * (double)local_488._0_8_);
            dStack_270 = (dVar76 * dVar59 + dVar78 * dVar47) * (double)local_488._0_8_;
            local_248 = (dVar78 * dVar63 + dVar52) * (double)local_488._8_8_;
            local_238 = (dVar76 * dVar47 + dVar59 * dVar78) * dVar71;
            local_268 = (dVar59 * dVar78 - dVar76 * dVar47) * (double)local_488._0_8_;
            uStack_260 = 0;
            local_258._8_8_ = (1.0 - (dVar91 * dVar78 + dVar64)) * (double)local_488._8_8_;
            local_258._0_8_ = (dVar76 * dVar59 - dVar78 * dVar47) * (double)local_488._8_8_;
            uStack_240 = 0;
            local_228 = (1.0 - (dVar64 + dVar63 * dVar76)) * dVar71;
            uStack_220 = 0;
            local_218._8_4_ = SUB84(dVar46,0);
            local_218._0_8_ = dVar89;
            local_218._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            uStack_200 = 0x3ff0000000000000;
            ppuVar32 = (undefined8 **)local_1f8;
            local_488 = auVar75;
            local_208 = dVar53;
            FUN_1447fea8d(local_178,&local_278);
            auVar51 = _DAT_149934d80;
            local_488._0_8_ = local_168;
            dVar46 = local_168 * local_168 +
                     (double)local_178._0_8_ * (double)local_178._0_8_ +
                     (double)local_178._8_8_ * (double)local_178._8_8_;
            local_428 = (undefined8 **)local_148._0_8_;
            dVar64 = (double)local_148._0_8_ * (double)local_148._0_8_ +
                     (double)local_158._0_8_ * (double)local_158._0_8_ +
                     (double)local_158._8_8_ * (double)local_158._8_8_;
            dVar89 = (double)local_128._0_8_ * (double)local_128._0_8_ +
                     (double)local_138._0_8_ * (double)local_138._0_8_ +
                     (double)local_138._8_8_ * (double)local_138._8_8_;
            uVar24 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
            dVar46 = (double)(~uVar24 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar46)) & uVar24);
            uVar24 = -(ulonglong)(0.0 <= dVar64 + -9.99999993922529e-09);
            dVar64 = (double)(~uVar24 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar64)) & uVar24);
            uVar24 = -(ulonglong)(0.0 <= dVar89 + -9.99999993922529e-09);
            dVar89 = (double)(~uVar24 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar89)) & uVar24);
            auVar40._8_8_ = -(ulonglong)(0.0 <= dStack_460);
            auVar40._0_8_ = -(ulonglong)(0.0 <= (double)local_468);
            auVar49 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar40);
            uVar24 = -(ulonglong)(0.0 <= dVar71 * (double)local_458._0_8_);
            dVar71 = (double)(~uVar24 & 0xbff0000000000000 |
                             (ulonglong)((uint)(uVar24 >> 0x20) & 0x3ff00000) << 0x20);
            dVar53 = auVar49._0_8_;
            local_178._8_8_ = (double)local_178._8_8_ * dVar46 * dVar53;
            local_178._0_8_ = (double)local_178._0_8_ * dVar46 * dVar53;
            local_168 = dVar46 * local_168 * dVar53;
            dVar46 = auVar49._8_8_;
            local_158._8_8_ = (double)local_158._8_8_ * dVar64 * dVar46;
            local_158._0_8_ = dVar46 * (double)local_158._0_8_ * dVar64;
            local_148._0_8_ = dVar64 * (double)local_148._0_8_ * dVar46;
            local_138._8_8_ = (double)local_138._8_8_ * dVar89 * dVar71;
            local_138._0_8_ = dVar71 * (double)local_138._0_8_ * dVar89;
            local_128._0_8_ = dVar89 * (double)local_128._0_8_ * dVar71;
            FUN_14481fd10(local_3d8,local_178);
            dVar46 = local_3d8[2] * local_3d8[2] + local_3d8[0] * local_3d8[0];
            dVar89 = local_3d8[3] * local_3d8[3] + local_3d8[1] * local_3d8[1];
            auVar55._0_8_ = dVar46 + dVar89;
            auVar55._8_8_ = dVar46 + dVar89;
            auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_);
            auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_);
            auVar49 = sqrtpd(auVar55,auVar55);
            auVar51 = divpd(auVar51,auVar49);
            auVar60._0_8_ = auVar51._0_8_ * local_3d8[2];
            auVar60._8_8_ = auVar51._8_8_ * local_3d8[3];
            dVar71 = (double)((ulonglong)(local_3d8[0] * auVar51._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_));
            dVar52 = (double)((ulonglong)(local_3d8[1] * auVar51._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_));
            auVar72 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar60,auVar41);
            dVar64 = local_108;
            dVar89 = local_118;
            dVar46 = dStack_110;
          }
          *(double *)(uVar18 + 0x20) = dVar89;
          *(double *)(uVar18 + 0x28) = dVar46;
          *(double *)(uVar18 + 0x30) = dVar64;
          *(float *)(uVar18 + 0x40) = (float)dVar71;
          *(float *)(uVar18 + 0x44) = (float)dVar52;
          *(float *)(uVar18 + 0x48) = (float)auVar72._0_8_;
          *(float *)(uVar18 + 0x4c) = (float)auVar72._8_8_;
          lVar16 = *(longlong *)(uVar18 + 0x10);
          *(double *)(uVar18 + 0x148) = (double)ABS(local_418._0_4_);
          *(byte *)(uVar18 + 0x94) = *(byte *)(uVar18 + 0x94) | 0x20;
          if ((lVar16 != 0) && (*(longlong *)(lVar16 + 8) != 0)) {
            FUN_144a78688(*(longlong *)(lVar16 + 8) + 0x70);
          }
          iVar27 = (int)lVar16;
          *(undefined8 *)(uVar18 + 0x70) = *(undefined8 *)(param_1 + 0x208);
          *(longlong *)(uVar18 + 0x10) = param_1;
          if (((param_1 != 0) && (*(int *)(uVar18 + 0x94) != 0)) &&
             (lVar16 = *(longlong *)(param_1 + 8), lVar16 != 0)) {
            if (DAT_14c992a90 == '\x01') {
              AcquireSRWLockExclusive((PSRWLOCK)(lVar16 + 0x128));
              if (*(int *)(param_1 + 0x18) == -1) {
                lVar25 = *(longlong *)(lVar16 + 0x98);
                uVar12 = *(uint *)(param_1 + 0x1c);
                piVar2 = (int *)(lVar25 + 0x160 + (ulonglong)uVar12 * 4);
                *piVar2 = *piVar2 + 1;
                *(int *)(lVar25 + 0x194) = *(int *)(lVar25 + 0x194) + 1;
                lVar25 = lVar25 + (ulonglong)uVar12 * 0x10;
                iVar14 = *(int *)(lVar25 + 0x1a0);
                *(int *)(param_1 + 0x18) = iVar14;
                *(uint *)(lVar25 + 0x1a0) = iVar14 + 1U;
                if (*(uint *)(lVar25 + 0x1a4) < iVar14 + 1U) {
                  iVar27 = iVar14;
                  FUN_140431d5c((longlong *)(lVar25 + 0x198));
                }
                lVar25 = *(longlong *)(lVar25 + 0x198);
                lVar29 = (longlong)iVar14 * 0x20;
                *(longlong *)(lVar25 + lVar29) = param_1;
                *(undefined4 *)(lVar25 + 8 + lVar29) = 0;
                puVar21 = (undefined8 *)(lVar25 + 0x10 + lVar29);
                *puVar21 = 0;
                puVar21[1] = 0;
              }
              ReleaseSRWLockExclusive((PSRWLOCK)(lVar16 + 0x128));
            }
            else {
              lVar25 = param_1;
              FUN_144aa3818(*(longlong *)(lVar16 + 0x98) + 0x160);
              iVar27 = (int)lVar25;
            }
          }
          lVar16 = uVar18 + 0x78;
          if (*(longlong *)(uVar18 + 0x80) != 0) {
            lVar16 = *(longlong *)(uVar18 + 0x80);
          }
          iVar14 = *(int *)(uVar18 + 0x88);
          if ((longlong)iVar14 != 0) {
            lVar25 = 0;
            do {
              lVar29 = *(longlong *)(lVar16 + lVar25);
              lVar38 = *(longlong *)(uVar18 + 0x10);
              *(longlong *)(lVar29 + 0x48) = lVar38;
              if (((lVar38 != 0) && (*(int *)(lVar29 + 0xc) != 0)) &&
                 (*(longlong *)(lVar38 + 8) != 0)) {
                ppuVar32 = (undefined8 **)(ulonglong)(*(uint *)(lVar29 + 8) >> 3);
                FUN_144821112(*(longlong *)(lVar38 + 8) + 0x70);
              }
              iVar27 = (int)lVar38;
              lVar25 = lVar25 + 8;
            } while ((longlong)iVar14 * 8 != lVar25);
          }
          uVar13 = *(uint *)(param_1 + 0x180);
          puVar21 = local_4c8;
          if (param_4 == '\0') goto LAB_140617e10;
        }
        if ((uint)puVar21 != uVar13) goto LAB_1406153db;
        if ((*(byte *)(param_1 + 0x1c2) & 0x20) == 0) goto LAB_1406153e8;
        pcVar37 = *(code **)(param_1 + 0x510);
        if (pcVar37 == (code *)0x0) {
          puVar21 = local_4c8;
          pcVar37 = AcquireSRWLockExclusive_exref;
          param_4 = (char)local_4cc;
          goto LAB_1406153e8;
        }
        puVar21 = local_470[2];
        auVar51 = *(undefined1 (*) [16])(puVar21 + (longlong)local_4a8 * 0xc + 8);
        auVar49 = *(undefined1 (*) [16])(puVar21 + (longlong)local_4a8 * 0xc + 10);
        auVar69._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar51._8_8_));
        auVar69._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar51._0_8_));
        iVar27 = movmskpd(iVar27,auVar69);
        auVar70._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar49._8_8_));
        auVar70._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar49._0_8_));
        uVar12 = movmskpd((int)ppuVar32,auVar70);
        if ((uVar12 & 0x3fffffff) == 0 && iVar27 == 0) {
          puVar21 = &DAT_14c846480;
          puVar30 = (undefined8 *)local_178;
          for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
            *puVar30 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar30 = puVar30 + 1;
          }
        }
        else {
          pdVar20 = (double *)(puVar21 + (longlong)local_4a8 * 0xc);
          auVar48 = divpd(_DAT_149934d80,auVar51);
          auVar87 = divpd(ZEXT816(0x3ff0000000000000),auVar49);
          local_138._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar51._0_8_)) & auVar48._0_8_;
          local_138._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar51._8_8_)) & auVar48._8_8_;
          dVar46 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar49._0_8_)) & auVar87._0_8_)
          ;
          local_128._8_8_ = 0;
          local_128._0_8_ = dVar46;
          local_178._0_8_ = -*pdVar20;
          local_178._8_8_ = -pdVar20[1];
          local_168 = pdVar20[2] * -1.0;
          uStack_160 = pdVar20[3] * 1.0;
          dVar53 = pdVar20[4] * (double)local_138._0_8_;
          dVar59 = pdVar20[5] * (double)local_138._8_8_;
          dVar46 = pdVar20[6] * dVar46;
          dVar89 = dVar59 * (double)local_178._0_8_ - (double)local_178._8_8_ * dVar53;
          dVar64 = dVar46 * (double)local_178._8_8_ - local_168 * dVar59;
          dVar71 = dVar53 * local_168 - (double)local_178._0_8_ * dVar46;
          dVar64 = dVar64 + dVar64;
          dVar71 = dVar71 + dVar71;
          dVar89 = dVar89 + dVar89;
          local_158._8_8_ =
               0.0 - (dVar89 * *pdVar20 + local_168 * dVar64 + uStack_160 * dVar71 + dVar59);
          local_158._0_8_ =
               0.0 - ((dVar89 * (double)local_178._8_8_ - dVar71 * local_168) +
                     uStack_160 * dVar64 + dVar53);
          local_148._8_8_ = 0;
          local_148._0_8_ =
               0.0 - (uStack_160 * dVar89 + dVar46 +
                     (dVar71 * (double)local_178._0_8_ - dVar64 * (double)local_178._8_8_));
        }
        local_278 = (undefined8 *)0x0;
        dStack_270 = 0.0;
        local_1f8._8_8_ = 0;
        local_1e8._0_8_ = 0x100000000;
        plVar28 = (longlong *)(param_1 + 0x530);
        if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
          plVar28 = *(longlong **)(param_1 + 0x520);
        }
        uVar17 = (**(code **)(*plVar28 + 8))();
        ppuVar32 = &local_278;
        (*pcVar37)(uVar17,local_178,&local_278,local_1f8);
        puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        FUN_14014f414(puVar21,&local_278);
        if (puVar21 == (undefined8 *)0x0) {
          local_370 = (undefined8 *)0x0;
          FUN_1406188f0(uVar18);
        }
        else {
          LOCK();
          *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
          UNLOCK();
          LOCK();
          *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
          UNLOCK();
          local_370 = puVar21;
          FUN_1406188f0(uVar18);
          LOCK();
          piVar2 = (int *)(puVar21 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((*piVar2 == 0) && (*(int *)((longlong)puVar21 + 0xc) == 0)) {
            (**(code **)*puVar21)(puVar21,1);
          }
        }
        FUN_140711b04(local_1f8);
        FUN_144756766(local_278,(ulonglong)dStack_270 & 0xffffffff);
        if (local_278 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        iVar27 = *(int *)(param_1 + 0x180);
        puVar21 = local_4c8;
        pcVar37 = AcquireSRWLockExclusive_exref;
        param_4 = (char)local_4cc;
LAB_14061549c:
        if ((int)puVar21 == iVar27) goto LAB_1406154ae;
LAB_1406154a1:
        if (DAT_14c75f3d4 == '\x01') goto LAB_1406154ae;
      }
      if (DAT_14c75f3bd == '\x01') {
        cVar10 = FUN_1448c2a90(*(undefined8 *)(param_1 + 0x828),(ulonglong)puVar21 & 0xffffffff);
        uVar18 = uStack_360;
        if (cVar10 == '\0') {
          lVar16 = (longlong)(int)uStack_360;
          uVar12 = (int)uStack_360 + 1;
          uStack_360 = CONCAT44(uStack_360._4_4_,uVar12);
          if (uStack_360._4_4_ < uVar12) {
            FUN_1446f48e2(&local_368,uVar18 & 0xffffffff);
          }
          *(int *)((longlong)local_368 + lVar16 * 4) = (int)puVar21;
        }
      }
      lVar39 = lVar39 + 1;
      uVar18 = (ulonglong)*(int *)(param_1 + 0x304);
    } while (lVar39 < (longlong)uVar18);
  }
  if (DAT_14c75f3bd != '\0') {
    local_2a8 = (uint *)0x0;
    local_2a0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_29c = 0x80;
    uStack_298 = 0xffffffff;
    local_294 = 0;
    local_288 = 0;
    local_280 = 0;
    if ((int)uStack_360 != 0) {
      do {
        puVar21 = local_368;
        lVar16 = (longlong)(int)uStack_360;
        lVar39 = 0;
        do {
          uVar12 = *(uint *)((longlong)puVar21 + lVar39);
          if ((-1 < (int)uVar12) &&
             (lVar25 = *(longlong *)(param_1 + 0x828), (int)uVar12 < *(int *)(lVar25 + 0xf0))) {
            lVar29 = lVar25 + 0xd8;
            if (*(longlong *)(lVar25 + 0xe8) != 0) {
              lVar29 = *(longlong *)(lVar25 + 0xe8);
            }
            if ((*(uint *)(lVar29 + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
              iVar27 = *(int *)(*(longlong *)(*(longlong *)(lVar25 + 0xb8) + 0x120) +
                               (ulonglong)uVar12 * 4);
              local_178._0_4_ = iVar27;
              if (iVar27 != -1) {
                FUN_1447cbafe(&local_2c8,local_1f8,local_178,0);
              }
            }
          }
          lVar39 = lVar39 + 4;
        } while (lVar16 * 4 != lVar39);
        uVar18 = (ulonglong)local_2a0;
        if (local_2a0 == 0) {
          local_448 = 4.94065645841247e-324;
          iVar27 = 0;
          dVar46 = 0.0;
          uVar12 = 0;
        }
        else {
          puVar19 = local_2a8;
          if (local_2a8 == (uint *)0x0) {
            puVar19 = local_2b8;
          }
          uVar12 = *puVar19;
          if (uVar12 == 0) {
            iVar27 = local_2a0 + 0x1e;
            if (-1 < (int)(local_2a0 - 1)) {
              iVar27 = local_2a0 - 1;
            }
            dVar46 = 0.0;
            dVar89 = (double)(ulonglong)(uint)(iVar27 >> 5);
            if (iVar27 >> 5 < 1) {
              dVar89 = dVar46;
            }
            iVar27 = 0;
            do {
              if (dVar89 == dVar46) goto LAB_140616e98;
              iVar27 = iVar27 + 0x20;
              uVar12 = puVar19[(longlong)dVar46 + 1];
              dVar46 = (double)((longlong)dVar46 + 1);
            } while (uVar12 == 0);
          }
          else {
            iVar27 = 0;
            dVar46 = 0.0;
          }
          local_448 = (double)(ulonglong)(-uVar12 & uVar12);
          uVar24 = (longlong)local_448 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar12 = (iVar27 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)local_2a0 <= (int)uVar12) {
            uVar12 = local_2a0;
          }
        }
        if (uVar12 != local_2a0) {
          local_4cc = 0xffffffff;
          uVar13 = local_2a0;
          do {
            iVar14 = *(int *)(local_2c8 + (longlong)(int)uVar12 * 0xc);
            lVar16 = (longlong)iVar14;
            if (*(longlong *)(*(longlong *)(local_498 + 0x10) + lVar16 * 8) == 0) {
              local_478 = (double)CONCAT44(local_478._4_4_,iVar27);
              pdVar20 = (double *)(local_470[2] + lVar16 * 0xc);
              pdVar26 = local_3d8;
              for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                *pdVar26 = *pdVar20;
                pdVar20 = pdVar20 + 1;
                pdVar26 = pdVar26 + 1;
              }
              local_4c0 = lVar16;
              local_430 = uVar18;
              local_408 = dVar46;
              if (-1 < iVar14) {
                lVar39 = *(longlong *)(param_1 + 0x828);
                lVar25 = *(longlong *)(lVar39 + 0xb8);
                if ((lVar25 != 0) && (iVar14 < *(int *)(lVar25 + 0x148))) {
                  plVar28 = (longlong *)(*(longlong *)(lVar25 + 0x140) + lVar16 * 0x50);
                  lVar16 = *(longlong *)(lVar25 + 0x140) + lVar16 * 0x50;
                  local_4b8 = (undefined8 **)(lVar16 + 0x10);
                  uVar12 = *(uint *)(lVar16 + 0x28);
                  puVar21 = (undefined8 *)(ulonglong)uVar12;
                  uVar18 = 1;
                  if (uVar12 == 0) {
                    uVar24 = 0;
                    iVar27 = 0;
                    puVar30 = (undefined8 *)0x0;
                  }
                  else {
                    ppuVar32 = (undefined8 **)plVar28[4];
                    if ((undefined8 **)plVar28[4] == (undefined8 **)0x0) {
                      ppuVar32 = local_4b8;
                    }
                    uVar13 = *(uint *)ppuVar32;
                    if (uVar13 == 0) {
                      iVar27 = uVar12 + 0x1e;
                      if (-1 < (int)(uVar12 - 1)) {
                        iVar27 = uVar12 - 1;
                      }
                      uVar33 = 0;
                      uVar34 = (ulonglong)(uint)(iVar27 >> 5);
                      if (iVar27 >> 5 < 1) {
                        uVar34 = uVar33;
                      }
                      uVar24 = (ulonglong)((int)uVar34 + 1);
                      iVar27 = (int)uVar34 * 0x20 + 0x20;
                      iVar14 = 0;
                      do {
                        puVar30 = puVar21;
                        if (uVar34 == uVar33) goto LAB_1406161bd;
                        iVar14 = iVar14 + 0x20;
                        uVar13 = *(uint *)((longlong)ppuVar32 + (uVar33 + 1) * 4);
                        uVar33 = uVar33 + 1;
                      } while (uVar13 == 0);
                      uVar24 = uVar33 & 0xffffffff;
                      iVar27 = iVar14;
                    }
                    else {
                      uVar24 = 0;
                      iVar27 = 0;
                    }
                    uVar18 = (ulonglong)(-uVar13 & uVar13);
                    uVar34 = uVar18 * 2 + 1;
                    lVar16 = 0x3f;
                    if (uVar34 != 0) {
                      for (; uVar34 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                      }
                    }
                    uVar13 = (iVar27 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                    puVar30 = (undefined8 *)(ulonglong)uVar13;
                    if ((int)uVar12 <= (int)uVar13) {
                      puVar30 = puVar21;
                    }
                  }
LAB_1406161bd:
                  local_178._4_4_ = 1 << ((byte)uVar12 & 0x1f);
                  local_178._0_4_ = (int)uVar12 >> 5;
                  local_178._8_8_ = local_4b8;
                  local_168 = (double)CONCAT44(uVar12,-1 << ((byte)uVar12 & 0x1f));
                  uStack_160 = (double)(CONCAT44(uStack_160._4_4_,uVar12) & 0xffffffffffffffe0);
                  local_4a8 = local_4b8;
                  if (*(uint *)(plVar28 + 5) != uVar12) {
                    FUN_1449c0562(local_178);
                    local_4a8 = (undefined8 **)local_178._8_8_;
                    puVar21 = (undefined8 *)((ulonglong)local_168 >> 0x20);
                  }
                  local_4c8 = puVar21;
                  if (((int)puVar30 != (int)puVar21) || (local_4b8 != local_4a8)) {
                    uVar12 = 0xffffffff;
                    ppuVar32 = local_4b8;
                    do {
                      iVar14 = (int)uVar24;
                      uVar13 = *(uint *)(*plVar28 + (longlong)(int)puVar30 * 0xc);
                      lVar16 = *(longlong *)(lVar39 + 0xe8);
                      if (*(longlong *)(lVar39 + 0xe8) == 0) {
                        lVar16 = lVar39 + 0xd8;
                      }
                      uVar22 = uVar13 + 0x1f;
                      if (-1 < (longlong)(int)uVar13) {
                        uVar22 = uVar13;
                      }
                      if ((((*(uint *)(lVar16 + (longlong)((int)uVar22 >> 5) * 4) >> (uVar13 & 0x1f)
                            & 1) != 0) &&
                          (*(longlong *)
                            (*(longlong *)(local_498 + 0x10) + (longlong)(int)uVar13 * 8) == 0)) &&
                         (cVar10 = FUN_1448c2a90(*(undefined8 *)(param_1 + 0x828)),
                         ppuVar32 = local_4b8, cVar10 != '\0')) goto LAB_140616d85;
                      uVar12 = uVar12 & ~(uint)uVar18;
                      ppuVar31 = (undefined8 **)plVar28[4];
                      if ((undefined8 **)plVar28[4] == (undefined8 **)0x0) {
                        ppuVar31 = ppuVar32;
                      }
                      uVar13 = *(uint *)(plVar28 + 5);
                      lVar16 = (longlong)iVar14;
                      uVar22 = *(uint *)((longlong)ppuVar31 + lVar16 * 4) & uVar12;
                      if (uVar22 == 0) {
                        iVar23 = uVar13 + 0x1e;
                        if (-1 < (int)(uVar13 - 1)) {
                          iVar23 = uVar13 - 1;
                        }
                        iVar23 = iVar23 >> 5;
                        iVar27 = iVar27 + 0x20;
                        iVar15 = iVar23;
                        if (iVar23 < iVar14) {
                          iVar15 = iVar14;
                        }
                        ppuVar32 = local_4b8;
                        if (iVar14 < iVar23) {
                          lVar25 = 0;
                          do {
                            uVar22 = *(uint *)((longlong)ppuVar31 + (lVar16 + lVar25 + 1) * 4);
                            if (uVar22 != 0) {
                              uVar24 = (ulonglong)(iVar14 + (int)lVar25 + 1);
                              uVar12 = 0xffffffff;
                              goto LAB_1406162e7;
                            }
                            iVar27 = iVar27 + 0x20;
                            lVar25 = lVar25 + 1;
                          } while (iVar15 - lVar16 != lVar25);
                          uVar12 = 0xffffffff;
                          iVar14 = iVar15;
                        }
                        uVar24 = (ulonglong)(iVar14 + 1);
                        uVar22 = uVar13;
                      }
                      else {
LAB_1406162e7:
                        uVar18 = (ulonglong)(-uVar22 & uVar22);
                        uVar34 = uVar18 * 2 + 1;
                        lVar16 = 0x3f;
                        if (uVar34 != 0) {
                          for (; uVar34 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                          }
                        }
                        uVar22 = (iVar27 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                        if ((int)uVar13 <= (int)uVar22) {
                          uVar22 = uVar13;
                        }
                      }
                      puVar30 = (undefined8 *)(ulonglong)uVar22;
                    } while ((uVar22 != (uint)local_4c8) || (ppuVar32 != local_4a8));
                  }
                }
              }
              local_3e8 = 0;
              uStack_3e0 = 0;
              if (-1 < (int)local_4c0) {
                local_488._0_8_ = *(longlong *)(param_1 + 0x828);
                lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x828) + 0xb8);
                if ((lVar16 != 0) && ((int)local_4c0 < *(int *)(lVar16 + 0x148))) {
                  plVar28 = (longlong *)(*(longlong *)(lVar16 + 0x140) + local_4c0 * 0x50);
                  lVar16 = *(longlong *)(lVar16 + 0x140) + local_4c0 * 0x50;
                  local_490 = (uint *)(lVar16 + 0x10);
                  uVar12 = *(uint *)(lVar16 + 0x28);
                  ppuVar32 = (undefined8 **)(ulonglong)uVar12;
                  uVar18 = 1;
                  if (uVar12 == 0) {
                    iVar27 = 0;
                    iVar14 = 0;
                    ppuVar31 = (undefined8 **)0x0;
                  }
                  else {
                    puVar19 = (uint *)plVar28[4];
                    if ((uint *)plVar28[4] == (uint *)0x0) {
                      puVar19 = local_490;
                    }
                    uVar13 = *puVar19;
                    if (uVar13 == 0) {
                      iVar27 = uVar12 + 0x1e;
                      if (-1 < (int)(uVar12 - 1)) {
                        iVar27 = uVar12 - 1;
                      }
                      uVar34 = 0;
                      uVar24 = (ulonglong)(uint)(iVar27 >> 5);
                      if (iVar27 >> 5 < 1) {
                        uVar24 = uVar34;
                      }
                      iVar27 = (int)uVar24 + 1;
                      iVar14 = (int)uVar24 * 0x20 + 0x20;
                      iVar23 = 0;
                      do {
                        ppuVar31 = ppuVar32;
                        if (uVar24 == uVar34) goto LAB_14061641a;
                        iVar23 = iVar23 + 0x20;
                        uVar13 = puVar19[uVar34 + 1];
                        uVar34 = uVar34 + 1;
                      } while (uVar13 == 0);
                      iVar27 = (int)uVar34;
                      iVar14 = iVar23;
                    }
                    else {
                      iVar27 = 0;
                      iVar14 = 0;
                    }
                    uVar18 = (ulonglong)(-uVar13 & uVar13);
                    uVar24 = uVar18 * 2 + 1;
                    lVar16 = 0x3f;
                    if (uVar24 != 0) {
                      for (; uVar24 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                      }
                    }
                    uVar13 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                    ppuVar31 = (undefined8 **)(ulonglong)uVar13;
                    if ((int)uVar12 <= (int)uVar13) {
                      ppuVar31 = ppuVar32;
                    }
                  }
LAB_14061641a:
                  local_178._4_4_ = 1 << ((byte)uVar12 & 0x1f);
                  local_178._0_4_ = (int)uVar12 >> 5;
                  local_178._8_8_ = local_490;
                  local_168 = (double)CONCAT44(uVar12,-1 << ((byte)uVar12 & 0x1f));
                  uStack_160 = (double)(CONCAT44(uStack_160._4_4_,uVar12) & 0xffffffffffffffe0);
                  local_458._0_8_ = plVar28;
                  local_418 = local_490;
                  if (*(uint *)(plVar28 + 5) != uVar12) {
                    FUN_1449c0562(local_178);
                    local_490 = (uint *)local_178._8_8_;
                    ppuVar32 = (undefined8 **)((ulonglong)local_168 >> 0x20);
                    plVar28 = (longlong *)local_458._0_8_;
                  }
                  if (((int)ppuVar31 != (int)ppuVar32) || (local_418 != local_490)) {
                    local_428 = (undefined8 **)(local_488._0_8_ + 0xd8);
                    uVar12 = 0xffffffff;
                    puVar19 = local_418;
                    local_468 = ppuVar32;
                    do {
                      auVar51 = _DAT_149934d80;
                      local_4c8 = (undefined8 *)CONCAT44(local_4c8._4_4_,iVar14);
                      uVar13 = *(uint *)(*plVar28 + (longlong)(int)ppuVar31 * 0xc);
                      lVar16 = (longlong)(int)uVar13;
                      ppuVar32 = *(undefined8 ***)(local_488._0_8_ + 0xe8);
                      if (*(undefined8 ***)(local_488._0_8_ + 0xe8) == (undefined8 **)0x0) {
                        ppuVar32 = local_428;
                      }
                      uVar22 = uVar13 + 0x1f;
                      if (-1 < lVar16) {
                        uVar22 = uVar13;
                      }
                      if (((*(uint *)((longlong)ppuVar32 + (longlong)((int)uVar22 >> 5) * 4) >>
                            (uVar13 & 0x1f) & 1) != 0) &&
                         (lVar39 = *(longlong *)(local_498 + 0x10),
                         *(longlong *)(lVar39 + lVar16 * 8) != 0)) {
                        lVar25 = *(longlong *)(param_1 + 0x828);
                        if (*(char *)(lVar25 + 0x118) == '\0') {
                          plVar28 = (longlong *)(*(longlong *)(lVar25 + 0xb8) + 0xc0);
                        }
                        else {
                          plVar28 = (longlong *)(lVar25 + 0x108);
                        }
                        pdVar20 = (double *)(local_470[2] + lVar16 * 0xc);
                        lVar25 = *plVar28;
                        lVar29 = lVar16 * 0x30;
                        uVar17 = *(undefined8 *)(lVar25 + 0x20 + lVar29);
                        auVar56._0_8_ = (double)(float)uVar17;
                        auVar56._8_8_ = (double)(float)((ulonglong)uVar17 >> 0x20);
                        uVar17 = *(undefined8 *)(lVar25 + 0x28 + lVar29);
                        auVar61._0_8_ = (double)(float)uVar17;
                        auVar61._8_8_ = (double)(float)((ulonglong)uVar17 >> 0x20);
                        uVar17 = *(undefined8 *)(lVar25 + 0x10 + lVar29);
                        local_4a8 = (undefined8 **)(double)(float)uVar17;
                        dStack_4a0 = (double)(float)((ulonglong)uVar17 >> 0x20);
                        uVar17 = *(undefined8 *)(lVar25 + 0x18 + lVar29);
                        local_4b8 = (undefined8 **)(double)(float)uVar17;
                        dStack_4b0 = (double)(float)((ulonglong)uVar17 >> 0x20);
                        dVar46 = (double)(float)*(undefined8 *)(lVar25 + lVar29);
                        dVar89 = (double)(float)((ulonglong)*(undefined8 *)(lVar25 + lVar29) >> 0x20
                                                );
                        uVar17 = *(undefined8 *)(lVar25 + 8 + lVar29);
                        dVar64 = (double)(float)uVar17;
                        dVar71 = (double)(float)((ulonglong)uVar17 >> 0x20);
                        auVar49 = *(undefined1 (*) [16])(pdVar20 + 8);
                        auVar87 = *(undefined1 (*) [16])(pdVar20 + 10);
                        auVar48 = minpd(auVar49,auVar56);
                        auVar67 = minpd(auVar87,auVar61);
                        auVar42._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
                        auVar42._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
                        iVar14 = movmskpd((int)lVar25,auVar42);
                        auVar68._8_8_ = -(ulonglong)(auVar67._8_8_ < 0.0);
                        auVar68._0_8_ = -(ulonglong)(auVar67._0_8_ < 0.0);
                        uVar13 = movmskpd((int)lVar29,auVar68);
                        if ((uVar13 & 0x3fffffff) == 0 && iVar14 == 0) {
                          dVar63 = *pdVar20;
                          dVar76 = pdVar20[1];
                          dVar78 = pdVar20[2];
                          dVar91 = pdVar20[3];
                          dVar53 = dVar76 * dVar64 * -1.0 +
                                   dVar78 * dVar89 + dVar46 * dVar91 * 1.0 + dVar71 * dVar63;
                          dVar59 = dVar63 * dVar64 * 1.0 +
                                   dVar91 * dVar89 + dVar46 * dVar78 * -1.0 + dVar71 * dVar76;
                          local_1e8._0_8_ =
                               dVar91 * dVar64 * 1.0 +
                               ((dVar46 * dVar76 * 1.0 + dVar71 * dVar78) - dVar89 * dVar63);
                          local_1e8._8_8_ =
                               dVar78 * dVar64 * -1.0 +
                               ((dVar46 * dVar63 * -1.0 + dVar71 * dVar91) - dVar89 * dVar76);
                          dVar47 = pdVar20[4] * auVar56._0_8_;
                          dVar52 = pdVar20[5] * auVar56._8_8_;
                          dVar77 = pdVar20[6] * auVar61._0_8_;
                          dVar79 = pdVar20[7] * auVar61._8_8_;
                          dVar76 = dVar52 * dVar46 - dVar89 * dVar47;
                          dVar78 = dVar77 * dVar89 - dVar64 * dVar52;
                          dVar91 = dVar47 * dVar64 - dVar46 * dVar77;
                          dVar63 = dVar79 * dVar71 - dVar71 * dVar79;
                          dVar78 = dVar78 + dVar78;
                          dVar91 = dVar91 + dVar91;
                          dVar76 = dVar76 + dVar76;
                          dVar63 = dVar63 + dVar63;
                          dStack_1c0 = (dVar63 * dVar71 - dVar63 * dVar71) +
                                       dVar71 * dVar63 + dVar79 + dStack_4b0;
                          auVar83._0_8_ = auVar49._0_8_ * auVar56._0_8_;
                          auVar83._8_8_ = auVar49._8_8_ * auVar56._8_8_;
                          auVar86._0_8_ = auVar87._0_8_ * auVar61._0_8_;
                          auVar86._8_8_ = auVar87._8_8_ * auVar61._8_8_;
                          dVar63 = (dVar76 * dVar89 - dVar64 * dVar91) + dVar71 * dVar78 + dVar47 +
                                   (double)local_4a8;
                          dVar64 = (dVar78 * dVar64 - dVar76 * dVar46) + dVar71 * dVar91 + dVar52 +
                                   dStack_4a0;
                          local_1c8 = (dVar91 * dVar46 - dVar89 * dVar78) + dVar71 * dVar76 + dVar77
                                      + (double)local_4b8;
                        }
                        else {
                          dVar78 = auVar87._0_8_ * auVar61._0_8_;
                          dVar53 = dVar89 + dVar89;
                          dVar63 = dVar64 + dVar64;
                          dVar91 = (dVar46 + dVar46) * dVar46;
                          auVar86._8_8_ = auVar87._8_8_ * auVar61._8_8_;
                          auVar86._0_8_ = dVar78;
                          dVar76 = (dVar46 + dVar46) * dVar71;
                          dVar59 = (dVar63 * dVar89 - dVar76) * auVar61._0_8_;
                          auVar83._0_8_ = auVar49._0_8_ * auVar56._0_8_;
                          auVar83._8_8_ = auVar49._8_8_ * auVar56._8_8_;
                          local_1c8 = (dVar63 * dVar89 + dVar76) * auVar56._8_8_;
                          local_1f8._8_8_ = (dVar53 * dVar46 + dVar63 * dVar71) * auVar56._0_8_;
                          local_1f8._0_8_ =
                               (1.0 - (dVar63 * dVar64 + dVar53 * dVar89)) * auVar56._0_8_;
                          local_1e8._8_8_ = 0;
                          local_1e8._0_8_ = (dVar46 * dVar63 - dVar53 * dVar71) * auVar56._0_8_;
                          local_1d8._8_8_ = (1.0 - (dVar63 * dVar64 + dVar91)) * auVar56._8_8_;
                          local_1d8._0_8_ = (dVar53 * dVar46 - dVar63 * dVar71) * auVar56._8_8_;
                          dStack_1c0 = 0.0;
                          local_1b8._8_4_ = SUB84(dVar59,0);
                          local_1b8._0_8_ = (dVar46 * dVar63 + dVar53 * dVar71) * auVar61._0_8_;
                          local_1b8._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
                          local_1a8._8_8_ = 0;
                          local_1a8._0_8_ = (1.0 - (dVar91 + dVar53 * dVar89)) * auVar61._0_8_;
                          uStack_180 = 0x3ff0000000000000;
                          dVar64 = *pdVar20;
                          dVar71 = pdVar20[1];
                          dVar46 = pdVar20[2];
                          local_268 = pdVar20[8];
                          dVar53 = pdVar20[9];
                          dStack_230 = pdVar20[10];
                          dVar91 = dVar71 + dVar71;
                          dVar59 = dVar46 + dVar46;
                          dVar63 = dVar64 * (dVar64 + dVar64);
                          local_278 = (undefined8 *)
                                      (((double)DAT_149934d80 - (dVar46 * dVar59 + dVar71 * dVar91))
                                      * local_268);
                          dVar89 = (DAT_149934d80._8_8_ - (dVar46 * dVar59 + dVar63)) * dVar53;
                          local_228 = (1.0 - (dVar63 + dVar71 * dVar91)) * dStack_230;
                          dVar46 = pdVar20[3];
                          dVar63 = dVar59 * dVar46;
                          dVar76 = (dVar64 + dVar64) * pdVar20[3];
                          dVar46 = dVar91 * dVar46;
                          dStack_270 = (dVar91 * dVar64 + dVar63) * local_268;
                          local_248 = (dVar59 * dVar71 + dVar76) * dVar53;
                          local_238 = (dVar46 + *pdVar20 * dVar59) * dStack_230;
                          local_268 = (*pdVar20 * dVar59 - dVar46) * local_268;
                          dStack_230 = (dVar59 * dVar71 - dVar76) * dStack_230;
                          uStack_260 = 0;
                          local_258._8_4_ = SUB84(dVar89,0);
                          local_258._0_8_ = (dVar91 * dVar64 - dVar63) * dVar53;
                          local_258._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
                          uStack_240 = 0;
                          uStack_220 = 0;
                          local_218 = *(undefined1 (*) [16])(pdVar20 + 4);
                          local_208 = pdVar20[6];
                          uStack_200 = 0x3ff0000000000000;
                          local_198 = local_4a8;
                          dStack_190 = dStack_4a0;
                          local_188 = local_4b8;
                          FUN_1447fea8d(local_178);
                          FUN_144a1c686(local_178,0x3e45798ee0000000);
                          auVar44._8_8_ = -(ulonglong)(0.0 <= auVar83._8_8_);
                          auVar44._0_8_ = -(ulonglong)(0.0 <= auVar83._0_8_);
                          auVar49 = blendvpd(_DAT_149936790,auVar51,auVar44);
                          uVar24 = -(ulonglong)(0.0 <= dVar78);
                          dVar46 = (double)(~uVar24 & 0xbff0000000000000 |
                                           uVar24 & 0x3ff0000000000000);
                          dVar89 = auVar49._0_8_;
                          local_168 = local_168 * dVar89;
                          local_178._8_8_ = (double)local_178._8_8_ * dVar89;
                          local_178._0_8_ = (double)local_178._0_8_ * dVar89;
                          dVar89 = auVar49._8_8_;
                          local_158._8_8_ = (double)local_158._8_8_ * dVar89;
                          local_158._0_8_ = dVar89 * (double)local_158._0_8_;
                          local_148._0_8_ = (double)local_148._0_8_ * dVar89;
                          local_138._8_8_ = (double)local_138._8_8_ * dVar46;
                          local_138._0_8_ = dVar46 * (double)local_138._0_8_;
                          local_128._0_8_ = (double)local_128._0_8_ * dVar46;
                          pdVar26 = &local_2e8;
                          pdVar20 = (double *)FUN_14481fd10(pdVar26,local_178);
                          iVar14 = (int)pdVar26;
                          dVar46 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
                          dVar89 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
                          auVar58._0_8_ = dVar46 + dVar89;
                          auVar58._8_8_ = dVar46 + dVar89;
                          auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_);
                          auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_);
                          auVar49 = sqrtpd(auVar58,auVar58);
                          auVar51 = divpd(auVar51,auVar49);
                          auVar62._0_8_ = auVar51._0_8_ * local_2d8;
                          auVar62._8_8_ = auVar51._8_8_ * dStack_2d0;
                          dVar53 = (double)((ulonglong)(local_2e8 * auVar51._0_8_) &
                                           -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_));
                          dVar59 = (double)((ulonglong)(dStack_2e0 * auVar51._8_8_) &
                                           -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_));
                          local_1e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar45);
                          dStack_1c0 = 0.0;
                          dVar63 = local_118;
                          dVar64 = dStack_110;
                          local_1c8 = local_108;
                        }
                        auVar51 = _DAT_149934d80;
                        local_1f8._8_4_ = SUB84(dVar59,0);
                        local_1f8._0_8_ = dVar53;
                        local_1f8._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
                        local_1d8._8_4_ = SUB84(dVar64,0);
                        local_1d8._0_8_ = dVar63;
                        local_1d8._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
                        local_1b8 = auVar83;
                        local_1a8 = auVar86;
                        local_178 = ZEXT816(0);
                        local_168 = 0.0;
                        uStack_160 = 1.0;
                        local_148 = ZEXT816(0);
                        local_158 = ZEXT816(0);
                        local_138 = _DAT_149934d80;
                        dVar46 = local_3d8[2] * local_3d8[2] + local_3d8[0] * local_3d8[0];
                        dVar89 = local_3d8[3] * local_3d8[3] + local_3d8[1] * local_3d8[1];
                        local_128 = ZEXT816(0x3ff0000000000000);
                        auVar50._8_8_ =
                             -(ulonglong)
                              (0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar46 + dVar89)));
                        auVar50._0_8_ =
                             -(ulonglong)
                              (0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar46 + dVar89))
                              );
                        iVar23 = movmskpd((int)pdVar20,auVar50);
                        if (iVar23 == 0) {
                          auVar49 = minpd(auVar83,local_398);
                          auVar87 = minpd(auVar86,local_388);
                          auVar84._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
                          auVar84._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
                          iVar23 = movmskpd(0,auVar84);
                          auVar88._8_8_ = -(ulonglong)(auVar87._8_8_ < 0.0);
                          auVar88._0_8_ = -(ulonglong)(auVar87._0_8_ < 0.0);
                          uVar13 = movmskpd(iVar14,auVar88);
                          if ((uVar13 & 0x3fffffff) == 0 && iVar23 == 0) {
                            if ((*(int *)(*(longlong *)
                                           ((longlong)ThreadLocalStoragePointer +
                                           (ulonglong)_tls_index * 8) + 0x110) < DAT_14c8460b0) &&
                               (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1)) {
                              DAT_14c8460a0 = 0x322bcc77322bcc77;
                              DAT_14c8460a8 = 0x322bcc77322bcc77;
                              _Init_thread_footer(&DAT_14c8460b0);
                            }
                            auVar51 = divpd(auVar51,local_398);
                            auVar49 = divpd(ZEXT816(0x3ff0000000000000),local_388);
                            dVar64 = (double)(-(ulonglong)
                                               ((double)(float)DAT_14c8460a0 < ABS(local_398._0_8_))
                                             & auVar51._0_8_);
                            dVar71 = (double)(-(ulonglong)
                                               ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) <
                                               ABS(local_398._8_8_)) & auVar51._8_8_);
                            dVar91 = (double)(-(ulonglong)
                                               ((double)(float)DAT_14c8460a8 < ABS(local_388._0_8_))
                                             & auVar49._0_8_);
                            dVar46 = (double)local_1d8._0_8_ - local_3b8;
                            dVar89 = (double)local_1d8._8_8_ - dStack_3b0;
                            dVar77 = local_1c8 - local_3a8;
                            dVar47 = -local_3d8[0];
                            dVar52 = -local_3d8[1];
                            dVar53 = local_3d8[2] * DAT_149931160;
                            dVar59 = local_3d8[3] * DAT_149931160._8_8_;
                            dVar63 = dVar89 * dVar47 - dVar46 * dVar52;
                            dVar76 = dVar77 * dVar52 - dVar89 * dVar53;
                            dVar78 = dVar46 * dVar53 - dVar77 * dVar47;
                            dVar79 = dVar59 * 0.0 - dVar59 * 0.0;
                            dVar76 = dVar76 + dVar76;
                            dVar78 = dVar78 + dVar78;
                            dVar63 = dVar63 + dVar63;
                            dVar79 = dVar79 + dVar79;
                            local_138._0_8_ = (double)local_1b8._0_8_ * dVar64;
                            local_138._8_8_ = (double)local_1b8._8_8_ * dVar71;
                            local_158._0_8_ =
                                 ((dVar63 * dVar52 - dVar53 * dVar78) + dVar59 * dVar76 + dVar46) *
                                 dVar64;
                            local_158._8_8_ =
                                 ((dVar76 * dVar53 - dVar63 * dVar47) + dVar59 * dVar78 + dVar89) *
                                 dVar71;
                            local_148._0_8_ =
                                 ((dVar78 * dVar47 - dVar52 * dVar76) + dVar59 * dVar63 + dVar77) *
                                 dVar91;
                            local_148._8_8_ =
                                 ((dVar79 * dVar59 - dVar79 * dVar59) + dVar59 * dVar79 + 0.0) * 0.0
                            ;
                            dVar46 = (double)DAT_149931170;
                            dVar89 = DAT_149931170._8_8_;
                            dVar64 = (double)local_1f8._0_8_ * dVar53 * DAT_149931160._8_8_ +
                                     (((double)local_1f8._8_8_ * dVar59 -
                                      local_3d8[0] * (double)local_1e8._0_8_ * dVar89) -
                                     (double)local_1e8._8_8_ * local_3d8[1]);
                            local_128._8_8_ = (double)local_1a8._8_8_ * 0.0;
                            local_128._0_8_ = (double)local_1a8._0_8_ * dVar91;
                            local_178._8_4_ = SUB84(dVar64,0);
                            local_178._0_8_ =
                                 (double)local_1f8._8_8_ * dVar53 * DAT_149931160 +
                                 (((double)local_1f8._0_8_ * dVar59 -
                                  local_3d8[0] * (double)local_1e8._8_8_ * dVar46) -
                                 (double)local_1e8._0_8_ * local_3d8[1]);
                            local_178._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
                            local_168 = (double)local_1e8._8_8_ * dVar53 * dVar46 +
                                        local_3d8[1] * (double)local_1f8._0_8_ +
                                        (dVar59 * (double)local_1e8._0_8_ -
                                        local_3d8[0] * (double)local_1f8._8_8_ * dVar46);
                            uStack_160 = (double)local_1e8._0_8_ * dVar53 * dVar89 +
                                         local_3d8[1] * (double)local_1f8._8_8_ +
                                         (dVar59 * (double)local_1e8._8_8_ -
                                         local_3d8[0] * (double)local_1f8._0_8_ * dVar89);
                          }
                          else {
                            FUN_1402db8fa(local_178,local_1f8,local_3d8);
                          }
                          puVar21 = (undefined8 *)local_178;
                          ppuVar32 = &local_278;
                          for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
                            *ppuVar32 = (undefined8 *)*puVar21;
                            puVar21 = puVar21 + 1;
                            ppuVar32 = ppuVar32 + 1;
                          }
                        }
                        else {
                          puVar21 = &DAT_14c846480;
                          ppuVar32 = &local_278;
                          for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
                            *ppuVar32 = (undefined8 *)*puVar21;
                            puVar21 = puVar21 + 1;
                            ppuVar32 = ppuVar32 + 1;
                          }
                        }
                        ppuVar32 = &local_278;
                        puVar21 = (undefined8 *)local_178;
                        for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
                          *puVar21 = *ppuVar32;
                          ppuVar32 = ppuVar32 + 1;
                          puVar21 = puVar21 + 1;
                        }
                        FUN_140618e4f(&local_278,*(undefined8 *)(lVar39 + lVar16 * 8),local_178);
                        puVar21 = local_278;
                        uVar24 = uStack_3e0;
                        if ((*(char *)((longlong)local_278 + 0x1c) == '\x05') ||
                           (*(char *)((longlong)local_278 + 0x1c) == '\x0f')) {
                          FUN_14572d780(&local_3e8,local_278 + 4);
                          if (puVar21 != (undefined8 *)0x0) {
                            LOCK();
                            piVar2 = (int *)(puVar21 + 1);
                            *piVar2 = *piVar2 + -1;
                            UNLOCK();
                            if ((*piVar2 == 0) && (*(int *)((longlong)puVar21 + 0xc) == 0)) {
                              (**(code **)*puVar21)(puVar21,1);
                            }
                          }
                        }
                        else {
                          lVar16 = (longlong)(int)uStack_3e0;
                          uVar13 = (int)uStack_3e0 + 1;
                          uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar13);
                          if (uStack_3e0._4_4_ < uVar13) {
                            FUN_140619960(&local_3e8,uVar24 & 0xffffffff);
                          }
                          *(undefined8 **)(local_3e8 + lVar16 * 8) = puVar21;
                        }
                        puVar19 = local_418;
                        plVar28 = (longlong *)local_458._0_8_;
                      }
                      uVar12 = uVar12 & ~(uint)uVar18;
                      puVar35 = (uint *)plVar28[4];
                      if ((uint *)plVar28[4] == (uint *)0x0) {
                        puVar35 = puVar19;
                      }
                      uVar13 = *(uint *)(plVar28 + 5);
                      lVar16 = (longlong)iVar27;
                      uVar22 = puVar35[lVar16] & uVar12;
                      iVar14 = (uint)local_4c8;
                      if (uVar22 == 0) {
                        iVar23 = uVar13 + 0x1e;
                        if (-1 < (int)(uVar13 - 1)) {
                          iVar23 = uVar13 - 1;
                        }
                        iVar23 = iVar23 >> 5;
                        iVar14 = (uint)local_4c8 + 0x20;
                        iVar15 = iVar23;
                        if (iVar23 < iVar27) {
                          iVar15 = iVar27;
                        }
                        if (iVar27 < iVar23) {
                          lVar39 = 0;
                          do {
                            uVar22 = puVar35[lVar16 + lVar39 + 1];
                            if (uVar22 != 0) {
                              iVar27 = iVar27 + (int)lVar39 + 1;
                              uVar12 = 0xffffffff;
                              goto LAB_140616c05;
                            }
                            iVar14 = iVar14 + 0x20;
                            lVar39 = lVar39 + 1;
                          } while (iVar15 - lVar16 != lVar39);
                          uVar12 = 0xffffffff;
                          iVar27 = iVar15;
                        }
                        iVar27 = iVar27 + 1;
                        puVar19 = local_418;
                        plVar28 = (longlong *)local_458._0_8_;
                        uVar22 = uVar13;
                      }
                      else {
LAB_140616c05:
                        uVar18 = (ulonglong)(-uVar22 & uVar22);
                        uVar24 = uVar18 * 2 + 1;
                        lVar16 = 0x3f;
                        if (uVar24 != 0) {
                          for (; uVar24 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                          }
                        }
                        uVar22 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                        if ((int)uVar13 <= (int)uVar22) {
                          uVar22 = uVar13;
                        }
                      }
                      ppuVar31 = (undefined8 **)(ulonglong)uVar22;
                    } while ((uVar22 != (uint)local_468) || (puVar19 != local_490));
                  }
                }
              }
              lVar16 = local_4c0;
              if (0 < (int)uStack_3e0) {
                lVar39 = FUN_14001cc68(0x70,0x10);
                FUN_14014f414(lVar39,&local_3e8);
                if (lVar39 != 0) {
                  LOCK();
                  *(int *)(lVar39 + 8) = *(int *)(lVar39 + 8) + 1;
                  UNLOCK();
                }
                puVar21 = *(undefined8 **)(*(longlong *)(local_498 + 0x10) + lVar16 * 8);
                *(longlong *)(*(longlong *)(local_498 + 0x10) + lVar16 * 8) = lVar39;
                if (puVar21 != (undefined8 *)0x0) {
                  LOCK();
                  piVar2 = (int *)(puVar21 + 1);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if ((*piVar2 == 0) && (*(int *)((longlong)puVar21 + 0xc) == 0)) {
                    (**(code **)*puVar21)(puVar21,1);
                  }
                }
              }
              lVar39 = (longlong)*(int *)(*(longlong *)(param_1 + 0x410) + lVar16 * 4);
              if ((lVar39 != -1) &&
                 (lVar39 = *(longlong *)(*(longlong *)(param_1 + 0x440) + lVar39 * 8), lVar39 != 0))
              {
                local_3f0 = *(longlong *)(*(longlong *)(local_498 + 0x10) + lVar16 * 8);
                if (local_3f0 != 0) {
                  LOCK();
                  *(int *)(local_3f0 + 8) = *(int *)(local_3f0 + 8) + 1;
                  UNLOCK();
                }
                FUN_1406188f0(lVar39,&local_3f0);
              }
              FUN_144756766(local_3e8,uStack_3e0 & 0xffffffff);
              if (local_3e8 != 0) {
                FUN_1400020a8();
              }
LAB_140616d85:
              uVar18 = local_430;
              dVar46 = local_408;
              iVar27 = local_478._0_4_;
              uVar13 = local_2a0;
            }
            local_4cc = local_4cc & ~SUB84(local_448,0);
            puVar19 = local_2a8;
            if (local_2a8 == (uint *)0x0) {
              puVar19 = local_2b8;
            }
            iVar14 = SUB84(dVar46,0);
            lVar16 = (longlong)iVar14;
            uVar12 = puVar19[lVar16] & local_4cc;
            if (uVar12 == 0) {
              iVar23 = uVar13 + 0x1e;
              if (-1 < (int)(uVar13 - 1)) {
                iVar23 = uVar13 - 1;
              }
              iVar23 = iVar23 >> 5;
              iVar27 = iVar27 + 0x20;
              iVar15 = iVar23;
              if (iVar23 < iVar14) {
                iVar15 = iVar14;
              }
              if (iVar14 < iVar23) {
                lVar39 = 0;
                do {
                  uVar12 = puVar19[lVar16 + lVar39 + 1];
                  if (uVar12 != 0) {
                    dVar46 = (double)(ulonglong)(iVar14 + (int)lVar39 + 1);
                    local_4cc = 0xffffffff;
                    goto LAB_140616e67;
                  }
                  iVar27 = iVar27 + 0x20;
                  lVar39 = lVar39 + 1;
                } while (iVar15 - lVar16 != lVar39);
                local_4cc = 0xffffffff;
                iVar14 = iVar15;
              }
              dVar46 = (double)(ulonglong)(iVar14 + 1);
              uVar12 = uVar13;
            }
            else {
LAB_140616e67:
              local_448 = (double)(ulonglong)(-uVar12 & uVar12);
              uVar24 = (longlong)local_448 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar12 = (iVar27 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if ((int)uVar13 <= (int)uVar12) {
                uVar12 = uVar13;
              }
            }
          } while (uVar12 != (uint)uVar18);
        }
LAB_140616e98:
        FUN_140619b9c(&local_2c8,local_178);
        if (local_368 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        local_368 = (undefined8 *)local_178._0_8_;
        uStack_360 = local_178._8_8_;
        FUN_1402226aa();
      } while ((int)uStack_360 != 0);
      local_280 = 0;
      if (local_288 != 0) {
        FUN_1400020a8();
      }
    }
    uVar18 = uStack_2c0 >> 0x20;
    uStack_2c0 = uStack_2c0 & 0xffffffff00000000;
    if ((int)uVar18 != 0) {
      FUN_1447a08a2(&local_2c8,0);
    }
    uStack_298 = 0xffffffff;
    local_294 = 0;
    local_2a0 = 0;
    if (0x80 < local_29c) {
      local_29c = 0x80;
      FUN_1446efbd8(local_2b8,0);
    }
    if (local_2a8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_2c8 != 0) {
      FUN_1400020a8();
    }
    uVar18 = (ulonglong)*(uint *)(param_1 + 0x304);
  }
  if (0 < (int)uVar18) {
    local_4c8 = (undefined8 *)(param_1 + 0x4f0);
    local_4b8 = (undefined8 **)(param_1 + 0x500);
    lVar16 = 0;
    do {
      lVar39 = *(longlong *)(*(longlong *)(param_1 + 0x440) + lVar16 * 8);
      if ((lVar39 != 0) && (iVar27 = *(int *)(lVar39 + 0x88), 0 < (longlong)iVar27)) {
        lVar25 = 0;
        do {
          lVar29 = *(longlong *)(lVar39 + 0x80);
          if (*(longlong *)(lVar39 + 0x80) == 0) {
            lVar29 = lVar39 + 0x78;
          }
          lVar29 = *(longlong *)(lVar29 + lVar25 * 8);
          uVar12 = *(uint *)(lVar29 + 8);
          uVar18 = (ulonglong)uVar12;
          if ((uVar12 & 3) == 0) {
            lVar38 = *(longlong *)(lVar29 + 0x48);
            uVar17 = local_4c8[1];
            *(undefined8 *)(lVar29 + 0x60) = *local_4c8;
            *(undefined8 *)(lVar29 + 0x68) = uVar17;
            uVar13 = *(uint *)(lVar29 + 0xc);
            *(uint *)(lVar29 + 0xc) = uVar13 | 1;
            if ((lVar38 != 0 && uVar13 == 0) && (*(longlong *)(lVar38 + 8) != 0)) {
              FUN_144821112(*(longlong *)(lVar38 + 8) + 0x70,lVar38,uVar12 >> 3);
              uVar18 = (ulonglong)*(uint *)(lVar29 + 8);
            }
          }
          else {
            uVar17 = local_4c8[1];
            *(undefined8 *)(lVar29 + 0x58) = *local_4c8;
            *(undefined8 *)(lVar29 + 0x60) = uVar17;
          }
          if ((uVar18 & 3) == 0) {
            lVar38 = *(longlong *)(lVar29 + 0x48);
            puVar21 = local_4b8[1];
            *(undefined8 **)(lVar29 + 0x50) = *local_4b8;
            *(undefined8 **)(lVar29 + 0x58) = puVar21;
            uVar12 = *(uint *)(lVar29 + 0xc);
            *(uint *)(lVar29 + 0xc) = uVar12 | 1;
            if ((lVar38 != 0 && uVar12 == 0) && (*(longlong *)(lVar38 + 8) != 0)) {
              FUN_144821112(*(longlong *)(lVar38 + 8) + 0x70,lVar38,uVar18 >> 3);
              uVar18 = (ulonglong)*(uint *)(lVar29 + 8);
            }
          }
          else {
            puVar21 = local_4b8[1];
            *(undefined8 **)(lVar29 + 0x48) = *local_4b8;
            *(undefined8 **)(lVar29 + 0x50) = puVar21;
          }
          if (((((uVar18 & 3) == 0) && (*(longlong *)(lVar29 + 0x48) = param_1, param_1 != 0)) &&
              (*(int *)(lVar29 + 0xc) != 0)) && (*(longlong *)(param_1 + 8) != 0)) {
            FUN_144821112(*(longlong *)(param_1 + 8) + 0x70,param_1,uVar18 >> 3);
            uVar18 = (ulonglong)*(uint *)(lVar29 + 8);
          }
          uVar12 = (uint)uVar18;
          uVar36 = *(undefined4 *)(param_1 + 0x1b8);
          if ((uVar18 & 3) == 0) {
            local_178._0_4_ = uVar36;
            local_4e8 = (undefined4)(uVar18 >> 3);
            local_4e0 = local_178;
            FUN_1401c2fdc(lVar29 + 0x80,1,lVar29 + 0xc,*(undefined8 *)(lVar29 + 0x48));
          }
          else {
            if ((uVar18 & 4) == 0) {
              if (*(undefined8 ***)(lVar29 + 0x78) != (undefined8 **)0x0) {
                local_4a8 = *(undefined8 ***)(lVar29 + 0x78);
                FUN_144aa4484();
                FUN_1400020a8(local_4a8);
                uVar12 = *(uint *)(lVar29 + 8);
              }
              *(uint *)(lVar29 + 8) = uVar12 | 4;
            }
            *(undefined4 *)(lVar29 + 0x78) = uVar36;
          }
          lVar25 = lVar25 + 1;
        } while (iVar27 != lVar25);
        uVar18 = (ulonglong)*(uint *)(param_1 + 0x304);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uVar18);
  }
  if (local_368 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406183cc FUN_1406183cc body=130 status=ok
// SIG undefined FUN_1406183cc(void)

undefined8 FUN_1406183cc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_146eee026((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14061844e FUN_14061844e body=350 status=ok
// SIG undefined FUN_14061844e(void)

undefined8 * FUN_14061844e(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_1406185ac();
  *param_1 = &PTR_FUN_149f48e20;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x34] = 0x3f80000000000000;
  param_1[0x36] = 0xffff000000000000;
  *(undefined1 *)(param_1 + 0x37) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x1c1) = 0;
  *(undefined1 *)(param_1 + 0x12) = 2;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0xffffffff;
  FUN_1406190e4(param_1,param_2);
  lVar2 = param_1[2];
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0x94) | 4;
  *(uint *)((longlong)param_1 + 0x94) = uVar1;
  if (lVar2 == 0) {
    *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x174) = 0;
    *(uint *)((longlong)param_1 + 0x94) = uVar1;
  }
  else {
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
      *(undefined4 *)((longlong)param_1 + 0x174) = 0;
      *(uint *)((longlong)param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = param_1[2];
      *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
      *(undefined4 *)((longlong)param_1 + 0x174) = 0;
      *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 4;
      if (lVar2 == 0) goto LAB_14061850e;
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
    }
  }
LAB_14061850e:
  FUN_144a05e16(param_1,(*(char *)(param_2 + 1) == '\0') * '\x03' + '\x01',0,1);
  *(undefined2 *)(param_1 + 0x38) = 0;
  return param_1;
}



// FUNCTION 1406185ac FUN_1406185ac body=194 status=ok
// SIG undefined FUN_1406185ac(void)

undefined8 * FUN_1406185ac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_149f48de0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0xffffffffffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0x100000000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[2] = 0;
  param_1[0xe] = 0;
  FUN_14061877a();
  *param_1 = &PTR_FUN_149f48e00;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_14061866e(param_1,param_2);
  return param_1;
}



// FUNCTION 14061866e FUN_14061866e body=268 status=ok
// SIG undefined FUN_14061866e(void)

void FUN_14061866e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uVar1 = *(uint *)(param_1 + 0x94) | 2;
  *(uint *)(param_1 + 0x94) = uVar1;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(uint *)(param_1 + 0x94) = uVar1;
LAB_1406186be:
    lVar2 = 0;
  }
  else {
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined8 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 2;
      if (lVar2 == 0) goto LAB_1406186be;
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
    }
  }
  if (DAT_14c75f288 == 1) {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x10;
    *(undefined2 *)(param_1 + 0x5c) = 8;
  }
  else {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x10;
    *(undefined2 *)(param_1 + 0x5c) = 0;
  }
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
    return;
  }
  return;
}



// FUNCTION 14061877a FUN_14061877a body=373 status=ok
// SIG undefined FUN_14061877a(void)

void FUN_14061877a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 **local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 1;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(longlong *)(lVar2 + 8) != 0) {
    FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70,lVar2);
    lVar2 = *(longlong *)(param_1 + 0x10);
  }
  local_28 = &local_48;
  local_38 = DAT_14c8463e0;
  uStack_30 = DAT_14c8463e8;
  local_48 = (undefined4)DAT_14c8463d0;
  uStack_44 = DAT_14c8463d0._4_4_;
  uStack_40 = (undefined4)DAT_14c8463d8;
  uStack_3c = DAT_14c8463d8._4_4_;
  local_58 = &local_28;
  FUN_144a05d04(param_1 + 0x20,1,param_1 + 0x94,lVar2);
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x5c) = 0;
  uVar1 = *(uint *)(param_1 + 0x94) | 0x10;
  *(uint *)(param_1 + 0x94) = uVar1;
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x68) = 0;
LAB_14061881a:
    *(undefined1 *)(param_1 + 0x69) = 1;
    *(uint *)(param_1 + 0x94) = uVar1;
  }
  else {
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 0;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_1 + 0x94) | 0x10;
      *(undefined1 *)(param_1 + 0x68) = 0;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_14061881a;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined1 *)(param_1 + 0x69) = 1;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x69) = 1;
      *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x10;
      if (lVar2 == 0) goto LAB_140618824;
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
    }
  }
LAB_140618824:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406188f0 FUN_1406188f0 body=658 status=ok
// SIG undefined FUN_1406188f0(void)

void FUN_1406188f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 0x10);
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_1 + 0x50);
    if (puVar9 == (undefined8 *)0x0) goto LAB_140618953;
    *(undefined8 *)(param_1 + 0x50) = 0;
LAB_140618ae8:
    LOCK();
    piVar1 = (int *)(puVar9 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar9 + 0xc) == 0)) {
      (**(code **)*puVar9)(puVar9,1);
    }
    if (puVar5 == (undefined8 *)0x0) goto LAB_140618953;
  }
  else {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    puVar9 = *(undefined8 **)(param_1 + 0x50);
    if (puVar9 != puVar5) {
      *(undefined8 **)(param_1 + 0x50) = puVar5;
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
      if (puVar9 != (undefined8 *)0x0) goto LAB_140618ae8;
    }
  }
  LOCK();
  piVar1 = (int *)(puVar5 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((*piVar1 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_140618953:
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x10;
  if ((lVar4 != 0) && (lVar6 = *(longlong *)(lVar4 + 8), lVar6 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
      if (*(int *)(lVar4 + 0x18) == -1) {
        lVar8 = *(longlong *)(lVar6 + 0x98);
        uVar2 = *(uint *)(lVar4 + 0x1c);
        piVar1 = (int *)(lVar8 + 0x160 + (ulonglong)uVar2 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
        lVar8 = lVar8 + (ulonglong)uVar2 * 0x10;
        iVar3 = *(int *)(lVar8 + 0x1a0);
        *(int *)(lVar4 + 0x18) = iVar3;
        *(uint *)(lVar8 + 0x1a0) = iVar3 + 1U;
        if (*(uint *)(lVar8 + 0x1a4) < iVar3 + 1U) {
          FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar3);
        }
        lVar8 = *(longlong *)(lVar8 + 0x198);
        lVar10 = (longlong)iVar3 * 0x20;
        *(longlong *)(lVar8 + lVar10) = lVar4;
        *(undefined4 *)(lVar8 + 8 + lVar10) = 0;
        puVar5 = (undefined8 *)(lVar8 + 0x10 + lVar10);
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar6 + 0x98) + 0x160,lVar4);
    }
  }
  dStack_80 = (double)*(float *)(param_1 + 0x4c);
  local_88 = (double)*(float *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  dStack_90 = (double)*(float *)(param_1 + 0x44);
  local_98 = (double)*(float *)(param_1 + 0x40);
  local_78 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = *(undefined8 *)(param_1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  local_a0 = *(undefined8 **)(param_1 + 0x50);
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = *(int *)(local_a0 + 1) + 1;
    UNLOCK();
  }
  FUN_1400ed869(param_1 + 0x78,&local_a0,&local_98,uVar7);
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_a0 + 0xc) == 0)) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140618b84 FUN_140618b84 body=715 status=ok
// SIG undefined FUN_140618b84(void)

int * FUN_140618b84(longlong *param_1,int *param_2)

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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140618d46;
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
LAB_140618d46:
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



// FUNCTION 140618e4f FUN_140618e4f body=660 status=ok
// SIG undefined FUN_140618e4f(void)

longlong * FUN_140618e4f(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  cVar2 = *(char *)((longlong)param_2 + 0x1c);
  if (cVar2 == '\x04') {
    (**(code **)(*(longlong *)param_2[4] + 0x38))((longlong *)param_2[4],&local_50);
    FUN_1447dc19e(param_2 + 6,&local_b8,param_3);
    lVar7 = FUN_14001cc68(0xc0,0x10);
    FUN_14010f5c4(lVar7,&local_50,&local_b8);
    if (lVar7 == 0) {
      *param_1 = 0;
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      puVar4 = (undefined8 *)*param_1;
      *param_1 = lVar7;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  else {
    if ((cVar2 == '\x0f') || (cVar2 == '\x05')) {
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      lVar7 = param_2[5];
      if ((longlong)(int)lVar7 != 0) {
        lVar3 = param_2[4];
        lVar8 = 0;
        do {
          FUN_140618e4f(&local_50,*(undefined8 *)(lVar3 + lVar8),param_3);
          uVar5 = uStack_b0;
          lVar9 = (longlong)(int)uStack_b0;
          uVar6 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
          if (uStack_b0._4_4_ < uVar6) {
            FUN_140619960(&local_b8,uVar5 & 0xffffffff);
          }
          local_b8[lVar9] = local_50;
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar8);
      }
      lVar7 = FUN_14001cc68(0x70,0x10);
      FUN_14014f414(lVar7,&local_b8);
      if (lVar7 == 0) {
        *param_1 = 0;
      }
      else {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
        puVar4 = (undefined8 *)*param_1;
        *param_1 = lVar7;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
      FUN_144756766(local_b8,uStack_b0 & 0xffffffff);
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1406190b3;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_b8);
    lVar7 = FUN_14001cc68(0xc0,0x10);
    FUN_14010f5c4(lVar7,&local_b8,param_3);
    local_50 = local_b8;
    if (lVar7 == 0) {
      *param_1 = 0;
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      puVar4 = (undefined8 *)*param_1;
      *param_1 = lVar7;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
          (**(code **)*puVar4)(puVar4,1);
          local_50 = local_b8;
        }
      }
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_50 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_50 + 0xc) == 0)) {
      (**(code **)*local_50)(local_50,1);
    }
  }
LAB_1406190b3:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1406190e4 FUN_1406190e4 body=2171 status=ok
// SIG undefined FUN_1406190e4(void)

void FUN_1406190e4(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  uVar1 = *(uint *)(param_1 + 0x94);
  *(uint *)(param_1 + 0x94) = uVar1 | 8;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    uVar1 = uVar1 | 0xc;
LAB_140619147:
    *(undefined8 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
LAB_14061915c:
    *(undefined4 *)(param_1 + 0x198) = 0x7f800000;
LAB_140619166:
    *(undefined4 *)(param_1 + 0x19c) = 0x7f800000;
LAB_140619170:
    *(undefined4 *)(param_1 + 0x1a0) = 0xbf800000;
    uVar1 = uVar1 | 8;
    *(uint *)(param_1 + 0x94) = uVar1;
LAB_140619183:
    *(undefined4 *)(param_1 + 0x1a4) = 0x3f800000;
LAB_14061918d:
    *(undefined8 *)(param_1 + 0x148) = 0x3ff0000000000000;
LAB_140619194:
    *(undefined8 *)(param_1 + 0x150) = 0x3ff0000000000000;
LAB_14061919b:
    uVar1 = uVar1 | 0x20;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
LAB_1406191b3:
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0x3ff0000000000000;
LAB_1406191cc:
    *(undefined1 **)(param_1 + 0x130) = &DAT_3f8000003f800000;
    *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
LAB_1406191dd:
    *(undefined1 **)(param_1 + 0x13c) = &DAT_3f8000003f800000;
    *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
LAB_1406191ee:
    *(undefined4 *)(param_1 + 400) = 0;
    uVar1 = uVar1 | 8;
LAB_1406191fb:
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(uint *)(param_1 + 0x94) = uVar1;
LAB_14061920b:
    lVar2 = 0;
  }
  else {
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      uVar1 = uVar1 | 0xc;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      uVar1 = *(uint *)(param_1 + 0x94) | 4;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_140619147;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined8 *)(param_1 + 0x184) = 0;
      *(undefined4 *)(param_1 + 0x18c) = 0;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x184) = 0;
      *(undefined4 *)(param_1 + 0x18c) = 0;
      uVar1 = *(uint *)(param_1 + 0x94) | 4;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_14061915c;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined4 *)(param_1 + 0x198) = 0x7f800000;
      uVar1 = uVar1 | 8;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x198) = 0x7f800000;
      uVar1 = *(uint *)(param_1 + 0x94) | 8;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_140619166;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined4 *)(param_1 + 0x19c) = 0x7f800000;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x19c) = 0x7f800000;
      uVar1 = *(uint *)(param_1 + 0x94) | 8;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_140619170;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined4 *)(param_1 + 0x1a0) = 0xbf800000;
      uVar1 = uVar1 | 8;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x1a0) = 0xbf800000;
      uVar1 = *(uint *)(param_1 + 0x94) | 8;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_140619183;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined4 *)(param_1 + 0x1a4) = 0x3f800000;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x1a4) = 0x3f800000;
      uVar1 = *(uint *)(param_1 + 0x94) | 8;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_14061918d;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined8 *)(param_1 + 0x148) = 0x3ff0000000000000;
      uVar1 = uVar1 | 0x20;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x148) = 0x3ff0000000000000;
      uVar1 = *(uint *)(param_1 + 0x94) | 0x20;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_140619194;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined8 *)(param_1 + 0x150) = 0x3ff0000000000000;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x150) = 0x3ff0000000000000;
      uVar1 = *(uint *)(param_1 + 0x94) | 0x20;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_14061919b;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      uVar1 = uVar1 | 0x20;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_1 + 0x94) | 0x20;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_1406191b3;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0x3ff0000000000000;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0x3ff0000000000000;
      uVar1 = *(uint *)(param_1 + 0x94) | 0x20;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_1406191cc;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined1 **)(param_1 + 0x130) = &DAT_3f8000003f800000;
      *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined1 **)(param_1 + 0x130) = &DAT_3f8000003f800000;
      *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
      uVar1 = *(uint *)(param_1 + 0x94) | 0x20;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_1406191dd;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined1 **)(param_1 + 0x13c) = &DAT_3f8000003f800000;
      *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_1 + 0x94) | 0x20;
      *(undefined1 **)(param_1 + 0x13c) = &DAT_3f8000003f800000;
      *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_1406191ee;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined4 *)(param_1 + 400) = 0;
      uVar1 = uVar1 | 8;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 400) = 0;
      uVar1 = *(uint *)(param_1 + 0x94) | 8;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_1406191fb;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined4 *)(param_1 + 0x194) = 0;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_1 + 0x94) | 8;
      *(undefined4 *)(param_1 + 0x194) = 0;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_14061920b;
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_1 + 0x94);
    }
  }
  uVar3 = (ushort)*(undefined4 *)(param_1 + 0x1b4) & 0xfffe | (ushort)(byte)param_2[2];
  *(ushort *)(param_1 + 0x1b4) = uVar3;
  uVar1 = uVar1 | 8;
  *(uint *)(param_1 + 0x94) = uVar1;
  if (lVar2 == 0) {
    uVar3 = uVar3 & 0xff1f;
    *(ushort *)(param_1 + 0x1b4) = uVar3;
    *(uint *)(param_1 + 0x94) = uVar1;
LAB_14061924e:
    lVar2 = 0;
  }
  else {
    if (*(longlong *)(lVar2 + 8) == 0) {
      uVar3 = uVar3 & 0xff1f;
      *(ushort *)(param_1 + 0x1b4) = uVar3;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_1 + 0x94) | 8;
      uVar3 = *(ushort *)(param_1 + 0x1b4) & 0xff1f;
      *(ushort *)(param_1 + 0x1b4) = uVar3;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_14061924e;
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar3 = *(ushort *)(param_1 + 0x1b4);
      uVar1 = *(uint *)(param_1 + 0x94);
    }
  }
  uVar3 = (uVar3 & 0xfffd) + (ushort)(byte)param_2[3] * 2;
  *(ushort *)(param_1 + 0x1b4) = uVar3;
  uVar1 = uVar1 | 8;
  *(uint *)(param_1 + 0x94) = uVar1;
  if (lVar2 == 0) {
    *(ushort *)(param_1 + 0x1b4) = uVar3 & 0xfdff;
LAB_140619285:
    *(undefined2 *)(param_1 + 0x1b6) = 0xffff;
    *(undefined1 *)(param_1 + 0x1b8) = 0xff;
    *(uint *)(param_1 + 0x94) = uVar1;
LAB_14061929b:
    *(undefined1 *)(param_1 + 0x1b9) = *param_2;
LAB_1406192a3:
    *(undefined1 *)(param_1 + 0x1ae) = 0;
    *(uint *)(param_1 + 0x94) = uVar1;
  }
  else {
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(ushort *)(param_1 + 0x1b4) = uVar3 & 0xfdff;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(byte *)(param_1 + 0x1b5) = *(byte *)(param_1 + 0x1b5) & 0xfd;
      uVar1 = *(uint *)(param_1 + 0x94) | 8;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_140619285;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined2 *)(param_1 + 0x1b6) = 0xffff;
      *(undefined1 *)(param_1 + 0x1b8) = 0xff;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined2 *)(param_1 + 0x1b6) = 0xffff;
      *(undefined1 *)(param_1 + 0x1b8) = 0xff;
      uVar1 = *(uint *)(param_1 + 0x94) | 8;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_14061929b;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined1 *)(param_1 + 0x1b9) = *param_2;
      *(uint *)(param_1 + 0x94) = uVar1;
      uVar1 = uVar1 | 8;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_1 + 0x94) | 8;
      *(undefined1 *)(param_1 + 0x1b9) = *param_2;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (lVar2 == 0) goto LAB_1406192a3;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined1 *)(param_1 + 0x1ae) = 0;
      *(uint *)(param_1 + 0x94) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x1ae) = 0;
      *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 8;
      if (lVar2 == 0) {
        return;
      }
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 140619960 FUN_140619960 body=353 status=ok
// SIG undefined FUN_140619960(void)

void FUN_140619960(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406199e5;
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
LAB_1406199e5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140619ac2 FUN_140619ac2 body=218 status=ok
// SIG undefined FUN_140619ac2(void)

undefined8 FUN_140619ac2(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar1 * 0x40;
        lVar2 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) goto LAB_140619b95;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_140619b95:
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 140619b9c FUN_140619b9c body=458 status=ok
// SIG undefined FUN_140619b9c(void)

longlong * FUN_140619b9c(longlong *param_1,longlong *param_2)

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
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 != 0) {
    FUN_14481578e();
  }
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar11 = 1;
    uVar13 = 0;
    iVar9 = 0;
    iVar2 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar2 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar2 = iVar7 + -1;
      }
      uVar13 = 0;
      uVar11 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar11 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar11 == uVar13) {
          return param_2;
        }
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar11 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar2) {
      iVar2 = iVar7;
    }
  }
  if (iVar2 < iVar7) {
    uVar12 = 0xffffffff;
    do {
      lVar10 = *param_1;
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_1446f48e2(param_2,iVar7);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) =
           *(undefined4 *)((longlong)iVar2 * 0xc + lVar10);
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar2 = (int)uVar13;
      lVar10 = (longlong)iVar2;
      uVar3 = puVar6[lVar10] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar4 = iVar7 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar4 <= iVar2) {
          return param_2;
        }
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar6[lVar10 + lVar8 + 1];
          if (uVar3 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar5 - lVar10 == lVar8) {
            return param_2;
          }
        }
        uVar13 = (ulonglong)(iVar2 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar2 < iVar7);
  }
  return param_2;
}



// FUNCTION 140619d68 FUN_140619d68 body=667 status=ok
// SIG undefined FUN_140619d68(void)

void FUN_140619d68(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140619ddb;
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
LAB_140619ddb:
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
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 14061a004 FUN_14061a004 body=227 status=ok
// SIG undefined FUN_14061a004(void)

undefined8 FUN_14061a004(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        lVar1 = 0;
      } while (iVar4 != -1);
      goto LAB_14061a0ce;
    }
  }
  lVar1 = 0;
LAB_14061a0ce:
  return *(undefined8 *)(lVar1 + 0x30);
}



// FUNCTION 14061a0e8 FUN_14061a0e8 body=96 status=ok
// SIG undefined FUN_14061a0e8(void)

ulonglong FUN_14061a0e8(longlong param_1)

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
LAB_14061a12b:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14061a12b;
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



// FUNCTION 14061a148 FUN_14061a148 body=32 status=ok
// SIG undefined FUN_14061a148(void)

void FUN_14061a148(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x60))(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00014061a164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// FUNCTION 14061a1b6 FUN_14061a1b6 body=46 status=ok
// SIG undefined FUN_14061a1b6(void)

void FUN_14061a1b6(longlong param_1)

{
  FUN_14061a1e4();
  *(undefined8 *)(param_1 + 0x1c8) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x1d0) = 0xff7fffff;
  return;
}



// FUNCTION 14061a1e4 FUN_14061a1e4 body=209 status=ok
// SIG undefined FUN_14061a1e4(void)

void FUN_14061a1e4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 *local_38;
  longlong *local_30;
  undefined1 **local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0.0 <= *(float *)(param_1 + 0xc0)) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (1 < (byte)(*(char *)(param_1 + 0xb4) - 1U)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78))) &&
         (plVar3 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar1 * 8),
         plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x120))(plVar3,param_1);
      }
    }
    local_30 = &local_40;
    local_28 = &local_38;
    local_38 = &LAB_143887798;
    local_18 = &local_28;
    local_20 = FUN_141815c50;
    local_40 = param_1;
    FUN_14061a2b6(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061a2b6 FUN_14061a2b6 body=128 status=ok
// SIG undefined FUN_14061a2b6(void)

void FUN_14061a2b6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(longlong *)(param_1 + 0x40) != 0) && (lVar3 = *(longlong *)(param_1 + 0x48), lVar3 != 0))
     && (iVar1 = *(int *)(lVar3 + 0x30), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x28);
    lVar5 = 0;
    do {
      if ((*(char *)(lVar3 + 8 + lVar5) == '\x02') &&
         (lVar4 = *(longlong *)(lVar3 + lVar5), lVar4 != 0)) {
        iVar2 = *(int *)(lVar4 + 0x18);
        if ((-1 < (longlong)iVar2) &&
           ((iVar2 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar2 * 8) != 0)))) {
          (*(code *)*param_2)(param_2[1]);
        }
      }
      lVar5 = lVar5 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar5);
  }
  return;
}



// FUNCTION 14061a336 FUN_14061a336 body=327 status=ok
// SIG undefined FUN_14061a336(void)

void FUN_14061a336(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (DAT_14cb62b20 == 0) {
    uVar3 = FUN_140325e72();
    DAT_14cb62b20 = FUN_140002ddd(FUN_1464fa00b,uVar3,L"GbxRotationChannel");
  }
  lVar1 = DAT_14cb62b20;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 8);
  if (UNRECOVERED_JUMPTABLE == FUN_144b395cc) {
    lVar2 = DAT_14cb62b20;
    if (DAT_14cb62b20 == 0) {
      uVar3 = FUN_140325e72();
      DAT_14cb62b20 = FUN_140002ddd(FUN_1464fa00b,uVar3,L"GbxRotationChannel");
      return;
    }
  }
  else {
    if (UNRECOVERED_JUMPTABLE == FUN_144b394b8) {
      lVar2 = DAT_14cb55590;
      if (DAT_14cb55590 == 0) {
        uVar3 = FUN_140325e72();
        lVar2 = FUN_140002ddd(FUN_1464b27a6,uVar3,L"BreadcrumbDef");
        DAT_14cb55590 = lVar2;
      }
    }
    else if (UNRECOVERED_JUMPTABLE == FUN_144b39630) {
      lVar2 = DAT_14cb6d990;
      if (DAT_14cb6d990 == 0) {
        uVar3 = FUN_140325e72();
        lVar2 = FUN_140002ddd(FUN_146536cae,uVar3,L"GbxActivityAreaStampDef");
        DAT_14cb6d990 = lVar2;
      }
    }
    else {
      lVar2 = (*UNRECOVERED_JUMPTABLE)(param_2);
    }
    if (lVar1 == 0) {
      return;
    }
  }
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00014061a3f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 14061a47e FUN_14061a47e body=2008 status=ok
// SIG undefined FUN_14061a47e(void)

void FUN_14061a47e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  byte bVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_a8 [32];
  uint local_88;
  longlong *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined6 uVar15;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1415b6504();
  uVar19 = 0;
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    lVar11 = *(longlong *)(param_3 + 0x1c8);
    if (((lVar11 != 0) && (bVar16 = *(byte *)(lVar11 + 0x24), (bVar16 & 4) != 0)) &&
       ((*(byte *)(lVar11 + 0x61) & 0x10) == 0)) {
      plVar1 = (longlong *)(param_1 + 0x10);
      plVar13 = (longlong *)*plVar1;
      if (plVar13 != (longlong *)0x0) {
        *plVar1 = 0;
        (**(code **)(*plVar13 + 0x38))();
        bVar16 = *(byte *)(lVar11 + 0x24);
      }
      *(byte *)(lVar11 + 0x24) = bVar16 | 2;
      if (*(char *)(lVar11 + 0x26) != '\x01') {
        *(undefined1 *)(lVar11 + 0x26) = 2;
      }
      iVar4 = *(int *)(param_2 + 0x1c0);
      *(uint *)(param_2 + 0x1c0) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x1c4) < iVar4 + 1U) {
        FUN_14017e38e((longlong *)(param_2 + 0x1b8),iVar4);
      }
      lVar6 = *(longlong *)(param_2 + 0x1b8);
      *(longlong *)(lVar6 + (longlong)iVar4 * 0x10) = lVar11;
      *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plVar1;
      if ((bVar16 & 2) == 0) {
        pcVar3 = (char *)(param_2 + 0x4a8);
        LOCK();
        bVar20 = *(char *)(param_2 + 0x4a8) == '\0';
        if (bVar20) {
          *(char *)(param_2 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar20) {
          FUN_1447d2058();
        }
        iVar4 = *(int *)(param_2 + 0x4b8);
        *(uint *)(param_2 + 0x4b8) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0x4bc) < iVar4 + 1U) {
          FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar4);
        }
        lVar6 = *(longlong *)(param_2 + 0x4b0);
        *(undefined8 *)(lVar6 + (longlong)iVar4 * 0x10) = 2;
        *(longlong *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = lVar11;
        LOCK();
        cVar7 = *pcVar3;
        if (cVar7 == '\x01') {
          *pcVar3 = '\0';
        }
        UNLOCK();
        if (cVar7 != '\x01') {
          FUN_14008cdb0(pcVar3);
        }
      }
    }
    lVar11 = *(longlong *)(param_3 + 0x220);
    uVar19 = 2;
    if (((lVar11 != 0) && (bVar16 = *(byte *)(lVar11 + 0x24), (bVar16 & 4) != 0)) &&
       ((*(byte *)(lVar11 + 0x61) & 0x10) == 0)) {
      plVar1 = (longlong *)(param_1 + 0x18);
      plVar13 = (longlong *)*plVar1;
      if (plVar13 != (longlong *)0x0) {
        *plVar1 = 0;
        (**(code **)(*plVar13 + 0x38))();
        bVar16 = *(byte *)(lVar11 + 0x24);
      }
      *(byte *)(lVar11 + 0x24) = bVar16 | 2;
      if (*(char *)(lVar11 + 0x26) != '\x01') {
        *(undefined1 *)(lVar11 + 0x26) = 2;
      }
      plVar13 = (longlong *)(param_2 + 0x1b8);
      iVar4 = *(int *)(param_2 + 0x1c0);
      *(uint *)(param_2 + 0x1c0) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x1c4) < iVar4 + 1U) {
        local_78 = plVar13;
        FUN_14017e38e(plVar13,iVar4);
        plVar13 = local_78;
      }
      lVar6 = *plVar13;
      *(longlong *)(lVar6 + (longlong)iVar4 * 0x10) = lVar11;
      *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plVar1;
      if ((bVar16 & 2) == 0) {
        pcVar3 = (char *)(param_2 + 0x4a8);
        LOCK();
        bVar20 = *(char *)(param_2 + 0x4a8) == '\0';
        if (bVar20) {
          *(char *)(param_2 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar20) {
          FUN_1447d2058();
        }
        iVar4 = *(int *)(param_2 + 0x4b8);
        *(uint *)(param_2 + 0x4b8) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0x4bc) < iVar4 + 1U) {
          FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar4);
        }
        lVar6 = *(longlong *)(param_2 + 0x4b0);
        *(undefined8 *)(lVar6 + (longlong)iVar4 * 0x10) = 2;
        *(longlong *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = lVar11;
        LOCK();
        cVar7 = *pcVar3;
        if (cVar7 == '\x01') {
          *pcVar3 = '\0';
        }
        UNLOCK();
        if (cVar7 != '\x01') {
          FUN_14008cdb0(pcVar3);
        }
      }
    }
  }
  cVar7 = FUN_1449ecfd0();
  lVar11 = DAT_14ca43230;
  if ((cVar7 != '\0') && ((*(byte *)(param_3 + 0x10) & 4) != 0)) {
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar4 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar4 == 2)))) {
      uVar12 = 0;
    }
    else if (iVar4 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar12 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar12 = 1;
    }
    if (*(char *)(lVar11 + uVar12) == '\0') {
      lVar11 = *(longlong *)(param_3 + 0x1d8);
      uVar19 = 2;
      if (((lVar11 != 0) && (bVar16 = *(byte *)(lVar11 + 0x24), (bVar16 & 4) != 0)) &&
         ((*(byte *)(lVar11 + 0x61) & 0x10) == 0)) {
        plVar1 = (longlong *)(param_1 + 0x10);
        plVar13 = (longlong *)*plVar1;
        if (plVar13 != (longlong *)0x0) {
          *plVar1 = 0;
          (**(code **)(*plVar13 + 0x38))();
          bVar16 = *(byte *)(lVar11 + 0x24);
        }
        *(byte *)(lVar11 + 0x24) = bVar16 | 2;
        if (*(char *)(lVar11 + 0x26) != '\x01') {
          *(undefined1 *)(lVar11 + 0x26) = 2;
        }
        plVar13 = (longlong *)(param_2 + 0x1b8);
        iVar4 = *(int *)(param_2 + 0x1c0);
        *(uint *)(param_2 + 0x1c0) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0x1c4) < iVar4 + 1U) {
          local_78 = plVar13;
          FUN_14017e38e(plVar13,iVar4);
          plVar13 = local_78;
        }
        lVar6 = *plVar13;
        *(longlong *)(lVar6 + (longlong)iVar4 * 0x10) = lVar11;
        *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plVar1;
        if ((bVar16 & 2) == 0) {
          pcVar3 = (char *)(param_2 + 0x4a8);
          LOCK();
          bVar20 = *(char *)(param_2 + 0x4a8) == '\0';
          if (bVar20) {
            *(char *)(param_2 + 0x4a8) = '\x01';
          }
          UNLOCK();
          if (!bVar20) {
            FUN_1447d2058();
          }
          iVar4 = *(int *)(param_2 + 0x4b8);
          *(uint *)(param_2 + 0x4b8) = iVar4 + 1U;
          if (*(uint *)(param_2 + 0x4bc) < iVar4 + 1U) {
            FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar4);
          }
          lVar6 = *(longlong *)(param_2 + 0x4b0);
          *(undefined8 *)(lVar6 + (longlong)iVar4 * 0x10) = 2;
          *(longlong *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = lVar11;
          LOCK();
          cVar7 = *pcVar3;
          if (cVar7 == '\x01') {
            *pcVar3 = '\0';
          }
          UNLOCK();
          if (cVar7 != '\x01') {
            FUN_14008cdb0(pcVar3);
          }
        }
      }
    }
  }
  if ((*(byte *)(param_3 + 0x10) & 2) != 0) {
    uVar19 = uVar19 | 0x400;
    lVar11 = *(longlong *)(param_3 + 0x230);
    if (((lVar11 != 0) && (bVar16 = *(byte *)(lVar11 + 0x24), (bVar16 & 4) != 0)) &&
       ((*(byte *)(lVar11 + 0x61) & 0x10) == 0)) {
      plVar1 = (longlong *)(param_1 + 0x20);
      plVar13 = (longlong *)*plVar1;
      if (plVar13 != (longlong *)0x0) {
        *plVar1 = 0;
        (**(code **)(*plVar13 + 0x38))();
        bVar16 = *(byte *)(lVar11 + 0x24);
      }
      *(byte *)(lVar11 + 0x24) = bVar16 | 2;
      if (*(char *)(lVar11 + 0x26) != '\x01') {
        *(undefined1 *)(lVar11 + 0x26) = 2;
      }
      plVar13 = (longlong *)(param_2 + 0x1b8);
      iVar4 = *(int *)(param_2 + 0x1c0);
      *(uint *)(param_2 + 0x1c0) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x1c4) < iVar4 + 1U) {
        local_78 = plVar13;
        FUN_14017e38e(plVar13,iVar4);
        plVar13 = local_78;
      }
      lVar6 = *plVar13;
      *(longlong *)(lVar6 + (longlong)iVar4 * 0x10) = lVar11;
      *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plVar1;
      if ((bVar16 & 2) == 0) {
        pcVar3 = (char *)(param_2 + 0x4a8);
        LOCK();
        bVar20 = *(char *)(param_2 + 0x4a8) == '\0';
        if (bVar20) {
          *(char *)(param_2 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar20) {
          FUN_1447d2058();
        }
        iVar4 = *(int *)(param_2 + 0x4b8);
        *(uint *)(param_2 + 0x4b8) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0x4bc) < iVar4 + 1U) {
          FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar4);
        }
        lVar6 = *(longlong *)(param_2 + 0x4b0);
        *(undefined8 *)(lVar6 + (longlong)iVar4 * 0x10) = 2;
        *(longlong *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = lVar11;
        LOCK();
        cVar7 = *pcVar3;
        if (cVar7 == '\x01') {
          *pcVar3 = '\0';
        }
        UNLOCK();
        if (cVar7 != '\x01') {
          FUN_14008cdb0(pcVar3);
        }
      }
    }
  }
  puVar2 = (ulonglong *)(param_2 + 0x70);
  puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar17 + 6;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(puVar2,0x40);
    puVar17 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar17 + 6;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  *puVar17 = &PTR_FUN_14a2f9708;
  puVar10 = puVar17 + 2;
  puVar17[2] = 0;
  *(undefined1 *)(puVar17 + 3) = 1;
  puVar17[4] = 0;
  *(undefined1 *)(puVar17 + 5) = 1;
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar17;
  local_88 = uVar19;
  FUN_14177f539(&local_68,param_2,param_3,*(undefined4 *)(param_3 + 0x18));
  *(undefined4 *)(puVar17 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar17 + 0x24) = local_58._4_4_;
  *(undefined4 *)(puVar17 + 5) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_4c;
  *(undefined4 *)puVar10 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar17 + 0x14) = local_68._4_4_;
  *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_60._4_4_;
  uVar5 = *(undefined4 *)(param_3 + 0x14);
  lVar11 = FUN_14130543e();
  FUN_140069376(param_2);
  uVar15 = (undefined6)((ulonglong)param_3 >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,0x33);
  if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
     ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
    uVar14 = (undefined4)CONCAT62(uVar15,0x35);
  }
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar18 + 0x3a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(puVar2,0x1d8);
    puVar18 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar18 + 0x3a;
  }
  *puVar2 = (ulonglong)puVar17;
  uStack_60 = *(longlong *)(lVar11 + 0x48);
  if (uStack_60 != 0) {
    LOCK();
    *(int *)(uStack_60 + 8) = *(int *)(uStack_60 + 8) + 1;
    UNLOCK();
  }
  local_88 = CONCAT31(local_88._1_3_,1);
  local_68 = puVar10;
  local_58 = lVar11;
  FUN_140068f1a(puVar18,&local_69,&local_68,uVar14);
  *puVar18 = &PTR_FUN_14a2f9710;
  puVar18[0x37] = param_1;
  puVar18[0x38] = puVar10;
  *(undefined4 *)(puVar18 + 0x39) = uVar5;
  iVar4 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar4 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140069100(param_2,puVar18);
  return;
}



// FUNCTION 14061ac5a FUN_14061ac5a body=2407 status=ok
// SIG undefined FUN_14061ac5a(void)

void FUN_14061ac5a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_258 [32];
  longlong *local_238;
  longlong *local_230;
  undefined8 **local_228;
  longlong local_220;
  uint local_218;
  uint local_210;
  longlong local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined8 local_198;
  longlong lStack_190;
  ulonglong local_188;
  longlong lStack_180;
  ulonglong local_178;
  longlong lStack_170;
  ulonglong local_168;
  longlong lStack_160;
  undefined8 local_158;
  char local_150;
  longlong local_148;
  ulonglong uStack_140;
  longlong local_138;
  ulonglong uStack_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined8 local_f0;
  ulonglong uStack_e8;
  undefined8 local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  int local_d0;
  undefined4 uStack_cc;
  char local_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  longlong lStack_a8;
  ulonglong local_a0;
  longlong lStack_98;
  ulonglong local_90;
  longlong lStack_88;
  undefined8 local_80;
  char local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar9 = *(uint *)(param_1 + 0x30);
  uVar12 = (ulonglong)uVar9;
  if ((uVar12 == 0) || (*(char *)(param_1 + 0xec) == '\0')) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_258);
    }
    if (*(char *)(param_2 + 0x13) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_258);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_258);
  }
  local_110 = *param_2;
  local_108 = 0;
  local_100 = 1;
  local_fc = 0xffffffffffffffff;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d7 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  local_c8 = '\0';
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  lStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 0;
  local_78 = *(char *)(param_2 + 0x13);
  FUN_1447ce2ce(&local_110);
  local_fc = *(undefined8 *)((longlong)param_2 + 0x14);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    if (local_78 == '\x01') {
      FUN_142400d60(local_f0,uStack_e8 & 0xffffffff);
    }
    else {
      FUN_1448859f0(&local_f0,local_e0);
    }
  }
  else {
    local_fc = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),*(undefined4 *)(param_1 + 0x20));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  }
  local_128 = 0;
  uStack_120 = 0;
  if ((int)uVar9 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar12);
  }
  uStack_120 = (ulonglong)uVar9;
  FUN_144ade1dc(&local_128,0);
  FUN_1447e15a9(local_128,uVar9);
  local_138 = 0;
  uStack_130 = (ulonglong)uVar9;
  FUN_144ade34e(&local_138,0);
  FUN_1447e1577(local_138,uVar9);
  local_148 = 0;
  uStack_140 = (ulonglong)uVar9;
  FUN_144ade44e(&local_148,0);
  FUN_1447e1596(local_148,uVar9);
  local_1f8 = param_2 + 7;
  lVar16 = uVar12 << 5;
  lVar17 = 0;
  lVar10 = 0;
  lVar15 = 0;
  lVar11 = 0;
  local_208 = lVar16;
  local_200 = param_2;
  local_1f0 = uVar12;
  do {
    puVar3 = local_200;
    if (*(float *)(*(longlong *)(param_1 + 0x60) + lVar17) <= 1e-05) {
      FUN_1448859f0(local_128 + lVar15,local_e0);
      lVar4 = local_138;
      if ((undefined8 *)(local_138 + lVar11) != local_1f8) {
        *(undefined4 *)(local_138 + 8 + lVar11) = 0;
        if (*(int *)(local_138 + 0xc + lVar11) < 0) {
          FUN_14480ffb8((undefined8 *)(local_138 + lVar11),0);
        }
        *(undefined1 *)(lVar4 + 0x10 + lVar11) = 0;
        *(undefined8 *)(lVar4 + 0x18 + lVar11) = local_200[10];
      }
    }
    else {
      local_1e8 = (undefined8 *)*local_200;
      local_1e0 = (undefined8 *)0x0;
      local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,1);
      local_1d8._4_4_ = 0xffffffff;
      uStack_1d0 = 0xffffffff;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1af = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_158 = 0;
      local_168 = 0;
      lStack_160 = 0;
      local_178 = 0;
      lStack_170 = 0;
      local_188 = 0;
      lStack_180 = 0;
      local_198 = 0;
      lStack_190 = 0;
      local_150 = *(char *)(local_200 + 0x13);
      FUN_1447ce2ce(&local_1e8);
      local_1d8._4_4_ = *(undefined4 *)((longlong)puVar3 + 0x14);
      uStack_1d0 = *(undefined4 *)(puVar3 + 3);
      lVar16 = *(longlong *)(param_1 + 0x28);
      if (*(longlong *)(lVar16 + lVar17 * 4) == 0) {
        if (local_150 == '\x01') {
          FUN_142400d60(local_1c8);
        }
        else {
          FUN_1448859f0(&local_1c8);
        }
      }
      else {
        uStack_1d0 = local_1d8._4_4_;
        local_1d8._4_4_ = *(undefined4 *)(lVar16 + 8 + lVar17 * 4);
        (**(code **)(**(longlong **)(lVar16 + lVar17 * 4) + 0x28))();
      }
      lVar16 = local_208;
      if ((undefined8 *)(local_128 + lVar15) != &local_1c8) {
        *(undefined8 *)(local_128 + lVar15) = local_1c8;
        local_1c8 = 0;
        *(undefined4 *)(local_128 + 8 + lVar15) = (undefined4)uStack_1c0;
        *(undefined4 *)(local_128 + 0xc + lVar15) = uStack_1c0._4_4_;
        uStack_1c0 = 0;
        *(undefined8 *)(local_128 + 0x10 + lVar15) = local_1b8;
        local_1b8 = 0;
      }
      if ((undefined1 *)(local_138 + lVar11) != &uStack_1b0) {
        *(ulonglong *)(local_138 + lVar11) = CONCAT71(uStack_1af,uStack_1b0);
        uStack_1b0 = 0;
        uStack_1af = 0;
        *(undefined4 *)(local_138 + 8 + lVar11) = uStack_1a8;
        *(undefined4 *)(local_138 + 0xc + lVar11) = uStack_1a4;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
      }
      *(undefined1 *)(local_138 + 0x10 + lVar11) = uStack_1a0;
      uStack_1a0 = 0;
      FUN_1447e1642(local_148 + lVar10,&lStack_190);
      if (lStack_160 != 0) {
        FUN_1400020a8();
      }
      FUN_144716785(lStack_170,local_168 & 0xffffffff);
      if (lStack_170 != 0) {
        FUN_1400020a8();
      }
      FUN_144716758(lStack_180,local_178 & 0xffffffff);
      if (lStack_180 != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(lStack_190,local_188 & 0xffffffff);
      if (lStack_190 != 0) {
        FUN_1400020a8();
      }
    }
    lVar11 = lVar11 + 0x20;
    lVar15 = lVar15 + 0x18;
    lVar10 = lVar10 + 0x40;
    lVar17 = lVar17 + 4;
  } while (lVar16 != lVar11);
  if (local_c8 == '\0') {
    FUN_144716af1(CONCAT71(uStack_d7,uStack_d8),local_d0);
    local_c8 = '\x01';
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    FUN_1432899fe(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  iVar7 = *(int *)(param_1 + 0xa8);
  if (0 < iVar7 && 0 < local_d0) {
    uVar9 = 0;
    iVar8 = 0;
    iVar5 = local_d0;
    do {
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar8 * 0x14);
      lVar10 = *(longlong *)(CONCAT71(uStack_d7,uStack_d8) + (longlong)(int)uVar9 * 0x10);
      if (lVar10 == lVar16) {
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar8 * 0x14 + 0x10) == -1) {
          uVar9 = uVar9 + 1;
        }
        else {
          if (~uVar9 + iVar5 != 0) {
            pvVar6 = (void *)(CONCAT71(uStack_d7,uStack_d8) + (longlong)(int)uVar9 * 0x10);
            memmove(pvVar6,(void *)((longlong)pvVar6 + 0x10),(longlong)(int)(~uVar9 + iVar5) << 4);
            iVar7 = *(int *)(param_1 + 0xa8);
            iVar5 = local_d0;
          }
          iVar5 = iVar5 + -1;
          local_d0 = iVar5;
        }
LAB_14061b248:
        iVar8 = iVar8 + 1;
      }
      else {
        iVar13 = (int)lVar10 - (int)lVar16;
        if (iVar13 == 0) {
          iVar13 = (int)((ulonglong)lVar10 >> 0x20) - (int)((ulonglong)lVar16 >> 0x20);
        }
        if (-1 < iVar13) goto LAB_14061b248;
        uVar9 = uVar9 + 1;
      }
    } while (((int)uVar9 < iVar5) && (iVar8 < iVar7));
  }
  uVar12 = 0;
  do {
    plVar1 = (longlong *)(local_138 + uVar12 * 0x20);
    if (*(char *)(local_138 + 0x10 + uVar12 * 0x20) == '\0') {
      FUN_144716af1(*plVar1,(int)plVar1[1]);
      *(undefined1 *)(plVar1 + 2) = 1;
      iVar7 = *(int *)(param_1 + 0xa8);
    }
    if (*(char *)(param_1 + 0xb0) == '\0') {
      FUN_1432899fe(*(undefined8 *)(param_1 + 0xa0));
      *(undefined1 *)(param_1 + 0xb0) = 1;
      iVar7 = *(int *)(param_1 + 0xa8);
    }
    iVar5 = (int)plVar1[1];
    if ((0 < iVar5) && (0 < iVar7)) {
      uVar9 = 0;
      iVar8 = 0;
      do {
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar8 * 0x14);
        lVar10 = *(longlong *)(*plVar1 + (longlong)(int)uVar9 * 0x10);
        if (lVar10 == lVar16) {
          uVar14 = (ulonglong)
                   *(uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar8 * 0x14 + 0x10);
          if (uVar12 == uVar14 || uVar14 == 0xffffffff) {
            uVar9 = uVar9 + 1;
LAB_14061b367:
            iVar8 = iVar8 + 1;
          }
          else {
            if (~uVar9 + iVar5 != 0) {
              pvVar6 = (void *)(*plVar1 + (longlong)(int)uVar9 * 0x10);
              memmove(pvVar6,(void *)((longlong)pvVar6 + 0x10),(longlong)(int)(~uVar9 + iVar5) << 4)
              ;
              iVar5 = (int)plVar1[1];
            }
            iVar5 = iVar5 + -1;
            *(int *)(plVar1 + 1) = iVar5;
            iVar8 = iVar8 + 1;
            iVar7 = *(int *)(param_1 + 0xa8);
          }
        }
        else {
          iVar13 = (int)lVar10 - (int)lVar16;
          if (iVar13 == 0) {
            iVar13 = (int)((ulonglong)lVar10 >> 0x20) - (int)((ulonglong)lVar16 >> 0x20);
          }
          if (-1 < iVar13) goto LAB_14061b367;
          uVar9 = uVar9 + 1;
        }
      } while (((int)uVar9 < iVar5) && (iVar8 < iVar7));
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == local_1f0) {
      local_218 = *(byte *)(param_1 + 0xe8) + 2;
      if (*(char *)(param_1 + 0xe9) == '\0') {
        local_218 = (uint)*(byte *)(param_1 + 0xe8);
      }
      local_1e8 = local_200 + 4;
      local_1e0 = local_1f8;
      local_1d8 = local_200 + 0xb;
      local_220 = param_1 + 0x80;
      local_238 = &lStack_b8;
      local_210 = (uint)*(byte *)(param_1 + 0xea);
      local_228 = &local_1e8;
      local_230 = &local_148;
      FUN_1433cece6(&local_f0,&local_128,&uStack_d8,&local_138);
      FUN_1447e15bf(local_148,uStack_140 & 0xffffffff);
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      FUN_1447e163f(local_138,uStack_130 & 0xffffffff);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      FUN_1447e1640(local_128,uStack_120 & 0xffffffff);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      if (lStack_88 != 0) {
        FUN_1400020a8();
      }
      FUN_144716785(lStack_98,local_90 & 0xffffffff);
      if (lStack_98 != 0) {
        FUN_1400020a8();
      }
      FUN_144716758(lStack_a8,local_a0 & 0xffffffff);
      if (lStack_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(lStack_b8,local_b0 & 0xffffffff);
      if (lStack_b8 != 0) {
        FUN_1400020a8();
      }
      if ((local_70 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 14061b64c FUN_14061b64c body=5629 status=ok
// SIG undefined FUN_14061b64c(void)

void FUN_14061b64c(longlong param_1,longlong *param_2,longlong *param_3,float param_4,
                  longlong *param_5,float param_6,float param_7)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  DWORD DVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  DWORD dwTlsIndex;
  DWORD DVar12;
  LPVOID lpTlsValue;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  bool bVar25;
  undefined1 auStack_338 [32];
  longlong *local_318;
  longlong *local_310;
  undefined8 **local_308;
  longlong local_2f8;
  undefined8 *local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  ulonglong local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  undefined8 *local_2c0;
  longlong *local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  undefined4 local_260;
  longlong local_258;
  undefined4 local_250;
  longlong local_248;
  undefined4 local_240;
  longlong local_238;
  undefined4 local_230;
  longlong local_228;
  ulonglong uStack_220;
  undefined1 local_218;
  longlong local_210;
  undefined8 *local_200;
  undefined1 *local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8 [4];
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  longlong local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  int local_1ac;
  undefined1 local_1a8;
  longlong local_1a0;
  longlong lStack_198;
  ulonglong local_190;
  longlong lStack_188;
  ulonglong local_180;
  longlong lStack_178;
  ulonglong local_170;
  longlong lStack_168;
  undefined8 local_160;
  longlong local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  ulonglong uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined1 local_117;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  char local_97;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_338;
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  local_2a0 = param_3[2];
  puVar4 = (undefined8 *)*param_5;
  puVar5 = (undefined8 *)param_5[1];
  local_2a8 = param_5[2];
  local_2c8 = param_2;
  if (param_6 <= 1e-05) {
    FUN_14470ea10(puVar4,puVar2);
    puVar4[2] = puVar2[2];
    FUN_144717214(puVar5,puVar3);
    *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(puVar3 + 2);
    puVar5[3] = puVar3[3];
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_338);
  }
  lVar19 = param_1;
  if (((*(byte *)(param_1 + 0x7e1) & 0x10) != 0) &&
     (lVar19 = *(longlong *)(param_1 + 0x150), *(longlong *)(param_1 + 0x150) == 0)) {
    lVar19 = param_1;
  }
  local_2f0 = puVar5;
  local_2c0 = puVar4;
  local_298 = puVar2;
  local_290 = puVar3;
  if ((longlong)*(int *)(lVar19 + 0x6c8) != 0) {
    lVar23 = *(longlong *)(lVar19 + 0x6c0);
    lVar19 = (longlong)*(int *)(lVar19 + 0x6c8) * 0x58 + lVar23;
    do {
      cVar8 = FUN_144729dda(lVar23);
      if ((cVar8 != '\0') && (*(longlong *)(lVar23 + 0x38) != 0)) {
        lVar16 = FUN_14479d2ce(lVar23);
        if (0 < (longlong)*(int *)(lVar16 + 0x170)) {
          lVar18 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar16 + 0x168) + lVar18) == *local_2c8) {
              if (0 < *(int *)(*(longlong *)(lVar16 + 0x168) + 0x10 + lVar18)) {
                local_310 = (longlong *)CONCAT44(local_310._4_4_,param_6);
                local_318 = param_5;
                FUN_1478ff8f8(param_1,local_2c8,param_3,param_4);
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_338);
              }
              break;
            }
            lVar18 = lVar18 + 0x18;
          } while ((longlong)*(int *)(lVar16 + 0x170) * 0x18 != lVar18);
        }
      }
      lVar23 = lVar23 + 0x58;
    } while (lVar23 != lVar19);
  }
  dwTlsIndex = DAT_14c7612d4;
  if (DAT_14c7612d4 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar12 = 0xffffffff;
    LOCK();
    bVar25 = DAT_14c7612d4 != 0xffffffff;
    DVar7 = dwTlsIndex;
    if (bVar25) {
      DVar12 = DAT_14c7612d4;
      DVar7 = DAT_14c7612d4;
    }
    DAT_14c7612d4 = DVar7;
    UNLOCK();
    if (bVar25) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar12;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1417b5d4e();
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_2d0 = (longlong *)((longlong)lpTlsValue + 0x60);
  iVar22 = *(int *)((longlong)lpTlsValue + 0x6c);
  FUN_14061cc94(*(undefined8 *)((longlong)lpTlsValue + 0x60),
                *(undefined4 *)((longlong)lpTlsValue + 0x68));
  *(undefined4 *)((longlong)lpTlsValue + 0x68) = 0;
  if ((iVar22 < 0) && (*(int *)((longlong)lpTlsValue + 0x6c) != 0)) {
    FUN_14791baca(local_2d0);
  }
  local_2e0 = (longlong *)((longlong)lpTlsValue + 0x50);
  iVar22 = *(int *)((longlong)lpTlsValue + 0x5c);
  FUN_14061cc94(*(undefined8 *)((longlong)lpTlsValue + 0x50),
                *(undefined4 *)((longlong)lpTlsValue + 0x58));
  *(undefined4 *)((longlong)lpTlsValue + 0x58) = 0;
  if ((iVar22 < 0) && (*(int *)((longlong)lpTlsValue + 0x5c) != 0)) {
    FUN_14791baca(local_2e0);
  }
  lVar19 = (longlong)lpTlsValue + 0xa0;
  *(undefined4 *)((longlong)lpTlsValue + 200) = 0;
  if (*(int *)((longlong)lpTlsValue + 0xcc) < 0) {
    FUN_14791bb40(lVar19,0);
  }
  lVar23 = (longlong)lpTlsValue + 0xd0;
  *(undefined4 *)((longlong)lpTlsValue + 0x118) = 0;
  if (*(int *)((longlong)lpTlsValue + 0x11c) < 0) {
    FUN_14791bba6(lVar23);
  }
  local_2f8 = (longlong)lpTlsValue + 0x120;
  *(undefined4 *)((longlong)lpTlsValue + 0x168) = 0;
  if (*(int *)((longlong)lpTlsValue + 0x16c) < 0) {
    FUN_14791bc76();
  }
  local_2e8 = (longlong)lpTlsValue + 0x170;
  *(undefined4 *)((longlong)lpTlsValue + 0x1b8) = 0;
  if (*(int *)((longlong)lpTlsValue + 0x1bc) < 0) {
    FUN_14791bd46(local_2e8);
  }
  lVar16 = param_1;
  if (((*(byte *)(param_1 + 0x7e1) & 0x10) != 0) &&
     (lVar16 = *(longlong *)(param_1 + 0x150), *(longlong *)(param_1 + 0x150) == 0)) {
    lVar16 = param_1;
  }
  local_2b8 = param_5;
  local_280 = lVar19;
  local_278 = lVar23;
  if ((longlong)*(int *)(lVar16 + 0x6c8) != 0) {
    lVar19 = *(longlong *)(lVar16 + 0x6c0);
    lVar23 = (longlong)*(int *)(lVar16 + 0x6c8) * 0x58 + lVar19;
LAB_14061c4de:
    cVar8 = FUN_144729dda(lVar19);
    puVar3 = local_298;
    puVar2 = local_2c0;
    if (cVar8 != '\0') {
      plVar14 = (longlong *)FUN_14479d2ce(lVar19);
      lVar16 = (longlong)(int)plVar14[0x2e];
      if (0 < lVar16) {
        lVar18 = plVar14[0x2d];
        lVar13 = 0;
        do {
          if (*(longlong *)(lVar18 + lVar13) == *local_2c8) {
            if (0 < *(int *)(lVar18 + 0x10 + lVar13)) {
              lVar18 = lVar18 + 8;
              goto LAB_14061c535;
            }
            break;
          }
          lVar13 = lVar13 + 0x18;
        } while (lVar16 * 0x18 != lVar13);
      }
      goto LAB_14061c559;
    }
    FUN_14470ea10(local_2c0,local_298);
    puVar5 = local_290;
    puVar4 = local_2f0;
    puVar2[2] = puVar3[2];
    FUN_144717214(local_2f0,local_290);
    *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(puVar5 + 2);
    puVar4[3] = puVar5[3];
    FUN_140341952(local_2a8,local_2a0);
    goto LAB_14061bdf9;
  }
LAB_14061b85b:
  iVar22 = *(int *)(param_1 + 0x7f0);
  lVar19 = local_2f8;
  lVar23 = local_2e8;
  if ((longlong)iVar22 != 0) {
    local_2d8 = *(ulonglong *)(param_1 + 0x7e8);
    local_270 = local_2d8 + 0x18;
    lVar16 = 0;
    local_2b0 = param_1;
    do {
      if ((*(longlong *)(local_2d8 + lVar16) == *local_2c8) &&
         (plVar14 = *(longlong **)(local_2d8 + 8 + lVar16), plVar14 != (longlong *)0x0)) {
        iVar10 = (**(code **)(*plVar14 + 0x3c0))(plVar14);
        local_1d4 = *(undefined4 *)(local_2d8 + 0x10 + lVar16);
        local_1d8[0] = (undefined1)iVar10;
        local_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1b8._0_1_ = 0;
        uStack_1b8._1_7_ = 0;
        local_1b0 = 0;
        local_1ac = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        lStack_198 = 0;
        local_190 = 0;
        lStack_188 = 0;
        local_180 = 0;
        lStack_178 = 0;
        local_170 = 0;
        lStack_168 = 0;
        local_160 = 0;
        local_1c0 = local_2c0[2];
        uVar17 = *(uint *)(local_1c0 + 8);
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar17);
        }
        if (uVar17 == 0) {
          iVar11 = 0;
          iVar15 = 0;
        }
        else {
          FUN_144717690(&local_1d0,uVar17);
          iVar15 = (int)uStack_1c8;
          iVar11 = uStack_1c8._4_4_;
        }
        uStack_1c8 = CONCAT44(uStack_1c8._4_4_,iVar15 + uVar17);
        if ((uint)(iVar11 - iVar15) < uVar17) {
          FUN_1406600da(&local_1d0);
        }
        if (local_2f0 != &uStack_1b8) {
          local_1b0 = 0;
          if (local_1ac < 0) {
            FUN_14480ffb8(&uStack_1b8,0);
          }
          local_1a8 = 0;
          local_1a0 = local_2f0[3];
        }
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        uStack_148 = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        uStack_13c = 0;
        local_158 = 0;
        uStack_150 = 0;
        uStack_14c = 0;
        local_d8 = &local_1d0;
        local_c8 = &local_158;
        local_d0 = &uStack_1b8;
        (**(code **)(*plVar14 + 0x328))(plVar14,&local_d8);
        lVar19 = *(longlong *)(local_2d8 + 0x60 + lVar16);
        if ((DAT_14c950c29 == '\x01') && (lVar19 != 0)) {
          FUN_1456cec3c(lVar19);
LAB_14061c865:
          lVar23 = local_1c0;
          local_288 = local_2b0 + 0x858;
          if (*(int *)(local_2b0 + 0x860) != *(int *)(local_1c0 + 8)) {
            local_228 = lVar19;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar19);
            }
            FUN_147903260(local_288,lVar23,&local_228);
          }
          FUN_140531124(&local_1d0,*(undefined1 *)(lVar19 + 0xc0));
        }
        else if (lVar19 != 0) goto LAB_14061c865;
        plVar14 = local_2d0;
        if (iVar10 == 0) {
          iVar10 = *(int *)((longlong)lpTlsValue + 0x68);
          *(uint *)((longlong)lpTlsValue + 0x68) = iVar10 + 1U;
          if (*(uint *)((longlong)lpTlsValue + 0x6c) < iVar10 + 1U) {
            FUN_14061cf10(local_2d0,iVar10);
          }
        }
        else {
          iVar10 = *(int *)((longlong)lpTlsValue + 0x58);
          *(uint *)((longlong)lpTlsValue + 0x58) = iVar10 + 1U;
          plVar14 = local_2e0;
          if (*(uint *)((longlong)lpTlsValue + 0x5c) < iVar10 + 1U) {
            FUN_14061cf10(local_2e0,iVar10);
          }
        }
        FUN_14061cd18((longlong)iVar10 * 0x80 + *plVar14,local_1d8);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        FUN_144716785(local_138,uStack_130 & 0xffffffff);
        if (local_138 != 0) {
          FUN_1400020a8();
        }
        FUN_144716758(CONCAT44(uStack_144,uStack_148),uStack_140);
        if (CONCAT44(uStack_144,uStack_148) != 0) {
          FUN_1400020a8();
        }
        FUN_144716727(local_158,uStack_150);
        if (local_158 != 0) {
          FUN_1400020a8();
        }
        if (lStack_168 != 0) {
          FUN_1400020a8();
        }
        FUN_144716785(lStack_178,local_170 & 0xffffffff);
        if (lStack_178 != 0) {
          FUN_1400020a8();
        }
        FUN_144716758(lStack_188,local_180 & 0xffffffff);
        if (lStack_188 != 0) {
          FUN_1400020a8();
        }
        FUN_144716727(lStack_198,local_190 & 0xffffffff);
        lVar19 = local_2f8;
        lVar23 = local_2e8;
        if (lStack_198 != 0) {
          FUN_1400020a8();
          lVar19 = local_2f8;
          lVar23 = local_2e8;
        }
      }
      lVar16 = lVar16 + 0x68;
      param_1 = local_2b0;
    } while ((longlong)iVar22 * 0x68 - lVar16 != 0);
  }
  plVar14 = local_2b8;
  if ((longlong)*(int *)(param_1 + 0x850) != 0) {
    lVar16 = (longlong)*(int *)(param_1 + 0x850) * 0x28;
    lVar18 = *(longlong *)(param_1 + 0x848) + 0x18;
    do {
      if ((*(longlong *)(lVar18 + -0x18) == *local_2c8) &&
         (plVar24 = *(longlong **)(lVar18 + -0x10), plVar24 != (longlong *)0x0)) {
        cVar8 = (**(code **)(*plVar24 + 0x2c0))(plVar24);
        if (cVar8 == '\0') {
          iVar22 = 0;
        }
        else {
          iVar22 = *(byte *)(plVar24 + 0x12) + 1;
        }
        local_1d4 = *(undefined4 *)(lVar18 + -8);
        local_1d8[0] = (undefined1)iVar22;
        local_1b0 = 0;
        local_1ac = 0;
        local_1a8 = 0;
        uStack_1b8._0_1_ = 0;
        uStack_1b8._1_7_ = 0;
        local_1d0 = 0;
        uStack_1c8 = 0;
        local_170 = 0;
        lStack_168 = 0;
        local_180 = 0;
        lStack_178 = 0;
        local_190 = 0;
        lStack_188 = 0;
        local_1a0 = 0;
        lStack_198 = 0;
        local_160 = 0;
        local_1c0 = local_2c0[2];
        uVar17 = *(uint *)(local_1c0 + 8);
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar17);
        }
        if (uVar17 == 0) {
          iVar10 = 0;
          iVar11 = 0;
        }
        else {
          FUN_144717690(&local_1d0,uVar17);
          iVar11 = (int)uStack_1c8;
          iVar10 = uStack_1c8._4_4_;
        }
        uStack_1c8 = CONCAT44(uStack_1c8._4_4_,iVar11 + uVar17);
        if ((uint)(iVar10 - iVar11) < uVar17) {
          FUN_1406600da(&local_1d0);
        }
        if (local_2f0 != &uStack_1b8) {
          local_1b0 = 0;
          if (local_1ac < 0) {
            FUN_14480ffb8(&uStack_1b8,0);
          }
          local_1a8 = 0;
          local_1a0 = local_2f0[3];
        }
        local_c8 = &lStack_198;
        local_d8 = &local_1d0;
        local_d0 = &uStack_1b8;
        if ((*(longlong *)(param_1 + 0x140) == 0) || (plVar24[8] == 0)) {
          if (iVar22 != 0) {
            FUN_142400d60(local_1d0,uStack_1c8 & 0xffffffff);
            goto LAB_14061c06b;
          }
          FUN_1448859f0(&local_1d0,local_1c0);
LAB_14061c829:
          plVar24 = local_2d0;
          iVar22 = *(int *)((longlong)lpTlsValue + 0x68);
          *(uint *)((longlong)lpTlsValue + 0x68) = iVar22 + 1U;
          plVar14 = local_2b8;
          if (*(uint *)((longlong)lpTlsValue + 0x6c) < iVar22 + 1U) {
            FUN_14061cf10(local_2d0,iVar22);
            plVar14 = local_2b8;
          }
        }
        else {
          local_158 = 0;
          uStack_150 = uStack_150 & 0xffffff00;
          local_117 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_144 = 0;
          uStack_140 = uStack_140 & 0xffffff00;
          local_228 = 0;
          uStack_220 = uStack_220 & 0xffffffff00000000;
          local_308 = &local_d8;
          local_310 = &local_158;
          local_318 = (longlong *)((ulonglong)local_318 & 0xffffffffffffff00);
          FUN_140035312(plVar24,lVar18);
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          if (local_138 != 0) {
            FUN_1400020a8();
          }
          if (iVar22 == 0) goto LAB_14061c829;
LAB_14061c06b:
          plVar14 = local_2b8;
          plVar24 = local_2e0;
          iVar22 = *(int *)((longlong)lpTlsValue + 0x58);
          *(uint *)((longlong)lpTlsValue + 0x58) = iVar22 + 1U;
          if (*(uint *)((longlong)lpTlsValue + 0x5c) < iVar22 + 1U) {
            FUN_14061cf10(local_2e0,iVar22);
          }
        }
        FUN_14061cd18((longlong)iVar22 * 0x80 + *plVar24,local_1d8);
        if (lStack_168 != 0) {
          FUN_1400020a8();
        }
        FUN_144716785(lStack_178,local_170 & 0xffffffff);
        if (lStack_178 != 0) {
          FUN_1400020a8();
        }
        FUN_144716758(lStack_188,local_180 & 0xffffffff);
        if (lStack_188 != 0) {
          FUN_1400020a8();
        }
        FUN_144716727(lStack_198,local_190 & 0xffffffff);
        lVar19 = local_2f8;
        lVar23 = local_2e8;
        if (lStack_198 != 0) {
          FUN_1400020a8();
          lVar19 = local_2f8;
          lVar23 = local_2e8;
        }
      }
      lVar18 = lVar18 + 0x28;
      lVar16 = lVar16 + -0x28;
    } while (lVar16 != 0);
  }
  lVar18 = local_278;
  lVar16 = local_280;
  puVar4 = local_290;
  puVar3 = local_298;
  puVar2 = local_2c0;
  if (1.00001 < param_7) {
    if (0 < *(int *)((longlong)lpTlsValue + 0x58)) {
      lVar19 = 4;
      lVar23 = 0;
      do {
        *(float *)(*(longlong *)((longlong)lpTlsValue + 0x50) + lVar19) =
             *(float *)(*(longlong *)((longlong)lpTlsValue + 0x50) + lVar19) / param_7;
        lVar23 = lVar23 + 1;
        lVar19 = lVar19 + 0x80;
      } while (lVar23 < *(int *)((longlong)lpTlsValue + 0x58));
    }
    iVar22 = *(int *)((longlong)lpTlsValue + 0x68);
    lVar19 = local_2f8;
    lVar23 = local_2e8;
    if (0 < iVar22) {
      lVar13 = 4;
      lVar21 = 0;
      do {
        *(float *)(*(longlong *)((longlong)lpTlsValue + 0x60) + lVar13) =
             *(float *)(*(longlong *)((longlong)lpTlsValue + 0x60) + lVar13) / param_7;
        lVar21 = lVar21 + 1;
        iVar22 = *(int *)((longlong)lpTlsValue + 0x68);
        lVar13 = lVar13 + 0x80;
      } while (lVar21 < iVar22);
    }
  }
  else {
    iVar22 = *(int *)((longlong)lpTlsValue + 0x68);
  }
  if (iVar22 == 0) {
    if (param_4 <= 1e-05) {
      FUN_1448859f0(local_2c0,local_2c0[2]);
    }
    else {
      if (local_2c0 != local_298) {
        iVar22 = *(int *)(local_298 + 1);
        pvVar6 = (void *)*local_298;
        *(int *)(local_2c0 + 1) = iVar22;
        if (iVar22 == 0 && *(int *)((longlong)local_2c0 + 0xc) == 0) {
          *(undefined4 *)((longlong)local_2c0 + 0xc) = 0;
        }
        else {
          FUN_14470ea6a(local_2c0,iVar22);
          if (iVar22 != 0) {
            memcpy((void *)*puVar2,pvVar6,(longlong)iVar22 * 0x60);
          }
        }
      }
      puVar2[2] = puVar3[2];
      if (local_2f0 != puVar4) {
        iVar22 = *(int *)(puVar4 + 1);
        pvVar6 = (void *)*puVar4;
        *(int *)(local_2f0 + 1) = iVar22;
        if (iVar22 == 0 && *(int *)((longlong)local_2f0 + 0xc) == 0) {
          *(undefined4 *)((longlong)local_2f0 + 0xc) = 0;
        }
        else {
          FUN_14471726c(local_2f0,iVar22);
          if (iVar22 != 0) {
            memcpy((void *)*local_2f0,pvVar6,(longlong)iVar22 << 4);
          }
        }
      }
      *(undefined1 *)(local_2f0 + 2) = *(undefined1 *)(puVar4 + 2);
      local_2f0[3] = puVar4[3];
      FUN_140341952(local_2a8,local_2a0);
    }
  }
  else {
    if (1.0 <= param_4) {
      param_4 = 1.0;
    }
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    uVar17 = iVar22 + (uint)(1e-05 < param_4);
    iVar22 = *(int *)((longlong)lpTlsValue + 0x118);
    *(uint *)((longlong)lpTlsValue + 0x118) = iVar22 + uVar17;
    if ((uint)(*(int *)((longlong)lpTlsValue + 0x11c) - iVar22) < uVar17) {
      FUN_14791be16(local_278);
      lVar19 = local_2f8;
      lVar23 = local_2e8;
    }
    iVar22 = *(int *)((longlong)lpTlsValue + 200);
    *(uint *)((longlong)lpTlsValue + 200) = iVar22 + uVar17;
    if ((uint)(*(int *)((longlong)lpTlsValue + 0xcc) - iVar22) < uVar17) {
      FUN_140e79564(lVar16);
      lVar19 = local_2f8;
      lVar23 = local_2e8;
    }
    iVar22 = *(int *)((longlong)lpTlsValue + 0x168);
    *(uint *)((longlong)lpTlsValue + 0x168) = iVar22 + uVar17;
    if ((uint)(*(int *)((longlong)lpTlsValue + 0x16c) - iVar22) < uVar17) {
      FUN_14791be86();
      lVar19 = local_2f8;
      lVar23 = local_2e8;
    }
    iVar22 = *(int *)((longlong)lpTlsValue + 0x1b8);
    *(uint *)((longlong)lpTlsValue + 0x1b8) = iVar22 + uVar17;
    if ((uint)(*(int *)((longlong)lpTlsValue + 0x1bc) - iVar22) < uVar17) {
      FUN_14791bef6(lVar23);
      lVar19 = local_2f8;
      lVar23 = local_2e8;
    }
    if (0 < *(int *)((longlong)lpTlsValue + 0x68)) {
      lVar13 = 0x20;
      lVar21 = 0;
      do {
        lVar20 = *(longlong *)((longlong)lpTlsValue + 0x110);
        if (*(longlong *)((longlong)lpTlsValue + 0x110) == 0) {
          lVar20 = lVar18;
        }
        *(longlong *)(lVar20 + lVar21 * 8) =
             *(longlong *)((longlong)lpTlsValue + 0x60) + lVar13 + -0x18;
        lVar20 = *(longlong *)((longlong)lpTlsValue + 0x160);
        if (*(longlong *)((longlong)lpTlsValue + 0x160) == 0) {
          lVar20 = lVar19;
        }
        *(longlong *)(lVar20 + lVar21 * 8) = *(longlong *)((longlong)lpTlsValue + 0x60) + lVar13;
        lVar20 = *(longlong *)((longlong)lpTlsValue + 0x1b0);
        if (*(longlong *)((longlong)lpTlsValue + 0x1b0) == 0) {
          lVar20 = lVar23;
        }
        *(longlong *)(lVar20 + lVar21 * 8) =
             *(longlong *)((longlong)lpTlsValue + 0x60) + lVar13 + 0x20;
        lVar20 = *(longlong *)((longlong)lpTlsValue + 0xc0);
        if (*(longlong *)((longlong)lpTlsValue + 0xc0) == 0) {
          lVar20 = lVar16;
        }
        *(undefined4 *)(lVar20 + lVar21 * 4) =
             *(undefined4 *)(*(longlong *)((longlong)lpTlsValue + 0x60) + -0x1c + lVar13);
        lVar21 = lVar21 + 1;
        lVar13 = lVar13 + 0x80;
      } while (lVar21 < *(int *)((longlong)lpTlsValue + 0x68));
    }
    if (1e-05 < param_4) {
      lVar13 = *(longlong *)((longlong)lpTlsValue + 0x110);
      if (*(longlong *)((longlong)lpTlsValue + 0x110) == 0) {
        lVar13 = lVar18;
      }
      lVar21 = (longlong)(int)uVar17;
      *(undefined8 **)(lVar13 + -8 + lVar21 * 8) = puVar3;
      lVar13 = *(longlong *)((longlong)lpTlsValue + 0x160);
      if (*(longlong *)((longlong)lpTlsValue + 0x160) == 0) {
        lVar13 = lVar19;
      }
      *(undefined8 **)(lVar13 + -8 + lVar21 * 8) = puVar4;
      lVar13 = *(longlong *)((longlong)lpTlsValue + 0x1b0);
      if (*(longlong *)((longlong)lpTlsValue + 0x1b0) == 0) {
        lVar13 = lVar23;
      }
      *(longlong *)(lVar13 + -8 + lVar21 * 8) = local_2a0;
      lVar13 = *(longlong *)((longlong)lpTlsValue + 0xc0);
      if (*(longlong *)((longlong)lpTlsValue + 0xc0) == 0) {
        lVar13 = lVar16;
      }
      *(float *)(lVar13 + -4 + lVar21 * 4) = param_4;
    }
    local_238 = lVar16;
    if (*(longlong *)((longlong)lpTlsValue + 0xc0) != 0) {
      local_238 = *(longlong *)((longlong)lpTlsValue + 0xc0);
    }
    local_230 = *(undefined4 *)((longlong)lpTlsValue + 200);
    local_248 = lVar23;
    if (*(longlong *)((longlong)lpTlsValue + 0x1b0) != 0) {
      local_248 = *(longlong *)((longlong)lpTlsValue + 0x1b0);
    }
    local_240 = *(undefined4 *)((longlong)lpTlsValue + 0x1b8);
    local_258 = lVar19;
    if (*(longlong *)((longlong)lpTlsValue + 0x160) != 0) {
      local_258 = *(longlong *)((longlong)lpTlsValue + 0x160);
    }
    local_250 = *(undefined4 *)((longlong)lpTlsValue + 0x168);
    local_268 = lVar18;
    if (*(longlong *)((longlong)lpTlsValue + 0x110) != 0) {
      local_268 = *(longlong *)((longlong)lpTlsValue + 0x110);
    }
    local_260 = *(undefined4 *)((longlong)lpTlsValue + 0x118);
    local_318 = plVar14;
    FUN_14061cdf6();
  }
  if (0 < *(int *)((longlong)lpTlsValue + 0x58)) {
    lVar19 = 0x20;
    lVar23 = 0;
    do {
      lVar18 = *local_2e0;
      lVar16 = lVar18 + lVar19;
      cVar8 = *(char *)(lVar16 + -0x20);
      fVar1 = *(float *)(lVar16 + -0x1c);
      if (cVar8 == '\x02') {
        FUN_140035f34(*plVar14,lVar16 + -0x18,fVar1);
      }
      else {
        FUN_1400bcc9a();
      }
      if (1e-05 < fVar1) {
        FUN_144716836(plVar14[1],lVar18 + lVar19,fVar1);
      }
      FUN_140035fa4(lVar18 + lVar19 + 0x20,plVar14[2],fVar1,cVar8);
      FUN_142400cf0(*(undefined8 *)*plVar14,*(undefined4 *)((undefined8 *)*plVar14 + 1));
      lVar23 = lVar23 + 1;
      lVar19 = lVar19 + 0x80;
    } while (lVar23 < *(int *)((longlong)lpTlsValue + 0x58));
  }
LAB_14061bdf9:
  if ((local_90 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    lVar18 = lVar18 + 0x18;
    lVar16 = lVar16 + -1;
    if (lVar16 == 0) break;
LAB_14061c535:
    if (*(longlong *)(lVar18 + -8) == *local_2c8) goto LAB_14061c9b7;
  }
  lVar18 = 0;
LAB_14061c9b7:
  cVar8 = FUN_1456b2ef6(lVar18);
  local_2d8 = local_2d8 & 0xffffffff00000000;
  if (cVar8 != '\0') {
    bVar9 = FUN_1478df6d8(lVar18);
    local_2d8 = CONCAT44(local_2d8._4_4_,bVar9 + 1);
  }
  local_1d4 = *(undefined4 *)(lVar19 + 0x20);
  local_1d8[0] = (undefined1)local_2d8;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8._0_1_ = 0;
  uStack_1b8._1_7_ = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_170 = 0;
  lStack_168 = 0;
  local_180 = 0;
  lStack_178 = 0;
  local_190 = 0;
  lStack_188 = 0;
  local_1a0 = 0;
  lStack_198 = 0;
  local_160 = 0;
  FUN_144717630(&local_1d0,*(undefined8 *)(param_1 + 0x6a0));
  local_1a0 = *(longlong *)(param_1 + 0x6a0) + 0xb0;
  local_1e8 = *(undefined8 *)(lVar19 + 0x44);
  local_1e0 = *(undefined4 *)(lVar19 + 0x4c);
  cVar8 = (**(code **)(*plVar14 + 0x340))(plVar14);
  if (cVar8 == '\0') {
    bVar25 = false;
  }
  else {
    bVar25 = *(int *)(param_1 + 0x3f8) != 0;
  }
  local_d8 = (undefined8 *)(double)*(float *)(lVar19 + 0x40);
  local_d0._0_4_ = CONCAT31(local_d0._1_3_,bVar25);
  local_d0._4_4_ = (undefined4)local_1e8;
  local_c8._0_4_ = (undefined4)((ulonglong)local_1e8 >> 0x20);
  local_c8._4_4_ = local_1e0;
  local_c0 = 0;
  local_97 = '\0';
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if (((undefined1 *)(param_1 + 0x620) != &local_98) && (*(char *)(param_1 + 0x621) == '\x01')) {
    local_98 = *(undefined1 *)(param_1 + 0x620);
    local_97 = '\x01';
  }
  local_200 = &local_1d0;
  local_1f0 = &lStack_198;
  local_1f8 = (undefined1 *)&uStack_1b8;
  FUN_140cc2a2a(lVar18,&local_200);
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_210 = *(longlong *)(param_1 + 0x6a0) + 0xb0;
  (**(code **)(*plVar14 + 0x2e8))(plVar14,&local_228,*(undefined4 *)(lVar19 + 0x40));
  FUN_1449802a2(&uStack_1b8,&local_228);
  if ((int)local_2d8 == 0) {
    FUN_1479011a8(&local_158,local_1d8);
    iVar22 = *(int *)((longlong)lpTlsValue + 0x68);
    *(uint *)((longlong)lpTlsValue + 0x68) = iVar22 + 1U;
    plVar14 = local_2d0;
    if (*(uint *)((longlong)lpTlsValue + 0x6c) < iVar22 + 1U) {
      FUN_14061cf10(local_2d0,iVar22);
      plVar14 = local_2d0;
    }
  }
  else {
    FUN_1479011a8(&local_158,local_1d8);
    iVar22 = *(int *)((longlong)lpTlsValue + 0x58);
    *(uint *)((longlong)lpTlsValue + 0x58) = iVar22 + 1U;
    plVar14 = local_2e0;
    if (*(uint *)((longlong)lpTlsValue + 0x5c) < iVar22 + 1U) {
      FUN_14061cf10(local_2e0,iVar22);
      plVar14 = local_2e0;
    }
  }
  FUN_1479011a8((longlong)iVar22 * 0x80 + *plVar14,&local_158);
  FUN_1447166b4(&local_118);
  if (local_97 == '\x01') {
    local_97 = '\0';
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447166b4(&lStack_198);
LAB_14061c559:
  lVar19 = lVar19 + 0x58;
  if (lVar19 == lVar23) goto LAB_14061b85b;
  goto LAB_14061c4de;
}



// FUNCTION 14061cc94 FUN_14061cc94 body=132 status=ok
// SIG undefined FUN_14061cc94(void)

void FUN_14061cc94(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar1[6] != 0) {
        FUN_1400020a8();
      }
      FUN_144716785(plVar1[4],(int)plVar1[5]);
      if (plVar1[4] != 0) {
        FUN_1400020a8();
      }
      FUN_144716758(plVar1[2],(int)plVar1[3]);
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14061cd18 FUN_14061cd18 body=222 status=ok
// SIG undefined FUN_14061cd18(void)

undefined8 * FUN_14061cd18(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14470ea6a(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[3] = param_2[3];
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_14471726c(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 4);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  FUN_14074e50c(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 14061cdf6 FUN_14061cdf6 body=281 status=ok
// SIG undefined FUN_14061cdf6(void)

void FUN_14061cdf6(longlong *param_1,undefined4 *param_2,undefined4 *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined8 *)*param_5;
  lVar2 = param_5[1];
  lVar3 = param_5[2];
  FUN_142255df0(**(undefined8 **)*param_1,*puVar1,*(undefined4 *)*param_4,
                *(undefined4 *)(*(undefined8 **)*param_1 + 1));
  if (1 < (int)param_1[1]) {
    lVar5 = 1;
    do {
      puVar4 = *(undefined8 **)(*param_1 + lVar5 * 8);
      FUN_142255d50(*puVar4,*puVar1,*(undefined4 *)(*param_4 + lVar5 * 4),
                    *(undefined4 *)(puVar4 + 1));
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
    if (1 < (int)param_1[1]) {
      FUN_142400cf0(*puVar1,*(undefined4 *)(puVar1 + 1));
    }
  }
  if (0 < (int)param_2[2]) {
    local_58 = *param_4;
    lStack_50 = param_4[1];
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    FUN_1417b3a00(&local_68,&local_58,lVar2);
  }
  if (0 < (int)param_3[2]) {
    local_78 = *param_4;
    lStack_70 = param_4[1];
    local_88 = *param_3;
    uStack_84 = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    FUN_1433ea9e8(&local_88,&local_78,lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061cf10 FUN_14061cf10 body=255 status=ok
// SIG undefined FUN_14061cf10(void)

void FUN_14061cf10(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14061d010 FUN_14061d010 body=102 status=ok
// SIG undefined FUN_14061d010(void)

void FUN_14061d010(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14061d078();
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



// FUNCTION 14061d078 FUN_14061d078 body=228 status=ok
// SIG undefined FUN_14061d078(void)

longlong FUN_14061d078(void)

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
  if (DAT_14cb6e310 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1487944dd;
    local_40 = &LAB_140e003a1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6e0;
    FUN_14081cfa3(L"/Script/GbxGame",L"PerchComponent",&DAT_14cb6e310,&DAT_1487944dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6e310;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061d15e FUN_14061d15e body=73 status=ok
// SIG undefined FUN_14061d15e(void)

undefined8 FUN_14061d15e(longlong param_1,undefined4 *param_2)

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
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061d1a8 FUN_14061d1a8 body=191 status=ok
// SIG undefined FUN_14061d1a8(void)

void FUN_14061d1a8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_2[1] != 0) {
    lVar3 = *param_2;
    lVar4 = (longlong)(int)param_2[1] * 0x14;
    do {
      lVar1 = FUN_14061d268(param_1,lVar3,&local_4c);
      if (lVar1 != 0) {
        lVar2 = (longlong)local_4c;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb18));
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xa08) + lVar2 * 8);
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb18));
        if (lVar2 != 0) {
          FUN_140021284(lVar2);
        }
      }
      lVar3 = lVar3 + 0x14;
      lVar4 = lVar4 + -0x14;
    } while (lVar4 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061d268 FUN_14061d268 body=600 status=ok
// SIG undefined FUN_14061d268(void)

ulonglong FUN_14061d268(longlong param_1,undefined8 param_2,int *param_3)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x58));
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    uVar13 = 1;
    uVar10 = 0;
    iVar3 = 0;
    iVar11 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x18);
    }
    uVar9 = *puVar5;
    if (uVar9 == 0) {
      iVar3 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar3 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar15;
      }
      uVar10 = 0;
      iVar11 = 0;
      do {
        if (uVar13 == uVar10) goto LAB_14061d458;
        iVar11 = iVar11 + 0x20;
        uVar9 = puVar5[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar15 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar3 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 != iVar1) {
    uVar9 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar3 * 0x20);
      SRWLock = (PSRWLOCK)(lVar12 + 0x78);
      AcquireSRWLockShared(SRWLock);
      iVar3 = *(int *)(lVar12 + 0x88);
      if ((longlong)iVar3 != 0) {
        lVar12 = *(longlong *)(lVar12 + 0x80);
        lVar14 = 0;
        do {
          plVar2 = (longlong *)**(undefined8 **)(lVar12 + lVar14);
          iVar4 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2);
          if (iVar4 != -1) {
            *param_3 = iVar4;
            uVar15 = *(ulonglong *)(lVar12 + lVar14);
            ReleaseSRWLockShared(SRWLock);
            if (uVar15 == 0) goto LAB_14061d395;
            goto LAB_14061d458;
          }
          lVar14 = lVar14 + 8;
        } while ((longlong)iVar3 * 8 != lVar14);
      }
      ReleaseSRWLockShared(SRWLock);
LAB_14061d395:
      uVar9 = uVar9 & ~(uint)uVar13;
      puVar5 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x18);
      }
      iVar4 = *(int *)(param_1 + 0x30);
      iVar3 = (int)uVar10;
      lVar12 = (longlong)iVar3;
      uVar8 = puVar5[lVar12] & uVar9;
      if (uVar8 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar3 < iVar6) {
          lVar14 = 0;
          do {
            uVar8 = puVar5[lVar12 + lVar14 + 1];
            if (uVar8 != 0) {
              uVar10 = (ulonglong)(iVar3 + (int)lVar14 + 1);
              uVar9 = 0xffffffff;
              goto LAB_14061d404;
            }
            iVar11 = iVar11 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar7 - lVar12 != lVar14);
          uVar9 = 0xffffffff;
          iVar3 = iVar7;
        }
        uVar10 = (ulonglong)(iVar3 + 1);
        iVar3 = iVar4;
      }
      else {
LAB_14061d404:
        uVar13 = (ulonglong)(-uVar8 & uVar8);
        uVar15 = uVar13 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar3 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar3) {
          iVar3 = iVar4;
        }
      }
    } while (iVar3 != iVar1);
  }
  uVar15 = 0;
LAB_14061d458:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x58));
  return uVar15;
}



// FUNCTION 14061d4c0 FUN_14061d4c0 body=126 status=ok
// SIG undefined FUN_14061d4c0(void)

void FUN_14061d4c0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(int *)(param_1 + 0x374) != *(int *)(*(longlong *)(param_1 + 0x228) + 0x5674)) ||
     (*(longlong *)(param_1 + 0x220) == 0)) {
    local_18 = (undefined8 *)0x0;
    FUN_14061d540(param_1,param_2,&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061d540 FUN_14061d540 body=1885 status=ok
// SIG undefined FUN_14061d540(void)

void FUN_14061d540(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x228) + 0x3558);
  uVar14 = 1;
  if (1 < (int)uVar4) {
    uVar14 = (ulonglong)uVar4;
  }
  plVar9 = (longlong *)(param_2 + 0x70);
  lVar15 = uVar14 * 0xa0;
  uVar17 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar5 = uVar17 + lVar15;
  local_90 = plVar9;
  if (*(ulonglong *)(param_2 + 0x78) < uVar5) {
    FUN_140023dd8(plVar9,(uint)lVar15 | 0x10);
    uVar17 = *plVar9 + 0xfU & 0xfffffffffffffff0;
    uVar5 = uVar17 + lVar15;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar5;
  local_70 = CONCAT44(local_70._4_4_,(int)uVar14);
  bVar2 = *(byte *)(param_2 + 0x520);
  local_80 = param_1;
  uStack_78 = uVar17;
  if ((bVar2 == 0) && ((*param_3 == 0 || ((*(byte *)(*param_3 + 0xa0) & 1) != 0)))) {
    FUN_142c4eec0(&local_80);
  }
  else {
    plVar9 = TlsGetValue(DAT_14c896140);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
      *plVar9 = 0;
      plVar9[1] = 0;
      *(undefined4 *)(plVar9 + 2) = 0;
      TlsSetValue(DAT_14c896140,plVar9);
    }
    plVar16 = (longlong *)plVar9[1];
    if (plVar16 == (longlong *)0x0) {
      plVar16 = (longlong *)*plVar9;
      if (plVar16 == (longlong *)0x0) {
        uVar4 = (uint)DAT_14c896180;
        local_88 = lVar15;
        uVar14 = DAT_14c896180;
        while (DAT_14c896180 = uVar14, local_68 = uVar14, (uVar14 & 0x3ffffff) != 0) {
          local_98 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
          if (local_98 >> 0x1a < uVar14 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar5 = (ulonglong)((uVar4 & 0x3ffffff) >> 0xe);
          uVar18 = (ulonglong)((uint)uVar14 & 0x3fff);
          local_98 = local_98 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 0x10 + uVar18 * 0x18);
          LOCK();
          bVar19 = local_68 == DAT_14c896180;
          uVar14 = local_98;
          if (!bVar19) {
            uVar14 = DAT_14c896180;
          }
          DAT_14c896180 = uVar14;
          UNLOCK();
          if (bVar19) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + uVar18 * 0x18 + 0x10) = 0;
            plVar16 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 +
                       (ulonglong)(uVar4 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar4 & 0x3ffffff);
            plVar9[1] = (longlong)plVar16;
            lVar15 = local_88;
            if (plVar16 == (longlong *)0x0) goto LAB_14061d79e;
            goto LAB_14061d7db;
          }
          uVar4 = (uint)DAT_14c896180;
          uVar14 = DAT_14c896180;
        }
        plVar9[1] = 0;
LAB_14061d79e:
        lVar15 = local_88;
        puVar6 = (undefined8 *)FUN_14001cc68(0x10000,0);
        plVar9[1] = (longlong)puVar6;
        iVar10 = 0xff;
        do {
          puVar7 = puVar6 + 0x20;
          *puVar6 = puVar7;
          iVar10 = iVar10 + -1;
          puVar6 = puVar7;
        } while (iVar10 != 0);
        *puVar7 = 0;
        plVar16 = (longlong *)plVar9[1];
      }
      else {
        plVar9[1] = (longlong)plVar16;
        *plVar9 = 0;
      }
LAB_14061d7db:
      *(undefined4 *)(plVar9 + 2) = 0x100;
      iVar10 = 0x100;
    }
    else {
      iVar10 = (int)plVar9[2];
    }
    plVar9[1] = *plVar16;
    *(int *)(plVar9 + 2) = iVar10 + -1;
    *plVar16 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar16[1] = (longlong)&DAT_100000002;
    plVar16[2] = 0;
    *(undefined4 *)(plVar16 + 3) = 0;
    *(undefined4 *)(plVar16 + 4) = 0xffffffff;
    plVar16[6] = 0;
    plVar16[7] = 0x100000000;
    *(undefined1 *)(plVar16 + 8) = 1;
    plVar16[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar16[0xf] = 0;
    plVar16[0x10] = -0x17ffffffffffffe0;
    plVar16[0x12] = 0;
    plVar16[0x13] = 0x100000000;
    *(undefined2 *)(plVar16 + 0x14) = 0;
    LOCK();
    bVar19 = (char)plVar16[8] == '\x01';
    if (bVar19) {
      *(char *)(plVar16 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_14008cdb0(plVar16 + 8);
    }
    *plVar16 = (longlong)&PTR_FUN_14a2221f0;
    if (*(code **)(plVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar16[0xe] + 0x18))(plVar16 + 0xe,plVar16 + 9);
    }
    plVar16[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar16[9] = (longlong)plVar16;
    plVar16[10] = (longlong)plVar16;
    lVar8 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x30);
    }
    plVar16[0xf] = lVar8;
    plVar16[0x10] = -0x37ffffad77750000;
    *(uint *)((longlong)plVar16 + 0x1c) = bVar2 ^ 1;
    *(undefined4 *)(plVar16 + 0x15) = (undefined4)local_80;
    *(undefined4 *)((longlong)plVar16 + 0xac) = local_80._4_4_;
    *(undefined4 *)(plVar16 + 0x16) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)plVar16 + 0xb4) = uStack_78._4_4_;
    plVar16[0x17] = local_70;
    *plVar16 = (longlong)&PTR_FUN_14a2221e0;
    FUN_1400e88c2(plVar16,param_3);
    local_68 = CONCAT71(local_68._1_7_,1);
    FUN_1447439e4(plVar16);
    if (plVar16 != (longlong *)0x0) {
      iVar10 = *(int *)(param_2 + 0x508);
      *(uint *)(param_2 + 0x508) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x50c) < iVar10 + 1U) {
        FUN_1401d03aa((longlong *)(param_2 + 0x500),iVar10);
      }
      *(longlong **)(*(longlong *)(param_2 + 0x500) + (longlong)iVar10 * 8) = plVar16;
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar16 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar16)(plVar16,1);
      }
    }
  }
  plVar9 = local_90;
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x228) + 0x3558);
  iVar11 = 0x100;
  if (0x100 < iVar10) {
    iVar11 = iVar10;
  }
  uVar14 = (ulonglong)(iVar11 - 1) * 2 + 1;
  lVar8 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  uVar4 = 1 << ((byte)lVar8 & 0x1f);
  lVar13 = *(longlong *)(param_1 + 0x220);
  plVar16 = (longlong *)(param_1 + 0x220);
  if (lVar13 != 0) {
    uVar12 = *(int *)(lVar13 + 0x14) * *(int *)(lVar13 + 0x10);
    if (*(ulonglong *)(lVar13 + 0x90) < (ulonglong)uVar12) {
      uVar12 = (uint)*(ulonglong *)(lVar13 + 0x90);
    }
    if (0xa0 << ((byte)lVar8 & 0x1f) == uVar12) {
      uVar14 = FUN_144735dd8(param_2,plVar16,0);
      goto LAB_14061db45;
    }
  }
  uVar12 = 0xa0;
  if (DAT_14ca84e48 < 0xa0) {
    uVar12 = DAT_14ca84e48;
  }
  uStack_78 = CONCAT44(uStack_78._4_4_,0x10109);
  uVar3 = DAT_14ca84e48;
  if (uVar4 < DAT_14ca84e48) {
    uVar3 = uVar4;
  }
  local_70 = 0;
  local_80 = CONCAT44(uVar3 + (uVar3 == 0),uVar12 + (uVar12 == 0));
  uVar14 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar5 = uVar14 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar5) {
    FUN_140023dd8(local_90,0x160);
    uVar14 = *plVar9 + 0xfU & 0xfffffffffffffff0;
    uVar5 = uVar14 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar5;
  FUN_1456bd266(uVar14,L"GPUScene.LightData",&local_80,0);
  iVar10 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar10 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar10 + 1U) {
    FUN_144737178(param_2 + 0x188,iVar10);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar10 * 8) = uVar14;
  *(int *)(uVar14 + 0x7c) = *(int *)(param_2 + 400) + -1;
  plVar9 = (longlong *)FUN_1449609de(param_2);
  puVar6 = (undefined8 *)*plVar9;
  puVar7 = (undefined8 *)*plVar16;
  if (puVar7 != puVar6) {
    *plVar16 = (longlong)puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar7 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar7)();
      }
    }
  }
LAB_14061db45:
  iVar10 = *(int *)(param_2 + 0x590);
  uVar4 = iVar10 + 1;
  *(uint *)(param_2 + 0x590) = uVar4;
  if (*(uint *)(param_2 + 0x594) < uVar4) {
    FUN_144775ac8((longlong *)(param_2 + 0x588));
  }
  lVar8 = *(longlong *)(param_2 + 0x588);
  lVar13 = (longlong)iVar10 * 0x120;
  *(undefined2 *)(lVar8 + lVar13) = 0;
  *(ulonglong *)(lVar8 + 8 + lVar13) = uVar14;
  *(ulonglong *)(lVar8 + 0x10 + lVar13) = uVar17;
  *(longlong *)(lVar8 + 0x18 + lVar13) = lVar15;
  *(undefined8 *)(lVar8 + 0x20 + lVar13) = 0;
  *(undefined8 *)(lVar8 + 0x30 + lVar13) = 0;
  *(undefined8 *)(lVar8 + 0x60 + lVar13) = 0;
  *(undefined8 *)(lVar8 + 0x70 + lVar13) = 0;
  *(undefined8 *)(lVar8 + 0xa0 + lVar13) = 0;
  *(undefined8 *)(lVar8 + 0xb0 + lVar13) = 0;
  *(undefined8 *)(lVar8 + 0xe0 + lVar13) = 0;
  *(undefined8 *)(lVar8 + 0xf0 + lVar13) = 0;
  *(byte *)(uVar14 + 0x24) = *(byte *)(uVar14 + 0x24) | 0x80;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061dc9e FUN_14061dc9e body=463 status=ok
// SIG undefined FUN_14061dc9e(void)

undefined4 FUN_14061dc9e(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *_Str;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  undefined2 local_c8 [64];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
    if ((longlong)(int)param_2 == param_2) {
      local_e8 = (wchar_t *)0x0;
      uStack_e0 = 0;
      lVar5 = 0xf;
      lVar2 = 0x1000000000;
      iVar4 = 0x10;
      uVar7 = param_2 & 0xffffffff;
      do {
        lVar2 = lVar2 + -0x100000000;
        iVar6 = (int)uVar7;
        uVar7 = (ulonglong)(uint)(iVar6 / 10);
        local_c8[lVar5] = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar6 % 10) * 2);
        lVar5 = lVar5 + -1;
        iVar4 = iVar4 + -1;
      } while (0x12 < iVar6 + 9U);
      if ((longlong)param_2 < 0) {
        iVar4 = (int)lVar5;
        lVar2 = (longlong)iVar4;
        local_c8[lVar2] = 0x2d;
      }
      else {
        lVar2 = lVar2 >> 0x20;
      }
      FUN_1400020e8(&local_e8,local_c8 + lVar2,0x10 - iVar4);
    }
    else {
      local_d0 = param_2;
      FUN_14709cff6(&local_d0,&local_e8);
    }
    _Str = local_e8;
    if ((int)uStack_e0 == 0) {
      _Str = L"";
    }
    local_48 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1449b853c(local_c8,_Str,sVar3 & 0xffffffff,1);
    }
    uVar1 = FUN_140126aca(param_1,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14061de74 FUN_14061de74 body=2585 status=ok
// SIG undefined FUN_14061de74(void)

void FUN_14061de74(longlong *param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  double *pdVar15;
  longlong *plVar16;
  double *pdVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  code *local_d0 [3];
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_3 == 3) && (cVar7 = FUN_14365031a(param_1), cVar7 == '\0')) {
    if (param_1[0xa1] != 0) {
      FUN_14364ec82(param_1,param_2,1);
    }
    param_1[0xc4] = DAT_14c846508;
    uVar6 = DAT_14c846500._4_4_;
    uVar5 = (undefined4)DAT_14c846500;
    uVar10 = DAT_14c8464f8._4_4_;
    *(undefined4 *)(param_1 + 0xc2) = (undefined4)DAT_14c8464f8;
    *(undefined4 *)((longlong)param_1 + 0x614) = uVar10;
    *(undefined4 *)(param_1 + 0xc3) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x61c) = uVar6;
    if ((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_148);
    }
    goto LAB_14061e670;
  }
  if ((param_1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar9 = FUN_14487fd02(param_1);
  if ((*(byte *)(param_1 + 0x84) & 2) == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = (**(code **)(*param_1 + 0x6c8))(param_1);
  }
  if (((cVar7 == '\0') && (iVar9 != 3)) && ((char)param_1[0xd] == '\x02')) {
    plVar13 = (longlong *)param_1[0x7a];
    if ((((plVar13 != (longlong *)0x0) && ((*(uint *)(plVar13 + 1) >> 0x1e & 1) == 0)) &&
        ((char)plVar13[0xd] == '\x02')) &&
       (((*(byte *)(plVar13 + 0xc) & 0x10) != 0 &&
        (lVar11 = (**(code **)(*plVar13 + 0x638))(), lVar11 != 0)))) {
      uVar12 = FUN_1406f6b90();
      plVar13 = (longlong *)FUN_144718840(lVar11,uVar12);
      if ((((plVar13 != (longlong *)0x0) &&
           ((*(longlong *)(lVar11 + 0x110) != 0 &&
            ((*(uint *)(*(longlong *)(lVar11 + 0x110) + 8) >> 0x1e & 1) == 0)))) &&
          (cVar7 = (**(code **)(*plVar13 + 0x40))(plVar13), cVar7 != '\0')) &&
         (plVar14 = (longlong *)(**(code **)(*plVar13 + 0x30))(plVar13), plVar14 != (longlong *)0x0)
         ) {
        lVar11 = FUN_1447210f0(param_1);
        fVar21 = *(float *)(plVar14 + 1);
        fVar22 = (float)*(double *)(lVar11 + 0x6d0);
        if ((fVar21 != 0.0) || (NAN(fVar21))) {
          fVar1 = *(float *)(param_1[0x7a] + 0x74);
          if (DAT_14cac0fa8 == (longlong *)0x0) {
            local_f0 = local_d0;
            local_d0[0] = FUN_141030f22;
            local_e0 = FUN_14081d0ea;
            local_e8 = &LAB_141117124;
            local_f8 = &LAB_14786c867;
            local_100 = &LAB_145abcadb;
            local_108 = L"Game";
            local_110 = 0;
            local_118 = 0x10000004;
            local_120 = 8;
            local_128 = 0x438;
            FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
          }
          plVar16 = DAT_14cac0fa8;
          lVar18 = DAT_14cac0fa8[0x22];
          if (lVar18 == 0) {
            (**(code **)(*DAT_14cac0fa8 + 1000))(DAT_14cac0fa8);
            lVar18 = plVar16[0x22];
          }
          fVar23 = *(float *)(lVar18 + 0x3e0);
          fVar24 = *(float *)(lVar18 + 0x3e4);
          bVar3 = *(byte *)((longlong)plVar14 + 0x14);
          *(byte *)((longlong)plVar14 + 0x14) = bVar3 & 0xfd;
          if ((bVar3 & 1) != 0) {
            if (*(float *)(plVar14 + 1) < *(float *)(plVar14 + 2) ||
                *(float *)(plVar14 + 1) == *(float *)(plVar14 + 2)) {
              if (5.0 <= fVar24) {
                fVar24 = 5.0;
              }
              fVar20 = *(float *)((longlong)plVar14 + 0xc);
              fVar2 = *(float *)(param_1[0x7a] + 0x74);
              fVar19 = (float)FUN_144916004();
              if (fVar19 * fVar24 < (fVar22 - fVar20) * fVar2) {
                *(byte *)((longlong)plVar14 + 0x14) = *(byte *)((longlong)plVar14 + 0x14) | 2;
              }
            }
            else {
              (**(code **)(*plVar14 + 8))(plVar14);
            }
          }
          fVar20 = (float)*(double *)(lVar11 + 0x6e0);
          fVar24 = *(float *)(param_1 + 0xf9);
          if (((fVar24 == 0.0) && (!NAN(fVar24))) ||
             (fVar20 - fVar24 < *(float *)(lVar18 + 1000) ||
              fVar20 - fVar24 == *(float *)(lVar18 + 1000))) {
            bVar4 = *(float *)(lVar18 + 0x3ec) <= fVar20 - *(float *)((longlong)param_1 + 0x7cc);
          }
          else {
            *(float *)((longlong)param_1 + 0x7cc) = fVar20;
            bVar4 = false;
          }
          *(float *)(param_1 + 0xf9) = fVar20;
          fVar24 = ((float)param_2 + 0.06) * *(float *)(param_1[0x7a] + 0x74);
          fVar20 = (float)FUN_144916004();
          if ((bVar4) && (0.0 < fVar23)) {
            fVar23 = fVar23 * fVar20;
            if (fVar24 <= fVar23) {
              fVar24 = fVar23;
            }
            if (((fVar24 < (fVar22 - fVar21) * fVar1) &&
                (plVar16 = (longlong *)FUN_140849bbe(param_1[0x7a]),
                (*(byte *)((longlong)plVar14 + 0x14) & 6) != 2)) &&
               ((plVar16 == (longlong *)0x0 ||
                (cVar7 = (**(code **)(*plVar16 + 0x480))(plVar16,0), cVar7 == '\0')))) {
              cVar7 = (**(code **)(*plVar13 + 0x18))(plVar13);
              cVar8 = (**(code **)(*plVar13 + 0x40))(plVar13);
              if ((cVar8 != '\0') &&
                 (lVar11 = (**(code **)(*plVar13 + 0x30))(plVar13), cVar7 == '\x01' && lVar11 != 0))
              {
                *(float *)(lVar11 + 0x10) = fVar22;
                if ((*(byte *)(lVar11 + 0x14) & 1) == 0) {
                  *(undefined4 *)(lVar11 + 0xc) = *(undefined4 *)(lVar11 + 8);
                  *(byte *)(lVar11 + 0x14) = *(byte *)(lVar11 + 0x14) | 1;
                }
                *(float *)(lVar11 + 8) = fVar22;
              }
            }
          }
        }
        else {
          *(float *)(plVar14 + 1) = fVar22;
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    if (((param_1[0x89] != 0) && (plVar13 = (longlong *)FUN_14024ef60(), plVar13 != (longlong *)0x0)
        ) && (plVar13 != (longlong *)param_1[0x7a])) {
      (**(code **)(*plVar13 + 0x710))(plVar13,local_d0);
      FUN_147ca1f90(param_1,local_d0);
    }
LAB_14061e4ed:
    if (param_1 != (longlong *)0x0) goto LAB_14061e4f2;
  }
  else {
    if (*(byte *)(param_1 + 0x2f) < 2) goto LAB_14061e4ed;
    if (param_1[0xa1] == 0) {
      lVar11 = param_1[0x86];
      if (lVar11 == 0) {
LAB_14061e100:
        (**(code **)(*param_1 + 0xea8))(param_1);
      }
      else if (DAT_14cae9568 == 0) {
        local_f0 = local_d0;
        local_d0[0] = FUN_1417de738;
        local_e0 = (code *)&LAB_145893408;
        local_e8 = &LAB_1458cbbd2;
        local_f8 = &LAB_147ba21f1;
        local_100 = &LAB_1463e9233;
        local_108 = L"Engine";
        local_110 = 0;
        local_118 = 0x1000000c;
        local_120 = 8;
        local_128 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar11 = param_1[0x86];
        if (lVar11 != 0) goto LAB_14061e0db;
      }
      else {
LAB_14061e0db:
        if (((DAT_14cae9568 != 0) && (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 != 0)) &&
           ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar11 + 0x38) &&
            (*(longlong *)
              (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
             DAT_14cae9568 + 0x30)))) goto LAB_14061e100;
      }
      if (param_1[0xa1] != 0) goto LAB_14061e116;
    }
    else {
LAB_14061e116:
      (**(code **)(*param_1 + 0xb48))(param_1);
    }
    if ((param_1 == (longlong *)0x0) || ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0))
    goto LAB_14061e670;
    if (param_1[0x89] != 0) {
      lVar11 = FUN_14024ef60();
      if ((lVar11 != 0) && (lVar11 != param_1[0x7a])) {
        (**(code **)(*param_1 + 0xd38))(param_1,lVar11,param_2);
      }
      if ((((cVar7 == '\x01' && iVar9 == 3) && ((longlong *)param_1[0x7a] != (longlong *)0x0)) &&
          (((&DAT_00002e59)[param_1[0x89]] & 1) != 0)) &&
         ((plVar13 = (longlong *)(**(code **)(*(longlong *)param_1[0x7a] + 0x638))(),
          plVar13 != (longlong *)0x0 &&
          (cVar7 = (**(code **)(*plVar13 + 0x5a8))(plVar13), cVar7 == '\0')))) {
        lVar11 = plVar13[0x3b];
        pdVar15 = &DAT_14c8464f0;
        if (lVar11 != 0) {
          pdVar15 = (double *)(lVar11 + 0x400);
        }
        pdVar17 = &DAT_14c8464e0;
        if (lVar11 != 0) {
          pdVar17 = (double *)(lVar11 + 0x3f0);
        }
        if ((*pdVar17 == DAT_14c8464e0) && (!NAN(*pdVar17) && !NAN(DAT_14c8464e0))) {
          pdVar17 = &DAT_14c8464e8;
          if (lVar11 != 0) {
            pdVar17 = (double *)(lVar11 + 0x3f8);
          }
          if ((*pdVar17 == DAT_14c8464e8) && (!NAN(*pdVar17) && !NAN(DAT_14c8464e8))) {
            if ((*pdVar15 == DAT_14c8464f0) && (!NAN(*pdVar15) && !NAN(DAT_14c8464f0))) {
              if (((double)plVar13[0x25] == DAT_14c8464e0) &&
                 (!NAN((double)plVar13[0x25]) && !NAN(DAT_14c8464e0))) {
                if (((double)plVar13[0x26] == DAT_14c8464e8) &&
                   (!NAN((double)plVar13[0x26]) && !NAN(DAT_14c8464e8))) {
                  if (((double)plVar13[0x27] == DAT_14c8464f0) &&
                     (!NAN((double)plVar13[0x27]) && !NAN(DAT_14c8464f0))) goto LAB_14061e4f2;
                }
              }
            }
          }
        }
        *(uint *)(param_1[0x89] + 0x2e58) = *(uint *)(param_1[0x89] + 0x2e58) | 0x400;
      }
    }
LAB_14061e4f2:
    if ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) {
      (**(code **)(*param_1 + 0x458))(param_1);
    }
  }
  param_1[0xc4] = DAT_14c846508;
  uVar6 = DAT_14c846500._4_4_;
  uVar5 = (undefined4)DAT_14c846500;
  uVar10 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0xc2) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x614) = uVar10;
  *(undefined4 *)(param_1 + 0xc3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x61c) = uVar6;
  if (iVar9 == 3) {
    if (DAT_14caf84d0 == (longlong *)0x0) {
      local_f0 = local_d0;
      local_d0[0] = FUN_1449e2820;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_145a62952;
      local_f8 = &LAB_147c8cd45;
      local_100 = &LAB_1461468ae;
      local_108 = L"Engine";
      local_110 = 0;
      local_118 = 0x10000006;
      local_120 = 8;
      local_128 = 0x218;
      FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
    }
    plVar13 = DAT_14caf84d0;
    lVar11 = DAT_14caf84d0[0x22];
    if (lVar11 == 0) {
      (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
      lVar11 = plVar13[0x22];
    }
    if (((((*(char *)(lVar11 + 0xf0) == '\x01') && ((char)param_1[0x2f] == '\x02')) &&
         ((lVar11 = FUN_1447210f0(param_1), lVar11 != 0 &&
          ((*(longlong *)(lVar11 + 0x260) != 0 &&
           (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x260) + 0x38), lVar11 != 0)))))) &&
        (DAT_14c993850 == 0)) && ((0.0 <= *(double *)(lVar11 + 0x228) && (DAT_14c75f150 != 0)))) {
      fVar21 = (float)param_2 + *(float *)(param_1 + 0x127);
      *(float *)(param_1 + 0x127) = fVar21;
      if ((0 < DAT_14c7618e4) && ((float)DAT_14c7618e4 / 1000.0 <= fVar21)) {
        *(undefined4 *)(param_1 + 0x127) = 0;
        FUN_140a175ae(param_1,&local_b8,0);
        uVar10 = 0xffffffff;
        if (*(char *)((longlong)param_1 + 0x934) != '\0') {
          uVar10 = local_b8;
        }
        local_d0[0] = (code *)CONCAT44(uStack_b4,uVar10);
        local_b8 = uVar10;
        uVar12 = FUN_14477b072(param_1,DAT_14caf9b20);
        (**(code **)(*param_1 + 0x248))(param_1,uVar12,local_d0);
      }
    }
  }
LAB_14061e670:
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14061e8e1 FUN_14061e8e1 body=313 status=ok
// SIG undefined FUN_14061e8e1(void)

void FUN_14061e8e1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14061ea1a(puVar1);
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined1 *)((longlong)puVar1 + 0xb4) = 0;
  *puVar1 = &PTR_FUN_14a7c5450;
  puVar1[5] = &PTR_FUN_14a7c5840;
  puVar1[6] = &PTR_FUN_14a7c5880;
  puVar1[7] = &PTR_FUN_14a7c58b0;
  puVar1[0x29] = 0;
  memset(puVar1 + 0x17,0,0x8c);
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x177) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x17c) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x17e) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x17f) = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0x10000001e;
  puVar1[0x39] = 0;
  *(undefined4 *)(puVar1 + 0x3a) = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x1dc) = 0;
  puVar1[0x3d] = 0;
  *(undefined4 *)(puVar1 + 0x3e) = 0;
  *(undefined4 *)(puVar1 + 0x3f) = 0xbf800000;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0x3ff0000000000000;
  *(undefined4 *)(puVar1 + 0x42) = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0x3f800000;
  return;
}



// FUNCTION 14061ea1a FUN_14061ea1a body=157 status=ok
// SIG undefined FUN_14061ea1a(void)

undefined8 * FUN_14061ea1a(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a7942e0;
  param_1[5] = &PTR_FUN_14a7945b0;
  param_1[6] = &PTR_FUN_14a7945f0;
  param_1[7] = &PTR_FUN_14a794620;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 14061eab8 FUN_14061eab8 body=126 status=ok
// SIG undefined FUN_14061eab8(void)

undefined8 FUN_14061eab8(longlong *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  char cVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  
  puVar4 = &DAT_14ca85550;
  if ((param_1[0x16] != 0) && (lVar2 = *(longlong *)(param_1[0x16] + 0x218), lVar2 != 0)) {
    puVar4 = (undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(lVar2 + 8) * 2);
  }
  uVar1 = *puVar4;
  cVar3 = FUN_144937519();
  if ((cVar3 != '\0') && (DAT_14c76143c != 0)) {
    cVar3 = FUN_14479fe53(uVar1,1,1);
    if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014061eb26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*param_1 + 0xa88))(param_1);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 14061eb36 FUN_14061eb36 body=34 status=ok
// SIG undefined FUN_14061eb36(void)

bool FUN_14061eb36(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0xa80))();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < *(int *)(lVar2 + 0x70);
  }
  return bVar1;
}



// FUNCTION 14061eb58 FUN_14061eb58 body=226 status=ok
// SIG undefined FUN_14061eb58(void)

undefined8 FUN_14061eb58(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_14061ec02;
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
LAB_14061ebd3:
    bVar1 = DAT_14c950c29 & plVar3 != (longlong *)0x0;
joined_r0x00014061ec27:
    if (bVar1 != 0) {
      FUN_1456cec3c(plVar3);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_14061ec02:
    FUN_1456cec3c(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x658);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x660);
      goto LAB_14061ebd3;
    }
    bVar1 = DAT_14c950c29 & 1;
    goto joined_r0x00014061ec27;
  }
  lVar2 = (**(code **)(*plVar3 + 0x388))(plVar3);
  if (lVar2 == 0) {
    return 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) == 0) goto LAB_14061eba0;
  }
  else if (DAT_14c950c29 != 1) goto LAB_14061eba0;
  FUN_1456cec3c(plVar3);
LAB_14061eba0:
  lVar2 = (**(code **)(*plVar3 + 0x388))(plVar3);
  return *(undefined8 *)(lVar2 + 0x10);
}



// FUNCTION 14061ec3a FUN_14061ec3a body=416 status=ok
// SIG undefined FUN_14061ec3a(void)

double * FUN_14061ec3a(longlong param_1,double *param_2,longlong param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
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
  undefined8 local_88;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    dVar3 = *(double *)(param_3 + 0x28);
    dVar2 = *(double *)(param_3 + 0x30);
    *param_2 = *(double *)(param_3 + 0x20);
    param_2[1] = dVar3;
    param_2[2] = dVar2;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
    *(undefined4 *)(param_2 + 4) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
    param_2[5] = DAT_14c8464f0;
    param_2[6] = 0.0;
    goto LAB_14061ed69;
  }
  local_88 = *(undefined8 *)(lVar1 + 0x230);
  local_b8 = *(undefined4 *)(lVar1 + 0x200);
  uStack_b4 = *(undefined4 *)(lVar1 + 0x204);
  uStack_b0 = *(undefined4 *)(lVar1 + 0x208);
  uStack_ac = *(undefined4 *)(lVar1 + 0x20c);
  local_a8 = *(undefined4 *)(lVar1 + 0x210);
  uStack_a4 = *(undefined4 *)(lVar1 + 0x214);
  uStack_a0 = *(undefined4 *)(lVar1 + 0x218);
  uStack_9c = *(undefined4 *)(lVar1 + 0x21c);
  local_98 = *(undefined4 *)(lVar1 + 0x220);
  uStack_94 = *(undefined4 *)(lVar1 + 0x224);
  uStack_90 = *(undefined4 *)(lVar1 + 0x228);
  uStack_8c = *(undefined4 *)(lVar1 + 0x22c);
  local_c8 = 0;
  FUN_14061eddc(param_1,&local_78,param_3);
  dVar2 = (local_50 - local_68) * 0.5;
  dVar3 = (local_58 - local_70) * 0.5;
  dVar7 = (local_60 - local_78) * 0.5;
  *param_2 = local_78 + dVar7;
  param_2[1] = local_70 + dVar3;
  param_2[2] = local_68 + dVar2;
  param_2[3] = dVar7;
  param_2[4] = dVar3;
  param_2[5] = dVar2;
  param_2[6] = SQRT(dVar2 * dVar2 + dVar7 * dVar7 + dVar3 * dVar3);
LAB_14061ed69:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14061eddc FUN_14061eddc body=4218 status=ok
// SIG undefined FUN_14061eddc(void)

double * FUN_14061eddc(longlong param_1,double *param_2,double *param_3,double *param_4,
                      double *param_5)

{
  char cVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double *pdVar7;
  uint uVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_2d8 [32];
  float local_2b8;
  float local_2b0;
  float local_2ac;
  double local_2a8;
  double local_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  undefined1 local_248 [24];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  char local_200;
  undefined7 uStack_1ff;
  undefined8 *local_1f8;
  double *local_1f0;
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  ulonglong local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  char local_108;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_f4 = 0.0;
  local_f8 = 1.0;
  FUN_14061fe58(param_1,&local_f4,&local_f8);
  pdVar11 = param_5;
  if (param_5 == (double *)0x0) {
    pdVar11 = param_4;
  }
  uVar8 = (uint)*(byte *)(param_1 + 0x844) * 8;
  bVar12 = *(byte *)(param_1 + 0x844) < 3;
  pdVar7 = (double *)&DAT_14c8464f0;
  if (bVar12) {
    pdVar7 = (double *)(&DAT_14a89a860 + uVar8);
  }
  pdVar9 = (double *)&DAT_14c8464e0;
  if (bVar12) {
    pdVar9 = (double *)(&DAT_14a89a890 + uVar8);
  }
  pdVar10 = (double *)&DAT_14c8464e8;
  if (bVar12) {
    pdVar10 = (double *)(&DAT_14a89a878 + uVar8);
  }
  dVar3 = pdVar11[2] * *pdVar7;
  dStack_130 = pdVar11[1] * *pdVar10;
  local_138 = *pdVar11 * *pdVar9;
  dVar18 = *pdVar7 * pdVar11[5];
  dVar36 = *pdVar10 * pdVar11[4];
  dVar24 = *pdVar9 * pdVar11[3];
  dVar20 = dVar3 + dVar18;
  dStack_118 = dStack_130 + dVar36;
  local_120 = local_138 + dVar24;
  dVar3 = dVar3 - dVar18;
  dStack_130 = dStack_130 - dVar36;
  local_138 = local_138 - dVar24;
  local_108 = '\x01';
  local_158 = 0.0;
  dStack_150 = 0.0;
  local_168 = 0.0;
  dStack_160 = 0.0;
  local_178 = 0.0;
  uStack_170 = 0.0;
  local_148 = local_148 & 0xffffffffffffff00;
  local_2ac = local_f8;
  local_2b8 = local_f8;
  local_2b0 = local_f4;
  local_128 = dVar3;
  local_110 = dVar20;
  FUN_14062070e(param_1,&local_1d8);
  dVar24 = local_1c8 + local_1c8;
  dVar19 = local_1d8 + local_1d8;
  dVar23 = dStack_1d0 + dStack_1d0;
  auVar25._0_8_ = (dVar23 * dStack_1c0 + local_1d8 * dVar24) * local_188;
  auVar25._8_8_ = (dVar19 * dStack_1c0 + local_1d8 * dVar19) * dStack_180;
  dVar28 = (1.0 - (dVar24 * local_1c8 + dVar23 * dStack_1d0)) * local_198;
  dVar35 = (dVar24 * dStack_1c0 + dVar23 * local_1d8) * local_198;
  dStack_250 = (dVar19 * dStack_1c0 + dVar24 * dStack_1d0) * dStack_190;
  dVar36 = (local_1d8 * dVar24 - dVar23 * dStack_1c0) * local_198;
  auVar38._0_8_ = dStack_190 * (dVar23 * local_1d8 - dVar24 * dStack_1c0);
  auVar38._8_8_ = local_188 * (dVar24 * dStack_1d0 - dVar19 * dStack_1c0);
  auVar25 = blendpd(auVar25,auVar38,2);
  auVar39._8_8_ = (1.0 - (dVar24 * local_1c8 + dVar19 * local_1d8)) * dStack_190;
  auVar39._0_8_ = dVar28;
  auVar39 = blendpd(auVar38,auVar39,2);
  dVar30 = (local_138 + local_120) * 0.5;
  dVar6 = (dStack_130 + dStack_118) * 0.5;
  dVar18 = (local_120 - local_138) * 0.5;
  dVar27 = (dStack_118 - dStack_130) * 0.5;
  local_248._8_4_ = SUB84(dVar30,0);
  local_248._0_8_ = dVar30;
  local_248._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  dVar32 = (dVar3 + dVar20) * 0.5;
  local_298._8_4_ = SUB84(dVar18,0);
  local_298._0_8_ = dVar18;
  local_298._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  dVar24 = (dVar20 - dVar3) * 0.5;
  dVar29 = ABS(dVar24 * auVar25._0_8_) + ABS(auVar39._0_8_ * dVar27) + ABS(dVar28 * dVar18);
  dVar31 = ABS(dVar24 * auVar25._8_8_) + ABS(auVar39._8_8_ * dVar27) + ABS(dVar35 * dVar18);
  dVar20 = dVar32 * auVar25._0_8_ + dVar6 * auVar39._0_8_ + dVar30 * dVar28 + local_1b8;
  dVar3 = dVar32 * auVar25._8_8_ + dVar6 * auVar39._8_8_ + dVar30 * dVar35 + dStack_1b0;
  dVar28 = dVar20 - dVar29;
  dVar35 = dVar3 - dVar31;
  dVar29 = dVar29 + dVar20;
  dVar31 = dVar31 + dVar3;
  dVar20 = (1.0 - (dVar19 * local_1d8 + dVar23 * dStack_1d0)) * local_188;
  local_288._8_4_ = SUB84(dVar27,0);
  local_288._0_8_ = dVar27;
  local_288._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  dVar24 = ABS(dVar27 * dStack_250) + ABS(dVar18 * dVar36) + ABS(dVar24 * dVar20);
  dVar36 = dStack_250 * dVar6 + dVar36 * dVar30 + dVar20 * dVar32 + local_1a8;
  dVar20 = dVar36 - dVar24;
  dVar36 = dVar36 + dVar24;
  if ((char)local_148 == '\0') {
    local_148 = CONCAT71(local_148._1_7_,1);
    local_268._8_4_ = SUB84(dVar35,0);
    local_268._0_8_ = dVar35;
    local_268._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    local_278._8_4_ = SUB84(dVar31,0);
    local_278._0_8_ = dVar31;
    local_278._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    local_258 = dVar20;
    local_178 = dVar28;
    uStack_170 = dVar35;
    dStack_160 = dVar29;
    local_158 = dVar31;
  }
  else {
    if (dVar28 <= local_178) {
      local_178 = dVar28;
    }
    if (dVar35 <= uStack_170) {
      uStack_170 = dVar35;
    }
    local_268._8_8_ = 0;
    local_268._0_8_ = uStack_170;
    local_258 = local_168;
    if (dVar20 <= local_168) {
      local_258 = dVar20;
    }
    if (dStack_160 <= dVar29) {
      dStack_160 = dVar29;
    }
    if (local_158 <= dVar31) {
      local_158 = dVar31;
    }
    local_278._8_8_ = 0;
    local_278._0_8_ = local_158;
    if (dStack_150 <= dVar36) {
      dStack_150 = dVar36;
    }
    dVar36 = dStack_150;
    dStack_250 = 0.0;
  }
  local_2b8 = local_2ac;
  local_2a8 = local_178;
  local_2a0 = dStack_160;
  local_168 = local_258;
  dStack_150 = dVar36;
  FUN_14062070e(param_1,&local_1d8);
  if (local_108 != '\0') {
    dVar18 = local_1d8 + local_1d8;
    dVar27 = dStack_1d0 + dStack_1d0;
    dVar30 = local_1c8 + local_1c8;
    dVar20 = (1.0 - (local_1d8 * dVar18 + dStack_1d0 * dVar27)) * local_188;
    dVar3 = (local_1d8 * dVar30 - dVar27 * dStack_1c0) * local_198;
    dVar19 = (1.0 - (local_1c8 * dVar30 + dStack_1d0 * dVar27)) * local_198;
    local_198 = (dVar27 * local_1d8 + dVar30 * dStack_1c0) * local_198;
    dVar24 = (dVar30 * dStack_1d0 + dVar18 * dStack_1c0) * dStack_190;
    auVar21._0_8_ = (dVar27 * dStack_1c0 + local_1d8 * dVar30) * local_188;
    auVar21._8_8_ = (dVar18 * dStack_1c0 + local_1d8 * dVar18) * dStack_180;
    auVar26._0_8_ = (dVar27 * local_1d8 - dVar30 * dStack_1c0) * dStack_190;
    auVar26._8_8_ = (dVar30 * dStack_1d0 - dVar18 * dStack_1c0) * local_188;
    auVar39 = blendpd(auVar21,auVar26,2);
    auVar2._8_8_ = (1.0 - (local_1c8 * dVar30 + local_1d8 * dVar18)) * dStack_190;
    auVar2._0_8_ = dVar19;
    auVar25 = blendpd(auVar26,auVar2,2);
    dVar18 = (local_128 + local_110) * 0.5;
    dVar27 = (local_110 - local_128) * 0.5;
    local_1a8 = dVar18 * dVar20 + dVar24 * dVar6 + dVar3 * (double)local_248._0_8_ + local_1a8;
    dVar24 = ABS((double)local_288._0_8_ * dVar24) + ABS((double)local_298._0_8_ * dVar3) +
             ABS(dVar27 * dVar20);
    dVar3 = local_1a8 + dVar24;
    local_1a8 = local_1a8 - dVar24;
    local_1b8 = dVar6 * auVar25._0_8_ + (double)local_248._0_8_ * dVar19 + dVar18 * auVar39._0_8_ +
                local_1b8;
    dStack_1b0 = dVar6 * auVar25._8_8_ + (double)local_248._8_8_ * local_198 +
                 dVar18 * auVar39._8_8_ + dStack_1b0;
    dVar18 = ABS(auVar25._0_8_ * (double)local_288._0_8_) + ABS(dVar19 * (double)local_298._0_8_) +
             ABS(auVar39._0_8_ * dVar27);
    dVar27 = ABS(auVar25._8_8_ * (double)local_288._8_8_) + ABS(local_198 * (double)local_298._8_8_)
             + ABS(auVar39._8_8_ * dVar27);
    dVar24 = local_1b8 + dVar18;
    dVar20 = dStack_1b0 + dVar27;
    local_1b8 = local_1b8 - dVar18;
    dStack_1b0 = dStack_1b0 - dVar27;
    local_178 = local_2a8;
    if (local_1b8 <= local_2a8) {
      local_178 = local_1b8;
    }
    uStack_170 = (double)local_268._0_8_;
    if (dStack_1b0 <= (double)local_268._0_8_) {
      uStack_170 = dStack_1b0;
    }
    local_168 = local_258;
    if (local_1a8 <= local_258) {
      local_168 = local_1a8;
    }
    dStack_160 = local_2a0;
    if (local_2a0 <= dVar24) {
      dStack_160 = dVar24;
    }
    local_158 = (double)local_278._0_8_;
    if ((double)local_278._0_8_ <= dVar20) {
      local_158 = dVar20;
    }
    dStack_150 = dVar36;
    if (dVar36 <= dVar3) {
      dStack_150 = dVar3;
    }
  }
  dVar36 = *(double *)(param_1 + 0x748);
  dVar24 = *(double *)(param_1 + 0x740);
  local_288._0_8_ = *(double *)(param_1 + 0x738);
  dVar20 = *(double *)(param_1 + 0x7b0);
  dVar3 = *(double *)(param_1 + 0x7a8);
  dVar18 = *(double *)(param_1 + 0x7a0);
  dVar19 = *(double *)(param_1 + 0x788) * 6.0;
  dVar27 = (dVar20 * 3.0 + dVar36 * 3.0 + *(double *)(param_1 + 0x730) * 6.0) - dVar19;
  local_298._0_8_ = dVar27;
  dVar30 = *(double *)(param_1 + 0x780) * 6.0;
  dVar6 = (dVar3 * 3.0 + dVar24 * 3.0 + *(double *)(param_1 + 0x728) * 6.0) - dVar30;
  dVar19 = ((*(double *)(param_1 + 0x730) * -6.0 - dVar36 * 4.0) - (dVar20 + dVar20)) + dVar19;
  dVar23 = *(double *)(param_1 + 0x778) * 6.0;
  dVar30 = ((*(double *)(param_1 + 0x728) * -6.0 - dVar24 * 4.0) - (dVar3 + dVar3)) + dVar30;
  dVar20 = ((*(double *)(param_1 + 0x720) * -6.0 - (double)local_288._0_8_ * 4.0) -
           (dVar18 + dVar18)) + dVar23;
  local_1f8 = &local_178;
  local_1f0 = &local_138;
  local_1e8 = local_2b0;
  local_1e4 = local_2ac;
  local_1e0 = param_1;
  FUN_14061ff7c(&local_1f8,
                SUB84(dVar20 * dVar20 -
                      ((dVar18 * 3.0 +
                       (double)local_288._0_8_ * 3.0 + *(double *)(param_1 + 0x720) * 6.0) - dVar23)
                      * 4.0 * (double)local_288._0_8_,0));
  FUN_14061ff7c(&local_1f8,SUB84(dVar30 * dVar30 - dVar6 * 4.0 * dVar24,0),dVar6,dVar30);
  FUN_14061ff7c(&local_1f8,SUB84(dVar19 * dVar19 - dVar27 * 4.0 * dVar36,0),local_298._0_8_,dVar19);
  if (param_5 == param_4 || param_5 == (double *)0x0) goto LAB_14061f7ab;
  cVar1 = *(char *)(param_1 + 0x844);
  dVar36 = pdVar11[2];
  uVar33 = SUB84(dVar36,0);
  uVar34 = (undefined4)((ulonglong)dVar36 >> 0x20);
  dVar24 = pdVar11[5];
  uVar14 = SUB84(dVar24,0);
  uVar17 = (undefined4)((ulonglong)dVar24 >> 0x20);
  dVar36 = dVar36 - dVar24;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      uVar33 = SUB84(pdVar11[1],0);
      uVar34 = (undefined4)((ulonglong)pdVar11[1] >> 0x20);
      uVar14 = SUB84(pdVar11[4],0);
      uVar17 = (undefined4)((ulonglong)pdVar11[4] >> 0x20);
    }
    else {
      if (cVar1 != '\0') goto LAB_14061fb77;
      uVar33 = SUB84(*param_5,0);
      uVar34 = (undefined4)((ulonglong)*param_5 >> 0x20);
      uVar14 = SUB84(pdVar11[3],0);
      uVar17 = (undefined4)((ulonglong)pdVar11[3] >> 0x20);
    }
    dVar36 = (double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar17,uVar14);
  }
LAB_14061fb77:
  uVar15 = FUN_147a2843c(param_1,(float)dVar36);
  if ((float)uVar15 < local_2b0) {
    local_2b8 = local_2ac;
    FUN_14062070e(param_1,&local_1d8,uVar15);
    FUN_144a1c3a2(&local_138,&local_230,&local_1d8);
    if (local_200 == '\0' || (char)local_148 == '\0') {
      if (local_200 != '\0') {
        local_148 = CONCAT71(uStack_1ff,local_200);
        local_158 = local_210;
        dStack_150 = dStack_208;
        local_168 = local_220;
        dStack_160 = dStack_218;
        local_178 = (double)CONCAT44(uStack_22c,local_230);
        uStack_170 = (double)CONCAT44(uStack_224,uStack_228);
      }
    }
    else {
      uVar13 = SUB84(local_178,0);
      uVar16 = (int)((ulonglong)local_178 >> 0x20);
      if ((double)CONCAT44(uStack_22c,local_230) <= local_178) {
        uVar13 = local_230;
        uVar16 = uStack_22c;
      }
      local_178 = (double)CONCAT44(uVar16,uVar13);
      uVar13 = SUB84(uStack_170,0);
      uVar16 = (int)((ulonglong)uStack_170 >> 0x20);
      if ((double)CONCAT44(uStack_224,uStack_228) <= uStack_170) {
        uVar13 = uStack_228;
        uVar16 = uStack_224;
      }
      uStack_170 = (double)CONCAT44(uVar16,uVar13);
      uVar13 = SUB84(local_168,0);
      uVar16 = (undefined4)((ulonglong)local_168 >> 0x20);
      if (local_220 <= local_168) {
        uVar13 = SUB84(local_220,0);
        uVar16 = (undefined4)((ulonglong)local_220 >> 0x20);
      }
      local_168 = (double)CONCAT44(uVar16,uVar13);
      uVar13 = SUB84(dStack_160,0);
      uVar16 = (undefined4)((ulonglong)dStack_160 >> 0x20);
      if (dStack_160 <= dStack_218) {
        uVar13 = SUB84(dStack_218,0);
        uVar16 = (undefined4)((ulonglong)dStack_218 >> 0x20);
      }
      dStack_160 = (double)CONCAT44(uVar16,uVar13);
      uVar13 = SUB84(local_158,0);
      uVar16 = (undefined4)((ulonglong)local_158 >> 0x20);
      if (local_158 <= local_210) {
        uVar13 = SUB84(local_210,0);
        uVar16 = (undefined4)((ulonglong)local_210 >> 0x20);
      }
      local_158 = (double)CONCAT44(uVar16,uVar13);
      uVar13 = SUB84(dStack_150,0);
      uVar16 = (undefined4)((ulonglong)dStack_150 >> 0x20);
      if (dStack_150 <= dStack_208) {
        uVar13 = SUB84(dStack_208,0);
        uVar16 = (undefined4)((ulonglong)dStack_208 >> 0x20);
      }
      dStack_150 = (double)CONCAT44(uVar16,uVar13);
    }
  }
  uVar15 = FUN_147a2843c(param_1,(float)((double)CONCAT44(uVar34,uVar33) +
                                        (double)CONCAT44(uVar17,uVar14)));
  if (local_f8 < (float)uVar15) {
    local_2b8 = local_f8;
    FUN_14062070e(param_1,&local_1d8,uVar15);
    FUN_144a1c3a2(&local_138,&local_230,&local_1d8);
    if (local_200 == '\0' || (char)local_148 == '\0') {
      if (local_200 != '\0') {
        local_148 = CONCAT71(uStack_1ff,local_200);
        local_178 = (double)CONCAT44(uStack_22c,local_230);
        uStack_170 = (double)CONCAT44(uStack_224,uStack_228);
        local_168 = local_220;
        dStack_160 = dStack_218;
        local_158 = local_210;
        dStack_150 = dStack_208;
      }
    }
    else {
      uVar14 = SUB84(local_178,0);
      uVar17 = (int)((ulonglong)local_178 >> 0x20);
      if ((double)CONCAT44(uStack_22c,local_230) <= local_178) {
        uVar14 = local_230;
        uVar17 = uStack_22c;
      }
      local_178 = (double)CONCAT44(uVar17,uVar14);
      uVar14 = SUB84(uStack_170,0);
      uVar17 = (int)((ulonglong)uStack_170 >> 0x20);
      if ((double)CONCAT44(uStack_224,uStack_228) <= uStack_170) {
        uVar14 = uStack_228;
        uVar17 = uStack_224;
      }
      uStack_170 = (double)CONCAT44(uVar17,uVar14);
      uVar14 = SUB84(local_168,0);
      uVar17 = (undefined4)((ulonglong)local_168 >> 0x20);
      if (local_220 <= local_168) {
        uVar14 = SUB84(local_220,0);
        uVar17 = (undefined4)((ulonglong)local_220 >> 0x20);
      }
      local_168 = (double)CONCAT44(uVar17,uVar14);
      uVar14 = SUB84(dStack_160,0);
      uVar17 = (undefined4)((ulonglong)dStack_160 >> 0x20);
      if (dStack_160 <= dStack_218) {
        uVar14 = SUB84(dStack_218,0);
        uVar17 = (undefined4)((ulonglong)dStack_218 >> 0x20);
      }
      dStack_160 = (double)CONCAT44(uVar17,uVar14);
      uVar14 = SUB84(local_158,0);
      uVar17 = (undefined4)((ulonglong)local_158 >> 0x20);
      if (local_158 <= local_210) {
        uVar14 = SUB84(local_210,0);
        uVar17 = (undefined4)((ulonglong)local_210 >> 0x20);
      }
      local_158 = (double)CONCAT44(uVar17,uVar14);
      uVar14 = SUB84(dStack_150,0);
      uVar17 = (undefined4)((ulonglong)dStack_150 >> 0x20);
      if (dStack_150 <= dStack_208) {
        uVar14 = SUB84(dStack_208,0);
        uVar17 = (undefined4)((ulonglong)dStack_208 >> 0x20);
      }
      dStack_150 = (double)CONCAT44(uVar17,uVar14);
    }
  }
LAB_14061f7ab:
  if ((char)local_148 == '\0') {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    *(undefined1 *)(param_2 + 6) = 0;
  }
  else {
    dVar27 = *param_3;
    dVar6 = param_3[1];
    dVar24 = param_3[2];
    dVar19 = param_3[3];
    dVar36 = param_3[8];
    dVar23 = param_3[9];
    dVar28 = param_3[10];
    dVar3 = dVar24 + dVar24;
    dVar35 = dVar27 + dVar27;
    dVar29 = dVar6 + dVar6;
    auVar22._0_8_ = (dVar29 * dVar19 + dVar27 * dVar3) * dVar28;
    auVar22._8_8_ = (dVar35 * dVar19 + dVar27 * dVar35) * param_3[0xb];
    dVar30 = (1.0 - (dVar3 * dVar24 + dVar29 * dVar6)) * dVar36;
    dVar18 = (1.0 - (dVar3 * dVar24 + dVar35 * dVar27)) * dVar23;
    dVar24 = (dVar19 * dVar3 + dVar29 * dVar27) * dVar36;
    dVar20 = (dVar19 * dVar35 + dVar3 * dVar6) * dVar23;
    dVar36 = (dVar27 * dVar3 - dVar29 * dVar19) * dVar36;
    auVar37._0_8_ = dVar23 * (dVar29 * dVar27 - dVar19 * dVar3);
    auVar37._8_8_ = dVar28 * (dVar3 * dVar6 - dVar19 * dVar35);
    auVar39 = blendpd(auVar22,auVar37,2);
    auVar5._8_4_ = SUB84(dVar18,0);
    auVar5._0_8_ = dVar30;
    auVar5._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar25 = blendpd(auVar37,auVar5,2);
    dVar28 = (1.0 - (dVar35 * dVar27 + dVar29 * dVar6)) * dVar28;
    dVar3 = (local_178 + dStack_160) * 0.5;
    dVar18 = (uStack_170 + local_158) * 0.5;
    dVar32 = (local_168 + dStack_150) * 0.5;
    dVar29 = (dStack_160 - local_178) * 0.5;
    dVar31 = (local_158 - uStack_170) * 0.5;
    dVar27 = (dStack_150 - local_168) * 0.5;
    dVar6 = ABS(dVar27 * auVar39._0_8_) + ABS(auVar25._0_8_ * dVar31) + ABS(dVar29 * dVar30);
    dVar19 = ABS(dVar27 * auVar39._8_8_) + ABS(auVar25._8_8_ * dVar31) + ABS(dVar29 * dVar24);
    dVar30 = dVar32 * auVar39._0_8_ + auVar25._0_8_ * dVar18 + dVar3 * dVar30 + param_3[4];
    dVar24 = dVar32 * auVar39._8_8_ + auVar25._8_8_ * dVar18 + dVar3 * dVar24 + param_3[5];
    dVar23 = dVar19 + dVar24;
    dVar35 = param_3[6];
    *param_2 = dVar30 - dVar6;
    param_2[1] = dVar24 - dVar19;
    dVar24 = ABS(dVar31 * dVar20) + ABS(dVar36 * dVar29) + ABS(dVar27 * dVar28);
    dVar35 = dVar32 * dVar28 + dVar18 * dVar20 + dVar3 * dVar36 + dVar35;
    param_2[2] = dVar35 - dVar24;
    auVar4._8_4_ = SUB84(dVar23,0);
    auVar4._0_8_ = dVar6 + dVar30;
    auVar4._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 3) = auVar4;
    param_2[5] = dVar35 + dVar24;
    *(undefined1 *)(param_2 + 6) = 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14061fe58 FUN_14061fe58 body=291 status=ok
// SIG undefined FUN_14061fe58(void)

void FUN_14061fe58(longlong param_1,float *param_2,float *param_3)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  
  *param_2 = 0.0;
  *param_3 = 1.0;
  if (ABS(*(float *)(param_1 + 0x7e8) - *(float *)(param_1 + 0x840)) <= 1e-08) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x660);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  dVar3 = *(double *)(lVar2 + 0x210);
  dVar7 = *(double *)(lVar2 + 0x228);
  cVar1 = *(char *)(param_1 + 0x844);
  dVar5 = dVar3 - dVar7;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      dVar7 = *(double *)(lVar2 + 0x208);
      dVar3 = *(double *)(lVar2 + 0x220);
    }
    else {
      if (cVar1 != '\0') goto LAB_14061ff1d;
      dVar7 = *(double *)(lVar2 + 0x200);
      dVar3 = *(double *)(lVar2 + 0x218);
    }
    dVar5 = dVar7 - dVar3;
  }
LAB_14061ff1d:
  fVar6 = *(float *)(param_1 + 0x7e8);
  fVar8 = *(float *)(param_1 + 0x840) - fVar6;
  fVar4 = ((float)dVar5 - fVar6) / fVar8;
  fVar8 = ((float)(dVar3 + dVar7) - fVar6) / fVar8;
  fVar6 = -4.0;
  if (-4.0 <= fVar4) {
    fVar6 = fVar4;
  }
  *param_2 = fVar6;
  if (4.0 <= fVar8) {
    fVar8 = 4.0;
  }
  *param_3 = fVar8;
  return;
}



// FUNCTION 14061ff7c FUN_14061ff7c body=1936 status=ok
// SIG undefined FUN_14061ff7c(void)

void FUN_14061ff7c(undefined8 *param_1,double param_2,double param_3,double param_4)

{
  undefined8 uVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar21;
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auStack_168 [32];
  float local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((0.0 < param_2) && (1e-08 < ABS(param_3))) {
    uVar1 = param_1[3];
    if (param_2 < 0.0) {
      param_2 = sqrt(param_2);
    }
    else {
      param_2 = SQRT(param_2);
    }
    dVar11 = (param_2 - param_4) * (0.5 / param_3);
    dVar10 = (-param_4 - param_2) * (0.5 / param_3);
    dVar8 = (double)*(float *)(param_1 + 2);
    if ((dVar8 <= dVar11) && (dVar11 <= (double)*(float *)((longlong)param_1 + 0x14))) {
      pdVar2 = (double *)param_1[1];
      local_148 = *(float *)((longlong)param_1 + 0x14);
      FUN_14062070e(uVar1,&local_128,(float)dVar11);
      if (*(char *)(pdVar2 + 6) != '\0') {
        dVar15 = local_118 + local_118;
        dVar8 = local_128 + local_128;
        dVar11 = dStack_120 + dStack_120;
        auVar16._0_8_ = (dVar11 * dStack_110 + local_128 * dVar15) * local_d8;
        auVar16._8_8_ = (dVar8 * dStack_110 + local_128 * dVar8) * dStack_d0;
        local_138 = local_d8;
        dStack_130 = dStack_d0;
        dVar18 = (1.0 - (dVar15 * local_118 + dVar11 * dStack_120)) * local_e8;
        dVar12 = (dVar15 * dStack_110 + dVar11 * local_128) * local_e8;
        dVar14 = (dVar8 * dStack_110 + dVar15 * dStack_120) * dStack_e0;
        dVar9 = (local_128 * dVar15 - dVar11 * dStack_110) * local_e8;
        auVar23._0_8_ = dStack_e0 * (dVar11 * local_128 - dVar15 * dStack_110);
        auVar23._8_8_ = local_d8 * (dVar15 * dStack_120 - dVar8 * dStack_110);
        auVar16 = blendpd(auVar16,auVar23,2);
        auVar24._8_8_ = (1.0 - (dVar15 * local_118 + dVar8 * local_128)) * dStack_e0;
        auVar24._0_8_ = dVar18;
        auVar24 = blendpd(auVar23,auVar24,2);
        dVar4 = (*pdVar2 + pdVar2[3]) * 0.5;
        dVar5 = (pdVar2[1] + pdVar2[4]) * 0.5;
        dVar6 = (pdVar2[2] + pdVar2[5]) * 0.5;
        dVar19 = (pdVar2[3] - *pdVar2) * 0.5;
        dVar21 = (pdVar2[4] - pdVar2[1]) * 0.5;
        dVar15 = (pdVar2[5] - pdVar2[2]) * 0.5;
        dVar7 = dVar6 * auVar16._0_8_ + dVar5 * auVar24._0_8_ + dVar4 * dVar18 + local_108;
        dVar13 = dVar6 * auVar16._8_8_ + dVar5 * auVar24._8_8_ + dVar4 * dVar12 + dStack_100;
        dVar18 = ABS(dVar15 * auVar16._0_8_) + ABS(auVar24._0_8_ * dVar21) + ABS(dVar19 * dVar18);
        dVar12 = ABS(dVar15 * auVar16._8_8_) + ABS(auVar24._8_8_ * dVar21) + ABS(dVar19 * dVar12);
        dVar22 = dVar7 - dVar18;
        dVar25 = dVar13 - dVar12;
        dVar18 = dVar18 + dVar7;
        dVar12 = dVar12 + dVar13;
        dVar11 = (1.0 - (dVar8 * local_128 + dVar11 * dStack_120)) * local_d8;
        dVar8 = ABS(dVar15 * dVar11) + ABS(dVar21 * dVar14) + ABS(dVar19 * dVar9);
        dVar15 = dVar11 * dVar6 + dVar14 * dVar5 + dVar9 * dVar4 + local_f8;
        dVar11 = dVar15 - dVar8;
        dVar15 = dVar15 + dVar8;
        pdVar2 = (double *)*param_1;
        if (*(char *)(pdVar2 + 6) == '\0') {
          *pdVar2 = dVar22;
          pdVar2[1] = dVar25;
          pdVar2[2] = dVar11;
          pdVar2[3] = dVar18;
          pdVar2[4] = dVar12;
          pdVar2[5] = dVar15;
          *(undefined1 *)(pdVar2 + 6) = 1;
        }
        else {
          dVar8 = *pdVar2;
          if (dVar22 <= *pdVar2) {
            dVar8 = dVar22;
          }
          *pdVar2 = dVar8;
          dVar8 = pdVar2[1];
          if (dVar25 <= pdVar2[1]) {
            dVar8 = dVar25;
          }
          pdVar2[1] = dVar8;
          dVar8 = pdVar2[2];
          if (dVar11 <= pdVar2[2]) {
            dVar8 = dVar11;
          }
          pdVar2[2] = dVar8;
          dVar8 = pdVar2[3];
          if (pdVar2[3] <= dVar18) {
            dVar8 = dVar18;
          }
          pdVar2[3] = dVar8;
          dVar8 = pdVar2[4];
          if (pdVar2[4] <= dVar12) {
            dVar8 = dVar12;
          }
          pdVar2[4] = dVar8;
          dVar8 = pdVar2[5];
          if (pdVar2[5] <= dVar15) {
            dVar8 = dVar15;
          }
          pdVar2[5] = dVar8;
        }
      }
      dVar8 = (double)*(float *)(param_1 + 2);
    }
    if (dVar8 <= dVar10) {
      if (dVar10 <= (double)*(float *)((longlong)param_1 + 0x14)) {
        pdVar2 = (double *)param_1[1];
        local_148 = *(float *)((longlong)param_1 + 0x14);
        FUN_14062070e(uVar1,&local_128,(float)dVar10);
        if (*(char *)(pdVar2 + 6) != '\0') {
          dVar11 = local_118 + local_118;
          dVar10 = local_128 + local_128;
          dVar8 = dStack_120 + dStack_120;
          auVar17._0_8_ = (dVar8 * dStack_110 + local_128 * dVar11) * local_d8;
          auVar17._8_8_ = (dVar10 * dStack_110 + local_128 * dVar10) * dStack_d0;
          dVar12 = (1.0 - (dVar11 * local_118 + dVar8 * dStack_120)) * local_e8;
          dVar13 = (dVar11 * dStack_110 + dVar8 * local_128) * local_e8;
          dVar9 = (dVar10 * dStack_110 + dVar11 * dStack_120) * dStack_e0;
          local_e8 = (local_128 * dVar11 - dVar8 * dStack_110) * local_e8;
          auVar20._0_8_ = dStack_e0 * (dVar8 * local_128 - dVar11 * dStack_110);
          auVar20._8_8_ = local_d8 * (dVar11 * dStack_120 - dVar10 * dStack_110);
          auVar24 = blendpd(auVar17,auVar20,2);
          auVar3._8_8_ = (1.0 - (dVar11 * local_118 + dVar10 * local_128)) * dStack_e0;
          auVar3._0_8_ = dVar12;
          auVar16 = blendpd(auVar20,auVar3,2);
          dVar6 = (*pdVar2 + pdVar2[3]) * 0.5;
          dVar7 = (pdVar2[1] + pdVar2[4]) * 0.5;
          dVar15 = (pdVar2[2] + pdVar2[5]) * 0.5;
          dVar4 = (pdVar2[3] - *pdVar2) * 0.5;
          dVar5 = (pdVar2[4] - pdVar2[1]) * 0.5;
          dVar11 = (pdVar2[5] - pdVar2[2]) * 0.5;
          local_108 = dVar15 * auVar24._0_8_ + dVar7 * auVar16._0_8_ + dVar6 * dVar12 + local_108;
          dStack_100 = dVar15 * auVar24._8_8_ + dVar7 * auVar16._8_8_ + dVar6 * dVar13 + dStack_100;
          dVar12 = ABS(dVar11 * auVar24._0_8_) + ABS(auVar16._0_8_ * dVar5) + ABS(dVar4 * dVar12);
          dVar13 = ABS(dVar11 * auVar24._8_8_) + ABS(auVar16._8_8_ * dVar5) + ABS(dVar4 * dVar13);
          dVar14 = local_108 - dVar12;
          dVar18 = dStack_100 - dVar13;
          dVar12 = dVar12 + local_108;
          dVar13 = dVar13 + dStack_100;
          local_d8 = (1.0 - (dVar10 * local_128 + dVar8 * dStack_120)) * local_d8;
          dVar10 = ABS(dVar11 * local_d8) + ABS(dVar5 * dVar9) + ABS(dVar4 * local_e8);
          local_f8 = local_d8 * dVar15 + dVar9 * dVar7 + local_e8 * dVar6 + local_f8;
          dVar8 = local_f8 - dVar10;
          local_f8 = local_f8 + dVar10;
          pdVar2 = (double *)*param_1;
          if (*(char *)(pdVar2 + 6) == '\0') {
            *pdVar2 = dVar14;
            pdVar2[1] = dVar18;
            pdVar2[2] = dVar8;
            pdVar2[3] = dVar12;
            pdVar2[4] = dVar13;
            pdVar2[5] = local_f8;
            *(undefined1 *)(pdVar2 + 6) = 1;
          }
          else {
            dVar10 = *pdVar2;
            if (dVar14 <= *pdVar2) {
              dVar10 = dVar14;
            }
            *pdVar2 = dVar10;
            dVar10 = pdVar2[1];
            if (dVar18 <= pdVar2[1]) {
              dVar10 = dVar18;
            }
            pdVar2[1] = dVar10;
            dVar10 = pdVar2[2];
            if (dVar8 <= pdVar2[2]) {
              dVar10 = dVar8;
            }
            pdVar2[2] = dVar10;
            dVar10 = pdVar2[3];
            if (pdVar2[3] <= dVar12) {
              dVar10 = dVar12;
            }
            pdVar2[3] = dVar10;
            dVar10 = pdVar2[4];
            if (pdVar2[4] <= dVar13) {
              dVar10 = dVar13;
            }
            pdVar2[4] = dVar10;
            dVar10 = pdVar2[5];
            if (pdVar2[5] <= local_f8) {
              dVar10 = local_f8;
            }
            pdVar2[5] = dVar10;
          }
        }
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14062070e FUN_14062070e body=2369 status=ok
// SIG undefined FUN_14062070e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14062070e(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             float param_5)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_198 [32];
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined8 local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  fVar4 = (float)param_4;
  uVar11 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar3 = (float)param_3;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  fVar5 = fVar3;
  if ((((*(byte *)(param_1 + 0x845) & 2) != 0) && (fVar5 = 0.0, 0.0 <= fVar3)) &&
     (fVar5 = 1.0, fVar3 < 1.0)) {
    fVar5 = (3.0 - (fVar3 + fVar3)) * fVar3 * fVar3;
  }
  lVar1 = param_1 + 0x720;
  if (fVar3 < fVar4) {
LAB_140620ea1:
    FUN_140621050(&local_158,lVar1,CONCAT44(uVar11,fVar4));
    FUN_140330812(&local_164,lVar1,CONCAT44(uVar11,fVar4));
    fVar3 = fVar3 - fVar4;
    fVar4 = local_150._0_4_ * local_150._0_4_ +
            (float)local_158 * (float)local_158 + local_158._4_4_ * local_158._4_4_;
    if (((fVar4 != 1.0) ||
        (local_178 = local_150._0_4_, local_170 = (float)local_158, local_174 = local_158._4_4_,
        NAN(fVar4))) &&
       (local_178 = DAT_14c846338, local_170 = (float)DAT_14c846330, local_174 = DAT_14c846330._4_4_
       , 1e-08 <= fVar4)) {
      local_170 = 1.0 / SQRT(fVar4);
      local_178 = local_150._0_4_ * local_170;
      local_174 = local_158._4_4_ * local_170;
      local_170 = (float)local_158 * local_170;
    }
    fVar10 = fVar3 * local_150._0_4_ + local_15c;
    fVar9 = fVar3 * local_158._4_4_ + local_160;
    fVar4 = fVar3 * (float)local_158 + local_164;
  }
  else {
    uVar11 = 0;
    fVar4 = param_5;
    if (param_5 < fVar3) goto LAB_140620ea1;
    FUN_140330812(&local_158,lVar1,param_3);
    fVar4 = (float)local_158;
    fVar9 = local_158._4_4_;
    fVar10 = local_150._0_4_;
    FUN_140621050(&local_158,lVar1,param_3);
    fVar3 = local_150._0_4_ * local_150._0_4_ +
            (float)local_158 * (float)local_158 + local_158._4_4_ * local_158._4_4_;
    if (((fVar3 != 1.0) ||
        (local_178 = local_150._0_4_, local_170 = (float)local_158, local_174 = local_158._4_4_,
        NAN(fVar3))) &&
       (local_178 = DAT_14c846338, local_170 = (float)DAT_14c846330, local_174 = DAT_14c846330._4_4_
       , 1e-08 <= fVar3)) {
      local_170 = 1.0 / SQRT(fVar3);
      local_178 = local_150._0_4_ * local_170;
      local_174 = local_158._4_4_ * local_170;
      local_170 = (float)local_158 * local_170;
    }
  }
  fVar15 = (float)*(double *)(param_1 + 2000) * local_174 -
           local_170 * (float)*(double *)(param_1 + 0x7d8);
  fVar19 = (float)*(double *)(param_1 + 0x7e0) * local_170 -
           local_178 * (float)*(double *)(param_1 + 2000);
  fVar16 = (float)*(double *)(param_1 + 0x7d8) * local_178 -
           local_174 * (float)*(double *)(param_1 + 0x7e0);
  fVar3 = fVar15 * fVar15 + fVar16 * fVar16 + fVar19 * fVar19;
  if (((fVar3 != 1.0) || (fVar18 = fVar15, fVar17 = fVar16, fVar20 = fVar19, NAN(fVar3))) &&
     (fVar18 = DAT_14c846338, fVar17 = (float)DAT_14c846330, fVar20 = DAT_14c846330._4_4_,
     1e-08 <= fVar3)) {
    fVar3 = 1.0 / SQRT(fVar3);
    fVar18 = fVar15 * fVar3;
    fVar17 = fVar16 * fVar3;
    fVar20 = fVar19 * fVar3;
  }
  fVar15 = local_170 * fVar20 - fVar17 * local_174;
  fVar19 = local_178 * fVar17 - fVar18 * local_170;
  fVar16 = local_174 * fVar18 - fVar20 * local_178;
  fVar3 = fVar15 * fVar15 + fVar16 * fVar16 + fVar19 * fVar19;
  if (((fVar3 != 1.0) || (fVar13 = fVar16, fVar14 = fVar19, fVar12 = fVar15, NAN(fVar3))) &&
     (fVar13 = (float)DAT_14c846330, fVar14 = DAT_14c846330._4_4_, fVar12 = DAT_14c846338,
     1e-08 <= fVar3)) {
    fVar3 = 1.0 / SQRT(fVar3);
    fVar13 = fVar16 * fVar3;
    fVar14 = fVar19 * fVar3;
    fVar12 = fVar15 * fVar3;
  }
  fVar15 = ((float)*(double *)(param_1 + 0x7c0) - (float)*(double *)(param_1 + 0x770)) * fVar5 +
           (float)*(double *)(param_1 + 0x770);
  fVar3 = ((float)*(double *)(param_1 + 0x7b8) - (float)*(double *)(param_1 + 0x768)) * fVar5 +
          (float)*(double *)(param_1 + 0x768);
  local_16c = fVar12 * fVar15 + fVar10 + fVar18 * fVar3;
  fVar19 = fVar14 * fVar15 + fVar9 + fVar20 * fVar3;
  fVar15 = fVar15 * fVar13 + fVar4 + fVar3 * fVar17;
  fVar3 = (*(float *)(param_1 + 0x764) - *(float *)(param_1 + 0x760)) * fVar5 +
          *(float *)(param_1 + 0x760);
  local_168 = fVar5;
  fVar4 = cosf(fVar3);
  fVar5 = sinf(fVar3);
  fVar10 = fVar18 * fVar4 - fVar12 * fVar5;
  fVar9 = fVar20 * fVar4 - fVar14 * fVar5;
  fVar3 = fVar17 * fVar4 - fVar13 * fVar5;
  fVar16 = fVar18 * fVar5 + fVar12 * fVar4;
  fVar20 = fVar20 * fVar5 + fVar14 * fVar4;
  fVar18 = fVar17 * fVar5 + fVar13 * fVar4;
  fVar5 = ((float)*(double *)(param_1 + 0x798) - (float)*(double *)(param_1 + 0x758)) * local_168 +
          (float)*(double *)(param_1 + 0x758);
  fVar4 = ((float)*(double *)(param_1 + 0x790) - (float)*(double *)(param_1 + 0x750)) * local_168 +
          (float)*(double *)(param_1 + 0x750);
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  dVar8 = 1.0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  cVar2 = *(char *)(param_1 + 0x844);
  if (cVar2 == '\0') {
    local_e8 = (double)local_16c;
    local_f0 = (double)fVar19;
    local_f8 = (double)fVar15;
    local_108 = (double)fVar16;
    local_110 = (double)fVar20;
    local_118 = (double)fVar18;
    local_128 = (double)fVar10;
    local_130 = (double)fVar9;
    local_138 = (double)fVar3;
    local_148 = (double)local_178;
    local_150 = (double)local_174;
    local_158 = (double)local_170;
    local_140 = 0;
    local_120 = 0;
    local_100 = 0;
    local_e0 = 0x3ff0000000000000;
    FUN_1448ac920(param_2);
    auVar7._8_8_ = (double)fVar4;
    auVar7._0_8_ = 1.0;
    fVar4 = fVar5;
LAB_140620c6e:
    dVar8 = (double)fVar4;
  }
  else {
    if (cVar2 == '\x01') {
      local_e8 = (double)local_16c;
      local_f0 = (double)fVar19;
      local_f8 = (double)fVar15;
      local_108 = (double)fVar10;
      local_110 = (double)fVar9;
      local_118 = (double)fVar3;
      local_128 = (double)local_178;
      local_130 = (double)local_174;
      local_138 = (double)local_170;
      local_148 = (double)fVar16;
      local_150 = (double)fVar20;
      local_158 = (double)fVar18;
      local_140 = 0;
      local_120 = 0;
      local_100 = 0;
      local_e0 = 0x3ff0000000000000;
      FUN_1448ac920(param_2);
      auVar6._0_8_ = (double)fVar5;
      auVar6._8_8_ = 0;
      auVar7 = blendps(auVar6,_DAT_149935300,0xc);
      goto LAB_140620c6e;
    }
    if (cVar2 != '\x02') goto LAB_140620c7d;
    local_e8 = (double)local_16c;
    local_f0 = (double)fVar19;
    local_f8 = (double)fVar15;
    local_108 = (double)local_178;
    local_110 = (double)local_174;
    local_118 = (double)local_170;
    local_128 = (double)fVar16;
    local_130 = (double)fVar20;
    local_138 = (double)fVar18;
    local_148 = (double)fVar10;
    local_150 = (double)fVar9;
    local_158 = (double)fVar3;
    local_140 = 0;
    local_120 = 0;
    local_100 = 0;
    local_e0 = 0x3ff0000000000000;
    FUN_1448ac920(param_2);
    auVar7._0_8_ = (double)fVar4;
    auVar7._8_8_ = (double)fVar5;
  }
  *(undefined1 (*) [16])(param_2 + 8) = auVar7;
  param_2[10] = dVar8;
  param_2[0xb] = 0;
LAB_140620c7d:
  if ((local_d0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140621050 FUN_140621050 body=609 status=ok
// SIG undefined FUN_140621050(void)

float * FUN_140621050(float *param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  fVar11 = (float)param_2[5];
  fVar7 = (float)param_2[4];
  fVar5 = (float)param_2[3];
  dVar3 = param_2[0xd];
  fVar9 = (float)param_2[0x12];
  fVar8 = (float)param_2[0x11];
  fVar10 = (float)param_2[0x10];
  dVar4 = param_2[0xc];
  fVar6 = param_3 * param_3;
  *param_1 = ((((float)*param_2 * -6.0 - fVar5 * 4.0) - (fVar10 + fVar10)) +
             (float)param_2[0xb] * 6.0) * param_3 +
             fVar6 * ((fVar10 * 3.0 + fVar5 * 3.0 + (float)*param_2 * 6.0) -
                     (float)param_2[0xb] * 6.0) + fVar5;
  param_1[1] = ((((float)dVar2 * -6.0 - fVar7 * 4.0) - (fVar8 + fVar8)) + (float)dVar4 * 6.0) *
               param_3 + ((fVar8 * 3.0 + fVar7 * 3.0 + (float)dVar2 * 6.0) - (float)dVar4 * 6.0) *
                         fVar6 + fVar7;
  param_1[2] = ((((float)dVar1 * -6.0 - fVar11 * 4.0) - (fVar9 + fVar9)) + (float)dVar3 * 6.0) *
               param_3 + ((fVar9 * 3.0 + fVar11 * 3.0 + (float)dVar1 * 6.0) - (float)dVar3 * 6.0) *
                         fVar6 + fVar11;
  return param_1;
}



// FUNCTION 1406212b1 FUN_1406212b1 body=4458 status=ok
// SIG undefined FUN_1406212b1(void)

ulonglong FUN_1406212b1(char param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  short sVar9;
  byte *pbVar10;
  ushort *puVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  uint *puVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined4 *puVar29;
  undefined7 uVar30;
  undefined2 *puVar31;
  undefined2 *puVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  longlong lVar36;
  uint uVar37;
  undefined4 *puVar38;
  uint uVar39;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined4 local_c6;
  undefined2 local_c2;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  ushort local_b4;
  byte local_b2;
  longlong local_b0;
  undefined8 uStack_a8;
  uint local_a0 [4];
  uint *local_90;
  uint local_88;
  uint local_84;
  uint uStack_80;
  int local_7c;
  undefined1 local_78 [8];
  undefined1 *local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar20 = 0;
  if ((param_1 != 'V') || (DAT_14c7627ac == 0)) goto LAB_1406212ee;
  lVar36 = *param_2;
  local_d0 = *(undefined8 *)(lVar36 + 0x10);
  local_e0 = (ulonglong)*(uint *)(param_2[1] + 8);
  local_90 = (uint *)0x0;
  local_88 = 0;
  local_b8 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  local_b4 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0x80;
  uStack_80 = 0xffffffff;
  local_7c = 0;
  local_70 = (undefined1 *)0x0;
  local_68 = 0;
  pbVar10 = *(byte **)(lVar36 + 0x10);
  *(byte **)(lVar36 + 0x10) = pbVar10 + 1;
  bVar22 = *pbVar10;
  puVar29 = (undefined4 *)0x0;
  local_b2 = bVar22 & 1;
  if (bVar22 == 0) {
    local_c0 = FUN_144b33040;
LAB_1406213ae:
    FUN_144a29c16(param_2);
  }
  else if (bVar22 == 1) {
    local_c0 = (code *)&LAB_144b33252;
    goto LAB_1406213ae;
  }
  puVar31 = *(undefined2 **)(*param_2 + 0x10);
  uVar5 = *puVar31;
  *(undefined2 **)(*param_2 + 0x10) = puVar31 + 1;
  puVar31 = *(undefined2 **)(*param_2 + 0x10);
  uVar6 = *puVar31;
  *(undefined2 **)(*param_2 + 0x10) = puVar31 + 1;
  uStack_b6 = (undefined1)uVar6;
  uStack_b5 = (undefined1)((ushort)uVar6 >> 8);
  puVar11 = *(ushort **)(*param_2 + 0x10);
  local_b4 = *puVar11;
  *(ushort **)(*param_2 + 0x10) = puVar11 + 1;
  plVar12 = (longlong *)param_2[1];
  iVar18 = (int)plVar12[1];
  *(int *)(plVar12 + 1) = iVar18 + 2;
  local_b8 = uVar5;
  if ((uint)(*(int *)((longlong)plVar12 + 0xc) - iVar18) < 2) {
    FUN_1447403be(plVar12,iVar18);
  }
  *(undefined2 *)(*plVar12 + (longlong)iVar18) = uVar5;
  uVar5 = CONCAT11(uStack_b5,uStack_b6);
  plVar12 = (longlong *)param_2[1];
  iVar18 = (int)plVar12[1];
  *(int *)(plVar12 + 1) = iVar18 + 2;
  if ((uint)(*(int *)((longlong)plVar12 + 0xc) - iVar18) < 2) {
    FUN_1447403be(plVar12,iVar18);
  }
  uVar7 = local_b4;
  *(undefined2 *)(*plVar12 + (longlong)iVar18) = uVar5;
  if (bVar22 == 0) {
    puVar29 = (undefined4 *)(ulonglong)local_b4;
    plVar12 = (longlong *)param_2[1];
    iVar18 = (int)plVar12[1];
    *(int *)(plVar12 + 1) = iVar18 + 2;
    if ((uint)(*(int *)((longlong)plVar12 + 0xc) - iVar18) < 2) {
      FUN_1447403be(plVar12,iVar18);
    }
    *(ushort *)(*plVar12 + (longlong)iVar18) = uVar7;
  }
  lVar36 = *param_2;
  pbVar10 = *(byte **)(lVar36 + 0x10);
  bVar22 = *pbVar10;
  while ((byte)(bVar22 + 0xad) < 3) {
    *(byte **)(lVar36 + 0x10) = pbVar10 + 1;
    bVar22 = *pbVar10;
    puVar26 = *(undefined1 **)(*param_2 + 0x10);
    *(undefined1 **)(*param_2 + 0x10) = puVar26 + 1;
    uVar3 = *puVar26;
    local_c2 = CONCAT11(bVar22,uVar3);
    puVar31 = *(undefined2 **)(*param_2 + 0x10);
    uVar5 = *puVar31;
    *(undefined2 **)(*param_2 + 0x10) = puVar31 + 1;
    puVar11 = *(ushort **)(*param_2 + 0x10);
    uVar7 = *puVar11;
    *(ushort **)(*param_2 + 0x10) = puVar11 + 1;
    local_c6 = CONCAT22(uVar5,uVar7);
    if (uVar7 != local_b4) goto LAB_140621f22;
    puVar31 = *(undefined2 **)(*param_2 + 0x10);
    uVar6 = *puVar31;
    *(undefined2 **)(*param_2 + 0x10) = puVar31 + 1;
    puVar31 = *(undefined2 **)(*param_2 + 0x10);
    uVar8 = *puVar31;
    *(undefined2 **)(*param_2 + 0x10) = puVar31 + 1;
    uVar33 = (uint)CONCAT11(bVar22,uVar3);
    uVar17 = (uint)(bVar22 >> 5) ^ CONCAT22(uVar5,uVar7) - uVar33;
    uVar23 = uVar17 << 8 ^ (-0x61c88647 - uVar33) - uVar17;
    uVar33 = uVar23 >> 0xd ^ (uVar33 - uVar17) - uVar23;
    uVar34 = uVar33 >> 0xc ^ (uVar17 - uVar23) - uVar33;
    uVar17 = uVar34 << 0x10 ^ (uVar23 - uVar33) - uVar34;
    uVar23 = uVar17 >> 5 ^ (uVar33 - uVar34) - uVar17;
    uVar33 = uVar23 >> 3 ^ (uVar34 - uVar17) - uVar23;
    uVar17 = uVar33 << 10 ^ (uVar17 - uVar23) - uVar33;
    uVar17 = uVar17 >> 0xf ^ uVar23 - (uVar33 + uVar17);
    iVar18 = FUN_14062241e(&local_b0,uVar17);
    uVar20 = uStack_a8;
    if ((iVar18 == -1) || (local_b0 + (longlong)iVar18 * 0x20 == 0)) {
      if (local_7c == 0) {
        iVar18 = (int)uStack_a8;
        uVar28 = uStack_a8 & 0xffffffff;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uStack_a8 + 1);
        if (uStack_a8._4_4_ == iVar18) {
          FUN_1447711aa(&local_b0,uVar20 & 0xffffffff);
        }
        uVar23 = local_88;
        if (local_88 == 0) {
          iVar18 = -1;
        }
        else {
          iVar18 = local_88 + 0x1e;
          if (-1 < (int)(local_88 - 1)) {
            iVar18 = local_88 - 1;
          }
          iVar18 = iVar18 >> 5;
        }
        uVar33 = local_88 + 1;
        uVar34 = local_88 + 0x1f;
        if (-1 < (int)local_88) {
          uVar34 = local_88;
        }
        local_e8 = uVar28;
        if ((int)uVar34 >> 5 == iVar18) {
          local_88 = uVar33;
        }
        else {
          if ((int)local_84 <= (int)local_88) {
            if (local_88 + 0x20 < 0xa0) {
              local_84 = 0x80;
            }
            else {
              uVar33 = local_88 + 0x20 >> 5;
              if (local_84 + 0x1f < 0xa0) {
                uVar37 = 4;
                if (4 < uVar33) {
                  uVar37 = uVar33;
                }
              }
              else {
                uVar37 = (uVar33 * 3 >> 3) + uVar33 + 0x10;
              }
              uVar20 = FUN_144a3809e(uVar37 << 2,0);
              iVar18 = (int)(uVar20 >> 2);
              local_84 = 0xffffffe0;
              if ((int)uVar33 <= iVar18) {
                local_84 = iVar18 << 5;
              }
            }
            FUN_1446efbd8(local_a0,local_88);
            uVar33 = local_88 + 1;
          }
          uVar37 = uVar33 + 0x1f;
          if (-1 < (int)uVar33) {
            uVar37 = uVar33;
          }
          local_88 = uVar33;
          if ((int)uVar33 % 0x20 != 0) {
            puVar21 = local_90;
            if (local_90 == (uint *)0x0) {
              puVar21 = local_a0;
            }
            bVar22 = -(char)((int)uVar33 % 0x20);
            puVar21[(int)uVar37 >> 5] =
                 (puVar21[(int)uVar37 >> 5] << (bVar22 & 0x1f)) >> (bVar22 & 0x1f);
          }
        }
        lVar36 = (longlong)(int)local_e8;
        puVar21 = local_90;
        if (local_90 == (uint *)0x0) {
          puVar21 = local_a0;
        }
        bVar22 = (byte)uVar23 & 0x1f;
        puVar21[(int)uVar34 >> 5] =
             puVar21[(int)uVar34 >> 5] & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
      }
      else {
        local_e8 = (ulonglong)uStack_80;
        lVar36 = (longlong)(int)uStack_80;
        uStack_80 = *(uint *)(local_b0 + 4 + lVar36 * 0x20);
        local_7c = local_7c + -1;
        if (local_7c != 0) {
          *(undefined4 *)(local_b0 + (longlong)(int)uStack_80 * 0x20) = 0xffffffff;
        }
      }
      iVar18 = (int)local_e8;
      uVar23 = 1;
      puVar21 = local_90;
      if (local_90 == (uint *)0x0) {
        puVar21 = local_a0;
      }
      iVar19 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar19 = iVar18;
      }
      puVar21[iVar19 >> 5] = puVar21[iVar19 >> 5] | 1 << ((byte)local_e8 & 0x1f);
      lVar36 = lVar36 * 0x20;
      puVar29 = (undefined4 *)(local_b0 + lVar36);
      *(undefined2 *)(local_b0 + 4 + lVar36) = local_c2;
      *(undefined4 *)(local_b0 + lVar36) = local_c6;
      puVar2 = (undefined8 *)(local_b0 + 8 + lVar36);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(local_b0 + 0x18 + lVar36) = 0xffffffff;
      uVar33 = (int)uStack_a8 - local_7c;
      if (uVar33 == 1) {
LAB_14062177e:
        if (((int)uVar33 < 1) || ((int)uVar23 <= (int)local_68)) {
          uVar17 = local_68 - 1 & uVar17;
          puVar29[7] = uVar17;
          puVar26 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar26 = local_78;
          }
          puVar29[6] = *(undefined4 *)
                        (puVar26 + ((longlong)(int)local_68 - 1U & (longlong)(int)uVar17) * 4);
          puVar26 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar26 = local_78;
          }
          *(int *)(puVar26 + ((longlong)(int)local_68 - 1U & (longlong)(int)uVar17) * 4) =
               (int)local_e8;
        }
        else {
          local_68 = uVar23;
          if (local_70 != (undefined1 *)0x0) {
            FUN_1446efa72(&local_70,0,0,4);
          }
          uVar17 = local_68;
          if (local_68 == 1) {
            if (local_70 != (undefined1 *)0x0) {
              FUN_1446efa72(&local_70,0,0,4);
            }
LAB_1406217d1:
            uVar23 = 0;
            do {
              puVar26 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar26 = local_78;
              }
              *(undefined4 *)(puVar26 + (ulonglong)(local_68 + 0x7fffffff & uVar23) * 4) =
                   0xffffffff;
              uVar23 = uVar23 + 1;
            } while (uVar17 != uVar23);
          }
          else {
            if (local_68 == 0) goto LAB_140621ac9;
            FUN_1446efa72(&local_70,0,local_68,4);
            if (0 < (int)uVar17) goto LAB_1406217d1;
          }
          if (local_88 == 0) {
            uVar20 = 0;
            uVar28 = 1;
            uVar17 = 0;
            iVar18 = 0;
          }
          else {
            puVar21 = local_90;
            if (local_90 == (uint *)0x0) {
              puVar21 = local_a0;
            }
            uVar17 = *puVar21;
            if (uVar17 == 0) {
              iVar18 = local_88 + 0x1e;
              if (-1 < (int)(local_88 - 1)) {
                iVar18 = local_88 - 1;
              }
              uVar20 = 0;
              uVar23 = iVar18 >> 5;
              if (iVar18 >> 5 < 1) {
                uVar23 = 0;
              }
              iVar18 = 0;
              do {
                if (uVar23 == uVar20) goto LAB_140621ac9;
                iVar18 = iVar18 + 0x20;
                uVar17 = puVar21[uVar20 + 1];
                uVar20 = uVar20 + 1;
              } while (uVar17 == 0);
            }
            else {
              uVar20 = 0;
              iVar18 = 0;
            }
            uVar28 = (ulonglong)(-uVar17 & uVar17);
            uVar35 = uVar28 * 2 + 1;
            lVar36 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar36 == 0; lVar36 = lVar36 + -1) {
              }
            }
            uVar17 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
            if ((int)local_88 <= (int)uVar17) {
              uVar17 = local_88;
            }
          }
          if ((int)uVar17 < (int)local_88) {
            uVar23 = 0xffffffff;
            do {
              lVar36 = (longlong)(int)uVar17 * 0x20;
              bVar22 = *(byte *)(local_b0 + 5 + lVar36);
              uVar34 = (uint)CONCAT11(bVar22,*(undefined1 *)(local_b0 + 4 + lVar36));
              uVar33 = (uint)(bVar22 >> 5) ^ *(int *)(local_b0 + lVar36) - uVar34;
              uVar37 = uVar33 << 8 ^ (-0x61c88647 - uVar34) - uVar33;
              uVar39 = uVar37 >> 0xd ^ (uVar34 - uVar33) - uVar37;
              uVar34 = uVar39 >> 0xc ^ (uVar33 - uVar37) - uVar39;
              uVar33 = uVar34 << 0x10 ^ (uVar37 - uVar39) - uVar34;
              uVar37 = uVar33 >> 5 ^ (uVar39 - uVar34) - uVar33;
              uVar34 = uVar37 >> 3 ^ (uVar34 - uVar33) - uVar37;
              uVar33 = uVar34 << 10 ^ (uVar33 - uVar37) - uVar34;
              uVar35 = (longlong)(int)(uVar33 >> 0xf ^ uVar37 - (uVar34 + uVar33)) &
                       (longlong)(int)local_68 - 1U;
              iVar19 = (int)uVar35;
              *(int *)(local_b0 + 0x1c + lVar36) = iVar19;
              puVar26 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar26 = local_78;
              }
              *(undefined4 *)(local_b0 + 0x18 + lVar36) =
                   *(undefined4 *)(puVar26 + ((longlong)(int)local_68 - 1U & uVar35) * 4);
              puVar26 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar26 = local_78;
              }
              *(uint *)(puVar26 + ((longlong)iVar19 & (longlong)(int)local_68 - 1U) * 4) = uVar17;
              uVar23 = ~(uint)uVar28 & uVar23;
              puVar21 = local_90;
              if (local_90 == (uint *)0x0) {
                puVar21 = local_a0;
              }
              iVar19 = (int)uVar20;
              lVar36 = (longlong)iVar19;
              uVar17 = puVar21[lVar36] & uVar23;
              if (uVar17 == 0) {
                iVar24 = local_88 + 0x1e;
                if (-1 < (int)(local_88 - 1)) {
                  iVar24 = local_88 - 1;
                }
                iVar24 = iVar24 >> 5;
                iVar25 = iVar24;
                if (iVar24 < iVar19) {
                  iVar25 = iVar19;
                }
                if (iVar24 <= iVar19) break;
                lVar27 = 0;
                while( true ) {
                  iVar18 = iVar18 + 0x20;
                  uVar17 = puVar21[lVar36 + lVar27 + 1];
                  if (uVar17 != 0) break;
                  lVar27 = lVar27 + 1;
                  if (iVar25 - lVar36 == lVar27) goto LAB_140621ac9;
                }
                uVar20 = (ulonglong)(iVar19 + (int)lVar27 + 1);
                uVar23 = 0xffffffff;
              }
              uVar28 = (ulonglong)(-uVar17 & uVar17);
              uVar35 = uVar28 * 2 + 1;
              lVar36 = 0x3f;
              if (uVar35 != 0) {
                for (; uVar35 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                }
              }
              uVar17 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
            } while ((int)uVar17 < (int)local_88);
          }
        }
      }
      else {
        local_c0 = (code *)CONCAT44(CONCAT22(local_c0._6_2_,local_c2),local_c6);
        iVar18 = FUN_14062241e(&local_b0,uVar17);
        lVar36 = local_b0;
        if (iVar18 == -1) {
          if (3 < uVar33) {
            uVar20 = (ulonglong)(uVar33 & 0xfffffffe) + 0xf;
            lVar36 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar36 == 0; lVar36 = lVar36 + -1) {
              }
            }
            uVar23 = 1 << ((byte)lVar36 & 0x1f);
          }
          goto LAB_14062177e;
        }
        if (*(longlong *)(local_b0 + 8 + (longlong)iVar18 * 0x20) != 0) {
          FUN_1400020a8();
        }
        puVar38 = (undefined4 *)(lVar36 + (longlong)iVar18 * 0x20);
        uVar13 = *puVar29;
        uVar14 = puVar29[1];
        uVar15 = puVar29[2];
        uVar16 = puVar29[3];
        *(undefined8 *)(puVar38 + 4) = *(undefined8 *)(puVar29 + 4);
        *puVar38 = uVar13;
        puVar38[1] = uVar14;
        puVar38[2] = uVar15;
        puVar38[3] = uVar16;
        FUN_14803e318(&local_b0,local_e8);
      }
LAB_140621ac9:
      lVar36 = local_b0 + (longlong)(int)local_e8 * 0x20;
    }
    else {
      lVar36 = local_b0 + (longlong)iVar18 * 0x20;
    }
    puVar29 = &local_c6;
    iVar18 = *(int *)(lVar36 + 0x10);
    *(uint *)(lVar36 + 0x10) = iVar18 + 1U;
    if (*(uint *)(lVar36 + 0x14) < iVar18 + 1U) {
      FUN_140622490((longlong *)(lVar36 + 8),iVar18);
    }
    *(uint *)(*(longlong *)(lVar36 + 8) + (longlong)iVar18 * 4) = CONCAT22(uVar8,uVar6);
    lVar36 = *param_2;
    pbVar10 = *(byte **)(lVar36 + 0x10);
    bVar22 = *pbVar10;
  }
  if ((int)uStack_a8 == local_7c) {
LAB_140621f22:
    *(undefined8 *)(*param_2 + 0x10) = local_d0;
    plVar12 = (longlong *)param_2[1];
    iVar18 = (int)plVar12[1];
    iVar19 = (int)local_e0;
    if (iVar18 < iVar19) {
      *(int *)(plVar12 + 1) = iVar19;
      if ((uint)(*(int *)((longlong)plVar12 + 0xc) - iVar18) < (uint)(iVar19 - iVar18)) {
        FUN_1447403be(plVar12);
      }
      uVar20 = 0;
      memset((void *)((longlong)iVar18 + *plVar12),0,(longlong)(iVar19 - iVar18));
    }
    else {
      if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_e0);
      }
      if (iVar19 < iVar18) {
        *(int *)(plVar12 + 1) = iVar19;
      }
      uVar20 = 0;
    }
  }
  else {
    uVar30 = (undefined7)((ulonglong)puVar29 >> 8);
    if (local_88 == 0) {
      uVar28 = 1;
      uVar35 = 0;
      uVar17 = 0;
      iVar18 = 0;
    }
    else {
      puVar21 = local_90;
      if (local_90 == (uint *)0x0) {
        puVar21 = local_a0;
      }
      uVar17 = *puVar21;
      if (uVar17 == 0) {
        iVar18 = local_88 + 0x1e;
        if (-1 < (int)(local_88 - 1)) {
          iVar18 = local_88 - 1;
        }
        uVar35 = 0;
        uVar20 = (ulonglong)(uint)(iVar18 >> 5);
        if (iVar18 >> 5 < 1) {
          uVar20 = uVar35;
        }
        iVar18 = 0;
        do {
          if (uVar20 == uVar35) {
            uVar20 = CONCAT71(uVar30,1);
            goto LAB_140621fb3;
          }
          iVar18 = iVar18 + 0x20;
          uVar17 = puVar21[uVar35 + 1];
          uVar35 = uVar35 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar35 = 0;
        iVar18 = 0;
      }
      uVar28 = (ulonglong)(-uVar17 & uVar17);
      uVar20 = uVar28 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      uVar17 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      if ((int)local_88 <= (int)uVar17) {
        uVar17 = local_88;
      }
    }
    uVar20 = CONCAT71(uVar30,1);
    local_e8 = uVar35;
    if (uVar17 != local_88) {
      uVar23 = 0xffffffff;
      local_d8 = (ulonglong)local_88;
      do {
        local_d0 = CONCAT44(local_d0._4_4_,uVar23);
        local_e0 = CONCAT44(local_e0._4_4_,iVar18);
        sVar9 = *(short *)(local_b0 + 0x10 + (longlong)(int)uVar17 * 0x20);
        if (sVar9 != 0) {
          puVar31 = (undefined2 *)(local_b0 + (longlong)(int)uVar17 * 0x20);
          if (*(char *)(puVar31 + 2) == '\x01') {
            cVar4 = *(char *)((longlong)puVar31 + 5);
            if (cVar4 == 'S') {
              local_c0 = FUN_144b3332e;
            }
            else if (cVar4 == 'T') {
              local_c0 = FUN_144b3357e;
            }
            else {
              if (cVar4 != 'U') goto LAB_140621cbc;
              local_c0 = FUN_14803e38a;
            }
LAB_140621cb7:
            FUN_144a29c16(param_2,&local_c0);
          }
          else {
            cVar4 = *(char *)((longlong)puVar31 + 5);
            if (local_b2 == 1) {
              if (cVar4 == 'S') {
                local_c0 = FUN_144b337c0;
              }
              else if (cVar4 == 'T') {
                local_c0 = FUN_144b33886;
              }
              else {
                if (cVar4 != 'U') goto LAB_140621cbc;
                local_c0 = FUN_14803e73e;
              }
              goto LAB_140621cb7;
            }
            if (cVar4 == 'S') {
              local_c0 = FUN_144b3394c;
              goto LAB_140621cb7;
            }
            if (cVar4 == 'T') {
              local_c0 = FUN_144b33c68;
              goto LAB_140621cb7;
            }
            if (cVar4 == 'U') {
              local_c0 = FUN_14803edea;
              goto LAB_140621cb7;
            }
          }
LAB_140621cbc:
          uVar5 = puVar31[1];
          plVar12 = (longlong *)param_2[1];
          iVar18 = (int)plVar12[1];
          *(int *)(plVar12 + 1) = iVar18 + 2;
          if ((uint)(*(int *)((longlong)plVar12 + 0xc) - iVar18) < 2) {
            FUN_1447403be(plVar12,iVar18);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar18) = uVar5;
          uVar5 = *puVar31;
          plVar12 = (longlong *)param_2[1];
          iVar18 = (int)plVar12[1];
          *(int *)(plVar12 + 1) = iVar18 + 2;
          if ((uint)(*(int *)((longlong)plVar12 + 0xc) - iVar18) < 2) {
            FUN_1447403be(plVar12,iVar18);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar18) = uVar5;
          plVar12 = (longlong *)param_2[1];
          iVar18 = (int)plVar12[1];
          *(int *)(plVar12 + 1) = iVar18 + 2;
          if ((uint)(*(int *)((longlong)plVar12 + 0xc) - iVar18) < 2) {
            FUN_1447403be(plVar12,iVar18);
          }
          *(short *)(*plVar12 + (longlong)iVar18) = sVar9;
          if ((longlong)*(int *)(puVar31 + 8) != 0) {
            puVar32 = *(undefined2 **)(puVar31 + 4);
            puVar31 = puVar32 + (longlong)*(int *)(puVar31 + 8) * 2;
            do {
              uVar5 = *puVar32;
              plVar12 = (longlong *)param_2[1];
              iVar18 = (int)plVar12[1];
              *(int *)(plVar12 + 1) = iVar18 + 2;
              if ((uint)(*(int *)((longlong)plVar12 + 0xc) - iVar18) < 2) {
                FUN_1447403be(plVar12,iVar18);
              }
              *(undefined2 *)(*plVar12 + (longlong)iVar18) = uVar5;
              uVar5 = puVar32[1];
              plVar12 = (longlong *)param_2[1];
              iVar18 = (int)plVar12[1];
              *(int *)(plVar12 + 1) = iVar18 + 2;
              if ((uint)(*(int *)((longlong)plVar12 + 0xc) - iVar18) < 2) {
                FUN_1447403be(plVar12,iVar18);
              }
              *(undefined2 *)(*plVar12 + (longlong)iVar18) = uVar5;
              puVar32 = puVar32 + 2;
            } while (puVar32 != puVar31);
          }
        }
        uVar23 = (uint)local_d0 & ~(uint)uVar28;
        puVar21 = local_90;
        if (local_90 == (uint *)0x0) {
          puVar21 = local_a0;
        }
        iVar19 = (int)local_e8;
        lVar36 = (longlong)iVar19;
        uVar17 = puVar21[lVar36] & uVar23;
        iVar18 = (int)local_e0;
        if (uVar17 == 0) {
          iVar24 = local_88 + 0x1e;
          if (-1 < (int)(local_88 - 1)) {
            iVar24 = local_88 - 1;
          }
          iVar24 = iVar24 >> 5;
          iVar18 = (int)local_e0 + 0x20;
          iVar25 = iVar24;
          if (iVar24 < iVar19) {
            iVar25 = iVar19;
          }
          if (iVar19 < iVar24) {
            lVar27 = 0;
            do {
              uVar17 = puVar21[lVar36 + lVar27 + 1];
              if (uVar17 != 0) {
                local_e8 = (ulonglong)(iVar19 + (int)lVar27 + 1);
                uVar23 = 0xffffffff;
                goto LAB_140621e5a;
              }
              iVar18 = iVar18 + 0x20;
              lVar27 = lVar27 + 1;
            } while (iVar25 - lVar36 != lVar27);
            uVar23 = 0xffffffff;
            lVar36 = (longlong)iVar25;
          }
          local_e8 = lVar36 + 1;
          uVar17 = local_88;
        }
        else {
LAB_140621e5a:
          uVar28 = (ulonglong)(-uVar17 & uVar17);
          uVar35 = uVar28 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          uVar17 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          if ((int)local_88 <= (int)uVar17) {
            uVar17 = local_88;
          }
        }
      } while (uVar17 != (uint)local_d8);
    }
  }
LAB_140621fb3:
  local_68 = 0;
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 == 0) {
    uVar35 = 0;
    uVar28 = 1;
    uVar17 = 0;
    iVar18 = 0;
  }
  else {
    puVar21 = local_90;
    if (local_90 == (uint *)0x0) {
      puVar21 = local_a0;
    }
    uVar17 = *puVar21;
    if (uVar17 == 0) {
      iVar18 = local_88 + 0x1e;
      if (-1 < (int)(local_88 - 1)) {
        iVar18 = local_88 - 1;
      }
      uVar35 = 0;
      uVar28 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar28 = uVar35;
      }
      iVar18 = 0;
      do {
        if (uVar28 == uVar35) goto LAB_140622101;
        iVar18 = iVar18 + 0x20;
        uVar17 = puVar21[uVar35 + 1];
        uVar35 = uVar35 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar35 = 0;
      iVar18 = 0;
    }
    uVar28 = (ulonglong)(-uVar17 & uVar17);
    uVar1 = uVar28 * 2 + 1;
    lVar36 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar36 == 0; lVar36 = lVar36 + -1) {
      }
    }
    uVar17 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
    if ((int)local_88 <= (int)uVar17) {
      uVar17 = local_88;
    }
  }
  if ((int)uVar17 < (int)local_88) {
    uVar33 = 0xffffffff;
    uVar23 = local_88;
    do {
      if (*(longlong *)(local_b0 + 8 + (longlong)(int)uVar17 * 0x20) != 0) {
        FUN_1400020a8();
        uVar23 = local_88;
      }
      uVar33 = uVar33 & ~(uint)uVar28;
      puVar21 = local_90;
      if (local_90 == (uint *)0x0) {
        puVar21 = local_a0;
      }
      iVar19 = (int)uVar35;
      lVar36 = (longlong)iVar19;
      uVar17 = puVar21[lVar36] & uVar33;
      if (uVar17 == 0) {
        iVar24 = uVar23 + 0x1e;
        if (-1 < (int)(uVar23 - 1)) {
          iVar24 = uVar23 - 1;
        }
        iVar24 = iVar24 >> 5;
        iVar25 = iVar24;
        if (iVar24 < iVar19) {
          iVar25 = iVar19;
        }
        if (iVar24 <= iVar19) break;
        lVar27 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar17 = puVar21[lVar36 + lVar27 + 1];
          if (uVar17 != 0) break;
          lVar27 = lVar27 + 1;
          if (iVar25 - lVar36 == lVar27) goto LAB_140622101;
        }
        uVar35 = (ulonglong)(iVar19 + (int)lVar27 + 1);
        uVar33 = 0xffffffff;
      }
      uVar28 = (ulonglong)(-uVar17 & uVar17);
      uVar1 = uVar28 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      uVar17 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
    } while ((int)uVar17 < (int)uVar23);
  }
LAB_140622101:
  uVar28 = uStack_a8 >> 0x20;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  if ((int)uVar28 != 0) {
    FUN_1446f4a44(&local_b0,0);
  }
  uStack_80 = 0xffffffff;
  local_7c = 0;
  local_88 = 0;
  if (0x80 < local_84) {
    local_84 = 0x80;
    FUN_1446efbd8(local_a0,0);
  }
  if (local_90 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
LAB_1406212ee:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 14062241e FUN_14062241e body=114 status=ok
// SIG undefined FUN_14062241e(void)

int FUN_14062241e(longlong *param_1,uint param_2,short *param_3)

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
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(short *)(lVar2 + lVar4) == *param_3) &&
             (*(short *)(lVar2 + 2 + lVar4) == param_3[1])) &&
            (*(char *)(lVar2 + 4 + lVar4) == (char)param_3[2])) &&
           (*(char *)(lVar2 + 5 + lVar4) == *(char *)((longlong)param_3 + 5))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140622490 FUN_140622490 body=353 status=ok
// SIG undefined FUN_140622490(void)

void FUN_140622490(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140622517;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_140622517:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,2);
  return;
}



// FUNCTION 1406225f2 FUN_1406225f2 body=403 status=ok
// SIG undefined FUN_1406225f2(void)

void FUN_1406225f2(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar6;
      }
    }
    FUN_140622786(param_1 + 8,CONCAT44(iVar3,uVar2));
    local_40 = 0;
    uVar4 = (**(code **)(*(longlong *)(param_2 + 0x2b8) + 0x18))(param_2 + 0x2b8);
    iVar3 = *(int *)(param_1 + 0x60);
    uVar2 = iVar3 + 1;
    *(uint *)(param_1 + 0x60) = uVar2;
    if (*(uint *)(param_1 + 100) < uVar2) {
      FUN_140e37784((longlong *)(param_1 + 0x58));
    }
    lVar7 = *(longlong *)(param_1 + 0x58);
    lVar5 = (longlong)iVar3 * 0xe0;
    *(undefined8 *)(lVar7 + 0x10 + lVar5) = 0;
    *(undefined8 *)(lVar7 + lVar5) = 0;
    ((undefined8 *)(lVar7 + lVar5))[1] = 0;
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar7 + 0x30 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 0x38 + lVar5) = 0x3ff0000000000000;
    puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar7 + 0x50 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar7 + 0x60 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(lVar7 + 0x70 + lVar5) = 0;
    puVar1 = (undefined8 *)(lVar7 + 0x80 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar7 + 0xc0 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 200 + lVar5) = uVar4;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140622786 FUN_140622786 body=266 status=ok
// SIG undefined FUN_140622786(void)

undefined8 FUN_140622786(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar5 = (longlong)*(int *)((longlong)plVar7 + uVar4 * 4);
    if (lVar5 != -1) {
      lVar6 = *param_1;
      lVar5 = lVar5 * 0x100;
      local_48 = *(undefined8 *)(lVar6 + lVar5);
      local_50 = param_2;
      cVar2 = FUN_140206d5c();
      if (cVar2 == '\0') {
        lVar5 = lVar6 + lVar5;
        do {
          lVar6 = lVar5;
          lVar5 = (longlong)*(int *)(lVar6 + 0xf0);
          if (lVar5 == -1) goto LAB_1406227ae;
          lVar1 = *param_1;
          lVar5 = lVar5 * 0x100;
          local_48 = *(undefined8 *)(lVar1 + lVar5);
          local_50 = param_2;
          cVar2 = FUN_140206d5c();
          lVar5 = lVar1 + lVar5;
        } while (cVar2 == '\0');
        puVar8 = (undefined4 *)(lVar6 + 0xf0);
      }
      else {
        puVar8 = (undefined4 *)((longlong)plVar7 + uVar4 * 4);
      }
      FUN_1406371ea(param_1,*puVar8);
      uVar3 = 1;
    }
  }
LAB_1406227ae:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140622892 FUN_140622892 body=40 status=ok
// SIG undefined FUN_140622892(void)

undefined8 FUN_140622892(undefined8 param_1,int param_2)

{
  FUN_1406228ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406228ba FUN_1406228ba body=83 status=ok
// SIG undefined FUN_1406228ba(void)

void FUN_1406228ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b911b10;
  param_1[0x72] = &PTR_FUN_14b9121c0;
  if (param_1[0xdd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  FUN_140612a20(param_1);
  return;
}



// FUNCTION 14062290e FUN_14062290e body=172 status=ok
// SIG undefined FUN_14062290e(void)

byte FUN_14062290e(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  
  bVar5 = 0;
  cVar3 = FUN_1402bfec4(param_1,0);
  if (cVar3 == '\0') {
    if (((((*(byte *)(param_1 + 0xc0) & 1) == 0) ||
         (bVar5 = *(byte *)(param_1 + 0xc5), (int)(uint)bVar5 <= param_2)) ||
        (bVar1 = *(byte *)(param_1 + 0xc1), bVar5 <= bVar1)) || (*(byte *)(param_1 + 0xc6) != bVar5)
       ) {
      bVar5 = 0;
    }
    else {
      bVar5 = (byte)param_2;
      if (param_2 < (int)(uint)bVar1) {
        bVar5 = bVar1;
      }
      *(byte *)(param_1 + 0xc6) = bVar5;
      *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 4;
      lVar4 = FUN_14001cc68(0x110,0x10);
      FUN_1406229ba(lVar4,param_1);
      lVar2 = *(longlong *)(param_1 + 0x38);
      if (lVar2 != lVar4) {
        *(longlong *)(param_1 + 0x38) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + 1;
          UNLOCK();
        }
        if (lVar2 != 0) {
          FUN_14128f1bc();
        }
      }
      bVar5 = *(byte *)(*(longlong *)(param_1 + 0x38) + 0x5c) ^ 1;
    }
  }
  return bVar5;
}



// FUNCTION 1406229ba FUN_1406229ba body=322 status=ok
// SIG undefined FUN_1406229ba(void)

undefined8 * FUN_1406229ba(undefined8 *param_1,longlong *param_2)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  code *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  undefined8 *local_a0;
  longlong local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1403225d8();
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a77dbd0;
  param_1[0x20] = 0;
  local_88[0] = 0;
  local_78 = (longlong *)0x0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14a78d6d0;
  local_c8[0] = FUN_1433bc596;
  local_a0 = param_1;
  (**(code **)(*param_2 + 0x388))(param_2);
  *(undefined4 *)(param_1 + 0xd) = 3;
  FUN_140622afe(param_1 + 0xe,local_c8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_140622afe(param_1 + 0x18,local_88);
  if (local_c8[0] != (code *)0x0) {
    pppuVar1 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar1 = &local_a8;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_88[0] != 0) {
    plVar2 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar2 = local_68;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140622afe FUN_140622afe body=292 status=ok
// SIG undefined FUN_140622afe(void)

longlong * FUN_140622afe(longlong *param_1,longlong *param_2)

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



// FUNCTION 140622c24 FUN_140622c24 body=113 status=ok
// SIG undefined FUN_140622c24(void)

int FUN_140622c24(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_140622c95(lVar1 + (longlong)iVar4 * 0x50,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140622c95 FUN_140622c95 body=77 status=ok
// SIG undefined FUN_140622c95(void)

undefined8 FUN_140622c95(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0x38) == *(char *)(param_2 + 0x38)) &&
     (*(char *)(param_1 + 0x39) == *(char *)(param_2 + 0x39))) {
    uVar2 = 0;
    do {
      uVar1 = FUN_140622ce2(param_1,param_2);
      if ((char)uVar1 == '\0') {
        return uVar1;
      }
      param_1 = param_1 + 7;
      param_2 = param_2 + 7;
      bVar3 = uVar2 < 7;
      uVar2 = uVar2 + 1;
    } while (bVar3);
  }
  return uVar1;
}



// FUNCTION 140622ce2 FUN_140622ce2 body=16 status=ok
// SIG undefined FUN_140622ce2(void)

undefined4 FUN_140622ce2(uint *param_1,uint *param_2)

{
  return CONCAT31((int3)((*param_1 ^ *param_2) >> 8),
                  *(int *)((longlong)param_1 + 3) == *(int *)((longlong)param_2 + 3) &&
                  (*param_1 ^ *param_2) == 0);
}



// FUNCTION 140622cf2 FUN_140622cf2 body=610 status=ok
// SIG undefined FUN_140622cf2(void)

void FUN_140622cf2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (undefined4)DAT_14c8464e0;
  uStack_d4 = DAT_14c8464e0._4_4_;
  uStack_d0 = (undefined4)DAT_14c8464e8;
  uStack_cc = DAT_14c8464e8._4_4_;
  local_c8 = DAT_14c8464f0;
  local_c0 = (undefined4)DAT_14c8464e0;
  uStack_bc = DAT_14c8464e0._4_4_;
  uStack_b8 = (undefined4)DAT_14c8464e8;
  uStack_b4 = DAT_14c8464e8._4_4_;
  local_b0 = DAT_14c8464f0;
  local_a8 = (undefined4)DAT_14c8464e0;
  uStack_a4 = DAT_14c8464e0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8464e8;
  uStack_9c = DAT_14c8464e8._4_4_;
  local_98 = DAT_14c8464f0;
  local_90 = (undefined4)DAT_14c8464e0;
  uStack_8c = DAT_14c8464e0._4_4_;
  uStack_88 = (undefined4)DAT_14c8464e8;
  uStack_84 = DAT_14c8464e8._4_4_;
  local_80 = DAT_14c8464f0;
  local_68 = DAT_14c8464f0;
  local_78 = (undefined4)DAT_14c8464e0;
  uStack_74 = DAT_14c8464e0._4_4_;
  uStack_70 = (undefined4)DAT_14c8464e8;
  uStack_6c = DAT_14c8464e8._4_4_;
  local_50 = DAT_14c8464f0;
  local_60 = (undefined4)DAT_14c8464e0;
  uStack_5c = DAT_14c8464e0._4_4_;
  uStack_58 = (undefined4)DAT_14c8464e8;
  uStack_54 = DAT_14c8464e8._4_4_;
  local_38 = DAT_14c8464f0;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_e8);
            goto LAB_140622e3c;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_e8) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_e8,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_e8,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_f0 = (undefined4)plVar1[6];
        local_f8 = 0;
        FUN_1400746b0(plVar1,&local_e8,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_e8,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
LAB_140622e3c:
  puVar6 = &local_e8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140622f56(param_1,puVar6);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140622f56 FUN_140622f56 body=3223 status=ok
// SIG undefined FUN_140622f56(void)

void FUN_140622f56(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  uint *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  double dVar7;
  char cVar8;
  undefined2 uVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong lVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  undefined2 **ppuVar22;
  uint uVar23;
  longlong *plVar24;
  int iVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  longlong *plVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  undefined1 auStack_258 [32];
  longlong *local_238;
  longlong *local_228;
  double *local_220;
  undefined2 *local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f8 [20];
  uint local_e4;
  longlong *local_e0 [2];
  longlong *local_d0;
  undefined4 local_b8 [2];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((param_1[0x1fa] == 0) ||
     (((lVar10 = param_1[0x16], lVar10 == 0 && (lVar10 = FUN_1448abda6(param_1), lVar10 == 0)) ||
      (lVar12 = param_1[0x148], lVar12 == 0)))) goto LAB_140623a0f;
  local_e4 = 0xffffffff;
  if ((longlong)*(int *)(lVar12 + 0x448) == 0) goto LAB_140623a0f;
  puVar26 = *(ulonglong **)(lVar12 + 0x440);
  puVar27 = puVar26 + *(int *)(lVar12 + 0x448);
  local_220 = (double *)(param_2 + 2);
  fVar41 = 3.4028235e+38;
  uVar21 = 0;
  uVar23 = 0xffffffff;
  local_228 = param_1;
  do {
    if (((longlong *)*puVar26 != (longlong *)0x0) &&
       (cVar8 = (**(code **)(*(longlong *)*puVar26 + 0x10))(), cVar8 != '\0')) {
      uVar5 = *puVar26;
      dVar32 = (double)param_2[2] - *(double *)(uVar5 + 0x20);
      dVar7 = (double)param_2[3] - *(double *)(uVar5 + 0x28);
      dVar33 = (double)param_2[4] - *(double *)(uVar5 + 0x30);
      fVar30 = (float)(dVar33 * dVar33 + dVar7 * dVar7 + dVar32 * dVar32);
      if ((fVar30 < fVar41) &&
         (local_e4 = 0xffffffff, uVar21 = uVar5, fVar41 = fVar30, uVar23 = local_e4,
         *(int *)(lVar12 + 0x458) != *(int *)(lVar12 + 0x484))) {
        uVar18 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        lVar15 = *(longlong *)(lVar12 + 0x490);
        if (*(longlong *)(lVar12 + 0x490) == 0) {
          lVar15 = lVar12 + 0x488;
        }
        iVar25 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(lVar12 + 0x498) - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4);
        if (iVar25 != -1) {
          do {
            puVar2 = (ulonglong *)(*(longlong *)(lVar12 + 0x450) + (longlong)iVar25 * 0x18);
            if (*puVar2 == uVar5) {
              if (((puVar2 != (ulonglong *)0x0) && (puVar2 + 1 != (ulonglong *)0x0)) &&
                 ((uVar18 = (uint)puVar2[1], uVar18 != 0xffffffff &&
                  (local_e4 = uVar18, uVar23 = uVar18, (int)uVar18 < 0)))) {
                local_e4 = 0xffffffff;
                uVar23 = local_e4;
              }
              break;
            }
            iVar25 = (int)puVar2[2];
          } while (iVar25 != -1);
        }
      }
    }
    plVar28 = local_228;
    puVar26 = puVar26 + 1;
  } while (puVar26 != puVar27);
  if (uVar21 == 0) goto LAB_140623a0f;
  lVar12 = param_2[1];
  if (lVar12 == 0) {
    lVar12 = 0;
    bVar29 = false;
  }
  else {
    lVar15 = *param_2;
    if ((lVar15 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar15);
      lVar12 = param_2[1];
    }
    bVar29 = lVar12 != lVar15;
  }
  dVar7 = (double)param_2[4];
  dVar37 = dVar7 - *(double *)(uVar21 + 0x30);
  dVar39 = (double)param_2[3] - *(double *)(uVar21 + 0x28);
  dVar32 = (double)param_2[2] - *(double *)(uVar21 + 0x20);
  dVar38 = DAT_14c8464e8;
  dVar40 = DAT_14c8464f0;
  dVar33 = DAT_14c8464e0;
  if (bVar29) {
    dVar38 = (*(double *)(lVar12 + 0x260) * (double)param_2[0x16] -
             *(double *)(lVar12 + 0x270) * (double)param_2[0x14]) + (double)param_2[0xf];
    dVar40 = ((double)param_2[0x14] * *(double *)(lVar12 + 0x268) -
             *(double *)(lVar12 + 0x260) * (double)param_2[0x15]) + (double)param_2[0x10];
    dVar33 = ((double)param_2[0x15] * *(double *)(lVar12 + 0x270) -
             *(double *)(lVar12 + 0x268) * (double)param_2[0x16]) + (double)param_2[0xe];
  }
  fVar30 = (float)(((((double)param_2[0x11] * dVar39 - dVar32 * (double)param_2[0x12]) +
                    (double)param_2[0xd]) - dVar40) * (double)param_2[7] +
                  ((((double)param_2[0x12] * dVar37 - dVar39 * (double)param_2[0x13]) +
                   (double)param_2[0xb]) - dVar33) * (double)param_2[5] +
                  (((dVar32 * (double)param_2[0x13] - dVar37 * (double)param_2[0x11]) +
                   (double)param_2[0xc]) - dVar38) * (double)param_2[6]);
  lVar12 = plVar28[0x1fa];
  fVar41 = *(float *)(lVar12 + 0x300);
  if ((((bool)(bVar29 & 0 < (int)uVar23)) && (*(char *)(lVar12 + 0x318) == '\x01')) &&
     (*(int *)(uVar21 + 0x1a8) != -1)) {
    fVar35 = 0.0;
    if (0.0 < *(float *)(lVar12 + 0x31c)) {
      lVar15 = uVar21 + 0x78;
      if (*(longlong *)(uVar21 + 0x80) != 0) {
        lVar15 = *(longlong *)(uVar21 + 0x80);
      }
      if ((longlong)*(int *)(uVar21 + 0x88) != 0) {
        lVar19 = 0;
        do {
          if (((*(longlong *)(lVar15 + lVar19) != 0) &&
              (lVar13 = *(longlong *)(*(longlong *)(lVar15 + lVar19) + 0x10), lVar13 != 0)) &&
             (*(char *)(lVar13 + 0x18) == '\x01')) {
            if (*(char *)(lVar13 + 0x1c) != '\b') {
              lVar13 = 0;
            }
            fVar35 = fVar35 + *(float *)(lVar13 + 0x68);
          }
          lVar19 = lVar19 + 8;
        } while ((longlong)*(int *)(uVar21 + 0x88) * 8 != lVar19);
      }
    }
    if (*(float *)(lVar12 + 0x31c) <= fVar35) {
      puVar17 = (undefined8 *)(lVar12 + 0x350);
      ppuVar22 = &local_218;
      for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
        *ppuVar22 = (undefined2 *)*puVar17;
        puVar17 = puVar17 + 1;
        ppuVar22 = ppuVar22 + 1;
      }
      dVar32 = local_220[1] + (double)local_1f8._8_8_;
      local_1e8 = dVar7 + local_1e8;
      dStack_1e0 = dStack_1e0 + 0.0;
      local_1f8._8_4_ = SUB84(dVar32,0);
      local_1f8._0_8_ = *local_220 + (double)local_1f8._0_8_;
      local_1f8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      local_e0[0] = (longlong *)((ulonglong)local_e0[0] & 0xffffffffffffff00);
      local_b8[0] = 0;
      FUN_1456bb102(local_e0,plVar28);
      FUN_1418a10ac(lVar12 + 800,plVar28,&local_218);
      FUN_1448173f8(local_b8);
      if (((char)local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
      uVar23 = local_e4;
      puVar17 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar17 = 0;
      *(uint *)(puVar17 + 1) = uVar23;
      if (puVar17 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)plVar28[0x1f0];
        plVar28[0x1f0] = (longlong)puVar17;
        *puVar6 = puVar17;
      }
    }
  }
  if (fVar30 < fVar41) goto LAB_140623a0f;
  dVar7 = *(double *)(lVar10 + 0x6d0);
  fVar34 = (float)dVar7 - *(float *)(plVar28 + 0x1fd);
  fVar41 = *(float *)(param_2 + 0x17);
  lVar10 = plVar28[0x1fa];
  fVar35 = *(float *)(lVar10 + 0x2f8);
  fVar31 = *(float *)(lVar10 + 0x304);
  if (((fVar34 < fVar35) &&
      (fVar36 = *(float *)((longlong)plVar28 + 0xfec) * *(float *)(lVar10 + 0x2fc),
      fVar31 = (fVar31 - fVar36) * (float)(-(uint)(0.0 < fVar35) & (uint)(fVar34 / fVar35)) + fVar36
      , fVar41 <= fVar31)) || (fVar41 <= fVar31)) goto LAB_140623a0f;
  dVar32 = *(double *)(uVar21 + 0x20);
  dVar33 = *(double *)(uVar21 + 0x28);
  dVar38 = *(double *)(uVar21 + 0x30);
  if ((int)plVar28[0x1ff] != *(int *)((longlong)plVar28 + 0x1024)) {
    plVar16 = plVar28 + 0x205;
    if ((longlong *)plVar28[0x206] != (longlong *)0x0) {
      plVar16 = (longlong *)plVar28[0x206];
    }
    uVar23 = *(uint *)((longlong)plVar16 + (ulonglong)((int)plVar28[0x207] - 1U & local_e4) * 4);
    if (uVar23 != 0xffffffff) {
      do {
        puVar3 = (uint *)(plVar28[0x1fe] + (longlong)(int)uVar23 * 0x28);
        if (*puVar3 == local_e4) {
          if ((((ulonglong)(puVar3 + 2) & 0xfffffffffffffff7) != 0) &&
             (dVar37 = *(double *)(puVar3 + 2) - dVar32, dVar40 = *(double *)(puVar3 + 4) - dVar33,
             dVar39 = *(double *)(puVar3 + 6) - dVar38,
             dVar39 * dVar39 + dVar40 * dVar40 + dVar37 * dVar37 <=
             (double)*(float *)(lVar10 + 0x310))) goto LAB_140623a0f;
          break;
        }
        uVar23 = puVar3[8];
      } while (uVar23 != 0xffffffff);
    }
  }
  pdVar11 = (double *)FUN_140d94f9a(plVar28 + 0x1fe,local_e4,&local_e4);
  *pdVar11 = dVar32;
  pdVar11[1] = dVar33;
  pdVar11[2] = dVar38;
  lVar10 = FUN_1449e3f1e();
  if (lVar10 != 0) {
    local_e0[0] = *(longlong **)(plVar28[0x1fa] + 0x18);
    FUN_1400021e4(local_e0,&local_218);
    puVar20 = local_218;
    if ((int)local_210 == 0) {
      puVar20 = &DAT_149dfb77a;
    }
    FUN_140056680(local_f8,puVar20);
    lVar12 = plVar28[0x16];
    if (lVar12 == 0) {
      lVar12 = FUN_1448abda6(plVar28);
    }
    FUN_14084feb6(local_e0,lVar12,local_f8);
    if (local_218 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar16 = local_e0[0];
    if (local_e0[0] != (longlong *)0x0) {
      lVar15 = param_2[2];
      lVar19 = param_2[3];
      lVar12 = param_2[4];
      plVar24 = local_e0[0] + 0x28;
      uVar23 = *(uint *)((longlong)local_e0[0] + 0x1d4);
      iVar25 = 0;
      *(undefined4 *)(local_e0[0] + 0x3a) = 0;
      if ((int)uVar23 < 0) {
        FUN_147f80112(plVar24,0);
        iVar25 = (int)plVar16[0x3a];
        uVar23 = *(uint *)((longlong)plVar16 + 0x1d4);
      }
      *(undefined1 *)((longlong)plVar16 + 0x26c) = 0;
      *(uint *)(plVar16 + 0x3a) = iVar25 + 1U;
      if (uVar23 < iVar25 + 1U) {
        FUN_140089f7a(plVar24,iVar25);
      }
      if ((longlong *)plVar16[0x38] != (longlong *)0x0) {
        plVar24 = (longlong *)plVar16[0x38];
      }
      lVar13 = (longlong)iVar25;
      plVar24[lVar13 * 0x10] = 0;
      (plVar24 + lVar13 * 0x10)[1] = 0;
      plVar24[lVar13 * 0x10 + 2] = 0;
      (plVar24 + lVar13 * 0x10 + 2)[1] = 0x3ff0000000000000;
      plVar24[lVar13 * 0x10 + 4] = lVar15;
      (plVar24 + lVar13 * 0x10 + 4)[1] = lVar19;
      plVar24[lVar13 * 0x10 + 6] = lVar12;
      (plVar24 + lVar13 * 0x10 + 6)[1] = 0;
      plVar4 = plVar24 + lVar13 * 0x10 + 8;
      *(undefined4 *)plVar4 = 0;
      *(undefined4 *)((longlong)plVar4 + 4) = 0x3ff00000;
      *(undefined4 *)(plVar4 + 1) = 0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0x3ff00000;
      plVar24[lVar13 * 0x10 + 10] = 0x3ff0000000000000;
      (plVar24 + lVar13 * 0x10 + 10)[1] = 0;
      plVar24[lVar13 * 0x10 + 0xc] = 0x3f800000;
      *(undefined2 *)(plVar24 + lVar13 * 0x10 + 0xd) = 0;
      *(undefined8 *)((longlong)plVar24 + lVar13 * 0x80 + 0x6c) = 0;
      FUN_1447906c0(plVar16,0);
      plVar16 = local_e0[0];
      lVar12 = *(longlong *)(lVar10 + 0x3a0);
      if (lVar12 == 0) {
        uVar14 = FUN_1407f787c();
        lVar12 = FUN_14477b664(uVar14);
        *(longlong *)(lVar10 + 0x3a0) = lVar12;
      }
      lVar15 = *(longlong *)(lVar10 + 0x3a8);
      if (((lVar15 == 0) && (lVar15 = 0, lVar12 != 0)) && (*(longlong *)(lVar10 + 0x398) != 0)) {
        plVar24 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar24 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar24 + 0x108))(plVar24), cVar8 == '\0')) {
          lVar15 = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar24 + 0x110))(plVar24);
          lVar15 = FUN_144aff482(uVar14,(longlong *)(lVar10 + 0x398));
        }
        *(longlong *)(lVar10 + 0x3a8) = lVar15;
      }
      local_238 = (longlong *)((ulonglong)local_238 & 0xffffffffffffff00);
      FUN_1447997cc(plVar16,lVar15,fVar30,0);
      plVar16 = local_e0[0];
      lVar12 = *(longlong *)(lVar10 + 0x3b8);
      if (lVar12 == 0) {
        uVar14 = FUN_1407f787c();
        lVar12 = FUN_14477b664(uVar14);
        *(longlong *)(lVar10 + 0x3b8) = lVar12;
      }
      lVar15 = *(longlong *)(lVar10 + 0x3c0);
      if (((lVar15 == 0) && (lVar15 = 0, lVar12 != 0)) && (*(longlong *)(lVar10 + 0x3b0) != 0)) {
        plVar24 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar24 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar24 + 0x108))(plVar24), cVar8 == '\0')) {
          lVar15 = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar24 + 0x110))(plVar24);
          lVar15 = FUN_144aff482(uVar14,(longlong *)(lVar10 + 0x3b0));
        }
        *(longlong *)(lVar10 + 0x3c0) = lVar15;
      }
      local_238 = (longlong *)((ulonglong)local_238 & 0xffffffffffffff00);
      FUN_1447997cc(plVar16,lVar15,fVar41,0);
      lVar12 = plVar28[0x1fa];
      if (*(char *)(lVar12 + 0x2d8) == '\x01') {
        lVar10 = *(longlong *)(lVar12 + 0x2e8);
        if (lVar10 == 0) {
          uVar14 = FUN_140067708();
          lVar10 = FUN_14477b664(uVar14);
          *(longlong *)(lVar12 + 0x2e8) = lVar10;
        }
        local_208 = *(longlong *)(lVar12 + 0x2f0);
        if (((local_208 == 0) && (local_208 = 0, lVar10 != 0)) &&
           (*(longlong *)(lVar12 + 0x2e0) != 0)) {
          plVar16 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar16 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar8 == '\0')) {
            local_208 = 0;
          }
          else {
            uVar14 = (**(code **)(*plVar16 + 0x110))(plVar16);
            local_208 = FUN_144aff482(uVar14,(longlong *)(lVar12 + 0x2e0));
          }
          *(longlong *)(lVar12 + 0x2f0) = local_208;
        }
      }
      else {
        uVar9 = (**(code **)(**(longlong **)(uVar21 + 0x50) + 0x110))
                          (*(longlong **)(uVar21 + 0x50),0);
        plVar16 = (longlong *)(**(code **)(*plVar28 + 0x610))(plVar28,uVar9);
        if (plVar16 == (longlong *)0x0) {
          uVar14 = FUN_14075957a(plVar28);
        }
        else {
          uVar14 = (**(code **)(*plVar16 + 0x2f8))(plVar16);
        }
        FUN_1415c55d4(lVar10,&local_218,uVar14);
        if (local_210 == 0) {
          uVar14 = FUN_140067708();
          local_210 = FUN_14477b664(uVar14);
        }
        if (((local_208 == 0) && (local_208 = 0, local_210 != 0)) &&
           (local_218 != (undefined2 *)0x0)) {
          plVar16 = *(longlong **)(local_210 + 0xb8);
          if ((plVar16 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar8 == '\0')) {
            local_208 = 0;
          }
          else {
            uVar14 = (**(code **)(*plVar16 + 0x110))(plVar16);
            local_208 = FUN_144aff482(uVar14,&local_218);
          }
        }
      }
      local_238 = (longlong *)((ulonglong)local_238 & 0xffffffff00000000);
      FUN_14084a448(local_e0[0],&local_110,local_208,plVar28[0x15]);
      plVar16 = local_e0[0];
      local_110 = 0;
      local_108 = 0xffffffffffffffff;
      if (((local_e0[0] != (longlong *)0x0) &&
          (*(int *)(local_e0[0] + 0x21) = (int)local_e0[0][0x21] + -1, (int)local_e0[0][0x26] < 1))
         && (FUN_1400847bc(local_e0[0] + 0x17,0), (int)plVar16[0x21] == 0)) {
        FUN_140087e46(plVar16);
        if (*plVar16 != -1) {
          plVar28 = local_228;
          if (DAT_14cb259f8 == 0) goto LAB_140623994;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar16);
        }
        plVar28 = local_228;
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar16);
        }
      }
    }
  }
LAB_140623994:
  if ((plVar28[0x1f8] != 0) && (plVar28[0x1f9] != 0)) {
    local_238 = param_2 + 5;
    FUN_140871c80(&local_218,plVar28[0x15],plVar28,local_220);
    if (plVar28[0x1f8] == 0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      plVar16 = (longlong *)plVar28[0x1f9];
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,plVar28 + 0x15e,&local_218,fVar30);
  }
  *(int *)((longlong)plVar28 + 0xfec) = (int)param_2[0x17];
  *(float *)(plVar28 + 0x1fd) = (float)dVar7;
LAB_140623a0f:
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140623bee FUN_140623bee body=420 status=ok
// SIG undefined FUN_140623bee(void)

void FUN_140623bee(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (*param_1 != 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_1466222c0(param_2,0);
    }
    lVar4 = (longlong)*(int *)(*param_1 + 0xd8);
    if (lVar4 != 0) {
      plVar8 = *(longlong **)(*param_1 + 0xd0);
      lVar4 = lVar4 * 0x18;
      do {
        lVar6 = plVar8[1];
        if (lVar6 == 0) {
          uVar5 = FUN_14054e994();
          lVar6 = FUN_14477b664(uVar5);
          plVar8[1] = lVar6;
        }
        lVar7 = plVar8[2];
        if (lVar7 == 0) {
          if ((lVar6 != 0) && (*plVar8 != 0)) {
            plVar2 = *(longlong **)(lVar6 + 0xb8);
            if (plVar2 != (longlong *)0x0) {
              cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
              if (cVar3 != '\0') {
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar5,plVar8);
                plVar8[2] = lVar7;
                if (lVar7 != 0) {
                  lVar6 = plVar8[1];
                  goto LAB_140623c4e;
                }
                goto LAB_140623c79;
              }
            }
            plVar8[2] = 0;
          }
        }
        else {
LAB_140623c4e:
          if (lVar6 == 0) {
            uVar5 = FUN_14054e994();
            lVar6 = FUN_14477b664(uVar5);
            plVar8[1] = lVar6;
            lVar7 = plVar8[2];
            if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar8 != 0)) {
              plVar2 = *(longlong **)(lVar6 + 0xb8);
              if (plVar2 == (longlong *)0x0) {
LAB_140623d8e:
                lVar7 = 0;
              }
              else {
                cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
                if (cVar3 == '\0') goto LAB_140623d8e;
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar5,plVar8);
              }
              plVar8[2] = lVar7;
            }
          }
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_140623d92(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar7;
        }
LAB_140623c79:
        plVar8 = plVar8 + 3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 140623d92 FUN_140623d92 body=353 status=ok
// SIG undefined FUN_140623d92(void)

void FUN_140623d92(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140623e17;
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
LAB_140623e17:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140623ef4 FUN_140623ef4 body=302 status=ok
// SIG undefined FUN_140623ef4(void)

undefined4 * FUN_140623ef4(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140624324(param_1,local_50);
  local_48[4] = param_3[4];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar1 = param_3[3];
  *local_48 = *param_3;
  local_48[1] = uVar4;
  local_48[2] = uVar5;
  local_48[3] = uVar1;
  local_48[5] = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  local_68 = param_4;
  cVar2 = FUN_140624024(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[6] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[5] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1406240a0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140624024 FUN_140624024 body=123 status=ok
// SIG undefined FUN_140624024(void)

void FUN_140624024(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_140624776();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar8 * 0x1c) = param_3[4];
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar8 * 0x1c);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_146b815d2(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_140624040;
    }
  }
  uVar7 = 0;
LAB_140624040:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 1406240a0 FUN_1406240a0 body=644 status=ok
// SIG undefined FUN_1406240a0(void)

void FUN_1406240a0(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140624103;
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
LAB_140624103:
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
      lVar12 = (longlong)iVar13 * 0x1c;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x18 + lVar12) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x14 + lVar12) =
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



// FUNCTION 140624324 FUN_140624324 body=723 status=ok
// SIG undefined FUN_140624324(void)

int * FUN_140624324(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar15);
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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1406244e0;
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
LAB_1406244e0:
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
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x1c);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar5 * 0x1c + *param_1;
  return param_2;
}


