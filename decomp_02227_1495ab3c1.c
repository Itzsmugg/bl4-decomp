// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1495ab3c1 FUN_1495ab3c1 body=244 status=ok
// SIG undefined FUN_1495ab3c1(void)

void FUN_1495ab3c1(longlong *param_1,int param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar2 = FUN_14955a44a(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
    iVar4 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = iVar4;
  }
  else {
    bVar1 = *(char *)((longlong)param_1 + 0x1f) - 1;
    *(byte *)((longlong)param_1 + 0x1f) = bVar1;
    iVar4 = *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc);
  }
  if (param_2 < 2) {
    FUN_14955a364(param_1,"corrupt schema");
  }
  FUN_149584f48(lVar2,0x88,param_2,iVar4,param_3);
  plVar3 = (longlong *)param_1[0x14];
  if ((longlong *)param_1[0x14] == (longlong *)0x0) {
    plVar3 = param_1;
  }
  *(undefined1 *)((longlong)plVar3 + 0x21) = 1;
  FUN_1495a3e15(param_1,"UPDATE %Q.%s SET rootpage=%d WHERE #%d AND rootpage=#%d",
                *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + (longlong)param_3 * 0x20),
                "sqlite_master",param_2,iVar4,iVar4);
  if (iVar4 != 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x1f);
    if ((ulonglong)bVar1 < 8) {
      *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
      *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc) = iVar4;
    }
  }
  return;
}



// FUNCTION 1495ab4b5 FUN_1495ab4b5 body=627 status=ok
// SIG undefined FUN_1495ab4b5(void)

void FUN_1495ab4b5(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  ushort uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  longlong local_98;
  undefined8 local_90;
  uint *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(char *)((longlong)param_1 + 0x113) == '\0') &&
     (*(char *)((longlong)param_1 + 0x1c) == '\0')) {
    local_98 = *param_1;
    plVar1 = (longlong *)param_1[2];
    do {
      lVar11 = param_2;
      param_2 = *(longlong *)(lVar11 + 0x50);
    } while (*(longlong *)(lVar11 + 0x50) != 0);
    puVar2 = *(uint **)(lVar11 + 0x20);
    uVar7 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
    uVar3 = *(ulonglong *)(local_98 + 0x30);
    FUN_1495852e4(plVar1,*puVar2);
    if (0 < (int)*puVar2) {
      puVar12 = puVar2 + 2;
      lVar13 = 0;
      lVar11 = 0;
      local_90 = uVar7;
      local_88 = puVar12;
      do {
        pcVar4 = *(char **)puVar12;
        pcVar6 = *(char **)(puVar12 + 2);
        if ((pcVar6 == (char *)0x0) || ((puVar12[5] & 3) != 0)) {
          if (((uVar3 & 0x44) == 0) || (*pcVar4 != -0x5c)) {
            if (pcVar6 == (char *)0x0) {
              pcVar6 = (char *)FUN_14955a402(local_98,"column%d",(int)lVar11 + 1);
            }
            else {
              pcVar6 = (char *)FUN_149559683(local_98);
            }
          }
          else {
            uVar8 = *(ushort *)(pcVar4 + 0x30);
            puVar5 = *(undefined8 **)(pcVar4 + 0x40);
            if ((short)uVar8 < 0) {
              uVar8 = *(ushort *)((longlong)puVar5 + 0x44);
              pcVar6 = "rowid";
              if (-1 < (short)uVar8) goto LAB_1495ab59e;
            }
            else {
LAB_1495ab59e:
              pcVar6 = *(char **)(puVar5[1] + (ulonglong)uVar8 * 0x20);
            }
            if ((uVar3 & 4) == 0) {
              if (*(char *)(*plVar1 + 0x61) == '\0') {
                lVar9 = plVar1[0x13] + lVar13;
                local_a8 = (undefined *)0xffffffffffffffff;
                goto LAB_1495ab682;
              }
              goto LAB_1495ab5c3;
            }
            pcVar6 = (char *)FUN_14955a402(local_98,"%s.%s",*puVar5);
          }
          if (*(char *)(*plVar1 + 0x61) == '\0') {
            lVar9 = plVar1[0x13] + lVar13;
            local_a8 = &DAT_1495539b4;
            goto LAB_1495ab682;
          }
        }
        else if (*(char *)(*plVar1 + 0x61) == '\0') {
          lVar9 = plVar1[0x13] + lVar13;
          local_a8 = (undefined *)0xffffffffffffffff;
LAB_1495ab682:
          FUN_14955916b(lVar9,pcVar6,0xffffffff,1);
        }
LAB_1495ab5c3:
        lVar11 = lVar11 + 1;
        uVar10 = (ulonglong)(int)*puVar2;
        lVar13 = lVar13 + 0x38;
        puVar12 = puVar12 + 8;
      } while (lVar11 < (longlong)uVar10);
      plVar1 = (longlong *)param_1[2];
      local_78 = local_90;
      local_68 = 0;
      local_80 = param_1;
      if (0 < (int)*puVar2) {
        lVar11 = 0;
        lVar13 = 0;
        puVar12 = local_88;
        do {
          uVar7 = FUN_1495a908a(&local_80,*(undefined8 *)puVar12);
          if (*(char *)(*plVar1 + 0x61) == '\0') {
            local_a8 = (undefined *)0xffffffffffffffff;
            FUN_14955916b((ulonglong)*(ushort *)(plVar1 + 0x18) * 0x38 + plVar1[0x13] + lVar11,uVar7
                          ,0xffffffff,1);
            uVar10 = (ulonglong)*puVar2;
          }
          lVar13 = lVar13 + 1;
          lVar11 = lVar11 + 0x38;
          puVar12 = puVar12 + 8;
        } while (lVar13 < (int)uVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ab729 FUN_1495ab729 body=1480 status=ok
// SIG undefined FUN_1495ab729(void)

int FUN_1495ab729(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 **local_d0;
  int *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  longlong *local_a0;
  int *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar11 = *(longlong *)(param_2 + 0x70);
  iVar4 = 0;
  if (((lVar11 == 0) || (*(longlong *)(param_2 + 0x50) != 0)) ||
     ((*(byte *)(param_2 + 6) & 0x10) != 0)) goto LAB_1495ab772;
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar6 = FUN_14955a44a(param_1);
    lVar11 = *(longlong *)(param_2 + 0x70);
  }
  lVar1 = *param_1;
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  local_80 = *(undefined8 *)(param_2 + 0x38);
  local_88 = *(undefined8 *)(param_2 + 0x40);
  local_78 = (undefined4 *)0x0;
  if (lVar1 == 0) {
    puVar7 = (undefined8 *)FUN_145e3bd67(0x80);
    if (puVar7 != (undefined8 *)0x0) {
LAB_1495ab84b:
      local_a0 = (longlong *)(param_2 + 0x28);
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *local_a0 = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xffeffff7 | 0x100000;
      local_a8 = uVar8;
      uVar8 = FUN_1495b3838(param_1,0,*(undefined8 *)(lVar11 + 0x10),1);
      local_98 = (int *)FUN_1495b3838(param_1,uVar8,*(undefined8 *)(lVar11 + 0x18),1);
      if ((local_98 != (int *)0x0) && (*(int **)(param_2 + 0x48) != (int *)0x0)) {
        iVar4 = **(int **)(param_2 + 0x48);
        iVar13 = *local_98;
        if (iVar4 <= iVar13) {
          *local_98 = iVar4;
          iVar4 = FUN_1495a03ca(local_98,*(undefined8 *)(param_2 + 0x48),0xffffffff);
          if (iVar4 == 0) {
            if (*(longlong *)(param_2 + 0x48) != 0) {
              FUN_149582d29(lVar1);
            }
            *(undefined8 *)(param_2 + 0x48) = 0;
          }
          *local_98 = iVar13;
        }
      }
      iVar4 = *(int *)((longlong)param_1 + 0x34);
      *(int *)((longlong)param_1 + 0x34) = iVar4 + 1;
      *(int *)(lVar11 + 0x58) = iVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 3;
      local_d8 = puVar7;
      local_d0 = &local_78;
      FUN_1495b3943(param_1,lVar11,uVar9,*(undefined8 *)(param_2 + 0x20));
      local_d8 = puVar7;
      local_d0 = &local_78;
      local_90 = uVar9;
      FUN_1495b3943(param_1,lVar11,uVar9,*(undefined8 *)(param_2 + 0x48));
      uVar5 = 0;
      if (local_78 != (undefined4 *)0x0) {
        uVar5 = *local_78;
      }
      *(undefined4 *)(lVar11 + 0x78) = uVar5;
      uVar9 = FUN_1495b3838(param_1,local_78,*(undefined8 *)(lVar11 + 0x10),0);
      local_78 = (undefined4 *)FUN_1495b3838(param_1,uVar9,*(undefined8 *)(lVar11 + 0x18),0);
      puVar10 = local_78;
      for (lVar2 = lVar11; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x40)) {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0x20);
        if ((*(byte *)(*(longlong *)(lVar2 + 0x50) + 6) & 0x10) == 0) {
          uVar5 = 0;
          if (puVar10 != (undefined4 *)0x0) {
            uVar5 = *puVar10;
          }
          *(undefined4 *)(lVar2 + 0x7c) = uVar5;
          local_78 = (undefined4 *)FUN_1495b3838(param_1,puVar10,uVar9,0);
        }
        else {
          local_d0 = &local_78;
          local_d8 = puVar7;
          FUN_1495b3943(param_1,lVar11,local_90);
          uVar5 = 0;
          if (local_78 != (undefined4 *)0x0) {
            uVar5 = *local_78;
          }
          *(undefined4 *)(lVar2 + 0x7c) = uVar5;
          *(undefined1 *)(lVar2 + 0x8c) = 1;
        }
        puVar10 = local_78;
        if (*(longlong *)(lVar2 + 0x48) != 0) {
          uVar9 = FUN_1495a1c89(lVar1,*(longlong *)(lVar2 + 0x48),0,0);
          local_78 = (undefined4 *)FUN_14958f62a(param_1,puVar10,uVar9);
        }
        puVar10 = local_78;
        iVar4 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar4;
        *(int *)(lVar2 + 0x5c) = iVar4;
        iVar4 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar4;
        *(int *)(lVar2 + 0x60) = iVar4;
        local_d8 = (undefined8 *)((ulonglong)local_d8 & 0xffffffff00000000);
        FUN_149584f48(lVar6,0x48,0,*(undefined4 *)(lVar2 + 0x5c));
      }
      if (puVar10 == (undefined4 *)0x0) {
        local_70 = &DAT_149dfd150;
        local_68 = 1;
        uVar9 = FUN_14958f7cb(lVar1,0x98,&local_70,0);
        puVar10 = (undefined4 *)FUN_14958f62a(param_1,0,uVar9);
        local_78 = puVar10;
      }
      local_c8 = local_98;
      local_d0 = (undefined4 **)local_88;
      local_d8 = (undefined8 *)local_80;
      local_b8 = 0;
      local_c0 = 0;
      lVar11 = FUN_14958f426(param_1,puVar10,local_90,local_a8);
      lVar6 = FUN_14958f97b(param_1,0,0,0);
      plVar3 = local_a0;
      *local_a0 = lVar6;
      if (lVar6 == 0) {
        iVar4 = 0;
        if (lVar11 != 0) {
          FUN_149582a1c(lVar1,lVar11,1);
          iVar4 = 0;
        }
      }
      else {
        *(longlong *)(lVar6 + 0x30) = lVar11;
        FUN_1495a81ac(param_1,*local_a0);
        *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) | 0x40;
        puVar12 = (undefined8 *)FUN_1495a391c(param_1,lVar11,0x40);
        iVar4 = 7;
        if (puVar12 != (undefined8 *)0x0) {
          puVar14 = puVar12;
          puVar15 = puVar7;
          for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar15 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          }
          *(byte *)(puVar7 + 8) = *(byte *)(puVar7 + 8) | 2;
          *(undefined8 **)(*plVar3 + 0x28) = puVar7;
          iVar4 = 0;
          puVar7 = puVar12;
        }
      }
      iVar13 = 7;
      if (*(char *)(lVar1 + 0x61) == '\0') {
        iVar13 = iVar4;
      }
      FUN_14955d65a(lVar1,puVar7);
      iVar4 = 0;
      if (iVar13 != 0) {
        lVar11 = *param_1;
        if ((int)param_1[6] == 0) {
          if (lVar11 == 0) {
            lVar11 = 0;
          }
          else {
            lVar6 = *(longlong *)(lVar11 + 0x138);
            if (lVar6 != 0) {
              *(undefined4 *)(lVar6 + 0x18) = 7;
              *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
              lVar11 = *param_1;
            }
          }
        }
        FUN_149582a1c(lVar11,param_2,0);
        *(undefined8 *)(param_2 + 0x68) = 0;
        *(undefined8 *)(param_2 + 0x70) = 0;
        *(undefined8 *)(param_2 + 0x58) = 0;
        *(undefined8 *)(param_2 + 0x60) = 0;
        *(undefined8 *)(param_2 + 0x48) = 0;
        *(undefined8 *)(param_2 + 0x50) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(undefined8 *)(param_2 + 0x40) = 0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined8 *)(param_2 + 0x20) = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x78) = 0;
        puVar7 = (undefined8 *)FUN_14955d750(*param_1,0x48);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[8] = 0;
          *(undefined1 *)puVar7 = 0x77;
          *(undefined2 *)((longlong)puVar7 + 0x32) = 0xffff;
          *(undefined4 *)(puVar7 + 5) = 1;
        }
        uVar9 = FUN_14958f62a(param_1,0,puVar7);
        *(undefined8 *)(param_2 + 0x20) = uVar9;
        if (*param_1 == 0) {
          puVar7 = (undefined8 *)FUN_145e3bd67(0x78);
        }
        else {
          puVar7 = (undefined8 *)FUN_14955d750(*param_1,0x78);
        }
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[0xe] = 0;
        }
        *local_a0 = (longlong)puVar7;
        iVar4 = iVar13;
      }
      goto LAB_1495ab772;
    }
  }
  else {
    puVar7 = (undefined8 *)FUN_14955d750(lVar1,0x80);
    if (puVar7 != (undefined8 *)0x0) goto LAB_1495ab84b;
    lVar11 = *(longlong *)(lVar1 + 0x138);
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x18) = 7;
      *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
    }
  }
  iVar4 = 7;
LAB_1495ab772:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495abcf2 FUN_1495abcf2 body=135 status=ok
// SIG undefined FUN_1495abcf2(void)

void FUN_1495abcf2(char *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  for (; param_1 != (char *)0x0; param_1 = *(char **)(param_1 + 0x18)) {
    if (((*(uint *)(param_1 + 4) & 1) != 0) &&
       ((param_2 < 0 || (*(short *)(param_1 + 0x34) == param_2)))) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    }
    if (((*param_1 == -0x57) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) &&
       (0 < *piVar1)) {
      lVar2 = 8;
      lVar3 = 0;
      do {
        FUN_1495abcf2(*(undefined8 *)((longlong)piVar1 + lVar2),param_2);
        lVar3 = lVar3 + 1;
        piVar1 = *(int **)(param_1 + 0x20);
        lVar2 = lVar2 + 0x20;
      } while (lVar3 < *piVar1);
    }
    FUN_1495abcf2(*(undefined8 *)(param_1 + 0x10),param_2);
  }
  return;
}



// FUNCTION 1495abd79 FUN_1495abd79 body=2266 status=ok
// SIG undefined FUN_1495abd79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1495abd79(longlong *param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  undefined8 uVar19;
  uint uVar20;
  char *pcVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined1 auVar28 [16];
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar39 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar41 [16];
  longlong lVar42;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar43 [16];
  longlong lVar44;
  undefined1 unaff_XMM14 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_178 [32];
  undefined8 local_158;
  byte local_149;
  uint *local_148;
  int *local_140;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_130;
  longlong local_128;
  undefined8 *local_120;
  longlong local_118;
  int local_10c;
  longlong local_108;
  longlong *local_100;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar5 = *param_1;
  uVar19 = 0;
  uVar25 = 0;
  if (((*(byte *)(lVar5 + 0x5c) & 1) != 0) || (*(longlong *)(param_2 + 0x70) != 0))
  goto LAB_1495abe0a;
  piVar6 = *(int **)(param_2 + 0x28);
  lVar16 = (longlong)param_3;
  pcVar7 = *(char **)(piVar6 + lVar16 * 0x1c + 0xc);
  if (*(longlong *)(pcVar7 + 0x70) != 0) goto LAB_1495abe0a;
  puVar17 = (uint *)param_1[0x2b];
  iVar2 = piVar6[lVar16 * 0x1c + 0x13];
  lVar23 = *(longlong *)(pcVar7 + 0x60);
  uVar19 = uVar25;
  if (lVar23 == 0) {
    uVar20 = *(uint *)(param_2 + 4);
  }
  else if (((*(longlong *)(param_2 + 0x60) != 0) || (*(longlong *)(lVar23 + 0x18) != 0)) ||
          (uVar20 = *(uint *)(param_2 + 4), (uVar20 >> 8 & 1) != 0)) goto LAB_1495abe0a;
  iVar3 = **(int **)(pcVar7 + 0x28);
  if (((((iVar3 == 0) || (uVar4 = *(uint *)(pcVar7 + 4), local_148 = puVar17, (uVar4 & 1) != 0)) ||
       ((lVar23 != 0 && ((param_4 != 0 || (1 < *piVar6)))))) ||
      ((piVar8 = *(int **)(param_2 + 0x48), local_10c = iVar2, piVar8 != (int *)0x0 &&
       (*(longlong *)(pcVar7 + 0x48) != 0)))) ||
     ((param_4 != 0 && (*(longlong *)(pcVar7 + 0x48) != 0)))) goto LAB_1495abe0a;
  if (lVar23 == 0) {
    if ((uVar4 >> 0xd & 1) != 0) goto LAB_1495abe0a;
  }
  else if ((*(longlong *)(param_2 + 0x30) != 0) || ((uVar4 & 0x2000) != 0 || (uVar20 & 1) != 0))
  goto LAB_1495abe0a;
  bVar1 = *(byte *)(piVar6 + lVar16 * 0x1c + 0x11);
  local_134 = 0;
  if (((bVar1 & 0x20) != 0) &&
     (((uVar19 = 0, param_4 != 0 || (1 < iVar3)) ||
      (local_134 = 1,
      (uVar20 & 1) != 0 || *(int *)(*(longlong *)(*(int **)(pcVar7 + 0x28) + 10) + 0x54) != 0))))
  goto LAB_1495abe0a;
  if (*(longlong *)(pcVar7 + 0x50) != 0) {
    uVar25 = 0;
    uVar19 = 0;
    if ((((uVar20 & 1) == 0 && param_4 == 0) && *(longlong *)(pcVar7 + 0x48) == 0) &&
       (pcVar21 = pcVar7, uVar19 = uVar25, *piVar6 == 1)) {
      do {
        if (pcVar21 == (char *)0x0) {
          if ((piVar8 == (int *)0x0) || ((longlong)*piVar8 < 1)) goto LAB_1495ac080;
          lVar23 = 0;
          goto LAB_1495ac06b;
        }
      } while (((pcVar21[4] & 9U) == 0) &&
              ((((*(char **)(pcVar21 + 0x50) == (char *)0x0 || (*pcVar21 == -0x7b)) &&
                (0 < **(int **)(pcVar21 + 0x28))) &&
               (plVar22 = (longlong *)(pcVar21 + 0x70), pcVar21 = *(char **)(pcVar21 + 0x50),
               *plVar22 == 0))));
    }
    goto LAB_1495abe0a;
  }
  goto LAB_1495ac080;
  while (lVar23 = lVar23 + 0x20, (longlong)*piVar8 * 0x20 != lVar23) {
LAB_1495ac06b:
    uVar19 = 0;
    if (*(short *)((longlong)piVar8 + lVar23 + 0x20) == 0) goto LAB_1495abe0a;
  }
LAB_1495ac080:
  param_1[0x2b] = *(longlong *)(piVar6 + lVar16 * 0x1c + 6);
  local_158 = 0;
  local_149 = bVar1;
  local_140 = piVar6 + lVar16 * 0x1c + 2;
  FUN_1495a2d6b(param_1,0x15,0,0);
  param_1[0x2b] = (longlong)local_148;
  lVar23 = *(longlong *)(pcVar7 + 0x50);
  if (lVar23 != 0) {
    local_120 = (undefined8 *)(param_2 + 0x48);
    local_148 = *(uint **)(param_2 + 0x50);
    do {
      local_118 = *(longlong *)(param_2 + 0x48);
      uVar19 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *local_120 = 0;
      local_120[1] = 0;
      puVar17 = (uint *)FUN_1495a1fd1(lVar5,param_2,0);
      *(undefined8 *)(param_2 + 0x60) = uVar19;
      *(longlong *)(param_2 + 0x48) = local_118;
      *(int **)(param_2 + 0x28) = piVar6;
      *param_2 = 0x85;
      if (puVar17 != (uint *)0x0) {
        *(uint **)(puVar17 + 0x14) = local_148;
        if (local_148 != (uint *)0x0) {
          *(uint **)(local_148 + 0x16) = puVar17;
        }
        *(undefined1 **)(puVar17 + 0x16) = param_2;
        local_148 = puVar17;
      }
      *(uint **)(param_2 + 0x50) = local_148;
      if (*(char *)(lVar5 + 0x61) != '\0') {
        uVar19 = 1;
        goto LAB_1495abe0a;
      }
      lVar23 = *(longlong *)(lVar23 + 0x50);
    } while (lVar23 != 0);
  }
  local_128 = *(longlong *)(local_140 + 10);
  if (*(longlong *)(local_140 + 2) != 0) {
    FUN_14955d65a(lVar5);
  }
  if (*(longlong *)(local_140 + 4) != 0) {
    FUN_14955d65a(lVar5);
  }
  piVar6 = local_140;
  if (*(longlong *)(local_140 + 6) != 0) {
    FUN_14955d65a(lVar5);
  }
  local_140[10] = 0;
  local_140[0xb] = 0;
  piVar6[6] = 0;
  piVar6[7] = 0;
  piVar6[2] = 0;
  piVar6[3] = 0;
  piVar6[4] = 0;
  piVar6[5] = 0;
  lVar23 = *(longlong *)(local_140 + 8);
  if (lVar23 != 0) {
    if (*(int *)(lVar23 + 0x3c) == 1) {
      plVar22 = (longlong *)param_1[0x14];
      if ((longlong *)param_1[0x14] == (longlong *)0x0) {
        plVar22 = param_1;
      }
      *(longlong *)(lVar23 + 0x78) = plVar22[0x2f];
      plVar22[0x2f] = lVar23;
    }
    else {
      *(int *)(lVar23 + 0x3c) = *(int *)(lVar23 + 0x3c) + -1;
    }
    local_140[8] = 0;
    local_140[9] = 0;
  }
  auVar15 = _DAT_149931e80;
  uVar24 = 0xffffffff;
  auVar38 = pmovsxbq(unaff_XMM7,0x706);
  auVar39 = pmovsxbq(unaff_XMM8,0x504);
  auVar40 = pmovsxbq(unaff_XMM9,0x302);
  auVar41 = pmovsxbq(unaff_XMM10,0x100);
  auVar43 = pmovsxbq(unaff_XMM13,0x808);
  lVar23 = local_128;
  do {
    local_148 = *(uint **)(lVar23 + 0x28);
    uVar20 = *local_148;
    lVar18 = *(longlong *)(param_2 + 0x28);
    local_130 = lVar23;
    if (lVar18 == 0) {
      lVar18 = FUN_14958f97b(param_1,0,0,0);
      if (lVar18 == 0) break;
      *(longlong *)(param_2 + 0x28) = lVar18;
      local_138 = 0;
    }
    else {
      local_138 = (undefined4)CONCAT71((int7)((ulonglong)local_140 >> 8),(char)local_140[0xf]);
    }
    if ((int)uVar20 < 2) {
      if (uVar20 == 1) goto LAB_1495ac2c8;
    }
    else {
      lVar18 = FUN_1495b3c24(param_1,lVar18,uVar20 - 1);
      if (lVar18 == 0) break;
      *(longlong *)(param_2 + 0x28) = lVar18;
LAB_1495ac2c8:
      local_118 = lVar18 + lVar16 * 0x70;
      lVar23 = 8;
      local_120 = (undefined8 *)(ulonglong)uVar20;
      local_108 = lVar18;
      do {
        puVar27 = (undefined8 *)(local_118 + lVar23);
        FUN_149582cb1(lVar5,*(undefined8 *)(local_118 + 0x50 + lVar23));
        puVar26 = (undefined8 *)((longlong)local_148 + lVar23);
        for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
          *puVar27 = *puVar26;
          puVar26 = puVar26 + 1;
          puVar27 = puVar27 + 1;
        }
        uVar24 = *(undefined4 *)((longlong)local_148 + lVar23 + 0x44);
        *(undefined8 *)((longlong)local_148 + lVar23) = 0;
        ((undefined8 *)((longlong)local_148 + lVar23))[1] = 0;
        puVar27 = (undefined8 *)((longlong)local_148 + lVar23 + 0x10);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)((longlong)local_148 + lVar23 + 0x20);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)((longlong)local_148 + lVar23 + 0x30);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)((longlong)local_148 + lVar23 + 0x50);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)((longlong)local_148 + lVar23 + 0x60);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)((longlong)local_148 + lVar23 + 0x40);
        *puVar27 = 0;
        puVar27[1] = 0;
        lVar23 = lVar23 + 0x70;
        local_120 = (undefined8 *)((longlong)local_120 - 1);
      } while (local_120 != (undefined8 *)0x0);
      local_120 = (undefined8 *)0x0;
      lVar18 = local_108;
    }
    *(char *)(lVar18 + 0x44 + lVar16 * 0x70) = (char)local_138;
    piVar6 = *(int **)(local_130 + 0x48);
    if (piVar6 != (int *)0x0) {
      iVar2 = *piVar6;
      if (0 < (longlong)iVar2) {
        lVar23 = (longlong)iVar2 + -1;
        auVar28._8_4_ = (int)lVar23;
        auVar28._0_8_ = lVar23;
        auVar28._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
        lVar18 = SUB168(auVar28 ^ auVar15,0);
        lVar23 = 0;
        auVar30 = auVar41;
        auVar31 = auVar40;
        auVar32 = auVar39;
        auVar33 = auVar38;
        do {
          auVar34._0_8_ = -(ulonglong)(lVar18 < SUB168(auVar30 ^ auVar15,0));
          lVar29 = SUB168(auVar28 ^ auVar15,8);
          auVar34._8_8_ = -(ulonglong)(lVar29 < SUB168(auVar30 ^ auVar15,8));
          auVar45 = pshuflw(unaff_XMM14,auVar34,0xe8);
          auVar46._8_4_ = 0xffffffff;
          auVar46._0_8_ = 0xffffffffffffffff;
          auVar46._12_4_ = 0xffffffff;
          auVar46 = packssdw(auVar45 ^ auVar46,auVar45 ^ auVar46);
          if ((auVar46._0_4_ & 1) != 0) {
            *(undefined2 *)((longlong)piVar6 + lVar23 + 0x20) = 0;
          }
          auVar34 = packssdw(auVar34,auVar34);
          auVar45._8_4_ = 0xffffffff;
          auVar45._0_8_ = 0xffffffffffffffff;
          auVar45._12_4_ = 0xffffffff;
          auVar34 = packssdw(auVar34 ^ auVar45,auVar34 ^ auVar45);
          if ((auVar34[2] & 1) != 0) {
            *(undefined2 *)((longlong)piVar6 + lVar23 + 0x40) = 0;
          }
          auVar35._0_8_ = -(ulonglong)(lVar18 < SUB168(auVar31 ^ auVar15,0));
          auVar35._8_8_ = -(ulonglong)(lVar29 < SUB168(auVar31 ^ auVar15,8));
          auVar46 = packssdw(auVar46,auVar35);
          auVar9._8_4_ = 0xffffffff;
          auVar9._0_8_ = 0xffffffffffffffff;
          auVar9._12_4_ = 0xffffffff;
          auVar46 = packssdw(auVar46 ^ auVar9,auVar46 ^ auVar9);
          if ((auVar46[4] & 1) != 0) {
            *(undefined2 *)((longlong)piVar6 + lVar23 + 0x60) = 0;
          }
          auVar34 = pshufhw(auVar35,auVar35,0x84);
          auVar10._8_4_ = 0xffffffff;
          auVar10._0_8_ = 0xffffffffffffffff;
          auVar10._12_4_ = 0xffffffff;
          auVar34 = packssdw(auVar34 ^ auVar10,auVar34 ^ auVar10);
          if ((auVar34[6] & 1) != 0) {
            *(undefined2 *)((longlong)piVar6 + lVar23 + 0x80) = 0;
          }
          auVar36._0_8_ = -(ulonglong)(lVar18 < SUB168(auVar32 ^ auVar15,0));
          auVar36._8_8_ = -(ulonglong)(lVar29 < SUB168(auVar32 ^ auVar15,8));
          auVar46 = pshuflw(auVar46,auVar36,0xe8);
          auVar11._8_4_ = 0xffffffff;
          auVar11._0_8_ = 0xffffffffffffffff;
          auVar11._12_4_ = 0xffffffff;
          auVar46 = packssdw(auVar46 ^ auVar11,auVar46 ^ auVar11);
          if ((auVar46[8] & 1) != 0) {
            *(undefined2 *)((longlong)piVar6 + lVar23 + 0xa0) = 0;
          }
          auVar34 = packssdw(auVar36,auVar36);
          auVar12._8_4_ = 0xffffffff;
          auVar12._0_8_ = 0xffffffffffffffff;
          auVar12._12_4_ = 0xffffffff;
          auVar34 = packssdw(auVar34 ^ auVar12,auVar34 ^ auVar12);
          if ((auVar34[10] & 1) != 0) {
            *(undefined2 *)((longlong)piVar6 + lVar23 + 0xc0) = 0;
          }
          auVar37._0_8_ = -(ulonglong)(lVar18 < SUB168(auVar33 ^ auVar15,0));
          auVar37._8_8_ = -(ulonglong)(lVar29 < SUB168(auVar33 ^ auVar15,8));
          auVar46 = packssdw(auVar46,auVar37);
          auVar13._8_4_ = 0xffffffff;
          auVar13._0_8_ = 0xffffffffffffffff;
          auVar13._12_4_ = 0xffffffff;
          unaff_XMM14 = packssdw(auVar46 ^ auVar13,auVar46 ^ auVar13);
          if ((unaff_XMM14[0xc] & 1) != 0) {
            *(undefined2 *)((longlong)piVar6 + lVar23 + 0xe0) = 0;
          }
          auVar46 = pshufhw(auVar37,auVar37,0x84);
          auVar14._8_4_ = 0xffffffff;
          auVar14._0_8_ = 0xffffffffffffffff;
          auVar14._12_4_ = 0xffffffff;
          auVar46 = packssdw(auVar46 ^ auVar14,auVar46 ^ auVar14);
          if ((auVar46[0xe] & 1) != 0) {
            *(undefined2 *)((longlong)piVar6 + lVar23 + 0x100) = 0;
          }
          lVar29 = auVar30._8_8_;
          lVar42 = auVar43._0_8_;
          auVar30._0_8_ = auVar30._0_8_ + lVar42;
          lVar44 = auVar43._8_8_;
          auVar30._8_8_ = lVar29 + lVar44;
          lVar29 = auVar31._8_8_;
          auVar31._0_8_ = auVar31._0_8_ + lVar42;
          auVar31._8_8_ = lVar29 + lVar44;
          lVar29 = auVar32._8_8_;
          auVar32._0_8_ = auVar32._0_8_ + lVar42;
          auVar32._8_8_ = lVar29 + lVar44;
          lVar29 = auVar33._8_8_;
          auVar33._0_8_ = auVar33._0_8_ + lVar42;
          auVar33._8_8_ = lVar29 + lVar44;
          lVar23 = lVar23 + 0x100;
        } while ((ulonglong)(iVar2 + 7U >> 3) << 8 != lVar23);
      }
      *(int **)(param_2 + 0x48) = piVar6;
      *(undefined8 *)(local_130 + 0x48) = 0;
    }
    uVar19 = *(undefined8 *)(local_130 + 0x30);
    *(undefined8 *)(local_130 + 0x30) = 0;
    if ((local_149 & 0x20) != 0) {
      FUN_1495a9261(uVar19,uVar24);
    }
    uVar19 = FUN_149594bf0(param_1,uVar19);
    *(undefined8 *)(param_2 + 0x30) = uVar19;
    if (*(char *)(lVar5 + 0x61) == '\0') {
      local_f8 = local_10c;
      local_f0 = local_134;
      local_e8 = *(undefined8 *)(local_130 + 0x20);
      local_100 = param_1;
      local_f4 = uVar24;
      FUN_1495b3e0f(&local_100,param_2);
    }
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | *(uint *)(local_130 + 4) & 0x100;
    if (*(longlong *)(local_130 + 0x60) != 0) {
      *(longlong *)(param_2 + 0x60) = *(longlong *)(local_130 + 0x60);
      *(undefined8 *)(local_130 + 0x60) = 0;
    }
    param_2 = *(undefined1 **)(param_2 + 0x50);
    lVar23 = *(longlong *)(local_130 + 0x50);
  } while (param_2 != (undefined1 *)0x0);
  uVar19 = 1;
  if (local_128 != 0) {
    FUN_149582a1c(lVar5,local_128,1);
    uVar19 = 1;
  }
LAB_1495abe0a:
  if ((local_e0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19;
}



// FUNCTION 1495ac654 FUN_1495ac654 body=7241 status=ok
// SIG undefined FUN_1495ac654(void)

uint FUN_1495ac654(longlong *param_1,char *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  byte bVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  ushort *puVar15;
  int *piVar16;
  undefined8 uVar17;
  int *piVar18;
  longlong *plVar19;
  ushort *puVar20;
  undefined1 *puVar21;
  short sVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  char cVar27;
  bool bVar28;
  char *pcVar29;
  char *pcVar30;
  ulonglong uVar31;
  int iVar32;
  ulonglong uVar33;
  bool bVar34;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 *local_150;
  int *local_148;
  int local_140;
  longlong *local_130;
  int *local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined4 *local_110;
  int local_104;
  ulonglong local_100;
  int local_f8;
  int local_f4;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  int *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  int local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [4];
  int local_84;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 uStack_58;
  int *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar4 = *param_1;
  lVar14 = *(longlong *)(param_2 + 0x50);
  local_a8 = *param_3;
  iStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_98 = param_3[4];
  uStack_94 = param_3[5];
  uStack_90 = param_3[6];
  uStack_8c = param_3[7];
  if ((*(longlong *)(lVar14 + 0x48) == 0) && (*(longlong *)(lVar14 + 0x60) == 0)) {
    plVar19 = (longlong *)param_1[2];
    local_110 = param_3;
    if (plVar19 == (longlong *)0x0) {
      if ((param_1[0x14] == 0) && ((*(byte *)(lVar4 + 0x5c) & 8) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23) = 1;
      }
      plVar19 = (longlong *)FUN_14955a44a(param_1);
    }
    cVar27 = (char)local_a8;
    if ((char)local_a8 == '\f') {
      local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
      FUN_149584f48(plVar19,100,iStack_a4,**(undefined4 **)(param_2 + 0x20));
      local_a8 = CONCAT31(local_a8._1_3_,0xe);
      cVar27 = '\x0e';
    }
    local_130 = param_1;
    if ((*(uint *)(param_2 + 4) >> 10 & 1) != 0) {
      lVar23 = *(longlong *)(param_2 + 0x60);
      if (*(longlong *)(param_2 + 0x70) == 0) {
        iVar10 = 1;
        pcVar30 = param_2;
        do {
          pcVar29 = *(char **)(pcVar30 + 0x50);
          if (pcVar29 == (char *)0x0) {
            local_158 = &DAT_149ebc7ec;
            if (iVar10 == 1) {
              local_158 = &DAT_149e02088;
            }
            uVar24 = 0;
            FUN_1495a08a0(param_1,0,"SCAN %d CONSTANT ROW%s",iVar10);
            param_3 = local_110;
            goto LAB_1495ad6ff;
          }
          iVar10 = iVar10 + (uint)(lVar23 == 0);
          pcVar30 = pcVar29;
        } while (*(longlong *)(pcVar29 + 0x70) == 0);
      }
    }
    if ((*(uint *)(param_2 + 4) >> 0xd & 1) == 0) {
      if (*(longlong *)(param_2 + 0x48) != 0) {
        lVar4 = *param_1;
        plVar19 = (longlong *)param_1[2];
        local_e0 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
        iVar10 = *(uint *)((longlong)param_1 + 0x44) - 2;
        local_100 = CONCAT44(local_100._4_4_,iVar10);
        *(int *)((longlong)param_1 + 0x44) = iVar10;
        local_120 = CONCAT71(local_120._1_7_,*param_2);
        local_128 = *(int **)(param_2 + 0x50);
        puVar15 = *(ushort **)(param_2 + 0x48);
        iVar10 = *(int *)puVar15;
        if ((*param_2 != -0x7b) && (*(char *)(lVar4 + 0x61) == '\0')) {
          uVar24 = 1;
          do {
            if (**(int **)(param_2 + 0x20) < (int)uVar24) break;
            if (iVar10 < 1) {
              iVar11 = 0;
LAB_1495ac79d:
              if (iVar11 == iVar10) goto LAB_1495ac7af;
            }
            else {
              iVar11 = 0;
              puVar20 = puVar15;
              do {
                puVar20 = puVar20 + 0x10;
                if (uVar24 == *puVar20) goto LAB_1495ac79d;
                iVar11 = iVar11 + 1;
              } while (iVar10 != iVar11);
LAB_1495ac7af:
              local_68 = 0;
              local_60 = local_60 & 0xffffffff00000000;
              lVar14 = FUN_14958f7cb(lVar4,0x98,&local_68,0);
              if (lVar14 == 0) {
                uVar24 = 7;
                goto LAB_1495ac81b;
              }
              *(byte *)(lVar14 + 5) = *(byte *)(lVar14 + 5) | 4;
              *(uint *)(lVar14 + 8) = uVar24;
              puVar15 = (ushort *)FUN_14958f62a(param_1,puVar15,lVar14);
              *(ushort **)(param_2 + 0x48) = puVar15;
              if (puVar15 == (ushort *)0x0) {
                puVar15 = (ushort *)0x0;
              }
              else {
                lVar14 = (longlong)iVar10;
                iVar10 = iVar10 + 1;
                puVar15[lVar14 * 0x10 + 0x10] = (ushort)uVar24;
              }
            }
            uVar24 = uVar24 + 1;
          } while (*(char *)(lVar4 + 0x61) == '\0');
        }
        piVar16 = (int *)FUN_14955d750(lVar4,(longlong)(int)(iVar10 + 1U) << 2);
        local_d0 = 0;
        if (piVar16 == (int *)0x0) {
          local_b0 = 0;
        }
        else {
          *piVar16 = iVar10;
          if (0 < iVar10) {
            lVar14 = 4;
            do {
              *(uint *)((longlong)piVar16 + lVar14) = puVar15[lVar14 * 4] - 1;
              lVar14 = lVar14 + 4;
            } while ((ulonglong)(iVar10 + 1U) << 2 != lVar14);
          }
          local_b0 = FUN_1495b430a(param_1,param_2);
        }
        *(ushort **)(param_2 + 0x48) = puVar15;
        uVar17 = FUN_1495a22be(*param_1,puVar15,0);
        *(undefined8 *)(local_128 + 0x12) = uVar17;
        iVar11 = (int)local_e0;
        if ((byte)local_120 == -0x7b) {
LAB_1495ac982:
          local_d8 = (int *)0x0;
        }
        else {
          uVar24 = **(uint **)(param_2 + 0x20);
          uVar25 = (int)param_1[7] + 1;
          uVar26 = (ulonglong)uVar25;
          *(uint *)(param_1 + 7) = (int)param_1[7] + uVar24 + 1;
          local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
          FUN_149584f48(plVar19,0x45,0,uVar25);
          piVar18 = (int *)FUN_14959b3e4(lVar4,(ulonglong)uVar24,1);
          plVar5 = local_130;
          local_d0 = uVar26;
          if (piVar18 == (int *)0x0) goto LAB_1495ac982;
          local_d8 = piVar18;
          if (0 < (int)uVar24) {
            uVar26 = 0;
            local_118 = plVar19;
            do {
              uVar17 = FUN_1495b42b2(plVar5,param_2,uVar26 & 0xffffffff);
              *(undefined8 *)(piVar18 + uVar26 * 2 + 8) = uVar17;
              *(undefined1 *)(*(longlong *)(piVar18 + 6) + uVar26) = 0;
              uVar26 = uVar26 + 1;
            } while (uVar24 != uVar26);
            iVar11 = (int)local_e0;
            plVar19 = local_118;
          }
        }
        piVar18 = local_128;
        plVar5 = local_130;
        local_f0 = CONCAT44(local_f0._4_4_,iVar11 + -1);
        uVar26 = 0;
        param_2[0x50] = '\0';
        param_2[0x51] = '\0';
        param_2[0x52] = '\0';
        param_2[0x53] = '\0';
        param_2[0x54] = '\0';
        param_2[0x55] = '\0';
        param_2[0x56] = '\0';
        param_2[0x57] = '\0';
        local_128[0x16] = 0;
        local_128[0x17] = 0;
        FUN_1495a9529(local_130,param_2,*(undefined8 *)(param_2 + 0x48),"ORDER");
        if (*(longlong *)(piVar18 + 0x14) == 0) {
          FUN_1495a9529(plVar5,local_128,*(undefined8 *)(local_128 + 0x12),"ORDER");
        }
        FUN_1495ae69f(plVar5,param_2,local_f0 & 0xffffffff);
        if ((byte)local_120 == -0x7b) {
          uVar33 = 0;
          if (*(int *)(param_2 + 8) != 0) {
            uVar24 = (int)local_130[7] + 1;
            uVar26 = (ulonglong)uVar24;
            uVar25 = (int)local_130[7] + 2;
            uVar33 = (ulonglong)uVar25;
            *(uint *)(local_130 + 7) = uVar25;
            if (*(int *)(param_2 + 0xc) == 0) {
              iVar11 = *(int *)(param_2 + 8);
            }
            else {
              iVar11 = *(int *)(param_2 + 0xc) + 1;
            }
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            FUN_149584f48(plVar19,0x4d,iVar11,uVar26);
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            FUN_149584f48(plVar19,0x4d,uVar24,uVar25);
          }
        }
        else {
          uVar33 = 0;
        }
        if (*(longlong *)(param_2 + 0x60) != 0) {
          FUN_14958288e(lVar4);
        }
        plVar5 = local_130;
        param_2[0x60] = '\0';
        param_2[0x61] = '\0';
        param_2[0x62] = '\0';
        param_2[99] = '\0';
        param_2[100] = '\0';
        param_2[0x65] = '\0';
        param_2[0x66] = '\0';
        param_2[0x67] = '\0';
        iVar32 = (int)local_130[7];
        iVar11 = iVar32 + 1;
        local_118 = (longlong *)CONCAT44(local_118._4_4_,iVar11);
        local_104 = iVar32 + 2;
        local_f4 = iVar32 + 4;
        *(int *)(local_130 + 7) = local_f4;
        local_68 = CONCAT71(local_68._1_7_,0xd);
        local_68 = CONCAT44(iVar11,(uint)local_68);
        local_60 = 0;
        uStack_58 = 0;
        local_88[0] = 0xd;
        local_80 = 0;
        uStack_78 = 0;
        if ((byte)(*param_2 + 0x7bU) < 3) {
          pcVar30 = (&PTR_s_UNION_ALL_14bd4a128)[(byte)(*param_2 + 0x7bU)];
        }
        else {
          pcVar30 = "UNION";
        }
        local_c8 = (ulonglong)(iVar32 + 3);
        local_e8 = uVar33;
        local_c0 = uVar26;
        local_84 = local_104;
        FUN_1495a08a0(local_130,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),1),"MERGE (%s)",pcVar30);
        plVar6 = local_118;
        local_158._0_4_ = (int)plVar19[0x12] + 1;
        local_f8 = FUN_149584f48(plVar19,0xd,(ulonglong)local_118 & 0xffffffff,0);
        piVar18 = local_128;
        local_128[2] = (int)local_c0;
        FUN_1495a08a0(plVar5,1,&DAT_14bd477c6);
        FUN_14958cf93(plVar5,piVar18,&local_68);
        local_158._0_4_ = 0;
        FUN_149584f48(plVar19,0x42,(ulonglong)plVar6 & 0xffffffff,0);
        uVar26 = local_e8;
        iVar11 = local_104;
        *(undefined1 *)(plVar19[3] + 0x1f) = 0;
        *(undefined4 *)(plVar19[3] + 0x28) = 0;
        if (*(char *)(*plVar19 + 0x61) == '\0') {
          iVar32 = (int)plVar19[0x12] + -1;
          if (-1 < local_f8) {
            iVar32 = local_f8;
          }
          puVar21 = (undefined1 *)((longlong)iVar32 * 0x18 + plVar19[0x11]);
        }
        else {
          puVar21 = &DAT_14cc1ee40;
        }
        *(int *)(puVar21 + 8) = (int)plVar19[0x12];
        local_158._0_4_ = (int)plVar19[0x12] + 1;
        local_b4 = FUN_149584f48(plVar19,0xd,local_104,0);
        plVar5 = local_130;
        uVar17 = *(undefined8 *)(param_2 + 8);
        *(int *)(param_2 + 8) = (int)uVar26;
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        FUN_1495a08a0(local_130,1,"RIGHT");
        FUN_14958cf93(plVar5,param_2,local_88);
        *(undefined8 *)(param_2 + 8) = uVar17;
        local_158._0_4_ = 0;
        FUN_149584f48(plVar19,0x42,iVar11,0);
        piVar18 = local_d8;
        puVar7 = local_110;
        *(undefined1 *)(plVar19[3] + 0x1f) = 0;
        local_e8 = local_e8 & 0xffffffff00000000;
        *(undefined4 *)(plVar19[3] + 0x28) = 0;
        local_140 = (int)local_f0;
        local_148 = local_d8;
        uVar12 = (undefined4)local_d0;
        local_150 = (undefined4 *)CONCAT44(local_150._4_4_,uVar12);
        local_158._0_4_ = (int)local_c8;
        local_f8 = FUN_1495b43d9(plVar5,param_2,&local_68,local_110);
        bVar8 = (byte)local_120;
        local_c0 = CONCAT71(local_c0._1_7_,(byte)local_120) & 0xfffffffffffffffe;
        if (((byte)local_120 & 0xfe) == 0x84) {
          local_140 = (int)local_f0;
          local_148 = piVar18;
          local_150 = (undefined4 *)CONCAT44(local_150._4_4_,uVar12);
          local_158._0_4_ = local_f4;
          uVar12 = FUN_1495b43d9(local_130,param_2,local_88,puVar7);
          local_e8 = CONCAT44(local_e8._4_4_,uVar12);
        }
        if ((piVar18 != (int *)0x0) && (*piVar18 = *piVar18 + -1, *piVar18 == 0)) {
          FUN_14955d65a(*(undefined8 *)(piVar18 + 4),piVar18);
        }
        uVar26 = local_f0;
        if ((char)local_c0 == -0x7a) {
          local_110 = (undefined4 *)CONCAT44(local_110._4_4_,(int)local_f0);
          uVar12 = (int)local_f0;
          if (bVar8 != 0x87) goto LAB_1495ad15a;
          if (*(short *)((longlong)local_128 + 2) < *(short *)(param_2 + 2)) {
            *(short *)(param_2 + 2) = *(short *)((longlong)local_128 + 2);
          }
          local_110 = (undefined4 *)CONCAT44(local_110._4_4_,(int)local_f0);
          local_d0 = CONCAT44(local_d0._4_4_,(int)local_f0);
          iVar11 = local_f8;
        }
        else {
          local_158._0_4_ = 0;
          uVar12 = FUN_149584f48(plVar19,0xc,local_f4,local_e8 & 0xffffffff);
          local_158._0_4_ = 0;
          uVar13 = FUN_149584f48(plVar19,0xe,local_104,uVar26 & 0xffffffff);
          local_110 = (undefined4 *)CONCAT44(local_110._4_4_,uVar13);
          local_158._0_4_ = 0;
          FUN_149584f48(plVar19,0xb,0,uVar12);
          uVar9 = FUN_1495b4246(*(undefined2 *)(param_2 + 2),
                                *(undefined2 *)((longlong)local_128 + 2));
          *(undefined2 *)(param_2 + 2) = uVar9;
LAB_1495ad15a:
          iVar11 = local_f8;
          local_d8 = (int *)CONCAT44(local_d8._4_4_,uVar12);
          local_158._0_4_ = 0;
          uVar12 = FUN_149584f48(plVar19,0xc,local_c8,local_f8);
          local_158._0_4_ = 0;
          FUN_149584f48(plVar19,0xe,(ulonglong)local_118 & 0xffffffff,uVar26 & 0xffffffff);
          local_158._0_4_ = 0;
          local_d0 = CONCAT44(local_d0._4_4_,uVar12);
          FUN_149584f48(plVar19,0xb,0,uVar12);
          uVar12 = local_d8._0_4_;
        }
        local_158._0_4_ = 0;
        iVar11 = FUN_149584f48(plVar19,0xc,local_c8,iVar11);
        local_158._0_4_ = 0;
        FUN_149584f48(plVar19,0xe,(ulonglong)local_118 & 0xffffffff,uVar12);
        local_158 = (undefined1 *)((ulonglong)local_158._4_4_ << 0x20);
        FUN_149584f48(plVar19,0xb,0,local_100 & 0xffffffff);
        if ((byte)local_120 == -0x7b) {
          local_120 = CONCAT44(local_120._4_4_,(int)plVar19[0x12]);
          iVar32 = iVar11;
LAB_1495ad236:
          local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
          FUN_149584f48(plVar19,0xc,local_f4,local_e8 & 0xffffffff);
LAB_1495ad25b:
          local_f0 = CONCAT44(local_f0._4_4_,iVar11);
          iVar11 = iVar32;
        }
        else {
          if ((byte)local_120 != -0x79) {
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            iVar32 = FUN_149584f48(plVar19,0xe,(ulonglong)local_118 & 0xffffffff,uVar12);
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            FUN_149584f48(plVar19,0xb,0,local_100 & 0xffffffff);
            local_120 = CONCAT44(local_120._4_4_,(int)plVar19[0x12]);
            if ((char)local_c0 == -0x7c) goto LAB_1495ad236;
            goto LAB_1495ad25b;
          }
          local_f0 = CONCAT44(local_f0._4_4_,iVar11 + 1);
          local_120 = CONCAT44(local_120._4_4_,(int)plVar19[0x12]);
        }
        uVar26 = local_d0;
        local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_149584f48(plVar19,0xe,local_104,local_d0 & 0xffffffff);
        local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_149584f48(plVar19,0xb,0,local_100 & 0xffffffff);
        if (*(char *)(*plVar19 + 0x61) == '\0') {
          iVar32 = (int)plVar19[0x12] + -1;
          if (-1 < local_b4) {
            iVar32 = local_b4;
          }
          puVar21 = (undefined1 *)((longlong)iVar32 * 0x18 + plVar19[0x11]);
        }
        else {
          puVar21 = &DAT_14cc1ee40;
        }
        *(int *)(puVar21 + 8) = (int)plVar19[0x12];
        local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_149584f48(plVar19,0xe,(ulonglong)local_118 & 0xffffffff,
                      (ulonglong)local_110 & 0xffffffff);
        local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_149584f48(plVar19,0xe,local_104,uVar26 & 0xffffffff);
        lVar14 = plVar19[3];
        iVar32 = (int)local_e0;
        if (*(int *)(lVar14 + 0x44) + *(int *)(lVar14 + 0x48) < 0) {
          FUN_1495a1bff(lVar14,plVar19);
        }
        else {
          *(int *)(*(longlong *)(lVar14 + 0x50) + (longlong)(1 - iVar32) * 4) = (int)plVar19[0x12];
        }
        local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
        uVar12 = FUN_149584f48(plVar19,0x55,0,0);
        FUN_14955a5b6(plVar19,uVar12,piVar16,0xfffffff1);
        local_158._0_4_ = iVar10;
        uVar12 = FUN_149584f48(plVar19,0x56,local_60 & 0xffffffff,local_80 & 0xffffffff);
        FUN_14955a5b6(plVar19,uVar12,local_b0,&DAT_fffffff7);
        if (0 < (longlong)(int)plVar19[0x12]) {
          *(undefined2 *)(plVar19[0x11] + -0x16 + (longlong)(int)plVar19[0x12] * 0x18) = 1;
        }
        local_158 = (undefined1 *)CONCAT44(local_158._4_4_,(undefined4)local_120);
        FUN_149584f48(plVar19,0x10,local_f0 & 0xffffffff,iVar11);
        lVar14 = plVar19[3];
        iVar32 = -iVar32;
        if (*(int *)(lVar14 + 0x44) + *(int *)(lVar14 + 0x48) < 0) {
          FUN_1495a1bff(lVar14,plVar19,iVar32);
        }
        else {
          *(int *)(*(longlong *)(lVar14 + 0x50) + (longlong)iVar32 * 4) = (int)plVar19[0x12];
        }
        plVar19 = local_130;
        if (*(longlong *)(param_2 + 0x50) != 0) {
          FUN_149582a1c(lVar4,*(longlong *)(param_2 + 0x50),1);
        }
        *(int **)(param_2 + 0x50) = local_128;
        *(char **)(local_128 + 0x16) = param_2;
        iVar10 = (int)plVar19[0x24];
        if (iVar10 == 0) {
          uVar12 = 0;
        }
        else {
          plVar5 = (longlong *)plVar19[2];
          if (iVar10 < 0) {
            iVar10 = (int)plVar5[0x12] + -1;
          }
          if (*(char *)(*plVar5 + 0x61) == '\0') {
            puVar21 = (undefined1 *)((longlong)iVar10 * 0x18 + plVar5[0x11]);
          }
          else {
            puVar21 = &DAT_14cc1ee40;
          }
          uVar12 = *(undefined4 *)(puVar21 + 8);
        }
        *(undefined4 *)(plVar19 + 0x24) = uVar12;
        uVar24 = (uint)((int)plVar19[6] != 0);
        goto LAB_1495ac81b;
      }
      if (*(longlong *)(lVar14 + 0x50) == 0) {
        FUN_1495a08a0(param_1,1,"COMPOUND QUERY");
        FUN_1495a08a0(param_1,1,"LEFT-MOST SUBQUERY");
      }
      cVar2 = *param_2;
      if ((cVar2 != -0x7c) && (cVar2 != -0x7a)) {
        if (cVar2 == -0x7b) {
          *(undefined4 *)(lVar14 + 8) = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(lVar14 + 0xc) = *(undefined4 *)(param_2 + 0xc);
          *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(param_2 + 0x60);
          uVar24 = FUN_14958cf93(param_1,lVar14,&local_a8);
          param_2[0x60] = '\0';
          param_2[0x61] = '\0';
          param_2[0x62] = '\0';
          param_2[99] = '\0';
          param_2[100] = '\0';
          param_2[0x65] = '\0';
          param_2[0x66] = '\0';
          param_2[0x67] = '\0';
          param_3 = local_110;
          if (uVar24 == 0) {
            param_2[0x50] = '\0';
            param_2[0x51] = '\0';
            param_2[0x52] = '\0';
            param_2[0x53] = '\0';
            param_2[0x54] = '\0';
            param_2[0x55] = '\0';
            param_2[0x56] = '\0';
            param_2[0x57] = '\0';
            iVar10 = *(int *)(lVar14 + 8);
            *(int *)(param_2 + 8) = iVar10;
            *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar14 + 0xc);
            iVar11 = 0;
            if (iVar10 != 0) {
              local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
              iVar11 = FUN_149584f48(plVar19,0x14,iVar10,0);
              iVar10 = *(int *)(param_2 + 0xc);
              if (iVar10 != 0) {
                local_158 = (undefined1 *)CONCAT44(local_158._4_4_,iVar10);
                FUN_149584f48(plVar19,0x98,*(undefined4 *)(param_2 + 8),iVar10 + 1);
              }
            }
            FUN_1495a08a0(param_1,1,"UNION ALL");
            uVar24 = FUN_14958cf93(param_1,param_2,&local_a8);
            piVar16 = *(int **)(param_2 + 0x50);
            *(longlong *)(param_2 + 0x50) = lVar14;
            uVar9 = FUN_1495b4246(*(undefined2 *)(param_2 + 2),*(undefined2 *)(lVar14 + 2));
            *(undefined2 *)(param_2 + 2) = uVar9;
            if (*(longlong *)(lVar14 + 0x60) != 0) {
              iVar10 = FUN_1495a94a2(*(undefined8 *)(*(longlong *)(lVar14 + 0x60) + 0x10),&local_68)
              ;
              if (0 < (int)(uint)local_68 && iVar10 != 0) {
                uVar26 = local_68 & 0xffffffff;
                if ((uint)local_68 < 8) {
                  if (1 < (uint)local_68) {
                    sVar22 = 0x28;
                    uVar33 = uVar26;
                    do {
                      sVar22 = sVar22 + -10;
                      uVar31 = uVar33 * 2;
                      bVar34 = uVar33 < 4;
                      uVar33 = uVar31;
                    } while (bVar34);
                    goto LAB_1495ae1ee;
                  }
                  if (*(short *)(param_2 + 2) < 1) goto LAB_1495accda;
LAB_1495ae0fe:
                  sVar22 = 0;
                }
                else {
                  sVar22 = 0x28;
                  uVar33 = uVar26;
                  if (0xff < (uint)local_68) {
                    sVar22 = 0x28;
                    uVar31 = uVar26;
                    do {
                      sVar22 = sVar22 + 0x28;
                      uVar33 = uVar31 >> 4;
                      bVar34 = 0xfff < uVar31;
                      uVar31 = uVar33;
                    } while (bVar34);
                  }
                  uVar31 = uVar33;
                  if (0xf < uVar33) {
                    do {
                      sVar22 = sVar22 + 10;
                      uVar31 = uVar33 >> 1;
                      bVar34 = 0x1f < uVar33;
                      uVar33 = uVar31;
                    } while (bVar34);
                  }
LAB_1495ae1ee:
                  if (*(short *)(param_2 + 2) <=
                      (short)(sVar22 + (&DAT_14bd41890)[(uint)uVar31 & 7] + -10))
                  goto LAB_1495accda;
                  if ((uint)local_68 < 8) {
                    if ((uint)local_68 < 2) goto LAB_1495ae0fe;
                    sVar22 = 0x28;
                    do {
                      sVar22 = sVar22 + -10;
                      uVar33 = uVar26 * 2;
                      bVar34 = uVar26 < 4;
                      uVar26 = uVar33;
                    } while (bVar34);
                  }
                  else {
                    sVar22 = 0x28;
                    if (0xff < (uint)local_68) {
                      sVar22 = 0x28;
                      uVar33 = uVar26;
                      do {
                        sVar22 = sVar22 + 0x28;
                        uVar26 = uVar33 >> 4;
                        bVar34 = 0xfff < uVar33;
                        uVar33 = uVar26;
                      } while (bVar34);
                    }
                    uVar33 = uVar26;
                    if (0xf < uVar26) {
                      do {
                        sVar22 = sVar22 + 10;
                        uVar33 = uVar26 >> 1;
                        bVar34 = 0x1f < uVar26;
                        uVar26 = uVar33;
                      } while (bVar34);
                    }
                  }
                  sVar22 = sVar22 + (&DAT_14bd41890)[(uint)uVar33 & 7] + -10;
                }
                *(short *)(param_2 + 2) = sVar22;
              }
            }
LAB_1495accda:
            if (iVar11 != 0) {
              if (*(char *)(*plVar19 + 0x61) == '\0') {
                iVar10 = (int)plVar19[0x12] + -1;
                if (-1 < iVar11) {
                  iVar10 = iVar11;
                }
                puVar21 = (undefined1 *)((longlong)iVar10 * 0x18 + plVar19[0x11]);
              }
              else {
                puVar21 = &DAT_14cc1ee40;
              }
              *(int *)(puVar21 + 8) = (int)plVar19[0x12];
            }
            goto LAB_1495addc4;
          }
        }
        else {
          iVar10 = *(int *)((longlong)param_1 + 0x34);
          *(int *)((longlong)param_1 + 0x34) = iVar10 + 2;
          local_158 = (undefined1 *)((ulonglong)local_158._4_4_ << 0x20);
          uVar12 = FUN_149584f48(plVar19,100,iVar10,0);
          *(undefined4 *)(param_2 + 0x14) = uVar12;
          pcVar30 = param_2;
          do {
            pcVar29 = pcVar30;
            pcVar30 = *(char **)(pcVar29 + 0x58);
          } while (pcVar30 != (char *)0x0);
          pbVar1 = (byte *)(pcVar29 + 4);
          *pbVar1 = *pbVar1 | 0x20;
          local_68 = CONCAT71(local_68._1_7_,1);
          local_68 = CONCAT44(iVar10,(uint)local_68);
          local_60 = 0;
          uStack_58 = 0;
          uVar24 = FUN_14958cf93(param_1,lVar14);
          param_3 = local_110;
          if (uVar24 == 0) {
            iVar11 = iVar10 + 1;
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            uVar12 = FUN_149584f48(plVar19,100,iVar11,0);
            plVar5 = local_130;
            *(undefined4 *)(param_2 + 0x18) = uVar12;
            param_2[0x50] = '\0';
            param_2[0x51] = '\0';
            param_2[0x52] = '\0';
            param_2[0x53] = '\0';
            param_2[0x54] = '\0';
            param_2[0x55] = '\0';
            param_2[0x56] = '\0';
            param_2[0x57] = '\0';
            uVar17 = *(undefined8 *)(param_2 + 0x60);
            param_2[0x60] = '\0';
            param_2[0x61] = '\0';
            param_2[0x62] = '\0';
            param_2[99] = '\0';
            param_2[100] = '\0';
            param_2[0x65] = '\0';
            param_2[0x66] = '\0';
            param_2[0x67] = '\0';
            local_128 = (int *)CONCAT44(local_128._4_4_,iVar11);
            local_68 = CONCAT44(iVar11,(uint)local_68);
            if ((byte)(*param_2 + 0x7bU) < 3) {
              pcVar30 = (&PTR_s_UNION_ALL_14bd4a128)[(byte)(*param_2 + 0x7bU)];
            }
            else {
              pcVar30 = "UNION";
            }
            FUN_1495a08a0(local_130,1,"%s USING TEMP B-TREE",pcVar30);
            uVar24 = FUN_14958cf93(plVar5,param_2,&local_68);
            piVar16 = *(int **)(param_2 + 0x50);
            *(longlong *)(param_2 + 0x50) = lVar14;
            if (*(short *)(lVar14 + 2) < *(short *)(param_2 + 2)) {
              *(short *)(param_2 + 2) = *(short *)(lVar14 + 2);
            }
            if (*(longlong *)(param_2 + 0x60) != 0) {
              FUN_14958288e(lVar4);
            }
            plVar5 = local_130;
            *(undefined8 *)(param_2 + 0x60) = uVar17;
            uVar25 = *(uint *)((longlong)local_130 + 0x44);
            local_100 = (ulonglong)uVar25;
            iVar11 = uVar25 - 1;
            local_120 = CONCAT44(local_120._4_4_,uVar25 - 2);
            *(uint *)((longlong)local_130 + 0x44) = uVar25 - 2;
            FUN_1495ae69f(local_130,param_2,iVar11);
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            local_e0 = CONCAT44(local_e0._4_4_,iVar11);
            FUN_149584f48(plVar19,0x25,iVar10,iVar11);
            if (*(char *)((longlong)plVar5 + 0x1f) == '\0') {
              iVar11 = (int)plVar5[7] + 1;
              *(int *)(plVar5 + 7) = iVar11;
            }
            else {
              bVar8 = *(char *)((longlong)plVar5 + 0x1f) - 1;
              *(byte *)((longlong)plVar5 + 0x1f) = bVar8;
              iVar11 = *(int *)((longlong)plVar5 + (ulonglong)bVar8 * 4 + 0xcc);
            }
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            uVar12 = FUN_149584f48(plVar19,0x7e,iVar10,iVar11);
            local_118 = (longlong *)CONCAT44(local_118._4_4_,uVar12);
            local_158 = (undefined1 *)CONCAT44(local_158._4_4_,iVar11);
            iVar32 = FUN_149584f48(plVar19,0x1d,(ulonglong)local_128 & 0xffffffff,
                                   local_120 & 0xffffffff);
            uVar26 = local_100;
            if (*(char *)(*plVar19 + 0x61) == '\0') {
              lVar14 = plVar19[0x11];
              *(undefined1 *)(lVar14 + 1 + (longlong)iVar32 * 0x18) = 0xfd;
              *(undefined4 *)(lVar14 + 0x10 + (longlong)iVar32 * 0x18) = 0;
            }
            if (iVar11 != 0) {
              bVar8 = *(byte *)((longlong)local_130 + 0x1f);
              if ((ulonglong)bVar8 < 8) {
                *(byte *)((longlong)local_130 + 0x1f) = bVar8 + 1;
                *(int *)((longlong)local_130 + (ulonglong)bVar8 * 4 + 0xcc) = iVar11;
              }
            }
            local_140 = (int)local_e0;
            local_148 = (int *)CONCAT44(local_148._4_4_,(undefined4)local_120);
            local_150 = &local_a8;
            local_158 = (undefined1 *)0x0;
            FUN_1495b1362(local_130,param_2,iVar10,0);
            lVar14 = plVar19[3];
            if (*(int *)(lVar14 + 0x44) + *(int *)(lVar14 + 0x48) < 0) {
              FUN_1495a1bff(lVar14,plVar19);
            }
            else {
              *(int *)(*(longlong *)(lVar14 + 0x50) + (longlong)(1 - (int)uVar26) * 4) =
                   (int)plVar19[0x12];
            }
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            FUN_149584f48(plVar19,5,iVar10,(ulonglong)local_118 & 0xffffffff);
            lVar14 = plVar19[3];
            iVar11 = -(int)uVar26;
            if (*(int *)(lVar14 + 0x44) + *(int *)(lVar14 + 0x48) < 0) {
              FUN_1495a1bff(lVar14,plVar19,iVar11);
            }
            else {
              *(int *)(*(longlong *)(lVar14 + 0x50) + (longlong)iVar11 * 4) = (int)plVar19[0x12];
            }
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            FUN_149584f48(plVar19,0x74,(ulonglong)local_128 & 0xffffffff,0);
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            FUN_149584f48(plVar19,0x74,iVar10,0);
            goto LAB_1495addc4;
          }
        }
        goto LAB_1495aca6c;
      }
      iVar10 = iStack_a4;
      if (cVar27 != '\x01') {
        iVar10 = *(int *)((longlong)param_1 + 0x34);
        *(int *)((longlong)param_1 + 0x34) = iVar10 + 1;
        local_158 = (undefined1 *)((ulonglong)local_158._4_4_ << 0x20);
        uVar12 = FUN_149584f48(plVar19,100,iVar10,0);
        *(undefined4 *)(param_2 + 0x14) = uVar12;
        pcVar30 = param_2;
        do {
          pcVar29 = pcVar30;
          pcVar30 = *(char **)(pcVar29 + 0x58);
        } while (pcVar30 != (char *)0x0);
        pbVar1 = (byte *)(pcVar29 + 4);
        *pbVar1 = *pbVar1 | 0x20;
      }
      local_68 = CONCAT71(local_68._1_7_,1);
      local_68 = CONCAT44(iVar10,(uint)local_68);
      local_60 = 0;
      uStack_58 = 0;
      uVar24 = FUN_14958cf93(param_1);
      plVar5 = local_130;
      param_3 = local_110;
      if (uVar24 != 0) goto LAB_1495aca6c;
      param_2[0x50] = '\0';
      param_2[0x51] = '\0';
      param_2[0x52] = '\0';
      param_2[0x53] = '\0';
      param_2[0x54] = '\0';
      param_2[0x55] = '\0';
      param_2[0x56] = '\0';
      param_2[0x57] = '\0';
      local_128 = *(int **)(param_2 + 0x60);
      param_2[0x60] = '\0';
      param_2[0x61] = '\0';
      param_2[0x62] = '\0';
      param_2[99] = '\0';
      param_2[100] = '\0';
      param_2[0x65] = '\0';
      param_2[0x66] = '\0';
      param_2[0x67] = '\0';
      local_68 = CONCAT71(local_68._1_7_,(*param_2 == -0x7a) + '\x01');
      bVar8 = *param_2 + 0x7b;
      if (bVar8 < 3) {
        pcVar30 = (&PTR_s_UNION_ALL_14bd4a128)[bVar8];
      }
      else {
        pcVar30 = "UNION";
      }
      FUN_1495a08a0(local_130,1,"%s USING TEMP B-TREE",pcVar30);
      uVar24 = FUN_14958cf93(plVar5,param_2,&local_68);
      if (*(longlong *)(param_2 + 0x48) != 0) {
        FUN_149582d29(lVar4);
      }
      piVar16 = *(int **)(param_2 + 0x50);
      *(longlong *)(param_2 + 0x50) = lVar14;
      param_2[0x48] = '\0';
      param_2[0x49] = '\0';
      param_2[0x4a] = '\0';
      param_2[0x4b] = '\0';
      param_2[0x4c] = '\0';
      param_2[0x4d] = '\0';
      param_2[0x4e] = '\0';
      param_2[0x4f] = '\0';
      if (*param_2 == -0x7c) {
        uVar9 = FUN_1495b4246(*(undefined2 *)(param_2 + 2),*(undefined2 *)(lVar14 + 2));
        *(undefined2 *)(param_2 + 2) = uVar9;
      }
      if (*(longlong *)(param_2 + 0x60) != 0) {
        FUN_14958288e(lVar4);
      }
      plVar5 = local_130;
      *(int **)(param_2 + 0x60) = local_128;
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      if ((cVar27 != '\x01') && (*(char *)(lVar4 + 0x61) == '\0')) {
        iVar11 = *(int *)((longlong)local_130 + 0x44);
        iVar32 = iVar11 + -1;
        local_100 = CONCAT44(local_100._4_4_,iVar11 + -2);
        *(int *)((longlong)local_130 + 0x44) = iVar11 + -2;
        local_128 = piVar16;
        FUN_1495ae69f(local_130,param_2,iVar32);
        local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_149584f48(plVar19,0x25,iVar10,iVar32);
        local_120 = CONCAT44(local_120._4_4_,(int)plVar19[0x12]);
        local_148 = (int *)CONCAT44(local_148._4_4_,(undefined4)local_100);
        local_150 = &local_a8;
        local_158 = (undefined1 *)0x0;
        local_140 = iVar32;
        FUN_1495b1362(plVar5,param_2,iVar10,0);
        lVar14 = plVar19[3];
        if (*(int *)(lVar14 + 0x44) + *(int *)(lVar14 + 0x48) < 0) {
          FUN_1495a1bff(lVar14,plVar19);
        }
        else {
          *(int *)(*(longlong *)(lVar14 + 0x50) + (longlong)(1 - iVar11) * 4) = (int)plVar19[0x12];
        }
        local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_149584f48(plVar19,5,iVar10,local_120 & 0xffffffff);
        lVar14 = plVar19[3];
        if (*(int *)(lVar14 + 0x44) + *(int *)(lVar14 + 0x48) < 0) {
          FUN_1495a1bff(lVar14,plVar19,-iVar11);
        }
        else {
          *(int *)(*(longlong *)(lVar14 + 0x50) + (longlong)-iVar11 * 4) = (int)plVar19[0x12];
        }
        local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_149584f48(plVar19,0x74,iVar10,0);
        piVar16 = local_128;
      }
LAB_1495addc4:
      if (*(longlong *)(param_2 + 0x58) == 0) {
        iVar10 = (int)local_130[0x24];
        if (iVar10 == 0) {
          uVar12 = 0;
        }
        else {
          plVar5 = (longlong *)local_130[2];
          if (iVar10 < 0) {
            iVar10 = (int)plVar5[0x12] + -1;
          }
          if (*(char *)(*plVar5 + 0x61) == '\0') {
            puVar21 = (undefined1 *)((longlong)iVar10 * 0x18 + plVar5[0x11]);
          }
          else {
            puVar21 = &DAT_14cc1ee40;
          }
          uVar12 = *(undefined4 *)(puVar21 + 8);
        }
        *(undefined4 *)(local_130 + 0x24) = uVar12;
      }
    }
    else {
      if (*(longlong *)(param_2 + 0x70) == 0) {
        piVar16 = *(int **)(param_2 + 0x28);
        uVar12 = **(undefined4 **)(param_2 + 0x20);
        uVar26 = param_1[2];
        lVar14 = *(longlong *)(param_2 + 0x50);
        local_158 = (undefined1 *)0x0;
        uVar13 = 0;
        iVar10 = FUN_1495a2d6b(param_1,0x21,0,0);
        if (iVar10 == 0) {
          local_f0 = (ulonglong)*(uint *)((longlong)local_130 + 0x44);
          local_104 = *(uint *)((longlong)local_130 + 0x44) - 1;
          *(int *)((longlong)local_130 + 0x44) = local_104;
          param_2[2] = '@';
          param_2[3] = '\x01';
          FUN_1495ae69f(local_130,param_2);
          plVar5 = local_130;
          local_e0 = *(ulonglong *)(param_2 + 0x60);
          uVar3 = *(undefined4 *)(param_2 + 8);
          local_f4 = *(int *)(param_2 + 0xc);
          param_2[0x60] = '\0';
          param_2[0x61] = '\0';
          param_2[0x62] = '\0';
          param_2[99] = '\0';
          param_2[100] = '\0';
          param_2[0x65] = '\0';
          param_2[0x66] = '\0';
          param_2[0x67] = '\0';
          param_2[8] = '\0';
          param_2[9] = '\0';
          param_2[10] = '\0';
          param_2[0xb] = '\0';
          param_2[0xc] = '\0';
          param_2[0xd] = '\0';
          param_2[0xe] = '\0';
          param_2[0xf] = '\0';
          if (0 < (longlong)*piVar16) {
            lVar23 = 0;
            do {
              if ((*(byte *)((longlong)piVar16 + lVar23 + 0x48) & 0x20) != 0) {
                uVar13 = *(undefined4 *)((longlong)piVar16 + lVar23 + 0x4c);
                goto LAB_1495ad9de;
              }
              lVar23 = lVar23 + 0x70;
            } while ((longlong)*piVar16 * 0x70 - lVar23 != 0);
            uVar13 = 0;
          }
LAB_1495ad9de:
          local_128 = *(int **)(param_2 + 0x48);
          uVar24 = *(uint *)((longlong)local_130 + 0x34);
          local_100 = (ulonglong)uVar24;
          *(uint *)((longlong)local_130 + 0x34) = uVar24 + 1;
          local_c8 = CONCAT44(local_c8._4_4_,uVar3);
          if (*param_2 == -0x7c) {
            local_118 = (longlong *)CONCAT44(local_118._4_4_,uVar24 + 1);
            bVar8 = (local_128 != (int *)0x0) * '\x02' + 6;
            *(uint *)((longlong)local_130 + 0x34) = uVar24 + 2;
          }
          else {
            bVar8 = (local_128 != (int *)0x0) * '\x02' | 5;
            local_118 = (longlong *)((ulonglong)local_118._4_4_ << 0x20);
          }
          local_68 = CONCAT71(local_68._1_7_,bVar8);
          local_68 = CONCAT44(uVar24,(uint)local_68);
          local_60 = 0;
          uStack_58 = 0;
          iVar10 = (int)local_130[7] + 1;
          *(int *)(local_130 + 7) = iVar10;
          local_e8 = CONCAT44(local_e8._4_4_,iVar10);
          local_120 = uVar26;
          local_158._0_4_ = uVar12;
          FUN_149584f48(uVar26,0x72,uVar13);
          if (local_128 == (int *)0x0) {
            local_158 = (undefined1 *)((ulonglong)local_158._4_4_ << 0x20);
            FUN_149584f48(uVar26,100,local_100,uVar12);
          }
          else {
            uVar17 = FUN_1495b430a(plVar5,param_2);
            piVar16 = local_128;
            local_158 = (undefined1 *)((ulonglong)local_158._4_4_ << 0x20);
            uVar12 = FUN_149584f48(uVar26,100,local_100,*local_128 + 2);
            FUN_14955a5b6(uVar26,uVar12,uVar17,&DAT_fffffff7);
            local_50 = piVar16;
          }
          if ((int)local_118 != 0) {
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            uVar12 = FUN_149584f48(uVar26,100,(ulonglong)local_118 & 0xffffffff,0);
            *(undefined4 *)(param_2 + 0x14) = uVar12;
            param_2[4] = param_2[4] | 0x20;
          }
          plVar5 = local_130;
          param_2[0x48] = '\0';
          param_2[0x49] = '\0';
          param_2[0x4a] = '\0';
          param_2[0x4b] = '\0';
          param_2[0x4c] = '\0';
          param_2[0x4d] = '\0';
          param_2[0x4e] = '\0';
          param_2[0x4f] = '\0';
          *(undefined8 *)(lVar14 + 0x58) = 0;
          FUN_1495a08a0(local_130,1,"SETUP");
          iVar10 = FUN_14958cf93(plVar5,lVar14,&local_68);
          uVar33 = local_100;
          uVar26 = local_120;
          *(char **)(lVar14 + 0x58) = param_2;
          if (iVar10 == 0) {
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            uVar12 = FUN_149584f48(local_120,0x25,local_100 & 0xffffffff,local_104);
            local_118 = (longlong *)CONCAT44(local_118._4_4_,uVar12);
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            FUN_149584f48(uVar26,0x80,uVar13,0);
            if (local_128 == (int *)0x0) {
              local_158._0_4_ = 0;
              uVar17 = 0x7e;
              iVar10 = (int)local_e8;
            }
            else {
              iVar10 = *local_128 + 1;
              local_158._0_4_ = (int)local_e8;
              uVar17 = 0x59;
            }
            FUN_149584f48(uVar26,uVar17,uVar33 & 0xffffffff,iVar10);
            local_158._0_4_ = 0;
            FUN_149584f48(uVar26,0x7a,uVar33 & 0xffffffff,0);
            local_100 = (ulonglong)*(uint *)((longlong)local_130 + 0x44);
            iVar10 = *(uint *)((longlong)local_130 + 0x44) - 1;
            *(int *)((longlong)local_130 + 0x44) = iVar10;
            if (0 < local_f4) {
              local_158 = (undefined1 *)CONCAT44(local_158._4_4_,1);
              FUN_149584f48(uVar26,0x30,local_f4,iVar10);
            }
            iVar11 = local_104;
            local_140 = local_104;
            local_148 = (int *)CONCAT44(local_148._4_4_,iVar10);
            local_150 = &local_a8;
            local_158 = (undefined1 *)0x0;
            FUN_1495b1362(local_130,param_2,uVar13,0);
            if ((int)local_c8 != 0) {
              local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
              FUN_149584f48(uVar26,0x3b,local_c8 & 0xffffffff,iVar11);
            }
            lVar23 = *(longlong *)(uVar26 + 0x18);
            if (*(int *)(lVar23 + 0x44) + *(int *)(lVar23 + 0x48) < 0) {
              FUN_1495a1bff(lVar23,uVar26);
            }
            else {
              *(undefined4 *)(*(longlong *)(lVar23 + 0x50) + (longlong)-(int)local_100 * 4) =
                   *(undefined4 *)(uVar26 + 0x90);
            }
            plVar5 = local_130;
            if ((param_2[4] & 8U) == 0) {
              param_2[0x50] = '\0';
              param_2[0x51] = '\0';
              param_2[0x52] = '\0';
              param_2[0x53] = '\0';
              param_2[0x54] = '\0';
              param_2[0x55] = '\0';
              param_2[0x56] = '\0';
              param_2[0x57] = '\0';
              FUN_1495a08a0(local_130,1,"RECURSIVE STEP");
              FUN_14958cf93(plVar5,param_2,&local_68);
              *(longlong *)(param_2 + 0x50) = lVar14;
            }
            else {
              FUN_14955a364(local_130,"recursive aggregate queries not supported");
            }
            uVar26 = local_120;
            local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
            FUN_149584f48(local_120,0xb,0,(ulonglong)local_118 & 0xffffffff);
            lVar14 = *(longlong *)(uVar26 + 0x18);
            if (*(int *)(lVar14 + 0x44) + *(int *)(lVar14 + 0x48) < 0) {
              FUN_1495a1bff(lVar14,uVar26);
            }
            else {
              *(undefined4 *)(*(longlong *)(lVar14 + 0x50) + (longlong)-(int)local_f0 * 4) =
                   *(undefined4 *)(uVar26 + 0x90);
            }
          }
          if (*(longlong *)(param_2 + 0x48) != 0) {
            FUN_149582d29(*local_130);
          }
          *(int **)(param_2 + 0x48) = local_128;
          *(ulonglong *)(param_2 + 0x60) = local_e0;
        }
      }
      else {
        FUN_14955a364(param_1,"cannot use window functions in recursive queries");
      }
      piVar16 = (int *)0x0;
      uVar24 = 0;
    }
    if (((int)local_130[6] == 0) && ((param_2[4] & 0x20U) != 0)) {
      iVar10 = **(int **)(param_2 + 0x20);
      piVar18 = (int *)FUN_14959b3e4(lVar4,iVar10,1);
      if (piVar18 == (int *)0x0) {
        uVar24 = 7;
      }
      else {
        local_128 = piVar16;
        if (0 < iVar10) {
          uVar26 = 0;
          do {
            lVar14 = FUN_1495b42b2(local_130,param_2,uVar26 & 0xffffffff);
            *(longlong *)(piVar18 + uVar26 * 2 + 8) = lVar14;
            if (lVar14 == 0) {
              *(undefined8 *)(piVar18 + uVar26 * 2 + 8) = *(undefined8 *)(lVar4 + 0x10);
            }
            uVar26 = uVar26 + 1;
          } while (iVar10 != (int)uVar26);
        }
        do {
          lVar14 = 0;
          bVar34 = true;
          do {
            bVar28 = bVar34;
            lVar23 = (longlong)*(int *)(param_2 + lVar14 * 4 + 0x14);
            if (lVar23 < 0) break;
            if (*(char *)(*plVar19 + 0x61) == '\0') {
              puVar21 = (undefined1 *)(lVar23 * 0x18 + plVar19[0x11]);
            }
            else {
              puVar21 = &DAT_14cc1ee40;
            }
            *(int *)(puVar21 + 8) = iVar10;
            *piVar18 = *piVar18 + 1;
            FUN_14955a5b6(plVar19,lVar23,piVar18,&DAT_fffffff7);
            pcVar30 = param_2 + lVar14 * 4 + 0x14;
            pcVar30[0] = -1;
            pcVar30[1] = -1;
            pcVar30[2] = -1;
            pcVar30[3] = -1;
            lVar14 = 1;
            bVar34 = false;
          } while (bVar28);
          param_2 = *(char **)(param_2 + 0x50);
        } while (param_2 != (char *)0x0);
        *piVar18 = *piVar18 + -1;
        piVar16 = local_128;
        if (*piVar18 == 0) {
          FUN_14955d65a(*(undefined8 *)(piVar18 + 4),piVar18);
          piVar16 = local_128;
        }
      }
    }
    local_110[2] = uStack_a0;
    local_110[3] = uStack_9c;
    if (piVar16 != (int *)0x0) {
      FUN_149582a1c(lVar4,piVar16,1);
    }
    goto LAB_1495ac81b;
  }
  if ((byte)(*param_2 + 0x7bU) < 3) {
    pcVar30 = (&PTR_s_UNION_ALL_14bd4a128)[(byte)(*param_2 + 0x7bU)];
  }
  else {
    pcVar30 = "UNION";
  }
  pcVar29 = "ORDER BY";
  if (*(longlong *)(lVar14 + 0x48) == 0) {
    pcVar29 = "LIMIT";
  }
  FUN_14955a364(param_1,"%s clause should come after %s not before",pcVar29,pcVar30);
  uVar24 = 1;
  goto LAB_1495aca6c;
  while( true ) {
    *(short *)(pcVar30 + 2) = (short)iVar10;
    pcVar30 = *(char **)(pcVar30 + 0x58);
    if (pcVar30 == (char *)0x0) break;
LAB_1495ad6ff:
    local_140 = 1;
    local_148 = (int *)CONCAT44(local_148._4_4_,1);
    local_158 = (undefined1 *)0x0;
    local_150 = &local_a8;
    FUN_1495b1362(local_130,pcVar30,0xffffffff,0);
    if (lVar23 != 0) break;
  }
LAB_1495aca6c:
  param_3[2] = uStack_a0;
  param_3[3] = uStack_9c;
LAB_1495ac81b:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24;
}



// FUNCTION 1495ae29e FUN_1495ae29e body=225 status=ok
// SIG undefined FUN_1495ae29e(void)

void FUN_1495ae29e(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 **local_70;
  undefined8 *local_68;
  undefined8 local_60;
  longlong lStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_1;
  do {
    local_60 = 0;
    lStack_58 = 0;
    FUN_1495b486f(&local_68,*(undefined8 *)(param_2 + 0x30));
    if ((int)local_60 != 0) {
      local_90 = FUN_1495b49b1;
      local_88 = &LAB_1495a68f9;
      local_80 = 0;
      uStack_78 = 0;
      local_98 = param_1;
      local_70 = &local_68;
      if (*(longlong *)(param_2 + 0x30) != 0) {
        FUN_14959fa98(&local_98);
      }
      if (lStack_58 != 0) {
        FUN_14955d65a(*local_68);
      }
    }
  } while (local_60._4_4_ != 0);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ae380 FUN_1495ae380 body=427 status=ok
// SIG undefined FUN_1495ae380(void)

int FUN_1495ae380(undefined8 *param_1,longlong param_2,char *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  int local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  short local_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = 0;
  if ((((param_3 == (char *)0x0) || ((*(byte *)(param_2 + 5) & 0x20) != 0)) ||
      (*(longlong *)(param_2 + 0x70) != 0)) || (iVar1 = 0, *(longlong *)(param_2 + 0x60) != 0))
  goto LAB_1495ae3b4;
  iVar4 = 0;
  if (*param_3 == ',') {
    iVar4 = 0;
    do {
      local_78 = param_5;
      iVar1 = FUN_1495ae380(param_1,param_2,*(undefined8 *)(param_3 + 0x18),param_4);
      iVar4 = iVar4 + iVar1;
      param_3 = *(char **)(param_3 + 0x10);
    } while (*param_3 == ',');
  }
  if (param_5 == 0) {
    if ((*(uint *)(param_3 + 4) & 1) != 0) {
      iVar3 = (int)*(short *)(param_3 + 0x34);
      goto LAB_1495ae4ff;
    }
  }
  else {
    iVar1 = 0;
    if (((*(uint *)(param_3 + 4) & 1) == 0) ||
       (iVar3 = (int)*(short *)(param_3 + 0x34), iVar1 = 0, iVar3 != param_4)) goto LAB_1495ae3b4;
LAB_1495ae4ff:
    iVar1 = 0;
    if (iVar3 != param_4) goto LAB_1495ae3b4;
  }
  local_4c = 3;
  local_68 = FUN_14959f99d;
  local_60 = &LAB_14959fa8c;
  local_48 = param_4;
  if ((param_3 == (char *)0x0) || (FUN_14959fa98(&local_70,param_3), iVar1 = iVar4, local_4c != 0))
  {
    do {
      if (param_3 == (char *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_1495a1c89(*param_1,param_3,0,0);
      }
      FUN_1495abcf2(uVar2,0xffffffff);
      local_68 = (code *)CONCAT44(param_4,param_4);
      local_60 = (undefined1 *)((ulonglong)local_60 & 0xffffffff00000000);
      local_58 = *(undefined8 *)(param_2 + 0x20);
      local_70 = param_1;
      FUN_1495b3f81(&local_70,uVar2);
      uVar5 = (ulonglong)(*(uint *)(param_2 + 4) & 8);
      uVar2 = FUN_149594bf0(param_1,*(undefined8 *)(param_2 + 0x30 + uVar5 * 2));
      *(undefined8 *)(param_2 + 0x30 + uVar5 * 2) = uVar2;
      param_2 = *(longlong *)(param_2 + 0x50);
    } while (param_2 != 0);
    iVar1 = iVar4 + 1;
  }
LAB_1495ae3b4:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 1495ae52c FUN_1495ae52c body=230 status=ok
// SIG undefined FUN_1495ae52c(void)

ulonglong FUN_1495ae52c(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = param_1 + 8;
joined_r0x0001495ae53f:
  if (param_2 <= uVar6) {
    return 0;
  }
  lVar3 = *(longlong *)(uVar6 + 0x28);
  if ((((lVar3 != 0) && ((*(byte *)(uVar6 + 0x40) & 0x10) == 0)) &&
      (*(longlong *)(uVar6 + 0x10) != 0)) &&
     ((lVar4 = *(longlong *)(*(longlong *)(uVar6 + 0x20) + 0x70),
      lVar4 == *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x70) &&
      (*(longlong *)(param_2 + 0x10) != 0)))) {
    lVar7 = 0;
    do {
      bVar1 = *(byte *)(*(longlong *)(uVar6 + 0x10) + lVar7);
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x10) + lVar7);
      if (bVar1 == bVar2) {
        if ((ulonglong)bVar1 == 0) goto LAB_1495ae5b5;
      }
      else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) break;
      lVar7 = lVar7 + 1;
    } while( true );
  }
  goto LAB_1495ae579;
LAB_1495ae5b5:
  if (((lVar4 != 0) || (*(int *)(*(longlong *)(param_2 + 0x28) + 0x10) == *(int *)(lVar3 + 0x10)))
     && ((iVar5 = FUN_14959fe84(0,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x30),
                                *(undefined8 *)(lVar3 + 0x30),0xffffffff), iVar5 == 0 &&
         (iVar5 = FUN_14959fe84(0,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x40),
                                *(undefined8 *)(lVar3 + 0x40),0xffffffff), iVar5 == 0)))) {
    return uVar6;
  }
LAB_1495ae579:
  uVar6 = uVar6 + 0x70;
  goto joined_r0x0001495ae53f;
}



// FUNCTION 1495ae612 FUN_1495ae612 body=141 status=ok
// SIG undefined FUN_1495ae612(void)

longlong FUN_1495ae612(longlong *param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = *param_2;
  iVar4 = iVar1 - param_3;
  lVar2 = FUN_14959b3e4(*param_1,iVar4,param_4 + 1);
  if (lVar2 != 0 && (iVar4 != 0 && (int)param_3 <= iVar1)) {
    param_2 = param_2 + (ulonglong)param_3 * 8 + 2;
    lVar5 = 0;
    do {
      lVar3 = FUN_1495862ab(param_1,*(undefined8 *)param_2);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(*param_1 + 0x10);
      }
      *(longlong *)(lVar2 + 0x20 + lVar5 * 8) = lVar3;
      *(char *)(*(longlong *)(lVar2 + 0x18) + lVar5) = (char)param_2[4];
      param_2 = param_2 + 8;
      lVar5 = lVar5 + 1;
    } while (iVar4 != (int)lVar5);
  }
  return lVar2;
}



// FUNCTION 1495ae69f FUN_1495ae69f body=721 status=ok
// SIG undefined FUN_1495ae69f(void)

void FUN_1495ae69f(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  int local_58;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0x60);
  if (lVar1 == 0 || *(int *)(param_2 + 8) != 0) goto LAB_1495ae6d4;
  iVar8 = (int)param_1[7] + 1;
  *(int *)(param_1 + 7) = iVar8;
  *(int *)(param_2 + 8) = iVar8;
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar4 = FUN_14955a44a(param_1);
  }
  iVar3 = FUN_1495a94a2(*(undefined8 *)(lVar1 + 0x10),&local_44);
  if (iVar3 == 0) {
    FUN_14959afe0(param_1,*(undefined8 *)(lVar1 + 0x10),iVar8);
    local_58 = 0;
    FUN_149584f48(lVar4,0xf,iVar8,0);
    uVar6 = 0x14;
    iVar3 = iVar8;
LAB_1495ae788:
    local_58 = 0;
    FUN_149584f48(lVar4,uVar6,iVar3,param_3);
  }
  else {
    uVar7 = (ulonglong)local_44;
    local_58 = 0;
    FUN_149584f48(lVar4,0x45,uVar7,iVar8);
    if (uVar7 == 0) {
      uVar6 = 0xb;
      iVar3 = 0;
      goto LAB_1495ae788;
    }
    if (-1 < (int)local_44) {
      if (local_44 < 8) {
        if (local_44 != 1) {
          sVar5 = 0x28;
          uVar10 = uVar7;
          do {
            sVar5 = sVar5 + -10;
            uVar9 = uVar10 * 2;
            bVar11 = uVar10 < 4;
            uVar10 = uVar9;
          } while (bVar11);
          goto LAB_1495ae8ba;
        }
        if (*(short *)(param_2 + 2) < 1) goto LAB_1495ae790;
LAB_1495ae850:
        sVar5 = 0;
      }
      else {
        sVar5 = 0x28;
        uVar10 = uVar7;
        if (0xff < local_44) {
          sVar5 = 0x28;
          uVar9 = uVar7;
          do {
            sVar5 = sVar5 + 0x28;
            uVar10 = uVar9 >> 4;
            bVar11 = 0xfff < uVar9;
            uVar9 = uVar10;
          } while (bVar11);
        }
        uVar9 = uVar10;
        if (0xf < uVar10) {
          do {
            sVar5 = sVar5 + 10;
            uVar9 = uVar10 >> 1;
            bVar11 = 0x1f < uVar10;
            uVar10 = uVar9;
          } while (bVar11);
        }
LAB_1495ae8ba:
        if (*(short *)(param_2 + 2) <= (short)(sVar5 + (&DAT_14bd41890)[(uint)uVar9 & 7] + -10))
        goto LAB_1495ae790;
        if (local_44 < 8) {
          if (local_44 == 1) goto LAB_1495ae850;
          sVar5 = 0x28;
          do {
            sVar5 = sVar5 + -10;
            uVar10 = uVar7 * 2;
            bVar11 = uVar7 < 4;
            uVar7 = uVar10;
          } while (bVar11);
        }
        else {
          sVar5 = 0x28;
          if (0xff < local_44) {
            sVar5 = 0x28;
            uVar10 = uVar7;
            do {
              sVar5 = sVar5 + 0x28;
              uVar7 = uVar10 >> 4;
              bVar11 = 0xfff < uVar10;
              uVar10 = uVar7;
            } while (bVar11);
          }
          uVar10 = uVar7;
          if (0xf < uVar7) {
            do {
              sVar5 = sVar5 + 10;
              uVar10 = uVar7 >> 1;
              bVar11 = 0x1f < uVar7;
              uVar7 = uVar10;
            } while (bVar11);
          }
        }
        sVar5 = sVar5 + (&DAT_14bd41890)[(uint)uVar10 & 7] + -10;
      }
      *(short *)(param_2 + 2) = sVar5;
      *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x40;
    }
  }
LAB_1495ae790:
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    lVar2 = param_1[7];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 7) = iVar3;
    *(int *)(param_2 + 0xc) = iVar3;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    FUN_14959afe0(param_1,*(undefined8 *)(lVar1 + 0x18),iVar3);
    local_58 = 0;
    FUN_149584f48(lVar4,0xf,iVar3,0);
    local_58 = iVar3;
    FUN_149584f48(lVar4,0x98,iVar8,(int)lVar2 + 2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
LAB_1495ae6d4:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ae976 FUN_1495ae976 body=845 status=ok
// SIG undefined FUN_1495ae976(void)

void FUN_1495ae976(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  
  lVar2 = *(longlong *)(param_2 + 0x70);
  uVar1 = **(undefined4 **)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 0x20);
  plVar7 = (longlong *)param_1[2];
  if (plVar7 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar7 = (longlong *)FUN_14955a44a(param_1);
  }
  FUN_149584f48(plVar7,100,*(undefined4 *)(lVar2 + 0x58),uVar1,0);
  FUN_149584f48(plVar7,0x62,*(int *)(lVar2 + 0x58) + 1,*(int *)(lVar2 + 0x58),0);
  FUN_149584f48(plVar7,0x62,*(int *)(lVar2 + 0x58) + 2,*(int *)(lVar2 + 0x58),0);
  FUN_149584f48(plVar7,0x62,*(int *)(lVar2 + 0x58) + 3,*(int *)(lVar2 + 0x58),0);
  if (*(int **)(lVar2 + 0x10) != (int *)0x0) {
    iVar10 = **(int **)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x6c) = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = (int)param_1[7] + iVar10;
    FUN_149584f48(plVar7,0x48,0,*(int *)(lVar2 + 0x6c),iVar10 + *(int *)(lVar2 + 0x6c) + -1);
  }
  iVar10 = (int)param_1[7] + 1;
  *(int *)(param_1 + 7) = iVar10;
  *(int *)(lVar2 + 0x80) = iVar10;
  FUN_149584f48(plVar7,0x45,1,iVar10,0);
  lVar5 = lVar2;
  if (*(char *)(lVar2 + 0x24) == '\0') {
    for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x40)) {
      if (((*(byte *)(*(longlong *)(lVar5 + 0x50) + 5) & 0x10) == 0) ||
         (*(char *)(lVar5 + 0x21) == 'Z')) {
        pcVar3 = *(char **)(*(longlong *)(lVar5 + 0x50) + 0x38);
        if ((pcVar3 == "nth_value") || (pcVar3 == "first_value")) {
          *(int *)(lVar5 + 0x68) = (int)param_1[7] + 1;
          iVar10 = *(int *)((longlong)param_1 + 0x34);
          *(int *)((longlong)param_1 + 0x34) = iVar10 + 1;
          *(int *)(lVar5 + 100) = iVar10;
          *(int *)(param_1 + 7) = (int)param_1[7] + 2;
          iVar11 = *(int *)(lVar2 + 0x58);
          iVar10 = *(int *)(lVar5 + 100);
          uVar9 = 0x62;
          goto LAB_1495aeb2f;
        }
        if ((pcVar3 == "lead") || (pcVar3 == "lag")) {
          iVar10 = *(int *)((longlong)param_1 + 0x34);
          *(int *)((longlong)param_1 + 0x34) = iVar10 + 1;
          *(int *)(lVar5 + 100) = iVar10;
          iVar11 = *(int *)(lVar2 + 0x58);
          uVar9 = 0x62;
          goto LAB_1495aeb2f;
        }
      }
      else {
        piVar8 = (int *)FUN_1495ae612(param_1,*(undefined8 *)(*(longlong *)(lVar5 + 0x70) + 0x20),0,
                                      0);
        iVar10 = *(int *)((longlong)param_1 + 0x34);
        *(int *)((longlong)param_1 + 0x34) = iVar10 + 1;
        *(int *)(lVar5 + 100) = iVar10;
        *(int *)(lVar5 + 0x68) = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = (int)param_1[7] + 3;
        if ((piVar8 != (int *)0x0) &&
           (*(char *)(*(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x38) + 1) == 'i')) {
          **(undefined1 **)(piVar8 + 6) = 1;
        }
        FUN_149584f48(plVar7,100,*(undefined4 *)(lVar5 + 100),2,0);
        if (*(char *)(*plVar7 + 0x61) == '\0') {
          lVar4 = plVar7[0x11];
          lVar6 = plVar7[0x12];
          *(undefined1 *)(lVar4 + -0x17 + (longlong)(int)lVar6 * 0x18) = 0xf7;
          *(int **)(lVar4 + -8 + (longlong)(int)lVar6 * 0x18) = piVar8;
        }
        else if (((piVar8 != (int *)0x0) && (*(longlong *)(*plVar7 + 0x2d8) == 0)) &&
                (*piVar8 = *piVar8 + -1, *piVar8 == 0)) {
          FUN_14955d65a(*(undefined8 *)(piVar8 + 4));
        }
        iVar11 = *(int *)(lVar5 + 0x68) + 1;
        uVar9 = 0x45;
        iVar10 = 0;
LAB_1495aeb2f:
        FUN_149584f48(plVar7,uVar9,iVar10,iVar11,0);
      }
    }
  }
  else {
    iVar10 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = iVar10;
    *(int *)(lVar2 + 0x84) = iVar10;
    iVar10 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = iVar10;
    *(int *)(lVar2 + 0x88) = iVar10;
    iVar10 = *(int *)((longlong)param_1 + 0x34);
    *(int *)((longlong)param_1 + 0x34) = iVar10 + 1;
    *(int *)(lVar2 + 100) = iVar10;
    FUN_149584f48(plVar7,0x45,1,*(undefined4 *)(lVar2 + 0x84),0);
    FUN_149584f48(plVar7,0x45,0,*(undefined4 *)(lVar2 + 0x88),0);
    FUN_149584f48(plVar7,0x62,*(undefined4 *)(lVar2 + 100),*(undefined4 *)(lVar2 + 0x58),0);
  }
  return;
}



// FUNCTION 1495aecc3 FUN_1495aecc3 body=5434 status=ok
// SIG undefined FUN_1495aecc3(void)

longlong *
FUN_1495aecc3(longlong *param_1,uint *param_2,longlong *param_3,int *param_4,int *param_5,
             ushort param_6,int param_7)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int iVar18;
  uint *puVar19;
  byte *pbVar20;
  longlong *plVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  char cVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint *puVar29;
  int *piVar30;
  char *pcVar31;
  int *piVar32;
  int iVar33;
  int *piVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong *plVar37;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  longlong *local_140;
  longlong *local_138;
  uint *local_130;
  int *local_128;
  uint *local_120;
  longlong local_118;
  uint local_10c;
  undefined8 *local_108;
  longlong local_100;
  longlong *local_f8;
  ulonglong local_f0;
  uint local_e8;
  uint local_e4;
  longlong local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  int *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar27 = param_1[2];
  lVar35 = *param_1;
  local_a8 = 0;
  uStack_a0 = 0;
  iStack_9c = 0;
  local_b8 = (int *)0x0;
  if ((param_4 != (int *)0x0) && (*param_4 < 0x40)) {
    local_b8 = param_4;
  }
  uVar25 = param_6 & 0x7eff;
  if ((*(byte *)(lVar35 + 0x5c) & 0x10) == 0) {
    uVar25 = (uint)param_6;
  }
  if ((int)*param_2 < 0x41) {
    uVar36 = 1;
    if ((uVar25 & 0x20) == 0) {
      uVar36 = (ulonglong)*param_2;
    }
    iVar33 = (int)uVar36;
    uVar26 = (longlong)(iVar33 * 0x60 + 0x39f) & 0xfffffffffffffff8;
    local_138 = param_3;
    local_128 = local_b8;
    local_120 = param_2;
    plVar11 = (longlong *)FUN_14955d750(lVar35,uVar26 + 0x60);
    plVar14 = local_138;
    if (*(char *)(lVar35 + 0x61) == '\0') {
      local_130 = (uint *)CONCAT44(local_130._4_4_,uVar25);
      *plVar11 = (longlong)param_1;
      plVar11[1] = (longlong)local_120;
      plVar11[2] = (longlong)local_128;
      plVar11[4] = (longlong)local_138;
      plVar11[3] = (longlong)param_5;
      plVar11[5] = -1;
      *(char *)(plVar11 + 8) = (char)uVar36;
      iVar18 = *(int *)((longlong)param_1 + 0x44) + -1;
      *(int *)((longlong)param_1 + 0x44) = iVar18;
      *(int *)(plVar11 + 6) = iVar18;
      *(int *)((longlong)plVar11 + 0x34) = iVar18;
      *(short *)((longlong)plVar11 + 0x3c) = (short)uVar25;
      *(short *)((longlong)plVar11 + 0x3e) = (short)param_7;
      *(undefined4 *)(plVar11 + 7) = *(undefined4 *)((longlong)param_1 + 0xbc);
      *(undefined8 *)((longlong)plVar11 + 0x41) = 0;
      *(undefined8 *)((longlong)plVar11 + 0x49) = 0;
      *(undefined8 *)((longlong)plVar11 + 0x51) = 0;
      *(undefined8 *)((longlong)plVar11 + 0x59) = 0;
      plVar11[0xc] = 0;
      local_f8 = plVar11 + 0x73;
      local_100 = lVar27;
      local_e8 = uVar25 & 0x20;
      memset(local_f8,0,(longlong)iVar33 * 0x60 + 0x60);
      local_d8 = plVar11 + 0xd;
      local_b0 = uVar26 + (longlong)plVar11;
      *(ulonglong *)((longlong)plVar11 + uVar26 + 0x38) = (longlong)plVar11 + uVar26 + 0x48;
      *(undefined2 *)((longlong)plVar11 + uVar26 + 0x2c) = 0;
      *(undefined2 *)((longlong)plVar11 + uVar26 + 0x30) = 3;
      *(undefined4 *)((longlong)plVar11 + uVar26 + 0x28) = 0;
      *(undefined4 *)((longlong)plVar11 + 0x294) = 0;
      plVar11[0xd] = (longlong)plVar11;
      *(undefined1 *)((longlong)plVar11 + 0x79) = 0;
      plVar11[0xe] = 0;
      *(undefined8 *)((longlong)plVar11 + 0x7c) = 0x800000000;
      plVar11[0x11] = (longlong)(plVar11 + 0x12);
      local_140 = plVar11;
      local_c8 = plVar11;
      local_c0 = local_d8;
      FUN_1495b4ca7(local_d8,plVar14,0x2c);
      puVar29 = local_120;
      local_138 = param_1;
      local_118 = lVar35;
      local_f0 = uVar36;
      local_e4 = uVar25;
      if (iVar33 == 0) {
        if (local_128 != (int *)0x0) {
          *(char *)((longlong)local_140 + 0x41) = (char)*local_128;
        }
        if (((uint)local_130 >> 8 & 1) != 0) {
          *(undefined1 *)((longlong)local_140 + 0x43) = 1;
        }
        FUN_1495a08a0(param_1,0);
        puVar19 = local_120;
        plVar14 = local_140;
      }
      else {
        lVar27 = 0;
        puVar19 = local_120;
        plVar14 = local_140;
        do {
          uVar25 = puVar29[lVar27 * 0x1c + 0x13];
          iVar33 = *(int *)((longlong)plVar14 + 0x294);
          *(int *)((longlong)plVar14 + 0x294) = iVar33 + 1;
          *(uint *)((longlong)plVar14 + (longlong)iVar33 * 4 + 0x298) = uVar25;
          if ((((puVar29[lVar27 * 0x1c + 0x12] & 4) != 0) &&
              (piVar32 = *(int **)(puVar29 + lVar27 * 0x1c + 0x1a), piVar32 != (int *)0x0)) &&
             (0 < *piVar32)) {
            uVar36 = 0;
            uVar26 = 0;
            puVar12 = *(undefined8 **)(puVar29 + lVar27 * 0x1c + 10);
            do {
              iVar33 = (int)uVar26;
              if (*(short *)((longlong)puVar12 + 0x46) <= iVar33) {
LAB_1495af101:
                FUN_14955a364(local_138,"too many arguments on %s() - max %d",*puVar12,
                              uVar36 & 0xffffffff);
                puVar19 = local_120;
                plVar14 = local_140;
                break;
              }
              pbVar20 = (byte *)(puVar12[1] + (longlong)iVar33 * 0x20 + 0x1c);
              lVar35 = 0;
              while ((*pbVar20 & 2) == 0) {
                lVar35 = lVar35 + -1;
                pbVar20 = pbVar20 + 0x20;
                if ((longlong)iVar33 - (longlong)(int)*(short *)((longlong)puVar12 + 0x46) == lVar35
                   ) goto LAB_1495af101;
              }
              local_108 = puVar12;
              puVar12 = (undefined8 *)FUN_14955d750(*local_138,0x48);
              plVar11 = local_138;
              puVar19 = local_120;
              plVar14 = local_140;
              if (puVar12 == (undefined8 *)0x0) break;
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[6] = 0;
              puVar12[7] = 0;
              puVar12[4] = 0;
              puVar12[5] = 0;
              puVar12[2] = 0;
              puVar12[3] = 0;
              puVar12[8] = 0;
              *(undefined1 *)puVar12 = 0xa4;
              *(undefined2 *)((longlong)puVar12 + 0x32) = 0xffff;
              *(undefined4 *)(puVar12 + 5) = 1;
              *(uint *)((longlong)puVar12 + 0x2c) = puVar29[lVar27 * 0x1c + 0x13];
              lVar35 = (uVar26 & 0xffffffff) - lVar35;
              *(short *)(puVar12 + 6) = (short)lVar35;
              puVar12[8] = local_108;
              if (*(longlong *)(piVar32 + uVar36 * 8 + 2) == 0) {
                uVar23 = 0;
              }
              else {
                uVar23 = FUN_1495a1c89(*local_138,*(longlong *)(piVar32 + uVar36 * 8 + 2),0,0);
              }
              uVar23 = FUN_14958aad5(plVar11,0xab,uVar23,0);
              uVar23 = FUN_14958aad5(plVar11,0x35,puVar12,uVar23);
              if ((puVar29[lVar27 * 0x1c + 0x11] & 8) != 0) {
                FUN_1495a9261(uVar23,puVar29[lVar27 * 0x1c + 0x13]);
              }
              uVar26 = lVar35 + 1;
              FUN_1495b8fc6(local_d8,uVar23);
              uVar36 = uVar36 + 1;
              puVar19 = local_120;
              plVar14 = local_140;
              puVar12 = local_108;
            } while ((longlong)uVar36 < (longlong)*piVar32);
          }
          lVar27 = lVar27 + 1;
        } while (lVar27 < (int)*puVar19);
      }
      if (0 < *(int *)((longlong)plVar14 + 0x7c)) {
        uVar25 = *(int *)((longlong)plVar14 + 0x7c) + 1;
        do {
          FUN_1495b91b7(puVar19,local_d8);
          uVar25 = uVar25 - 1;
          puVar19 = local_120;
        } while (1 < uVar25);
      }
      lVar27 = local_118;
      plVar11 = local_140;
      plVar14 = local_138;
      if (*(char *)(local_118 + 0x61) == '\0') {
        if (0 < *(int *)((longlong)local_c0 + 0x14)) {
          lVar27 = 0;
          lVar35 = 0;
          plVar14 = local_140;
          do {
            lVar15 = local_c0[4];
            if (((*(byte *)(lVar15 + 0x12 + lVar27) & 2) == 0) &&
               (*(longlong *)(lVar15 + 0x38 + lVar27) == 0)) {
              if ((int)local_f0 != 0) {
                uStack_70 = 0;
                local_98 = 0;
                uStack_80 = 0;
                local_78 = 0x100000000;
                puStack_90 = &LAB_1495bb5e3;
                local_88 = &LAB_14959fa8c;
                if (*(longlong *)(lVar15 + lVar27) != 0) {
                  FUN_14959fa98(&local_98);
                  puVar19 = local_120;
                  plVar14 = local_140;
                  if (local_78._4_2_ == 0) goto LAB_1495af209;
                }
              }
              FUN_14959ec19(local_138,*(undefined8 *)(lVar15 + lVar27),
                            *(undefined4 *)((longlong)plVar14 + 0x34),0x10);
              pbVar20 = (byte *)(lVar15 + 0x12 + lVar27);
              *pbVar20 = *pbVar20 | 4;
              puVar19 = local_120;
              plVar14 = local_140;
            }
LAB_1495af209:
            lVar35 = lVar35 + 1;
            lVar27 = lVar27 + 0x40;
          } while (lVar35 < *(int *)((longlong)local_c0 + 0x14));
        }
        if (((uint)local_130 >> 8 & 1) != 0) {
          if (*puVar19 == 1) {
            uVar25 = puVar19[0x13];
            if (0 < (longlong)*param_5) {
              lVar27 = 0;
              do {
                for (pcVar31 = *(char **)(param_5 + lVar27 * 8 + 2); pcVar31 != (char *)0x0;
                    pcVar31 = *(char **)pcVar31) {
                  if ((*(uint *)(pcVar31 + 4) & 0x41000) == 0) goto LAB_1495af436;
                  if ((*(uint *)(pcVar31 + 4) >> 0x12 & 1) == 0) {
                    pcVar31 = pcVar31 + 0x10;
                  }
                  else {
                    pcVar31 = (char *)(*(longlong *)(pcVar31 + 0x20) + 8);
                  }
                }
                pcVar31 = (char *)0x0;
LAB_1495af436:
                if (((*pcVar31 == -0x5c) && (*(uint *)(pcVar31 + 0x2c) == uVar25)) &&
                   (*(short *)(pcVar31 + 0x30) < 0)) goto LAB_1495af616;
                lVar27 = lVar27 + 1;
              } while (lVar27 != *param_5);
            }
            for (puVar12 = *(undefined8 **)(*(longlong *)(puVar19 + 10) + 0x10);
                puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)puVar12[5]) {
              if (*(char *)((longlong)puVar12 + 0x62) != '\0') {
                if (*(short *)((longlong)puVar12 + 0x5e) == 0) {
                  uVar36 = 0;
                }
                else {
                  uVar36 = 0;
                  do {
                    local_158 = (longlong *)CONCAT44(local_158._4_4_,2);
                    local_150 = puVar12;
                    lVar27 = FUN_1495bb5fc(local_d8,uVar25,uVar36 & 0xffffffff,0xffffffffffffffff);
                    if (lVar27 == 0) {
                      iVar33 = *param_5;
                      if (0 < iVar33) {
                        lVar27 = *(longlong *)(puVar12[8] + uVar36 * 8);
                        lVar35 = 0;
LAB_1495af507:
                        for (pcVar31 = *(char **)(param_5 + lVar35 * 8 + 2); pcVar31 != (char *)0x0;
                            pcVar31 = *(char **)pcVar31) {
                          if ((*(uint *)(pcVar31 + 4) & 0x41000) == 0) goto LAB_1495af546;
                          if ((*(uint *)(pcVar31 + 4) >> 0x12 & 1) == 0) {
                            pcVar31 = pcVar31 + 0x10;
                          }
                          else {
                            pcVar31 = (char *)(*(longlong *)(pcVar31 + 0x20) + 8);
                          }
                        }
                        pcVar31 = (char *)0x0;
LAB_1495af546:
                        if (((*pcVar31 == -0x5c) &&
                            (*(short *)(pcVar31 + 0x30) == *(short *)(puVar12[1] + uVar36 * 2))) &&
                           (*(uint *)(pcVar31 + 0x2c) == uVar25)) {
                          plVar14 = (longlong *)FUN_1495862ab();
                          if (plVar14 == (longlong *)0x0) {
                            plVar14 = *(longlong **)(*local_138 + 0x10);
                          }
                          lVar15 = 0;
                          do {
                            bVar8 = *(byte *)(*plVar14 + lVar15);
                            bVar2 = *(byte *)(lVar27 + lVar15);
                            if (bVar8 == bVar2) {
                              if ((ulonglong)bVar8 == 0) {
                                sVar3 = *(short *)(puVar12[1] + uVar36 * 2);
                                if ((longlong)sVar3 < 0) {
                                  cVar24 = sVar3 == -1;
                                }
                                else {
                                  cVar24 = *(char *)(*(longlong *)(puVar12[3] + 8) + 0x18 +
                                                    (longlong)sVar3 * 0x20);
                                }
                                if (cVar24 == '\0') goto LAB_1495af5b1;
                                goto LAB_1495af4de;
                              }
                            }
                            else if ((&DAT_14bd3ff30)[bVar8] != (&DAT_14bd3ff30)[bVar2])
                            goto LAB_1495af5a9;
                            lVar15 = lVar15 + 1;
                          } while( true );
                        }
                        goto LAB_1495af562;
                      }
                      break;
                    }
LAB_1495af4de:
                    uVar36 = uVar36 + 1;
                  } while (uVar36 < *(ushort *)((longlong)puVar12 + 0x5e));
                }
LAB_1495af5b1:
                if ((uint)uVar36 == (uint)*(ushort *)((longlong)puVar12 + 0x5e)) goto LAB_1495af616;
              }
            }
          }
          if (local_128 == (int *)0x0) {
            *(byte *)((longlong)local_140 + 0x3c) = *(byte *)((longlong)local_140 + 0x3c) | 0x80;
            local_140[2] = (longlong)param_5;
          }
        }
        goto LAB_1495af2c7;
      }
      goto LAB_1495af1a1;
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_14955d65a(lVar35,plVar11);
    }
  }
  else {
    FUN_14955a364(param_1,"at most %d tables in a join",0x40);
  }
LAB_1495aed50:
  plVar11 = (longlong *)0x0;
LAB_1495aed53:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar11;
LAB_1495af5a9:
  iVar33 = *param_5;
LAB_1495af562:
  lVar35 = lVar35 + 1;
  if (iVar33 <= lVar35) goto LAB_1495af5b1;
  goto LAB_1495af507;
LAB_1495af616:
  *(undefined1 *)((longlong)local_140 + 0x43) = 1;
LAB_1495af2c7:
  lVar27 = local_b0;
  plVar11 = local_c8;
  if (((int)local_f0 == 1) && ((*(byte *)((longlong)local_c8 + 0x3c) & 0x20) == 0)) {
    lVar35 = local_c8[1];
    lVar15 = *(longlong *)(lVar35 + 0x28);
    if ((*(int *)(lVar15 + 0x54) != 0) || ((*(byte *)(lVar35 + 0x48) & 2) != 0)) goto LAB_1495af6ba;
    uVar10 = *(undefined4 *)(lVar35 + 0x4c);
    plVar14 = local_c8 + 0xd;
    *(undefined4 *)(local_b0 + 0x28) = 0;
    *(undefined2 *)(local_b0 + 0x2e) = 0;
    local_150 = (undefined8 *)0x0;
    local_158 = (longlong *)CONCAT44(local_158._4_4_,0x82);
    lVar13 = FUN_1495bb5fc(plVar14,uVar10,0xffffffff,0);
    if (lVar13 == 0) {
      for (puVar12 = *(undefined8 **)(lVar15 + 0x10); puVar12 != (undefined8 *)0x0;
          puVar12 = (undefined8 *)puVar12[5]) {
        if (((*(char *)((longlong)puVar12 + 0x62) != '\0') && (puVar12[9] == 0)) &&
           (*(ushort *)((longlong)puVar12 + 0x5e) < 4)) {
          if (*(ushort *)((longlong)puVar12 + 0x5e) == 0) {
            uVar25 = 0;
            uVar36 = 0;
          }
          else {
            bVar8 = *(byte *)((longlong)puVar12 + 100);
            uVar36 = 0;
            do {
              local_158 = (longlong *)(CONCAT44(local_158._4_4_,(uint)((bVar8 & 8) >> 3) << 7) | 2);
              local_150 = puVar12;
              lVar15 = FUN_1495bb5fc(plVar14,uVar10,uVar36 & 0xffffffff,0);
              if (lVar15 == 0) {
                uVar25 = (uint)*(ushort *)((longlong)puVar12 + 0x5e);
                break;
              }
              *(longlong *)(*(longlong *)(lVar27 + 0x38) + uVar36 * 8) = lVar15;
              uVar36 = uVar36 + 1;
              uVar25 = (uint)*(ushort *)((longlong)puVar12 + 0x5e);
            } while (uVar36 < *(ushort *)((longlong)puVar12 + 0x5e));
          }
          if ((uint)uVar36 == uVar25) {
            *(undefined4 *)(lVar27 + 0x28) = 0x1201;
            if (((*(byte *)((longlong)puVar12 + 100) & 0x20) != 0) ||
               ((*(ulonglong *)(lVar35 + 0x60) & puVar12[0xd]) == 0)) {
              *(undefined4 *)(lVar27 + 0x28) = 0x1241;
            }
            *(short *)(lVar27 + 0x2c) = (short)uVar36;
            *(short *)(lVar27 + 0x18) = (short)uVar36;
            *(undefined8 **)(lVar27 + 0x20) = puVar12;
            uVar9 = 0x27;
            goto LAB_1495af36d;
          }
        }
      }
    }
    else {
      *(undefined4 *)(lVar27 + 0x28) = 0x1101;
      **(longlong **)(lVar27 + 0x38) = lVar13;
      *(undefined2 *)(lVar27 + 0x2c) = 1;
      *(undefined2 *)(lVar27 + 0x18) = 1;
      uVar9 = 0x21;
LAB_1495af36d:
      *(undefined2 *)(lVar27 + 0x14) = uVar9;
    }
    if (*(int *)(lVar27 + 0x28) == 0) goto LAB_1495af6ba;
    *(undefined2 *)(lVar27 + 0x16) = 1;
    plVar11[0x7d] = lVar27;
    *(undefined8 *)(lVar27 + 8) = 1;
    *(undefined4 *)((longlong)plVar11 + 0x39c) = uVar10;
    *(undefined2 *)(plVar11 + 9) = 1;
    if ((undefined1 *)plVar11[2] != (undefined1 *)0x0) {
      *(undefined1 *)((longlong)plVar11 + 0x41) = *(undefined1 *)plVar11[2];
    }
    lVar27 = local_118;
    plVar14 = local_138;
    if ((*(byte *)((longlong)plVar11 + 0x3d) & 1) != 0) {
      *(undefined1 *)((longlong)plVar11 + 0x43) = 1;
    }
LAB_1495af3c8:
    if (local_140[2] == 0) {
LAB_1495af742:
      if ((*(byte *)(lVar27 + 0x31) & 0x10) != 0) {
        local_140[0xc] = -1;
      }
    }
    plVar11 = local_140;
    if (((int)plVar14[6] == 0) && (*(char *)(lVar27 + 0x61) == '\0')) {
      local_108 = (undefined8 *)0xffffffffffffffff;
      if ((param_5 == (int *)0x0) ||
         ((*(byte *)(local_140 + 8) < 2 || ((*(byte *)(local_118 + 0x5d) & 1) != 0)))) {
LAB_1495afb8d:
        uVar25 = (uint)local_130;
      }
      else {
        plVar14 = local_140 + 0x52;
        iVar33 = *param_5;
        if (iVar33 < 1) {
          uVar36 = 0;
        }
        else {
          plVar11 = (longlong *)(param_5 + 2);
          lVar27 = 0;
          uVar36 = 0;
          do {
            if (*plVar11 == 0) {
              uVar26 = 0;
            }
            else {
              uVar26 = FUN_1495bb052(plVar14);
              iVar33 = *param_5;
            }
            uVar36 = uVar36 | uVar26;
            lVar27 = lVar27 + 1;
            plVar11 = plVar11 + 4;
          } while (lVar27 < iVar33);
        }
        piVar32 = local_b8;
        if (local_b8 != (int *)0x0) {
          iVar33 = *local_b8;
          if (iVar33 < 1) {
            uVar26 = 0;
          }
          else {
            plVar11 = (longlong *)(local_b8 + 2);
            lVar27 = 0;
            uVar26 = 0;
            do {
              if (*plVar11 == 0) {
                uVar16 = 0;
              }
              else {
                uVar16 = FUN_1495bb052(plVar14);
                iVar33 = *piVar32;
              }
              uVar26 = uVar26 | uVar16;
              lVar27 = lVar27 + 1;
              plVar11 = plVar11 + 4;
            } while (lVar27 < iVar33);
          }
          uVar36 = uVar36 | uVar26;
        }
        uVar26 = (ulonglong)*(byte *)(local_140 + 8);
        if (uVar26 < 2) goto LAB_1495afb8d;
        local_108 = (undefined8 *)0xffffffffffffffff;
        uVar16 = uVar26;
        uVar25 = (uint)local_130;
        do {
          uVar28 = uVar16 - 1;
          lVar27 = local_f8[uVar28 * 0xc + 10];
          lVar35 = (ulonglong)*(byte *)(lVar27 + 0x10) * 0x70;
          if (((*(byte *)(local_140[1] + 0x44 + lVar35) & 8) != 0) &&
             ((((uVar25 >> 8 & 1) != 0 || ((*(byte *)(lVar27 + 0x29) & 0x10) != 0)) &&
              (uVar5 = *(ulonglong *)(lVar27 + 8), (uVar5 & uVar36) == 0)))) {
            if (0 < (longlong)*(int *)((longlong)local_c0 + 0x14)) {
              plVar14 = (longlong *)local_c0[4];
              plVar37 = plVar14 + (longlong)*(int *)((longlong)local_c0 + 0x14) * 8;
              plVar11 = plVar14;
              do {
                if (((plVar11[7] & uVar5) != 0) &&
                   (((*(byte *)(*plVar11 + 4) & 1) == 0 ||
                    (*(int *)(lVar35 + local_140[1] + 0x4c) != (int)*(short *)(*plVar11 + 0x34)))))
                goto LAB_1495afb77;
                plVar11 = plVar11 + 8;
              } while (plVar11 < plVar37);
              do {
                if ((plVar14[7] & *(ulonglong *)(lVar27 + 8)) != 0) {
                  *(byte *)((longlong)plVar14 + 0x12) = *(byte *)((longlong)plVar14 + 0x12) | 4;
                }
                plVar14 = plVar14 + 8;
              } while (plVar14 < plVar37);
              uVar26 = (ulonglong)*(byte *)(local_140 + 8);
            }
            cVar24 = (char)uVar26;
            if (uVar26 != uVar16) {
              memmove(local_f8 + uVar28 * 0xc,local_f8 + uVar16 * 0xc,
                      (longlong)(((ulonglong)(uint)((int)uVar26 - (int)uVar16) << 0x25) * 3) >> 0x20
                     );
              cVar24 = (char)local_140[8];
            }
            local_108 = (undefined8 *)((ulonglong)local_108 & ~uVar5);
            uVar26 = (ulonglong)(byte)(cVar24 - 1U);
            *(byte *)(local_140 + 8) = cVar24 - 1U;
            local_f0 = (ulonglong)((int)local_f0 - 1);
LAB_1495afb77:
            uVar25 = (uint)local_130;
          }
          bVar7 = 2 < (longlong)uVar16;
          uVar16 = uVar28;
        } while (bVar7);
      }
      *(int *)(*local_140 + 0xbc) = *(int *)(*local_140 + 0xbc) + (int)(short)local_140[9];
      if ((uVar25 & 4) == 0) {
LAB_1495afbaa:
        local_10c = 0;
      }
      else {
        uVar25 = *(uint *)(local_140[0x7d] + 0x28);
        uVar22 = 1;
        if (((uVar25 >> 0xc & 1) == 0) &&
           (((((ulonglong)local_130 & 8) == 0 ||
             (*(int *)(*(longlong *)(local_120 + 10) + 0x54) != 0)) ||
            ((uVar22 = 2, ((ulonglong)local_130 & 0x10) == 0 && ((uVar25 & 0x2000) != 0))))))
        goto LAB_1495afbaa;
        *(undefined1 *)((longlong)local_140 + 0x42) = uVar22;
        local_10c = 0;
        if (((uVar25 & 0x40) != 0) &&
           ((*(uint *)(*(longlong *)(local_120 + 10) + 0x40) & 0x80) == 0)) {
          local_10c = local_e4 & 8;
          *(uint *)(local_140[0x7d] + 0x28) = uVar25 & 0xffffffbf;
        }
      }
      plVar14 = local_138;
      lVar27 = local_118;
      plVar11 = local_140;
      if ((int)local_f0 < 1) {
        *(undefined4 *)((longlong)local_140 + 0x4c) = *(undefined4 *)(local_100 + 0x90);
        if (*(char *)(local_118 + 0x61) == '\0') goto LAB_1495aed53;
      }
      else {
        local_130 = local_120 + 2;
        iVar33 = 0;
        lVar35 = local_100;
        puVar29 = local_130;
        plVar37 = local_f8;
        do {
          lVar15 = local_100;
          plVar17 = local_138;
          uVar36 = (ulonglong)*(byte *)((longlong)plVar37 + 0x34);
          puVar12 = *(undefined8 **)(puVar29 + uVar36 * 0x1c + 8);
          if (puVar12[0xe] == 0) {
            uVar25 = 0xfff0bdc0;
          }
          else {
            uVar25 = 0xffffffff;
            plVar21 = (longlong *)(*(longlong *)(lVar27 + 0x20) + 0x18);
            do {
              uVar25 = uVar25 + 1;
              lVar13 = *plVar21;
              plVar21 = plVar21 + 4;
            } while (lVar13 != puVar12[0xe]);
          }
          lVar13 = plVar37[10];
          puVar19 = puVar29;
          if (((*(byte *)(puVar12 + 8) & 2) == 0) && (puVar12[3] == 0)) {
            if ((*(uint *)(lVar13 + 0x28) >> 10 & 1) == 0) {
              if (*(int *)((longlong)puVar12 + 0x54) == 0) {
                local_128 = (int *)CONCAT44(local_128._4_4_,iVar33);
                if ((*(uint *)(lVar13 + 0x28) & 0x40) == 0 && local_e8 == 0) {
                  uVar4 = puVar29[uVar36 * 0x1c + 0x11];
                  uVar10 = 0x60;
                  if (*(char *)((longlong)local_140 + 0x42) != '\0') {
                    *(uint *)(local_140 + 5) = uVar4;
                    uVar10 = 0x61;
                  }
                  local_158 = (longlong *)CONCAT44(local_158._4_4_,uVar10);
                  local_e0 = lVar13;
                  FUN_14959b02c(local_138,uVar4,uVar25,puVar12);
                  if (((*(char *)((longlong)local_140 + 0x42) == '\0') &&
                      (*(short *)((longlong)puVar12 + 0x46) < 0x40)) &&
                     ((*(byte *)(puVar12 + 8) & 0xe0) == 0)) {
                    uVar26 = *(ulonglong *)(puVar29 + uVar36 * 0x1c + 0x16);
                    uVar16 = 0x3f;
                    if (uVar26 != 0) {
                      for (; uVar26 >> uVar16 == 0; uVar16 = uVar16 - 1) {
                      }
                    }
                    lVar27 = (uVar16 ^ 0xffffffffffffffc0) + 0x41;
                    if (uVar26 == 0) {
                      lVar27 = 0;
                    }
                    FUN_14955a5b6(local_100,0xffffffff,lVar27,&DAT_fffffffd);
                  }
                  lVar27 = local_118;
                  lVar35 = local_100;
                  puVar19 = local_130;
                  lVar13 = local_e0;
                  plVar11 = local_140;
                  plVar14 = local_138;
                  iVar33 = (int)local_128;
                  if (0 < (longlong)*(int *)(local_100 + 0x90)) {
                    *(short *)(*(longlong *)(local_100 + 0x88) + -0x16 +
                              (longlong)*(int *)(local_100 + 0x90) * 0x18) = (short)local_10c;
                  }
                }
                else {
                  local_158 = (longlong *)*puVar12;
                  local_e0 = lVar13;
                  FUN_14959b139(local_138,uVar25,*(undefined4 *)(puVar12 + 7),0);
                  lVar27 = local_118;
                  lVar35 = local_100;
                  puVar19 = local_130;
                  lVar13 = local_e0;
                  plVar11 = local_140;
                  plVar14 = plVar17;
                  iVar33 = (int)local_128;
                }
              }
            }
            else {
              local_128 = (int *)CONCAT44(local_128._4_4_,iVar33);
              for (plVar14 = (longlong *)puVar12[0xc]; plVar14 != (longlong *)0x0;
                  plVar14 = (longlong *)plVar14[5]) {
                if (*plVar14 == local_118) goto LAB_1495afe49;
              }
              plVar14 = (longlong *)0x0;
LAB_1495afe49:
              local_158 = (longlong *)((ulonglong)local_158._4_4_ << 0x20);
              local_e0 = lVar13;
              local_d0 = puVar12;
              uVar10 = FUN_149584f48(local_100,0xa5,puVar29[uVar36 * 0x1c + 0x11],0);
              FUN_14955a5b6(lVar15,uVar10,plVar14,0xfffffff4);
              lVar27 = local_118;
              lVar35 = lVar15;
              puVar19 = local_130;
              lVar13 = local_e0;
              plVar11 = local_140;
              puVar12 = local_d0;
              plVar14 = local_138;
              iVar33 = (int)local_128;
            }
          }
          lVar15 = local_100;
          if ((*(byte *)(lVar13 + 0x29) & 2) != 0) {
            lVar6 = *(longlong *)(lVar13 + 0x20);
            if ((((*(byte *)(puVar12 + 8) & 0x80) == 0) || (local_e8 == 0)) ||
               ((*(uint *)(lVar6 + 100) & 3) != 2)) {
              local_128 = (int *)CONCAT44(local_128._4_4_,iVar33);
              iVar33 = param_7;
              if (*(char *)((longlong)plVar11 + 0x42) == '\0') {
                if ((param_7 == 0) || (uVar23 = 0x5f, local_e8 == 0)) {
                  iVar33 = *(int *)((longlong)plVar14 + 0x34);
                  *(int *)((longlong)plVar14 + 0x34) = iVar33 + 1;
                  uVar23 = 0x60;
                }
              }
              else {
                for (lVar27 = *(longlong *)(*(longlong *)(puVar29 + uVar36 * 0x1c + 8) + 0x10);
                    (lVar27 != 0 && (lVar27 != lVar6)); lVar27 = *(longlong *)(lVar27 + 0x28)) {
                  iVar33 = iVar33 + 1;
                }
                *(int *)((longlong)local_140 + 0x2c) = iVar33;
                uVar23 = 0x61;
                plVar14 = local_138;
              }
              *(int *)(plVar37 + 1) = iVar33;
              local_158 = (longlong *)CONCAT44(local_158._4_4_,uVar25);
              FUN_149584f48(local_100,uVar23,iVar33,*(undefined4 *)(lVar6 + 0x58));
              FUN_14959b2a7(plVar14,lVar6);
              lVar27 = local_118;
              lVar35 = lVar15;
              puVar19 = local_130;
              plVar11 = local_140;
              iVar33 = (int)local_128;
              if (((((*(uint *)(lVar13 + 0x28) & 0x88002) == 0 &&
                     (*(uint *)(lVar13 + 0x28) & 0xf) != 0) &&
                   ((*(byte *)((longlong)local_140 + 0x3c) & 1) == 0)) &&
                  (*(char *)((longlong)local_140 + 0x43) != '\x02')) &&
                 (0 < (longlong)*(int *)(lVar15 + 0x90))) {
                *(undefined2 *)
                 (*(longlong *)(lVar15 + 0x88) + -0x16 + (longlong)*(int *)(lVar15 + 0x90) * 0x18) =
                     2;
              }
            }
            else {
              *(undefined4 *)(plVar37 + 1) = *(undefined4 *)((longlong)plVar37 + 4);
            }
          }
          if (-1 < (int)uVar25) {
            plVar17 = (longlong *)plVar14[0x14];
            if ((longlong *)plVar14[0x14] == (longlong *)0x0) {
              plVar17 = plVar14;
            }
            if (((*(uint *)((longlong)plVar17 + 0x74) >> (uVar25 & 0x1f) & 1) == 0) &&
               (*(uint *)((longlong)plVar17 + 0x74) =
                     *(uint *)((longlong)plVar17 + 0x74) | 1 << ((byte)uVar25 & 0x1f), uVar25 == 1))
            {
              FUN_14955dea7(plVar17);
              plVar11 = local_140;
            }
          }
          plVar17 = local_138;
          iVar33 = iVar33 + 1;
          plVar37 = plVar37 + 0xc;
          puVar29 = puVar19;
        } while (iVar33 != (int)local_f0);
        *(undefined4 *)((longlong)plVar11 + 0x4c) = *(undefined4 *)(lVar35 + 0x90);
        if (*(char *)(lVar27 + 0x61) == '\0') {
          uVar36 = local_f0 & 0xffffffff;
          uVar26 = 0;
          do {
            lVar27 = local_118;
            if ((*(byte *)(local_f8[10] + 0x29) & 0x40) != 0) {
              local_158 = local_f8;
              FUN_1495b5707(plVar17,local_d8,
                            local_130 + (ulonglong)*(byte *)((longlong)local_f8 + 0x34) * 0x1c,
                            local_108);
              plVar11 = local_140;
              plVar14 = plVar17;
              if (*(char *)(lVar27 + 0x61) != '\0') goto LAB_1495af1a1;
            }
            plVar11 = local_f8;
            plVar14 = local_140;
            FUN_1495b60cb(plVar17,local_120,local_f8,local_e4);
            *(undefined4 *)(plVar11 + 4) = *(undefined4 *)(local_100 + 0x90);
            local_150 = local_108;
            local_158 = plVar11;
            local_108 = (undefined8 *)FUN_1495b658e(plVar17,local_100,plVar14,uVar26 & 0xffffffff);
            *(int *)(plVar14 + 6) = (int)plVar11[3];
            uVar26 = uVar26 + 1;
            local_f8 = plVar11 + 0xc;
            plVar11 = local_140;
          } while (uVar36 != uVar26);
          goto LAB_1495aed53;
        }
      }
    }
  }
  else {
LAB_1495af6ba:
    lVar35 = local_b0;
    plVar14 = local_c8;
    lVar27 = local_c8[1];
    bVar8 = *(byte *)(local_c8 + 8);
    local_108 = *(undefined8 **)*local_c8;
    *(longlong *)(local_b0 + 0x38) = local_b0 + 0x48;
    *(undefined2 *)(local_b0 + 0x2c) = 0;
    *(undefined2 *)(local_b0 + 0x30) = 3;
    *(undefined4 *)(local_b0 + 0x28) = 0;
    iStack_9c = 20000;
    if ((ulonglong)bVar8 != 0) {
      piVar34 = (int *)(lVar27 + (ulonglong)bVar8 * 0x70 + 8);
      piVar32 = (int *)(lVar27 + 8);
      uVar36 = 0;
      uVar26 = 0;
      cVar24 = '\0';
      bVar8 = 0;
      do {
        *(char *)(lVar35 + 0x10) = cVar24;
        iStack_9c = iStack_9c + 1000;
        if (0 < (longlong)*(int *)((longlong)plVar14 + 0x294)) {
          lVar27 = 0;
          do {
            if (*(int *)((longlong)plVar14 + lVar27 * 4 + 0x298) == piVar32[0x11]) {
              lVar27 = 1L << ((byte)lVar27 & 0x3f);
              goto LAB_1495af845;
            }
            lVar27 = lVar27 + 1;
          } while (*(int *)((longlong)plVar14 + 0x294) != lVar27);
        }
        lVar27 = 0;
LAB_1495af845:
        *(longlong *)(lVar35 + 8) = lVar27;
        bVar2 = *(byte *)(piVar32 + 0xf);
        if (((bVar8 | bVar2) & 10) != 0) {
          uVar36 = uVar26;
        }
        local_128 = piVar32;
        if (*(int *)(*(longlong *)(piVar32 + 8) + 0x54) == 0) {
          iVar33 = FUN_1495bc09d();
        }
        else {
          if (piVar32 + 0x1c < piVar34) {
            uVar16 = 0;
            piVar30 = piVar32 + 0x1c;
            do {
              if ((uVar16 == 0) && ((*(byte *)(piVar32 + 0x2b) & 10) == 0)) {
                uVar16 = 0;
              }
              else {
                if (0 < (longlong)*(int *)((longlong)plVar14 + 0x294)) {
                  lVar27 = 0;
                  do {
                    if (*(int *)((longlong)plVar14 + lVar27 * 4 + 0x298) == piVar32[0x2d]) {
                      uVar28 = 1L << ((byte)lVar27 & 0x3f);
                      goto LAB_1495af8be;
                    }
                    lVar27 = lVar27 + 1;
                  } while (*(int *)((longlong)plVar14 + 0x294) != lVar27);
                }
                uVar28 = 0;
LAB_1495af8be:
                uVar16 = uVar28 | uVar16;
              }
              piVar1 = piVar30 + 0x1c;
              piVar32 = piVar30;
              piVar30 = piVar1;
            } while (piVar1 < piVar34);
          }
          iVar33 = FUN_1495bbacb();
        }
        if (iVar33 == 0) {
          if (*(char *)((longlong)local_c0 + 0x11) != '\0') {
            iVar33 = FUN_1495bc8d1(&local_c8,uVar36);
            goto LAB_1495af942;
          }
          uVar26 = uVar26 | *(ulonglong *)(lVar35 + 8);
LAB_1495af957:
          if (*(char *)((longlong)local_108 + 0x61) != '\0') break;
        }
        else {
LAB_1495af942:
          uVar26 = uVar26 | *(ulonglong *)(lVar35 + 8);
          if (iVar33 != 0x65) {
            if (iVar33 == 0) goto LAB_1495af957;
            FUN_1495bcd72(local_108,lVar35);
            lVar27 = local_118;
            plVar11 = local_140;
            plVar14 = local_138;
            goto LAB_1495af1a1;
          }
          FUN_14955599e(0x1c,"abbreviated query algorithm search");
        }
        cVar24 = cVar24 + '\x01';
        piVar32 = local_128 + 0x1c;
        bVar8 = bVar2;
      } while (piVar32 < piVar34);
    }
    FUN_1495bcd72(local_108,lVar35);
    FUN_1495b4d1b(local_140,0);
    lVar27 = local_118;
    plVar14 = local_138;
    plVar11 = local_140;
    if (*(char *)(local_118 + 0x61) == '\0') {
      if (local_140[2] == 0) goto LAB_1495af742;
      FUN_1495b4d1b(local_140,(int)local_140[9] + 1);
      plVar11 = local_140;
      if (*(char *)(lVar27 + 0x61) == '\0') goto LAB_1495af3c8;
    }
  }
LAB_1495af1a1:
  if (plVar11 != (longlong *)0x0) {
    *(int *)((longlong)plVar14 + 0xbc) = (int)plVar11[7];
    FUN_1495b8f2b(lVar27,plVar11);
  }
  goto LAB_1495aed50;
}



// FUNCTION 1495b01fe FUN_1495b01fe body=4446 status=ok
// SIG undefined FUN_1495b01fe(void)

void FUN_1495b01fe(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  short sVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  longlong *local_e8;
  uint local_e0;
  int local_dc;
  ulonglong local_d8;
  int *local_d0;
  longlong local_c8;
  int local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  undefined8 local_a0;
  ulonglong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar17 = *(longlong *)(param_2 + 0x70);
  local_d0 = *(int **)(lVar17 + 0x18);
  plVar8 = (longlong *)param_1[2];
  local_a0 = param_3;
  if (plVar8 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar8 = (longlong *)FUN_14955a44a(param_1);
  }
  uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0x4c);
  sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x28) + 0x46);
  iVar18 = (int)sVar1;
  local_98 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
  local_bc = *(uint *)((longlong)param_1 + 0x44) - 1;
  *(uint *)((longlong)param_1 + 0x44) = local_bc;
  local_68 = 0;
  local_70 = param_5;
  local_e0 = *(uint *)(lVar17 + 0x58);
  local_d8 = (ulonglong)local_e0;
  local_58 = (ulonglong)local_e0;
  local_a4 = local_e0 + 2;
  uStack_60 = (ulonglong)local_a4;
  local_e0 = local_e0 + 3;
  uStack_50 = (ulonglong)local_e0;
  local_88 = param_1;
  local_80 = lVar17;
  local_78 = plVar8;
  local_6c = param_4;
  if (*(char *)(lVar17 + 0x21) == 'Z') {
    lVar10 = lVar17;
    if (*(int *)(lVar17 + 0x84) == 0) {
      for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x40)) {
        pcVar2 = *(char **)(*(longlong *)(lVar10 + 0x50) + 0x38);
        if ((((pcVar2 == "lag") || (pcVar2 == "lead")) || (pcVar2 == "nth_value")) ||
           (pcVar2 == "first_value")) goto LAB_1495b036e;
      }
      uVar11 = 1;
      if (*(char *)(lVar17 + 0x22) != 'X') goto LAB_1495b0367;
      if (*(char *)(lVar17 + 0x20) != 'Y') {
        iVar7 = FUN_1495c05fe(param_1,*(undefined8 *)(lVar17 + 0x30));
        uVar11 = 3;
        goto LAB_1495b032b;
      }
    }
  }
  else {
    uVar11 = 2;
    if (*(char *)(lVar17 + 0x21) == 'V') {
      if (*(char *)(lVar17 + 0x20) != 'Y') {
        iVar7 = FUN_1495c05fe(param_1,*(undefined8 *)(lVar17 + 0x28));
        uVar11 = 1;
LAB_1495b032b:
        if (iVar7 != 0) goto LAB_1495b0367;
      }
    }
    else {
LAB_1495b0367:
      local_68 = CONCAT44(uVar11,(undefined4)local_68);
    }
  }
LAB_1495b036e:
  iVar7 = (int)param_1[7];
  iVar16 = iVar7 + iVar18 + 2;
  *(int *)(param_1 + 7) = iVar16;
  if ((*(char *)(lVar17 + 0x21) == 'X') ||
     (local_f8 = 0, iVar12 = iVar16, *(char *)(lVar17 + 0x21) == 'V')) {
    iVar12 = iVar7 + iVar18 + 3;
    *(int *)(param_1 + 7) = iVar12;
    local_f8 = iVar12;
  }
  if ((*(char *)(lVar17 + 0x22) == 'X') || (*(char *)(lVar17 + 0x22) == 'V')) {
    iVar12 = iVar12 + 1;
    *(int *)(param_1 + 7) = iVar12;
    local_f0 = iVar12;
  }
  else {
    local_f0 = 0;
  }
  iVar22 = iVar7 + 1;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_dc = 0;
  local_c0 = 0;
  if (*(char *)(lVar17 + 0x20) != 'L') {
    iVar14 = 0;
    if (local_d0 != (int *)0x0) {
      iVar14 = *local_d0;
    }
    local_c0 = *(int *)(lVar17 + 0x78) + iVar22;
    if (*(int **)(lVar17 + 0x10) != (int *)0x0) {
      local_c0 = local_c0 + **(int **)(lVar17 + 0x10);
    }
    local_dc = iVar12 + 1;
    local_b0 = iVar14 + iVar12 + 1;
    uStack_60 = CONCAT44(local_b0,(undefined4)uStack_60);
    local_ac = iVar14 + iVar14 + iVar12 + 1;
    iVar12 = iVar14 + iVar12 + iVar14;
    local_58 = CONCAT44(local_ac,(undefined4)local_58);
    local_a8 = iVar14 + iVar12 + 1;
    uStack_50 = CONCAT44(local_a8,(undefined4)uStack_50);
    *(int *)(param_1 + 7) = iVar14 * 2 + iVar12;
  }
  iVar7 = iVar7 + iVar18 + 1;
  local_e8 = param_1;
  local_c8 = lVar17;
  if (0 < sVar1) {
    iVar12 = 0;
    do {
      local_108 = iVar22 + iVar12;
      FUN_149584f48(plVar8,0x59,uVar20,iVar12);
      iVar12 = iVar12 + 1;
    } while (iVar18 != iVar12);
  }
  iVar12 = (int)local_d8 + 1;
  local_108 = iVar7;
  FUN_149584f48(plVar8,0x5b,iVar22,iVar18);
  lVar17 = local_c8;
  plVar4 = local_e8;
  piVar9 = *(int **)(local_c8 + 0x10);
  local_ec = 0;
  iVar18 = 0;
  if (piVar9 != (int *)0x0) {
    iVar14 = *piVar9;
    iVar22 = iVar22 + *(int *)(local_c8 + 0x78);
    local_f4 = iVar7;
    piVar9 = (int *)FUN_1495ae612(local_e8,piVar9,0,0);
    local_ec = (int)plVar4[7] + 1;
    *(int *)(plVar4 + 7) = local_ec;
    local_108 = iVar14;
    iVar18 = FUN_149584f48(plVar8,0x56,iVar22,*(undefined4 *)(lVar17 + 0x6c));
    if (*(char *)(*plVar8 + 0x61) == '\0') {
      lVar10 = plVar8[0x11];
      lVar3 = plVar8[0x12];
      *(undefined1 *)(lVar10 + -0x17 + (longlong)(int)lVar3 * 0x18) = 0xf7;
      *(int **)(lVar10 + -8 + (longlong)(int)lVar3 * 0x18) = piVar9;
    }
    else if (((piVar9 != (int *)0x0) && (*(longlong *)(*plVar8 + 0x2d8) == 0)) &&
            (*piVar9 = *piVar9 + -1, *piVar9 == 0)) {
      FUN_14955d65a(*(undefined8 *)(piVar9 + 4),piVar9);
    }
    local_108 = iVar18 + 2;
    FUN_149584f48(plVar8,0x10,local_108,iVar18 + 4);
    local_108 = 0;
    iVar18 = FUN_149584f48(plVar8,0xc,local_ec,0);
    local_108 = iVar14 + -1;
    FUN_149584f48(plVar8,0x4d,iVar22,*(undefined4 *)(lVar17 + 0x6c));
    iVar7 = local_f4;
  }
  local_108 = 0;
  FUN_149584f48(plVar8,0x78,iVar12,iVar16);
  local_108 = iVar16;
  local_f4 = iVar12;
  FUN_149584f48(plVar8,0x79,iVar12,iVar7);
  iVar7 = 0;
  local_108 = iVar16;
  local_b4 = FUN_149584f48(plVar8,0x34,*(undefined4 *)(lVar17 + 0x80),0);
  lVar10 = local_e8[2];
  if (lVar10 == 0) {
    if ((local_e8[0x14] == 0) && ((*(byte *)(*local_e8 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)local_e8 + 0x23) = 1;
    }
    lVar10 = FUN_14955a44a();
  }
  local_b8 = iVar18;
  local_90 = plVar8;
  if (lVar17 != 0) {
    iVar7 = 0;
    lVar17 = local_c8;
    do {
      lVar3 = *(longlong *)(lVar17 + 0x50);
      local_108 = 0;
      FUN_149584f48(lVar10,0x48,0,*(undefined4 *)(lVar17 + 0x5c));
      piVar9 = *(int **)(*(longlong *)(lVar17 + 0x70) + 0x20);
      iVar18 = 0;
      if (piVar9 != (int *)0x0) {
        iVar18 = *piVar9;
      }
      if (iVar18 < iVar7) {
        iVar18 = iVar7;
      }
      iVar7 = iVar18;
      if (*(int *)(local_c8 + 0x84) == 0) {
        pcVar2 = *(char **)(lVar3 + 0x38);
        if (pcVar2 == "nth_value" || pcVar2 == "first_value") {
          local_108 = 0;
          FUN_149584f48(lVar10,0x45,0,*(undefined4 *)(lVar17 + 0x68));
          local_108 = 0;
          FUN_149584f48(lVar10,0x45,0,*(int *)(lVar17 + 0x68) + 1);
        }
        if (((*(byte *)(lVar3 + 5) & 0x10) != 0) && (*(int *)(lVar17 + 100) != 0)) {
          local_108 = 0;
          FUN_149584f48(lVar10,0x8a,*(int *)(lVar17 + 100),0);
          local_108 = 0;
          FUN_149584f48(lVar10,0x45,0,*(int *)(lVar17 + 0x68) + 1);
        }
      }
      lVar17 = *(longlong *)(lVar17 + 0x40);
    } while (lVar17 != 0);
  }
  lVar10 = local_c8;
  plVar8 = local_e8;
  iVar18 = local_f8;
  lVar17 = local_e8[7];
  *(int *)(local_e8 + 7) = iVar7 + (int)lVar17;
  local_68 = CONCAT44(local_68._4_4_,(int)lVar17 + 1);
  if (local_f8 != 0) {
    FUN_14959afe0(local_e8,*(undefined8 *)(local_c8 + 0x28),local_f8);
    FUN_1495c0680(plVar8,iVar18,(*(char *)(lVar10 + 0x20) == 'Y') * '\x03');
  }
  uVar19 = local_bc;
  plVar8 = local_e8;
  iVar7 = local_f0;
  if (local_f0 != 0) {
    FUN_14959afe0(local_e8,*(undefined8 *)(lVar10 + 0x30),local_f0);
    FUN_1495c0680(plVar8,iVar7,(*(char *)(lVar10 + 0x20) == 'Y') * '\x03' + '\x01');
  }
  plVar8 = local_90;
  if (*(char *)(lVar10 + 0x20) == 'Y') {
LAB_1495b07e9:
    cVar6 = *(char *)(lVar10 + 0x21);
  }
  else {
    cVar6 = *(char *)(lVar10 + 0x21);
    if ((iVar18 != 0) && (cVar6 == *(char *)(lVar10 + 0x22))) {
      local_108 = iVar7;
      iVar16 = FUN_149584f48(local_90,(cVar6 == 'V') * '\x02' + '7',iVar18,0);
      FUN_1495c087c(&local_88,0);
      uVar5 = local_d8;
      local_108 = 0;
      FUN_149584f48(plVar8,0x25,local_d8 & 0xffffffff,1);
      FUN_1495c0aa8(&local_88);
      local_108 = 0;
      FUN_149584f48(plVar8,0x8a,uVar5 & 0xffffffff,0);
      uVar19 = local_bc;
      local_108 = 0;
      FUN_149584f48(plVar8,0xb,0,local_bc);
      if (*(char *)(*plVar8 + 0x61) == '\0') {
        iVar12 = (int)plVar8[0x12] + -1;
        if (-1 < iVar16) {
          iVar12 = iVar16;
        }
        puVar13 = (undefined1 *)((longlong)iVar12 * 0x18 + plVar8[0x11]);
      }
      else {
        puVar13 = &DAT_14cc1ee40;
      }
      *(int *)(puVar13 + 8) = (int)plVar8[0x12];
      goto LAB_1495b07e9;
    }
  }
  iVar16 = local_dc;
  if (cVar6 == 'V') {
    if ((iVar7 != 0) && (*(char *)(lVar10 + 0x20) != 'Y')) {
      local_108 = iVar18;
      FUN_149584f48(plVar8,0x6a,iVar18,iVar7);
      cVar6 = *(char *)(lVar10 + 0x21);
      goto LAB_1495b0819;
    }
LAB_1495b081d:
    local_108 = 0;
    FUN_149584f48(plVar8,0x25,local_a4,1);
  }
  else {
LAB_1495b0819:
    if (cVar6 != 'Z') goto LAB_1495b081d;
  }
  local_108 = 0;
  FUN_149584f48(plVar8,0x25,local_d8,1);
  local_108 = 0;
  FUN_149584f48(plVar8,0x25,local_e0,1);
  piVar9 = local_d0;
  if (local_d0 != (int *)0x0 && iVar16 != 0) {
    local_108 = *local_d0 + -1;
    FUN_149584f48(plVar8,0x4d,local_c0,iVar16);
    local_108 = *piVar9 + -1;
    FUN_149584f48(plVar8,0x4d,iVar16,local_b0);
    local_108 = *piVar9 + -1;
    FUN_149584f48(plVar8,0x4d,iVar16,local_ac);
    local_108 = *piVar9 + -1;
    FUN_149584f48(plVar8,0x4d,iVar16,local_a8);
  }
  local_108 = 0;
  FUN_149584f48(plVar8,0xb,0,uVar19);
  iVar12 = local_f4;
  if (*(char *)(*plVar8 + 0x61) == '\0') {
    iVar22 = (int)plVar8[0x12] + -1;
    if (-1 < local_b4) {
      iVar22 = local_b4;
    }
    puVar13 = (undefined1 *)((longlong)iVar22 * 0x18 + plVar8[0x11]);
  }
  else {
    puVar13 = &DAT_14cc1ee40;
  }
  *(int *)(puVar13 + 8) = (int)plVar8[0x12];
  if (iVar16 != 0) {
    local_108 = uVar19;
    FUN_1495c13df(local_e8,local_d0,local_c0,iVar16);
  }
  if (*(char *)(lVar10 + 0x21) == 'V') {
    FUN_1495c150c(&local_88,3,0,0);
    if (*(char *)(lVar10 + 0x22) != 'Z') {
      iVar16 = iVar7;
      if (*(char *)(lVar10 + 0x20) != 'Y') {
LAB_1495b0c95:
        FUN_1495c150c(&local_88,1,iVar16,0);
        uVar15 = 2;
        iVar16 = iVar18;
        goto LAB_1495b0ca8;
      }
      iVar16 = *(int *)((longlong)local_e8 + 0x44);
      local_100 = iVar16 - 1;
      *(uint *)((longlong)local_e8 + 0x44) = local_100;
      lVar17 = plVar8[0x12];
      local_108 = local_e0;
      FUN_1495c1a20(&local_88,0x39,local_d8,iVar7);
      FUN_1495c150c(&local_88,2,iVar18,0);
      FUN_1495c150c(&local_88,1,0,0);
      local_108 = 0;
      FUN_149584f48(plVar8,0xb,0,(int)lVar17);
      lVar17 = plVar8[3];
      iVar16 = -iVar16;
      if (*(int *)(lVar17 + 0x44) + *(int *)(lVar17 + 0x48) < 0) {
        FUN_1495a1bff(lVar17,plVar8,iVar16);
        iVar7 = local_f0;
      }
      else {
        *(int *)(*(longlong *)(lVar17 + 0x50) + (longlong)iVar16 * 4) = (int)plVar8[0x12];
        iVar7 = local_f0;
      }
    }
  }
  else {
    if (*(char *)(lVar10 + 0x22) != 'X') {
      FUN_1495c150c(&local_88,3,0,0);
      if (*(char *)(lVar10 + 0x22) != 'Z') {
        if (*(char *)(lVar10 + 0x20) == 'Y') {
          lVar17 = plVar8[0x12];
          if (iVar7 == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(int *)((longlong)local_e8 + 0x44) - 1;
            *(uint *)((longlong)local_e8 + 0x44) = uVar19;
            local_108 = local_e0;
            local_100 = uVar19;
            FUN_1495c1a20(&local_88,0x39,local_d8,iVar7);
          }
          FUN_1495c150c(&local_88,1,0,0);
          FUN_1495c150c(&local_88,2,iVar18,0);
          iVar12 = local_f4;
          if (iVar7 != 0) {
            local_108 = 0;
            FUN_149584f48(plVar8,0xb,0,(int)lVar17);
            lVar17 = plVar8[3];
            if (*(int *)(lVar17 + 0x44) + *(int *)(lVar17 + 0x48) < 0) {
              FUN_1495a1bff(lVar17,plVar8,~uVar19);
            }
            else {
              *(int *)(*(longlong *)(lVar17 + 0x50) + (longlong)(int)~uVar19 * 4) =
                   (int)plVar8[0x12];
            }
          }
        }
        else {
          iVar16 = 0;
          if (iVar7 != 0) {
            local_108 = 1;
            iVar16 = FUN_149584f48(plVar8,0x30,iVar7,0);
          }
          FUN_1495c150c(&local_88,1,0,0);
          FUN_1495c150c(&local_88,2,iVar18,0);
          if (iVar7 != 0) {
            if (*(char *)(*plVar8 + 0x61) == '\0') {
              iVar22 = (int)plVar8[0x12] + -1;
              if (-1 < iVar16) {
                iVar22 = iVar16;
              }
              puVar13 = (undefined1 *)((longlong)iVar22 * 0x18 + plVar8[0x11]);
            }
            else {
              puVar13 = &DAT_14cc1ee40;
            }
            *(int *)(puVar13 + 8) = (int)plVar8[0x12];
          }
        }
      }
      goto LAB_1495b0cb0;
    }
    if (*(char *)(lVar10 + 0x21) != 'X') {
      FUN_1495c150c(&local_88,3,iVar7,0);
LAB_1495b0c82:
      iVar16 = 0;
      goto LAB_1495b0c95;
    }
    cVar6 = *(char *)(lVar10 + 0x20);
    FUN_1495c150c(&local_88,3,iVar7,0);
    if (cVar6 != 'Y') goto LAB_1495b0c82;
    FUN_1495c150c(&local_88,2,iVar18,0);
    uVar15 = 1;
    iVar16 = 0;
LAB_1495b0ca8:
    FUN_1495c150c(&local_88,uVar15,iVar16,0);
  }
LAB_1495b0cb0:
  lVar17 = plVar8[3];
  if (*(int *)(lVar17 + 0x44) + *(int *)(lVar17 + 0x48) < 0) {
    FUN_1495a1bff(lVar17,plVar8);
  }
  else {
    *(int *)(*(longlong *)(lVar17 + 0x50) + (longlong)-(int)local_98 * 4) = (int)plVar8[0x12];
  }
  FUN_1495b2193(local_a0);
  iVar16 = 0;
  if (*(longlong *)(lVar10 + 0x10) != 0) {
    local_108 = 0;
    iVar16 = FUN_149584f48(plVar8,0x45,0,local_ec);
    if (*(char *)(*plVar8 + 0x61) == '\0') {
      iVar22 = (int)plVar8[0x12] + -1;
      if (-1 < local_b8) {
        iVar22 = local_b8;
      }
      puVar13 = (undefined1 *)((longlong)iVar22 * 0x18 + plVar8[0x11]);
    }
    else {
      puVar13 = &DAT_14cc1ee40;
    }
    *(int *)(puVar13 + 8) = (int)plVar8[0x12];
  }
  local_108 = 0;
  iVar12 = FUN_149584f48(plVar8,0x25,iVar12,0);
  cVar6 = *(char *)(lVar10 + 0x21);
  if (*(char *)(lVar10 + 0x22) != 'X') {
    FUN_1495c150c(&local_88,3,0,0);
    if (cVar6 == 'V') {
      if (*(char *)(lVar10 + 0x20) == 'Y') {
        uVar20 = (undefined4)plVar8[0x12];
        iVar18 = FUN_1495c150c(&local_88,2,local_f8,1);
        iVar7 = FUN_1495c150c(&local_88,1,0,1);
      }
      else {
        uVar20 = (undefined4)plVar8[0x12];
        if (*(char *)(lVar10 + 0x22) == 'Z') {
          iVar7 = FUN_1495c150c(&local_88,1,local_f8,1);
          iVar18 = 0;
        }
        else {
          iVar7 = FUN_1495c150c(&local_88,1,iVar7,1);
          iVar18 = local_f8;
        }
        iVar18 = FUN_1495c150c(&local_88,2,iVar18,1);
      }
      local_108 = 0;
      FUN_149584f48(plVar8,0xb,0,uVar20);
      puVar21 = &DAT_14cc1ee40;
      puVar13 = &DAT_14cc1ee40;
      if (*(char *)(*plVar8 + 0x61) == '\0') {
        iVar22 = (int)plVar8[0x12] + -1;
        if (-1 < iVar18) {
          iVar22 = iVar18;
        }
        puVar13 = (undefined1 *)((longlong)iVar22 * 0x18 + plVar8[0x11]);
      }
      *(int *)(puVar13 + 8) = (int)plVar8[0x12];
      lVar17 = plVar8[0x12];
      iVar18 = FUN_1495c150c(&local_88,1,0,1);
      local_108 = 0;
      FUN_149584f48(plVar8,0xb,0,(int)lVar17);
      puVar13 = &DAT_14cc1ee40;
      if (*(char *)(*plVar8 + 0x61) == '\0') {
        iVar22 = (int)plVar8[0x12] + -1;
        if (-1 < iVar7) {
          iVar22 = iVar7;
        }
        puVar13 = (undefined1 *)((longlong)iVar22 * 0x18 + plVar8[0x11]);
      }
      *(int *)(puVar13 + 8) = (int)plVar8[0x12];
      if (*(char *)(*plVar8 + 0x61) == '\0') {
        iVar7 = (int)plVar8[0x12] + -1;
        if (-1 < iVar18) {
          iVar7 = iVar18;
        }
        puVar21 = (undefined1 *)((longlong)iVar7 * 0x18 + plVar8[0x11]);
      }
      *(int *)(puVar21 + 8) = (int)plVar8[0x12];
      lVar10 = local_c8;
    }
    else {
      lVar17 = plVar8[0x12];
      iVar7 = FUN_1495c150c(&local_88,1,0,1);
      FUN_1495c150c(&local_88,2,iVar18,0);
      local_108 = 0;
      FUN_149584f48(plVar8,0xb,0,(int)lVar17);
      if (*(char *)(*plVar8 + 0x61) == '\0') {
        iVar18 = (int)plVar8[0x12] + -1;
        if (-1 < iVar7) {
          iVar18 = iVar7;
        }
        puVar13 = (undefined1 *)((longlong)iVar18 * 0x18 + plVar8[0x11]);
      }
      else {
        puVar13 = &DAT_14cc1ee40;
      }
      *(int *)(puVar13 + 8) = (int)plVar8[0x12];
    }
    goto LAB_1495b0e62;
  }
  if (cVar6 == 'X') {
    cVar6 = *(char *)(lVar10 + 0x20);
    FUN_1495c150c(&local_88,3,iVar7,0);
    if (cVar6 == 'Y') {
      uVar15 = 2;
      iVar7 = iVar18;
      goto LAB_1495b0e42;
    }
  }
  else {
    uVar15 = 3;
LAB_1495b0e42:
    FUN_1495c150c(&local_88,uVar15,iVar7,0);
  }
  FUN_1495c150c(&local_88,1,0,0);
LAB_1495b0e62:
  if (*(char *)(*plVar8 + 0x61) == '\0') {
    iVar18 = (int)plVar8[0x12] + -1;
    if (-1 < iVar12) {
      iVar18 = iVar12;
    }
    puVar13 = (undefined1 *)((longlong)iVar18 * 0x18 + plVar8[0x11]);
  }
  else {
    puVar13 = &DAT_14cc1ee40;
  }
  *(int *)(puVar13 + 8) = (int)plVar8[0x12];
  local_108 = 0;
  FUN_149584f48(plVar8,0x8a,local_d8,0);
  if (*(longlong *)(lVar10 + 0x10) != 0) {
    if (*(int *)(lVar10 + 0x84) != 0) {
      local_108 = 0;
      FUN_149584f48(plVar8,0x45,1);
      local_108 = 0;
      FUN_149584f48(plVar8,0x45,0,*(undefined4 *)(lVar10 + 0x88));
    }
    if (*(char *)(*plVar8 + 0x61) == '\0') {
      iVar18 = (int)plVar8[0x12] + -1;
      if (-1 < iVar16) {
        iVar18 = iVar16;
      }
      puVar13 = (undefined1 *)((longlong)iVar18 * 0x18 + plVar8[0x11]);
    }
    else {
      puVar13 = &DAT_14cc1ee40;
    }
    *(int *)(puVar13 + 4) = (int)plVar8[0x12];
    local_108 = 0;
    FUN_149584f48(plVar8,0x41,local_ec,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495b1362 FUN_1495b1362 body=3632 status=ok
// SIG undefined FUN_1495b1362(void)

void FUN_1495b1362(longlong *param_1,longlong param_2,int param_3,longlong *param_4,longlong param_5
                  ,byte *param_6,int param_7,undefined4 param_8)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c0;
  int local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  uint local_6c;
  uint *local_68;
  uint *local_60;
  int local_54;
  uint local_50;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_5 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = (uint)*(byte *)(param_5 + 1);
  }
  if (param_4 == (longlong *)0x0) {
    param_4 = (longlong *)0x0;
  }
  else if (*param_4 == 0) {
    param_4 = (longlong *)0x0;
  }
  plVar1 = (longlong *)param_1[2];
  bVar3 = *param_6;
  uVar16 = (ulonglong)bVar3;
  local_80 = (ulonglong)*(uint *)(param_6 + 4);
  if ((uVar21 == 0 && param_4 == (longlong *)0x0) && (0 < *(int *)(param_2 + 0xc))) {
    local_c8 = 1;
    FUN_149584f48(plVar1,0x30,*(int *)(param_2 + 0xc),param_7);
  }
  uVar19 = **(uint **)(param_2 + 0x20);
  puVar18 = (uint *)(ulonglong)uVar19;
  uVar20 = *(uint *)(param_6 + 8);
  if (uVar20 == 0) {
    if (param_4 == (longlong *)0x0) {
      iVar4 = (int)param_1[7];
      uVar23 = 0;
    }
    else {
      uVar20 = (~*(uint *)((longlong)param_4 + 0x24) & 1) + *(int *)*param_4;
      uVar23 = (ulonglong)uVar20;
      iVar4 = (int)param_1[7] + uVar20;
      *(int *)(param_1 + 7) = iVar4;
    }
    *(int *)(param_6 + 8) = iVar4 + 1;
    iVar4 = (int)param_1[7];
LAB_1495b1449:
    *(uint *)(param_1 + 7) = iVar4 + uVar19;
    uVar20 = *(uint *)(param_6 + 8);
  }
  else {
    iVar4 = (int)param_1[7];
    uVar23 = 0;
    if (iVar4 < (int)(uVar20 + uVar19)) goto LAB_1495b1449;
  }
  uVar17 = (ulonglong)uVar20;
  *(uint *)(param_6 + 0xc) = uVar19;
  uVar11 = uVar20;
  if (param_3 < 0) {
    bVar2 = 1;
    if ((1 < bVar3 - 9) && (bVar3 != 0xd)) {
      if (bVar3 == 3) goto LAB_1495b14da;
      bVar2 = 0;
    }
    local_b0 = CONCAT44(local_b0._4_4_,uVar21);
    if ((uVar21 == 0 && param_4 != (longlong *)0x0) && (bVar3 & 0xfd) != 0xc) {
      lVar14 = (longlong)(int)param_4[1];
      piVar9 = (int *)*param_4;
      iVar4 = *piVar9;
      if ((int)param_4[1] < iVar4) {
        do {
          lVar7 = lVar14 * 8;
          lVar14 = lVar14 + 1;
          if (*(ushort *)(piVar9 + lVar7 + 8) != 0) {
            *(short *)(*(longlong *)(param_2 + 0x20) + 0x20 +
                      (ulonglong)(*(ushort *)(piVar9 + lVar7 + 8) - 1) * 0x20) =
                 (short)lVar14 - (short)(int)param_4[1];
            piVar9 = (int *)*param_4;
            iVar4 = *piVar9;
          }
        } while (lVar14 < iVar4);
      }
      bVar2 = bVar2 | 0xc;
      lVar14 = (longlong)**(int **)(param_2 + 0x20);
      if (0 < lVar14) {
        lVar7 = 0;
        uVar12 = uVar17;
        do {
          bVar24 = *(short *)((longlong)*(int **)(param_2 + 0x20) + lVar7 + 0x20) != 0;
          if (bVar24) {
            uVar12 = 0;
          }
          uVar11 = (uint)uVar12;
          puVar18 = (uint *)(ulonglong)((int)puVar18 - (uint)bVar24);
          lVar7 = lVar7 + 0x20;
        } while (lVar14 * 0x20 != lVar7);
      }
    }
    local_50 = uVar20;
    local_4c = bVar2;
    if (((*(int *)(param_2 + 8) == 0) || ((bVar2 & 8) == 0)) || ((int)uVar23 < 1)) {
      local_c8 = CONCAT31(local_c8._1_3_,bVar2);
      local_90 = uVar23;
      FUN_14959d7c6(param_1,*(undefined8 *)(param_2 + 0x20),uVar17,0);
      uVar23 = local_90;
      uVar21 = (uint)local_b0;
    }
    else {
      param_4[5] = (longlong)&local_50;
      uVar11 = 0;
    }
  }
  else if (0 < (int)uVar19) {
    local_b0 = CONCAT44(local_b0._4_4_,uVar21);
    uVar21 = 0;
    local_a8 = param_4;
    local_88 = uVar16;
    do {
      local_c8 = uVar20 + uVar21;
      FUN_149584f48(plVar1,0x59,param_3,uVar21);
      uVar21 = uVar21 + 1;
    } while (uVar19 != uVar21);
    uVar16 = local_88;
    param_4 = local_a8;
    uVar21 = (uint)local_b0;
  }
LAB_1495b14da:
  uVar19 = (uint)puVar18;
  if (uVar21 != 0) {
    if (*(char *)(param_5 + 1) == '\x01') {
      if (*(char *)(*plVar1 + 0x61) == '\0') {
        lVar7 = (longlong)*(int *)(param_5 + 8);
        lVar14 = plVar1[0x11];
        local_a8 = param_4;
        local_98 = param_2;
        local_90 = uVar23;
        FUN_149569985(*plVar1,(int)*(char *)(lVar14 + 1 + lVar7 * 0x18),
                      *(undefined8 *)(lVar14 + 0x10 + lVar7 * 0x18));
        *(undefined8 *)(lVar14 + 0x10 + lVar7 * 0x18) = 0;
        *(undefined2 *)(lVar14 + lVar7 * 0x18) = 0xad;
        param_2 = local_98;
        param_4 = local_a8;
        uVar23 = local_90;
      }
    }
    else if (*(char *)(param_5 + 1) == '\x02') {
      local_b0 = (ulonglong)*(uint *)(param_1 + 7);
      *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) + uVar19;
      local_98 = param_2;
      local_90 = uVar23;
      if (*(char *)(*plVar1 + 0x61) == '\0') {
        lVar7 = (longlong)*(int *)(param_5 + 8);
        lVar14 = plVar1[0x11];
        local_a8 = param_4;
        FUN_149569985(*plVar1,(int)*(char *)(lVar14 + 1 + lVar7 * 0x18),
                      *(undefined8 *)(lVar14 + 0x10 + lVar7 * 0x18));
        *(undefined8 *)(lVar14 + 0x10 + lVar7 * 0x18) = 0;
        *(undefined2 *)(lVar14 + lVar7 * 0x18) = 0xad;
        param_4 = local_a8;
      }
      iVar4 = *(int *)(param_5 + 8);
      if (iVar4 < 0) {
        iVar4 = (int)plVar1[0x12] + -1;
      }
      uVar21 = (int)local_b0 + 1;
      local_b0 = (ulonglong)uVar21;
      if (*(char *)(*plVar1 + 0x61) == '\0') {
        puVar6 = (undefined1 *)((longlong)iVar4 * 0x18 + plVar1[0x11]);
      }
      else {
        puVar6 = &DAT_14cc1ee40;
      }
      *puVar6 = 0x48;
      *(undefined4 *)(puVar6 + 4) = 1;
      *(uint *)(puVar6 + 8) = uVar21;
      local_6c = uVar19 - 1;
      local_a8 = param_1;
      local_a0 = uVar17;
      local_88 = uVar16;
      if (0 < (int)uVar19) {
        local_54 = (int)plVar1[0x12] + uVar19;
        local_60 = (uint *)(ulonglong)local_6c;
        lVar14 = 8;
        puVar15 = (uint *)0x0;
        local_78 = uVar17;
        local_68 = puVar18;
        do {
          uVar8 = FUN_1495862ab(local_a8,*(undefined8 *)(*(longlong *)(local_98 + 0x20) + lVar14));
          local_c8 = (int)local_b0 + (int)puVar15;
          if (puVar15 < local_60) {
            uVar10 = 0x34;
            iVar4 = local_54;
          }
          else {
            uVar10 = 0x35;
            iVar4 = param_7;
          }
          FUN_149584f48(plVar1,uVar10,local_78 + (longlong)puVar15,iVar4);
          FUN_14955a5b6(plVar1,0xffffffff,uVar8,0xfffffffe);
          if (0 < (longlong)(int)plVar1[0x12]) {
            *(undefined2 *)(plVar1[0x11] + -0x16 + (longlong)(int)plVar1[0x12] * 0x18) = 0x80;
          }
          puVar15 = (uint *)((longlong)puVar15 + 1);
          lVar14 = lVar14 + 0x20;
        } while (local_68 != puVar15);
      }
      uVar17 = local_a0;
      local_c8 = local_6c;
      FUN_149584f48(plVar1,0x4d,local_a0 & 0xffffffff,local_b0);
      param_2 = local_98;
      uVar16 = local_88;
      param_1 = local_a8;
      uVar23 = local_90;
    }
    else {
      local_c8 = uVar20;
      local_98 = param_2;
      FUN_1495c2439(param_1,*(undefined4 *)(param_5 + 4),param_7,puVar18);
      param_2 = local_98;
    }
    if ((param_4 == (longlong *)0x0) && (0 < *(int *)(param_2 + 0xc))) {
      local_c8 = 1;
      local_98 = param_2;
      FUN_149584f48(plVar1,0x30,*(int *)(param_2 + 0xc),param_7);
      param_2 = local_98;
    }
  }
  iVar4 = (int)uVar16;
  iVar22 = (int)uVar23;
  switch(iVar4) {
  case 1:
    if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
      iVar4 = (int)param_1[7] + 1;
      *(int *)(param_1 + 7) = iVar4;
    }
    else {
      bVar3 = *(char *)((longlong)param_1 + 0x1f) - 1;
      *(byte *)((longlong)param_1 + 0x1f) = bVar3;
      iVar4 = *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc);
    }
    local_c8 = iVar4;
    FUN_149584f48(plVar1,0x5b,uVar17 & 0xffffffff,puVar18);
    local_c8 = (uint)uVar17;
    iVar22 = FUN_149584f48(plVar1,0x83,local_80,iVar4);
    if (*(char *)(*plVar1 + 0x61) == '\0') {
      lVar14 = plVar1[0x11];
      *(undefined1 *)(lVar14 + 1 + (longlong)iVar22 * 0x18) = 0xfd;
      *(uint *)(lVar14 + 0x10 + (longlong)iVar22 * 0x18) = uVar19;
    }
    if (iVar4 != 0) {
      bVar3 = *(byte *)((longlong)param_1 + 0x1f);
      if ((ulonglong)bVar3 < 8) {
        *(byte *)((longlong)param_1 + 0x1f) = bVar3 + 1;
        *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc) = iVar4;
      }
    }
    break;
  case 2:
    uVar8 = 0x84;
    uVar17 = uVar17 & 0xffffffff;
    uVar16 = local_80;
    local_c8 = uVar19;
    goto LAB_1495b1b76;
  case 3:
    local_c8 = 0;
    uVar8 = 0x45;
    uVar16 = 1;
    uVar17 = local_80;
LAB_1495b1b76:
    FUN_149584f48(plVar1,uVar8,uVar16,uVar17);
    break;
  case 5:
  case 6:
  case 0xc:
  case 0xe:
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,iVar22 + 1);
    local_88 = uVar16;
    local_b0 = FUN_14959d77c(param_1);
    iVar22 = iVar22 + (int)local_b0;
    local_c8 = iVar22;
    local_a0 = uVar17;
    local_90 = uVar23;
    FUN_149584f48(plVar1,0x5b,uVar17 & 0xffffffff,puVar18);
    if ((int)local_88 == 6) {
      iVar13 = (int)local_80 + 1;
      local_c8 = (uint)local_b0;
      iVar4 = FUN_149584f48(plVar1,0x1e,iVar13,(int)plVar1[0x12] + 4);
      if (*(char *)(*plVar1 + 0x61) == '\0') {
        lVar14 = plVar1[0x11];
        *(undefined1 *)(lVar14 + 1 + (longlong)iVar4 * 0x18) = 0xfd;
        *(undefined4 *)(lVar14 + 0x10 + (longlong)iVar4 * 0x18) = 0;
      }
      local_c8 = (uint)local_a0;
      iVar4 = FUN_149584f48(plVar1,0x83,iVar13,local_b0);
      if (*(char *)(*plVar1 + 0x61) == '\0') {
        lVar14 = plVar1[0x11];
        *(undefined1 *)(lVar14 + 1 + (longlong)iVar4 * 0x18) = 0xfd;
        *(uint *)(lVar14 + 0x10 + (longlong)iVar4 * 0x18) = uVar19;
      }
    }
    uVar16 = local_80;
    if (param_4 == (longlong *)0x0) {
      if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
        uVar21 = (int)param_1[7] + 1;
        *(uint *)(param_1 + 7) = uVar21;
      }
      else {
        bVar3 = *(char *)((longlong)param_1 + 0x1f) - 1;
        *(byte *)((longlong)param_1 + 0x1f) = bVar3;
        uVar21 = *(uint *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc);
      }
      local_c8 = 0;
      FUN_149584f48(plVar1,0x78,local_80 & 0xffffffff,uVar21);
      local_c8 = uVar21;
      FUN_149584f48(plVar1,0x79,uVar16 & 0xffffffff,local_b0);
      if (0 < (longlong)(int)plVar1[0x12]) {
        *(undefined2 *)(plVar1[0x11] + -0x16 + (longlong)(int)plVar1[0x12] * 0x18) = 8;
      }
      if (uVar21 != 0) {
        bVar3 = *(byte *)((longlong)param_1 + 0x1f);
        if ((ulonglong)bVar3 < 8) {
          *(byte *)((longlong)param_1 + 0x1f) = bVar3 + 1;
          *(uint *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc) = uVar21;
        }
      }
    }
    else {
      local_b8 = (int)local_90;
      local_c0 = 1;
      local_c8 = uVar11;
      FUN_1495c2545(param_1,param_4,param_2,iVar22);
    }
    if ((int)local_90 == 0) {
LAB_1495b1df2:
      if ((uint)local_b0 != 0) {
        bVar3 = *(byte *)((longlong)param_1 + 0x1f);
        if ((ulonglong)bVar3 < 8) {
          *(byte *)((longlong)param_1 + 0x1f) = bVar3 + 1;
          *(uint *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc) = (uint)local_b0;
        }
      }
    }
    else if ((int)param_1[5] <= (int)local_90) {
      *(int *)(param_1 + 5) = (int)local_a8;
LAB_1495b16c4:
      *(int *)((longlong)param_1 + 0x2c) = (int)local_b0;
    }
    break;
  case 7:
  case 8:
    local_60 = *(uint **)(param_6 + 0x18);
    uVar21 = *local_60;
    if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
      iVar22 = (int)param_1[7] + 1;
      *(int *)(param_1 + 7) = iVar22;
    }
    else {
      bVar3 = *(char *)((longlong)param_1 + 0x1f) - 1;
      *(byte *)((longlong)param_1 + 0x1f) = bVar3;
      iVar22 = *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc);
    }
    local_88 = CONCAT44(local_88._4_4_,iVar22);
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,uVar21 + 2);
    local_a0 = uVar17;
    local_b0 = FUN_14959d77c(param_1);
    iVar22 = (int)local_b0 + uVar21 + 1;
    local_98 = param_2;
    if (iVar4 == 8) {
      iVar4 = (int)local_80 + 1;
      local_c8 = (uint)local_a0;
      local_78 = CONCAT44(local_78._4_4_,iVar4);
      iVar4 = FUN_149584f48(plVar1,0x1e,iVar4,0);
      if (*(char *)(*plVar1 + 0x61) == '\0') {
        lVar14 = plVar1[0x11];
        *(undefined1 *)(lVar14 + 1 + (longlong)iVar4 * 0x18) = 0xfd;
        *(uint *)(lVar14 + 0x10 + (longlong)iVar4 * 0x18) = uVar19;
      }
      local_c8 = iVar22;
      FUN_149584f48(plVar1,0x5b,local_a0,puVar18);
      local_c8 = 0;
      FUN_149584f48(plVar1,0x83,local_78 & 0xffffffff,iVar22);
      local_68 = (uint *)CONCAT44(local_68._4_4_,iVar4);
      if (0 < (longlong)(int)plVar1[0x12]) {
        *(undefined2 *)(plVar1[0x11] + -0x16 + (longlong)(int)plVar1[0x12] * 0x18) = 0x10;
      }
    }
    else {
      local_c8 = iVar22;
      FUN_149584f48(plVar1,0x5b,local_a0,puVar18);
      local_68 = (uint *)((ulonglong)local_68 & 0xffffffff00000000);
    }
    puVar18 = local_60;
    local_78 = CONCAT44(local_78._4_4_,(int)local_b0 + uVar21);
    if (0 < (int)uVar21) {
      iVar4 = (int)local_a0;
      lVar14 = 0;
      uVar16 = local_b0 & 0xffffffff;
      do {
        local_c8 = 0;
        FUN_149584f48(plVar1,0x4e,(uint)*(ushort *)((longlong)puVar18 + lVar14 + 0x20) + iVar4 + -1,
                      uVar16);
        lVar14 = lVar14 + 0x20;
        uVar16 = (ulonglong)((int)uVar16 + 1);
      } while ((ulonglong)uVar21 << 5 != lVar14);
    }
    uVar23 = local_80;
    local_c8 = 0;
    FUN_149584f48(plVar1,0x77,local_80 & 0xffffffff,local_78 & 0xffffffff);
    uVar16 = local_88;
    iVar22 = (int)local_88;
    local_c8 = (int)local_88;
    uVar21 = (uint)local_b0;
    iVar4 = (int)local_a8;
    FUN_149584f48(plVar1,0x5b,local_b0 & 0xffffffff,(ulonglong)local_a8 & 0xffffffff);
    local_c8 = uVar21;
    iVar13 = FUN_149584f48(plVar1,0x83,uVar23 & 0xffffffff,uVar16 & 0xffffffff);
    if (*(char *)(*plVar1 + 0x61) == '\0') {
      lVar14 = plVar1[0x11];
      *(undefined1 *)(lVar14 + 1 + (longlong)iVar13 * 0x18) = 0xfd;
      *(int *)(lVar14 + 0x10 + (longlong)iVar13 * 0x18) = iVar4;
    }
    if ((int)local_68 != 0) {
      if (*(char *)(*plVar1 + 0x61) == '\0') {
        iVar13 = (int)plVar1[0x12] + -1;
        if (-1 < (int)local_68) {
          iVar13 = (int)local_68;
        }
        puVar6 = (undefined1 *)((longlong)iVar13 * 0x18 + plVar1[0x11]);
      }
      else {
        puVar6 = &DAT_14cc1ee40;
      }
      *(int *)(puVar6 + 8) = (int)plVar1[0x12];
    }
    if (iVar22 != 0) {
      bVar3 = *(byte *)((longlong)param_1 + 0x1f);
      if ((ulonglong)bVar3 < 8) {
        *(byte *)((longlong)param_1 + 0x1f) = bVar3 + 1;
        *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc) = iVar22;
      }
    }
    param_2 = local_98;
    if (iVar4 == 1) goto LAB_1495b1df2;
    if ((int)param_1[5] < iVar4) {
      *(int *)(param_1 + 5) = iVar4;
      goto LAB_1495b16c4;
    }
    break;
  case 9:
  case 0xd:
    if (param_4 != (longlong *)0x0) {
LAB_1495b1918:
      local_c8 = uVar11;
      local_c0 = uVar19;
      local_b8 = iVar22;
      FUN_1495c2545(param_1,param_4,param_2,uVar17 & 0xffffffff);
      goto LAB_1495b1b84;
    }
    if (iVar4 == 0xd) {
      uVar17 = (ulonglong)*(uint *)(param_6 + 4);
      uVar8 = 0xe;
      puVar18 = (uint *)0x0;
    }
    else {
      uVar8 = 0x50;
      uVar17 = uVar17 & 0xffffffff;
    }
    local_c8 = 0;
    FUN_149584f48(plVar1,uVar8,uVar17,puVar18);
    goto LAB_1495b1530;
  case 10:
    if (param_4 != (longlong *)0x0) goto LAB_1495b1918;
    goto LAB_1495b1530;
  case 0xb:
    if (param_4 != (longlong *)0x0) goto LAB_1495b1918;
    if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
      iVar4 = (int)param_1[7] + 1;
      *(int *)(param_1 + 7) = iVar4;
    }
    else {
      bVar3 = *(char *)((longlong)param_1 + 0x1f) - 1;
      *(byte *)((longlong)param_1 + 0x1f) = bVar3;
      iVar4 = *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc);
    }
    uVar8 = *(undefined8 *)(param_6 + 0x10);
    local_c8 = iVar4;
    uVar5 = FUN_149584f48(plVar1,0x5b,uVar17 & 0xffffffff,puVar18);
    FUN_14955a5b6(plVar1,uVar5,uVar8,puVar18);
    local_c8 = (uint)uVar17;
    iVar22 = FUN_149584f48(plVar1,0x83,local_80,iVar4);
    if (*(char *)(*plVar1 + 0x61) == '\0') {
      lVar14 = plVar1[0x11];
      *(undefined1 *)(lVar14 + 1 + (longlong)iVar22 * 0x18) = 0xfd;
      *(uint *)(lVar14 + 0x10 + (longlong)iVar22 * 0x18) = uVar19;
    }
    if (iVar4 != 0) {
      bVar3 = *(byte *)((longlong)param_1 + 0x1f);
      if ((ulonglong)bVar3 < 8) {
        *(byte *)((longlong)param_1 + 0x1f) = bVar3 + 1;
        *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc) = iVar4;
      }
    }
    goto LAB_1495b1530;
  }
  if (param_4 == (longlong *)0x0) {
LAB_1495b1530:
    if (*(int *)(param_2 + 8) != 0) {
      local_c8 = 0;
      FUN_149584f48(plVar1,0x3b,*(int *)(param_2 + 8),param_8);
    }
  }
LAB_1495b1b84:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495b2193 FUN_1495b2193 body=2335 status=ok
// SIG undefined FUN_1495b2193(void)

void FUN_1495b2193(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  char *pcVar18;
  ushort uVar19;
  ulonglong uVar20;
  uint *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  
  plVar2 = (longlong *)*param_1;
  lVar10 = param_1[1];
  lVar3 = *plVar2;
  plVar16 = (longlong *)plVar2[2];
  uVar20 = (ulonglong)*(byte *)(param_1 + 8);
  if (uVar20 != 0) {
    do {
      uVar22 = uVar20 - 1;
      plVar14 = param_1 + uVar22 * 0xc + 0x73;
      lVar8 = param_1[uVar22 * 0xc + 0x7d];
      if (*(char *)((longlong)param_1 + uVar22 * 0x60 + 0x3cd) == -0x53) {
        lVar4 = plVar16[3];
        if (*(int *)(lVar4 + 0x44) + *(int *)(lVar4 + 0x48) < 0) {
          FUN_1495a1bff(lVar4,plVar16);
        }
        else {
          *(int *)(*(longlong *)(lVar4 + 0x50) + (longlong)(int)~*(uint *)(plVar14 + 3) * 4) =
               (int)plVar16[0x12];
        }
      }
      else {
        iVar7 = 0;
        iVar17 = 0;
        if ((((*(char *)((longlong)param_1 + 0x43) == '\x02') && (uVar20 == *(byte *)(param_1 + 8)))
            && ((*(byte *)(lVar8 + 0x29) & 2) != 0)) &&
           (iVar7 = iVar17, (*(byte *)(*(longlong *)(lVar8 + 0x20) + 100) & 0x80) != 0)) {
          uVar19 = *(ushort *)(lVar8 + 0x1e);
          if ((uVar19 != 0) &&
             (uVar13 = (uint)uVar19,
             0x23 < *(short *)(*(longlong *)(*(longlong *)(lVar8 + 0x20) + 0x10) +
                              (ulonglong)uVar19 * 2))) {
            iVar7 = (int)plVar2[7] + 1;
            uVar15 = 0;
            do {
              FUN_149584f48(plVar16,0x59,(int)plVar14[1],uVar15,iVar7 + uVar15);
              uVar15 = uVar15 + 1;
            } while (uVar13 != uVar15);
            *(uint *)(plVar2 + 7) = (int)plVar2[7] + uVar13 + 1;
            iVar7 = FUN_149584f48(plVar16,(*(char *)((longlong)plVar14 + 0x35) != '\x04') * '\x03' +
                                          '\x16',(int)plVar14[1],0,iVar7);
            if (*(char *)(*plVar16 + 0x61) == '\0') {
              lVar4 = plVar16[0x11];
              *(undefined1 *)(lVar4 + 1 + (longlong)iVar7 * 0x18) = 0xfd;
              *(uint *)(lVar4 + 0x10 + (longlong)iVar7 * 0x18) = uVar13;
            }
            FUN_149584f48(plVar16,0xb,1,*(int *)((longlong)plVar14 + 0x3c),0);
          }
        }
        lVar4 = plVar16[3];
        if (*(int *)(lVar4 + 0x44) + *(int *)(lVar4 + 0x48) < 0) {
          FUN_1495a1bff(lVar4,plVar16);
        }
        else {
          *(int *)(*(longlong *)(lVar4 + 0x50) + (longlong)(int)~*(uint *)(plVar14 + 3) * 4) =
               (int)plVar16[0x12];
        }
        FUN_149584f48(plVar16,*(undefined1 *)((longlong)plVar14 + 0x35),(int)plVar14[7],
                      *(int *)((longlong)plVar14 + 0x3c),*(undefined1 *)((longlong)plVar14 + 0x36));
        if (0 < (longlong)(int)plVar16[0x12]) {
          *(ushort *)(plVar16[0x11] + -0x16 + (longlong)(int)plVar16[0x12] * 0x18) =
               (ushort)*(byte *)((longlong)plVar14 + 0x37);
        }
        if (*(int *)((longlong)plVar14 + 0x24) != 0) {
          lVar4 = plVar16[3];
          if (*(int *)(lVar4 + 0x44) + *(int *)(lVar4 + 0x48) < 0) {
            FUN_1495a1bff(lVar4,plVar16);
          }
          else {
            *(int *)(*(longlong *)(lVar4 + 0x50) + (longlong)(int)~*(uint *)(plVar14 + 5) * 4) =
                 (int)plVar16[0x12];
          }
          FUN_149584f48(plVar16,0x3b,*(int *)((longlong)plVar14 + 0x24),
                        *(int *)((longlong)plVar14 + 0x3c) + -1,0);
        }
        if (iVar7 != 0) {
          puVar9 = &DAT_14cc1ee40;
          if (*(char *)(*plVar16 + 0x61) == '\0') {
            iVar17 = (int)plVar16[0x12] + -1;
            if (-1 < iVar7) {
              iVar17 = iVar7;
            }
            puVar9 = (undefined1 *)((longlong)iVar17 * 0x18 + plVar16[0x11]);
          }
          *(int *)(puVar9 + 8) = (int)plVar16[0x12];
        }
      }
      if (((*(byte *)(lVar8 + 0x29) & 8) != 0) && (0 < (int)plVar14[8])) {
        lVar4 = plVar16[3];
        if (*(int *)(lVar4 + 0x44) + *(int *)(lVar4 + 0x48) < 0) {
          FUN_1495a1bff(lVar4,plVar16);
        }
        else {
          *(int *)(*(longlong *)(lVar4 + 0x50) + (longlong)(int)~*(uint *)(plVar14 + 2) * 4) =
               (int)plVar16[0x12];
        }
        iVar7 = (int)plVar14[8];
        if (0 < (longlong)iVar7) {
          pcVar18 = (char *)(plVar14[9] + (longlong)iVar7 * 0x14 + -4);
          iVar7 = iVar7 + 1;
          do {
            puVar9 = &DAT_14cc1ee40;
            if (*(char *)(*plVar16 + 0x61) == '\0') {
              iVar17 = (int)plVar16[0x12] + -1;
              if (-2 < *(int *)(pcVar18 + -0xc)) {
                iVar17 = *(int *)(pcVar18 + -0xc) + 1;
              }
              puVar9 = (undefined1 *)((longlong)iVar17 * 0x18 + plVar16[0x11]);
            }
            *(int *)(puVar9 + 8) = (int)plVar16[0x12];
            if (*pcVar18 != -0x53) {
              iVar17 = *(int *)(pcVar18 + -4);
              if (iVar17 != 0) {
                if (((*(byte *)(lVar8 + 0x29) & 4) == 0) &&
                   (iVar6 = FUN_149584f48(plVar16,0x1b,(int)plVar14[1],
                                          ((int)plVar16[0x12] - (uint)((int)*plVar14 == 0)) + 3,
                                          *(undefined4 *)(pcVar18 + -8)),
                   *(char *)(*plVar16 + 0x61) == '\0')) {
                  lVar4 = plVar16[0x11];
                  *(undefined1 *)(lVar4 + 1 + (longlong)iVar6 * 0x18) = 0xfd;
                  *(int *)(lVar4 + 0x10 + (longlong)iVar6 * 0x18) = iVar17;
                }
                if ((int)*plVar14 != 0) {
                  FUN_149584f48(plVar16,0x1a,*(undefined4 *)(pcVar18 + -0x10),(int)plVar16[0x12] + 2
                                ,0);
                }
              }
              FUN_149584f48(plVar16,*pcVar18,*(undefined4 *)(pcVar18 + -0x10),
                            *(undefined4 *)(pcVar18 + -0xc),0);
            }
            puVar9 = &DAT_14cc1ee40;
            if (*(char *)(*plVar16 + 0x61) == '\0') {
              iVar17 = *(int *)(pcVar18 + -0xc);
              if (*(int *)(pcVar18 + -0xc) < 1) {
                iVar17 = (int)plVar16[0x12];
              }
              puVar9 = (undefined1 *)(plVar16[0x11] + (longlong)iVar17 * 0x18 + -0x18);
            }
            *(int *)(puVar9 + 8) = (int)plVar16[0x12];
            pcVar18 = pcVar18 + -0x14;
            iVar7 = iVar7 + -1;
          } while (1 < iVar7);
        }
      }
      lVar4 = plVar16[3];
      if (*(int *)(lVar4 + 0x44) + *(int *)(lVar4 + 0x48) < 0) {
        FUN_1495a1bff(lVar4,plVar16);
      }
      else {
        *(int *)(*(longlong *)(lVar4 + 0x50) +
                (longlong)(int)~*(uint *)((longlong)plVar14 + 0xc) * 4) = (int)plVar16[0x12];
      }
      if (*(int *)((longlong)plVar14 + 0x14) != 0) {
        FUN_149584f48(plVar16,0xb,0,*(int *)((longlong)plVar14 + 0x14),0);
        puVar9 = &DAT_14cc1ee40;
        if (*(char *)(*plVar16 + 0x61) == '\0') {
          iVar7 = (int)plVar16[0x12] + -1;
          if (-1 < *(int *)((longlong)plVar14 + 0x14)) {
            iVar7 = *(int *)((longlong)plVar14 + 0x14);
          }
          puVar9 = (undefined1 *)((longlong)iVar7 * 0x18 + plVar16[0x11]);
        }
        *(int *)(puVar9 + 8) = (int)plVar16[0x12];
        puVar9 = &DAT_14cc1ee40;
        if (*(char *)(*plVar16 + 0x61) == '\0') {
          iVar7 = (int)plVar16[0x12] + -1;
          if (1 < *(int *)((longlong)plVar14 + 0x14)) {
            iVar7 = *(int *)((longlong)plVar14 + 0x14) + -2;
          }
          puVar9 = (undefined1 *)((longlong)iVar7 * 0x18 + plVar16[0x11]);
        }
        *(int *)(puVar9 + 8) = (int)plVar16[0x12];
      }
      if ((int)plVar14[6] != 0) {
        FUN_149584f48(plVar16,0x3b,*(uint *)((longlong)plVar14 + 0x2c) >> 1,(int)plVar14[6],0);
      }
      if ((int)*plVar14 != 0) {
        uVar13 = *(uint *)(lVar8 + 0x28);
        iVar7 = FUN_149584f48(plVar16,0x30,(int)*plVar14,0,0);
        if ((uVar13 & 0x40) == 0) {
          FUN_149584f48(plVar16,0x80,*(int *)((longlong)plVar14 + 4),0,0);
        }
        if (((uVar13 >> 9 & 1) != 0) || (((uVar13 >> 0xd & 1) != 0 && (plVar14[8] != 0)))) {
          FUN_149584f48(plVar16,0x80,(int)plVar14[1],0,0);
        }
        if (*(char *)((longlong)plVar14 + 0x35) == 'A') {
          iVar17 = (int)plVar14[7];
          uVar12 = 0xc;
        }
        else {
          uVar12 = 0xb;
          iVar17 = 0;
        }
        FUN_149584f48(plVar16,uVar12,iVar17,*(int *)((longlong)plVar14 + 0x1c),0);
        puVar9 = &DAT_14cc1ee40;
        if (*(char *)(*plVar16 + 0x61) == '\0') {
          iVar17 = (int)plVar16[0x12] + -1;
          if (-1 < iVar7) {
            iVar17 = iVar7;
          }
          puVar9 = (undefined1 *)((longlong)iVar17 * 0x18 + plVar16[0x11]);
        }
        *(int *)(puVar9 + 8) = (int)plVar16[0x12];
      }
      bVar5 = 1 < (longlong)uVar20;
      uVar20 = uVar22;
    } while (bVar5);
  }
  lVar8 = plVar16[3];
  if (*(int *)(lVar8 + 0x44) + *(int *)(lVar8 + 0x48) < 0) {
    FUN_1495a1bff(lVar8,plVar16);
  }
  else {
    *(int *)(*(longlong *)(lVar8 + 0x50) + (longlong)(int)~*(uint *)((longlong)param_1 + 0x34) * 4)
         = (int)plVar16[0x12];
  }
  if ((char)param_1[8] != '\0') {
    plVar14 = param_1 + 0x73;
    uVar13 = 0;
    do {
      lVar8 = (ulonglong)*(byte *)((longlong)plVar14 + 0x34) * 0x70;
      if ((*(byte *)(lVar10 + 0x48 + lVar8) & 0x10) == 0) {
        lVar8 = *(longlong *)(lVar10 + 0x28 + lVar8);
        uVar15 = *(uint *)(plVar14[10] + 0x28);
        if ((uVar15 & 0x240) == 0) {
          if ((uVar15 >> 0xd & 1) == 0) goto LAB_1495b292b;
          plVar11 = plVar14 + 8;
        }
        else {
          plVar11 = (longlong *)(plVar14[10] + 0x20);
        }
        lVar4 = *plVar11;
        if ((lVar4 != 0) &&
           (((*(char *)((longlong)param_1 + 0x42) == '\0' ||
             ((*(byte *)(*(longlong *)(lVar4 + 0x18) + 0x40) & 0x80) != 0)) &&
            (*(char *)(lVar3 + 0x61) == '\0')))) {
          iVar7 = (int)plVar16[0x12];
          iVar17 = (int)plVar14[4];
          pcVar18 = &DAT_14cc1ee40;
          if (*(char *)(*plVar16 + 0x61) == '\0') {
            iVar6 = iVar7 + -1;
            if (-1 < iVar17) {
              iVar6 = iVar17;
            }
            pcVar18 = (char *)((longlong)iVar6 * 0x18 + plVar16[0x11]);
          }
          if (iVar17 < iVar7) {
            do {
              if (*(int *)(pcVar18 + 4) == *(int *)((longlong)plVar14 + 4)) {
                cVar1 = *pcVar18;
                if (cVar1 == '\x15') {
LAB_1495b2a6b:
                  *(int *)(pcVar18 + 4) = (int)plVar14[1];
                }
                else if (cVar1 == '\x7f') {
                  *(int *)(pcVar18 + 4) = (int)plVar14[1];
                  *pcVar18 = -0x7a;
                }
                else if (cVar1 == 'Y') {
                  uVar20 = (ulonglong)(int)*(uint *)(pcVar18 + 8);
                  if ((char)*(uint *)(lVar8 + 0x40) < '\0') {
                    lVar23 = *(longlong *)(lVar8 + 0x10);
                    if (lVar23 == 0) {
                      lVar23 = 0;
                    }
                    else {
                      do {
                        if ((*(uint *)(lVar23 + 100) & 3) == 2) goto LAB_1495b2a2f;
                        lVar23 = *(longlong *)(lVar23 + 0x28);
                      } while (lVar23 != 0);
                      lVar23 = 0;
                    }
LAB_1495b2a2f:
                    uVar20 = (ulonglong)*(ushort *)(*(longlong *)(lVar23 + 8) + uVar20 * 2);
                  }
                  else if (((*(uint *)(lVar8 + 0x40) & 0x20) != 0) &&
                          ((*(uint *)(pcVar18 + 8) & 0x8000) == 0)) {
                    puVar21 = (uint *)(*(longlong *)(lVar8 + 8) + 0x1c);
                    lVar23 = -1;
                    do {
                      uVar19 = (short)uVar20 + (ushort)((*puVar21 >> 5 & 1) != 0);
                      uVar20 = (ulonglong)uVar19;
                      lVar23 = lVar23 + 1;
                      puVar21 = puVar21 + 8;
                    } while (lVar23 < (short)uVar19);
                  }
                  if ((ulonglong)*(ushort *)(lVar4 + 0x60) != 0) {
                    uVar22 = 0;
                    do {
                      if (*(short *)(*(longlong *)(lVar4 + 8) + uVar22 * 2) == (short)uVar20) {
                        if (-1 < (short)uVar22) {
                          *(uint *)(pcVar18 + 8) = (uint)uVar22 & 0x7fff;
                          goto LAB_1495b2a6b;
                        }
                        break;
                      }
                      uVar22 = uVar22 + 1;
                    } while (*(ushort *)(lVar4 + 0x60) != uVar22);
                  }
                }
              }
              iVar17 = iVar17 + 1;
              pcVar18 = pcVar18 + 0x18;
            } while (iVar17 != iVar7);
          }
        }
      }
      else {
        FUN_1495bf082(plVar2,(int)plVar14[4],*(undefined4 *)((longlong)plVar14 + 4),
                      *(undefined4 *)(lVar8 + lVar10 + 0x40),0);
      }
LAB_1495b292b:
      uVar13 = uVar13 + 1;
      plVar14 = plVar14 + 0xc;
    } while (uVar13 < *(byte *)(param_1 + 8));
  }
  plVar16 = (longlong *)param_1[0xb];
  while (plVar16 != (longlong *)0x0) {
    param_1[0xb] = *plVar16;
    plVar14 = plVar16 + 2;
    plVar16 = (longlong *)plVar16[1];
    for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
      *plVar16 = *plVar14;
      plVar14 = plVar14 + 1;
      plVar16 = plVar16 + 1;
    }
    FUN_14955d65a(lVar3);
    plVar16 = (longlong *)param_1[0xb];
  }
  *(int *)((longlong)plVar2 + 0xbc) = (int)param_1[7];
  FUN_1495b8f2b(lVar3,param_1);
  return;
}



// FUNCTION 1495b2ab2 FUN_1495b2ab2 body=188 status=ok
// SIG undefined FUN_1495b2ab2(void)

void FUN_1495b2ab2(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  code *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != (int *)0x0) && (iVar1 = *param_2, 0 < iVar1)) {
    plVar3 = (longlong *)(param_2 + 2);
    iVar2 = 0;
    do {
      local_70 = FUN_1495c2c8e;
      local_68 = &LAB_1495c2f9c;
      local_60 = &LAB_1495c2fa2;
      local_58 = 0;
      local_78 = 0;
      local_50 = param_1;
      if (*plVar3 != 0) {
        FUN_14959fa98(&local_78);
        iVar1 = *param_2;
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 4;
    } while (iVar2 < iVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495b2b6f FUN_1495b2b6f body=183 status=ok
// SIG undefined FUN_1495b2b6f(void)

undefined8 FUN_1495b2b6f(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  piVar2 = *(int **)(param_2 + 0x20);
  if (((piVar2 == (int *)0x0) || (*piVar2 != 1)) || ((*(byte *)(param_2 + 7) & 1) != 0)) {
    return 0;
  }
  lVar3 = 0;
  do {
    bVar1 = *(byte *)(*(longlong *)(param_2 + 8) + lVar3);
    if (bVar1 == (&DAT_14b3f2748)[lVar3]) {
      if ((ulonglong)bVar1 == 0) goto LAB_1495b2c05;
    }
    else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)(&DAT_14b3f2748)[lVar3]]) {
      lVar3 = 0;
      break;
    }
    lVar3 = lVar3 + 1;
  } while( true );
LAB_1495b2bd4:
  bVar1 = *(byte *)(*(longlong *)(param_2 + 8) + lVar3);
  if (bVar1 == (&DAT_14b3f1684)[lVar3]) {
    if ((ulonglong)bVar1 == 0) goto LAB_1495b2c1f;
  }
  else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)(&DAT_14b3f1684)[lVar3]]) {
    return 0;
  }
  lVar3 = lVar3 + 1;
  goto LAB_1495b2bd4;
LAB_1495b2c1f:
  uVar4 = 1;
  uVar5 = 2;
  goto LAB_1495b2c0a;
LAB_1495b2c05:
  uVar4 = 2;
  uVar5 = 1;
LAB_1495b2c0a:
  lVar3 = FUN_1495a22be(param_1,piVar2,0);
  *param_3 = lVar3;
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x18) = uVar4;
  }
  return uVar5;
}



// FUNCTION 1495b2c26 FUN_1495b2c26 body=938 status=ok
// SIG undefined FUN_1495b2c26(void)

void FUN_1495b2c26(longlong *param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  int local_5c;
  
  plVar2 = (longlong *)param_1[2];
  *param_3 = 1;
  if (*(int *)(param_3 + 0x38) < 1) {
LAB_1495b2eff:
    iVar13 = *(int *)(param_3 + 0x2c);
    iVar9 = 0;
    local_5c = param_2;
    if (param_2 == 0 || iVar13 == 0) goto LAB_1495b2f18;
  }
  else {
    plVar15 = *(longlong **)(param_3 + 0x30);
    iVar13 = 0;
    local_5c = 0;
    do {
      lVar10 = *plVar15;
      piVar11 = *(int **)(lVar10 + 0x20);
      if ((*(byte *)(lVar10 + 7) & 1) == 0) {
        uVar17 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar10 + 0x40) + 0x48);
        if ((*(int *)(param_3 + 0x2c) != 0) && ((*(byte *)(plVar15[1] + 4) & 0x20) != 0)) {
          if (local_5c == 0) {
            local_5c = (int)param_1[7] + 1;
            *(int *)(param_1 + 7) = local_5c;
          }
          FUN_149584f48(plVar2,0x4d,param_2,local_5c,0);
        }
        uVar17 = *(int *)((longlong)param_1 + 0x44) - 1;
        *(uint *)((longlong)param_1 + 0x44) = uVar17;
        FUN_14959ec19(param_1,uVar3,uVar17,0x10);
      }
      iVar9 = 0;
      iVar7 = 0;
      if (piVar11 != (int *)0x0) {
        iVar9 = *piVar11;
        iVar7 = FUN_14959d77c(param_1,iVar9);
        FUN_14959d7c6(param_1,piVar11,iVar7,0,1);
      }
      iVar16 = *(int *)((longlong)plVar15 + 0x14);
      if (-1 < iVar16) {
        if (uVar17 == 0) {
          uVar17 = *(int *)((longlong)param_1 + 0x44) - 1;
          *(uint *)((longlong)param_1 + 0x44) = uVar17;
          iVar16 = *(int *)((longlong)plVar15 + 0x14);
        }
        FUN_1495c2439(param_1,iVar16,uVar17,1,iVar7);
      }
      if ((*(byte *)(plVar15[1] + 4) & 0x20) != 0) {
        if (iVar9 < 1) {
LAB_1495b2da0:
          lVar10 = *(longlong *)(*param_1 + 0x10);
        }
        else {
          piVar11 = piVar11 + 2;
          iVar16 = 1;
          do {
            lVar10 = FUN_1495862ab(param_1,*(undefined8 *)piVar11);
            if (lVar10 != 0) break;
            piVar11 = piVar11 + 8;
            bVar5 = iVar16 < iVar9;
            iVar16 = iVar16 + 1;
          } while (bVar5);
          if (lVar10 == 0) goto LAB_1495b2da0;
        }
        if ((local_5c == 0) && (local_5c = 0, *(int *)(param_3 + 0x2c) != 0)) {
          local_5c = (int)param_1[7] + 1;
          *(int *)(param_1 + 7) = local_5c;
        }
        uVar8 = FUN_149584f48(plVar2,0x51,local_5c,0,0);
        FUN_14955a5b6(plVar2,uVar8,lVar10,0xfffffffe);
      }
      FUN_149584f48(plVar2,0x9a,0,iVar7,(int)plVar15[2]);
      lVar10 = plVar15[1];
      if (*(char *)(*plVar2 + 0x61) == '\0') {
        lVar4 = plVar2[0x11];
        lVar6 = plVar2[0x12];
        *(undefined1 *)(lVar4 + -0x17 + (longlong)(int)lVar6 * 0x18) = 0xf8;
        *(longlong *)(lVar4 + -8 + (longlong)(int)lVar6 * 0x18) = lVar10;
      }
      else if ((*(byte *)(lVar10 + 4) & 0x10) != 0) {
        FUN_14955d65a();
      }
      if (0 < (longlong)(int)plVar2[0x12]) {
        *(ushort *)(plVar2[0x11] + -0x16 + (longlong)(int)plVar2[0x12] * 0x18) =
             (ushort)iVar9 & 0xff;
      }
      if (iVar9 == 1) {
        if (iVar7 != 0) {
          bVar1 = *(byte *)((longlong)param_1 + 0x1f);
          if ((ulonglong)bVar1 < 8) {
            *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
            piVar11 = (int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc);
            goto LAB_1495b2eaa;
          }
        }
      }
      else if ((int)param_1[5] < iVar9) {
        piVar11 = (int *)((longlong)param_1 + 0x2c);
        *(int *)(param_1 + 5) = iVar9;
LAB_1495b2eaa:
        *piVar11 = iVar7;
      }
      if (uVar17 != 0) {
        lVar10 = plVar2[3];
        if (*(int *)(lVar10 + 0x44) + *(int *)(lVar10 + 0x48) < 0) {
          FUN_1495a1bff(lVar10,plVar2);
        }
        else {
          *(int *)(*(longlong *)(lVar10 + 0x50) + (longlong)(int)~uVar17 * 4) = (int)plVar2[0x12];
        }
      }
      iVar13 = iVar13 + 1;
      plVar15 = plVar15 + 3;
    } while (iVar13 < *(int *)(param_3 + 0x38));
    if (local_5c == 0) goto LAB_1495b2eff;
  }
  iVar9 = FUN_149584f48(plVar2,0x12,local_5c,0,0);
  iVar13 = *(int *)(param_3 + 0x2c);
LAB_1495b2f18:
  if (0 < iVar13) {
    puVar14 = (undefined8 *)(*(longlong *)(param_3 + 0x20) + 0x18);
    iVar13 = 0;
    do {
      FUN_14959afe0(param_1,*puVar14,*(undefined4 *)((longlong)puVar14 + -4));
      iVar13 = iVar13 + 1;
      puVar14 = puVar14 + 4;
    } while (iVar13 < *(int *)(param_3 + 0x2c));
  }
  *param_3 = 0;
  if (iVar9 != 0) {
    if (*(char *)(*plVar2 + 0x61) == '\0') {
      iVar13 = (int)plVar2[0x12] + -1;
      if (-1 < iVar9) {
        iVar13 = iVar9;
      }
      puVar12 = (undefined1 *)((longlong)iVar13 * 0x18 + plVar2[0x11]);
    }
    else {
      puVar12 = &DAT_14cc1ee40;
    }
    *(int *)(puVar12 + 8) = (int)plVar2[0x12];
  }
  return;
}



// FUNCTION 1495b2fd0 FUN_1495b2fd0 body=149 status=ok
// SIG undefined FUN_1495b2fd0(void)

void FUN_1495b2fd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (0 < *(int *)(param_2 + 0x38)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    plVar5 = *(longlong **)(param_2 + 0x30);
    iVar6 = 0;
    do {
      uVar7 = 0;
      if (*(undefined4 **)(*plVar5 + 0x20) != (undefined4 *)0x0) {
        uVar7 = **(undefined4 **)(*plVar5 + 0x20);
      }
      FUN_149584f48(plVar1,0x9d,(int)plVar5[2],uVar7,0);
      lVar2 = plVar5[1];
      if (*(char *)(*plVar1 + 0x61) == '\0') {
        lVar3 = plVar1[0x11];
        lVar4 = plVar1[0x12];
        *(undefined1 *)(lVar3 + -0x17 + (longlong)(int)lVar4 * 0x18) = 0xf8;
        *(longlong *)(lVar3 + -8 + (longlong)(int)lVar4 * 0x18) = lVar2;
      }
      else if ((*(byte *)(lVar2 + 4) & 0x10) != 0) {
        FUN_14955d65a();
      }
      iVar6 = iVar6 + 1;
      plVar5 = plVar5 + 3;
    } while (iVar6 < *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 1495b3065 FUN_1495b3065 body=223 status=ok
// SIG undefined FUN_1495b3065(void)

void FUN_1495b3065(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if (*(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x28) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    iVar4 = 0;
    FUN_149584f48(uVar1,0x48,0,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    if (0 < *(int *)(param_2 + 0x38)) {
      piVar5 = (int *)(*(longlong *)(param_2 + 0x30) + 0x14);
      do {
        if (-1 < *piVar5) {
          piVar2 = *(int **)(*(longlong *)(piVar5 + -5) + 0x20);
          if ((piVar2 == (int *)0x0) || (*piVar2 != 1)) {
            FUN_14955a364(param_1,"DISTINCT aggregates must have exactly one argument");
            *piVar5 = -1;
          }
          else {
            FUN_1495ae612(param_1,piVar2,0,0);
            uVar3 = FUN_149584f48(uVar1,100,*piVar5,0,0);
            FUN_14955a5b6(uVar1,uVar3);
          }
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 6;
      } while (iVar4 < *(int *)(param_2 + 0x38));
    }
  }
  return;
}



// FUNCTION 1495b3144 FUN_1495b3144 body=90 status=ok
// SIG undefined FUN_1495b3144(void)

longlong FUN_1495b3144(longlong param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  
  if (((((*(longlong *)(param_1 + 0x30) == 0) && (**(int **)(param_1 + 0x20) == 1)) &&
       (piVar1 = *(int **)(param_1 + 0x28), *piVar1 == 1)) &&
      ((*(longlong *)(piVar1 + 0xc) == 0 && (*(int *)(*(longlong *)(piVar1 + 10) + 0x54) == 0)))) &&
     ((pcVar2 = *(char **)(*(int **)(param_1 + 0x20) + 2), *pcVar2 == -0x5b &&
      ((*(int *)(param_2 + 0x38) != 0 &&
       ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 8) + 5) & 1) != 0)))))) {
    lVar3 = 0;
    if ((*(uint *)(pcVar2 + 4) & 0x1000002) == 0) {
      lVar3 = *(longlong *)(piVar1 + 10);
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 1495b319e FUN_1495b319e body=97 status=ok
// SIG undefined FUN_1495b319e(void)

void FUN_1495b319e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x113) == '\x02') {
    pcVar1 = "";
    if (param_3 == (undefined8 *)0x0) {
      pcVar2 = "";
    }
    else if (((*(byte *)(param_2 + 8) & 0x80) == 0) ||
            (pcVar2 = pcVar1, (*(uint *)((longlong)param_3 + 100) & 3) != 2)) {
      pcVar2 = (char *)*param_3;
      pcVar1 = " USING COVERING INDEX ";
    }
    FUN_1495a08a0(param_1,0,"SCAN TABLE %s%s%s",*param_2,pcVar1,pcVar2);
  }
  return;
}



// FUNCTION 1495b31ff FUN_1495b31ff body=1593 status=ok
// SIG undefined FUN_1495b31ff(void)

void FUN_1495b31ff(longlong param_1,longlong param_2,undefined8 *param_3,ulonglong param_4,
                  byte *param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  longlong lVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ushort *puVar27;
  ulonglong uVar28;
  ulonglong local_98;
  int local_90;
  int local_74;
  
  plVar10 = *(longlong **)(param_1 + 0x10);
  uVar5 = *(uint *)((longlong)param_3 + 0x1c);
  iVar6 = *(int *)(param_1 + 0x44);
  iVar18 = iVar6 + -1;
  *(int *)(param_1 + 0x44) = iVar18;
  piVar17 = (int *)*param_3;
  bVar2 = *param_5;
  uVar7 = *(undefined4 *)(param_5 + 4);
  lVar11 = *(longlong *)(param_2 + 0x20);
  if (*(int *)((longlong)param_3 + 0x14) != 0) {
    FUN_149584f48(plVar10,0xc,*(undefined4 *)(param_3 + 2),*(int *)((longlong)param_3 + 0x14),0);
    FUN_149584f48(plVar10,0xb,0,uVar5,0);
    lVar16 = plVar10[3];
    if (*(int *)(lVar16 + 0x44) + *(int *)(lVar16 + 0x48) < 0) {
      FUN_1495a1bff(lVar16,plVar10);
    }
    else {
      *(int *)(*(longlong *)(lVar16 + 0x50) +
              (longlong)(int)~*(uint *)((longlong)param_3 + 0x14) * 4) = (int)plVar10[0x12];
    }
  }
  iVar8 = *(int *)((longlong)param_3 + 0xc);
  local_98 = param_4;
  if ((bVar2 < 0xe) && ((0x2600U >> (bVar2 & 0x1f) & 1) != 0)) {
    iVar14 = *(int *)(param_5 + 8);
    local_90 = 0;
  }
  else {
    cVar3 = *(char *)(param_1 + 0x1f);
    if (cVar3 == '\0') {
      iVar14 = *(int *)(param_1 + 0x38) + 1;
      *(int *)(param_1 + 0x38) = iVar14;
      local_90 = iVar14;
      if ((bVar2 & 0xfd) != 0xc) {
LAB_1495b37d7:
        iVar14 = FUN_14959d77c(param_1,param_4);
        goto LAB_1495b3308;
      }
LAB_1495b342f:
      iVar14 = iVar14 + 1;
      *(int *)(param_1 + 0x38) = iVar14;
    }
    else {
      bVar1 = cVar3 - 1;
      *(byte *)(param_1 + 0x1f) = bVar1;
      local_90 = *(int *)(param_1 + 0xcc + (ulonglong)bVar1 * 4);
      if ((bVar2 & 0xfd) != 0xc) goto LAB_1495b37d7;
      if (bVar1 == 0) {
        iVar14 = *(int *)(param_1 + 0x38);
        goto LAB_1495b342f;
      }
      *(byte *)(param_1 + 0x1f) = cVar3 - 2U;
      iVar14 = *(int *)(param_1 + 0xcc + (ulonglong)(byte)(cVar3 - 2U) * 4);
    }
    local_98 = 0;
  }
LAB_1495b3308:
  iVar24 = *piVar17;
  iVar9 = *(int *)(param_3 + 1);
  iVar13 = (int)local_98;
  if ((*(byte *)((longlong)param_3 + 0x24) & 1) == 0) {
    local_74 = FUN_149584f48(plVar10,0x24,iVar8,uVar5,0);
    iVar26 = 1;
    iVar25 = iVar8;
    if (0 < *(int *)(param_2 + 0xc)) {
      FUN_149584f48(plVar10,0x30,*(int *)(param_2 + 0xc),iVar18,1);
    }
  }
  else {
    iVar25 = *(int *)(param_1 + 0x34);
    iVar23 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar23;
    *(int *)(param_1 + 0x34) = iVar25 + 1;
    iVar26 = 0;
    if (*(int *)((longlong)param_3 + 0x14) != 0) {
      iVar26 = FUN_149584f48(plVar10,0x11,0,0,0);
    }
    FUN_149584f48(plVar10,0x72,iVar25,iVar23,iVar13 + (iVar24 - iVar9) + 1);
    if (iVar26 != 0) {
      if (*(char *)(*plVar10 + 0x61) == '\0') {
        iVar19 = (int)plVar10[0x12] + -1;
        if (-1 < iVar26) {
          iVar19 = iVar26;
        }
        puVar20 = (undefined1 *)((longlong)iVar19 * 0x18 + plVar10[0x11]);
      }
      else {
        puVar20 = &DAT_14cc1ee40;
      }
      *(int *)(puVar20 + 8) = (int)plVar10[0x12];
    }
    local_74 = FUN_149584f48(plVar10,0x23,iVar8,uVar5,0);
    if (0 < *(int *)(param_2 + 0xc)) {
      FUN_149584f48(plVar10,0x30,*(int *)(param_2 + 0xc),iVar18,1);
    }
    FUN_149584f48(plVar10,0x7d,iVar8,iVar23,iVar25);
    iVar26 = 0;
  }
  iVar26 = iVar26 + (iVar24 - iVar9);
  if (0 < iVar13) {
    iVar18 = iVar26 + -1;
    lVar16 = (local_98 & 0xffffffff) * 0x20;
    lVar21 = 0;
    do {
      iVar18 = iVar18 + (uint)(*(short *)(lVar11 + 0x20 + lVar21) == 0);
      lVar21 = lVar21 + 0x20;
    } while (lVar16 != lVar21);
    puVar27 = (ushort *)(lVar11 + lVar16);
    uVar28 = local_98 & 0xffffffff;
    do {
      uVar4 = *puVar27;
      iVar24 = uVar4 - 1;
      if (uVar4 == 0) {
        iVar24 = iVar18;
      }
      iVar18 = iVar18 - (uint)(uVar4 == 0);
      FUN_149584f48(plVar10,0x59,iVar25,iVar24,(int)uVar28 + iVar14 + -1);
      puVar27 = puVar27 + -0x10;
      bVar12 = 1 < uVar28;
      uVar28 = uVar28 - 1;
    } while (bVar12);
  }
  switch(bVar2) {
  case 9:
    uVar7 = *(undefined4 *)(param_5 + 8);
    uVar22 = 0x50;
    local_98 = local_98 & 0xffffffff;
    goto LAB_1495b3678;
  case 10:
    break;
  case 0xb:
    uVar22 = *(undefined8 *)(param_5 + 0x10);
    uVar15 = FUN_149584f48(plVar10,0x5b,iVar14,local_98 & 0xffffffff,local_90);
    FUN_14955a5b6(plVar10,uVar15,uVar22,local_98 & 0xffffffff);
    iVar18 = FUN_149584f48(plVar10,0x83,uVar7,local_90,iVar14);
    if (*(char *)(*plVar10 + 0x61) == '\0') {
      lVar11 = plVar10[0x11];
      *(undefined1 *)(lVar11 + 1 + (longlong)iVar18 * 0x18) = 0xfd;
      *(int *)(lVar11 + 0x10 + (longlong)iVar18 * 0x18) = iVar13;
    }
    break;
  case 0xc:
  case 0xe:
    FUN_149584f48(plVar10,0x59,iVar25,iVar26,iVar14);
    FUN_149584f48(plVar10,0x78,uVar7,local_90,0);
    FUN_149584f48(plVar10,0x79,uVar7,iVar14,local_90);
    if (0 < (longlong)(int)plVar10[0x12]) {
      *(undefined2 *)(plVar10[0x11] + -0x16 + (longlong)(int)plVar10[0x12] * 0x18) = 8;
    }
    break;
  default:
    uVar7 = *(undefined4 *)(param_5 + 4);
    uVar22 = 0xe;
    local_98 = 0;
LAB_1495b3678:
    FUN_149584f48(plVar10,uVar22,uVar7,local_98,0);
  }
  if (local_90 == 0) goto LAB_1495b369c;
  if ((bVar2 == 0xb) && (iVar13 != 1)) {
    if (*(int *)(param_1 + 0x28) < iVar13) {
      *(int *)(param_1 + 0x28) = iVar13;
      piVar17 = (int *)(param_1 + 0x2c);
LAB_1495b3788:
      *piVar17 = iVar14;
    }
  }
  else if (iVar14 != 0) {
    bVar2 = *(byte *)(param_1 + 0x1f);
    if ((ulonglong)bVar2 < 8) {
      *(byte *)(param_1 + 0x1f) = bVar2 + 1;
      piVar17 = (int *)(param_1 + (ulonglong)bVar2 * 4 + 0xcc);
      goto LAB_1495b3788;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x1f);
  if ((ulonglong)bVar2 < 8) {
    *(byte *)(param_1 + 0x1f) = bVar2 + 1;
    *(int *)(param_1 + 0xcc + (ulonglong)bVar2 * 4) = local_90;
  }
LAB_1495b369c:
  lVar11 = plVar10[3];
  if (*(int *)(lVar11 + 0x44) + *(int *)(lVar11 + 0x48) < 0) {
    FUN_1495a1bff(lVar11,plVar10);
  }
  else {
    *(int *)(*(longlong *)(lVar11 + 0x50) + (longlong)-iVar6 * 4) = (int)plVar10[0x12];
  }
  FUN_149584f48(plVar10,((*(byte *)((longlong)param_3 + 0x24) & 1) == 0) * '\x02' + '\x03',iVar8,
                local_74 + 1,0);
  if (*(int *)(param_3 + 2) != 0) {
    FUN_149584f48(plVar10,0x41,*(int *)(param_3 + 2),0,0);
  }
  lVar11 = plVar10[3];
  if (-1 < *(int *)(lVar11 + 0x44) + *(int *)(lVar11 + 0x48)) {
    *(int *)(*(longlong *)(lVar11 + 0x50) + (longlong)(int)~uVar5 * 4) = (int)plVar10[0x12];
    return;
  }
  FUN_1495a1bff(lVar11,plVar10,~uVar5);
  return;
}



// FUNCTION 1495b3838 FUN_1495b3838 body=266 status=ok
// SIG undefined FUN_1495b3838(void)

int * FUN_1495b3838(undefined8 *param_1,int *param_2,int *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != (int *)0x0) {
    if (param_2 == (int *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)*param_2;
    }
    if (0 < *param_3) {
      lVar4 = 0x18;
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)((longlong)param_3 + lVar4 + -0x10);
        if ((((lVar1 != 0) &&
             (puVar3 = (undefined1 *)FUN_1495a1c89(*param_1,lVar1,0,0), param_4 != 0)) &&
            (puVar3 != (undefined1 *)0x0)) && (iVar2 = FUN_1495a94a2(puVar3,local_4c), iVar2 != 0))
        {
          *puVar3 = 0x77;
          *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xcffffbff;
          *(undefined8 *)(puVar3 + 8) = 0;
        }
        param_2 = (int *)FUN_14958f62a(param_1,param_2);
        if (param_2 != (int *)0x0) {
          *(undefined1 *)((longlong)param_2 + lVar4 + lVar5 * 0x20) =
               *(undefined1 *)((longlong)param_3 + lVar4);
        }
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 0x20;
      } while (lVar6 < *param_3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1495b3943 FUN_1495b3943 body=224 status=ok
// SIG undefined FUN_1495b3943(void)

void FUN_1495b3943(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = &local_80;
  local_60 = 0;
  local_70 = *param_6;
  local_68 = param_5;
  local_50 = FUN_1495b3a24;
  local_48 = FUN_1495b3bf4;
  local_80 = param_2;
  local_78 = param_3;
  local_58 = param_1;
  if ((param_4 != (int *)0x0) && (iVar2 = *param_4, 0 < iVar2)) {
    plVar3 = (longlong *)(param_4 + 2);
    for (; ((*plVar3 == 0 || (iVar1 = FUN_14959fa98(&local_58), iVar1 == 0)) && (1 < iVar2));
        iVar2 = iVar2 + -1) {
      plVar3 = plVar3 + 4;
    }
  }
  *param_6 = local_70;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495b3a24 FUN_1495b3a24 body=464 status=ok
// SIG undefined FUN_1495b3a24(void)

undefined8 FUN_1495b3a24(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  short sVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[5];
  bVar1 = *param_2;
  if (plVar3[4] != 0) {
    if (bVar1 != 0xa4) {
      return 0;
    }
    iVar5 = *(int *)plVar3[1];
    lVar10 = 0;
    if (0 < (longlong)iVar5) {
      piVar6 = (int *)plVar3[1] + 0x13;
      lVar10 = 0;
      while (*(int *)(param_2 + 0x2c) != *piVar6) {
        lVar10 = lVar10 + 1;
        piVar6 = piVar6 + 0x1c;
        if (iVar5 == lVar10) {
          return 0;
        }
      }
    }
    if ((int)lVar10 == iVar5) {
      return 0;
    }
  }
  if (1 < bVar1 - 0xa4) {
    if (bVar1 != 0xa9) {
      return 0;
    }
    if ((param_2[7] & 1) == 0) {
      return 0;
    }
    lVar10 = *plVar3;
    if (lVar10 != 0) {
      do {
        if (*(longlong *)(param_2 + 0x40) == lVar10) {
          return 1;
        }
        lVar10 = *(longlong *)(lVar10 + 0x40);
      } while (lVar10 != 0);
    }
  }
  piVar6 = (int *)plVar3[2];
  if ((piVar6 != (int *)0x0) && (0 < *piVar6)) {
    lVar11 = 8;
    lVar10 = 0;
    do {
      iVar5 = FUN_14959fe84(0,*(undefined8 *)((longlong)piVar6 + lVar11),param_2,0xffffffff);
      piVar6 = (int *)plVar3[2];
      if (iVar5 == 0) {
        bVar4 = false;
        goto LAB_1495b3b43;
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x20;
    } while (lVar10 < *piVar6);
  }
  if (param_2 == (byte *)0x0) {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar7 = (char *)FUN_1495a1c89(*plVar2,param_2,0,0);
    pcVar9 = (char *)0x0;
    if ((pcVar7 != (char *)0x0) && (pcVar9 = pcVar7, *pcVar7 == -0x5b)) {
      *pcVar7 = -0x57;
    }
  }
  piVar6 = (int *)FUN_14958f62a(plVar2,plVar3[2],pcVar9);
  plVar3[2] = (longlong)piVar6;
  lVar10 = 0xffffffff;
  bVar4 = true;
LAB_1495b3b43:
  sVar8 = (short)lVar10;
  if (piVar6 != (int *)0x0) {
    param_2[7] = param_2[7] | 8;
    if (param_2 != (byte *)0x0) {
      FUN_14958288e(*plVar2,param_2);
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x30] = 0;
    param_2[0x31] = 0;
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    param_2[0x34] = 0;
    param_2[0x35] = 0;
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
    param_2[0x3c] = 0;
    param_2[0x3d] = 0;
    param_2[0x3e] = 0;
    param_2[0x3f] = 0;
    param_2[0x20] = 0;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    param_2[0x23] = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    param_2[0x2c] = 0;
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    param_2[0x2f] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x40] = 0;
    param_2[0x41] = 0;
    param_2[0x42] = 0;
    param_2[0x43] = 0;
    param_2[0x44] = 0;
    param_2[0x45] = 0;
    param_2[0x46] = 0;
    param_2[0x47] = 0;
    *param_2 = 0xa4;
    if (bVar4) {
      sVar8 = (short)*(undefined4 *)plVar3[2] + -1;
    }
    *(short *)(param_2 + 0x30) = sVar8;
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(*plVar3 + 0x58);
    *(longlong *)(param_2 + 0x40) = plVar3[3];
  }
  if (*(char *)(*plVar2 + 0x61) == '\0') {
    return 0;
  }
  return 2;
}



// FUNCTION 1495b3bf4 FUN_1495b3bf4 body=48 status=ok
// SIG undefined FUN_1495b3bf4(void)

bool FUN_1495b3bf4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = *(longlong *)(lVar1 + 0x20);
  if (lVar2 != param_2) {
    *(longlong *)(lVar1 + 0x20) = param_2;
    FUN_14959fb62();
    *(longlong *)(lVar1 + 0x20) = lVar2;
  }
  return lVar2 != param_2;
}



// FUNCTION 1495b3c24 FUN_1495b3c24 body=491 status=ok
// SIG undefined FUN_1495b3c24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1495b3c24(undefined8 *param_1,int *param_2,uint param_3,int param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar10 = (ulonglong)param_3;
  iVar4 = *param_2;
  if ((uint)param_2[1] < iVar4 + param_3) {
    if ((int)(iVar4 + param_3) < 200) {
      lVar5 = uVar10 + (longlong)iVar4 * 2;
      lVar9 = 200;
      if (lVar5 < 200) {
        lVar9 = lVar5;
      }
      param_2 = (int *)FUN_14955d6fd(*param_1,param_2,lVar9 * 0x70 | 8);
      if (param_2 != (int *)0x0) {
        param_2[1] = (int)lVar9;
        iVar4 = *param_2;
        goto LAB_1495b3c4e;
      }
    }
    else {
      FUN_14955a364(param_1,"too many FROM clause terms, max: %d",200);
    }
    param_2 = (int *)0x0;
  }
  else {
LAB_1495b3c4e:
    if (param_4 < iVar4) {
      lVar5 = (longlong)iVar4;
      lVar9 = lVar5 * 0x70 + -0x68;
      do {
        lVar5 = lVar5 + -1;
        puVar6 = (undefined8 *)((longlong)param_2 + lVar9);
        puVar8 = (undefined8 *)((longlong)param_2 + lVar9 + uVar10 * 0x70);
        for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        lVar9 = lVar9 + -0x70;
      } while (param_4 < lVar5);
      iVar4 = *param_2;
    }
    lVar9 = (longlong)param_4;
    *param_2 = iVar4 + param_3;
    uVar7 = 0;
    memset(param_2 + lVar9 * 0x1c + 2,0,uVar10 * 0x70);
    auVar1 = _DAT_149931e80;
    lVar5 = (longlong)(int)(param_4 + param_3);
    if ((longlong)(int)(param_4 + param_3) < lVar9 + 1) {
      lVar5 = lVar9 + 1;
    }
    lVar2 = (lVar5 - lVar9) + -1;
    auVar11._8_4_ = (int)lVar2;
    auVar11._0_8_ = lVar2;
    auVar11._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    piVar3 = param_2 + lVar9 * 0x1c + 0x67;
    auVar13 = pmovsxbq(in_XMM1,0x302);
    auVar14 = pmovsxbq(in_XMM2,0x100);
    auVar11 = auVar11 ^ _DAT_149931e80;
    do {
      lVar2 = auVar11._0_8_;
      lVar12 = auVar11._8_8_;
      if ((bool)(~(lVar2 < (longlong)(uVar7 ^ auVar1._0_8_)) & 1)) {
        piVar3[-0x54] = -1;
      }
      auVar15._8_4_ = (int)uVar7;
      auVar15._0_8_ = uVar7;
      auVar15._12_4_ = (int)(uVar7 >> 0x20);
      if ((longlong)((auVar15._8_8_ | auVar14._8_8_) ^ auVar1._8_8_) <= lVar12) {
        piVar3[-0x38] = -1;
      }
      auVar15 = (auVar15 | auVar13) ^ auVar1;
      if (auVar15._0_8_ <= lVar2) {
        piVar3[-0x1c] = -1;
      }
      if (auVar15._8_8_ <= lVar12) {
        *piVar3 = -1;
      }
      uVar7 = uVar7 + 4;
      piVar3 = piVar3 + 0x70;
    } while (((lVar5 - lVar9) + 3U & 0xfffffffffffffffc) != uVar7);
  }
  return param_2;
}



// FUNCTION 1495b3e0f FUN_1495b3e0f body=370 status=ok
// SIG undefined FUN_1495b3e0f(void)

void FUN_1495b3e0f(undefined8 param_1,longlong param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    piVar5 = *(int **)(param_2 + 0x20);
    if ((piVar5 != (int *)0x0) && (0 < *piVar5)) {
      piVar7 = piVar5 + 2;
      lVar3 = 0;
      do {
        uVar2 = FUN_1495b3f81(param_1,*(undefined8 *)piVar7);
        *(undefined8 *)piVar7 = uVar2;
        lVar3 = lVar3 + 1;
        piVar7 = piVar7 + 8;
      } while (lVar3 < *piVar5);
    }
    piVar5 = *(int **)(param_2 + 0x38);
    if ((piVar5 != (int *)0x0) && (0 < *piVar5)) {
      piVar7 = piVar5 + 2;
      lVar3 = 0;
      do {
        uVar2 = FUN_1495b3f81(param_1,*(undefined8 *)piVar7);
        *(undefined8 *)piVar7 = uVar2;
        lVar3 = lVar3 + 1;
        piVar7 = piVar7 + 8;
      } while (lVar3 < *piVar5);
    }
    piVar5 = *(int **)(param_2 + 0x48);
    if ((piVar5 != (int *)0x0) && (0 < *piVar5)) {
      piVar7 = piVar5 + 2;
      lVar3 = 0;
      do {
        uVar2 = FUN_1495b3f81(param_1,*(undefined8 *)piVar7);
        *(undefined8 *)piVar7 = uVar2;
        lVar3 = lVar3 + 1;
        piVar7 = piVar7 + 8;
      } while (lVar3 < *piVar5);
    }
    uVar2 = FUN_1495b3f81(param_1,*(undefined8 *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x40) = uVar2;
    uVar2 = FUN_1495b3f81(param_1,*(undefined8 *)(param_2 + 0x30));
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    iVar6 = **(int **)(param_2 + 0x28);
    if (0 < iVar6) {
      piVar5 = *(int **)(param_2 + 0x28) + 2;
      do {
        FUN_1495b3e0f(param_1,*(undefined8 *)(piVar5 + 10),1);
        if ((((*(byte *)(piVar5 + 0x10) & 4) != 0) &&
            (piVar7 = *(int **)(piVar5 + 0x18), piVar7 != (int *)0x0)) && (0 < *piVar7)) {
          piVar4 = piVar7 + 2;
          lVar3 = 0;
          do {
            uVar2 = FUN_1495b3f81(param_1,*(undefined8 *)piVar4);
            *(undefined8 *)piVar4 = uVar2;
            lVar3 = lVar3 + 1;
            piVar4 = piVar4 + 8;
          } while (lVar3 < *piVar7);
        }
        piVar5 = piVar5 + 0x1c;
        bVar1 = 1 < iVar6;
        iVar6 = iVar6 + -1;
      } while (bVar1);
    }
    if (param_3 == 0) break;
    param_2 = *(longlong *)(param_2 + 0x50);
  }
  return;
}



// FUNCTION 1495b3f81 FUN_1495b3f81 body=708 status=ok
// SIG undefined FUN_1495b3f81(void)

char * FUN_1495b3f81(undefined8 *param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char cVar6;
  char *pcVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  char local_88 [16];
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (char *)0x0) {
LAB_1495b41a4:
    param_2 = (char *)0x0;
  }
  else {
    if (((param_2[4] & 1U) != 0) && (*(int *)(param_1 + 1) == (int)*(short *)(param_2 + 0x34))) {
      *(undefined2 *)(param_2 + 0x34) = *(undefined2 *)((longlong)param_1 + 0xc);
    }
    if (*param_2 == -0x5c) {
      if (*(int *)(param_2 + 0x2c) == *(int *)(param_1 + 1)) {
        if ((longlong)*(short *)(param_2 + 0x30) < 0) {
          *param_2 = 'w';
          goto LAB_1495b3fe6;
        }
        pcVar4 = *(char **)(param_1[3] + 8 + (longlong)*(short *)(param_2 + 0x30) * 0x20);
        cVar1 = *pcVar4;
        cVar6 = cVar1;
        if (cVar1 == -0x53) {
          cVar6 = pcVar4[2];
        }
        pcVar7 = pcVar4;
        if (cVar6 == -0x52) {
LAB_1495b413e:
          if (1 < **(int **)(pcVar7 + 0x20)) {
            FUN_1495a1b0b(*param_1);
            goto LAB_1495b3fe6;
          }
        }
        else if (cVar6 == -0x78) {
          pcVar7 = *(char **)(pcVar4 + 0x20);
          goto LAB_1495b413e;
        }
        uVar3 = *(undefined8 *)*param_1;
        if ((cVar1 == -0x5c) || (*(int *)(param_1 + 2) == 0)) {
          pcVar7 = pcVar4;
          if (pcVar4 != (char *)0x0) goto LAB_1495b4186;
        }
        else {
          local_88[8] = '\0';
          local_88[9] = '\0';
          local_88[10] = '\0';
          local_88[0xb] = '\0';
          local_88[0xc] = '\0';
          local_88[0xd] = '\0';
          local_88[0xe] = '\0';
          local_88[0xf] = '\0';
          uStack_70 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          local_48 = 0;
          local_88[0] = -0x50;
          local_88[1] = '\0';
          local_88[2] = '\0';
          local_88[3] = '\0';
          local_88[4] = '\0';
          local_88[5] = '\0';
          local_88[6] = '\0';
          local_88[7] = '\0';
          lStack_60 = (ulonglong)*(uint *)((longlong)param_1 + 0xc) << 0x20;
          pcVar7 = local_88;
          local_78 = pcVar4;
LAB_1495b4186:
          pcVar4 = (char *)FUN_1495a1c89(uVar3,pcVar7,0,0);
          if (pcVar4 != (char *)0x0) {
            if (*(int *)(param_1 + 2) != 0) {
              pcVar4[6] = pcVar4[6] | 0x10;
            }
            if ((param_2[4] & 1U) != 0) {
              *(undefined2 *)(pcVar4 + 0x34) = *(undefined2 *)(param_2 + 0x34);
              pcVar4[4] = pcVar4[4] | 1;
            }
            FUN_14958288e(uVar3,param_2);
            if ((*pcVar4 != 'o') && (*pcVar4 != -0x5c)) {
              puVar5 = (undefined8 *)FUN_1495862ab(*param_1,pcVar4);
              if (puVar5 == (undefined8 *)0x0) {
                pcVar7 = "BINARY";
              }
              else {
                pcVar7 = (char *)*puVar5;
              }
              pcVar4 = (char *)FUN_1495a66d3(*param_1,pcVar4,pcVar7);
            }
            pcVar4[5] = pcVar4[5] & 0xfe;
            param_2 = pcVar4;
            goto LAB_1495b3fe6;
          }
        }
        FUN_14958288e(uVar3,param_2);
        goto LAB_1495b41a4;
      }
    }
    else if ((*param_2 == -0x50) && (*(int *)(param_2 + 0x2c) == *(int *)(param_1 + 1))) {
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0xc);
    }
    uVar3 = FUN_1495b3f81(param_1,*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    uVar3 = FUN_1495b3f81(param_1,*(undefined8 *)(param_2 + 0x18));
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    piVar2 = *(int **)(param_2 + 0x20);
    if ((param_2[5] & 8U) == 0) {
      if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
        piVar9 = piVar2 + 2;
        lVar10 = 0;
        do {
          uVar3 = FUN_1495b3f81(param_1,*(undefined8 *)piVar9);
          *(undefined8 *)piVar9 = uVar3;
          lVar10 = lVar10 + 1;
          piVar9 = piVar9 + 8;
        } while (lVar10 < *piVar2);
      }
    }
    else {
      FUN_1495b3e0f(param_1,piVar2,1);
    }
    if ((param_2[7] & 1U) != 0) {
      lVar10 = *(longlong *)(param_2 + 0x40);
      uVar3 = FUN_1495b3f81(param_1,*(undefined8 *)(lVar10 + 0x48));
      *(undefined8 *)(lVar10 + 0x48) = uVar3;
      piVar2 = *(int **)(lVar10 + 0x10);
      if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
        piVar9 = piVar2 + 2;
        lVar8 = 0;
        do {
          uVar3 = FUN_1495b3f81(param_1,*(undefined8 *)piVar9);
          *(undefined8 *)piVar9 = uVar3;
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 8;
        } while (lVar8 < *piVar2);
      }
      piVar2 = *(int **)(lVar10 + 0x18);
      if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
        piVar9 = piVar2 + 2;
        lVar10 = 0;
        do {
          uVar3 = FUN_1495b3f81(param_1,*(undefined8 *)piVar9);
          *(undefined8 *)piVar9 = uVar3;
          lVar10 = lVar10 + 1;
          piVar9 = piVar9 + 8;
        } while (lVar10 < *piVar2);
      }
    }
  }
LAB_1495b3fe6:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1495b4246 FUN_1495b4246 body=108 status=ok
// SIG undefined FUN_1495b4246(void)

int FUN_1495b4246(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(short)param_1;
  iVar2 = (int)(short)param_2;
  if ((short)param_1 < (short)param_2) {
    if (iVar2 <= iVar1 + 0x31) {
      if (iVar1 + 0x1f < iVar2) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = iVar2 + (uint)(byte)(&DAT_14bd477e0)[iVar2 - iVar1];
      }
    }
  }
  else {
    param_2 = param_1;
    if (iVar1 <= iVar2 + 0x31) {
      if (iVar2 + 0x1f < iVar1) {
        param_2 = param_1 + 1;
      }
      else {
        param_2 = iVar1 + (uint)(byte)(&DAT_14bd477e0)[iVar1 - iVar2];
      }
    }
  }
  return param_2;
}



// FUNCTION 1495b42b2 FUN_1495b42b2 body=88 status=ok
// SIG undefined FUN_1495b42b2(void)

longlong FUN_1495b42b2(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_2 + 0x50) == 0) ||
     (lVar1 = FUN_1495b42b2(param_1,*(longlong *)(param_2 + 0x50),param_3), lVar1 == 0)) {
    if (param_3 < **(int **)(param_2 + 0x20)) {
      lVar1 = FUN_1495862ab(param_1,*(undefined8 *)
                                     (*(int **)(param_2 + 0x20) + (longlong)param_3 * 8 + 2));
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1495b430a FUN_1495b430a body=207 status=ok
// SIG undefined FUN_1495b430a(void)

longlong FUN_1495b430a(longlong *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  piVar2 = *(int **)(param_2 + 0x48);
  iVar1 = *piVar2;
  lVar3 = *param_1;
  lVar4 = FUN_14959b3e4(lVar3,iVar1 + 1,1);
  if (lVar4 != 0 && 0 < (longlong)iVar1) {
    plVar8 = (longlong *)(piVar2 + 2);
    lVar7 = 0;
    do {
      lVar6 = *plVar8;
      if ((*(byte *)(lVar6 + 5) & 1) == 0) {
        puVar5 = (undefined8 *)FUN_1495b42b2(param_1,param_2,*(ushort *)(plVar8 + 3) - 1);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = *(undefined8 **)(lVar3 + 0x10);
        }
        lVar6 = FUN_1495a66d3(param_1,lVar6,*puVar5);
        *plVar8 = lVar6;
      }
      else {
        puVar5 = (undefined8 *)FUN_1495862ab(param_1,lVar6);
      }
      *(undefined8 **)(lVar4 + 0x20 + lVar7 * 8) = puVar5;
      *(char *)(*(longlong *)(lVar4 + 0x18) + lVar7) = (char)plVar8[2];
      lVar7 = lVar7 + 1;
      plVar8 = plVar8 + 4;
    } while (iVar1 != lVar7);
  }
  return lVar4;
}



// FUNCTION 1495b43d9 FUN_1495b43d9 body=1174 status=ok
// SIG undefined FUN_1495b43d9(void)

undefined4
FUN_1495b43d9(longlong *param_1,longlong param_2,longlong param_3,undefined1 *param_4,
             undefined4 param_5,int param_6,int *param_7,undefined4 param_8)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  plVar2 = (longlong *)param_1[2];
  lVar4 = plVar2[0x12];
  iVar13 = *(int *)((longlong)param_1 + 0x44);
  iVar8 = iVar13 + -1;
  *(int *)((longlong)param_1 + 0x44) = iVar8;
  if (param_6 != 0) {
    iVar6 = FUN_149584f48(plVar2,0x14,param_6,0,0);
    if (param_7 != (int *)0x0) {
      *param_7 = *param_7 + 1;
    }
    iVar7 = FUN_149584f48(plVar2,0x56,*(undefined4 *)(param_3 + 8),param_6 + 1,
                          *(undefined4 *)(param_3 + 0xc));
    FUN_14955a5b6(plVar2,iVar7,param_7,&DAT_fffffff7);
    FUN_149584f48(plVar2,0x10,iVar7 + 2,iVar8,iVar7 + 2);
    if (*(char *)(*plVar2 + 0x61) == '\0') {
      iVar7 = (int)plVar2[0x12] + -1;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      puVar10 = (undefined1 *)((longlong)iVar7 * 0x18 + plVar2[0x11]);
    }
    else {
      puVar10 = &DAT_14cc1ee40;
    }
    *(int *)(puVar10 + 8) = (int)plVar2[0x12];
    FUN_149584f48(plVar2,0x4d,*(undefined4 *)(param_3 + 8),param_6 + 1,*(int *)(param_3 + 0xc) + -1)
    ;
    FUN_149584f48(plVar2,0x45,1,param_6,0);
  }
  if (*(char *)(*param_1 + 0x61) != '\0') {
    return 0;
  }
  if (0 < *(int *)(param_2 + 0xc)) {
    FUN_149584f48(plVar2,0x30,*(int *)(param_2 + 0xc),iVar8,1);
  }
  plVar11 = plVar2;
  switch(*param_4) {
  case 10:
    if ((int)param_1[6] != 0) goto LAB_1495b4706;
    uVar9 = *(undefined4 *)(param_3 + 8);
    uVar15 = *(undefined4 *)(param_3 + 0xc);
    uVar14 = *(undefined4 *)(param_4 + 4);
    plVar11 = (longlong *)param_1[2];
    uVar12 = 0x4c;
    break;
  case 0xb:
    if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
      iVar8 = (int)param_1[7] + 1;
      *(int *)(param_1 + 7) = iVar8;
    }
    else {
      bVar5 = *(char *)((longlong)param_1 + 0x1f) - 1;
      *(byte *)((longlong)param_1 + 0x1f) = bVar5;
      iVar8 = *(int *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0xcc);
    }
    uVar15 = *(undefined4 *)(param_3 + 0xc);
    uVar12 = *(undefined8 *)(param_4 + 0x10);
    uVar9 = FUN_149584f48(plVar2,0x5b,*(undefined4 *)(param_3 + 8),uVar15,iVar8);
    FUN_14955a5b6(plVar2,uVar9,uVar12,uVar15);
    uVar15 = *(undefined4 *)(param_3 + 0xc);
    iVar6 = FUN_149584f48(plVar2,0x83,*(undefined4 *)(param_4 + 4),iVar8,
                          *(undefined4 *)(param_3 + 8));
    if (*(char *)(*plVar2 + 0x61) == '\0') {
      lVar3 = plVar2[0x11];
      *(undefined1 *)(lVar3 + 1 + (longlong)iVar6 * 0x18) = 0xfd;
      *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18) = uVar15;
    }
    goto joined_r0x0001495b4666;
  case 0xc:
    cVar1 = *(char *)((longlong)param_1 + 0x1f);
    if (cVar1 == '\0') {
      iVar6 = (int)param_1[7] + 1;
      iVar8 = iVar6;
LAB_1495b45d0:
      iVar6 = iVar6 + 1;
      *(int *)(param_1 + 7) = iVar6;
    }
    else {
      bVar5 = cVar1 - 1;
      *(byte *)((longlong)param_1 + 0x1f) = bVar5;
      iVar8 = *(int *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0xcc);
      if (bVar5 == 0) {
        iVar6 = (int)param_1[7];
        goto LAB_1495b45d0;
      }
      *(byte *)((longlong)param_1 + 0x1f) = cVar1 - 2U;
      iVar6 = *(int *)((longlong)param_1 + (ulonglong)(byte)(cVar1 - 2U) * 4 + 0xcc);
    }
    FUN_149584f48(plVar2,0x5b,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),iVar8);
    FUN_149584f48(plVar2,0x78,*(undefined4 *)(param_4 + 4),iVar6,0);
    FUN_149584f48(plVar2,0x79,*(undefined4 *)(param_4 + 4),iVar8,iVar6);
    if (0 < (longlong)(int)plVar2[0x12]) {
      *(undefined2 *)(plVar2[0x11] + -0x16 + (longlong)(int)plVar2[0x12] * 0x18) = 8;
    }
    if (iVar6 != 0) {
      bVar5 = *(byte *)((longlong)param_1 + 0x1f);
      if ((ulonglong)bVar5 < 8) {
        *(byte *)((longlong)param_1 + 0x1f) = bVar5 + 1;
        *(int *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0xcc) = iVar6;
      }
    }
joined_r0x0001495b4666:
    if (iVar8 != 0) {
      bVar5 = *(byte *)((longlong)param_1 + 0x1f);
      if ((ulonglong)bVar5 < 8) {
        *(byte *)((longlong)param_1 + 0x1f) = bVar5 + 1;
        *(int *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0xcc) = iVar8;
      }
    }
    goto LAB_1495b4706;
  case 0xd:
    iVar8 = *(int *)(param_4 + 8);
    uVar15 = *(undefined4 *)(param_3 + 0xc);
    if (iVar8 == 0) {
      iVar8 = FUN_14959d77c(param_1);
      *(int *)(param_4 + 8) = iVar8;
      uVar15 = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(param_4 + 0xc) = uVar15;
    }
    FUN_149584f48(param_1[2],0x4c,*(undefined4 *)(param_3 + 8),iVar8,uVar15);
    uVar9 = *(undefined4 *)(param_4 + 4);
    uVar15 = 0;
    uVar12 = 0xe;
    uVar14 = 0;
    break;
  default:
    uVar9 = *(undefined4 *)(param_3 + 8);
    uVar14 = *(undefined4 *)(param_3 + 0xc);
    uVar15 = 0;
    uVar12 = 0x50;
  }
  FUN_149584f48(plVar11,uVar12,uVar9,uVar14,uVar15);
LAB_1495b4706:
  if (*(int *)(param_2 + 8) != 0) {
    FUN_149584f48(plVar2,0x3b,*(int *)(param_2 + 8),param_8,0);
  }
  lVar3 = plVar2[3];
  iVar13 = -iVar13;
  if (*(int *)(lVar3 + 0x44) + *(int *)(lVar3 + 0x48) < 0) {
    FUN_1495a1bff(lVar3,plVar2,iVar13);
  }
  else {
    *(int *)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar13 * 4) = (int)plVar2[0x12];
  }
  FUN_149584f48(plVar2,0x41,param_5,0,0);
  return (int)lVar4;
}



// FUNCTION 1495b486f FUN_1495b486f body=321 status=ok
// SIG undefined FUN_1495b486f(void)

void FUN_1495b486f(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  code *local_58;
  undefined1 *local_50;
  short local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (char *)0x0) {
    while ((param_2[4] & 1U) == 0) {
      if (*param_2 != ',') {
        if (*param_2 == '5') {
          pcVar1 = *(char **)(param_2 + 0x10);
          pcVar2 = *(char **)(param_2 + 0x18);
          if (*pcVar2 == -0x5c) {
            local_3c = 1;
            local_58 = FUN_14959f99d;
            local_50 = &LAB_14959fa8c;
            local_38 = 0;
            if ((pcVar1 == (char *)0x0) || (FUN_14959fa98(local_60,pcVar1), local_3c != 0)) {
              FUN_1495b4a50(param_1,pcVar2,pcVar1,param_2);
            }
          }
          if (*pcVar1 == -0x5c) {
            local_3c = 1;
            local_58 = FUN_14959f99d;
            local_50 = &LAB_14959fa8c;
            local_38 = 0;
            if ((pcVar2 == (char *)0x0) || (FUN_14959fa98(local_60,pcVar2), local_3c != 0)) {
              FUN_1495b4a50(param_1,pcVar1,pcVar2,param_2);
            }
          }
        }
        break;
      }
      FUN_1495b486f(param_1,*(undefined8 *)(param_2 + 0x18));
      param_2 = *(char **)(param_2 + 0x10);
      if (param_2 == (char *)0x0) break;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495b49b1 FUN_1495b49b1 body=159 status=ok
// SIG undefined FUN_1495b49b1(void)

undefined8 FUN_1495b49b1(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if ((*param_2 == -0x5c) && ((param_2[4] & 9U) == 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    uVar4 = 1;
    if (0 < (longlong)*(int *)(puVar1 + 1)) {
      lVar3 = 0;
      do {
        pcVar2 = *(char **)(puVar1[2] + lVar3);
        if (((pcVar2 != param_2) && (*(int *)(pcVar2 + 0x2c) == *(int *)(param_2 + 0x2c))) &&
           (*(short *)(pcVar2 + 0x30) == *(short *)(param_2 + 0x30))) {
          *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
          *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xff7ffff7 | 8;
          lVar3 = *(longlong *)(puVar1[2] + 8 + lVar3);
          if (lVar3 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_1495a1c89(*(undefined8 *)*puVar1,lVar3,0,0);
          }
          *(undefined8 *)(param_2 + 0x10) = uVar4;
          return 1;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)*(int *)(puVar1 + 1) * 0x10 != lVar3);
    }
  }
  return uVar4;
}



// FUNCTION 1495b4a50 FUN_1495b4a50 body=296 status=ok
// SIG undefined FUN_1495b4a50(void)

void FUN_1495b4a50(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(byte *)(param_3 + 4) & 8) == 0) && (cVar3 = FUN_14959f8fa(param_3), cVar3 != '\0')) {
    return;
  }
  lVar4 = FUN_149586264(*param_1,*(undefined8 *)
                                  (param_4 + 0x10 +
                                  (ulonglong)((*(uint *)(param_4 + 4) & 0x200) >> 6)));
  if ((lVar4 == 0) || (*(code **)(lVar4 + 0x18) == FUN_1495b4b78)) {
    iVar1 = *(int *)(param_1 + 1);
    lVar4 = param_1[2];
    if (0 < (longlong)iVar1) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar4 + lVar5) + 0x2c) == *(int *)(param_2 + 0x2c)) &&
           (*(short *)(*(longlong *)(lVar4 + lVar5) + 0x30) == *(short *)(param_2 + 0x30))) {
          return;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)iVar1 << 4 != lVar5);
    }
    *(int *)(param_1 + 1) = iVar1 + 1;
    uVar2 = *(undefined8 *)*param_1;
    lVar5 = FUN_14955d6fd(uVar2,lVar4,(longlong)(iVar1 * 2 + 2) << 3);
    if ((lVar4 == 0) || (lVar5 != 0)) {
      param_1[2] = lVar5;
      if (lVar5 != 0) {
        if ((*(byte *)(param_3 + 4) & 8) != 0) {
          param_3 = *(longlong *)(param_3 + 0x10);
        }
        *(longlong *)(lVar5 + -0x10 + (longlong)*(int *)(param_1 + 1) * 0x10) = param_2;
        *(longlong *)(param_1[2] + -8 + (longlong)*(int *)(param_1 + 1) * 0x10) = param_3;
        return;
      }
    }
    else {
      FUN_14955d65a(uVar2,lVar4);
      param_1[2] = 0;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1495b4b78 FUN_1495b4b78 body=44 status=ok
// SIG undefined FUN_1495b4b78(void)

int FUN_1495b4b78(undefined8 param_1,int param_2,void *param_3,int param_4,void *param_5)

{
  int iVar1;
  
  iVar1 = param_4;
  if (param_2 < param_4) {
    iVar1 = param_2;
  }
  iVar1 = memcmp(param_3,param_5,(longlong)iVar1);
  if (iVar1 == 0) {
    iVar1 = param_2 - param_4;
  }
  return iVar1;
}



// FUNCTION 1495b4ba4 FUN_1495b4ba4 body=259 status=ok
// SIG undefined FUN_1495b4ba4(void)

void FUN_1495b4ba4(longlong param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x50)) {
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x28), *param_2 < iVar3)) {
      *param_2 = iVar3;
    }
    if ((*(longlong *)(param_1 + 0x40) != 0) &&
       (iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x28), *param_2 < iVar3)) {
      *param_2 = iVar3;
    }
    if ((*(longlong *)(param_1 + 0x60) != 0) &&
       (iVar3 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x28), *param_2 < iVar3)) {
      *param_2 = iVar3;
    }
    piVar2 = *(int **)(param_1 + 0x20);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      if (0 < iVar3) {
        plVar4 = (longlong *)(piVar2 + 2);
        lVar5 = 0;
        do {
          if ((*plVar4 != 0) && (iVar1 = *(int *)(*plVar4 + 0x28), *param_2 < iVar1)) {
            *param_2 = iVar1;
            iVar3 = *piVar2;
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 4;
        } while (lVar5 < iVar3);
      }
    }
    piVar2 = *(int **)(param_1 + 0x38);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      if (0 < iVar3) {
        plVar4 = (longlong *)(piVar2 + 2);
        lVar5 = 0;
        do {
          if ((*plVar4 != 0) && (iVar1 = *(int *)(*plVar4 + 0x28), *param_2 < iVar1)) {
            *param_2 = iVar1;
            iVar3 = *piVar2;
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 4;
        } while (lVar5 < iVar3);
      }
    }
    piVar2 = *(int **)(param_1 + 0x48);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      if (0 < iVar3) {
        plVar4 = (longlong *)(piVar2 + 2);
        lVar5 = 0;
        do {
          if ((*plVar4 != 0) && (iVar1 = *(int *)(*plVar4 + 0x28), *param_2 < iVar1)) {
            *param_2 = iVar1;
            iVar3 = *piVar2;
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 4;
        } while (lVar5 < iVar3);
      }
    }
  }
  return;
}



// FUNCTION 1495b4ca7 FUN_1495b4ca7 body=116 status=ok
// SIG undefined FUN_1495b4ca7(void)

void FUN_1495b4ca7(longlong param_1,char *param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  while (pcVar1 = param_2, param_2 != (char *)0x0) {
    while ((*(uint *)(pcVar1 + 4) & 0x41000) != 0) {
      if ((*(uint *)(pcVar1 + 4) >> 0x12 & 1) == 0) {
        pcVar2 = pcVar1 + 0x10;
      }
      else {
        pcVar2 = (char *)(*(longlong *)(pcVar1 + 0x20) + 8);
      }
      pcVar1 = *(char **)pcVar2;
      if (*(char **)pcVar2 == (char *)0x0) goto LAB_1495b4ce2;
    }
    *(char *)(param_1 + 0x10) = param_3;
    if (*pcVar1 != param_3) {
      FUN_1495b8fc6(param_1,param_2,0);
      return;
    }
    FUN_1495b4ca7(param_1,*(undefined8 *)(pcVar1 + 0x10));
    param_2 = *(char **)(pcVar1 + 0x18);
  }
LAB_1495b4ce2:
  *(char *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 1495b4d1b FUN_1495b4d1b body=2504 status=ok
// SIG undefined FUN_1495b4d1b(void)

void FUN_1495b4d1b(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  size_t sVar18;
  uint *puVar19;
  longlong lVar20;
  short sVar21;
  ulonglong uVar22;
  int *piVar23;
  longlong *plVar24;
  ulonglong *puVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong lVar30;
  longlong *plVar31;
  uint uVar32;
  ulonglong uVar33;
  void *_Dst;
  short sVar34;
  bool bVar35;
  undefined1 auStack_128 [32];
  short local_108;
  ulonglong *local_100;
  ulonglong *local_f8;
  uint local_ec;
  longlong *local_e8;
  int local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  int local_94;
  uint local_90;
  uint local_8c;
  ulonglong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  uint *local_68;
  ulonglong *local_60;
  size_t local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *puVar3;
  bVar6 = *(byte *)(param_1 + 8);
  uVar28 = 1;
  if (1 < bVar6) {
    uVar28 = (ulonglong)((uint)(bVar6 != 2) * 5 + 5);
  }
  iVar13 = 0;
  if ((short)param_2 != 0 && (int *)param_1[2] != (int *)0x0) {
    iVar13 = *(int *)param_1[2];
  }
  iVar14 = (int)uVar28 * 2;
  local_e8 = param_1;
  local_88 = (ulonglong *)
             FUN_14955d750(uVar4,(longlong)
                                 (int)(((uint)bVar6 * 8 + 0x20) * iVar14 +
                                      (int)((longlong)iVar13 * 2)));
  if (local_88 == (ulonglong *)0x0) {
    if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar33 = (ulonglong)(uint)((int)uVar28 << 5);
  puVar16 = (ulonglong *)((longlong)local_88 + uVar33);
  puVar1 = (undefined8 *)((longlong)local_88 + uVar33 + 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((longlong)local_88 + uVar33) = 0;
  ((undefined8 *)((longlong)local_88 + uVar33))[1] = 0;
  _Dst = (void *)(uVar33 + (longlong)puVar16);
  uVar27 = iVar14 + 1;
  puVar17 = local_88 + 3;
  do {
    *puVar17 = (ulonglong)_Dst;
    uVar27 = uVar27 - 1;
    _Dst = (void *)((longlong)_Dst + (ulonglong)((uint)bVar6 * 8));
    puVar17 = puVar17 + 4;
  } while (1 < uVar27);
  local_dc = iVar13;
  local_d0 = (ulonglong)param_2;
  local_c8 = (ulonglong)bVar6;
  local_c0 = uVar28;
  local_a8 = uVar4;
  local_a0 = puVar3;
  if (iVar13 == 0) {
    uVar27 = 0x30;
    if (*(uint *)((longlong)puVar3 + 0xbc) < 0x30) {
      uVar27 = *(uint *)((longlong)puVar3 + 0xbc);
    }
    uVar7 = (undefined2)uVar27;
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,(longlong)iVar13 * 2);
    uVar27 = 0x30;
    if (*(uint *)((longlong)local_a0 + 0xbc) < 0x30) {
      uVar27 = *(uint *)((longlong)local_a0 + 0xbc);
    }
    uVar7 = (undefined2)uVar27;
    *(byte *)((longlong)puVar16 + 0x16) = -(local_c8 != 0) | (byte)iVar13;
  }
  *(undefined2 *)(puVar16 + 2) = uVar7;
  plVar31 = local_e8;
  if (local_c8 == 0) {
    sVar34 = (short)local_d0;
  }
  else {
    local_94 = (int)local_d0 + 0x10;
    local_90 = 2;
    if (2 < (uint)local_c0) {
      local_90 = (uint)local_c0;
    }
    local_78 = -local_c8;
    uVar29 = 0;
    local_b0 = 0;
    uVar27 = 0;
    lVar20 = 0;
    puVar17 = local_88;
    uVar26 = 1;
    do {
      sVar18 = lVar20 << 3;
      while (puVar25 = puVar17, lVar30 = lVar20 + 1, (int)uVar26 < 1) {
        sVar18 = sVar18 + 8;
        uVar26 = 0;
        puVar17 = puVar16;
        puVar16 = puVar25;
        lVar20 = lVar30;
        if (local_78 + lVar30 == 0) goto LAB_1495b5624;
      }
      local_68 = (uint *)((longlong)puVar25 + 0x34);
      uVar32 = 0;
      local_ec = 0;
      local_b8 = puVar25;
      local_8c = uVar26;
      local_80 = lVar30;
      local_70 = lVar20;
      local_60 = puVar16;
      local_58 = sVar18;
      do {
        for (puVar17 = (ulonglong *)plVar31[10]; puVar17 != (ulonglong *)0x0;
            puVar17 = (ulonglong *)puVar17[8]) {
          bVar6 = *(byte *)((longlong)puVar16 + 0x16);
          local_50 = 0;
          uVar28 = *puVar16;
          if ((((*puVar17 & ~uVar28) == 0) && (uVar33 = puVar17[1], (uVar33 & uVar28) == 0)) &&
             ((sVar34 = (short)puVar16[2], (*(byte *)((longlong)puVar17 + 0x29) & 0x40) == 0 ||
              (2 < sVar34)))) {
            local_d8 = uVar29;
            local_d4 = uVar27;
            uVar12 = FUN_1495b4246(*(undefined2 *)((longlong)puVar17 + 0x12),
                                   *(short *)((longlong)puVar17 + 0x14) + sVar34);
            iVar13 = FUN_1495b4246(uVar12,*(undefined2 *)((longlong)puVar16 + 0x14));
            sVar34 = sVar34 + *(short *)((longlong)puVar17 + 0x16);
            if ((char)bVar6 < '\0') {
              local_f8 = &local_50;
              local_108 = (short)local_70;
              local_100 = puVar17;
              bVar6 = FUN_1495be805(local_e8,local_e8[2],puVar16,
                                    *(undefined2 *)((longlong)local_e8 + 0x3c));
            }
            else {
              local_50 = puVar16[1];
            }
            iVar14 = local_dc - (char)bVar6;
            if ((iVar14 == 0 || local_dc < (char)bVar6) || (char)bVar6 < '\0') {
              sVar8 = (short)iVar13;
              local_e0 = iVar13 + -2;
            }
            else {
              if (*(short *)((longlong)_Dst + (ulonglong)bVar6 * 2) == 0) {
                uVar27 = (iVar14 * 100) / local_dc;
                uVar22 = (ulonglong)(int)uVar27;
                if (uVar27 < 8) {
                  sVar8 = -0x42;
                  if (1 < uVar27) {
                    sVar8 = 0x28;
                    uVar15 = uVar22;
                    do {
                      sVar8 = sVar8 + -10;
                      uVar22 = uVar15 * 2;
                      bVar35 = uVar15 < 4;
                      uVar15 = uVar22;
                    } while (bVar35);
                    goto LAB_1495b5454;
                  }
                }
                else {
                  sVar8 = 0x28;
                  if (0xff < uVar27) {
                    sVar8 = 0x28;
                    uVar15 = uVar22;
                    do {
                      sVar8 = sVar8 + 0x28;
                      uVar22 = uVar15 >> 4;
                      bVar35 = 0xfff < uVar15;
                      uVar15 = uVar22;
                    } while (bVar35);
                  }
                  uVar15 = uVar22;
                  if (0xf < uVar22) {
                    do {
                      sVar8 = sVar8 + 10;
                      uVar22 = uVar15 >> 1;
                      bVar35 = 0x1f < uVar15;
                      uVar15 = uVar22;
                    } while (bVar35);
                  }
LAB_1495b5454:
                  sVar8 = sVar8 + (&DAT_14bd41890)[(uint)uVar22 & 7] + -0x4c;
                }
                uVar9 = (ushort)local_d0;
                uVar10 = uVar9;
                if (((*(byte *)((longlong)local_e8 + 0x3d) & 0x40) != 0) &&
                   (uVar10 = *(ushort *)((longlong)local_e8 + 0x3e),
                   (short)uVar9 <= (short)*(ushort *)((longlong)local_e8 + 0x3e))) {
                  uVar10 = uVar9;
                }
                if ((short)uVar10 < 0xb) {
                  sVar21 = 0;
                }
                else {
                  uVar22 = (ulonglong)uVar10;
                  sVar21 = 0x28;
                  if (0xff < uVar10) {
                    sVar21 = 0x28;
                    uVar15 = uVar22;
                    do {
                      sVar21 = sVar21 + 0x28;
                      uVar22 = uVar15 >> 4;
                      bVar35 = 0xfff < uVar15;
                      uVar15 = uVar22;
                    } while (bVar35);
                  }
                  uVar15 = uVar22;
                  if (0xf < uVar22) {
                    do {
                      sVar21 = sVar21 + 10;
                      uVar22 = uVar15 >> 1;
                      bVar35 = 0x1f < uVar15;
                      uVar15 = uVar22;
                    } while (bVar35);
                  }
                  sVar21 = sVar21 + (&DAT_14bd41890)[(uint)uVar22 & 7] + -0x2b;
                }
                *(short *)((longlong)_Dst + (ulonglong)bVar6 * 2) = sVar21 + sVar8 + (short)local_94
                ;
              }
              local_e0 = iVar13;
              sVar8 = FUN_1495b4246(iVar13);
              sVar8 = sVar8 + 5;
            }
            plVar31 = local_e8;
            uVar27 = local_d4;
            uVar29 = local_d8;
            if (0 < (int)local_ec) {
              puVar25 = local_b8;
              uVar26 = local_ec;
              do {
                if ((*puVar25 == (uVar33 | uVar28)) &&
                   (-1 < (char)(*(byte *)((longlong)puVar25 + 0x16) ^ bVar6))) {
                  if ((*(short *)((longlong)puVar25 + 0x12) < sVar8) ||
                     ((uVar26 = local_ec, *(short *)((longlong)puVar25 + 0x12) == sVar8 &&
                      (((short)puVar25[2] < sVar34 ||
                       (((short)puVar25[2] == sVar34 &&
                        (*(short *)((longlong)puVar25 + 0x14) <= (short)local_e0))))))))
                  goto LAB_1495b5069;
                  goto LAB_1495b5238;
                }
                puVar25 = puVar25 + 4;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            uVar26 = local_ec;
            if ((int)local_c0 <= (int)local_ec) {
              if (((short)(ushort)local_b0 < sVar8) ||
                 ((uVar26 = local_d8, sVar8 == (ushort)local_b0 &&
                  ((short)local_d4 <= (short)local_e0)))) goto LAB_1495b5069;
            }
            puVar25 = local_b8 + (longlong)(int)uVar26 * 4;
            uVar26 = local_ec + ((int)local_ec < (int)local_c0);
LAB_1495b5238:
            *puVar25 = puVar17[1] | *puVar16;
            puVar25[1] = local_50;
            *(short *)(puVar25 + 2) = sVar34;
            *(short *)((longlong)puVar25 + 0x12) = sVar8;
            *(short *)((longlong)puVar25 + 0x14) = (short)local_e0;
            *(byte *)((longlong)puVar25 + 0x16) = bVar6;
            memcpy((void *)puVar25[3],(void *)puVar16[3],local_58);
            *(ulonglong **)((puVar25[3] - 8) + local_80 * 8) = puVar17;
            plVar31 = local_e8;
            uVar27 = local_d4;
            local_ec = uVar26;
            uVar29 = local_d8;
            if ((int)local_c0 <= (int)uVar26) {
              uVar27 = (uint)(ushort)local_b8[2];
              local_b0 = (ulonglong)*(ushort *)((longlong)local_b8 + 0x12);
              uVar29 = 0;
              if (1 < (byte)local_c8) {
                uVar29 = 0;
                uVar11 = 1;
                puVar19 = local_68;
                uVar26 = uVar27;
                do {
                  uVar10 = *(ushort *)((longlong)puVar19 + -2);
                  if ((short)(ushort)local_b0 < (short)uVar10) {
                    uVar27 = (uint)(ushort)*puVar19;
                    local_b0 = (ulonglong)uVar10;
                    uVar29 = uVar11;
                    uVar26 = (uint)(ushort)*puVar19;
                  }
                  else if ((uVar10 == (ushort)local_b0) &&
                          (uVar2 = *puVar19, sVar34 = (short)uVar27, uVar27 = uVar26,
                          sVar34 < (short)uVar2)) {
                    uVar27 = uVar2;
                    uVar29 = uVar11;
                    uVar26 = uVar2;
                  }
                  uVar11 = uVar11 + 1;
                  puVar19 = puVar19 + 8;
                } while (local_90 != uVar11);
              }
            }
          }
LAB_1495b5069:
        }
        uVar32 = uVar32 + 1;
        puVar16 = puVar16 + 4;
      } while (uVar32 != local_8c);
      lVar20 = local_80;
      puVar17 = local_60;
      puVar16 = local_b8;
      uVar26 = local_ec;
    } while (local_78 + local_80 != 0);
    if (local_ec == 0) {
LAB_1495b5624:
      FUN_14955a364(local_a0,"no query solution");
      goto LAB_1495b5640;
    }
    if (1 < (int)local_ec) {
      lVar20 = (ulonglong)local_ec - 1;
      puVar25 = local_b8;
      puVar17 = local_b8;
      do {
        puVar16 = puVar17 + 4;
        if (*(short *)((longlong)puVar25 + 0x12) <= *(short *)((longlong)puVar17 + 0x32)) {
          puVar16 = puVar25;
        }
        lVar20 = lVar20 + -1;
        puVar25 = puVar16;
        puVar17 = puVar17 + 4;
      } while (lVar20 != 0);
    }
    sVar34 = (short)local_d0;
    lVar20 = plVar31[1];
    plVar24 = plVar31 + 0x7d;
    uVar28 = 0;
    do {
      lVar30 = *(longlong *)(puVar16[3] + uVar28 * 8);
      *plVar24 = lVar30;
      bVar6 = *(byte *)(lVar30 + 0x10);
      *(byte *)((longlong)plVar24 + -0x1c) = bVar6;
      *(undefined4 *)((longlong)plVar24 + -0x4c) =
           *(undefined4 *)(lVar20 + 0x4c + (ulonglong)bVar6 * 0x70);
      uVar28 = uVar28 + 1;
      plVar24 = plVar24 + 0xc;
    } while (local_c8 != uVar28);
  }
  uVar28 = local_c8;
  if ((((*(ushort *)((longlong)plVar31 + 0x3c) & 0x180) == 0x100) && (sVar34 != 0)) &&
     (*(char *)((longlong)plVar31 + 0x43) == '\0')) {
    local_108 = (short)local_c8 + -1;
    local_100 = *(ulonglong **)((puVar16[3] - 8) + local_c8 * 8);
    local_f8 = &local_50;
    cVar5 = FUN_1495be805(plVar31,plVar31[3],puVar16,0x80);
    plVar31 = local_e8;
    if (*(int *)local_e8[3] == (int)cVar5) {
      *(undefined1 *)((longlong)local_e8 + 0x43) = 2;
    }
  }
  *(byte *)((longlong)plVar31 + 0x44) = *(byte *)((longlong)plVar31 + 0x44) & 0xfb;
  piVar23 = (int *)plVar31[2];
  if (piVar23 != (int *)0x0) {
    uVar27 = (uint)*(ushort *)((longlong)plVar31 + 0x3c);
    cVar5 = *(char *)((longlong)puVar16 + 0x16);
    iVar13 = (int)uVar28;
    if ((char)*(ushort *)((longlong)plVar31 + 0x3c) < '\0') {
      if (*piVar23 == (int)cVar5) {
        *(undefined1 *)((longlong)plVar31 + 0x43) = 2;
      }
    }
    else {
      *(char *)((longlong)plVar31 + 0x41) = cVar5;
      plVar31[0xc] = puVar16[1];
      if ((cVar5 < '\x01') && (*(undefined1 *)((longlong)plVar31 + 0x41) = 0, uVar28 != 0)) {
        puVar17 = *(ulonglong **)(puVar16[3] + (ulonglong)(iVar13 - 1U) * 8);
        uVar26 = (uint)puVar17[5];
        uVar29 = ~uVar26;
        if ((uVar29 & 0x104) != 0 && (uVar26 >> 0xc & 1) == 0) {
          local_f8 = &local_50;
          local_50 = 0;
          local_108 = (short)(iVar13 - 1U);
          local_100 = puVar17;
          cVar5 = FUN_1495be805(plVar31,piVar23,puVar16,
                                CONCAT62((uint6)(ushort)(uVar29 >> 0x10),0x800));
          piVar23 = (int *)local_e8[2];
          if (*piVar23 == (int)cVar5) {
            *(byte *)((longlong)local_e8 + 0x44) = *(byte *)((longlong)local_e8 + 0x44) | 4;
            local_e8[0xc] = local_50;
          }
          uVar27 = (uint)*(ushort *)((longlong)local_e8 + 0x3c);
          plVar31 = local_e8;
        }
      }
    }
    if ((((uVar27 >> 9 & 1) != 0) && (iVar13 != 0)) &&
       (*piVar23 == (int)*(char *)((longlong)plVar31 + 0x41))) {
      local_f8 = &local_50;
      local_50 = 0;
      local_100 = *(ulonglong **)(puVar16[3] + (ulonglong)(iVar13 - 1U) * 8);
      local_108 = (short)(iVar13 - 1U);
      cVar5 = FUN_1495be805(plVar31,piVar23,puVar16,0);
      plVar31 = local_e8;
      if (*(int *)local_e8[2] == (int)cVar5) {
        *(byte *)((longlong)local_e8 + 0x44) = *(byte *)((longlong)local_e8 + 0x44) | 8;
        local_e8[0xc] = local_50;
      }
    }
  }
  *(short *)(plVar31 + 9) = (short)puVar16[2];
LAB_1495b5640:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 1495b5707 FUN_1495b5707 body=2499 status=ok
// SIG undefined FUN_1495b5707(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1495b5707(undefined8 *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar23;
  int iVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar37 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  longlong lVar42;
  longlong lVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined1 local_190 [16];
  undefined4 local_180;
  undefined8 *local_170;
  longlong local_168;
  ulonglong local_160;
  int local_154;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  ulonglong local_138;
  int local_12c;
  ulonglong local_128;
  longlong *local_120;
  ulonglong local_118;
  undefined1 local_110 [8];
  code *local_108;
  undefined1 *local_100;
  short local_ec;
  undefined4 local_e8;
  ulonglong local_e0;
  longlong lVar39;
  longlong lVar41;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_150 = (longlong *)param_1[2];
  local_198 = 0;
  uVar16 = 0;
  local_170 = param_1;
  local_160 = param_4;
  local_12c = FUN_149584f48(local_150,0x11,0,0);
  local_148 = *(longlong *)(param_3 + 0x20);
  plVar21 = (longlong *)param_2[4];
  plVar23 = plVar21 + (longlong)*(int *)((longlong)param_2 + 0x14) * 8;
  plVar2 = *(longlong **)(param_5 + 0x50);
  local_140 = param_3;
  local_120 = param_2;
  if ((longlong)*(int *)((longlong)param_2 + 0x14) < 1) {
    local_168 = 0;
    uVar20 = 0;
  }
  else {
    uVar16 = 0;
    uVar20 = 0;
    bVar3 = false;
    local_168 = 0;
    do {
      if (((*plVar2 == 0) && ((*(byte *)((longlong)plVar21 + 0x12) & 2) == 0)) &&
         (lVar14 = *plVar21, (*(byte *)(lVar14 + 4) & 1) == 0)) {
        local_e8 = *(undefined4 *)(param_3 + 0x44);
        local_ec = 3;
        local_108 = FUN_14959f99d;
        local_100 = &LAB_14959fa8c;
        if (lVar14 == 0) {
          uVar15 = 0;
        }
        else {
          FUN_14959fa98(local_110,lVar14);
          if (local_ec == 0) goto LAB_1495b5874;
          uVar15 = FUN_1495a1c89(*local_170,lVar14,0,0);
        }
        local_168 = FUN_149594bf0(local_170,local_168,uVar15);
      }
LAB_1495b5874:
      iVar5 = FUN_1495bd8b6(plVar21,param_3);
      if (iVar5 != 0) {
        uVar11 = 1L << ((byte)(int)plVar21[5] & 0x3f);
        if (0x3f < (int)plVar21[5]) {
          uVar11 = 0x8000000000000000;
        }
        if (!bVar3) {
          FUN_14955599e(0x11c,"automatic index on %s(%s)");
        }
        bVar3 = true;
        param_3 = local_140;
        if ((uVar11 & uVar20) == 0) {
          iVar5 = FUN_1495bcdbe(*local_170,plVar2);
          puVar10 = local_170;
          lVar14 = local_168;
          if (iVar5 != 0) goto LAB_1495b5970;
          *(longlong **)(plVar2[7] + (longlong)(int)uVar16 * 8) = plVar21;
          uVar20 = uVar20 | uVar11;
          param_3 = local_140;
          uVar16 = uVar16 + 1;
        }
      }
      plVar21 = plVar21 + 8;
    } while (plVar21 < plVar23);
  }
  lVar25 = local_148;
  puVar10 = local_170;
  *(short *)((longlong)plVar2 + 0x2c) = (short)uVar16;
  *(short *)(plVar2 + 3) = (short)uVar16;
  *(undefined4 *)(plVar2 + 5) = 0x4241;
  uVar20 = (~uVar20 | 0x8000000000000000) & *(ulonglong *)(param_3 + 0x58);
  uVar22 = (uint)*(short *)(local_148 + 0x46);
  local_118 = (ulonglong)uVar22;
  local_138 = 0x3f;
  if (*(short *)(local_148 + 0x46) < 0x3f) {
    local_138 = (ulonglong)uVar22;
  }
  if (0 < (int)uVar22) {
    uVar11 = (ulonglong)((int)local_138 + 3U & 0x7c);
    lVar14 = local_138 - 1;
    auVar30._8_4_ = (int)lVar14;
    auVar30._0_8_ = lVar14;
    auVar30._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    auVar32._8_4_ = (int)uVar20;
    auVar32._0_8_ = uVar20;
    auVar32._12_4_ = (int)(uVar20 >> 0x20);
    auVar33 = pmovsxbq(unaff_XMM6,0x302);
    auVar35 = pmovsxbq(unaff_XMM7,0x100);
    auVar37 = pmovsxbq(unaff_XMM8,0x101);
    auVar38 = pmovsxbq(unaff_XMM11,0x404);
    auVar28 = ZEXT416(uVar16);
    do {
      auVar36 = auVar35;
      auVar34 = auVar33;
      auVar26 = auVar28;
      lVar31 = auVar36._0_8_;
      lVar39 = auVar37._0_8_;
      lVar41 = auVar37._8_8_;
      auVar40._0_8_ = lVar39 << lVar31;
      auVar40._8_8_ = lVar41 << lVar31;
      lVar42 = auVar36._8_8_;
      auVar27._0_8_ = lVar39 << lVar42;
      auVar27._8_8_ = lVar41 << lVar42;
      lVar43 = auVar34._8_8_;
      auVar45._0_8_ = lVar39 << lVar43;
      auVar45._8_8_ = lVar41 << lVar43;
      lVar14 = auVar34._0_8_;
      auVar44._0_8_ = lVar39 << lVar14;
      auVar44._8_8_ = lVar41 << lVar14;
      auVar28 = pblendw(auVar27,auVar40,0xf);
      auVar33 = pblendw(auVar45,auVar44,0xf);
      auVar29._0_8_ = -(ulonglong)(SUB168(auVar28 & auVar32,0) == 0);
      auVar29._8_8_ = -(ulonglong)(SUB168(auVar28 & auVar32,8) == 0);
      auVar46._0_8_ = -(ulonglong)(SUB168(auVar33 & auVar32,0) == 0);
      auVar46._8_8_ = -(ulonglong)(SUB168(auVar33 & auVar32,8) == 0);
      auVar33 = packssdw(auVar29,auVar46);
      auVar28._0_4_ = auVar33._0_4_ + auVar26._0_4_ + 1;
      auVar28._4_4_ = auVar33._4_4_ + auVar26._4_4_ + 1;
      auVar28._8_4_ = auVar33._8_4_ + auVar26._8_4_ + 1;
      auVar28._12_4_ = auVar33._12_4_ + auVar26._12_4_ + 1;
      auVar35._0_8_ = lVar31 + auVar38._0_8_;
      auVar35._8_8_ = lVar42 + auVar38._8_8_;
      auVar33._0_8_ = lVar14 + auVar38._0_8_;
      auVar33._8_8_ = lVar43 + auVar38._8_8_;
      uVar11 = uVar11 - 4;
    } while (uVar11 != 0);
    lVar14 = SUB168(auVar30 ^ _DAT_149931e80,0);
    auVar37._0_8_ = -(ulonglong)(lVar14 < SUB168(auVar36 ^ _DAT_149931e80,0));
    lVar31 = SUB168(auVar30 ^ _DAT_149931e80,8);
    auVar37._8_8_ = -(ulonglong)(lVar31 < SUB168(auVar36 ^ _DAT_149931e80,8));
    auVar38._0_8_ = -(ulonglong)(lVar14 < SUB168(auVar34 ^ _DAT_149931e80,0));
    auVar38._8_8_ = -(ulonglong)(lVar31 < SUB168(auVar34 ^ _DAT_149931e80,8));
    auVar33 = packssdw(auVar37,auVar38);
    auVar28 = blendvps(auVar28,auVar26,auVar33);
    auVar28 = phaddd(auVar28,auVar28);
    auVar28 = phaddd(auVar28,auVar28);
    uVar16 = auVar28._0_4_;
  }
  iVar5 = 1;
  if ((longlong)*(ulonglong *)(param_3 + 0x58) < 0) {
    iVar5 = uVar22 - 0x3e;
  }
  iVar5 = iVar5 + uVar16;
  uVar11 = 0;
  puVar9 = (undefined8 *)FUN_1495a9d71(*local_170,iVar5,0);
  lVar14 = local_168;
  if (puVar9 != (undefined8 *)0x0) {
    plVar2[4] = (longlong)puVar9;
    *puVar9 = "auto-index";
    puVar9[3] = lVar25;
    plVar21 = (longlong *)local_120[4];
    uVar19 = local_138;
    local_154 = iVar5;
    if (plVar21 < plVar23) {
      uVar11 = 0;
      local_128 = 0;
      do {
        iVar5 = FUN_1495bd8b6(plVar21,local_140,local_160);
        if (iVar5 != 0) {
          iVar5 = (int)plVar21[5];
          uVar18 = 1L << ((byte)iVar5 & 0x3f);
          if (0x3f < iVar5) {
            uVar18 = 0x8000000000000000;
          }
          uVar19 = local_138;
          lVar25 = local_148;
          if ((local_128 & uVar18) == 0) {
            lVar14 = *plVar21;
            iVar24 = (int)uVar11;
            *(short *)(puVar9[1] + (longlong)iVar24 * 2) = (short)iVar5;
            uVar16 = *(uint *)(lVar14 + 4) & 0x200;
            puVar10 = (undefined8 *)
                      FUN_149586264(local_170,
                                    *(undefined8 *)(lVar14 + 0x10 + (ulonglong)(uVar16 >> 6)),
                                    *(undefined8 *)(lVar14 + 0x10 + (ulonglong)(uVar16 == 0) * 8));
            pcVar12 = "BINARY";
            if (puVar10 != (undefined8 *)0x0) {
              pcVar12 = (char *)*puVar10;
            }
            local_128 = local_128 | uVar18;
            *(char **)(puVar9[8] + (longlong)iVar24 * 8) = pcVar12;
            uVar11 = (ulonglong)(iVar24 + 1);
            uVar19 = local_138;
            lVar25 = local_148;
          }
        }
        plVar21 = plVar21 + 8;
      } while (plVar21 < plVar23);
    }
    plVar21 = local_150;
    puVar10 = local_170;
    if (0 < (short)local_118) {
      uVar18 = 0;
      do {
        if ((uVar20 >> (uVar18 & 0x3f) & 1) != 0) {
          iVar5 = (int)uVar11;
          *(short *)(puVar9[1] + (longlong)iVar5 * 2) = (short)uVar18;
          *(char **)(puVar9[8] + (longlong)iVar5 * 8) = "BINARY";
          uVar11 = (ulonglong)(iVar5 + 1);
        }
        uVar18 = uVar18 + 1;
      } while ((uVar19 & 0xffffffff) != uVar18);
    }
    iVar5 = (int)uVar11;
    if (*(longlong *)(local_140 + 0x58) < 0) {
      if (0x3f < *(short *)(lVar25 + 0x46)) {
        uVar11 = (ulonglong)iVar5;
        iVar5 = 0x3f;
        do {
          *(short *)(puVar9[1] + uVar11 * 2) = (short)iVar5;
          *(char **)(puVar9[8] + uVar11 * 8) = "BINARY";
          uVar11 = uVar11 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(short *)(lVar25 + 0x46));
      }
      iVar5 = (int)uVar11;
    }
    *(undefined2 *)(puVar9[1] + (longlong)iVar5 * 2) = 0xffff;
    *(char **)(puVar9[8] + (longlong)iVar5 * 8) = "BINARY";
    iVar24 = *(int *)((longlong)local_170 + 0x34);
    *(int *)((longlong)local_170 + 0x34) = iVar24 + 1;
    *(int *)(param_5 + 8) = iVar24;
    local_198 = 0;
    FUN_149584f48(local_150,99,iVar24,local_154);
    FUN_14959b2a7(puVar10,puVar9);
    lVar25 = *(longlong *)(*local_120 + 8) + (ulonglong)*(byte *)(param_5 + 0x34) * 0x70;
    if ((*(byte *)(lVar25 + 0x48) & 0x10) == 0) {
      uVar1 = *(undefined4 *)(param_5 + 4);
      local_160 = local_160 & 0xffffffff00000000;
      uVar15 = 0x25;
    }
    else {
      uVar1 = *(undefined4 *)(lVar25 + 0x3c);
      local_198 = 0;
      uVar6 = FUN_149584f48(plVar21,0x45,0,0);
      local_160 = CONCAT44(local_160._4_4_,uVar6);
      local_198 = *(undefined4 *)(lVar25 + 0x38);
      FUN_149584f48(plVar21,0xd,uVar1,0);
      uVar15 = 0xe;
    }
    local_198 = 0;
    iVar7 = FUN_149584f48(plVar21,uVar15,uVar1,0);
    iVar24 = -1;
    if (local_168 != 0) {
      iVar24 = *(int *)((longlong)local_170 + 0x44);
      iVar17 = iVar24 + -1;
      *(int *)((longlong)local_170 + 0x44) = iVar17;
      FUN_14959ec19(local_170,local_168,iVar17,0x10);
      *(byte *)((longlong)plVar2 + 0x2a) = *(byte *)((longlong)plVar2 + 0x2a) | 2;
      iVar24 = -iVar24;
    }
    if (*(char *)((longlong)local_170 + 0x1f) == '\0') {
      iVar17 = *(int *)(local_170 + 7) + 1;
      *(int *)(local_170 + 7) = iVar17;
    }
    else {
      bVar4 = *(char *)((longlong)local_170 + 0x1f) - 1;
      *(byte *)((longlong)local_170 + 0x1f) = bVar4;
      iVar17 = *(int *)((longlong)local_170 + (ulonglong)bVar4 * 4 + 0xcc);
    }
    local_180 = 0;
    local_190 = (undefined1  [16])0x0;
    local_198 = 0;
    iVar8 = FUN_1495aa59d(local_170,puVar9,*(undefined4 *)(param_5 + 4),iVar17);
    plVar21 = local_150;
    local_198 = 0;
    FUN_149584f48(local_150,0x83,*(undefined4 *)(param_5 + 8),iVar17);
    if (0 < (longlong)(int)plVar21[0x12]) {
      *(undefined2 *)(plVar21[0x11] + -0x16 + (longlong)(int)plVar21[0x12] * 0x18) = 0x10;
    }
    if (local_168 != 0) {
      lVar14 = plVar21[3];
      if (*(int *)(lVar14 + 0x44) + *(int *)(lVar14 + 0x48) < 0) {
        FUN_1495a1bff(lVar14,plVar21,iVar24);
        plVar21 = local_150;
      }
      else {
        *(int *)(*(longlong *)(lVar14 + 0x50) + (longlong)iVar24 * 4) = (int)plVar21[0x12];
      }
    }
    lVar14 = local_168;
    puVar10 = local_170;
    if ((*(byte *)(lVar25 + 0x48) & 0x10) == 0) {
      local_198 = 0;
      FUN_149584f48(plVar21,5,*(undefined4 *)(param_5 + 4),iVar7 + 1);
      plVar21 = local_150;
      puVar10 = local_170;
      lVar14 = local_168;
      if (0 < (longlong)(int)local_150[0x12]) {
        *(undefined2 *)(local_150[0x11] + -0x16 + (longlong)(int)local_150[0x12] * 0x18) = 3;
      }
    }
    else {
      iVar24 = (int)local_160;
      if ((int)local_160 < 0) {
        iVar24 = (int)plVar21[0x12] + -1;
      }
      if (*(char *)(*plVar21 + 0x61) == '\0') {
        puVar13 = (undefined1 *)((longlong)iVar24 * 0x18 + plVar21[0x11]);
      }
      else {
        puVar13 = &DAT_14cc1ee40;
      }
      *(int *)(puVar13 + 8) = iVar8 + iVar5;
      local_198 = *(undefined4 *)(param_5 + 8);
      FUN_1495bf082(local_170,iVar7,*(undefined4 *)(param_5 + 4),*(undefined4 *)(lVar25 + 0x40));
      local_198 = 0;
      FUN_149584f48(plVar21,0xb,0,iVar7);
      *(byte *)(lVar25 + 0x48) = *(byte *)(lVar25 + 0x48) & 0xef;
    }
    if (*(char *)(*plVar21 + 0x61) == '\0') {
      iVar5 = (int)plVar21[0x12] + -1;
      if (-1 < iVar7) {
        iVar5 = iVar7;
      }
      puVar13 = (undefined1 *)((longlong)iVar5 * 0x18 + plVar21[0x11]);
    }
    else {
      puVar13 = &DAT_14cc1ee40;
    }
    *(int *)(puVar13 + 8) = (int)plVar21[0x12];
    if (iVar17 != 0) {
      bVar4 = *(byte *)((longlong)puVar10 + 0x1f);
      if ((ulonglong)bVar4 < 8) {
        *(byte *)((longlong)puVar10 + 0x1f) = bVar4 + 1;
        *(int *)((longlong)puVar10 + (ulonglong)bVar4 * 4 + 0xcc) = iVar17;
      }
    }
    if (*(char *)(*plVar21 + 0x61) == '\0') {
      iVar5 = (int)plVar21[0x12] + -1;
      if (-1 < local_12c) {
        iVar5 = local_12c;
      }
      puVar13 = (undefined1 *)((longlong)iVar5 * 0x18 + plVar21[0x11]);
    }
    else {
      puVar13 = &DAT_14cc1ee40;
    }
    *(int *)(puVar13 + 8) = (int)plVar21[0x12];
  }
LAB_1495b5970:
  if (lVar14 != 0) {
    FUN_14958288e(*puVar10,lVar14);
  }
  if ((local_e0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495b60cb FUN_1495b60cb body=1218 status=ok
// SIG undefined FUN_1495b60cb(void)

void FUN_1495b60cb(undefined8 *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_118 [32];
  uint local_f8;
  wchar_t *local_f0;
  uint local_e4;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  uint local_c0;
  ushort local_bc;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar9 = (undefined8 *)param_1[0x14];
  if ((undefined8 *)param_1[0x14] == (undefined8 *)0x0) {
    puVar9 = param_1;
  }
  if (*(char *)((longlong)puVar9 + 0x113) != '\x02') goto LAB_1495b6120;
  lVar4 = *(longlong *)(param_3 + 0x50);
  uVar11 = *(uint *)(lVar4 + 0x28);
  if (((uVar11 >> 0xd & 1) != 0) || ((param_4 & 0x20) != 0)) goto LAB_1495b6120;
  param_2 = param_2 + (ulonglong)*(byte *)(param_3 + 0x34) * 0x70;
  local_d8 = *param_1;
  bVar17 = true;
  if (((uVar11 & 0x30) == 0) && (((uVar11 >> 10 & 1) != 0 || (*(short *)(lVar4 + 0x18) == 0)))) {
    bVar17 = (param_4 & 3) != 0;
  }
  lVar16 = param_1[2];
  local_d0 = local_b8;
  local_c8 = 0x3b9aca0000000064;
  local_c0 = 0;
  local_bc = 0;
  pcVar12 = "SCAN";
  if (bVar17) {
    pcVar12 = "SEARCH";
  }
  FUN_1495555b8(&local_d8,pcVar12);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    FUN_149555a84(&local_d8," TABLE %s",*(undefined8 *)(param_2 + 0x18));
  }
  else {
    FUN_149555a84(&local_d8," SUBQUERY %u",*(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x10));
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_149555a84(&local_d8," AS %s");
  }
  if ((uVar11 & 0x500) == 0) {
    puVar9 = *(undefined8 **)(lVar4 + 0x20);
    if (((*(byte *)(*(longlong *)(param_2 + 0x28) + 0x40) & 0x80) == 0) ||
       ((*(uint *)((longlong)puVar9 + 100) & 3) != 2)) {
      if ((uVar11 >> 0x11 & 1) == 0) {
        if ((uVar11 >> 0xe & 1) == 0) {
          pcVar12 = "COVERING INDEX %s";
          if ((uVar11 & 0x40) == 0) {
            pcVar12 = "INDEX %s";
          }
        }
        else {
          pcVar12 = "AUTOMATIC COVERING INDEX";
        }
      }
      else {
        pcVar12 = "AUTOMATIC PARTIAL COVERING INDEX";
      }
    }
    else {
      if (!bVar17) goto LAB_1495b6501;
      pcVar12 = "PRIMARY KEY";
    }
    if (local_c0 + 7 < (uint)local_c8) {
      *(undefined4 *)(local_d0 + (ulonglong)local_c0 + 3) = 0x20474e49;
      *(undefined4 *)(local_d0 + local_c0) = 0x49535520;
      local_c0 = local_c0 + 7;
    }
    else {
      FUN_1495557b3(&local_d8," USING ",7);
    }
    FUN_149555a84(&local_d8,pcVar12,*puVar9);
    lVar5 = *(longlong *)(lVar4 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x18);
    uVar2 = *(ushort *)(lVar4 + 0x2e);
    if ((uVar1 != 0) || ((*(byte *)(lVar4 + 0x28) & 0x30) != 0)) {
      local_e0 = lVar16;
      if (local_c0 + 2 < (uint)local_c8) {
        *(undefined2 *)(local_d0 + local_c0) = 0x2820;
        local_c0 = local_c0 + 2;
      }
      else {
        FUN_1495557b3(&local_d8,&DAT_14bd47a47,2);
      }
      local_e4 = (uint)uVar1;
      if (local_e4 != 0) {
        uVar15 = (ulonglong)local_e4;
        uVar14 = 0;
        do {
          sVar3 = *(short *)(*(longlong *)(lVar5 + 8) + uVar14 * 2);
          pcVar12 = "<expr>";
          if (sVar3 != -2) {
            if (sVar3 == -1) {
              pcVar12 = "rowid";
            }
            else {
              pcVar12 = *(char **)(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 8) +
                                  (longlong)sVar3 * 0x20);
            }
          }
          if (uVar14 != 0) {
            if (local_c0 + 5 < (uint)local_c8) {
              local_d0[(ulonglong)local_c0 + 4] = 0x20;
              *(undefined4 *)(local_d0 + local_c0) = 0x444e4120;
              local_c0 = local_c0 + 5;
            }
            else {
              FUN_1495557b3(&local_d8," AND ",5);
            }
          }
          pcVar13 = "%s=?";
          if (uVar14 < uVar2) {
            pcVar13 = "ANY(%s)";
          }
          FUN_149555a84(&local_d8,pcVar13,pcVar12);
          uVar14 = uVar14 + 1;
        } while (uVar15 != uVar14);
      }
      uVar6 = local_e4;
      uVar11 = *(uint *)(lVar4 + 0x28);
      uVar7 = local_e4;
      if ((uVar11 & 0x20) != 0) {
        local_f0 = L">";
        local_f8 = local_e4;
        FUN_1495bf13a(&local_d8,lVar5,*(undefined2 *)(lVar4 + 0x1a),local_e4);
        uVar11 = *(uint *)(lVar4 + 0x28);
        uVar7 = 1;
      }
      lVar16 = local_e0;
      if ((uVar11 & 0x10) != 0) {
        local_f0 = L"<DataflowCore";
        local_f8 = uVar7;
        FUN_1495bf13a(&local_d8,lVar5,*(undefined2 *)(lVar4 + 0x1c),uVar6);
      }
      if (local_c0 + 1 < (uint)local_c8) {
        local_d0[local_c0] = 0x29;
        local_c0 = local_c0 + 1;
      }
      else {
        FUN_1495557b3(&local_d8,&DAT_149dfbe79,1);
      }
    }
  }
  else if ((uVar11 & 0xf) == 0 || (uVar11 >> 8 & 1) == 0) {
    if ((uVar11 >> 10 & 1) != 0) {
      FUN_149555a84(&local_d8," VIRTUAL TABLE INDEX %d:%s",*(undefined4 *)(lVar4 + 0x18),
                    *(undefined8 *)(lVar4 + 0x20));
    }
  }
  else {
    if ((uVar11 & 5) == 0) {
      if ((uVar11 & 0x30) == 0x30) {
        pcVar12 = ">? AND rowid<";
      }
      else {
        pcVar12 = ">";
        if ((uVar11 & 0x20) == 0) {
          pcVar12 = (char *)L"<DataflowCore";
        }
      }
    }
    else {
      pcVar12 = "=敓瑣潩n[%s]\r\n";
    }
    FUN_149555a84(&local_d8," USING INTEGER PRIMARY KEY (rowid%s?)",pcVar12);
  }
LAB_1495b6501:
  if (local_d0 == (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x0;
  }
  else {
    local_d0[local_c0] = 0;
    puVar10 = local_d0;
    if ((local_c8._4_4_ != 0) && ((local_bc & 0x400) == 0)) {
      puVar10 = (undefined1 *)FUN_14955d93a(&local_d8);
    }
  }
  local_f8 = 0;
  uVar8 = FUN_149584f48(lVar16,0xae,*(undefined4 *)(lVar16 + 0x90),*(undefined4 *)(param_1 + 0x24));
  FUN_14955a5b6(lVar16,uVar8,puVar10,0xfffffff9);
LAB_1495b6120:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495b658e FUN_1495b658e body=10652 status=ok
// SIG undefined FUN_1495b658e(void)

ulonglong FUN_1495b658e(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,
                       int *param_5,ulonglong param_6)

{
  ulonglong *puVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 *puVar15;
  char *pcVar16;
  uint *puVar17;
  ulonglong uVar18;
  int *piVar19;
  uint *puVar20;
  longlong lVar21;
  char *pcVar22;
  undefined1 uVar23;
  char cVar24;
  longlong lVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  longlong *plVar31;
  uint uVar32;
  undefined8 *puVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  undefined1 **ppuVar37;
  uint *puVar38;
  longlong lVar39;
  longlong lVar40;
  char *pcVar41;
  undefined7 uVar43;
  byte *pbVar42;
  uint uVar44;
  ulonglong uVar45;
  undefined4 *puVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  bool bVar49;
  bool bVar50;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  int local_184;
  longlong local_180;
  longlong *local_178;
  ulonglong local_170;
  undefined8 *local_168;
  ulonglong local_160;
  uint local_154;
  ulonglong local_150;
  ulonglong local_148;
  uint local_13c;
  uint local_138;
  int local_134;
  longlong *local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong local_100;
  int local_f8;
  uint local_f4;
  ulonglong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  uint *local_c0;
  undefined1 *local_b8 [4];
  short sStack_94;
  undefined8 local_98;
  ulonglong *local_90;
  ulonglong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar21 = *(longlong *)(param_3 + 8);
  local_184 = *(int *)(lVar21 + 0x4c + (ulonglong)*(byte *)(param_5 + 0xd) * 0x70);
  if ((longlong)*(int *)(param_3 + 0x294) < 1) {
    uVar45 = 0;
  }
  else {
    uVar45 = 0;
    lVar25 = 0;
    do {
      if (*(int *)(param_3 + 0x298 + lVar25 * 4) == local_184) {
        uVar45 = 1L << ((byte)lVar25 & 0x3f);
        break;
      }
      lVar25 = lVar25 + 1;
    } while (*(int *)(param_3 + 0x294) != lVar25);
  }
  lVar25 = *param_1;
  lVar5 = *(longlong *)(param_5 + 0x14);
  *(ulonglong *)(param_5 + 0x16) = ~uVar45 & param_6;
  uVar45 = *(ulonglong *)(param_3 + 0x60) >> ((byte)param_4 & 0x3f);
  lVar21 = lVar21 + (ulonglong)*(byte *)(param_5 + 0xd) * 0x70;
  local_168 = (undefined8 *)(lVar21 + 8);
  iVar34 = *(int *)((longlong)param_1 + 0x44) + -1;
  *(int *)((longlong)param_1 + 0x44) = iVar34;
  param_5[4] = iVar34;
  param_5[3] = iVar34;
  local_f8 = *(int *)((longlong)param_1 + 0x44) + -1;
  *(int *)((longlong)param_1 + 0x44) = local_f8;
  param_5[6] = local_f8;
  local_180 = param_3;
  if (((char)param_5[0xd] != '\0') && ((*(byte *)(lVar21 + 0x44) & 8) != 0)) {
    iVar34 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = iVar34;
    *param_5 = iVar34;
    local_1a8 = local_1a8 & 0xffffffff00000000;
    FUN_149584f48(param_2,0x45,0);
  }
  uVar44 = param_4;
  if (0 < (int)param_4) {
    do {
      if (*(int *)(local_180 + 0x398 + (ulonglong)uVar44 * 0x60) != 0) break;
      bVar49 = 1 < (int)uVar44;
      uVar44 = uVar44 - 1;
    } while (bVar49);
  }
  local_d8 = local_180 + 0x68;
  local_178 = param_2;
  local_e0 = param_1;
  if ((*(uint *)(local_168 + 8) & 0x10) == 0) {
    uVar12 = (uint)uVar45 & 1;
    local_170 = (ulonglong)uVar12;
    uVar44 = *(uint *)(lVar5 + 0x28);
    if ((uVar44 >> 10 & 1) == 0) {
      if ((uVar44 & 5) == 0 || (uVar44 >> 8 & 1) == 0) {
        if ((~uVar44 & 0x102) != 0) {
          if ((uVar44 >> 9 & 1) == 0) {
            if ((uVar44 >> 0xd & 1) == 0) {
              if ((*(uint *)(local_168 + 8) & 0x20) == 0) {
                uVar44 = (uint)uVar45 & 1;
                *(undefined *)((longlong)param_5 + 0x35) = (&DAT_14bd47a8c)[uVar44];
                param_5[0xe] = local_184;
                local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
                iVar34 = FUN_149584f48(param_2,(&DAT_14bd47a8e)[uVar44]);
                param_5[0xf] = iVar34 + 1;
                *(undefined1 *)((longlong)param_5 + 0x37) = 1;
              }
              else {
                *(undefined1 *)((longlong)param_5 + 0x35) = 0xad;
              }
              goto LAB_1495b674e;
            }
            local_150 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
            *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) + 1;
            iVar35 = (int)param_1[7] + 1;
            *(int *)(param_1 + 7) = iVar35;
            local_e8 = (longlong *)(ulonglong)*(uint *)((longlong)param_1 + 0x44);
            iVar34 = *(uint *)((longlong)param_1 + 0x44) - 1;
            local_108 = (longlong *)CONCAT44(local_108._4_4_,iVar34);
            *(int *)((longlong)param_1 + 0x44) = iVar34;
            local_148 = local_168[4];
            lVar21 = **(longlong **)(lVar5 + 0x38);
            lVar5 = *(longlong *)(lVar21 + 0x28);
            *(undefined1 *)((longlong)param_5 + 0x35) = 0x41;
            local_130 = (longlong *)CONCAT44(local_130._4_4_,iVar35);
            param_5[0xe] = iVar35;
            if (*(byte *)(local_180 + 0x40) < 2) {
              puVar17 = *(uint **)(local_180 + 8);
              local_100 = lVar25;
            }
            else {
              param_4 = *(byte *)(local_180 + 0x40) - param_4;
              if (lVar25 == 0) {
                local_100 = lVar25;
                puVar17 = (uint *)FUN_145e3bd67((longlong)(int)(param_4 - 1) * 0x70 + 0x78);
              }
              else {
                local_100 = lVar25;
                puVar17 = (uint *)FUN_14955d750();
              }
              if (puVar17 == (uint *)0x0) goto LAB_1495b6aa3;
              puVar17[1] = param_4 & 0xff;
              *puVar17 = param_4 & 0xff;
              puVar27 = local_168;
              puVar20 = puVar17;
              for (lVar25 = 0xe; puVar20 = puVar20 + 2, lVar25 != 0; lVar25 = lVar25 + -1) {
                *(undefined8 *)puVar20 = *puVar27;
                puVar27 = puVar27 + 1;
              }
              if (1 < (int)param_4) {
                lVar25 = *(longlong *)(local_180 + 8);
                lVar40 = (ulonglong)param_4 - 1;
                pbVar42 = (byte *)(param_5 + 0x25);
                puVar20 = puVar17 + 0x1e;
                do {
                  puVar27 = (undefined8 *)((ulonglong)*pbVar42 * 0x70 + lVar25 + 8);
                  puVar38 = puVar20;
                  for (lVar28 = 0xe; lVar28 != 0; lVar28 = lVar28 + -1) {
                    *(undefined8 *)puVar38 = *puVar27;
                    puVar27 = puVar27 + 1;
                    puVar38 = puVar38 + 2;
                  }
                  pbVar42 = pbVar42 + 0x60;
                  puVar20 = puVar20 + 0x1c;
                  lVar40 = lVar40 + -1;
                } while (lVar40 != 0);
              }
            }
            iVar34 = local_184;
            local_120 = 0;
            local_134 = 0;
            if ((*(byte *)(local_180 + 0x3c) & 0x10) == 0) {
              if ((*(byte *)(local_148 + 0x40) & 0x80) == 0) {
                uVar44 = (int)param_1[7] + 1;
                local_120 = (ulonglong)uVar44;
                *(uint *)(param_1 + 7) = uVar44;
                local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
                FUN_149584f48(local_178,0x48,0);
              }
              else {
                for (lVar25 = *(longlong *)(local_148 + 0x10); lVar25 != 0;
                    lVar25 = *(longlong *)(lVar25 + 0x28)) {
                  if ((*(uint *)(lVar25 + 100) & 3) == 2) goto LAB_1495b7cde;
                }
                lVar25 = 0;
LAB_1495b7cde:
                local_120 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
                *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) + 1;
                local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
                FUN_149584f48(local_178,100,local_120,*(undefined2 *)(lVar25 + 0x5e));
                FUN_14959b2a7(param_1,lVar25);
              }
              local_134 = (int)param_1[7] + 1;
              *(int *)(param_1 + 7) = local_134;
            }
            local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
            local_128 = 0;
            local_13c = FUN_149584f48(local_178,0x45,0,(ulonglong)local_130 & 0xffffffff);
            iVar35 = *(int *)(local_180 + 0x7c);
            lVar25 = local_180;
            if (iVar35 < 2) {
LAB_1495b7df6:
              local_170 = 0;
            }
            else {
              lVar39 = 0;
              lVar28 = 0;
              lVar40 = 0;
              do {
                lVar7 = *(longlong *)(lVar25 + 0x88);
                if (((lVar7 + lVar39 != lVar21) && ((*(byte *)(lVar7 + 0x12 + lVar39) & 6) == 0)) &&
                   ((*(ushort *)(lVar7 + 0x14 + lVar39) & 0x1fff) != 0)) {
                  if (*(longlong *)(lVar7 + lVar39) == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = FUN_1495a1c89(local_100,*(longlong *)(lVar7 + lVar39),0,0);
                  }
                  lVar40 = FUN_149594bf0(param_1,lVar40,uVar29);
                  iVar35 = *(int *)(local_180 + 0x7c);
                  lVar25 = local_180;
                }
                iVar34 = local_184;
                lVar28 = lVar28 + 1;
                lVar39 = lVar39 + 0x40;
              } while (lVar28 < iVar35);
              if (lVar40 == 0) goto LAB_1495b7df6;
              local_170 = FUN_14958aad5(param_1,0x1002c,0,lVar40);
              lVar25 = local_180;
            }
            uVar3 = *(ushort *)(lVar25 + 0x3c);
            FUN_1495a08a0(param_1,1,"MULTI-INDEX OR");
            if (*(int *)(lVar5 + 0x14) < 1) {
              local_160 = 0;
            }
            else {
              local_110 = CONCAT44(local_110._4_4_,(uint)uVar3) & 0xffffffff00000400 | 0x20;
              uVar45 = 0;
              local_128 = 0;
              local_160 = 0;
              do {
                lVar25 = uVar45 * 0x40;
                puVar1 = (ulonglong *)(*(longlong *)(lVar5 + 0x20) + lVar25);
                if ((*(int *)(*(longlong *)(lVar5 + 0x20) + 0x1c + lVar25) == iVar34) ||
                   ((*(byte *)((longlong)puVar1 + 0x15) & 4) != 0)) {
                  uVar47 = *puVar1;
                  if (local_170 != 0) {
                    *(ulonglong *)(local_170 + 0x10) = uVar47;
                    uVar47 = local_170;
                  }
                  FUN_1495a08a0(param_1,CONCAT71((int7)((ulonglong)lVar25 >> 8),1),"INDEX %d",
                                uVar45 + 1 & 0xffffffff);
                  local_198 = (undefined4)local_150;
                  local_1a0 = CONCAT62(local_1a0._2_6_,(short)local_110);
                  local_1a8 = 0;
                  lVar25 = FUN_1495aecc3(param_1,puVar17,uVar47,0);
                  iVar34 = local_184;
                  if (lVar25 != 0) {
                    FUN_1495b60cb(param_1,puVar17,lVar25 + 0x398,0);
                    plVar31 = local_178;
                    if ((*(byte *)(local_180 + 0x3c) & 0x10) == 0) {
                      local_138 = (uint)uVar45;
                      if (uVar45 == *(int *)(lVar5 + 0x14) - 1) {
                        local_138 = 0xffffffff;
                      }
                      if ((*(byte *)(local_148 + 0x40) & 0x80) == 0) {
                        if (local_148 == 0) {
                          local_1a8._0_4_ = local_134;
                          uVar29 = 0x59;
                          iVar34 = -1;
                        }
                        else {
                          local_1a8._0_4_ = 0;
                          uVar29 = 0x7f;
                          iVar34 = local_134;
                        }
                        FUN_149584f48(local_178,uVar29,local_184,iVar34);
                        local_1a8 = CONCAT44(local_1a8._4_4_,local_134);
                        iVar34 = FUN_149584f48(plVar31,0x2d,local_120,0);
                        if (*(char *)(*plVar31 + 0x61) == '\0') {
                          lVar40 = local_178[0x11];
                          *(undefined1 *)(lVar40 + 1 + (longlong)iVar34 * 0x18) = 0xfd;
                          *(uint *)(lVar40 + 0x10 + (longlong)iVar34 * 0x18) = local_138;
                        }
                      }
                      else {
                        for (lVar40 = *(longlong *)(local_148 + 0x10); lVar40 != 0;
                            lVar40 = *(longlong *)(lVar40 + 0x28)) {
                          if ((*(uint *)(lVar40 + 100) & 3) == 2) goto LAB_1495b808d;
                        }
                        lVar40 = 0;
LAB_1495b808d:
                        uVar3 = *(ushort *)(lVar40 + 0x5e);
                        uVar44 = (uint)uVar3;
                        local_d0 = lVar21;
                        local_c8 = lVar25;
                        local_c0 = puVar17;
                        local_154 = FUN_14959d77c(param_1,uVar3);
                        uVar47 = local_148;
                        plVar31 = local_178;
                        iVar34 = local_184;
                        local_f4 = uVar44;
                        if (uVar3 != 0) {
                          local_118 = (ulonglong)uVar44;
                          local_f0 = (ulonglong)local_154;
                          uVar48 = 0;
                          do {
                            local_1a8 = CONCAT44(local_1a8._4_4_,(int)local_f0 + (int)uVar48);
                            FUN_14959f097(plVar31,uVar47,iVar34,
                                          (int)*(short *)(*(longlong *)(lVar40 + 8) + uVar48 * 2));
                            uVar48 = uVar48 + 1;
                          } while (local_118 != uVar48);
                        }
                        lVar25 = local_c8;
                        lVar21 = local_d0;
                        uVar44 = local_138;
                        plVar31 = local_178;
                        iVar34 = 0;
                        if (local_138 == 0) {
LAB_1495b8133:
                          iVar35 = local_134;
                          uVar44 = local_154;
                          plVar31 = local_178;
                          local_118 = CONCAT44(local_118._4_4_,iVar34);
                          local_1a8._0_4_ = local_134;
                          FUN_149584f48(local_178,0x5b,local_154,local_f4);
                          local_1a8 = CONCAT44(local_1a8._4_4_,uVar44);
                          iVar34 = FUN_149584f48(plVar31,0x83,local_120,iVar35);
                          if (*(char *)(*plVar31 + 0x61) == '\0') {
                            lVar40 = local_178[0x11];
                            *(undefined1 *)(lVar40 + 1 + (longlong)iVar34 * 0x18) = 0xfd;
                            *(uint *)(lVar40 + 0x10 + (longlong)iVar34 * 0x18) = local_f4;
                          }
                          iVar34 = (int)local_118;
                          if ((local_138 != 0) && (0 < (longlong)(int)local_178[0x12])) {
                            *(undefined2 *)
                             (local_178[0x11] + -0x16 + (longlong)(int)local_178[0x12] * 0x18) =
                                 0x10;
                          }
                        }
                        else {
                          local_1a8 = CONCAT44(local_1a8._4_4_,local_154);
                          iVar34 = FUN_149584f48(local_178,0x1e,local_120,0);
                          if (*(char *)(*plVar31 + 0x61) == '\0') {
                            lVar40 = local_178[0x11];
                            *(undefined1 *)(lVar40 + 1 + (longlong)iVar34 * 0x18) = 0xfd;
                            *(uint *)(lVar40 + 0x10 + (longlong)iVar34 * 0x18) = local_f4;
                          }
                          if (-1 < (int)uVar44) goto LAB_1495b8133;
                        }
                        puVar17 = local_c0;
                        param_1 = local_e0;
                        if (local_f4 == 1) {
                          if (local_154 != 0) {
                            bVar10 = *(byte *)((longlong)local_e0 + 0x1f);
                            if ((ulonglong)bVar10 < 8) {
                              *(byte *)((longlong)local_e0 + 0x1f) = bVar10 + 1;
                              *(uint *)((longlong)local_e0 + (ulonglong)bVar10 * 4 + 0xcc) =
                                   local_154;
                            }
                          }
                        }
                        else if ((int)local_e0[5] < (int)local_f4) {
                          *(uint *)(local_e0 + 5) = local_f4;
                          *(uint *)((longlong)local_e0 + 0x2c) = local_154;
                        }
                      }
                      local_1a8 = local_1a8 & 0xffffffff00000000;
                      FUN_149584f48(local_178,0xc,(ulonglong)local_130 & 0xffffffff,
                                    (ulonglong)local_108 & 0xffffffff);
                      if (iVar34 != 0) {
                        puVar26 = &DAT_14cc1ee40;
                        if (*(char *)(*local_178 + 0x61) == '\0') {
                          iVar35 = (int)local_178[0x12] + -1;
                          if (-1 < iVar34) {
                            iVar35 = iVar34;
                          }
                          puVar26 = (undefined1 *)((longlong)iVar35 * 0x18 + local_178[0x11]);
                        }
                        *(int *)(puVar26 + 8) = (int)local_178[0x12];
                      }
                    }
                    else {
                      local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
                      FUN_149584f48(local_178,0xc,(ulonglong)local_130 & 0xffffffff,
                                    (ulonglong)local_108 & 0xffffffff);
                    }
                    local_128 = local_128 & 0xffffffff;
                    if ((*(byte *)(lVar25 + 0x44) & 2) != 0) {
                      local_128 = 1;
                    }
                    if (((*(byte *)(*(longlong *)(lVar25 + 1000) + 0x29) & 2) == 0) ||
                       ((uVar47 = *(ulonglong *)(*(longlong *)(lVar25 + 1000) + 0x20), uVar45 != 0
                        && (uVar47 != local_160)))) {
                      local_160 = 0;
                    }
                    else {
                      local_160 = uVar47;
                      if (((*(byte *)(local_148 + 0x40) & 0x80) != 0) &&
                         (local_160 = 0, (*(uint *)(uVar47 + 100) & 3) != 2)) {
                        local_160 = uVar47;
                      }
                    }
                    FUN_1495b2193(lVar25);
                    iVar34 = (int)param_1[0x24];
                    if (iVar34 == 0) {
                      uVar13 = 0;
                    }
                    else {
                      plVar31 = (longlong *)param_1[2];
                      if (iVar34 < 0) {
                        iVar34 = (int)plVar31[0x12] + -1;
                      }
                      puVar26 = &DAT_14cc1ee40;
                      if (*(char *)(*plVar31 + 0x61) == '\0') {
                        puVar26 = (undefined1 *)((longlong)iVar34 * 0x18 + plVar31[0x11]);
                      }
                      uVar13 = *(undefined4 *)(puVar26 + 8);
                    }
                    *(undefined4 *)(param_1 + 0x24) = uVar13;
                    iVar34 = local_184;
                  }
                }
                uVar45 = uVar45 + 1;
              } while ((longlong)uVar45 < (longlong)*(int *)(lVar5 + 0x14));
            }
            iVar34 = (int)param_1[0x24];
            uVar13 = 0;
            if (iVar34 != 0) {
              plVar31 = (longlong *)param_1[2];
              if (iVar34 < 0) {
                iVar34 = (int)plVar31[0x12] + -1;
              }
              if (*(char *)(*plVar31 + 0x61) == '\0') {
                puVar26 = (undefined1 *)((longlong)iVar34 * 0x18 + plVar31[0x11]);
              }
              else {
                puVar26 = &DAT_14cc1ee40;
              }
              uVar13 = *(undefined4 *)(puVar26 + 8);
            }
            *(undefined4 *)(param_1 + 0x24) = uVar13;
            *(ulonglong *)(param_5 + 0x10) = local_160;
            if (local_160 != 0) {
              param_5[2] = (int)local_150;
            }
            if (local_170 != 0) {
              *(undefined8 *)(local_170 + 0x10) = 0;
              FUN_14958288e(local_100);
            }
            plVar31 = local_178;
            if (*(char *)(*local_178 + 0x61) == '\0') {
              uVar44 = (int)local_178[0x12] - 1;
              if (-1 < (int)local_13c) {
                uVar44 = local_13c;
              }
              puVar26 = (undefined1 *)((longlong)(int)uVar44 * 0x18 + local_178[0x11]);
            }
            else {
              puVar26 = &DAT_14cc1ee40;
            }
            *(int *)(puVar26 + 4) = (int)local_178[0x12];
            local_1a8 = local_1a8 & 0xffffffff00000000;
            FUN_149584f48(local_178,0xb,0);
            lVar25 = plVar31[3];
            if (*(int *)(lVar25 + 0x44) + *(int *)(lVar25 + 0x48) < 0) {
              FUN_1495a1bff(lVar25,local_178);
            }
            else {
              *(int *)(*(longlong *)(lVar25 + 0x50) + (longlong)-(int)local_e8 * 4) =
                   (int)local_178[0x12];
            }
            if ((1 < *(byte *)(local_180 + 0x40)) && (puVar17 != (uint *)0x0)) {
              FUN_14955d65a(local_100,puVar17);
            }
            if ((int)local_128 == 0) {
              FUN_1495bfd7a(param_5,lVar21);
            }
            goto LAB_1495b71f0;
          }
          local_160 = (ulonglong)*(ushort *)(lVar5 + 0x18);
          uVar3 = *(ushort *)(lVar5 + 0x1a);
          if ((uVar44 & 0x20) == 0) {
            uVar12 = 0;
            plVar31 = (longlong *)0x0;
            uVar47 = local_160;
          }
          else {
            uVar12 = (uint)uVar3;
            uVar47 = (ulonglong)(*(ushort *)(lVar5 + 0x18) + 1);
            plVar31 = *(longlong **)(*(longlong *)(lVar5 + 0x38) + local_160 * 8);
          }
          uVar4 = *(ushort *)(lVar5 + 0x1c);
          uVar32 = (uint)uVar4;
          local_150 = *(ulonglong *)(lVar5 + 0x20);
          local_120 = CONCAT44(local_120._4_4_,param_5[2]);
          local_148 = 0;
          if ((uVar44 & 0x10) == 0) {
            local_108 = (longlong *)0x0;
            uVar44 = uVar12;
            local_100 = lVar25;
LAB_1495b7249:
            uVar29 = 0;
          }
          else {
            uVar44 = uVar32;
            if (uVar32 < uVar12) {
              uVar44 = uVar12;
            }
            local_108 = *(longlong **)(*(longlong *)(lVar5 + 0x38) + uVar47 * 8);
            local_100 = lVar25;
            if ((*(byte *)((longlong)local_108 + 0x13) & 1) != 0) {
              iVar34 = (int)param_1[7] + 1;
              *(int *)(param_1 + 7) = iVar34;
              param_5[0xb] = iVar34;
              local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
              FUN_149584f48(param_2,0x45,1);
              param_5[0xc] = (int)param_2[0x12];
              iVar34 = param_5[0xb];
              param_5[0xb] = iVar34 * 2;
              param_5[0xb] = (*(char *)(*(longlong *)(local_150 + 0x38) + local_160) == '\x01' ^
                             (uint)local_170) + iVar34 * 2;
            }
            if (plVar31 != (longlong *)0x0) goto LAB_1495b7249;
            sVar11 = *(short *)(*(longlong *)(local_150 + 8) + local_160 * 2);
            if ((longlong)sVar11 < 0) {
              bVar49 = sVar11 == -2;
            }
            else {
              bVar49 = *(char *)(*(longlong *)(*(longlong *)(local_150 + 0x18) + 8) + 0x18 +
                                (longlong)sVar11 * 0x20) == '\0';
            }
            if (bVar49) {
              uVar29 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            }
            else {
              uVar29 = 0;
            }
          }
          iVar34 = (int)uVar29;
          if ((*(uint *)(lVar5 + 0x28) & 0x80030) == 0x80000) {
            uVar44 = (int)param_1[7] + 1;
            local_148 = (ulonglong)uVar44;
            *(uint *)(param_1 + 7) = uVar44;
            param_5[9] = uVar44;
            iVar34 = *(int *)((longlong)param_1 + 0x44) + -1;
            *(int *)((longlong)param_1 + 0x44) = iVar34;
            param_5[10] = iVar34;
            uVar44 = 1;
            iVar34 = (int)CONCAT71((int7)((ulonglong)uVar29 >> 8),1);
          }
          if ((((ushort)local_160 < *(ushort *)(local_150 + 0x5e)) &&
              (((*(char *)(*(longlong *)(local_150 + 0x38) + (local_160 & 0xffffffff)) != '\0' ^
                (byte)uVar45) & 1) != 0)) ||
             (((int)local_170 != 0 && (*(ushort *)(local_150 + 0x5e) == (ushort)local_160)))) {
            local_13c = 0;
            local_138 = (uint)(byte)uVar3;
            local_134 = iVar34;
            local_e8 = plVar31;
            uVar3 = uVar4;
          }
          else {
            local_134 = 0;
            local_e8 = local_108;
            local_13c = iVar34;
            local_138 = uVar32;
            local_108 = plVar31;
          }
          local_154 = CONCAT22(local_154._2_2_,uVar3);
          plVar31 = (longlong *)param_1[2];
          local_f0 = *(ulonglong *)(param_5 + 0x14);
          local_118 = (ulonglong)*(ushort *)(local_f0 + 0x18);
          uVar3 = *(ushort *)(local_f0 + 0x2e);
          uVar48 = (ulonglong)uVar3;
          uVar29 = *(undefined8 *)(local_f0 + 0x20);
          uVar12 = (int)param_1[7] + 1;
          uVar45 = (ulonglong)uVar12;
          iVar34 = uVar44 + *(ushort *)(local_f0 + 0x18);
          local_128 = CONCAT44(local_128._4_4_,iVar34);
          *(int *)(param_1 + 7) = (int)param_1[7] + iVar34;
          uVar47 = local_170;
          uVar29 = FUN_1495aaa6f(*param_1,uVar29);
          local_110 = FUN_149559683(*param_1,uVar29);
          if (uVar3 != 0) {
            iVar34 = param_5[2];
            bVar49 = (uint)local_170 == 0;
            local_1a8 = local_1a8 & 0xffffffff00000000;
            FUN_149584f48(plVar31,bVar49 * '\x04' + '!',iVar34,0);
            local_1a8 = local_1a8 & 0xffffffff00000000;
            uVar13 = FUN_149584f48(plVar31,0xb,0,0);
            local_130 = (longlong *)CONCAT44(local_130._4_4_,uVar13);
            local_1a8 = CONCAT44(local_1a8._4_4_,uVar12);
            iVar35 = FUN_149584f48(plVar31,bVar49 * '\x03' + '\x16',iVar34,0);
            if (*(char *)(*plVar31 + 0x61) == '\0') {
              lVar21 = plVar31[0x11];
              *(undefined1 *)(lVar21 + 1 + (longlong)iVar35 * 0x18) = 0xfd;
              *(uint *)(lVar21 + 0x10 + (longlong)iVar35 * 0x18) = (uint)uVar3;
            }
            param_5[5] = iVar35;
            if (*(char *)(*plVar31 + 0x61) == '\0') {
              iVar35 = (int)plVar31[0x12] + -1;
              if (-1 < (int)local_130) {
                iVar35 = (int)local_130;
              }
              puVar26 = (undefined1 *)((longlong)iVar35 * 0x18 + plVar31[0x11]);
            }
            else {
              puVar26 = &DAT_14cc1ee40;
            }
            *(int *)(puVar26 + 8) = (int)plVar31[0x12];
            uVar44 = 0;
            do {
              local_1a8 = CONCAT44(local_1a8._4_4_,uVar44 + uVar12);
              uVar47 = (ulonglong)uVar44;
              FUN_149584f48(plVar31,0x59,iVar34,uVar47);
              uVar44 = uVar44 + 1;
            } while (uVar3 != uVar44);
          }
          uVar30 = local_170;
          if (uVar3 < (ushort)local_118) {
            do {
              local_130 = plVar31;
              plVar31 = *(longlong **)(*(longlong *)(local_f0 + 0x38) + uVar48 * 8);
              uVar12 = (uint)(uVar45 + uVar48);
              local_1a0 = CONCAT44(local_1a0._4_4_,uVar12);
              local_1a8 = CONCAT44(local_1a8._4_4_,(int)uVar30);
              uVar47 = uVar48 & 0xffffffff;
              uVar44 = FUN_1495bf41a(param_1,plVar31,param_5,uVar47);
              if (uVar12 != uVar44) {
                if ((int)local_128 == 1) {
                  if ((int)uVar45 == 0) {
                    uVar45 = (ulonglong)uVar44;
                  }
                  else {
                    bVar10 = *(byte *)((longlong)param_1 + 0x1f);
                    if ((ulonglong)bVar10 < 8) {
                      *(byte *)((longlong)param_1 + 0x1f) = bVar10 + 1;
                      *(int *)((longlong)param_1 + (ulonglong)bVar10 * 4 + 0xcc) = (int)uVar45;
                    }
                    uVar45 = (ulonglong)uVar44;
                  }
                }
                else {
                  local_1a8 = local_1a8 & 0xffffffff00000000;
                  uVar47 = uVar45 + uVar48 & 0xffffffff;
                  FUN_149584f48(local_130,0x4e,uVar44,uVar47);
                }
              }
              if ((*(ushort *)((longlong)plVar31 + 0x14) & 1) == 0) {
                if ((*(ushort *)((longlong)plVar31 + 0x14) >> 8 & 1) == 0) {
                  uVar29 = *(undefined8 *)(*plVar31 + 0x18);
                  if (((*(byte *)((longlong)plVar31 + 0x13) & 8) == 0) &&
                     (iVar34 = FUN_1495a1a8a(uVar29), iVar34 != 0)) {
                    uVar47 = (ulonglong)(uint)param_5[3];
                    local_1a8 = local_1a8 & 0xffffffff00000000;
                    FUN_149584f48(local_130,0x32,(int)uVar48 + (int)uVar45,uVar47);
                  }
                  if (local_110 != 0) {
                    puVar26 = (undefined1 *)(local_110 + uVar48);
                    bVar10 = *(byte *)(local_110 + uVar48);
                    bVar9 = FUN_14959f8fa(uVar29);
                    uVar30 = local_170;
                    if (((char)bVar10 < 'A') || ((char)bVar9 < 'A')) {
                      if ('@' < (char)bVar9) {
                        bVar10 = bVar9;
                      }
                      if ((bVar10 & 0xbf) == 1) goto LAB_1495b7784;
                    }
                    else if ((bVar10 < 0x43) && (bVar9 < 0x43)) {
LAB_1495b7784:
                      *puVar26 = 0x41;
                    }
                    iVar34 = FUN_1495c0364(uVar29,*puVar26);
                    if (iVar34 != 0) goto LAB_1495b7705;
                  }
                }
              }
              else if (((*(byte *)(*plVar31 + 5) & 8) != 0) && (local_110 != 0)) {
                puVar26 = (undefined1 *)(local_110 + uVar48);
LAB_1495b7705:
                *puVar26 = 0x41;
              }
              uVar48 = uVar48 + 1;
              plVar31 = local_130;
            } while (local_118 != uVar48);
          }
          plVar31 = local_108;
          uVar30 = local_110;
          uVar48 = local_160;
          uVar18 = 0;
          if ((local_110 != 0) && ((short)local_138 != 0)) {
            uVar18 = FUN_149559683(local_100,local_110 + local_160);
          }
          uVar44 = local_154;
          piVar19 = param_5 + 10;
          if ((int)local_148 == 0) {
            piVar19 = param_5 + 4;
          }
          bVar49 = true;
          uVar43 = (undefined7)(uVar47 >> 8);
          uVar12 = (uint)CONCAT71(uVar43,1);
          if (plVar31 != (longlong *)0x0) {
            uVar12 = (uint)CONCAT71(uVar43,(*(byte *)((longlong)plVar31 + 0x14) & 0x28) != 0);
          }
          if (local_e8 != (longlong *)0x0) {
            bVar49 = (*(byte *)((longlong)local_e8 + 0x14) & 0x28) != 0;
          }
          local_130 = (longlong *)CONCAT44(local_130._4_4_,*piVar19);
          bVar50 = uVar48 != 0;
          local_f0 = CONCAT71(local_f0._1_7_,bVar49);
          iVar34 = (int)uVar45;
          local_128 = uVar45;
          local_118 = uVar18;
          if (plVar31 == (longlong *)0x0) {
            uVar44 = (uint)local_160;
            if ((char)local_13c == '\0') {
              if ((int)local_148 == 0) {
                iVar35 = 0;
                local_13c = uVar12;
              }
              else {
                local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
                iVar35 = 0;
                local_13c = uVar12;
                FUN_149584f48(local_178,0x48,0,uVar44 + iVar34);
                uVar44 = uVar44 + 1;
                bVar50 = true;
              }
            }
            else {
              local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
              local_13c = 0;
              FUN_149584f48(local_178,0x48,0,uVar44 + iVar34);
              uVar44 = uVar44 + 1;
              bVar50 = true;
              iVar35 = 1;
            }
          }
          else {
            pcVar16 = *(char **)(*plVar31 + 0x18);
            iVar34 = iVar34 + (int)uVar48;
            uVar32 = local_154 & 0xffff;
            local_13c = uVar12;
            FUN_1495bfcbf(param_1,pcVar16,iVar34,uVar32);
            plVar6 = local_178;
            if ((*(byte *)((longlong)plVar31 + 0x13) & 1) != 0) {
              if (*(char *)(*local_178 + 0x61) == '\0') {
                puVar26 = (undefined1 *)
                          (local_178[0x11] + (longlong)(int)local_178[0x12] * 0x18 + -0x18);
              }
              else {
                puVar26 = &DAT_14cc1ee40;
              }
              *(uint *)(puVar26 + 0xc) = (uint)param_5[0xb] >> 1;
              *(ushort *)(puVar26 + 2) = *(ushort *)(param_5 + 0xb) & 1;
            }
            iVar35 = FUN_1495a1a8a(pcVar16);
            if (iVar35 != 0) {
              local_1a8 = local_1a8 & 0xffffffff00000000;
              FUN_149584f48(plVar6,0x32,iVar34,(ulonglong)local_130 & 0xffffffff);
            }
            if (local_110 != 0) {
              FUN_1495bfdf6(pcVar16,uVar32,local_110 + uVar48);
            }
            uVar45 = local_128;
            cVar24 = *pcVar16;
            if (cVar24 == -0x53) {
              cVar24 = pcVar16[2];
            }
            uVar44 = (uVar44 & 0xffff) + (int)uVar48;
            if (cVar24 == -0x52) {
LAB_1495b7ad1:
              if (**(int **)(pcVar16 + 0x20) < 2) goto LAB_1495b7ade;
              local_13c = (uint)CONCAT71((int7)((ulonglong)*(int **)(pcVar16 + 0x20) >> 8),1);
            }
            else {
              if (cVar24 == -0x78) {
                pcVar16 = *(char **)(pcVar16 + 0x20);
                goto LAB_1495b7ad1;
              }
LAB_1495b7ade:
              FUN_1495bfd7a(param_5,local_108);
            }
            iVar35 = 0;
            bVar50 = true;
            uVar30 = local_110;
          }
          FUN_1495bfe84(param_1,uVar45 & 0xffffffff,uVar44 - iVar35,uVar30);
          uVar12 = local_13c;
          if ((*(ushort *)(lVar5 + 0x2e) == 0) ||
             (uVar45 = local_148, uVar44 != *(ushort *)(lVar5 + 0x2e))) {
            if ((*(byte *)(lVar5 + 0x2a) & 4) != 0) {
              local_1a8 = local_1a8 & 0xffffffff00000000;
              FUN_149584f48(local_178,0x76,local_120 & 0xffffffff,0);
            }
            uVar45 = local_148;
            plVar31 = local_178;
            uVar12 = -(uVar12 & 0xff);
            if ((int)local_148 == 0) {
              local_1a8 = CONCAT44(local_1a8._4_4_,(int)local_128);
              iVar34 = FUN_149584f48(local_178,
                                     (&DAT_14bd47a68)
                                     [(uVar12 & 1) * 2 + (uint)bVar50 * 4 + (uint)local_170],
                                     local_120 & 0xffffffff,(ulonglong)local_130 & 0xffffffff);
              if (*(char *)(*plVar31 + 0x61) == '\0') {
LAB_1495b8c92:
                lVar21 = local_178[0x11];
                *(undefined1 *)(lVar21 + 1 + (longlong)iVar34 * 0x18) = 0xfd;
                *(uint *)(lVar21 + 0x10 + (longlong)iVar34 * 0x18) = uVar44;
              }
            }
            else {
              local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
              FUN_149584f48(local_178,0x45,1,local_148 & 0xffffffff);
              local_1a8._0_4_ = (int)local_128;
              iVar34 = FUN_149584f48(plVar31,(&DAT_14bd47a68)
                                             [(uVar12 & 1) * 2 + (uint)bVar50 * 4 + (uint)local_170]
                                     ,local_120 & 0xffffffff,(ulonglong)local_130 & 0xffffffff);
              if (*(char *)(*plVar31 + 0x61) == '\0') {
                lVar21 = plVar31[0x11];
                *(undefined1 *)(lVar21 + 1 + (longlong)iVar34 * 0x18) = 0xfd;
                *(uint *)(lVar21 + 0x10 + (longlong)iVar34 * 0x18) = uVar44;
              }
              local_1a8._0_4_ = 0;
              FUN_149584f48(plVar31,0xb,0,(int)plVar31[0x12] + 2);
              local_1a8 = CONCAT44(local_1a8._4_4_,(int)local_128);
              iVar34 = FUN_149584f48(plVar31,(&DAT_14bd47a6a)
                                             [(int)local_170 + (uint)(1 < (int)uVar44) * 4],
                                     local_120 & 0xffffffff,(ulonglong)local_130 & 0xffffffff);
              uVar45 = local_148;
              if (*(char *)(*plVar31 + 0x61) == '\0') {
                uVar44 = uVar44 + uVar12;
                goto LAB_1495b8c92;
              }
            }
          }
          plVar6 = local_e8;
          uVar44 = local_138;
          plVar31 = local_178;
          uVar36 = (uint)(byte)local_f0;
          uVar12 = (uint)(byte)local_f0;
          uVar32 = (uint)(byte)local_f0;
          iVar34 = (int)local_160;
          if (local_e8 == (longlong *)0x0) {
            if ((char)local_134 != '\0') {
              if ((int)uVar45 == 0) {
                local_1a8 = local_1a8 & 0xffffffff00000000;
                uVar36 = 0;
                FUN_149584f48(local_178,0x48,0,(int)local_128 + iVar34);
                uVar45 = local_148;
              }
              iVar34 = (int)local_160 + 1;
              uVar12 = uVar36;
            }
          }
          else {
            pcVar16 = *(char **)(*local_e8 + 0x18);
            iVar34 = (int)local_128 + iVar34;
            local_f0 = CONCAT44(local_f0._4_4_,iVar34);
            uVar12 = local_138 & 0xffff;
            FUN_1495bfcbf(param_1,pcVar16,iVar34,uVar12);
            plVar31 = local_178;
            if ((*(byte *)((longlong)plVar6 + 0x13) & 1) != 0) {
              if (*(char *)(*local_178 + 0x61) == '\0') {
                puVar26 = (undefined1 *)
                          (local_178[0x11] + (longlong)(int)local_178[0x12] * 0x18 + -0x18);
              }
              else {
                puVar26 = &DAT_14cc1ee40;
              }
              *(uint *)(puVar26 + 0xc) = (uint)param_5[0xb] >> 1;
              *(ushort *)(puVar26 + 2) = *(ushort *)(param_5 + 0xb) & 1;
            }
            iVar34 = FUN_1495a1a8a(pcVar16);
            if (iVar34 != 0) {
              local_1a8 = local_1a8 & 0xffffffff00000000;
              FUN_149584f48(plVar31,0x32,local_f0 & 0xffffffff,(ulonglong)local_130 & 0xffffffff);
            }
            if (local_118 != 0) {
              FUN_1495bfdf6(pcVar16,uVar12,local_118);
              FUN_1495bfe84(param_1,local_f0 & 0xffffffff,uVar44 & 0xffff,local_118);
            }
            cVar24 = *pcVar16;
            if (cVar24 == -0x53) {
              cVar24 = pcVar16[2];
            }
            iVar34 = (uVar44 & 0xffff) + (int)local_160;
            if (cVar24 == -0x52) {
LAB_1495b8e19:
              if (1 < **(int **)(pcVar16 + 0x20)) {
                uVar45 = local_148;
                uVar12 = 1;
                goto LAB_1495b7b6d;
              }
            }
            else if (cVar24 == -0x78) {
              pcVar16 = *(char **)(pcVar16 + 0x20);
              goto LAB_1495b8e19;
            }
            FUN_1495bfd7a(param_5,local_e8);
            uVar45 = local_148;
            uVar12 = uVar32;
          }
LAB_1495b7b6d:
          if (local_110 != 0) {
            FUN_14955d65a(local_100);
            uVar45 = local_148;
          }
          if (local_118 != 0) {
            FUN_14955d65a(local_100);
            uVar45 = local_148;
          }
          lVar21 = plVar31[0x12];
          param_5[0xf] = (int)lVar21;
          if (iVar34 != 0) {
            if ((int)uVar45 != 0) {
              local_1a8 = local_1a8 & 0xffffffff00000000;
              FUN_149584f48(plVar31,0x14,local_148,(int)lVar21 + 3);
            }
            local_1a8 = CONCAT44(local_1a8._4_4_,(int)local_128);
            iVar14 = FUN_149584f48(plVar31,")\'&(MULTI-INDEX OR"[uVar12 + (int)local_170 * 2],
                                   local_120 & 0xffffffff,(ulonglong)local_130 & 0xffffffff);
            uVar45 = local_148;
            if (*(char *)(*plVar31 + 0x61) == '\0') {
              lVar21 = plVar31[0x11];
              *(undefined1 *)(lVar21 + 1 + (longlong)iVar14 * 0x18) = 0xfd;
              *(int *)(lVar21 + 0x10 + (longlong)iVar14 * 0x18) = iVar34;
            }
          }
          if ((int)uVar45 != 0) {
            local_1a8 = local_1a8 & 0xffffffff00000000;
            FUN_149584f48(plVar31,0x12,uVar45,(int)plVar31[0x12] + 2);
            local_1a8 = CONCAT44(local_1a8._4_4_,(int)local_128);
            iVar14 = FUN_149584f48(plVar31,")\'&(MULTI-INDEX OR"
                                           [(uint)(iVar35 + (int)local_170 * 2)],
                                   local_120 & 0xffffffff,(ulonglong)local_130 & 0xffffffff);
            if (*(char *)(*plVar31 + 0x61) == '\0') {
              lVar21 = plVar31[0x11];
              *(undefined1 *)(lVar21 + 1 + (longlong)iVar14 * 0x18) = 0xfd;
              *(int *)(lVar21 + 0x10 + (longlong)iVar14 * 0x18) = iVar34 + iVar35;
            }
          }
          uVar45 = local_120;
          iVar34 = local_184;
          uVar44 = *(uint *)(lVar5 + 0x28);
          iVar35 = (int)local_120;
          if ((uVar44 >> 0x12 & 1) != 0) {
            local_1a8 = local_1a8 & 0xffffffff00000000;
            FUN_149584f48(plVar31,0x76,local_120 & 0xffffffff,1);
            uVar44 = *(uint *)(lVar5 + 0x28);
          }
          if (((uVar44 & 0x40) == 0) || (bVar49 = true, (*(byte *)(local_180 + 0x3c) & 0x20) != 0))
          {
            if ((*(byte *)(*(longlong *)(local_150 + 0x18) + 0x40) & 0x80) == 0) {
              if (((*(ushort *)(local_180 + 0x3c) >> 10 & 1) == 0) &&
                 (((*(ushort *)(local_180 + 0x3c) >> 0xc & 1) == 0 ||
                  ((*(char *)(local_180 + 0x42) != '\x01' && (*(short *)(lVar5 + 0x2c) != 0)))))) {
                FUN_1495bff27(local_180,local_150,iVar34,uVar45 & 0xffffffff);
              }
              else {
                iVar14 = (int)param_1[7] + 1;
                *(int *)(param_1 + 7) = iVar14;
                local_1a8 = local_1a8 & 0xffffffff00000000;
                FUN_149584f48(plVar31,0x86,uVar45 & 0xffffffff,iVar14);
                iVar34 = local_184;
                local_1a8 = CONCAT44(local_1a8._4_4_,iVar14);
                FUN_149584f48(plVar31,0x20,local_184,0);
              }
              bVar49 = false;
            }
            else if (iVar34 == iVar35) {
              bVar49 = false;
            }
            else {
              uVar44 = 0;
              for (lVar21 = *(longlong *)(*(longlong *)(local_150 + 0x18) + 0x10); lVar21 != 0;
                  lVar21 = *(longlong *)(lVar21 + 0x28)) {
                if ((*(uint *)(lVar21 + 100) & 3) == 2) goto LAB_1495b8b25;
              }
              lVar21 = 0;
LAB_1495b8b25:
              iVar14 = FUN_14959d77c(param_1,*(undefined2 *)(lVar21 + 0x5e));
              if (*(short *)(lVar21 + 0x5e) != 0) {
                uVar47 = 0;
                do {
                  sVar11 = -1;
                  if ((ulonglong)*(ushort *)(local_150 + 0x60) != 0) {
                    uVar48 = 0;
                    do {
                      if (*(short *)(*(longlong *)(local_150 + 8) + uVar48 * 2) ==
                          *(short *)(*(longlong *)(lVar21 + 8) + uVar47 * 2)) {
                        sVar11 = (short)uVar48;
                        break;
                      }
                      uVar48 = uVar48 + 1;
                    } while (*(ushort *)(local_150 + 0x60) != uVar48);
                  }
                  local_1a8 = CONCAT44(local_1a8._4_4_,iVar14 + (int)uVar47);
                  FUN_149584f48(local_178,0x59,uVar45 & 0xffffffff,(int)sVar11);
                  uVar47 = uVar47 + 1;
                  uVar44 = (uint)*(ushort *)(lVar21 + 0x5e);
                } while (uVar47 < *(ushort *)(lVar21 + 0x5e));
              }
              plVar31 = local_178;
              iVar34 = local_184;
              local_1a8 = CONCAT44(local_1a8._4_4_,iVar14);
              iVar14 = FUN_149584f48(local_178,0x1d,local_184,local_f8);
              if (*(char *)(*plVar31 + 0x61) == '\0') {
                lVar21 = plVar31[0x11];
                *(undefined1 *)(lVar21 + 1 + (longlong)iVar14 * 0x18) = 0xfd;
                *(uint *)(lVar21 + 0x10 + (longlong)iVar14 * 0x18) = uVar44;
              }
              bVar49 = false;
            }
          }
          uVar47 = local_170;
          if (*param_5 == 0) {
            if ((*(byte *)(local_180 + 0x3c) & 0x20) == 0) {
              FUN_1495c003b(local_150,iVar34,uVar45 & 0xffffffff,local_180);
            }
            if (*(longlong *)(local_150 + 0x48) != 0) {
              FUN_1495c02e8(*(longlong *)(local_150 + 0x48),iVar34,local_d8);
            }
          }
          if ((*(byte *)(lVar5 + 0x29) & 0x10) == 0) {
            if ((int)uVar47 == 0) {
              *(undefined1 *)((longlong)param_5 + 0x35) = 5;
            }
            else {
              *(undefined1 *)((longlong)param_5 + 0x35) = 4;
            }
          }
          else {
            *(undefined1 *)((longlong)param_5 + 0x35) = 0xad;
          }
          param_5[0xe] = iVar35;
          *(byte *)((longlong)param_5 + 0x36) = *(byte *)(lVar5 + 0x2a) & 1;
          if ((*(byte *)(lVar5 + 0x28) & 0xf) == 0) {
            *(undefined1 *)((longlong)param_5 + 0x37) = 1;
          }
          puVar27 = local_168;
          uVar45 = local_150;
          lVar21 = local_180;
          if (bVar49) {
            uVar45 = 0;
          }
          goto LAB_1495b6753;
        }
        puVar27 = (undefined8 *)0x0;
        bVar49 = (uVar44 & 0x20) != 0;
        if (bVar49) {
          puVar27 = (undefined8 *)**(undefined8 **)(lVar5 + 0x38);
        }
        if ((uVar44 & 0x10) == 0) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          puVar15 = *(undefined8 **)(*(longlong *)(lVar5 + 0x38) + (ulonglong)bVar49 * 8);
        }
        puVar33 = puVar15;
        if ((uVar45 & 1) == 0) {
          puVar33 = puVar27;
          puVar27 = puVar15;
        }
        if (puVar33 == (undefined8 *)0x0) {
          local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
          FUN_149584f48(param_2,((uVar45 & 1) == 0) * '\x04' + '!',local_184);
        }
        else {
          pbVar42 = (byte *)*puVar33;
          pcVar16 = *(char **)(pbVar42 + 0x18);
          cVar24 = *pcVar16;
          if (cVar24 == -0x53) {
            cVar24 = pcVar16[2];
          }
          pcVar22 = pcVar16;
          if (cVar24 == -0x52) {
LAB_1495b7139:
            if (**(int **)(pcVar22 + 0x20) < 2) goto LAB_1495b7146;
            if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
              iVar34 = (int)param_1[7] + 1;
              *(int *)(param_1 + 7) = iVar34;
            }
            else {
              bVar10 = *(char *)((longlong)param_1 + 0x1f) - 1;
              *(byte *)((longlong)param_1 + 0x1f) = bVar10;
              iVar34 = *(int *)((longlong)param_1 + (ulonglong)bVar10 * 4 + 0xcc);
            }
            FUN_1495bfcbf(param_1,*(undefined8 *)(pbVar42 + 0x18),iVar34,1);
            uVar45 = (ulonglong)(byte)((*pbVar42 + 1 & 2) + 1);
            iVar35 = iVar34;
          }
          else {
            if (cVar24 == -0x78) {
              pcVar22 = *(char **)(pcVar16 + 0x20);
              goto LAB_1495b7139;
            }
LAB_1495b7146:
            iVar35 = FUN_14959d278(param_1,pcVar16,local_b8);
            FUN_1495bfd7a(param_5,puVar33);
            uVar45 = (ulonglong)*pbVar42 - 0x36;
            iVar34 = (int)local_b8[0];
          }
          param_2 = local_178;
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar35);
          FUN_149584f48(local_178,(&DAT_14bd47a64)[uVar45],local_184);
          if (iVar34 != 0) {
            bVar10 = *(byte *)((longlong)param_1 + 0x1f);
            if ((ulonglong)bVar10 < 8) {
              *(byte *)((longlong)param_1 + 0x1f) = bVar10 + 1;
              *(int *)((longlong)param_1 + (ulonglong)bVar10 * 4 + 0xcc) = iVar34;
            }
          }
        }
        if (puVar27 == (undefined8 *)0x0) {
          lVar21 = param_2[0x12];
          *(byte *)((longlong)param_5 + 0x35) = (byte)local_170 ^ 5;
          param_5[0xe] = local_184;
          param_5[0xf] = (int)lVar21;
          goto LAB_1495b71f0;
        }
        pcVar16 = (char *)*puVar27;
        iVar34 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar34;
        FUN_1495bfcbf(param_1,*(undefined8 *)(pcVar16 + 0x18),iVar34,1);
        plVar31 = local_178;
        pcVar22 = *(char **)(pcVar16 + 0x18);
        cVar2 = *pcVar22;
        cVar24 = cVar2;
        if (cVar2 == -0x53) {
          cVar24 = pcVar22[2];
        }
        pcVar41 = pcVar22;
        if (cVar24 == -0x52) {
LAB_1495b86b7:
          if (**(int **)(pcVar41 + 0x20) < 2) goto LAB_1495b86c4;
LAB_1495b8a0c:
          iVar35 = (uint)local_170 * 2 + 0x36;
        }
        else {
          if (cVar24 == -0x78) {
            pcVar41 = *(char **)(pcVar22 + 0x20);
            goto LAB_1495b86b7;
          }
LAB_1495b86c4:
          if ((*pcVar16 != '8') && (*pcVar16 != '6')) goto LAB_1495b8a0c;
          iVar35 = (uint)((uint)local_170 == 0) * 2 + 0x37;
        }
        if (cVar2 == -0x53) {
          cVar2 = pcVar22[2];
        }
        if (cVar2 == -0x52) {
LAB_1495b8a3e:
          if (**(int **)(pcVar22 + 0x20) < 2) goto LAB_1495b8a47;
        }
        else {
          if (cVar2 == -0x78) {
            pcVar22 = *(char **)(pcVar22 + 0x20);
            goto LAB_1495b8a3e;
          }
LAB_1495b8a47:
          FUN_1495bfd7a(param_5,puVar27);
        }
        lVar21 = plVar31[0x12];
        *(byte *)((longlong)param_5 + 0x35) = (byte)local_170 ^ 5;
        param_5[0xe] = local_184;
        param_5[0xf] = (int)lVar21;
        iVar14 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar14;
        local_1a8 = local_1a8 & 0xffffffff00000000;
        FUN_149584f48(plVar31,0x7f,local_184,iVar14);
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar14);
        FUN_149584f48(plVar31,iVar35,iVar34);
        if (0 < (longlong)(int)plVar31[0x12]) {
          *(undefined2 *)(plVar31[0x11] + -0x16 + (longlong)(int)plVar31[0x12] * 0x18) = 0x53;
        }
      }
      else {
        lVar21 = **(longlong **)(lVar5 + 0x38);
        lVar25 = param_1[7];
        iVar34 = (int)lVar25 + 1;
        *(int *)(param_1 + 7) = iVar34;
        local_1a0 = CONCAT44(local_1a0._4_4_,iVar34);
        local_1a8._0_4_ = uVar12;
        iVar34 = FUN_1495bf41a(param_1,lVar21,param_5,0);
        iVar35 = (int)lVar25 + 1;
        if ((iVar35 != 0) && (iVar34 != iVar35)) {
          bVar10 = *(byte *)((longlong)param_1 + 0x1f);
          if ((ulonglong)bVar10 < 8) {
            *(byte *)((longlong)param_1 + 0x1f) = bVar10 + 1;
            *(int *)((longlong)param_1 + (ulonglong)bVar10 * 4 + 0xcc) = iVar35;
          }
        }
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar34);
        FUN_149584f48(param_2,0x1f,local_184);
        *(undefined1 *)((longlong)param_5 + 0x35) = 0xad;
        if ((*(ulonglong *)(lVar21 + 0x38) & *(ulonglong *)(param_5 + 0x16)) == 0) {
          *(byte *)(lVar21 + 0x12) = *(byte *)(lVar21 + 0x12) | 4;
        }
      }
LAB_1495b674e:
      puVar27 = local_168;
      uVar45 = 0;
      lVar21 = local_180;
    }
    else {
      uVar3 = *(ushort *)(lVar5 + 0x2c);
      local_100 = lVar25;
      iVar35 = FUN_14959d77c(param_1,uVar3 + 2);
      iVar34 = param_5[3];
      if (uVar3 != 0) {
        uVar45 = 0;
        do {
          plVar31 = *(longlong **)(*(longlong *)(lVar5 + 0x38) + uVar45 * 8);
          if (plVar31 != (longlong *)0x0) {
            lVar21 = (iVar35 + 2) + uVar45;
            if ((*(byte *)((longlong)plVar31 + 0x14) & 1) == 0) {
              FUN_1495bfcbf(param_1,*(undefined8 *)(*plVar31 + 0x18),lVar21,1);
            }
            else {
              local_1a0 = CONCAT44(local_1a0._4_4_,(int)lVar21);
              local_1a8 = CONCAT44(local_1a8._4_4_,(int)local_170);
              FUN_1495bf41a(param_1,plVar31,param_5,uVar45 & 0xffffffff);
              iVar34 = param_5[4];
            }
          }
          uVar45 = uVar45 + 1;
        } while (uVar3 != uVar45);
      }
      plVar31 = local_178;
      local_1a8 = local_1a8 & 0xffffffff00000000;
      FUN_149584f48(local_178,0x45,*(undefined4 *)(lVar5 + 0x18),iVar35);
      local_170 = (ulonglong)(iVar35 + 1);
      local_1a8 = local_1a8 & 0xffffffff00000000;
      FUN_149584f48(plVar31,0x45,(uint)uVar3,local_170);
      iVar14 = local_184;
      local_150 = *(undefined8 *)(lVar5 + 0x20);
      local_1a8 = CONCAT44(local_1a8._4_4_,iVar35);
      uVar13 = FUN_149584f48(plVar31,9,local_184,iVar34);
      FUN_14955a5b6(plVar31,uVar13,local_150);
      *(undefined1 *)(lVar5 + 0x1c) = 0;
      param_5[0xe] = iVar14;
      uVar23 = 0xad;
      if (*(char *)(local_180 + 0x42) == '\0') {
        uVar23 = 0x3d;
      }
      *(undefined1 *)((longlong)param_5 + 0x35) = uVar23;
      param_5[0xf] = (int)plVar31[0x12];
      if ((ulonglong)uVar3 != 0) {
        uVar48 = (ulonglong)(uint)param_5[0x10];
        puVar27 = local_168;
        lVar21 = local_180;
        uVar47 = (ulonglong)(uint)uVar3;
        do {
          plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0x38) + -8 + uVar47 * 8);
          uVar44 = *(ushort *)((longlong)plVar6 + 0x14) & 1;
          uVar48 = (longlong)(int)uVar48 - (ulonglong)uVar44;
          if ((uVar47 < 0x11) && ((*(ushort *)(lVar5 + 0x1e) >> ((int)uVar47 - 1U & 0x1f) & 1) != 0)
             ) {
            FUN_1495bfd7a(param_5,plVar6);
            puVar27 = local_168;
            lVar21 = local_180;
          }
          else if ((short)uVar44 != 0) {
            pcVar16 = *(char **)(*plVar6 + 0x10);
            cVar24 = *pcVar16;
            if (cVar24 == -0x53) {
              cVar24 = pcVar16[2];
            }
            if (cVar24 == -0x52) {
LAB_1495b6d48:
              if (**(int **)(pcVar16 + 0x20) != 1) goto LAB_1495b6d51;
            }
            else if (cVar24 == -0x78) {
              pcVar16 = *(char **)(pcVar16 + 0x20);
              goto LAB_1495b6d48;
            }
            if (*(char *)(local_100 + 0x61) == '\0') {
              iVar34 = *(int *)(*(longlong *)(param_5 + 0x12) + 4 + uVar48 * 0x14);
              if (iVar34 < 0) {
                iVar34 = (int)plVar31[0x12] + -1;
              }
              puVar26 = &DAT_14cc1ee40;
              if (*(char *)(*plVar31 + 0x61) == '\0') {
                puVar26 = (undefined1 *)((longlong)iVar34 * 0x18 + plVar31[0x11]);
              }
              local_1a8 = CONCAT44(local_1a8._4_4_,*(undefined4 *)(puVar26 + 0xc));
              FUN_149584f48(plVar31,*puVar26,*(undefined4 *)(puVar26 + 4),
                            *(undefined4 *)(puVar26 + 8));
            }
            lVar40 = FUN_14958aad5(param_1,0x35,0,0);
            lVar25 = local_100;
            puVar27 = local_168;
            lVar21 = local_180;
            if (lVar40 != 0) {
              *(undefined8 *)(lVar40 + 0x10) = *(undefined8 *)(*plVar6 + 0x10);
              local_b8[0] = (undefined1 *)0x0;
              local_b8[1] = (undefined1 *)((ulonglong)local_b8[1] & 0xffffffff00000000);
              lVar21 = FUN_14958f7cb(local_100,0xad,local_b8);
              *(longlong *)(lVar40 + 0x18) = lVar21;
              if (lVar21 != 0) {
                *(int *)(lVar21 + 0x2c) = (int)local_170 + (int)uVar47;
                FUN_14959ec19(param_1,lVar40,param_5[6]);
              }
              *(undefined8 *)(lVar40 + 0x10) = 0;
              FUN_14958288e(lVar25,lVar40);
              puVar27 = local_168;
              lVar21 = local_180;
            }
          }
LAB_1495b6d51:
          bVar49 = 1 < uVar47;
          uVar45 = 0;
          uVar47 = uVar47 - 1;
        } while (bVar49);
        goto LAB_1495b6753;
      }
LAB_1495b71f0:
      puVar27 = local_168;
      uVar45 = 0;
      lVar21 = local_180;
    }
  }
  else {
    local_1a8._0_4_ = *(uint *)(local_168 + 6);
    uVar13 = *(undefined4 *)((longlong)local_168 + 0x34);
    FUN_149584f48(param_2,0xd,uVar13,0);
    local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
    iVar34 = FUN_149584f48(param_2,0xe,uVar13);
    param_5[0xf] = iVar34;
    *(undefined1 *)((longlong)param_5 + 0x35) = 0xb;
    puVar27 = local_168;
    uVar45 = 0;
    lVar21 = local_180;
  }
LAB_1495b6753:
  local_150 = uVar45;
  bVar10 = (uVar45 == 0) + 1;
  do {
    if (*(int *)(lVar21 + 0x7c) < 1) goto LAB_1495b6a8b;
    plVar31 = *(longlong **)(lVar21 + 0x88);
    iVar34 = *(int *)(lVar21 + 0x7c) + 1;
    bVar9 = 0;
    do {
      uVar3 = *(ushort *)((longlong)plVar31 + 0x12);
      bVar8 = bVar9;
      if ((uVar3 & 6) == 0) {
        if ((plVar31[7] & *(ulonglong *)(param_5 + 0x16)) == 0) {
          lVar25 = *plVar31;
          if (((*(byte *)((longlong)puVar27 + 0x3c) & 8) == 0) || ((*(byte *)(lVar25 + 4) & 1) != 0)
             ) {
            if (bVar10 == 1) {
              local_68 = param_5[1];
              local_b8[0] = (undefined1 *)0x0;
              local_b8[2] = (undefined1 *)0x0;
              local_b8[3] = (undefined1 *)0x0;
              local_98 = 0;
              local_b8[1] = &LAB_1495be5d8;
              local_90 = &local_70;
              local_70 = uVar45;
              if (lVar25 != 0) {
                FUN_14959fa98(local_b8,lVar25);
                puVar27 = local_168;
                uVar45 = local_150;
                lVar21 = local_180;
                bVar8 = 2;
                if (sStack_94 != 0) goto LAB_1495b67a2;
              }
              uVar3 = *(ushort *)((longlong)plVar31 + 0x12);
LAB_1495b682f:
              if ((uVar3 >> 0xc & 1) != 0) {
                bVar8 = bVar9;
                if (bVar9 == 0) {
                  bVar8 = 3;
                }
                goto LAB_1495b67a2;
              }
            }
            else if (bVar10 < 3) goto LAB_1495b682f;
            if (((uVar3 >> 9 & 1) == 0) || (uVar44 = param_5[0xb], uVar44 == 0)) {
              FUN_14959ec19(local_e0,lVar25,local_f8,0x10);
            }
            else {
              local_1a8 = local_1a8 & 0xffffffff00000000;
              uVar13 = FUN_149584f48(local_178,(uVar44 & 1) * 2 + 0x12,uVar44 >> 1,0);
              local_170 = CONCAT44(local_170._4_4_,uVar13);
              FUN_14959ec19(local_e0,lVar25,local_f8,0x10);
              if ((uint)local_170 != 0) {
                puVar26 = &DAT_14cc1ee40;
                if (*(char *)(*local_178 + 0x61) == '\0') {
                  iVar35 = (int)local_178[0x12] + -1;
                  if (-1 < (int)(uint)local_170) {
                    iVar35 = (uint)local_170;
                  }
                  puVar26 = (undefined1 *)((longlong)iVar35 * 0x18 + local_178[0x11]);
                }
                *(int *)(puVar26 + 8) = (int)local_178[0x12];
              }
            }
            *(byte *)((longlong)plVar31 + 0x12) = *(byte *)((longlong)plVar31 + 0x12) | 4;
            puVar27 = local_168;
            uVar45 = local_150;
            lVar21 = local_180;
            bVar8 = bVar9;
          }
        }
        else {
          *(byte *)(lVar21 + 0x44) = *(byte *)(lVar21 + 0x44) | 2;
        }
      }
LAB_1495b67a2:
      plVar31 = plVar31 + 8;
      iVar34 = iVar34 + -1;
      bVar9 = bVar8;
    } while (1 < iVar34);
    bVar10 = bVar8;
  } while (bVar8 != 0);
  if (0 < *(int *)(lVar21 + 0x7c)) {
    iVar34 = *(int *)(lVar21 + 0x7c) + 1;
    puVar46 = (undefined4 *)(*(longlong *)(lVar21 + 0x88) + 0x28);
    do {
      if (((((*(byte *)((longlong)puVar46 + -0x16) & 6) == 0) &&
           ((*(ushort *)(puVar46 + -5) >> 0xb & 1) != 0 && (*(ushort *)(puVar46 + -5) & 0x82) != 0))
          && (puVar46[-3] == local_184)) && ((*(byte *)((longlong)puVar27 + 0x3c) & 8) == 0)) {
        lVar21 = *(longlong *)(puVar46 + -10);
        local_1a0 = 0;
        local_1a8 = CONCAT44(local_1a8._4_4_,0x83);
        puVar15 = (undefined8 *)FUN_1495bb5fc(local_d8,local_184,*puVar46,param_6);
        puVar27 = local_168;
        if (((puVar15 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar15 + 0x12) & 4) == 0)) &&
           ((puVar33 = (undefined8 *)*puVar15, (*(byte *)((longlong)puVar15 + 0x14) & 1) == 0 ||
            (((*(byte *)((longlong)puVar33 + 5) & 8) == 0 || (**(int **)(puVar33[4] + 0x20) < 2)))))
           ) {
          ppuVar37 = local_b8;
          for (lVar25 = 9; lVar25 != 0; lVar25 = lVar25 + -1) {
            *ppuVar37 = (undefined1 *)*puVar33;
            puVar33 = puVar33 + 1;
            ppuVar37 = ppuVar37 + 1;
          }
          local_b8[2] = *(undefined1 **)(lVar21 + 0x10);
          FUN_14959ec19(local_e0,local_b8,local_f8,0x10);
          puVar27 = local_168;
        }
      }
      iVar34 = iVar34 + -1;
      puVar46 = puVar46 + 0x10;
    } while (1 < iVar34);
  }
LAB_1495b6a8b:
  plVar31 = local_e0;
  if (*param_5 != 0) {
    param_5[7] = (int)local_178[0x12];
    local_1a8 = local_1a8 & 0xffffffff00000000;
    FUN_149584f48(local_178,0x45,1);
    iVar34 = *(int *)(local_180 + 0x7c);
    if (0 < iVar34) {
      puVar27 = *(undefined8 **)(local_180 + 0x88);
      iVar35 = 0;
      do {
        if (((*(byte *)((longlong)puVar27 + 0x12) & 6) == 0) &&
           ((puVar27[7] & *(ulonglong *)(param_5 + 0x16)) == 0)) {
          FUN_14959ec19(plVar31,*puVar27,local_f8,0x10);
          *(byte *)((longlong)puVar27 + 0x12) = *(byte *)((longlong)puVar27 + 0x12) | 4;
          iVar34 = *(int *)(local_180 + 0x7c);
        }
        iVar35 = iVar35 + 1;
        puVar27 = puVar27 + 8;
      } while (iVar35 < iVar34);
    }
  }
  param_6 = *(ulonglong *)(param_5 + 0x16);
LAB_1495b6aa3:
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 1495b8f2b FUN_1495b8f2b body=155 status=ok
// SIG undefined FUN_1495b8f2b(void)

void FUN_1495b8f2b(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  bVar2 = *(byte *)(param_2 + 0x40);
  if (bVar2 != 0) {
    plVar3 = (longlong *)(param_2 + 1000);
    uVar4 = 0;
    do {
      if (((*plVar3 != 0) && ((*(byte *)(*plVar3 + 0x29) & 8) != 0)) && (plVar3[-1] != 0)) {
        FUN_14955d65a(param_1);
        bVar2 = *(byte *)(param_2 + 0x40);
      }
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 0xc;
    } while (uVar4 < bVar2);
  }
  FUN_1495c054b(param_2 + 0x68);
  while (lVar1 = *(longlong *)(param_2 + 0x50), lVar1 != 0) {
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(lVar1 + 0x40);
    FUN_1495bcd72(param_1,lVar1);
    FUN_14955d65a(param_1,lVar1);
  }
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 1495b8fc6 FUN_1495b8fc6 body=497 status=ok
// SIG undefined FUN_1495b8fc6(void)

int FUN_1495b8fc6(undefined8 *param_1,longlong param_2,ushort param_3)

{
  int iVar1;
  undefined8 *_Src;
  longlong lVar2;
  uint uVar3;
  void *_Dst;
  longlong *plVar4;
  short sVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  if (*(int *)(param_1 + 3) <= iVar1) {
    _Src = (undefined8 *)param_1[4];
    lVar2 = **(longlong **)*param_1;
    _Dst = (void *)FUN_14955d750(lVar2,(longlong)*(int *)(param_1 + 3) << 7);
    param_1[4] = _Dst;
    if (_Dst == (void *)0x0) {
      if (param_2 != 0 && (param_3 & 1) != 0) {
        FUN_14958288e(lVar2,param_2);
      }
      param_1[4] = _Src;
      return 0;
    }
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)param_1 + 0x14) << 6);
    if (_Src != (undefined8 *)0x0 && _Src != param_1 + 5) {
      FUN_14955d65a(lVar2,_Src);
    }
    uVar7 = param_1[4];
    if ((lVar2 == 0) || (*(ulonglong *)(lVar2 + 0x1c8) <= uVar7)) {
LAB_1495b9164:
      uVar3 = (*DAT_14c765d30)();
    }
    else {
      uVar3 = 0x80;
      if (uVar7 < *(ulonglong *)(lVar2 + 0x1b8)) {
        if (uVar7 < *(ulonglong *)(lVar2 + 0x1c0)) goto LAB_1495b9164;
        uVar3 = (uint)*(ushort *)(lVar2 + 0x17e);
      }
    }
    *(int *)(param_1 + 3) = (int)uVar3 >> 6;
    iVar1 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  plVar4 = (longlong *)((longlong)iVar1 * 0x40 + param_1[4]);
  if (param_2 == 0) {
    *(undefined2 *)(plVar4 + 2) = 1;
    goto LAB_1495b903c;
  }
  sVar5 = 1;
  if ((*(byte *)(param_2 + 6) & 4) != 0) {
    uVar3 = *(uint *)(param_2 + 0x2c);
    uVar7 = (ulonglong)(int)uVar3;
    if (uVar7 < 8) {
      sVar5 = -0x10e;
      if (uVar3 < 2) goto LAB_1495b9009;
      sVar5 = 0x28;
      do {
        sVar5 = sVar5 + -10;
        uVar8 = uVar7 * 2;
        bVar9 = uVar7 < 4;
        uVar7 = uVar8;
      } while (bVar9);
    }
    else {
      sVar5 = 0x28;
      if (0xff < uVar3) {
        sVar5 = 0x28;
        uVar8 = uVar7;
        do {
          sVar5 = sVar5 + 0x28;
          uVar7 = uVar8 >> 4;
          bVar9 = 0xfff < uVar8;
          uVar8 = uVar7;
        } while (bVar9);
      }
      uVar8 = uVar7;
      if (0xf < uVar7) {
        do {
          sVar5 = sVar5 + 10;
          uVar8 = uVar7 >> 1;
          bVar9 = 0x1f < uVar7;
          uVar7 = uVar8;
        } while (bVar9);
      }
    }
    sVar5 = sVar5 + (&DAT_14bd41890)[(uint)uVar8 & 7] + -0x118;
  }
LAB_1495b9009:
  *(short *)(plVar4 + 2) = sVar5;
  do {
    if ((*(uint *)(param_2 + 4) & 0x41000) == 0) goto LAB_1495b903e;
    if ((*(uint *)(param_2 + 4) >> 0x12 & 1) == 0) {
      plVar6 = (longlong *)(param_2 + 0x10);
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(param_2 + 0x20) + 8);
    }
    param_2 = *plVar6;
  } while (param_2 != 0);
LAB_1495b903c:
  param_2 = 0;
LAB_1495b903e:
  *plVar4 = param_2;
  *(ushort *)((longlong)plVar4 + 0x12) = param_3;
  plVar4[1] = (longlong)param_1;
  *(undefined8 *)((longlong)plVar4 + 0x14) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x2c) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  return iVar1;
}



// FUNCTION 1495b91b7 FUN_1495b91b7 body=7248 status=ok
// SIG undefined FUN_1495b91b7(void)

void FUN_1495b91b7(undefined8 param_1,undefined8 *param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  int *piVar6;
  ulonglong *puVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  ushort uVar12;
  short sVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  longlong lVar23;
  size_t sVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  ushort uVar28;
  uint uVar29;
  longlong lVar30;
  byte bVar31;
  undefined4 uVar32;
  uint uVar33;
  int iVar34;
  short sVar35;
  int iVar36;
  char *pcVar37;
  longlong lVar38;
  char *pcVar39;
  ulonglong uVar40;
  undefined8 *puVar41;
  longlong lVar42;
  bool bVar43;
  byte bVar44;
  longlong *plVar45;
  ulonglong uVar46;
  byte *pbVar47;
  longlong *plVar48;
  char *pcVar49;
  bool bVar50;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  int local_dc;
  undefined8 *local_d8;
  byte *local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  uint local_b4;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong *local_a0;
  undefined8 local_98;
  char *local_90;
  ulonglong local_88;
  int *local_80;
  longlong local_78;
  int *local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar17 = (undefined8 *)*param_2;
  plVar5 = (longlong *)*puVar17;
  lVar23 = *plVar5;
  if (*(char *)(lVar23 + 0x61) != '\0') goto LAB_1495b91ed;
  puVar41 = (undefined8 *)param_2[4];
  local_b0 = (longlong)param_3 * 0x40;
  local_80 = (int *)(puVar17 + 0x52);
  pbVar26 = (byte *)puVar41[(longlong)param_3 * 8];
  local_98 = param_1;
  if (*(longlong *)(pbVar26 + 0x10) == 0) {
    local_c8 = (undefined8 *)0x0;
  }
  else {
    local_c8 = (undefined8 *)FUN_1495bb052(local_80);
  }
  bVar11 = *pbVar26;
  local_d0 = pbVar26;
  if (bVar11 == 0x32) {
LAB_1495b931a:
    uVar46 = 0;
    local_dc = param_3;
  }
  else if (bVar11 == 0x31) {
    local_d8 = puVar41;
    iVar14 = FUN_1495a0961(plVar5,pbVar26);
    if (iVar14 != 0) goto LAB_1495b91ed;
    piVar6 = *(int **)(pbVar26 + 0x20);
    if ((pbVar26[5] & 8) == 0) {
      puVar41 = local_d8;
      if ((piVar6 == (int *)0x0) || (iVar14 = *piVar6, iVar14 < 1)) goto LAB_1495b931a;
      plVar18 = (longlong *)(piVar6 + 2);
      lVar38 = 0;
      uVar46 = 0;
      local_dc = param_3;
      local_70 = piVar6;
      do {
        if (*plVar18 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = FUN_1495bb052(local_80);
          iVar14 = *local_70;
          puVar41 = local_d8;
        }
        uVar46 = uVar46 | uVar19;
        lVar38 = lVar38 + 1;
        plVar18 = plVar18 + 4;
      } while (lVar38 < iVar14);
    }
    else {
      local_dc = param_3;
      uVar46 = FUN_1495bae0d(local_80,piVar6);
      puVar41 = local_d8;
    }
  }
  else {
    if (*(longlong *)(pbVar26 + 0x18) == 0) goto LAB_1495b931a;
    local_dc = param_3;
    uVar46 = FUN_1495bb052(local_80);
  }
  piVar6 = local_80;
  pbVar26 = local_d0;
  puVar41 = (undefined8 *)((longlong)puVar41 + local_b0);
  puVar41[6] = uVar46;
  *local_80 = 0;
  uVar46 = FUN_1495bb052();
  iVar14 = local_dc;
  if (*piVar6 != 0) {
    *(byte *)((longlong)puVar41 + 0x13) = *(byte *)((longlong)puVar41 + 0x13) | 0x10;
  }
  if ((pbVar26[4] & 1) != 0) {
    if (0 < (longlong)*(int *)((longlong)puVar17 + 0x294)) {
      uVar19 = 0;
      do {
        if (*(int *)((longlong)puVar17 + uVar19 * 4 + 0x298) == (int)*(short *)(pbVar26 + 0x34)) {
          uVar40 = 1L << ((byte)uVar19 & 0x3f);
          uVar46 = uVar46 | 1L << (uVar19 & 0x3f);
          if (uVar46 >> 1 < uVar40) {
            local_70 = (int *)(uVar40 - 1);
            goto LAB_1495b9368;
          }
          break;
        }
        uVar19 = uVar19 + 1;
      } while ((longlong)*(int *)((longlong)puVar17 + 0x294) != uVar19);
    }
    FUN_14955a364(plVar5,"ON clause references tables to its right");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  local_70 = (int *)0x0;
LAB_1495b9368:
  puVar41[7] = uVar46;
  puVar41[3] = 0xffffffffffffffff;
  *(undefined2 *)((longlong)puVar41 + 0x14) = 0;
  uVar33 = (uint)bVar11;
  if ((uVar33 < 0x3a) && ((0x3e6200000000000U >> ((ulonglong)uVar33 & 0x3f) & 1) != 0)) {
    for (lVar38 = *(longlong *)(pbVar26 + 0x10); lVar38 != 0; lVar38 = *(longlong *)(lVar38 + 0x10))
    {
      if ((*(byte *)(lVar38 + 5) & 0x10) == 0) goto LAB_1495b95a4;
    }
    lVar38 = 0;
LAB_1495b95a4:
    lVar42 = *(longlong *)(pbVar26 + 0x18);
    if (lVar42 == 0) {
      cVar10 = '\x01';
    }
    else {
      do {
        uVar29 = *(uint *)(lVar42 + 4) & 0x1000;
        cVar10 = (char)(uVar29 >> 0xc);
        if (uVar29 == 0) goto LAB_1495b95b6;
        lVar42 = *(longlong *)(lVar42 + 0x10);
      } while (lVar42 != 0);
    }
    lVar42 = 0;
LAB_1495b95b6:
    uVar15 = 0x800;
    if ((puVar41[6] & (ulonglong)local_c8) == 0) {
      uVar15 = 0x1fff;
    }
    local_a8 = CONCAT44(local_a8._4_4_,uVar15);
    if (0 < *(int *)(puVar41 + 4)) {
      lVar38 = *(longlong *)
                (*(longlong *)(lVar38 + 0x20) + 8 + (ulonglong)(*(int *)(puVar41 + 4) - 1) * 0x20);
    }
    local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,uVar33);
    local_c0 = uVar46;
    iVar34 = FUN_1495bb29a(local_98,local_c8,&local_58,lVar38);
    uVar29 = (uint)bVar11;
    if (iVar34 != 0) {
      *(undefined4 *)((longlong)puVar41 + 0x1c) = (undefined4)local_58;
      *(undefined4 *)(puVar41 + 5) = local_58._4_4_;
      if (uVar33 == 0x2d) {
        uVar12 = 0x80;
      }
      else if (uVar29 == 0x31) {
        uVar12 = 1;
      }
      else if (uVar29 == 0x32) {
        uVar12 = 0x100;
      }
      else {
        uVar12 = (ushort)(2 << (bVar11 - 0x35 & 0x1f));
      }
      *(ushort *)((longlong)puVar41 + 0x14) = (ushort)local_a8 & uVar12;
    }
    if (uVar29 == 0x2d) {
      *(byte *)((longlong)puVar41 + 0x13) = *(byte *)((longlong)puVar41 + 0x13) | 8;
    }
    pbVar26 = local_d0;
    if (cVar10 == '\0') {
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,uVar29);
      iVar34 = FUN_1495bb29a(local_98,puVar41[6],&local_58,lVar42);
      pbVar26 = local_d0;
      if (iVar34 != 0) {
        if (*(int *)((longlong)puVar41 + 0x1c) < 0) {
          sVar35 = 0;
          puVar17 = puVar41;
        }
        else {
          if (local_d0 == (byte *)0x0) {
            if (*(char *)(lVar23 + 0x61) != '\0') goto LAB_1495b91ed;
            pbVar26 = (byte *)0x0;
          }
          else {
            pbVar26 = (byte *)FUN_1495a1c89(lVar23,local_d0,0,0);
            if (*(char *)(lVar23 + 0x61) != '\0') {
              if (pbVar26 != (byte *)0x0) {
                FUN_14958288e(lVar23,pbVar26);
              }
              goto LAB_1495b91ed;
            }
          }
          iVar34 = FUN_1495b8fc6(param_2,pbVar26,3);
          if (iVar34 == 0) goto LAB_1495b91ed;
          lVar38 = param_2[4];
          lVar42 = (longlong)iVar34 * 0x40;
          *(int *)(lVar38 + 0x18 + lVar42) = iVar14;
          local_d8 = (undefined8 *)(lVar38 + lVar42);
          *(undefined2 *)(param_2[4] + 0x10 + lVar42) =
               *(undefined2 *)(local_b0 + param_2[4] + 0x10);
          pcVar49 = (char *)(local_b0 + param_2[4] + 0x16);
          *pcVar49 = *pcVar49 + '\x01';
          if (bVar11 == 0x2d) {
            *(byte *)((longlong)local_d8 + 0x13) = *(byte *)((longlong)local_d8 + 0x13) | 8;
          }
          lVar38 = param_2[4];
          puVar2 = (ushort *)(local_b0 + lVar38 + 0x12);
          *puVar2 = *puVar2 | 8;
          puVar41 = (undefined8 *)(local_b0 + lVar38);
          iVar34 = FUN_1495bb2f0(plVar5,pbVar26);
          puVar17 = local_d8;
          if (iVar34 == 0) {
            sVar35 = 0;
          }
          else {
            *(byte *)((longlong)puVar41 + 0x15) = *(byte *)((longlong)puVar41 + 0x15) | 8;
            sVar35 = 0x800;
          }
        }
        if ((**(char **)(pbVar26 + 0x10) == -0x52) || (**(char **)(pbVar26 + 0x18) == -0x52)) {
LAB_1495b9b8f:
          pbVar26[5] = pbVar26[5] ^ 2;
        }
        else {
          local_d8 = (undefined8 *)FUN_149586264(plVar5);
          puVar25 = (undefined8 *)
                    FUN_149586264(plVar5,*(undefined8 *)(pbVar26 + 0x18),
                                  *(undefined8 *)(pbVar26 + 0x10));
          if (local_d8 != puVar25) goto LAB_1495b9b8f;
        }
        uVar21 = *(undefined8 *)(pbVar26 + 0x18);
        *(undefined8 *)(pbVar26 + 0x18) = *(undefined8 *)(pbVar26 + 0x10);
        *(undefined8 *)(pbVar26 + 0x10) = uVar21;
        if (0x35 < *pbVar26) {
          *pbVar26 = (*pbVar26 - 0x36 ^ 2) + 0x36;
        }
        *(undefined4 *)((longlong)puVar17 + 0x1c) = (undefined4)local_58;
        *(undefined4 *)(puVar17 + 5) = local_58._4_4_;
        puVar17[6] = (ulonglong)local_c8 | (ulonglong)local_70;
        puVar17[7] = local_c0;
        bVar11 = *pbVar26;
        if (bVar11 == 0x2d) {
          sVar13 = 0x80;
        }
        else if (bVar11 == 0x31) {
          sVar13 = 1;
        }
        else if (bVar11 == 0x32) {
          sVar13 = 0x100;
        }
        else {
          sVar13 = (short)(2 << (bVar11 - 0x35 & 0x1f));
        }
        *(ushort *)((longlong)puVar17 + 0x14) = (ushort)local_a8 & sVar35 + sVar13;
        pbVar26 = local_d0;
      }
    }
  }
  else if (*pbVar26 == 0x30) {
    if (*(char *)(param_2 + 2) == ',') {
      lVar38 = *(longlong *)(pbVar26 + 0x20);
      lVar42 = 0;
      bVar50 = true;
      do {
        bVar43 = bVar50;
        lVar20 = *(longlong *)(lVar38 + 8 + lVar42 * 0x20);
        if (lVar20 != 0) {
          FUN_1495a1c89(lVar23,lVar20,0,0);
        }
        if (*(longlong *)(local_d0 + 0x10) == 0) {
          uVar21 = 0;
        }
        else {
          uVar21 = FUN_1495a1c89(lVar23,*(longlong *)(local_d0 + 0x10),0,0);
        }
        lVar42 = FUN_14958aad5(plVar5,"97NOCASE"[lVar42],uVar21);
        pbVar26 = local_d0;
        if (lVar42 != 0) {
          *(uint *)(lVar42 + 4) = *(uint *)(lVar42 + 4) | *(uint *)(local_d0 + 4) & 1;
          *(undefined2 *)(lVar42 + 0x34) = *(undefined2 *)(local_d0 + 0x34);
        }
        iVar34 = FUN_1495b8fc6(param_2,lVar42,3);
        FUN_1495b91b7(local_98,param_2,iVar34);
        lVar20 = param_2[4];
        *(int *)(lVar20 + 0x18 + (longlong)iVar34 * 0x40) = iVar14;
        *(undefined2 *)(param_2[4] + 0x10 + (longlong)iVar34 * 0x40) =
             *(undefined2 *)(local_b0 + param_2[4] + 0x10);
        pcVar49 = (char *)(local_b0 + param_2[4] + 0x16);
        *pcVar49 = *pcVar49 + '\x01';
        lVar42 = 1;
        bVar50 = false;
      } while (bVar43);
      puVar41 = (undefined8 *)(local_b0 + lVar20);
    }
  }
  else if (*pbVar26 == 0x2b) {
    local_c8 = (undefined8 *)*param_2;
    lVar38 = param_2[4];
    puVar7 = (ulonglong *)*local_c8;
    uVar46 = *puVar7;
    lVar42 = *(longlong *)(local_b0 + lVar38);
    if (uVar46 == 0) {
      puVar17 = (undefined8 *)FUN_145e3bd67(0x230);
    }
    else {
      puVar17 = (undefined8 *)FUN_14955d750(uVar46);
    }
    lVar20 = local_b0;
    if (puVar17 == (undefined8 *)0x0) {
      *(undefined8 *)(local_b0 + lVar38 + 0x28) = 0;
    }
    else {
      local_dc = iVar14;
      local_a8 = uVar46;
      local_a0 = puVar7;
      memset(puVar17,0,0x230);
      *(undefined8 **)(lVar20 + lVar38 + 0x28) = puVar17;
      pbVar26 = (byte *)(lVar20 + lVar38 + 0x12);
      *pbVar26 = *pbVar26 | 0x10;
      memset(puVar17 + 5,0,0x200);
      *puVar17 = local_c8;
      *(undefined1 *)((longlong)puVar17 + 0x11) = 0;
      puVar17[1] = 0;
      *(undefined8 *)((longlong)puVar17 + 0x14) = 0x800000000;
      puVar17[4] = puVar17 + 5;
      local_78 = lVar42;
      FUN_1495b4ca7(puVar17,lVar42,0x2b);
      local_d8 = puVar17;
      if (0 < *(int *)((longlong)puVar17 + 0x14)) {
        uVar33 = *(int *)((longlong)puVar17 + 0x14) + 1;
        do {
          FUN_1495b91b7(local_98,local_d8,uVar33 - 2);
          uVar33 = uVar33 - 1;
        } while (1 < uVar33);
      }
      iVar14 = local_dc;
      if (*(char *)(local_a8 + 0x61) == '\0') {
        iVar14 = *(int *)((longlong)local_d8 + 0x14);
        if (iVar14 < 1) {
          local_d8[0x45] = 0xffffffffffffffff;
          local_c0 = 0xffffffffffffffff;
LAB_1495ba1a3:
          *(undefined2 *)(lVar20 + lVar38 + 0x14) = 0x200;
          *(undefined1 *)((longlong)param_2 + 0x11) = 1;
          if (*(int *)((longlong)local_d8 + 0x14) == 2) {
            plVar18 = (longlong *)local_d8[4];
            lVar38 = 0;
LAB_1495ba1c8:
            if (*(short *)((longlong)plVar18 + 0x14) == 0x400) {
              if (*(int *)(plVar18[5] + 0x14) <= lVar38) goto LAB_1495ba5b3;
              plVar48 = (longlong *)(lVar38 * 0x40 + *(longlong *)(plVar18[5] + 0x20));
            }
            else {
              plVar48 = plVar18;
              if (lVar38 != 0) goto LAB_1495ba5b3;
            }
            if (plVar48 != (longlong *)0x0) {
              lVar38 = lVar38 + 1;
              lVar42 = 0;
              puVar17 = local_d8;
              do {
                if (*(short *)((longlong)plVar18 + 0x54) == 0x400) {
                  if (*(int *)(plVar18[0xd] + 0x14) <= lVar42) goto LAB_1495ba1c8;
                  plVar45 = (longlong *)(lVar42 * 0x40 + *(longlong *)(plVar18[0xd] + 0x20));
                }
                else {
                  plVar45 = plVar18 + 8;
                  if (lVar42 != 0) goto LAB_1495ba1c8;
                }
                if (plVar45 == (longlong *)0x0) goto LAB_1495ba1c8;
                if (((((*(ushort *)((longlong)plVar48 + 0x14) & 0x3e) != 0) &&
                     ((*(ushort *)((longlong)plVar45 + 0x14) & 0x3e) != 0)) &&
                    ((uVar12 = *(ushort *)((longlong)plVar45 + 0x14) |
                               *(ushort *)((longlong)plVar48 + 0x14), (uVar12 & 0xffe5) == 0 ||
                     ((uVar12 & 0xffd9) == 0)))) &&
                   ((iVar14 = FUN_14959fe84(0,*(undefined8 *)(*plVar48 + 0x10),
                                            *(undefined8 *)(*plVar45 + 0x10)), puVar17 = local_d8,
                    iVar14 == 0 &&
                    (iVar14 = FUN_14959fe84(0,*(undefined8 *)(*plVar48 + 0x18),
                                            *(undefined8 *)(*plVar45 + 0x18)), puVar17 = local_d8,
                    iVar14 == 0)))) {
                  uVar28 = 8;
                  if ((uVar12 & 0x18) == 0) {
                    uVar28 = 0x20;
                  }
                  if ((uVar12 + 0x3f & uVar12) != 0) {
                    uVar12 = uVar28;
                  }
                  if (*plVar48 != 0) {
                    pcVar49 = (char *)FUN_1495a1c89(**(undefined8 **)*param_2,*plVar48,0);
                    puVar17 = local_d8;
                    if (pcVar49 != (char *)0x0) {
                      bVar11 = 0;
                      do {
                        bVar44 = bVar11;
                        uVar33 = 2 << (bVar44 & 0x1f);
                        bVar11 = bVar44 + 1;
                      } while (uVar33 != uVar12);
                      *pcVar49 = bVar44 + 0x35;
                      uVar15 = FUN_1495b8fc6(param_2,pcVar49,
                                             CONCAT62((uint6)(ushort)(uVar33 >> 0x10),3));
                      FUN_1495b91b7(local_98,param_2,uVar15);
                      puVar17 = local_d8;
                    }
                  }
                }
                lVar42 = lVar42 + 1;
                plVar18 = (longlong *)puVar17[4];
              } while( true );
            }
          }
        }
        else {
          puVar17 = (undefined8 *)local_d8[4];
          uVar46 = 0xffffffffffffffff;
          local_c0 = 0xffffffffffffffff;
          puVar41 = local_c8;
          do {
            if ((*(ushort *)((longlong)puVar17 + 0x14) & 0x1ff) == 0) {
              puVar41 = (undefined8 *)FUN_14955d750();
              if (puVar41 == (undefined8 *)0x0) {
                uVar46 = 0;
                puVar41 = local_c8;
              }
              else {
                puVar17[5] = puVar41;
                *(byte *)((longlong)puVar17 + 0x12) = *(byte *)((longlong)puVar17 + 0x12) | 0x20;
                *(undefined2 *)((longlong)puVar17 + 0x14) = 0x400;
                local_90 = (char *)(puVar41 + 5);
                memset(local_90,0,0x200);
                *puVar41 = *param_2;
                *(undefined1 *)((longlong)puVar41 + 0x11) = 0;
                puVar41[1] = 0;
                *(undefined8 *)((longlong)puVar41 + 0x14) = 0x800000000;
                puVar41[4] = local_90;
                FUN_1495b4ca7(puVar41,*puVar17,0x2c);
                if (0 < *(int *)((longlong)puVar41 + 0x14)) {
                  uVar33 = *(int *)((longlong)puVar41 + 0x14) + 1;
                  do {
                    FUN_1495b91b7(local_98,puVar41,uVar33 - 2);
                    uVar33 = uVar33 - 1;
                  } while (1 < uVar33);
                }
                puVar41[1] = param_2;
                if ((*(char *)(local_a8 + 0x61) == '\0') && (0 < *(int *)((longlong)puVar41 + 0x14))
                   ) {
                  puVar25 = (undefined8 *)puVar41[4];
                  iVar34 = 0;
                  uVar46 = 0;
                  do {
                    if ((((ulonglong)*(byte *)*puVar25 < 0x3a) &&
                        ((0x3e6200000000000U >> ((ulonglong)*(byte *)*puVar25 & 0x3f) & 1) != 0)) ||
                       (*(short *)((longlong)puVar25 + 0x14) == 0x40)) {
                      if (0 < (longlong)*(int *)((longlong)local_c8 + 0x294)) {
                        lVar42 = 0;
                        do {
                          if (*(int *)((longlong)local_c8 + lVar42 * 4 + 0x298) ==
                              *(int *)((longlong)puVar25 + 0x1c)) {
                            uVar19 = 1L << ((byte)lVar42 & 0x3f);
                            goto LAB_1495ba0de;
                          }
                          lVar42 = lVar42 + 1;
                        } while (*(int *)((longlong)local_c8 + 0x294) != lVar42);
                      }
                      uVar19 = 0;
LAB_1495ba0de:
                      uVar46 = uVar46 | uVar19;
                    }
                    iVar34 = iVar34 + 1;
                    puVar25 = puVar25 + 8;
                  } while (iVar34 != *(int *)((longlong)puVar41 + 0x14));
                }
                else {
                  uVar46 = 0;
                }
                local_c0 = local_c0 & uVar46;
                uVar46 = 0;
                puVar41 = local_c8;
              }
            }
            else {
              uVar12 = *(ushort *)((longlong)puVar17 + 0x12);
              if ((uVar12 & 8) == 0) {
                lVar42 = (longlong)*(int *)((longlong)puVar41 + 0x294);
                if (lVar42 < 1) {
                  uVar19 = 0;
                  uVar40 = 0;
                  if ((uVar12 & 2) != 0) goto LAB_1495ba033;
                }
                else {
                  lVar30 = 0;
                  do {
                    if (*(int *)((longlong)puVar41 + lVar30 * 4 + 0x298) ==
                        *(int *)((longlong)puVar17 + 0x1c)) {
                      uVar19 = 1L << ((byte)lVar30 & 0x3f);
                      goto LAB_1495b9fe3;
                    }
                    lVar30 = lVar30 + 1;
                  } while (lVar42 != lVar30);
                  uVar19 = 0;
LAB_1495b9fe3:
                  puVar41 = local_c8;
                  if ((uVar12 & 2) != 0) {
                    lVar30 = 0;
                    do {
                      if (*(int *)((longlong)local_c8 + lVar30 * 4 + 0x298) ==
                          *(int *)(local_d8[4] + 0x1c + (longlong)*(int *)(puVar17 + 3) * 0x40)) {
                        uVar40 = 1L << ((byte)lVar30 & 0x3f);
                        goto LAB_1495ba033;
                      }
                      lVar30 = lVar30 + 1;
                    } while (lVar42 != lVar30);
                    uVar40 = 0;
LAB_1495ba033:
                    uVar19 = uVar19 | uVar40;
                  }
                }
                local_c0 = local_c0 & uVar19;
                uVar46 = uVar46 & uVar19;
                if ((*(ushort *)((longlong)puVar17 + 0x14) & 2) == 0) {
                  uVar46 = 0;
                }
              }
            }
            if (iVar14 < 2) break;
            iVar14 = iVar14 + -1;
            puVar17 = puVar17 + 8;
          } while (local_c0 != 0);
          local_d8[0x45] = local_c0;
          bVar50 = local_c0 != 0;
          local_c0 = uVar46;
          if (bVar50) goto LAB_1495ba1a3;
          *(undefined2 *)(lVar20 + lVar38 + 0x14) = 0x200;
        }
LAB_1495ba5b3:
        iVar14 = local_dc;
        if (local_c0 != 0) {
          local_88 = 0;
          local_90 = (char *)((ulonglong)local_90 & 0xffffffff00000000);
          iVar14 = -1;
LAB_1495ba5dc:
          if (0 < *(int *)((longlong)local_d8 + 0x14)) {
            plVar18 = (longlong *)local_d8[4];
            iVar34 = *(int *)((longlong)local_d8 + 0x14);
            do {
              *(byte *)((longlong)plVar18 + 0x12) = *(byte *)((longlong)plVar18 + 0x12) & 0xbf;
              iVar36 = *(int *)((longlong)plVar18 + 0x1c);
              if (iVar36 != iVar14) {
                if (0 < (longlong)*(int *)((longlong)local_c8 + 0x294)) {
                  lVar38 = 0;
                  do {
                    if (*(int *)((longlong)local_c8 + lVar38 * 4 + 0x298) == iVar36) {
                      uVar46 = 1L << ((byte)lVar38 & 0x3f);
                      goto LAB_1495ba632;
                    }
                    lVar38 = lVar38 + 1;
                  } while (*(int *)((longlong)local_c8 + 0x294) != lVar38);
                }
                uVar46 = 0;
LAB_1495ba632:
                if ((uVar46 & local_c0) != 0) goto LAB_1495ba657;
              }
              plVar18 = plVar18 + 8;
              bVar50 = iVar34 < 2;
              iVar34 = iVar34 + -1;
              if (bVar50) break;
            } while( true );
          }
          goto LAB_1495ba723;
        }
      }
    }
LAB_1495b9b3f:
    puVar41 = (undefined8 *)(local_b0 + param_2[4]);
    pbVar26 = local_d0;
  }
  if (*(char *)(param_2 + 2) == ',') {
    if ((*pbVar26 == 0xa9) && (*(int **)(pbVar26 + 0x20) != (int *)0x0)) {
      puVar17 = (undefined8 *)*plVar5;
      iVar34 = **(int **)(pbVar26 + 0x20);
      local_e8 = (undefined1 *)((ulonglong)local_e8 & 0xffffffffffffff00);
      local_d8 = puVar41;
      lVar38 = FUN_14955c8a3(puVar17,*(undefined8 *)(pbVar26 + 8),iVar34,1);
      puVar41 = local_d8;
      pbVar26 = local_d0;
      if ((lVar38 != 0) && (uVar33 = *(uint *)(lVar38 + 4), (uVar33 & 4) != 0)) {
        lVar42 = *(longlong *)(local_d0 + 0x20);
        if (iVar34 < 3) {
          bVar11 = 0;
LAB_1495ba313:
          local_a8 = CONCAT44(local_a8._4_4_,uVar33);
          puVar27 = *(undefined1 **)(lVar38 + 8);
          for (pcVar49 = *(char **)(lVar42 + 8); pcVar49 != (char *)0x0;
              pcVar49 = *(char **)(pcVar49 + 0x10)) {
            if ((pcVar49[5] & 0x10U) == 0) goto LAB_1495ba330;
          }
          pcVar49 = (char *)0x0;
LAB_1495ba330:
          local_a0 = (ulonglong *)CONCAT71(local_a0._1_7_,*puVar27);
          bVar44 = puVar27[1];
          bVar3 = puVar27[2];
          local_90 = *(char **)(lVar42 + 0x28);
          cVar10 = *pcVar49;
          local_78 = CONCAT71(local_78._1_7_,cVar10);
          if (cVar10 == -0x67) {
            if ((*(byte *)((longlong)puVar17 + 0x32) & 0x80) == 0) {
              sVar35 = *(short *)(pcVar49 + 0x30);
              local_dc = iVar14;
              local_c8 = puVar17;
              local_c0 = FUN_1495a0450(plVar5[0x26],(int)sVar35);
              if ((local_c0 == 0) ||
                 (uVar33 = *(uint *)(local_c0 + 8),
                 (0x4000400040004U >> ((ulonglong)uVar33 & 0x3f) & 1) == 0)) {
LAB_1495ba39e:
                pbVar26 = (byte *)0x0;
              }
              else if (((~uVar33 & 0x202) == 0) && (*(char *)(local_c0 + 10) == '\x01')) {
                pbVar26 = *(byte **)(local_c0 + 0x10);
              }
              else {
                if ((uVar33 & 1) != 0) goto LAB_1495ba39e;
                pbVar26 = (byte *)FUN_14956b88d(local_c0,1);
              }
              if (sVar35 < 0x20) {
                puVar1 = (uint *)(plVar5[2] + 0x114);
                *puVar1 = *puVar1 | 1 << ((char)sVar35 - 1U & 0x1f);
              }
              else {
                pbVar47 = (byte *)(plVar5[2] + 0x117);
                *pbVar47 = *pbVar47 | 0x80;
              }
              goto LAB_1495ba3d2;
            }
LAB_1495ba538:
            local_c0 = 0;
            local_dc = iVar14;
            local_c8 = puVar17;
          }
          else {
            if (cVar10 != 's') goto LAB_1495ba538;
            pbVar26 = *(byte **)(pcVar49 + 8);
            local_c0 = 0;
            local_dc = iVar14;
            local_c8 = puVar17;
LAB_1495ba3d2:
            if ((((pbVar26 != (byte *)0x0) && (bVar4 = *pbVar26, bVar4 != 0)) &&
                (bVar4 != (byte)local_a0)) && ((bVar4 != bVar44 && (bVar4 != bVar3)))) {
              uVar46 = 0;
              bVar31 = bVar4;
              do {
                uVar19 = (longlong)(int)uVar46 + 1;
                if ((bVar31 == bVar11) && (pbVar26[uVar19] != 0)) {
                  uVar19 = (ulonglong)((int)uVar46 + 2);
                }
                iVar14 = (int)uVar19;
                uVar46 = uVar19 & 0xffffffff;
                lVar38 = (longlong)iVar14;
                bVar31 = pbVar26[lVar38];
              } while ((((bVar31 != 0) && (bVar31 != (byte)local_a0)) && (bVar31 != bVar44)) &&
                      (bVar31 != bVar3));
              if (((iVar14 != 0) && (pbVar26[lVar38 + -1] != 0xff)) &&
                 ((bVar4 != bVar11 || (1 < iVar14)))) {
                local_b4 = 0;
                if (bVar31 == (byte)local_a0) {
                  local_b4 = (uint)(pbVar26[lVar38 + 1] == 0);
                }
                local_58 = pbVar26;
                sVar24 = strlen((char *)pbVar26);
                local_50 = (uint)sVar24 & 0x3fffffff;
                uVar46 = 0;
                local_88 = FUN_14958f7cb(local_c8,0x73,&local_58,0);
                if (local_88 != 0) {
                  local_a0 = *(ulonglong **)(local_88 + 8);
                  *(char *)((longlong)local_a0 + lVar38) = '\0';
                  if (0 < iVar14) {
                    uVar46 = 0;
                    iVar34 = 0;
                    do {
                      bVar50 = (int)*(char *)((longlong)local_a0 + (longlong)iVar34) == (uint)bVar11
                      ;
                      *(char *)((longlong)local_a0 + uVar46) =
                           *(char *)((longlong)local_a0 + (longlong)(int)(iVar34 + (uint)bVar50));
                      uVar46 = uVar46 + 1;
                      iVar34 = iVar34 + (uint)bVar50 + 1;
                    } while (iVar34 < iVar14);
                  }
                  uVar19 = uVar46 & 0xffffffff;
                  *(char *)((longlong)local_a0 + uVar19) = '\0';
                  if (((*local_90 != -0x5c) || (cVar10 = FUN_14959f8fa(local_90), cVar10 != 'B')) ||
                     (*(int *)(*(longlong *)(local_90 + 0x40) + 0x54) != 0)) {
                    iVar14 = FUN_14956c0e2(local_a0,&local_58,uVar19,1);
                    puVar7 = local_a0;
                    if ((iVar14 < 1) && (((int)uVar46 != 1 || ((char)*local_a0 != '-')))) {
                      cVar10 = ((char *)((longlong)local_a0 + -1))[uVar19];
                      ((char *)((longlong)local_a0 + -1))[uVar19] = cVar10 + '\x01';
                      iVar14 = FUN_14956c0e2(local_a0,&local_58,uVar19,1);
                      ((char *)((longlong)puVar7 + -1))[uVar19] = cVar10;
                      if (iVar14 < 1) goto LAB_1495ba4c6;
                    }
                    FUN_14958288e(local_c8,local_88);
                    goto LAB_1495ba541;
                  }
                }
LAB_1495ba4c6:
                if ((char)local_78 == -0x67) {
                  plVar18 = (longlong *)plVar5[2];
                  uVar33 = 0x80000000;
                  if ((short)*(undefined4 *)(pcVar49 + 0x30) < 0x20) {
                    uVar33 = 1 << ((char)*(undefined4 *)(pcVar49 + 0x30) - 1U & 0x1f);
                  }
                  *(uint *)((longlong)plVar18 + 0x114) =
                       *(uint *)((longlong)plVar18 + 0x114) | uVar33;
                  if ((local_b4 != 0) && (*(char *)(*(longlong *)(pcVar49 + 8) + 1) != '\0')) {
                    if (*(char *)((longlong)plVar5 + 0x1f) == '\0') {
                      iVar14 = (int)plVar5[7] + 1;
                      *(int *)(plVar5 + 7) = iVar14;
                    }
                    else {
                      bVar11 = *(char *)((longlong)plVar5 + 0x1f) - 1;
                      *(byte *)((longlong)plVar5 + 0x1f) = bVar11;
                      iVar14 = *(int *)((longlong)plVar5 + (ulonglong)bVar11 * 4 + 0xcc);
                    }
                    FUN_14959b4fb(plVar5,pcVar49,iVar14);
                    if (*(char *)(*plVar18 + 0x61) == '\0') {
                      puVar27 = (undefined1 *)
                                (plVar18[0x11] + (longlong)(int)plVar18[0x12] * 0x18 + -0x18);
                    }
                    else {
                      puVar27 = &DAT_14cc1ee40;
                    }
                    *(undefined4 *)(puVar27 + 0xc) = 0;
                    if (iVar14 != 0) {
                      bVar11 = *(byte *)((longlong)plVar5 + 0x1f);
                      if ((ulonglong)bVar11 < 8) {
                        *(byte *)((longlong)plVar5 + 0x1f) = bVar11 + 1;
                        *(int *)((longlong)plVar5 + (ulonglong)bVar11 * 4 + 0xcc) = iVar14;
                      }
                    }
                  }
                }
                FUN_149559090(local_c0);
                lVar38 = *(longlong *)(*(longlong *)(local_d0 + 0x20) + 0x28);
                if (local_88 == 0) {
                  lVar42 = 0;
                }
                else {
                  lVar42 = FUN_1495a1c89(lVar23,local_88,0,0);
                }
                if (((local_a8 & 8) == 0) && (*(char *)(*plVar5 + 0x61) == '\0')) {
                  *(byte *)((longlong)local_d8 + 0x13) = *(byte *)((longlong)local_d8 + 0x13) | 4;
                  pbVar26 = *(byte **)(local_88 + 8);
                  bVar11 = *pbVar26;
                  if (bVar11 != 0) {
                    lVar20 = 1;
                    do {
                      *pbVar26 = bVar11 & (~(&DAT_14bd400b0)[bVar11] | 0xdf);
                      *(undefined1 *)(*(longlong *)(lVar42 + 8) + -1 + lVar20) =
                           (&DAT_14bd3ff30)[bVar11];
                      bVar11 = *(byte *)(*(longlong *)(local_88 + 8) + lVar20);
                      pbVar26 = (byte *)(*(longlong *)(local_88 + 8) + lVar20);
                      lVar20 = lVar20 + 1;
                    } while (bVar11 != 0);
                  }
                }
                if (*(char *)(lVar23 + 0x61) == '\0') {
                  pcVar49 = *(char **)(lVar42 + 8);
                  if (pcVar49 == (char *)0x0) {
                    uVar46 = 0;
                  }
                  else {
                    sVar24 = strlen(pcVar49);
                    uVar46 = (ulonglong)((uint)sVar24 & 0x3fffffff);
                  }
                  bVar11 = pcVar49[uVar46 - 1];
                  if ((local_a8 & 8) == 0) {
                    if (bVar11 == 0x40) {
                      local_b4 = 0;
                    }
                    bVar11 = (&DAT_14bd3ff30)[bVar11];
                  }
                  pcVar49[uVar46 - 1] = bVar11 + 1;
                }
                pcVar49 = "BINARY";
                if ((local_a8 & 8) == 0) {
                  pcVar49 = "NOCASE";
                }
                if (lVar38 == 0) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = FUN_1495a1c89(lVar23,lVar38,0,0);
                }
                uVar21 = FUN_1495a66d3(plVar5,uVar21,pcVar49);
                lVar20 = FUN_14958aad5(plVar5,0x39,uVar21,local_88);
                if (lVar20 != 0) {
                  *(uint *)(lVar20 + 4) = *(uint *)(lVar20 + 4) | *(uint *)(local_d0 + 4) & 1;
                  *(undefined2 *)(lVar20 + 0x34) = *(undefined2 *)(local_d0 + 0x34);
                }
                iVar34 = FUN_1495b8fc6(param_2,lVar20,0x103);
                FUN_1495b91b7(local_98,param_2,iVar34);
                if (lVar38 == 0) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = FUN_1495a1c89(lVar23,lVar38,0,0);
                }
                uVar21 = FUN_1495a66d3(plVar5,uVar21,pcVar49);
                lVar38 = FUN_14958aad5(plVar5,0x38,uVar21,lVar42);
                if (lVar38 != 0) {
                  *(uint *)(lVar38 + 4) = *(uint *)(lVar38 + 4) | *(uint *)(local_d0 + 4) & 1;
                  *(undefined2 *)(lVar38 + 0x34) = *(undefined2 *)(local_d0 + 0x34);
                }
                iVar36 = FUN_1495b8fc6(param_2,lVar38,0x103);
                FUN_1495b91b7(local_98,param_2,iVar36);
                puVar41 = (undefined8 *)(local_b0 + param_2[4]);
                pbVar26 = local_d0;
                iVar14 = local_dc;
                if (local_b4 != 0) {
                  *(int *)(param_2[4] + 0x18 + (longlong)iVar34 * 0x40) = local_dc;
                  *(undefined2 *)(param_2[4] + 0x10 + (longlong)iVar34 * 0x40) =
                       *(undefined2 *)(local_b0 + param_2[4] + 0x10);
                  pcVar49 = (char *)(local_b0 + param_2[4] + 0x16);
                  *pcVar49 = *pcVar49 + '\x01';
                  *(int *)(param_2[4] + 0x18 + (longlong)iVar36 * 0x40) = local_dc;
                  *(undefined2 *)(param_2[4] + 0x10 + (longlong)iVar36 * 0x40) =
                       *(undefined2 *)(local_b0 + param_2[4] + 0x10);
                  pcVar49 = (char *)(local_b0 + param_2[4] + 0x16);
                  *pcVar49 = *pcVar49 + '\x01';
                }
                goto LAB_1495b96b8;
              }
            }
          }
LAB_1495ba541:
          FUN_149559090(local_c0);
          puVar41 = local_d8;
          pbVar26 = local_d0;
          iVar14 = local_dc;
        }
        else if (**(char **)(lVar42 + 0x48) == 's') {
          local_a8 = CONCAT44(local_a8._4_4_,uVar33);
          pbVar47 = *(byte **)(*(char **)(lVar42 + 0x48) + 8);
          bVar11 = *pbVar47;
          local_dc = iVar14;
          local_c8 = puVar17;
          if ((bVar11 != 0) && (pbVar47[1] == 0)) goto LAB_1495ba313;
        }
      }
    }
LAB_1495b96b8:
    if (*(char *)(param_2 + 2) == ',') {
      bVar11 = *pbVar26;
      if ((bVar11 - 0x33 < 2) || (bVar11 == 0xa8)) {
        pcVar49 = *(char **)(pbVar26 + 0x10);
        pcVar39 = *(char **)(pbVar26 + 0x18);
        uVar33 = 0;
        if (*pcVar49 == -0x5c) {
          uVar33 = (uint)(*(int *)(*(longlong *)(pcVar49 + 0x40) + 0x54) != 0);
        }
        uVar15 = 0;
        pcVar37 = pcVar49;
        if (pcVar39 == (char *)0x0) {
          pcVar39 = (char *)0x0;
        }
        else if ((*pcVar39 == -0x5c) && (*(int *)(*(longlong *)(pcVar39 + 0x40) + 0x54) != 0)) {
          uVar33 = uVar33 + 1;
          pcVar37 = pcVar39;
          pcVar39 = pcVar49;
        }
        if (bVar11 == 0x34) {
          uVar15 = 0x44;
        }
        uVar32 = 0x45;
        if (bVar11 != 0xa8) {
          uVar32 = uVar15;
        }
        uVar15 = 0x46;
        if (bVar11 != 0x33) {
          uVar15 = uVar32;
        }
        local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,uVar15);
        if (uVar33 != 0) {
LAB_1495b988c:
          uVar33 = uVar33 + 1;
          local_dc = iVar14;
          do {
            pcVar49 = pcVar37;
            if (pcVar39 == (char *)0x0) {
              uVar46 = 0;
            }
            else {
              uVar46 = FUN_1495bb052(local_80,pcVar39);
            }
            if (pcVar49 == (char *)0x0) {
              uVar19 = 0;
            }
            else {
              uVar19 = FUN_1495bb052(local_80,pcVar49);
              iVar14 = local_dc;
            }
            if ((uVar19 & uVar46) == 0) {
              if (pcVar39 == (char *)0x0) {
                uVar21 = 0;
              }
              else {
                uVar21 = FUN_1495a1c89(lVar23,pcVar39,0,0);
              }
              lVar38 = FUN_14958aad5(plVar5,0x2e,0,uVar21);
              if (((local_d0[4] & 1) != 0) && (lVar38 != 0)) {
                *(byte *)(lVar38 + 4) = *(byte *)(lVar38 + 4) | 1;
                *(undefined2 *)(lVar38 + 0x34) = *(undefined2 *)(local_d0 + 0x34);
              }
              iVar34 = FUN_1495b8fc6(param_2,lVar38,3);
              lVar38 = param_2[4];
              lVar20 = (longlong)iVar34 * 0x40;
              *(ulonglong *)(lVar38 + 0x30 + lVar20) = uVar46;
              *(undefined4 *)(lVar38 + 0x1c + lVar20) = *(undefined4 *)(pcVar49 + 0x2c);
              *(int *)(lVar38 + 0x28 + lVar20) = (int)*(short *)(pcVar49 + 0x30);
              *(undefined2 *)(lVar38 + 0x14 + lVar20) = 0x40;
              *(char *)(lVar38 + 0x17 + lVar20) = (char)local_c8;
              *(int *)(param_2[4] + 0x18 + lVar20) = iVar14;
              *(undefined2 *)(param_2[4] + 0x10 + lVar20) =
                   *(undefined2 *)(local_b0 + param_2[4] + 0x10);
              pcVar37 = (char *)(local_b0 + param_2[4] + 0x16);
              *pcVar37 = *pcVar37 + '\x01';
              lVar42 = param_2[4];
              puVar2 = (ushort *)(local_b0 + lVar42 + 0x12);
              *puVar2 = *puVar2 | 8;
              puVar41 = (undefined8 *)(local_b0 + lVar42);
              *(undefined8 *)(lVar38 + 0x38 + lVar20) = *(undefined8 *)(local_b0 + lVar42 + 0x38);
            }
            uVar33 = uVar33 - 1;
            pcVar37 = pcVar39;
            pcVar39 = pcVar49;
          } while (1 < uVar33);
        }
LAB_1495b9c6b:
        if (*(char *)(param_2 + 2) != ',') goto LAB_1495b9dc8;
        bVar11 = *local_d0;
        pbVar26 = local_d0;
      }
      else if (bVar11 == 0xa9) {
        piVar6 = *(int **)(pbVar26 + 0x20);
        if ((piVar6 != (int *)0x0) && (*piVar6 == 2)) {
          pcVar37 = *(char **)(piVar6 + 10);
          pbVar47 = pbVar26;
          if ((*pcVar37 == -0x5c) && (*(int *)(*(longlong *)(pcVar37 + 0x40) + 0x54) != 0)) {
            lVar38 = 0;
LAB_1495b972a:
            lVar42 = 0;
            do {
              bVar11 = *(byte *)(*(longlong *)(pbVar26 + 8) + lVar42);
              if (bVar11 == (&PTR_s_match_14bd478a0)[lVar38 * 2][lVar42]) {
                if ((ulonglong)bVar11 == 0) {
                  local_c8 = (undefined8 *)
                             CONCAT44(local_c8._4_4_,
                                      (int)CONCAT71((int7)((ulonglong)*(longlong *)(pbVar26 + 8) >>
                                                          8),(&DAT_14bd478a8)[lVar38 * 0x10]));
                  pcVar39 = *(char **)(piVar6 + 2);
                  uVar33 = 1;
                  goto LAB_1495b988c;
                }
              }
              else if ((&DAT_14bd3ff30)[bVar11] !=
                       (&DAT_14bd3ff30)[(byte)(&PTR_s_match_14bd478a0)[lVar38 * 2][lVar42]])
              goto LAB_1495b9769;
              lVar42 = lVar42 + 1;
            } while( true );
          }
LAB_1495b9783:
          pcVar37 = *(char **)(piVar6 + 2);
          if ((*pcVar37 == -0x5c) && (*(int *)(*(longlong *)(pcVar37 + 0x40) + 0x54) != 0)) {
            plVar18 = *(longlong **)(*(longlong *)(pcVar37 + 0x40) + 0x60);
            if (plVar18 == (longlong *)0x0) {
              plVar18 = (longlong *)0x0;
            }
            else {
              do {
                pbVar47 = local_d0;
                if (*plVar18 == lVar23) goto LAB_1495b97c6;
                plVar18 = (longlong *)plVar18[5];
              } while (plVar18 != (longlong *)0x0);
              plVar18 = (longlong *)0x0;
            }
LAB_1495b97c6:
            pcVar8 = *(code **)(*(longlong *)plVar18[2] + 0x90);
            local_d8 = puVar41;
            if (pcVar8 != (code *)0x0) {
              local_e8 = local_60;
              iVar34 = (*pcVar8)((longlong *)plVar18[2],2,*(undefined8 *)(pbVar47 + 8),&local_58);
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar34);
              puVar41 = local_d8;
              if (0x95 < iVar34) {
                pcVar39 = *(char **)(piVar6 + 10);
                uVar33 = 1;
                goto LAB_1495b988c;
              }
            }
          }
        }
        goto LAB_1495b9c6b;
      }
      if ((bVar11 == 0x35) || (bVar11 == 0x2d)) {
        pcVar49 = *(char **)(pbVar26 + 0x10);
        cVar10 = *pcVar49;
        if (cVar10 == -0x53) {
          cVar10 = pcVar49[2];
        }
        pcVar39 = pcVar49;
        if (cVar10 != -0x52) {
          if (cVar10 != -0x78) goto LAB_1495b9dbd;
          pcVar39 = *(char **)(pcVar49 + 0x20);
        }
        iVar34 = **(int **)(pcVar39 + 0x20);
        if (1 < iVar34) {
          pcVar39 = *(char **)(pbVar26 + 0x18);
          cVar10 = *pcVar39;
          if (cVar10 == -0x53) {
            cVar10 = pcVar39[2];
          }
          pcVar37 = pcVar39;
          if (cVar10 == -0x52) {
LAB_1495b9cf6:
            iVar36 = **(int **)(pcVar37 + 0x20);
          }
          else {
            iVar36 = (int)&DAT_00000001;
            if (cVar10 == -0x78) {
              pcVar37 = *(char **)(pcVar39 + 0x20);
              goto LAB_1495b9cf6;
            }
          }
          if ((iVar36 == iVar34) && (((pcVar49[5] & 8U) == 0 || ((pcVar39[5] & 8U) == 0)))) {
            iVar36 = 0;
            do {
              uVar21 = FUN_1495bb3a1(plVar5,*(undefined8 *)(pbVar26 + 0x10),iVar36);
              uVar22 = FUN_1495bb3a1(plVar5,*(undefined8 *)(local_d0 + 0x18),iVar36);
              pbVar26 = local_d0;
              lVar23 = FUN_14958aad5(plVar5,*local_d0,uVar21,uVar22);
              if (lVar23 != 0) {
                *(uint *)(lVar23 + 4) = *(uint *)(lVar23 + 4) | *(uint *)(pbVar26 + 4) & 1;
                *(undefined2 *)(lVar23 + 0x34) = *(undefined2 *)(pbVar26 + 0x34);
              }
              uVar15 = FUN_1495b8fc6(param_2,lVar23,1);
              FUN_1495b91b7(local_98,param_2,uVar15);
              iVar36 = iVar36 + 1;
            } while (iVar34 != iVar36);
            lVar23 = param_2[4];
            puVar2 = (ushort *)(local_b0 + lVar23 + 0x12);
            *puVar2 = *puVar2 | 6;
            *(undefined2 *)(local_b0 + lVar23 + 0x14) = 0;
            if (*(char *)(param_2 + 2) != ',') goto LAB_1495b9dc8;
            puVar41 = (undefined8 *)(local_b0 + lVar23);
            bVar11 = *pbVar26;
          }
        }
      }
LAB_1495b9dbd:
      if ((((bVar11 == 0x31) && (*(int *)(puVar41 + 4) == 0)) &&
          (pcVar49 = *(char **)(pbVar26 + 0x10), *pcVar49 == -0x52)) &&
         ((*(longlong *)(*(longlong *)(pbVar26 + 0x20) + 0x50) == 0 &&
          (*(longlong *)(*(longlong *)(pbVar26 + 0x20) + 0x70) == 0)))) {
        cVar10 = -0x52;
        iVar34 = 1;
        do {
          if (cVar10 == -0x53) {
            cVar10 = pcVar49[2];
          }
          if (cVar10 == -0x52) {
LAB_1495b9e26:
            iVar36 = **(int **)(pcVar49 + 0x20);
          }
          else {
            iVar36 = 1;
            if (cVar10 == -0x78) {
              pcVar49 = *(char **)(pcVar49 + 0x20);
              goto LAB_1495b9e26;
            }
          }
          if (iVar36 <= iVar34 + -1) break;
          iVar36 = FUN_1495b8fc6(param_2,pbVar26,2);
          lVar23 = (longlong)iVar36 * 0x40;
          *(int *)(param_2[4] + 0x20 + lVar23) = iVar34;
          FUN_1495b91b7(local_98,param_2);
          *(int *)(param_2[4] + 0x18 + lVar23) = iVar14;
          *(undefined2 *)(param_2[4] + 0x10 + lVar23) =
               *(undefined2 *)(local_b0 + param_2[4] + 0x10);
          pcVar49 = (char *)(local_b0 + param_2[4] + 0x16);
          *pcVar49 = *pcVar49 + '\x01';
          pcVar49 = *(char **)(pbVar26 + 0x10);
          cVar10 = *pcVar49;
          iVar34 = iVar34 + 1;
        } while( true );
      }
    }
  }
LAB_1495b9dc8:
  puVar7 = (ulonglong *)(local_b0 + param_2[4] + 0x30);
  *puVar7 = *puVar7 | (ulonglong)local_70;
LAB_1495b91ed:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1495ba657:
  if (0 < iVar34) {
    local_b4 = *(uint *)(plVar18 + 5);
    local_68 = *(undefined8 *)(*plVar18 + 0x10);
    iVar14 = 0;
    do {
      if (*(int *)((longlong)plVar18 + 0x1c) == iVar36) {
        local_90 = (char *)((ulonglong)local_90 & 0xffffffff00000000);
        if (*(uint *)(plVar18 + 5) != local_b4) goto LAB_1495ba706;
        lVar38 = *plVar18;
        if (local_b4 == 0xfffffffe) {
          iVar16 = FUN_14959fe84(local_a0,*(undefined8 *)(lVar38 + 0x10),local_68,0xffffffff);
          if (iVar16 != 0) goto LAB_1495ba706;
          lVar38 = *plVar18;
        }
        cVar10 = FUN_14959f8fa(*(undefined8 *)(lVar38 + 0x18));
        cVar9 = FUN_14959f8fa(*(undefined8 *)(*plVar18 + 0x10));
        if ((cVar10 != '\0') && (cVar10 != cVar9)) goto LAB_1495ba706;
        *(byte *)((longlong)plVar18 + 0x12) = *(byte *)((longlong)plVar18 + 0x12) | 0x40;
      }
      else {
        *(byte *)((longlong)plVar18 + 0x12) = *(byte *)((longlong)plVar18 + 0x12) & 0xbf;
      }
      plVar18 = plVar18 + 8;
      iVar14 = iVar14 + 1;
    } while (iVar34 != iVar14);
  }
  local_90 = (char *)CONCAT44(local_90._4_4_,1);
LAB_1495ba706:
  iVar34 = (int)local_88;
  local_88 = (ulonglong)(iVar34 + 1);
  iVar14 = iVar36;
  if (iVar34 != 0 || (int)local_90 != 0) goto LAB_1495ba723;
  goto LAB_1495ba5dc;
LAB_1495ba723:
  iVar14 = local_dc;
  if ((int)local_90 != 0) {
    if (*(int *)((longlong)local_d8 + 0x14) < 1) {
      lVar38 = 0;
      lVar42 = FUN_14958aad5(local_a0,0x31,0,0);
      iVar14 = local_dc;
      if (lVar42 != 0) goto LAB_1495bab46;
    }
    else {
      plVar18 = (longlong *)local_d8[4];
      uVar33 = *(int *)((longlong)local_d8 + 0x14) + 1;
      lVar42 = 0;
      lVar38 = 0;
      do {
        if ((*(byte *)((longlong)plVar18 + 0x12) & 0x40) != 0) {
          if (*(longlong *)(*plVar18 + 0x18) != 0) {
            FUN_1495a1c89(local_a8,*(longlong *)(*plVar18 + 0x18),0,0);
          }
          lVar38 = FUN_14958f62a(*local_c8,lVar38);
          lVar42 = *(longlong *)(*plVar18 + 0x10);
        }
        plVar18 = plVar18 + 8;
        uVar33 = uVar33 - 1;
      } while (1 < uVar33);
      if (lVar42 == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = FUN_1495a1c89(local_a8,lVar42,0,0);
      }
      lVar42 = FUN_14958aad5(local_a0,0x31,uVar21,0);
      iVar14 = local_dc;
      if (lVar42 == 0) {
        if (lVar38 != 0) {
          FUN_149582d29(local_a8,lVar38);
        }
      }
      else {
LAB_1495bab46:
        *(uint *)(lVar42 + 4) = *(uint *)(lVar42 + 4) | *(uint *)(local_78 + 4) & 1;
        *(undefined2 *)(lVar42 + 0x34) = *(undefined2 *)(local_78 + 0x34);
        *(longlong *)(lVar42 + 0x20) = lVar38;
        iVar14 = FUN_1495b8fc6(param_2,lVar42,3);
        FUN_1495b91b7(local_98,param_2,iVar14);
        *(int *)(param_2[4] + 0x18 + (longlong)iVar14 * 0x40) = local_dc;
        *(undefined2 *)(param_2[4] + 0x10 + (longlong)iVar14 * 0x40) =
             *(undefined2 *)(local_b0 + param_2[4] + 0x10);
        pcVar49 = (char *)(local_b0 + param_2[4] + 0x16);
        *pcVar49 = *pcVar49 + '\x01';
        iVar14 = local_dc;
      }
    }
  }
  goto LAB_1495b9b3f;
LAB_1495b9769:
  lVar38 = lVar38 + 1;
  pbVar47 = local_d0;
  if (lVar38 == 4) goto LAB_1495b9783;
  goto LAB_1495b972a;
}



// FUNCTION 1495bae0d FUN_1495bae0d body=581 status=ok
// SIG undefined FUN_1495bae0d(void)

ulonglong FUN_1495bae0d(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (param_2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      piVar1 = *(int **)(param_2 + 0x20);
      piVar2 = *(int **)(param_2 + 0x28);
      if ((piVar1 == (int *)0x0) || (iVar5 = *piVar1, iVar5 < 1)) {
        uVar9 = 0;
      }
      else {
        plVar6 = (longlong *)(piVar1 + 2);
        lVar8 = 0;
        uVar9 = 0;
        do {
          if (*plVar6 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = FUN_1495bb052(param_1);
            iVar5 = *piVar1;
          }
          uVar9 = uVar9 | uVar11;
          lVar8 = lVar8 + 1;
          plVar6 = plVar6 + 4;
        } while (lVar8 < iVar5);
      }
      piVar1 = *(int **)(param_2 + 0x38);
      if ((piVar1 == (int *)0x0) || (iVar5 = *piVar1, iVar5 < 1)) {
        uVar11 = 0;
      }
      else {
        plVar6 = (longlong *)(piVar1 + 2);
        lVar8 = 0;
        uVar11 = 0;
        do {
          if (*plVar6 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_1495bb052(param_1);
            iVar5 = *piVar1;
          }
          uVar11 = uVar11 | uVar7;
          lVar8 = lVar8 + 1;
          plVar6 = plVar6 + 4;
        } while (lVar8 < iVar5);
      }
      piVar1 = *(int **)(param_2 + 0x48);
      if ((piVar1 == (int *)0x0) || (iVar5 = *piVar1, iVar5 < 1)) {
        uVar7 = 0;
      }
      else {
        plVar6 = (longlong *)(piVar1 + 2);
        lVar8 = 0;
        uVar7 = 0;
        do {
          if (*plVar6 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_1495bb052(param_1);
            iVar5 = *piVar1;
          }
          uVar7 = uVar7 | uVar3;
          lVar8 = lVar8 + 1;
          plVar6 = plVar6 + 4;
        } while (lVar8 < iVar5);
      }
      if (*(longlong *)(param_2 + 0x30) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_1495bb052(param_1);
      }
      if (*(longlong *)(param_2 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1495bb052(param_1);
      }
      uVar10 = uVar9 | uVar10 | uVar11 | uVar7 | uVar3 | uVar4;
      if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
        lVar8 = 0;
        do {
          uVar9 = FUN_1495bae0d(param_1,*(undefined8 *)(piVar2 + lVar8 * 0x1c + 0xc));
          if (*(longlong *)(piVar2 + lVar8 * 0x1c + 0x14) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = FUN_1495bb052(param_1);
          }
          uVar10 = uVar9 | uVar10 | uVar11;
          if ((*(byte *)(piVar2 + lVar8 * 0x1c + 0x12) & 4) != 0) {
            piVar1 = *(int **)(piVar2 + lVar8 * 0x1c + 0x1a);
            if ((piVar1 == (int *)0x0) || (iVar5 = *piVar1, iVar5 < 1)) {
              uVar9 = 0;
            }
            else {
              plVar6 = (longlong *)(piVar1 + 2);
              lVar12 = 0;
              uVar9 = 0;
              do {
                if (*plVar6 == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = FUN_1495bb052(param_1);
                  iVar5 = *piVar1;
                }
                uVar9 = uVar9 | uVar11;
                lVar12 = lVar12 + 1;
                plVar6 = plVar6 + 4;
              } while (lVar12 < iVar5);
            }
            uVar10 = uVar10 | uVar9;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *piVar2);
      }
      param_2 = *(longlong *)(param_2 + 0x50);
    } while (param_2 != 0);
  }
  return uVar10;
}



// FUNCTION 1495bb052 FUN_1495bb052 body=584 status=ok
// SIG undefined FUN_1495bb052(void)

ulonglong FUN_1495bb052(undefined4 *param_1,char *param_2)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = *(uint *)(param_2 + 4);
  if (*param_2 == -0x5c) {
    if ((uVar1 & 8) == 0) {
      if ((longlong)(int)param_1[1] < 1) {
        return 0;
      }
      lVar5 = 0;
      do {
        if (param_1[lVar5 + 2] == *(int *)(param_2 + 0x2c)) {
          return 1L << ((byte)lVar5 & 0x3f);
        }
        lVar5 = lVar5 + 1;
      } while ((int)param_1[1] != lVar5);
      return 0;
    }
    uVar6 = 0;
    if ((uVar1 & 0x804000) != 0) {
      return 0;
    }
  }
  else {
    if ((uVar1 & 0x804000) != 0) {
      return 0;
    }
    if ((*param_2 == -0x50) && (0 < (longlong)(int)param_1[1])) {
      uVar6 = 0;
      lVar5 = 0;
      do {
        if (param_1[lVar5 + 2] == *(int *)(param_2 + 0x2c)) {
          uVar6 = 1L << ((byte)lVar5 & 0x3f);
          break;
        }
        lVar5 = lVar5 + 1;
      } while ((int)param_1[1] != lVar5);
    }
    else {
      uVar6 = 0;
    }
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    uVar8 = FUN_1495bb052(param_1);
    uVar6 = uVar6 | uVar8;
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    if ((*(uint *)(param_2 + 4) >> 0xb & 1) == 0) {
      piVar2 = *(int **)(param_2 + 0x20);
      if (piVar2 != (int *)0x0) {
        iVar4 = *piVar2;
        if (iVar4 < 1) {
          uVar8 = 0;
        }
        else {
          plVar7 = (longlong *)(piVar2 + 2);
          lVar5 = 0;
          uVar8 = 0;
          do {
            if (*plVar7 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = FUN_1495bb052(param_1);
              iVar4 = *piVar2;
            }
            uVar8 = uVar8 | uVar9;
            lVar5 = lVar5 + 1;
            plVar7 = plVar7 + 4;
          } while (lVar5 < iVar4);
        }
        uVar6 = uVar6 | uVar8;
      }
      goto LAB_1495bb16d;
    }
    if ((*(uint *)(param_2 + 4) & 0x20) != 0) {
      *param_1 = 1;
    }
    uVar8 = FUN_1495bae0d(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    uVar8 = FUN_1495bb052(param_1);
  }
  uVar6 = uVar6 | uVar8;
LAB_1495bb16d:
  if ((*param_2 != -0x57) && (*param_2 != -0x5b)) {
    return uVar6;
  }
  lVar5 = *(longlong *)(param_2 + 0x40);
  if (lVar5 != 0) {
    piVar2 = *(int **)(lVar5 + 0x10);
    if ((piVar2 == (int *)0x0) || (iVar4 = *piVar2, iVar4 < 1)) {
      uVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(piVar2 + 2);
      lVar5 = 0;
      uVar8 = 0;
      do {
        if (*plVar7 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_1495bb052(param_1);
          iVar4 = *piVar2;
        }
        uVar8 = uVar8 | uVar9;
        lVar5 = lVar5 + 1;
        plVar7 = plVar7 + 4;
      } while (lVar5 < iVar4);
      lVar5 = *(longlong *)(param_2 + 0x40);
    }
    piVar2 = *(int **)(lVar5 + 0x18);
    if ((piVar2 == (int *)0x0) || (iVar4 = *piVar2, iVar4 < 1)) {
      uVar9 = 0;
    }
    else {
      plVar7 = (longlong *)(piVar2 + 2);
      lVar5 = 0;
      uVar9 = 0;
      do {
        if (*plVar7 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_1495bb052(param_1);
          iVar4 = *piVar2;
        }
        uVar9 = uVar9 | uVar3;
        lVar5 = lVar5 + 1;
        plVar7 = plVar7 + 4;
      } while (lVar5 < iVar4);
      lVar5 = *(longlong *)(param_2 + 0x40);
    }
    if (*(longlong *)(lVar5 + 0x48) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1495bb052(param_1);
    }
    return uVar3 | uVar6 | uVar8 | uVar9;
  }
  return uVar6;
}



// FUNCTION 1495bb29a FUN_1495bb29a body=86 status=ok
// SIG undefined FUN_1495bb29a(void)

undefined8
FUN_1495bb29a(longlong param_1,ulonglong param_2,undefined4 *param_3,char *param_4,int param_5)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  cVar3 = *param_4;
  if (param_5 - 0x36U < 4 && cVar3 == -0x52) {
    param_4 = *(char **)(*(longlong *)(param_4 + 0x20) + 8);
    cVar3 = *param_4;
  }
  if (cVar3 == -0x5c) {
    *param_3 = *(undefined4 *)(param_4 + 0x2c);
    param_3[1] = (int)*(short *)(param_4 + 0x30);
    return 1;
  }
  if ((int)POPCOUNT(param_2) != 1) {
    return 0;
  }
  lVar6 = 0;
  if (1 < param_2) {
    do {
      lVar6 = lVar6 + 1;
      bVar2 = 3 < param_2;
      param_2 = param_2 >> 1;
    } while (bVar2);
  }
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28 + lVar6 * 0x70) + 0x10);
  if (lVar8 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x4c + lVar6 * 0x70);
    do {
      if ((*(longlong *)(lVar8 + 0x50) != 0) &&
         (uVar5 = (ulonglong)*(ushort *)(lVar8 + 0x5e), *(ushort *)(lVar8 + 0x5e) != 0)) {
        lVar6 = 4;
        uVar7 = 0;
        do {
          if (*(short *)(*(longlong *)(lVar8 + 8) + uVar7 * 2) == -2) {
            iVar4 = FUN_1495bb501(param_4,*(undefined8 *)(*(longlong *)(lVar8 + 0x50) + lVar6 * 2),
                                  uVar1);
            if (iVar4 == 0) {
              *param_3 = uVar1;
              param_3[1] = 0xfffffffe;
              return 1;
            }
            uVar5 = (ulonglong)*(ushort *)(lVar8 + 0x5e);
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar7 < uVar5);
      }
      lVar8 = *(longlong *)(lVar8 + 0x28);
    } while (lVar8 != 0);
  }
  return 0;
}



// FUNCTION 1495bb2f0 FUN_1495bb2f0 body=177 status=ok
// SIG undefined FUN_1495bb2f0(void)

undefined8 FUN_1495bb2f0(longlong *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (((*(byte *)(*param_1 + 0x5c) & 0x80) == 0) &&
     (((*param_2 == '5' || (*param_2 == '-')) && ((param_2[4] & 1U) == 0)))) {
    cVar1 = FUN_14959f8fa(*(undefined8 *)(param_2 + 0x10));
    cVar2 = FUN_14959f8fa(*(undefined8 *)(param_2 + 0x18));
    if ((cVar1 == cVar2) || (uVar4 = 0, 'B' < cVar2 && 'B' < cVar1)) {
      lVar3 = FUN_149586264(param_1,*(undefined8 *)
                                     (param_2 +
                                     (ulonglong)((*(uint *)(param_2 + 4) & 0x200) >> 6) + 0x10),
                            *(undefined8 *)
                             (param_2 +
                             (ulonglong)((*(uint *)(param_2 + 4) & 0x200) == 0) * 8 + 0x10));
      uVar4 = 1;
      if ((lVar3 != 0) && (*(code **)(lVar3 + 0x18) != FUN_1495b4b78)) {
        uVar4 = FUN_1495bb567(param_1,*(undefined8 *)(param_2 + 0x10),
                              *(undefined8 *)(param_2 + 0x18));
        return uVar4;
      }
    }
  }
  return uVar4;
}



// FUNCTION 1495bb3a1 FUN_1495bb3a1 body=156 status=ok
// SIG undefined FUN_1495bb3a1(void)

longlong FUN_1495bb3a1(undefined8 *param_1,char *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*param_2 == -0x52) {
    param_2 = *(char **)(*(longlong *)(param_2 + 0x20) + 8 + (longlong)param_3 * 0x20);
  }
  else if (*param_2 == -0x78) {
    lVar1 = FUN_14958aad5(param_1,0xaf,0,0);
    if (lVar1 == 0) {
      return 0;
    }
    *(short *)(lVar1 + 0x30) = (short)param_3;
    *(char **)(lVar1 + 0x10) = param_2;
    return lVar1;
  }
  if (param_2 == (char *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1495a1c89(*param_1,param_2,0,0);
  }
  plVar2 = (longlong *)param_1[0x33];
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return lVar1;
    }
    if ((char *)*plVar2 == param_2) break;
    plVar2 = (longlong *)plVar2[3];
  }
  *plVar2 = lVar1;
  return lVar1;
}



// FUNCTION 1495bb43d FUN_1495bb43d body=196 status=ok
// SIG undefined FUN_1495bb43d(void)

undefined8 FUN_1495bb43d(longlong param_1,ulonglong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar5 = 0;
  if (1 < param_2) {
    do {
      lVar5 = lVar5 + 1;
      bVar2 = 3 < param_2;
      param_2 = param_2 >> 1;
    } while (bVar2);
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28 + lVar5 * 0x70) + 0x10);
  if (lVar7 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x4c + lVar5 * 0x70);
    do {
      if ((*(longlong *)(lVar7 + 0x50) != 0) &&
         (uVar4 = (ulonglong)*(ushort *)(lVar7 + 0x5e), *(ushort *)(lVar7 + 0x5e) != 0)) {
        lVar5 = 4;
        uVar6 = 0;
        do {
          if (*(short *)(*(longlong *)(lVar7 + 8) + uVar6 * 2) == -2) {
            iVar3 = FUN_1495bb501(param_4,*(undefined8 *)(*(longlong *)(lVar7 + 0x50) + lVar5 * 2),
                                  uVar1);
            if (iVar3 == 0) {
              *param_3 = uVar1;
              param_3[1] = 0xfffffffe;
              return 1;
            }
            uVar4 = (ulonglong)*(ushort *)(lVar7 + 0x5e);
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x10;
        } while (uVar6 < uVar4);
      }
      lVar7 = *(longlong *)(lVar7 + 0x28);
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 1495bb501 FUN_1495bb501 body=102 status=ok
// SIG undefined FUN_1495bb501(void)

void FUN_1495bb501(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  while (param_2 != 0) {
    if ((*(uint *)(param_2 + 4) & 0x41000) == 0) goto LAB_1495bb559;
    if ((*(uint *)(param_2 + 4) >> 0x12 & 1) == 0) {
      plVar1 = (longlong *)(param_2 + 0x10);
    }
    else {
      plVar1 = (longlong *)(*(longlong *)(param_2 + 0x20) + 8);
    }
    param_2 = *plVar1;
  }
  param_2 = 0;
LAB_1495bb559:
  do {
    if (param_1 == 0) {
      param_1 = 0;
LAB_1495bb560:
      FUN_14959fe84(0,param_1,param_2,param_3);
      return;
    }
    if ((*(uint *)(param_1 + 4) & 0x41000) == 0) goto LAB_1495bb560;
    if ((*(uint *)(param_1 + 4) >> 0x12 & 1) == 0) {
      plVar1 = (longlong *)(param_1 + 0x10);
    }
    else {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    }
    param_1 = *plVar1;
  } while( true );
}



// FUNCTION 1495bb567 FUN_1495bb567 body=124 status=ok
// SIG undefined FUN_1495bb567(void)

bool FUN_1495bb567(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_1495862ab();
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(*param_1 + 0x10);
  }
  plVar4 = (longlong *)FUN_1495862ab(param_1);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(*param_1 + 0x10);
  }
  lVar5 = 0;
  do {
    bVar1 = *(byte *)(*plVar3 + lVar5);
    bVar2 = *(byte *)(*plVar4 + lVar5);
    if (bVar1 == bVar2) {
      if ((ulonglong)bVar1 == 0) goto LAB_1495bb5d3;
    }
    else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) {
LAB_1495bb5d3:
      return bVar1 == bVar2;
    }
    lVar5 = lVar5 + 1;
  } while( true );
}



// FUNCTION 1495bb5fc FUN_1495bb5fc body=184 status=ok
// SIG undefined FUN_1495bb5fc(void)

longlong FUN_1495bb5fc(undefined8 param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
                      uint param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined8 local_a0;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_6;
  local_a8 = param_5;
  lVar1 = FUN_1495bb6b5(local_98,param_1,param_2,param_3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = 0;
    do {
      lVar3 = lVar2;
      if ((*(ulonglong *)(lVar1 + 0x30) & param_4) == 0) {
        if ((*(ulonglong *)(lVar1 + 0x30) == 0) &&
           (lVar3 = lVar1, (param_5 & 0x82 & (uint)*(ushort *)(lVar1 + 0x14)) != 0)) break;
        lVar3 = lVar2;
        if (lVar2 == 0) {
          lVar3 = lVar1;
        }
      }
      lVar1 = FUN_1495bb775(local_98);
      lVar2 = lVar3;
    } while (lVar1 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1495bb6b5 FUN_1495bb6b5 body=192 status=ok
// SIG undefined FUN_1495bb6b5(void)

undefined8
FUN_1495bb6b5(undefined8 *param_1,undefined8 param_2,undefined4 param_3,uint param_4,
             undefined4 param_5,longlong param_6)

{
  short sVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x21) = 0x101;
  if (param_6 == 0) {
    if (param_4 == 0xfffffffe) {
      return 0;
    }
  }
  else {
    lVar3 = (longlong)(int)param_4;
    sVar1 = *(short *)(*(longlong *)(param_6 + 8) + lVar3 * 2);
    uVar4 = (uint)sVar1;
    if (uVar4 == 0xfffffffe) {
      param_1[3] = *(undefined8 *)(*(longlong *)(param_6 + 0x50) + 8 + lVar3 * 0x20);
      param_1[2] = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + lVar3 * 8);
      *(undefined2 *)(param_1 + 0xb) = 0xfffe;
      uVar2 = FUN_1495bb9f3();
      return uVar2;
    }
    param_4 = 0xffffffff;
    if ((sVar1 != *(short *)(*(longlong *)(param_6 + 0x18) + 0x44)) && (param_4 = uVar4, -1 < sVar1)
       ) {
      *(undefined1 *)(param_1 + 4) =
           *(undefined1 *)
            (*(longlong *)(*(longlong *)(param_6 + 0x18) + 8) + 0x19 + (ulonglong)uVar4 * 0x20);
      param_1[2] = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + lVar3 * 8);
    }
  }
  *(short *)(param_1 + 0xb) = (short)param_4;
  uVar2 = FUN_1495bb775();
  return uVar2;
}



// FUNCTION 1495bb775 FUN_1495bb775 body=638 status=ok
// SIG undefined FUN_1495bb775(void)

longlong * FUN_1495bb775(undefined8 *param_1)

{
  short sVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  
  iVar12 = *(int *)(param_1 + 5);
  puVar14 = (undefined8 *)param_1[1];
  bVar4 = *(byte *)((longlong)param_1 + 0x22);
  do {
    sVar1 = *(short *)((longlong)param_1 + (ulonglong)bVar4 * 2 + 0x56);
    iVar2 = *(int *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0x28);
    do {
      if (iVar12 < *(int *)((longlong)puVar14 + 0x14)) {
        plVar11 = (longlong *)((longlong)iVar12 * 0x40 + puVar14[4]);
LAB_1495bb7b4:
        if ((((*(int *)((longlong)plVar11 + 0x1c) == iVar2) && ((int)plVar11[5] == (int)sVar1)) &&
            ((sVar1 != -2 ||
             (iVar6 = FUN_1495bb501(*(undefined8 *)(*plVar11 + 0x10),param_1[3],iVar2), iVar6 == 0))
            )) && ((*(byte *)((longlong)param_1 + 0x22) < 2 || ((*(byte *)(*plVar11 + 4) & 1) == 0))
                  )) {
          uVar5 = *(uint *)((longlong)plVar11 + 0x14);
          if ((uVar5 >> 0xb & 1) != 0) {
            bVar4 = *(byte *)((longlong)param_1 + 0x21);
            uVar8 = (ulonglong)bVar4;
            if (bVar4 < 0xb) {
              for (pcVar9 = *(char **)(*plVar11 + 0x18); pcVar9 != (char *)0x0;
                  pcVar9 = *(char **)pcVar9) {
                if ((*(uint *)(pcVar9 + 4) & 0x41000) == 0) goto LAB_1495bb834;
                if ((*(uint *)(pcVar9 + 4) >> 0x12 & 1) == 0) {
                  pcVar9 = pcVar9 + 0x10;
                }
                else {
                  pcVar9 = (char *)(*(longlong *)(pcVar9 + 0x20) + 8);
                }
              }
              pcVar9 = (char *)0x0;
LAB_1495bb834:
              if (*pcVar9 == -0x5c) {
                if (uVar8 == 0) {
                  uVar13 = 0;
LAB_1495bb92f:
                  if ((uint)uVar13 != (uint)bVar4) goto LAB_1495bb884;
                  iVar6 = *(int *)(pcVar9 + 0x2c);
                }
                else {
                  iVar6 = *(int *)(pcVar9 + 0x2c);
                  uVar13 = 0;
                  do {
                    if ((*(int *)((longlong)param_1 + uVar13 * 4 + 0x2c) == iVar6) &&
                       (*(short *)((longlong)param_1 + uVar13 * 2 + 0x58) ==
                        *(short *)(pcVar9 + 0x30))) goto LAB_1495bb92f;
                    uVar13 = uVar13 + 1;
                  } while (uVar8 != uVar13);
                }
                *(int *)((longlong)param_1 + uVar8 * 4 + 0x2c) = iVar6;
                *(undefined2 *)((longlong)param_1 + uVar8 * 2 + 0x58) =
                     *(undefined2 *)(pcVar9 + 0x30);
                *(byte *)((longlong)param_1 + 0x21) = bVar4 + 1;
                uVar5 = (uint)*(ushort *)((longlong)plVar11 + 0x14);
              }
            }
          }
LAB_1495bb884:
          if ((*(uint *)((longlong)param_1 + 0x24) & uVar5 & 0xffff) == 0) goto LAB_1495bb8cf;
          if ((((uVar5 & 0xffff) >> 8 & 1) == 0) && (param_1[2] != 0)) {
            plVar3 = *(longlong **)*puVar14;
            lVar10 = *plVar11;
            iVar6 = FUN_1495bba14(lVar10,*(undefined1 *)(param_1 + 4));
            if (iVar6 != 0) {
              uVar5 = *(uint *)(lVar10 + 4) & 0x200;
              plVar7 = (longlong *)
                       FUN_149586264(plVar3,*(undefined8 *)(lVar10 + 0x10 + (ulonglong)(uVar5 >> 6))
                                     ,*(undefined8 *)(lVar10 + 0x10 + (ulonglong)(uVar5 == 0) * 8));
              if (plVar7 == (longlong *)0x0) {
                plVar7 = *(longlong **)(*plVar3 + 0x10);
              }
              lVar10 = 0;
              do {
                bVar4 = *(byte *)(*plVar7 + lVar10);
                if (bVar4 == *(byte *)(param_1[2] + lVar10)) {
                  if ((ulonglong)bVar4 == 0) goto LAB_1495bb9e6;
                }
                else if ((&DAT_14bd3ff30)[bVar4] != (&DAT_14bd3ff30)[*(byte *)(param_1[2] + lVar10)]
                        ) break;
                lVar10 = lVar10 + 1;
              } while( true );
            }
            goto LAB_1495bb8cf;
          }
          goto LAB_1495bb89d;
        }
        goto LAB_1495bb8cf;
      }
LAB_1495bb943:
      puVar14 = (undefined8 *)puVar14[1];
      iVar12 = 0;
    } while (puVar14 != (undefined8 *)0x0);
    if (*(byte *)((longlong)param_1 + 0x21) <= *(byte *)((longlong)param_1 + 0x22)) {
      return (longlong *)0x0;
    }
    puVar14 = (undefined8 *)*param_1;
    bVar4 = *(byte *)((longlong)param_1 + 0x22) + 1;
    *(byte *)((longlong)param_1 + 0x22) = bVar4;
    iVar12 = 0;
  } while( true );
LAB_1495bb9e6:
  uVar5 = (uint)*(ushort *)((longlong)plVar11 + 0x14);
LAB_1495bb89d:
  if (((((uVar5 & 0x82) == 0) || (pcVar9 = *(char **)(*plVar11 + 0x18), *pcVar9 != -0x5c)) ||
      (*(int *)(pcVar9 + 0x2c) != *(int *)((longlong)param_1 + 0x2c))) ||
     (*(short *)(pcVar9 + 0x30) != *(short *)(param_1 + 0xb))) {
    param_1[1] = puVar14;
    *(int *)(param_1 + 5) = iVar12 + 1;
    return plVar11;
  }
LAB_1495bb8cf:
  iVar12 = iVar12 + 1;
  plVar11 = plVar11 + 8;
  if (*(int *)((longlong)puVar14 + 0x14) <= iVar12) goto LAB_1495bb943;
  goto LAB_1495bb7b4;
}



// FUNCTION 1495bb9f3 FUN_1495bb9f3 body=33 status=ok
// SIG undefined FUN_1495bb9f3(void)

void FUN_1495bb9f3(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14959f8fa(*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  FUN_1495bb775(param_1);
  return;
}



// FUNCTION 1495bba14 FUN_1495bba14 body=183 status=ok
// SIG undefined FUN_1495bba14(void)

bool FUN_1495bba14(longlong param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_14959f8fa(*(undefined8 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((*(byte *)(param_1 + 5) & 8) != 0) {
      bVar2 = FUN_14959f8fa(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 8)
                           );
      if (('@' < (char)bVar1) && ('@' < (char)bVar2)) {
        if ((bVar1 < 0x43) && (bVar2 < 0x43)) {
          return true;
        }
        goto LAB_1495bbaae;
      }
      goto LAB_1495bbab6;
    }
    if (bVar1 == 0) {
      return true;
    }
  }
  else {
    bVar2 = FUN_14959f8fa();
    if ('@' < (char)bVar1 && '@' < (char)bVar2) {
      if (bVar1 < 0x43 && bVar2 < 0x43) {
        return true;
      }
      goto LAB_1495bbaae;
    }
LAB_1495bbab6:
    if ((char)bVar2 < 'A') {
      bVar2 = bVar1;
    }
    bVar1 = bVar2 | 0x40;
  }
  if ((char)bVar1 < 'B') {
    return true;
  }
  if (bVar1 == 0x42) {
    return param_2 == 'B';
  }
LAB_1495bbaae:
  return 'B' < param_2;
}



// FUNCTION 1495bbacb FUN_1495bbacb body=1489 status=ok
// SIG undefined FUN_1495bbacb(void)

int FUN_1495bbacb(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  char cVar11;
  ushort uVar12;
  longlong lVar13;
  char *pcVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  ushort uVar24;
  size_t _Size;
  ulonglong uVar25;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  undefined2 local_a0;
  int *local_98;
  uint local_88;
  uint local_84;
  longlong *local_80;
  uint local_74;
  ulonglong local_70;
  ulonglong *local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_1[1];
  local_68 = (ulonglong *)param_1[3];
  lVar10 = ((undefined8 *)*param_1)[1] + (ulonglong)(byte)local_68[2] * 0x70;
  puVar3 = (uint *)param_1[2];
  iVar22 = *(int *)(lVar2 + 0x14);
  iVar6 = 0;
  if (0 < iVar22) {
    puVar18 = (ushort *)(*(longlong *)(lVar2 + 0x20) + 0x14);
    iVar6 = 0;
    do {
      if ((*(int *)(puVar18 + 4) == *(int *)(lVar10 + 0x4c)) &&
         ((*(ulonglong *)(puVar18 + 0xe) & param_3) == 0)) {
        iVar6 = (iVar6 + 1) - (uint)((*puVar18 & 0xf7ff) == 0);
      }
      puVar18 = puVar18 + 0x20;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  local_60 = *(longlong **)*param_1;
  uVar9 = 0;
  if (puVar3 != (uint *)0x0) {
    uVar23 = *puVar3;
    uVar20 = 0;
    if (0 < (int)uVar23) {
      puVar8 = puVar3 + 6;
      uVar20 = 0;
      do {
        if (((**(char **)(puVar8 + -4) != -0x5c) ||
            (*(int *)(*(char **)(puVar8 + -4) + 0x2c) != *(int *)(lVar10 + 0x4c))) ||
           ((*puVar8 & 2) != 0)) goto LAB_1495bbbb0;
        uVar20 = uVar20 + 1;
        puVar8 = puVar8 + 8;
      } while (uVar23 != uVar20);
      uVar20 = (ulonglong)uVar23;
    }
LAB_1495bbbb0:
    uVar9 = 0;
    if ((uint)uVar20 == uVar23) {
      uVar9 = uVar23;
    }
  }
  lVar13 = (longlong)iVar6;
  local_58 = CONCAT44(local_58._4_4_,uVar9);
  _Size = (longlong)(int)uVar9 * 8 + lVar13 * 0x14 + 0x70;
  local_80 = param_1;
  local_70 = param_2;
  if (*local_60 == 0) {
    puVar8 = (uint *)FUN_145e3bd67(_Size);
  }
  else {
    puVar8 = (uint *)FUN_14955d750();
  }
  if (puVar8 == (uint *)0x0) {
    FUN_14955a364(local_60,"out of memory");
  }
  else {
    local_88 = 0;
    memset(puVar8,0,_Size);
    plVar5 = local_60;
    puVar8[4] = uVar9;
    *(uint **)(puVar8 + 2) = puVar8 + 0x1c;
    *(uint **)(puVar8 + 6) = puVar8 + lVar13 * 3 + 0x1c;
    *(uint **)(puVar8 + 8) = puVar8 + lVar13 * 3 + 0x1c + (longlong)(int)uVar9 * 2;
    *(longlong *)(puVar8 + 0x18) = lVar2;
    *(longlong **)(puVar8 + 0x1a) = local_60;
    iVar22 = *(int *)(lVar2 + 0x14);
    uVar9 = 0;
    if (0 < iVar22) {
      plVar19 = *(longlong **)(lVar2 + 0x20);
      uVar23 = 0;
      uVar9 = 0;
      local_88 = 0;
      do {
        if (((*(int *)((longlong)plVar19 + 0x1c) == *(int *)(lVar10 + 0x4c)) &&
            ((plVar19[6] & param_3) == 0)) &&
           (((*(ushort *)((longlong)plVar19 + 0x14) & 0xf7ff) != 0 &&
            (((*(byte *)(lVar10 + 0x44) & 8) == 0 || ((*(byte *)(*plVar19 + 4) & 1) != 0)))))) {
          puVar1 = puVar8 + 0x1c + (longlong)(int)uVar9 * 3;
          *puVar1 = *(uint *)(plVar19 + 5);
          puVar1[2] = uVar23;
          uVar24 = *(ushort *)((longlong)plVar19 + 0x14) & 0x1fff;
          uVar12 = uVar24;
          if (uVar24 == 1) {
            uVar12 = 2;
          }
          if (uVar12 == 0x40) {
            cVar11 = *(char *)((longlong)plVar19 + 0x17);
LAB_1495bbd2a:
            *(char *)(puVar1 + 1) = cVar11;
          }
          else {
            if ((uVar12 & 0x180) != 0) {
              cVar11 = 'H' - (uVar12 == 0x100);
              goto LAB_1495bbd2a;
            }
            *(char *)(puVar1 + 1) = (char)uVar12;
            if ((uVar12 & 0x3c) != 0) {
              pcVar14 = *(char **)(*plVar19 + 0x18);
              cVar11 = *pcVar14;
              if (cVar11 == -0x53) {
                cVar11 = pcVar14[2];
              }
              if (cVar11 != -0x52) {
                if (cVar11 != -0x78) goto LAB_1495bbd2d;
                pcVar14 = *(char **)(pcVar14 + 0x20);
              }
              if (1 < **(int **)(pcVar14 + 0x20)) {
                uVar7 = 1 << ((byte)uVar9 & 0x1f);
                if (0xf < (int)uVar9) {
                  uVar7 = 0;
                }
                local_88 = local_88 | uVar7;
                if (uVar24 == 0x10) {
                  cVar11 = '\b';
                }
                else {
                  if (uVar24 != 4) goto LAB_1495bbd2d;
                  cVar11 = ' ';
                }
                goto LAB_1495bbd2a;
              }
            }
          }
LAB_1495bbd2d:
          uVar9 = uVar9 + 1;
          iVar22 = *(int *)(lVar2 + 0x14);
        }
        uVar23 = uVar23 + 1;
        plVar19 = plVar19 + 8;
      } while ((int)uVar23 < iVar22);
    }
    *puVar8 = uVar9;
    if (0 < (int)local_58) {
      lVar10 = 0;
      do {
        *(int *)((longlong)puVar8 + lVar10 + lVar13 * 0xc + 0x70) =
             (int)*(short *)(*(longlong *)(puVar3 + lVar10 + 2) + 0x30);
        *(byte *)((longlong)puVar8 + lVar10 + lVar13 * 0xc + 0x74) = (byte)puVar3[lVar10 + 6] & 1;
        lVar10 = lVar10 + 8;
      } while ((local_58 & 0xffffffff) << 3 != lVar10);
    }
    *(undefined2 *)((longlong)local_68 + 0x12) = 0;
    *(undefined4 *)(local_68 + 5) = 0x400;
    *(undefined2 *)((longlong)local_68 + 0x2c) = 0;
    *(undefined1 *)((longlong)local_68 + 0x1c) = 0;
    uVar9 = *puVar8;
    iVar22 = FUN_1495bcdbe(*local_60,local_68,(ulonglong)uVar9);
    uVar20 = local_70;
    if (iVar22 == 0) {
      local_98 = &local_4c;
      local_a0 = (undefined2)local_88;
      local_a8 = puVar8;
      iVar22 = FUN_1495bce43(local_80,local_70,0xffffffffffffffff,0);
      if (iVar22 == 0) {
        uVar25 = ~uVar20;
        uVar4 = *local_68;
        iVar22 = 0;
        if (local_4c != 0 || (uVar4 & uVar25) != 0) {
          if (local_4c == 0) {
            local_58 = 0;
            local_84 = 0;
          }
          else {
            local_98 = &local_4c;
            local_a0 = (undefined2)local_88;
            local_a8 = puVar8;
            iVar22 = FUN_1495bce43(local_80,uVar20,0xffffffffffffffff,1);
            local_58 = *local_68 & uVar25;
            if (iVar22 != 0) goto LAB_1495bc078;
            local_84 = (uint)(local_58 == 0);
            uVar20 = local_70;
          }
          uVar15 = 0;
          local_74 = local_84;
          local_50 = local_84;
          do {
            uVar23 = local_50;
            uVar7 = local_50;
            if ((int)uVar9 < 1) {
LAB_1495bc006:
              iVar22 = 0;
              if (uVar7 == 0) {
                local_98 = &local_4c;
                local_a8 = puVar8;
                local_a0 = (short)local_88;
                iVar22 = FUN_1495bce43(local_80,uVar20,uVar20,0);
                uVar20 = local_70;
                if (local_4c == 0) {
                  uVar23 = 1;
                }
              }
              if (uVar23 == 0 && iVar22 == 0) {
                local_98 = &local_4c;
                local_a0 = (undefined2)local_88;
                local_a8 = puVar8;
                iVar22 = FUN_1495bce43(local_80,uVar20,uVar20,1);
              }
              break;
            }
            lVar10 = 0;
            uVar16 = 0xffffffffffffffff;
            do {
              uVar21 = *(ulonglong *)
                        (*(longlong *)(lVar2 + 0x20) + 0x30 +
                        (longlong)*(int *)(*(longlong *)(puVar8 + 2) + 8 + lVar10) * 0x40) & uVar25;
              uVar17 = uVar16;
              if (uVar21 < uVar16) {
                uVar17 = uVar21;
              }
              if (uVar21 <= uVar15) {
                uVar17 = uVar16;
              }
              lVar10 = lVar10 + 0xc;
              uVar16 = uVar17;
            } while ((ulonglong)uVar9 * 0xc != lVar10);
            uVar23 = local_84;
            uVar7 = local_74;
            if (uVar17 == 0xffffffffffffffff) goto LAB_1495bc006;
            iVar22 = 0;
            if ((uVar17 != (uVar4 & uVar25)) && (uVar17 != local_58)) {
              local_98 = &local_4c;
              local_a8 = puVar8;
              local_a0 = (short)local_88;
              iVar22 = FUN_1495bce43(local_80,uVar20,uVar17 | uVar20,0);
              uVar20 = local_70;
              if ((*local_68 == local_70) && (local_74 = 1, local_4c == 0)) {
                local_84 = 1;
              }
            }
            uVar15 = uVar17;
          } while (iVar22 == 0);
        }
      }
LAB_1495bc078:
      if (puVar8[0xe] != 0) {
        FUN_145e3b961(*(undefined8 *)(puVar8 + 0xc));
      }
      FUN_14955d65a(*local_60,puVar8);
      goto LAB_1495bbc18;
    }
    FUN_14955d65a(*plVar5,puVar8);
  }
  iVar22 = 7;
LAB_1495bbc18:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar22;
}



// FUNCTION 1495bc09d FUN_1495bc09d body=2099 status=ok
// SIG undefined FUN_1495bc09d(void)

int FUN_1495bc09d(longlong *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  bool bVar6;
  byte bVar7;
  longlong *plVar8;
  char cVar9;
  short sVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  short sVar15;
  uint uVar16;
  ushort uVar17;
  char cVar18;
  ulonglong uVar19;
  char *pcVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined1 auStack_188 [32];
  longlong local_168;
  ulonglong *local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  int *local_130;
  ulonglong local_128;
  undefined2 local_11a;
  undefined8 local_118;
  undefined2 *puStack_110;
  undefined2 *local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int6 iStack_c0;
  undefined2 uStack_ba;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined2 local_64;
  undefined2 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_11a = 0xffff;
  local_160 = (ulonglong *)param_1[3];
  puVar2 = (undefined8 *)*param_1;
  lVar26 = puVar2[1] + (ulonglong)(byte)local_160[2] * 0x70;
  local_168 = lVar26 + 8;
  local_150 = *(longlong *)(lVar26 + 0x28);
  puVar3 = *(undefined8 **)(lVar26 + 0x70);
  puVar28 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    if ((*(byte *)(local_150 + 0x40) & 0x80) == 0) {
      puVar28 = &local_118;
      local_c8 = 0;
      uStack_b0 = 0;
      local_118 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      puStack_110 = &local_11a;
      local_108 = &local_64;
      lStack_100 = local_150;
      _iStack_c0 = CONCAT26(1,(uint6)*(ushort *)(local_150 + 0x4c) << 0x20);
      local_b8 = 0x300050001;
      local_64 = *(undefined2 *)(local_150 + 0x4a);
      local_62 = 0;
      if ((*(byte *)(lVar26 + 0x48) & 1) == 0) {
        uStack_f0 = *(undefined8 *)(local_150 + 0x10);
      }
    }
    else {
      puVar28 = *(undefined8 **)(local_150 + 0x10);
    }
  }
  uVar14 = *(ushort *)(local_150 + 0x4a);
  uVar21 = (ulonglong)(short)uVar14;
  iVar12 = 0;
  iVar25 = 0;
  uVar17 = 0;
  if (10 < (longlong)uVar21) {
    sVar10 = 0x28;
    if (0xff < uVar14) {
      sVar10 = 0x28;
      uVar23 = uVar21;
      do {
        sVar10 = sVar10 + 0x28;
        uVar21 = uVar23 >> 4;
        bVar6 = 0xfff < uVar23;
        uVar23 = uVar21;
      } while (bVar6);
    }
    uVar23 = uVar21;
    if (0xf < uVar21) {
      do {
        sVar10 = sVar10 + 10;
        uVar21 = uVar23 >> 1;
        bVar6 = 0x1f < uVar23;
        uVar23 = uVar21;
      } while (bVar6);
    }
    uVar17 = (sVar10 + (&DAT_14bd41890)[(uint)uVar21 & 7]) - 0x2b;
  }
  local_148 = param_1[1];
  local_140 = param_1;
  local_128 = param_2;
  if ((((((param_1[4] == 0) && ((*(byte *)((longlong)puVar2 + 0x3c) & 0x20) == 0)) &&
        (puVar3 == (undefined8 *)0x0)) &&
       ((iVar12 = iVar25, (*(ulonglong *)(*(longlong *)*puVar2 + 0x30) & 0x8000) != 0 &&
        ((*(uint *)(lVar26 + 0x48) & 1) == 0)))) &&
      ((*(uint *)(lVar26 + 0x48) & 0x28) == 0 && (*(uint *)(local_150 + 0x40) & 0x80) == 0)) &&
     (iVar25 = *(int *)(local_148 + 0x14), 0 < (longlong)iVar25)) {
    uVar21 = *(ulonglong *)(local_148 + 0x20);
    local_138 = (longlong)(short)uVar17;
    local_130 = (int *)(&DAT_14bd477e0 + -local_138);
    uVar23 = uVar21;
    do {
      uVar19 = uVar23 + 0x40;
      iVar12 = 0;
      if ((*(ulonglong *)(uVar23 + 0x30) & local_160[1]) == 0) {
        iVar12 = 0;
        iVar13 = FUN_1495bd8b6(uVar23,local_168);
        if (iVar13 != 0) {
          sVar10 = uVar17 + uVar14;
          *(undefined2 *)(local_160 + 3) = 1;
          local_160[4] = 0;
          *(undefined4 *)((longlong)local_160 + 0x2c) = 1;
          *(ulonglong *)local_160[7] = uVar23;
          *(short *)((longlong)local_160 + 0x12) = sVar10;
          if ((*(longlong *)(local_150 + 0x18) == 0) && ((*(byte *)(local_150 + 0x40) & 2) == 0)) {
            sVar10 = sVar10 + 0x1c;
          }
          else {
            sVar10 = sVar10 + -10;
          }
          sVar15 = 0;
          if (0 < sVar10) {
            sVar15 = sVar10;
          }
          *(short *)((longlong)local_160 + 0x12) = sVar15;
          *(undefined2 *)((longlong)local_160 + 0x16) = 0x2b;
          if ((short)uVar17 < 0x2b) {
            bVar7 = -7 < (short)uVar17;
            if (0xb < (short)uVar17) {
              bVar7 = *(byte *)((longlong)local_130 + 0x2b);
            }
            sVar10 = bVar7 + 0x2b;
          }
          else {
            sVar10 = uVar17 + (uVar17 < 0x5d);
            if (uVar17 < 0x4b) {
              sVar10 = (byte)"RECURSIVE STEP"[local_138 + 9] + uVar17;
            }
          }
          *(short *)((longlong)local_160 + 0x14) = sVar10;
          *(undefined4 *)(local_160 + 5) = 0x4000;
          *local_160 = *(ulonglong *)(uVar23 + 0x30) | local_128;
          iVar12 = FUN_1495bd3da(local_140);
        }
      }
    } while ((iVar12 == 0) && (uVar23 = uVar19, uVar19 < (longlong)iVar25 * 0x40 + uVar21));
  }
  if ((iVar12 == 0) && (puVar28 != (undefined8 *)0x0)) {
    cVar18 = '\x01';
    lVar26 = local_168;
    puVar22 = local_160;
    do {
      if (((puVar28[9] == 0) ||
          (iVar12 = FUN_1495bd907(*(undefined4 *)(lVar26 + 0x44),*(uint *)(lVar26 + 0x3c) >> 5 & 1),
          iVar12 != 0)) && ((*(byte *)((longlong)puVar28 + 0x65) & 1) == 0)) {
        uVar14 = *(ushort *)puVar28[2];
        uVar21 = (ulonglong)uVar14;
        *(undefined4 *)(puVar22 + 3) = 0;
        *(undefined2 *)((longlong)puVar22 + 0x1c) = 0;
        *(undefined4 *)((longlong)puVar22 + 0x2c) = 0;
        *(undefined1 *)((longlong)puVar22 + 0x11) = 0;
        *(undefined2 *)((longlong)puVar22 + 0x12) = 0;
        *puVar22 = local_128;
        *(ushort *)((longlong)puVar22 + 0x16) = uVar14;
        puVar22[4] = (ulonglong)puVar28;
        bVar6 = true;
        if ((((*(byte *)((longlong)puVar28 + 100) & 4) == 0) &&
            (piVar5 = *(int **)(*local_140 + 0x10), piVar5 != (int *)0x0)) &&
           (iVar12 = *piVar5, 0 < iVar12)) {
          local_138 = CONCAT44(local_138._4_4_,*(undefined4 *)(lVar26 + 0x44));
          piVar24 = piVar5 + 2;
          lVar26 = 0;
          local_158 = uVar21;
          local_130 = piVar24;
          do {
            for (pcVar20 = *(char **)(piVar24 + lVar26 * 8); pcVar20 != (char *)0x0;
                pcVar20 = *(char **)pcVar20) {
              if ((*(uint *)(pcVar20 + 4) & 0x41000) == 0) goto LAB_1495bc38f;
              if ((*(uint *)(pcVar20 + 4) >> 0x12 & 1) == 0) {
                pcVar20 = pcVar20 + 0x10;
              }
              else {
                pcVar20 = (char *)(*(longlong *)(pcVar20 + 0x20) + 8);
              }
            }
            pcVar20 = (char *)0x0;
LAB_1495bc38f:
            if ((*pcVar20 == -0x5c) && (*(int *)(pcVar20 + 0x2c) == (int)local_138)) {
              if (*(short *)(pcVar20 + 0x30) < 0) {
LAB_1495bc7e2:
                bVar6 = false;
                uVar21 = local_158;
                lVar26 = local_168;
                puVar22 = local_160;
                goto LAB_1495bc4bc;
              }
              if ((ulonglong)*(ushort *)((longlong)puVar28 + 0x5e) != 0) {
                uVar21 = 0;
                do {
                  if (*(short *)(pcVar20 + 0x30) == *(short *)(puVar28[1] + uVar21 * 2))
                  goto LAB_1495bc7e2;
                  uVar21 = uVar21 + 1;
                } while (*(ushort *)((longlong)puVar28 + 0x5e) != uVar21);
              }
            }
            else if ((puVar28[10] != 0) &&
                    (uVar14 = *(ushort *)((longlong)puVar28 + 0x5e), uVar14 != 0)) {
              uVar21 = 0;
              do {
                if (*(short *)(puVar28[1] + uVar21 * 2) == -2) {
                  iVar12 = FUN_1495bb501(pcVar20);
                  if (iVar12 == 0) goto LAB_1495bc7e2;
                  uVar14 = *(ushort *)((longlong)puVar28 + 0x5e);
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 < uVar14);
              iVar12 = *piVar5;
              piVar24 = local_130;
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < iVar12);
          bVar6 = true;
          uVar21 = local_158;
          lVar26 = local_168;
          puVar22 = local_160;
        }
LAB_1495bc4bc:
        if ((~*(uint *)((longlong)puVar28 + 100) & 3) == 0) {
          cVar9 = cVar18;
          if (bVar6) {
            cVar9 = '\0';
          }
          *(undefined4 *)(puVar22 + 5) = 0x100;
          *(char *)((longlong)puVar22 + 0x11) = cVar9;
          *(short *)((longlong)puVar22 + 0x14) = (short)uVar21 + 0x10;
LAB_1495bc4ea:
          FUN_1495bd9b7(local_148,puVar22,uVar21 & 0xffffffff);
          iVar12 = FUN_1495bd3da(local_140,puVar22);
          *(short *)((longlong)puVar22 + 0x16) = (short)uVar21;
          if (iVar12 != 0) break;
        }
        else {
          if ((*(uint *)((longlong)puVar28 + 100) & 0x20) == 0) {
            uVar23 = puVar28[0xd] & *(ulonglong *)(lVar26 + 0x58);
            iVar12 = (uVar23 == 0 | 8) << 6;
          }
          else {
            iVar12 = 0x240;
            uVar23 = 0;
          }
          *(int *)(puVar22 + 5) = iVar12;
          cVar9 = cVar18;
          if ((((!bVar6) || (cVar9 = '\0', (*(byte *)(local_150 + 0x40) & 0x80) != 0)) ||
              (puVar28[9] != 0)) ||
             (((uVar23 == 0 && ((*(byte *)((longlong)puVar28 + 100) & 4) == 0)) &&
              (((*(short *)((longlong)puVar28 + 0x5c) < *(short *)(local_150 + 0x4c) &&
                (((*(byte *)((longlong)puVar2 + 0x3c) & 4) == 0 && (DAT_14c765cff != '\0')))) &&
               ((*(byte *)(*(longlong *)*puVar2 + 0x5c) & 0x20) == 0)))))) {
            *(char *)((longlong)puVar22 + 0x11) = cVar9;
            uVar16 = ((uint)uVar21 & 0xffff) +
                     (*(short *)((longlong)puVar28 + 0x5c) * 0xf) /
                     (int)*(short *)(local_150 + 0x4c) + 1;
            *(short *)((longlong)puVar22 + 0x14) = (short)uVar16;
            if (uVar23 != 0) {
              iVar12 = (uint)uVar21 + 0x10;
              if (0 < *(int *)((longlong)puVar2 + 0x7c)) {
                uVar1 = *(undefined4 *)(local_168 + 0x44);
                lVar27 = 0x14;
                lVar26 = 0;
                local_158 = uVar21;
                do {
                  lVar4 = puVar2[0x11];
                  local_98 = 0;
                  local_88 = 0;
                  uStack_80 = 0;
                  local_78 = 0;
                  local_70 = &local_a8;
                  puStack_90 = &LAB_1495be5d8;
                  local_a8 = puVar28;
                  local_a0 = uVar1;
                  if (*(longlong *)(lVar4 + -0x14 + lVar27) != 0) {
                    FUN_14959fa98(&local_98);
                    if (local_78._4_2_ != 0) break;
                  }
                  uVar14 = *(ushort *)(lVar4 + -4 + lVar27);
                  uVar16 = (uint)uVar14;
                  if (0 < (short)uVar14) {
                    uVar16 = -(uint)((*(byte *)(lVar4 + lVar27) & 0x82) == 0) | 0xffec;
                  }
                  iVar12 = uVar16 + iVar12;
                  lVar26 = lVar26 + 1;
                  lVar27 = lVar27 + 0x40;
                } while (lVar26 < *(int *)((longlong)puVar2 + 0x7c));
                uVar16 = (uint)*(ushort *)((longlong)local_160 + 0x14);
                uVar21 = local_158;
                puVar22 = local_160;
              }
              uVar11 = FUN_1495b4246(uVar16,iVar12);
              *(undefined2 *)((longlong)puVar22 + 0x14) = uVar11;
            }
            goto LAB_1495bc4ea;
          }
        }
        plVar8 = local_140;
        *(undefined4 *)(local_140 + 5) = 0;
        iVar12 = FUN_1495bdb1a(local_140,local_168,puVar28,0);
        lVar26 = local_168;
        if ((int)plVar8[5] == 1) {
          *(byte *)(local_150 + 0x41) = *(byte *)(local_150 + 0x41) | 1;
        }
      }
      else {
        iVar12 = 0;
      }
      if ((*(longlong *)(lVar26 + 0x68) != 0) || (iVar12 != 0)) break;
      puVar28 = (undefined8 *)puVar28[5];
      cVar18 = cVar18 + '\x01';
      if (puVar28 == (undefined8 *)0x0) break;
    } while( true );
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar12;
}



// FUNCTION 1495bc8d1 FUN_1495bc8d1 body=1184 status=ok
// SIG undefined FUN_1495bc8d1(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_1495bc8d1(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  ushort uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_3f8 [44];
  int local_3cc;
  ulonglong local_3c8;
  ulonglong local_3c0;
  int local_3b4;
  undefined8 local_3b0;
  undefined8 local_3a8;
  longlong *local_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  undefined8 *local_388;
  ulonglong local_380;
  longlong local_378;
  ulonglong local_370;
  longlong local_368;
  undefined8 *puStack_360;
  undefined8 local_358;
  longlong lStack_350;
  ushort *local_348;
  longlong lStack_340;
  ulonglong local_330;
  undefined2 auStack_328 [20];
  ushort local_300 [4];
  ulonglong local_2f8;
  undefined2 local_2f0 [20];
  ulonglong local_2c8 [2];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined8 *local_280;
  undefined1 local_278;
  undefined4 local_274;
  ulonglong local_268;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_398 = (undefined8 *)param_1[1];
  puVar13 = (undefined8 *)param_1[3];
  uVar10 = local_398[4];
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  local_298 = 0;
  local_3b0 = param_2;
  local_3a8 = param_3;
  if ((longlong)*(int *)((longlong)local_398 + 0x14) < 1) {
    iVar7 = 0;
  }
  else {
    uVar8 = (longlong)*(int *)((longlong)local_398 + 0x14) * 0x40 + uVar10;
    lVar9 = (ulonglong)*(byte *)(puVar13 + 2) * 0x70 + *(longlong *)(*param_1 + 8);
    local_378 = lVar9 + 8;
    local_3b4 = *(int *)(lVar9 + 0x4c);
    local_390 = puVar13 + 3;
    uVar12 = 0;
    local_3c8 = uVar8;
    local_3a0 = param_1;
    local_388 = puVar13;
    do {
      if ((*(byte *)(uVar10 + 0x15) & 2) == 0) {
        iVar7 = 0;
      }
      else {
        lVar9 = *(longlong *)(uVar10 + 0x28);
        local_3c0 = uVar10;
        if ((*(ulonglong *)(lVar9 + 0x228) & puVar13[1]) == 0) {
          iVar7 = 0;
          uVar8 = local_3c8;
        }
        else {
          uVar8 = (longlong)*(int *)(lVar9 + 0x14) * 0x40 + *(longlong *)(lVar9 + 0x20);
          local_368 = *param_1;
          puStack_360 = (undefined8 *)param_1[1];
          lStack_350 = param_1[3];
          lStack_340 = param_1[5];
          local_358 = 0;
          local_348 = local_300;
          uVar10 = *(ulonglong *)(lVar9 + 0x20);
          iVar7 = 0;
          if (uVar10 < uVar8) {
            local_3cc = 0;
            bVar16 = true;
            iVar7 = local_3b4;
            local_380 = uVar8;
            do {
              if ((*(byte *)(uVar10 + 0x15) & 4) == 0) {
                if (*(int *)(uVar10 + 0x1c) == iVar7) {
                  local_280 = local_398;
                  local_288 = *local_398;
                  local_278 = 0x2c;
                  local_274 = 1;
                  puStack_360 = &local_288;
                  local_268 = uVar10;
                  goto LAB_1495bca61;
                }
              }
              else {
                puStack_360 = *(undefined8 **)(uVar10 + 0x28);
LAB_1495bca61:
                local_300[0] = 0;
                if (*(int *)(*(longlong *)(local_378 + 0x20) + 0x54) == 0) {
                  local_3cc = FUN_1495bc09d(&local_368,local_3b0);
                }
                else {
                  local_3cc = FUN_1495bbacb(&local_368,local_3b0,local_3a8);
                }
                if (local_3cc == 0) {
                  local_3cc = FUN_1495bc8d1(&local_368,local_3b0,local_3a8);
                }
                if (local_300[0] == 0) {
                  local_2c8[0] = (ulonglong)local_2c8[0]._2_6_ << 0x10;
                  uVar12 = 0;
                  iVar7 = local_3cc;
                  goto LAB_1495bcc72;
                }
                if (bVar16) {
                  local_2c8[0] = CONCAT62(local_2c8[0]._2_6_,local_300[0]);
                  memcpy(local_2c8 + 1,&local_2f8,(ulonglong)local_300[0] << 4);
                  bVar16 = false;
                }
                else {
                  sVar4 = (ushort)local_2c8[0];
                  uVar8 = local_2c8[0] & 0xffff;
                  memcpy(&local_330,local_2c8 + 1,(local_2c8[0] & 0xffff) << 4);
                  local_2c8[0] = local_2c8[0] & 0xffffffffffff0000;
                  local_370 = uVar8;
                  if (sVar4 != 0) {
                    uVar8 = 1;
                    uVar15 = 0;
                    do {
                      if ((short)uVar8 == 0) {
                        uVar8 = 0;
                      }
                      else {
                        uVar1 = auStack_328[uVar15 * 8 + 1];
                        uVar2 = auStack_328[uVar15 * 8];
                        uVar3 = (&local_330)[uVar15 * 2];
                        puVar11 = local_2f0 + 1;
                        uVar14 = 0;
                        do {
                          uVar5 = FUN_1495b4246(uVar1,*puVar11);
                          uVar6 = FUN_1495b4246(uVar2,puVar11[-1]);
                          FUN_1495bd637(local_2c8,*(ulonglong *)(puVar11 + -5) | uVar3,uVar6,uVar5);
                          uVar14 = uVar14 + 1;
                          uVar8 = (ulonglong)local_300[0];
                          puVar11 = puVar11 + 8;
                        } while (uVar14 < uVar8);
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 != local_370);
                  }
                  bVar16 = false;
                  uVar8 = local_380;
                  iVar7 = local_3b4;
                }
              }
              uVar10 = uVar10 + 0x40;
            } while (uVar10 < uVar8);
            uVar12 = (ushort)local_2c8[0];
            iVar7 = local_3cc;
          }
LAB_1495bcc72:
          puVar13 = local_388;
          param_1 = local_3a0;
          *(undefined2 *)((longlong)local_388 + 0x2c) = 1;
          *(ulonglong *)local_388[7] = local_3c0;
          *(undefined4 *)(local_388 + 5) = 0x2000;
          *(undefined2 *)((longlong)local_388 + 0x12) = 0;
          *(undefined1 *)((longlong)local_388 + 0x11) = 0;
          *local_390 = 0;
          local_390[1] = 0;
          uVar8 = local_3c8;
          uVar10 = local_3c0;
          if (uVar12 != 0 && iVar7 == 0) {
            puVar11 = (undefined2 *)((longlong)&local_2b8 + 2);
            uVar15 = 1;
            do {
              *(short *)((longlong)puVar13 + 0x14) = (short)*(undefined4 *)(puVar11 + -1) + 1;
              *(undefined2 *)((longlong)puVar13 + 0x16) = *puVar11;
              *puVar13 = *(undefined8 *)(puVar11 + -5);
              iVar7 = FUN_1495bd3da(param_1,puVar13);
              uVar8 = local_3c8;
              uVar10 = local_3c0;
              if (iVar7 != 0) break;
              puVar11 = puVar11 + 8;
              bVar16 = uVar15 < uVar12;
              uVar15 = uVar15 + 1;
            } while (bVar16);
          }
        }
      }
      uVar10 = uVar10 + 0x40;
    } while ((uVar10 < uVar8) && (iVar7 == 0));
  }
  if ((local_60 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 1495bcd72 FUN_1495bcd72 body=76 status=ok
// SIG undefined FUN_1495bcd72(void)

void FUN_1495bcd72(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != param_2 + 0x48) {
    FUN_14955d65a(param_1);
  }
  FUN_1495bd83c(param_1,param_2);
  *(longlong *)(param_2 + 0x38) = param_2 + 0x48;
  *(undefined2 *)(param_2 + 0x2c) = 0;
  *(undefined2 *)(param_2 + 0x30) = 3;
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 1495bcdbe FUN_1495bcdbe body=133 status=ok
// SIG undefined FUN_1495bcdbe(void)

undefined8 FUN_1495bcdbe(undefined8 param_1,longlong param_2,int param_3)

{
  void *_Dst;
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((int)(uint)*(ushort *)(param_2 + 0x30) < param_3) {
    uVar2 = param_3 + 7U & 0xfffffff8;
    _Dst = (void *)FUN_14955d750(param_1,(ulonglong)uVar2 * 8);
    if (_Dst == (void *)0x0) {
      uVar1 = 7;
    }
    else {
      memcpy(_Dst,*(void **)(param_2 + 0x38),(ulonglong)*(ushort *)(param_2 + 0x30) << 3);
      if (*(longlong *)(param_2 + 0x38) != param_2 + 0x48) {
        FUN_14955d65a(param_1);
      }
      *(void **)(param_2 + 0x38) = _Dst;
      *(short *)(param_2 + 0x30) = (short)uVar2;
    }
  }
  return uVar1;
}



// FUNCTION 1495bce43 FUN_1495bce43 body=1431 status=ok
// SIG undefined FUN_1495bce43(void)

ulonglong FUN_1495bce43(longlong *param_1,ulonglong param_2,ulonglong param_3,ushort param_4,
                       uint *param_5,ushort param_6,undefined4 *param_7)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 uVar9;
  short sVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  char *pcVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  bool bVar20;
  
  lVar5 = param_1[1];
  _Dst = *(void **)(param_5 + 8);
  puVar6 = (ulonglong *)param_1[3];
  plVar7 = *(longlong **)*param_1;
  lVar1 = ((undefined8 *)*param_1)[1] + (ulonglong)(byte)puVar6[2] * 0x70;
  uVar11 = *param_5;
  *param_7 = 0;
  *puVar6 = param_2;
  if (0 < (longlong)(int)uVar11) {
    puVar12 = (undefined1 *)(*(longlong *)(param_5 + 2) + 5);
    uVar14 = uVar11;
    do {
      lVar8 = *(longlong *)(lVar5 + 0x20);
      *puVar12 = 0;
      if (((*(ulonglong *)(lVar8 + 0x30 + (longlong)*(int *)(puVar12 + 3) * 0x40) & ~param_3) == 0)
         && ((*(ushort *)(lVar8 + (longlong)*(int *)(puVar12 + 3) * 0x40 + 0x14) & param_4) == 0)) {
        *puVar12 = 1;
      }
      puVar12 = puVar12 + 0xc;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  memset(_Dst,0,(longlong)(int)uVar11 << 3);
  param_5[0xc] = 0;
  param_5[0xd] = 0;
  param_5[10] = 0;
  param_5[0xf] = 0;
  param_5[0x10] = 0xa2879f2e;
  param_5[0x11] = 0x546d42ae;
  param_5[0x12] = 0x19;
  param_5[0x13] = 0;
  param_5[0x14] = 0;
  *(undefined8 *)(param_5 + 0x16) = *(undefined8 *)(lVar1 + 0x60);
  plVar13 = *(longlong **)(*(longlong *)(lVar1 + 0x28) + 0x60);
  if (plVar13 != (longlong *)0x0) {
    do {
      if (*plVar13 == *plVar7) goto LAB_1495bcf36;
      plVar13 = (longlong *)plVar13[5];
    } while (plVar13 != (longlong *)0x0);
  }
  plVar13 = (longlong *)0x0;
LAB_1495bcf36:
  plVar13 = (longlong *)plVar13[2];
  uVar14 = (**(code **)(*plVar13 + 0x18))(plVar13);
  uVar16 = (ulonglong)uVar14;
  if ((uVar14 != 0) && (uVar14 != 0x13)) {
    if (uVar14 == 7) {
      lVar1 = *plVar7;
      if ((*(char *)(lVar1 + 0x61) == '\0') && (*(char *)(lVar1 + 0x62) == '\0')) {
        *(undefined1 *)(lVar1 + 0x61) = 1;
        if (0 < *(int *)(lVar1 + 0xd4)) {
          *(undefined4 *)(lVar1 + 0x170) = 1;
        }
        *(int *)(lVar1 + 0x178) = *(int *)(lVar1 + 0x178) + 1;
        *(undefined2 *)(lVar1 + 0x17c) = 0;
        if (*(longlong *)(lVar1 + 0x138) != 0) {
          *(undefined4 *)(*(longlong *)(lVar1 + 0x138) + 0x18) = 7;
        }
      }
      FUN_145e3b961(plVar13[2]);
      plVar13[2] = 0;
      return 7;
    }
    pcVar17 = (char *)plVar13[2];
    if (pcVar17 == (char *)0x0) {
      if (uVar14 == 0x204) {
        pcVar17 = "abort due to ROLLBACK";
      }
      else if (uVar14 == 0x65) {
        pcVar17 = "no more rows available";
      }
      else if (uVar14 == 100) {
        pcVar17 = "another row available";
      }
      else {
        pcVar17 = "unknown error";
        if (((uint)(uVar16 & 0xff) < 0x1d) && ((0x1410004UL >> (uVar16 & 0x3f) & 1) == 0)) {
          pcVar17 = (&PTR_s_not_an_error_14bd49c10)[uVar16 & 0xff];
        }
      }
    }
    FUN_14955a364(plVar7,&DAT_149dfbe46,pcVar17);
  }
  FUN_145e3b961(plVar13[2]);
  plVar13[2] = 0;
  if (uVar14 == 0x13) {
    return 0;
  }
  if (uVar14 != 0) {
    return uVar16;
  }
  if ((int)uVar11 < 1) {
    *(undefined2 *)((longlong)puVar6 + 0x1e) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x2c) = 0;
  }
  else {
    uVar16 = 0;
    do {
      *(undefined8 *)(puVar6[7] + uVar16 * 8) = 0;
      uVar16 = uVar16 + 1;
    } while (uVar11 != uVar16);
    *(undefined2 *)((longlong)puVar6 + 0x1e) = 0;
    pcVar17 = (char *)(*(longlong *)(param_5 + 2) + 5);
    uVar14 = 0xffffffff;
    uVar16 = 0;
    do {
      iVar3 = *(int *)((longlong)_Dst + uVar16 * 8);
      if (0 < iVar3) {
        if (iVar3 <= (int)uVar11) {
          uVar4 = *(uint *)(pcVar17 + 3);
          if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar5 + 0x14))) {
            uVar15 = iVar3 - 1;
            if ((*(longlong *)(puVar6[7] + (ulonglong)uVar15 * 8) == 0) && (*pcVar17 != '\0')) {
              lVar8 = *(longlong *)(lVar5 + 0x20) + (ulonglong)uVar4 * 0x40;
              *puVar6 = *puVar6 | *(ulonglong *)
                                   (*(longlong *)(lVar5 + 0x20) + 0x30 + (ulonglong)uVar4 * 0x40);
              *(longlong *)(puVar6[7] + (ulonglong)uVar15 * 8) = lVar8;
              if ((int)uVar14 < (int)uVar15) {
                uVar14 = uVar15;
              }
              if (((uVar16 < 0x10) && (*(char *)((longlong)_Dst + uVar16 * 8 + 4) != '\0')) &&
                 ((param_6 >> ((uint)uVar16 & 0x1f) & 1) == 0)) {
                *(ushort *)((longlong)puVar6 + 0x1e) =
                     *(ushort *)((longlong)puVar6 + 0x1e) | (ushort)(1 << ((byte)uVar15 & 0x1f));
              }
              if ((*(byte *)(lVar8 + 0x14) & 1) != 0) {
                param_5[0xf] = 0;
                *(byte *)(param_5 + 0x14) = (byte)param_5[0x14] & 0xfe;
                *param_7 = 1;
              }
              goto LAB_1495bd17c;
            }
          }
        }
        uVar18 = **(undefined8 **)(lVar1 + 0x28);
        goto LAB_1495bd1f9;
      }
LAB_1495bd17c:
      uVar16 = uVar16 + 1;
      pcVar17 = pcVar17 + 0xc;
    } while (uVar11 != uVar16);
    *(short *)((longlong)puVar6 + 0x2c) = (short)(uVar14 + 1);
    if (-1 < (int)uVar14) {
      uVar16 = 0;
      do {
        if (*(longlong *)(puVar6[7] + uVar16 * 8) == 0) {
          uVar18 = **(undefined8 **)(lVar1 + 0x28);
LAB_1495bd1f9:
          FUN_14955a364(plVar7,"%s.xBestIndex malfunction",uVar18);
          return 1;
        }
        uVar16 = uVar16 + 1;
      } while (uVar14 + 1 != uVar16);
    }
  }
  *(uint *)(puVar6 + 3) = param_5[10];
  *(char *)((longlong)puVar6 + 0x1c) = (char)param_5[0xe];
  param_5[0xe] = 0;
  puVar6[4] = *(ulonglong *)(param_5 + 0xc);
  if (param_5[0xf] == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (undefined1)param_5[4];
  }
  *(undefined1 *)((longlong)puVar6 + 0x1d) = uVar9;
  *(undefined2 *)((longlong)puVar6 + 0x12) = 0;
  dVar2 = *(double *)(param_5 + 0x10);
  if (dVar2 <= 1.0) {
LAB_1495bd27e:
    sVar10 = 0;
  }
  else if (dVar2 <= 2000000000.0) {
    uVar16 = (longlong)(dVar2 - 9.223372036854776e+18) & (longlong)dVar2 >> 0x3f | (longlong)dVar2;
    if (uVar16 < 8) {
      if (uVar16 < 2) goto LAB_1495bd27e;
      sVar10 = 0x28;
      do {
        sVar10 = sVar10 + -10;
        uVar19 = uVar16 * 2;
        bVar20 = uVar16 < 4;
        uVar16 = uVar19;
      } while (bVar20);
    }
    else {
      sVar10 = 0x28;
      if (0xff < uVar16) {
        sVar10 = 0x28;
        uVar19 = uVar16;
        do {
          sVar10 = sVar10 + 0x28;
          uVar16 = uVar19 >> 4;
          bVar20 = 0xfff < uVar19;
          uVar19 = uVar16;
        } while (bVar20);
      }
      uVar19 = uVar16;
      if (0xf < uVar16) {
        do {
          sVar10 = sVar10 + 10;
          uVar19 = uVar16 >> 1;
          bVar20 = 0x1f < uVar16;
          uVar16 = uVar19;
        } while (bVar20);
      }
    }
    sVar10 = sVar10 + (&DAT_14bd41890)[(uint)uVar19 & 7] + -10;
  }
  else {
    sVar10 = (ushort)((ulonglong)dVar2 >> 0x34) * 10 + -0x27ec;
  }
  *(short *)((longlong)puVar6 + 0x14) = sVar10;
  uVar16 = *(ulonglong *)(param_5 + 0x12);
  if (uVar16 < 8) {
    if (uVar16 < 2) {
      sVar10 = 0;
      goto LAB_1495bd30a;
    }
    sVar10 = 0x28;
    do {
      sVar10 = sVar10 + -10;
      uVar19 = uVar16 * 2;
      bVar20 = uVar16 < 4;
      uVar16 = uVar19;
    } while (bVar20);
  }
  else {
    sVar10 = 0x28;
    if (0xff < uVar16) {
      sVar10 = 0x28;
      uVar19 = uVar16;
      do {
        sVar10 = sVar10 + 0x28;
        uVar16 = uVar19 >> 4;
        bVar20 = 0xfff < uVar19;
        uVar19 = uVar16;
      } while (bVar20);
    }
    uVar19 = uVar16;
    if (0xf < uVar16) {
      do {
        sVar10 = sVar10 + 10;
        uVar19 = uVar16 >> 1;
        bVar20 = 0x1f < uVar16;
        uVar16 = uVar19;
      } while (bVar20);
    }
  }
  sVar10 = sVar10 + (&DAT_14bd41890)[(uint)uVar19 & 7] + -10;
LAB_1495bd30a:
  *(short *)((longlong)puVar6 + 0x16) = sVar10;
  *(uint *)(puVar6 + 5) = (param_5[0x14] & 1) << 0xc | (uint)puVar6[5] & 0xffffefff;
  uVar11 = FUN_1495bd3da(param_1,puVar6);
  if (*(char *)((longlong)puVar6 + 0x1c) != '\0') {
    FUN_145e3b961(puVar6[4]);
    *(undefined1 *)((longlong)puVar6 + 0x1c) = 0;
  }
  return (ulonglong)uVar11;
}



// FUNCTION 1495bd3da FUN_1495bd3da body=605 status=ok
// SIG undefined FUN_1495bd3da(void)

undefined8 FUN_1495bd3da(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  short sVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
    uVar10 = 0x65;
    if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[4] = 0;
    }
  }
  else {
    puVar8 = (undefined8 *)*param_1;
    uVar2 = *(undefined8 *)*puVar8;
    *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + -1;
    lVar11 = puVar8[10];
    if ((lVar11 != 0) && ((*(uint *)(param_2 + 5) & 0x200) != 0)) {
      cVar1 = *(char *)(param_2 + 2);
      do {
        if ((*(char *)(lVar11 + 0x10) == cVar1) && ((*(byte *)(lVar11 + 0x29) & 2) != 0)) {
          iVar6 = FUN_1495bd79d(lVar11,param_2);
          sVar9 = -1;
          if (iVar6 == 0) {
            iVar6 = FUN_1495bd79d(param_2,lVar11);
            sVar9 = 1;
            if (iVar6 == 0) goto LAB_1495bd42a;
          }
          *(undefined2 *)((longlong)param_2 + 0x14) = *(undefined2 *)(lVar11 + 0x14);
          *(short *)((longlong)param_2 + 0x16) = sVar9 + *(short *)(lVar11 + 0x16);
        }
LAB_1495bd42a:
        lVar11 = *(longlong *)(lVar11 + 0x40);
      } while (lVar11 != 0);
    }
    if (param_1[4] == 0) {
      plVar7 = (longlong *)FUN_1495bd6df(puVar8 + 10,param_2);
      uVar10 = 0;
      if (plVar7 != (longlong *)0x0) {
        puVar8 = (undefined8 *)*plVar7;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)FUN_14955d750(uVar2,0x60);
          *plVar7 = (longlong)puVar8;
          if (puVar8 == (undefined8 *)0x0) {
            return 7;
          }
          puVar8[7] = puVar8 + 9;
          *(undefined2 *)((longlong)puVar8 + 0x2c) = 0;
          *(undefined2 *)(puVar8 + 6) = 3;
          *(undefined4 *)(puVar8 + 5) = 0;
          puVar8[8] = 0;
        }
        else if (puVar8[8] != 0) {
          plVar7 = puVar8 + 8;
          do {
            plVar7 = (longlong *)FUN_1495bd6df(plVar7,param_2);
            if ((plVar7 == (longlong *)0x0) || (lVar11 = *plVar7, lVar11 == 0)) break;
            *plVar7 = *(longlong *)(lVar11 + 0x40);
            FUN_1495bcd72(uVar2,lVar11);
            FUN_14955d65a(uVar2,lVar11);
          } while (*plVar7 != 0);
        }
        FUN_1495bd83c(uVar2,puVar8);
        iVar6 = FUN_1495bcdbe(uVar2,puVar8,*(undefined2 *)((longlong)param_2 + 0x2c));
        if (iVar6 == 0) {
          uVar10 = *param_2;
          uVar2 = param_2[1];
          uVar3 = param_2[2];
          uVar4 = param_2[3];
          uVar5 = param_2[5];
          puVar8[4] = param_2[4];
          puVar8[5] = uVar5;
          puVar8[2] = uVar3;
          puVar8[3] = uVar4;
          *puVar8 = uVar10;
          puVar8[1] = uVar2;
          memcpy((void *)puVar8[7],(void *)param_2[7],
                 (ulonglong)*(ushort *)((longlong)puVar8 + 0x2c) << 3);
          if ((*(uint *)(param_2 + 5) >> 10 & 1) == 0) {
            uVar10 = 0;
            if ((*(uint *)(param_2 + 5) >> 0xe & 1) != 0) {
              param_2[4] = 0;
            }
          }
          else {
            *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
            uVar10 = 0;
          }
        }
        else {
          puVar8[3] = 0;
          puVar8[4] = 0;
          uVar10 = 7;
        }
        if ((((*(byte *)((longlong)puVar8 + 0x29) & 4) == 0) && (puVar8[4] != 0)) &&
           ((~*(uint *)(puVar8[4] + 100) & 3) == 0)) {
          puVar8[4] = 0;
        }
      }
    }
    else {
      uVar10 = 0;
      if (*(short *)((longlong)param_2 + 0x2c) != 0) {
        FUN_1495bd637(param_1[4],*param_2,*(undefined2 *)((longlong)param_2 + 0x14),
                      *(undefined2 *)((longlong)param_2 + 0x16));
      }
    }
  }
  return uVar10;
}



// FUNCTION 1495bd637 FUN_1495bd637 body=168 status=ok
// SIG undefined FUN_1495bd637(void)

void FUN_1495bd637(ushort *param_1,ulonglong param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ushort uVar6;
  ulonglong *puVar8;
  ulonglong uVar7;
  
  uVar1 = *param_1;
  uVar3 = (ulonglong)uVar1;
  puVar8 = (ulonglong *)(param_1 + 4);
  if (uVar3 != 0) {
    uVar7 = uVar3;
    puVar5 = puVar8;
    do {
      if (((short)param_3 <= (short)(ushort)puVar5[1]) && ((param_2 & ~*puVar5) == 0))
      goto LAB_1495bd698;
      if (((short)(ushort)puVar5[1] <= (short)param_3) && ((*puVar5 & ~param_2) == 0)) {
        return;
      }
      puVar5 = puVar5 + 2;
      uVar6 = (short)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 != 0);
    if (2 < uVar1) {
      lVar4 = uVar3 - 1;
      puVar5 = (ulonglong *)(param_1 + 0xc);
      do {
        puVar2 = puVar5;
        if ((short)(ushort)puVar8[1] <= (short)(ushort)puVar5[1]) {
          puVar2 = puVar8;
        }
        puVar8 = puVar2;
        puVar5 = puVar5 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      puVar5 = puVar8;
      if ((short)(ushort)puVar8[1] <= (short)param_3) {
        return;
      }
      goto LAB_1495bd698;
    }
  }
  *param_1 = uVar1 + 1;
  param_1[(ulonglong)uVar1 * 8 + 9] = param_4;
  puVar5 = puVar8 + (ulonglong)uVar1 * 2;
LAB_1495bd698:
  *puVar5 = param_2;
  *(ushort *)(puVar5 + 1) = param_3;
  if ((short)param_4 < (short)*(ushort *)((longlong)puVar5 + 10)) {
    *(ushort *)((longlong)puVar5 + 10) = param_4;
  }
  return;
}



// FUNCTION 1495bd6df FUN_1495bd6df body=190 status=ok
// SIG undefined FUN_1495bd6df(void)

ulonglong * FUN_1495bd6df(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  if ((ulonglong *)*param_1 != (ulonglong *)0x0) {
    puVar2 = (ulonglong *)*param_1;
    do {
      if (((char)puVar2[2] == (char)param_2[2]) &&
         (*(char *)((longlong)puVar2 + 0x11) == *(char *)((longlong)param_2 + 0x11))) {
        if (((*(byte *)((longlong)puVar2 + 0x29) & 0x40) != 0) &&
           (((*(short *)((longlong)param_2 + 0x2e) == 0 && ((~(uint)param_2[5] & 0x201) == 0)) &&
            ((*param_2 & ~*puVar2) == 0)))) {
          return param_1;
        }
        uVar3 = *param_2 & *puVar2;
        if (((uVar3 == *puVar2) &&
            (*(short *)((longlong)puVar2 + 0x12) <= *(short *)((longlong)param_2 + 0x12))) &&
           ((*(short *)((longlong)puVar2 + 0x14) <= *(short *)((longlong)param_2 + 0x14) &&
            (*(short *)((longlong)puVar2 + 0x16) <= *(short *)((longlong)param_2 + 0x16))))) {
          return (ulonglong *)0x0;
        }
        if (((uVar3 == *param_2) &&
            (*(short *)((longlong)param_2 + 0x14) <= *(short *)((longlong)puVar2 + 0x14))) &&
           (*(short *)((longlong)param_2 + 0x16) <= *(short *)((longlong)puVar2 + 0x16))) {
          return param_1;
        }
      }
      puVar1 = puVar2 + 8;
      param_1 = puVar2 + 8;
      puVar2 = (ulonglong *)*puVar1;
    } while ((ulonglong *)*puVar1 != (ulonglong *)0x0);
  }
  return param_1;
}



// FUNCTION 1495bd79d FUN_1495bd79d body=159 status=ok
// SIG undefined FUN_1495bd79d(void)

undefined8 FUN_1495bd79d(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  uVar6 = 0;
  if (*(ushort *)(param_2 + 0x2e) <= *(ushort *)(param_1 + 0x2e)) {
    uVar2 = *(ushort *)(param_1 + 0x2c);
    if ((int)((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x2e)) <
        (int)((uint)*(ushort *)(param_2 + 0x2c) - (uint)*(ushort *)(param_2 + 0x2e))) {
      uVar6 = uVar5;
      if ((*(short *)(param_1 + 0x14) < *(short *)(param_2 + 0x14)) ||
         ((*(short *)(param_1 + 0x14) <= *(short *)(param_2 + 0x14) &&
          (*(short *)(param_1 + 0x16) <= *(short *)(param_2 + 0x16))))) {
        if ((ulonglong)uVar2 != 0) {
          uVar8 = (ulonglong)uVar2;
          do {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + -8 + uVar8 * 8);
            uVar7 = (ulonglong)*(ushort *)(param_2 + 0x2c);
            if (lVar3 != 0) {
              do {
                if ((longlong)uVar7 < 1) {
                  return 0;
                }
                lVar1 = uVar7 * 8;
                uVar7 = uVar7 - 1;
              } while (*(longlong *)(*(longlong *)(param_2 + 0x38) + -8 + lVar1) != lVar3);
            }
            bVar4 = 1 < (longlong)uVar8;
            uVar8 = uVar8 - 1;
          } while (bVar4);
        }
        if (((*(byte *)(param_1 + 0x28) & 0x40) == 0) || ((*(byte *)(param_2 + 0x28) & 0x40) != 0))
        {
          uVar6 = 1;
        }
      }
    }
  }
  return uVar6;
}



// FUNCTION 1495bd83c FUN_1495bd83c body=122 status=ok
// SIG undefined FUN_1495bd83c(void)

void FUN_1495bd83c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x28);
  if ((uVar1 & 0x4400) != 0) {
    if (((uVar1 >> 10 & 1) == 0) || (*(char *)(param_2 + 0x1c) == '\0')) {
      if ((uVar1 >> 0xe & 1) == 0) {
        return;
      }
      lVar2 = *(longlong *)(param_2 + 0x20);
      if (lVar2 == 0) {
        return;
      }
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        FUN_14955d65a(param_1,*(longlong *)(lVar2 + 0x20));
        lVar2 = *(longlong *)(param_2 + 0x20);
      }
      FUN_14955d65a(param_1,lVar2);
    }
    else {
      FUN_145e3b961(*(undefined8 *)(param_2 + 0x20));
      *(undefined1 *)(param_2 + 0x1c) = 0;
    }
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1495bd8b6 FUN_1495bd8b6 body=81 status=ok
// SIG undefined FUN_1495bd8b6(void)

undefined8 FUN_1495bd8b6(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((((*(int *)((longlong)param_1 + 0x1c) == *(int *)(param_2 + 0x44)) &&
       ((*(ushort *)((longlong)param_1 + 0x14) & 0x82) != 0)) &&
      (((*(byte *)(param_2 + 0x3c) & 8) == 0 ||
       ((-1 < (char)*(ushort *)((longlong)param_1 + 0x14) || ((*(uint *)(*param_1 + 4) & 1) != 0))))
      )) && (((param_1[6] & param_3) == 0 && (-1 < (longlong)(int)param_1[5])))) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 8);
    uVar2 = FUN_1495bba14(*param_1,CONCAT71((int7)((ulonglong)lVar1 >> 8),
                                            *(undefined1 *)
                                             (lVar1 + 0x19 + (longlong)(int)param_1[5] * 0x20)));
    return uVar2;
  }
  return 0;
}



// FUNCTION 1495bd907 FUN_1495bd907 body=176 status=ok
// SIG undefined FUN_1495bd907(void)

undefined1 * FUN_1495bd907(int param_1,int param_2,undefined8 *param_3,char *param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = *(longlong **)*param_3;
  cVar1 = *param_4;
  while (cVar1 == ',') {
    iVar3 = FUN_1495bd907(param_1,param_2,param_3,*(undefined8 *)(param_4 + 0x10));
    if (iVar3 == 0) {
      return (undefined1 *)0x0;
    }
    param_4 = *(char **)(param_4 + 0x18);
    cVar1 = *param_4;
  }
  if ((*(byte *)(*plVar5 + 0x32) & 0x80) != 0) {
    plVar5 = (longlong *)0x0;
  }
  iVar3 = *(int *)((longlong)param_3 + 0x14);
  if (0 < iVar3) {
    plVar6 = (longlong *)param_3[4];
    iVar4 = 0;
    do {
      lVar2 = *plVar6;
      if ((*(byte *)(lVar2 + 4) & 1) == 0) {
        if (param_2 == 0) {
LAB_1495bd988:
          iVar3 = FUN_1495a04a0(plVar5,lVar2,param_4,param_1);
          if (iVar3 != 0) {
            return &DAT_00000001;
          }
          iVar3 = *(int *)((longlong)param_3 + 0x14);
        }
      }
      else if (*(short *)(lVar2 + 0x34) == param_1) goto LAB_1495bd988;
      iVar4 = iVar4 + 1;
      plVar6 = plVar6 + 8;
    } while (iVar4 < iVar3);
  }
  return (undefined1 *)0x0;
}



// FUNCTION 1495bd9b7 FUN_1495bd9b7 body=354 status=ok
// SIG undefined FUN_1495bd9b7(void)

void FUN_1495bd9b7(longlong param_1,ulonglong *param_2,short param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x14) < 1) {
    uVar8 = 0;
  }
  else {
    uVar1 = param_2[1];
    uVar2 = *param_2;
    plVar9 = *(longlong **)(param_1 + 0x20);
    uVar8 = 0;
    iVar10 = *(int *)(param_1 + 0x14);
    do {
      if ((*(byte *)((longlong)plVar9 + 0x12) & 2) != 0) break;
      if (((param_2[1] & plVar9[7]) != 0) && ((plVar9[7] & ~(uVar1 | uVar2)) == 0)) {
        uVar6 = (ulonglong)*(ushort *)((longlong)param_2 + 0x2c);
        if (uVar6 != 0) {
          do {
            plVar3 = *(longlong **)((param_2[7] - 8) + uVar6 * 8);
            if ((plVar3 != (longlong *)0x0) &&
               ((plVar3 == plVar9 ||
                ((-1 < (longlong)(int)plVar3[3] &&
                 ((longlong *)((longlong)(int)plVar3[3] * 0x40 + *(longlong *)(param_1 + 0x20)) ==
                  plVar9)))))) goto LAB_1495bdac5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if ((short)plVar9[2] < 1) {
          *(short *)((longlong)param_2 + 0x16) =
               *(short *)((longlong)param_2 + 0x16) + (short)plVar9[2];
        }
        else {
          *(short *)((longlong)param_2 + 0x16) = *(short *)((longlong)param_2 + 0x16) + -1;
          if ((*(byte *)((longlong)plVar9 + 0x14) & 0x82) != 0) {
            local_4c = 0;
            iVar5 = FUN_1495a94a2(*(undefined8 *)(*plVar9 + 0x18),&local_4c);
            uVar7 = 0x14;
            if (local_4c + 1U < 3) {
              uVar7 = 10;
            }
            if (iVar5 == 0) {
              uVar7 = 0x14;
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
          }
        }
      }
LAB_1495bdac5:
      plVar9 = plVar9 + 8;
      bVar4 = 1 < iVar10;
      iVar10 = iVar10 + -1;
    } while (bVar4);
  }
  if ((int)((int)param_3 - uVar8) < (int)*(short *)((longlong)param_2 + 0x16)) {
    *(short *)((longlong)param_2 + 0x16) = (short)((int)param_3 - uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495bdb1a FUN_1495bdb1a body=2749 status=ok
// SIG undefined FUN_1495bdb1a(void)

int FUN_1495bdb1a(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ushort uVar15;
  short sVar16;
  ulonglong uVar17;
  ushort uVar18;
  int iVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  bool bVar23;
  char cVar24;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong local_130;
  ushort local_126;
  uint local_124;
  longlong *local_120;
  undefined2 local_116;
  undefined2 local_114;
  ushort local_112;
  longlong *local_110;
  ulonglong local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  ushort local_f2;
  longlong *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  int local_cc;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = *(longlong **)*param_1;
  lVar2 = *plVar1;
  iVar19 = 7;
  if (*(char *)(lVar2 + 0x61) == '\0') {
    puVar3 = (ulonglong *)param_1[3];
    local_f8 = (uint)puVar3[5];
    uVar12 = 0x18;
    if ((local_f8 & 0x20) == 0) {
      uVar12 = 0x1bf;
    }
    uVar5 = uVar12 & 0xffffff83;
    if ((*(byte *)(param_3 + 100) & 4) == 0) {
      uVar5 = uVar12;
    }
    local_112 = (ushort)puVar3[3];
    local_108 = (ulonglong)local_112;
    local_114 = *(undefined2 *)((longlong)puVar3 + 0x1a);
    local_116 = *(undefined2 *)((longlong)puVar3 + 0x1c);
    local_f2 = *(ushort *)((longlong)puVar3 + 0x2e);
    local_126 = *(ushort *)((longlong)puVar3 + 0x2c);
    local_c0 = *puVar3;
    local_100 = (uint)*(ushort *)((longlong)puVar3 + 0x16);
    local_138 = (longlong *)CONCAT44(local_138._4_4_,uVar5);
    local_130 = param_3;
    local_e0 = param_4;
    plVar13 = (longlong *)FUN_1495bb6b5(local_b8,param_1[1],*(undefined4 *)(param_2 + 0x44));
    *(undefined2 *)((longlong)puVar3 + 0x12) = 0;
    local_d8 = (ulonglong)(short)**(ushort **)(param_3 + 0x10);
    iVar19 = 0;
    iVar21 = 0;
    if (10 < (longlong)local_d8) {
      uVar22 = 0x28;
      uVar14 = local_d8;
      if (0xff < **(ushort **)(param_3 + 0x10)) {
        uVar22 = 0x28;
        uVar17 = local_d8;
        do {
          uVar22 = (ulonglong)((int)uVar22 + 0x28);
          uVar14 = uVar17 >> 4;
          bVar23 = 0xfff < uVar17;
          uVar17 = uVar14;
        } while (bVar23);
      }
      uVar17 = uVar14;
      if (0xf < uVar14) {
        do {
          uVar22 = (ulonglong)((int)uVar22 + 10);
          uVar17 = uVar14 >> 1;
          bVar23 = 0x1f < uVar14;
          uVar14 = uVar17;
        } while (bVar23);
      }
      iVar21 = (int)CONCAT62((int6)(uVar22 >> 0x10),
                             (short)uVar22 + (&DAT_14bd41890)[(uint)uVar17 & 7]) + -0x2b;
    }
    local_c8 = (ulonglong)local_126;
    if (plVar13 != (longlong *)0x0) {
      local_cc = local_126 + 1;
      local_120 = (longlong *)0x0;
      local_110 = (longlong *)0x0;
      do {
        uVar18 = *(ushort *)((longlong)plVar13 + 0x14);
        if (uVar18 == 0x100) {
          sVar8 = *(short *)(*(longlong *)(param_3 + 8) + local_108 * 2);
          if ((longlong)sVar8 < 0) {
            cVar24 = sVar8 == -1;
          }
          else {
            cVar24 = *(char *)(*(longlong *)(*(longlong *)(param_3 + 0x18) + 8) + 0x18 +
                              (longlong)sVar8 * 0x20);
          }
          if (cVar24 == '\0') goto LAB_1495bddd3;
          iVar19 = 0;
        }
        else {
LAB_1495bddd3:
          iVar19 = 0;
          if ((((plVar13[6] & puVar3[1]) == 0) &&
              ((uVar18 != 0x10 || ((*(ushort *)((longlong)plVar13 + 0x12) & 0x100) == 0)))) &&
             (((*(byte *)(param_2 + 0x3c) & 8) == 0 || ((*(byte *)(*plVar13 + 4) & 1) != 0)))) {
            local_124 = (uint)uVar18;
            if (*(char *)(param_3 + 0x62) == '\0') {
LAB_1495bde2d:
              uVar12 = 1;
            }
            else {
              uVar12 = 2;
              if (*(ushort *)(param_3 + 0x5e) - 1 != (int)local_108) goto LAB_1495bde2d;
            }
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | uVar12;
            *(uint *)(puVar3 + 5) = local_f8;
            *(ushort *)(puVar3 + 3) = local_112;
            *(undefined2 *)((longlong)puVar3 + 0x1a) = local_114;
            *(undefined2 *)((longlong)puVar3 + 0x1c) = local_116;
            *(ushort *)((longlong)puVar3 + 0x2c) = local_126;
            local_f0 = plVar13;
            iVar10 = FUN_1495bcdbe(lVar2,puVar3);
            plVar13 = local_f0;
            iVar19 = 0;
            if (iVar10 != 0) break;
            uVar18 = *(ushort *)((longlong)puVar3 + 0x2c);
            *(ushort *)((longlong)puVar3 + 0x2c) = uVar18 + 1;
            *(longlong **)(puVar3[7] + (ulonglong)uVar18 * 8) = local_f0;
            *puVar3 = ~puVar3[1] & (local_f0[6] | local_c0);
            plVar20 = local_f0;
            local_e8 = param_2;
            if ((local_124 & 1) == 0) {
              if ((local_124 & 0x82) != 0) {
                sVar8 = *(short *)(*(longlong *)(param_3 + 8) + local_108 * 2);
                uVar12 = (uint)puVar3[5];
                local_fc = uVar12 | 1;
                *(uint *)(puVar3 + 5) = local_fc;
                if (sVar8 == -1) {
LAB_1495be1ce:
                  local_fc = uVar12 | 0x1001;
                  *(uint *)(puVar3 + 5) = local_fc;
LAB_1495be1da:
                  iVar10 = 0;
                }
                else {
                  iVar10 = 0;
                  if (((short)local_e0 == 0) && (-1 < sVar8)) {
                    iVar10 = 0;
                    if (*(ushort *)(param_3 + 0x5e) - 1 == (int)local_108) {
                      if (((*(byte *)(param_3 + 100) & 8) != 0) ||
                         (((*(ushort *)(param_3 + 0x5e) == 1 && (local_124 == 2)) &&
                          (*(char *)(param_3 + 0x62) != '\0')))) goto LAB_1495be1ce;
                      local_fc = uVar12 | 0x10001;
                      *(uint *)(puVar3 + 5) = local_fc;
                      goto LAB_1495be1da;
                    }
                  }
                }
                goto LAB_1495bdefd;
              }
              if ((local_124 >> 8 & 1) != 0) {
                local_fc = (uint)puVar3[5] | 8;
                *(uint *)(puVar3 + 5) = local_fc;
                iVar10 = 0;
                goto LAB_1495bdefd;
              }
              if ((local_124 & 0x24) != 0) {
                *(uint *)(puVar3 + 5) = (uint)puVar3[5] | 0x22;
                local_138 = local_f0;
                uVar7 = FUN_1495be629(plVar1,*(undefined4 *)(param_2 + 0x44),param_3,local_108);
                *(undefined2 *)((longlong)puVar3 + 0x1a) = uVar7;
                if ((*(byte *)((longlong)local_f0 + 0x13) & 1) == 0) {
                  local_fc = (uint)puVar3[5];
                  local_110 = local_f0;
                  plVar13 = (longlong *)0x0;
                  plVar20 = local_f0;
                }
                else {
                  iVar10 = FUN_1495bcdbe(lVar2,puVar3,*(ushort *)((longlong)puVar3 + 0x2c) + 1);
                  if (iVar10 != 0) break;
                  plVar13 = local_f0 + 8;
                  uVar18 = *(ushort *)((longlong)puVar3 + 0x2c);
                  *(ushort *)((longlong)puVar3 + 0x2c) = uVar18 + 1;
                  *(longlong **)(puVar3[7] + (ulonglong)uVar18 * 8) = plVar13;
                  local_fc = (uint)puVar3[5] | 0x10;
                  *(uint *)(puVar3 + 5) = local_fc;
                  *(undefined2 *)((longlong)puVar3 + 0x1c) = 1;
                  local_110 = local_f0;
                  plVar20 = local_f0;
                }
LAB_1495be347:
                local_120 = plVar13;
                iVar10 = 0;
                goto LAB_1495bdefd;
              }
              *(uint *)(puVar3 + 5) = (uint)puVar3[5] | 0x12;
              local_138 = local_f0;
              uVar7 = FUN_1495be629(plVar1,*(undefined4 *)(param_2 + 0x44),param_3,local_108);
              *(undefined2 *)((longlong)puVar3 + 0x1c) = uVar7;
              local_fc = (uint)puVar3[5];
              if ((local_fc & 0x20) != 0) {
                local_110 = *(longlong **)
                             ((puVar3[7] - 0x10) +
                             (ulonglong)*(ushort *)((longlong)puVar3 + 0x2c) * 8);
                plVar20 = plVar13;
                goto LAB_1495be347;
              }
              if ((local_fc & 2) != 0) {
                uVar15 = *(ushort *)((longlong)puVar3 + 0x16);
                local_110 = (longlong *)0x0;
                iVar10 = 0;
                local_120 = local_f0;
                uVar18 = uVar15;
                goto LAB_1495be227;
              }
              local_110 = (longlong *)0x0;
              local_120 = local_f0;
              iVar10 = 0;
              plVar20 = local_f0;
LAB_1495be0ba:
              uVar12 = (int)puVar3[3] + 1;
              *(short *)(puVar3 + 3) = (short)uVar12;
              if (((short)*(ushort *)(plVar20 + 2) < 1) &&
                 (-1 < *(short *)(*(longlong *)(param_3 + 8) + local_108 * 2))) {
                iVar19 = (uint)*(ushort *)(plVar20 + 2) - iVar10;
                uVar12 = CONCAT22((short)((uint)iVar19 >> 0x10),
                                  (short)iVar19 + *(short *)((longlong)puVar3 + 0x16));
                goto LAB_1495bdf0c;
              }
              uVar14 = (ulonglong)(uVar12 & 0xffff);
              uVar18 = (*(short *)(*(longlong *)(param_3 + 0x10) + uVar14 * 2) -
                       *(short *)(*(longlong *)(param_3 + 0x10) + -2 + uVar14 * 2)) +
                       *(short *)((longlong)puVar3 + 0x16);
              uVar12 = (uint)uVar18;
              *(ushort *)((longlong)puVar3 + 0x16) = uVar18;
              if ((local_124 >> 8 & 1) != 0) {
                uVar12 = uVar18 + 10;
                goto LAB_1495bdf0c;
              }
            }
            else {
              lVar4 = *local_f0;
              if ((*(byte *)(lVar4 + 5) & 8) == 0) {
                uVar22 = 0;
                if (*(uint **)(lVar4 + 0x20) != (uint *)0x0) {
                  uVar12 = **(uint **)(lVar4 + 0x20);
                  uVar14 = (ulonglong)(int)uVar12;
                  if (uVar14 != 0) {
                    if (uVar12 < 8) {
                      if (uVar12 != 1) {
                        sVar8 = 0x28;
                        uVar22 = uVar14;
                        do {
                          sVar8 = sVar8 + -10;
                          uVar14 = uVar22 * 2;
                          bVar23 = uVar22 < 4;
                          uVar22 = uVar14;
                        } while (bVar23);
                        goto LAB_1495be532;
                      }
                      sVar8 = 0;
                    }
                    else {
                      sVar8 = 0x28;
                      if (0xff < uVar12) {
                        sVar8 = 0x28;
                        uVar22 = uVar14;
                        do {
                          sVar8 = sVar8 + 0x28;
                          uVar14 = uVar22 >> 4;
                          bVar23 = 0xfff < uVar22;
                          uVar22 = uVar14;
                        } while (bVar23);
                      }
                      uVar22 = uVar14;
                      if (0xf < uVar14) {
                        do {
                          sVar8 = sVar8 + 10;
                          uVar14 = uVar22 >> 1;
                          bVar23 = 0x1f < uVar22;
                          uVar22 = uVar14;
                        } while (bVar23);
                      }
LAB_1495be532:
                      sVar8 = sVar8 + (&DAT_14bd41890)[(uint)uVar14 & 7] + -10;
                    }
                    uVar22 = (ulonglong)(uint)(int)sVar8;
                  }
                }
LAB_1495be549:
                iVar10 = (int)uVar22;
                if ((*(byte *)(param_3 + 100) & 0x80) != 0) {
                  sVar8 = *(short *)(*(longlong *)(param_3 + 0x10) + local_108 * 2);
                  if (iVar10 < 0xb) {
                    sVar16 = 0;
                  }
                  else {
                    uVar17 = uVar22 & 0xffff;
                    sVar16 = 0x28;
                    if (0xff < (uint)uVar17) {
                      sVar16 = 0x28;
                      uVar14 = uVar17;
                      do {
                        sVar16 = sVar16 + 0x28;
                        uVar17 = uVar14 >> 4;
                        bVar23 = 0xfff < uVar14;
                        uVar14 = uVar17;
                      } while (bVar23);
                    }
                    uVar14 = uVar17;
                    if (0xf < uVar17) goto LAB_1495bdd52;
LAB_1495be5ab:
                    sVar16 = sVar16 + (&DAT_14bd41890)[(uint)uVar17 & 7] + -0x2b;
                  }
                  if ((int)sVar8 + (int)sVar16 + 10 < (short)iVar21 + iVar10) {
                    iVar19 = 0;
                    goto LAB_1495bded0;
                  }
                }
              }
              else {
                if (1 < *(ushort *)((longlong)puVar3 + 0x2c)) {
                  uVar22 = 0x2e;
                  uVar14 = 0;
                  do {
                    plVar13 = *(longlong **)(puVar3[7] + uVar14 * 8);
                    if ((plVar13 != (longlong *)0x0) && (*plVar13 == lVar4)) {
                      uVar22 = 0;
                    }
                    uVar14 = uVar14 + 1;
                  } while (*(ushort *)((longlong)puVar3 + 0x2c) - 1 != uVar14);
                  goto LAB_1495be549;
                }
                iVar10 = 0x2e;
                if ((*(byte *)(param_3 + 100) & 0x80) != 0) {
                  sVar8 = *(short *)(*(longlong *)(param_3 + 0x10) + local_108 * 2);
                  uVar22 = 0x2e;
                  uVar14 = 0x2e;
                  sVar16 = 0x28;
LAB_1495bdd52:
                  do {
                    iVar10 = (int)uVar22;
                    sVar16 = sVar16 + 10;
                    uVar17 = uVar14 >> 1;
                    bVar23 = 0x1f < uVar14;
                    uVar14 = uVar17;
                  } while (bVar23);
                  goto LAB_1495be5ab;
                }
              }
              local_fc = (uint)puVar3[5] | 4;
              *(uint *)(puVar3 + 5) = local_fc;
LAB_1495bdefd:
              if ((local_fc & 2) == 0) goto LAB_1495be0ba;
              uVar15 = *(ushort *)((longlong)puVar3 + 0x16);
              uVar18 = uVar15;
              if (local_110 != (longlong *)0x0) {
                if ((short)local_110[2] < 1) {
                  uVar18 = (short)local_110[2] + uVar15;
                }
                else {
                  uVar18 = uVar15 - 0x14;
                }
              }
              if (local_120 == (longlong *)0x0) {
                local_120 = (longlong *)0x0;
              }
              else {
LAB_1495be227:
                if ((short)local_120[2] < 1) {
                  uVar18 = (short)local_120[2] + uVar18;
                }
                else {
                  uVar18 = uVar18 - 0x14;
                }
              }
              uVar9 = uVar18;
              if ((((local_110 != (longlong *)0x0) && (local_120 != (longlong *)0x0)) &&
                  (0 < (short)local_110[2])) && (uVar9 = uVar18 - 0x14, (short)local_120[2] < 1)) {
                uVar9 = uVar18;
              }
              uVar12 = (-1 - (uint)(local_120 != (longlong *)0x0)) +
                       (uint)(local_110 == (longlong *)0x0) + (int)(short)uVar15;
              uVar18 = 10;
              if (10 < (short)uVar9) {
                uVar18 = uVar9;
              }
              if ((int)(uint)uVar18 <= (int)uVar12) {
                uVar12 = (uint)uVar18;
              }
LAB_1495bdf0c:
              *(short *)((longlong)puVar3 + 0x16) = (short)uVar12;
            }
            uVar11 = FUN_1495b4246(iVar21,uVar12 + (*(short *)(param_3 + 0x5c) * 0xf) /
                                                   (int)*(short *)(*(longlong *)(local_e8 + 0x20) +
                                                                  0x4c) + 1);
            sVar8 = (short)uVar11;
            if ((local_fc & 0x140) == 0) {
              sVar8 = FUN_1495b4246(uVar11,uVar12 + 0x10);
            }
            iVar10 = iVar10 + (int)local_e0;
            sVar16 = (short)iVar10;
            *(short *)((longlong)puVar3 + 0x14) = sVar8 + sVar16;
            sVar8 = (short)uVar12;
            *(short *)((longlong)puVar3 + 0x16) = sVar16 + sVar8;
            FUN_1495bd9b7(param_1[1],puVar3,local_d8);
            iVar19 = FUN_1495bd3da(param_1,puVar3);
            if ((puVar3[5] & 2) != 0) {
              sVar8 = (short)local_100;
            }
            *(short *)((longlong)puVar3 + 0x16) = sVar8;
            if (((puVar3[5] & 0x10) == 0) && ((ushort)puVar3[3] < *(ushort *)(param_3 + 0x60))) {
              FUN_1495bdb1a(param_1,local_e8,param_3,iVar10);
            }
            *(short *)((longlong)puVar3 + 0x16) = (short)local_100;
            param_2 = local_e8;
          }
        }
LAB_1495bded0:
        plVar13 = (longlong *)FUN_1495bb775(local_b8);
      } while (iVar19 == 0 && plVar13 != (longlong *)0x0);
    }
    uVar6 = local_e0;
    uVar14 = local_108;
    uVar18 = local_112;
    *puVar3 = local_c0;
    *(ushort *)(puVar3 + 3) = local_112;
    *(undefined2 *)((longlong)puVar3 + 0x1a) = local_114;
    *(undefined2 *)((longlong)puVar3 + 0x1c) = local_116;
    *(ushort *)((longlong)puVar3 + 0x2e) = local_f2;
    *(uint *)(puVar3 + 5) = local_f8;
    *(short *)((longlong)puVar3 + 0x16) = (short)local_100;
    *(ushort *)((longlong)puVar3 + 0x2c) = local_126;
    if (((local_112 == local_f2) && ((int)local_108 + 1U < (uint)*(ushort *)(param_3 + 0x5e))) &&
       ((local_112 == local_126 &&
        (((((*(byte *)(param_3 + 100) & 0x40) == 0 && ((*(byte *)(lVar2 + 0x5d) & 0x40) == 0)) &&
          (0x29 < *(short *)(*(longlong *)(param_3 + 0x10) + 2 + local_108 * 2))) &&
         (iVar19 = FUN_1495bcdbe(lVar2,puVar3,(int)local_c8 + 1), iVar19 == 0)))))) {
      *(short *)(puVar3 + 3) = (short)puVar3[3] + 1;
      *(short *)((longlong)puVar3 + 0x2e) = *(short *)((longlong)puVar3 + 0x2e) + 1;
      uVar15 = *(ushort *)((longlong)puVar3 + 0x2c);
      *(ushort *)((longlong)puVar3 + 0x2c) = uVar15 + 1;
      *(undefined8 *)(puVar3[7] + (ulonglong)uVar15 * 8) = 0;
      *(byte *)((longlong)puVar3 + 0x29) = *(byte *)((longlong)puVar3 + 0x29) | 0x80;
      uVar15 = *(short *)(*(longlong *)(param_3 + 0x10) + uVar14 * 2) -
               *(short *)(*(longlong *)(param_3 + 0x10) + 2 + uVar14 * 2);
      *(short *)((longlong)puVar3 + 0x16) = *(short *)((longlong)puVar3 + 0x16) - uVar15;
      FUN_1495bdb1a(param_1,param_2,param_3,(int)uVar6 + (uint)uVar15 + 5);
      *(short *)((longlong)puVar3 + 0x16) = (short)local_100;
      *(ushort *)(puVar3 + 3) = uVar18;
      *(ushort *)((longlong)puVar3 + 0x2e) = uVar18;
      *(uint *)(puVar3 + 5) = local_f8;
      iVar19 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar19;
}



// FUNCTION 1495be629 FUN_1495be629 body=476 status=ok
// SIG undefined FUN_1495be629(void)

ulonglong FUN_1495be629(undefined8 param_1,int param_2,longlong param_3,uint param_4,
                       longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  pcVar5 = *(char **)(*param_5 + 0x10);
  cVar7 = *pcVar5;
  if (cVar7 == -0x53) {
    cVar7 = pcVar5[2];
  }
  if (cVar7 == -0x52) {
LAB_1495be673:
    uVar8 = **(uint **)(pcVar5 + 0x20);
  }
  else {
    uVar8 = 1;
    if (cVar7 == -0x78) {
      pcVar5 = *(char **)(pcVar5 + 0x20);
      goto LAB_1495be673;
    }
  }
  uVar9 = *(ushort *)(param_3 + 0x60) - param_4;
  if ((int)uVar8 < (int)uVar9) {
    uVar9 = uVar8;
  }
  uVar11 = 1;
  if (1 < (int)uVar9) {
    uVar11 = 1;
LAB_1495be6a4:
    lVar10 = *(longlong *)(*param_5 + 0x18);
    if ((*(byte *)(lVar10 + 5) & 8) != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20);
    }
    pcVar5 = *(char **)(*(longlong *)(*(longlong *)(*param_5 + 0x10) + 0x20) + 8 + uVar11 * 0x20);
    if ((((*pcVar5 == -0x5c) && (*(int *)(pcVar5 + 0x2c) == param_2)) &&
        (lVar1 = uVar11 + param_4,
        *(short *)(pcVar5 + 0x30) == *(short *)(*(longlong *)(param_3 + 8) + lVar1 * 2))) &&
       (*(char *)(*(longlong *)(param_3 + 0x38) + lVar1) ==
        *(char *)(*(longlong *)(param_3 + 0x38) + (ulonglong)param_4))) {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 8 + uVar11 * 0x20);
      bVar3 = FUN_14959f8fa(pcVar5);
      bVar4 = FUN_14959f8fa(uVar2);
      if (((char)bVar3 < 'A') || ((char)bVar4 < 'A')) {
        if ((char)bVar4 < 'A') {
          bVar4 = bVar3;
        }
        bVar4 = bVar4 | 0x40;
      }
      else {
        bVar4 = (0x42 < bVar4) * '\x02' | 0x41;
        if (0x42 < bVar3) {
          bVar4 = 0x43;
        }
      }
      if ((longlong)*(short *)(pcVar5 + 0x30) < 0) {
        bVar3 = 0x44;
      }
      else {
        bVar3 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x18) + 8) + 0x19 +
                         (longlong)*(short *)(pcVar5 + 0x30) * 0x20);
      }
      if ((bVar4 == bVar3) &&
         (plVar6 = (longlong *)FUN_149586264(param_1,pcVar5,uVar2), plVar6 != (longlong *)0x0)) {
        lVar10 = 0;
        do {
          bVar4 = *(byte *)(*plVar6 + lVar10);
          bVar3 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x40) + lVar1 * 8) + lVar10);
          if (bVar4 == bVar3) {
            if ((ulonglong)bVar4 == 0) goto LAB_1495be7d8;
          }
          else if ((&DAT_14bd3ff30)[bVar4] != (&DAT_14bd3ff30)[bVar3]) break;
          lVar10 = lVar10 + 1;
        } while( true );
      }
    }
  }
LAB_1495be7f1:
  return uVar11 & 0xffffffff;
LAB_1495be7d8:
  uVar11 = uVar11 + 1;
  if (uVar11 == uVar9) goto code_r0x0001495be7ee;
  goto LAB_1495be6a4;
code_r0x0001495be7ee:
  uVar11 = (ulonglong)uVar9;
  goto LAB_1495be7f1;
}



// FUNCTION 1495be805 FUN_1495be805 body=2172 status=ok
// SIG undefined FUN_1495be805(void)

ulonglong FUN_1495be805(undefined8 *param_1,ushort *param_2,longlong param_3,ushort param_4,
                       ushort param_5,longlong param_6,ulonglong *param_7)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  undefined7 uVar13;
  ushort *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte bVar17;
  short sVar18;
  longlong lVar19;
  uint uVar20;
  ushort *puVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined8 local_110;
  int local_108;
  uint local_104;
  longlong local_100;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  ulonglong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  code *local_70;
  undefined1 *local_68;
  short local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_80 = param_3;
  if ((param_5 == 0) || ((*(byte *)(*(longlong *)*param_1 + 0x5c) & 0x40) == 0)) {
    uVar1 = *param_2;
    uVar9 = (ulonglong)uVar1;
    uVar25 = 0;
    if (uVar1 < 0x40) {
      local_e8 = ~(-1L << ((byte)uVar1 & 0x3f));
      uVar20 = (uint)param_4;
      local_ec = ((param_4 >> 0xb & 1) != 0) + 0x182;
      if (uVar1 != 0) {
        puVar14 = param_2 + 4;
        local_a0 = param_1 + 0xd;
        local_98 = param_1 + 0x52;
        uVar25 = (ulonglong)param_5;
        uVar15 = 0;
        local_c8 = 0;
        local_a8 = 0;
        uVar16 = 0;
        lVar19 = 0;
        local_104 = (uint)param_4;
        local_d0 = param_1;
        local_88 = uVar25;
        do {
          if (uVar15 != 0) {
            local_c8 = local_c8 | *(ulonglong *)(lVar19 + 8);
          }
          lVar19 = param_6;
          if ((uVar25 <= uVar15) ||
             (lVar19 = *(longlong *)(*(longlong *)(local_80 + 0x18) + uVar15 * 8),
             (uVar20 >> 0xb & 1) == 0)) {
            if ((*(byte *)(lVar19 + 0x29) & 4) != 0) {
              uVar25 = uVar16;
              if (*(char *)(lVar19 + 0x1d) != '\0') {
                uVar25 = local_e8;
              }
              if (-1 < (char)uVar20) {
                uVar16 = uVar25;
              }
              goto LAB_1495befb8;
            }
            if ((char)uVar20 < '\0') {
              *(undefined2 *)(lVar19 + 0x1e) = 0;
            }
            local_108 = *(int *)(param_1[1] + (ulonglong)*(byte *)(lVar19 + 0x10) * 0x70 + 0x4c);
            uVar25 = 0;
            local_100 = lVar19;
            iVar11 = local_108;
            do {
              if ((uVar16 >> (uVar25 & 0x3f) & 1) == 0) {
                for (pcVar12 = *(char **)(puVar14 + uVar25 * 0x10); pcVar12 != (char *)0x0;
                    pcVar12 = *(char **)pcVar12) {
                  if ((*(uint *)(pcVar12 + 4) & 0x41000) == 0) goto LAB_1495be9ac;
                  if ((*(uint *)(pcVar12 + 4) >> 0x12 & 1) == 0) {
                    pcVar12 = pcVar12 + 0x10;
                  }
                  else {
                    pcVar12 = (char *)(*(longlong *)(pcVar12 + 0x20) + 8);
                  }
                }
                pcVar12 = (char *)0x0;
LAB_1495be9ac:
                if ((*pcVar12 == -0x5c) && (*(int *)(pcVar12 + 0x2c) == iVar11)) {
                  local_118 = local_ec;
                  local_110 = 0;
                  puVar7 = (undefined8 *)
                           FUN_1495bb5fc(local_a0,iVar11,(int)*(short *)(pcVar12 + 0x30));
                  lVar19 = local_100;
                  uVar20 = local_104;
                  iVar11 = local_108;
                  if (puVar7 != (undefined8 *)0x0) {
                    if (*(ushort *)((longlong)puVar7 + 0x14) == 1) {
                      if ((ulonglong)*(ushort *)(local_100 + 0x2c) != 0) {
                        uVar24 = 0;
                        do {
                          if (puVar7 == *(undefined8 **)
                                         (*(longlong *)(local_100 + 0x38) + uVar24 * 8))
                          goto LAB_1495beefa;
                          uVar24 = uVar24 + 1;
                        } while (*(ushort *)(local_100 + 0x2c) != uVar24);
                      }
                    }
                    else {
LAB_1495beefa:
                      if ((((*(ushort *)((longlong)puVar7 + 0x14) & 0x82) == 0) ||
                          (*(short *)(pcVar12 + 0x30) < 0)) ||
                         (iVar6 = FUN_1495bb567(*local_d0,*(undefined8 *)(puVar14 + uVar25 * 0x10),
                                                *puVar7), lVar19 = local_100, uVar20 = local_104,
                         iVar11 = local_108, iVar6 != 0)) {
                        uVar16 = uVar16 | 1L << ((byte)uVar25 & 0x3f);
                        lVar19 = local_100;
                        uVar20 = local_104;
                        iVar11 = local_108;
                      }
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar9);
            uVar22 = *(uint *)(lVar19 + 0x28);
            local_b0 = uVar15;
            if ((uVar22 >> 0xc & 1) == 0) {
              if ((uVar22 >> 8 & 1) == 0) {
                lVar23 = *(longlong *)(lVar19 + 0x20);
                if ((lVar23 == 0) || ((*(byte *)(lVar23 + 100) & 4) != 0)) goto LAB_1495bf006;
                uVar5 = *(ushort *)(lVar23 + 0x60);
                uVar25 = (ulonglong)
                         CONCAT31((int3)(uVar22 >> 8),
                                  -1 < (short)uVar22 && *(char *)(lVar23 + 0x62) != '\0');
                if (uVar5 != 0) {
                  local_b8 = (ulonglong)*(ushort *)(lVar23 + 0x5e);
                  goto LAB_1495bea9e;
                }
                local_f4 = 0;
              }
              else {
                uVar5 = 1;
                uVar25 = CONCAT71((int7)(uVar15 >> 8),1);
                lVar23 = 0;
                local_b8 = 0;
LAB_1495bea9e:
                local_90 = (ulonglong)uVar5;
                uVar15 = 0;
                local_e0 = 0;
                local_c0 = 0;
                local_f4 = 0;
                local_d8 = lVar23;
                do {
                  uVar5 = *(ushort *)(lVar19 + 0x18);
                  bVar27 = true;
                  bVar4 = true;
                  if (uVar15 < uVar5) {
                    bVar27 = true;
                    bVar4 = true;
                    if (uVar15 < *(ushort *)(local_100 + 0x2e)) goto LAB_1495beaf1;
                    plVar3 = *(longlong **)(*(longlong *)(local_100 + 0x38) + uVar15 * 8);
                    uVar2 = *(ushort *)((longlong)plVar3 + 0x14);
                    if ((local_ec & uVar2) == 0) {
                      if ((uVar2 & 1) == 0) {
LAB_1495bedbb:
                        bVar4 = true;
                      }
                      else {
                        uVar24 = uVar15;
                        do {
                          bVar27 = uVar5 - 1 == uVar24;
                          if (bVar27) goto LAB_1495bedbb;
                          lVar19 = uVar24 * 8;
                          uVar24 = uVar24 + 1;
                          bVar4 = false;
                          uVar20 = local_104;
                        } while (**(longlong **)(*(longlong *)(local_100 + 0x38) + 8 + lVar19) !=
                                 *plVar3);
                      }
                      goto LAB_1495beaf1;
                    }
                    uVar25 = uVar25 & 0xff;
                    if ((uVar2 & 0x180) != 0) {
                      uVar25 = 0;
                    }
                  }
                  else {
LAB_1495beaf1:
                    local_f8 = (uint)uVar25;
                    if (lVar23 == 0) {
                      uVar22 = 0xffffffff;
                      local_f0 = 0;
                    }
                    else {
                      sVar18 = *(short *)(*(longlong *)(lVar23 + 8) + uVar15 * 2);
                      local_f0 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar23 + 0x38) >> 8)
                                                ,*(undefined1 *)
                                                  (*(longlong *)(lVar23 + 0x38) + uVar15)) &
                                 0xffffff01;
                      if (sVar18 == *(short *)(*(longlong *)(lVar23 + 0x18) + 0x44)) {
                        sVar18 = -1;
                      }
                      uVar22 = (uint)sVar18;
                      if (((uVar5 <= uVar15) && ((char)uVar25 != '\0')) && (-1 < sVar18)) {
                        lVar19 = *(longlong *)(*(longlong *)(lVar23 + 0x18) + 8);
                        local_f8 = (uint)CONCAT71((int7)((ulonglong)lVar19 >> 8),
                                                  *(char *)(lVar19 + 0x18 + (ulonglong)uVar22 * 0x20
                                                           ) != '\0');
                      }
                    }
                    lVar19 = local_100;
                    if (!bVar27) {
LAB_1495bedc3:
                      uVar22 = local_f8 & 0xff;
                      if (uVar15 < (local_b8 & 0xffff)) {
                        uVar22 = 0;
                      }
                      uVar25 = (ulonglong)uVar22;
                      if (uVar15 == 0) {
                        uVar25 = 0;
                      }
                      break;
                    }
                    uVar25 = 0;
                    iVar11 = local_108;
LAB_1495bebb1:
                    if ((uVar16 >> (uVar25 & 0x3f) & 1) != 0) {
LAB_1495bebb7:
                      if (!bVar4) goto LAB_1495bedc3;
                      uVar25 = uVar25 + 1;
                      bVar4 = true;
                      if (uVar9 <= uVar25) goto LAB_1495bedc3;
                      goto LAB_1495bebb1;
                    }
                    pcVar12 = *(char **)(puVar14 + uVar25 * 0x10);
                    for (pcVar10 = pcVar12; pcVar10 != (char *)0x0; pcVar10 = *(char **)pcVar10) {
                      if ((*(uint *)(pcVar10 + 4) & 0x41000) == 0) goto LAB_1495bec0b;
                      if ((*(uint *)(pcVar10 + 4) >> 0x12 & 1) == 0) {
                        pcVar10 = pcVar10 + 0x10;
                      }
                      else {
                        pcVar10 = (char *)(*(longlong *)(pcVar10 + 0x20) + 8);
                      }
                    }
                    pcVar10 = (char *)0x0;
LAB_1495bec0b:
                    if ((uVar20 & 0xc0) == 0) {
                      bVar4 = false;
                    }
                    if ((int)uVar22 < -1) {
                      iVar6 = FUN_1495bb501(pcVar10,*(undefined8 *)
                                                     (*(longlong *)(local_d8 + 0x50) + 8 +
                                                     uVar15 * 0x20));
                      lVar19 = local_100;
                      uVar20 = local_104;
                      iVar11 = local_108;
                      if (iVar6 == 0) goto LAB_1495bec3f;
                      goto LAB_1495bebb7;
                    }
                    if (((*pcVar10 != -0x5c) || (*(int *)(pcVar10 + 0x2c) != iVar11)) ||
                       (uVar22 != (int)*(short *)(pcVar10 + 0x30))) goto LAB_1495bebb7;
                    if (uVar22 != 0xffffffff) {
LAB_1495bec3f:
                      plVar3 = (longlong *)*local_d0;
                      plVar8 = (longlong *)FUN_1495862ab(plVar3);
                      if (plVar8 == (longlong *)0x0) {
                        plVar8 = *(longlong **)(*plVar3 + 0x10);
                      }
                      pcVar12 = (char *)0x0;
                      do {
                        bVar17 = pcVar12[*plVar8];
                        uVar20 = local_104;
                        if (bVar17 == pcVar12[*(longlong *)
                                               (*(longlong *)(local_d8 + 0x40) + uVar15 * 8)]) {
                          if ((ulonglong)bVar17 == 0) break;
                        }
                        else {
                          lVar19 = local_100;
                          iVar11 = local_108;
                          if ((&DAT_14bd3ff30)[bVar17] !=
                              (&DAT_14bd3ff30)
                              [(byte)pcVar12[*(longlong *)
                                              (*(longlong *)(local_d8 + 0x40) + uVar15 * 8)]])
                          goto LAB_1495bebb7;
                        }
                        pcVar12 = pcVar12 + 1;
                      } while( true );
                    }
                    if ((char)uVar20 < '\0') {
                      *(short *)(local_100 + 0x1e) = (short)uVar15 + 1;
                    }
                    lVar19 = local_100;
                    if ((uVar20 & 0x40) == 0) {
                      bVar17 = (byte)local_f0;
                      if ((char)local_e0 == '\0') {
                        uVar24 = CONCAT71((int7)((uVar25 & 0xffffffff) * 0x20 >> 8),
                                          (byte)param_2[(uVar25 & 0xffffffff) * 0x10 + 0xc]) &
                                 0xffffff01;
                        uVar13 = (undefined7)(uVar24 >> 8);
                        local_c0 = CONCAT71(uVar13,(byte)uVar24 ^ bVar17);
                        local_e0 = CONCAT71(uVar13,1);
                        if (bVar17 != ((byte)param_2[(uVar25 & 0xffffffff) * 0x10 + 0xc] & 1)) {
                          *param_7 = *param_7 | 1L << ((byte)local_b0 & 0x3f);
                        }
                      }
                      else {
                        local_e0 = CONCAT71((int7)((ulonglong)pcVar12 >> 8),1);
                        if ((bVar17 ^ (byte)local_c0) !=
                            ((byte)param_2[(uVar25 & 0xffffffff) * 0x10 + 0xc] & 1))
                        goto LAB_1495bedc3;
                      }
                    }
                    if ((param_2[(uVar25 & 0xffffffff) * 0x10 + 0xc] & 2) != 0) {
                      if (uVar15 != *(ushort *)(local_100 + 0x18)) goto LAB_1495bedc3;
                      *(byte *)(local_100 + 0x2a) = *(byte *)(local_100 + 0x2a) | 8;
                    }
                    local_f4 = local_f4 & 0xff;
                    if (uVar22 == 0xffffffff) {
                      local_f4 = 1;
                    }
                    uVar16 = uVar16 | 1L << (uVar25 & 0x3f);
                    uVar25 = (ulonglong)local_f8;
                    lVar23 = local_d8;
                  }
                  uVar15 = uVar15 + 1;
                  lVar19 = local_100;
                } while (uVar15 != local_90);
              }
              if ((char)local_f4 == '\0' && (char)uVar25 == '\0') {
                if (uVar16 == local_e8) goto LAB_1495befc1;
                goto LAB_1495befe6;
              }
            }
            local_a8 = local_a8 | *(ulonglong *)(lVar19 + 8);
            uVar24 = ~local_a8;
            uVar26 = 0;
            puVar21 = puVar14;
            do {
              uVar25 = 1L << ((byte)uVar26 & 0x3f);
              if ((uVar16 >> (uVar26 & 0x3f) & 1) == 0) {
                lVar23 = *(longlong *)puVar21;
                if (lVar23 == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = FUN_1495bb052(local_98,lVar23);
                  lVar19 = local_100;
                  uVar20 = local_104;
                  if (uVar15 == 0) {
                    local_54 = 1;
                    local_70 = FUN_14959f99d;
                    local_68 = &LAB_14959fa8c;
                    local_50 = 0;
                    FUN_14959fa98(local_78,lVar23);
                    lVar19 = local_100;
                    uVar20 = local_104;
                    if (local_54 == 0) goto LAB_1495bee1f;
                    uVar15 = 0;
                  }
                }
                if ((uVar15 & uVar24) != 0) {
                  uVar25 = 0;
                }
                uVar16 = uVar16 | uVar25;
              }
LAB_1495bee1f:
              uVar26 = uVar26 + 1;
              puVar21 = puVar21 + 0x10;
              uVar25 = local_88;
              uVar15 = local_b0;
              param_1 = local_d0;
            } while (uVar9 != uVar26);
          }
          if ((uVar25 <= uVar15) || (uVar15 = uVar15 + 1, local_e8 <= uVar16)) goto LAB_1495befb8;
        } while( true );
      }
      uVar16 = 0;
LAB_1495befb8:
      uVar25 = 0xff;
      if (uVar16 == local_e8) {
LAB_1495befc1:
        uVar25 = (ulonglong)(uint)uVar1;
      }
    }
  }
  else {
LAB_1495bf006:
    uVar25 = 0;
  }
LAB_1495bf008:
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar25;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (uVar9 = uVar9 - 1, uVar25 = uVar9,
        (-1L << ((byte)uVar9 & 0x3f) | uVar16) != 0xffffffffffffffff) {
LAB_1495befe6:
    if ((longlong)uVar9 < 2) goto LAB_1495bf006;
  }
  goto LAB_1495bf008;
}



// FUNCTION 1495bf082 FUN_1495bf082 body=184 status=ok
// SIG undefined FUN_1495bf082(void)

void FUN_1495bf082(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int iVar2;
  char *pcVar3;
  
  plVar1 = (longlong *)param_1[2];
  iVar2 = param_2;
  if (param_2 < 0) {
    iVar2 = (int)plVar1[0x12] + -1;
  }
  if (*(char *)(*plVar1 + 0x61) == '\0') {
    pcVar3 = (char *)((longlong)iVar2 * 0x18 + plVar1[0x11]);
  }
  else {
    pcVar3 = &DAT_14cc1ee40;
  }
  iVar2 = (int)plVar1[0x12] - param_2;
  if ((iVar2 != 0 && param_2 <= (int)plVar1[0x12]) && *(char *)(*param_1 + 0x61) == '\0') {
    do {
      if (*(int *)(pcVar3 + 4) == param_3) {
        if (*pcVar3 == '\x7f') {
          if (param_5 == 0) {
            *pcVar3 = 'H';
            pcVar3[4] = '\0';
            pcVar3[5] = '\0';
            pcVar3[6] = '\0';
            pcVar3[7] = '\0';
            pcVar3[0xc] = '\0';
            pcVar3[0xd] = '\0';
            pcVar3[0xe] = '\0';
            pcVar3[0xf] = '\0';
          }
          else {
            *pcVar3 = 'w';
            *(int *)(pcVar3 + 4) = param_5;
          }
        }
        else if (*pcVar3 == 'Y') {
          *pcVar3 = 'M';
          *(int *)(pcVar3 + 4) = *(int *)(pcVar3 + 8) + param_4;
          *(undefined4 *)(pcVar3 + 8) = *(undefined4 *)(pcVar3 + 0xc);
          pcVar3[0xc] = '\0';
          pcVar3[0xd] = '\0';
          pcVar3[0xe] = '\0';
          pcVar3[0xf] = '\0';
        }
      }
      pcVar3 = pcVar3 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



// FUNCTION 1495bf13a FUN_1495bf13a body=736 status=ok
// SIG undefined FUN_1495bf13a(void)

void FUN_1495bf13a(longlong param_1,longlong param_2,uint param_3,uint param_4,int param_5,
                  undefined1 *param_6)

{
  short sVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (param_5 != 0) {
    uVar7 = *(uint *)(param_1 + 0x18);
    if (uVar7 + 5 < *(uint *)(param_1 + 0x10)) {
      *(uint *)(param_1 + 0x18) = uVar7 + 5;
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 4 + (ulonglong)uVar7) = 0x20;
      *(undefined4 *)(lVar2 + (ulonglong)uVar7) = 0x444e4120;
    }
    else {
      FUN_1495557b3(param_1," AND ",5);
    }
  }
  if ((int)param_3 < 2) {
    if (param_3 == 1) goto LAB_1495bf1ad;
    bVar3 = false;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x18);
    uVar4 = uVar7 + 1;
    if (uVar4 < *(uint *)(param_1 + 0x10)) {
      *(uint *)(param_1 + 0x18) = uVar4;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7) = 0x28;
    }
    else {
      FUN_1495557b3(param_1,&DAT_149eb775e,1);
    }
LAB_1495bf1ad:
    uVar8 = 0;
    do {
      if (uVar8 != 0) {
        uVar7 = *(uint *)(param_1 + 0x18);
        uVar4 = uVar7 + 1;
        if (uVar4 < *(uint *)(param_1 + 0x10)) {
          *(uint *)(param_1 + 0x18) = uVar4;
          *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7) = 0x2c;
        }
        else {
          FUN_1495557b3(param_1,&DAT_149eb5f2c,1);
        }
      }
      sVar1 = *(short *)(*(longlong *)(param_2 + 8) + (ulonglong)param_4 * 2 + uVar8 * 2);
      pcVar6 = "<expr>";
      if (sVar1 != -2) {
        if (sVar1 == -1) {
          pcVar6 = "rowid";
        }
        else {
          pcVar6 = *(char **)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 8) +
                             (longlong)sVar1 * 0x20);
        }
      }
      FUN_1495555b8(param_1,pcVar6);
      uVar8 = uVar8 + 1;
    } while (param_3 != uVar8);
    bVar3 = true;
    if (1 < (int)param_3) {
      uVar7 = *(uint *)(param_1 + 0x18);
      uVar4 = uVar7 + 1;
      if (uVar4 < *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 0x18) = uVar4;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7) = 0x29;
      }
      else {
        FUN_1495557b3(param_1,&DAT_149dfbe79,1);
      }
      uVar7 = *(uint *)(param_1 + 0x18);
      uVar4 = uVar7 + 1;
      if (uVar4 < *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 0x18) = uVar4;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7) = *param_6;
      }
      else {
        FUN_1495557b3(param_1,param_6,1);
      }
      uVar7 = *(uint *)(param_1 + 0x18);
      uVar4 = uVar7 + 1;
      if (uVar4 < *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 0x18) = uVar4;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7) = 0x28;
      }
      else {
        FUN_1495557b3(param_1,&DAT_149eb775e,1);
      }
      goto LAB_1495bf299;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar4 = uVar7 + 1;
  if (uVar4 < *(uint *)(param_1 + 0x10)) {
    *(uint *)(param_1 + 0x18) = uVar4;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7) = *param_6;
  }
  else {
    FUN_1495557b3(param_1,param_6,1);
  }
  if (!bVar3) {
    return;
  }
LAB_1495bf299:
  uVar7 = 0;
  do {
    if (uVar7 != 0) {
      uVar4 = *(uint *)(param_1 + 0x18);
      uVar5 = uVar4 + 1;
      if (uVar5 < *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 0x18) = uVar5;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar4) = 0x2c;
      }
      else {
        FUN_1495557b3(param_1,&DAT_149eb5f2c,1);
      }
    }
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar5 = uVar4 + 1;
    if (uVar5 < *(uint *)(param_1 + 0x10)) {
      *(uint *)(param_1 + 0x18) = uVar5;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar4) = 0x3f;
    }
    else {
      FUN_1495557b3(param_1,&DAT_149eb5f2e,1);
    }
    uVar7 = uVar7 + 1;
  } while (param_3 != uVar7);
  if (1 < (int)param_3) {
    uVar7 = *(uint *)(param_1 + 0x18);
    uVar4 = uVar7 + 1;
    if (*(uint *)(param_1 + 0x10) <= uVar4) {
      FUN_1495557b3(param_1,&DAT_149dfbe79,1);
      return;
    }
    *(uint *)(param_1 + 0x18) = uVar4;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7) = 0x29;
  }
  return;
}



// FUNCTION 1495bf41a FUN_1495bf41a body=2212 status=ok
// SIG undefined FUN_1495bf41a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1495bf41a(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,uint param_5,
                 int param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong *plVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  char *pcVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_138 [32];
  undefined8 local_118;
  uint *local_110;
  int *local_100;
  uint local_f4;
  longlong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  uint local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  pcVar25 = (char *)*param_2;
  cVar1 = *pcVar25;
  if (cVar1 == '5') {
LAB_1495bf495:
    param_6 = FUN_14959b4fb(param_1,*(undefined8 *)(pcVar25 + 0x18),param_6);
    goto LAB_1495bf4a6;
  }
  lVar22 = param_1[2];
  if (cVar1 == '2') {
    local_118 = (int *)((ulonglong)local_118 & 0xffffffff00000000);
    FUN_149584f48(lVar22,0x48,0,param_6);
    goto LAB_1495bf4a6;
  }
  if (cVar1 == '-') goto LAB_1495bf495;
  lVar2 = *(longlong *)(param_3 + 0x50);
  if ((((*(byte *)(lVar2 + 0x29) & 4) == 0) && (*(longlong *)(lVar2 + 0x20) != 0)) &&
     (*(char *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x38) + (longlong)(int)param_4) != '\0')
     ) {
    param_5 = (uint)(param_5 == 0);
  }
  if (0 < (int)param_4) {
    uVar18 = 0;
    do {
      puVar3 = *(undefined8 **)(*(longlong *)(lVar2 + 0x38) + uVar18 * 8);
      if ((puVar3 != (undefined8 *)0x0) && ((char *)*puVar3 == pcVar25)) goto LAB_1495bf4a6;
      uVar18 = uVar18 + 1;
    } while (param_4 != uVar18);
  }
  uVar20 = 0;
  if ((int)param_4 < (int)(uint)*(ushort *)(lVar2 + 0x2c)) {
    uVar18 = (ulonglong)(int)param_4;
    uVar20 = 0;
    do {
      uVar20 = uVar20 + ((char *)**(undefined8 **)(*(longlong *)(lVar2 + 0x38) + uVar18 * 8) ==
                        pcVar25);
      uVar18 = uVar18 + 1;
    } while (*(ushort *)(lVar2 + 0x2c) != uVar18);
  }
  local_94 = 0;
  local_d8 = CONCAT44(local_d8._4_4_,param_5);
  local_f4 = param_4;
  local_c8 = param_2;
  local_c0 = param_1;
  local_b8 = lVar22;
  if (((pcVar25[5] & 8U) == 0) || (**(int **)(*(longlong *)(pcVar25 + 0x20) + 0x20) == 1)) {
    local_110 = &local_94;
    local_118 = (int *)0x0;
    local_100 = (int *)0x0;
    iVar12 = FUN_1495a0aff(param_1,pcVar25,4,0);
    uVar18 = (ulonglong)local_94;
  }
  else {
    lVar22 = *param_1;
    if (pcVar25 == (char *)0x0) {
      local_e8 = 0;
    }
    else {
      local_e8 = FUN_1495a1c89(lVar22,pcVar25,0,0);
    }
    plVar11 = local_c0;
    uVar18 = 0;
    iVar12 = 5;
    if (*(char *)(lVar22 + 0x61) == '\0') {
      local_b0 = *(longlong *)(*(longlong *)(local_e8 + 0x20) + 0x20);
      local_a0 = *(longlong *)(*(longlong *)(local_e8 + 0x10) + 0x20);
      uVar18 = (ulonglong)*(ushort *)(lVar2 + 0x2c);
      local_f0 = lVar22;
      local_a8 = param_3;
      if ((int)local_f4 < (int)(uint)*(ushort *)(lVar2 + 0x2c)) {
        lVar22 = local_b0 + 8;
        local_d0 = local_a0 + 8;
        lVar26 = (longlong)(int)local_f4;
        local_e0 = 0;
        piVar17 = (int *)0x0;
        do {
          puVar3 = *(undefined8 **)(*(longlong *)(lVar2 + 0x38) + lVar26 * 8);
          if (((char *)*puVar3 == pcVar25) &&
             (lVar15 = ((longlong)*(int *)(puVar3 + 4) + -1) * 0x20,
             *(longlong *)(lVar22 + lVar15) != 0)) {
            local_100 = piVar17;
            local_e0 = FUN_14958f62a(local_c0,local_e0);
            uVar18 = local_d0;
            *(undefined8 *)(lVar22 + lVar15) = 0;
            piVar17 = (int *)FUN_14958f62a(plVar11,local_100);
            *(undefined8 *)(uVar18 + lVar15) = 0;
            uVar18 = (ulonglong)*(ushort *)(lVar2 + 0x2c);
            param_1 = plVar11;
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 < (longlong)uVar18);
      }
      else {
        piVar17 = (int *)0x0;
        local_e0 = 0;
      }
      if (local_b0 != 0) {
        FUN_149582d29(local_f0);
      }
      param_2 = local_c8;
      uVar23 = local_e8;
      iVar12 = 5;
      if (local_a0 != 0) {
        FUN_149582d29(local_f0);
      }
      *(int **)(*(longlong *)(uVar23 + 0x10) + 0x20) = piVar17;
      *(undefined8 *)(*(longlong *)(uVar23 + 0x20) + 0x20) = local_e0;
      if ((piVar17 != (int *)0x0) && (*piVar17 == 1)) {
        uVar19 = *(undefined8 *)(piVar17 + 2);
        piVar17[2] = 0;
        piVar17[3] = 0;
        if (*(longlong *)(uVar23 + 0x10) != 0) {
          FUN_14958288e(local_f0);
        }
        *(undefined8 *)(uVar23 + 0x10) = uVar19;
        param_2 = local_c8;
      }
      param_3 = local_a8;
      auVar10 = _DAT_149931e80;
      piVar17 = *(int **)(*(longlong *)(uVar23 + 0x20) + 0x48);
      if (piVar17 != (int *)0x0) {
        iVar13 = *piVar17;
        if (0 < (longlong)iVar13) {
          lVar22 = (longlong)iVar13 + -1;
          auVar27._8_4_ = (int)lVar22;
          auVar27._0_8_ = lVar22;
          auVar27._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
          auVar28 = pmovsxbq(in_XMM1,0x706);
          auVar29 = pmovsxbq(in_XMM2,0x504);
          auVar30 = pmovsxbq(in_XMM3,0x302);
          auVar31 = pmovsxbq(in_XMM4,0x100);
          lVar22 = 0;
          auVar27 = auVar27 ^ _DAT_149931e80;
          auVar32 = pmovsxbq(unaff_XMM7,0x808);
          do {
            lVar26 = auVar27._0_8_;
            auVar33._0_8_ = -(ulonglong)(lVar26 < SUB168(auVar31 ^ auVar10,0));
            lVar15 = auVar27._8_8_;
            auVar33._8_8_ = -(ulonglong)(lVar15 < SUB168(auVar31 ^ auVar10,8));
            auVar37 = pshuflw(unaff_XMM9,auVar33,0xe8);
            auVar38._8_4_ = 0xffffffff;
            auVar38._0_8_ = 0xffffffffffffffff;
            auVar38._12_4_ = 0xffffffff;
            auVar38 = packssdw(auVar37 ^ auVar38,auVar37 ^ auVar38);
            if ((auVar38._0_4_ & 1) != 0) {
              *(undefined2 *)((longlong)piVar17 + lVar22 + 0x20) = 0;
            }
            auVar33 = packssdw(auVar33,auVar33);
            auVar37._8_4_ = 0xffffffff;
            auVar37._0_8_ = 0xffffffffffffffff;
            auVar37._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar37,auVar33 ^ auVar37);
            if ((auVar33[2] & 1) != 0) {
              *(undefined2 *)((longlong)piVar17 + lVar22 + 0x40) = 0;
            }
            auVar34._0_8_ = -(ulonglong)(lVar26 < SUB168(auVar30 ^ auVar10,0));
            auVar34._8_8_ = -(ulonglong)(lVar15 < SUB168(auVar30 ^ auVar10,8));
            auVar38 = packssdw(auVar38,auVar34);
            auVar4._8_4_ = 0xffffffff;
            auVar4._0_8_ = 0xffffffffffffffff;
            auVar4._12_4_ = 0xffffffff;
            auVar38 = packssdw(auVar38 ^ auVar4,auVar38 ^ auVar4);
            if ((auVar38[4] & 1) != 0) {
              *(undefined2 *)((longlong)piVar17 + lVar22 + 0x60) = 0;
            }
            auVar33 = pshufhw(auVar34,auVar34,0x84);
            auVar5._8_4_ = 0xffffffff;
            auVar5._0_8_ = 0xffffffffffffffff;
            auVar5._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar5,auVar33 ^ auVar5);
            if ((auVar33[6] & 1) != 0) {
              *(undefined2 *)((longlong)piVar17 + lVar22 + 0x80) = 0;
            }
            auVar35._0_8_ = -(ulonglong)(lVar26 < SUB168(auVar29 ^ auVar10,0));
            auVar35._8_8_ = -(ulonglong)(lVar15 < SUB168(auVar29 ^ auVar10,8));
            auVar38 = pshuflw(auVar38,auVar35,0xe8);
            auVar6._8_4_ = 0xffffffff;
            auVar6._0_8_ = 0xffffffffffffffff;
            auVar6._12_4_ = 0xffffffff;
            auVar38 = packssdw(auVar38 ^ auVar6,auVar38 ^ auVar6);
            if ((auVar38[8] & 1) != 0) {
              *(undefined2 *)((longlong)piVar17 + lVar22 + 0xa0) = 0;
            }
            auVar33 = packssdw(auVar35,auVar35);
            auVar7._8_4_ = 0xffffffff;
            auVar7._0_8_ = 0xffffffffffffffff;
            auVar7._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar7,auVar33 ^ auVar7);
            if ((auVar33[10] & 1) != 0) {
              *(undefined2 *)((longlong)piVar17 + lVar22 + 0xc0) = 0;
            }
            auVar36._0_8_ = -(ulonglong)(lVar26 < SUB168(auVar28 ^ auVar10,0));
            auVar36._8_8_ = -(ulonglong)(lVar15 < SUB168(auVar28 ^ auVar10,8));
            auVar38 = packssdw(auVar38,auVar36);
            auVar8._8_4_ = 0xffffffff;
            auVar8._0_8_ = 0xffffffffffffffff;
            auVar8._12_4_ = 0xffffffff;
            unaff_XMM9 = packssdw(auVar38 ^ auVar8,auVar38 ^ auVar8);
            if ((unaff_XMM9[0xc] & 1) != 0) {
              *(undefined2 *)((longlong)piVar17 + lVar22 + 0xe0) = 0;
            }
            auVar38 = pshufhw(auVar36,auVar36,0x84);
            auVar9._8_4_ = 0xffffffff;
            auVar9._0_8_ = 0xffffffffffffffff;
            auVar9._12_4_ = 0xffffffff;
            auVar38 = packssdw(auVar38 ^ auVar9,auVar38 ^ auVar9);
            if ((auVar38[0xe] & 1) != 0) {
              *(undefined2 *)((longlong)piVar17 + lVar22 + 0x100) = 0;
            }
            lVar26 = auVar31._8_8_;
            lVar15 = auVar32._0_8_;
            auVar31._0_8_ = auVar31._0_8_ + lVar15;
            lVar16 = auVar32._8_8_;
            auVar31._8_8_ = lVar26 + lVar16;
            lVar26 = auVar30._8_8_;
            auVar30._0_8_ = auVar30._0_8_ + lVar15;
            auVar30._8_8_ = lVar26 + lVar16;
            lVar26 = auVar29._8_8_;
            auVar29._0_8_ = auVar29._0_8_ + lVar15;
            auVar29._8_8_ = lVar26 + lVar16;
            lVar26 = auVar28._8_8_;
            auVar28._0_8_ = auVar28._0_8_ + lVar15;
            auVar28._8_8_ = lVar26 + lVar16;
            lVar22 = lVar22 + 0x100;
          } while ((ulonglong)(iVar13 + 7U >> 3) << 8 != lVar22);
        }
      }
      if (*(char *)(local_f0 + 0x61) == '\0') {
        if (*param_1 == 0) {
          local_100 = (int *)FUN_145e3bd67((ulonglong)uVar20 << 2);
        }
        else {
          local_100 = (int *)FUN_14955d750();
        }
        if (local_100 != (int *)0x0) {
          memset(local_100,0,(ulonglong)uVar20 << 2);
        }
        param_1 = local_c0;
        local_110 = &local_94;
        local_118 = local_100;
        iVar12 = FUN_1495a0aff(local_c0,uVar23,4,0);
        uVar18 = (ulonglong)local_94;
        *(uint *)(*local_c8 + 0x2c) = local_94;
        lVar22 = local_f0;
        param_2 = local_c8;
      }
      else {
        uVar18 = 0;
        local_100 = (int *)0x0;
        lVar22 = local_f0;
      }
    }
    else {
      local_100 = (int *)0x0;
      uVar23 = local_e8;
    }
    if (uVar23 != 0) {
      FUN_14958288e(lVar22,uVar23);
    }
    pcVar25 = (char *)*param_2;
  }
  uVar21 = (uint)((uint)local_d8 == 0);
  if (iVar12 != 4) {
    uVar21 = (uint)local_d8;
  }
  local_118 = (int *)((ulonglong)local_118 & 0xffffffff00000000);
  local_d8 = uVar18;
  FUN_149584f48(local_b8,(uVar21 == 0) * '\x04' + '!',uVar18,0);
  *(byte *)(lVar2 + 0x29) = *(byte *)(lVar2 + 0x29) | 8;
  iVar13 = *(int *)(param_3 + 0x40);
  if (iVar13 == 0) {
    iVar13 = *(int *)((longlong)param_1 + 0x44) + -1;
    *(int *)((longlong)param_1 + 0x44) = iVar13;
    *(int *)(param_3 + 0x10) = iVar13;
    iVar13 = *(int *)(param_3 + 0x40);
  }
  *(uint *)(param_3 + 0x40) = uVar20 + iVar13;
  lVar22 = *(longlong *)(param_3 + 0x48);
  lVar26 = *param_1;
  lVar15 = FUN_14955d6fd(lVar26,lVar22,(longlong)(int)(uVar20 + iVar13) * 0x14);
  if ((lVar22 == 0) || (lVar15 != 0)) {
    *(longlong *)(param_3 + 0x48) = lVar15;
    if (lVar15 == 0) goto LAB_1495bf6b9;
    local_e0 = CONCAT44(local_e0._4_4_,iVar12);
    uVar18 = (ulonglong)*(ushort *)(lVar2 + 0x2c);
    if ((int)local_f4 < (int)(uint)*(ushort *)(lVar2 + 0x2c)) {
      puVar24 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x14);
      local_f0 = CONCAT44(local_f0._4_4_,param_6 - local_f4);
      local_e8 = CONCAT71(local_e8._1_7_,uVar21 == 0) | 4;
      lVar22 = (longlong)(int)local_f4;
      lVar26 = 0;
      local_d0 = local_d0 & 0xffffffff00000000;
      uVar23 = local_d8;
      iVar12 = param_6;
      do {
        lVar15 = local_b8;
        if ((char *)**(undefined8 **)(*(longlong *)(lVar2 + 0x38) + lVar22 * 8) == pcVar25) {
          if ((int)local_e0 == 1) {
            local_118._0_4_ = 0;
            uVar19 = 0x7f;
            iVar13 = iVar12;
          }
          else {
            iVar13 = 0;
            if (local_100 != (int *)0x0) {
              lVar16 = (longlong)(int)local_d0;
              local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
              iVar13 = local_100[lVar16];
            }
            uVar19 = 0x59;
            local_118._0_4_ = iVar12;
          }
          uVar14 = FUN_149584f48(local_b8,uVar19,uVar23,iVar13);
          puVar24[1] = uVar14;
          local_118 = (int *)((ulonglong)local_118._4_4_ << 0x20);
          FUN_149584f48(lVar15,0x32,iVar12);
          if (lVar26 == 0) {
            *puVar24 = (int)local_d8;
            *(undefined1 *)(puVar24 + 4) = (undefined1)local_e8;
            if ((int)local_f4 < 1) {
              puVar24[3] = 0;
            }
            else {
              puVar24[2] = (undefined4)local_f0;
              puVar24[3] = local_f4;
              *(byte *)(lVar2 + 0x2a) = *(byte *)(lVar2 + 0x2a) | 4;
            }
          }
          else {
            *(undefined1 *)(puVar24 + 4) = 0xad;
          }
          puVar24 = puVar24 + 5;
          uVar18 = (ulonglong)*(ushort *)(lVar2 + 0x2c);
          uVar23 = local_d8;
        }
        lVar22 = lVar22 + 1;
        lVar26 = lVar26 + -1;
        iVar12 = iVar12 + 1;
      } while (lVar22 < (longlong)uVar18);
    }
  }
  else {
    FUN_14955d65a(lVar26,lVar22);
    *(undefined8 *)(param_3 + 0x48) = 0;
LAB_1495bf6b9:
    *(undefined4 *)(param_3 + 0x40) = 0;
  }
  param_2 = local_c8;
  if (local_100 != (int *)0x0) {
    FUN_14955d65a(*local_c0);
    param_2 = local_c8;
  }
LAB_1495bf4a6:
  FUN_1495bfd7a(param_3,param_2);
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 1495bfcbf FUN_1495bfcbf body=187 status=ok
// SIG undefined FUN_1495bfcbf(void)

void FUN_1495bfcbf(longlong param_1,char *param_2,int param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong lVar6;
  
  if (param_2 != (char *)0x0) {
    cVar3 = *param_2;
    if (cVar3 == -0x53) {
      cVar3 = param_2[2];
    }
    pcVar5 = param_2;
    if (cVar3 != -0x52) {
      if (cVar3 != -0x78) goto LAB_1495bfd3d;
      pcVar5 = *(char **)(param_2 + 0x20);
    }
    if (1 < **(int **)(pcVar5 + 0x20)) {
      if ((param_2[5] & 8U) == 0) {
        if (0 < (int)param_4) {
          lVar1 = *(longlong *)(param_2 + 0x20);
          lVar6 = 0;
          do {
            FUN_14959afe0(param_1,*(undefined8 *)(lVar1 + 8 + lVar6),param_3);
            lVar6 = lVar6 + 0x20;
            param_3 = param_3 + 1;
          } while ((ulonglong)param_4 << 5 != lVar6);
        }
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        uVar4 = FUN_14959dc3b(param_1);
        FUN_149584f48(uVar2,0x4d,uVar4,param_3,param_4 - 1);
      }
      return;
    }
  }
LAB_1495bfd3d:
  FUN_14959afe0(param_1,param_2,param_3);
  return;
}



// FUNCTION 1495bfd7a FUN_1495bfd7a body=124 status=ok
// SIG undefined FUN_1495bfd7a(void)

void FUN_1495bfd7a(int *param_1,longlong *param_2)

{
  char *pcVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ushort uVar6;
  bool bVar7;
  
  uVar2 = *(ushort *)((longlong)param_2 + 0x12);
  if ((uVar2 & 4) == 0) {
    iVar4 = 0;
    do {
      if ((*param_1 != 0) && ((*(byte *)(*param_2 + 4) & 1) == 0)) {
        return;
      }
      if ((*(ulonglong *)(param_1 + 0x16) & param_2[7]) != 0) {
        return;
      }
      bVar7 = iVar4 == 0;
      iVar4 = iVar4 + -1;
      uVar6 = 0x200;
      if (bVar7) {
        uVar6 = 4;
      }
      if ((uVar2 >> 10 & 1) == 0) {
        uVar6 = 4;
      }
      *(ushort *)((longlong)param_2 + 0x12) = uVar6 | uVar2;
      if ((longlong)(int)param_2[3] < 0) {
        return;
      }
      lVar3 = *(longlong *)(param_2[1] + 0x20);
      lVar5 = (longlong)(int)param_2[3] * 0x40;
      pcVar1 = (char *)(lVar3 + 0x16 + lVar5);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 != '\0') {
        return;
      }
      param_2 = (longlong *)(lVar3 + lVar5);
      uVar2 = *(ushort *)((longlong)param_2 + 0x12);
    } while ((uVar2 & 4) == 0);
  }
  return;
}



// FUNCTION 1495bfdf6 FUN_1495bfdf6 body=142 status=ok
// SIG undefined FUN_1495bfdf6(void)

void FUN_1495bfdf6(undefined8 param_1,uint param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (0 < (int)param_2) {
    uVar5 = 0;
    do {
      uVar4 = FUN_14959f8a5(param_1,uVar5 & 0xffffffff);
      bVar1 = *(byte *)(param_3 + uVar5);
      bVar2 = FUN_14959f8fa(uVar4);
      if ((char)bVar1 < 'A' || (char)bVar2 < 'A') {
        if ((char)bVar2 < 'A') {
          bVar2 = bVar1;
        }
        if ((bVar2 & 0xbf) != 1) goto LAB_1495bfe66;
LAB_1495bfe58:
        *(undefined1 *)(param_3 + uVar5) = 0x41;
      }
      else {
        if ((bVar1 < 0x43) && (bVar2 < 0x43)) goto LAB_1495bfe58;
LAB_1495bfe66:
        iVar3 = FUN_1495c0364(uVar4,*(undefined1 *)(param_3 + uVar5));
        if (iVar3 != 0) goto LAB_1495bfe58;
      }
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  return;
}



// FUNCTION 1495bfe84 FUN_1495bfe84 body=163 status=ok
// SIG undefined FUN_1495bfe84(void)

void FUN_1495bfe84(longlong param_1,int param_2,uint param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar8;
  
  if (param_4 == (char *)0x0) {
    return;
  }
  if (0 < (int)param_3) {
    iVar1 = param_3 + param_2;
    pcVar8 = param_4 + param_3;
    do {
      if ('A' < *param_4) goto LAB_1495bfec4;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar3 = 1 < (int)param_3;
      param_3 = param_3 - 1;
    } while (bVar3);
    param_3 = 0;
    param_4 = pcVar8;
    param_2 = iVar1;
  }
LAB_1495bfec4:
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = (ulonglong)param_3;
  uVar7 = 1;
  if ((int)param_3 < 1) {
    uVar7 = param_3;
  }
  param_3 = param_3 + 1;
  do {
    if ((int)uVar6 < 2) {
      param_3 = uVar7;
      if (uVar6 != 1) {
        return;
      }
      break;
    }
    param_3 = param_3 - 1;
    lVar4 = uVar6 - 1;
    uVar6 = uVar6 - 1;
  } while (param_4[lVar4] < 'B');
  uVar5 = FUN_149584f48(uVar2,0x5a,param_2,param_3,0);
  FUN_14955a5b6(uVar2,uVar5,param_4,param_3);
  return;
}



// FUNCTION 1495bff27 FUN_1495bff27 body=276 status=ok
// SIG undefined FUN_1495bff27(void)

void FUN_1495bff27(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  size_t _Size;
  short sVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  longlong *plVar6;
  int *_Dst;
  ushort uVar7;
  longlong lVar8;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = plVar2[2];
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) | 1;
  FUN_149584f48(lVar3,0x85,param_4,0,param_3);
  if ((*(byte *)((longlong)param_1 + 0x3c) & 0x20) != 0) {
    plVar6 = (longlong *)plVar2[0x14];
    if ((longlong *)plVar2[0x14] == (longlong *)0x0) {
      plVar6 = plVar2;
    }
    if ((int)plVar6[0xe] == 0) {
      lVar4 = *(longlong *)(param_2 + 0x18);
      _Size = (longlong)*(short *)(lVar4 + 0x46) * 4 + 4;
      if (*plVar2 == 0) {
        _Dst = (int *)FUN_145e3bd67(_Size);
      }
      else {
        _Dst = (int *)FUN_14955d750();
      }
      if (_Dst != (int *)0x0) {
        memset(_Dst,0,_Size);
        *_Dst = (int)*(short *)(lVar4 + 0x46);
        uVar7 = *(ushort *)(param_2 + 0x60);
        if (1 < uVar7) {
          lVar8 = 0;
          do {
            sVar1 = *(short *)(*(longlong *)(param_2 + 8) + lVar8 * 2);
            sVar5 = FUN_14959cc88(lVar4,sVar1);
            if (-1 < sVar1) {
              _Dst[(longlong)sVar5 + 1] = (int)lVar8 + 1;
              uVar7 = *(ushort *)(param_2 + 0x60);
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < (longlong)((ulonglong)uVar7 - 1));
        }
        FUN_14955a5b6(lVar3,0xffffffff,_Dst,0xfffffff1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1495c003b FUN_1495c003b body=684 status=ok
// SIG undefined FUN_1495c003b(void)

void FUN_1495c003b(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  code *local_70;
  undefined1 *local_68;
  short local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)(param_1 + 0x50);
  if ((lVar3 != 0) || ((*(byte *)(param_1 + 0x65) & 4) != 0)) {
    local_d8 = *(longlong *)(param_1 + 0x18);
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    pcStack_a0 = (code *)0x0;
    local_88 = 0;
    local_80 = &local_d0;
    local_b0 = *(undefined8 *)*param_4;
    local_c8 = param_2;
    local_c4 = param_3;
    local_b8 = param_4;
    if (*(short *)(param_1 + 0x60) != 0) {
      uVar11 = 0;
      do {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 8) + uVar11 * 2);
        if ((short)uVar2 == -2) {
          local_d0 = *(longlong *)(lVar3 + 8 + uVar11 * 0x20);
          local_54 = 1;
          local_70 = FUN_14959f99d;
          local_68 = &LAB_14959fa8c;
          local_50 = 0;
          if (local_d0 != 0) {
            FUN_14959fa98(local_78);
            pcVar7 = FUN_1495c0415;
            if (local_54 == 0) {
LAB_1495c0195:
              local_c0 = (undefined4)uVar11;
              pcStack_a0 = pcVar7;
              if (param_4[4] != 0) {
                FUN_14959fa98(&local_a8);
              }
              piVar5 = (int *)param_4[2];
              if ((piVar5 != (int *)0x0) && (iVar10 = *piVar5, 0 < iVar10)) {
                plVar9 = (longlong *)(piVar5 + 2);
                for (; ((*plVar9 == 0 || (iVar6 = FUN_14959fa98(&local_a8), iVar6 == 0)) &&
                       (1 < iVar10)); iVar10 = iVar10 + -1) {
                  plVar9 = plVar9 + 4;
                }
              }
              piVar5 = (int *)param_4[3];
              if ((piVar5 != (int *)0x0) && (iVar10 = *piVar5, 0 < iVar10)) {
                plVar9 = (longlong *)(piVar5 + 2);
                for (; ((*plVar9 == 0 || (iVar6 = FUN_14959fa98(&local_a8), iVar6 == 0)) &&
                       (1 < iVar10)); iVar10 = iVar10 + -1) {
                  plVar9 = plVar9 + 4;
                }
              }
            }
          }
        }
        else if (-1 < (short)uVar2) {
          if ((*(byte *)(*(longlong *)(local_d8 + 8) + 0x1c + (ulonglong)uVar2 * 0x20) & 0x20) != 0)
          {
            lVar4 = *(longlong *)(*(longlong *)(local_d8 + 8) + (ulonglong)uVar2 * 0x20 + 0x10);
            if (lVar4 != 0) {
              lVar8 = 0;
              do {
                bVar1 = *(byte *)(lVar4 + lVar8);
                if (bVar1 == "BINARY"[lVar8]) {
                  if ((ulonglong)bVar1 == 0) break;
                }
                else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)"BINARY"[lVar8]])
                goto LAB_1495c012b;
                lVar8 = lVar8 + 1;
              } while( true );
            }
            pcVar7 = FUN_1495c047e;
            local_bc = (int)(short)uVar2;
            goto LAB_1495c0195;
          }
        }
LAB_1495c012b:
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(param_1 + 0x60));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495c02e8 FUN_1495c02e8 body=124 status=ok
// SIG undefined FUN_1495c02e8(void)

void FUN_1495c02e8(char *param_1,undefined4 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  cVar1 = *param_1;
  while (cVar1 == ',') {
    FUN_1495c02e8(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    param_1 = *(char **)(param_1 + 0x18);
    cVar1 = *param_1;
  }
  if (0 < *(int *)(param_3 + 0x14)) {
    pbVar3 = (byte *)(*(longlong *)(param_3 + 0x20) + 0x12);
    iVar4 = 0;
    do {
      if (((*pbVar3 & 4) == 0) &&
         (iVar2 = FUN_14959fe84(0,*(undefined8 *)(pbVar3 + -0x12),param_1,param_2), iVar2 == 0)) {
        *pbVar3 = *pbVar3 | 4;
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar3 + 0x40;
    } while (iVar4 < *(int *)(param_3 + 0x14));
  }
  return;
}



// FUNCTION 1495c0364 FUN_1495c0364 body=177 status=ok
// SIG undefined FUN_1495c0364(void)

ushort FUN_1495c0364(byte *param_1,char param_2)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  
  uVar2 = 1;
  if (param_2 != 'A') {
    bVar1 = false;
    for (; bVar3 = *param_1, bVar3 - 0xaa < 2; param_1 = *(byte **)(param_1 + 0x10)) {
      if (bVar3 == 0xaa) {
        bVar1 = true;
      }
    }
    if (bVar3 == 0xad) {
      bVar3 = param_1[2];
    }
    uVar2 = 0;
    if (bVar3 < 0x97) {
      if (bVar3 == 0x73) {
        return (ushort)(param_2 == 'B' && !bVar1);
      }
      uVar2 = 0;
      if (bVar3 == 0x96) {
LAB_1495c03dc:
        return (ushort)('B' < param_2);
      }
    }
    else {
      if (bVar3 == 0x97) {
        return (ushort)!bVar1;
      }
      if (bVar3 == 0xa4) {
        if ('B' < param_2) {
          uVar2 = *(ushort *)(param_1 + 0x30) >> 0xf;
        }
      }
      else if (bVar3 == 0x98) goto LAB_1495c03dc;
    }
  }
  return uVar2;
}



// FUNCTION 1495c0415 FUN_1495c0415 body=105 status=ok
// SIG undefined FUN_1495c0415(void)

bool FUN_1495c0415(longlong param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  iVar3 = FUN_14959fe84(0,param_2,*puVar1,*(undefined4 *)(puVar1 + 1));
  if (iVar3 == 0) {
    FUN_1495c04ee(puVar1,param_2);
    uVar2 = FUN_14959f8fa(param_2);
    param_2[1] = uVar2;
    *param_2 = 0xa4;
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)((longlong)puVar1 + 0xc);
    *(undefined2 *)(param_2 + 0x30) = *(undefined2 *)(puVar1 + 2);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffbefff;
  }
  return iVar3 == 0;
}



// FUNCTION 1495c047e FUN_1495c047e body=112 status=ok
// SIG undefined FUN_1495c047e(void)

undefined8 FUN_1495c047e(longlong param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (((*param_2 == -0x5c) &&
      (lVar1 = *(longlong *)(param_1 + 0x28), *(int *)(param_2 + 0x2c) == *(int *)(lVar1 + 8))) &&
     (*(int *)(lVar1 + 0x14) == (int)*(short *)(param_2 + 0x30))) {
    FUN_1495c04ee(lVar1,param_2);
    if ((longlong)*(short *)(param_2 + 0x30) < 0) {
      cVar2 = 'D';
    }
    else {
      cVar2 = *(char *)(*(longlong *)(*(longlong *)(param_2 + 0x40) + 8) + 0x19 +
                       (longlong)*(short *)(param_2 + 0x30) * 0x20);
    }
    param_2[1] = cVar2;
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined2 *)(param_2 + 0x30) = *(undefined2 *)(lVar1 + 0x10);
    param_2[0x40] = '\0';
    param_2[0x41] = '\0';
    param_2[0x42] = '\0';
    param_2[0x43] = '\0';
    param_2[0x44] = '\0';
    param_2[0x45] = '\0';
    param_2[0x46] = '\0';
    param_2[0x47] = '\0';
  }
  return 0;
}



// FUNCTION 1495c04ee FUN_1495c04ee body=93 status=ok
// SIG undefined FUN_1495c04ee(void)

void FUN_1495c04ee(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    puVar1 = (undefined8 *)FUN_145e3bd67(0x58);
  }
  else {
    puVar1 = (undefined8 *)FUN_14955d750(*(longlong *)(param_1 + 0x20),0x58);
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x58);
    *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x58) = puVar1;
    puVar1[1] = param_2;
    puVar1 = puVar1 + 2;
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}



// FUNCTION 1495c054b FUN_1495c054b body=179 status=ok
// SIG undefined FUN_1495c054b(void)

void FUN_1495c054b(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  uVar1 = **(undefined8 **)*param_1;
  puVar6 = (undefined8 *)param_1[4];
  if (0 < *(int *)((longlong)param_1 + 0x14)) {
    uVar4 = *(int *)((longlong)param_1 + 0x14) + 1;
    plVar5 = puVar6 + 5;
    do {
      uVar3 = *(ushort *)((longlong)plVar5 + -0x16);
      if (((uVar3 & 1) != 0) && (plVar5[-5] != 0)) {
        FUN_14958288e(uVar1);
        uVar3 = *(ushort *)((longlong)plVar5 + -0x16);
      }
      if (((uVar3 & 0x10) != 0) || ((uVar3 & 0x20) != 0)) {
        lVar2 = *plVar5;
        FUN_1495c054b(lVar2);
        if (lVar2 != 0) {
          FUN_14955d65a(uVar1,lVar2);
        }
      }
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 8;
    } while (1 < uVar4);
    puVar6 = (undefined8 *)param_1[4];
  }
  if (puVar6 == (undefined8 *)0x0 || puVar6 == param_1 + 5) {
    return;
  }
  FUN_14955d65a(uVar1,puVar6);
  return;
}



// FUNCTION 1495c05fe FUN_1495c05fe body=129 status=ok
// SIG undefined FUN_1495c05fe(void)

bool FUN_1495c05fe(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  if (param_2 != 0) {
    local_28 = &local_20;
    FUN_14959f32d(*param_1,param_2,*(undefined1 *)(*param_1 + 0x5e),0x43);
    lVar2 = local_20;
    if (local_20 != 0) {
      iVar1 = FUN_149558f85(local_20);
      bVar3 = 0 < iVar1;
      goto LAB_1495c0646;
    }
  }
  lVar2 = 0;
  bVar3 = false;
LAB_1495c0646:
  FUN_149559090(lVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495c0680 FUN_1495c0680 body=508 status=ok
// SIG undefined FUN_1495c0680(void)

void FUN_1495c0680(longlong *param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar5 = (longlong *)param_1[2];
  if (plVar5 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar5 = (longlong *)FUN_14955a44a(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
    iVar7 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = iVar7;
  }
  else {
    bVar3 = *(char *)((longlong)param_1 + 0x1f) - 1;
    *(byte *)((longlong)param_1 + 0x1f) = bVar3;
    iVar7 = *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc);
  }
  FUN_149584f48(plVar5,0x45,0,iVar7,0);
  if ((int)param_3 < 3) {
    FUN_149584f48(plVar5,0xf,param_2,(int)plVar5[0x12] + 2,0);
  }
  else {
    if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
      iVar8 = (int)param_1[7] + 1;
      *(int *)(param_1 + 7) = iVar8;
    }
    else {
      bVar3 = *(char *)((longlong)param_1 + 0x1f) - 1;
      *(byte *)((longlong)param_1 + 0x1f) = bVar3;
      iVar8 = *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc);
    }
    uVar4 = FUN_149584f48(plVar5,0x73,0,iVar8,0);
    FUN_14955a5b6(plVar5,uVar4,&DAT_149e02088,0xffffffff);
    FUN_149584f48(plVar5,0x39,iVar8,(int)plVar5[0x12] + 2,param_2);
    if (0 < (longlong)(int)plVar5[0x12]) {
      *(undefined2 *)(plVar5[0x11] + -0x16 + (longlong)(int)plVar5[0x12] * 0x18) = 0x53;
    }
  }
  FUN_149584f48(plVar5,*(undefined4 *)(&DAT_14bd47bb0 + (ulonglong)param_3 * 4),iVar7,
                (int)plVar5[0x12] + 2,param_2);
  plVar6 = (longlong *)param_1[0x14];
  if ((longlong *)param_1[0x14] == (longlong *)0x0) {
    plVar6 = param_1;
  }
  *(undefined1 *)((longlong)plVar6 + 0x21) = 1;
  FUN_149584f48(plVar5,0x44,1,2,0);
  if (*(char *)(*plVar5 + 0x61) == '\0') {
    iVar8 = *(int *)(&DAT_14bd47a90 + (ulonglong)param_3 * 4);
    lVar1 = plVar5[0x11];
    lVar2 = plVar5[0x12];
    *(undefined1 *)(lVar1 + -0x17 + (longlong)(int)lVar2 * 0x18) = 0xff;
    *(undefined **)(lVar1 + -8 + (longlong)(int)lVar2 * 0x18) = &DAT_14bd47a90 + iVar8;
  }
  if (iVar7 != 0) {
    bVar3 = *(byte *)((longlong)param_1 + 0x1f);
    if ((ulonglong)bVar3 < 8) {
      *(byte *)((longlong)param_1 + 0x1f) = bVar3 + 1;
      *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc) = iVar7;
    }
  }
  return;
}



// FUNCTION 1495c087c FUN_1495c087c body=556 status=ok
// SIG undefined FUN_1495c087c(void)

void FUN_1495c087c(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  plVar9 = (longlong *)plVar2[2];
  lVar7 = lVar3;
  if (plVar9 == (longlong *)0x0) {
    if ((plVar2[0x14] == 0) && ((*(byte *)(*plVar2 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)plVar2 + 0x23) = 1;
    }
    plVar9 = (longlong *)FUN_14955a44a();
  }
  for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x40)) {
    if (((*(int *)(lVar3 + 0x84) == 0) && ((*(byte *)(*(longlong *)(lVar7 + 0x50) + 5) & 0x10) != 0)
        ) && (*(char *)(lVar7 + 0x21) != 'Z')) {
      FUN_149584f48(plVar9,0x48,0,*(undefined4 *)(lVar7 + 0x60),0);
      FUN_149584f48(plVar9,0x21,*(undefined4 *)(lVar7 + 100),0,0);
      FUN_149584f48(plVar9,0x59,*(undefined4 *)(lVar7 + 100),0,*(undefined4 *)(lVar7 + 0x60));
      iVar1 = (int)plVar9[0x12];
      puVar10 = &DAT_14cc1ee40;
      if (*(char *)(*plVar9 + 0x61) == '\0') {
        puVar10 = (undefined1 *)
                  ((longlong)(int)((iVar1 < 2 | 0xfffffffe) + iVar1) * 0x18 + plVar9[0x11]);
      }
      *(int *)(puVar10 + 8) = iVar1;
    }
    else if (*(int *)(lVar7 + 0x68) == 0) {
      puVar4 = *(undefined4 **)(*(longlong *)(lVar7 + 0x70) + 0x20);
      uVar11 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        uVar11 = *puVar4;
      }
      if (param_2 == 0) {
        FUN_149584f48(plVar9,0x9c,*(undefined4 *)(lVar7 + 0x5c),uVar11,*(undefined4 *)(lVar7 + 0x60)
                     );
        lVar5 = *(longlong *)(lVar7 + 0x50);
        if (*(char *)(*plVar9 + 0x61) == '\0') {
          lVar6 = plVar9[0x11];
          lVar8 = plVar9[0x12];
          *(undefined1 *)(lVar6 + -0x17 + (longlong)(int)lVar8 * 0x18) = 0xf8;
          *(longlong *)(lVar6 + -8 + (longlong)(int)lVar8 * 0x18) = lVar5;
        }
        else if ((*(byte *)(lVar5 + 4) & 0x10) != 0) {
          FUN_14955d65a();
        }
      }
      else {
        FUN_149584f48(plVar9,0x9d,*(undefined4 *)(lVar7 + 0x5c),uVar11,0);
        lVar5 = *(longlong *)(lVar7 + 0x50);
        if (*(char *)(*plVar9 + 0x61) == '\0') {
          lVar6 = plVar9[0x11];
          lVar8 = plVar9[0x12];
          *(undefined1 *)(lVar6 + -0x17 + (longlong)(int)lVar8 * 0x18) = 0xf8;
          *(longlong *)(lVar6 + -8 + (longlong)(int)lVar8 * 0x18) = lVar5;
        }
        else if ((*(byte *)(lVar5 + 4) & 0x10) != 0) {
          FUN_14955d65a();
        }
        FUN_149584f48(plVar9,0x4d,*(undefined4 *)(lVar7 + 0x5c),*(undefined4 *)(lVar7 + 0x60),0);
        FUN_149584f48(plVar9,0x48,0,*(undefined4 *)(lVar7 + 0x5c),0);
      }
    }
  }
  return;
}



// FUNCTION 1495c0aa8 FUN_1495c0aa8 body=2359 status=ok
// SIG undefined FUN_1495c0aa8(void)

void FUN_1495c0aa8(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  undefined *puVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  undefined1 *puVar13;
  int *piVar14;
  byte bVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  int local_84;
  int local_80;
  int local_58;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  plVar6 = (longlong *)param_1[2];
  lVar10 = lVar5;
  if (*(int *)(lVar5 + 0x84) == 0) {
    for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x40)) {
      lVar7 = *(longlong *)(lVar10 + 0x50);
      pcVar8 = *(char **)(lVar7 + 0x38);
      if ((pcVar8 == "nth_value") || (pcVar8 == "first_value")) {
        uVar1 = *(undefined4 *)(lVar10 + 100);
        iVar20 = *(int *)(lVar4 + 0x44);
        iVar16 = iVar20 + -1;
        *(int *)(lVar4 + 0x44) = iVar16;
        if (*(char *)(lVar4 + 0x1f) == '\0') {
          iVar18 = *(int *)(lVar4 + 0x38) + 1;
          *(int *)(lVar4 + 0x38) = iVar18;
        }
        else {
          bVar15 = *(char *)(lVar4 + 0x1f) - 1;
          *(byte *)(lVar4 + 0x1f) = bVar15;
          iVar18 = *(int *)(lVar4 + 0xcc + (ulonglong)bVar15 * 4);
        }
        FUN_149584f48(plVar6,0x48,0,*(undefined4 *)(lVar10 + 0x60),0);
        if (*(char **)(lVar7 + 0x38) == "nth_value") {
          FUN_149584f48(plVar6,0x59,*(undefined4 *)(lVar5 + 0x58),*(int *)(lVar10 + 0x7c) + 1,iVar18
                       );
          FUN_1495c0680(lVar4,iVar18,2);
        }
        else {
          FUN_149584f48(plVar6,0x45,1,iVar18,0);
        }
        FUN_149584f48(plVar6,0x69,iVar18,*(undefined4 *)(lVar10 + 0x68),iVar18);
        FUN_149584f48(plVar6,0x36,*(int *)(lVar10 + 0x68) + 1,iVar16,iVar18);
        FUN_149584f48(plVar6,0x1f,uVar1,0,iVar18);
        FUN_149584f48(plVar6,0x59,uVar1,*(undefined4 *)(lVar10 + 0x7c),
                      *(undefined4 *)(lVar10 + 0x60));
        lVar7 = plVar6[3];
        iVar20 = -iVar20;
        if (*(int *)(lVar7 + 0x44) + *(int *)(lVar7 + 0x48) < 0) {
          FUN_1495a1bff(lVar7,plVar6,iVar20);
        }
        else {
          *(int *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar20 * 4) = (int)plVar6[0x12];
        }
        if ((iVar18 == 0) || (bVar15 = *(byte *)(lVar4 + 0x1f), 7 < bVar15)) goto LAB_1495c0b2d;
LAB_1495c0ecc:
        *(byte *)(lVar4 + 0x1f) = bVar15 + 1;
        *(int *)(lVar4 + 0xcc + (ulonglong)bVar15 * 4) = iVar18;
      }
      else if ((pcVar8 == "lead") || (pcVar8 == "lag")) {
        iVar20 = **(int **)(*(longlong *)(lVar10 + 0x70) + 0x20);
        uVar1 = *(undefined4 *)(lVar10 + 100);
        iVar21 = *(int *)(lVar4 + 0x44);
        iVar16 = iVar21 + -1;
        *(int *)(lVar4 + 0x44) = iVar16;
        if (*(char *)(lVar4 + 0x1f) == '\0') {
          iVar18 = *(int *)(lVar4 + 0x38) + 1;
          *(int *)(lVar4 + 0x38) = iVar18;
        }
        else {
          bVar15 = *(char *)(lVar4 + 0x1f) - 1;
          *(byte *)(lVar4 + 0x1f) = bVar15;
          iVar18 = *(int *)(lVar4 + 0xcc + (ulonglong)bVar15 * 4);
        }
        uVar2 = *(undefined4 *)(lVar5 + 0x58);
        if (iVar20 < 3) {
          FUN_149584f48(plVar6,0x48,0,*(undefined4 *)(lVar10 + 0x60),0);
          FUN_149584f48(plVar6,0x7f,uVar2,iVar18,0);
          if (iVar20 == 2) goto LAB_1495c0da4;
          bVar22 = *(undefined **)(lVar7 + 0x38) == &DAT_14bd46ab4;
          FUN_149584f48(plVar6,0x52,iVar18,(bVar22 - 1) + (uint)bVar22,0);
        }
        else {
          FUN_149584f48(plVar6,0x59,uVar2,*(int *)(lVar10 + 0x7c) + 2,*(undefined4 *)(lVar10 + 0x60)
                       );
          FUN_149584f48(plVar6,0x7f,uVar2,iVar18,0);
LAB_1495c0da4:
          puVar9 = *(undefined **)(lVar7 + 0x38);
          if (*(char *)(lVar4 + 0x1f) == '\0') {
            iVar20 = *(int *)(lVar4 + 0x38) + 1;
            *(int *)(lVar4 + 0x38) = iVar20;
          }
          else {
            bVar15 = *(char *)(lVar4 + 0x1f) - 1;
            *(byte *)(lVar4 + 0x1f) = bVar15;
            iVar20 = *(int *)(lVar4 + 0xcc + (ulonglong)bVar15 * 4);
          }
          FUN_149584f48(plVar6,0x59,uVar2,*(int *)(lVar10 + 0x7c) + 1,iVar20);
          FUN_149584f48(plVar6,(puVar9 != &DAT_14bd46ab4) + 'i',iVar20,iVar18,iVar18);
          if (iVar20 != 0) {
            bVar15 = *(byte *)(lVar4 + 0x1f);
            if ((ulonglong)bVar15 < 8) {
              *(byte *)(lVar4 + 0x1f) = bVar15 + 1;
              *(int *)(lVar4 + 0xcc + (ulonglong)bVar15 * 4) = iVar20;
            }
          }
        }
        FUN_149584f48(plVar6,0x1f,uVar1,iVar16,iVar18);
        FUN_149584f48(plVar6,0x59,uVar1,*(undefined4 *)(lVar10 + 0x7c),
                      *(undefined4 *)(lVar10 + 0x60));
        lVar7 = plVar6[3];
        iVar21 = -iVar21;
        if (*(int *)(lVar7 + 0x44) + *(int *)(lVar7 + 0x48) < 0) {
          FUN_1495a1bff(lVar7,plVar6,iVar21);
        }
        else {
          *(int *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar21 * 4) = (int)plVar6[0x12];
        }
        if ((iVar18 != 0) && (bVar15 = *(byte *)(lVar4 + 0x1f), bVar15 < 8)) goto LAB_1495c0ecc;
      }
LAB_1495c0b2d:
    }
    goto LAB_1495c11b9;
  }
  local_84 = 0;
  if (*(int **)(lVar5 + 0x18) != (int *)0x0) {
    local_84 = **(int **)(lVar5 + 0x18);
  }
  uVar1 = *(undefined4 *)(lVar5 + 100);
  iVar20 = *(int *)(lVar4 + 0x44);
  iVar16 = iVar20 + -2;
  *(int *)(lVar4 + 0x44) = iVar16;
  cVar11 = *(char *)(lVar4 + 0x1f);
  if (cVar11 == '\0') {
    iVar18 = *(int *)(lVar4 + 0x38) + 1;
    local_80 = iVar18;
LAB_1495c0f3f:
    iVar18 = iVar18 + 1;
    *(int *)(lVar4 + 0x38) = iVar18;
  }
  else {
    bVar15 = cVar11 - 1;
    *(byte *)(lVar4 + 0x1f) = bVar15;
    local_80 = *(int *)(lVar4 + 0xcc + (ulonglong)bVar15 * 4);
    if (bVar15 == 0) {
      iVar18 = *(int *)(lVar4 + 0x38);
      goto LAB_1495c0f3f;
    }
    *(byte *)(lVar4 + 0x1f) = cVar11 - 2U;
    iVar18 = *(int *)(lVar4 + 0xcc + (ulonglong)(byte)(cVar11 - 2U) * 4);
  }
  iVar12 = 0;
  iVar21 = 0;
  if (local_84 != 0) {
    iVar21 = FUN_14959d77c(lVar4,local_84);
    iVar12 = FUN_14959d77c(lVar4,local_84);
  }
  FUN_149584f48(plVar6,0x7f,*(undefined4 *)(lVar5 + 0x58),local_80,0);
  FUN_1495c1d76(param_1,*(undefined4 *)(lVar5 + 0x58),iVar21);
  for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x40)) {
    FUN_149584f48(plVar6,0x48,0,*(undefined4 *)(lVar10 + 0x5c),0);
  }
  FUN_149584f48(plVar6,0x18,uVar1,iVar16,*(undefined4 *)(lVar5 + 0x84));
  iVar3 = (int)plVar6[0x12];
  FUN_149584f48(plVar6,0x7f,uVar1,iVar18,0);
  FUN_149584f48(plVar6,0x36,*(undefined4 *)(lVar5 + 0x88),iVar16,iVar18);
  cVar11 = *(char *)(lVar5 + 0x24);
  if (cVar11 != 'B') {
    iVar16 = iVar20 + -1;
    if (cVar11 == 'U') {
      FUN_149584f48(plVar6,0x35,local_80,iVar16,iVar18);
    }
    else {
      local_58 = 0;
      if (*(longlong *)(lVar5 + 0x18) == 0) {
        piVar14 = (int *)0x0;
      }
      else {
        piVar14 = (int *)FUN_1495ae612(lVar4,*(longlong *)(lVar5 + 0x18),0,0);
        cVar11 = *(char *)(lVar5 + 0x24);
      }
      if (cVar11 == '^') {
        local_58 = FUN_149584f48(plVar6,0x35,local_80,0,iVar18);
      }
      if (piVar14 == (int *)0x0) {
        FUN_149584f48(plVar6,0xb,0,iVar16,0);
      }
      else {
        FUN_1495c1d76(param_1,uVar1,iVar12);
        FUN_149584f48(plVar6,0x56,iVar12,iVar21,local_84);
        if (*(char *)(*plVar6 + 0x61) == '\0') {
          lVar10 = plVar6[0x11];
          lVar7 = plVar6[0x12];
          *(undefined1 *)(lVar10 + -0x17 + (longlong)(int)lVar7 * 0x18) = 0xf7;
          *(int **)(lVar10 + -8 + (longlong)(int)lVar7 * 0x18) = piVar14;
        }
        else if ((*(longlong *)(*plVar6 + 0x2d8) == 0) && (*piVar14 = *piVar14 + -1, *piVar14 == 0))
        {
          FUN_14955d65a(*(undefined8 *)(piVar14 + 4));
        }
        iVar19 = (int)plVar6[0x12] + 1;
        FUN_149584f48(plVar6,0x10,iVar19,iVar16,iVar19);
      }
      if (local_58 != 0) {
        if (*(char *)(*plVar6 + 0x61) == '\0') {
          iVar16 = (int)plVar6[0x12] + -1;
          if (-1 < local_58) {
            iVar16 = local_58;
          }
          puVar13 = (undefined1 *)((longlong)iVar16 * 0x18 + plVar6[0x11]);
        }
        else {
          puVar13 = &DAT_14cc1ee40;
        }
        *(int *)(puVar13 + 8) = (int)plVar6[0x12];
      }
    }
  }
  FUN_1495c1e12(param_1,lVar5,uVar1,0,(int)param_1[4]);
  lVar5 = plVar6[3];
  if (*(int *)(lVar5 + 0x44) + *(int *)(lVar5 + 0x48) < 0) {
    FUN_1495a1bff(lVar5,plVar6,-iVar20);
  }
  else {
    *(int *)(*(longlong *)(lVar5 + 0x50) + (longlong)-iVar20 * 4) = (int)plVar6[0x12];
  }
  FUN_149584f48(plVar6,5,uVar1,iVar3,0);
  puVar13 = &DAT_14cc1ee40;
  puVar17 = &DAT_14cc1ee40;
  if (*(char *)(*plVar6 + 0x61) == '\0') {
    iVar16 = iVar3;
    if (iVar3 < 1) {
      iVar16 = (int)plVar6[0x12];
    }
    puVar17 = (undefined1 *)(plVar6[0x11] + (longlong)iVar16 * 0x18 + -0x18);
  }
  *(int *)(puVar17 + 8) = (int)plVar6[0x12];
  if (*(char *)(*plVar6 + 0x61) == '\0') {
    iVar16 = (int)plVar6[0x12] + -1;
    if (-2 < iVar3) {
      iVar16 = iVar3 + 1;
    }
    puVar13 = (undefined1 *)((longlong)iVar16 * 0x18 + plVar6[0x11]);
  }
  *(int *)(puVar13 + 8) = (int)plVar6[0x12];
  if (iVar18 != 0) {
    bVar15 = *(byte *)(lVar4 + 0x1f);
    if ((ulonglong)bVar15 < 8) {
      *(byte *)(lVar4 + 0x1f) = bVar15 + 1;
      *(int *)(lVar4 + 0xcc + (ulonglong)bVar15 * 4) = iVar18;
    }
  }
  if (local_80 != 0) {
    bVar15 = *(byte *)(lVar4 + 0x1f);
    if ((ulonglong)bVar15 < 8) {
      *(byte *)(lVar4 + 0x1f) = bVar15 + 1;
      *(int *)(lVar4 + 0xcc + (ulonglong)bVar15 * 4) = local_80;
    }
  }
  if (local_84 != 0) {
    if (local_84 == 1) {
      if (iVar12 != 0) {
        bVar15 = *(byte *)(lVar4 + 0x1f);
        if ((ulonglong)bVar15 < 8) {
          *(byte *)(lVar4 + 0x1f) = bVar15 + 1;
          *(int *)(lVar4 + 0xcc + (ulonglong)bVar15 * 4) = iVar12;
        }
      }
      if (iVar21 != 0) {
        bVar15 = *(byte *)(lVar4 + 0x1f);
        if ((ulonglong)bVar15 < 8) {
          *(byte *)(lVar4 + 0x1f) = bVar15 + 1;
          *(int *)(lVar4 + 0xcc + (ulonglong)bVar15 * 4) = iVar21;
        }
      }
    }
    else if (*(int *)(lVar4 + 0x28) < local_84) {
      *(int *)(lVar4 + 0x28) = local_84;
      *(int *)(lVar4 + 0x2c) = iVar12;
    }
  }
  FUN_1495c087c(param_1,1);
LAB_1495c11b9:
  FUN_149584f48(plVar6,0xc,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[3],0);
  return;
}



// FUNCTION 1495c13df FUN_1495c13df body=301 status=ok
// SIG undefined FUN_1495c13df(void)

void FUN_1495c13df(longlong *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  plVar3 = (longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar3 = (longlong *)FUN_14955a44a(param_1);
  }
  if (param_2 == (int *)0x0) {
    iVar7 = 0;
    uVar5 = 0xb;
    param_3 = 0;
  }
  else {
    iVar7 = *param_2;
    piVar4 = (int *)FUN_1495ae612(param_1,param_2,0,0);
    FUN_149584f48(plVar3,0x56,param_4,param_3,iVar7);
    if (*(char *)(*plVar3 + 0x61) == '\0') {
      lVar1 = plVar3[0x11];
      lVar2 = plVar3[0x12];
      *(undefined1 *)(lVar1 + -0x17 + (longlong)(int)lVar2 * 0x18) = 0xf7;
      *(int **)(lVar1 + -8 + (longlong)(int)lVar2 * 0x18) = piVar4;
    }
    else if (((piVar4 != (int *)0x0) && (*(longlong *)(*plVar3 + 0x2d8) == 0)) &&
            (*piVar4 = *piVar4 + -1, *piVar4 == 0)) {
      FUN_14955d65a(*(undefined8 *)(piVar4 + 4),piVar4);
    }
    iVar6 = (int)plVar3[0x12] + 1;
    FUN_149584f48(plVar3,0x10,iVar6,param_5,iVar6);
    iVar7 = iVar7 + -1;
    uVar5 = 0x4d;
    param_5 = param_4;
  }
  FUN_149584f48(plVar3,uVar5,param_3,param_5,iVar7);
  return;
}



// FUNCTION 1495c150c FUN_1495c150c body=1300 status=ok
// SIG undefined FUN_1495c150c(void)

undefined4 FUN_1495c150c(longlong *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  int local_5c;
  int local_50;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  lVar6 = param_1[2];
  cVar1 = *(char *)(lVar5 + 0x20);
  iVar10 = *(int *)(lVar4 + 0x44);
  iVar9 = iVar10 + -1;
  *(int *)(lVar4 + 0x44) = iVar9;
  if ((param_2 == 2) && (*(char *)(lVar5 + 0x21) == 'Z')) {
    return 0;
  }
  local_50 = 0;
  if (param_3 < 1) {
LAB_1495c15dc:
    if ((param_2 == 1) && (*(int *)(lVar5 + 0x84) == 0)) {
      FUN_1495c087c(param_1,0);
    }
  }
  else {
    if (*(char *)(lVar5 + 0x20) != 'Y') {
      FUN_149584f48(lVar6,0x30,param_3,iVar9,1);
      goto LAB_1495c15dc;
    }
    local_50 = *(int *)(lVar6 + 0x90);
    if (param_2 != 2) {
      FUN_1495c1a20(param_1,0x36,(int)param_1[7],param_3,(int)param_1[6],iVar9);
      goto LAB_1495c15dc;
    }
    if (*(char *)(lVar5 + 0x21) == 'V') {
      uVar15 = (undefined4)param_1[5];
      uVar13 = (undefined4)param_1[6];
      uVar8 = 0x37;
    }
    else {
      uVar13 = (undefined4)param_1[5];
      uVar15 = (undefined4)param_1[6];
      uVar8 = 0x39;
    }
    FUN_1495c1a20(param_1,uVar8,uVar13,param_3,uVar15,iVar9);
  }
  uVar15 = *(undefined4 *)(lVar6 + 0x90);
  if ((((param_3 == 0) || (*(char *)(lVar5 + 0x21) != *(char *)(lVar5 + 0x22))) || (param_2 != 2))
     || (*(char *)(lVar5 + 0x20) != 'Y')) {
    if (param_2 == 2) goto LAB_1495c170a;
    if (param_2 != 1) {
      uVar13 = (undefined4)param_1[7];
      local_5c = *(undefined4 *)((longlong)param_1 + 0x3c);
      if (*(int *)(lVar5 + 0x84) != 0) {
        iVar12 = *(int *)(lVar5 + 0x88);
        goto LAB_1495c17ca;
      }
      uVar7 = (undefined4)param_1[4];
      uVar8 = 0;
      goto LAB_1495c1740;
    }
    uVar13 = (undefined4)param_1[6];
    local_5c = *(undefined4 *)((longlong)param_1 + 0x34);
    FUN_1495c0aa8(param_1);
  }
  else {
    cVar2 = *(char *)(lVar4 + 0x1f);
    if (cVar2 == '\0') {
      local_5c = *(int *)(lVar4 + 0x38) + 1;
      iVar12 = local_5c;
LAB_1495c1643:
      local_5c = local_5c + 1;
      *(int *)(lVar4 + 0x38) = local_5c;
    }
    else {
      bVar3 = cVar2 - 1;
      *(byte *)(lVar4 + 0x1f) = bVar3;
      iVar12 = *(int *)(lVar4 + 0xcc + (ulonglong)bVar3 * 4);
      if (bVar3 == 0) {
        local_5c = *(int *)(lVar4 + 0x38);
        goto LAB_1495c1643;
      }
      *(byte *)(lVar4 + 0x1f) = cVar2 - 2U;
      local_5c = *(int *)(lVar4 + 0xcc + (ulonglong)(byte)(cVar2 - 2U) * 4);
    }
    FUN_149584f48(lVar6,0x7f,(int)param_1[5],iVar12,0);
    FUN_149584f48(lVar6,0x7f,(int)param_1[7],local_5c,0);
    FUN_149584f48(lVar6,0x39,local_5c,iVar9,iVar12);
    if (iVar12 != 0) {
      bVar3 = *(byte *)(lVar4 + 0x1f);
      if ((ulonglong)bVar3 < 8) {
        *(byte *)(lVar4 + 0x1f) = bVar3 + 1;
        *(int *)(lVar4 + 0xcc + (ulonglong)bVar3 * 4) = iVar12;
      }
    }
    if (local_5c != 0) {
      bVar3 = *(byte *)(lVar4 + 0x1f);
      if ((ulonglong)bVar3 < 8) {
        *(byte *)(lVar4 + 0x1f) = bVar3 + 1;
        *(int *)(lVar4 + 0xcc + (ulonglong)bVar3 * 4) = local_5c;
      }
    }
LAB_1495c170a:
    uVar13 = (undefined4)param_1[5];
    local_5c = *(undefined4 *)((longlong)param_1 + 0x2c);
    iVar12 = *(int *)(lVar5 + 0x84);
    if (iVar12 == 0) {
      uVar7 = (undefined4)param_1[4];
      uVar8 = 1;
LAB_1495c1740:
      FUN_1495c1e12(param_1,lVar5,uVar13,uVar8,uVar7);
    }
    else {
LAB_1495c17ca:
      FUN_149584f48(lVar6,0x52,iVar12,1,0);
    }
  }
  if (*(int *)((longlong)param_1 + 0x24) == param_2) {
    FUN_149584f48(lVar6,0x7a,uVar13,0,0);
    if (0 < (longlong)*(int *)(lVar6 + 0x90)) {
      *(undefined2 *)(*(longlong *)(lVar6 + 0x88) + -0x16 + (longlong)*(int *)(lVar6 + 0x90) * 0x18)
           = 2;
    }
  }
  if (param_4 == 0) {
    FUN_149584f48(lVar6,5,uVar13,(*(int *)(lVar6 + 0x90) - (uint)(cVar1 == 'L')) + 2,0);
    uVar7 = 0;
    if (cVar1 == 'L') goto LAB_1495c18cd;
    uVar7 = 0;
    FUN_149584f48(lVar6,0xb,0,iVar9,0);
  }
  else {
    FUN_149584f48(lVar6,5,uVar13,*(int *)(lVar6 + 0x90) + 2,0);
    uVar7 = FUN_149584f48(lVar6,0xb,0,0,0);
    if (cVar1 == 'L') goto LAB_1495c18cd;
  }
  iVar9 = 0;
  if (*(int **)(lVar5 + 0x18) == (int *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar12 = **(int **)(lVar5 + 0x18);
    iVar11 = 0;
    if (iVar12 != 0) {
      iVar11 = FUN_14959d77c(lVar4,iVar12);
      iVar9 = iVar12;
    }
  }
  FUN_1495c1d76(param_1,uVar13,iVar11);
  FUN_1495c13df(lVar4,*(undefined8 *)(lVar5 + 0x18),iVar11,local_5c,uVar15);
  if (iVar9 == 1) {
    if (iVar11 == 0) goto LAB_1495c18cd;
    bVar3 = *(byte *)(lVar4 + 0x1f);
    if (7 < (ulonglong)bVar3) goto LAB_1495c18cd;
    *(byte *)(lVar4 + 0x1f) = bVar3 + 1;
    piVar14 = (int *)(lVar4 + (ulonglong)bVar3 * 4 + 0xcc);
  }
  else {
    if (iVar9 <= *(int *)(lVar4 + 0x28)) goto LAB_1495c18cd;
    *(int *)(lVar4 + 0x28) = iVar9;
    piVar14 = (int *)(lVar4 + 0x2c);
  }
  *piVar14 = iVar11;
LAB_1495c18cd:
  if (local_50 != 0) {
    FUN_149584f48(lVar6,0xb,0,local_50,0);
  }
  lVar4 = *(longlong *)(lVar6 + 0x18);
  iVar10 = -iVar10;
  if (*(int *)(lVar4 + 0x44) + *(int *)(lVar4 + 0x48) < 0) {
    FUN_1495a1bff(lVar4,lVar6,iVar10);
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar4 + 0x50) + (longlong)iVar10 * 4) =
         *(undefined4 *)(lVar6 + 0x90);
  }
  return uVar7;
}



// FUNCTION 1495c1a20 FUN_1495c1a20 body=854 status=ok
// SIG undefined FUN_1495c1a20(void)

void FUN_1495c1a20(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  plVar3 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar3[2];
  if (plVar7 == (longlong *)0x0) {
    if ((plVar3[0x14] == 0) && ((*(byte *)(*plVar3 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)plVar3 + 0x23) = 1;
    }
    plVar7 = (longlong *)FUN_14955a44a(plVar3);
  }
  lVar4 = *(longlong *)(param_1[1] + 0x18);
  cVar1 = *(char *)((longlong)plVar3 + 0x1f);
  if (cVar1 == '\0') {
    iVar11 = (int)plVar3[7] + 1;
    iVar12 = iVar11;
LAB_1495c1a8e:
    iVar11 = iVar11 + 1;
    iVar10 = iVar11;
  }
  else {
    bVar2 = cVar1 - 1;
    *(byte *)((longlong)plVar3 + 0x1f) = bVar2;
    iVar12 = *(int *)((longlong)plVar3 + (ulonglong)bVar2 * 4 + 0xcc);
    if (bVar2 == 0) {
      iVar11 = (int)plVar3[7];
      goto LAB_1495c1a8e;
    }
    *(byte *)((longlong)plVar3 + 0x1f) = cVar1 - 2U;
    iVar10 = *(int *)((longlong)plVar3 + (ulonglong)(byte)(cVar1 - 2U) * 4 + 0xcc);
    iVar11 = (int)plVar3[7];
  }
  iVar11 = iVar11 + 1;
  *(int *)(plVar3 + 7) = iVar11;
  bVar2 = *(byte *)(lVar4 + 0x18);
  uVar13 = 0x37;
  if (param_2 != 0x39) {
    uVar13 = param_2 == 0x36 ^ 0x39;
  }
  if ((bVar2 & 1) == 0) {
    uVar13 = param_2;
  }
  FUN_1495c1d76(param_1,param_3);
  FUN_1495c1d76(param_1,param_5,iVar10);
  uVar5 = FUN_149584f48(plVar7,0x73,0,iVar11,0);
  FUN_14955a5b6(plVar7,uVar5,&DAT_149e02088,0xffffffff);
  iVar11 = FUN_149584f48(plVar7,0x39,iVar11,0,iVar12);
  FUN_149584f48(plVar7,(bVar2 & 1) + 0x69,param_4,iVar12,iVar12);
  if (*(char *)(*plVar7 + 0x61) == '\0') {
    iVar6 = (int)plVar7[0x12] + -1;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    puVar8 = (undefined1 *)((longlong)iVar6 * 0x18 + plVar7[0x11]);
  }
  else {
    puVar8 = &DAT_14cc1ee40;
  }
  *(int *)(puVar8 + 8) = (int)plVar7[0x12];
  if ((*(byte *)(lVar4 + 0x18) & 2) == 0) goto LAB_1495c1bb7;
  iVar6 = FUN_149584f48(plVar7,0x33,iVar12,0,0);
  iVar11 = iVar10;
  if (uVar13 == 0x36) {
    uVar9 = 0x33;
LAB_1495c1cb4:
    FUN_149584f48(plVar7,uVar9,iVar11,param_6,0);
  }
  else {
    if (uVar13 == 0x37) {
      uVar9 = 0x32;
      goto LAB_1495c1cb4;
    }
    if (uVar13 == 0x39) {
      uVar9 = 0xb;
      iVar11 = 0;
      goto LAB_1495c1cb4;
    }
  }
  FUN_149584f48(plVar7,0xb,0,(int)plVar7[0x12] + 3,0);
  if (*(char *)(*plVar7 + 0x61) == '\0') {
    iVar11 = (int)plVar7[0x12] + -1;
    if (-1 < iVar6) {
      iVar11 = iVar6;
    }
    puVar8 = (undefined1 *)((longlong)iVar11 * 0x18 + plVar7[0x11]);
  }
  else {
    puVar8 = &DAT_14cc1ee40;
  }
  *(int *)(puVar8 + 8) = (int)plVar7[0x12];
  FUN_149584f48(plVar7,0x32,iVar10,param_6,0);
  if ((uVar13 == 0x39) || (uVar13 == 0x36)) {
    if (*(char *)(*plVar7 + 0x61) == '\0') {
      puVar8 = (undefined1 *)(plVar7[0x11] + (longlong)(int)plVar7[0x12] * 0x18 + -0x18);
    }
    else {
      puVar8 = &DAT_14cc1ee40;
    }
    *(int *)(puVar8 + 8) = (int)plVar7[0x12] + 1;
  }
LAB_1495c1bb7:
  FUN_149584f48(plVar7,uVar13,iVar10,param_6,iVar12);
  if (0 < (longlong)(int)plVar7[0x12]) {
    *(undefined2 *)(plVar7[0x11] + -0x16 + (longlong)(int)plVar7[0x12] * 0x18) = 0x80;
  }
  if (iVar12 != 0) {
    bVar2 = *(byte *)((longlong)plVar3 + 0x1f);
    if ((ulonglong)bVar2 < 8) {
      *(byte *)((longlong)plVar3 + 0x1f) = bVar2 + 1;
      *(int *)((longlong)plVar3 + (ulonglong)bVar2 * 4 + 0xcc) = iVar12;
    }
  }
  if (iVar10 != 0) {
    bVar2 = *(byte *)((longlong)plVar3 + 0x1f);
    if ((ulonglong)bVar2 < 8) {
      *(byte *)((longlong)plVar3 + 0x1f) = bVar2 + 1;
      *(int *)((longlong)plVar3 + (ulonglong)bVar2 * 4 + 0xcc) = iVar10;
    }
  }
  return;
}



// FUNCTION 1495c1d76 FUN_1495c1d76 body=156 status=ok
// SIG undefined FUN_1495c1d76(void)

void FUN_1495c1d76(longlong *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = param_1[1];
  piVar3 = *(int **)(lVar2 + 0x18);
  if (piVar3 != (int *)0x0) {
    param_1 = (longlong *)*param_1;
    lVar4 = param_1[2];
    if (lVar4 == 0) {
      if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23) = 1;
      }
      lVar4 = FUN_14955a44a();
    }
    if (*(int **)(lVar2 + 0x10) == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(lVar2 + 0x10);
    }
    if (0 < *piVar3) {
      iVar1 = *(int *)(lVar2 + 0x78);
      iVar6 = 0;
      do {
        FUN_149584f48(lVar4,0x59,param_2,iVar5 + iVar1 + iVar6,param_3 + iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *piVar3);
    }
  }
  return;
}



// FUNCTION 1495c1e12 FUN_1495c1e12 body=1574 status=ok
// SIG undefined FUN_1495c1e12(void)

void FUN_1495c1e12(longlong *param_1,longlong param_2,undefined4 param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  char *pcVar7;
  int *piVar8;
  longlong *plVar9;
  char *pcVar10;
  undefined1 *puVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint in_stack_ffffffffffffff98;
  int local_54;
  int local_4c;
  
  param_1 = (longlong *)*param_1;
  plVar9 = (longlong *)param_1[2];
  if (plVar9 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar9 = (longlong *)FUN_14955a44a(param_1);
  }
  if (param_2 != 0) {
    lVar12 = param_2;
    do {
      lVar1 = *(longlong *)(lVar12 + 0x50);
      iVar4 = 0;
      if (((*(char *)(lVar12 + 0x8c) == '\0') &&
          (piVar8 = *(int **)(*(longlong *)(lVar12 + 0x70) + 0x20), piVar8 != (int *)0x0)) &&
         (iVar4 = *piVar8, 0 < iVar4)) {
        iVar14 = 0;
        do {
          if ((iVar14 == 1) && (*(char **)(lVar1 + 0x38) == "nth_value")) {
            iVar13 = *(int *)(lVar12 + 0x7c) + 1;
            in_stack_ffffffffffffff98 = param_5 + 1;
            uVar5 = *(undefined4 *)(param_2 + 0x58);
          }
          else {
            in_stack_ffffffffffffff98 = param_5 + iVar14;
            iVar13 = *(int *)(lVar12 + 0x7c) + iVar14;
            uVar5 = param_3;
          }
          FUN_149584f48(plVar9,0x59,uVar5,iVar13,in_stack_ffffffffffffff98);
          iVar14 = iVar14 + 1;
        } while (iVar4 != iVar14);
      }
      if (((*(int *)(param_2 + 0x84) == 0) && ((*(byte *)(lVar1 + 5) & 0x10) != 0)) &&
         (*(char *)(lVar12 + 0x21) != 'Z')) {
        iVar4 = FUN_149584f48(plVar9,0x32,param_5,0,0);
        if (param_4 == 0) {
          FUN_149584f48(plVar9,0x52,*(int *)(lVar12 + 0x68) + 1,1,0);
          FUN_149584f48(plVar9,0x4e,param_5,*(undefined4 *)(lVar12 + 0x68),0);
          FUN_149584f48(plVar9,0x5b,*(int *)(lVar12 + 0x68),2,*(int *)(lVar12 + 0x68) + 2);
          in_stack_ffffffffffffff98 = 0;
          FUN_149584f48(plVar9,0x83,*(undefined4 *)(lVar12 + 100),*(int *)(lVar12 + 0x68) + 2,0);
        }
        else {
          iVar14 = FUN_149584f48(plVar9,0x18,*(undefined4 *)(lVar12 + 100),0,param_5);
          if (*(char *)(*plVar9 + 0x61) == '\0') {
            lVar1 = plVar9[0x11];
            *(undefined1 *)(lVar1 + 1 + (longlong)iVar14 * 0x18) = 0xfd;
            *(undefined4 *)(lVar1 + 0x10 + (longlong)iVar14 * 0x18) = 1;
          }
          in_stack_ffffffffffffff98 = 0;
          FUN_149584f48(plVar9,0x7a,*(undefined4 *)(lVar12 + 100),0,0);
          iVar14 = (int)plVar9[0x12];
          puVar11 = &DAT_14cc1ee40;
          if (*(char *)(*plVar9 + 0x61) == '\0') {
            puVar11 = (undefined1 *)
                      ((longlong)(int)((iVar14 < 2 | 0xfffffffe) + iVar14) * 0x18 + plVar9[0x11]);
          }
          *(int *)(puVar11 + 8) = iVar14;
        }
        puVar11 = &DAT_14cc1ee40;
        if (*(char *)(*plVar9 + 0x61) == '\0') {
          iVar14 = (int)plVar9[0x12] + -1;
          if (-1 < iVar4) {
            iVar14 = iVar4;
          }
          puVar11 = (undefined1 *)((longlong)iVar14 * 0x18 + plVar9[0x11]);
        }
        *(int *)(puVar11 + 8) = (int)plVar9[0x12];
      }
      else if (*(int *)(lVar12 + 0x68) == 0) {
        if (*(undefined1 **)(lVar1 + 0x18) != &LAB_1495c2438) {
          local_4c = 0;
          if (*(longlong *)(lVar12 + 0x48) != 0) {
            if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
              iVar14 = (int)param_1[7] + 1;
              *(int *)(param_1 + 7) = iVar14;
            }
            else {
              bVar3 = *(char *)((longlong)param_1 + 0x1f) - 1;
              *(byte *)((longlong)param_1 + 0x1f) = bVar3;
              iVar14 = *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc);
            }
            FUN_149584f48(plVar9,0x59,param_3,*(int *)(lVar12 + 0x7c) + iVar4,iVar14);
            in_stack_ffffffffffffff98 = 0;
            local_4c = FUN_149584f48(plVar9,0x14,iVar14,0,1);
            if (iVar14 != 0) {
              bVar3 = *(byte *)((longlong)param_1 + 0x1f);
              if ((ulonglong)bVar3 < 8) {
                *(byte *)((longlong)param_1 + 0x1f) = bVar3 + 1;
                *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc) = iVar14;
              }
            }
          }
          local_54 = param_5;
          if (*(char *)(lVar12 + 0x8c) != '\0') {
            iVar14 = (int)plVar9[0x12];
            iVar4 = **(int **)(*(longlong *)(lVar12 + 0x70) + 0x20);
            local_54 = FUN_14959d77c(param_1,iVar4);
            FUN_14959d7c6(param_1,*(undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0x20),local_54,0,
                          in_stack_ffffffffffffff98 & 0xffffff00);
            pcVar7 = &DAT_14cc1ee40;
            if (*(char *)(*plVar9 + 0x61) == '\0') {
              pcVar7 = (char *)(plVar9[0x11] + (longlong)(int)plVar9[0x12] * 0x18 + -0x18);
            }
            if (iVar14 < 0) {
              iVar14 = (int)plVar9[0x12] + -1;
            }
            pcVar10 = &DAT_14cc1ee40;
            if (*(char *)(*plVar9 + 0x61) == '\0') {
              pcVar10 = (char *)((longlong)iVar14 * 0x18 + plVar9[0x11]);
            }
            for (; pcVar10 <= pcVar7; pcVar10 = pcVar10 + 0x18) {
              if ((*pcVar10 == 'Y') && (*(int *)(pcVar10 + 4) == *(int *)(lVar12 + 0x58))) {
                *(undefined4 *)(pcVar10 + 4) = param_3;
              }
            }
          }
          if ((*(byte *)(lVar1 + 4) & 0x20) != 0) {
            lVar6 = FUN_1495862ab(param_1,*(undefined8 *)
                                           (*(longlong *)(*(longlong *)(lVar12 + 0x70) + 0x20) + 8))
            ;
            if (lVar6 == 0) {
              lVar6 = *(longlong *)(*param_1 + 0x10);
            }
            uVar5 = FUN_149584f48(plVar9,0x51,0,0,0);
            FUN_14955a5b6(plVar9,uVar5,lVar6,0xfffffffe);
          }
          in_stack_ffffffffffffff98 = *(uint *)(lVar12 + 0x5c);
          FUN_149584f48(plVar9,(param_4 == 0) + 0x99,param_4,local_54,in_stack_ffffffffffffff98);
          if (*(char *)(*plVar9 + 0x61) == '\0') {
            lVar6 = plVar9[0x11];
            lVar2 = plVar9[0x12];
            *(undefined1 *)(lVar6 + -0x17 + (longlong)(int)lVar2 * 0x18) = 0xf8;
            *(longlong *)(lVar6 + -8 + (longlong)(int)lVar2 * 0x18) = lVar1;
          }
          else if ((*(byte *)(lVar1 + 4) & 0x10) != 0) {
            FUN_14955d65a(*plVar9,lVar1);
          }
          if (0 < (longlong)(int)plVar9[0x12]) {
            *(ushort *)(plVar9[0x11] + -0x16 + (longlong)(int)plVar9[0x12] * 0x18) =
                 (ushort)iVar4 & 0xff;
          }
          if (*(char *)(lVar12 + 0x8c) != '\0') {
            if (iVar4 == 1) {
              if (local_54 != 0) {
                bVar3 = *(byte *)((longlong)param_1 + 0x1f);
                if ((ulonglong)bVar3 < 8) {
                  *(byte *)((longlong)param_1 + 0x1f) = bVar3 + 1;
                  piVar8 = (int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc);
                  goto LAB_1495c22c4;
                }
              }
            }
            else if ((int)param_1[5] < iVar4) {
              piVar8 = (int *)((longlong)param_1 + 0x2c);
              *(int *)(param_1 + 5) = iVar4;
LAB_1495c22c4:
              *piVar8 = local_54;
            }
          }
          if (local_4c != 0) {
            puVar11 = &DAT_14cc1ee40;
            if (*(char *)(*plVar9 + 0x61) == '\0') {
              iVar4 = (int)plVar9[0x12] + -1;
              if (-1 < local_4c) {
                iVar4 = local_4c;
              }
              puVar11 = (undefined1 *)((longlong)iVar4 * 0x18 + plVar9[0x11]);
            }
            *(int *)(puVar11 + 8) = (int)plVar9[0x12];
          }
        }
      }
      else {
        in_stack_ffffffffffffff98 = 0;
        FUN_149584f48(plVar9,0x52,(*(int *)(lVar12 + 0x68) - param_4) + 1,1,0);
      }
      lVar12 = *(longlong *)(lVar12 + 0x40);
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 1495c2439 FUN_1495c2439 body=268 status=ok
// SIG undefined FUN_1495c2439(void)

void FUN_1495c2439(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x1f) == '\0') {
    iVar5 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar5;
  }
  else {
    bVar3 = *(char *)(param_1 + 0x1f) - 1;
    *(byte *)(param_1 + 0x1f) = bVar3;
    iVar5 = *(int *)(param_1 + 0xcc + (ulonglong)bVar3 * 4);
  }
  iVar4 = FUN_149584f48(plVar1,0x1e,param_2,param_3,param_5);
  if (*(char *)(*plVar1 + 0x61) == '\0') {
    lVar2 = plVar1[0x11];
    *(undefined1 *)(lVar2 + 1 + (longlong)iVar4 * 0x18) = 0xfd;
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18) = param_4;
  }
  FUN_149584f48(plVar1,0x5b,param_5,param_4,iVar5);
  iVar4 = FUN_149584f48(plVar1,0x83,param_2,iVar5,param_5);
  if (*(char *)(*plVar1 + 0x61) == '\0') {
    lVar2 = plVar1[0x11];
    *(undefined1 *)(lVar2 + 1 + (longlong)iVar4 * 0x18) = 0xfd;
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18) = param_4;
  }
  if (0 < (longlong)(int)plVar1[0x12]) {
    *(undefined2 *)(plVar1[0x11] + -0x16 + (longlong)(int)plVar1[0x12] * 0x18) = 0x10;
  }
  if (iVar5 != 0) {
    bVar3 = *(byte *)(param_1 + 0x1f);
    if ((ulonglong)bVar3 < 8) {
      *(byte *)(param_1 + 0x1f) = bVar3 + 1;
      *(int *)(param_1 + 0xcc + (ulonglong)bVar3 * 4) = iVar5;
    }
  }
  return;
}



// FUNCTION 1495c2545 FUN_1495c2545 body=1251 status=ok
// SIG undefined FUN_1495c2545(void)

void FUN_1495c2545(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,int param_5,
                  int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  char cVar17;
  uint uVar18;
  undefined1 *puVar19;
  
  uVar18 = *(byte *)((longlong)param_2 + 0x24) & 1;
  iVar9 = *(int *)*param_2;
  iVar13 = (uVar18 ^ 1) + iVar9;
  iVar10 = param_6 + iVar13;
  iVar1 = *(int *)(param_2 + 1);
  if (param_7 == 0) {
    iVar15 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = (int)param_1[7] + iVar10;
  }
  else {
    iVar15 = param_4 - param_7;
  }
  if (*(int *)(param_3 + 0xc) == 0) {
    iVar6 = *(int *)(param_3 + 8);
  }
  else {
    iVar6 = *(int *)(param_3 + 0xc) + 1;
  }
  plVar4 = (longlong *)param_1[2];
  iVar7 = *(int *)((longlong)param_1 + 0x44) + -1;
  *(int *)((longlong)param_1 + 0x44) = iVar7;
  *(int *)((longlong)param_2 + 0x1c) = iVar7;
  FUN_14959d7c6(param_1,*param_2,iVar15,param_5,(param_5 != 0) * '\x04' + '\x01');
  cVar17 = (char)uVar18;
  if (cVar17 == '\0') {
    FUN_149584f48(plVar4,0x77,*(undefined4 *)((longlong)param_2 + 0xc),iVar15 + iVar9,0);
  }
  if (0 < param_6 && param_7 == 0) {
    FUN_149584f48(param_1[2],0x4c,param_4,iVar13 + iVar15,param_6);
  }
  iVar7 = 0;
  iVar13 = 0;
  if (0 < iVar1) {
    iVar13 = FUN_1495c2a28(param_1,param_2,param_3,iVar15,iVar10);
    iVar11 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = (int)param_1[7] + *(int *)(param_2 + 1);
    iVar2 = *(int *)(param_2 + 1);
    if (cVar17 == '\0') {
      iVar14 = iVar15 + iVar9;
      uVar12 = 0x14;
    }
    else {
      iVar14 = *(int *)((longlong)param_2 + 0xc);
      uVar12 = 0x71;
    }
    iVar8 = FUN_149584f48(plVar4,uVar12,iVar14,0,0);
    FUN_149584f48(plVar4,0x56,iVar11,iVar15,*(undefined4 *)(param_2 + 1));
    iVar14 = *(int *)(param_2 + 3);
    if (iVar14 < 0) {
      iVar14 = (int)plVar4[0x12] + -1;
    }
    if (*(char *)(*plVar4 + 0x61) == '\0') {
      puVar19 = (undefined1 *)((longlong)iVar14 * 0x18 + plVar4[0x11]);
    }
    else {
      puVar19 = &DAT_14cc1ee40;
    }
    if (*(char *)(*param_1 + 0x61) != '\0') {
      return;
    }
    *(int *)(puVar19 + 8) = iVar10 - iVar2;
    lVar5 = *(longlong *)(puVar19 + 0x10);
    memset(*(void **)(lVar5 + 0x18),0,(ulonglong)*(ushort *)(lVar5 + 6));
    FUN_14955a5b6(plVar4,0xffffffff,lVar5,&DAT_fffffff7);
    uVar12 = FUN_1495ae612(param_1,*param_2,iVar1,
                           ~(uint)*(ushort *)(lVar5 + 6) + (uint)*(ushort *)(lVar5 + 8));
    *(undefined8 *)(puVar19 + 0x10) = uVar12;
    iVar2 = (int)plVar4[0x12];
    FUN_149584f48(plVar4,0x10,iVar2 + 1,0,iVar2 + 1);
    iVar14 = *(int *)((longlong)param_1 + 0x44) + -1;
    *(int *)((longlong)param_1 + 0x44) = iVar14;
    *(int *)((longlong)param_2 + 0x14) = iVar14;
    iVar14 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = iVar14;
    *(int *)(param_2 + 2) = iVar14;
    FUN_149584f48(plVar4,0xc,iVar14,*(undefined4 *)((longlong)param_2 + 0x14),0);
    FUN_149584f48(plVar4,0x8a,*(undefined4 *)((longlong)param_2 + 0xc),0,0);
    if (iVar6 != 0) {
      FUN_149584f48(plVar4,0x14,iVar6,*(undefined4 *)((longlong)param_2 + 0x1c),0);
    }
    puVar16 = &DAT_14cc1ee40;
    puVar19 = &DAT_14cc1ee40;
    if (*(char *)(*plVar4 + 0x61) == '\0') {
      iVar14 = (int)plVar4[0x12] + -1;
      if (-1 < iVar8) {
        iVar14 = iVar8;
      }
      puVar19 = (undefined1 *)((longlong)iVar14 * 0x18 + plVar4[0x11]);
    }
    *(int *)(puVar19 + 8) = (int)plVar4[0x12];
    FUN_149584f48(param_1[2],0x4c,iVar15,iVar11,*(undefined4 *)(param_2 + 1));
    if (*(char *)(*plVar4 + 0x61) == '\0') {
      iVar11 = (int)plVar4[0x12] + -1;
      if (-1 < iVar2) {
        iVar11 = iVar2;
      }
      puVar16 = (undefined1 *)((longlong)iVar11 * 0x18 + plVar4[0x11]);
    }
    *(int *)(puVar16 + 8) = (int)plVar4[0x12];
  }
  if (iVar6 != 0) {
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_149584f48(plVar4,0x31,iVar6,(int)plVar4[0x12] + 4,0);
    FUN_149584f48(plVar4,0x21,uVar3,0,0);
    iVar7 = FUN_149584f48(plVar4,0x26,uVar3,0,iVar15 + iVar1);
    if (*(char *)(*plVar4 + 0x61) == '\0') {
      lVar5 = plVar4[0x11];
      *(undefined1 *)(lVar5 + 1 + (longlong)iVar7 * 0x18) = 0xfd;
      *(int *)(lVar5 + 0x10 + (longlong)iVar7 * 0x18) = iVar9 - iVar1;
    }
    FUN_149584f48(plVar4,0x7a,uVar3,0,0);
  }
  if (iVar13 == 0) {
    iVar13 = FUN_1495c2a28(param_1,param_2,param_3,iVar15,iVar10);
  }
  iVar9 = FUN_149584f48(plVar4,*(byte *)((longlong)param_2 + 0x24) & 1 ^ 0x83,
                        *(undefined4 *)((longlong)param_2 + 0xc),iVar13,iVar15 + iVar1);
  if (*(char *)(*plVar4 + 0x61) == '\0') {
    lVar5 = plVar4[0x11];
    *(undefined1 *)(lVar5 + 1 + (longlong)iVar9 * 0x18) = 0xfd;
    *(int *)(lVar5 + 0x10 + (longlong)iVar9 * 0x18) = iVar10 - iVar1;
  }
  if (iVar7 != 0) {
    iVar10 = *(int *)(param_2 + 4);
    if (iVar10 == 0) {
      iVar10 = (int)plVar4[0x12];
    }
    if (iVar7 < 0) {
      iVar7 = (int)plVar4[0x12] + -1;
    }
    if (*(char *)(*plVar4 + 0x61) == '\0') {
      puVar19 = (undefined1 *)((longlong)iVar7 * 0x18 + plVar4[0x11]);
    }
    else {
      puVar19 = &DAT_14cc1ee40;
    }
    *(int *)(puVar19 + 8) = iVar10;
  }
  return;
}



// FUNCTION 1495c2a28 FUN_1495c2a28 body=110 status=ok
// SIG undefined FUN_1495c2a28(void)

int FUN_1495c2a28(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar4;
  puVar3 = *(undefined4 **)(param_2 + 0x28);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_14959d7c6(param_1,*(undefined8 *)(param_3 + 0x20),*puVar3,0,*(undefined1 *)(puVar3 + 1));
  }
  FUN_149584f48(uVar2,0x5b,param_4 + iVar1,param_5 - iVar1,iVar4);
  return iVar4;
}



// FUNCTION 1495c2a96 FUN_1495c2a96 body=305 status=ok
// SIG undefined FUN_1495c2a96(void)

undefined8 FUN_1495c2a96(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 **ppuVar8;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  code *local_78;
  undefined8 local_70;
  short local_5c;
  undefined8 local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = 0;
  if (*param_2 != ',') {
    local_80 = (undefined8 *)*param_1;
    lVar1 = param_1[5];
    local_58 = *(undefined8 *)(lVar1 + 0x38);
    local_5c = 1;
    local_78 = FUN_1495c2bc8;
    local_70 = 0;
    if (param_2 != (char *)0x0) {
      FUN_14959fa98(&local_80,param_2);
      uVar5 = 1;
      if (local_5c == 0) goto LAB_1495c2ab8;
      local_80 = (undefined8 *)*param_1;
    }
    uVar5 = *local_80;
    local_80 = (undefined8 *)&DAT_149e377d0;
    local_78 = (code *)CONCAT44(local_78._4_4_,1);
    puVar2 = (undefined8 *)FUN_14958f7cb(uVar5,0x98,&local_80,0);
    uVar5 = 1;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      puVar6 = puVar2;
      ppuVar8 = &local_80;
      for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
        *ppuVar8 = (undefined8 *)*puVar6;
        puVar6 = puVar6 + 1;
        ppuVar8 = ppuVar8 + 1;
      }
      pcVar7 = param_2;
      puVar6 = puVar2;
      for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *(undefined8 *)pcVar7;
        pcVar7 = pcVar7 + 8;
        puVar6 = puVar6 + 1;
      }
      ppuVar8 = &local_80;
      for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined8 **)param_2 = *ppuVar8;
        ppuVar8 = ppuVar8 + 1;
        param_2 = param_2 + 8;
      }
      uVar3 = FUN_149594bf0(*param_1,uVar3,puVar2);
      *(undefined8 *)(lVar1 + 0x30) = uVar3;
      *(undefined2 *)((longlong)param_1 + 0x24) = 1;
    }
  }
LAB_1495c2ab8:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495c2bc8 FUN_1495c2bc8 body=198 status=ok
// SIG undefined FUN_1495c2bc8(void)

undefined8 FUN_1495c2bc8(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  
  piVar1 = (int *)param_1[5];
  if (0 < *piVar1) {
    piVar6 = piVar1 + 2;
    lVar7 = 0;
    do {
      uVar5 = *(undefined8 *)piVar6;
      uVar3 = FUN_14959fe84(0,param_2,uVar5,0xffffffff);
      if (uVar3 < 2) {
        plVar2 = (longlong *)*param_1;
        lVar4 = FUN_1495862ab(plVar2,uVar5);
        if (((lVar4 == 0) && (lVar4 = *(longlong *)(*plVar2 + 0x10), lVar4 == 0)) ||
           (*(code **)(lVar4 + 0x18) == FUN_1495b4b78)) {
          return 1;
        }
      }
      lVar7 = lVar7 + 1;
      piVar6 = piVar6 + 8;
    } while (lVar7 < *piVar1);
  }
  if ((*(byte *)(param_2 + 5) & 8) != 0) {
    *(undefined2 *)((longlong)param_1 + 0x24) = 0;
    return 2;
  }
  uVar5 = FUN_14959f99d(param_1,param_2);
  return uVar5;
}



// FUNCTION 1495c2c8e FUN_1495c2c8e body=782 status=ok
// SIG undefined FUN_1495c2c8e(void)

undefined8 FUN_1495c2c8e(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  char *pcVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined8 *unaff_RBX;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
  plVar5 = (longlong *)*plVar4;
  piVar13 = (int *)plVar4[1];
  lVar6 = plVar4[2];
  cVar2 = *param_2;
  if (cVar2 != -0x5a) {
    if (cVar2 == -0x5b) {
      if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) != 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0x20) != (uint)(byte)param_2[2]) {
        return 0;
      }
      uVar14 = *(uint *)(lVar6 + 0x38);
      if ((int)uVar14 < 1) {
        uVar15 = 0;
      }
      else {
        unaff_RBX = *(undefined8 **)(lVar6 + 0x30);
        uVar15 = 0;
        do {
          iVar11 = FUN_14959fe84(0,*unaff_RBX,param_2,0xffffffff);
          uVar14 = *(uint *)(lVar6 + 0x38);
          if (iVar11 == 0) break;
          uVar15 = uVar15 + 1;
          unaff_RBX = unaff_RBX + 3;
        } while ((int)uVar15 < (int)uVar14);
      }
      if ((int)uVar14 <= (int)uVar15) {
        uVar3 = *(undefined1 *)(*plVar5 + 0x5e);
        lVar18 = *(longlong *)(lVar6 + 0x30);
        uVar17 = (ulonglong)(int)uVar14;
        lVar9 = lVar18;
        if ((uVar17 & uVar17 - 1) == 0) {
          lVar9 = 0x18;
          if (uVar14 != 0) {
            lVar9 = uVar17 * 0x30;
          }
          lVar9 = FUN_14955d6fd(*plVar5,lVar18,lVar9);
          if (lVar9 == 0) {
            *(longlong *)(lVar6 + 0x30) = lVar18;
            uVar15 = 0xffffffff;
            goto LAB_1495c2eaf;
          }
        }
        puVar1 = (undefined8 *)(lVar9 + uVar17 * 0x18);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar9 + 0x10 + uVar17 * 0x18) = 0;
        *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + 1;
        *(longlong *)(lVar6 + 0x30) = lVar9;
        uVar15 = uVar14;
        if (-1 < (int)uVar14) {
          puVar1 = (undefined8 *)(lVar9 + (ulonglong)uVar14 * 0x18);
          *puVar1 = param_2;
          iVar11 = (int)plVar5[7] + 1;
          *(int *)(plVar5 + 7) = iVar11;
          *(int *)(puVar1 + 2) = iVar11;
          uVar16 = 0;
          if (*(undefined4 **)(param_2 + 0x20) != (undefined4 *)0x0) {
            uVar16 = **(undefined4 **)(param_2 + 0x20);
          }
          uVar10 = FUN_14955c8a3(*plVar5,*(undefined8 *)(param_2 + 8),uVar16,
                                 CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) & 0xffffffff,0);
          puVar1[1] = uVar10;
          if ((param_2[4] & 2U) == 0) {
            *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
          }
          else {
            iVar11 = *(int *)((longlong)plVar5 + 0x34);
            *(int *)((longlong)plVar5 + 0x34) = iVar11 + 1;
            *(int *)((longlong)puVar1 + 0x14) = iVar11;
          }
        }
      }
LAB_1495c2eaf:
      *(short *)(param_2 + 0x32) = (short)uVar15;
      *(longlong *)(param_2 + 0x38) = lVar6;
      return 1;
    }
    if (cVar2 != -0x5c) {
      return 0;
    }
  }
  if ((piVar13 != (int *)0x0) && (iVar11 = *piVar13, 0 < iVar11)) {
    piVar13 = piVar13 + 0x13;
    do {
      if (*(int *)(param_2 + 0x2c) == *piVar13) {
        lVar18 = *(longlong *)(lVar6 + 0x20);
        iVar11 = *(int *)(lVar6 + 0x28);
        uVar17 = (ulonglong)iVar11;
        if ((longlong)uVar17 < 1) goto LAB_1495c2d8d;
        piVar13 = (int *)(lVar18 + 0xc);
        iVar12 = 0;
        goto LAB_1495c2d70;
      }
      piVar13 = piVar13 + 0x1c;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return 1;
  while( true ) {
    iVar12 = iVar12 + 1;
    piVar13 = piVar13 + 8;
    if (iVar11 == iVar12) break;
LAB_1495c2d70:
    if ((piVar13[-1] == *(int *)(param_2 + 0x2c)) && (*piVar13 == (int)*(short *)(param_2 + 0x30)))
    goto LAB_1495c2e4d;
  }
LAB_1495c2d8d:
  lVar9 = lVar18;
  if (((uVar17 & uVar17 - 1) == 0) && (lVar9 = FUN_14955d6fd(*plVar5,lVar18), lVar9 == 0)) {
    *(longlong *)(lVar6 + 0x20) = lVar18;
    iVar12 = -1;
  }
  else {
    lVar18 = uVar17 * 0x20;
    puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar9 + lVar18) = 0;
    ((undefined8 *)(lVar9 + lVar18))[1] = 0;
    *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + 1;
    *(longlong *)(lVar6 + 0x20) = lVar9;
    iVar12 = iVar11;
    if (-1 < iVar11) {
      *(undefined8 *)(lVar9 + lVar18) = *(undefined8 *)(param_2 + 0x40);
      *(undefined4 *)(lVar9 + 8 + lVar18) = *(undefined4 *)(param_2 + 0x2c);
      *(int *)(lVar9 + 0xc + lVar18) = (int)*(short *)(param_2 + 0x30);
      iVar11 = (int)plVar5[7] + 1;
      *(int *)(plVar5 + 7) = iVar11;
      *(int *)(lVar9 + 0x14 + lVar18) = iVar11;
      *(undefined4 *)(lVar9 + 0x10 + lVar18) = 0xffffffff;
      *(char **)(lVar9 + 0x18 + lVar18) = param_2;
      piVar13 = *(int **)(lVar6 + 0x18);
      if ((piVar13 != (int *)0x0) && (0 < *piVar13)) {
        piVar8 = piVar13 + 2;
        iVar11 = 0;
        do {
          pcVar7 = *(char **)piVar8;
          if (((*pcVar7 == -0x5c) && (*(int *)(pcVar7 + 0x2c) == *(int *)(param_2 + 0x2c))) &&
             (*(short *)(pcVar7 + 0x30) == *(short *)(param_2 + 0x30))) {
            *(int *)(lVar9 + lVar18 + 0x10) = iVar11;
            goto LAB_1495c2e4d;
          }
          iVar11 = iVar11 + 1;
          piVar8 = piVar8 + 8;
        } while (*piVar13 != iVar11);
      }
      iVar11 = *(int *)(lVar6 + 0xc);
      *(int *)(lVar6 + 0xc) = iVar11 + 1;
      *(int *)(lVar9 + lVar18 + 0x10) = iVar11;
    }
  }
LAB_1495c2e4d:
  *(longlong *)(param_2 + 0x38) = lVar6;
  *param_2 = -0x5a;
  *(short *)(param_2 + 0x32) = (short)iVar12;
  return 1;
}



// FUNCTION 1495c2fa6 FUN_1495c2fa6 body=134 status=ok
// SIG undefined FUN_1495c2fa6(void)

longlong FUN_1495c2fa6(longlong *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                      uint *param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (((*(byte *)(*param_1 + 0x32) & 4) == 0) || (lVar2 = FUN_1495ab188(), lVar2 == 0)) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar4 = lVar2;
    do {
      if ((*(byte *)(lVar4 + 0x10) == param_3) &&
         (iVar1 = FUN_1495c3af4(*(undefined8 *)(lVar4 + 0x20),param_4), iVar1 != 0)) {
        uVar3 = uVar3 | *(byte *)(lVar4 + 0x11);
      }
      lVar4 = *(longlong *)(lVar4 + 0x40);
    } while (lVar4 != 0);
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar3;
  }
  if (uVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1495c302c FUN_1495c302c body=292 status=ok
// SIG undefined FUN_1495c302c(void)

undefined8 FUN_1495c302c(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = 0;
  if ((*(byte *)(*param_1 + 0x31) & 0x40) != 0) {
    lVar4 = *param_2;
    lVar3 = param_2[4];
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar6 = 0;
      do {
        lVar8 = *(longlong *)(lVar3 + 0x10);
        if (lVar4 == 0) {
          if (lVar8 == 0) {
            return 2;
          }
        }
        else if (lVar8 != 0) {
          lVar7 = 0;
          do {
            bVar1 = *(byte *)(lVar4 + lVar7);
            if (bVar1 == *(byte *)(lVar8 + lVar7)) {
              if ((ulonglong)bVar1 == 0) {
                return 2;
              }
            }
            else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar8 + lVar7)]) break;
            lVar7 = lVar7 + 1;
          } while( true );
        }
        uVar5 = uVar6;
        if (0 < (longlong)*(int *)(lVar3 + 0x28)) {
          lVar8 = 0;
          while( true ) {
            iVar2 = *(int *)(lVar3 + 0x40 + lVar8);
            uVar5 = 1;
            if (-1 < *(int *)(param_3 + (longlong)iVar2 * 4)) break;
            if (((param_4 != 0) && (iVar2 == *(short *)((longlong)param_2 + 0x44))) ||
               (lVar8 = lVar8 + 0x10, uVar5 = uVar6,
               (longlong)*(int *)(lVar3 + 0x28) * 0x10 == lVar8)) break;
          }
        }
        lVar3 = *(longlong *)(lVar3 + 8);
        uVar6 = uVar5;
      } while (lVar3 != 0);
    }
    lVar4 = FUN_14958201d(param_2[0xe] + 0x50,lVar4,0);
    for (lVar4 = *(longlong *)(lVar4 + 0x10); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      iVar2 = FUN_1495c3ba1(param_2,lVar4,param_3,param_4);
      if ((iVar2 != 0) && (uVar5 = 1, *(char *)(lVar4 + 0x2e) != '\0')) {
        return 2;
      }
    }
  }
  return uVar5;
}



// FUNCTION 1495c3150 FUN_1495c3150 body=178 status=ok
// SIG undefined FUN_1495c3150(void)

undefined8 FUN_1495c3150(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  uint uVar4;
  
  if (*(int *)((longlong)param_2 + 0x54) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x1001) != 0) {
      lVar1 = *param_1;
      uVar4 = (uint)*(undefined8 *)(lVar1 + 0x30);
      if ((*(uint *)(param_2 + 8) & 1) == 0) {
        if (((uVar4 >> 0x1c & 1) != 0) &&
           ((*(longlong *)(lVar1 + 0x210) == 0 && (*(int *)(lVar1 + 0xd4) == 0)))) {
LAB_1495c31e0:
          pcVar3 = "table %s may not be modified";
          goto LAB_1495c31e7;
        }
      }
      else if (((uVar4 & 0x10000001) != 1) && (*(char *)((longlong)param_1 + 0x1e) == '\0'))
      goto LAB_1495c31e0;
    }
  }
  else {
    plVar2 = (longlong *)param_2[0xc];
    if (plVar2 != (longlong *)0x0) {
      do {
        if (*plVar2 == *param_1) goto LAB_1495c3176;
        plVar2 = (longlong *)plVar2[5];
      } while (plVar2 != (longlong *)0x0);
    }
    plVar2 = (longlong *)0x0;
LAB_1495c3176:
    if (*(longlong *)(*(longlong *)plVar2[1] + 0x68) == 0) goto LAB_1495c31e0;
  }
  if (param_3 != 0) {
    return 0;
  }
  if (param_2[3] == 0) {
    return 0;
  }
  pcVar3 = "cannot modify %s because it is a view";
LAB_1495c31e7:
  FUN_14955a364(param_1,pcVar3,*param_2);
  return 1;
}



// FUNCTION 1495c3202 FUN_1495c3202 body=348 status=ok
// SIG undefined FUN_1495c3202(void)

void FUN_1495c3202(longlong *param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_1;
  lVar6 = -1000000;
  if (param_2[0xe] != 0) {
    lVar6 = -0x100000000;
    plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x20) + 0x18);
    do {
      lVar6 = lVar6 + 0x100000000;
      lVar2 = *plVar5;
      plVar5 = plVar5 + 4;
    } while (lVar2 != param_2[0xe]);
    lVar6 = lVar6 >> 0x20;
  }
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1495a1c89(lVar4,param_3,0,0);
  }
  lVar2 = FUN_14958f97b(param_1,0,0,0);
  if (lVar2 != 0) {
    uVar3 = FUN_149559683(lVar4,*param_2);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    uVar3 = FUN_149559683(lVar4,*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + lVar6 * 0x20));
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
  }
  local_78 = 0;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0x20000;
  lVar4 = FUN_14958f426(param_1,0,lVar2,uVar1);
  local_70 = 0xc;
  local_68 = 0;
  uStack_60 = 0;
  local_6c = param_4;
  FUN_14958cf93(param_1,lVar4);
  if (lVar4 == 0) {
    if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1495c3387 FUN_1495c3387 body=543 status=ok
// SIG undefined FUN_1495c3387(void)

ulonglong FUN_1495c3387(longlong *param_1,undefined8 *param_2,int param_3,ushort param_4,int param_5
                       ,char *param_6,int *param_7,uint *param_8)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar7;
  longlong local_50;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar3 = 0;
  if (*(int *)((longlong)param_2 + 0x54) == 0) {
    iVar4 = -1000000;
    if (param_2[0xe] != 0) {
      iVar4 = -1;
      plVar1 = (longlong *)(*(longlong *)(*param_1 + 0x20) + 0x18);
      do {
        iVar4 = iVar4 + 1;
        lVar5 = *plVar1;
        plVar1 = plVar1 + 4;
      } while (lVar5 != param_2[0xe]);
    }
    local_50 = param_1[2];
    if (local_50 == 0) {
      if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23) = 1;
      }
      local_50 = FUN_14955a44a(param_1);
    }
    if (param_5 < 0) {
      param_5 = *(int *)((longlong)param_1 + 0x34);
    }
    if (param_7 != (int *)0x0) {
      *param_7 = param_5;
    }
    if (((*(byte *)(param_2 + 8) & 0x80) == 0) && ((param_6 == (char *)0x0 || (*param_6 != '\0'))))
    {
      FUN_14959b02c(param_1,param_5,iVar4,param_2,CONCAT44(uVar7,param_3));
    }
    else {
      FUN_14959b139(param_1,iVar4,*(undefined4 *)(param_2 + 7),param_3 == 0x61,*param_2);
    }
    uVar2 = param_5 + 1;
    if (param_8 != (uint *)0x0) {
      *param_8 = uVar2;
    }
    lVar5 = param_2[2];
    if (lVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        if ((*(uint *)(lVar5 + 100) & 3) == 2) {
          bVar6 = (*(byte *)(param_2 + 8) & 0x80) != 0;
          param_4 = param_4 & 0xff;
          if (bVar6) {
            param_4 = 0;
          }
          if (bVar6 && param_7 != (int *)0x0) {
            *param_7 = (int)(uVar2 + uVar3);
            param_4 = 0;
          }
        }
        if ((param_6 == (char *)0x0) || (param_6[uVar3 + 1] != '\0')) {
          FUN_149584f48(local_50,param_3,uVar2 + uVar3,*(undefined4 *)(lVar5 + 0x58),iVar4);
          FUN_14959b2a7(param_1,lVar5);
          if (0 < (longlong)*(int *)(local_50 + 0x90)) {
            *(ushort *)
             (*(longlong *)(local_50 + 0x88) + -0x16 + (longlong)*(int *)(local_50 + 0x90) * 0x18) =
                 param_4 & 0xff;
          }
        }
        uVar3 = uVar3 + 1;
        lVar5 = *(longlong *)(lVar5 + 0x28);
      } while (lVar5 != 0);
      uVar2 = uVar2 + (int)uVar3;
    }
    if (*(int *)((longlong)param_1 + 0x34) < (int)uVar2) {
      *(uint *)((longlong)param_1 + 0x34) = uVar2;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1495c35a6 FUN_1495c35a6 body=186 status=ok
// SIG undefined FUN_1495c35a6(void)

void FUN_1495c35a6(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[0x14];
  if ((longlong *)param_1[0x14] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  iVar1 = (int)plVar4[0x23];
  if (0 < (longlong)iVar1) {
    lVar3 = 0;
    do {
      if (*(longlong *)(plVar4[0x2e] + lVar3 * 8) == param_2) {
        return;
      }
      lVar3 = lVar3 + 1;
    } while (iVar1 != lVar3);
  }
  lVar3 = FUN_1495539bb(plVar4[0x2e],(longlong)(iVar1 * 8 + 8));
  if (lVar3 == 0) {
    lVar3 = *plVar4;
    if ((*(char *)(lVar3 + 0x61) == '\0') && (*(char *)(lVar3 + 0x62) == '\0')) {
      *(undefined1 *)(lVar3 + 0x61) = 1;
      if (0 < *(int *)(lVar3 + 0xd4)) {
        *(undefined4 *)(lVar3 + 0x170) = 1;
      }
      *(int *)(lVar3 + 0x178) = *(int *)(lVar3 + 0x178) + 1;
      *(undefined2 *)(lVar3 + 0x17c) = 0;
      if (*(longlong *)(lVar3 + 0x138) != 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x138) + 0x18) = 7;
      }
    }
  }
  else {
    plVar4[0x2e] = lVar3;
    lVar2 = plVar4[0x23];
    *(int *)(plVar4 + 0x23) = (int)lVar2 + 1;
    *(longlong *)(lVar3 + (longlong)(int)lVar2 * 8) = param_2;
  }
  return;
}



// FUNCTION 1495c3660 FUN_1495c3660 body=1172 status=ok
// SIG undefined FUN_1495c3660(void)

void FUN_1495c3660(longlong *param_1,longlong *param_2,longlong param_3,int param_4,
                  undefined4 param_5,undefined4 param_6,short param_7,char param_8,
                  undefined1 param_9,char param_10,int param_11)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 uVar13;
  undefined4 uVar15;
  ulonglong uVar14;
  undefined8 in_stack_ffffffffffffff70;
  longlong *plVar16;
  int local_6c;
  char local_60;
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  plVar2 = (longlong *)param_1[2];
  iVar11 = *(int *)((longlong)param_1 + 0x44);
  iVar9 = iVar11 + -1;
  *(int *)((longlong)param_1 + 0x44) = iVar9;
  local_60 = ((*(byte *)(param_2 + 8) & 0x80) == 0) * '\x03' + '\x1d';
  if (param_10 == '\0') {
    uVar13 = CONCAT44(uVar15,param_6);
    iVar5 = FUN_149584f48(plVar2,local_60,param_4,iVar9,uVar13);
    uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if (*(char *)(*plVar2 + 0x61) == '\0') {
      lVar8 = plVar2[0x11];
      *(undefined1 *)(lVar8 + 1 + (longlong)iVar5 * 0x18) = 0xfd;
      *(int *)(lVar8 + 0x10 + (longlong)iVar5 * 0x18) = (int)param_7;
    }
  }
  local_6c = 0;
  bVar12 = false;
  if ((*(byte *)(*param_1 + 0x31) & 0x40) == 0) {
LAB_1495c3753:
    if ((param_3 == 0) && (!bVar12)) goto LAB_1495c3915;
  }
  else {
    lVar8 = FUN_14958201d(param_2[0xe] + 0x50,*param_2,0);
    if (*(longlong *)(lVar8 + 0x10) == 0) {
      bVar12 = param_2[4] != 0;
      goto LAB_1495c3753;
    }
  }
  uVar14 = CONCAT44(uVar15,3);
  uVar10 = 0;
  uVar6 = FUN_1495c3c69(param_1,param_3,0,0,uVar14,param_2,param_9);
  uVar7 = FUN_1495c3d3b(param_1,param_2);
  iVar5 = (int)param_1[7];
  local_6c = iVar5 + 1;
  *(int *)(param_1 + 7) = iVar5 + 1 + (int)*(short *)((longlong)param_2 + 0x46);
  uVar14 = uVar14 & 0xffffffff00000000;
  FUN_149584f48(plVar2,0x4d,param_6,local_6c,uVar14);
  uVar15 = (undefined4)(uVar14 >> 0x20);
  sVar4 = *(short *)((longlong)param_2 + 0x46);
  if (0 < sVar4) {
    do {
      uVar15 = (undefined4)(uVar14 >> 0x20);
      if (((uVar7 | uVar6) == 0xffffffff) ||
         ((uVar10 < 0x20 && (((uVar7 | uVar6) >> (uVar10 & 0x1f) & 1) != 0)))) {
        sVar4 = FUN_14959cc88(param_2,uVar10);
        uVar14 = CONCAT44(uVar15,(int)sVar4 + iVar5 + 2);
        FUN_14959f097(plVar2,param_2,param_4,uVar10,uVar14);
        sVar4 = *(short *)((longlong)param_2 + 0x46);
      }
      uVar15 = (undefined4)(uVar14 >> 0x20);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)sVar4);
  }
  lVar8 = plVar2[0x12];
  plVar16 = param_2;
  FUN_1495c3e6e(param_1,param_3,0x7e,0,CONCAT44(uVar15,1),param_2,local_6c,param_9,iVar9);
  if ((int)lVar8 < (int)plVar2[0x12]) {
    iVar5 = FUN_149584f48(plVar2,local_60,param_4,iVar9,param_6);
    param_11 = -1;
    if (*(char *)(*plVar2 + 0x61) == '\0') {
      lVar8 = plVar2[0x11];
      *(undefined1 *)(lVar8 + 1 + (longlong)iVar5 * 0x18) = 0xfd;
      *(int *)(lVar8 + 0x10 + (longlong)iVar5 * 0x18) = (int)param_7;
    }
  }
  uVar14 = (ulonglong)plVar16 & 0xffffffff00000000;
  FUN_1495c3f0e(param_1,param_2,local_6c,0,0,uVar14);
  uVar6 = (uint)(uVar14 >> 0x20);
LAB_1495c3915:
  if (param_2[3] == 0) {
    uVar13 = CONCAT44(uVar6,param_11);
    uVar14 = 0;
    FUN_1495c4664(param_1,param_2,param_4,param_5,0,uVar13);
    uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
    uVar14 = uVar14 & 0xffffffff00000000;
    FUN_149584f48(plVar2,0x7a,param_4,param_8 != '\0',uVar14);
    if (*(char *)((longlong)param_1 + 0x1e) == '\0') {
LAB_1495c396e:
      if (*(char *)(*plVar2 + 0x61) == '\0') {
        lVar8 = plVar2[0x11];
        lVar3 = plVar2[0x12];
        *(undefined1 *)(lVar8 + -0x17 + (longlong)(int)lVar3 * 0x18) = 0xfa;
        *(longlong **)(lVar8 + -8 + (longlong)(int)lVar3 * 0x18) = param_2;
      }
    }
    else if (*param_2 != 0) {
      lVar8 = 0;
      do {
        bVar1 = *(byte *)(*param_2 + lVar8);
        if (bVar1 == "sqlite_stat1"[lVar8]) {
          if ((ulonglong)bVar1 == 0) goto LAB_1495c396e;
        }
        else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)"sqlite_stat1"[lVar8]]) break;
        lVar8 = lVar8 + 1;
      } while( true );
    }
    if ((param_10 != '\0') && (0 < (longlong)(int)plVar2[0x12])) {
      *(undefined2 *)(plVar2[0x11] + -0x16 + (longlong)(int)plVar2[0x12] * 0x18) = 4;
    }
    if (param_11 != param_4 && -1 < param_11) {
      FUN_149584f48(plVar2,0x7a,param_11,0,uVar14 & 0xffffffff00000000);
    }
    if (0 < (longlong)(int)plVar2[0x12]) {
      *(ushort *)(plVar2[0x11] + -0x16 + (longlong)(int)plVar2[0x12] * 0x18) =
           (ushort)(param_10 == '\x02') * 2;
    }
  }
  uVar15 = 0;
  FUN_1495c47bb(param_1,param_2,0,local_6c,0,(ulonglong)uVar6 << 0x20);
  FUN_1495c3e6e(param_1,param_3,0x7e,0,CONCAT44(uVar15,2),param_2,local_6c,param_9,iVar9);
  lVar8 = plVar2[3];
  iVar11 = -iVar11;
  if (*(int *)(lVar8 + 0x44) + *(int *)(lVar8 + 0x48) < 0) {
    FUN_1495a1bff(lVar8,plVar2,iVar11);
    return;
  }
  *(int *)(*(longlong *)(lVar8 + 0x50) + (longlong)iVar11 * 4) = (int)plVar2[0x12];
  return;
}



// FUNCTION 1495c3af4 FUN_1495c3af4 body=173 status=ok
// SIG undefined FUN_1495c3af4(void)

undefined8 FUN_1495c3af4(longlong *param_1,int *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == (int *)0x0 || param_1 == (longlong *)0x0) {
LAB_1495c3b10:
    uVar2 = 1;
  }
  else if ((longlong)*param_2 < 1) {
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      if (0 < (int)*(uint *)(param_1 + 1)) {
        uVar3 = 0;
LAB_1495c3b50:
        lVar5 = 0;
        do {
          bVar1 = *(byte *)(*(longlong *)(*param_1 + uVar3 * 0x10) + lVar5);
          if (bVar1 == *(byte *)(*(longlong *)(param_2 + lVar4 * 8 + 4) + lVar5)) {
            if ((ulonglong)bVar1 == 0) goto LAB_1495c3b10;
          }
          else if ((&DAT_14bd3ff30)[bVar1] !=
                   (&DAT_14bd3ff30)[*(byte *)(*(longlong *)(param_2 + lVar4 * 8 + 4) + lVar5)])
          goto LAB_1495c3b83;
          lVar5 = lVar5 + 1;
        } while( true );
      }
LAB_1495c3b8b:
      lVar4 = lVar4 + 1;
      uVar2 = 0;
    } while (lVar4 != *param_2);
  }
  return uVar2;
LAB_1495c3b83:
  uVar3 = uVar3 + 1;
  if (uVar3 == *(uint *)(param_1 + 1)) goto LAB_1495c3b8b;
  goto LAB_1495c3b50;
}



// FUNCTION 1495c3ba1 FUN_1495c3ba1 body=200 status=ok
// SIG undefined FUN_1495c3ba1(void)

undefined8 FUN_1495c3ba1(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (0 < (longlong)*(int *)(param_2 + 0x28)) {
    lVar5 = 0;
    do {
      if (0 < *(short *)(param_1 + 0x46)) {
        lVar3 = *(longlong *)(param_2 + 0x48 + lVar5 * 0x10);
        uVar4 = 0;
        do {
          if ((-1 < *(int *)(param_3 + uVar4 * 4)) ||
             ((param_4 != 0 && (uVar4 == (uint)(int)*(short *)(param_1 + 0x44))))) {
            plVar6 = (longlong *)(uVar4 * 0x20 + *(longlong *)(param_1 + 8));
            if (lVar3 != 0) {
              lVar7 = 0;
              do {
                bVar1 = *(byte *)(*plVar6 + lVar7);
                bVar2 = *(byte *)(lVar3 + lVar7);
                if (bVar1 == bVar2) {
                  if ((ulonglong)bVar1 == 0) {
                    return 1;
                  }
                }
                else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) goto LAB_1495c3c3f;
                lVar7 = lVar7 + 1;
              } while( true );
            }
            if ((*(byte *)((longlong)plVar6 + 0x1c) & 1) != 0) {
              return 1;
            }
          }
LAB_1495c3c3f:
          uVar4 = uVar4 + 1;
        } while (uVar4 != (longlong)*(short *)(param_1 + 0x46));
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_2 + 0x28));
  }
  return 0;
}



// FUNCTION 1495c3c69 FUN_1495c3c69 body=210 status=ok
// SIG undefined FUN_1495c3c69(void)

uint FUN_1495c3c69(longlong param_1,longlong param_2,longlong param_3,uint param_4,byte param_5,
                  undefined8 param_6,int param_7)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      if (((0x7f - (param_3 == 0) == (uint)*(byte *)(param_2 + 0x10)) &&
          ((*(byte *)(param_2 + 0x11) & param_5) != 0)) &&
         (iVar1 = FUN_1495c3af4(*(undefined8 *)(param_2 + 0x20),param_3), iVar1 != 0)) {
        lVar2 = *(longlong *)(param_1 + 0xa0);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          lVar2 = param_1;
        }
        for (plVar3 = *(longlong **)(lVar2 + 0x180); plVar3 != (longlong *)0x0;
            plVar3 = (longlong *)plVar3[1]) {
          if ((*plVar3 == param_2) && ((int)plVar3[3] == param_7)) goto LAB_1495c3d02;
        }
        plVar3 = (longlong *)FUN_1495c50aa(param_1,param_2,param_6,param_7);
        if (plVar3 != (longlong *)0x0) {
LAB_1495c3d02:
          uVar4 = uVar4 | *(uint *)((longlong)plVar3 + (ulonglong)param_4 * 4 + 0x1c);
        }
      }
      param_2 = *(longlong *)(param_2 + 0x40);
    } while (param_2 != 0);
  }
  return uVar4;
}



// FUNCTION 1495c3d3b FUN_1495c3d3b body=306 status=ok
// SIG undefined FUN_1495c3d3b(void)

uint FUN_1495c3d3b(longlong *param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = 0;
  if ((*(byte *)(*param_1 + 0x31) & 0x40) != 0) {
    lVar3 = param_2[4];
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = 0;
      do {
        if (0 < (longlong)*(int *)(lVar3 + 0x28)) {
          lVar6 = 0;
          do {
            iVar2 = *(int *)(lVar3 + 0x40 + lVar6);
            uVar7 = 1 << ((byte)iVar2 & 0x1f);
            if (0x1f < iVar2) {
              uVar7 = 0xffffffff;
            }
            uVar4 = uVar4 | uVar7;
            lVar6 = lVar6 + 0x10;
          } while ((longlong)*(int *)(lVar3 + 0x28) * 0x10 != lVar6);
        }
        lVar3 = *(longlong *)(lVar3 + 8);
      } while (lVar3 != 0);
    }
    lVar3 = FUN_14958201d(param_2[0xe] + 0x50,*param_2,0);
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      do {
        local_48 = 0;
        local_58 = 0;
        FUN_1495c58ff(param_1,param_2,lVar3,&local_48);
        if ((local_48 != 0) && ((ulonglong)*(ushort *)(local_48 + 0x5e) != 0)) {
          uVar5 = 0;
          do {
            sVar1 = *(short *)(*(longlong *)(local_48 + 8) + uVar5 * 2);
            uVar7 = 1 << ((byte)sVar1 & 0x1f);
            if (0x1f < sVar1) {
              uVar7 = 0xffffffff;
            }
            uVar4 = uVar4 | uVar7;
            uVar5 = uVar5 + 1;
          } while (*(ushort *)(local_48 + 0x5e) != uVar5);
        }
        lVar3 = *(longlong *)(lVar3 + 0x18);
      } while (lVar3 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1495c3e6e FUN_1495c3e6e body=160 status=ok
// SIG undefined FUN_1495c3e6e(void)

void FUN_1495c3e6e(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x40)) {
    if (((*(byte *)(param_2 + 0x10) == param_3) && (*(byte *)(param_2 + 0x11) == param_5)) &&
       (iVar1 = FUN_1495c3af4(*(undefined8 *)(param_2 + 0x20),param_4), iVar1 != 0)) {
      FUN_1495c5be3(param_1,param_2,param_6,param_7,param_8,param_9);
    }
  }
  return;
}



// FUNCTION 1495c3f0e FUN_1495c3f0e body=1877 status=ok
// SIG undefined FUN_1495c3f0e(void)

void FUN_1495c3f0e(longlong *param_1,longlong *param_2,undefined8 param_3,int param_4,
                  longlong param_5,int param_6)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 **ppuVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 **ppuVar16;
  undefined1 auStack_f8 [32];
  undefined4 **local_d8;
  undefined4 *local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  char local_a1;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  int local_84;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  short *local_68;
  undefined4 local_5c;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = *param_1;
  local_84 = param_4;
  local_80 = param_3;
  if ((*(byte *)(lVar8 + 0x31) & 0x40) != 0) {
    lVar15 = param_2[0xe];
    if (lVar15 == 0) {
      iVar13 = -1000000;
    }
    else {
      iVar13 = -1;
      plVar7 = (longlong *)(*(longlong *)(lVar8 + 0x20) + 0x18);
      do {
        iVar13 = iVar13 + 1;
        lVar2 = *plVar7;
        plVar7 = plVar7 + 4;
      } while (lVar2 != lVar15);
    }
    local_a1 = *(char *)((longlong)param_1 + 0xca);
    ppuVar10 = (undefined4 **)param_2[4];
    local_a0 = param_1;
    local_98 = lVar8;
    if (ppuVar10 != (undefined4 **)0x0) {
      uVar14 = *(undefined8 *)(*(longlong *)(lVar8 + 0x20) + (longlong)iVar13 * 0x20);
      do {
        local_50 = 0;
        local_58 = (undefined4 *)0x0;
        puVar11 = ppuVar10[2];
        if (param_5 == 0) {
LAB_1495c411c:
          if (*(char *)((longlong)param_1 + 0xca) == '\0') {
            plVar7 = (longlong *)FUN_14955a08c(param_1,0,puVar11,uVar14);
          }
          else {
            plVar7 = (longlong *)FUN_14955d004(lVar8,puVar11,uVar14);
          }
          if (plVar7 != (longlong *)0x0) {
            local_d8 = &local_58;
            iVar5 = FUN_1495c58ff(local_a0,plVar7,ppuVar10);
            if (iVar5 == 0) {
              puVar11 = local_58;
              if (local_58 == (undefined4 *)0x0) {
                local_5c = *(undefined4 *)(ppuVar10 + 8);
                puVar11 = &local_5c;
              }
              uVar12 = 0;
              plVar9 = local_a0;
              local_78 = puVar11;
              local_70 = uVar14;
              if (0 < *(int *)(ppuVar10 + 5)) {
                local_90 = local_50;
                local_68 = (short *)((longlong)plVar7 + 0x44);
                lVar15 = 0;
                uVar12 = 0;
                lVar8 = local_98;
                do {
                  if (puVar11[lVar15] == (int)*(short *)((longlong)param_2 + 0x44)) {
                    puVar11[lVar15] = 0xffffffff;
                  }
                  if (*(longlong *)(lVar8 + 0x1d0) != 0) {
                    psVar6 = local_68;
                    if (local_90 != 0) {
                      psVar6 = (short *)(lVar15 * 2 + *(longlong *)(local_90 + 8));
                    }
                    iVar5 = FUN_1495a6761(plVar9,*plVar7,
                                          *(undefined8 *)(plVar7[1] + (longlong)*psVar6 * 0x20),
                                          iVar13);
                    uVar12 = (uint)(iVar5 == 2);
                    plVar9 = local_a0;
                    lVar8 = local_98;
                    puVar11 = local_78;
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar15 < *(int *)(ppuVar10 + 5));
              }
              local_90 = CONCAT44(local_90._4_4_,uVar12);
              local_d8 = (undefined4 **)*plVar7;
              FUN_14959b139(plVar9,iVar13,(int)plVar7[7],0);
              *(int *)((longlong)local_a0 + 0x34) = *(int *)((longlong)local_a0 + 0x34) + 1;
              if ((int)local_80 != 0) {
                local_b8 = (undefined4)local_90;
                local_d0 = local_78;
                local_c0 = 0xffffffff;
                local_d8 = ppuVar10;
                local_c8 = (int)local_80;
                FUN_1495c5ce9(local_a0,iVar13,plVar7,local_50);
              }
              uVar14 = local_70;
              if (local_84 != 0) {
                plVar9 = (longlong *)local_a0[0x14];
                if ((longlong *)local_a0[0x14] == (longlong *)0x0) {
                  plVar9 = local_a0;
                }
                if (((longlong *)plVar9[0x30] == (longlong *)0x0) ||
                   (((puVar11 = *(undefined4 **)plVar9[0x30], puVar11 != ppuVar10[6] ||
                     (*(char *)((longlong)ppuVar10 + 0x2d) != '\b')) &&
                    ((puVar11 != ppuVar10[7] || (*(char *)((longlong)ppuVar10 + 0x2e) != '\b'))))))
                {
                  local_b8 = (undefined4)local_90;
                  local_c8 = local_84;
                  local_d0 = local_78;
                  local_c0 = 1;
                  local_d8 = ppuVar10;
                  FUN_1495c5ce9(local_a0,iVar13,plVar7,local_50);
                }
              }
              param_1 = local_a0;
              lVar8 = local_98;
              if (local_58 != (undefined4 *)0x0) {
                FUN_14955d65a();
                param_1 = local_a0;
                lVar8 = local_98;
              }
              goto LAB_1495c4084;
            }
          }
          if (local_a1 == '\0') goto LAB_1495c3f47;
          if (*(char *)(local_98 + 0x61) == '\0' && plVar7 == (longlong *)0x0) {
            lVar8 = local_a0[2];
            if (lVar8 == 0) {
              if ((local_a0[0x14] == 0) && ((*(byte *)(*local_a0 + 0x5c) & 8) == 0)) {
                *(undefined1 *)((longlong)local_a0 + 0x23) = 1;
              }
              lVar8 = FUN_14955a44a();
            }
            local_90 = lVar8;
            local_70 = uVar14;
            if (0 < *(int *)(ppuVar10 + 5)) {
              local_78 = (undefined4 *)
                         CONCAT44(local_78._4_4_,*(int *)(lVar8 + 0x90) + *(int *)(ppuVar10 + 5) + 1
                                 );
              local_68 = (short *)CONCAT44(local_68._4_4_,(int)local_80 + 1);
              ppuVar16 = ppuVar10 + 8;
              lVar8 = 0;
              do {
                sVar4 = FUN_14959cc88(*ppuVar10,*(undefined2 *)ppuVar16);
                local_d8 = (undefined4 **)((ulonglong)local_d8 & 0xffffffff00000000);
                FUN_149584f48(local_90,0x32,sVar4 + (int)local_68,(ulonglong)local_78 & 0xffffffff);
                lVar8 = lVar8 + 1;
                ppuVar16 = ppuVar16 + 2;
              } while (lVar8 < *(int *)(ppuVar10 + 5));
            }
            local_d8 = (undefined4 **)((ulonglong)local_d8 & 0xffffffff00000000);
            FUN_149584f48(local_90,0x95,*(undefined1 *)((longlong)ppuVar10 + 0x2c),0xffffffff);
            param_1 = local_a0;
            lVar8 = local_98;
            uVar14 = local_70;
          }
          else {
            param_1 = local_a0;
            lVar8 = local_98;
            if (*(char *)(local_98 + 0x61) != '\0') goto LAB_1495c3f47;
          }
        }
        else {
          if (*param_2 == 0) {
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = (undefined4 *)0x0;
              goto LAB_1495c411c;
            }
          }
          else if (puVar11 != (undefined4 *)0x0) {
            lVar15 = 0;
            do {
              bVar1 = *(byte *)(*param_2 + lVar15);
              if (bVar1 == *(byte *)((longlong)puVar11 + lVar15)) {
                if ((ulonglong)bVar1 == 0) goto LAB_1495c411c;
              }
              else if ((&DAT_14bd3ff30)[bVar1] !=
                       (&DAT_14bd3ff30)[*(byte *)((longlong)puVar11 + lVar15)]) break;
              lVar15 = lVar15 + 1;
            } while( true );
          }
          if (0 < (longlong)*(int *)(ppuVar10 + 5)) {
            lVar15 = 0;
            do {
              iVar5 = *(int *)((longlong)ppuVar10 + lVar15 + 0x40);
              if ((-1 < *(int *)(param_5 + (longlong)iVar5 * 4)) ||
                 ((param_6 != 0 && (iVar5 == *(short *)((longlong)param_2 + 0x44)))))
              goto LAB_1495c411c;
              lVar15 = lVar15 + 0x10;
            } while ((longlong)*(int *)(ppuVar10 + 5) * 0x10 != lVar15);
          }
        }
LAB_1495c4084:
        ppuVar10 = (undefined4 **)ppuVar10[1];
      } while (ppuVar10 != (undefined4 **)0x0);
      lVar15 = param_2[0xe];
    }
    lVar8 = FUN_14958201d(lVar15 + 0x50,*param_2,0);
    ppuVar10 = *(undefined4 ***)(lVar8 + 0x10);
    if (ppuVar10 != (undefined4 **)0x0) {
      plVar7 = local_a0;
      lVar8 = local_98;
      do {
        local_50 = 0;
        local_58 = (undefined4 *)0x0;
        if (((param_5 == 0) ||
            (iVar13 = FUN_1495c3ba1(param_2,ppuVar10,param_5,param_6), plVar7 = local_a0,
            lVar8 = local_98, iVar13 != 0)) &&
           ((*(char *)((longlong)ppuVar10 + 0x2c) != '\0' ||
            ((((*(byte *)(lVar8 + 0x32) & 8) != 0 || (plVar7[0x14] != 0)) ||
             ((char)plVar7[4] != '\0')))))) {
          local_d8 = &local_58;
          iVar13 = FUN_1495c58ff(plVar7,param_2,ppuVar10,&local_50);
          if (iVar13 == 0) {
            lVar8 = FUN_14958f97b(local_a0,0,0,0);
            if (lVar8 != 0) {
              puVar3 = (undefined8 *)*ppuVar10;
              *(undefined8 **)(lVar8 + 0x28) = puVar3;
              *(undefined8 *)(lVar8 + 0x18) = *puVar3;
              *(int *)((longlong)puVar3 + 0x3c) = *(int *)((longlong)puVar3 + 0x3c) + 1;
              iVar13 = *(int *)((longlong)local_a0 + 0x34);
              *(int *)((longlong)local_a0 + 0x34) = iVar13 + 1;
              *(int *)(lVar8 + 0x4c) = iVar13;
              if (local_84 != 0) {
                local_c8 = local_84;
                local_d0 = local_58;
                local_c0 = 0xffffffff;
                local_d8 = ppuVar10;
                FUN_1495c6398(local_a0,lVar8,param_2,local_50);
              }
              if ((int)local_80 != 0) {
                local_90 = CONCAT71(local_90._1_7_,
                                    *(undefined1 *)
                                     ((longlong)ppuVar10 + (0x2e - (ulonglong)(param_5 == 0))));
                local_d0 = local_58;
                local_c0 = 1;
                local_d8 = ppuVar10;
                local_c8 = (int)local_80;
                FUN_1495c6398(local_a0,lVar8,param_2,local_50);
                if ((*(char *)((longlong)ppuVar10 + 0x2c) == '\0') && (((byte)local_90 & 0xfd) != 8)
                   ) {
                  plVar7 = (longlong *)local_a0[0x14];
                  if ((longlong *)local_a0[0x14] == (longlong *)0x0) {
                    plVar7 = local_a0;
                  }
                  *(undefined1 *)((longlong)plVar7 + 0x21) = 1;
                }
              }
              *(undefined8 *)(lVar8 + 0x18) = 0;
              FUN_149582b1a(local_98,lVar8);
            }
            plVar7 = local_a0;
            lVar8 = local_98;
            if (local_58 != (undefined4 *)0x0) {
              FUN_14955d65a(local_98);
              plVar7 = local_a0;
              lVar8 = local_98;
            }
          }
          else if ((local_a1 == '\0') ||
                  (plVar7 = local_a0, lVar8 = local_98, *(char *)(local_98 + 0x61) != '\0')) break;
        }
        ppuVar10 = (undefined4 **)ppuVar10[3];
      } while (ppuVar10 != (undefined4 **)0x0);
    }
  }
LAB_1495c3f47:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495c4664 FUN_1495c4664 body=342 status=ok
// SIG undefined FUN_1495c4664(void)

void FUN_1495c4664(longlong param_1,longlong param_2,undefined4 param_3,int param_4,int *param_5,
                  int param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 *local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = *(undefined8 *)(param_1 + 0x10);
  lVar6 = *(longlong *)(param_2 + 0x10);
  local_58 = param_1;
  if ((*(byte *)(param_2 + 0x40) & 0x80) != 0) {
    lVar5 = lVar6;
    if (lVar6 == 0) goto LAB_1495c4793;
    do {
      if ((*(uint *)(lVar5 + 100) & 3) == 2) goto LAB_1495c46a5;
      plVar1 = (longlong *)(lVar5 + 0x28);
      lVar5 = *plVar1;
    } while (*plVar1 != 0);
  }
  lVar5 = 0;
LAB_1495c46a5:
  if (lVar6 != 0) {
    uVar2 = 0xffffffff;
    lVar3 = 0;
    piVar4 = param_5;
    local_64 = param_3;
    do {
      if (param_5 == (int *)0x0) {
        if (lVar6 != lVar5) goto LAB_1495c46e8;
      }
      else if ((lVar6 != lVar5) && (*piVar4 != 0)) {
LAB_1495c46e8:
        if (param_6 != param_4) {
          local_80 = &local_4c;
          local_88 = 1;
          local_78 = lVar3;
          local_70 = uVar2;
          uVar2 = FUN_1495aa59d(param_1,lVar6,local_64,0);
          local_88 = (uint)*(ushort *)
                            (lVar6 + 0x5e + (ulonglong)((*(byte *)(lVar6 + 100) & 8) == 0) * 2);
          FUN_149584f48(local_60,0x84,param_4);
          FUN_1495aa812(param_1,local_4c);
          lVar3 = lVar6;
        }
      }
      lVar6 = *(longlong *)(lVar6 + 0x28);
      param_4 = param_4 + 1;
      piVar4 = piVar4 + 1;
    } while (lVar6 != 0);
  }
LAB_1495c4793:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495c47bb FUN_1495c47bb body=2286 status=ok
// SIG undefined FUN_1495c47bb(void)

void FUN_1495c47bb(longlong *param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
                  longlong param_5,undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  short *psVar14;
  longlong lVar15;
  uint uVar16;
  void *_Dst;
  char *pcVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined1 auStack_168 [32];
  longlong *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  char local_119;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  char *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e4;
  ulonglong local_e0;
  size_t local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  short *local_c0;
  char *local_b8;
  uint local_b0;
  char *local_a8;
  uint local_a0;
  char *local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  char *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(byte *)(*param_1 + 0x31) & 0x40) != 0) {
    local_f0 = param_3;
    lVar8 = FUN_14958201d(param_2[0xe] + 0x50,*param_2,0);
    plVar20 = *(longlong **)(lVar8 + 0x10);
    if (plVar20 != (longlong *)0x0) {
      uVar18 = (ulonglong)(local_f0 != 0);
      local_c0 = (short *)((longlong)param_2 + 0x44);
      do {
        if ((param_5 == 0) || (iVar6 = FUN_1495c3ba1(param_2,plVar20,param_5,param_6), iVar6 != 0))
        {
          lVar8 = *param_1;
          cVar2 = *(char *)((longlong)plVar20 + uVar18 + 0x2d);
          if ((cVar2 != '\a') || ((*(byte *)(lVar8 + 0x32) & 8) == 0)) {
            _Dst = (void *)plVar20[uVar18 + 6];
            if ((cVar2 != '\0') && (_Dst == (void *)0x0)) {
              local_80 = 0;
              local_88 = 0;
              local_148 = &local_88;
              iVar6 = FUN_1495c58ff(param_1,param_2,plVar20,&local_80);
              _Dst = (void *)0x0;
              if (iVar6 == 0) {
                local_e4 = param_4;
                if ((int)plVar20[5] < 1) {
                  local_108 = 0;
                  local_f8 = 0;
                  local_118 = 0;
                }
                else {
                  local_c8 = plVar20 + 8;
                  local_119 = (cVar2 != '\n' || local_f0 != 0) && cVar2 != '\a';
                  pcVar17 = (char *)0x0;
                  local_e0 = 0;
                  lVar15 = 0;
                  local_118 = 0;
                  local_f8 = 0;
                  local_108 = 0;
                  local_d0 = param_2;
                  do {
                    local_78 = "old";
                    uStack_70 = 3;
                    plVar9 = (longlong *)(pcVar17 + local_88);
                    if (local_88 == 0) {
                      plVar9 = local_c8;
                    }
                    local_98 = "new";
                    uStack_90 = 3;
                    psVar14 = local_c0;
                    if (local_80 != 0) {
                      psVar14 = (short *)(*(longlong *)(local_80 + 8) + local_e0);
                    }
                    lVar3 = *plVar9;
                    local_b8 = *(char **)(param_2[1] + (longlong)*psVar14 * 0x20);
                    uVar16 = 0;
                    uVar7 = 0;
                    local_110 = lVar15;
                    local_100 = pcVar17;
                    if (local_b8 != (char *)0x0) {
                      sVar10 = strlen(local_b8);
                      uVar7 = (uint)sVar10 & 0x3fffffff;
                      param_2 = local_d0;
                    }
                    local_d8 = (longlong)(int)lVar3 * 0x20;
                    local_a8 = *(char **)(*(longlong *)(*plVar20 + 8) + local_d8);
                    local_b0 = uVar7;
                    if (local_a8 != (char *)0x0) {
                      sVar10 = strlen(local_a8);
                      uVar16 = (uint)sVar10 & 0x3fffffff;
                    }
                    local_a0 = uVar16;
                    FUN_14958f7cb(lVar8,0x3b,&local_a8,0);
                    uVar11 = FUN_14958f7cb(lVar8,0x3b,&local_b8,0);
                    uVar12 = FUN_14958f7cb(lVar8,0x3b,&local_78,0);
                    uVar11 = FUN_14958aad5(param_1,0x8b,uVar12,uVar11);
                    uVar11 = FUN_14958aad5(param_1,0x35,uVar11);
                    local_108 = FUN_149594bf0(param_1,local_108,uVar11);
                    if (local_f0 != 0) {
                      uVar11 = FUN_14958f7cb(lVar8,0x3b,&local_b8,0);
                      uVar12 = FUN_14958f7cb(lVar8,0x3b,&local_98,0);
                      FUN_14958aad5(param_1,0x8b,uVar12,uVar11);
                      uVar11 = FUN_14958f7cb(lVar8,0x3b,&local_b8,0);
                      uVar12 = FUN_14958f7cb(lVar8,0x3b,&local_78,0);
                      uVar11 = FUN_14958aad5(param_1,0x8b,uVar12,uVar11);
                      uVar11 = FUN_14958aad5(param_1,0x2d,uVar11);
                      local_118 = FUN_149594bf0(param_1,local_118,uVar11);
                    }
                    pcVar17 = local_100;
                    if (local_119 != '\0') {
                      if (cVar2 == '\t') {
                        if (((*(byte *)(*(longlong *)(*plVar20 + 8) + 0x1c + local_d8) & 0x60) != 0)
                           || (lVar15 = *(longlong *)(*(longlong *)(*plVar20 + 8) + local_d8 + 8),
                              lVar15 == 0)) goto LAB_1495c4c72;
                        puVar13 = (undefined8 *)FUN_1495a1c89(lVar8,lVar15,0);
                      }
                      else if (cVar2 == '\n') {
                        FUN_14958f7cb(lVar8,0x3b,&local_b8,0);
                        uVar11 = FUN_14958f7cb(lVar8,0x3b,&local_98,0);
                        puVar13 = (undefined8 *)FUN_14958aad5(param_1,0x8b,uVar11);
                      }
                      else {
LAB_1495c4c72:
                        puVar13 = (undefined8 *)FUN_14955d750(lVar8,0x48);
                        if (puVar13 == (undefined8 *)0x0) {
                          puVar13 = (undefined8 *)0x0;
                        }
                        else {
                          *puVar13 = 0;
                          puVar13[1] = 0;
                          puVar13[6] = 0;
                          puVar13[7] = 0;
                          puVar13[4] = 0;
                          puVar13[5] = 0;
                          puVar13[2] = 0;
                          puVar13[3] = 0;
                          puVar13[8] = 0;
                          *(undefined1 *)puVar13 = 0x77;
                          *(undefined2 *)((longlong)puVar13 + 0x32) = 0xffff;
                          *(undefined4 *)(puVar13 + 5) = 1;
                        }
                      }
                      local_f8 = FUN_14958f62a(param_1,local_f8,puVar13);
                      FUN_14958f711(param_1,local_f8,&local_a8);
                    }
                    lVar15 = local_110 + 1;
                    local_e0 = local_e0 + 2;
                    pcVar17 = pcVar17 + 4;
                  } while (lVar15 < (int)plVar20[5]);
                }
                if (local_88 != 0) {
                  FUN_14955d65a(lVar8);
                }
                pcVar17 = *(char **)*plVar20;
                uVar7 = 0;
                if (pcVar17 != (char *)0x0) {
                  sVar10 = strlen(pcVar17);
                  uVar7 = (uint)sVar10 & 0x3fffffff;
                }
                local_100 = pcVar17;
                if (cVar2 == '\a') {
                  uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
                  local_78 = "FOREIGN KEY constraint failed";
                  uStack_70 = CONCAT44(uStack_70._4_4_,0x1d);
                  local_98 = pcVar17;
                  lVar15 = FUN_14958f7cb(lVar8,0x47,&local_78,0);
                  if (lVar15 != 0) {
                    *(undefined1 *)(lVar15 + 1) = 2;
                  }
                  local_110 = FUN_14958f97b(param_1,0,&local_98,0);
                  uVar11 = FUN_14958f62a(param_1,0,lVar15);
                  local_128 = 0;
                  local_138 = 0;
                  local_148 = (longlong *)0x0;
                  uStack_140 = 0;
                  local_130 = 0;
                  local_110 = FUN_14958f426(param_1,uVar11,local_110,local_108);
                  local_108 = 0;
                }
                else {
                  local_110 = 0;
                }
                *(int *)(lVar8 + 0x178) = *(int *)(lVar8 + 0x178) + 1;
                *(undefined2 *)(lVar8 + 0x17c) = 0;
                local_e0 = (ulonglong)uVar7;
                local_d8 = local_e0 + 0xa1;
                if (lVar8 == 0) {
                  _Dst = (void *)FUN_145e3bd67(local_d8);
                }
                else {
                  _Dst = (void *)FUN_14955d750(lVar8,local_d8);
                }
                if (_Dst == (void *)0x0) {
                  puVar19 = (undefined1 *)0x0;
                  lVar15 = local_118;
                }
                else {
                  memset(_Dst,0,local_d8);
                  puVar19 = (undefined1 *)((longlong)_Dst + 0x48);
                  *(undefined1 **)((longlong)_Dst + 0x38) = puVar19;
                  *(void **)((longlong)_Dst + 0x60) = (void *)((longlong)_Dst + 0xa0);
                  memcpy((void *)((longlong)_Dst + 0xa0),local_100,local_e0);
                  if (local_108 == 0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = FUN_1495a1c89(lVar8,local_108,1,0);
                  }
                  *(undefined8 *)((longlong)_Dst + 0x68) = uVar11;
                  uVar11 = FUN_1495a22be(lVar8,local_f8,1);
                  *(undefined8 *)((longlong)_Dst + 0x70) = uVar11;
                  uVar11 = FUN_1495a1fd1(lVar8,local_110,1);
                  *(undefined8 *)((longlong)_Dst + 0x58) = uVar11;
                  if (local_118 == 0) {
                    lVar15 = 0;
                  }
                  else {
                    local_100 = (char *)0x0;
                    local_118 = FUN_14958aad5(param_1,0x13,local_118,0);
                    if (local_118 != 0) {
                      local_100 = (char *)FUN_1495a1c89(lVar8,local_118,1,0);
                    }
                    *(char **)((longlong)_Dst + 0x18) = local_100;
                    lVar15 = local_118;
                  }
                }
                piVar1 = (int *)(lVar8 + 0x178);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  uVar5 = *(undefined2 *)(lVar8 + 0x17e);
                }
                else {
                  uVar5 = 0;
                }
                *(undefined2 *)(lVar8 + 0x17c) = uVar5;
                if (local_108 != 0) {
                  local_118 = lVar15;
                  FUN_14958288e(lVar8,local_108);
                  lVar15 = local_118;
                }
                if (lVar15 != 0) {
                  FUN_14958288e(lVar8);
                }
                if (local_f8 != 0) {
                  FUN_149582d29(lVar8);
                }
                if (local_110 != 0) {
                  FUN_149582a1c(lVar8,local_110,1);
                }
                if (*(char *)(lVar8 + 0x61) == '\x01') {
                  FUN_1495860eb(lVar8,_Dst);
                  _Dst = (void *)0x0;
                  param_4 = local_e4;
                }
                else {
                  if (cVar2 == '\a') {
                    uVar4 = 0x88;
                  }
                  else if ((cVar2 == '\n') && (local_f0 == 0)) {
                    uVar4 = 0x7e;
                  }
                  else {
                    uVar4 = 0x7f;
                  }
                  *puVar19 = uVar4;
                  *(void **)(puVar19 + 8) = _Dst;
                  uVar11 = param_2[0xe];
                  *(undefined8 *)((longlong)_Dst + 0x28) = uVar11;
                  *(undefined8 *)((longlong)_Dst + 0x30) = uVar11;
                  plVar20[uVar18 + 6] = (longlong)_Dst;
                  *(byte *)((longlong)_Dst + 0x10) = local_f0 != 0 | 0x7e;
                  param_4 = local_e4;
                }
              }
            }
            if (_Dst != (void *)0x0) {
              uStack_140 = uStack_140 & 0xffffffff00000000;
              local_148 = (longlong *)CONCAT44(local_148._4_4_,2);
              FUN_1495c5be3(param_1,_Dst,param_2,param_4);
            }
          }
        }
        plVar20 = (longlong *)plVar20[3];
      } while (plVar20 != (longlong *)0x0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495c50aa FUN_1495c50aa body=1961 status=ok
// SIG undefined FUN_1495c50aa(void)

undefined8 * FUN_1495c50aa(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  char *pcVar12;
  longlong *plVar13;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  char *local_110;
  longlong *local_108;
  longlong local_100;
  char *local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [4];
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = *param_1;
  plVar13 = (longlong *)param_1[0x14];
  if ((longlong *)param_1[0x14] == (longlong *)0x0) {
    plVar13 = param_1;
  }
  if (lVar1 == 0) {
    puVar6 = (undefined8 *)FUN_145e3bd67(0x28);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[4] = 0;
      puVar6[1] = plVar13[0x30];
      plVar13[0x30] = (longlong)puVar6;
      puVar7 = (undefined8 *)FUN_145e3bd67(0x30);
LAB_1495c51bf:
      if (puVar7 == (undefined8 *)0x0) {
        puVar6[2] = 0;
      }
      else {
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar6[2] = puVar7;
        lVar9 = plVar13[2];
        puVar7[5] = *(undefined8 *)(lVar9 + 0x118);
        *(undefined8 **)(lVar9 + 0x118) = puVar7;
        *puVar6 = param_2;
        *(int *)(puVar6 + 3) = param_4;
        *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
        if (lVar1 == 0) {
          plVar8 = (longlong *)FUN_145e3bd67(0x1a0);
        }
        else {
          plVar8 = (longlong *)FUN_14955d750(lVar1);
        }
        if (plVar8 != (longlong *)0x0) {
          local_c0 = plVar8 + 1;
          local_108 = plVar8;
          memset(local_c0,0,0x198);
          local_b0 = 0;
          uStack_a8 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_b8 = local_108;
          *local_108 = lVar1;
          local_108[0x15] = param_3;
          local_108[0x14] = (longlong)plVar13;
          local_108[0x2b] = *param_2;
          *(char *)(local_108 + 0x19) = (char)param_2[2];
          *(undefined4 *)((longlong)local_108 + 0xbc) = *(undefined4 *)((longlong)param_1 + 0xbc);
          *(undefined1 *)((longlong)local_108 + 0x25) = *(undefined1 *)((longlong)param_1 + 0x25);
          lVar9 = local_108[2];
          if (lVar9 == 0) {
            if ((plVar13 == (longlong *)0x0) && ((*(byte *)(lVar1 + 0x5c) & 8) == 0)) {
              *(undefined1 *)((longlong)local_108 + 0x23) = 1;
            }
            lVar9 = FUN_14955a44a(local_108);
            plVar8 = local_108;
            if (lVar9 != 0) goto LAB_1495c52ea;
          }
          else {
LAB_1495c52ea:
            if (*param_2 != 0) {
              uVar10 = FUN_14955a402(lVar1,"-- TRIGGER %s");
              FUN_14955a5b6(lVar9,0xffffffff,uVar10,0xfffffff9);
            }
            local_d8 = 0;
            local_c8 = lVar9;
            if (param_2[3] != 0) {
              local_d8 = 0;
              lVar9 = FUN_1495a1c89(lVar1,param_2[3],0,0);
              iVar4 = FUN_1495a4109(&local_b8,lVar9);
              if ((iVar4 == 0) && (*(char *)(lVar1 + 0x61) == '\0')) {
                uVar11 = *(int *)((longlong)local_108 + 0x44) - 1;
                local_d8 = (ulonglong)uVar11;
                *(uint *)((longlong)local_108 + 0x44) = uVar11;
                FUN_14959ec19(local_108,lVar9,local_d8,0x10);
              }
              if (lVar9 != 0) {
                FUN_14958288e(lVar1,lVar9);
              }
            }
            pcVar12 = (char *)param_2[7];
            if (pcVar12 != (char *)0x0) {
              local_100 = *local_108;
              local_d0 = local_108[2];
              do {
                cVar3 = (char)param_4;
                if (param_4 == 0xb) {
                  cVar3 = pcVar12[1];
                }
                *(char *)((longlong)local_108 + 0xc9) = cVar3;
                if (*(longlong *)(pcVar12 + 0x40) != 0) {
                  local_f0 = FUN_14955a402(local_100,"-- %s");
                  lVar9 = local_d0;
                  local_118 = local_118 & 0xffffffff00000000;
                  local_f8 = pcVar12;
                  uVar5 = FUN_149584f48(local_d0,0xaa,0x7fffffff,1);
                  pcVar12 = local_f8;
                  FUN_14955a5b6(lVar9,uVar5,local_f0,0xfffffff9);
                }
                cVar3 = *pcVar12;
                if (cVar3 == '}') {
                  local_f8 = *(char **)(pcVar12 + 0x38);
                  if (local_f8 == (char *)0x0) {
                    local_f8 = (char *)0x0;
                  }
                  else {
                    if (*(longlong *)((longlong)local_f8 + 0x18) == 0) {
                      local_f0 = 0;
                    }
                    else {
                      local_f0 = FUN_1495a1c89(local_100,*(longlong *)((longlong)local_f8 + 0x18),0,
                                               0);
                    }
                    local_e8 = FUN_1495a22be(local_100,*(undefined8 *)((longlong)local_f8 + 0x10),0)
                    ;
                    if (*(longlong *)((longlong)local_f8 + 8) == 0) {
                      local_e0 = 0;
                    }
                    else {
                      local_e0 = FUN_1495a1c89(local_100,*(longlong *)((longlong)local_f8 + 8),0,0);
                    }
                    uVar10 = FUN_1495a22be(local_100,*(undefined8 *)local_f8,0);
                    local_118 = local_f0;
                    local_f8 = (char *)FUN_149594678(local_100,uVar10,local_e0,local_e8);
                  }
                  local_f0 = CONCAT44(local_f0._4_4_,(uint)*(byte *)((longlong)local_108 + 0xc9));
                  local_e8 = FUN_1495a2745(local_100,*(undefined8 *)(pcVar12 + 0x30));
                  local_e0 = FUN_1495a1fd1(local_100,*(undefined8 *)(pcVar12 + 0x10),0);
                  uVar10 = FUN_1495c5854(local_108,pcVar12);
                  local_110 = local_f8;
                  local_118 = CONCAT44(local_118._4_4_,(undefined4)local_f0);
                  FUN_149592cb7(local_108,uVar10,local_e0,local_e8);
                }
                else if (cVar3 == '~') {
                  if (*(longlong *)(pcVar12 + 0x20) == 0) {
                    local_f8 = (char *)0x0;
                  }
                  else {
                    local_f8 = (char *)FUN_1495a1c89(local_100,*(longlong *)(pcVar12 + 0x20),0,0);
                  }
                  uVar10 = FUN_1495c5854(local_108,pcVar12);
                  FUN_14958fd0c(local_108,uVar10,local_f8);
                }
                else if (cVar3 == '\x7f') {
                  local_f8 = (char *)CONCAT44(local_f8._4_4_,
                                              (uint)*(byte *)((longlong)local_108 + 0xc9));
                  if (*(longlong *)(pcVar12 + 0x20) == 0) {
                    local_f0 = 0;
                  }
                  else {
                    local_f0 = FUN_1495a1c89(local_100,*(longlong *)(pcVar12 + 0x20),0,0);
                  }
                  local_e8 = FUN_1495a22be(local_100,*(undefined8 *)(pcVar12 + 0x28),0);
                  uVar10 = FUN_1495c5854(local_108,pcVar12);
                  local_118 = CONCAT44(local_118._4_4_,local_f8._0_4_);
                  local_110 = (char *)0x0;
                  FUN_149590b67(local_108,uVar10,local_e8,local_f0);
                }
                else {
                  local_f8 = (char *)FUN_1495a1fd1(local_100,*(undefined8 *)(pcVar12 + 0x10),0);
                  local_80[0] = 4;
                  local_7c = 0;
                  uStack_74 = 0;
                  local_6c = 0;
                  FUN_14958cf93(local_108,local_f8,local_80);
                  if (local_f8 != (char *)0x0) {
                    FUN_149582a1c(local_100,local_f8,1);
                  }
                }
                if (*pcVar12 != -0x78) {
                  local_118 = local_118 & 0xffffffff00000000;
                  FUN_149584f48(local_d0,0x7b,0,0);
                }
                pcVar12 = *(char **)(pcVar12 + 0x48);
              } while (pcVar12 != (char *)0x0);
            }
            lVar9 = local_c8;
            if ((uint)local_d8 != 0) {
              lVar2 = *(longlong *)(local_c8 + 0x18);
              if (*(int *)(lVar2 + 0x44) + *(int *)(lVar2 + 0x48) < 0) {
                FUN_1495a1bff(lVar2,local_c8);
              }
              else {
                *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + (longlong)(int)~(uint)local_d8 * 4) =
                     *(undefined4 *)(local_c8 + 0x90);
              }
            }
            local_118 = local_118 & 0xffffffff00000000;
            FUN_149584f48(lVar9,0x44,0,0);
            if ((int)param_1[6] == 0) {
              param_1[1] = *local_c0;
              *(int *)(param_1 + 6) = (int)local_108[6];
              *(int *)(param_1 + 3) = (int)local_108[3];
            }
            else if (*local_c0 != 0) {
              FUN_14955d65a(*local_108);
            }
            if ((*(char *)(lVar1 + 0x61) == '\0') && ((int)param_1[6] == 0)) {
              uVar10 = *(undefined8 *)(lVar9 + 0x88);
              FUN_1495851c5(lVar9,plVar13 + 0x10);
              *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(lVar9 + 0x90);
              *(undefined8 *)(lVar9 + 0x88) = 0;
              *puVar7 = uVar10;
            }
            plVar8 = local_108;
            *(int *)((longlong)puVar7 + 0xc) = (int)local_108[7];
            *(undefined4 *)(puVar7 + 2) = *(undefined4 *)((longlong)local_108 + 0x34);
            puVar7[4] = param_2;
            *(int *)((longlong)puVar6 + 0x1c) = (int)local_108[0x18];
            *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)local_108 + 0xc4);
            FUN_149569ad7(lVar9);
          }
          FUN_14955aa59(plVar8);
          FUN_14955d65a(lVar1,plVar8);
          goto LAB_1495c5152;
        }
      }
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_14955d750(lVar1,0x28);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[4] = 0;
      puVar6[1] = plVar13[0x30];
      plVar13[0x30] = (longlong)puVar6;
      puVar7 = (undefined8 *)FUN_14955d750(lVar1);
      goto LAB_1495c51bf;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_1495c5152:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 1495c5854 FUN_1495c5854 body=171 status=ok
// SIG undefined FUN_1495c5854(void)

int * FUN_1495c5854(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  lVar1 = *param_1;
  piVar5 = (int *)FUN_14958f97b(param_1,0,0,0);
  if (piVar5 != (int *)0x0) {
    uVar6 = FUN_149559683(lVar1,*(undefined8 *)(param_2 + 0x18));
    *(undefined8 *)(piVar5 + (longlong)*piVar5 * 0x1c + -0x16) = uVar6;
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x28);
    if (lVar2 == 0) {
      uVar4 = 0xfff0bdc0;
    }
    else {
      uVar4 = 0xffffffff;
      plVar7 = (longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18);
      do {
        uVar4 = uVar4 + 1;
        lVar3 = *plVar7;
        plVar7 = plVar7 + 4;
      } while (lVar3 != lVar2);
    }
    if ((uVar4 == 0) || (1 < (int)uVar4)) {
      uVar6 = FUN_149559683(lVar1,*(undefined8 *)
                                   (*(longlong *)(lVar1 + 0x20) + (ulonglong)uVar4 * 0x20));
      *(undefined8 *)(piVar5 + (longlong)*piVar5 * 0x1c + -0x18) = uVar6;
    }
  }
  return piVar5;
}



// FUNCTION 1495c58ff FUN_1495c58ff body=740 status=ok
// SIG undefined FUN_1495c58ff(void)

undefined8
FUN_1495c58ff(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar3 = *(uint *)(param_3 + 5);
  lVar9 = param_3[9];
  if ((longlong)(int)uVar3 == 1) {
    if (-1 < (longlong)*(short *)(param_2 + 0x44)) {
      if (lVar9 == 0) {
        return 0;
      }
      lVar4 = 0;
      lVar5 = 0;
      do {
        bVar1 = *(byte *)(*(longlong *)
                           (*(longlong *)(param_2 + 8) + (longlong)*(short *)(param_2 + 0x44) * 0x20
                           ) + lVar5);
        if (bVar1 == *(byte *)(lVar9 + lVar5)) {
          if ((ulonglong)bVar1 == 0) {
            return 0;
          }
        }
        else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar9 + lVar5)])
        goto LAB_1495c59a7;
        lVar5 = lVar5 + 1;
      } while( true );
    }
  }
  else if (param_5 != (longlong *)0x0) {
    lVar4 = FUN_14955d750(*param_1,(longlong)(int)uVar3 * 4);
    if (lVar4 == 0) {
      return 1;
    }
    *param_5 = lVar4;
    goto LAB_1495c59a7;
  }
  lVar4 = 0;
LAB_1495c59a7:
  lVar5 = *(longlong *)(param_2 + 0x10);
  if (lVar5 != 0) {
    uVar6 = (ulonglong)uVar3;
    do {
      if (((uVar3 == *(ushort *)(lVar5 + 0x5e)) && (*(char *)(lVar5 + 0x62) != '\0')) &&
         (*(longlong *)(lVar5 + 0x48) == 0)) {
        if (lVar9 == 0) {
          if ((*(uint *)(lVar5 + 100) & 3) == 2) {
            if (lVar4 != 0 && 0 < (int)uVar3) {
              lVar9 = 0;
              do {
                *(undefined4 *)(lVar4 + lVar9) =
                     *(undefined4 *)((longlong)param_3 + lVar9 * 4 + 0x40);
                lVar9 = lVar9 + 4;
              } while (uVar6 << 2 != lVar9);
            }
LAB_1495c5bc8:
            *param_4 = lVar5;
            return 0;
          }
        }
        else {
          if ((int)uVar3 < 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
LAB_1495c5a08:
            lVar11 = (longlong)*(short *)(*(longlong *)(lVar5 + 8) + uVar10 * 2);
            if (-1 < lVar11) {
              lVar11 = lVar11 * 0x20;
              pcVar7 = *(char **)(*(longlong *)(param_2 + 8) + 0x10 + lVar11);
              if (pcVar7 == (char *)0x0) {
                pcVar7 = "BINARY";
              }
              lVar8 = 0;
              do {
                bVar1 = *(byte *)(*(longlong *)(*(longlong *)(lVar5 + 0x40) + uVar10 * 8) + lVar8);
                if (bVar1 == pcVar7[lVar8]) {
                  if ((ulonglong)bVar1 == 0) goto LAB_1495c5a6b;
                }
                else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)pcVar7[lVar8]]) break;
                lVar8 = lVar8 + 1;
              } while( true );
            }
          }
LAB_1495c5af1:
          if ((uint)uVar10 == uVar3) goto LAB_1495c5bc8;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x28);
    } while (lVar5 != 0);
  }
  if (*(char *)((longlong)param_1 + 0xca) == '\0') {
    FUN_14955a364(param_1,"foreign key mismatch - \"%w\" referencing \"%w\"",*(undefined8 *)*param_3
                  ,param_3[2]);
  }
  if (lVar4 != 0) {
    FUN_14955d65a(*param_1,lVar4);
  }
  return 1;
LAB_1495c5a6b:
  uVar12 = 0;
LAB_1495c5a72:
  lVar8 = 0;
  do {
    bVar1 = *(byte *)(param_3[uVar12 * 2 + 9] + lVar8);
    bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_2 + 8) + lVar11) + lVar8);
    if (bVar1 == bVar2) {
      if ((ulonglong)bVar1 == 0) {
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + uVar10 * 4) = *(undefined4 *)(param_3 + uVar12 * 2 + 8);
        }
        uVar10 = uVar10 + 1;
        if (uVar10 == uVar6) goto LAB_1495c5bc8;
        goto LAB_1495c5a08;
      }
    }
    else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) break;
    lVar8 = lVar8 + 1;
  } while( true );
  uVar12 = uVar12 + 1;
  if (uVar12 == uVar6) goto LAB_1495c5af1;
  goto LAB_1495c5a72;
}



// FUNCTION 1495c5be3 FUN_1495c5be3 body=262 status=ok
// SIG undefined FUN_1495c5be3(void)

void FUN_1495c5be3(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  int param_5,undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar4 = FUN_14955a44a(param_1);
  }
  plVar5 = (longlong *)param_1[0x14];
  if ((longlong *)param_1[0x14] == (longlong *)0x0) {
    plVar5 = param_1;
  }
  for (plVar5 = (longlong *)plVar5[0x30]; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1])
  {
    if (((longlong *)*plVar5 == param_2) && ((int)plVar5[3] == param_5)) goto LAB_1495c5c79;
  }
  plVar5 = (longlong *)FUN_1495c50aa(param_1,param_2,param_3);
  if (plVar5 != (longlong *)0x0) {
LAB_1495c5c79:
    if (*param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (ushort)((*(byte *)(*param_1 + 0x31) & 0x20) == 0);
    }
    lVar1 = plVar5[2];
    iVar2 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = iVar2;
    uVar3 = FUN_149584f48(lVar4,0x2e,param_4,param_6,iVar2);
    FUN_14955a5b6(lVar4,uVar3,lVar1,0xfffffffc);
    if (0 < (longlong)*(int *)(lVar4 + 0x90)) {
      *(ushort *)(*(longlong *)(lVar4 + 0x88) + -0x16 + (longlong)*(int *)(lVar4 + 0x90) * 0x18) =
           uVar6;
    }
  }
  return;
}



// FUNCTION 1495c5ce9 FUN_1495c5ce9 body=1711 status=ok
// SIG undefined FUN_1495c5ce9(void)

void FUN_1495c5ce9(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  longlong *param_5,undefined2 *param_6,int param_7,int param_8,int param_9)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int local_6c;
  
  plVar9 = (longlong *)param_1[2];
  if (plVar9 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar9 = (longlong *)FUN_14955a44a(param_1);
  }
  iVar18 = *(int *)((longlong)param_1 + 0x34);
  iVar14 = *(int *)((longlong)param_1 + 0x44);
  iVar20 = iVar14 + -1;
  *(int *)((longlong)param_1 + 0x44) = iVar20;
  if (param_8 < 0) {
    FUN_149584f48(plVar9,0x2f,*(undefined1 *)((longlong)param_5 + 0x2c),iVar20,0);
  }
  uVar16 = (ulonglong)*(uint *)(param_5 + 5);
  if (0 < (int)*(uint *)(param_5 + 5)) {
    lVar19 = 0;
    do {
      sVar3 = FUN_14959cc88(*param_5,param_6[lVar19 * 2]);
      FUN_149584f48(plVar9,0x32,(int)sVar3 + param_7 + 1,iVar20,0);
      lVar19 = lVar19 + 1;
      uVar16 = (ulonglong)(int)param_5[5];
    } while (lVar19 < (longlong)uVar16);
  }
  iVar18 = iVar18 + -1;
  if (param_9 == 0) {
    if (param_4 == 0) {
      if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
        iVar15 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar15;
      }
      else {
        bVar1 = *(char *)((longlong)param_1 + 0x1f) - 1;
        *(byte *)((longlong)param_1 + 0x1f) = bVar1;
        iVar15 = *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc);
      }
      sVar3 = FUN_14959cc88(*param_5,*param_6);
      FUN_149584f48(plVar9,0x4e,param_7 + sVar3 + 1,iVar15,0);
      iVar6 = FUN_149584f48(plVar9,0xf,iVar15,0,0);
      if ((param_8 == 1) && (*param_5 == param_3)) {
        FUN_149584f48(plVar9,0x35,param_7,iVar20,iVar15);
        if (0 < (longlong)(int)plVar9[0x12]) {
          *(undefined2 *)(plVar9[0x11] + -0x16 + (longlong)(int)plVar9[0x12] * 0x18) = 0x90;
        }
      }
      FUN_14959b02c(param_1,iVar18,param_2,param_3,0x60);
      FUN_149584f48(plVar9,0x20,iVar18,0,iVar15);
      FUN_149584f48(plVar9,0xb,0,iVar20,0);
      iVar20 = (int)plVar9[0x12];
      puVar10 = &DAT_14cc1ee40;
      puVar13 = &DAT_14cc1ee40;
      if (*(char *)(*plVar9 + 0x61) == '\0') {
        puVar13 = (undefined1 *)
                  ((longlong)(int)((iVar20 < 2 | 0xfffffffe) + iVar20) * 0x18 + plVar9[0x11]);
      }
      *(int *)(puVar13 + 8) = iVar20;
      if (*(char *)(*plVar9 + 0x61) == '\0') {
        iVar20 = (int)plVar9[0x12] + -1;
        if (-1 < iVar6) {
          iVar20 = iVar6;
        }
        puVar10 = (undefined1 *)((longlong)iVar20 * 0x18 + plVar9[0x11]);
      }
      *(int *)(puVar10 + 8) = (int)plVar9[0x12];
      if (iVar15 != 0) {
        bVar1 = *(byte *)((longlong)param_1 + 0x1f);
        if ((ulonglong)bVar1 < 8) {
          *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
          *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc) = iVar15;
        }
      }
    }
    else {
      iVar6 = (int)uVar16;
      iVar15 = FUN_14959d77c(param_1,uVar16 & 0xffffffff);
      if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
        local_6c = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = local_6c;
      }
      else {
        bVar1 = *(char *)((longlong)param_1 + 0x1f) - 1;
        *(byte *)((longlong)param_1 + 0x1f) = bVar1;
        local_6c = *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc);
      }
      FUN_149584f48(plVar9,0x60,iVar18,*(undefined4 *)(param_4 + 0x58),param_2);
      FUN_14959b2a7(param_1,param_4);
      if (0 < iVar6) {
        uVar17 = 0;
        do {
          sVar3 = FUN_14959cc88(*param_5,param_6[uVar17 * 2]);
          FUN_149584f48(plVar9,0x4d,(int)sVar3 + param_7 + 1,iVar15 + (int)uVar17,0);
          uVar17 = uVar17 + 1;
        } while ((uVar16 & 0xffffffff) != uVar17);
      }
      if ((param_8 == 1) && (*param_5 == param_3)) {
        if (0 < iVar6) {
          lVar19 = plVar9[0x12];
          uVar17 = 0;
          do {
            sVar4 = FUN_14959cc88(*param_5,param_6[uVar17 * 2]);
            sVar3 = *(short *)(*(longlong *)(param_4 + 8) + uVar17 * 2);
            sVar5 = FUN_14959cc88(*(undefined8 *)(param_4 + 0x18),sVar3);
            iVar7 = (int)sVar5 + param_7 + 1;
            if (sVar3 == *(short *)(param_3 + 0x44)) {
              iVar7 = param_7;
            }
            FUN_149584f48(plVar9,0x34,(int)sVar4 + param_7 + 1,(int)lVar19 + iVar6 + 1,iVar7);
            if (0 < (longlong)(int)plVar9[0x12]) {
              *(undefined2 *)(plVar9[0x11] + -0x16 + (longlong)(int)plVar9[0x12] * 0x18) = 0x10;
            }
            uVar17 = uVar17 + 1;
          } while ((uVar16 & 0xffffffff) != uVar17);
        }
        FUN_149584f48(plVar9,0xb,0,iVar20,0);
      }
      uVar11 = FUN_1495aaa6f(*param_1,param_4);
      uVar8 = FUN_149584f48(plVar9,0x5b,iVar15,uVar16 & 0xffffffff,local_6c);
      FUN_14955a5b6(plVar9,uVar8,uVar11,uVar16 & 0xffffffff);
      iVar20 = FUN_149584f48(plVar9,0x1e,iVar18,iVar20,local_6c);
      if (*(char *)(*plVar9 + 0x61) == '\0') {
        lVar19 = plVar9[0x11];
        *(undefined1 *)(lVar19 + 1 + (longlong)iVar20 * 0x18) = 0xfd;
        *(undefined4 *)(lVar19 + 0x10 + (longlong)iVar20 * 0x18) = 0;
      }
      if (local_6c != 0) {
        bVar1 = *(byte *)((longlong)param_1 + 0x1f);
        if ((ulonglong)bVar1 < 8) {
          *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
          *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc) = local_6c;
        }
      }
      if (iVar6 == 1) {
        if (iVar15 != 0) {
          bVar1 = *(byte *)((longlong)param_1 + 0x1f);
          if ((ulonglong)bVar1 < 8) {
            *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
            *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc) = iVar15;
          }
        }
      }
      else if ((int)param_1[5] < iVar6) {
        *(int *)(param_1 + 5) = iVar6;
        *(int *)((longlong)param_1 + 0x2c) = iVar15;
      }
    }
  }
  cVar2 = *(char *)((longlong)param_5 + 0x2c);
  if (cVar2 == '\0') {
    if ((((*(byte *)(*param_1 + 0x32) & 8) == 0) && (param_1[0x14] == 0)) &&
       ((char)param_1[4] == '\0')) {
      FUN_14959efda(param_1,0x313,2,0,0xff,4);
      goto LAB_1495c6340;
    }
    if (param_8 < 1) {
      cVar2 = '\0';
    }
    else {
      plVar12 = (longlong *)param_1[0x14];
      if ((longlong *)param_1[0x14] == (longlong *)0x0) {
        plVar12 = param_1;
      }
      *(undefined1 *)((longlong)plVar12 + 0x21) = 1;
      cVar2 = *(char *)((longlong)param_5 + 0x2c);
    }
  }
  FUN_149584f48(plVar9,0x95,cVar2,param_8,0);
LAB_1495c6340:
  lVar19 = plVar9[3];
  iVar14 = -iVar14;
  if (*(int *)(lVar19 + 0x44) + *(int *)(lVar19 + 0x48) < 0) {
    FUN_1495a1bff(lVar19,plVar9,iVar14);
  }
  else {
    *(int *)(*(longlong *)(lVar19 + 0x50) + (longlong)iVar14 * 4) = (int)plVar9[0x12];
  }
  FUN_149584f48(plVar9,0x74,iVar18,0,0);
  return;
}



// FUNCTION 1495c6398 FUN_1495c6398 body=1095 status=ok
// SIG undefined FUN_1495c6398(void)

void FUN_1495c6398(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  size_t sVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined2 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined2 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  longlong local_98;
  int local_8c;
  longlong *local_88;
  longlong *local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = *param_1;
  local_88 = (longlong *)param_1[2];
  local_98 = param_2;
  if (local_88 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(local_a0 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    local_88 = (longlong *)FUN_14955a44a(param_1);
  }
  local_8c = 0;
  if (param_8 < 0) {
    local_b8 = local_b8 & 0xffffffff00000000;
    local_8c = FUN_149584f48(local_88,0x2f,*(undefined1 *)((longlong)param_5 + 0x2c),0);
  }
  if ((int)param_5[5] < 1) {
    lVar7 = 0;
  }
  else {
    lVar16 = 0;
    lVar7 = 0;
    plVar13 = param_6;
    do {
      uVar15 = 0xffff;
      if (param_4 != 0) {
        uVar15 = *(undefined2 *)(*(longlong *)(param_4 + 8) + lVar16 * 2);
      }
      uVar3 = FUN_1495c67e0(param_1,param_3,param_7,uVar15);
      plVar4 = plVar13;
      if (param_6 == (longlong *)0x0) {
        plVar4 = param_5 + 8;
      }
      local_80 = *(longlong **)(*(longlong *)(*param_5 + 8) + (longlong)(short)*plVar4 * 0x20);
      uVar2 = 0;
      if (local_80 != (longlong *)0x0) {
        sVar5 = strlen((char *)local_80);
        uVar2 = (uint)sVar5 & 0x3fffffff;
      }
      local_78 = CONCAT44(local_78._4_4_,uVar2);
      uVar6 = FUN_14958f7cb(local_a0,0x3b,&local_80,0);
      uVar3 = FUN_14958aad5(param_1,0x35,uVar3,uVar6);
      lVar7 = FUN_149594bf0(param_1,lVar7,uVar3);
      lVar16 = lVar16 + 1;
      plVar13 = (longlong *)((longlong)plVar13 + 4);
    } while (lVar16 < (int)param_5[5]);
  }
  lVar16 = local_98;
  if ((0 < param_8) && (*param_5 == param_3)) {
    if ((*(byte *)(param_3 + 0x40) & 0x80) == 0) {
      local_80 = (longlong *)0x0;
      local_78 = local_78 & 0xffffffff00000000;
      lVar8 = FUN_14958f7cb(*param_1,0xad,&local_80,0);
      lVar16 = local_98;
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x2c) = param_7;
        *(undefined1 *)(lVar8 + 1) = 0x44;
      }
      uVar1 = *(undefined4 *)(local_98 + 0x4c);
      local_80 = (longlong *)0x0;
      local_78 = local_78 & 0xffffffff00000000;
      lVar9 = FUN_14958f7cb(local_a0,0xa4,&local_80,0);
      if (lVar9 != 0) {
        *(longlong *)(lVar9 + 0x40) = param_3;
        *(undefined4 *)(lVar9 + 0x2c) = uVar1;
        *(undefined2 *)(lVar9 + 0x30) = 0xffff;
      }
      uVar3 = FUN_14958aad5(param_1,0x34,lVar8,lVar9);
    }
    else {
      if (*(short *)(param_4 + 0x5e) == 0) {
        uVar3 = 0;
      }
      else {
        uVar14 = 0;
        uVar3 = 0;
        do {
          uVar17 = (ulonglong)*(short *)(*(longlong *)(param_4 + 8) + uVar14 * 2);
          uVar6 = FUN_1495c67e0(param_1,param_3,param_7,uVar17 & 0xffffffff);
          local_80 = *(longlong **)(*(longlong *)(param_3 + 8) + uVar17 * 0x20);
          uVar2 = 0;
          if (local_80 != (longlong *)0x0) {
            sVar5 = strlen((char *)local_80);
            uVar2 = (uint)sVar5 & 0x3fffffff;
          }
          local_78 = CONCAT44(local_78._4_4_,uVar2);
          uVar10 = FUN_14958f7cb(local_a0,0x3b,&local_80,0);
          uVar6 = FUN_14958aad5(param_1,0x2d,uVar6,uVar10);
          uVar3 = FUN_149594bf0(param_1,uVar3,uVar6);
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(param_4 + 0x5e));
      }
      uVar3 = FUN_14958aad5(param_1,0x13,uVar3,0);
      lVar16 = local_98;
    }
    lVar7 = FUN_149594bf0(param_1,lVar7,uVar3);
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_50 = 0;
  local_80 = param_1;
  local_78 = lVar16;
  FUN_1495a4109(&local_80,lVar7);
  if ((int)param_1[6] == 0) {
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    lVar16 = FUN_1495aecc3(param_1,lVar16,lVar7,0);
    local_b8 = local_b8 & 0xffffffff00000000;
    FUN_149584f48(local_88,0x95,*(undefined1 *)((longlong)param_5 + 0x2c),param_8);
    if (lVar16 != 0) {
      FUN_1495b2193(lVar16);
    }
  }
  if (lVar7 != 0) {
    FUN_14958288e(local_a0,lVar7);
  }
  if (local_8c != 0) {
    if (*(char *)(*local_88 + 0x61) == '\0') {
      iVar11 = (int)local_88[0x12] + -1;
      if (-1 < local_8c) {
        iVar11 = local_8c;
      }
      puVar12 = (undefined1 *)((longlong)iVar11 * 0x18 + local_88[0x11]);
    }
    else {
      puVar12 = &DAT_14cc1ee40;
    }
    *(int *)(puVar12 + 8) = (int)local_88[0x12];
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495c67e0 FUN_1495c67e0 body=228 status=ok
// SIG undefined FUN_1495c67e0(void)

longlong FUN_1495c67e0(longlong *param_1,longlong param_2,int param_3,uint param_4)

{
  longlong lVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_58 = 0;
  local_50 = 0;
  lVar3 = FUN_14958f7cb(lVar1,0xad,&local_58,0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else if (((short)param_4 < 0) || (*(short *)(param_2 + 0x44) == (short)param_4)) {
    *(int *)(lVar3 + 0x2c) = param_3;
    *(undefined1 *)(lVar3 + 1) = 0x44;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 8);
    uVar5 = (ulonglong)((param_4 & 0xffff) << 5);
    sVar2 = FUN_14959cc88(param_2,param_4);
    *(int *)(lVar3 + 0x2c) = sVar2 + param_3 + 1;
    *(undefined1 *)(lVar3 + 1) = *(undefined1 *)(lVar4 + 0x19 + uVar5);
    lVar4 = *(longlong *)(lVar4 + 0x10 + uVar5);
    if (lVar4 == 0) {
      lVar4 = **(longlong **)(lVar1 + 0x10);
    }
    lVar3 = FUN_1495a66d3(param_1,lVar3,lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495c68c5 FUN_1495c68c5 body=269 status=ok
// SIG undefined FUN_1495c68c5(void)

void FUN_1495c68c5(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)param_1[0x13];
  if (plVar9 != (longlong *)0x0) {
    lVar3 = param_1[2];
    lVar4 = *param_1;
    do {
      lVar7 = *(longlong *)(lVar4 + 0x20);
      lVar5 = plVar9[2];
      iVar2 = *(int *)((longlong)plVar9 + 0x14);
      if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
        iVar8 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar8;
      }
      else {
        bVar6 = *(char *)((longlong)param_1 + 0x1f) - 1;
        *(byte *)((longlong)param_1 + 0x1f) = bVar6;
        iVar8 = *(int *)((longlong)param_1 + (ulonglong)bVar6 * 4 + 0xcc);
      }
      FUN_149584f48(lVar3,0x37,iVar2 + 2,*(int *)(lVar3 + 0x90) + 7,iVar2);
      FUN_14959b02c(param_1,0,(int)plVar9[2],
                    *(undefined8 *)
                     (*(longlong *)(lVar7 + 0x18 + (longlong)(int)lVar5 * 0x20) + 0x68),0x61);
      lVar7 = FUN_14955a4e8(lVar3,5,&DAT_14bd47df0);
      if (lVar7 == 0) {
        return;
      }
      iVar1 = iVar2 + 1;
      *(int *)(lVar7 + 4) = iVar1;
      *(int *)(lVar7 + 0x20) = iVar1;
      *(int *)(lVar7 + 0x34) = iVar2 + -1;
      *(int *)(lVar7 + 0x3c) = iVar8;
      *(int *)(lVar7 + 0x50) = iVar8;
      *(int *)(lVar7 + 0x54) = iVar1;
      *(undefined2 *)(lVar7 + 0x4a) = 8;
      if (iVar8 != 0) {
        bVar6 = *(byte *)((longlong)param_1 + 0x1f);
        if ((ulonglong)bVar6 < 8) {
          *(byte *)((longlong)param_1 + 0x1f) = bVar6 + 1;
          *(int *)((longlong)param_1 + (ulonglong)bVar6 * 4 + 0xcc) = iVar8;
        }
      }
      plVar9 = (longlong *)*plVar9;
    } while (plVar9 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 1495c69d2 FUN_1495c69d2 body=136 status=ok
// SIG undefined FUN_1495c69d2(void)

bool FUN_1495c69d2(longlong param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar2 = false;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_48 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    puStack_40 = &LAB_1495c8fd6;
    local_20 = param_2;
    FUN_14959fa98(&local_48,*(longlong *)(param_1 + 0x48));
    uVar1 = local_28._4_2_ & 0xfffd;
    if (param_3 != 0) {
      uVar1 = local_28._4_2_;
    }
    bVar2 = uVar1 != 0;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495c6a5b FUN_1495c6a5b body=1297 status=ok
// SIG undefined FUN_1495c6a5b(void)

void FUN_1495c6a5b(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 param_7,int param_8)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 uVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong in_stack_ffffffffffffff48;
  undefined8 uVar20;
  uint uVar21;
  int local_78;
  
  plVar5 = (longlong *)param_1[2];
  plVar11 = *(longlong **)(param_3 + 0x60);
  if (plVar11 != (longlong *)0x0) {
    do {
      if (*plVar11 == *param_1) goto LAB_1495c6a9d;
      plVar11 = (longlong *)plVar11[5];
    } while (plVar11 != (longlong *)0x0);
  }
  plVar11 = (longlong *)0x0;
LAB_1495c6a9d:
  sVar2 = *(short *)(param_3 + 0x46);
  iVar16 = (int)sVar2;
  iVar19 = iVar16 + 2;
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  iVar4 = *(int *)((longlong)param_1 + 0x34);
  *(int *)((longlong)param_1 + 0x34) = iVar4 + 1;
  local_78 = FUN_149584f48(plVar5,100,iVar4,iVar19,in_stack_ffffffffffffff48 & 0xffffffff00000000);
  iVar15 = (int)param_1[7];
  iVar14 = iVar16 + iVar15 + 4;
  *(int *)(param_1 + 7) = iVar14;
  uVar20 = 0;
  lVar7 = FUN_1495aecc3(param_1,param_2,param_7,0,0,4,0);
  uVar21 = (uint)((ulonglong)uVar20 >> 0x20);
  if (lVar7 != 0) {
    if (0 < *(short *)(param_3 + 0x46)) {
      uVar18 = 0;
      do {
        lVar8 = (longlong)*(int *)(param_6 + uVar18 * 4);
        if (lVar8 < 0) {
          uVar20 = CONCAT44((int)((ulonglong)uVar20 >> 0x20),(int)uVar18 + iVar15 + 3);
          FUN_149584f48(plVar5,0xa6,uVar6,uVar18 & 0xffffffff,uVar20);
          if (0 < (longlong)(int)plVar5[0x12]) {
            *(undefined2 *)(plVar5[0x11] + -0x16 + (longlong)(int)plVar5[0x12] * 0x18) = 1;
          }
        }
        else {
          FUN_14959afe0(param_1,*(undefined8 *)(param_4 + 8 + lVar8 * 0x20),(int)uVar18 + iVar15 + 3
                       );
        }
        uVar21 = (uint)((ulonglong)uVar20 >> 0x20);
        uVar18 = uVar18 + 1;
      } while ((longlong)uVar18 < (longlong)*(short *)(param_3 + 0x46));
    }
    iVar17 = iVar15 + 1;
    if ((*(byte *)(param_3 + 0x40) & 0x80) == 0) {
      uVar18 = (ulonglong)uVar21 << 0x20;
      FUN_149584f48(plVar5,0x7f,uVar6,iVar17,uVar18);
      if (param_5 == 0) {
        uVar18 = uVar18 & 0xffffffff00000000;
        FUN_149584f48(plVar5,0x7f,uVar6,iVar15 + 2,uVar18);
      }
      else {
        FUN_14959afe0(param_1,param_5,iVar15 + 2);
      }
    }
    else {
      lVar8 = *(longlong *)(param_3 + 0x10);
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        do {
          if ((*(uint *)(lVar8 + 100) & 3) == 2) goto LAB_1495c6ca4;
          lVar8 = *(longlong *)(lVar8 + 0x28);
        } while (lVar8 != 0);
        lVar8 = 0;
      }
LAB_1495c6ca4:
      sVar3 = **(short **)(lVar8 + 8);
      uVar18 = CONCAT44(uVar21,iVar17);
      FUN_149584f48(plVar5,0xa6,uVar6,(int)sVar3,uVar18);
      uVar18 = uVar18 & 0xffffffff00000000;
      FUN_149584f48(plVar5,0x4e,sVar3 + iVar15 + 3,iVar15 + 2,uVar18);
    }
    cVar1 = *(char *)(lVar7 + 0x42);
    if (cVar1 == '\0') {
      iVar15 = iVar15 + iVar16 + 3;
      plVar9 = (longlong *)param_1[0x14];
      if ((longlong *)param_1[0x14] == (longlong *)0x0) {
        plVar9 = param_1;
      }
      *(undefined1 *)(plVar9 + 4) = 1;
      uVar18 = CONCAT44((int)(uVar18 >> 0x20),iVar15);
      FUN_149584f48(plVar5,0x5b,iVar17,iVar19,uVar18);
      iVar16 = 0;
      uVar18 = uVar18 & 0xffffffff00000000;
      FUN_149584f48(plVar5,0x78,iVar4,iVar14,uVar18);
      uVar18 = CONCAT44((int)(uVar18 >> 0x20),iVar14);
      FUN_149584f48(plVar5,0x79,iVar4,iVar15,uVar18);
      FUN_1495b2193(lVar7);
      uVar18 = uVar18 & 0xffffffff00000000;
      local_78 = FUN_149584f48(plVar5,0x25,iVar4,0,uVar18);
      uVar6 = (undefined4)(uVar18 >> 0x20);
      if (-2 < sVar2) {
        do {
          uVar18 = CONCAT44((int)(uVar18 >> 0x20),iVar16 + iVar17);
          FUN_149584f48(plVar5,0x59,iVar4,iVar16,uVar18);
          uVar6 = (undefined4)(uVar18 >> 0x20);
          iVar16 = iVar16 + 1;
        } while (iVar19 != iVar16);
      }
    }
    else {
      if (*(char *)(*plVar5 + 0x61) == '\0') {
        lVar8 = plVar5[0x11];
        lVar10 = (longlong)local_78;
        FUN_149569985(*plVar5,(int)*(char *)(lVar8 + 1 + lVar10 * 0x18),
                      *(undefined8 *)(lVar8 + 0x10 + lVar10 * 0x18));
        *(undefined8 *)(lVar8 + 0x10 + lVar10 * 0x18) = 0;
        *(undefined2 *)(lVar8 + lVar10 * 0x18) = 0xad;
      }
      uVar18 = uVar18 & 0xffffffff00000000;
      FUN_149584f48(plVar5,0x74,uVar6,0,uVar18);
      uVar6 = (undefined4)(uVar18 >> 0x20);
    }
    FUN_1495c35a6(param_1,param_3);
    uVar18 = CONCAT44(uVar6,iVar17);
    uVar6 = FUN_149584f48(plVar5,10,0,iVar19,uVar18);
    FUN_14955a5b6(plVar5,uVar6,plVar11,0xfffffff4);
    if (0 < (longlong)(int)plVar5[0x12]) {
      uVar12 = 2;
      if (param_8 != 0xb) {
        uVar12 = (undefined2)param_8;
      }
      *(undefined2 *)(plVar5[0x11] + -0x16 + (longlong)(int)plVar5[0x12] * 0x18) = uVar12;
    }
    plVar11 = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      plVar11 = param_1;
    }
    *(undefined1 *)((longlong)plVar11 + 0x21) = 1;
    if (cVar1 != '\0') {
      FUN_1495b2193(lVar7);
      return;
    }
    uVar18 = uVar18 & 0xffffffff00000000;
    FUN_149584f48(plVar5,5,iVar4,local_78 + 1,uVar18);
    if (*(char *)(*plVar5 + 0x61) == '\0') {
      iVar15 = (int)plVar5[0x12] + -1;
      if (-1 < local_78) {
        iVar15 = local_78;
      }
      puVar13 = (undefined1 *)((longlong)iVar15 * 0x18 + plVar5[0x11]);
    }
    else {
      puVar13 = &DAT_14cc1ee40;
    }
    *(int *)(puVar13 + 8) = (int)plVar5[0x12];
    FUN_149584f48(plVar5,0x74,iVar4,0,uVar18 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 1495c6f6c FUN_1495c6f6c body=548 status=ok
// SIG undefined FUN_1495c6f6c(void)

void FUN_1495c6f6c(longlong param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  bool bVar3;
  short sVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined1 local_78 [8];
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ushort local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = param_2;
  FUN_1495a3a37(*(undefined8 *)(param_1 + 0x10),param_3);
  if ((*(byte *)(param_3 + 0x40) & 0x40) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (*(char *)(*plVar2 + 0x61) == '\0') {
      pcVar7 = (char *)(plVar2[0x11] + (longlong)(int)plVar2[0x12] * 0x18 + -0x18);
    }
    else {
      pcVar7 = &DAT_14cc1ee40;
    }
    if ((*pcVar7 == 'Z') && (pcVar7 = *(char **)(pcVar7 + 0x10), *pcVar7 != '\0')) {
      iVar8 = 0;
      lVar5 = 0x1c;
      pcVar10 = pcVar7;
      do {
        uVar1 = *(ushort *)(*(longlong *)(param_3 + 8) + lVar5);
        if ((uVar1 & 0x20) == 0) {
          if ((uVar1 & 0x40) != 0) {
            *pcVar10 = '@';
          }
          iVar8 = iVar8 + 1;
        }
        pcVar10 = pcVar7 + iVar8;
        lVar5 = lVar5 + 0x20;
      } while (pcVar7[iVar8] != '\0');
    }
  }
  sVar4 = *(short *)(param_3 + 0x46);
  if (0 < sVar4) {
    lVar5 = 0x1c;
    lVar9 = 0;
    do {
      uVar1 = *(ushort *)(*(longlong *)(param_3 + 8) + lVar5);
      if ((uVar1 & 0x60) != 0) {
        *(ushort *)(*(longlong *)(param_3 + 8) + lVar5) = uVar1 | 0x80;
        sVar4 = *(short *)(param_3 + 0x46);
      }
      lVar9 = lVar9 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar9 < sVar4);
  }
  local_70 = &LAB_1495c9001;
  local_68 = 0;
  uStack_60 = 0;
  *(int *)(param_1 + 0x40) = -local_7c;
  uVar6 = (ulonglong)*(ushort *)(param_3 + 0x46);
  local_50 = param_3;
  do {
    if ((short)uVar6 < 1) goto LAB_1495c70c8;
    lVar5 = 0;
    uVar13 = 0;
    bVar3 = false;
    puVar12 = (undefined8 *)0x0;
    do {
      lVar9 = *(longlong *)(param_3 + 8);
      uVar1 = *(ushort *)(lVar9 + 0x1c + lVar5);
      puVar11 = puVar12;
      if ((char)uVar1 < '\0') {
        *(ushort *)(lVar9 + 0x1c + lVar5) = uVar1 | 0x100;
        local_54 = 0;
        if (*(longlong *)(lVar9 + 8 + lVar5) != 0) {
          FUN_14959fa98(local_78);
        }
        puVar11 = (undefined8 *)(lVar9 + lVar5);
        *(byte *)((longlong)puVar11 + 0x1d) = *(byte *)((longlong)puVar11 + 0x1d) & 0xfe;
        if ((local_54 & 0x80) == 0) {
          sVar4 = FUN_14959cc88(param_3,uVar13 & 0xffffffff);
          FUN_14959cce8(param_1,puVar11,sVar4 + local_7c);
          *(byte *)((longlong)puVar11 + 0x1c) = *(byte *)((longlong)puVar11 + 0x1c) & 0x7f;
          bVar3 = true;
          puVar11 = puVar12;
        }
      }
      uVar13 = uVar13 + 1;
      uVar6 = (ulonglong)*(short *)(param_3 + 0x46);
      lVar5 = lVar5 + 0x20;
      puVar12 = puVar11;
    } while ((longlong)uVar13 < (longlong)uVar6);
  } while ((puVar11 != (undefined8 *)0x0) && (bVar3));
  if (puVar11 != (undefined8 *)0x0) {
    FUN_14955a364(param_1,"generated column loop on \"%s\"",*puVar11);
  }
LAB_1495c70c8:
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495c7191 FUN_1495c7191 body=7136 status=ok
// SIG undefined FUN_1495c7191(void)

void FUN_1495c7191(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                  int param_5,uint param_6,int param_7,char param_8,byte param_9,undefined4 param_10
                  ,undefined4 *param_11,longlong param_12,longlong *param_13)

{
  ushort uVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint7 uVar16;
  undefined8 uVar10;
  byte *pbVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  byte bVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  uint local_1b0;
  undefined2 local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  int local_188;
  longlong *local_178;
  byte local_169;
  ulonglong local_168;
  uint local_160;
  int local_15c;
  longlong *local_158;
  int local_14c;
  ulonglong local_148;
  undefined4 local_13c;
  uint local_138;
  int local_134;
  longlong local_130;
  int local_124;
  uint local_120;
  int local_11c;
  ulonglong local_118;
  undefined8 local_110;
  longlong local_108;
  uint local_fc;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  int local_dc;
  int local_d8;
  uint local_d4;
  undefined8 local_d0;
  ulonglong local_c8;
  int local_c0;
  int local_bc;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_e8 = *param_1;
  plVar12 = (longlong *)param_1[2];
  local_13c = param_4;
  if (plVar12 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(local_e8 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar12 = (longlong *)FUN_14955a44a(param_1);
  }
  if ((char)*(uint *)(param_2 + 8) < '\0') {
    for (local_130 = param_2[2]; local_130 != 0; local_130 = *(longlong *)(local_130 + 0x28)) {
      if ((*(uint *)(local_130 + 100) & 3) == 2) goto LAB_1495c7233;
    }
    local_130 = 0;
LAB_1495c7233:
    local_120 = (uint)*(ushort *)(local_130 + 0x5e);
  }
  else {
    local_120 = 1;
    local_130 = 0;
  }
  local_169 = param_9;
  local_178 = plVar12;
  local_158 = param_1;
  local_108 = param_3;
  if ((*(uint *)(param_2 + 8) >> 0xb & 1) != 0) {
    sVar6 = *(short *)((longlong)param_2 + 0x46);
    local_148 = CONCAT44(local_148._4_4_,param_6 + 1);
    uVar16 = (uint7)(uint3)(param_6 + 1 >> 8);
    bVar22 = 1;
    iVar24 = 0;
    iVar21 = 0;
    bVar30 = false;
    local_160 = (uint)param_9;
    uVar26 = (uint)param_9;
LAB_1495c747e:
    local_11c = iVar21;
    if (0 < sVar6) {
      lVar29 = 7;
      local_fc = (uint)CONCAT71(uVar16,~bVar22);
      uVar20 = 0;
      do {
        lVar13 = param_2[1];
        bVar22 = *(byte *)(lVar13 + -4 + lVar29 * 4);
        if ((bVar22 != 0) && (uVar20 != (uint)(int)*(short *)((longlong)param_2 + 0x44))) {
          uVar1 = *(ushort *)(lVar13 + lVar29 * 4);
          if ((uVar1 & 0x60) == 0 || bVar30) {
            if (((param_12 == 0) || ((uVar1 & 0x60) != 0)) || (-1 < *(int *)(param_12 + uVar20 * 4))
               ) {
              uVar19 = (uint)bVar22;
              if (bVar22 == 0xb) {
                uVar19 = 2;
              }
              if ((char)uVar26 != '\v') {
                uVar19 = uVar26;
              }
              if ((char)uVar19 == '\x05') {
                if ((bVar30) || (*(longlong *)(lVar13 + -0x14 + lVar29 * 4) == 0)) {
                  sVar5 = FUN_14959cc88(param_2,uVar20 & 0xffffffff);
                  iVar21 = sVar5 + (int)local_148;
LAB_1495c754f:
                  local_168 = CONCAT44(local_168._4_4_,iVar21);
                  plVar12 = (longlong *)local_158[0x14];
                  if ((longlong *)local_158[0x14] == (longlong *)0x0) {
                    plVar12 = local_158;
                  }
                  *(undefined1 *)((longlong)plVar12 + 0x21) = 1;
                  uVar19 = 2;
                  goto LAB_1495c7571;
                }
                sVar5 = FUN_14959cc88(param_2,uVar20 & 0xffffffff);
                plVar12 = local_178;
                local_168 = CONCAT44(local_168._4_4_,sVar5 + (int)local_148);
                local_1b8 = local_1b8 & 0xffffffff00000000;
                uVar9 = FUN_149584f48(local_178,0x33,sVar5 + (int)local_148,0);
                local_f0 = CONCAT44(local_f0._4_4_,uVar9);
                FUN_14959afe0(local_158,*(undefined8 *)(lVar13 + -0x14 + lVar29 * 4),
                              local_168 & 0xffffffff);
                puVar18 = &DAT_14cc1ee40;
                if (*(char *)(*plVar12 + 0x61) == '\0') {
                  iVar21 = (int)local_f0;
                  if ((int)local_f0 < 0) {
                    iVar21 = (int)plVar12[0x12] + -1;
                  }
                  puVar18 = (undefined1 *)((longlong)iVar21 * 0x18 + plVar12[0x11]);
                }
                local_11c = local_11c + 1;
                *(int *)(puVar18 + 8) = (int)plVar12[0x12];
                uVar26 = local_160;
              }
              else if (((byte)local_fc & (uVar1 & 0x60) == 0) == 0) {
                sVar5 = FUN_14959cc88(param_2,uVar20 & 0xffffffff);
                plVar12 = local_178;
                iVar21 = sVar5 + (int)local_148;
                if ((char)uVar19 != '\x01') {
                  if ((uVar19 & 0xff) == 2) goto LAB_1495c754f;
                  if ((uVar19 & 0xff) != 3) {
                    local_1b8 = local_1b8 & 0xffffffff00000000;
                    FUN_149584f48(local_178,0x32,iVar21,param_10);
                    uVar26 = local_160;
                    goto LAB_1495c74b9;
                  }
                }
                local_168 = CONCAT44(local_168._4_4_,iVar21);
LAB_1495c7571:
                local_f0 = CONCAT44(local_f0._4_4_,uVar19) & 0xffffffff000000ff;
                lVar13 = FUN_14955a402(local_e8,"%s.%s",*param_2,
                                       *(undefined8 *)(lVar13 + -0x1c + lVar29 * 4));
                plVar12 = local_178;
                local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_168);
                FUN_149584f48(local_178,0x43,0x513,local_f0 & 0xffffffff);
                if (*(char *)(*plVar12 + 0x61) == '\0') {
                  lVar27 = plVar12[0x11];
                  lVar3 = plVar12[0x12];
                  *(undefined1 *)(lVar27 + -0x17 + (longlong)(int)lVar3 * 0x18) = 0xf9;
                  *(longlong *)(lVar27 + -8 + (longlong)(int)lVar3 * 0x18) = lVar13;
                }
                else if (lVar13 != 0) {
                  FUN_14955d65a(*plVar12,lVar13);
                  plVar12 = local_178;
                }
                uVar26 = local_160;
                if (0 < (longlong)(int)plVar12[0x12]) {
                  *(undefined2 *)(plVar12[0x11] + -0x16 + (longlong)(int)plVar12[0x12] * 0x18) = 1;
                }
              }
            }
          }
          else {
            iVar24 = iVar24 + 1;
          }
        }
LAB_1495c74b9:
        uVar20 = uVar20 + 1;
        lVar29 = lVar29 + 8;
      } while ((longlong)sVar6 != uVar20);
    }
    iVar21 = local_11c;
    if (!bVar30 && (iVar24 != 0 || local_11c != 0)) {
      bVar30 = true;
      bVar22 = 0;
      uVar16 = 0;
      if (0 < local_11c) {
        bVar22 = 0;
        uVar16 = 0;
        if ((*(byte *)(param_2 + 8) & 0x60) != 0) {
          FUN_1495c6f6c(local_158,local_148 & 0xffffffff,param_2);
          bVar22 = 0;
          uVar16 = 0;
          plVar12 = local_178;
          uVar26 = local_160;
        }
      }
      goto LAB_1495c747e;
    }
  }
  piVar2 = (int *)param_2[6];
  if ((piVar2 != (int *)0x0) && ((*(byte *)(local_e8 + 0x31) & 2) == 0)) {
    *(uint *)(local_158 + 8) = ~param_6;
    if (0 < *piVar2) {
      if (param_9 == 0xb) {
        param_9 = 2;
      }
      plVar28 = (longlong *)(piVar2 + 4);
      lVar29 = 0;
      do {
        lVar13 = plVar28[-1];
        if (param_12 == 0) {
LAB_1495c7341:
          iVar24 = *(int *)((longlong)local_158 + 0x44);
          iVar21 = iVar24 + -1;
          *(int *)((longlong)local_158 + 0x44) = iVar21;
          FUN_1495a29b7(local_158,lVar13,iVar21,0x10);
          plVar12 = local_178;
          if (param_9 == 4) {
            local_1b8 = local_1b8 & 0xffffffff00000000;
            FUN_149584f48(local_178,0xb,0,param_10);
            param_9 = 4;
          }
          else {
            lVar13 = *plVar28;
            if (lVar13 == 0) {
              lVar13 = *param_2;
            }
            if (param_9 == 5) {
              param_9 = 2;
            }
            local_1b0 = CONCAT31(local_1b0._1_3_,3);
            local_1b8 = local_1b8 & 0xffffffffffffff00;
            FUN_14959efda(local_158,0x113,param_9,lVar13);
            plVar12 = local_178;
          }
          lVar13 = plVar12[3];
          iVar24 = -iVar24;
          if (*(int *)(lVar13 + 0x44) + *(int *)(lVar13 + 0x48) < 0) {
            FUN_1495a1bff(lVar13,plVar12,iVar24);
            plVar12 = local_178;
          }
          else {
            *(int *)(*(longlong *)(lVar13 + 0x50) + (longlong)iVar24 * 4) = (int)plVar12[0x12];
          }
        }
        else {
          local_98 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          puStack_90 = &LAB_1495c8fd6;
          local_70 = param_12;
          if (lVar13 == 0) {
            local_78._4_2_ = 0;
          }
          else {
            FUN_14959fa98(&local_98,lVar13);
            plVar12 = local_178;
          }
          uVar1 = local_78._4_2_ & 0xfffd;
          if (param_8 != '\0') {
            uVar1 = local_78._4_2_;
          }
          if (uVar1 != 0) goto LAB_1495c7341;
        }
        lVar29 = lVar29 + 1;
        plVar28 = plVar28 + 4;
      } while (lVar29 < *piVar2);
    }
    *(undefined4 *)(local_158 + 8) = 0;
  }
  lVar29 = local_108;
  plVar28 = local_158;
  if (param_13 == (longlong *)0x0) {
    uVar20 = 0;
    lVar13 = 0;
    param_13 = (longlong *)0x0;
  }
  else if (*param_13 == 0) {
    local_169 = 4;
    uVar20 = 0;
    lVar13 = 0;
    param_13 = (longlong *)0x0;
  }
  else {
    lVar13 = param_13[4];
    if (lVar13 == 0) {
      uVar20 = 0;
      lVar13 = 0;
    }
    else {
      local_1b8 = local_1b8 & 0xffffffff00000000;
      uVar26 = FUN_149584f48(plVar12,0xb,0,0);
      uVar20 = (ulonglong)uVar26;
      plVar12 = local_178;
    }
  }
  local_168 = lVar13;
  if ((*(ulonglong *)(local_e8 + 0x30) & 0x6000) == 0) {
LAB_1495c788c:
    lVar13 = 0;
    uVar14 = 0;
    local_15c = 0;
  }
  else {
    if (((uint)*(ulonglong *)(local_e8 + 0x30) >> 0xd & 1) == 0) {
      if ((*(byte *)(*plVar28 + 0x31) & 0x40) == 0) goto LAB_1495c788c;
      lVar13 = FUN_14958201d(param_2[0xe] + 0x50,*param_2,0);
      lVar27 = *(longlong *)(lVar13 + 0x10);
joined_r0x0001495c830a:
      lVar13 = 0;
      if (lVar27 == 0) {
        uVar14 = 0;
        lVar13 = 0;
        local_15c = 0;
        plVar12 = local_178;
        if (param_2[4] == 0) goto LAB_1495c7894;
      }
    }
    else {
      local_1b8 = 0;
      uVar14 = 0;
      lVar13 = FUN_1495c2fa6(plVar28,param_2,0x7e,0);
      if (lVar13 == 0) {
        if ((*(byte *)(*plVar28 + 0x31) & 0x40) != 0) {
          lVar13 = FUN_14958201d(param_2[0xe] + 0x50,*param_2,0);
          lVar27 = *(longlong *)(lVar13 + 0x10);
          goto joined_r0x0001495c830a;
        }
        lVar13 = 0;
        local_15c = 0;
        plVar12 = local_178;
        goto LAB_1495c7894;
      }
    }
    local_15c = (int)plVar28[7] + 1;
    *(int *)(plVar28 + 7) = local_15c;
    local_1b8 = local_1b8 & 0xffffffff00000000;
    FUN_149584f48(local_178,0x45,0);
    uVar26 = *(int *)((longlong)plVar28 + 0x44) - 1;
    uVar14 = (ulonglong)uVar26;
    *(uint *)((longlong)plVar28 + 0x44) = uVar26;
    plVar12 = local_178;
  }
LAB_1495c7894:
  local_dc = 0;
  local_148 = uVar14;
  if ((param_8 == '\0') || (local_130 != 0)) {
    local_134 = 0;
    local_14c = 0;
    local_110 = local_110 & 0xffffffff00000000;
    goto LAB_1495c78dc;
  }
  iVar24 = *(int *)((longlong)plVar28 + 0x44);
  iVar21 = iVar24 + -1;
  *(int *)((longlong)plVar28 + 0x44) = iVar21;
  bVar22 = local_169;
  if (local_169 == 0xb) {
    bVar22 = 2;
    if (*(byte *)((longlong)param_2 + 0x4e) != 0xb) {
      bVar22 = *(byte *)((longlong)param_2 + 0x4e);
    }
  }
  if ((param_13 == (longlong *)0x0) || (param_13[4] != 0)) {
    local_14c = 0;
    if ((local_169 != 5) && ((bVar22 == 5 && (bVar22 = 5, param_2[2] != 0)))) {
      local_1b8 = local_1b8 & 0xffffffff00000000;
      local_14c = FUN_149584f48(plVar12,0xb,0,0);
      local_14c = local_14c + 1;
      plVar12 = local_178;
    }
  }
  else {
    bVar22 = (param_13[2] != 0) * '\x02' | 4;
    local_14c = 0;
  }
  if (param_7 != 0) {
    local_1b8 = CONCAT44(local_1b8._4_4_,param_7);
    FUN_149584f48(plVar12,0x35,param_6,iVar21);
    plVar12 = local_178;
    if (0 < (longlong)(int)local_178[0x12]) {
      *(undefined2 *)(local_178[0x11] + -0x16 + (longlong)(int)local_178[0x12] * 0x18) = 0x90;
    }
  }
  local_1b8 = CONCAT44(local_1b8._4_4_,param_6);
  FUN_149584f48(plVar12,0x20,local_13c,iVar21);
  lVar29 = local_108;
  if (bVar22 == 5) {
    if (local_15c == 0) {
      local_110 = CONCAT44(local_110._4_4_,1);
      local_134 = 0;
      if (param_2[2] != 0) {
        plVar12 = (longlong *)plVar28[0x14];
        if ((longlong *)plVar28[0x14] == (longlong *)0x0) {
          plVar12 = plVar28;
        }
        *(undefined1 *)(plVar12 + 4) = 1;
        local_1b0 = 0xffffffff;
        local_1b8 = 0;
        FUN_1495c4664(plVar28,param_2,local_13c,param_5);
      }
    }
    else {
      plVar12 = (longlong *)plVar28[0x14];
      if ((longlong *)plVar28[0x14] == (longlong *)0x0) {
        plVar12 = plVar28;
      }
      *(undefined1 *)(plVar12 + 4) = 1;
      local_190 = 1;
      local_1b0 = param_6;
      local_1b8._0_4_ = param_5;
      local_188 = -1;
      local_198 = 5;
      local_1a0 = 0;
      local_1a8 = 1;
      FUN_1495c3660(plVar28,param_2,lVar13,local_13c);
      local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
      local_134 = 1;
      FUN_149584f48(local_178,0x52,local_15c,1);
      local_110 = CONCAT44(local_110._4_4_,1);
    }
  }
  else if (bVar22 - 1 < 3) {
LAB_1495c86b5:
    FUN_1495c9028(plVar28,bVar22,param_2);
    local_134 = 0;
    local_110 = (ulonglong)local_110._4_4_ << 0x20;
  }
  else {
    if (bVar22 != 4) {
      if (bVar22 != 6) {
        bVar22 = 2;
        goto LAB_1495c86b5;
      }
      local_1b8 = CONCAT44(local_1b8._4_4_,local_13c);
      FUN_1495c909c(plVar28,param_13,param_2,0);
    }
    local_1b8 = local_1b8 & 0xffffffff00000000;
    local_134 = 0;
    FUN_149584f48(local_178,0xb,0,param_10);
    local_110 = (ulonglong)local_110._4_4_ << 0x20;
  }
  lVar27 = local_178[3];
  iVar24 = -iVar24;
  if (*(int *)(lVar27 + 0x44) + *(int *)(lVar27 + 0x48) < 0) {
    FUN_1495a1bff(lVar27,local_178,iVar24);
  }
  else {
    *(int *)(*(longlong *)(lVar27 + 0x50) + (longlong)iVar24 * 4) = (int)local_178[0x12];
  }
  uVar14 = local_148;
  if (local_14c == 0) {
    local_14c = 0;
    plVar12 = local_178;
  }
  else {
    local_1b8 = local_1b8 & 0xffffffff00000000;
    local_dc = FUN_149584f48(local_178,0xb,0,0);
    if (*(char *)(*local_178 + 0x61) == '\0') {
      iVar21 = local_14c;
      if (local_14c < 1) {
        iVar21 = (int)local_178[0x12];
      }
      puVar18 = (undefined1 *)(local_178[0x11] + (longlong)iVar21 * 0x18 + -0x18);
    }
    else {
      puVar18 = &DAT_14cc1ee40;
    }
    *(int *)(puVar18 + 8) = (int)local_178[0x12];
    plVar12 = local_178;
  }
LAB_1495c78dc:
  lVar27 = param_2[2];
  uVar23 = 0;
  local_138 = (uint)uVar14;
  if (lVar27 == 0) {
    bVar30 = true;
  }
  else {
    local_d4 = (int)uVar20 + 1;
    local_11c = param_6 + 1;
    local_fc = ~param_6;
    uVar23 = 0;
    local_f0 = 0;
    local_d8 = 0;
    uVar25 = local_168;
    local_f8 = param_13;
    local_a8 = lVar13;
    local_a0 = uVar20;
    do {
      if (*(int *)(lVar29 + uVar23 * 4) != 0) {
        if (uVar25 == lVar27) {
          local_1b8 = local_1b8 & 0xffffffff00000000;
          local_d8 = FUN_149584f48(plVar12,0xb,0,0);
          puVar18 = &DAT_14cc1ee40;
          if (*(char *)(*local_178 + 0x61) == '\0') {
            iVar21 = (int)local_178[0x12] + -1;
            if (-1 < (int)local_a0) {
              iVar21 = (int)local_a0;
            }
            puVar18 = (undefined1 *)((longlong)iVar21 * 0x18 + local_178[0x11]);
          }
          *(int *)(puVar18 + 8) = (int)local_178[0x12];
          uVar25 = local_168;
          plVar12 = local_178;
          uVar26 = local_d4;
        }
        else {
          uVar26 = *(int *)((longlong)plVar28 + 0x44) - 1;
          *(uint *)((longlong)plVar28 + 0x44) = uVar26;
        }
        if ((uVar25 == 0 || uVar25 == lVar27) && (char)local_f0 == '\0') {
          uVar10 = FUN_1495a3a37(plVar12,param_2,local_11c);
          local_f0 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
        }
        if (*(longlong *)(lVar27 + 0x48) != 0) {
          local_1b8 = local_1b8 & 0xffffffff00000000;
          FUN_149584f48(local_178,0x48,0,*(undefined4 *)(lVar29 + uVar23 * 4));
          *(uint *)(plVar28 + 8) = local_fc;
          FUN_1495aaa03(plVar28,*(undefined8 *)(lVar27 + 0x48),uVar26);
          *(undefined4 *)(plVar28 + 8) = 0;
        }
        uVar19 = *(uint *)(lVar29 + uVar23 * 4);
        local_c8 = (ulonglong)uVar19;
        uVar7 = uVar19 + 1;
        local_160 = uVar7;
        if (*(short *)(lVar27 + 0x60) == 0) {
          uVar14 = 0;
        }
        else {
          lVar29 = 4;
          uVar20 = 0;
          do {
            plVar12 = local_158;
            sVar6 = *(short *)(*(longlong *)(lVar27 + 8) + uVar20 * 2);
            if (sVar6 == -1) {
LAB_1495c7adc:
              uVar10 = 0x4f;
              uVar19 = param_6;
LAB_1495c7afa:
              local_1b8 = local_1b8 & 0xffffffff00000000;
              FUN_149584f48(local_178,uVar10,uVar19,uVar7 + (int)uVar20);
            }
            else {
              if (sVar6 != -2) {
                if (sVar6 == *(short *)((longlong)param_2 + 0x44)) goto LAB_1495c7adc;
                sVar6 = FUN_14959cc88(param_2);
                uVar19 = sVar6 + local_11c;
                uVar10 = 0x4e;
                goto LAB_1495c7afa;
              }
              *(uint *)(local_158 + 8) = local_fc;
              FUN_1495aab85(local_158,*(undefined8 *)(*(longlong *)(lVar27 + 0x50) + lVar29 * 2),
                            uVar7 + (int)uVar20);
              *(undefined4 *)(plVar12 + 8) = 0;
            }
            uVar20 = uVar20 + 1;
            uVar14 = (ulonglong)*(ushort *)(lVar27 + 0x60);
            lVar29 = lVar29 + 0x10;
          } while (uVar20 < uVar14);
          uVar19 = *(uint *)(local_108 + uVar23 * 4);
          param_13 = local_f8;
          lVar29 = local_108;
          plVar28 = local_158;
        }
        local_1b8 = CONCAT44(local_1b8._4_4_,uVar19);
        FUN_149584f48(local_178,0x5b,local_160,uVar14);
        if ((((param_7 == 0) || (param_8 != '\0')) || (local_130 != lVar27)) &&
           (bVar22 = *(byte *)(lVar27 + 0x62), bVar22 != 0)) {
          if (bVar22 == 0xb) {
            bVar22 = 2;
          }
          bVar4 = local_169;
          if (local_169 == 0xb) {
            bVar4 = bVar22;
          }
          if (local_168 == lVar27) {
            uVar20 = (ulonglong)((uint)(param_13[2] != 0) * 2 + 4);
          }
          else {
            uVar20 = (ulonglong)bVar4;
          }
          if (((uVar23 == 0) && (*(longlong *)(lVar27 + 0x28) == 0)) &&
             ((local_130 == lVar27 && ((int)uVar20 == 5)))) {
            uVar19 = (uint)*(undefined8 *)(local_e8 + 0x30);
            if ((uVar19 >> 0xd & 1) != 0) {
              local_1b8 = 0;
              lVar13 = FUN_1495c2fa6(plVar28,param_2);
              if (lVar13 != 0) goto LAB_1495c842d;
              uVar19 = (uint)*(undefined8 *)(local_e8 + 0x30);
            }
            if (((uVar19 >> 0xe & 1) == 0) ||
               ((param_2[4] == 0 &&
                (lVar13 = FUN_14958201d(param_2[0xe] + 0x50,*param_2),
                *(longlong *)(lVar13 + 0x10) == 0)))) goto LAB_1495c7b9e;
          }
LAB_1495c842d:
          uVar1 = *(ushort *)(lVar27 + 0x5e);
          iVar21 = (int)uVar23 + param_5;
          local_1b8 = CONCAT44(local_1b8._4_4_,local_160);
          local_c0 = FUN_149584f48(local_178,0x1c,iVar21,uVar26);
          if (*(char *)(*local_178 + 0x61) == '\0') {
            lVar29 = local_178[0x11];
            *(undefined1 *)(lVar29 + 1 + (longlong)local_c0 * 0x18) = 0xfd;
            *(uint *)(lVar29 + 0x10 + (longlong)local_c0 * 0x18) = (uint)uVar1;
          }
          uVar14 = (ulonglong)local_160;
          local_124 = iVar21;
          if (local_130 != lVar27) {
            uVar14 = FUN_14959d77c(plVar28,local_120);
          }
          iVar21 = local_124;
          lVar29 = local_130;
          local_118 = uVar14;
          if ((param_7 != 0) || ((int)uVar20 == 5)) {
            if ((*(byte *)(param_2 + 8) & 0x80) == 0) {
              local_1b8 = local_1b8 & 0xffffffff00000000;
              FUN_149584f48(local_178,0x86,local_124,uVar14);
              if (param_7 != 0) {
                local_1b8 = CONCAT44(local_1b8._4_4_,param_7);
                FUN_149584f48(local_178,0x35,local_118,uVar26);
                if (0 < (longlong)(int)local_178[0x12]) {
                  *(undefined2 *)(local_178[0x11] + -0x16 + (longlong)(int)local_178[0x12] * 0x18) =
                       0x90;
                }
              }
            }
            else {
              local_b8 = uVar20;
              if ((local_130 != lVar27) && (*(short *)(local_130 + 0x5e) != 0)) {
                uVar20 = 0;
                do {
                  sVar6 = -1;
                  if ((ulonglong)*(ushort *)(lVar27 + 0x60) != 0) {
                    uVar25 = 0;
                    do {
                      if (*(short *)(*(longlong *)(lVar27 + 8) + uVar25 * 2) ==
                          *(short *)(*(longlong *)(lVar29 + 8) + uVar20 * 2)) {
                        sVar6 = (short)uVar25;
                        break;
                      }
                      uVar25 = uVar25 + 1;
                    } while (*(ushort *)(lVar27 + 0x60) != uVar25);
                  }
                  local_1b8 = CONCAT44(local_1b8._4_4_,(int)uVar14 + (int)uVar20);
                  FUN_149584f48(local_178,0x59,iVar21,(int)sVar6);
                  uVar20 = uVar20 + 1;
                } while (uVar20 < *(ushort *)(lVar29 + 0x5e));
              }
              uVar20 = local_b8;
              if ((param_7 != 0) && (*(ushort *)(local_130 + 0x5e) != 0)) {
                local_bc = param_7 + 1;
                local_b0 = local_118 & 0xffffffff;
                if ((*(uint *)(lVar27 + 100) & 3) == 2) {
                  local_b0 = (ulonglong)local_160;
                }
                uVar19 = (uint)*(ushort *)(local_130 + 0x5e) + (int)local_178[0x12];
                uVar9 = 0x34;
                uVar14 = 0;
                do {
                  lVar29 = local_130;
                  local_d0 = FUN_14959b4a2(local_158,
                                           *(undefined8 *)
                                            (*(longlong *)(local_130 + 0x40) + uVar14 * 8));
                  bVar30 = uVar14 == *(ushort *)(lVar29 + 0x5e) - 1;
                  if (bVar30) {
                    uVar19 = uVar26;
                  }
                  if (bVar30) {
                    uVar9 = 0x35;
                  }
                  sVar6 = FUN_14959cc88(param_2,*(undefined2 *)
                                                 (*(longlong *)(lVar29 + 8) + uVar14 * 2));
                  local_1b8 = CONCAT44(local_1b8._4_4_,(int)local_b0 + (int)uVar14);
                  uVar8 = FUN_149584f48(local_178,uVar9,sVar6 + local_bc,uVar19);
                  FUN_14955a5b6(local_178,uVar8);
                  if (0 < (longlong)(int)local_178[0x12]) {
                    *(undefined2 *)(local_178[0x11] + -0x16 + (longlong)(int)local_178[0x12] * 0x18)
                         = 0x90;
                  }
                  uVar14 = uVar14 + 1;
                  uVar20 = local_b8;
                } while (uVar14 < *(ushort *)(local_130 + 0x5e));
              }
            }
          }
          lVar13 = local_a8;
          param_13 = local_f8;
          lVar29 = local_108;
          uVar9 = local_13c;
          plVar28 = local_158;
          plVar12 = local_178;
          iVar21 = (int)uVar20;
          if (iVar21 - 1U < 3) {
            FUN_1495aa841(local_158,uVar20 & 0xffffffff);
            param_13 = local_f8;
            lVar29 = local_108;
          }
          else {
            if (iVar21 != 4) {
              if (iVar21 != 6) {
                lVar3 = local_178[0x12];
                if (local_15c != 0) {
                  plVar15 = (longlong *)local_158[0x14];
                  if ((longlong *)local_158[0x14] == (longlong *)0x0) {
                    plVar15 = local_158;
                  }
                  *(undefined1 *)(plVar15 + 4) = 1;
                  local_134 = local_134 + 1;
                }
                if (local_a8 == 0 || param_7 == 0) {
                  local_190 = local_130 == lVar27;
                  local_188 = local_124;
                  local_1a8 = (undefined2)local_120;
                  local_1b0 = (uint)local_118;
                  local_1b8 = CONCAT44(local_1b8._4_4_,param_5);
                  local_198 = 5;
                  local_1a0 = 0;
                  FUN_1495c3660(local_158,param_2);
                }
                else {
                  local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
                  FUN_149584f48(local_178,0x9f,local_13c,0);
                  local_190 = local_130 == lVar27;
                  local_188 = local_124;
                  local_1a8 = (undefined2)local_120;
                  local_1b0 = (uint)local_118;
                  local_1b8._0_4_ = param_5;
                  local_198 = 5;
                  local_1a0 = 0;
                  FUN_1495c3660(local_158,param_2,lVar13);
                  lVar29 = local_108;
                  plVar28 = local_158;
                  local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
                  FUN_149584f48(plVar12,0xa0,uVar9,0);
                }
                plVar12 = local_178;
                if (local_15c == 0) {
                  local_110 = CONCAT44(local_110._4_4_,1);
                  param_13 = local_f8;
                }
                else {
                  local_1b8 = local_1b8 & 0xffffffff00000000;
                  FUN_149584f48(local_178,0x52,local_15c,1);
                  local_1b8 = local_1b8 & 0xffffffff00000000;
                  uVar9 = FUN_149584f48(plVar12,0xb,0,0);
                  local_d0 = CONCAT44(local_d0._4_4_,uVar9);
                  lVar29 = plVar12[3];
                  if (*(int *)(lVar29 + 0x44) + *(int *)(lVar29 + 0x48) < 0) {
                    FUN_1495a1bff(lVar29,plVar12);
                    plVar12 = local_178;
                  }
                  else {
                    *(int *)(*(longlong *)(lVar29 + 0x50) + (longlong)(int)~local_138 * 4) =
                         (int)plVar12[0x12];
                  }
                  lVar29 = local_108;
                  plVar28 = local_158;
                  local_138 = *(int *)((longlong)local_158 + 0x44) - 1;
                  *(uint *)((longlong)local_158 + 0x44) = local_138;
                  if (*(longlong *)(lVar27 + 0x48) != 0) {
                    local_1b8 = local_1b8 & 0xffffffff00000000;
                    FUN_149584f48(plVar12,0x32,local_c8);
                    plVar12 = local_178;
                  }
                  iVar21 = (int)lVar3 - local_c0;
                  if (0 < iVar21) {
                    iVar21 = iVar21 + 1;
                    iVar24 = local_c0;
                    uVar19 = local_138;
                    do {
                      plVar15 = local_178;
                      iVar17 = iVar24;
                      if (iVar24 < 0) {
                        iVar17 = (int)plVar12[0x12] + -1;
                      }
                      pbVar11 = &DAT_14cc1ee40;
                      if (*(char *)(*plVar12 + 0x61) == '\0') {
                        pbVar11 = (byte *)((longlong)iVar17 * 0x18 + plVar12[0x11]);
                      }
                      bVar22 = *pbVar11;
                      if (bVar22 != 0x86) {
                        if (((&DAT_14bd423c0)[(uint)bVar22] & 1) == 0) {
                          uVar19 = *(uint *)(pbVar11 + 8);
                        }
                        local_c8 = CONCAT62(local_c8._2_6_,*(undefined2 *)(pbVar11 + 2));
                        local_110 = *(ulonglong *)(pbVar11 + 0x10);
                        bVar4 = pbVar11[1];
                        local_1b8 = CONCAT44(local_1b8._4_4_,*(undefined4 *)(pbVar11 + 0xc));
                        uVar9 = FUN_149584f48(local_178,bVar22,*(undefined4 *)(pbVar11 + 4),uVar19);
                        FUN_14955a5b6(plVar15,uVar9,local_110,(int)(char)bVar4);
                        lVar29 = local_108;
                        plVar12 = plVar15;
                        plVar28 = local_158;
                        uVar19 = local_138;
                        if (0 < (longlong)(int)plVar15[0x12]) {
                          *(undefined2 *)
                           (plVar15[0x11] + -0x16 + (longlong)(int)plVar15[0x12] * 0x18) =
                               (undefined2)local_c8;
                        }
                      }
                      iVar24 = iVar24 + 1;
                      iVar21 = iVar21 + -1;
                    } while (1 < iVar21);
                  }
                  FUN_1495aa841(plVar28,2);
                  if (*(char *)(*local_178 + 0x61) == '\0') {
                    iVar21 = (int)local_178[0x12] + -1;
                    if (-1 < (int)local_d0) {
                      iVar21 = (int)local_d0;
                    }
                    puVar18 = (undefined1 *)((longlong)iVar21 * 0x18 + local_178[0x11]);
                  }
                  else {
                    puVar18 = &DAT_14cc1ee40;
                  }
                  *(int *)(puVar18 + 8) = (int)local_178[0x12];
                  local_110 = CONCAT44(local_110._4_4_,1);
                  param_13 = local_f8;
                }
                goto LAB_1495c8507;
              }
              local_1b8 = CONCAT44(local_1b8._4_4_,local_124);
              FUN_1495c909c(local_158,local_f8,param_2,lVar27);
            }
            local_1b8 = local_1b8 & 0xffffffff00000000;
            FUN_149584f48(local_178,0xb,0,param_10);
          }
LAB_1495c8507:
          plVar12 = local_178;
          if (local_168 == lVar27) {
            local_1b8 = local_1b8 & 0xffffffff00000000;
            FUN_149584f48(local_178,0xb,0,local_d4);
            if (*(char *)(*plVar12 + 0x61) == '\0') {
              iVar21 = (int)plVar12[0x12] + -1;
              if (-1 < local_d8) {
                iVar21 = local_d8;
              }
              puVar18 = (undefined1 *)((longlong)iVar21 * 0x18 + plVar12[0x11]);
            }
            else {
              puVar18 = &DAT_14cc1ee40;
            }
            *(int *)(puVar18 + 8) = (int)plVar12[0x12];
            param_13 = local_f8;
          }
          else {
            lVar13 = local_178[3];
            if (*(int *)(lVar13 + 0x44) + *(int *)(lVar13 + 0x48) < 0) {
              FUN_1495a1bff(lVar13,local_178);
              plVar12 = local_178;
            }
            else {
              *(int *)(*(longlong *)(lVar13 + 0x50) + (longlong)(int)~uVar26 * 4) =
                   (int)local_178[0x12];
            }
          }
          uVar26 = (uint)local_118;
          uVar25 = local_168;
          uVar14 = local_148;
          if (uVar26 != local_160) {
            if (local_120 == 1) {
              if (uVar26 != 0) {
                bVar22 = *(byte *)((longlong)plVar28 + 0x1f);
                if ((ulonglong)bVar22 < 8) {
                  *(byte *)((longlong)plVar28 + 0x1f) = bVar22 + 1;
                  *(uint *)((longlong)plVar28 + (ulonglong)bVar22 * 4 + 0xcc) = uVar26;
                }
              }
            }
            else if ((int)plVar28[5] < (int)local_120) {
              *(uint *)(plVar28 + 5) = local_120;
              *(uint *)((longlong)plVar28 + 0x2c) = uVar26;
            }
          }
        }
        else {
LAB_1495c7b9e:
          lVar13 = local_178[3];
          if (*(int *)(lVar13 + 0x44) + *(int *)(lVar13 + 0x48) < 0) {
            FUN_1495a1bff(lVar13,local_178);
            uVar25 = local_168;
            plVar12 = local_178;
            uVar14 = local_148;
          }
          else {
            *(int *)(*(longlong *)(lVar13 + 0x50) + (longlong)(int)~uVar26 * 4) =
                 (int)local_178[0x12];
            uVar25 = local_168;
            plVar12 = local_178;
            uVar14 = local_148;
          }
        }
      }
      uVar23 = uVar23 + 1;
      lVar27 = *(longlong *)(lVar27 + 0x28);
    } while (lVar27 != 0);
    uVar23 = uVar23 & 0xffffffff;
    bVar30 = (char)local_f0 == '\0';
  }
  if (local_14c != 0) {
    local_1b8 = local_1b8 & 0xffffffff00000000;
    FUN_149584f48(plVar12,0xb,0);
    if (*(char *)(*local_178 + 0x61) == '\0') {
      iVar21 = (int)local_178[0x12] + -1;
      if (-1 < local_dc) {
        iVar21 = local_dc;
      }
      puVar18 = (undefined1 *)((longlong)iVar21 * 0x18 + local_178[0x11]);
    }
    else {
      puVar18 = &DAT_14cc1ee40;
    }
    *(int *)(puVar18 + 8) = (int)local_178[0x12];
    plVar12 = local_178;
  }
  if (local_134 != 0) {
    local_1b8 = local_1b8 & 0xffffffff00000000;
    FUN_149584f48(plVar12,0x14,local_15c,local_138);
    if (local_130 == 0) {
      if (param_7 != 0) {
        local_1b8 = CONCAT44(local_1b8._4_4_,param_7);
        FUN_149584f48(plVar12,0x35,param_6,uVar14 & 0xffffffff);
        plVar12 = local_178;
        if (0 < (longlong)(int)local_178[0x12]) {
          *(undefined2 *)(local_178[0x11] + -0x16 + (longlong)(int)local_178[0x12] * 0x18) = 0x90;
        }
      }
      local_1b8 = CONCAT44(local_1b8._4_4_,param_6);
      FUN_149584f48(plVar12,0x20,local_13c,uVar14 & 0xffffffff);
      FUN_1495c9028(plVar28,2,param_2);
    }
    else {
      local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
      FUN_149584f48(plVar12,0xb,0,uVar14 & 0xffffffff);
    }
    lVar13 = plVar12[3];
    if (*(int *)(lVar13 + 0x44) + *(int *)(lVar13 + 0x48) < 0) {
      FUN_1495a1bff(lVar13,plVar12);
    }
    else {
      *(int *)(*(longlong *)(lVar13 + 0x50) + (longlong)(int)~local_138 * 4) = (int)plVar12[0x12];
    }
  }
  if ((*(byte *)(param_2 + 8) & 0x80) == 0) {
    local_1b8 = CONCAT44(local_1b8._4_4_,*(undefined4 *)(lVar29 + uVar23 * 4));
    FUN_149584f48(local_178,0x5b,param_6 + 1,(int)(short)param_2[9]);
    if (bVar30) {
      FUN_1495a3a37(local_178,param_2,0);
    }
  }
  *param_11 = (undefined4)local_110;
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495c8d72 FUN_1495c8d72 body=612 status=ok
// SIG undefined FUN_1495c8d72(void)

void FUN_1495c8d72(longlong *param_1,longlong param_2,undefined4 param_3,int param_4,
                  undefined4 param_5,longlong param_6,int param_7,int param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ushort uVar4;
  byte bVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  plVar3 = (longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar3 = (longlong *)FUN_14955a44a(param_1);
  }
  lVar6 = *(longlong *)(param_2 + 0x10);
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    bVar5 = (param_9 != 0) << 4;
    uVar8 = 0;
    do {
      iVar2 = *(int *)(param_6 + uVar8 * 4);
      if (iVar2 != 0) {
        if (*(longlong *)(lVar6 + 0x48) != 0) {
          FUN_149584f48(plVar3,0x32,iVar2,(int)plVar3[0x12] + 2,0);
        }
        uVar7 = (ushort)bVar5;
        if ((*(uint *)(lVar6 + 100) & 3) == 2) {
          uVar7 = (ushort)(byte)(bVar5 | (byte)param_7 & 2 | 1);
          if ((*(byte *)(param_2 + 0x40) & 0x80) == 0) {
            uVar7 = (ushort)bVar5;
          }
        }
        uVar4 = *(ushort *)(lVar6 + 0x5e + (ulonglong)((*(uint *)(lVar6 + 100) & 8) == 0) * 2);
        iVar2 = *(int *)(param_6 + uVar8 * 4);
        iVar2 = FUN_149584f48(plVar3,0x83,param_4 + (int)uVar8,iVar2,iVar2 + 1);
        if (*(char *)(*plVar3 + 0x61) == '\0') {
          lVar1 = plVar3[0x11];
          *(undefined1 *)(lVar1 + 1 + (longlong)iVar2 * 0x18) = 0xfd;
          *(uint *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18) = (uint)uVar4;
        }
        if (0 < (longlong)(int)plVar3[0x12]) {
          *(ushort *)(plVar3[0x11] + -0x16 + (longlong)(int)plVar3[0x12] * 0x18) = uVar7;
        }
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(longlong *)(lVar6 + 0x28);
    } while (lVar6 != 0);
    uVar8 = uVar8 & 0xffffffff;
  }
  if ((*(byte *)(param_2 + 0x40) & 0x80) == 0) {
    uVar7 = 0x21;
    if (param_7 != 0) {
      uVar7 = (ushort)(byte)((byte)param_7 | 1);
    }
    uVar4 = 0;
    if (*(char *)((longlong)param_1 + 0x1e) == '\0') {
      uVar4 = uVar7;
    }
    uVar7 = (ushort)(byte)((byte)uVar4 | 8);
    if (param_8 == 0) {
      uVar7 = uVar4;
    }
    uVar4 = (ushort)(byte)((byte)uVar7 | 0x10);
    if (param_9 == 0) {
      uVar4 = uVar7;
    }
    FUN_149584f48(plVar3,0x79,param_3,*(undefined4 *)(param_6 + uVar8 * 4),param_5);
    if ((*(char *)((longlong)param_1 + 0x1e) == '\0') && (*(char *)(*plVar3 + 0x61) == '\0')) {
      lVar6 = plVar3[0x11];
      lVar1 = plVar3[0x12];
      *(undefined1 *)(lVar6 + -0x17 + (longlong)(int)lVar1 * 0x18) = 0xfa;
      *(longlong *)(lVar6 + -8 + (longlong)(int)lVar1 * 0x18) = param_2;
    }
    if (0 < (longlong)(int)plVar3[0x12]) {
      *(ushort *)(plVar3[0x11] + -0x16 + (longlong)(int)plVar3[0x12] * 0x18) = uVar4;
    }
  }
  return;
}



// FUNCTION 1495c9028 FUN_1495c9028 body=116 status=ok
// SIG undefined FUN_1495c9028(void)

void FUN_1495c9028(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((longlong)*(short *)((longlong)param_3 + 0x44) < 0) {
    uVar1 = FUN_14955a402(*param_1,"%s.rowid",*param_3);
    uVar2 = 0xa13;
  }
  else {
    uVar1 = FUN_14955a402(*param_1,"%s.%s",*param_3,
                          *(undefined8 *)
                           (param_3[1] + (longlong)*(short *)((longlong)param_3 + 0x44) * 0x20));
    uVar2 = 0x613;
  }
  FUN_14959efda(param_1,uVar2,param_2,uVar1,0xf9,2);
  return;
}



// FUNCTION 1495c909c FUN_1495c909c body=783 status=ok
// SIG undefined FUN_1495c909c(void)

void FUN_1495c909c(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  int param_5)

{
  ushort uVar1;
  longlong *plVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  
  uVar7 = *param_1;
  plVar2 = (longlong *)param_1[2];
  iVar5 = *(int *)(param_2 + 0x34);
  if (iVar5 != param_5 && param_4 != 0) {
    if ((*(byte *)(param_3 + 0x40) & 0x80) == 0) {
      if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
        iVar15 = *(int *)(param_1 + 7) + 1;
        *(int *)(param_1 + 7) = iVar15;
      }
      else {
        bVar3 = *(char *)((longlong)param_1 + 0x1f) - 1;
        *(byte *)((longlong)param_1 + 0x1f) = bVar3;
        iVar15 = *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc);
      }
      FUN_149584f48(plVar2,0x86,param_5,iVar15,0);
      FUN_149584f48(plVar2,0x1f,iVar5,0,iVar15);
      if (iVar15 != 0) {
        bVar3 = *(byte *)((longlong)param_1 + 0x1f);
        if ((ulonglong)bVar3 < 8) {
          *(byte *)((longlong)param_1 + 0x1f) = bVar3 + 1;
          *(int *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xcc) = iVar15;
        }
      }
    }
    else {
      for (lVar11 = *(longlong *)(param_3 + 0x10); lVar11 != 0;
          lVar11 = *(longlong *)(lVar11 + 0x28)) {
        if ((*(uint *)(lVar11 + 100) & 3) == 2) goto LAB_1495c91b3;
      }
      lVar11 = 0;
LAB_1495c91b3:
      uVar1 = *(ushort *)(lVar11 + 0x5e);
      iVar15 = *(int *)(param_1 + 7) + 1;
      uVar10 = (uint)uVar1;
      *(uint *)(param_1 + 7) = *(int *)(param_1 + 7) + uVar10;
      if (uVar1 != 0) {
        uVar14 = 0;
        do {
          sVar4 = -1;
          if ((ulonglong)*(ushort *)(param_4 + 0x60) != 0) {
            uVar12 = 0;
            do {
              if (*(short *)(*(longlong *)(param_4 + 8) + uVar12 * 2) ==
                  *(short *)(*(longlong *)(lVar11 + 8) + uVar14 * 2)) {
                sVar4 = (short)uVar12;
                break;
              }
              uVar12 = uVar12 + 1;
            } while (*(ushort *)(param_4 + 0x60) != uVar12);
          }
          FUN_149584f48(plVar2,0x59,param_5,(int)sVar4,(int)uVar14 + iVar15);
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar10);
      }
      iVar5 = FUN_149584f48(plVar2,0x1e,iVar5,0,iVar15);
      if (*(char *)(*plVar2 + 0x61) == '\0') {
        lVar11 = plVar2[0x11];
        *(undefined1 *)(lVar11 + 1 + (longlong)iVar5 * 0x18) = 0xfd;
        *(uint *)(lVar11 + 0x10 + (longlong)iVar5 * 0x18) = uVar10;
      }
      uVar6 = FUN_149584f48(plVar2,0x44,0xb,2,0);
      FUN_14955a5b6(plVar2,uVar6,"corrupt database",0xffffffff);
      puVar8 = (undefined8 *)param_1[0x14];
      if ((undefined8 *)param_1[0x14] == (undefined8 *)0x0) {
        puVar8 = param_1;
      }
      *(undefined1 *)((longlong)puVar8 + 0x21) = 1;
      if (*(char *)(*plVar2 + 0x61) == '\0') {
        iVar15 = (int)plVar2[0x12] + -1;
        if (-1 < iVar5) {
          iVar15 = iVar5;
        }
        puVar9 = (undefined1 *)((longlong)iVar15 * 0x18 + plVar2[0x11]);
      }
      else {
        puVar9 = &DAT_14cc1ee40;
      }
      *(int *)(puVar9 + 8) = (int)plVar2[0x12];
    }
  }
  uVar7 = FUN_1495a25b6(uVar7,*(undefined8 *)(param_2 + 0x28),0);
  sVar4 = *(short *)(param_3 + 0x46);
  if (0 < sVar4) {
    lVar11 = 0x19;
    lVar13 = 0;
    do {
      if (*(char *)(*(longlong *)(param_3 + 8) + lVar11) == 'E') {
        FUN_149584f48(plVar2,0x53,*(int *)(param_2 + 0x30) + (int)lVar13,0,0);
        sVar4 = *(short *)(param_3 + 0x46);
      }
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0x20;
    } while (lVar13 < sVar4);
  }
  FUN_149590b67(param_1,uVar7,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),2,
                param_2);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 1495c93ab FUN_1495c93ab body=3109 status=ok
// SIG undefined FUN_1495c93ab(void)

undefined8
FUN_1495c93ab(longlong *param_1,undefined8 *param_2,longlong param_3,uint param_4,undefined4 param_5
             )

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  ushort uVar15;
  int iVar16;
  ulonglong *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  byte bVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined2 uVar25;
  longlong lVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 in_stack_ffffffffffffff78;
  longlong *local_78;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_50;
  int local_4c;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_1[0x31] != 0) {
    return 0;
  }
  if (*(longlong *)(param_3 + 0x68) != 0) {
    return 0;
  }
  lVar3 = *param_1;
  lVar12 = FUN_1495ab188(param_1);
  if (lVar12 != 0) {
    return 0;
  }
  if (*(int *)((longlong)param_2 + 0x54) != 0) {
    return 0;
  }
  if (param_4 == 0xb) {
    if ((*(short *)((longlong)param_2 + 0x44) < 0) || (*(byte *)((longlong)param_2 + 0x4e) == 0xb))
    {
      param_4 = 2;
    }
    else {
      param_4 = (uint)*(byte *)((longlong)param_2 + 0x4e);
    }
  }
  piVar4 = *(int **)(param_3 + 0x28);
  if (*piVar4 != 1) {
    return 0;
  }
  if (*(longlong *)(piVar4 + 0xc) != 0) {
    return 0;
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    return 0;
  }
  if (*(longlong *)(param_3 + 0x48) != 0) {
    return 0;
  }
  if (*(longlong *)(param_3 + 0x38) != 0) {
    return 0;
  }
  if (*(longlong *)(param_3 + 0x60) != 0) {
    return 0;
  }
  if (*(longlong *)(param_3 + 0x50) != 0) {
    return 0;
  }
  if ((*(byte *)(param_3 + 4) & 1) != 0) {
    return 0;
  }
  if (**(int **)(param_3 + 0x20) != 1) {
    return 0;
  }
  if (**(char **)(*(int **)(param_3 + 0x20) + 2) != -0x4f) {
    return 0;
  }
  puVar13 = (ulonglong *)FUN_1495a8206(param_1,0,piVar4 + 2);
  if (puVar13 == (ulonglong *)0x0) {
    return 0;
  }
  if (((int)puVar13[7] == *(int *)(param_2 + 7)) && (puVar13[0xe] == param_2[0xe])) {
    return 0;
  }
  if ((char)((byte)puVar13[8] ^ *(byte *)(param_2 + 8)) < '\0') {
    return 0;
  }
  if (*(int *)((longlong)puVar13 + 0x54) != 0) {
    return 0;
  }
  if (puVar13[3] != 0) {
    return 0;
  }
  if (*(short *)((longlong)param_2 + 0x46) != *(short *)((longlong)puVar13 + 0x46)) {
    return 0;
  }
  if (*(short *)((longlong)param_2 + 0x44) != *(short *)((longlong)puVar13 + 0x44)) {
    return 0;
  }
  if (0 < *(short *)((longlong)param_2 + 0x46)) {
    local_68 = 0;
    do {
      lVar12 = local_68 * 0x20;
      uVar15 = *(ushort *)(param_2[1] + 0x1c + lVar12) & 0x60;
      if (uVar15 != (*(ushort *)(puVar13[1] + 0x1c + lVar12) & 0x60)) {
        return 0;
      }
      lVar26 = param_2[1] + lVar12;
      lVar12 = puVar13[1] + lVar12;
      if ((uVar15 != 0) &&
         (iVar6 = FUN_14959fe84(0,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar26 + 8),0xffffffff
                               ), iVar6 != 0)) {
        return 0;
      }
      if (*(char *)(lVar26 + 0x19) != *(char *)(lVar12 + 0x19)) {
        return 0;
      }
      lVar22 = *(longlong *)(lVar12 + 0x10);
      if (*(longlong *)(lVar26 + 0x10) != 0) {
        if (lVar22 == 0) {
          return 0;
        }
        lVar19 = 0;
        do {
          bVar20 = *(byte *)(*(longlong *)(lVar26 + 0x10) + lVar19);
          if (bVar20 == *(byte *)(lVar22 + lVar19)) {
            if ((ulonglong)bVar20 == 0) goto LAB_1495c95a0;
          }
          else if ((&DAT_14bd3ff30)[bVar20] != (&DAT_14bd3ff30)[*(byte *)(lVar22 + lVar19)]) {
            return 0;
          }
          lVar19 = lVar19 + 1;
        } while( true );
      }
      if (lVar22 != 0) {
        return 0;
      }
LAB_1495c95a0:
      if ((*(char *)(lVar26 + 0x18) != '\0') && (*(char *)(lVar12 + 0x18) == '\0')) {
        return 0;
      }
      if ((local_68 != 0) && ((*(ushort *)(lVar26 + 0x1c) & 0x60) == 0)) {
        lVar26 = *(longlong *)(lVar26 + 8);
        if ((lVar26 == 0) == (*(longlong *)(lVar12 + 8) != 0)) {
          return 0;
        }
        if ((lVar26 != 0) &&
           (iVar6 = strcmp(*(char **)(lVar26 + 8),*(char **)(*(longlong *)(lVar12 + 8) + 8)),
           iVar6 != 0)) {
          return 0;
        }
      }
      local_68 = local_68 + 1;
    } while (local_68 < *(short *)((longlong)param_2 + 0x46));
  }
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar12 = param_2[2];
  if (lVar12 == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = false;
    do {
      if (*(char *)(lVar12 + 0x62) != '\0') {
        bVar5 = true;
      }
      uVar23 = puVar13[2];
      while( true ) {
        if (uVar23 == 0) {
          return 0;
        }
        iVar6 = FUN_1495ca3f5(lVar12,uVar23);
        if (iVar6 != 0) break;
        uVar23 = *(ulonglong *)(uVar23 + 0x28);
      }
      if ((*(int *)(uVar23 + 0x58) == *(int *)(lVar12 + 0x58)) && (puVar13[0xe] == param_2[0xe])) {
        if (DAT_14c765e88 == (code *)0x0) {
          return 0;
        }
        iVar6 = (*DAT_14c765e88)(0x19b);
        if (iVar6 == 0) {
          return 0;
        }
      }
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
      lVar12 = *(longlong *)(lVar12 + 0x28);
    } while (lVar12 != 0);
  }
  if ((param_2[6] != 0) && (iVar6 = FUN_1495a03ca(puVar13[6],param_2[6],0xffffffff), iVar6 != 0)) {
    return 0;
  }
  uVar23 = *(ulonglong *)(lVar3 + 0x30);
  if (((uint)uVar23 >> 0xe & 1) == 0) {
    if ((uVar23 >> 0x20 & 1) != 0) {
      return 0;
    }
  }
  else {
    if ((uVar23 >> 0x20 & 1) != 0) {
      return 0;
    }
    if (param_2[4] != 0) {
      return 0;
    }
  }
  uVar27 = 0xfff0bdc0;
  if (puVar13[0xe] != 0) {
    uVar27 = 0xffffffff;
    puVar17 = (ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x18);
    do {
      uVar27 = uVar27 + 1;
      uVar23 = *puVar17;
      puVar17 = puVar17 + 4;
    } while (uVar23 != puVar13[0xe]);
  }
  local_78 = (longlong *)param_1[2];
  if (local_78 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    local_78 = (longlong *)FUN_14955a44a(param_1);
  }
  plVar14 = (longlong *)param_1[0x14];
  if ((longlong *)param_1[0x14] == (longlong *)0x0) {
    plVar14 = param_1;
  }
  if (((*(uint *)((longlong)plVar14 + 0x74) >> (uVar27 & 0x1f) & 1) == 0) &&
     (*(uint *)((longlong)plVar14 + 0x74) =
           *(uint *)((longlong)plVar14 + 0x74) | 1 << ((byte)uVar27 & 0x1f), uVar27 == 1)) {
    FUN_14955dea7(plVar14);
  }
  iVar6 = *(int *)((longlong)param_1 + 0x34);
  iVar7 = iVar6 + 1;
  *(int *)((longlong)param_1 + 0x34) = iVar6 + 2;
  iVar8 = FUN_1495c9fd0(param_1,param_5,param_2);
  cVar1 = *(char *)((longlong)param_1 + 0x1f);
  if (cVar1 == '\0') {
    local_60 = (int)param_1[7] + 1;
    local_5c = local_60;
  }
  else {
    bVar20 = cVar1 - 1;
    *(byte *)((longlong)param_1 + 0x1f) = bVar20;
    local_5c = *(int *)((longlong)param_1 + (ulonglong)bVar20 * 4 + 0xcc);
    if (bVar20 != 0) {
      *(byte *)((longlong)param_1 + 0x1f) = cVar1 - 2U;
      local_60 = *(int *)((longlong)param_1 + (ulonglong)(byte)(cVar1 - 2U) * 4 + 0xcc);
      goto LAB_1495c97ba;
    }
    local_60 = (int)param_1[7];
  }
  local_60 = local_60 + 1;
  *(int *)(param_1 + 7) = local_60;
LAB_1495c97ba:
  uVar23 = CONCAT44(uVar10,0x61);
  FUN_14959b02c(param_1,iVar7,param_5,param_2,uVar23);
  uVar10 = (undefined4)(uVar23 >> 0x20);
  local_4c = 0;
  if (((*(byte *)(lVar3 + 0x2c) & 4) == 0) &&
     ((((*(short *)((longlong)param_2 + 0x44) < 0 && (param_2[2] != 0)) || (bVar5)) ||
      (param_4 - 3 < 0xfffffffe)))) {
    uVar23 = uVar23 & 0xffffffff00000000;
    iVar9 = FUN_149584f48(local_78,0x25,iVar7,0,uVar23);
    uVar23 = uVar23 & 0xffffffff00000000;
    local_4c = FUN_149584f48(local_78,0xb,0,0,uVar23);
    uVar10 = (undefined4)(uVar23 >> 0x20);
    if (*(char *)(*local_78 + 0x61) == '\0') {
      iVar16 = (int)local_78[0x12] + -1;
      if (-1 < iVar9) {
        iVar16 = iVar9;
      }
      puVar18 = (undefined1 *)((longlong)iVar16 * 0x18 + local_78[0x11]);
    }
    else {
      puVar18 = &DAT_14cc1ee40;
    }
    *(int *)(puVar18 + 8) = (int)local_78[0x12];
  }
  if ((puVar13[8] & 0x80) == 0) {
    uVar23 = CONCAT44(uVar10,0x60);
    FUN_14959b02c(param_1,iVar6,uVar27,puVar13,uVar23);
    uVar23 = uVar23 & 0xffffffff00000000;
    local_50 = FUN_149584f48(local_78,0x25,iVar6,0,uVar23);
    if (*(short *)((longlong)param_2 + 0x44) < 0) {
      if ((param_2[2] == 0) && ((*(byte *)(lVar3 + 0x2c) & 8) == 0)) {
        uVar28 = 0x78;
        iVar8 = iVar7;
      }
      else {
        uVar28 = 0x7f;
        iVar8 = iVar6;
      }
      uVar23 = uVar23 & 0xffffffff00000000;
      uVar10 = FUN_149584f48(local_78,uVar28,iVar8,local_60,uVar23);
      uVar11 = (undefined4)(uVar23 >> 0x20);
    }
    else {
      uVar23 = uVar23 & 0xffffffff00000000;
      uVar10 = FUN_149584f48(local_78,0x7f,iVar6,local_60,uVar23);
      uVar23 = CONCAT44((int)(uVar23 >> 0x20),local_60);
      iVar9 = FUN_149584f48(local_78,0x20,iVar7,0,uVar23);
      FUN_1495c9028(param_1,param_4,param_2);
      uVar11 = (undefined4)(uVar23 >> 0x20);
      if (*(char *)(*local_78 + 0x61) == '\0') {
        iVar16 = (int)local_78[0x12] + -1;
        if (-1 < iVar9) {
          iVar16 = iVar9;
        }
        puVar18 = (undefined1 *)((longlong)iVar16 * 0x18 + local_78[0x11]);
      }
      else {
        puVar18 = &DAT_14cc1ee40;
      }
      *(int *)(puVar18 + 8) = (int)local_78[0x12];
      if (0 < iVar8) {
        uVar23 = uVar23 & 0xffffffff00000000;
        FUN_149584f48(param_1[2],0x97,iVar8,local_60,uVar23);
        uVar11 = (undefined4)(uVar23 >> 0x20);
      }
    }
    uVar23 = CONCAT44(uVar11,1);
    FUN_149584f48(local_78,0x7e,iVar6,local_5c,uVar23);
    uVar11 = (undefined4)(uVar23 >> 0x20);
    uVar25 = 0x29;
    if ((*(byte *)(lVar3 + 0x2c) & 4) != 0) {
      uVar23 = uVar23 & 0xffffffff00000000;
      FUN_149584f48(local_78,0x81,iVar7,0,uVar23);
      uVar11 = (undefined4)(uVar23 >> 0x20);
      uVar25 = 0x39;
    }
    uVar23 = CONCAT44(uVar11,local_60);
    uVar11 = FUN_149584f48(local_78,0x79,iVar7,local_5c,uVar23);
    FUN_14955a5b6(local_78,uVar11,param_2,0xfffffffa);
    if (0 < (longlong)(int)local_78[0x12]) {
      *(undefined2 *)(local_78[0x11] + -0x16 + (longlong)(int)local_78[0x12] * 0x18) = uVar25;
    }
    uVar23 = uVar23 & 0xffffffff00000000;
    FUN_149584f48(local_78,5,iVar6,uVar10,uVar23);
    uVar23 = uVar23 & 0xffffffff00000000;
    FUN_149584f48(local_78,0x74,iVar6,0,uVar23);
    uVar23 = uVar23 & 0xffffffff00000000;
    FUN_149584f48(local_78,0x74,iVar7,0,uVar23);
  }
  else {
    FUN_14959b139(param_1,param_5,*(undefined4 *)(param_2 + 7),1,*param_2);
    uVar23 = *puVar13;
    local_50 = 0;
    FUN_14959b139(param_1,uVar27,(int)puVar13[7],0,uVar23);
  }
  lVar12 = param_2[2];
  do {
    if (lVar12 == 0) {
      if (local_50 != 0) {
        if (*(char *)(*local_78 + 0x61) == '\0') {
          iVar6 = (int)local_78[0x12] + -1;
          if (-1 < local_50) {
            iVar6 = local_50;
          }
          puVar18 = (undefined1 *)((longlong)iVar6 * 0x18 + local_78[0x11]);
        }
        else {
          puVar18 = &DAT_14cc1ee40;
        }
        *(int *)(puVar18 + 8) = (int)local_78[0x12];
      }
      if (local_60 != 0) {
        bVar20 = *(byte *)((longlong)param_1 + 0x1f);
        if ((ulonglong)bVar20 < 8) {
          *(byte *)((longlong)param_1 + 0x1f) = bVar20 + 1;
          *(int *)((longlong)param_1 + (ulonglong)bVar20 * 4 + 0xcc) = local_60;
        }
      }
      if (local_5c != 0) {
        bVar20 = *(byte *)((longlong)param_1 + 0x1f);
        if ((ulonglong)bVar20 < 8) {
          *(byte *)((longlong)param_1 + 0x1f) = bVar20 + 1;
          *(int *)((longlong)param_1 + (ulonglong)bVar20 * 4 + 0xcc) = local_5c;
        }
      }
      uVar28 = 1;
      if (local_4c != 0) {
        if (param_1[0x13] != 0) {
          FUN_1495c68c5(param_1);
        }
        uVar23 = uVar23 & 0xffffffff00000000;
        uVar28 = 0;
        FUN_149584f48(local_78,0x44,0,0,uVar23);
        if (*(char *)(*local_78 + 0x61) == '\0') {
          iVar6 = (int)local_78[0x12] + -1;
          if (-1 < local_4c) {
            iVar6 = local_4c;
          }
          puVar18 = (undefined1 *)((longlong)iVar6 * 0x18 + local_78[0x11]);
        }
        else {
          puVar18 = &DAT_14cc1ee40;
        }
        *(int *)(puVar18 + 8) = (int)local_78[0x12];
        FUN_149584f48(local_78,0x74,iVar7,0,uVar23 & 0xffffffff00000000);
      }
      return uVar28;
    }
    for (uVar24 = puVar13[2]; uVar10 = (undefined4)(uVar23 >> 0x20), uVar24 != 0;
        uVar24 = *(ulonglong *)(uVar24 + 0x28)) {
      iVar8 = FUN_1495ca3f5(lVar12,uVar24);
      uVar10 = (undefined4)(uVar23 >> 0x20);
      if (iVar8 != 0) goto LAB_1495c9be6;
    }
    uVar24 = 0;
LAB_1495c9be6:
    uVar28 = CONCAT44(uVar10,uVar27);
    FUN_149584f48(local_78,0x60,iVar6,*(undefined4 *)(uVar24 + 0x58),uVar28);
    uVar10 = (undefined4)((ulonglong)uVar28 >> 0x20);
    FUN_14959b2a7(param_1,uVar24);
    uVar23 = CONCAT44(uVar10,param_5);
    FUN_149584f48(local_78,0x61,iVar7,*(undefined4 *)(lVar12 + 0x58),uVar23);
    FUN_14959b2a7(param_1,lVar12);
    if (0 < (longlong)(int)local_78[0x12]) {
      *(undefined2 *)(local_78[0x11] + -0x16 + (longlong)(int)local_78[0x12] * 0x18) = 1;
    }
    uVar23 = uVar23 & 0xffffffff00000000;
    uVar21 = 0;
    iVar8 = FUN_149584f48(local_78,0x25,iVar6,0,uVar23);
    uVar23 = CONCAT44((int)(uVar23 >> 0x20),1);
    FUN_149584f48(local_78,0x7e,iVar6,local_5c,uVar23);
    if ((*(byte *)(lVar3 + 0x2c) & 4) != 0) {
      uVar15 = *(ushort *)(uVar24 + 0x60);
      if (uVar15 != 0) {
        uVar21 = 0;
LAB_1495c9e13:
        lVar26 = *(longlong *)(*(longlong *)(uVar24 + 0x40) + uVar21 * 8);
        if (lVar26 != 0) {
          lVar22 = 0;
          do {
            bVar20 = "BINARY"[lVar22];
            bVar2 = *(byte *)(lVar26 + lVar22);
            if (bVar20 == bVar2) {
              if ((ulonglong)bVar20 == 0) goto LAB_1495c9e44;
            }
            else if ((&DAT_14bd3ff30)[bVar20] != (&DAT_14bd3ff30)[bVar2]) break;
            lVar22 = lVar22 + 1;
          } while( true );
        }
      }
      if ((uint)uVar21 == (uint)uVar15) {
LAB_1495c9de5:
        uVar23 = uVar23 & 0xffffffff00000000;
        FUN_149584f48(local_78,0x81,iVar7,0,uVar23);
        uVar21 = 0x10;
      }
      else {
        uVar21 = 0;
      }
    }
    bVar20 = (byte)uVar21;
    if ((puVar13[8] & 0x80) != 0) {
      bVar20 = bVar20 | (*(uint *)(lVar12 + 100) & 3) == 2;
    }
    uVar23 = uVar23 & 0xffffffff00000000;
    FUN_149584f48(local_78,0x83,iVar7,local_5c,uVar23);
    if (0 < (longlong)(int)local_78[0x12]) {
      *(ushort *)(local_78[0x11] + -0x16 + (longlong)(int)local_78[0x12] * 0x18) =
           (ushort)(bVar20 | 8);
    }
    uVar23 = uVar23 & 0xffffffff00000000;
    FUN_149584f48(local_78,5,iVar6,iVar8 + 1,uVar23);
    puVar18 = &DAT_14cc1ee40;
    if (*(char *)(*local_78 + 0x61) == '\0') {
      iVar9 = (int)local_78[0x12] + -1;
      if (-1 < iVar8) {
        iVar9 = iVar8;
      }
      puVar18 = (undefined1 *)((longlong)iVar9 * 0x18 + local_78[0x11]);
    }
    *(int *)(puVar18 + 8) = (int)local_78[0x12];
    uVar23 = uVar23 & 0xffffffff00000000;
    FUN_149584f48(local_78,0x74,iVar6,0,uVar23);
    uVar23 = uVar23 & 0xffffffff00000000;
    FUN_149584f48(local_78,0x74,iVar7,0,uVar23);
    lVar12 = *(longlong *)(lVar12 + 0x28);
  } while( true );
LAB_1495c9e44:
  uVar21 = uVar21 + 1;
  if (uVar21 == (uint)uVar15) goto LAB_1495c9de5;
  goto LAB_1495c9e13;
}



// FUNCTION 1495c9fd0 FUN_1495c9fd0 body=201 status=ok
// SIG undefined FUN_1495c9fd0(void)

undefined4 FUN_1495c9fd0(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  
  uVar5 = 0;
  if (((*(byte *)(param_3 + 0x40) & 8) != 0) &&
     (lVar1 = *param_1, (*(byte *)(lVar1 + 0x2c) & 4) == 0)) {
    plVar6 = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      plVar6 = param_1;
    }
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18 + (longlong)param_2 * 0x20) + 0x68);
    if ((((lVar2 == 0) || ((*(byte *)(lVar2 + 0x40) & 0x80) != 0)) || (*(int *)(lVar2 + 0x54) != 0))
       || (*(short *)(lVar2 + 0x46) != 2)) {
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      *(undefined4 *)(param_1 + 3) = 0x20b;
    }
    else {
      plVar3 = plVar6 + 0x13;
      do {
        plVar3 = (longlong *)*plVar3;
        if (plVar3 == (longlong *)0x0) {
          plVar3 = (longlong *)FUN_14955d750(lVar1,0x18);
          if (plVar3 == (longlong *)0x0) {
            return 0;
          }
          *plVar3 = plVar6[0x13];
          plVar6[0x13] = (longlong)plVar3;
          plVar3[1] = param_3;
          *(int *)(plVar3 + 2) = param_2;
          iVar4 = (int)plVar6[7] + 2;
          *(int *)(plVar6 + 7) = iVar4;
          *(int *)((longlong)plVar3 + 0x14) = iVar4;
          *(int *)(plVar6 + 7) = (int)plVar6[7] + 2;
          break;
        }
      } while (plVar3[1] != param_3);
      uVar5 = *(undefined4 *)((longlong)plVar3 + 0x14);
    }
  }
  return uVar5;
}



// FUNCTION 1495ca099 FUN_1495ca099 body=243 status=ok
// SIG undefined FUN_1495ca099(void)

undefined8 FUN_1495ca099(longlong *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  char *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)param_1[2];
  if (plVar1 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar1 = (longlong *)FUN_14955a44a(param_1);
  }
  if ((*(int *)(param_3 + 0x54) != 0) &&
     (plVar3 = *(longlong **)(param_3 + 0x60), plVar3 != (longlong *)0x0)) {
    do {
      if (*plVar3 == *param_1) goto LAB_1495ca0e3;
      plVar3 = (longlong *)plVar3[5];
    } while (plVar3 != (longlong *)0x0);
  }
  plVar3 = (longlong *)0x0;
LAB_1495ca0e3:
  if (1 < (int)*(uint *)(plVar1 + 0x12)) {
    uVar4 = 1;
    do {
      pcVar2 = &DAT_14cc1ee40;
      if (*(char *)(*plVar1 + 0x61) == '\0') {
        pcVar2 = (char *)(uVar4 * 0x18 + plVar1[0x11]);
      }
      if (*pcVar2 == -0x5b) {
        if (*(longlong **)(pcVar2 + 0x10) == plVar3) {
          return 1;
        }
      }
      else if ((*pcVar2 == '`') && (*(int *)(pcVar2 + 0xc) == param_2)) {
        if (*(int *)(pcVar2 + 8) == *(int *)(param_3 + 0x38)) {
          return 1;
        }
        for (lVar5 = *(longlong *)(param_3 + 0x10); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28))
        {
          if (*(int *)(pcVar2 + 8) == *(int *)(lVar5 + 0x58)) {
            return 1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != *(uint *)(plVar1 + 0x12));
  }
  return 0;
}



// FUNCTION 1495ca18c FUN_1495ca18c body=616 status=ok
// SIG undefined FUN_1495ca18c(void)

void FUN_1495ca18c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined1 auStack_148 [36];
  undefined4 local_124;
  undefined8 *local_120;
  uint *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  char local_d8 [8];
  undefined8 local_d0;
  char *local_c8;
  char local_90 [44];
  undefined4 local_64;
  undefined2 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  piVar1 = (int *)*param_3;
  local_120 = param_3;
  local_110 = param_1;
  local_108 = param_2;
  if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
    piVar8 = piVar1 + 2;
    lVar9 = 0;
    do {
      iVar3 = FUN_1495a4109(&local_110,*(undefined8 *)piVar8);
      if (iVar3 != 0) goto LAB_1495ca22c;
      lVar9 = lVar9 + 1;
      piVar8 = piVar8 + 8;
    } while (lVar9 < *piVar1);
  }
  iVar3 = FUN_1495a4109(&local_110);
  if (iVar3 == 0) {
    lVar9 = *(longlong *)(param_2 + 0x28);
    puVar2 = (uint *)*local_120;
    local_124 = *(undefined4 *)(param_2 + 0x4c);
    if (((((*(byte *)(lVar9 + 0x40) & 0x80) != 0) || (*puVar2 != 1)) ||
        (**(char **)(puVar2 + 2) != -0x5c)) || (*(short *)(*(char **)(puVar2 + 2) + 0x30) != -1)) {
      memset(local_d8,0,0x90);
      local_d8[0] = 'o';
      local_c8 = local_90;
      local_90[0] = -0x5c;
      local_64 = local_124;
      lVar9 = *(longlong *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        local_118 = puVar2 + 2;
        do {
          if (*(char *)(lVar9 + 0x62) != '\0') {
            uVar4 = *puVar2;
            uVar5 = *(ushort *)(lVar9 + 0x5e);
            if (uVar4 == uVar5) {
              if (*(longlong *)(lVar9 + 0x48) != 0) {
                if ((local_120[1] == 0) ||
                   (iVar3 = FUN_14959fe84(param_1,local_120[1],*(longlong *)(lVar9 + 0x48),local_124
                                         ), iVar3 != 0)) goto LAB_1495ca3b8;
                uVar5 = *(ushort *)(lVar9 + 0x5e);
                uVar4 = (uint)uVar5;
              }
              if (uVar5 != 0) {
                uVar7 = (ulonglong)uVar4;
                uVar10 = 0;
                do {
                  local_d0 = *(undefined8 *)(*(longlong *)(lVar9 + 0x40) + uVar10 * 8);
                  puVar6 = local_118;
                  uVar11 = uVar7;
                  if (*(short *)(*(longlong *)(lVar9 + 8) + uVar10 * 2) == -2) {
                    pcVar12 = *(char **)(*(longlong *)(lVar9 + 0x50) + 8 + uVar10 * 0x20);
                    if (*pcVar12 != 'o') goto LAB_1495ca38a;
                  }
                  else {
                    local_60 = *(undefined2 *)(*(longlong *)(lVar9 + 8) + uVar10 * 2);
                    pcVar12 = local_90;
LAB_1495ca38a:
                    local_c8 = pcVar12;
                    pcVar12 = local_d8;
                  }
                  while (uVar4 = FUN_14959fe84(param_1,*(undefined8 *)puVar6,pcVar12,local_124),
                        1 < uVar4) {
                    uVar11 = uVar11 - 1;
                    puVar6 = puVar6 + 8;
                    if (uVar11 == 0) goto LAB_1495ca3b8;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 != uVar7);
              }
              local_120[4] = lVar9;
              goto LAB_1495ca22c;
            }
          }
LAB_1495ca3b8:
          lVar9 = *(longlong *)(lVar9 + 0x28);
        } while (lVar9 != 0);
      }
      FUN_14955a364(param_1,"ON CONFLICT clause does not match any PRIMARY KEY or UNIQUE constraint"
                   );
    }
  }
LAB_1495ca22c:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ca3f5 FUN_1495ca3f5 body=312 status=ok
// SIG undefined FUN_1495ca3f5(void)

bool FUN_1495ca3f5(longlong param_1,longlong param_2)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  bVar8 = false;
  if (((*(short *)(param_1 + 0x5e) == *(short *)(param_2 + 0x5e)) &&
      (*(short *)(param_1 + 0x60) == *(short *)(param_2 + 0x60))) &&
     (*(char *)(param_1 + 0x62) == *(char *)(param_2 + 0x62))) {
    if (*(short *)(param_1 + 0x5e) != 0) {
      uVar7 = 0;
      do {
        sVar2 = *(short *)(*(longlong *)(param_2 + 8) + uVar7 * 2);
        if (sVar2 != *(short *)(*(longlong *)(param_1 + 8) + uVar7 * 2)) {
          return false;
        }
        if ((sVar2 == -2) &&
           (iVar5 = FUN_14959fe84(0,*(undefined8 *)
                                     (*(longlong *)(param_2 + 0x50) + 8 + uVar7 * 0x20),
                                  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8 + uVar7 * 0x20),
                                  0xffffffff), iVar5 != 0)) {
          return false;
        }
        if (*(char *)(*(longlong *)(param_2 + 0x38) + uVar7) !=
            *(char *)(*(longlong *)(param_1 + 0x38) + uVar7)) {
          return false;
        }
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar7 * 8);
        lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x40) + uVar7 * 8);
        if (lVar4 != 0) {
          if (lVar3 == 0) {
            return false;
          }
          lVar6 = 0;
          do {
            bVar1 = *(byte *)(lVar4 + lVar6);
            if (bVar1 == *(byte *)(lVar3 + lVar6)) {
              if ((ulonglong)bVar1 == 0) goto LAB_1495ca4bd;
            }
            else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar3 + lVar6)]) {
              return false;
            }
            lVar6 = lVar6 + 1;
          } while( true );
        }
        if (lVar3 != 0) {
          return false;
        }
LAB_1495ca4bd:
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(param_2 + 0x5e));
    }
    iVar5 = FUN_14959fe84(0,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_1 + 0x48),
                          0xffffffff);
    bVar8 = iVar5 == 0;
  }
  return bVar8;
}



// FUNCTION 1495ca52d FUN_1495ca52d body=238 status=ok
// SIG undefined FUN_1495ca52d(void)

void FUN_1495ca52d(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x28), 0 < iVar4)) {
    local_1c = iVar4;
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28), local_1c < iVar4)) {
    local_1c = iVar4;
  }
  piVar2 = *(int **)(param_1 + 0x20);
  if ((*(uint *)(param_1 + 4) >> 0xb & 1) == 0) {
    iVar4 = local_1c;
    if (piVar2 != (int *)0x0) {
      if ((longlong)*piVar2 < 1) {
        uVar6 = 0;
      }
      else {
        lVar5 = (longlong)*piVar2 * 0x20;
        lVar7 = 0;
        do {
          lVar3 = *(longlong *)((longlong)piVar2 + lVar7 + 8);
          if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x28), iVar4 < iVar1)) {
            iVar4 = iVar1;
          }
          lVar7 = lVar7 + 0x20;
        } while (lVar5 != lVar7);
        lVar7 = 0;
        uVar6 = 0;
        do {
          uVar6 = uVar6 | *(uint *)(*(longlong *)((longlong)piVar2 + lVar7 + 8) + 4);
          lVar7 = lVar7 + 0x20;
        } while (lVar5 != lVar7);
        uVar6 = uVar6 & 0x200104;
      }
      *(uint *)(param_1 + 4) = uVar6 | *(uint *)(param_1 + 4);
    }
  }
  else {
    FUN_1495b4ba4(piVar2,&local_1c);
    iVar4 = local_1c;
  }
  *(int *)(param_1 + 0x28) = iVar4 + 1;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ca61c FUN_1495ca61c body=98 status=ok
// SIG undefined FUN_1495ca61c(void)

void FUN_1495ca61c(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_149584f48(param_1,0x73,0,1,0);
    FUN_14955a5b6(param_1,uVar1,param_2,0);
    FUN_149584f48(param_1,0x50,1,1,0);
  }
  return;
}



// FUNCTION 1495ca67e FUN_1495ca67e body=178 status=ok
// SIG undefined FUN_1495ca67e(void)

void FUN_1495ca67e(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined **ppuVar3;
  longlong lVar4;
  
  bVar1 = *(byte *)((longlong)param_2 + 0xb);
  bVar2 = 1;
  if (1 < bVar1) {
    bVar2 = bVar1;
  }
  FUN_1495852e4(param_1,bVar2);
  if ((ulonglong)bVar1 == 0) {
    if (*(char *)(*param_1 + 0x61) == '\0') {
      FUN_14955916b(param_1[0x13],*param_2,0xffffffff,1,0);
    }
  }
  else {
    ppuVar3 = &PTR_DAT_14bd42fc0 + *(byte *)((longlong)param_2 + 10);
    lVar4 = 0;
    do {
      if (*(char *)(*param_1 + 0x61) == '\0') {
        FUN_14955916b(param_1[0x13] + lVar4,*ppuVar3,0xffffffff,1,0);
      }
      lVar4 = lVar4 + 0x38;
      ppuVar3 = ppuVar3 + 1;
    } while ((ulonglong)bVar1 * 0x38 - lVar4 != 0);
  }
  return;
}



// FUNCTION 1495ca730 FUN_1495ca730 body=116 status=ok
// SIG undefined FUN_1495ca730(void)

void FUN_1495ca730(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0xfffffff2;
  local_18 = param_2;
  FUN_14959f7bb(param_1,0x46,1);
  local_28 = 0;
  FUN_149584f48(param_1,0x50,1,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ca7a5 FUN_1495ca7a5 body=112 status=ok
// SIG undefined FUN_1495ca7a5(void)

ushort FUN_1495ca7a5(longlong param_1,int param_2)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x11) != '\0') &&
       (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0'))
    {
      FUN_14956624a(param_1);
    }
    if (-1 < param_2) {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 8) + 0x26);
      *puVar1 = *puVar1 & 0xfff3;
      puVar1 = (ushort *)(*(longlong *)(param_1 + 8) + 0x26);
      *puVar1 = *puVar1 | (ushort)(param_2 << 2);
    }
    uVar3 = *(ushort *)(*(longlong *)(param_1 + 8) + 0x26) >> 2 & 3;
    if (*(char *)(param_1 + 0x11) != '\0') {
      piVar2 = (int *)(param_1 + 0x14);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_1495662d2(param_1);
      }
    }
  }
  return uVar3;
}



// FUNCTION 1495ca815 FUN_1495ca815 body=120 status=ok
// SIG undefined FUN_1495ca815(void)

undefined8 FUN_1495ca815(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  lVar2 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar2);
    if (bVar1 == "exclusive"[lVar2]) {
      if ((ulonglong)bVar1 == 0) {
        return 1;
      }
    }
    else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)"exclusive"[lVar2]]) {
      lVar2 = 0;
      do {
        bVar1 = *(byte *)(param_1 + lVar2);
        if (bVar1 == "normal"[lVar2]) {
          if ((ulonglong)bVar1 == 0) {
            return 0;
          }
        }
        else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)"normal"[lVar2]]) {
          return 0xffffffff;
        }
        lVar2 = lVar2 + 1;
      } while( true );
    }
    lVar2 = lVar2 + 1;
  } while( true );
}



// FUNCTION 1495ca88d FUN_1495ca88d body=246 status=ok
// SIG undefined FUN_1495ca88d(void)

uint FUN_1495ca88d(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar2);
    if (bVar1 == (&DAT_149e62dd2)[lVar2]) {
      if ((ulonglong)bVar1 == 0) goto LAB_1495ca8d7;
    }
    else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)(&DAT_149e62dd2)[lVar2]]) {
      lVar2 = 0;
      break;
    }
    lVar2 = lVar2 + 1;
  } while( true );
LAB_1495ca8fc:
  bVar1 = *(byte *)(param_1 + lVar2);
  if (bVar1 == (&DAT_14bd48387)[lVar2]) {
    if ((ulonglong)bVar1 == 0) goto LAB_1495ca927;
  }
  else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)(&DAT_14bd48387)[lVar2]]) {
    lVar2 = 0;
    goto LAB_1495ca937;
  }
  lVar2 = lVar2 + 1;
  goto LAB_1495ca8fc;
LAB_1495ca937:
  bVar1 = *(byte *)(param_1 + lVar2);
  if (bVar1 == "incremental"[lVar2]) {
    if ((ulonglong)bVar1 == 0) goto LAB_1495ca95c;
  }
  else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)"incremental"[lVar2]]) {
    local_1c = 0;
    FUN_149581ec6(param_1,&local_1c);
    uVar3 = 0;
    if (local_1c < 3) {
      uVar3 = local_1c;
    }
    goto LAB_1495ca8d9;
  }
  lVar2 = lVar2 + 1;
  goto LAB_1495ca937;
LAB_1495ca95c:
  uVar3 = 2;
  goto LAB_1495ca8d9;
LAB_1495ca927:
  uVar3 = 1;
  goto LAB_1495ca8d9;
LAB_1495ca8d7:
  uVar3 = 0;
LAB_1495ca8d9:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1495ca984 FUN_1495ca984 body=81 status=ok
// SIG undefined FUN_1495ca984(void)

void FUN_1495ca984(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 0x5f) != '\0') && (0 < *(int *)(param_1 + 0x28))) {
    uVar2 = *(int *)(param_1 + 0x28) + 1;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 0x10);
    do {
      if (*(longlong *)(pbVar1 + -8) != 0) {
        FUN_149583efa(*(longlong *)(pbVar1 + -8),*(uint *)(param_1 + 0x30) & 0x38 | (uint)*pbVar1);
      }
      uVar2 = uVar2 - 1;
      pbVar1 = pbVar1 + 0x20;
    } while (1 < uVar2);
  }
  return;
}



// FUNCTION 1495ca9d5 FUN_1495ca9d5 body=89 status=ok
// SIG undefined FUN_1495ca9d5(void)

void FUN_1495ca9d5(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  *(undefined8 *)(*plVar2 + 0xa0) = param_2;
  FUN_149564f9d();
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1495caa2e FUN_1495caa2e body=200 status=ok
// SIG undefined FUN_1495caa2e(void)

void FUN_1495caa2e(longlong *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  
  bVar1 = *param_2;
  bVar4 = bVar1 - 0x30;
  if (2 < bVar4) {
    lVar3 = 0;
    bVar4 = bVar1;
    do {
      if (bVar4 == (&DAT_149eb037c)[lVar3]) {
        if (bVar4 == 0) goto LAB_1495caa97;
      }
      else if ((&DAT_14bd3ff30)[bVar4] != (&DAT_14bd3ff30)[(byte)(&DAT_149eb037c)[lVar3]]) {
        lVar3 = 0;
        goto LAB_1495caaa8;
      }
      bVar4 = param_2[lVar3 + 1];
      lVar3 = lVar3 + 1;
    } while( true );
  }
LAB_1495caa44:
  lVar3 = *param_1;
  if ((bVar4 != *(byte *)(lVar3 + 0x60)) && (iVar2 = FUN_1495caaf6(), iVar2 == 0)) {
    *(byte *)(lVar3 + 0x60) = bVar4;
  }
  return;
LAB_1495caaa8:
  if (bVar1 == "memory"[lVar3]) {
    if (bVar1 == 0) goto LAB_1495caacf;
  }
  else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)"memory"[lVar3]]) {
    bVar4 = 0;
    goto LAB_1495caa44;
  }
  bVar1 = param_2[lVar3 + 1];
  lVar3 = lVar3 + 1;
  goto LAB_1495caaa8;
LAB_1495caacf:
  bVar4 = 2;
  goto LAB_1495caa44;
LAB_1495caa97:
  bVar4 = 1;
  goto LAB_1495caa44;
}



// FUNCTION 1495caaf6 FUN_1495caaf6 body=94 status=ok
// SIG undefined FUN_1495caaf6(void)

undefined8 FUN_1495caaf6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x28);
  uVar3 = 0;
  if (lVar2 != 0) {
    if ((*(char *)(lVar1 + 0x5f) == '\0') || (*(char *)(lVar2 + 0x10) != '\0')) {
      FUN_14955a364(param_1,"temporary storage cannot be changed from within a transaction");
      uVar3 = 1;
    }
    else {
      FUN_14956aacb(lVar2);
      *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x28) = 0;
      FUN_149557f5c(lVar1);
    }
  }
  return uVar3;
}



// FUNCTION 1495cab54 FUN_1495cab54 body=375 status=ok
// SIG undefined FUN_1495cab54(void)

ulonglong FUN_1495cab54(byte *param_1,int param_2,uint param_3)

{
  uint uVar1;
  size_t sVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  if ((ulonglong)*param_1 - 0x3a < 0xfffffffffffffff6) {
    uVar9 = 0;
    uVar1 = 0;
    local_58 = param_3;
    if (param_1 != (byte *)0x0) {
      sVar2 = strlen((char *)param_1);
      uVar1 = (uint)sVar2 & 0x3fffffff;
    }
    local_54 = uVar1 + 1;
    do {
      if (uVar1 == (byte)(&DAT_14bd48411)[uVar9]) {
        iVar8 = -(uint)(param_1 != (byte *)0x0);
        if ("onoffalseyestruextrafull" + (byte)(&DAT_14bd48409)[uVar9] == (char *)0x0) {
LAB_1495cac44:
          if (iVar8 == 0) {
LAB_1495cac49:
            if ((local_50 == 0) || ((uVar9 | 0xfffffff8) < 0xfffffffe)) {
              uVar9 = CONCAT71(0x14bd484,(&DAT_14bd48419)[uVar9]);
              goto LAB_1495cac83;
            }
          }
        }
        else if (param_1 != (byte *)0x0) {
          if (uVar1 != 0) {
            lVar5 = 0;
            uVar7 = local_54;
            do {
              uVar4 = (ulonglong)
                      (byte)("onoffalseyestruextrafull" + (byte)(&DAT_14bd48409)[uVar9])[lVar5];
              if (uVar4 == 0) {
                bVar3 = (&DAT_14bd3ff30)[param_1[lVar5]];
                uVar6 = 0;
LAB_1495cac3a:
                iVar8 = uVar6 - bVar3;
                goto LAB_1495cac44;
              }
              uVar6 = (uint)(byte)(&DAT_14bd3ff30)[uVar4];
              bVar3 = (&DAT_14bd3ff30)[param_1[lVar5]];
              if ((&DAT_14bd3ff30)[uVar4] != bVar3) goto LAB_1495cac3a;
              uVar7 = uVar7 - 1;
              lVar5 = lVar5 + 1;
            } while (1 < uVar7);
          }
          goto LAB_1495cac49;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 8);
    uVar9 = (ulonglong)local_58;
  }
  else {
    local_4c = 0;
    if (param_1 == (byte *)0x0) {
      uVar9 = 0;
    }
    else {
      FUN_149581ec6(param_1,&local_4c);
      uVar9 = (ulonglong)(byte)local_4c;
    }
  }
LAB_1495cac83:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1495caccc FUN_1495caccc body=257 status=ok
// SIG undefined FUN_1495caccc(void)

void FUN_1495caccc(undefined8 param_1,int param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_res20;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_38;
  ulonglong local_30;
  
  local_38 = &local_res20;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = 0;
  local_res20 = param_4;
  do {
    cVar1 = *(char *)(param_3 + uVar5);
    if (cVar1 == 'i') {
      lVar2 = *local_38;
      local_48 = 0;
      local_38 = local_38 + 1;
      FUN_149584f48(param_1,0x45,(int)lVar2,param_2 + (int)uVar5);
    }
    else {
      if (cVar1 != 's') {
        if (cVar1 == '\0') {
          local_48 = 0;
          FUN_149584f48(param_1,0x50,param_2,uVar5 & 0xffffffff);
        }
        if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      lVar2 = *local_38;
      uVar4 = 0x48;
      if (lVar2 != 0) {
        uVar4 = 0x73;
      }
      local_48 = 0;
      local_38 = local_38 + 1;
      uVar3 = FUN_149584f48(param_1,uVar4,0,param_2 + (int)uVar5);
      FUN_14955a5b6(param_1,uVar3,lVar2,0);
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



// FUNCTION 1495cadce FUN_1495cadce body=217 status=ok
// SIG undefined FUN_1495cadce(void)

void FUN_1495cadce(undefined8 param_1,char *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  
  for (; param_2 != (char *)0x0; param_2 = *(char **)(param_2 + 0x10)) {
    if ((*(longlong *)(param_2 + 0x18) != 0) &&
       ((uVar1 = *(uint *)(param_2 + 4), param_4 != 0 || ((uVar1 & 0x40000) == 0)))) {
      puVar2 = &DAT_14a1750d2;
      if ((*(longlong *)(param_2 + 0x28) == 0) &&
         (puVar2 = &DAT_14a157a0d, *(longlong *)(param_2 + 0x20) == 0)) {
        puVar2 = &DAT_14a1750e5;
      }
      FUN_1495caccc(param_1,1,"sissii",*(undefined8 *)(param_2 + 0x38),param_3,puVar2,
                    *(undefined8 *)(&DAT_14bd48430 + (ulonglong)(uVar1 & 3) * 8),(int)*param_2,
                    uVar1 & 0x3c0800 ^ 0x200000);
    }
  }
  return;
}



// FUNCTION 1495caea7 FUN_1495caea7 body=149 status=ok
// SIG undefined FUN_1495caea7(void)

void FUN_1495caea7(undefined8 param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_14bd4849c;
  if (param_2 == 0) {
    puVar3 = &DAT_14bd400a0;
  }
  uVar2 = (uint)(param_2 != 0) * 8 + 4;
  FUN_14955c799(param_1,2,puVar3);
  FUN_14955c799(param_1,3,puVar3);
  lVar1 = FUN_14955c8a3(param_1,&DAT_14bd478e5,2,1,0);
  *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | uVar2;
  lVar1 = FUN_14955c8a3(param_1,&DAT_14bd478e5,3,1,0);
  *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | uVar2;
  return;
}



// FUNCTION 1495caf3c FUN_1495caf3c body=111 status=ok
// SIG undefined FUN_1495caf3c(void)

undefined4 FUN_1495caf3c(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_149584f48(param_1,0x50,3,1,0);
  uVar1 = FUN_149584f48(param_1,0x30,1,*(int *)(param_1 + 0x90) + 2,1);
  FUN_149584f48(param_1,0x44,0,0,0);
  return uVar1;
}



// FUNCTION 1495cafab FUN_1495cafab body=488 status=ok
// SIG undefined FUN_1495cafab(void)

void FUN_1495cafab(longlong *param_1,int param_2,undefined8 *param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  
  lVar6 = *(longlong *)(*param_1 + 0x28);
  lVar2 = *(longlong *)(param_1[1] + 8);
  iVar4 = FUN_149558f55(*param_3);
  if (*(int *)(lVar6 + 0x9c) < iVar4) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
    lVar6 = *param_1;
    pcVar11 = "LIKE or GLOB pattern too complex";
  }
  else {
    if (param_2 != 3) {
      uVar13 = (uint)*(byte *)(lVar2 + 2);
LAB_1495cb109:
      lVar6 = FUN_149558f28(*param_3);
      lVar7 = FUN_149558f28(param_3[1]);
      if (lVar6 == 0 || lVar7 == 0) {
        return;
      }
      iVar4 = FUN_14955aab9(lVar6,lVar7,lVar2,uVar13);
      puVar3 = (ulonglong *)*param_1;
      if ((*(byte *)((longlong)puVar3 + 9) & 0x24) == 0) {
        *puVar3 = (ulonglong)(iVar4 == 0);
        *(undefined2 *)(puVar3 + 1) = 4;
        return;
      }
      FUN_14956c854();
      return;
    }
    pbVar5 = (byte *)FUN_149558f28(param_3[2]);
    if (pbVar5 == (byte *)0x0) {
      return;
    }
    bVar10 = *pbVar5;
    uVar13 = (uint)bVar10;
    if (pbVar5 != (byte *)0xffffffffffffffff && bVar10 != 0) {
      pbVar9 = pbVar5;
      uVar8 = uVar13;
      iVar4 = 0;
      do {
        iVar12 = iVar4;
        if ((byte)uVar8 < 0xc0) {
          pbVar9 = pbVar9 + 1;
          bVar1 = *pbVar9;
        }
        else {
          do {
            bVar1 = pbVar9[1];
            pbVar9 = pbVar9 + 1;
          } while (SBORROW1('\0',bVar1 & 0xc0));
        }
        uVar8 = (uint)bVar1;
      } while ((bVar1 != 0) && (iVar4 = iVar12 + 1, pbVar9 != (byte *)0xffffffffffffffff));
      if (iVar12 == 0) {
        if (0xbf < bVar10) {
          uVar8 = (uint)(byte)(&DAT_14bd40990)[bVar10 - 0xc0];
          bVar10 = pbVar5[1];
          if (SBORROW1('\0',bVar10 & 0xc0)) {
            pbVar5 = pbVar5 + 2;
            do {
              uVar8 = uVar8 << 6 | (uint)(bVar10 & 0x3f);
              bVar10 = *pbVar5;
              pbVar5 = pbVar5 + 1;
            } while (SBORROW1('\0',bVar10 & 0xc0));
          }
          uVar13 = uVar8;
          if ((uVar8 & 0xfffff800) == 0xd800) {
            uVar13 = 0xfffd;
          }
          if (uVar8 < 0x80) {
            uVar13 = 0xfffd;
          }
          if ((uVar8 & 0xfffffffe) == 0xfffe) {
            uVar13 = 0xfffd;
          }
        }
        goto LAB_1495cb109;
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
    lVar6 = *param_1;
    pcVar11 = "ESCAPE expression must be a single character";
  }
  FUN_14955916b(lVar6,pcVar11,0xffffffff,1,0xffffffffffffffff);
  return;
}



// FUNCTION 1495cb193 FUN_1495cb193 body=250 status=ok
// SIG undefined FUN_1495cb193(void)

undefined1 *
FUN_1495cb193(longlong *param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *_Dst;
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 *_Dst_00;
  byte *pbVar5;
  
  lVar3 = *param_1;
  uVar2 = *(uint *)(param_3 + 1);
  if (lVar3 == 0) {
    _Dst_00 = (undefined1 *)FUN_145e3bd67((ulonglong)uVar2 + 0x59);
  }
  else {
    _Dst_00 = (undefined1 *)FUN_14955d750(lVar3);
  }
  if (_Dst_00 != (undefined1 *)0x0) {
    memset(_Dst_00,0,(ulonglong)uVar2 + 0x59);
    _Dst = _Dst_00 + 0x58;
    memcpy(_Dst,(void *)*param_3,(ulonglong)*(uint *)(param_3 + 1));
    FUN_1495a976e(_Dst);
    *(undefined1 **)(_Dst_00 + 0x18) = _Dst;
    *_Dst_00 = param_2;
    pbVar5 = (byte *)FUN_1495a97c9(lVar3,param_4,param_5);
    if (pbVar5 != (byte *)0x0) {
      bVar1 = *pbVar5;
      pbVar4 = pbVar5;
      while (bVar1 != 0) {
        if (((&DAT_14bd400b0)[bVar1] & 1) != 0) {
          *pbVar4 = 0x20;
        }
        bVar1 = pbVar4[1];
        pbVar4 = pbVar4 + 1;
      }
    }
    *(byte **)(_Dst_00 + 0x40) = pbVar5;
    if (1 < *(byte *)((longlong)param_1 + 0x114)) {
      FUN_14958fa77(param_1,*(undefined8 *)(_Dst_00 + 0x18),param_3);
    }
  }
  return _Dst_00;
}



// FUNCTION 1495cb28d FUN_1495cb28d body=1567 status=ok
// SIG undefined FUN_1495cb28d(void)

void FUN_1495cb28d(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 uVar21;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  longlong local_70;
  longlong local_68;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(*param_1 + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_68 = 0;
  puVar14 = (undefined1 *)FUN_149558f28(*param_3);
  puVar15 = (undefined1 *)FUN_149558f28(param_3[1]);
  if (puVar14 == (undefined1 *)0x0) {
    puVar14 = &DAT_149e02088;
  }
  if (puVar15 == (undefined1 *)0x0) {
    puVar15 = &DAT_149e02088;
  }
  if ((*(byte *)(plVar3 + 0x17) & 4) == 0) {
    iVar12 = (int)plVar3[5];
    if (iVar12 < (int)plVar3[0x13] + 2) {
      plVar20 = (longlong *)plVar3[4];
      if (0 < iVar12) {
        lVar16 = 0;
LAB_1495cb32b:
        lVar18 = 0;
        do {
          bVar2 = *(byte *)(plVar20[lVar16 * 4] + lVar18);
          if (bVar2 == puVar15[lVar18]) {
            if ((ulonglong)bVar2 == 0) {
              local_68 = FUN_14955a402(plVar3,"database %s is already in use",puVar15);
              goto LAB_1495cb40d;
            }
          }
          else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[(byte)puVar15[lVar18]])
          goto LAB_1495cb361;
          lVar18 = lVar18 + 1;
        } while( true );
      }
LAB_1495cb369:
      if (plVar20 == plVar3 + 0x4e) {
        puVar17 = (undefined8 *)FUN_14955d750(plVar3,0x60);
        if (puVar17 == (undefined8 *)0x0) goto LAB_1495cb3d3;
        puVar4 = (undefined8 *)plVar3[4];
        uVar21 = *puVar4;
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar7 = puVar4[3];
        uVar8 = puVar4[4];
        uVar9 = puVar4[5];
        uVar10 = puVar4[7];
        puVar17[6] = puVar4[6];
        puVar17[7] = uVar10;
        puVar17[4] = uVar8;
        puVar17[5] = uVar9;
        puVar17[2] = uVar6;
        puVar17[3] = uVar7;
        *puVar17 = uVar21;
        puVar17[1] = uVar5;
      }
      else {
        puVar17 = (undefined8 *)FUN_14955d6fd(plVar3,plVar20,(longlong)iVar12 * 0x20 + 0x20);
        if (puVar17 == (undefined8 *)0x0) goto LAB_1495cb3d3;
      }
      plVar3[4] = (longlong)puVar17;
      lVar16 = (longlong)(int)plVar3[5];
      puVar17[lVar16 * 4 + 2] = 0;
      (puVar17 + lVar16 * 4 + 2)[1] = 0;
      puVar17[lVar16 * 4] = 0;
      (puVar17 + lVar16 * 4)[1] = 0;
      local_5c = *(uint *)((longlong)plVar3 + 0x4c);
      local_80 = &local_58;
      local_88 = &local_50;
      iVar12 = FUN_1495cbb64(*(undefined8 *)(*plVar3 + 0x18),puVar14,&local_5c,&local_70);
      uVar21 = local_50;
      if (iVar12 != 0) {
        if (((iVar12 == 7) && (*(char *)((longlong)plVar3 + 0x61) == '\0')) &&
           (*(char *)((longlong)plVar3 + 0x62) == '\0')) {
          *(undefined1 *)((longlong)plVar3 + 0x61) = 1;
          if (0 < *(int *)((longlong)plVar3 + 0xd4)) {
            *(undefined4 *)(plVar3 + 0x2e) = 1;
          }
          *(int *)(plVar3 + 0x2f) = (int)plVar3[0x2f] + 1;
          *(undefined2 *)((longlong)plVar3 + 0x17c) = 0;
          if (plVar3[0x27] != 0) {
            *(undefined4 *)(plVar3[0x27] + 0x18) = 7;
          }
        }
        *(undefined4 *)((longlong)param_1 + 0x24) = 1;
        local_88 = (undefined8 *)0xffffffffffffffff;
        FUN_14955916b(*param_1,local_58,0xffffffff,1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
      }
      plVar20 = puVar17 + lVar16 * 4;
      local_80 = (undefined8 *)(CONCAT44(local_80._4_4_,local_5c) | 0x100);
      local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
      local_5c = local_5c | 0x100;
      iVar12 = FUN_14955dfa8(local_70,local_50,plVar3,plVar20 + 1);
      *(int *)(plVar3 + 5) = (int)plVar3[5] + 1;
      lVar16 = FUN_149559683(plVar3,puVar15);
      *plVar20 = lVar16;
      goto LAB_1495cb5a7;
    }
    local_68 = FUN_14955a402(plVar3,"too many attached databases - max %d",(int)plVar3[0x13]);
LAB_1495cb40d:
    iVar12 = 0;
LAB_1495cb414:
    if (local_68 != 0) goto LAB_1495cb858;
  }
  else {
    lVar16 = FUN_149553829("memdb");
    local_70 = lVar16;
    if (lVar16 == 0) goto LAB_1495cb3d3;
    lVar18 = (ulonglong)*(byte *)((longlong)plVar3 + 0xb4) * 0x20;
    plVar20 = (longlong *)(plVar3[4] + lVar18);
    plVar19 = (longlong *)(plVar3[4] + lVar18 + 8);
    if (*plVar19 != 0) {
      FUN_14956aacb();
    }
    uVar21 = 0;
    plVar20[1] = 0;
    plVar20[3] = 0;
    local_80 = (undefined8 *)CONCAT44(local_80._4_4_,0x100);
    local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
    iVar12 = FUN_14955dfa8(lVar16,&DAT_14bd486b4,plVar3,plVar19);
LAB_1495cb5a7:
    *(undefined1 *)((longlong)plVar3 + 0x69) = 0;
    if (iVar12 == 0) {
      lVar16 = FUN_1495cc0c8(plVar3,plVar20[1]);
      plVar20[3] = lVar16;
      iVar12 = 0;
      if (lVar16 == 0) {
        iVar12 = 7;
LAB_1495cb611:
        bVar11 = false;
      }
      else {
        bVar11 = true;
        if ((*(char *)(lVar16 + 0x70) != '\0') &&
           (*(char *)(lVar16 + 0x71) != *(char *)((longlong)plVar3 + 0x5e))) {
          local_68 = FUN_14955a402(plVar3,
                                   "attached databases must use the same text encoding as main database"
                                  );
          iVar12 = 1;
          goto LAB_1495cb611;
        }
      }
      lVar16 = plVar20[1];
      if ((*(char *)(lVar16 + 0x11) != '\0') &&
         (*(int *)(lVar16 + 0x14) = *(int *)(lVar16 + 0x14) + 1, *(char *)(lVar16 + 0x12) == '\0'))
      {
        FUN_14956624a();
      }
      lVar16 = **(longlong **)(plVar20[1] + 8);
      if (*(char *)(lVar16 + 0x10) == '\0') {
        if ((*(longlong *)(lVar16 + 0x120) == 0) ||
           (*(char *)(*(longlong *)(lVar16 + 0x120) + 0x3f) != '\x02')) {
          *(undefined1 *)(lVar16 + 8) = *(undefined1 *)((longlong)plVar3 + 99);
        }
      }
      uVar13 = FUN_1495ca7a5(*(undefined8 *)(plVar3[4] + 8),0xffffffff);
      FUN_1495ca7a5(plVar20[1],uVar13);
      FUN_149583efa(plVar20[1],*(uint *)(plVar3 + 6) & 0x38 | 3);
      if (*(char *)(plVar20[1] + 0x11) != '\0') {
        piVar1 = (int *)(plVar20[1] + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1495662d2();
        }
      }
      *(undefined1 *)(plVar20 + 2) = 3;
      if ((!bVar11) || (iVar12 = 7, *plVar20 == 0)) goto LAB_1495cb5d2;
      FUN_145e3b961(uVar21);
      if (*(char *)((longlong)plVar3 + 0x69) == '\0') {
        FUN_14955dca3(plVar3);
      }
      *(undefined1 *)((longlong)plVar3 + 0xb4) = 0;
      *(byte *)((longlong)plVar3 + 0x2c) = *(byte *)((longlong)plVar3 + 0x2c) & 0xef;
      iVar12 = 0;
      if ((*(byte *)(plVar3 + 0x17) & 4) == 0) {
        iVar12 = FUN_14955cf5d(plVar3,&local_68);
      }
      if (*(char *)((longlong)plVar3 + 0x69) == '\0') {
        FUN_14955dd00(plVar3);
      }
      if (iVar12 == 0) goto LAB_1495cb3d3;
    }
    else {
      if (iVar12 == 0x13) {
        local_68 = FUN_14955a402(plVar3,"database is already attached");
        iVar12 = 1;
      }
      *(undefined1 *)(plVar20 + 2) = 3;
LAB_1495cb5d2:
      FUN_145e3b961(uVar21);
    }
    if ((*(byte *)(plVar3 + 0x17) & 4) != 0) goto LAB_1495cb414;
    lVar16 = (longlong)(int)plVar3[5] + -1;
    lVar18 = lVar16 * 0x20;
    if (*(longlong *)(plVar3[4] + 8 + lVar18) != 0) {
      FUN_14956aacb();
      *(undefined8 *)(plVar3[4] + 8 + lVar18) = 0;
      *(undefined8 *)(plVar3[4] + 0x18 + lVar18) = 0;
    }
    FUN_149557f5c(plVar3);
    *(int *)(plVar3 + 5) = (int)lVar16;
    if ((iVar12 == 0xc0a) || (iVar12 == 7)) {
      if ((*(char *)((longlong)plVar3 + 0x61) == '\0') &&
         (*(char *)((longlong)plVar3 + 0x62) == '\0')) {
        *(undefined1 *)((longlong)plVar3 + 0x61) = 1;
        if (0 < *(int *)((longlong)plVar3 + 0xd4)) {
          *(undefined4 *)(plVar3 + 0x2e) = 1;
        }
        *(int *)(plVar3 + 0x2f) = (int)plVar3[0x2f] + 1;
        *(undefined2 *)((longlong)plVar3 + 0x17c) = 0;
        if (plVar3[0x27] != 0) {
          *(undefined4 *)(plVar3[0x27] + 0x18) = 7;
        }
      }
      if (local_68 != 0) {
        FUN_14955d65a(plVar3);
      }
      local_68 = FUN_14955a402(plVar3,"out of memory");
      goto LAB_1495cb414;
    }
    if (local_68 == 0) {
      local_68 = FUN_14955a402(plVar3,"unable to open database: %s",puVar14);
      goto LAB_1495cb414;
    }
LAB_1495cb858:
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
    local_88 = (undefined8 *)0xffffffffffffffff;
    FUN_14955916b(*param_1,local_68,0xffffffff,1);
    if (local_68 != 0) {
      FUN_14955d65a(plVar3);
    }
  }
  if (iVar12 != 0) {
    FUN_14955957e(param_1,iVar12);
  }
LAB_1495cb3d3:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1495cb361:
  lVar16 = lVar16 + 1;
  if (lVar16 == iVar12) goto LAB_1495cb369;
  goto LAB_1495cb32b;
}



// FUNCTION 1495cb8c5 FUN_1495cb8c5 body=670 status=ok
// SIG undefined FUN_1495cb8c5(void)

void FUN_1495cb8c5(longlong *param_1,int param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  if ((int)param_1[6] == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_80 = param_1;
    if (param_5 == (char *)0x0) {
LAB_1495cb97f:
      if (param_6 != (char *)0x0) {
        if (*param_6 == ';') {
          *param_6 = 's';
        }
        else {
          iVar2 = FUN_1495a4109(&local_80,param_6);
          if (iVar2 != 0) goto LAB_1495cb90b;
        }
      }
      if (param_7 != (char *)0x0) {
        if (*param_7 == ';') {
          *param_7 = 's';
        }
        else {
          iVar2 = FUN_1495a4109(&local_80,param_7);
          if (iVar2 != 0) goto LAB_1495cb90b;
        }
      }
      if (param_4 != (char *)0x0) {
        if (*param_4 == 's') {
          uVar3 = *(undefined8 *)(param_4 + 8);
        }
        else {
          uVar3 = 0;
        }
        local_a8 = 0;
        iVar2 = FUN_1495a2d6b(param_1,param_2,uVar3,0);
        if (iVar2 != 0) goto LAB_1495cb90b;
      }
      local_88 = param_1[2];
      if (local_88 == 0) {
        if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
          *(undefined1 *)((longlong)param_1 + 0x23) = 1;
        }
        local_88 = FUN_14955a44a(param_1);
      }
      if ((int)param_1[5] < 4) {
        iVar2 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = (int)param_1[7] + 4;
      }
      else {
        iVar2 = *(int *)((longlong)param_1 + 0x2c);
        *(int *)((longlong)param_1 + 0x2c) = iVar2 + 4;
        *(int *)(param_1 + 5) = (int)param_1[5] + -4;
      }
      FUN_14959afe0(param_1,param_5,iVar2);
      FUN_14959afe0(param_1,param_6,iVar2 + 1);
      FUN_14959afe0(param_1,param_7,iVar2 + 2);
      if (local_88 != 0) {
        local_98 = 0;
        local_a0 = param_3;
        local_a8._0_4_ = (int)*param_3;
        FUN_14959db43(param_1,0,(iVar2 + 3) - (int)*param_3,iVar2 + 3);
        local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
        FUN_149584f48(local_88,0x9e,param_2 == 0x18,0);
      }
      goto LAB_1495cb90b;
    }
    if (*param_5 == ';') {
      *param_5 = 's';
      goto LAB_1495cb97f;
    }
    iVar2 = FUN_1495a4109(&local_80,param_5);
    if (iVar2 == 0) goto LAB_1495cb97f;
  }
  else {
LAB_1495cb90b:
    if (param_5 == (char *)0x0) goto LAB_1495cb914;
  }
  FUN_14958288e(lVar1,param_5);
LAB_1495cb914:
  if (param_6 != (char *)0x0) {
    FUN_14958288e(lVar1,param_6);
  }
  if (param_7 != (char *)0x0) {
    FUN_14958288e(lVar1,param_7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495cbb64 FUN_1495cbb64 body=1380 status=ok
// SIG undefined FUN_1495cbb64(void)

undefined8
FUN_1495cbb64(char *param_1,int *param_2,uint *param_3,longlong *param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  size_t sVar4;
  char *_Str;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int *_Str_00;
  undefined **ppuVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  byte bVar17;
  uint uVar18;
  char *_Str_01;
  char *local_58;
  uint local_50;
  uint local_4c;
  
  uVar11 = *param_3;
  uVar18 = 0;
  if (param_2 != (int *)0x0) {
    sVar4 = strlen((char *)param_2);
    uVar18 = (uint)sVar4 & 0x3fffffff;
  }
  if (((4 < uVar18 & (DAT_14c765cfe != '\0' | (byte)uVar11 >> 6)) != 1) ||
     ((char)param_2[1] != ':' || *param_2 != 0x656c6966)) {
    _Str = (char *)FUN_145e3bd67(uVar18 + 2);
    if (_Str == (char *)0x0) {
      return 7;
    }
    if (uVar18 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulonglong)uVar18;
      memcpy(_Str,param_2,uVar7);
    }
    (_Str + uVar7)[0] = '\0';
    (_Str + uVar7)[1] = '\0';
    uVar11 = uVar11 & 0xffffffbf;
    goto LAB_1495cbc9f;
  }
  uVar7 = (ulonglong)(uVar18 + 2);
  uVar9 = 0;
  do {
    uVar7 = uVar7 + (*(char *)((longlong)param_2 + uVar9) == '&');
    uVar9 = uVar9 + 1;
  } while (uVar18 != uVar9);
  _Str = (char *)FUN_145e3bd67(uVar7);
  if (_Str == (char *)0x0) {
    return 7;
  }
  uVar11 = uVar11 | 0x40;
  uVar7 = 5;
  if ((*(char *)((longlong)param_2 + 5) != '/') || (*(char *)((longlong)param_2 + 6) != '/')) {
LAB_1495cbcdc:
    iVar14 = 0;
    iVar8 = 0;
    do {
      lVar10 = (longlong)iVar8;
      uVar7 = uVar7 & 0xffffffff;
LAB_1495cbcf3:
      uVar18 = (uint)uVar7;
      bVar17 = *(byte *)((longlong)param_2 + (longlong)(int)uVar18);
      if ((bVar17 == 0) || (bVar17 == 0x23)) {
        if (iVar14 == 1) {
          _Str[lVar10] = '\0';
          lVar10 = (longlong)(iVar8 + 1);
        }
        (_Str + lVar10)[0] = '\0';
        (_Str + lVar10)[1] = '\0';
        sVar4 = strlen(_Str);
        uVar7 = (ulonglong)((uint)sVar4 & 0x3fffffff);
        if (_Str[uVar7 + 1] == '\0') goto LAB_1495cbc9f;
        _Str_00 = (int *)(_Str + uVar7 + 1);
        local_58 = param_1;
        goto LAB_1495cbebd;
      }
      uVar15 = uVar18 + 1;
      uVar7 = (ulonglong)uVar15;
      if (((bVar17 == 0x25) &&
          (bVar2 = *(byte *)((longlong)param_2 + (longlong)(int)uVar15),
          ((&DAT_14bd400b0)[bVar2] & 8) != 0)) &&
         (bVar3 = *(byte *)((longlong)param_2 + (longlong)(int)uVar18 + 2),
         ((&DAT_14bd400b0)[bVar3] & 8) != 0)) {
        uVar7 = (ulonglong)(uVar18 + 3);
        bVar17 = ((char)(bVar3 * '\x02') >> 7 & 9U) + bVar3 & 0xf |
                 (((char)(bVar2 * '\x02') >> 7 & 9U) + bVar2) * '\x10';
        if (bVar17 != 0) goto LAB_1495cbe2d;
        for (pcVar16 = (char *)((longlong)(int)(uVar18 + 3) + (longlong)param_2);
            ((cVar1 = *pcVar16, cVar1 != '\0' && (cVar1 != '#')) &&
            ((iVar14 != 0 || (cVar1 != '?')))); pcVar16 = pcVar16 + 1) {
          if (iVar14 == 1) {
            if ((cVar1 == '&') || (cVar1 == '=')) break;
          }
          else if ((iVar14 == 2) && (cVar1 == '&')) break;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        }
        goto LAB_1495cbcf3;
      }
      if (iVar14 != 1) {
        if (((iVar14 != 0) || (bVar17 != 0x3f)) && ((iVar14 != 2 || (bVar17 != 0x26))))
        goto LAB_1495cbe2d;
LAB_1495cbe43:
        iVar14 = 1;
        goto LAB_1495cbe49;
      }
      if ((bVar17 != 0x3d) && (bVar17 != 0x26)) {
        iVar14 = 1;
        goto LAB_1495cbe2d;
      }
      if (_Str[lVar10 + -1] == '\0') {
        pcVar16 = (char *)((longlong)(int)uVar15 + (longlong)param_2);
        while( true ) {
          uVar18 = uVar18 + 1;
          uVar7 = (ulonglong)uVar18;
          iVar14 = 1;
          if (((*pcVar16 == '\0') || (*pcVar16 == '#')) || (pcVar16[-1] == '&')) break;
          pcVar16 = pcVar16 + 1;
        }
        goto LAB_1495cbcf3;
      }
      if (bVar17 == 0x26) {
        iVar8 = iVar8 + 1;
        _Str[lVar10] = '\0';
        lVar10 = (longlong)iVar8;
        goto LAB_1495cbe43;
      }
      iVar14 = 2;
LAB_1495cbe49:
      bVar17 = 0;
LAB_1495cbe2d:
      iVar8 = iVar8 + 1;
      _Str[lVar10] = bVar17;
    } while( true );
  }
  for (lVar10 = 0;
      (cVar1 = *(char *)((longlong)param_2 + lVar10 + 7), cVar1 != '\0' && (cVar1 != '/'));
      lVar10 = lVar10 + 1) {
  }
  uVar7 = lVar10 + 7;
  if ((int)uVar7 == 0x10) {
    uVar7 = 0x10;
    if (*(char *)((longlong)param_2 + 0xf) == 't' &&
        *(longlong *)((longlong)param_2 + 7) == 0x736f686c61636f6c) goto LAB_1495cbcdc;
  }
  else if ((int)uVar7 == 7) goto LAB_1495cbcdc;
  uVar6 = FUN_1495558d3("invalid uri authority: %.*s",lVar10,(longlong)param_2 + 7);
  goto LAB_1495cc03e;
LAB_1495cbebd:
  do {
    uVar18 = 0;
    uVar15 = 0;
    if (_Str_00 != (int *)0x0) {
      sVar4 = strlen((char *)_Str_00);
      uVar15 = (uint)sVar4 & 0x3fffffff;
    }
    pcVar16 = (char *)((longlong)_Str_00 + (ulonglong)uVar15 + 1);
    if (pcVar16 != (char *)0x0) {
      sVar4 = strlen(pcVar16);
      uVar18 = (uint)sVar4 & 0x3fffffff;
    }
    if (uVar15 == 5) {
      if ((char)_Str_00[1] == 'e' && *_Str_00 == 0x68636163) {
        local_4c = 0x60000;
        local_50 = 0xfff9ffff;
        ppuVar12 = &PTR_s_shared_14bd48760;
        pcVar5 = "cache";
LAB_1495cbfa2:
        _Str_01 = *ppuVar12;
        if (_Str_01 != (char *)0x0) {
          while( true ) {
            sVar4 = strlen(_Str_01);
            if ((uVar18 == ((uint)sVar4 & 0x3fffffff)) &&
               (iVar8 = memcmp(pcVar16,_Str_01,(ulonglong)uVar18), iVar8 == 0)) break;
            _Str_01 = ppuVar12[2];
            ppuVar12 = ppuVar12 + 2;
            if (_Str_01 == (char *)0x0) goto LAB_1495cc02a;
          }
          uVar15 = *(uint *)(ppuVar12 + 1);
          if (uVar15 != 0) {
            if ((int)(uVar15 & 0xffffff7f) <= (int)local_4c) {
              uVar11 = uVar15 | local_50 & uVar11;
              goto LAB_1495cc00f;
            }
            uVar6 = FUN_1495558d3("%s mode not allowed: %s",pcVar5,pcVar16);
            uVar13 = 3;
            goto LAB_1495cc043;
          }
        }
LAB_1495cc02a:
        uVar6 = FUN_1495558d3("no such %s mode: %s",pcVar5,pcVar16);
        goto LAB_1495cc03e;
      }
    }
    else if (uVar15 == 4) {
      if (*_Str_00 == 0x65646f6d) {
        local_4c = uVar11 & 0x87;
        local_50 = 0xffffff78;
        ppuVar12 = &PTR_DAT_14bd487a0;
        pcVar5 = "access";
        goto LAB_1495cbfa2;
      }
    }
    else if ((uVar15 == 3) && (*(char *)((longlong)_Str_00 + 2) == 's' && (short)*_Str_00 == 0x6676)
            ) {
      local_58 = pcVar16;
    }
LAB_1495cc00f:
    _Str_00 = (int *)(pcVar16 + (ulonglong)uVar18 + 1);
    param_1 = local_58;
  } while ((char)*_Str_00 != '\0');
LAB_1495cbc9f:
  lVar10 = FUN_149553829(param_1);
  *param_4 = lVar10;
  uVar13 = 0;
  if (lVar10 != 0) goto LAB_1495cbcb5;
  uVar6 = FUN_1495558d3("no such vfs: %s",param_1);
LAB_1495cc03e:
  uVar13 = 1;
LAB_1495cc043:
  *param_6 = uVar6;
  FUN_145e3b961(_Str);
  _Str = (char *)0x0;
LAB_1495cbcb5:
  *param_3 = uVar11;
  *param_5 = _Str;
  return uVar13;
}



// FUNCTION 1495cc0c8 FUN_1495cc0c8 body=211 status=ok
// SIG undefined FUN_1495cc0c8(void)

undefined8 * FUN_1495cc0c8(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)FUN_145e3bd67(0x78);
    if (puVar1 == (undefined8 *)0x0) {
LAB_1495cc14c:
      if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
        *(undefined1 *)(param_1 + 0x61) = 1;
        if (0 < *(int *)(param_1 + 0xd4)) {
          *(undefined4 *)(param_1 + 0x170) = 1;
        }
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        *(undefined2 *)(param_1 + 0x17c) = 0;
        if (*(longlong *)(param_1 + 0x138) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
        }
      }
      return (undefined8 *)0x0;
    }
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0xe] = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_14955f26e(param_2,0x78,FUN_149578912);
    if (puVar1 == (undefined8 *)0x0) goto LAB_1495cc14c;
  }
  if (*(char *)(puVar1 + 0xe) == '\0') {
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x71) = 1;
  }
  return puVar1;
}



// FUNCTION 1495cc19b FUN_1495cc19b body=386 status=ok
// SIG undefined FUN_1495cc19b(void)

void FUN_1495cc19b(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar3 = (undefined1 *)FUN_149558f28(*param_3);
  puVar9 = &DAT_149e02088;
  if (puVar3 != (undefined1 *)0x0) {
    puVar9 = puVar3;
  }
  uVar6 = (ulonglong)*(int *)(*(longlong *)(*param_1 + 0x28) + 0x28);
  pcVar8 = "no such database: %s";
  if (0 < (longlong)uVar6) {
    lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x28) + 0x20);
    uVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar2 + 8 + uVar10 * 0x20);
      if (lVar5 != 0) {
        plVar7 = (longlong *)(uVar10 * 0x20 + lVar2);
        lVar11 = 0;
        do {
          bVar1 = *(byte *)(*plVar7 + lVar11);
          if (bVar1 == puVar9[lVar11]) {
            if ((ulonglong)bVar1 == 0) {
              if (uVar10 < 2) {
                pcVar8 = "cannot detach database %s";
              }
              else {
                pcVar8 = "database %s is locked";
                if ((*(char *)(lVar5 + 0x10) == '\0') && (*(int *)(lVar5 + 0x18) == 0)) {
                  plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x38) + 0x40);
                  if (plVar4 != (longlong *)0x0) {
                    do {
                      lVar2 = plVar4[2];
                      uVar6 = *(ulonglong *)(lVar2 + 0x30);
                      if (uVar6 == plVar7[3]) {
                        uVar6 = *(ulonglong *)(lVar2 + 0x28);
                        *(ulonglong *)(lVar2 + 0x30) = uVar6;
                      }
                      plVar4 = (longlong *)*plVar4;
                    } while (plVar4 != (longlong *)0x0);
                    lVar5 = plVar7[1];
                  }
                  FUN_14956aacb(lVar5,uVar6,"database %s is locked");
                  plVar7[1] = 0;
                  plVar7[3] = 0;
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
                }
              }
              goto LAB_1495cc255;
            }
          }
          else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)puVar9[lVar11]]) break;
          lVar11 = lVar11 + 1;
        } while( true );
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar6);
  }
LAB_1495cc255:
  FUN_14955591f(0x80,local_c8,pcVar8);
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  local_d8 = 0xffffffffffffffff;
  FUN_14955916b(*param_1,local_c8,0xffffffff,1);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495cc339 FUN_1495cc339 body=236 status=ok
// SIG undefined FUN_1495cc339(void)

void FUN_1495cc339(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(int *)(param_2 + 0x54) == 0) {
    for (lVar2 = *(longlong *)(param_2 + 0x10); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
      if (param_3 == 0) {
LAB_1495cc3c9:
        iVar5 = -1000000;
        if (*(longlong *)(param_2 + 0x70) != 0) {
          iVar5 = -1;
          plVar3 = (longlong *)(*(longlong *)(*param_1 + 0x20) + 0x18);
          do {
            iVar5 = iVar5 + 1;
            lVar6 = *plVar3;
            plVar3 = plVar3 + 4;
          } while (lVar6 != *(longlong *)(param_2 + 0x70));
        }
        FUN_1495a3043(param_1,0,iVar5);
        FUN_1495a9e2f(param_1,lVar2,0xffffffff);
      }
      else if ((ulonglong)*(ushort *)(lVar2 + 0x60) != 0) {
        uVar4 = 0;
        do {
          if (-1 < *(short *)(*(longlong *)(lVar2 + 8) + uVar4 * 2)) {
            lVar6 = 0;
            do {
              bVar1 = *(byte *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + uVar4 * 8) + lVar6);
              if (bVar1 == *(byte *)(param_3 + lVar6)) {
                if ((ulonglong)bVar1 == 0) goto LAB_1495cc3c9;
              }
              else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(param_3 + lVar6)])
              break;
              lVar6 = lVar6 + 1;
            } while( true );
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != *(ushort *)(lVar2 + 0x60));
      }
    }
  }
  return;
}



// FUNCTION 1495cc425 FUN_1495cc425 body=163 status=ok
// SIG undefined FUN_1495cc425(void)

void FUN_1495cc425(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x20) + 0x18 + (longlong)param_2 * 0x20);
  FUN_1495a3043(param_1,0,param_2);
  iVar1 = *(int *)((longlong)param_1 + 0x34);
  *(int *)((longlong)param_1 + 0x34) = iVar1 + 3;
  FUN_1495cc585(param_1,param_2,iVar1,0,0);
  plVar4 = *(longlong **)(lVar3 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x34);
    lVar3 = param_1[7];
    do {
      FUN_1495cc76f(param_1,plVar4[2],0,iVar1,(int)lVar3 + 1,uVar2);
      plVar4 = (longlong *)*plVar4;
    } while (plVar4 != (longlong *)0x0);
  }
  FUN_1495cd0b6(param_1,param_2);
  return;
}



// FUNCTION 1495cc4c8 FUN_1495cc4c8 body=189 status=ok
// SIG undefined FUN_1495cc4c8(void)

void FUN_1495cc4c8(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined *puVar5;
  int iVar6;
  
  iVar6 = -1000000;
  if (param_2[0xe] != 0) {
    iVar6 = -1;
    plVar4 = (longlong *)(*(longlong *)(*param_1 + 0x20) + 0x18);
    do {
      iVar6 = iVar6 + 1;
      lVar2 = *plVar4;
      plVar4 = plVar4 + 4;
    } while (lVar2 != param_2[0xe]);
  }
  FUN_1495a3043(param_1,0,iVar6);
  iVar1 = *(int *)((longlong)param_1 + 0x34);
  *(int *)((longlong)param_1 + 0x34) = iVar1 + 3;
  puVar3 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    puVar3 = param_2;
  }
  puVar5 = &DAT_14b8b30b0;
  if (param_3 == (undefined8 *)0x0) {
    puVar5 = &DAT_14bd431dc;
  }
  FUN_1495cc585(param_1,iVar6,iVar1,*puVar3,puVar5);
  FUN_1495cc76f(param_1,param_2,param_3,iVar1,(int)param_1[7] + 1,
                *(undefined4 *)((longlong)param_1 + 0x34));
  FUN_1495cd0b6(param_1,iVar6);
  return;
}



// FUNCTION 1495cc585 FUN_1495cc585 body=489 status=ok
// SIG undefined FUN_1495cc585(void)

void FUN_1495cc585(longlong *param_1,int param_2,undefined4 param_3,longlong param_4,
                  undefined *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  undefined4 local_6c;
  longlong *local_68;
  longlong local_60;
  byte local_57 [3];
  undefined4 local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_1;
  plVar5 = (longlong *)param_1[2];
  local_60 = param_4;
  if (plVar5 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(lVar2 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar5 = (longlong *)FUN_14955a44a(param_1);
    if (plVar5 == (longlong *)0x0) goto LAB_1495cc5e1;
  }
  puVar7 = (undefined8 *)((longlong)param_2 * 0x20 + *(longlong *)(lVar2 + 0x20));
  ppuVar8 = &PTR_s_tbl_idx_stat_14bd48918;
  lVar9 = 0;
  local_6c = param_3;
  local_68 = plVar5;
  do {
    puVar3 = ppuVar8[-1];
    lVar6 = FUN_14955d004(lVar2,puVar3,*puVar7);
    if (lVar6 == 0) {
      if (*ppuVar8 != (undefined *)0x0) {
        local_88 = *ppuVar8;
        FUN_1495a3e15(param_1,"CREATE TABLE %Q.%s(%s)",*puVar7,puVar3);
        local_54[lVar9] = *(undefined4 *)((longlong)param_1 + 0x7c);
        local_57[lVar9] = 0x10;
      }
    }
    else {
      uVar1 = *(undefined4 *)(lVar6 + 0x38);
      local_54[lVar9] = uVar1;
      local_57[lVar9] = 0;
      local_88 = puVar3;
      FUN_14959b139(param_1,param_2,uVar1,1);
      if (local_60 == 0) {
        local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_149584f48(local_68,0x89,uVar1,param_2);
      }
      else {
        local_80 = local_60;
        local_88 = param_5;
        FUN_1495a3e15(param_1,"DELETE FROM %Q.%s WHERE %s=%Q",*puVar7,puVar3);
      }
    }
    plVar5 = local_68;
    lVar9 = lVar9 + 1;
    ppuVar8 = ppuVar8 + 2;
  } while (lVar9 != 3);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,param_2);
  iVar4 = FUN_149584f48(local_68,0x61,local_6c,local_54[0]);
  if (*(char *)(*plVar5 + 0x61) == '\0') {
    lVar2 = plVar5[0x11];
    *(undefined1 *)(lVar2 + 1 + (longlong)iVar4 * 0x18) = 0xfd;
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18) = 3;
  }
  if (0 < (longlong)(int)plVar5[0x12]) {
    *(ushort *)(plVar5[0x11] + -0x16 + (longlong)(int)plVar5[0x12] * 0x18) = (ushort)local_57[0];
  }
LAB_1495cc5e1:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495cc76f FUN_1495cc76f body=2375 status=ok
// SIG undefined FUN_1495cc76f(void)

void FUN_1495cc76f(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  int iVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 uVar29;
  undefined8 uVar28;
  int local_90;
  undefined8 local_80;
  ulonglong uVar16;
  
  lVar4 = *param_1;
  plVar15 = (longlong *)param_1[2];
  iVar13 = param_5 + 7;
  iVar7 = (int)param_1[7];
  if ((int)param_1[7] <= iVar13) {
    iVar7 = iVar13;
  }
  *(int *)(param_1 + 7) = iVar7;
  if (plVar15 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(lVar4 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar15 = (longlong *)FUN_14955a44a(param_1);
  }
  if ((param_2 != (undefined8 *)0x0 && plVar15 != (longlong *)0x0) && (*(int *)(param_2 + 7) != 0))
  {
    uVar18 = *param_2;
    iVar7 = FUN_14955aab9("sqlite\\_%",uVar18,&DAT_14bd400a0,0x5c);
    if (iVar7 != 0) {
      iVar7 = -1000000;
      if (param_2[0xe] != 0) {
        iVar7 = -1;
        plVar24 = (longlong *)(*(longlong *)(lVar4 + 0x20) + 0x18);
        do {
          iVar7 = iVar7 + 1;
          lVar17 = *plVar24;
          plVar24 = plVar24 + 4;
        } while (lVar17 != param_2[0xe]);
      }
      iVar8 = FUN_1495a2d6b(param_1,0x1c,uVar18,0,
                            *(undefined8 *)(*(longlong *)(lVar4 + 0x20) + (longlong)iVar7 * 0x20));
      if (iVar8 == 0) {
        iVar8 = param_5 + 3;
        iVar1 = param_5 + 4;
        iVar2 = param_5 + 6;
        uVar18 = *param_2;
        FUN_14959b139(param_1,iVar7,*(undefined4 *)(param_2 + 7),0,uVar18);
        iVar9 = param_6 + 2;
        if (param_6 + 2 < *(int *)((longlong)param_1 + 0x34)) {
          iVar9 = *(int *)((longlong)param_1 + 0x34);
        }
        *(int *)((longlong)param_1 + 0x34) = iVar9;
        uVar27 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),0x60);
        FUN_14959b02c(param_1,param_6,iVar7,param_2,uVar27);
        uVar18 = *param_2;
        uVar27 = uVar27 & 0xffffffff00000000;
        uVar10 = FUN_149584f48(plVar15,0x73,0,iVar1,uVar27);
        FUN_14955a5b6(plVar15,uVar10,uVar18,0);
        puVar25 = (undefined8 *)param_2[2];
        if (puVar25 == (undefined8 *)0x0) {
          bVar6 = true;
        }
        else {
          iVar9 = param_5 + 1;
          iVar3 = param_5 + 2;
          iVar11 = param_6 + 1;
          bVar6 = true;
          do {
            if ((param_3 == (undefined8 *)0x0) || (puVar25 == param_3)) {
              if (puVar25[9] == 0) {
                bVar6 = false;
              }
              if (((*(byte *)(param_2 + 8) & 0x80) == 0) ||
                 ((*(uint *)((longlong)puVar25 + 100) & 3) != 2)) {
                local_80 = *puVar25;
                uVar21 = (uint)*(ushort *)(puVar25 + 0xc);
                uVar12 = uVar21;
                if ((*(uint *)((longlong)puVar25 + 100) & 8) != 0) {
                  uVar12 = (uint)*(ushort *)((longlong)puVar25 + 0x5e);
                }
              }
              else {
                local_80 = *param_2;
                uVar21 = (uint)*(ushort *)((longlong)puVar25 + 0x5e);
                uVar12 = (uint)*(ushort *)((longlong)puVar25 + 0x5e);
              }
              uVar27 = uVar27 & 0xffffffff00000000;
              uVar10 = FUN_149584f48(plVar15,0x73,0,param_5 + 5,uVar27);
              uVar29 = (undefined4)(uVar27 >> 0x20);
              FUN_14955a5b6(plVar15,uVar10,local_80,0);
              iVar19 = uVar12 + iVar13 + -1;
              if (iVar19 < (int)param_1[7]) {
                iVar19 = (int)param_1[7];
              }
              *(int *)(param_1 + 7) = iVar19;
              uVar27 = CONCAT44(uVar29,iVar7);
              FUN_149584f48(plVar15,0x60,iVar11,*(undefined4 *)(puVar25 + 0xb),uVar27);
              FUN_14959b2a7(param_1,puVar25);
              uVar27 = uVar27 & 0xffffffff00000000;
              FUN_149584f48(plVar15,0x45,uVar21,iVar3,uVar27);
              uVar27 = uVar27 & 0xffffffff00000000;
              FUN_149584f48(plVar15,0x45,*(undefined2 *)((longlong)puVar25 + 0x5e),iVar8,uVar27);
              uVar27 = CONCAT44((int)(uVar27 >> 0x20),2);
              FUN_14959db43(param_1,0,iVar3,iVar9,uVar27,&DAT_14bd48988,0);
              uVar27 = uVar27 & 0xffffffff00000000;
              iVar19 = FUN_149584f48(plVar15,0x25,iVar11,0,uVar27);
              uVar27 = uVar27 & 0xffffffff00000000;
              FUN_149584f48(plVar15,0x45,0,iVar3,uVar27);
              uVar10 = (undefined4)(uVar27 >> 0x20);
              if (uVar12 < 2) {
                local_90 = (int)plVar15[0x12];
              }
              else {
                uVar12 = uVar12 - 1;
                uVar16 = (ulonglong)uVar12;
                iVar14 = *(int *)((longlong)param_1 + 0x44);
                iVar20 = iVar14 + -1;
                *(int *)((longlong)param_1 + 0x44) = iVar20;
                lVar17 = FUN_14955d750(lVar4,(ulonglong)uVar12 * 4);
                if (lVar17 == 0) goto LAB_1495cc95d;
                uVar27 = uVar27 & 0xffffffff00000000;
                FUN_149584f48(plVar15,0xb,0,0,uVar27);
                local_90 = (int)plVar15[0x12];
                if (((uVar12 == 1) && (*(short *)((longlong)puVar25 + 0x5e) == 1)) &&
                   (*(char *)((longlong)puVar25 + 0x62) != '\0')) {
                  uVar27 = uVar27 & 0xffffffff00000000;
                  FUN_149584f48(plVar15,0x33,iVar13,iVar20,uVar27);
                }
                uVar26 = 0;
                do {
                  uVar18 = FUN_14959b4a2(param_1,*(undefined8 *)(puVar25[8] + uVar26 * 8));
                  uVar27 = uVar27 & 0xffffffff00000000;
                  FUN_149584f48(plVar15,0x45,uVar26,iVar3,uVar27);
                  uVar28 = CONCAT44((int)(uVar27 >> 0x20),iVar8);
                  FUN_149584f48(plVar15,0x59,iVar11,uVar26,uVar28);
                  uVar27 = CONCAT44((int)((ulonglong)uVar28 >> 0x20),iVar13 + (int)uVar26);
                  uVar10 = FUN_149584f48(plVar15,0x34,iVar8,0,uVar27);
                  FUN_14955a5b6(plVar15,uVar10,uVar18,0xfffffffe);
                  *(undefined4 *)(lVar17 + uVar26 * 4) = uVar10;
                  if (0 < (longlong)(int)plVar15[0x12]) {
                    *(undefined2 *)(plVar15[0x11] + -0x16 + (longlong)(int)plVar15[0x12] * 0x18) =
                         0x80;
                  }
                  uVar26 = uVar26 + 1;
                } while (uVar12 != uVar26);
                uVar27 = uVar27 & 0xffffffff00000000;
                FUN_149584f48(plVar15,0x45,uVar16,iVar3,uVar27);
                uVar27 = uVar27 & 0xffffffff00000000;
                FUN_149584f48(plVar15,0xb,0,iVar20,uVar27);
                puVar22 = &DAT_14cc1ee40;
                if (*(char *)(*plVar15 + 0x61) == '\0') {
                  iVar20 = local_90;
                  if (local_90 < 1) {
                    iVar20 = (int)plVar15[0x12];
                  }
                  puVar22 = (undefined1 *)(plVar15[0x11] + (longlong)iVar20 * 0x18 + -0x18);
                }
                *(int *)(puVar22 + 8) = (int)plVar15[0x12];
                if ((int)uVar12 < 2) {
                  uVar16 = 1;
                }
                uVar26 = 0;
                do {
                  puVar22 = &DAT_14cc1ee40;
                  if (*(char *)(*plVar15 + 0x61) == '\0') {
                    iVar20 = *(int *)(lVar17 + uVar26 * 4);
                    iVar23 = (int)plVar15[0x12] + -1;
                    if (-1 < iVar20) {
                      iVar23 = iVar20;
                    }
                    puVar22 = (undefined1 *)((longlong)iVar23 * 0x18 + plVar15[0x11]);
                  }
                  *(int *)(puVar22 + 8) = (int)plVar15[0x12];
                  uVar27 = CONCAT44((int)(uVar27 >> 0x20),iVar13 + (int)uVar26);
                  FUN_149584f48(plVar15,0x59,iVar11,uVar26,uVar27);
                  uVar10 = (undefined4)(uVar27 >> 0x20);
                  uVar26 = uVar26 + 1;
                } while (uVar16 != uVar26);
                lVar5 = plVar15[3];
                iVar14 = -iVar14;
                if (*(int *)(lVar5 + 0x44) + *(int *)(lVar5 + 0x48) < 0) {
                  FUN_1495a1bff(lVar5,plVar15,iVar14);
                }
                else {
                  *(int *)(*(longlong *)(lVar5 + 0x50) + (longlong)iVar14 * 4) = (int)plVar15[0x12];
                }
                FUN_14955d65a(lVar4,lVar17);
              }
              uVar27 = CONCAT44(uVar10,2);
              FUN_14959db43(param_1,1,iVar9,iVar8,uVar27,&DAT_14bd489d0,0);
              uVar27 = uVar27 & 0xffffffff00000000;
              FUN_149584f48(plVar15,5,iVar11,local_90,uVar27);
              uVar18 = CONCAT44((int)(uVar27 >> 0x20),1);
              FUN_14959db43(param_1,0,iVar9,iVar2,uVar18,&DAT_14bd48a30,0);
              uVar27 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),iVar8);
              uVar10 = FUN_149584f48(plVar15,0x5b,iVar1,3,uVar27);
              FUN_14955a5b6(plVar15,uVar10,&DAT_14bd48a18,0);
              uVar27 = uVar27 & 0xffffffff00000000;
              FUN_149584f48(plVar15,0x78,param_4,param_5,uVar27);
              uVar27 = CONCAT44((int)(uVar27 >> 0x20),param_5);
              FUN_149584f48(plVar15,0x79,param_4,iVar8,uVar27);
              iVar14 = (int)plVar15[0x12];
              if (0 < (longlong)iVar14) {
                *(undefined2 *)(plVar15[0x11] + -0x16 + (longlong)iVar14 * 0x18) = 8;
                iVar14 = (int)plVar15[0x12];
              }
              puVar22 = &DAT_14cc1ee40;
              if (*(char *)(*plVar15 + 0x61) == '\0') {
                iVar20 = iVar14 + -1;
                if (-1 < iVar19) {
                  iVar20 = iVar19;
                }
                puVar22 = (undefined1 *)((longlong)iVar20 * 0x18 + plVar15[0x11]);
              }
              *(int *)(puVar22 + 8) = iVar14;
            }
LAB_1495cc95d:
            puVar25 = (undefined8 *)puVar25[5];
          } while (puVar25 != (undefined8 *)0x0);
        }
        if ((param_3 == (undefined8 *)0x0) && (bVar6)) {
          uVar27 = uVar27 & 0xffffffff00000000;
          FUN_149584f48(plVar15,0x5c,param_6,iVar2,uVar27);
          uVar27 = uVar27 & 0xffffffff00000000;
          iVar7 = FUN_149584f48(plVar15,0x14,iVar2,0,uVar27);
          uVar27 = uVar27 & 0xffffffff00000000;
          FUN_149584f48(plVar15,0x48,0,param_5 + 5,uVar27);
          uVar27 = CONCAT44((int)(uVar27 >> 0x20),iVar8);
          uVar10 = FUN_149584f48(plVar15,0x5b,iVar1,3,uVar27);
          FUN_14955a5b6(plVar15,uVar10,&DAT_14bd48a18,0);
          FUN_149584f48(plVar15,0x78,param_4,param_5,uVar27 & 0xffffffff00000000);
          FUN_149584f48(plVar15,0x79,param_4,iVar8,param_5);
          iVar13 = (int)plVar15[0x12];
          if (0 < (longlong)iVar13) {
            *(undefined2 *)(plVar15[0x11] + -0x16 + (longlong)iVar13 * 0x18) = 8;
            iVar13 = (int)plVar15[0x12];
          }
          if (*(char *)(*plVar15 + 0x61) == '\0') {
            iVar8 = iVar13 + -1;
            if (-1 < iVar7) {
              iVar8 = iVar7;
            }
            puVar22 = (undefined1 *)((longlong)iVar8 * 0x18 + plVar15[0x11]);
          }
          else {
            puVar22 = &DAT_14cc1ee40;
          }
          *(int *)(puVar22 + 8) = iVar13;
        }
      }
    }
  }
  return;
}



// FUNCTION 1495cd0b6 FUN_1495cd0b6 body=83 status=ok
// SIG undefined FUN_1495cd0b6(void)

void FUN_1495cd0b6(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar1 = FUN_14955a44a();
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_149584f48(lVar1,0x8e,param_2,0,0);
  return;
}



// FUNCTION 1495cd109 FUN_1495cd109 body=228 status=ok
// SIG undefined FUN_1495cd109(void)

void FUN_1495cd109(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *_Dst;
  size_t _Size;
  uint uVar4;
  
  iVar2 = FUN_149558f85(*param_3);
  uVar4 = iVar2 + 1U & 0xfffffffe;
  uVar3 = FUN_149558f85(param_3[1]);
  lVar1 = *(longlong *)(*param_1 + 0x28);
  _Size = (size_t)(int)(uVar4 * 8 + 0x58);
  if (lVar1 == 0) {
    _Dst = (undefined4 *)FUN_145e3bd67(_Size);
  }
  else {
    _Dst = (undefined4 *)FUN_14955d750(lVar1);
  }
  if (_Dst == (undefined4 *)0x0) {
    FUN_14955960a(param_1);
    return;
  }
  memset(_Dst,0,_Size);
  *(longlong *)(_Dst + 0x14) = lVar1;
  *_Dst = 0;
  _Dst[2] = iVar2;
  _Dst[3] = uVar3;
  *(undefined4 **)(_Dst + 8) = _Dst + 0x16;
  *(undefined4 **)(_Dst + 6) = _Dst + (longlong)(int)uVar4 + 0x16;
  FUN_1495590c8(param_1,_Dst,0x58,0,&LAB_1495cd1ed);
  return;
}



// FUNCTION 1495cd1ff FUN_1495cd1ff body=143 status=ok
// SIG undefined FUN_1495cd1ff(void)

void FUN_1495cd1ff(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  piVar3 = (int *)FUN_149558e78(*param_3);
  uVar2 = FUN_149558f85(param_3[1]);
  if (*piVar3 == 0) {
    if (0 < piVar3[2]) {
      lVar4 = 0;
      do {
        *(undefined4 *)(*(longlong *)(piVar3 + 6) + lVar4 * 4) = 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 < piVar3[2]);
    }
  }
  else {
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        piVar1 = (int *)(*(longlong *)(piVar3 + 6) + uVar5 * 4);
        *piVar1 = *piVar1 + 1;
        uVar5 = uVar5 + 1;
      } while ((uVar2 & 0x7fffffff) != uVar5);
    }
    if ((int)uVar2 < piVar3[2]) {
      lVar4 = (longlong)(int)uVar2;
      do {
        piVar1 = (int *)(*(longlong *)(piVar3 + 8) + lVar4 * 4);
        *piVar1 = *piVar1 + 1;
        *(undefined4 *)(*(longlong *)(piVar3 + 6) + lVar4 * 4) = 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 < piVar3[2]);
    }
  }
  *piVar3 = *piVar3 + 1;
  return;
}



// FUNCTION 1495cd28e FUN_1495cd28e body=277 status=ok
// SIG undefined FUN_1495cd28e(void)

void FUN_1495cd28e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  char *_Str;
  ulonglong uVar2;
  longlong lVar3;
  size_t sVar4;
  char *_Str_00;
  
  puVar1 = (uint *)FUN_149558e78(*param_3);
  sVar4 = (size_t)(int)(puVar1[3] * 0x19 + 0x19);
  _Str = (char *)FUN_145e3bd67(sVar4);
  if (_Str == (char *)0x0) {
    FUN_14955960a(param_1);
    return;
  }
  memset(_Str,0,sVar4);
  FUN_14955591f(0x18,_Str,&DAT_149e1d7be,*puVar1);
  if (0 < (int)puVar1[3]) {
    sVar4 = strlen(_Str);
    _Str_00 = _Str + ((uint)sVar4 & 0x3fffffff);
    lVar3 = 0;
    do {
      uVar2 = (ulonglong)(*(int *)(*(longlong *)(puVar1 + 8) + lVar3 * 4) + 1);
      FUN_14955591f(0x18,_Str_00," %llu",((*puVar1 + uVar2) - 1) / uVar2);
      uVar2 = 0;
      if (_Str_00 != (char *)0x0) {
        sVar4 = strlen(_Str_00);
        uVar2 = (ulonglong)((uint)sVar4 & 0x3fffffff);
      }
      _Str_00 = _Str_00 + uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)puVar1[3]);
  }
  FUN_1495590c8(param_1,_Str,0xffffffff,1,FUN_145e3b961);
  return;
}



// FUNCTION 1495cd3a3 FUN_1495cd3a3 body=141 status=ok
// SIG undefined FUN_1495cd3a3(void)

undefined8 FUN_1495cd3a3(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  
  if (*param_2 == 0) {
LAB_1495cd3f4:
    if ((*(byte *)((longlong)param_2 + 0x41) & 0x10) == 0) {
      return 0;
    }
    lVar1 = *param_1;
    if ((*(byte *)(lVar1 + 0x33) & 0x10) == 0) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x210) != 0) {
      return 0;
    }
    if (*(int *)(lVar1 + 0xd4) != 0) {
      return 0;
    }
  }
  else {
    lVar1 = 0;
    do {
      uVar4 = (ulonglong)*(byte *)(*param_2 + lVar1);
      if (uVar4 == 0) {
        cVar2 = (&DAT_14bd3ff30)[(byte)"sqlite_"[lVar1]];
        cVar3 = '\0';
LAB_1495cd3ef:
        if (cVar3 != cVar2) goto LAB_1495cd3f4;
        break;
      }
      cVar3 = (&DAT_14bd3ff30)[uVar4];
      cVar2 = (&DAT_14bd3ff30)[(byte)"sqlite_"[lVar1]];
      if (cVar3 != cVar2) goto LAB_1495cd3ef;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 7);
  }
  FUN_14955a364(param_1,"table %s may not be altered");
  return 1;
}



// FUNCTION 1495cd430 FUN_1495cd430 body=116 status=ok
// SIG undefined FUN_1495cd430(void)

void FUN_1495cd430(longlong *param_1,int param_2)

{
  if (param_1[2] != 0) {
    FUN_149584f48(param_1[2],0x5e,param_2,1,
                  **(int **)(*(longlong *)(*param_1 + 0x20) + 0x18 + (longlong)param_2 * 0x20) + 1);
    FUN_1495a3f28(param_1[2],param_2,0);
    if (param_2 != 1) {
      FUN_1495a3f28(param_1[2],1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1495cd4a4 FUN_1495cd4a4 body=87 status=ok
// SIG undefined FUN_1495cd4a4(void)

void FUN_1495cd4a4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = param_2;
  iVar2 = param_3;
  FUN_1495a3e15(param_1,
                "SELECT 1 FROM \"%w\".%s WHERE name NOT LIKE \'sqliteX_%%\' ESCAPE \'X\' AND sql NOT LIKE \'create virtual%%\' AND sqlite_rename_test(%Q, sql, type, name, %d)=NULL "
                ,param_2,"sqlite_master",param_2,param_3);
  if (param_3 == 0) {
    FUN_1495a3e15(param_1,
                  "SELECT 1 FROM temp.%s WHERE name NOT LIKE \'sqliteX_%%\' ESCAPE \'X\' AND sql NOT LIKE \'create virtual%%\' AND sqlite_rename_test(%Q, sql, type, name, 1)=NULL "
                  ,"sqlite_master",param_2,uVar1,iVar2);
  }
  return;
}



// FUNCTION 1495cd4fb FUN_1495cd4fb body=117 status=ok
// SIG undefined FUN_1495cd4fb(void)

void FUN_1495cd4fb(undefined8 *param_1)

{
  void *_Src;
  void *_Dst;
  size_t _Size;
  
  _Src = (void *)param_1[0x2c];
  if ((_Src != (void *)0x0) && (param_1[0x28] != 0)) {
    _Size = (size_t)*(int *)(param_1 + 0x2d);
    _Dst = (void *)FUN_14955d750(*param_1,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
    }
    FUN_149585d03(param_1,param_1[0x28],_Dst);
    return;
  }
  return;
}



// FUNCTION 1495cd570 FUN_1495cd570 body=287 status=ok
// SIG undefined FUN_1495cd570(void)

undefined8 * FUN_1495cd570(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  code *local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_30._0_6_ = CONCAT24(1,(undefined4)uStack_30);
  local_48 = FUN_14959f99d;
  local_40 = (code *)&LAB_14959fa8c;
  local_28 = local_28 & 0xffffffff00000000;
  if (param_2 != (undefined8 *)0x0) {
    FUN_14959fa98(&local_50);
    if (uStack_30._4_2_ != 0) goto LAB_1495cd5b4;
    bVar1 = *(byte *)((longlong)param_1 + 0x114);
    if (1 < bVar1) {
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      local_48 = (code *)&LAB_1495a984b;
      local_40 = FUN_1495a986f;
      *(undefined1 *)((longlong)param_1 + 0x114) = 3;
      local_50 = param_1;
      FUN_14959fa98(&local_50,param_2);
      *(byte *)((longlong)param_1 + 0x114) = bVar1;
    }
    FUN_14958288e(*param_1,param_2);
    param_2 = (undefined8 *)FUN_14955d750(*param_1,0x48);
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[8] = 0;
      *(undefined1 *)param_2 = 0x77;
      *(undefined2 *)((longlong)param_2 + 0x32) = 0xffff;
      *(undefined4 *)(param_2 + 5) = 1;
      goto LAB_1495cd5b4;
    }
  }
  param_2 = (undefined8 *)0x0;
LAB_1495cd5b4:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495cd690 FUN_1495cd690 body=3 status=ok
// SIG undefined FUN_1495cd690(void)

undefined8 FUN_1495cd690(void)

{
  return 0;
}



// FUNCTION 1495cd696 FUN_1495cd696 body=6 status=ok
// SIG undefined FUN_1495cd696(void)

undefined8 FUN_1495cd696(void)

{
  return 8;
}



// FUNCTION 1495cd6a2 FUN_1495cd6a2 body=40 status=ok
// SIG undefined FUN_1495cd6a2(void)

void FUN_1495cd6a2(undefined8 param_1)

{
  FUN_1495590c8(param_1,"3.31.1",0xffffffff,1,0);
  return;
}



// FUNCTION 1495cd6ca FUN_1495cd6ca body=67 status=ok
// SIG undefined FUN_1495cd6ca(void)

void FUN_1495cd6ca(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_149558f28(*param_3);
  if (lVar3 != 0) {
    uVar2 = FUN_14955d53a(lVar3);
    puVar1 = (ulonglong *)*param_1;
    if ((*(byte *)((longlong)puVar1 + 9) & 0x24) != 0) {
      FUN_14956c854();
      return;
    }
    *puVar1 = (ulonglong)uVar2;
    *(undefined2 *)(puVar1 + 1) = 4;
  }
  return;
}



// FUNCTION 1495cd70d FUN_1495cd70d body=72 status=ok
// SIG undefined FUN_1495cd70d(void)

void FUN_1495cd70d(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = FUN_149558f85(*param_3);
  if (uVar1 < 0xc) {
    puVar2 = (&PTR_s_COMPILER_clang_19_1_1_14bd4a000)[uVar1 & 0xf];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  FUN_1495590c8(param_1,puVar2,0xffffffff,1,0);
  return;
}



// FUNCTION 1495cd755 FUN_1495cd755 body=558 status=ok
// SIG undefined FUN_1495cd755(void)

void FUN_1495cd755(longlong param_1,int param_2,longlong *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined **ppuVar12;
  uint uVar13;
  void *local_60;
  undefined **local_58;
  
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)*(uint *)(*param_3 + 8) & 0x3f) & 1) != 0) {
    return;
  }
  local_60 = (void *)FUN_149558f28();
  if (local_60 == (void *)0x0) {
    return;
  }
  uVar2 = FUN_149558f55(*param_3);
  uVar11 = (ulonglong)uVar2;
  if (param_2 == 1) {
    ppuVar12 = (undefined **)&DAT_14bd4980c;
    local_58 = &PTR_DAT_14bd49810;
    uVar9 = 1;
  }
  else {
    pbVar6 = (byte *)FUN_149558f28(param_3[1]);
    if (pbVar6 == (byte *)0x0) {
      return;
    }
    bVar8 = *pbVar6;
    if (bVar8 == 0) goto LAB_1495cd962;
    uVar4 = 0;
    pbVar7 = pbVar6;
    do {
      if (bVar8 < 0xc0) {
        pbVar7 = pbVar7 + 1;
        bVar8 = *pbVar7;
      }
      else {
        do {
          bVar8 = pbVar7[1];
          pbVar7 = pbVar7 + 1;
        } while (SBORROW1('\0',bVar8 & 0xc0));
      }
      uVar4 = uVar4 + 1;
    } while (bVar8 != 0);
    local_58 = (undefined **)FUN_1495cf8a0(param_1);
    if (local_58 == (undefined **)0x0) {
      return;
    }
    if (*pbVar6 == 0) goto LAB_1495cd962;
    ppuVar12 = local_58 + uVar4;
    uVar9 = 0;
    do {
      local_58[uVar9] = pbVar6;
      pbVar7 = pbVar6;
      if (*pbVar6 < 0xc0) {
        pbVar7 = pbVar6 + 1;
      }
      else {
        do {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
        } while (SBORROW1('\0',*pbVar1 & 0xc0));
      }
      *(char *)((longlong)ppuVar12 + uVar9) = (char)pbVar7 - (char)pbVar6;
      uVar9 = uVar9 + 1;
      pbVar6 = pbVar7;
    } while (*pbVar7 != 0);
  }
  uVar4 = *(uint *)(*(longlong *)(param_1 + 8) + 8);
  if (((uVar4 & 1) != 0) && (0 < (int)uVar2)) {
LAB_1495cd7f1:
    uVar10 = 0;
    do {
      iVar5 = (int)uVar11;
      if ((int)(uint)*(byte *)((longlong)ppuVar12 + uVar10) <= iVar5) {
        uVar13 = (uint)*(byte *)((longlong)ppuVar12 + uVar10);
        iVar3 = memcmp(local_60,local_58[uVar10],(ulonglong)uVar13);
        if (iVar3 == 0) goto LAB_1495cd827;
      }
      uVar10 = uVar10 + 1;
      if ((uVar9 & 0xffffffff) == uVar10) break;
    } while( true );
  }
  uVar2 = (uint)uVar11;
  if (((uVar4 & 2) != 0) && (0 < (int)uVar2)) {
LAB_1495cd90e:
    uVar2 = (uint)uVar11;
    uVar10 = 0;
    do {
      bVar8 = *(byte *)((longlong)ppuVar12 + uVar10);
      if ((int)(uint)bVar8 <= (int)uVar2) {
        uVar11 = (longlong)(int)uVar2 - (ulonglong)bVar8;
        iVar5 = memcmp((void *)((longlong)local_60 + uVar11),local_58[uVar10],(ulonglong)bVar8);
        if (iVar5 == 0) goto LAB_1495cd946;
      }
      uVar10 = uVar10 + 1;
      if ((int)uVar9 + (uint)((int)uVar9 == 0) == uVar10) break;
    } while( true );
  }
LAB_1495cd953:
  if (param_2 != 1) {
    FUN_145e3b961(local_58);
  }
LAB_1495cd962:
  FUN_1495590c8(param_1,local_60,uVar2,1,0xffffffffffffffff);
  return;
LAB_1495cd827:
  local_60 = (void *)((longlong)local_60 + (ulonglong)uVar13);
  uVar2 = iVar5 - uVar13;
  uVar11 = (ulonglong)uVar2;
  if (uVar2 == 0 || iVar5 < (int)uVar13) goto LAB_1495cd953;
  goto LAB_1495cd7f1;
LAB_1495cd946:
  uVar2 = (uint)uVar11;
  uVar11 = uVar11 & 0xffffffff;
  if ((int)uVar2 < 1) goto LAB_1495cd953;
  goto LAB_1495cd90e;
}



// FUNCTION 1495cd983 FUN_1495cd983 body=194 status=ok
// SIG undefined FUN_1495cd983(void)

void FUN_1495cd983(undefined8 *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1[1] + 8);
  lVar4 = *param_3;
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)*(uint *)(lVar4 + 8) & 0x3f) & 1) != 0) {
    return;
  }
  if (1 < (int)param_2) {
    uVar2 = *(undefined8 *)
             (*(longlong *)(param_1[3] + 0x88) + -8 + (longlong)*(int *)(param_1 + 4) * 0x18);
    iVar5 = 0;
    uVar6 = 1;
    do {
      if ((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)*(uint *)(param_3[uVar6] + 8) & 0x3f) & 1) != 0) {
        return;
      }
      uVar3 = FUN_149575d1d(param_3[iVar5],param_3[uVar6],uVar2);
      if (-1 < (int)(uVar3 ^ -(uint)(lVar1 != 0))) {
        iVar5 = (int)uVar6;
      }
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
    lVar4 = param_3[iVar5];
  }
  FUN_1495594c1(*param_1,lVar4);
  return;
}



// FUNCTION 1495cda45 FUN_1495cda45 body=208 status=ok
// SIG undefined FUN_1495cda45(void)

void FUN_1495cda45(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_3;
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    lVar5 = FUN_1495596e1(param_1,0x38);
  }
  else {
    lVar5 = *(longlong *)(param_1[2] + 0x10);
  }
  if (lVar5 != 0) {
    if ((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)*(uint *)(lVar1 + 8) & 0x3f) & 1) == 0) {
      if (*(short *)(lVar5 + 8) == 0) {
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*param_1 + 0x28);
LAB_1495cdaba:
        FUN_1495594c1(lVar5,lVar1);
        return;
      }
      lVar2 = *(longlong *)(param_1[1] + 8);
      iVar4 = FUN_149575d1d(lVar5,lVar1,
                            *(undefined8 *)
                             (*(longlong *)(param_1[3] + 0x88) + -8 +
                             (longlong)(int)param_1[4] * 0x18));
      bVar3 = -1 < iVar4;
      if (lVar2 == 0) {
        bVar3 = iVar4 < 1;
      }
      if (!bVar3) goto LAB_1495cdaba;
    }
    else if (*(short *)(lVar5 + 8) == 0) {
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}



// FUNCTION 1495cdb26 FUN_1495cdb26 body=66 status=ok
// SIG undefined FUN_1495cdb26(void)

void FUN_1495cdb26(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  FUN_1495590c8(param_1,(&DAT_14bd49818)[(byte)(&DAT_14bd40030)[*(ushort *)(*param_3 + 8) & 0x3f]],
                0xffffffff,1,0);
  return;
}



// FUNCTION 1495cdb68 FUN_1495cdb68 body=213 status=ok
// SIG undefined FUN_1495cdb68(void)

void FUN_1495cdb68(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  
  bVar5 = (&DAT_14bd40030)[*(ushort *)(*param_3 + 8) & 0x3f];
  if (1 < bVar5 - 1) {
    if (bVar5 == 3) {
      pbVar3 = (byte *)FUN_149558f28();
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      bVar5 = *pbVar3;
      iVar2 = (int)pbVar3;
      pbVar1 = pbVar3;
      while (bVar5 != 0) {
        pbVar4 = pbVar1 + 1;
        bVar6 = 0xbf < bVar5;
        bVar5 = pbVar1[1];
        if (SBORROW1('\0',bVar5 & 0xc0) && bVar6) {
          do {
            pbVar3 = pbVar3 + 1;
            bVar5 = pbVar4[1];
            pbVar4 = pbVar4 + 1;
          } while (SBORROW1('\0',bVar5 & 0xc0));
        }
        iVar2 = (int)pbVar3;
        pbVar1 = pbVar4;
      }
      iVar2 = (int)pbVar1 - iVar2;
      goto LAB_1495cdbb8;
    }
    if (bVar5 != 4) {
      if ((*(byte *)(*param_1 + 9) & 0x24) == 0) {
        *(undefined2 *)(*param_1 + 8) = 1;
        return;
      }
      FUN_14956b5ca();
      return;
    }
  }
  iVar2 = FUN_149558f55();
LAB_1495cdbb8:
  param_1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)param_1 + 9) & 0x24) == 0) {
    *param_1 = (longlong)iVar2;
    *(undefined2 *)(param_1 + 1) = 4;
    return;
  }
  FUN_14956c854();
  return;
}



// FUNCTION 1495cdc3d FUN_1495cdc3d body=564 status=ok
// SIG undefined FUN_1495cdc3d(void)

void FUN_1495cdc3d(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *_Buf1;
  byte *_Buf2;
  undefined8 uVar6;
  undefined8 uVar7;
  sbyte sVar8;
  int iVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  ushort uVar13;
  
  uVar12 = *(ushort *)(*param_3 + 8) & 0x3f;
  uVar13 = *(ushort *)(param_3[1] + 8) & 0x3f;
  sVar8 = (sbyte)uVar13;
  if ((((uint)(0xaaaaaaaaaaaaaaaa >> sVar8) | (uint)(0xaaaaaaaaaaaaaaaa >> (sbyte)uVar12)) & 1) != 0
     ) {
    return;
  }
  iVar3 = FUN_149558f55(*param_3);
  iVar4 = FUN_149558f55(param_3[1]);
  if (iVar4 < 1) {
    uVar10 = 1;
    uVar6 = 0;
    uVar7 = 0;
LAB_1495cdd2b:
    puVar2 = (ulonglong *)*param_1;
    if ((*(byte *)((longlong)puVar2 + 9) & 0x24) == 0) {
      *puVar2 = uVar10;
      *(undefined2 *)(puVar2 + 1) = 4;
    }
    else {
      FUN_14956c854();
    }
    goto LAB_1495cdd01;
  }
  bVar11 = (byte)(0x1000000010001 >> sVar8) & (0x1000000010001U >> uVar12 & 1) != 0;
  if (bVar11 == 1) {
    _Buf1 = (byte *)FUN_149558e78(*param_3);
    _Buf2 = (byte *)FUN_149558e78(param_3[1]);
LAB_1495cdce8:
    if (_Buf2 == (byte *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      if (iVar3 == 0 || _Buf1 != (byte *)0x0) {
        uVar7 = 0;
LAB_1495cdd98:
        if (iVar3 < iVar4) {
          uVar10 = 0;
        }
        else {
          bVar1 = *_Buf2;
          uVar12 = 1;
          do {
            if ((*_Buf1 == bVar1) && (iVar5 = memcmp(_Buf1,_Buf2,(longlong)iVar4), iVar5 == 0))
            goto LAB_1495cde5b;
            uVar12 = uVar12 + 1;
            iVar5 = iVar3 + 1;
            do {
              iVar9 = iVar5;
              _Buf1 = _Buf1 + 1;
              iVar5 = iVar3;
              if (bVar11 != 0) break;
              iVar5 = iVar9 + -1;
            } while (SBORROW1('\0',*_Buf1 & 0xc0));
            iVar3 = iVar9 + -2;
          } while (iVar4 < iVar5);
          uVar12 = 0;
LAB_1495cde5b:
          uVar10 = (ulonglong)uVar12;
        }
        goto LAB_1495cdd2b;
      }
    }
LAB_1495cdcf6:
    uVar7 = 0;
  }
  else {
    if (((0xfffefffffffefffeU >> uVar12 & 1) != 0) && ((0xfffefffffffefffeU >> uVar13 & 1) != 0)) {
      _Buf1 = (byte *)FUN_149558f28();
      _Buf2 = (byte *)FUN_149558f28(param_3[1]);
      goto LAB_1495cdce8;
    }
    uVar6 = FUN_149558fb1(*param_3);
    _Buf1 = (byte *)FUN_149558f28(uVar6);
    if (_Buf1 == (byte *)0x0) goto LAB_1495cdcf6;
    iVar3 = FUN_149558f55(uVar6);
    uVar7 = FUN_149558fb1(param_3[1]);
    _Buf2 = (byte *)FUN_149558f28(uVar7);
    if (_Buf2 != (byte *)0x0) {
      iVar4 = FUN_149558f55(uVar7);
      goto LAB_1495cdd98;
    }
  }
  FUN_14955960a(param_1);
LAB_1495cdd01:
  FUN_149559090(uVar6);
  FUN_149559090(uVar7);
  return;
}



// FUNCTION 1495cde71 FUN_1495cde71 body=236 status=ok
// SIG undefined FUN_1495cde71(void)

void FUN_1495cde71(longlong *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined *local_68;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  int local_44;
  uint local_40;
  ushort local_3c;
  int local_38;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < param_2) {
    lVar3 = *(longlong *)(*param_1 + 0x28);
    lVar2 = FUN_149558f28();
    if (lVar2 != 0) {
      local_38 = param_2 + -1;
      local_34 = 0;
      local_30 = param_3 + 8;
      local_44 = *(int *)(lVar3 + 0x7c);
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_3c = 0x200;
      local_58 = lVar3;
      FUN_149555a84(&local_58,lVar2);
      uVar1 = local_40;
      if (local_50 == 0) {
        lVar3 = 0;
      }
      else {
        *(undefined1 *)(local_50 + (ulonglong)local_40) = 0;
        lVar3 = local_50;
        if ((local_44 != 0) && ((local_3c & 0x400) == 0)) {
          lVar3 = FUN_14955d93a(&local_58);
        }
      }
      local_68 = &DAT_1495539b4;
      FUN_1495590c8(param_1,lVar3,uVar1,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495cdf5e FUN_1495cdf5e body=190 status=ok
// SIG undefined FUN_1495cdf5e(void)

void FUN_1495cdf5e(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  pbVar1 = (byte *)FUN_149558f28(*param_3);
  if (pbVar1 != (byte *)0x0) {
    bVar3 = *pbVar1;
    uVar4 = (uint)bVar3;
    if (bVar3 != 0) {
      if (0xbf < bVar3) {
        uVar2 = (uint)(byte)(&DAT_14bd40990)[bVar3 - 0xc0];
        bVar3 = pbVar1[1];
        if (SBORROW1('\0',bVar3 & 0xc0)) {
          pbVar1 = pbVar1 + 2;
          do {
            uVar2 = uVar2 << 6 | (uint)(bVar3 & 0x3f);
            bVar3 = *pbVar1;
            pbVar1 = pbVar1 + 1;
          } while (SBORROW1('\0',bVar3 & 0xc0));
        }
        uVar4 = uVar2;
        if ((uVar2 & 0xfffff800) == 0xd800) {
          uVar4 = 0xfffd;
        }
        if (uVar2 < 0x80) {
          uVar4 = 0xfffd;
        }
        if ((uVar2 & 0xfffffffe) == 0xfffe) {
          uVar4 = 0xfffd;
        }
      }
      param_1 = (longlong *)*param_1;
      if ((*(byte *)((longlong)param_1 + 9) & 0x24) != 0) {
        FUN_14956c854();
        return;
      }
      *param_1 = (longlong)(int)uVar4;
      *(undefined2 *)(param_1 + 1) = 4;
    }
  }
  return;
}



// FUNCTION 1495ce01c FUN_1495ce01c body=315 status=ok
// SIG undefined FUN_1495ce01c(void)

void FUN_1495ce01c(undefined8 param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  
  pbVar1 = (byte *)FUN_145e3bd67((longlong)(int)(param_2 * 4 + 1));
  if (pbVar1 != (byte *)0x0) {
    pbVar6 = pbVar1;
    if (0 < (int)param_2) {
      uVar5 = 0;
      do {
        uVar2 = FUN_149558f85(*(undefined8 *)(param_3 + uVar5 * 8));
        uVar4 = (uint)uVar2 & 0x1fffff;
        if (0x10ffff < uVar2) {
          uVar4 = 0xfffd;
        }
        bVar3 = (byte)uVar4;
        if (uVar4 < 0x80) {
          *pbVar6 = bVar3;
          pbVar6 = pbVar6 + 1;
        }
        else if (uVar4 < 0x800) {
          *pbVar6 = (byte)(uVar4 >> 6) | 0xc0;
          pbVar6[1] = bVar3 & 0x3f | 0x80;
          pbVar6 = pbVar6 + 2;
        }
        else if (uVar4 < 0x10000) {
          *pbVar6 = (byte)(uVar4 >> 0xc) | 0xe0;
          pbVar6[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
          pbVar6[2] = bVar3 & 0x3f | 0x80;
          pbVar6 = pbVar6 + 3;
        }
        else {
          *pbVar6 = (byte)(uVar4 >> 0x12) | 0xf0;
          pbVar6[1] = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
          pbVar6[2] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
          pbVar6[3] = bVar3 & 0x3f | 0x80;
          pbVar6 = pbVar6 + 4;
        }
        uVar5 = uVar5 + 1;
      } while (param_2 != uVar5);
    }
    FUN_149559459(param_1,pbVar1,(longlong)pbVar6 - (longlong)pbVar1,FUN_145e3b961);
    return;
  }
  FUN_14955960a(param_1);
  return;
}



// FUNCTION 1495ce157 FUN_1495ce157 body=323 status=ok
// SIG undefined FUN_1495ce157(void)

void FUN_1495ce157(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  undefined4 uVar8;
  
  pdVar2 = (double *)*param_3;
  uVar1 = *(ushort *)(pdVar2 + 1);
  if ((&DAT_14bd40030)[uVar1 & 0x3f] == '\x05') {
    if ((*(byte *)(*param_1 + 9) & 0x24) != 0) {
      FUN_14956b5ca();
      return;
    }
    *(undefined2 *)(*param_1 + 8) = 1;
  }
  else if ((&DAT_14bd40030)[uVar1 & 0x3f] == '\x01') {
    lVar5 = FUN_149558f85();
    if ((lVar5 < 0) && (bVar6 = SBORROW8(0,lVar5), lVar5 = -lVar5, bVar6)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 1;
      FUN_14955916b(*param_1,"integer overflow",0xffffffff,1,0xffffffffffffffff);
    }
    else {
      param_1 = (longlong *)*param_1;
      if ((*(byte *)((longlong)param_1 + 9) & 0x24) != 0) {
        FUN_14956c854(param_1,lVar5);
        return;
      }
      *param_1 = lVar5;
      *(undefined2 *)(param_1 + 1) = 4;
    }
  }
  else {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x24) == 0) {
        dVar7 = 0.0;
        if ((uVar1 & 0x12) != 0) {
          dVar7 = (double)FUN_14956c08d();
        }
      }
      else {
        dVar7 = (double)(longlong)*pdVar2;
      }
    }
    else {
      dVar7 = *pdVar2;
    }
    uVar8 = (undefined4)((ulonglong)-dVar7 >> 0x20);
    if (-dVar7 <= dVar7) {
      uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
    }
    puVar3 = (undefined8 *)*param_1;
    if ((*(byte *)((longlong)puVar3 + 9) & 0x24) == 0) {
      *(undefined2 *)(puVar3 + 1) = 1;
    }
    else {
      FUN_14956b5ca(puVar3);
    }
    uVar4 = CONCAT44(uVar8,SUB84(dVar7,0));
    if ((~uVar4 & 0x7ff0000000000000) != 0 || (uVar4 & 0xfffffffffffff) == 0) {
      *puVar3 = CONCAT44(uVar8,SUB84(dVar7,0));
      *(undefined2 *)(puVar3 + 1) = 8;
    }
  }
  return;
}



// FUNCTION 1495ce29a FUN_1495ce29a body=448 status=ok
// SIG undefined FUN_1495ce29a(void)

void FUN_1495ce29a(longlong *param_1,int param_2,undefined8 *param_3)

{
  ushort uVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  char *_Str;
  size_t sVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = 0;
  if (param_2 == 2) {
    if ((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)*(uint *)(param_3[1] + 8) & 0x3f) & 1) != 0)
    goto LAB_1495ce2dc;
    iVar4 = FUN_149558f85();
    iVar6 = 0x1e;
    if (iVar4 < 0x1e) {
      iVar6 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      iVar4 = iVar6;
    }
  }
  pdVar2 = (double *)*param_3;
  uVar1 = *(ushort *)(pdVar2 + 1);
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)uVar1 & 0x3f) & 1) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x24) == 0) {
        local_48 = 0.0;
        if ((uVar1 & 0x12) != 0) {
          local_48 = (double)FUN_14956c08d();
        }
      }
      else {
        local_48 = (double)(longlong)*pdVar2;
      }
    }
    else {
      local_48 = *pdVar2;
    }
    dVar3 = local_48;
    if (ABS(local_48) <= 4503599627370496.0) {
      if (iVar4 == 0) {
        dVar3 = (double)(longlong)(local_48 + (double)(&DAT_14aa1ecb0)[local_48 < 0.0]);
      }
      else {
        _Str = (char *)FUN_1495558d3(&DAT_14bd4985e,iVar4,local_48);
        if (_Str == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
        }
        sVar5 = strlen(_Str);
        FUN_14956c0e2(_Str,&local_48,(uint)sVar5 & 0x3fffffff,1);
        FUN_145e3b961(_Str);
        dVar3 = local_48;
      }
    }
    pdVar2 = (double *)*param_1;
    if ((*(byte *)((longlong)pdVar2 + 9) & 0x24) == 0) {
      *(undefined2 *)(pdVar2 + 1) = 1;
    }
    else {
      FUN_14956b5ca(pdVar2);
    }
    if ((~(ulonglong)dVar3 & 0x7ff0000000000000) != 0 || ((ulonglong)dVar3 & 0xfffffffffffff) == 0)
    {
      *pdVar2 = dVar3;
      *(undefined2 *)(pdVar2 + 1) = 8;
    }
  }
LAB_1495ce2dc:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ce471 FUN_1495ce471 body=143 status=ok
// SIG undefined FUN_1495ce471(void)

void FUN_1495ce471(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = FUN_149558f28(*param_3);
  uVar2 = FUN_149558f55(*param_3);
  if (lVar1 != 0) {
    lVar3 = FUN_1495cf8a0(param_1);
    if (lVar3 != 0) {
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          *(byte *)(lVar3 + uVar4) =
               (~(&DAT_14bd400b0)[*(byte *)(lVar1 + uVar4)] | 0xdf) & *(byte *)(lVar1 + uVar4);
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
      }
      FUN_1495590c8(param_1,lVar3,uVar2,1,FUN_145e3b961);
    }
  }
  return;
}



// FUNCTION 1495ce500 FUN_1495ce500 body=133 status=ok
// SIG undefined FUN_1495ce500(void)

void FUN_1495ce500(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = FUN_149558f28(*param_3);
  uVar2 = FUN_149558f55(*param_3);
  if (lVar1 != 0) {
    lVar3 = FUN_1495cf8a0(param_1);
    if (lVar3 != 0) {
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          *(undefined1 *)(lVar3 + uVar4) = (&DAT_14bd3ff30)[*(byte *)(lVar1 + uVar4)];
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
      }
      FUN_1495590c8(param_1,lVar3,uVar2,1,FUN_145e3b961);
    }
  }
  return;
}



// FUNCTION 1495ce585 FUN_1495ce585 body=166 status=ok
// SIG undefined FUN_1495ce585(void)

void FUN_1495ce585(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  
  lVar3 = FUN_149558e78(*param_3);
  iVar2 = FUN_149558f55(*param_3);
  pcVar4 = (char *)FUN_1495cf8a0(param_1,(longlong)iVar2 * 2 + 1);
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        bVar1 = *(byte *)(lVar3 + lVar6);
        *pcVar5 = "0123456789ABCDEF%!.20e"[bVar1 >> 4];
        pcVar5[1] = "0123456789ABCDEF%!.20e"[bVar1 & 0xf];
        pcVar5 = pcVar5 + 2;
        lVar6 = lVar6 + 1;
      } while (iVar2 != (int)lVar6);
    }
    *pcVar5 = '\0';
    FUN_1495590c8(param_1,pcVar4,iVar2 * 2,1,FUN_145e3b961);
  }
  return;
}



// FUNCTION 1495ce62b FUN_1495ce62b body=117 status=ok
// SIG undefined FUN_1495ce62b(void)

void FUN_1495ce62b(longlong *param_1)

{
  ulonglong *puVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_149555acc(8,&local_20);
  if ((longlong)local_20 < 0) {
    local_20 = -(local_20 & 0x7fffffffffffffff);
  }
  puVar1 = (ulonglong *)*param_1;
  if ((*(byte *)((longlong)puVar1 + 9) & 0x24) == 0) {
    *puVar1 = local_20;
    *(undefined2 *)(puVar1 + 1) = 4;
  }
  else {
    FUN_14956c854();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ce6a1 FUN_1495ce6a1 body=99 status=ok
// SIG undefined FUN_1495ce6a1(void)

void FUN_1495ce6a1(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_149558f85(*param_3);
  uVar3 = 1;
  if (1 < (longlong)uVar1) {
    uVar3 = uVar1;
  }
  lVar2 = FUN_1495cf8a0(param_1,uVar3);
  if (lVar2 != 0) {
    FUN_149555acc(uVar3 & 0xffffffff,lVar2);
    FUN_1495590c8(param_1,lVar2,uVar3 & 0xffffffff,0,FUN_145e3b961);
  }
  return;
}



// FUNCTION 1495ce704 FUN_1495ce704 body=76 status=ok
// SIG undefined FUN_1495ce704(void)

void FUN_1495ce704(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_149575d1d(*param_3,param_3[1],
                        *(undefined8 *)
                         (*(longlong *)(param_1[3] + 0x88) + -8 +
                         (longlong)*(int *)(param_1 + 4) * 0x18));
  if (iVar1 == 0) {
    return;
  }
  FUN_1495594c1(*param_1,*param_3);
  return;
}



// FUNCTION 1495ce750 FUN_1495ce750 body=40 status=ok
// SIG undefined FUN_1495ce750(void)

void FUN_1495ce750(undefined8 param_1)

{
  FUN_1495590c8(param_1,&DAT_14bd40626,0xffffffff,1,0);
  return;
}



// FUNCTION 1495ce778 FUN_1495ce778 body=54 status=ok
// SIG undefined FUN_1495ce778(void)

void FUN_1495ce778(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_149558f28(param_3[1]);
  uVar2 = FUN_149558f85(*param_3);
  FUN_14955599e(uVar2,&DAT_149dfbe46,uVar1);
  return;
}



// FUNCTION 1495ce7ae FUN_1495ce7ae body=706 status=ok
// SIG undefined FUN_1495ce7ae(void)

void FUN_1495ce7ae(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  double *pdVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar9;
  longlong lVar10;
  undefined *puVar11;
  int iVar12;
  double dVar13;
  undefined1 auStack_a8 [32];
  code *local_88;
  double local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pdVar2 = (double *)*param_3;
  uVar1 = *(ushort *)(pdVar2 + 1);
  switch((&DAT_14bd40030)[uVar1 & 0x3f]) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  case 2:
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x24) == 0) {
        dVar13 = 0.0;
        if ((uVar1 & 0x12) != 0) {
          dVar13 = (double)FUN_14956c08d(pdVar2);
        }
      }
      else {
        dVar13 = (double)(longlong)*pdVar2;
      }
    }
    else {
      dVar13 = *pdVar2;
    }
    FUN_14955591f(0x32,local_78,"%!.15g",dVar13);
    FUN_14956c0e2(local_78,&local_80,0x14,1);
    if ((dVar13 != local_80) || (NAN(dVar13) || NAN(local_80))) {
      FUN_14955591f(0x32,local_78,"%!.20e",dVar13);
    }
    local_88 = (code *)0xffffffffffffffff;
    FUN_1495590c8(param_1,local_78,0xffffffff,1);
    break;
  case 3:
    pcVar4 = (char *)FUN_149558f28(pdVar2);
    if (pcVar4 != (char *)0x0) {
      lVar5 = 3;
      lVar10 = 0;
      do {
        if (pcVar4[lVar5 + -3] == '\'') {
          lVar10 = lVar10 + 1;
        }
        else if (pcVar4[lVar5 + -3] == '\0') goto LAB_1495cea3c;
        lVar5 = lVar5 + 1;
      } while( true );
    }
    break;
  case 4:
    lVar5 = FUN_149558e78(pdVar2);
    uVar3 = FUN_149558f55(*param_3);
    puVar6 = (undefined2 *)FUN_1495cf8a0(param_1,(longlong)(int)uVar3 * 2 + 4);
    if (puVar6 != (undefined2 *)0x0) {
      if (0 < (int)uVar3) {
        uVar8 = 0;
        do {
          *(char *)(puVar6 + uVar8 + 1) = "0123456789ABCDEF%!.20e"[*(byte *)(lVar5 + uVar8) >> 4];
          *(char *)((longlong)puVar6 + uVar8 * 2 + 3) =
               "0123456789ABCDEF%!.20e"[*(byte *)(lVar5 + uVar8) & 0xf];
          uVar8 = uVar8 + 1;
        } while (uVar3 != uVar8);
      }
      puVar6[(longlong)(int)uVar3 + 1] = 0x27;
      *puVar6 = 0x2758;
      local_88 = (code *)0xffffffffffffffff;
      FUN_1495590c8(param_1,puVar6,0xffffffff,1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
    }
    break;
  default:
    local_88 = (code *)0x0;
    puVar11 = &DAT_14a179998;
    iVar12 = 4;
    goto LAB_1495ce966;
  }
  goto LAB_1495cea05;
LAB_1495cea3c:
  puVar11 = (undefined *)FUN_1495cf8a0(param_1,lVar10 + lVar5);
  if (puVar11 != (undefined *)0x0) {
    *puVar11 = 0x27;
    cVar9 = *pcVar4;
    iVar7 = 1;
    if (cVar9 != '\0') {
      iVar7 = 1;
      do {
        puVar11[iVar7] = cVar9;
        uVar8 = (longlong)iVar7 + 1;
        if (*pcVar4 == '\'') {
          puVar11[uVar8] = 0x27;
          uVar8 = (ulonglong)(iVar7 + 2);
        }
        cVar9 = pcVar4[1];
        iVar7 = (int)uVar8;
        pcVar4 = pcVar4 + 1;
      } while (cVar9 != '\0');
    }
    iVar12 = iVar7 + 1;
    *(undefined2 *)(puVar11 + iVar7) = 0x27;
    local_88 = FUN_145e3b961;
LAB_1495ce966:
    FUN_1495590c8(param_1,puVar11,iVar12,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
LAB_1495cea05:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ceb0a FUN_1495ceb0a body=704 status=ok
// SIG undefined FUN_1495ceb0a(void)

void FUN_1495ceb0a(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  char *_Buf2;
  void *_Src;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint local_94;
  longlong local_70;
  
  lVar12 = *(longlong *)(*param_1 + 0x28);
  lVar9 = FUN_149558f28(*param_3);
  if (lVar9 != 0) {
    uVar3 = FUN_149558f55(*param_3);
    _Buf2 = (char *)FUN_149558f28(param_3[1]);
    if (_Buf2 != (char *)0x0) {
      if (*_Buf2 == '\0') {
        FUN_1495594c1(*param_1,*param_3);
        return;
      }
      iVar4 = FUN_149558f55(param_3[1]);
      _Src = (void *)FUN_149558f28(param_3[2]);
      if (_Src != (void *)0x0) {
        iVar5 = FUN_149558f55(param_3[2]);
        local_70 = (longlong)(int)(uVar3 + 1);
        lVar10 = FUN_1495cf8a0(param_1);
        if (lVar10 != 0) {
          iVar6 = 0;
          if ((int)(uVar3 - iVar4) < 0) {
            iVar14 = 0;
          }
          else {
            iVar7 = iVar5 - iVar4;
            uVar2 = 0;
            iVar14 = 0;
            iVar6 = 0;
            lVar13 = lVar10;
            do {
              cVar1 = *(char *)(lVar9 + iVar6);
              lVar10 = lVar13;
              if ((cVar1 == *_Buf2) &&
                 (iVar8 = memcmp((void *)(iVar6 + lVar9),_Buf2,(longlong)iVar4), iVar8 == 0)) {
                local_94 = uVar2;
                if (iVar4 < iVar5) {
                  if ((longlong)*(int *)(lVar12 + 0x7c) < local_70 + iVar7 + -1) {
                    *(undefined4 *)((longlong)param_1 + 0x24) = 0x12;
                    FUN_14955916b(*param_1,"string or blob too big",0xffffffff,
                                  CONCAT71((int7)(int3)((uint)iVar7 >> 8),1),0);
LAB_1495cedb2:
                    FUN_145e3b961(lVar13);
                    return;
                  }
                  local_70 = local_70 + iVar7;
                  local_94 = uVar2 + 1;
                  if (((local_94 & uVar2) == 0) &&
                     (lVar10 = FUN_1495539bb(lVar13,(longlong)(int)local_70 + local_70 + (int)~uVar3
                                            ), lVar10 == 0)) {
                    FUN_14955960a(param_1);
                    goto LAB_1495cedb2;
                  }
                }
                memcpy((void *)(iVar14 + lVar10),_Src,(longlong)iVar5);
                iVar14 = iVar14 + iVar5;
                iVar8 = iVar6 + iVar4 + -1;
                uVar2 = local_94;
              }
              else {
                lVar11 = (longlong)iVar14;
                iVar14 = iVar14 + 1;
                *(char *)(lVar13 + lVar11) = cVar1;
                iVar8 = iVar6;
              }
              iVar6 = iVar8 + 1;
              lVar13 = lVar10;
            } while (iVar8 < (int)(uVar3 - iVar4));
          }
          memcpy((void *)(lVar10 + iVar14),(void *)(lVar9 + iVar6),(longlong)(int)(uVar3 - iVar6));
          lVar12 = (longlong)(int)((uVar3 - iVar6) + iVar14);
          *(undefined1 *)(lVar10 + lVar12) = 0;
          FUN_1495590c8(param_1,lVar10,lVar12,1,FUN_145e3b961);
        }
      }
    }
  }
  return;
}



// FUNCTION 1495cedca FUN_1495cedca body=58 status=ok
// SIG undefined FUN_1495cedca(void)

void FUN_1495cedca(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_149558f85(*param_3);
  lVar3 = 0;
  if (0 < lVar2) {
    lVar3 = lVar2;
  }
  iVar1 = FUN_149559525(param_1,lVar3);
  if (iVar1 == 0) {
    return;
  }
  FUN_14955957e(param_1,iVar1);
  return;
}



// FUNCTION 1495cee04 FUN_1495cee04 body=555 status=ok
// SIG undefined FUN_1495cee04(void)

void FUN_1495cee04(longlong *param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  
  if (((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)*(uint *)(param_3[1] + 8) & 0x3f) & 1) == 0) &&
     ((param_2 != 3 ||
      ((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)*(uint *)(param_3[2] + 8) & 0x3f) & 1) == 0)))) {
    uVar1 = *(uint *)(*param_3 + 8);
    iVar2 = FUN_149558f85();
    if ((0x1000000010001U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0) {
      pbVar4 = (byte *)FUN_149558f28();
      if (pbVar4 != (byte *)0x0) {
        iVar13 = 0;
        if ((iVar2 < 0) && (bVar8 = *pbVar4, iVar13 = 0, bVar8 != 0)) {
          iVar13 = 0;
          pbVar5 = pbVar4;
          do {
            if (bVar8 < 0xc0) {
              pbVar5 = pbVar5 + 1;
              bVar8 = *pbVar5;
            }
            else {
              do {
                bVar8 = pbVar5[1];
                pbVar5 = pbVar5 + 1;
              } while (SBORROW1('\0',bVar8 & 0xc0));
            }
            iVar13 = iVar13 + 1;
          } while (bVar8 != 0);
        }
LAB_1495ceedc:
        if (param_2 == 3) {
          iVar3 = FUN_149558f85(param_3[2]);
          bVar14 = -1 < iVar3;
          lVar9 = -(longlong)iVar3;
          if (bVar14) {
            lVar9 = (longlong)iVar3;
          }
        }
        else {
          bVar14 = true;
          lVar9 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x28) + 0x7c);
        }
        lVar11 = (longlong)iVar13;
        if (iVar2 < 0) {
          lVar12 = iVar2 + lVar11;
          if (lVar12 < 0) {
            lVar9 = lVar9 + lVar12;
            lVar12 = 0;
            if (lVar9 < 1) {
              lVar9 = lVar12;
            }
          }
        }
        else if (iVar2 == 0) {
          lVar12 = 0;
          lVar9 = lVar9 - (ulonglong)(0 < lVar9);
        }
        else {
          lVar12 = (longlong)iVar2 + -1;
        }
        lVar6 = lVar12 - lVar9;
        lVar10 = 0;
        if (0 < lVar6) {
          lVar10 = lVar6;
        }
        lVar7 = lVar9;
        if (lVar6 < 0) {
          lVar7 = lVar12;
        }
        if (bVar14) {
          lVar7 = lVar9;
          lVar10 = lVar12;
        }
        if ((0x1000000010001U >> ((byte)uVar1 & 0x3f) & 1) != 0) {
          lVar9 = 0;
          if (0 < lVar11 - lVar10) {
            lVar9 = lVar11 - lVar10;
          }
          if (lVar7 + lVar10 <= lVar11) {
            lVar9 = lVar7;
          }
          FUN_149559117(param_1,pbVar4 + lVar10,lVar9);
          return;
        }
        bVar8 = *pbVar4;
        if (bVar8 != 0) {
          for (; lVar10 != 0; lVar10 = lVar10 + -1) {
            if (bVar8 < 0xc0) {
              pbVar4 = pbVar4 + 1;
              bVar8 = *pbVar4;
            }
            else {
              do {
                bVar8 = pbVar4[1];
                pbVar4 = pbVar4 + 1;
              } while (SBORROW1('\0',bVar8 & 0xc0));
            }
            if (bVar8 == 0) break;
          }
        }
        pbVar5 = pbVar4;
        if (bVar8 != 0) {
          for (; lVar7 != 0; lVar7 = lVar7 + -1) {
            if (bVar8 < 0xc0) {
              pbVar5 = pbVar5 + 1;
              bVar8 = *pbVar5;
            }
            else {
              do {
                bVar8 = pbVar5[1];
                pbVar5 = pbVar5 + 1;
              } while (SBORROW1('\0',bVar8 & 0xc0));
            }
            if (bVar8 == 0) break;
          }
        }
        FUN_149559459(param_1,pbVar4,(longlong)pbVar5 - (longlong)pbVar4,0xffffffffffffffff);
        return;
      }
    }
    else {
      iVar13 = FUN_149558f55(*param_3);
      pbVar4 = (byte *)FUN_149558e78(*param_3);
      if (pbVar4 != (byte *)0x0) goto LAB_1495ceedc;
    }
  }
  return;
}



// FUNCTION 1495cf02f FUN_1495cf02f body=323 status=ok
// SIG undefined FUN_1495cf02f(void)

void FUN_1495cf02f(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  ushort uVar4;
  double *pdVar5;
  ulonglong uVar6;
  double dVar7;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    pdVar5 = (double *)FUN_1495596e1(param_1,0x20);
  }
  else {
    pdVar5 = *(double **)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  lVar1 = *param_3;
  uVar4 = *(ushort *)(lVar1 + 8) & 0x3f;
  if ((0x4000400040004U >> uVar4 & 1) != 0) {
    FUN_149559f51(lVar1,0);
    uVar4 = *(ushort *)(lVar1 + 8) & 0x3f;
  }
  if (pdVar5 == (double *)0x0) {
    return;
  }
  if ((0x5555555555555555U >> uVar4 & 1) == 0) {
    return;
  }
  pdVar5[2] = (double)((longlong)pdVar5[2] + 1);
  pdVar2 = (double *)*param_3;
  if ((0x50505050UL >> uVar4 & 1) == 0) {
    dVar3 = pdVar2[1];
    if (((ulonglong)dVar3 & 8) == 0) {
      if (((ulonglong)dVar3 & 0x24) == 0) {
        dVar7 = 0.0;
        if (((ulonglong)dVar3 & 0x12) != 0) {
          dVar7 = (double)FUN_14956c08d();
        }
      }
      else {
        dVar7 = (double)(longlong)*pdVar2;
      }
    }
    else {
      dVar7 = *pdVar2;
    }
    *pdVar5 = dVar7 + *pdVar5;
    *(undefined1 *)((longlong)pdVar5 + 0x19) = 1;
    return;
  }
  uVar6 = FUN_149558f85();
  *pdVar5 = (double)(longlong)uVar6 + *pdVar5;
  if (*(char *)(pdVar5 + 3) != '\0' || *(char *)((longlong)pdVar5 + 0x19) != '\0') {
    return;
  }
  dVar3 = pdVar5[1];
  if ((longlong)uVar6 < 0) {
    if (((longlong)dVar3 < 0) && ((longlong)(uVar6 + 1) < -0x7fffffffffffffff - (longlong)dVar3))
    goto LAB_1495cf13a;
  }
  else if (0 < (longlong)dVar3 && 0x7fffffffffffffffU - (longlong)dVar3 < uVar6) {
LAB_1495cf13a:
    *(undefined2 *)(pdVar5 + 3) = 0x101;
    return;
  }
  pdVar5[1] = (double)((longlong)dVar3 + uVar6);
  return;
}



// FUNCTION 1495cf172 FUN_1495cf172 body=247 status=ok
// SIG undefined FUN_1495cf172(void)

void FUN_1495cf172(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    puVar3 = (ulonglong *)FUN_1495596e1(param_1,0);
  }
  else {
    puVar3 = *(ulonglong **)(param_1[2] + 0x10);
  }
  if ((puVar3 != (ulonglong *)0x0) && (0 < (longlong)puVar3[2])) {
    if ((char)puVar3[3] == '\0') {
      if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
        puVar2 = (ulonglong *)*param_1;
        if ((*(byte *)((longlong)puVar2 + 9) & 0x24) != 0) {
          FUN_14956c854();
          return;
        }
        *puVar2 = puVar3[1];
        *(undefined2 *)(puVar2 + 1) = 4;
      }
      else {
        uVar1 = *puVar3;
        puVar3 = (ulonglong *)*param_1;
        if ((*(byte *)((longlong)puVar3 + 9) & 0x24) == 0) {
          *(undefined2 *)(puVar3 + 1) = 1;
        }
        else {
          FUN_14956b5ca(puVar3);
        }
        if ((~uVar1 & 0x7ff0000000000000) != 0 || (uVar1 & 0xfffffffffffff) == 0) {
          *puVar3 = uVar1;
          *(undefined2 *)(puVar3 + 1) = 8;
        }
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x24) = 1;
      FUN_14955916b(*param_1,"integer overflow",0xffffffff,1,0xffffffffffffffff);
    }
  }
  return;
}



// FUNCTION 1495cf269 FUN_1495cf269 body=242 status=ok
// SIG undefined FUN_1495cf269(void)

void FUN_1495cf269(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  ushort uVar3;
  double *pdVar4;
  longlong lVar5;
  double dVar6;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    pdVar4 = (double *)FUN_1495596e1(param_1,0x20);
  }
  else {
    pdVar4 = *(double **)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  lVar5 = *param_3;
  uVar3 = *(ushort *)(lVar5 + 8) & 0x3f;
  if ((0x4000400040004U >> uVar3 & 1) != 0) {
    FUN_149559f51(lVar5,0);
    uVar3 = *(ushort *)(lVar5 + 8) & 0x3f;
  }
  if ((pdVar4 != (double *)0x0) && ((0x5555555555555555U >> uVar3 & 1) != 0)) {
    pdVar4[2] = (double)((longlong)pdVar4[2] + -1);
    if (((0x50505050UL >> uVar3 & 1) == 0) || (*(char *)((longlong)pdVar4 + 0x19) != '\0')) {
      pdVar1 = (double *)*param_3;
      dVar2 = pdVar1[1];
      if (((ulonglong)dVar2 & 8) == 0) {
        if (((ulonglong)dVar2 & 0x24) == 0) {
          dVar6 = 0.0;
          if (((ulonglong)dVar2 & 0x12) != 0) {
            dVar6 = (double)FUN_14956c08d();
          }
        }
        else {
          dVar6 = (double)(longlong)*pdVar1;
        }
      }
      else {
        dVar6 = *pdVar1;
      }
      *pdVar4 = *pdVar4 - dVar6;
    }
    else {
      lVar5 = FUN_149558f85(*param_3);
      *pdVar4 = *pdVar4 - (double)lVar5;
      pdVar4[1] = (double)((longlong)pdVar4[1] - lVar5);
    }
  }
  return;
}



// FUNCTION 1495cf35b FUN_1495cf35b body=124 status=ok
// SIG undefined FUN_1495cf35b(void)

void FUN_1495cf35b(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    puVar1 = (ulonglong *)FUN_1495596e1(param_1,0);
  }
  else {
    puVar1 = *(ulonglong **)(param_1[2] + 0x10);
  }
  if (puVar1 == (ulonglong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  puVar1 = (ulonglong *)*param_1;
  if ((*(byte *)((longlong)puVar1 + 9) & 0x24) == 0) {
    *(undefined2 *)(puVar1 + 1) = 1;
  }
  else {
    FUN_14956b5ca(puVar1);
  }
  if ((~uVar2 & 0x7ff0000000000000) != 0 || (uVar2 & 0xfffffffffffff) == 0) {
    *puVar1 = uVar2;
    *(undefined2 *)(puVar1 + 1) = 8;
  }
  return;
}



// FUNCTION 1495cf3d7 FUN_1495cf3d7 body=151 status=ok
// SIG undefined FUN_1495cf3d7(void)

void FUN_1495cf3d7(longlong *param_1)

{
  double dVar1;
  double *pdVar2;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    pdVar2 = (double *)FUN_1495596e1(param_1,0);
  }
  else {
    pdVar2 = *(double **)(param_1[2] + 0x10);
  }
  if ((pdVar2 != (double *)0x0) && (0 < (longlong)pdVar2[2])) {
    dVar1 = *pdVar2 / (double)(longlong)pdVar2[2];
    pdVar2 = (double *)*param_1;
    if ((*(byte *)((longlong)pdVar2 + 9) & 0x24) == 0) {
      *(undefined2 *)(pdVar2 + 1) = 1;
    }
    else {
      FUN_14956b5ca(pdVar2);
    }
    if ((~(ulonglong)dVar1 & 0x7ff0000000000000) != 0 || ((ulonglong)dVar1 & 0xfffffffffffff) == 0)
    {
      *pdVar2 = dVar1;
      *(undefined2 *)(pdVar2 + 1) = 8;
    }
  }
  return;
}



// FUNCTION 1495cf46e FUN_1495cf46e body=78 status=ok
// SIG undefined FUN_1495cf46e(void)

void FUN_1495cf46e(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    plVar1 = (longlong *)FUN_1495596e1(param_1,8);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if (((param_2 == 0) ||
      ((0x5555555555555555U >> ((ulonglong)*(uint *)(*param_3 + 8) & 0x3f) & 1) != 0)) &&
     (plVar1 != (longlong *)0x0)) {
    *plVar1 = *plVar1 + 1;
  }
  return;
}



// FUNCTION 1495cf4bc FUN_1495cf4bc body=80 status=ok
// SIG undefined FUN_1495cf4bc(void)

void FUN_1495cf4bc(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    puVar1 = (undefined8 *)FUN_1495596e1(param_1);
  }
  else {
    puVar1 = *(undefined8 **)(param_1[2] + 0x10);
  }
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  puVar1 = (undefined8 *)*param_1;
  if ((*(byte *)((longlong)puVar1 + 9) & 0x24) == 0) {
    *puVar1 = uVar2;
    *(undefined2 *)(puVar1 + 1) = 4;
    return;
  }
  FUN_14956c854();
  return;
}



// FUNCTION 1495cf50c FUN_1495cf50c body=78 status=ok
// SIG undefined FUN_1495cf50c(void)

void FUN_1495cf50c(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    plVar1 = (longlong *)FUN_1495596e1(param_1,8);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if (((param_2 == 0) ||
      ((0x5555555555555555U >> ((ulonglong)*(uint *)(*param_3 + 8) & 0x3f) & 1) != 0)) &&
     (plVar1 != (longlong *)0x0)) {
    *plVar1 = *plVar1 + -1;
  }
  return;
}



// FUNCTION 1495cf55a FUN_1495cf55a body=313 status=ok
// SIG undefined FUN_1495cf55a(void)

void FUN_1495cf55a(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined *_Src_00;
  uint uVar3;
  uint uVar4;
  
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)*(uint *)(*param_3 + 8) & 0x3f) & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    lVar2 = FUN_1495596e1(param_1,0x20);
  }
  else {
    lVar2 = *(longlong *)(param_1[2] + 0x10);
  }
  if (lVar2 == 0) {
    return;
  }
  iVar1 = *(int *)(lVar2 + 0x14);
  *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 0x7c);
  if (iVar1 == 0) goto LAB_1495cf5c3;
  if (param_2 == 2) {
    _Src_00 = (undefined *)FUN_149558f28(param_3[1]);
    iVar1 = FUN_149558f55(param_3[1]);
    if (_Src_00 == (undefined *)0x0) goto LAB_1495cf5c3;
    uVar3 = *(uint *)(lVar2 + 0x18);
    uVar4 = uVar3 + iVar1;
    if (*(uint *)(lVar2 + 0x10) <= uVar4) goto LAB_1495cf669;
    if (iVar1 == 0) goto LAB_1495cf5c3;
  }
  else {
    uVar3 = *(uint *)(lVar2 + 0x18);
    uVar4 = uVar3 + 1;
    iVar1 = 1;
    _Src_00 = &DAT_149eb5f2c;
    if (*(uint *)(lVar2 + 0x10) <= uVar4) {
LAB_1495cf669:
      FUN_1495557b3(lVar2,_Src_00,iVar1);
      goto LAB_1495cf5c3;
    }
  }
  *(uint *)(lVar2 + 0x18) = uVar4;
  memcpy((void *)((ulonglong)uVar3 + *(longlong *)(lVar2 + 8)),_Src_00,(longlong)iVar1);
LAB_1495cf5c3:
  _Src = (void *)FUN_149558f28(*param_3);
  iVar1 = FUN_149558f55(*param_3);
  if (_Src != (void *)0x0) {
    uVar4 = *(uint *)(lVar2 + 0x18);
    uVar3 = uVar4 + iVar1;
    if (*(uint *)(lVar2 + 0x10) <= uVar3) {
      FUN_1495557b3(lVar2,_Src,iVar1);
      return;
    }
    if (iVar1 != 0) {
      *(uint *)(lVar2 + 0x18) = uVar3;
      memcpy((void *)((ulonglong)uVar4 + *(longlong *)(lVar2 + 8)),_Src,(longlong)iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1495cf693 FUN_1495cf693 body=193 status=ok
// SIG undefined FUN_1495cf693(void)

void FUN_1495cf693(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0);
  }
  else {
    lVar1 = *(longlong *)(param_1[2] + 0x10);
  }
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(lVar1 + 0x1c) == '\a') {
    FUN_14955960a(param_1);
    return;
  }
  if (*(char *)(lVar1 + 0x1c) != '\x12') {
    if (((*(longlong *)(lVar1 + 8) == 0) ||
        (*(undefined1 *)(*(longlong *)(lVar1 + 8) + (ulonglong)*(uint *)(lVar1 + 0x18)) = 0,
        *(int *)(lVar1 + 0x14) == 0)) || ((*(byte *)(lVar1 + 0x1d) & 4) != 0)) {
      uVar2 = *(undefined8 *)(lVar1 + 8);
    }
    else {
      uVar2 = FUN_14955d93a(lVar1);
    }
    FUN_1495590c8(param_1,uVar2,0xffffffff,1,FUN_145e3b961);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x12;
  FUN_14955916b(*param_1,"string or blob too big",0xffffffff,1,0);
  return;
}



// FUNCTION 1495cf754 FUN_1495cf754 body=169 status=ok
// SIG undefined FUN_1495cf754(void)

void FUN_1495cf754(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0);
  }
  else {
    lVar1 = *(longlong *)(param_1[2] + 0x10);
  }
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1c) == '\a') {
      FUN_14955960a(param_1);
      return;
    }
    if (*(char *)(lVar1 + 0x1c) == '\x12') {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0x12;
      FUN_14955916b(*param_1,"string or blob too big",0xffffffff,1,0);
    }
    else {
      if ((ulonglong)*(uint *)(lVar1 + 0x18) == 0) {
        uVar2 = 0;
      }
      else {
        *(undefined1 *)(*(longlong *)(lVar1 + 8) + (ulonglong)*(uint *)(lVar1 + 0x18)) = 0;
        uVar2 = *(undefined8 *)(lVar1 + 8);
      }
      FUN_1495590c8(param_1,uVar2,0xffffffff,1,0xffffffffffffffff);
    }
  }
  return;
}



// FUNCTION 1495cf7fd FUN_1495cf7fd body=163 status=ok
// SIG undefined FUN_1495cf7fd(void)

void FUN_1495cf7fd(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)*(uint *)(*param_3 + 8) & 0x3f) & 1) == 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
      lVar3 = FUN_1495596e1(param_1,0x20);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    }
    if (lVar3 != 0) {
      iVar1 = FUN_149558f55(*param_3);
      iVar2 = 1;
      if (param_2 == 2) {
        iVar2 = FUN_149558f55(param_3[1]);
      }
      iVar2 = iVar2 + iVar1;
      uVar4 = *(int *)(lVar3 + 0x18) - iVar2;
      if (uVar4 == 0 || *(int *)(lVar3 + 0x18) < iVar2) {
        *(undefined4 *)(lVar3 + 0x18) = 0;
      }
      else {
        *(uint *)(lVar3 + 0x18) = uVar4;
        memmove(*(void **)(lVar3 + 8),(void *)((longlong)iVar2 + (longlong)*(void **)(lVar3 + 8)),
                (ulonglong)uVar4);
        if (*(int *)(lVar3 + 0x18) != 0) {
          return;
        }
      }
      *(undefined4 *)(lVar3 + 0x14) = 0;
    }
  }
  return;
}



// FUNCTION 1495cf8a0 FUN_1495cf8a0 body=92 status=ok
// SIG undefined FUN_1495cf8a0(void)

longlong FUN_1495cf8a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)(*param_1 + 0x28) + 0x7c) < param_2) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0x12;
    FUN_14955916b(*param_1,"string or blob too big",0xffffffff,1,0);
  }
  else {
    lVar1 = FUN_145e3bd67(param_2);
    if (lVar1 != 0) {
      return lVar1;
    }
    FUN_14955960a(param_1);
  }
  return 0;
}



// FUNCTION 1495cf8fc FUN_1495cf8fc body=105 status=ok
// SIG undefined FUN_1495cf8fc(void)

void FUN_1495cf8fc(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0);
  }
  else {
    lVar1 = *(longlong *)(param_1[2] + 0x10);
  }
  if (lVar1 != 0) {
    if (*(short *)(lVar1 + 8) != 0) {
      FUN_1495594c1(*param_1,lVar1);
    }
    if ((param_2 == 0) && (((*(byte *)(lVar1 + 9) & 0x24) != 0 || (*(int *)(lVar1 + 0x20) != 0)))) {
      FUN_14956b588(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1495cf965 FUN_1495cf965 body=2299 status=ok
// SIG undefined FUN_1495cf965(void)

void FUN_1495cf965(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  longlong **pplVar18;
  longlong lVar19;
  longlong lVar20;
  longlong **pplVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  longlong local_298;
  undefined8 local_290;
  longlong *local_288;
  longlong local_280;
  undefined8 local_278;
  longlong local_270;
  longlong local_268;
  undefined8 *local_260;
  undefined1 *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  longlong **local_230;
  longlong *local_228;
  longlong lStack_220;
  longlong *local_218;
  undefined8 uStack_210;
  undefined1 local_200 [8];
  longlong local_1f8;
  int local_1e8;
  longlong *local_158;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_298 = *(longlong *)(*param_1 + 0x28);
  lVar10 = FUN_149558f28(*param_3);
  uVar11 = FUN_149558f28(param_3[3]);
  lVar12 = FUN_149558f28(param_3[4]);
  uVar13 = FUN_149558f85(param_3[5]);
  lVar14 = FUN_149558f28(param_3[6]);
  uVar6 = FUN_149558f85(param_3[7]);
  iVar7 = FUN_149558f85(param_3[8]);
  lVar19 = local_298;
  if (((int)uVar13 < 0 || lVar14 == 0) || (lVar12 == 0 || lVar10 == 0)) goto LAB_1495cfa19;
  uVar3 = *(undefined8 *)(local_298 + 0x1d0);
  local_280 = lVar10;
  local_278 = uVar13;
  local_268 = lVar14;
  local_260 = param_3;
  if (*(char *)(local_298 + 0x69) == '\0') {
    FUN_14955dca3(local_298);
  }
  plVar15 = (longlong *)FUN_14955d004(lVar19,lVar12,uVar11);
  if ((plVar15 == (longlong *)0x0) ||
     (uVar17 = (uint)local_278, (int)*(short *)((longlong)plVar15 + 0x46) <= (int)uVar17)) {
    if (*(char *)(lVar19 + 0x69) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_2c8);
    }
    goto LAB_1495cfa19;
  }
  local_270 = (ulonglong)(uVar17 & 0x7fffffff) * 0x20;
  lVar10 = *(longlong *)(plVar15[1] + local_270);
  local_218 = (longlong *)0x0;
  uStack_210 = 0;
  local_228 = (longlong *)0x0;
  uVar8 = 0xffffffff;
  if (uVar17 != (int)*(short *)((longlong)plVar15 + 0x44)) {
    uVar8 = uVar17;
  }
  lStack_220 = (ulonglong)uVar8 << 0x20;
  *(undefined8 *)(lVar19 + 0x1d0) = 0;
  local_2a8 = (undefined1 *)CONCAT44(local_2a8._4_4_,iVar7);
  local_290 = uVar3;
  local_288 = param_1;
  iVar9 = FUN_1495d0b80(local_200,uVar11,lVar19,local_280);
  local_240 = 0;
  uStack_238 = 0;
  local_250 = &LAB_1495d0c98;
  local_248 = FUN_1495d0d54;
  plVar16 = local_288;
  local_258 = local_200;
  local_230 = &local_228;
  local_218 = plVar15;
  if (iVar9 == 0) {
    if (local_c0 != (longlong *)0x0) {
      lVar19 = local_c0[3];
      if (lVar19 == 0) {
        if (*local_c0 != 0) {
          lVar19 = 0;
          do {
            bVar1 = *(byte *)(lVar12 + lVar19);
            bVar2 = *(byte *)(*local_c0 + lVar19);
            if (bVar1 == bVar2) {
              if ((ulonglong)bVar1 == 0) goto LAB_1495d00a0;
            }
            else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) break;
            lVar19 = lVar19 + 1;
          } while( true );
        }
        local_218 = local_c0;
        bVar5 = false;
        goto LAB_1495cfd18;
      }
      *(byte *)(lVar19 + 6) = *(byte *)(lVar19 + 6) & 0xdf;
      local_1e8 = 0;
      FUN_1495a68fc(local_200,lVar19,0);
      iVar9 = 7;
      if (*(char *)(local_298 + 0x61) == '\0') {
        iVar9 = local_1e8;
      }
      plVar16 = local_288;
      if (iVar9 == 0) {
        FUN_14959fb62(&local_258,lVar19);
        goto LAB_1495d0065;
      }
      goto LAB_1495cfc6e;
    }
    if (local_b8 == 0) {
      uVar13 = 0;
      if (iVar7 == 0) {
        uVar13 = uVar11;
      }
      iVar9 = FUN_1495d0d71(local_200,uVar13);
      plVar16 = local_288;
      if (iVar9 != 0) goto LAB_1495cfc6e;
      lVar19 = *(longlong *)(local_b0 + 0x38);
      if (lVar19 != 0) {
        do {
          if ((*(longlong *)(lVar19 + 0x18) != 0) &&
             (plVar16 = (longlong *)FUN_14955a08c(local_200,0,*(longlong *)(lVar19 + 0x18),uVar11),
             plVar16 == plVar15)) {
            if (*(longlong *)(lVar19 + 0x38) != 0) {
              FUN_1495d10fb(local_200,&local_228,
                            *(undefined8 *)(*(longlong *)(lVar19 + 0x38) + 0x10),lVar10);
            }
            FUN_1495d11c6(local_200,&local_228,*(undefined8 *)(lVar19 + 0x30),lVar10);
            FUN_1495d10fb(local_200,&local_228,*(undefined8 *)(lVar19 + 0x28),lVar10);
          }
          lVar19 = *(longlong *)(lVar19 + 0x48);
        } while (lVar19 != 0);
      }
      if (local_158 == plVar15) {
        FUN_1495d11c6(local_200,&local_228,*(undefined8 *)(local_b0 + 0x20),lVar10);
      }
      FUN_1495d1290(&local_258,local_b0);
    }
    else {
      piVar4 = *(int **)(local_b8 + 0x50);
      if ((piVar4 != (int *)0x0) && (iVar7 = *piVar4, 0 < iVar7)) {
        plVar15 = (longlong *)(piVar4 + 2);
        for (; ((*plVar15 == 0 || (iVar9 = FUN_14959fa98(&local_258), iVar9 == 0)) && (1 < iVar7));
            iVar7 = iVar7 + -1) {
          plVar15 = plVar15 + 4;
        }
      }
      if (*(longlong *)(local_b8 + 0x48) != 0) {
        FUN_14959fa98(&local_258);
      }
    }
LAB_1495d0065:
    plVar16 = local_288;
    local_2a8 = (undefined1 *)CONCAT44(local_2a8._4_4_,uVar6);
    iVar9 = FUN_1495d13e0(local_288,&local_228,local_280,local_268);
    lVar19 = local_298;
    uVar11 = local_290;
    if (iVar9 != 0) goto LAB_1495cfc6e;
  }
  else {
LAB_1495cfc6e:
    uVar11 = local_290;
    lVar19 = local_298;
    if (local_1f8 == 0) {
      FUN_14955957e(plVar16,iVar9);
    }
    else {
      local_2a8 = local_200;
      FUN_1495d160e(plVar16,0,local_260[1],local_260[2]);
    }
  }
  FUN_1495d16a5(local_200);
  plVar15 = local_228;
  while (plVar15 != (longlong *)0x0) {
    plVar15 = (longlong *)plVar15[3];
    FUN_14955d65a(lVar19);
  }
  *(undefined8 *)(lVar19 + 0x1d0) = uVar11;
  if (*(char *)(lVar19 + 0x69) == '\0') {
    FUN_14955dd00(lVar19);
  }
LAB_1495cfa19:
  if ((local_60 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1495d00a0:
  local_218 = local_c0;
  pplVar18 = &local_68;
  if (local_68 != (longlong *)0x0) {
    plVar15 = local_68;
    pplVar21 = pplVar18;
    if (*local_68 != *(longlong *)(local_c0[1] + local_270)) {
      do {
        plVar16 = plVar15;
        plVar15 = (longlong *)plVar16[3];
        if (plVar15 == (longlong *)0x0) goto LAB_1495d00bc;
      } while (*plVar15 != *(longlong *)(local_c0[1] + local_270));
      pplVar21 = (longlong **)(plVar16 + 3);
    }
    *pplVar21 = (longlong *)plVar15[3];
    plVar15[3] = (longlong)local_228;
    lStack_220 = CONCAT44(lStack_220._4_4_,(int)lStack_220 + 1);
    local_228 = plVar15;
  }
LAB_1495d00bc:
  if ((lStack_220 < 0) && (local_68 != (longlong *)0x0)) {
    plVar15 = local_68;
    if (*local_68 != (longlong)local_c0 + 0x44) {
      do {
        plVar16 = plVar15;
        plVar15 = (longlong *)plVar16[3];
        if (plVar15 == (longlong *)0x0) goto LAB_1495d00d7;
      } while (*plVar15 != (longlong)local_c0 + 0x44);
      pplVar18 = (longlong **)(plVar16 + 3);
    }
    *pplVar18 = (longlong *)plVar15[3];
    plVar15[3] = (longlong)local_228;
    lStack_220 = CONCAT44(lStack_220._4_4_,(int)lStack_220 + 1);
    local_228 = plVar15;
  }
LAB_1495d00d7:
  piVar4 = (int *)local_c0[6];
  if ((piVar4 != (int *)0x0) && (iVar7 = *piVar4, 0 < iVar7)) {
    plVar15 = (longlong *)(piVar4 + 2);
    for (; ((*plVar15 == 0 || (iVar9 = FUN_14959fa98(&local_258), iVar9 == 0)) && (1 < iVar7));
        iVar7 = iVar7 + -1) {
      plVar15 = plVar15 + 4;
    }
  }
  lVar19 = local_c0[2];
  if (lVar19 != 0) {
    do {
      piVar4 = *(int **)(lVar19 + 0x50);
      if ((piVar4 != (int *)0x0) && (iVar7 = *piVar4, 0 < iVar7)) {
        plVar15 = (longlong *)(piVar4 + 2);
        for (; ((*plVar15 == 0 || (iVar9 = FUN_14959fa98(&local_258), iVar9 == 0)) && (1 < iVar7));
            iVar7 = iVar7 + -1) {
          plVar15 = plVar15 + 4;
        }
      }
      lVar19 = *(longlong *)(lVar19 + 0x28);
    } while (lVar19 != 0);
  }
  bVar5 = true;
  if (local_b8 != 0) {
    lVar19 = local_b8;
    do {
      piVar4 = *(int **)(lVar19 + 0x50);
      if ((piVar4 != (int *)0x0) && (iVar7 = *piVar4, 0 < iVar7)) {
        plVar15 = (longlong *)(piVar4 + 2);
        for (; ((*plVar15 == 0 || (iVar9 = FUN_14959fa98(&local_258), iVar9 == 0)) && (1 < iVar7));
            iVar7 = iVar7 + -1) {
          plVar15 = plVar15 + 4;
        }
      }
      lVar19 = *(longlong *)(lVar19 + 0x28);
    } while (lVar19 != 0);
  }
LAB_1495cfd18:
  plVar15 = local_c0;
  if (0 < *(short *)((longlong)local_c0 + 0x46)) {
    lVar14 = 8;
    lVar19 = 0;
    do {
      if (*(longlong *)(plVar15[1] + lVar14) != 0) {
        FUN_14959fa98(&local_258);
        plVar15 = local_c0;
      }
      lVar19 = lVar19 + 1;
      lVar14 = lVar14 + 0x20;
    } while (lVar19 < *(short *)((longlong)plVar15 + 0x46));
  }
  lVar19 = plVar15[4];
  if (lVar19 != 0) {
    plVar15 = local_228;
    iVar7 = (int)lStack_220;
    do {
      if (0 < *(int *)(lVar19 + 0x28)) {
        lVar14 = 0;
        plVar16 = plVar15;
LAB_1495cfe5c:
        plVar15 = plVar16;
        if ((bVar5) &&
           (local_68 != (longlong *)0x0 && *(int *)(lVar19 + 0x40 + lVar14 * 0x10) == (int)local_278
           )) {
          lVar20 = lVar14 * 0x10 + lVar19 + 0x40;
          pplVar18 = &local_68;
          plVar24 = local_68;
          plVar15 = local_68;
          if (*local_68 != lVar20) {
            do {
              plVar23 = plVar24;
              plVar24 = (longlong *)plVar23[3];
              plVar15 = plVar16;
              if (plVar24 == (longlong *)0x0) goto LAB_1495cfe8d;
            } while (*plVar24 != lVar20);
            pplVar18 = (longlong **)(plVar23 + 3);
            plVar15 = plVar24;
          }
          *pplVar18 = (longlong *)plVar15[3];
          plVar15[3] = (longlong)plVar16;
          iVar7 = iVar7 + 1;
          lStack_220 = CONCAT44(lStack_220._4_4_,iVar7);
          local_228 = plVar15;
        }
LAB_1495cfe8d:
        if (*(longlong *)(lVar19 + 0x10) != 0) {
          lVar20 = 0;
          do {
            bVar1 = *(byte *)(*(longlong *)(lVar19 + 0x10) + lVar20);
            if (bVar1 == *(byte *)(lVar12 + lVar20)) {
              if ((ulonglong)bVar1 == 0) goto LAB_1495cfec6;
            }
            else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar12 + lVar20)]) break;
            lVar20 = lVar20 + 1;
          } while( true );
        }
        goto LAB_1495cffbd;
      }
LAB_1495cffde:
      lVar19 = *(longlong *)(lVar19 + 8);
    } while (lVar19 != 0);
  }
  goto LAB_1495d0065;
LAB_1495cfec6:
  lVar20 = *(longlong *)(lVar19 + 0x48 + lVar14 * 0x10);
  if (lVar20 != 0) {
    if (lVar10 != 0) {
      lVar22 = 0;
      do {
        bVar1 = *(byte *)(lVar20 + lVar22);
        if (bVar1 == *(byte *)(lVar10 + lVar22)) {
          if ((ulonglong)bVar1 == 0) goto LAB_1495cffcf;
        }
        else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar10 + lVar22)]) break;
        lVar22 = lVar22 + 1;
      } while( true );
    }
    goto LAB_1495cffbd;
  }
  if (local_68 == (longlong *)0x0 || lVar10 != 0) goto LAB_1495cffbd;
  goto LAB_1495cff7c;
LAB_1495cffcf:
  if (local_68 == (longlong *)0x0) goto LAB_1495cffbd;
LAB_1495cff7c:
  pplVar18 = &local_68;
  plVar16 = local_68;
  if (*local_68 != lVar20) {
    do {
      plVar24 = plVar16;
      plVar16 = (longlong *)plVar24[3];
      if (plVar16 == (longlong *)0x0) goto LAB_1495cffbd;
    } while (*plVar16 != lVar20);
    pplVar18 = (longlong **)(plVar24 + 3);
  }
  *pplVar18 = (longlong *)plVar16[3];
  plVar16[3] = (longlong)plVar15;
  iVar7 = iVar7 + 1;
  lStack_220 = CONCAT44(lStack_220._4_4_,iVar7);
  plVar15 = plVar16;
  local_228 = plVar16;
LAB_1495cffbd:
  lVar14 = lVar14 + 1;
  plVar16 = plVar15;
  if (*(int *)(lVar19 + 0x28) <= lVar14) goto LAB_1495cffde;
  goto LAB_1495cfe5c;
}



// FUNCTION 1495d0284 FUN_1495d0284 body=1796 status=ok
// SIG undefined FUN_1495d0284(void)

void FUN_1495d0284(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong **pplVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined1 auStack_2e8 [32];
  undefined1 *local_2c8;
  longlong *local_2b8;
  longlong *local_2b0;
  ulonglong local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined1 *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  longlong **local_230;
  longlong *local_228;
  undefined8 uStack_220;
  longlong *local_218;
  undefined8 uStack_210;
  undefined1 local_200 [8];
  longlong local_1f8;
  int local_1e8;
  int local_1d0;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  lVar16 = *(longlong *)(*param_1 + 0x28);
  uVar9 = FUN_149558f28(*param_3);
  lVar10 = FUN_149558f28(param_3[3]);
  lVar11 = FUN_149558f28(param_3[4]);
  lVar12 = FUN_149558f28(param_3[5]);
  iVar7 = FUN_149558f85(param_3[6]);
  if (lVar12 == 0 || (lVar11 == 0 || lVar10 == 0)) goto LAB_1495d0313;
  local_2a0 = *(undefined8 *)(lVar16 + 0x1d0);
  *(undefined8 *)(lVar16 + 0x1d0) = 0;
  local_2b0 = param_1;
  if (*(char *)(lVar16 + 0x69) == '\0') {
    FUN_14955dca3(lVar16);
  }
  local_218 = (longlong *)0x0;
  uStack_210 = 0;
  local_228 = (longlong *)0x0;
  uStack_220 = 0;
  local_218 = (longlong *)FUN_14955d004(lVar16,lVar11,uVar9);
  local_240 = 0;
  uStack_238 = 0;
  local_258 = local_200;
  local_250 = &LAB_1495d1774;
  local_248 = FUN_1495d17d6;
  local_2c8 = (undefined1 *)CONCAT44(local_2c8._4_4_,iVar7);
  local_230 = &local_228;
  iVar8 = FUN_1495d0b80(local_258,uVar9,lVar16,lVar10);
  plVar5 = local_2b0;
  local_298 = lVar16;
  if (iVar8 != 0) goto LAB_1495d052d;
  uVar4 = *(ulonglong *)(lVar16 + 0x30);
  uVar18 = (uint)uVar4;
  if (local_c0 == (longlong *)0x0) {
    if (local_b8 == (longlong *)0x0) {
      lVar16 = *(longlong *)(local_b0 + 8);
      if (lVar16 != 0) {
        lVar17 = 0;
        do {
          bVar2 = *(byte *)(lVar16 + lVar17);
          if (bVar2 == *(byte *)(lVar11 + lVar17)) {
            if ((ulonglong)bVar2 == 0) goto LAB_1495d090f;
          }
          else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[*(byte *)(lVar11 + lVar17)]) break;
          lVar17 = lVar17 + 1;
        } while( true );
      }
      goto LAB_1495d0435;
    }
    if (local_68 != (longlong *)0x0) {
      if (*local_68 == *local_b8) {
        pplVar14 = &local_68;
        plVar13 = local_68;
      }
      else {
        do {
          plVar21 = local_68;
          plVar13 = (longlong *)plVar21[3];
          if (plVar13 == (longlong *)0x0) goto LAB_1495d0701;
          local_68 = plVar13;
        } while (*plVar13 != *local_b8);
        pplVar14 = (longlong **)(plVar21 + 3);
      }
      *pplVar14 = (longlong *)plVar13[3];
      plVar13[3] = (longlong)local_228;
      uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_220 + 1);
      local_228 = plVar13;
    }
LAB_1495d0701:
    if (((uVar18 >> 0x1a & 1) == 0) && (local_b8[9] != 0)) {
      FUN_14959fa98(&local_258);
    }
  }
  else if (local_c0[3] == 0) {
    local_2b8 = local_c0;
    if ((((byte)(uVar4 >> 0x1a) & 0x3f & (uVar18 >> 0xe & 1) == 0) == 0) &&
       (lVar16 = local_c0[4], lVar16 != 0)) {
      plVar13 = local_228;
      iVar7 = (int)uStack_220;
LAB_1495d0614:
      lVar17 = *(longlong *)(lVar16 + 0x10);
      if (lVar17 != 0) {
        lVar19 = 0;
        do {
          bVar2 = *(byte *)(lVar17 + lVar19);
          if (bVar2 == *(byte *)(lVar11 + lVar19)) {
            if ((ulonglong)bVar2 == 0) goto LAB_1495d0647;
          }
          else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[*(byte *)(lVar11 + lVar19)]) break;
          lVar19 = lVar19 + 1;
        } while( true );
      }
      goto LAB_1495d0698;
    }
LAB_1495d06a5:
    local_2a8 = uVar4;
    if (*local_c0 != 0) {
      lVar16 = 0;
      do {
        bVar2 = *(byte *)(lVar11 + lVar16);
        bVar3 = *(byte *)(*local_c0 + lVar16);
        if (bVar2 == bVar3) {
          if ((ulonglong)bVar2 == 0) goto LAB_1495d0840;
        }
        else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[bVar3]) break;
        lVar16 = lVar16 + 1;
      } while( true );
    }
  }
  else if ((uVar18 >> 0x1a & 1) == 0) {
    local_268 = 0;
    uStack_260 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_290 = local_200;
    pbVar1 = (byte *)(local_c0[3] + 6);
    *pbVar1 = *pbVar1 & 0xdf;
    FUN_1495a68fc(local_290,local_c0[3]);
    if (local_1d0 == 0) {
      FUN_14959fb62(&local_258,local_c0[3]);
    }
    else {
      iVar8 = local_1e8;
      if (local_1e8 != 0) goto LAB_1495d052d;
    }
  }
  goto LAB_1495d0780;
LAB_1495d0647:
  if (local_68 != (longlong *)0x0) {
    pplVar14 = &local_68;
    plVar21 = local_68;
    if (*local_68 != lVar17) {
      do {
        plVar20 = plVar21;
        plVar21 = (longlong *)plVar20[3];
        if (plVar21 == (longlong *)0x0) goto LAB_1495d0698;
      } while (*plVar21 != lVar17);
      pplVar14 = (longlong **)(plVar20 + 3);
    }
    *pplVar14 = (longlong *)plVar21[3];
    plVar21[3] = (longlong)plVar13;
    iVar7 = iVar7 + 1;
    uStack_220 = CONCAT44(uStack_220._4_4_,iVar7);
    plVar13 = plVar21;
    local_228 = plVar21;
  }
LAB_1495d0698:
  lVar16 = *(longlong *)(lVar16 + 8);
  if (lVar16 == 0) goto LAB_1495d06a5;
  goto LAB_1495d0614;
LAB_1495d090f:
  if (local_68 != (longlong *)0x0 && local_218[0xe] == *(longlong *)(local_b0 + 0x30)) {
    plVar13 = local_68;
    if (*local_68 == lVar16) {
      pplVar14 = &local_68;
    }
    else {
      do {
        plVar21 = plVar13;
        plVar13 = (longlong *)plVar21[3];
        if (plVar13 == (longlong *)0x0) goto LAB_1495d0435;
      } while (*plVar13 != lVar16);
      pplVar14 = (longlong **)(plVar21 + 3);
    }
    *pplVar14 = (longlong *)plVar13[3];
    plVar13[3] = (longlong)local_228;
    uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_220 + 1);
    local_228 = plVar13;
  }
LAB_1495d0435:
  if ((uVar18 >> 0x1a & 1) != 0) goto LAB_1495d0780;
  uVar15 = 0;
  if (iVar7 == 0) {
    uVar15 = uVar9;
  }
  iVar8 = FUN_1495d0d71(local_200,uVar15);
  if (iVar8 == 0) {
    FUN_1495d1290(&local_258,local_b0);
    lVar16 = *(longlong *)(local_b0 + 0x38);
    if (lVar16 != 0) {
      plVar13 = local_228;
      iVar7 = (int)uStack_220;
LAB_1495d0499:
      lVar17 = *(longlong *)(lVar16 + 0x18);
      if (lVar17 != 0) {
        lVar19 = 0;
        do {
          bVar2 = *(byte *)(lVar17 + lVar19);
          if (bVar2 == *(byte *)(lVar11 + lVar19)) {
            if ((ulonglong)bVar2 == 0) goto LAB_1495d04cc;
          }
          else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[*(byte *)(lVar11 + lVar19)]) break;
          lVar19 = lVar19 + 1;
        } while( true );
      }
      goto LAB_1495d0516;
    }
    goto LAB_1495d0780;
  }
  goto LAB_1495d052d;
LAB_1495d04cc:
  if (local_68 != (longlong *)0x0) {
    plVar21 = local_68;
    pplVar14 = &local_68;
    if (*local_68 != lVar17) {
      do {
        plVar20 = plVar21;
        plVar21 = (longlong *)plVar20[3];
        if (plVar21 == (longlong *)0x0) goto LAB_1495d0516;
      } while (*plVar21 != lVar17);
      pplVar14 = (longlong **)(plVar20 + 3);
    }
    *pplVar14 = (longlong *)plVar21[3];
    plVar21[3] = (longlong)plVar13;
    iVar7 = iVar7 + 1;
    uStack_220 = CONCAT44(uStack_220._4_4_,iVar7);
    plVar13 = plVar21;
    local_228 = plVar21;
  }
LAB_1495d0516:
  lVar16 = *(longlong *)(lVar16 + 0x48);
  if (lVar16 == 0) goto LAB_1495d0780;
  goto LAB_1495d0499;
LAB_1495d0840:
  local_218 = local_c0;
  if ((((uVar18 >> 0x1a & 1) == 0) && (piVar6 = (int *)local_c0[6], piVar6 != (int *)0x0)) &&
     (iVar7 = *piVar6, 0 < iVar7)) {
    plVar13 = (longlong *)(piVar6 + 2);
    for (; ((*plVar13 == 0 || (iVar8 = FUN_14959fa98(&local_258), local_c0 = local_2b8, iVar8 == 0))
           && (1 < iVar7)); iVar7 = iVar7 + -1) {
      plVar13 = plVar13 + 4;
    }
  }
  if (local_68 != (longlong *)0x0) {
    if (*local_68 == *local_c0) {
      pplVar14 = &local_68;
      plVar13 = local_68;
    }
    else {
      do {
        plVar21 = local_68;
        plVar13 = (longlong *)plVar21[3];
        if (plVar13 == (longlong *)0x0) goto LAB_1495d0780;
        local_68 = plVar13;
      } while (*plVar13 != *local_c0);
      pplVar14 = (longlong **)(plVar21 + 3);
    }
    *pplVar14 = (longlong *)plVar13[3];
    plVar13[3] = (longlong)local_228;
    uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_220 + 1);
    local_228 = plVar13;
  }
LAB_1495d0780:
  local_2c8 = (undefined1 *)CONCAT44(local_2c8._4_4_,1);
  iVar8 = FUN_1495d13e0(plVar5,&local_228,lVar10,lVar12);
  if (iVar8 != 0) {
LAB_1495d052d:
    if (local_1f8 == 0) {
      FUN_14955957e(plVar5,iVar8);
    }
    else {
      local_2c8 = local_200;
      FUN_1495d160e(plVar5,0,param_3[1],param_3[2]);
    }
  }
  FUN_1495d16a5(local_200);
  lVar16 = local_298;
  plVar5 = local_228;
  while (plVar5 != (longlong *)0x0) {
    plVar5 = (longlong *)plVar5[3];
    FUN_14955d65a(lVar16);
  }
  if (*(char *)(lVar16 + 0x69) == '\0') {
    FUN_14955dd00(lVar16);
  }
  *(undefined8 *)(lVar16 + 0x1d0) = local_2a0;
LAB_1495d0313:
  if ((local_60 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d0989 FUN_1495d0989 body=502 status=ok
// SIG undefined FUN_1495d0989(void)

void FUN_1495d0989(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [24];
  int local_1d0;
  int local_1b8;
  longlong local_a8;
  longlong local_98;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar1 = *(longlong *)(*param_1 + 0x28);
  lVar7 = FUN_149558f28(*param_3);
  lVar8 = FUN_149558f28(param_3[1]);
  iVar5 = FUN_149558f85(param_3[4]);
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  uVar3 = *(undefined8 *)(lVar1 + 0x1d0);
  *(undefined8 *)(lVar1 + 0x1d0) = 0;
  if (lVar8 == 0 || lVar7 == 0) goto LAB_1495d0a07;
  local_228 = (undefined1 *)CONCAT44(local_228._4_4_,iVar5);
  iVar6 = FUN_1495d0b80(local_1e8,lVar7,lVar1,lVar8);
  if (iVar6 == 0) {
    uVar10 = (uint)uVar2;
    if ((local_a8 == 0 || (uVar10 >> 0x1a & 1) != 0) || (*(longlong *)(local_a8 + 0x18) == 0)) {
      if (local_98 != 0) {
        if ((uVar10 >> 0x1a & 1) == 0) {
          lVar8 = 0;
          if (iVar5 == 0) {
            lVar8 = lVar7;
          }
          iVar5 = FUN_1495d0d71(local_1e8,lVar8);
          if (iVar5 != 0) goto LAB_1495d0b46;
        }
        iVar5 = -1000000;
        if (*(longlong *)(local_98 + 0x30) != 0) {
          iVar5 = -1;
          plVar9 = (longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18);
          do {
            iVar5 = iVar5 + 1;
            lVar8 = *plVar9;
            plVar9 = plVar9 + 4;
          } while (lVar8 != *(longlong *)(local_98 + 0x30));
        }
        iVar6 = FUN_149555d2a(lVar1,lVar7);
        if (iVar5 == iVar6) {
          puVar4 = (undefined8 *)*param_1;
          if ((*(byte *)((longlong)puVar4 + 9) & 0x24) == 0) {
            *puVar4 = 1;
            *(undefined2 *)(puVar4 + 1) = 4;
          }
          else {
            FUN_14956c854(puVar4,1);
          }
        }
      }
    }
    else {
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_220 = local_1e8;
      FUN_1495a68fc();
      if ((local_1b8 != 0) && (local_1d0 != 0)) goto LAB_1495d0b46;
    }
  }
  else {
LAB_1495d0b46:
    local_228 = local_1e8;
    FUN_1495d160e(param_1,1,param_3[2],param_3[3]);
  }
  FUN_1495d16a5(local_1e8);
LAB_1495d0a07:
  *(undefined8 *)(lVar1 + 0x1d0) = uVar3;
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495d0b80 FUN_1495d0b80 body=279 status=ok
// SIG undefined FUN_1495d0b80(void)

int FUN_1495d0b80(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  uVar1 = 1;
  if (param_5 == 0) {
    uVar1 = FUN_149555d2a(param_3);
  }
  *(undefined1 *)(param_3 + 0xb4) = uVar1;
  memset(param_1 + 1,0,0x198);
  *(undefined1 *)((longlong)param_1 + 0x114) = 2;
  *param_1 = param_3;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 1;
  iVar2 = FUN_14955bebe(param_1,param_4,&local_30);
  param_1[1] = local_30;
  iVar3 = 7;
  if (*(char *)(param_3 + 0x61) == '\0') {
    iVar3 = iVar2;
  }
  if (iVar3 == 0) {
    if ((param_1[0x28] == 0) && (param_1[0x29] == 0)) {
      iVar3 = 0;
      if (param_1[0x2a] == 0) {
        local_38 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
        iVar3 = 0xb;
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x19ca5);
      }
    }
    else {
      iVar3 = 0;
    }
  }
  *(undefined1 *)(param_3 + 0xb4) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495d0d54 FUN_1495d0d54 body=29 status=ok
// SIG undefined FUN_1495d0d54(void)

bool FUN_1495d0d54(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_2 + 6) & 0x20) == 0;
  if (bVar1) {
    FUN_1495a9987();
  }
  return !bVar1;
}



// FUNCTION 1495d0d71 FUN_1495d0d71 body=905 status=ok
// SIG undefined FUN_1495d0d71(void)

int FUN_1495d0d71(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined8 *local_108;
  undefined8 *puStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar10 = param_1[0x2a];
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = (undefined8 *)0x0;
  puStack_100 = (undefined8 *)0x0;
  lVar6 = *(longlong *)(*param_1 + 0x20);
  lVar7 = -1000000;
  if (*(longlong *)(lVar10 + 0x30) != 0) {
    lVar7 = -0x100000000;
    plVar9 = (longlong *)(lVar6 + 0x18);
    do {
      lVar7 = lVar7 + 0x100000000;
      lVar1 = *plVar9;
      plVar9 = plVar9 + 4;
    } while (lVar1 != *(longlong *)(lVar10 + 0x30));
    lVar7 = lVar7 >> 0x20;
  }
  local_110 = param_1;
  lVar6 = FUN_14955d004(*param_1,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar6 + lVar7 * 0x20));
  param_1[0x15] = lVar6;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(lVar10 + 0x10);
  if (lVar6 != 0) {
    iVar4 = FUN_1495a8238(param_1,lVar6);
    iVar5 = 1;
    if (iVar4 != 0) goto LAB_1495d1060;
  }
  iVar5 = 0;
  if (*(longlong *)(lVar10 + 0x18) != 0) {
    iVar5 = FUN_1495a4109(&local_110);
  }
  lVar10 = *(longlong *)(lVar10 + 0x38);
  if (lVar10 != 0 && iVar5 == 0) {
LAB_1495d0e64:
    if (((*(longlong *)(lVar10 + 0x10) == 0) ||
        (FUN_1495a68fc(param_1,*(longlong *)(lVar10 + 0x10),&local_110), (int)param_1[6] == 0)) ||
       (iVar5 = (int)param_1[3], iVar5 == 0)) {
      iVar5 = 0;
      if (*(longlong *)(lVar10 + 0x18) == 0) goto LAB_1495d0e78;
      lVar6 = FUN_14955a08c(param_1,0,*(longlong *)(lVar10 + 0x18),param_2);
      iVar5 = 1;
      if ((lVar6 != 0) && (iVar4 = FUN_1495a8238(param_1,lVar6), iVar4 == 0)) {
        uStack_d0 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        local_c8 = 0;
        local_68 = 0;
        local_d8 = 1;
        uStack_c0 = *(undefined8 *)(lVar10 + 0x18);
        local_108 = &local_d8;
        lStack_b0 = lVar6;
        if (*(longlong *)(lVar10 + 0x20) == 0) {
LAB_1495d0f45:
          piVar2 = *(int **)(lVar10 + 0x28);
          iVar5 = 0;
          if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
            piVar8 = piVar2 + 2;
            lVar6 = 0;
            local_118 = param_2;
            do {
              iVar4 = FUN_1495a4109(&local_110,*(undefined8 *)piVar8);
              param_2 = local_118;
              if (iVar4 != 0) {
                iVar5 = 2;
                break;
              }
              lVar6 = lVar6 + 1;
              piVar8 = piVar8 + 8;
            } while (lVar6 < *piVar2);
          }
        }
        else {
          iVar4 = FUN_1495a4109(&local_110);
          iVar5 = 1;
          if (iVar4 == 0) goto LAB_1495d0f45;
        }
        puVar3 = *(undefined8 **)(lVar10 + 0x38);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[5] = &local_d8;
          local_e8 = CONCAT44(local_e8._4_4_,0x200);
          piVar2 = (int *)*puVar3;
          puStack_100 = puVar3;
          if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
            piVar8 = piVar2 + 2;
            lVar6 = 0;
            do {
              iVar5 = FUN_1495a4109(&local_110,*(undefined8 *)piVar8);
              if (iVar5 != 0) goto LAB_1495d1028;
              lVar6 = lVar6 + 1;
              piVar8 = piVar8 + 8;
            } while (lVar6 < *piVar2);
          }
          piVar2 = (int *)puVar3[2];
          if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
            piVar8 = piVar2 + 2;
            lVar6 = 0;
            do {
              iVar5 = FUN_1495a4109(&local_110,*(undefined8 *)piVar8);
              if (iVar5 != 0) goto LAB_1495d1028;
              lVar6 = lVar6 + 1;
              piVar8 = piVar8 + 8;
            } while (lVar6 < *piVar2);
          }
          iVar4 = FUN_1495a4109(&local_110,puVar3[3]);
          iVar5 = 1;
          if (iVar4 == 0) {
            iVar5 = FUN_1495a4109(&local_110,puVar3[1]);
          }
          goto LAB_1495d102d;
        }
        goto LAB_1495d103a;
      }
    }
  }
LAB_1495d1060:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
LAB_1495d1028:
  iVar5 = 2;
LAB_1495d102d:
  local_e8 = local_e8 & 0xffffffff00000000;
LAB_1495d103a:
  local_108 = (undefined8 *)0x0;
LAB_1495d0e78:
  if ((iVar5 != 0) || (lVar10 = *(longlong *)(lVar10 + 0x48), lVar10 == 0)) goto LAB_1495d1060;
  goto LAB_1495d0e64;
}



// FUNCTION 1495d10fb FUN_1495d10fb body=203 status=ok
// SIG undefined FUN_1495d10fb(void)

void FUN_1495d10fb(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((param_3 == (int *)0x0) || (iVar5 = *param_3, iVar5 < 1)) {
    return;
  }
  lVar6 = 0;
LAB_1495d112c:
  if (((param_4 != 0) && ((param_3[lVar6 * 8 + 7] & 3U) == 0)) &&
     (lVar2 = *(longlong *)(param_3 + lVar6 * 8 + 4), lVar2 != 0)) {
    lVar3 = 0;
    do {
      bVar1 = *(byte *)(lVar2 + lVar3);
      if (bVar1 == *(byte *)(param_4 + lVar3)) {
        if ((ulonglong)bVar1 == 0) goto LAB_1495d1172;
      }
      else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(param_4 + lVar3)]) break;
      lVar3 = lVar3 + 1;
    } while( true );
  }
  goto LAB_1495d11ae;
LAB_1495d1172:
  plVar4 = *(longlong **)(param_1 + 0x198);
  if (plVar4 != (longlong *)0x0) {
    plVar7 = (longlong *)(param_1 + 0x198);
    if (*plVar4 != lVar2) {
      do {
        plVar7 = plVar4;
        plVar4 = (longlong *)plVar7[3];
        if (plVar4 == (longlong *)0x0) goto LAB_1495d11ae;
      } while (*plVar4 != lVar2);
      plVar7 = plVar7 + 3;
    }
    *plVar7 = plVar4[3];
    plVar4[3] = *param_2;
    *param_2 = (longlong)plVar4;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    iVar5 = *param_3;
  }
LAB_1495d11ae:
  lVar6 = lVar6 + 1;
  if (iVar5 <= lVar6) {
    return;
  }
  goto LAB_1495d112c;
}



// FUNCTION 1495d11c6 FUN_1495d11c6 body=202 status=ok
// SIG undefined FUN_1495d11c6(void)

void FUN_1495d11c6(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  if ((param_3 != (longlong *)0x0) && (iVar7 = (int)param_3[1], 0 < iVar7)) {
    lVar6 = *param_3;
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + lVar3 * 0x10);
      if (lVar2 == 0) {
        if (param_4 == 0) {
LAB_1495d1238:
          plVar5 = *(longlong **)(param_1 + 0x198);
          if (plVar5 != (longlong *)0x0) {
            plVar8 = (longlong *)(param_1 + 0x198);
            if (*plVar5 != lVar2) {
              do {
                plVar8 = plVar5;
                plVar5 = (longlong *)plVar8[3];
                if (plVar5 == (longlong *)0x0) goto LAB_1495d1278;
              } while (*plVar5 != lVar2);
              plVar8 = plVar8 + 3;
            }
            *plVar8 = plVar5[3];
            plVar5[3] = *param_2;
            *param_2 = (longlong)plVar5;
            *(int *)(param_2 + 1) = (int)param_2[1] + 1;
            iVar7 = (int)param_3[1];
            lVar6 = *param_3;
          }
        }
      }
      else if (param_4 != 0) {
        lVar4 = 0;
        do {
          bVar1 = *(byte *)(lVar2 + lVar4);
          if (bVar1 == *(byte *)(param_4 + lVar4)) {
            if ((ulonglong)bVar1 == 0) goto LAB_1495d1238;
          }
          else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(param_4 + lVar4)]) break;
          lVar4 = lVar4 + 1;
        } while( true );
      }
LAB_1495d1278:
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar7);
  }
  return;
}



// FUNCTION 1495d1290 FUN_1495d1290 body=336 status=ok
// SIG undefined FUN_1495d1290(void)

void FUN_1495d1290(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_14959fa98(param_1);
  }
  for (lVar6 = *(longlong *)(param_2 + 0x38); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x48)) {
    FUN_14959fb62(param_1,*(undefined8 *)(lVar6 + 0x10));
    if (*(longlong *)(lVar6 + 0x20) != 0) {
      FUN_14959fa98(param_1);
    }
    piVar1 = *(int **)(lVar6 + 0x28);
    if ((piVar1 != (int *)0x0) && (iVar5 = *piVar1, 0 < iVar5)) {
      plVar4 = (longlong *)(piVar1 + 2);
      for (; ((*plVar4 == 0 || (iVar3 = FUN_14959fa98(param_1), iVar3 == 0)) && (1 < iVar5));
          iVar5 = iVar5 + -1) {
        plVar4 = plVar4 + 4;
      }
    }
    puVar2 = *(undefined8 **)(lVar6 + 0x38);
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)*puVar2;
      if ((piVar1 != (int *)0x0) && (iVar5 = *piVar1, 0 < iVar5)) {
        plVar4 = (longlong *)(piVar1 + 2);
        for (; ((*plVar4 == 0 || (iVar3 = FUN_14959fa98(param_1), iVar3 == 0)) && (1 < iVar5));
            iVar5 = iVar5 + -1) {
          plVar4 = plVar4 + 4;
        }
      }
      piVar1 = (int *)puVar2[2];
      if ((piVar1 != (int *)0x0) && (iVar5 = *piVar1, 0 < iVar5)) {
        plVar4 = (longlong *)(piVar1 + 2);
        for (; ((*plVar4 == 0 || (iVar3 = FUN_14959fa98(param_1), iVar3 == 0)) && (1 < iVar5));
            iVar5 = iVar5 + -1) {
          plVar4 = plVar4 + 4;
        }
      }
      if (puVar2[3] != 0) {
        FUN_14959fa98(param_1);
      }
      if (puVar2[1] != 0) {
        FUN_14959fa98(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1495d13e0 FUN_1495d13e0 body=558 status=ok
// SIG undefined FUN_1495d13e0(void)

undefined4
FUN_1495d13e0(longlong *param_1,longlong *param_2,char *param_3,char *param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  size_t sVar8;
  size_t sVar9;
  char *_Str;
  size_t sVar10;
  void *_Dst;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  char *_Src;
  undefined4 local_74;
  
  sVar8 = strlen(param_4);
  sVar9 = strlen(param_3);
  lVar1 = *(longlong *)(*param_1 + 0x28);
  _Str = (char *)FUN_14955a402(lVar1,&DAT_14bd498c3,param_4);
  local_74 = 7;
  if (_Str != (char *)0x0) {
    uVar13 = (uint)sVar9 & 0x3fffffff;
    sVar10 = strlen(_Str);
    uVar6 = (uint)sVar10 & 0x3fffffff;
    uVar3 = (uint)sVar8 & 0x3fffffff;
    if (param_5 != 0) {
      param_4 = _Str;
      uVar3 = uVar6;
    }
    sVar8 = (size_t)(int)((int)param_2[1] * uVar6 + uVar13 + 1);
    if (lVar1 == 0) {
      _Dst = (void *)FUN_145e3bd67(sVar8);
    }
    else {
      _Dst = (void *)FUN_14955d750(lVar1);
    }
    local_74 = 7;
    if (_Dst != (void *)0x0) {
      local_74 = 0;
      memset(_Dst,0,sVar8);
      memcpy(_Dst,param_3,(ulonglong)((uint)sVar9 & 0x3fffffff));
      lVar14 = *param_2;
      while (lVar14 != 0) {
        for (lVar2 = *(longlong *)(lVar14 + 0x18); plVar5 = param_2, lVar2 != 0;
            lVar2 = *(longlong *)(lVar2 + 0x18)) {
          if (*(ulonglong *)(lVar14 + 8) < *(ulonglong *)(lVar2 + 8)) {
            lVar14 = lVar2;
          }
        }
        do {
          plVar11 = plVar5;
          lVar2 = *plVar11;
          plVar5 = (longlong *)(lVar2 + 0x18);
        } while (lVar2 != lVar14);
        *plVar11 = *(longlong *)(lVar14 + 0x18);
        _Src = param_4;
        uVar4 = uVar3;
        if (((&DAT_14bd400b0)[**(byte **)(lVar14 + 8)] & 0x46) == 0) {
          _Src = _Str;
          uVar4 = uVar6;
        }
        iVar12 = (int)*(byte **)(lVar14 + 8) - (int)param_3;
        if (*(uint *)(lVar14 + 0x10) != uVar4) {
          uVar7 = *(uint *)(lVar14 + 0x10) + iVar12;
          memmove((void *)((ulonglong)(uVar4 + iVar12) + (longlong)_Dst),
                  (void *)((ulonglong)uVar7 + (longlong)_Dst),(ulonglong)(uVar13 - uVar7));
          uVar13 = uVar13 + (uVar4 - *(int *)(lVar14 + 0x10));
          *(undefined1 *)((longlong)_Dst + (longlong)(int)uVar13) = 0;
        }
        memcpy((void *)((longlong)iVar12 + (longlong)_Dst),_Src,(ulonglong)uVar4);
        if (lVar14 != 0) {
          FUN_14955d65a(lVar1,lVar14);
        }
        lVar14 = *param_2;
      }
      FUN_1495590c8(param_1,_Dst,0xffffffff,1,0xffffffffffffffff);
      FUN_14955d65a(lVar1,_Dst);
    }
    FUN_145e3b961(_Str);
  }
  return local_74;
}



// FUNCTION 1495d160e FUN_1495d160e body=151 status=ok
// SIG undefined FUN_1495d160e(void)

void FUN_1495d160e(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar1 = FUN_149558f28(param_3);
  uVar2 = FUN_149558f28(param_4);
  pcVar3 = " after rename";
  if (param_2 == 0) {
    pcVar3 = "";
  }
  uVar1 = FUN_1495558d3("error in %s %s%s: %s",uVar1,uVar2,pcVar3,*(undefined8 *)(param_5 + 8));
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  FUN_14955916b(*param_1,uVar1,0xffffffff,1,0xffffffffffffffff);
  FUN_145e3b961(uVar1);
  return;
}



// FUNCTION 1495d16a5 FUN_1495d16a5 body=207 status=ok
// SIG undefined FUN_1495d16a5(void)

void FUN_1495d16a5(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x24) == 0x319c2973) || (*(int *)(lVar3 + 0x24) == 0x2df20da3)) {
      FUN_149558ddf(lVar3);
    }
    FUN_149569ad7(lVar3);
  }
  if (param_1[0x28] != 0) {
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x2d8) == 0)) {
      piVar1 = (int *)(param_1[0x28] + 0x3c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) goto LAB_1495d1719;
    }
    FUN_149585e6d(lVar2);
  }
LAB_1495d1719:
  while (param_1[0x29] != 0) {
    param_1[0x29] = *(longlong *)(param_1[0x29] + 0x28);
    FUN_149582813(lVar2);
  }
  FUN_1495536cd(lVar2,param_1[0x2a]);
  if (param_1[1] != 0) {
    FUN_14955d65a(lVar2);
  }
  lVar3 = param_1[0x33];
  while (lVar3 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x18);
    FUN_14955d65a(lVar2);
  }
  FUN_14955aa59(param_1);
  return;
}



// FUNCTION 1495d17d6 FUN_1495d17d6 body=181 status=ok
// SIG undefined FUN_1495d17d6(void)

undefined8 FUN_1495d17d6(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  uVar3 = 1;
  if ((*(byte *)(param_2 + 6) & 0x20) == 0) {
    piVar1 = *(int **)(param_2 + 0x28);
    uVar3 = 2;
    if (piVar1 != (int *)0x0) {
      iVar7 = *piVar1;
      if (0 < iVar7) {
        plVar2 = (longlong *)param_1[5];
        lVar6 = 0;
        do {
          if (*(longlong *)(piVar1 + lVar6 * 0x1c + 10) == plVar2[2]) {
            plVar4 = *(longlong **)(*param_1 + 0x198);
            if (plVar4 != (longlong *)0x0) {
              if (*plVar4 == *(longlong *)(piVar1 + lVar6 * 0x1c + 6)) {
                plVar5 = (longlong *)(*param_1 + 0x198);
              }
              else {
                do {
                  plVar5 = plVar4;
                  plVar4 = (longlong *)plVar5[3];
                  if (plVar4 == (longlong *)0x0) goto LAB_1495d1820;
                } while (*plVar4 != *(longlong *)(piVar1 + lVar6 * 0x1c + 6));
                plVar5 = plVar5 + 3;
              }
              *plVar5 = plVar4[3];
              plVar4[3] = *plVar2;
              *plVar2 = (longlong)plVar4;
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              iVar7 = *piVar1;
            }
          }
LAB_1495d1820:
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar7);
      }
      FUN_1495a9987();
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1495d188b FUN_1495d188b body=43 status=ok
// SIG undefined FUN_1495d188b(void)

void FUN_1495d188b(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    plVar1 = (longlong *)FUN_1495596e1(param_1,8);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = *plVar1 + 1;
  }
  return;
}



// FUNCTION 1495d18b6 FUN_1495d18b6 body=83 status=ok
// SIG undefined FUN_1495d18b6(void)

void FUN_1495d18b6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    puVar1 = (undefined8 *)FUN_1495596e1(param_1);
  }
  else {
    puVar1 = *(undefined8 **)(param_1[2] + 0x10);
  }
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  puVar1 = (undefined8 *)*param_1;
  if ((*(byte *)((longlong)puVar1 + 9) & 0x24) == 0) {
    *puVar1 = uVar2;
    *(undefined2 *)(puVar1 + 1) = 4;
    return;
  }
  FUN_14956c854();
  return;
}



// FUNCTION 1495d1909 FUN_1495d1909 body=48 status=ok
// SIG undefined FUN_1495d1909(void)

void FUN_1495d1909(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0x18);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 8) = 1;
  }
  return;
}



// FUNCTION 1495d1939 FUN_1495d1939 body=100 status=ok
// SIG undefined FUN_1495d1939(void)

void FUN_1495d1939(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    plVar1 = (longlong *)FUN_1495596e1(param_1,0x18);
  }
  else {
    plVar1 = *(longlong **)(param_1[2] + 0x10);
  }
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[1] != 0) {
      lVar2 = lVar2 + 1;
      *plVar1 = lVar2;
      plVar1[1] = 0;
    }
    plVar1 = (longlong *)*param_1;
    if ((*(byte *)((longlong)plVar1 + 9) & 0x24) != 0) {
      FUN_14956c854();
      return;
    }
    *plVar1 = lVar2;
    *(undefined2 *)(plVar1 + 1) = 4;
  }
  return;
}



// FUNCTION 1495d199d FUN_1495d199d body=60 status=ok
// SIG undefined FUN_1495d199d(void)

void FUN_1495d199d(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    plVar2 = (longlong *)FUN_1495596e1(param_1,0x18);
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if (plVar2 != (longlong *)0x0) {
    lVar1 = plVar2[1];
    plVar2[1] = lVar1 + 1;
    if (*plVar2 == 0) {
      *plVar2 = lVar1 + 1;
    }
  }
  return;
}



// FUNCTION 1495d19d9 FUN_1495d19d9 body=88 status=ok
// SIG undefined FUN_1495d19d9(void)

void FUN_1495d19d9(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    puVar1 = (undefined8 *)FUN_1495596e1(param_1,0x18);
  }
  else {
    puVar1 = *(undefined8 **)(param_1[2] + 0x10);
  }
  if (puVar1 != (undefined8 *)0x0) {
    param_1 = (undefined8 *)*param_1;
    if ((*(byte *)((longlong)param_1 + 9) & 0x24) == 0) {
      *param_1 = *puVar1;
      *(undefined2 *)(param_1 + 1) = 4;
    }
    else {
      FUN_14956c854();
    }
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 1495d1a31 FUN_1495d1a31 body=44 status=ok
// SIG undefined FUN_1495d1a31(void)

void FUN_1495d1a31(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0x18);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 1;
  }
  return;
}



// FUNCTION 1495d1a5d FUN_1495d1a5d body=212 status=ok
// SIG undefined FUN_1495d1a5d(void)

void FUN_1495d1a5d(longlong *param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  longlong *plVar4;
  double *pdVar5;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    plVar4 = (longlong *)FUN_1495596e1(param_1,0x18);
  }
  else {
    plVar4 = *(longlong **)(param_1[2] + 0x10);
  }
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = plVar4[1];
    if (plVar4[2] < 2) {
      puVar2 = (undefined8 *)*param_1;
      if ((*(byte *)((longlong)puVar2 + 9) & 0x24) != 0) {
        FUN_14956b5ca(puVar2);
      }
      *puVar2 = 0;
      pdVar5 = (double *)(puVar2 + 1);
    }
    else {
      dVar3 = (double)plVar4[1] / (double)(plVar4[2] + -1);
      pdVar1 = (double *)*param_1;
      pdVar5 = pdVar1 + 1;
      if ((*(byte *)((longlong)pdVar1 + 9) & 0x24) == 0) {
        *(undefined2 *)pdVar5 = 1;
      }
      else {
        FUN_14956b5ca(pdVar1);
      }
      if ((~(ulonglong)dVar3 & 0x7ff0000000000000) == 0 && ((ulonglong)dVar3 & 0xfffffffffffff) != 0
         ) {
        return;
      }
      *pdVar1 = dVar3;
    }
    *(undefined2 *)pdVar5 = 8;
  }
  return;
}



// FUNCTION 1495d1b31 FUN_1495d1b31 body=39 status=ok
// SIG undefined FUN_1495d1b31(void)

void FUN_1495d1b31(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0x18);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 1;
  return;
}



// FUNCTION 1495d1b58 FUN_1495d1b58 body=44 status=ok
// SIG undefined FUN_1495d1b58(void)

void FUN_1495d1b58(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0x18);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 1;
  }
  return;
}



// FUNCTION 1495d1b84 FUN_1495d1b84 body=148 status=ok
// SIG undefined FUN_1495d1b84(void)

void FUN_1495d1b84(longlong *param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    lVar3 = FUN_1495596e1(param_1,0);
  }
  else {
    lVar3 = *(longlong *)(param_1[2] + 0x10);
  }
  if (lVar3 != 0) {
    dVar2 = (double)*(longlong *)(lVar3 + 8) / (double)*(longlong *)(lVar3 + 0x10);
    pdVar1 = (double *)*param_1;
    if ((*(byte *)((longlong)pdVar1 + 9) & 0x24) == 0) {
      *(undefined2 *)(pdVar1 + 1) = 1;
    }
    else {
      FUN_14956b5ca(pdVar1);
    }
    if ((~(ulonglong)dVar2 & 0x7ff0000000000000) != 0 || ((ulonglong)dVar2 & 0xfffffffffffff) == 0)
    {
      *pdVar1 = dVar2;
      *(undefined2 *)(pdVar1 + 1) = 8;
    }
  }
  return;
}



// FUNCTION 1495d1c18 FUN_1495d1c18 body=39 status=ok
// SIG undefined FUN_1495d1c18(void)

void FUN_1495d1c18(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0x18);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 1;
  return;
}



// FUNCTION 1495d1c3f FUN_1495d1c3f body=126 status=ok
// SIG undefined FUN_1495d1c3f(void)

void FUN_1495d1c3f(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    plVar1 = (longlong *)FUN_1495596e1(param_1,0x18);
  }
  else {
    plVar1 = *(longlong **)(param_1[2] + 0x10);
  }
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 == 0) {
      lVar2 = FUN_149558f85(*param_3);
      plVar1[1] = lVar2;
      if (lVar2 < 1) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 1;
        FUN_14955916b(*param_1,"argument of ntile must be a positive integer",0xffffffff,1,
                      0xffffffffffffffff);
      }
    }
    *plVar1 = *plVar1 + 1;
  }
  return;
}



// FUNCTION 1495d1cbd FUN_1495d1cbd body=195 status=ok
// SIG undefined FUN_1495d1cbd(void)

void FUN_1495d1cbd(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(byte *)(param_1[2] + 9) & 0x20) == 0) {
    plVar3 = (longlong *)FUN_1495596e1(param_1,0x18);
  }
  else {
    plVar3 = *(longlong **)(param_1[2] + 0x10);
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar5 = plVar3[1];
  if (lVar5 < 1) {
    return;
  }
  iVar2 = (int)(*plVar3 / lVar5);
  if (iVar2 == 0) {
    lVar5 = plVar3[2];
  }
  else {
    lVar5 = *plVar3 - lVar5 * iVar2;
    lVar4 = lVar5 * (iVar2 + 1);
    lVar1 = plVar3[2];
    if (lVar1 < lVar4) {
      lVar5 = lVar1 / (longlong)(iVar2 + 1) + 1;
      param_1 = (longlong *)*param_1;
      if ((*(byte *)((longlong)param_1 + 9) & 0x24) != 0) goto LAB_1495d1d76;
      *param_1 = lVar5;
      goto LAB_1495d1d41;
    }
    lVar5 = lVar5 + (lVar1 - lVar4) / (longlong)iVar2;
  }
  lVar5 = lVar5 + 1;
  param_1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)param_1 + 9) & 0x24) != 0) {
LAB_1495d1d76:
    FUN_14956c854(param_1,lVar5);
    return;
  }
  *param_1 = lVar5;
LAB_1495d1d41:
  *(undefined2 *)(param_1 + 1) = 4;
  return;
}



// FUNCTION 1495d1d80 FUN_1495d1d80 body=39 status=ok
// SIG undefined FUN_1495d1d80(void)

void FUN_1495d1d80(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 9) & 0x20) == 0) {
    lVar1 = FUN_1495596e1(param_1,0x18);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 1;
  return;
}


