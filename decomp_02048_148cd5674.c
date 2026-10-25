// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148cd5674 FUN_148cd5674 body=20 status=ok
// SIG undefined FUN_148cd5674(void)

undefined8 FUN_148cd5674(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_14479d2ce(param_1 + 0x4ef0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148cd5688 FUN_148cd5688 body=108 status=ok
// SIG undefined FUN_148cd5688(void)

longlong * FUN_148cd5688(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + 8 + lVar5);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_148ccb356(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
      lVar5 = lVar5 + 0x20;
    } while ((longlong)(int)lVar4 * 0x20 != lVar5);
  }
  return param_1;
}



// FUNCTION 148cd56f4 FUN_148cd56f4 body=107 status=ok
// SIG undefined FUN_148cd56f4(void)

longlong * FUN_148cd56f4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar5);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_148cdaf50(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
      lVar5 = lVar5 + 0x20;
    } while ((longlong)(int)lVar4 * 0x20 != lVar5);
  }
  return param_1;
}



// FUNCTION 148cd5760 FUN_148cd5760 body=135 status=ok
// SIG undefined FUN_148cd5760(void)

longlong * FUN_148cd5760(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)(int)param_2[1] != 0) {
    plVar5 = (longlong *)*param_2;
    plVar1 = plVar5 + (int)param_2[1];
    do {
      lVar3 = *plVar5;
      if ((longlong)(int)param_3[1] != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*param_3 + lVar4) == lVar3) goto LAB_148cd57cf;
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)param_3[1] * 8 != lVar4);
      }
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1447d05f2(param_1,iVar2);
        lVar3 = *plVar5;
      }
      *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar3;
LAB_148cd57cf:
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return param_1;
}



// FUNCTION 148cd57e8 FUN_148cd57e8 body=68 status=ok
// SIG undefined FUN_148cd57e8(void)

void FUN_148cd57e8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1478b6d68();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd5868 FUN_148cd5868 body=181 status=ok
// SIG undefined FUN_148cd5868(void)

longlong FUN_148cd5868(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(longlong *)(param_1 + 8);
  }
  lVar1 = *(longlong *)(param_1 + 0x2f0);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar1 + 0x3d0);
  if (lVar5 == 0) {
    uVar4 = FUN_14065883a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x3d0) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x3d8) != 0) {
    return *(longlong *)(lVar1 + 0x3d8);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x3c8) != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x3c8));
    }
    *(longlong *)(lVar1 + 0x3d8) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 148cd591e FUN_148cd591e body=744 status=ok
// SIG undefined FUN_148cd591e(void)

double * FUN_148cd591e(longlong param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
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
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = *(longlong *)(param_1 + 0x2f0);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + -0x18e8);
    if (lVar5 == 0) {
      param_2[2] = DAT_14c8464f0;
      uVar23 = DAT_14c8464e8._4_4_;
      uVar22 = (undefined4)DAT_14c8464e8;
      uVar21 = DAT_14c8464e0._4_4_;
      *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_2 + 4) = uVar21;
      *(undefined4 *)(param_2 + 1) = uVar22;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar23;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_128);
    }
    dVar2 = *(double *)(lVar5 + 0x268);
    *param_2 = *(double *)(lVar5 + 0x260);
    param_2[1] = dVar2;
    param_2[2] = *(double *)(lVar5 + 0x270);
  }
  else {
    puVar3 = &DAT_14c846480;
    if (*(longlong *)(param_1 + -0x18e8) != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + -0x18e8) + 0x240);
    }
    uVar21 = *(undefined4 *)puVar3;
    uVar22 = *(undefined4 *)((longlong)puVar3 + 4);
    uVar23 = *(undefined4 *)(puVar3 + 1);
    uVar24 = *(undefined4 *)((longlong)puVar3 + 0xc);
    uVar17 = *(undefined4 *)(puVar3 + 2);
    uVar18 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uVar19 = *(undefined4 *)(puVar3 + 3);
    uVar20 = *(undefined4 *)((longlong)puVar3 + 0x1c);
    uVar13 = *(undefined4 *)(puVar3 + 4);
    uVar14 = *(undefined4 *)((longlong)puVar3 + 0x24);
    uVar15 = *(undefined4 *)(puVar3 + 5);
    uVar16 = *(undefined4 *)((longlong)puVar3 + 0x2c);
    uVar11 = *(undefined4 *)(puVar3 + 6);
    uVar12 = *(undefined4 *)((longlong)puVar3 + 0x34);
    uVar27 = *(undefined4 *)(puVar3 + 8);
    uVar28 = *(undefined4 *)((longlong)puVar3 + 0x44);
    uVar29 = *(undefined4 *)(puVar3 + 9);
    uVar30 = *(undefined4 *)((longlong)puVar3 + 0x4c);
    uVar25 = *(undefined4 *)(puVar3 + 10);
    uVar26 = *(undefined4 *)((longlong)puVar3 + 0x54);
    lVar1 = *(longlong *)(lVar5 + 0x3f8);
    if (lVar1 != 0) {
      local_98 = FUN_144a799b0();
      if ((local_98 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_98);
      }
      local_108 = 0;
      plVar4 = (longlong *)FUN_140ae4830(param_1 + -0x1ab0,&local_98,lVar1,0);
      lVar5 = *(longlong *)(param_1 + 0x2f0);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x4a8))(plVar4,&local_f8,*(undefined8 *)(lVar5 + 0x400),0);
        lVar5 = *(longlong *)(param_1 + 0x2f0);
        uVar11 = local_c8;
        uVar12 = uStack_c4;
        uVar13 = local_d8;
        uVar14 = uStack_d4;
        uVar15 = uStack_d0;
        uVar16 = uStack_cc;
        uVar17 = local_e8;
        uVar18 = uStack_e4;
        uVar19 = uStack_e0;
        uVar20 = uStack_dc;
        uVar21 = local_f8;
        uVar22 = uStack_f4;
        uVar23 = uStack_f0;
        uVar24 = uStack_ec;
        uVar25 = local_a8;
        uVar26 = uStack_a4;
        uVar27 = local_b8;
        uVar28 = uStack_b4;
        uVar29 = uStack_b0;
        uVar30 = uStack_ac;
      }
    }
    dVar8 = *(double *)(lVar5 + 0x3e0) * (double)CONCAT44(uVar28,uVar27);
    dVar9 = *(double *)(lVar5 + 1000) * (double)CONCAT44(uVar30,uVar29);
    dVar2 = *(double *)(lVar5 + 0x3f0) * (double)CONCAT44(uVar26,uVar25);
    dVar6 = dVar9 * (double)CONCAT44(uVar22,uVar21) - (double)CONCAT44(uVar24,uVar23) * dVar8;
    dVar7 = dVar2 * (double)CONCAT44(uVar24,uVar23) - (double)CONCAT44(uVar18,uVar17) * dVar9;
    dVar10 = dVar8 * (double)CONCAT44(uVar18,uVar17) - (double)CONCAT44(uVar22,uVar21) * dVar2;
    dVar7 = dVar7 + dVar7;
    dVar10 = dVar10 + dVar10;
    dVar6 = dVar6 + dVar6;
    *param_2 = (dVar6 * (double)CONCAT44(uVar24,uVar23) - dVar10 * (double)CONCAT44(uVar18,uVar17))
               + (double)CONCAT44(uVar20,uVar19) * dVar7 + dVar8 + (double)CONCAT44(uVar14,uVar13);
    param_2[1] = ((double)CONCAT44(uVar18,uVar17) * dVar7 - (double)CONCAT44(uVar22,uVar21) * dVar6)
                 + (double)CONCAT44(uVar20,uVar19) * dVar10 + dVar9 +
                 (double)CONCAT44(uVar16,uVar15);
    param_2[2] = (double)CONCAT44(uVar20,uVar19) * dVar6 + dVar2 +
                 (dVar10 * (double)CONCAT44(uVar22,uVar21) - dVar7 * (double)CONCAT44(uVar24,uVar23)
                 ) + (double)CONCAT44(uVar12,uVar11);
  }
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd5c44 FUN_148cd5c44 body=130 status=ok
// SIG undefined FUN_148cd5c44(void)

void FUN_148cd5c44(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x988);
  if (lVar2 == 0) {
    lVar2 = FUN_14001cc68(0x120,0x10);
    FUN_14126e142(lVar2);
    lVar1 = *(longlong *)(param_1 + 0x988);
    *(longlong *)(param_1 + 0x988) = lVar2;
    if (lVar1 != 0) {
      FUN_14129d1b2(lVar1);
      FUN_1400020a8(lVar1);
      lVar2 = *(longlong *)(param_1 + 0x988);
    }
    if (lVar2 == 0) {
      return;
    }
  }
  FUN_145816fcc(lVar2,param_2);
  return;
}



// FUNCTION 148cd5cc6 FUN_148cd5cc6 body=101 status=ok
// SIG undefined FUN_148cd5cc6(void)

void FUN_148cd5cc6(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *(char *)(param_1 + 0x26c) = param_2;
  if ((param_2 != '\0') && (*(longlong *)(param_1 + 0x988) != 0)) {
    FUN_148927e89(param_1 + 0x8b8,param_3,*(longlong *)(param_1 + 0x988));
    lVar1 = *(longlong *)(param_1 + 0x988);
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0x988) = 0;
      FUN_14129d1b2(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148cd5d2c FUN_148cd5d2c body=39 status=ok
// SIG undefined FUN_148cd5d2c(void)

void FUN_148cd5d2c(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(char *)(param_1 + 0x1d3b) != param_2)) {
    *(char *)(param_1 + 0x1d3b) = param_2;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x11);
    return;
  }
  return;
}



// FUNCTION 148cd5d54 FUN_148cd5d54 body=17 status=ok
// SIG undefined FUN_148cd5d54(void)

void FUN_148cd5d54(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_148c35dc6(param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 148cd5d66 FUN_148cd5d66 body=17 status=ok
// SIG undefined FUN_148cd5d66(void)

void FUN_148cd5d66(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_148c35cc6(param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 148cd5d78 FUN_148cd5d78 body=647 status=ok
// SIG undefined FUN_148cd5d78(void)

void FUN_148cd5d78(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = FUN_144a5dd5e();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        local_98 = plVar5;
        lVar6 = (**(code **)(*plVar5 + 0x5e0))(plVar5);
        if (lVar6 != 0) {
          lVar7 = FUN_144a2f878();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            lVar6 = param_1 + -0x1a98;
            lVar7 = FUN_1447210f0(lVar6);
            cVar3 = FUN_148cd601a(plVar5);
            if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
            }
            cVar3 = FUN_148cd6088(lVar6,plVar5);
            if ((lVar7 != 0) && (cVar3 == '\0')) {
              uVar4 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4))
                      * -0x7a143595;
              uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
              uVar8 = FUN_148cdb254(param_1 + 0xb00,uVar4 >> 0x10 ^ uVar4,&local_98);
              local_a8 = (undefined8 *)0x0;
              local_a0 = 0;
              FUN_1446efa72(&local_a8,0,3,0x10);
              puVar9 = local_a8;
              local_a0 = 3;
              *local_a8 = &PTR_LAB_14b95f090;
              local_a8[1] = local_98;
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 1;
              lVar2 = DAT_14c758608 + 1;
              if (lVar10 == 0) {
                LOCK();
                UNLOCK();
                lVar10 = DAT_14c758608 + 2;
                lVar2 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar2;
              local_a8[2] = lVar10;
              *local_a8 = &PTR_FUN_14b95f020;
              local_a8[3] = 0;
              FUN_14485c47a(local_a8 + 3,lVar6);
              puVar9[4] = FUN_148cd614c;
              *(undefined4 *)(puVar9 + 5) = 0;
              if (*(longlong *)(lVar7 + 0x1f0) == 0) {
                puVar9 = (undefined8 *)(lVar7 + 0x458);
              }
              else {
                puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
              }
              uVar1 = *puVar9;
              local_88 = 0;
              local_80 = 0;
              FUN_14487d8d8(&local_88,&local_a8);
              local_48 = 1;
              local_b8 = local_90;
              local_90[0] = 1;
              local_8c = 0x3f800000;
              FUN_1406f4044(uVar1,uVar8,&local_88,0x3f800000);
              (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
              FUN_1449db362(&local_a8);
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd601a FUN_148cd601a body=109 status=ok
// SIG undefined FUN_148cd601a(void)

ulonglong FUN_148cd601a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  
  lVar1 = (**(code **)(*param_1 + 0x5e0))();
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_14479d2ce(lVar1 + 0x4ef0);
      if (lVar2 == 0) {
        uVar3 = FUN_1457baa60(lVar1 + 0x4ea0);
        return uVar3;
      }
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 148cd6088 FUN_148cd6088 body=195 status=ok
// SIG undefined FUN_148cd6088(void)

undefined8 FUN_148cd6088(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x25a0) != *(int *)(param_1 + 0x25cc)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x25d0;
    if (*(longlong *)(param_1 + 0x25d8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x25d8);
    }
    iVar5 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x25e0) - 1U & (uVar1 >> 0x10 ^ uVar1))
                             * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x2598);
      iVar3 = iVar5;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar3 * 0x18) == param_2) goto LAB_148cd612a;
        iVar3 = *(int *)(lVar2 + (longlong)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return 0;
  while (iVar5 = (int)puVar4[2], iVar5 != -1) {
LAB_148cd612a:
    puVar4 = (ulonglong *)(lVar2 + (longlong)iVar5 * 0x18);
    if (*puVar4 == param_2) goto LAB_148cd613e;
  }
  puVar4 = (ulonglong *)0x0;
LAB_148cd613e:
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),puVar4[1] != 0);
}



// FUNCTION 148cd614c FUN_148cd614c body=418 status=ok
// SIG undefined FUN_148cd614c(void)

void FUN_148cd614c(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong *puVar9;
  
  lVar5 = FUN_1447210f0();
  if (lVar5 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x25a0) == *(int *)(param_1 + 0x25cc)) {
    return;
  }
  uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  lVar6 = *(longlong *)(param_1 + 0x25d8);
  if (*(longlong *)(param_1 + 0x25d8) == 0) {
    lVar6 = param_1 + 0x25d0;
  }
  iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x25e0) - 1U & uVar4) * 4);
  if (iVar8 == -1) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x2598);
  while (*(ulonglong *)(*plVar1 + (longlong)iVar8 * 0x18) != param_2) {
    iVar8 = *(int *)(*plVar1 + (longlong)iVar8 * 0x18 + 0x10);
    if (iVar8 == -1) {
      return;
    }
  }
  cVar3 = FUN_148cd601a(param_2);
  if (cVar3 == '\0') {
    return;
  }
  if (*(longlong *)(lVar5 + 0x1f0) == 0) {
    puVar7 = (undefined8 *)(lVar5 + 0x458);
  }
  else {
    puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
  }
  uVar2 = *puVar7;
  if (*(int *)(param_1 + 0x25a0) != *(int *)(param_1 + 0x25cc)) {
    lVar5 = param_1 + 0x25d0;
    if (*(longlong *)(param_1 + 0x25d8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x25d8);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x25e0) - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      do {
        puVar9 = (ulonglong *)(*plVar1 + (longlong)iVar8 * 0x18);
        if (*puVar9 == param_2) goto LAB_148cd6253;
        iVar8 = (int)puVar9[2];
      } while (iVar8 != -1);
    }
  }
  puVar9 = (ulonglong *)0x0;
LAB_148cd6253:
  puVar9 = puVar9 + 1;
  lVar5 = FUN_144a61814(uVar2,puVar9);
  if (lVar5 != 0) {
    FUN_1405a424c(uVar2,*puVar9);
  }
  *puVar9 = 0;
  FUN_148cdba7e(plVar1,param_2);
  lVar5 = FUN_148e047d8(param_2 + 0xe50);
  if (lVar5 != param_1 + 0x1a98) {
    return;
  }
  FUN_148c22e06(param_1 + 0x25e8,param_2);
  return;
}



// FUNCTION 148cd62ee FUN_148cd62ee body=358 status=ok
// SIG undefined FUN_148cd62ee(void)

void FUN_148cd62ee(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  
  if ((param_2 != (longlong *)0x0) && (uVar2 = (**(code **)(*param_2 + 8))(param_2), uVar2 != 0)) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(uVar2 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30 &&
        (lVar3 = FUN_1447210f0(param_1 + -0x1a98),
        *(int *)(param_1 + 0xb08) != *(int *)(param_1 + 0xb34))))) {
      uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      lVar6 = param_1 + 0xb38;
      if (*(longlong *)(param_1 + 0xb40) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xb40);
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xb48) - 1U & (uVar4 >> 0x10 ^ uVar4))
                               * 4);
      if (iVar5 != -1) {
        lVar6 = *(longlong *)(param_1 + 0xb00);
        iVar7 = iVar5;
        do {
          if (*(ulonglong *)(lVar6 + (longlong)iVar7 * 0x18) == uVar2) {
            if (lVar3 == 0) {
              return;
            }
            if (*(longlong *)(lVar3 + 0x1f0) == 0) {
              puVar8 = (undefined8 *)(lVar3 + 0x458);
            }
            else {
              puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
            }
            uVar1 = *puVar8;
            goto LAB_148cd63f3;
          }
          iVar7 = *(int *)(lVar6 + (longlong)iVar7 * 0x18 + 0x10);
        } while (iVar7 != -1);
      }
    }
  }
  return;
  while (iVar5 = (int)puVar9[2], iVar5 != -1) {
LAB_148cd63f3:
    puVar9 = (ulonglong *)(lVar6 + (longlong)iVar5 * 0x18);
    if (*puVar9 == uVar2) goto LAB_148cd640f;
  }
  puVar9 = (ulonglong *)0x0;
LAB_148cd640f:
  puVar9 = puVar9 + 1;
  lVar3 = FUN_144a61814(uVar1,puVar9);
  if (lVar3 != 0) {
    FUN_1405a424c(uVar1,*puVar9);
  }
  *puVar9 = 0;
  FUN_148cdba7e((longlong *)(param_1 + 0xb00),uVar2);
  return;
}



// FUNCTION 148cd6454 FUN_148cd6454 body=361 status=ok
// SIG undefined FUN_148cd6454(void)

undefined4 FUN_148cd6454(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  uVar9 = FUN_14661601e();
  uVar8 = FUN_140005cc6(param_1,&local_58,uVar9,param_3);
  uVar9 = FUN_1400014c6(&local_58);
  lVar6 = local_58;
  if (local_58 == 0) {
LAB_148cd64f0:
    local_70 = 0;
  }
  else {
    uVar10 = FUN_14661601e();
    cVar7 = FUN_1448093f4(lVar6,uVar10);
    if (cVar7 == '\0') goto LAB_148cd64f0;
    local_70 = local_58;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      local_68 = plStack_50;
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      bVar4 = false;
      goto LAB_148cd6505;
    }
  }
  local_68 = (longlong *)0x0;
  bVar4 = true;
LAB_148cd6505:
  plVar5 = local_68;
  local_60 = 0;
  FUN_14485c47a(&local_60,uVar9);
  FUN_14029d0b6(param_2,&local_70);
  plVar3 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar4) {
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
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd65be FUN_148cd65be body=183 status=ok
// SIG undefined FUN_148cd65be(void)

byte FUN_148cd65be(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((char)param_1[0x23] == '\x01') {
    bVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
    bVar2 = bVar2 ^ 1;
  }
  else {
    bVar2 = 0;
  }
  bVar3 = bVar2;
  if (((param_1[-0x270] != 0) && (lVar1 = *(longlong *)(param_1[-0x270] + 0x120), lVar1 != 0)) &&
     (plVar5 = *(longlong **)(lVar1 + 0xa8), plVar5 != (longlong *)0x0)) {
    uVar4 = FUN_140437b04();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_140437b04();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (plVar5 != plVar6) {
        bVar3 = plVar6 == (longlong *)0x0 & bVar2;
        if ((plVar6 != (longlong *)0x0) && (bVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x000148cd6672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          bVar2 = (**(code **)(*plVar6 + 0x30))(plVar6,param_2);
          return bVar2;
        }
      }
    }
  }
  return bVar3;
}



// FUNCTION 148cd6676 FUN_148cd6676 body=85 status=ok
// SIG undefined FUN_148cd6676(void)

void FUN_148cd6676(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412c3498(param_3);
  FUN_148c3dd76(param_1 + 0x120,param_2,uVar1);
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123ce0(param_1 + 0x150,param_2,uVar1);
  return;
}



// FUNCTION 148cd66cc FUN_148cd66cc body=85 status=ok
// SIG undefined FUN_148cd66cc(void)

void FUN_148cd66cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412c3498(param_3);
  FUN_148c3dd76(param_1 + 0x130,param_2,uVar1);
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123ce0(param_1 + 0x168,param_2,uVar1);
  return;
}



// FUNCTION 148cd6722 FUN_148cd6722 body=85 status=ok
// SIG undefined FUN_148cd6722(void)

void FUN_148cd6722(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412c3498(param_3);
  FUN_148c3dd76(param_1 + 0x140,param_2,uVar1);
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123ce0(param_1 + 0x180,param_2,uVar1);
  return;
}



// FUNCTION 148cd677c FUN_148cd677c body=54 status=ok
// SIG undefined FUN_148cd677c(void)

undefined8 FUN_148cd677c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x58))();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[0x10];
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != param_2 && lVar1 != 0);
  }
  return uVar3;
}



// FUNCTION 148cd67b2 FUN_148cd67b2 body=16 status=ok
// SIG undefined FUN_148cd67b2(void)

void FUN_148cd67b2(longlong param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(undefined1 *)(param_1 + 0x1660) = param_2;
  }
  return;
}



// FUNCTION 148cd67c2 FUN_148cd67c2 body=695 status=ok
// SIG undefined FUN_148cd67c2(void)

double * FUN_148cd67c2(undefined8 param_1,double param_2,double *param_3,float param_4)

{
  double dVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong in_RCX;
  double *in_RDX;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [8];
  double local_70;
  ulonglong local_60;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(in_RCX + 0x3b0) == 0) {
    *in_RDX = 0.0;
    in_RDX[1] = 0.0;
    in_RDX[2] = 0.0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
  }
  cVar2 = *(char *)(*(longlong *)(in_RCX + 0x3b0) + 0x240);
  if (cVar2 == '\x02') {
    local_88 = 0x3ff0000000000000;
  }
  else {
    if (cVar2 != '\x01') goto LAB_148cd68b4;
    local_88 = 0xbff0000000000000;
  }
  uStack_90 = 0;
  local_98 = 0;
  FUN_140ccff96(param_3,local_78,0x3ff921fb54442d18);
  uVar6 = local_78._0_4_;
  uVar7 = local_78._4_4_;
  param_2 = local_70;
LAB_148cd68b4:
  dVar9 = (double)*(float *)(in_RCX + 0x49c) * param_3[2];
  param_3[2] = dVar9;
  if (*(float *)(in_RCX + 0x494) <= param_4) {
    if (param_4 < *(float *)(in_RCX + 0x498) || param_4 == *(float *)(in_RCX + 0x498)) {
      fVar11 = *(float *)(in_RCX + 0x4a0);
    }
    else {
      fVar11 = 0.0;
    }
  }
  else {
    fVar11 = 1.0;
  }
  dVar13 = (double)CONCAT44(uVar7,uVar6) * (double)CONCAT44(uVar7,uVar6) + param_2 * param_2;
  if (((dVar13 != 1.0) ||
      (dVar8 = param_2, dVar12 = 0.0, dVar4 = (double)CONCAT44(uVar7,uVar6), NAN(dVar13))) &&
     (dVar8 = DAT_14c8464e8, dVar12 = DAT_14c8464f0, dVar4 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar13)) {
    dVar13 = 1.0 / SQRT(dVar13);
    dVar8 = param_2 * dVar13;
    dVar12 = dVar13 * 0.0;
    dVar4 = (double)CONCAT44(uVar7,uVar6) * dVar13;
  }
  dVar14 = (double)fVar11;
  dVar13 = *param_3;
  dVar1 = param_3[1];
  dVar3 = dVar9 * dVar9 + dVar13 * dVar13 + dVar1 * dVar1;
  if (((dVar3 != 1.0) || (dVar10 = dVar9, dVar15 = dVar13, dVar5 = dVar1, NAN(dVar3))) &&
     (dVar10 = DAT_14c8464f0, dVar15 = DAT_14c8464e0, dVar5 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar3)) {
    dVar3 = 1.0 / SQRT(dVar3);
    dVar10 = dVar9 * dVar3;
    dVar15 = dVar13 * dVar3;
    dVar5 = dVar1 * dVar3;
  }
  dVar9 = (double)(1.0 - fVar11);
  *in_RDX = dVar4 * dVar14 + dVar15 * dVar9;
  in_RDX[1] = dVar8 * dVar14 + dVar5 * dVar9;
  in_RDX[2] = dVar12 * dVar14 + dVar10 * dVar9;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd6a7a FUN_148cd6a7a body=87 status=ok
// SIG undefined FUN_148cd6a7a(void)

void FUN_148cd6a7a(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a79b68(&local_20);
  if (*(longlong *)(param_1 + 0x40) != local_20) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(longlong *)(param_1 + 0x40) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd6af4 FUN_148cd6af4 body=44 status=ok
// SIG undefined FUN_148cd6af4(void)

void FUN_148cd6af4(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0x640);
  FUN_14123fca6(param_1);
  return;
}



// FUNCTION 148cd6b2c FUN_148cd6b2c body=132 status=ok
// SIG undefined FUN_148cd6b2c(void)

undefined4 *
FUN_148cd6b2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,longlong param_6)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(undefined8 *)(param_1 + 4) = *param_5;
  param_1[6] = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  lVar1 = *(longlong *)(param_6 + 0x30);
  if (*(longlong *)(param_6 + 0x30) == 0) {
    lVar1 = param_6;
  }
  FUN_1400709d4(param_1 + 10,lVar1,*(undefined4 *)(param_6 + 0x38),0);
  FUN_1405c5fa2();
  *(undefined **)(param_1 + 0x1c) = &DAT_14cb769e8;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined ***)(param_1 + 0x1a) = &PTR_FUN_14b0394b0;
  return param_1;
}



// FUNCTION 148cd6bb0 FUN_148cd6bb0 body=379 status=ok
// SIG undefined FUN_148cd6bb0(void)

void FUN_148cd6bb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x3c0);
  if (lVar3 != 0) {
    lVar2 = FUN_144a75eb4();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(lVar3 + 0x508) != 0)) {
      lVar2 = FUN_1459cbe9a();
      lVar3 = *(longlong *)(lVar3 + 0x508);
      if (lVar3 != 0) {
        lVar4 = 0;
        if ((lVar2 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) goto LAB_148cd6c0c;
        if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
          lVar4 = 0;
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
              lVar2 + 0x30) {
            lVar4 = lVar3;
          }
          goto LAB_148cd6c0c;
        }
      }
    }
  }
  lVar4 = 0;
LAB_148cd6c0c:
  *param_2 = lVar4;
  FUN_1446dcdd4(local_58,param_1 + 0x15d8);
  lVar3 = FUN_14888e23c(local_58);
  param_2[3] = lVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_148cd6d2c(param_2 + 1,*(undefined4 *)(param_1 + 0x15d0));
  if ((longlong)*(int *)(param_1 + 0x15d0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x15c8);
    lVar2 = (longlong)*(int *)(param_1 + 0x15d0) << 3;
    do {
      FUN_1446dcdd4(local_58,lVar3);
      local_60 = FUN_14888f7cc(local_58);
      FUN_1487c0fda(param_2 + 1,&local_60);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cd6d2c FUN_148cd6d2c body=118 status=ok
// SIG undefined FUN_148cd6d2c(void)

void FUN_148cd6d2c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145d2e7d6(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148cdc5ec(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148cd6da4 FUN_148cd6da4 body=56 status=ok
// SIG undefined FUN_148cd6da4(void)

void FUN_148cd6da4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1449bd2b2(param_1 + 0x1390);
  FUN_1409d1ca6(param_1 + 0x188,param_2,param_3);
  return;
}



// FUNCTION 148cd6e68 FUN_148cd6e68 body=127 status=ok
// SIG undefined FUN_148cd6e68(void)

void FUN_148cd6e68(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x2e2];
  if ((plVar1 != (longlong *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(plVar1);
  }
  if (((char)param_1[0x2f] == '\x03') || ((char)param_1[0x2f] == '\0')) {
    (**(code **)(*param_1 + 0x5c8))(param_1,1);
  }
  FUN_140aeef6c(param_1,param_2);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd6ed1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x510))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148cd6ee8 FUN_148cd6ee8 body=239 status=ok
// SIG undefined FUN_148cd6ee8(void)

bool FUN_148cd6ee8(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  uint local_140 [4];
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(longlong *)(param_1 + 0x1710) == 0) ||
     (plVar1 = *(longlong **)(&DAT_00006850 + *(longlong *)(param_1 + 0x1710)),
     plVar1 == (longlong *)0x0)) {
    bVar2 = false;
  }
  else {
    local_140[0] = 0;
    local_140[1] = 0;
    local_140[2] = 0;
    memset(local_130,0,0x100);
    local_60 = 0xffffffff;
    local_8c = 0xffffffff;
    local_12c = 0x3f800000;
    local_148 = 0;
    (**(code **)(*plVar1 + 0x900))(plVar1,param_2,local_140,0);
    bVar2 = (local_140[0] & 3) == 3;
    if (bVar2) {
      *(undefined8 *)(param_3 + 4) = local_110;
      *param_3 = local_120;
      param_3[1] = uStack_11c;
      param_3[2] = uStack_118;
      param_3[3] = uStack_114;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd6fd8 FUN_148cd6fd8 body=348 status=ok
// SIG undefined FUN_148cd6fd8(void)

void FUN_148cd6fd8(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 ****ppppuVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x1710) != 0) && (*(longlong *)(param_1 + 0x1a00) != 0)) {
    lVar2 = FUN_145798b0e();
    if (0 < *(int *)(lVar2 + 8)) {
      plVar3 = (longlong *)FUN_145798b0e(*(undefined8 *)(param_1 + 0x1a00));
      lVar2 = FUN_14011c2be(*plVar3 + 0x20);
      if (lVar2 != 0) {
        local_98[0] = 0;
        local_70 = 0;
        FUN_1456bb102(local_98,param_1);
        FUN_1448729ea(lVar2 + 0x38,local_68,local_98);
        uVar5 = FUN_144a7ecd0(local_68);
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar1 != (code *)0x0) {
          ppppuVar4 = local_68;
          if (0x18 < local_50) {
            ppppuVar4 = (undefined8 ****)local_68[0];
          }
          (*pcVar1)(ppppuVar4);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(local_68[0]);
        }
        FUN_144a5ac3a(local_98);
        lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x3c20) + 0x28))
                          (*(longlong *)(param_1 + 0x1710) + 0x3c20);
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x98) = uVar5;
          FUN_14020a6cc(lVar2 + 0x90,1);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd7136 FUN_148cd7136 body=215 status=ok
// SIG undefined FUN_148cd7136(void)

void FUN_148cd7136(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(char *)((longlong)param_1 + 0x1d01) = (char)param_2;
  (**(code **)(*param_1 + 0x330))();
  FUN_1405e47c6(param_1,CONCAT71((int7)((ulonglong)param_2 >> 8),
                                 *(undefined1 *)((longlong)param_1 + 0x1d01)) ^ 1);
  if ((*(char *)((longlong)param_1 + 0x1d01) == '\0') && (param_1[0x2e0] != 0)) {
    cVar2 = FUN_148f01354();
    if (cVar2 != '\0') {
      plVar1 = (longlong *)param_1[0x78];
      if (plVar1 == (longlong *)0x0) {
        local_18 = DAT_14c846508;
        local_28 = DAT_14c8464f8;
        dStack_20 = DAT_14c846500;
      }
      else {
        (**(code **)(*plVar1 + 0x680))(plVar1,&local_28);
      }
      *(float *)(param_1[0x2e0] + 0x1998) = (float)dStack_20;
      *(float *)(param_1[0x2e0] + 0x199c) = (float)local_28;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd723e FUN_148cd723e body=331 status=ok
// SIG undefined FUN_148cd723e(void)

void FUN_148cd723e(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 & 1) != 0) {
    FUN_143d57a0e(param_1 + 0x12e8,param_1);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_50 = FUN_144a74fb4();
  if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_50);
  }
  FUN_1478ba3d6(param_1 + -0x4f8,&local_50,&local_48,0);
  lVar2 = local_48;
  lVar7 = (longlong)(int)uStack_40;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar6);
      if (lVar1 != 0) {
        lVar4 = FUN_144a74fb4();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
            ((param_2 & 1) != 0)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar4 = FUN_144a78c84();
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
             ((plVar5 = (longlong *)FUN_148810db2(lVar1), *plVar5 != 0 &&
              (cVar3 = FUN_148811d90(lVar1,param_1), cVar3 == '\0')))) {
            FUN_148812522(lVar1);
          }
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cd738a FUN_148cd738a body=298 status=ok
// SIG undefined FUN_148cd738a(void)

bool FUN_148cd738a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = *(char *)(param_1 + -0x380);
  if (cVar1 != '\x03') goto LAB_148cd748e;
  FUN_1406c9d00(&DAT_00001100 + param_1,&local_40);
  if (local_38 == 0) {
    uVar4 = FUN_140927942();
    local_38 = FUN_14477b664(uVar4);
  }
  if (local_30 == (longlong *)0x0) {
    if (((local_38 == 0) || (local_40 == 0)) ||
       (plVar2 = *(longlong **)(local_38 + 0xb8), plVar2 == (longlong *)0x0)) goto LAB_148cd748e;
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_148cd748e;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    local_30 = (longlong *)FUN_144aff482(uVar4,&local_40);
    if (local_30 == (longlong *)0x0) goto LAB_148cd748e;
  }
  plVar2 = local_30;
  lVar5 = (**(code **)(*local_30 + 8))(local_30);
  lVar6 = FUN_14037df6e();
  if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
      lVar6 + 0x30)) {
    FUN_143ccbf54(param_1,plVar2 + 0x2ee,0xffffffff);
  }
LAB_148cd748e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return cVar1 == '\x03';
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd74b6 FUN_148cd74b6 body=129 status=ok
// SIG undefined FUN_148cd74b6(void)

longlong * FUN_148cd74b6(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = *(longlong *)(param_1 + 0x1500);
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x17b0), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x17a8);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (lVar4 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1446f84a2(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return param_2;
}



// FUNCTION 148cd75d2 FUN_148cd75d2 body=36 status=ok
// SIG undefined FUN_148cd75d2(void)

void FUN_148cd75d2(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_140d78d10(param_1 + 0x22a0);
  }
  return;
}



// FUNCTION 148cd75fa FUN_148cd75fa body=36 status=ok
// SIG undefined FUN_148cd75fa(void)

void FUN_148cd75fa(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_140d78d10(param_1 + 0x22a0);
  }
  return;
}



// FUNCTION 148cd761e FUN_148cd761e body=44 status=ok
// SIG undefined FUN_148cd761e(void)

void FUN_148cd761e(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_140d78b8a(param_1 + 0x22a0);
  }
  return;
}



// FUNCTION 148cd7668 FUN_148cd7668 body=44 status=ok
// SIG undefined FUN_148cd7668(void)

void FUN_148cd7668(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_140d78b8a(param_1 + 0x22a0);
  }
  return;
}



// FUNCTION 148cd76b2 FUN_148cd76b2 body=112 status=ok
// SIG undefined FUN_148cd76b2(void)

void FUN_148cd76b2(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    return;
  }
  FUN_1401073f6(param_2 + 0x9d8,param_1);
  uVar1 = 0x7fffffff;
  if (0 < (int)*(uint *)(param_1 + 0x2348)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x2340) + 0x20);
    uVar3 = 0;
    do {
      if (*plVar2 == param_2) {
        uVar1 = uVar3 & 0xffffffff;
        break;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0x2e;
    } while (*(uint *)(param_1 + 0x2348) != uVar3);
  }
  FUN_140e7e2ce(param_1 + 0x22a0,uVar1);
  return;
}



// FUNCTION 148cd7726 FUN_148cd7726 body=71 status=ok
// SIG undefined FUN_148cd7726(void)

void FUN_148cd7726(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  if (param_4 != -1) {
    FUN_148cd776e(param_1,param_4);
  }
  FUN_145beb61a(param_1,param_2,param_3);
  return;
}



// FUNCTION 148cd776e FUN_148cd776e body=127 status=ok
// SIG undefined FUN_148cd776e(void)

void FUN_148cd776e(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x5d0))();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_144a5dd5e();
    if (*(int *)(plVar2[2] + 0x38) < *(int *)(lVar3 + 0x38)) {
      return;
    }
    if (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30) {
      return;
    }
    if ((((*(byte *)(plVar2 + 0x84) & 2) != 0) &&
        (cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2), cVar1 != '\0')) ||
       ((char)param_1[0x2f] == '\x03')) {
      FUN_148f01e7e(plVar2 + 0x722,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148cd77f4 FUN_148cd77f4 body=386 status=ok
// SIG undefined FUN_148cd77f4(void)

void FUN_148cd77f4(longlong *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x5d0))();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_144a5dd5e();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) &&
       ((((*(byte *)(plVar3 + 0x84) & 2) != 0 &&
         (cVar1 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar1 != '\0')) ||
        ((char)param_1[0x2f] == '\x03')))) {
      FUN_148f01e7e(plVar3 + 0x722,param_2);
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x700))(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x4aa) = 0;
  }
  lVar4 = param_1[0x340];
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar4 + 0xf38) <= iVar5) {
        return;
      }
      uVar2 = *(int *)(lVar4 + 0xf38) * param_2 + iVar5;
      if ((-1 < (int)uVar2) && ((int)uVar2 < (int)param_1[0x497])) {
        lVar4 = *(longlong *)(param_1[0x496] + (ulonglong)uVar2 * 8);
        if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
          FUN_1456cec3c(lVar4);
        }
        else if (lVar4 == 0) goto LAB_148cd78cf;
        if (((*(longlong *)(lVar4 + 0xd60) == DAT_14cb95120) ||
            (cVar1 = FUN_14166d420(lVar4), cVar1 != '\0')) &&
           (((char)param_1[0x2f] != '\x03' || ((*(byte *)(lVar4 + 0x3e0) & 2) != 0)))) {
          cVar1 = (**(code **)(*param_1 + 0x700))(param_1);
          if (cVar1 != '\0') {
            *(int *)(param_1 + 0x4aa) = (int)param_1[0x4aa] + 1;
          }
          if ((char)param_1[0x2f] == '\x03') {
            FUN_145beb61a(param_1,lVar4,iVar5);
          }
          else {
            FUN_148c97934(param_1,lVar4,iVar5,param_2);
          }
        }
      }
LAB_148cd78cf:
      iVar5 = iVar5 + 1;
      lVar4 = param_1[0x340];
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 148cd7976 thunk_FUN_148cd797e body=7 status=ok
// SIG undefined thunk_FUN_148cd797e(void)

void thunk_FUN_148cd797e(undefined8 param_1)

{
  FUN_148cd797e(param_1,1);
  return;
}



// FUNCTION 148cd797e FUN_148cd797e body=200 status=ok
// SIG undefined FUN_148cd797e(void)

void FUN_148cd797e(longlong *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x5d0))();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_144a5dd5e();
    if (*(int *)(plVar3[2] + 0x38) < *(int *)(lVar4 + 0x38)) {
      return;
    }
    if (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30) {
      return;
    }
    if ((((*(byte *)(plVar3 + 0x84) & 2) != 0) &&
        (cVar2 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar2 != '\0')) ||
       ((char)param_1[0x2f] == '\x03')) {
      iVar1 = (int)plVar3[0x732];
      if (param_2 == '\0') {
        if (iVar1 < 1) {
          iVar5 = -1;
          if (param_1[0x340] != 0) {
            iVar5 = *(int *)(param_1[0x340] + 0xf48) + -1;
          }
        }
        else {
          iVar5 = iVar1 + -1;
        }
      }
      else {
        iVar6 = 0;
        if (param_1[0x340] != 0) {
          iVar6 = *(int *)(param_1[0x340] + 0xf48);
        }
        iVar5 = 0;
        if (iVar1 + 1 < iVar6) {
          iVar5 = iVar1 + 1;
        }
      }
      FUN_148cd77f4(param_1,iVar5);
      return;
    }
  }
  return;
}



// FUNCTION 148cd7a46 FUN_148cd7a46 body=7 status=ok
// SIG undefined FUN_148cd7a46(void)

void FUN_148cd7a46(undefined8 param_1)

{
  FUN_148cd797e(param_1,0);
  return;
}



// FUNCTION 148cd7a4e FUN_148cd7a4e body=18 status=ok
// SIG undefined FUN_148cd7a4e(void)

undefined1 FUN_148cd7a4e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  return *(undefined1 *)(lVar1 + 3);
}



// FUNCTION 148cd7a60 FUN_148cd7a60 body=198 status=ok
// SIG undefined FUN_148cd7a60(void)

void FUN_148cd7a60(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (*(char *)((longlong)param_1 + 0x2042) == '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x40))();
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*param_1 + 0x48))(param_1,0);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*param_1 + 0x48))(param_1,1);
          if (cVar1 == '\0') {
            uVar5 = *(undefined4 *)((longlong)param_1 + 0x204c);
            fVar3 = (float)(**(code **)(*plVar2 + 0x10))(plVar2,0);
            fVar4 = (float)(**(code **)(*plVar2 + 0x58))(plVar2);
            uVar5 = FUN_14114c86e(param_1,fVar3 * fVar4,uVar5);
            *(undefined4 *)((longlong)param_1 + 0x204c) = uVar5;
          }
          FUN_14596b788(param_1 + -0xa3,1,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148cd7bd4 FUN_148cd7bd4 body=50 status=ok
// SIG undefined FUN_148cd7bd4(void)

longlong * FUN_148cd7bd4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x230);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 148cd7c06 FUN_148cd7c06 body=47 status=ok
// SIG undefined FUN_148cd7c06(void)

undefined8 FUN_148cd7c06(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  
  pcVar1 = "Uncloak";
  if (*(char *)(param_1 + 0x38) != '\0') {
    pcVar1 = "Cloak";
  }
  FUN_1400b22c2(param_2,pcVar1);
  return param_2;
}



// FUNCTION 148cd7c36 FUN_148cd7c36 body=102 status=ok
// SIG undefined FUN_148cd7c36(void)

void FUN_148cd7c36(longlong *param_1)

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
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_1440bcefa(uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cd7c9c FUN_148cd7c9c body=168 status=ok
// SIG undefined FUN_148cd7c9c(void)

void FUN_148cd7c9c(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1412c0c36();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1412c0c36();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (param_3 == '\0') {
          FUN_1400bc8c2(lVar4 + 0x200,&local_20);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd7d46 FUN_148cd7d46 body=560 status=ok
// SIG undefined FUN_148cd7d46(void)

bool FUN_148cd7d46(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [64];
  undefined1 *local_98;
  int local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 *local_48;
  undefined4 local_40;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(longlong *)(param_1 + 0xb0) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
     (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x1518), lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x260) - 1U < 2) {
      if ((*(int *)(lVar8 + 600) != -1) && (*(int *)(lVar8 + 0x25c) != -1)) {
LAB_148cd7db4:
        cVar5 = FUN_144a872af(lVar8 + 0x268);
        if (cVar5 != '\0') {
          uVar7 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x48));
          FUN_141246736(&local_88,uVar7);
          if (local_80 == (longlong *)0x0) {
LAB_148cd7e8c:
            uVar7 = 0;
          }
          else {
            iVar6 = (int)local_80[1];
            do {
              if (iVar6 == 0) {
                plVar9 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar4 = (int)local_80[1];
              bVar13 = iVar6 == iVar4;
              if (bVar13) {
                *(int *)(local_80 + 1) = iVar6 + 1;
                iVar4 = iVar6;
              }
              iVar6 = iVar4;
              UNLOCK();
              plVar9 = local_80;
            } while (!bVar13);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_80 + 0x10))();
            }
            uVar7 = local_88;
            local_80 = (longlong *)0x0;
            if (plVar9 == (longlong *)0x0) goto LAB_148cd7e8c;
            local_88 = 0;
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
            if (local_80 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_80 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_80 + 0x10))();
              }
            }
          }
          FUN_147e48647(&local_88,uVar7,(int *)(lVar8 + 600));
          if (local_30 == 1) {
            local_98 = (undefined1 *)0x0;
            puVar12 = &local_88;
            if (local_48 != (undefined8 *)0x0) {
              puVar12 = local_48;
            }
            bVar13 = false;
            FUN_147e4c7de(local_d8,puVar12,local_40);
            pcVar3 = DAT_14cae3d20;
            plVar9 = &DAT_14cae3d40;
            if (DAT_14cae3d30 != (longlong *)0x0) {
              plVar9 = DAT_14cae3d30;
            }
            uVar7 = (**(code **)(*plVar9 + 8))();
            lVar8 = (*pcVar3)(uVar7);
            puVar10 = local_98;
            if (local_98 == (undefined1 *)0x0) {
              puVar10 = local_d8;
            }
            if ((longlong)local_90 != 0) {
              lVar11 = 0;
              do {
                bVar13 = *(longlong *)(puVar10 + lVar11) == lVar8;
                if (bVar13) break;
                bVar14 = (longlong)local_90 * 8 + -8 != lVar11;
                lVar11 = lVar11 + 8;
              } while (bVar14);
            }
            if (local_98 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            bVar13 = false;
          }
          if (((local_30 & 1) != 0) && (local_48 != (undefined8 *)0x0)) {
            FUN_1400020a8();
          }
          goto LAB_148cd7dff;
        }
      }
    }
    else if (*(int *)(lVar8 + 0x260) == 3) goto LAB_148cd7db4;
  }
  bVar13 = false;
LAB_148cd7dff:
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar13;
}



// FUNCTION 148cd7f78 FUN_148cd7f78 body=368 status=ok
// SIG undefined FUN_148cd7f78(void)

undefined4 FUN_148cd7f78(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_1[1] == 0) {
    uVar4 = 0;
  }
  else {
    lVar7 = (longlong)(int)param_1[1] * 0x28;
    lVar6 = *param_1 + 8;
    do {
      lVar7 = lVar7 + -0x28;
      lVar2 = *param_2;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_88 = 0;
      if (lVar2 == 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
      }
      else {
        FUN_1400bbfae(&local_80,lVar2);
        uStack_a0 = CONCAT44(uStack_7c,local_80);
        local_98 = CONCAT44(uStack_74,uStack_78);
        if (uStack_90 != 0) {
          FUN_1400020a8();
        }
        uStack_90 = CONCAT44(uStack_6c,local_70);
        local_88 = CONCAT44(uStack_64,uStack_68);
        cVar3 = (*(code *)PTR_FUN_14c758760)();
        if (cVar3 != '\0') {
          uVar1 = *(uint *)(lVar2 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
            local_a8 = 0;
            goto LAB_148cd807e;
          }
        }
        FUN_14485c47a(&local_a8,lVar2);
      }
LAB_148cd807e:
      uVar4 = FUN_144a7afa6(lVar6,&uStack_a0);
      if (uStack_90 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x28;
    } while ((byte)(lVar7 == 0 | (byte)uVar4) != 1);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd80ea FUN_148cd80ea body=153 status=ok
// SIG undefined FUN_148cd80ea(void)

uint * FUN_148cd80ea(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  FUN_14011823e(param_4);
  uVar5 = FUN_1447262c2(param_4);
  lVar6 = FUN_1440bd6f6(uVar5);
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x02') {
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = 0;
  }
  else if (cVar1 == '\x01') {
    if (lVar6 == 0) {
      uVar4 = 0;
    }
    else {
      bVar2 = FUN_1411d74a2(lVar6);
      uVar4 = (uint)bVar2;
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar4;
  }
  else {
    if (cVar1 != '\0') {
      *(undefined2 *)(param_2 + 6) = 0;
      uVar3 = 0;
      goto LAB_148cd8167;
    }
    uVar4 = 0;
    if (lVar6 != 0) {
      uVar4 = (uint)(*(char *)(lVar6 + 0xd0) == '\x01');
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar4;
  }
  uVar3 = 1;
LAB_148cd8167:
  *(undefined1 *)(param_2 + 8) = uVar3;
  return param_2;
}



// FUNCTION 148cd818c FUN_148cd818c body=335 status=ok
// SIG undefined FUN_148cd818c(void)

void FUN_148cd818c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_3e8 [40];
  undefined1 *local_3c0;
  undefined4 local_3b8;
  undefined1 local_3b0 [784];
  undefined1 local_a0;
  undefined5 local_9c;
  undefined3 uStack_97;
  undefined5 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if (param_2 != 0) {
    uVar1 = FUN_145a89d04();
    lVar2 = FUN_144718840(param_2,uVar1);
    if (lVar2 != 0) {
      lVar3 = FUN_148cd82dc(param_1);
      if (lVar3 != 0) {
        FUN_144007dae(local_3b0);
        local_a0 = 0;
        local_9c = 0;
        uStack_97 = 0;
        uStack_94 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        puStack_70 = (undefined1 *)0x0;
        local_68 = 0;
        FUN_14140cdf2(local_3b0,lVar3 + 0x18);
        FUN_141068c44(param_1,&local_3c0);
        local_68 = local_3b8;
        puStack_70 = local_3c0;
        local_3c0 = &LAB_148cd84aa;
        local_3b8 = 0;
        FUN_148cd832a(&local_60,param_1,&local_3c0);
        FUN_148cdf4ba(lVar2,local_3b0);
        FUN_1449db362(&local_50);
        FUN_1449db362(&local_60);
        FUN_140d97376(local_3b0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd82dc FUN_148cd82dc body=78 status=ok
// SIG undefined FUN_148cd82dc(void)

longlong * FUN_148cd82dc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465a36a6();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148cd832a FUN_148cd832a body=384 status=ok
// SIG undefined FUN_148cd832a(void)

void FUN_148cd832a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148cd843d:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b95fc80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148cd843d;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b95fc80;
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
                    /* WARNING: Could not recover jumptable at 0x000148cd8439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cd84b6 FUN_148cd84b6 body=54 status=ok
// SIG undefined FUN_148cd84b6(void)

void FUN_148cd84b6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_145a89d04();
    lVar2 = FUN_144718840(param_2,uVar1);
    if (lVar2 != 0) {
      FUN_148cdefe8(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148cd84f0 FUN_148cd84f0 body=234 status=ok
// SIG undefined FUN_148cd84f0(void)

longlong * FUN_148cd84f0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b95fcf0;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b95fd10;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148cde3ba(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd85de FUN_148cd85de body=387 status=ok
// SIG undefined FUN_148cd85de(void)

undefined8 * FUN_148cd85de(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  FUN_144007dae(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x371) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x7a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x94] = 0;
  param_1[0x95] = 0x8000000000;
  param_1[0x96] = 0xffffffff;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0xf;
  *(undefined2 *)(param_1 + 0xa0) = 1;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x584) = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x58c) = 0;
  param_1[0xb4] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xaf] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  return param_1;
}



// FUNCTION 148cd8762 FUN_148cd8762 body=222 status=ok
// SIG undefined FUN_148cd8762(void)

void FUN_148cd8762(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x5a0);
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
  if (*(char *)(param_1 + 0x584) == '\x01') {
    *(undefined1 *)(param_1 + 0x584) = 0;
  }
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_1 + 0x440);
  FUN_1449db362(param_1 + 0x3b8);
  FUN_1449db362(param_1 + 0x3a8);
  FUN_140d97376(param_1 + 0x58);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd8834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148cd8840 FUN_148cd8840 body=74 status=ok
// SIG undefined FUN_148cd8840(void)

undefined8 * FUN_148cd8840(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_145a89d04();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 148cd888a FUN_148cd888a body=133 status=ok
// SIG undefined FUN_148cd888a(void)

longlong FUN_148cd888a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14140cdf2();
  uVar1 = *(undefined4 *)(param_2 + 0x314);
  uVar2 = *(undefined4 *)(param_2 + 0x318);
  uVar3 = *(undefined4 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x314) = uVar1;
  *(undefined4 *)(param_1 + 0x318) = uVar2;
  *(undefined4 *)(param_1 + 0x31c) = uVar3;
  *(undefined1 *)(param_1 + 800) = *(undefined1 *)(param_2 + 800);
  FUN_145a39a7c(param_1 + 0x328,param_2 + 0x328);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
  FUN_14009d848(param_1 + 0x350,param_2 + 0x350);
  FUN_14009d848(param_1 + 0x360,param_2 + 0x360);
  return param_1;
}



// FUNCTION 148cd8910 FUN_148cd8910 body=373 status=ok
// SIG undefined FUN_148cd8910(void)

longlong * FUN_148cd8910(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148cd8a18:
    *puVar3 = &PTR_LAB_14a1c8830;
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
    *puVar3 = &PTR_FUN_14b95fd40;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148cd8a18;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14a1c8830;
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
    *puVar3 = &PTR_FUN_14b95fd40;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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



// FUNCTION 148cd8a86 FUN_148cd8a86 body=54 status=ok
// SIG undefined FUN_148cd8a86(void)

void FUN_148cd8a86(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x18);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
      FUN_148cdefe8();
      return;
    }
  }
  return;
}



// FUNCTION 148cd8abc FUN_148cd8abc body=380 status=ok
// SIG undefined FUN_148cd8abc(void)

void FUN_148cd8abc(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_2;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    FUN_148cd8840(&local_40,&local_30);
    *(undefined4 *)(param_1 + 0x18) = local_40;
    *(undefined4 *)(param_1 + 0x1c) = uStack_3c;
    *(undefined4 *)(param_1 + 0x20) = uStack_38;
    *(undefined4 *)(param_1 + 0x24) = uStack_34;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      cVar4 = FUN_144729dda(param_1 + 0x18);
      if (cVar4 != '\0') {
        if (*(longlong *)(param_1 + 0x20) != 0) {
          cVar4 = FUN_144729dda(param_1 + 0x18);
          if (cVar4 != '\0') {
            lVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
            if (lVar5 != 0) {
              *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(lVar5 + 3);
              *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar5 + 8);
              uVar1 = *(undefined4 *)(lVar5 + 0x14);
              uVar2 = *(undefined4 *)(lVar5 + 0x18);
              uVar3 = *(undefined4 *)(lVar5 + 0x1c);
              *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar5 + 0x10);
              *(undefined4 *)(param_1 + 0x6c) = uVar1;
              *(undefined4 *)(param_1 + 0x70) = uVar2;
              *(undefined4 *)(param_1 + 0x74) = uVar3;
              FUN_144a787a6(param_1 + 0x78,lVar5 + 0x20);
              FUN_1407b25f0(param_1 + 0x440,lVar5 + 0x30);
              puVar7 = (undefined8 *)(lVar5 + 0x110);
              puVar8 = (undefined8 *)(param_1 + 0x3d0);
              for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(lVar5 + 0x170);
              *(undefined8 *)(param_1 + 0x438) = *(undefined8 *)(lVar5 + 0x178);
              *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(lVar5 + 0x180);
              uVar1 = *(undefined4 *)(lVar5 + 0x18c);
              uVar2 = *(undefined4 *)(lVar5 + 400);
              uVar3 = *(undefined4 *)(lVar5 + 0x194);
              *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(lVar5 + 0x188);
              *(undefined4 *)(param_1 + 0x54c) = uVar1;
              *(undefined4 *)(param_1 + 0x550) = uVar2;
              *(undefined4 *)(param_1 + 0x554) = uVar3;
              FUN_144a787a6(param_1 + 0x558,lVar5 + 0x198);
            }
          }
        }
        lVar5 = FUN_148cdf8ed();
        *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(lVar5 + 0x40);
        uVar1 = *(undefined4 *)(lVar5 + 0x4c);
        uVar2 = *(undefined4 *)(lVar5 + 0x50);
        uVar3 = *(undefined4 *)(lVar5 + 0x54);
        *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(lVar5 + 0x48);
        *(undefined4 *)(param_1 + 0x524) = uVar1;
        *(undefined4 *)(param_1 + 0x528) = uVar2;
        *(undefined4 *)(param_1 + 0x52c) = uVar3;
        FUN_144a787a6(param_1 + 0x530,lVar5 + 0x58);
        FUN_1440bf802(param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd8c3a FUN_148cd8c3a body=179 status=ok
// SIG undefined FUN_148cd8c3a(void)

void FUN_148cd8c3a(longlong param_1,char param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  
  uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (param_2 == '\x03') {
    uVar6 = CONCAT71(uVar5,*(char *)(param_1 + 0x58) == '\x01');
  }
  else if (param_2 == '\x02') {
    uVar6 = CONCAT71(uVar5,1);
  }
  else {
    uVar6 = 0;
  }
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  cVar1 = *(char *)(param_1 + 0x58);
  uVar3 = FUN_148cd99ea(param_1);
  FUN_1440bfc72(param_1,uVar3);
  FUN_1440c046a(param_1,CONCAT71(uVar5,param_2 == '\x02') & 0xffffffff);
  FUN_1440c0876(param_1,uVar6 & 0xffffffff);
  cVar2 = FUN_144729dda(param_1 + 0x590);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x590);
    (**(code **)(*plVar4 + 0x330))(plVar4,uVar6 & 0xffffffff ^ 1);
  }
  if ((char)uVar6 == '\0') {
    return;
  }
  FUN_148cd9670(param_1,CONCAT71(uVar5,param_2 == '\x02' && cVar1 == '\x01') & 0xffffffff);
  return;
}



// FUNCTION 148cd8d70 FUN_148cd8d70 body=175 status=ok
// SIG undefined FUN_148cd8d70(void)

void FUN_148cd8d70(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_144a87d38(param_1 + 0x88);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x68) != 0)) {
    if ((longlong *)param_2[1] != (longlong *)0x0 && *param_2 != 0) {
      lVar2 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
      if (lVar2 != 0) {
        lVar3 = FUN_144a5dd5e();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           (*(longlong *)(lVar2 + 0xf48) != 0)) {
          FUN_148bf7770(*(longlong *)(lVar2 + 0xf48),param_1 + 0x88);
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x3b0) != 0) && (*(longlong **)(param_1 + 0x3a8) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148cd8dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 148cd8e20 FUN_148cd8e20 body=375 status=ok
// SIG undefined FUN_148cd8e20(void)

void FUN_148cd8e20(longlong *param_1,undefined8 *param_2)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148cd8f29:
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
    *puVar3 = &PTR_FUN_14b95fdb0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_148cd8d70;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148cd8f29;
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
    uVar5 = *param_2;
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
    *puVar3 = &PTR_FUN_14b95fdb0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_148cd8d70;
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
                    /* WARNING: Could not recover jumptable at 0x000148cd8f25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cd8f98 FUN_148cd8f98 body=1282 status=ok
// SIG undefined FUN_148cd8f98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148cd8f98(longlong param_1,longlong *param_2)

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
  char cVar10;
  longlong lVar11;
  double *pdVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  undefined1 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_2 == (longlong *)0x0) goto LAB_148cd93ee;
  dVar16 = *(double *)(param_1 + 0x3f0);
  dVar5 = *(double *)(param_1 + 0x3f8);
  dVar1 = *(double *)(param_1 + 0x400);
  local_b8 = *(double *)(param_1 + 0x3d0);
  dStack_b0 = *(double *)(param_1 + 0x3d8);
  local_a8 = *(double *)(param_1 + 0x3e0);
  dStack_a0 = *(double *)(param_1 + 1000);
  FUN_1448052ee(&local_b8,&local_f0);
  dVar8 = *(double *)(param_1 + 0x410);
  dVar9 = *(double *)(param_1 + 0x418);
  dVar2 = *(double *)(param_1 + 0x420);
  if (*(longlong *)(param_1 + 0x438) != 0) {
    cVar10 = (**(code **)(*param_2 + 0x4c8))(param_2);
    if (cVar10 != '\0') {
      uVar29 = (undefined4)DAT_14c8464e0;
      uVar30 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      uVar31 = (undefined4)DAT_14c8464e8;
      uVar32 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      uVar27 = (undefined4)DAT_14c8464f0;
      uVar28 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      local_a8 = DAT_14c846508;
      local_b8 = DAT_14c8464f8;
      dStack_b0 = DAT_14c846500;
      lVar11 = FUN_144a7a726();
      if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar11 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
          lVar11 + 0x30)) {
        lVar11 = FUN_144a745da();
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
            == lVar11 + 0x30)) {
          lVar11 = FUN_140229858(param_2,*(undefined8 *)(param_1 + 0x438));
          if (lVar11 != 0) {
            puVar13 = (undefined8 *)(lVar11 + 0x38);
            puVar14 = (undefined8 *)(lVar11 + 0x40);
            puVar15 = (undefined8 *)(lVar11 + 0x48);
            pdVar12 = (double *)(lVar11 + 0x50);
            goto LAB_148cd913c;
          }
        }
      }
      else {
        lVar11 = FUN_147a29a7a(param_2,*(undefined8 *)(param_1 + 0x438));
        if (lVar11 != 0) {
          puVar13 = (undefined8 *)(lVar11 + 0x30);
          puVar14 = (undefined8 *)(lVar11 + 0x38);
          puVar15 = (undefined8 *)(lVar11 + 0x40);
          pdVar12 = (double *)(lVar11 + 0x48);
LAB_148cd913c:
          uVar27 = (undefined4)*puVar15;
          uVar28 = (undefined4)((ulonglong)*puVar15 >> 0x20);
          uVar29 = (undefined4)*puVar13;
          uVar30 = (undefined4)((ulonglong)*puVar13 >> 0x20);
          uVar31 = (undefined4)*puVar14;
          uVar32 = (undefined4)((ulonglong)*puVar14 >> 0x20);
          local_a8 = pdVar12[2];
          local_b8 = *pdVar12;
          dStack_b0 = pdVar12[1];
        }
      }
      local_f8 = -(double)CONCAT44(uVar28,uVar27) * dVar2;
      local_100 = dVar9 * -(double)CONCAT44(uVar32,uVar31);
      local_108 = -(double)CONCAT44(uVar30,uVar29) * dVar8;
      FUN_1401c9a0e(&local_b8,local_d8);
      dVar16 = (double)local_d8._0_8_ + dVar16;
      dVar5 = dVar5 + (double)local_d8._8_8_;
      dVar1 = dVar1 + local_c8;
      local_f0 = local_b8 + local_f0;
      dStack_e8 = dStack_b0 + dStack_e8;
      local_e0 = local_a8 + local_e0;
    }
  }
  auVar17 = *(undefined1 (*) [16])(param_2 + 0x36);
  dVar6 = auVar17._0_8_;
  dVar7 = auVar17._8_8_;
  dVar22 = (double)param_2[0x38];
  pdVar12 = (double *)param_2[0x46];
  if (pdVar12 == (double *)0x0) {
    pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
    dVar3 = DAT_14c8463d8;
    *pdVar12 = DAT_14c8463d0;
    pdVar12[1] = dVar3;
    dVar3 = DAT_14c8463e8;
    pdVar12[2] = DAT_14c8463e0;
    pdVar12[3] = dVar3;
    dVar3 = DAT_14c846500;
    pdVar12[4] = DAT_14c8464f8;
    pdVar12[5] = dVar3;
    pdVar12[6] = DAT_14c846508;
    param_2[0x46] = (longlong)pdVar12;
  }
  if ((((pdVar12[4] != dVar6) || (NAN(pdVar12[4]) || NAN(dVar6))) || (pdVar12[5] != dVar7)) ||
     (NAN(pdVar12[5]) || NAN(dVar7))) {
LAB_148cd9282:
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar22;
    dVar3 = (double)DAT_1499387d0;
    dVar4 = DAT_1499387d0._8_8_;
    auVar17 = divpd(auVar17,_DAT_1499387d0);
    auVar20 = divpd(auVar25,_DAT_1499387d0);
    auVar17 = roundpd(auVar17,auVar17,3);
    auVar20 = roundpd(auVar20,auVar20,3);
    dVar6 = dVar6 - auVar17._0_8_ * dVar3;
    dVar7 = dVar7 - auVar17._8_8_ * dVar4;
    auVar26._0_8_ = dVar22 - auVar20._0_8_ * dVar3;
    auVar26._8_8_ = 0.0 - auVar20._8_8_ * dVar4;
    auVar24._0_8_ = dVar6 + dVar3;
    auVar24._8_8_ = dVar7 + dVar4;
    auVar23._0_8_ = dVar3 + auVar26._0_8_;
    auVar23._8_8_ = dVar4 + auVar26._8_8_;
    auVar20._8_8_ = -(ulonglong)(0.0 <= dVar7);
    auVar20._0_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar17._8_4_ = SUB84(dVar7,0);
    auVar17._0_8_ = dVar6;
    auVar17._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar20 = blendvpd(auVar24,auVar17,auVar20);
    auVar18._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
    auVar18._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
    auVar17 = blendvpd(auVar23,auVar26,auVar18);
    auVar21._0_8_ = auVar20._0_8_ + -360.0;
    auVar21._8_8_ = auVar20._8_8_ + -360.0;
    auVar19._8_8_ = -(ulonglong)(180.0 < auVar20._8_8_);
    auVar19._0_8_ = -(ulonglong)(180.0 < auVar20._0_8_);
    auVar20 = blendvpd(auVar20,auVar21,auVar19);
    dVar22 = auVar17._0_8_;
    *(undefined1 (*) [16])(pdVar12 + 4) = auVar20;
    pdVar12[6] = (double)(~-(ulonglong)(180.0 < dVar22) & (ulonglong)dVar22 |
                         (ulonglong)(dVar22 + -360.0) & -(ulonglong)(180.0 < dVar22));
    FUN_144a7484c(pdVar12 + 4,&local_b8);
    pdVar12[2] = local_a8;
    pdVar12[3] = dStack_a0;
    *pdVar12 = local_b8;
    pdVar12[1] = dStack_b0;
  }
  else if ((pdVar12[6] != dVar22) || (NAN(pdVar12[6]) || NAN(dVar22))) goto LAB_148cd9282;
  local_b8 = *pdVar12;
  dStack_b0 = pdVar12[1];
  local_a8 = pdVar12[2];
  dStack_a0 = pdVar12[3];
  local_d8._8_4_ = SUB84(dVar5,0);
  local_d8._0_8_ = dVar16;
  local_d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_150 = 0;
  local_158 = 0;
  local_c8 = dVar1;
  FUN_144927ad4(param_2,local_d8,&local_b8,0);
  local_128 = local_f0;
  dStack_120 = dStack_e8;
  local_118 = local_e0;
  local_158 = local_158 & 0xffffffffffffff00;
  FUN_14020f75c(param_2,&local_128,0,0);
  local_148 = dVar8;
  dStack_140 = dVar9;
  local_138 = dVar2;
  (**(code **)(*param_2 + 0x478))(param_2);
LAB_148cd93ee:
  if ((local_90 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd949c FUN_148cd949c body=105 status=ok
// SIG undefined FUN_148cd949c(void)

void FUN_148cd949c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((((lVar2 == 0) || (*(char *)(lVar2 + 0x30) != '\0')) || (*(char *)(lVar2 + 0x31) != '\0')) ||
     ((*(int *)(lVar2 + 0x6c) != 2 || (*(char *)(param_1 + 0x58c) != '\0')))) {
    return;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x18);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
      if (lVar2 != 0) {
        uVar3 = *(undefined1 *)(lVar2 + 1);
        goto LAB_148cd94f3;
      }
    }
  }
  uVar3 = 0;
LAB_148cd94f3:
  FUN_148cd8c3a(param_1,uVar3);
  return;
}



// FUNCTION 148cd9506 FUN_148cd9506 body=69 status=ok
// SIG undefined FUN_148cd9506(void)

void FUN_148cd9506(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x18);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
      if ((lVar2 != 0) && (*(char *)(lVar2 + 1) == '\x03')) {
        FUN_1440bfa2e(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cd954c FUN_148cd954c body=77 status=ok
// SIG undefined FUN_148cd954c(void)

void FUN_148cd954c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x30) == '\0')) && (*(char *)(lVar1 + 0x31) == '\0')) &&
     ((*(int *)(lVar1 + 0x6c) == 2 && (*(char *)(param_1 + 0x58c) == '\0')))) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  FUN_1440c1326(param_1,1);
  FUN_1440bfa2e(param_1);
  return;
}



// FUNCTION 148cd959a FUN_148cd959a body=212 status=ok
// SIG undefined FUN_148cd959a(void)

longlong FUN_148cd959a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_78;
  byte local_76;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1411371f6(local_a8);
  local_78 = 0x101;
  local_98 = 0;
  uStack_90 = 0;
  local_76 = local_76 | 4;
  if (param_2 != 0) {
    lVar1 = FUN_141037e38(param_1,param_2,param_3,local_a8);
    if (lVar1 != 0) {
      lVar2 = FUN_140126fc0();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_148cd9624;
    }
  }
  lVar1 = 0;
LAB_148cd9624:
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd9670 FUN_148cd9670 body=867 status=ok
// SIG undefined FUN_148cd9670(void)

void FUN_148cd9670(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x598) != 0) {
      FUN_14101c144();
      *(undefined8 *)(param_1 + 0x598) = 0;
      puVar4 = *(undefined8 **)(param_1 + 0x5a0);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x5a0) = 0;
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar2 = (int *)((longlong)puVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
          }
        }
      }
    }
    goto LAB_148cd96a1;
  }
  if (*(longlong *)(param_1 + 0x598) != 0) goto LAB_148cd96a1;
  lVar5 = FUN_14479d2ce(param_1 + 0x568);
  if (lVar5 == 0) {
    lVar5 = FUN_14479d2ce(param_1 + 0x590);
    if (lVar5 == 0) goto LAB_148cd96a1;
    plVar6 = (longlong *)FUN_14001cc68(0x68,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14b959dc0;
    plVar1 = plVar6 + 2;
    FUN_143d88080(plVar1);
    local_40 = plVar1;
    local_38 = plVar6;
    FUN_14125652a(&local_40,plVar1);
    plVar1 = local_38;
    if (local_38 == (longlong *)0x0) {
      *(longlong **)(param_1 + 0x598) = local_40;
      plVar6 = *(longlong **)(param_1 + 0x5a0);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x5a0) = 0;
LAB_148cd994d:
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x000148cd997a:
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x598) = local_40;
      plVar6 = *(longlong **)(param_1 + 0x5a0);
      if (local_38 == plVar6) {
        LOCK();
        plVar6 = local_38 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar6 = plVar1;
          goto joined_r0x000148cd997a;
        }
      }
      else {
        *(longlong **)(param_1 + 0x5a0) = local_38;
        if (plVar6 != (longlong *)0x0) goto LAB_148cd994d;
      }
    }
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_38 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_143d88070(&local_40);
    uVar7 = FUN_1402d20ea(param_1 + 0x540);
    FUN_14485c47a((longlong)&local_40 + 4,uVar7);
    FUN_1412565ca(*(undefined8 *)(param_1 + 0x598),lVar5,&local_40);
    goto LAB_148cd96a1;
  }
  plVar6 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b959dc0;
  plVar1 = plVar6 + 2;
  FUN_143d88080(plVar1);
  local_40 = plVar1;
  local_38 = plVar6;
  FUN_14125652a(&local_40,plVar1);
  plVar1 = local_38;
  if (local_38 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x598) = local_40;
    plVar6 = *(longlong **)(param_1 + 0x5a0);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x5a0) = 0;
LAB_148cd9893:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000148cd98c0:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x598) = local_40;
    plVar6 = *(longlong **)(param_1 + 0x5a0);
    if (local_38 == plVar6) {
      LOCK();
      plVar6 = local_38 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar1;
        goto joined_r0x000148cd98c0;
      }
    }
    else {
      *(longlong **)(param_1 + 0x5a0) = local_38;
      if (plVar6 != (longlong *)0x0) goto LAB_148cd9893;
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_143d88070(&local_40);
  uVar7 = FUN_1402d20ea(param_1 + 0x540);
  FUN_14485c47a((longlong)&local_40 + 4,uVar7);
  FUN_1488b124e(*(undefined8 *)(param_1 + 0x598),lVar5,&local_40);
LAB_148cd96a1:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd99ea FUN_148cd99ea body=136 status=ok
// SIG undefined FUN_148cd99ea(void)

undefined1 FUN_148cd99ea(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((((*(longlong *)(param_1 + 0x20) != 0) &&
       (cVar1 = FUN_144729dda(param_1 + 0x18), cVar1 != '\0')) &&
      (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), lVar2 != 0)) &&
     (*(char *)(lVar2 + 1) == '\x02')) {
    if (*(char *)(param_1 + 0x58) == '\x01') {
      return 1;
    }
    if (*(char *)(param_1 + 0x58) == '\0') {
      if (*(longlong *)(param_1 + 0x440) == 0) {
        return 1;
      }
      if ((longlong)*(int *)(param_1 + 0x458) != 0) {
        lVar2 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x450) + lVar2) == 0) {
            return 1;
          }
          bVar3 = (longlong)*(int *)(param_1 + 0x458) * 8 + -8 != lVar2;
          lVar2 = lVar2 + 8;
        } while (bVar3);
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 148cd9a72 FUN_148cd9a72 body=38 status=ok
// SIG undefined FUN_148cd9a72(void)

undefined8 FUN_148cd9a72(undefined8 param_1,int param_2)

{
  FUN_140db3ae2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9a98 FUN_148cd9a98 body=48 status=ok
// SIG undefined FUN_148cd9a98(void)

longlong FUN_148cd9a98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9ac8 FUN_148cd9ac8 body=48 status=ok
// SIG undefined FUN_148cd9ac8(void)

longlong FUN_148cd9ac8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9af8 FUN_148cd9af8 body=48 status=ok
// SIG undefined FUN_148cd9af8(void)

longlong FUN_148cd9af8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9b28 FUN_148cd9b28 body=48 status=ok
// SIG undefined FUN_148cd9b28(void)

longlong FUN_148cd9b28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9b58 FUN_148cd9b58 body=48 status=ok
// SIG undefined FUN_148cd9b58(void)

longlong FUN_148cd9b58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9b88 FUN_148cd9b88 body=48 status=ok
// SIG undefined FUN_148cd9b88(void)

longlong FUN_148cd9b88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9bb8 FUN_148cd9bb8 body=48 status=ok
// SIG undefined FUN_148cd9bb8(void)

longlong FUN_148cd9bb8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9be8 FUN_148cd9be8 body=48 status=ok
// SIG undefined FUN_148cd9be8(void)

longlong FUN_148cd9be8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9c18 FUN_148cd9c18 body=48 status=ok
// SIG undefined FUN_148cd9c18(void)

longlong FUN_148cd9c18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9c48 FUN_148cd9c48 body=48 status=ok
// SIG undefined FUN_148cd9c48(void)

longlong FUN_148cd9c48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9c78 FUN_148cd9c78 body=48 status=ok
// SIG undefined FUN_148cd9c78(void)

longlong FUN_148cd9c78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9ca8 FUN_148cd9ca8 body=48 status=ok
// SIG undefined FUN_148cd9ca8(void)

longlong FUN_148cd9ca8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9cd8 FUN_148cd9cd8 body=48 status=ok
// SIG undefined FUN_148cd9cd8(void)

longlong FUN_148cd9cd8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9d08 FUN_148cd9d08 body=48 status=ok
// SIG undefined FUN_148cd9d08(void)

longlong FUN_148cd9d08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9d38 FUN_148cd9d38 body=48 status=ok
// SIG undefined FUN_148cd9d38(void)

longlong FUN_148cd9d38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9d68 FUN_148cd9d68 body=48 status=ok
// SIG undefined FUN_148cd9d68(void)

longlong FUN_148cd9d68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9d98 FUN_148cd9d98 body=48 status=ok
// SIG undefined FUN_148cd9d98(void)

longlong FUN_148cd9d98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9dc8 FUN_148cd9dc8 body=48 status=ok
// SIG undefined FUN_148cd9dc8(void)

longlong FUN_148cd9dc8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9df8 FUN_148cd9df8 body=48 status=ok
// SIG undefined FUN_148cd9df8(void)

longlong FUN_148cd9df8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9e28 FUN_148cd9e28 body=48 status=ok
// SIG undefined FUN_148cd9e28(void)

longlong FUN_148cd9e28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9e58 FUN_148cd9e58 body=48 status=ok
// SIG undefined FUN_148cd9e58(void)

longlong FUN_148cd9e58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9e88 FUN_148cd9e88 body=48 status=ok
// SIG undefined FUN_148cd9e88(void)

longlong FUN_148cd9e88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9eb8 FUN_148cd9eb8 body=48 status=ok
// SIG undefined FUN_148cd9eb8(void)

longlong FUN_148cd9eb8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9ee8 FUN_148cd9ee8 body=48 status=ok
// SIG undefined FUN_148cd9ee8(void)

longlong FUN_148cd9ee8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9f18 FUN_148cd9f18 body=48 status=ok
// SIG undefined FUN_148cd9f18(void)

longlong FUN_148cd9f18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9f48 FUN_148cd9f48 body=48 status=ok
// SIG undefined FUN_148cd9f48(void)

longlong FUN_148cd9f48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9f78 FUN_148cd9f78 body=48 status=ok
// SIG undefined FUN_148cd9f78(void)

longlong FUN_148cd9f78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9fa8 FUN_148cd9fa8 body=48 status=ok
// SIG undefined FUN_148cd9fa8(void)

longlong FUN_148cd9fa8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd9fd8 FUN_148cd9fd8 body=48 status=ok
// SIG undefined FUN_148cd9fd8(void)

longlong FUN_148cd9fd8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cda00e FUN_148cda00e body=38 status=ok
// SIG undefined FUN_148cda00e(void)

undefined8 FUN_148cda00e(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cda03a FUN_148cda03a body=29 status=ok
// SIG undefined FUN_148cda03a(void)

bool FUN_148cda03a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cda058 FUN_148cda058 body=26 status=ok
// SIG undefined FUN_148cda058(void)

bool FUN_148cda058(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cda072 FUN_148cda072 body=101 status=ok
// SIG undefined FUN_148cda072(void)

void FUN_148cda072(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95e910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cda0d8 FUN_148cda0d8 body=134 status=ok
// SIG undefined FUN_148cda0d8(void)

void FUN_148cda0d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95e910;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cda14f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cda15e FUN_148cda15e body=146 status=ok
// SIG undefined FUN_148cda15e(void)

bool FUN_148cda15e(longlong param_1)

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



// FUNCTION 148cda1f2 FUN_148cda1f2 body=380 status=ok
// SIG undefined FUN_148cda1f2(void)

longlong * FUN_148cda1f2(longlong *param_1,undefined8 *param_2)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148cda2fc:
    *puVar3 = &PTR_LAB_149e020b0;
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
    *puVar3 = &PTR_FUN_14b95e9a0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_148cd949c;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148cda2fc;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
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
    *puVar3 = &PTR_FUN_14b95e9a0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_148cd949c;
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



// FUNCTION 148cda36e FUN_148cda36e body=64 status=ok
// SIG undefined FUN_148cda36e(void)

undefined8 * FUN_148cda36e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b95e9a0;
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



// FUNCTION 148cda3b2 FUN_148cda3b2 body=81 status=ok
// SIG undefined FUN_148cda3b2(void)

undefined8 FUN_148cda3b2(longlong param_1)

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



// FUNCTION 148cda40a FUN_148cda40a body=89 status=ok
// SIG undefined FUN_148cda40a(void)

bool FUN_148cda40a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148cda455;
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
LAB_148cda455:
  return lVar6 == param_2;
}



// FUNCTION 148cda480 FUN_148cda480 body=118 status=ok
// SIG undefined FUN_148cda480(void)

void FUN_148cda480(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95e9a0;
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



// FUNCTION 148cda4f6 FUN_148cda4f6 body=118 status=ok
// SIG undefined FUN_148cda4f6(void)

void FUN_148cda4f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95e9a0;
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



// FUNCTION 148cda56c FUN_148cda56c body=156 status=ok
// SIG undefined FUN_148cda56c(void)

void FUN_148cda56c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95e9a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148cda5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cda608 FUN_148cda608 body=94 status=ok
// SIG undefined FUN_148cda608(void)

void FUN_148cda608(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148cda650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cda65b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148cda666 FUN_148cda666 body=93 status=ok
// SIG undefined FUN_148cda666(void)

ulonglong FUN_148cda666(longlong param_1)

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
LAB_148cda6b8:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148cda6b8;
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



// FUNCTION 148cda6c4 FUN_148cda6c4 body=380 status=ok
// SIG undefined FUN_148cda6c4(void)

longlong * FUN_148cda6c4(longlong *param_1,undefined8 *param_2)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148cda7ce:
    *puVar3 = &PTR_LAB_14ac8c8d0;
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
    *puVar3 = &PTR_FUN_14b95ea10;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1440c0d28;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148cda7ce;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14ac8c8d0;
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
    *puVar3 = &PTR_FUN_14b95ea10;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1440c0d28;
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



// FUNCTION 148cda840 FUN_148cda840 body=64 status=ok
// SIG undefined FUN_148cda840(void)

undefined8 * FUN_148cda840(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b95ea10;
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



// FUNCTION 148cda884 FUN_148cda884 body=81 status=ok
// SIG undefined FUN_148cda884(void)

undefined8 FUN_148cda884(longlong param_1)

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



// FUNCTION 148cda8dc FUN_148cda8dc body=89 status=ok
// SIG undefined FUN_148cda8dc(void)

bool FUN_148cda8dc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148cda927;
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
LAB_148cda927:
  return lVar6 == param_2;
}



// FUNCTION 148cda952 FUN_148cda952 body=118 status=ok
// SIG undefined FUN_148cda952(void)

void FUN_148cda952(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ea10;
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



// FUNCTION 148cda9c8 FUN_148cda9c8 body=118 status=ok
// SIG undefined FUN_148cda9c8(void)

void FUN_148cda9c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ea10;
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



// FUNCTION 148cdaa3e FUN_148cdaa3e body=156 status=ok
// SIG undefined FUN_148cdaa3e(void)

void FUN_148cdaa3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95ea10;
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
                    /* WARNING: Could not recover jumptable at 0x000148cdaaca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdaada FUN_148cdaada body=98 status=ok
// SIG undefined FUN_148cdaada(void)

void FUN_148cdaada(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148cdab23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cdab32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148cdab3c FUN_148cdab3c body=94 status=ok
// SIG undefined FUN_148cdab3c(void)

ulonglong FUN_148cdab3c(longlong param_1)

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
LAB_148cdab8f:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148cdab8f;
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



// FUNCTION 148cdab9a FUN_148cdab9a body=114 status=ok
// SIG undefined FUN_148cdab9a(void)

void FUN_148cdab9a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148cdac0c FUN_148cdac0c body=62 status=ok
// SIG undefined FUN_148cdac0c(void)

void FUN_148cdac0c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cdac4a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 148cdac4a FUN_148cdac4a body=93 status=ok
// SIG undefined FUN_148cdac4a(void)

ulonglong FUN_148cdac4a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148cdacac FUN_148cdacac body=29 status=ok
// SIG undefined FUN_148cdacac(void)

undefined8 FUN_148cdacac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdace4 FUN_148cdace4 body=29 status=ok
// SIG undefined FUN_148cdace4(void)

bool FUN_148cdace4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cdad02 FUN_148cdad02 body=26 status=ok
// SIG undefined FUN_148cdad02(void)

bool FUN_148cdad02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cdad1c FUN_148cdad1c body=24 status=ok
// SIG undefined FUN_148cdad1c(void)

bool FUN_148cdad1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148cdad34 FUN_148cdad34 body=101 status=ok
// SIG undefined FUN_148cdad34(void)

void FUN_148cdad34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95fed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ed60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdad9a FUN_148cdad9a body=101 status=ok
// SIG undefined FUN_148cdad9a(void)

void FUN_148cdad9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95fed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ed60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdae00 FUN_148cdae00 body=134 status=ok
// SIG undefined FUN_148cdae00(void)

void FUN_148cdae00(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b95fed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95ed60;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdae77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdae86 FUN_148cdae86 body=44 status=ok
// SIG undefined FUN_148cdae86(void)

void FUN_148cdae86(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdaeaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cdaeb2 FUN_148cdaeb2 body=156 status=ok
// SIG undefined FUN_148cdaeb2(void)

bool FUN_148cdaeb2(longlong param_1,undefined8 param_2)

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



// FUNCTION 148cdaf50 FUN_148cdaf50 body=132 status=ok
// SIG undefined FUN_148cdaf50(void)

void FUN_148cdaf50(longlong param_1,int param_2)

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



// FUNCTION 148cdafd6 FUN_148cdafd6 body=173 status=ok
// SIG undefined FUN_148cdafd6(void)

void FUN_148cdafd6(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148cdb06d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148cdb06d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148cdb09e FUN_148cdb09e body=29 status=ok
// SIG undefined FUN_148cdb09e(void)

bool FUN_148cdb09e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cdb0bc FUN_148cdb0bc body=26 status=ok
// SIG undefined FUN_148cdb0bc(void)

bool FUN_148cdb0bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cdb0d6 FUN_148cdb0d6 body=101 status=ok
// SIG undefined FUN_148cdb0d6(void)

void FUN_148cdb0d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c920;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95efb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdb13c FUN_148cdb13c body=101 status=ok
// SIG undefined FUN_148cdb13c(void)

void FUN_148cdb13c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c920;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95efb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdb1a2 FUN_148cdb1a2 body=134 status=ok
// SIG undefined FUN_148cdb1a2(void)

void FUN_148cdb1a2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42c920;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95efb0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdb219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdb228 FUN_148cdb228 body=44 status=ok
// SIG undefined FUN_148cdb228(void)

void FUN_148cdb228(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdb251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cdb254 FUN_148cdb254 body=180 status=ok
// SIG undefined FUN_148cdb254(void)

longlong * FUN_148cdb254(longlong *param_1,uint param_2,longlong *param_3)

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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_148cdb2eb;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148cdb30a(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_148cdb2eb:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 148cdb30a FUN_148cdb30a body=278 status=ok
// SIG undefined FUN_148cdb30a(void)

undefined4 * FUN_148cdb30a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_148cdb422(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_148cdb508(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_148cdb5fa(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cdb422 FUN_148cdb422 body=230 status=ok
// SIG undefined FUN_148cdb422(void)

int * FUN_148cdb422(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 148cdb508 FUN_148cdb508 body=128 status=ok
// SIG undefined FUN_148cdb508(void)

undefined8 FUN_148cdb508(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148cdb588((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148cdb588 FUN_148cdb588 body=114 status=ok
// SIG undefined FUN_148cdb588(void)

void FUN_148cdb588(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 148cdb5fa FUN_148cdb5fa body=474 status=ok
// SIG undefined FUN_148cdb5fa(void)

void FUN_148cdb5fa(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
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



// FUNCTION 148cdb7d6 FUN_148cdb7d6 body=29 status=ok
// SIG undefined FUN_148cdb7d6(void)

undefined8 FUN_148cdb7d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdb80e FUN_148cdb80e body=29 status=ok
// SIG undefined FUN_148cdb80e(void)

bool FUN_148cdb80e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cdb82c FUN_148cdb82c body=26 status=ok
// SIG undefined FUN_148cdb82c(void)

bool FUN_148cdb82c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cdb846 FUN_148cdb846 body=24 status=ok
// SIG undefined FUN_148cdb846(void)

bool FUN_148cdb846(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148cdb86a FUN_148cdb86a body=101 status=ok
// SIG undefined FUN_148cdb86a(void)

void FUN_148cdb86a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95f090;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b95f020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdb8d0 FUN_148cdb8d0 body=101 status=ok
// SIG undefined FUN_148cdb8d0(void)

void FUN_148cdb8d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95f090;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b95f020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdb936 FUN_148cdb936 body=134 status=ok
// SIG undefined FUN_148cdb936(void)

void FUN_148cdb936(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b95f090;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f020;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdb9ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdb9bc FUN_148cdb9bc body=40 status=ok
// SIG undefined FUN_148cdb9bc(void)

void FUN_148cdb9bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdb9e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148cdb9e4 FUN_148cdb9e4 body=150 status=ok
// SIG undefined FUN_148cdb9e4(void)

bool FUN_148cdb9e4(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 148cdba7e FUN_148cdba7e body=132 status=ok
// SIG undefined FUN_148cdba7e(void)

void FUN_148cdba7e(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_148cdbb02(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 148cdbb02 FUN_148cdbb02 body=87 status=ok
// SIG undefined FUN_148cdbb02(void)

void FUN_148cdbb02(longlong *param_1,int param_2)

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
  FUN_148cdb588();
  return;
}



// FUNCTION 148cdbb5a FUN_148cdbb5a body=356 status=ok
// SIG undefined FUN_148cdbb5a(void)

undefined4 *
FUN_148cdbb5a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148cdbcc0(param_1,local_50);
  uVar1 = param_3[1];
  *local_48 = *(undefined8 *)*param_3;
  FUN_1401f3da4(local_48 + 1,uVar1);
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  local_54 = local_50[0];
  uVar1 = *local_48;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  local_68 = param_4;
  cVar3 = FUN_148cdbda6(param_1,uVar8,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x24) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_148cdbef0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cdbcc0 FUN_148cdbcc0 body=230 status=ok
// SIG undefined FUN_148cdbcc0(void)

int * FUN_148cdbcc0(longlong *param_1,int *param_2)

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



// FUNCTION 148cdbda6 FUN_148cdbda6 body=216 status=ok
// SIG undefined FUN_148cdbda6(void)

void FUN_148cdbda6(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  longlong *plVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar13 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar13 != -1) {
      do {
        plVar12 = (longlong *)(*param_1 + (longlong)iVar13 * 0x28);
        if (*plVar12 == *param_3) {
          plVar3 = (longlong *)plVar12[2];
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
          lVar8 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar12 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar12 + 0x14) = uVar6;
          *(int *)(plVar12 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar7;
          *(int *)plVar12 = (int)lVar8;
          *(undefined4 *)((longlong)plVar12 + 4) = uVar4;
          *(int *)(plVar12 + 1) = (int)lVar9;
          *(undefined4 *)((longlong)plVar12 + 0xc) = uVar5;
          FUN_148cdbe7e(param_1,*param_4);
          *param_4 = iVar13;
          uVar11 = 1;
          goto LAB_148cdbe1c;
        }
        iVar13 = (int)plVar12[4];
      } while (iVar13 != -1);
    }
  }
  uVar11 = 0;
LAB_148cdbe1c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar11;
  }
  return;
}



// FUNCTION 148cdbe7e FUN_148cdbe7e body=114 status=ok
// SIG undefined FUN_148cdbe7e(void)

void FUN_148cdbe7e(longlong *param_1,int param_2)

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



// FUNCTION 148cdbef0 FUN_148cdbef0 body=473 status=ok
// SIG undefined FUN_148cdbef0(void)

void FUN_148cdbef0(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 148cdc0e4 FUN_148cdc0e4 body=29 status=ok
// SIG undefined FUN_148cdc0e4(void)

bool FUN_148cdc0e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cdc102 FUN_148cdc102 body=101 status=ok
// SIG undefined FUN_148cdc102(void)

void FUN_148cdc102(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95ff40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdc168 FUN_148cdc168 body=101 status=ok
// SIG undefined FUN_148cdc168(void)

void FUN_148cdc168(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95ff40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdc1ce FUN_148cdc1ce body=134 status=ok
// SIG undefined FUN_148cdc1ce(void)

void FUN_148cdc1ce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b95ff40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f100;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdc245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdc254 FUN_148cdc254 body=42 status=ok
// SIG undefined FUN_148cdc254(void)

void FUN_148cdc254(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdc27b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cdc280 FUN_148cdc280 body=142 status=ok
// SIG undefined FUN_148cdc280(void)

undefined8 * FUN_148cdc280(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x370);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b95f170;
  memset(puVar1 + 2,0,0x360);
  FUN_14126c416(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14b7f1610;
  puVar1[0x62] = 0;
  puVar1[99] = 0;
  puVar1[100] = 0;
  puVar1[0x65] = 0;
  puVar1[0x66] = 0;
  puVar1[0x67] = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0;
  puVar1[0x6b] = 0;
  puVar1[0x6c] = 0;
  puVar1[0x6d] = 0;
  return puVar1;
}



// FUNCTION 148cdc318 FUN_148cdc318 body=29 status=ok
// SIG undefined FUN_148cdc318(void)

undefined8 FUN_148cdc318(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdc336 FUN_148cdc336 body=167 status=ok
// SIG undefined FUN_148cdc336(void)

void FUN_148cdc336(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148cdc3b1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148cdc3b1;
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
LAB_148cdc3b1:
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
                    /* WARNING: Could not recover jumptable at 0x000148cdc3d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148cdc3dd FUN_148cdc3dd body=129 status=ok
// SIG undefined FUN_148cdc3dd(void)

undefined8 * FUN_148cdc3dd(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b95f190;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b7f1680;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_1448417d2(puVar1 + 5);
  puVar1[10] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return puVar1;
}



// FUNCTION 148cdc468 FUN_148cdc468 body=29 status=ok
// SIG undefined FUN_148cdc468(void)

undefined8 FUN_148cdc468(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdc4a0 FUN_148cdc4a0 body=29 status=ok
// SIG undefined FUN_148cdc4a0(void)

bool FUN_148cdc4a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cdc4be FUN_148cdc4be body=26 status=ok
// SIG undefined FUN_148cdc4be(void)

bool FUN_148cdc4be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cdc4d8 FUN_148cdc4d8 body=101 status=ok
// SIG undefined FUN_148cdc4d8(void)

void FUN_148cdc4d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdc53e FUN_148cdc53e body=134 status=ok
// SIG undefined FUN_148cdc53e(void)

void FUN_148cdc53e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f230;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdc5b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdc5c4 FUN_148cdc5c4 body=39 status=ok
// SIG undefined FUN_148cdc5c4(void)

void FUN_148cdc5c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdc5e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148cdc5ec FUN_148cdc5ec body=62 status=ok
// SIG undefined FUN_148cdc5ec(void)

void FUN_148cdc5ec(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cdc62a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148cdc62a FUN_148cdc62a body=93 status=ok
// SIG undefined FUN_148cdc62a(void)

ulonglong FUN_148cdc62a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148cdc688 FUN_148cdc688 body=31 status=ok
// SIG undefined FUN_148cdc688(void)

undefined8 FUN_148cdc688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdc6c2 FUN_148cdc6c2 body=101 status=ok
// SIG undefined FUN_148cdc6c2(void)

void FUN_148cdc6c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4024f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f2c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdc728 FUN_148cdc728 body=101 status=ok
// SIG undefined FUN_148cdc728(void)

void FUN_148cdc728(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4024f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f2c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdc78e FUN_148cdc78e body=134 status=ok
// SIG undefined FUN_148cdc78e(void)

void FUN_148cdc78e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4024f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f2c0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdc805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdc814 FUN_148cdc814 body=52 status=ok
// SIG undefined FUN_148cdc814(void)

void FUN_148cdc814(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdc845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148cdc848 FUN_148cdc848 body=167 status=ok
// SIG undefined FUN_148cdc848(void)

bool FUN_148cdc848(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cdc8f0 FUN_148cdc8f0 body=31 status=ok
// SIG undefined FUN_148cdc8f0(void)

undefined8 FUN_148cdc8f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdc92a FUN_148cdc92a body=101 status=ok
// SIG undefined FUN_148cdc92a(void)

void FUN_148cdc92a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdc990 FUN_148cdc990 body=101 status=ok
// SIG undefined FUN_148cdc990(void)

void FUN_148cdc990(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdc9f6 FUN_148cdc9f6 body=134 status=ok
// SIG undefined FUN_148cdc9f6(void)

void FUN_148cdc9f6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f330;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdca6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdca7c FUN_148cdca7c body=44 status=ok
// SIG undefined FUN_148cdca7c(void)

void FUN_148cdca7c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdcaa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cdcaa8 FUN_148cdcaa8 body=31 status=ok
// SIG undefined FUN_148cdcaa8(void)

undefined8 FUN_148cdcaa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdcae2 FUN_148cdcae2 body=101 status=ok
// SIG undefined FUN_148cdcae2(void)

void FUN_148cdcae2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f3a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdcb48 FUN_148cdcb48 body=101 status=ok
// SIG undefined FUN_148cdcb48(void)

void FUN_148cdcb48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f3a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdcbae FUN_148cdcbae body=134 status=ok
// SIG undefined FUN_148cdcbae(void)

void FUN_148cdcbae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac89870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f3a0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdcc25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdcc34 FUN_148cdcc34 body=62 status=ok
// SIG undefined FUN_148cdcc34(void)

void FUN_148cdcc34(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdcc6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148cdcc72 FUN_148cdcc72 body=90 status=ok
// SIG undefined FUN_148cdcc72(void)

void FUN_148cdcc72(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
    if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xc0),
              (longlong)*(int *)((longlong)param_1 + 200) << 3);
      FUN_1446efa72((longlong)param_1 + 0xc0,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 148cdcccc FUN_148cdcccc body=141 status=ok
// SIG undefined FUN_148cdcccc(void)

void FUN_148cdcccc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 148cdcd5a FUN_148cdcd5a body=336 status=ok
// SIG undefined FUN_148cdcd5a(void)

void FUN_148cdcd5a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_2 + 200);
        *(uint *)(param_2 + 200) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0xcc) < iVar3 + 1U) {
          FUN_148cdceac(param_2,iVar3);
        }
        lVar5 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar5 = param_2;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cdceac FUN_148cdceac body=119 status=ok
// SIG undefined FUN_148cdceac(void)

void FUN_148cdceac(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_148cdcccc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148cdcf24 FUN_148cdcf24 body=31 status=ok
// SIG undefined FUN_148cdcf24(void)

undefined8 FUN_148cdcf24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdcf5e FUN_148cdcf5e body=26 status=ok
// SIG undefined FUN_148cdcf5e(void)

bool FUN_148cdcf5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cdcf78 FUN_148cdcf78 body=101 status=ok
// SIG undefined FUN_148cdcf78(void)

void FUN_148cdcf78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdcfde FUN_148cdcfde body=101 status=ok
// SIG undefined FUN_148cdcfde(void)

void FUN_148cdcfde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdd044 FUN_148cdd044 body=134 status=ok
// SIG undefined FUN_148cdd044(void)

void FUN_148cdd044(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f560;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdd0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdd0ca FUN_148cdd0ca body=42 status=ok
// SIG undefined FUN_148cdd0ca(void)

void FUN_148cdd0ca(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdd0f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cdd0f4 FUN_148cdd0f4 body=173 status=ok
// SIG undefined FUN_148cdd0f4(void)

void FUN_148cdd0f4(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148cdd18b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148cdd18b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148cdd1a2 FUN_148cdd1a2 body=62 status=ok
// SIG undefined FUN_148cdd1a2(void)

void FUN_148cdd1a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cdd1e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148cdd1e0 FUN_148cdd1e0 body=93 status=ok
// SIG undefined FUN_148cdd1e0(void)

ulonglong FUN_148cdd1e0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148cdd258 FUN_148cdd258 body=29 status=ok
// SIG undefined FUN_148cdd258(void)

bool FUN_148cdd258(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cdd276 FUN_148cdd276 body=101 status=ok
// SIG undefined FUN_148cdd276(void)

void FUN_148cdd276(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f5f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdd2dc FUN_148cdd2dc body=134 status=ok
// SIG undefined FUN_148cdd2dc(void)

void FUN_148cdd2dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f5f0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdd353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdd362 FUN_148cdd362 body=39 status=ok
// SIG undefined FUN_148cdd362(void)

void FUN_148cdd362(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdd385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148cdd38a FUN_148cdd38a body=31 status=ok
// SIG undefined FUN_148cdd38a(void)

undefined8 FUN_148cdd38a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdd3c4 FUN_148cdd3c4 body=101 status=ok
// SIG undefined FUN_148cdd3c4(void)

void FUN_148cdd3c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f7b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdd42a FUN_148cdd42a body=101 status=ok
// SIG undefined FUN_148cdd42a(void)

void FUN_148cdd42a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f7b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cdd490 FUN_148cdd490 body=134 status=ok
// SIG undefined FUN_148cdd490(void)

void FUN_148cdd490(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e7b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f7b0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdd507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdd516 FUN_148cdd516 body=62 status=ok
// SIG undefined FUN_148cdd516(void)

void FUN_148cdd516(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cdd551. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148cdd554 FUN_148cdd554 body=123 status=ok
// SIG undefined FUN_148cdd554(void)

void FUN_148cdd554(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0x38,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2 >> 3;
      iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
      iVar4 = 0x7fffffff;
      if ((int)param_2 <= iVar3) {
        iVar4 = iVar3;
      }
    }
  }
  if (iVar4 != *(int *)(param_1 + 0x1cc)) {
    *(int *)(param_1 + 0x1cc) = iVar4;
    FUN_148cdd5d0(param_1,*(undefined4 *)(param_1 + 0x1c8),iVar4,0x38);
    return;
  }
  return;
}



// FUNCTION 148cdd5d0 FUN_148cdd5d0 body=146 status=ok
// SIG undefined FUN_148cdd5d0(void)

void FUN_148cdd5d0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1c0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1c0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x1c0),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1c0,param_2,param_3,param_4);
  return;
}



// FUNCTION 148cdd662 FUN_148cdd662 body=138 status=ok
// SIG undefined FUN_148cdd662(void)

void FUN_148cdd662(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1c8);
  if (param_2 <= (int)uVar1) {
    iVar6 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x1cc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x1cc) = iVar6;
    FUN_148cdd5d0(param_1,param_2,iVar6,0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148cdd6fe FUN_148cdd6fe body=93 status=ok
// SIG undefined FUN_148cdd6fe(void)

void FUN_148cdd6fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cdd75c FUN_148cdd75c body=93 status=ok
// SIG undefined FUN_148cdd75c(void)

void FUN_148cdd75c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cdd7ba FUN_148cdd7ba body=126 status=ok
// SIG undefined FUN_148cdd7ba(void)

void FUN_148cdd7ba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f970;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdd829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdd846 FUN_148cdd846 body=31 status=ok
// SIG undefined FUN_148cdd846(void)

undefined8 FUN_148cdd846(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdd882 FUN_148cdd882 body=93 status=ok
// SIG undefined FUN_148cdd882(void)

void FUN_148cdd882(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f9e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cdd8e0 FUN_148cdd8e0 body=93 status=ok
// SIG undefined FUN_148cdd8e0(void)

void FUN_148cdd8e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f9e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cdd93e FUN_148cdd93e body=126 status=ok
// SIG undefined FUN_148cdd93e(void)

void FUN_148cdd93e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f9e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdd9ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdd9c8 FUN_148cdd9c8 body=31 status=ok
// SIG undefined FUN_148cdd9c8(void)

undefined8 FUN_148cdd9c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cdda04 FUN_148cdda04 body=93 status=ok
// SIG undefined FUN_148cdda04(void)

void FUN_148cdda04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab9f910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95fa50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cdda62 FUN_148cdda62 body=93 status=ok
// SIG undefined FUN_148cdda62(void)

void FUN_148cdda62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab9f910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95fa50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cddac0 FUN_148cddac0 body=126 status=ok
// SIG undefined FUN_148cddac0(void)

void FUN_148cddac0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab9f910;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95fa50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cddb2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cddb4c FUN_148cddb4c body=31 status=ok
// SIG undefined FUN_148cddb4c(void)

undefined8 FUN_148cddb4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cddb84 FUN_148cddb84 body=93 status=ok
// SIG undefined FUN_148cddb84(void)

void FUN_148cddb84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95fe50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95fac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cddbe2 FUN_148cddbe2 body=93 status=ok
// SIG undefined FUN_148cddbe2(void)

void FUN_148cddbe2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95fe50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95fac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cddc40 FUN_148cddc40 body=126 status=ok
// SIG undefined FUN_148cddc40(void)

void FUN_148cddc40(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b95fe50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95fac0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cddcaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cddcde FUN_148cddcde body=93 status=ok
// SIG undefined FUN_148cddcde(void)

void FUN_148cddcde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95fb30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


